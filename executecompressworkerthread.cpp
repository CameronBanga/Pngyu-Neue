#include "executecompressworkerthread.h"

#include <QFile>
#include <QDebug>
#include <QMutexLocker>

#include "executecompressthread.h"
#include "pngyu_util.h"
#include "pngyu_execute_jpegoptim_command.h"

#include "pngyu_custom_tablewidget_item.h"

ExecuteCompressWorkerThread::ExecuteCompressWorkerThread(QObject *parent) :
  QThread(parent),
  m_queue_ptr( 0 ),
  m_mutex_ptr( 0 ),
  m_stop_request(false)
{
}

pngyu::CompressResult ExecuteCompressWorkerThread::execute_compress(
    const QString &src_path,
    const QString &dst_path,
    const QString &pngquant_path,
    const pngyu::PngquantOption &option,
    const bool overwrite_enable,
    const bool force_execute_if_negative )
{
  pngyu::CompressResult res;
  res.src_path = src_path;
  res.dst_path = dst_path;

  try
  {

    if( dst_path.isEmpty() )
    {
      throw tr( "Error: Output option is invalid" );
    }

    const bool dst_path_exists = QFile::exists( dst_path );
    if( dst_path_exists && ! overwrite_enable )
    {
      throw tr( "Error: \"%1\" is already exists" ).arg( dst_path );
    }

    const QByteArray &src_png_data = pngyu::util::png_file_to_bytearray( src_path );

    // init compress thred instance,
    // compress process will execute in other thread via this instance.
    ExecuteCompressThread compress_thread;
    compress_thread.set_executable_pngquant_path( pngquant_path );
    compress_thread.set_pngquant_option( option );

    { // exetute pngquant command
      compress_thread.clear_result();
      compress_thread.set_original_png_data( src_png_data );
      compress_thread.start();
      // waiting for compress finished
      compress_thread.wait();

      // compres result check
      if( ! compress_thread.is_compress_succeeded() )
      {
        throw compress_thread.error_string();
      }

    }

    const QByteArray &dst_png_data =
        (force_execute_if_negative || compress_thread.saved_size() >= 0 ) ?
          compress_thread.output_png_data() :
          compress_thread.original_png_data();

    if( dst_path_exists )
    {
      // remove old file
      if( ! QFile::remove( dst_path ) )
      {
        throw tr( "Error: Couldn't overwrite" );
      }
    }

    // copy result file to dst_path
    if( ! pngyu::util::write_png_data( dst_path, dst_png_data ) )
    {
       throw tr( "Error: Couldn't save output file" );
    }

    res.result = true;
    res.src_size = src_png_data.size();
    res.dst_size = dst_png_data.size();
  }
  catch( const QString &ex )
  {
    res.result = false;
    res.error_message = ex;
  }

  return res;
}

pngyu::CompressResult ExecuteCompressWorkerThread::execute_compress_generic(
    const pngyu::CompressQueueData &data )
{
  pngyu::CompressResult res;
  res.src_path = data.src_path;
  res.dst_path = data.dst_path;

  try
  {
    if( data.dst_path.isEmpty() )
    {
      throw tr( "Error: Output option is invalid" );
    }

    const bool dst_path_exists = QFile::exists( data.dst_path );
    if( dst_path_exists && ! data.overwrite_enabled )
    {
      throw tr( "Error: \"%1\" is already exists" ).arg( data.dst_path );
    }

    const QByteArray &src_data = pngyu::util::image_file_to_bytearray( data.src_path );
    QByteArray dst_data;

    if( data.image_format == pngyu::IMAGE_FORMAT_PNG )
    {
      qDebug() << "Processing PNG file:" << data.src_path;
      // PNG compression using pngquant
      ExecuteCompressThread compress_thread;
      compress_thread.set_executable_pngquant_path( data.pngquant_path );
      compress_thread.set_pngquant_option( data.pngquant_option );
      compress_thread.clear_result();
      compress_thread.set_original_png_data( src_data );
      compress_thread.start();
      compress_thread.wait();

      if( ! compress_thread.is_compress_succeeded() )
      {
        throw compress_thread.error_string();
      }

      dst_data = (data.force_execute_if_negative || compress_thread.saved_size() >= 0) ?
                  compress_thread.output_png_data() : compress_thread.original_png_data();
    }
    else if( data.image_format == pngyu::IMAGE_FORMAT_JPEG )
    {
      qDebug() << "Processing JPEG file:" << data.src_path;
      // JPEG compression using jpegoptim
      QPair<QByteArray,QString> jpeg_result = 
          pngyu::execute_jpeg_compress_with_data( data.src_path, data.jpeg_option );
      
      if( jpeg_result.first.isEmpty() )
      {
        qDebug() << "JPEG compression failed:" << jpeg_result.second;
        throw jpeg_result.second;
      }
      
      qDebug() << "JPEG compression completed, got" << jpeg_result.first.size() << "bytes";
      dst_data = jpeg_result.first;
    }
    else
    {
      throw tr( "Error: Unsupported image format" );
    }

    if( dst_path_exists )
    {
      if( ! QFile::remove( data.dst_path ) )
      {
        throw tr( "Error: Couldn't overwrite" );
      }
    }

    if( ! pngyu::util::write_image_data( data.dst_path, dst_data ) )
    {
       throw tr( "Error: Couldn't save output file" );
    }

    res.result = true;
    res.src_size = src_data.size();
    res.dst_size = dst_data.size();
  }
  catch( const QString &ex )
  {
    res.result = false;
    res.error_message = ex;
  }

  return res;
}

