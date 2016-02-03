// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Runtime\Implementation\$.uno'.
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
void BufferImpl__GetDouble_fn(uArray* buffer_, int* offset_, bool* littleEndian_, double* __retval);
void BufferImpl__GetFloat_fn(uArray* buffer_, int* offset_, bool* littleEndian_, float* __retval);
void BufferImpl__GetInt_fn(uArray* buffer_, int* offset_, bool* littleEndian_, int* __retval);
void BufferImpl__GetShort_fn(uArray* buffer_, int* offset_, bool* littleEndian_, int16_t* __retval);
void BufferImpl__GetUInt_fn(uArray* buffer_, int* offset_, bool* littleEndian_, uint32_t* __retval);
void BufferImpl__GetUShort_fn(uArray* buffer_, int* offset_, bool* littleEndian_, uint16_t* __retval);
void BufferImpl__SetDouble_fn(uArray* buffer_, int* offset_, double* value_, bool* littleEndian_);
void BufferImpl__SetFloat_fn(uArray* buffer_, int* offset_, float* value_, bool* littleEndian_);
void BufferImpl__SetInt_fn(uArray* buffer_, int* offset_, int* value_, bool* littleEndian_);
void BufferImpl__SetShort_fn(uArray* buffer_, int* offset_, int16_t* value_, bool* littleEndian_);
void BufferImpl__SetUInt_fn(uArray* buffer_, int* offset_, uint32_t* value_, bool* littleEndian_);
void BufferImpl__SetUShort_fn(uArray* buffer_, int* offset_, uint16_t* value_, bool* littleEndian_);

struct BufferImpl : uObject
{
    static double GetDouble(uArray* buffer_, int offset_, bool littleEndian_);
    static float GetFloat(uArray* buffer_, int offset_, bool littleEndian_);
    static int GetInt(uArray* buffer_, int offset_, bool littleEndian_);
    static int16_t GetShort(uArray* buffer_, int offset_, bool littleEndian_);
    static uint32_t GetUInt(uArray* buffer_, int offset_, bool littleEndian_);
    static uint16_t GetUShort(uArray* buffer_, int offset_, bool littleEndian_);
    static void SetDouble(uArray* buffer_, int offset_, double value_, bool littleEndian_);
    static void SetFloat(uArray* buffer_, int offset_, float value_, bool littleEndian_);
    static void SetInt(uArray* buffer_, int offset_, int value_, bool littleEndian_);
    static void SetShort(uArray* buffer_, int offset_, int16_t value_, bool littleEndian_);
    static void SetUInt(uArray* buffer_, int offset_, uint32_t value_, bool littleEndian_);
    static void SetUShort(uArray* buffer_, int offset_, uint16_t value_, bool littleEndian_);
};
// }

}}}} // ::g::Uno::Runtime::Implementation
