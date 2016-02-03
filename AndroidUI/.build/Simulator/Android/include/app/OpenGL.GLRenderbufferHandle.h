// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OPEN_G_L_G_L_RENDERBUFFER_HANDLE_H__
#define __APP_OPEN_G_L_G_L_RENDERBUFFER_HANDLE_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace OpenGL {

extern ::uUInt GLRenderbufferHandle__Zero;

struct GLRenderbufferHandle__uType : ::uStructType
{
};

GLRenderbufferHandle__uType* GLRenderbufferHandle__typeof();

bool GLRenderbufferHandle__Equals(::uUInt* __this, ::uObject* obj);
int GLRenderbufferHandle__GetHashCode(::uUInt* __this);
bool GLRenderbufferHandle__op_Inequality(::uStatic* __this, ::uUInt left, ::uUInt right);

struct GLRenderbufferHandle
{
    static bool Equals(::uUInt __this, ::uObject* obj) { return GLRenderbufferHandle__Equals(&__this, obj); }
    static int GetHashCode(::uUInt __this) { return GLRenderbufferHandle__GetHashCode(&__this); }
};

}}


#endif