pngyu::CompressResult ExecuteCompressWorkerThread::execute_compress(
    const pngyu::CompressQueueData &data )
{
  return execute_compress_generic( data );
}

void ExecuteCompressWorkerThread::show_compress_result( QTableWidget *table_widget, const int row, const pngyu::CompressResult &result )
{
  if( ! table_widget )
  {
    return;
  }

  QTableWidgetItem * const  resultItem = new QTableWidgetItem();
  table_widget->setItem( row, pngyu::COLUMN_RESULT, resultItem );

  if( result.result )
  { // Succeed

    resultItem->setIcon( pngyu::util::success_icon() );

    const qint64 src_size = result.src_size;
    const qint64 dst_size = result.dst_size;

    pngyu::TableValueCompareItem * const origin_size_item =
        new pngyu::TableValueCompareItem(pngyu::util::size_to_string_kb( src_size ));
    origin_size_item->setData(1, static_cast<double>(src_size) );

    pngyu::TableValueCompareItem * const output_size_item =
        new pngyu::TableValueCompareItem(pngyu::util::size_to_string_kb( dst_size ));
    output_size_item->setData(1, static_cast<double>(dst_size) );

    const double saving_size = static_cast<double>( src_size - dst_size );
    const double saving_rate = saving_size / ( src_size );

    pngyu::TableValueCompareItem * const saving_size_item =
        new pngyu::TableValueCompareItem(pngyu::util::size_to_string_kb( saving_size ) );
    saving_size_item->setData(1, static_cast<double>(saving_size) );

    pngyu::TableValueCompareItem * const saving_rate_item =
        new pngyu::TableValueCompareItem(QString( "%1%" ).arg( static_cast<int>(saving_rate * 100) ) );
    saving_rate_item->setData(1, static_cast<double>(saving_rate) );


    table_widget->setItem( row, pngyu::COLUMN_ORIGINAL_SIZE,
                           origin_size_item );
    table_widget->setItem( row, pngyu::COLUMN_OUTPUT_SIZE,
                           output_size_item );
    table_widget->setItem( row, pngyu::COLUMN_SAVED_SIZE,
                           saving_size_item );
    table_widget->setItem( row, pngyu::COLUMN_SAVED_SIZE_RATE,
                           saving_rate_item );
  }
  else
  {
    resultItem->setText( result.error_message );
    resultItem->setToolTip( result.error_message );
    resultItem->setIcon( pngyu::util::failure_icon() );
  }

  table_widget->scrollToItem( resultItem );
}


void ExecuteCompressWorkerThread::set_queue_ptr( QQueue<pngyu::CompressQueueData> *queue_ptr, QMutex *mutex )
{
  m_queue_ptr = queue_ptr;
  m_mutex_ptr = mutex;
}

QList<pngyu::CompressResult> ExecuteCompressWorkerThread::compress_results() const
{
  return m_result_list;
}

void ExecuteCompressWorkerThread::clear_result()
{
  m_result_list.clear();
}

void ExecuteCompressWorkerThread::stop_request()
{
  m_stop_request = true;
}


void ExecuteCompressWorkerThread::run()
{
  if( ! m_queue_ptr )
  {
    return;
  }
  m_stop_request = false;

  while( ! m_stop_request && ! m_queue_ptr->isEmpty() )
  {
    pngyu::CompressQueueData data;
    {
      QMutexLocker locker( m_mutex_ptr );
      if( m_queue_ptr->isEmpty() )
      {
        break;
      }
      data = m_queue_ptr->dequeue();
    }
    const pngyu::CompressResult &res = execute_compress( data );

    show_compress_result( data.table_widget, data.table_row, res );
    m_result_list.push_back( res );
  }
}
