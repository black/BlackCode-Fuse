// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_I_O_STREAM_READER_H__
#define __APP_UNO_I_O_STREAM_READER_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.IO.TextReader.h>
#include <Uno.h>
namespace app { namespace Uno { namespace IO { struct Stream; } } }

namespace app {
namespace Uno {
namespace IO {

struct StreamReader;

struct StreamReader__uType : ::app::Uno::IO::TextReader__uType
{
};

StreamReader__uType* StreamReader__typeof();

void StreamReader___ObjInit_1(StreamReader* __this, ::app::Uno::IO::Stream* stream);
void StreamReader__Close(StreamReader* __this);
void StreamReader__Dispose_1(StreamReader* __this, bool disposing);
::app::Uno::IO::Stream* StreamReader__get_BaseStream(StreamReader* __this);
bool StreamReader__get_EndOfStream(StreamReader* __this);
StreamReader* StreamReader__New_1(::uStatic* __this, ::app::Uno::IO::Stream* stream);
int StreamReader__Peek(StreamReader* __this);
int StreamReader__Read(StreamReader* __this);
int StreamReader__Read_1(StreamReader* __this, ::uArray* buffer, int index, int count);
void StreamReader__ReadBuffer(StreamReader* __this);
::uString* StreamReader__ReadToEnd(StreamReader* __this);

struct StreamReader : ::app::Uno::IO::TextReader
{
    ::uStrong< ::app::Uno::IO::Stream*> _stream;
    ::uStrong< ::uArray*> _buffer;
    int _index;
    int _length;

    void _ObjInit_1(::app::Uno::IO::Stream* stream) { StreamReader___ObjInit_1(this, stream); }
    ::app::Uno::IO::Stream* BaseStream() { return StreamReader__get_BaseStream(this); }
    bool EndOfStream() { return StreamReader__get_EndOfStream(this); }
    void ReadBuffer() { StreamReader__ReadBuffer(this); }
};

}}}


#endif
