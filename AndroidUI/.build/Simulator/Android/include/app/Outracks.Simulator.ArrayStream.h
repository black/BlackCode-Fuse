// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_ARRAY_STREAM_H__
#define __APP_OUTRACKS_SIMULATOR_ARRAY_STREAM_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.IO.Stream.h>
#include <Uno.h>

namespace app {
namespace Outracks {
namespace Simulator {

struct ArrayStream;

struct ArrayStream__uType : ::app::Uno::IO::Stream__uType
{
};

ArrayStream__uType* ArrayStream__typeof();

void ArrayStream___ObjInit_1(ArrayStream* __this, ::uArray* buffer);
void ArrayStream__EnsureCapacity(ArrayStream* __this, int byteCount);
void ArrayStream__Flush(ArrayStream* __this);
bool ArrayStream__get_CanRead(ArrayStream* __this);
bool ArrayStream__get_CanSeek(ArrayStream* __this);
bool ArrayStream__get_CanTimeout(ArrayStream* __this);
bool ArrayStream__get_CanWrite(ArrayStream* __this);
int ArrayStream__get_Capacity(ArrayStream* __this);
::uLong ArrayStream__get_Length(ArrayStream* __this);
::uLong ArrayStream__get_Position(ArrayStream* __this);
::uArray* ArrayStream__GetBuffer(ArrayStream* __this);
ArrayStream* ArrayStream__New_1(::uStatic* __this, ::uArray* buffer);
int ArrayStream__Read(ArrayStream* __this, ::uArray* dst, int byteOffset, int byteCount);
void ArrayStream__ResizeTo(ArrayStream* __this, int newSize);
::uLong ArrayStream__Seek(ArrayStream* __this, ::uLong byteOffset, int origin);
void ArrayStream__set_Position(ArrayStream* __this, ::uLong value);
void ArrayStream__SetLength(ArrayStream* __this, ::uLong value);
void ArrayStream__Write(ArrayStream* __this, ::uArray* src, int byteOffset, int byteCount);

struct ArrayStream : ::app::Uno::IO::Stream
{
    ::uStrong< ::uArray*> _buffer;
    int _nextIncrease;
    ::uLong _length;
    ::uLong _Position;

    void _ObjInit_1(::uArray* buffer) { ArrayStream___ObjInit_1(this, buffer); }
    void EnsureCapacity(int byteCount) { ArrayStream__EnsureCapacity(this, byteCount); }
    int Capacity() { return ArrayStream__get_Capacity(this); }
    ::uArray* GetBuffer() { return ArrayStream__GetBuffer(this); }
    void ResizeTo(int newSize) { ArrayStream__ResizeTo(this, newSize); }
};

}}}


#endif
