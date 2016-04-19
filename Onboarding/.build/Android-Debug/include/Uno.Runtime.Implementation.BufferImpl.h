// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\Uno\Runtime\Implementation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Runtime{namespace Implementation{struct BufferImpl;}}}}

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{

// internal static class BufferImpl :163
// {
uClassType* BufferImpl_typeof();
void BufferImpl__GetInt_fn(uArray* buffer_, int* offset_, bool* littleEndian_, int* __retval);
void BufferImpl__SetFloat_fn(uArray* buffer_, int* offset_, float* value_, bool* littleEndian_);
void BufferImpl__SetInt_fn(uArray* buffer_, int* offset_, int* value_, bool* littleEndian_);
void BufferImpl__SetUShort_fn(uArray* buffer_, int* offset_, uint16_t* value_, bool* littleEndian_);

struct BufferImpl : uObject
{
    static int GetInt(uArray* buffer_, int offset_, bool littleEndian_);
    static void SetFloat(uArray* buffer_, int offset_, float value_, bool littleEndian_);
    static void SetInt(uArray* buffer_, int offset_, int value_, bool littleEndian_);
    static void SetUShort(uArray* buffer_, int offset_, uint16_t value_, bool littleEndian_);
};
// }

}}}} // ::g::Uno::Runtime::Implementation
