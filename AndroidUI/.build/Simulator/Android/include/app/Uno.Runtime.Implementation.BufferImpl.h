// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_BUFFER_IMPL_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_BUFFER_IMPL_H__

#include <Uno.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {

struct BufferImpl__uType : ::uClassType
{
};

BufferImpl__uType* BufferImpl__typeof();

double BufferImpl__GetDouble(::uStatic* __this, ::uArray* buffer_, int offset_, bool littleEndian_);
float BufferImpl__GetFloat(::uStatic* __this, ::uArray* buffer_, int offset_, bool littleEndian_);
int BufferImpl__GetInt(::uStatic* __this, ::uArray* buffer_, int offset_, bool littleEndian_);
::uLong BufferImpl__GetLong(::uStatic* __this, ::uArray* buffer_, int offset_, bool littleEndian_);
::uShort BufferImpl__GetShort(::uStatic* __this, ::uArray* buffer_, int offset_, bool littleEndian_);
::uUInt BufferImpl__GetUInt(::uStatic* __this, ::uArray* buffer_, int offset_, bool littleEndian_);
::uULong BufferImpl__GetULong(::uStatic* __this, ::uArray* buffer_, int offset_, bool littleEndian_);
::uUShort BufferImpl__GetUShort(::uStatic* __this, ::uArray* buffer_, int offset_, bool littleEndian_);
void BufferImpl__SetDouble(::uStatic* __this, ::uArray* buffer_, int offset_, double value_, bool littleEndian_);
void BufferImpl__SetFloat(::uStatic* __this, ::uArray* buffer_, int offset_, float value_, bool littleEndian_);
void BufferImpl__SetInt(::uStatic* __this, ::uArray* buffer_, int offset_, int value_, bool littleEndian_);
void BufferImpl__SetLong(::uStatic* __this, ::uArray* buffer_, int offset_, ::uLong value_, bool littleEndian_);
void BufferImpl__SetShort(::uStatic* __this, ::uArray* buffer_, int offset_, ::uShort value_, bool littleEndian_);
void BufferImpl__SetUInt(::uStatic* __this, ::uArray* buffer_, int offset_, ::uUInt value_, bool littleEndian_);
void BufferImpl__SetULong(::uStatic* __this, ::uArray* buffer_, int offset_, ::uULong value_, bool littleEndian_);
void BufferImpl__SetUShort(::uStatic* __this, ::uArray* buffer_, int offset_, ::uUShort value_, bool littleEndian_);

}}}}


#endif
