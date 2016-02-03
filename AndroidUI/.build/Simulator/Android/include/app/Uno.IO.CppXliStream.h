// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_I_O_CPP_XLI_STREAM_H__
#define __APP_UNO_I_O_CPP_XLI_STREAM_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.IO.Stream.h>
#include <Uno.h>
namespace Xli { class Stream; }

namespace app {
namespace Uno {
namespace IO {

struct CppXliStream;

struct CppXliStream__uType : ::app::Uno::IO::Stream__uType
{
};

CppXliStream__uType* CppXliStream__typeof();

void CppXliStream___ObjInit_1(CppXliStream* __this, ::Xli::Stream* handle);
void CppXliStream__Dispose_1(CppXliStream* __this, bool disposing_);
void CppXliStream__Flush(CppXliStream* __this);
bool CppXliStream__get_CanRead(CppXliStream* __this);
bool CppXliStream__get_CanSeek(CppXliStream* __this);
bool CppXliStream__get_CanWrite(CppXliStream* __this);
::uLong CppXliStream__get_Length(CppXliStream* __this);
::uLong CppXliStream__get_Position(CppXliStream* __this);
CppXliStream* CppXliStream__New_1(::uStatic* __this, ::Xli::Stream* handle);
int CppXliStream__Read(CppXliStream* __this, ::uArray* dst_, int byteOffset_, int byteCount_);
::uLong CppXliStream__Seek(CppXliStream* __this, ::uLong byteOffset_, int origin_);
void CppXliStream__set_Position(CppXliStream* __this, ::uLong value_);
void CppXliStream__SetLength(CppXliStream* __this, ::uLong value);
void CppXliStream__Write(CppXliStream* __this, ::uArray* src_, int byteOffset_, int byteCount_);

struct CppXliStream : ::app::Uno::IO::Stream
{
    ::Xli::Stream* _handle;
    ::uLong _Position;

    void _ObjInit_1(::Xli::Stream* handle) { CppXliStream___ObjInit_1(this, handle); }
};

}}}


#endif
