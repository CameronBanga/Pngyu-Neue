#ifndef PNGYU_JPEG_OPTION_H
#define PNGYU_JPEG_OPTION_H

#include <QString>

namespace pngyu
{

class JpegOption
{
public:

  JpegOption() :
    m_quality(85),
    m_progressive(false),
    m_optimize_huffman(true),
    m_strip_metadata(true)
  {}

  ~JpegOption(){}

  void set_quality( const int quality )
  {
    m_quality = qBound(0, quality, 100);
  }

  int get_quality() const
  {
    return m_quality;
  }

  void set_progressive( const bool progressive )
  {
    m_progressive = progressive;
  }

  bool get_progressive() const
  {
    return m_progressive;
  }

  void set_optimize_huffman( const bool optimize )
  {
    m_optimize_huffman = optimize;
  }

  bool get_optimize_huffman() const
  {
    return m_optimize_huffman;
  }

  void set_strip_metadata( const bool strip )
  {
    m_strip_metadata = strip;
  }

  bool get_strip_metadata() const
  {
    return m_strip_metadata;
  }

  QString to_jpegoptim_command_option() const
  {
    QString command;

    // Quality setting
    command += QString("--max=%1 ").arg(m_quality);

    // Progressive JPEG
    if( m_progressive )
    {
      command += "--all-progressive ";
    }
    else
    {
      command += "--all-normal ";
    }

    // Strip metadata
    if( m_strip_metadata )
    {
      command += "--strip-all ";
    }

    // Always overwrite for consistency with PNG behavior
    command += "--overwrite ";

    return command;
  }

  QString make_jpegoptim_command(const QString &src_file_path) const
  {
    return to_jpegoptim_command_option() + "\"" + src_file_path + "\"";
  }

  friend inline bool operator==( const pngyu::JpegOption &o1, const pngyu::JpegOption &o2 );
  friend inline bool operator!=( const pngyu::JpegOption &o1, const pngyu::JpegOption &o2 );

private:
  int m_quality;
  bool m_progressive;
  bool m_optimize_huffman;
  bool m_strip_metadata;
};

inline bool operator!=( const pngyu::JpegOption &o1, const pngyu::JpegOption &o2 )
{
  return
      o1.m_quality != o2.m_quality ||
      o1.m_progressive != o2.m_progressive ||
      o1.m_optimize_huffman != o2.m_optimize_huffman ||
      o1.m_strip_metadata != o2.m_strip_metadata;
}

inline bool operator==( const pngyu::JpegOption &o1, const pngyu::JpegOption &o2 )
{
  return !( o1 != o2 );
}

} // namespace pngyu

#endif // PNGYU_JPEG_OPTION_H