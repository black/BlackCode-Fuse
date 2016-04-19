// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\IO\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.IO.Stream.h>
namespace g{namespace Uno{namespace IO{struct CppXliStream;}}}
namespace Xli { class Stream; }

namespace g{
namespace Uno{
namespace IO{

// internal sealed extern class CppXliStream :612
// {
::g::Uno::IO::Stream_type* CppXliStream_typeof();
void CppXliStream__ctor_1_fn(CppXliStream* __this, ::Xli::Stream** handle);
void CppXliStream__Dispose1_fn(CppXliStream* __this, bool* disposing_);
void CppXliStream__Flush_fn(CppXliStream* __this);
void CppXliStream__get_Length_fn(CppXliStream* __this, int64_t* __retval);
void CppXliStream__New1_fn(::Xli::Stream** handle, CppXliStream** __retval);
void CppXliStream__get_Position_fn(CppXliStream* __this, int64_t* __retval);
void CppXliStream__set_Position_fn(CppXliStream* __this, int64_t* value_);
void CppXliStream__Read_fn(CppXliStream* __this, uArray* dst_, int* byteOffset_, int* byteCount_, int* __retval);
void CppXliStream__Write_fn(CppXliStream* __this, uArray* src_, int* byteOffset_, int* byteCount_);

struct CppXliStream : ::g::Uno::IO::Stream
{
    ::Xli::Stream* _handle;
    int64_t _Position;

    void ctor_1(::Xli::Stream* handle);
    static CppXliStream* New1(::Xli::Stream* handle);
};
// }

}}} // ::g::Uno::IO
