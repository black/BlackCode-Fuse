// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OPEN_G_L_G_L_SHADER_HANDLE_H__
#define __APP_OPEN_G_L_G_L_SHADER_HANDLE_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace OpenGL {

extern ::uUInt GLShaderHandle__Zero;

struct GLShaderHandle__uType : ::uStructType
{
};

GLShaderHandle__uType* GLShaderHandle__typeof();

bool GLShaderHandle__Equals(::uUInt* __this, ::uObject* obj);
int GLShaderHandle__GetHashCode(::uUInt* __this);

struct GLShaderHandle
{
    static bool Equals(::uUInt __this, ::uObject* obj) { return GLShaderHandle__Equals(&__this, obj); }
    static int GetHashCode(::uUInt __this) { return GLShaderHandle__GetHashCode(&__this); }
};

}}


#endif
