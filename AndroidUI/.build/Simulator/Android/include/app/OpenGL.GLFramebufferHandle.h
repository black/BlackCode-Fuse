// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OPEN_G_L_G_L_FRAMEBUFFER_HANDLE_H__
#define __APP_OPEN_G_L_G_L_FRAMEBUFFER_HANDLE_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace OpenGL {

extern ::uUInt GLFramebufferHandle__Zero;

struct GLFramebufferHandle__uType : ::uStructType
{
};

GLFramebufferHandle__uType* GLFramebufferHandle__typeof();

bool GLFramebufferHandle__Equals(::uUInt* __this, ::uObject* obj);
int GLFramebufferHandle__GetHashCode(::uUInt* __this);
bool GLFramebufferHandle__op_Inequality(::uStatic* __this, ::uUInt left, ::uUInt right);

struct GLFramebufferHandle
{
    static bool Equals(::uUInt __this, ::uObject* obj) { return GLFramebufferHandle__Equals(&__this, obj); }
    static int GetHashCode(::uUInt __this) { return GLFramebufferHandle__GetHashCode(&__this); }
};

}}


#endif
