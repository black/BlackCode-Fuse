// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.20.1\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace OpenGL{

// public extern struct GLShaderHandle :814
// {
uStructType* GLShaderHandle_typeof();
void GLShaderHandle__Equals_fn(uint32_t* __this, uType* __type, uObject* obj, bool* __retval);
void GLShaderHandle__GetHashCode_fn(uint32_t* __this, uType* __type, int* __retval);

struct GLShaderHandle
{
    static uint32_t Zero_;
    static uint32_t& Zero() { return Zero_; }

    static bool Equals(uint32_t __this, uType* __type, uObject* obj) { bool __retval; return GLShaderHandle__Equals_fn(&__this, __type, obj, &__retval), __retval; }
    static int GetHashCode(uint32_t __this, uType* __type) { int __retval; return GLShaderHandle__GetHashCode_fn(&__this, __type, &__retval), __retval; }
};
// }

}} // ::g::OpenGL
