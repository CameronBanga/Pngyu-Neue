#ifndef PNGYU_EXECUTE_JPEGOPTIM_COMMAND_H
#define PNGYU_EXECUTE_JPEGOPTIM_COMMAND_H

#include <QString>
#include <QByteArray>
#include <QPair>
#include <QFileInfo>

#include "pngyu_jpeg_option.h"

namespace pngyu
{

QString jpegoptim_version( const QString &jpegoptim_path );

bool is_executable_jpegoptim( const QFileInfo jpegoptim_path );

QStringList find_executable_jpegoptim();

// execute jpegoptim command
// returns <succeed,error_string>
QPair<bool,QString> execute_jpeg_compress(
    const QString &jpegoptim_command
    );

// execute jpegoptim command and return compressed data
// returns <dst_jpeg_data,error_string>
// if dst_jpeg_data is null, this function has failed
QPair<QByteArray,QString> execute_jpeg_compress_with_data(
    const QString &src_file_path,
    const JpegOption &option
    );

}

#endif // PNGYU_EXECUTE_JPEGOPTIM_COMMAND_H