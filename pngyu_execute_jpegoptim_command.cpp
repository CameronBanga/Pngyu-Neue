#include "pngyu_execute_jpegoptim_command.h"

#include <QProcess>
#include <QDir>
#include <QStandardPaths>
#include <QDebug>
#include <QTemporaryFile>

namespace pngyu
{

QString jpegoptim_version( const QString &jpegoptim_path )
{
  QProcess process;
  process.start( jpegoptim_path, QStringList() << "--version" );
  process.waitForFinished();

  if( process.exitCode() == 0 )
  {
    return QString::fromUtf8( process.readAllStandardOutput() );
  }
  return QString();
}

bool is_executable_jpegoptim( const QFileInfo jpegoptim_path )
{
  if( ! jpegoptim_path.exists() )
  {
    return false;
  }
  if( ! jpegoptim_path.isExecutable() )
  {
    return false;
  }

  return ! jpegoptim_version( jpegoptim_path.absoluteFilePath() ).isEmpty();
}

QStringList find_executable_jpegoptim()
{
  QStringList result;
  QStringList search_dirs;
  
  // Add common installation paths
  search_dirs << "/usr/bin"
              << "/usr/local/bin" 
              << "/usr/sbin"
              << "/opt/homebrew/bin"
              << "/opt/local/bin"
              << QStandardPaths::findExecutable("jpegoptim");

  search_dirs.removeDuplicates();
  search_dirs.removeAll(QString());

  foreach( const QString &dir_path, search_dirs )
  {
    QDir dir( dir_path );
    if( ! dir.exists() )
    {
      continue;
    }

    const QString jpegoptim_path = dir.absoluteFilePath( "jpegoptim" );
    const QFileInfo jpegoptim_file_info( jpegoptim_path );
    if( is_executable_jpegoptim( jpegoptim_file_info ) )
    {
      if( ! result.contains( jpegoptim_path ) )
      {
        result.push_back( jpegoptim_path );
      }
    }
  }

  return result;
}

QPair<bool,QString> execute_jpeg_compress( const QString &jpegoptim_command )
{
  QProcess process;
  process.start( jpegoptim_command );
  process.waitForFinished( 30000 ); // 30 second timeout

  const bool succeed = ( process.exitCode() == 0 );
  const QString error_string = QString::fromUtf8( process.readAllStandardError() );

  return QPair<bool,QString>( succeed, error_string );
}

QPair<QByteArray,QString> execute_jpeg_compress_with_data(
    const QString &src_file_path,
    const JpegOption &option )
{
  // Create temporary copy since jpegoptim modifies files in-place
  QTemporaryFile temp_file;
  temp_file.setFileTemplate(QDir::tempPath() + "/pngyu_jpeg_XXXXXX.jpg");
  
  if (!temp_file.open()) {
    return QPair<QByteArray,QString>(QByteArray(), "Could not create temporary file");
  }

  // Copy original file to temporary location
  QFile source(src_file_path);
  if (!source.open(QIODevice::ReadOnly)) {
    return QPair<QByteArray,QString>(QByteArray(), "Could not read source file");
  }

  temp_file.write(source.readAll());
  temp_file.close();
  source.close();

  // Find jpegoptim executable
  QStringList jpegoptim_paths = find_executable_jpegoptim();
  if (jpegoptim_paths.isEmpty()) {
    return QPair<QByteArray,QString>(QByteArray(), "jpegoptim not found. Please install jpegoptim.");
  }

  // Execute jpegoptim on temporary file
  const QString jpegoptim_command = jpegoptim_paths.first() + " " + option.make_jpegoptim_command(temp_file.fileName());
  
  QPair<bool,QString> result = execute_jpeg_compress(jpegoptim_command);
  
  if (!result.first) {
    return QPair<QByteArray,QString>(QByteArray(), result.second);
  }

  // Read compressed data from temporary file
  QFile compressed_file(temp_file.fileName());
  if (!compressed_file.open(QIODevice::ReadOnly)) {
    return QPair<QByteArray,QString>(QByteArray(), "Could not read compressed file");
  }

  QByteArray compressed_data = compressed_file.readAll();
  return QPair<QByteArray,QString>(compressed_data, QString());
}

} // namespace pngyu