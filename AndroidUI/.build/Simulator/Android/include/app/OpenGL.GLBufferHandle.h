// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OPEN_G_L_G_L_BUFFER_HANDLE_H__
#define __APP_OPEN_G_L_G_L_BUFFER_HANDLE_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace OpenGL {

extern ::uUInt GLBufferHandle__Zero;

struct GLBufferHandle__uType : ::uStructType
{
};

GLBufferHandle__uType* GLBufferHandle__typeof();

bool GLBufferHandle__Equals(::uUInt* __this, ::uObject* obj);
int GLBufferHandle__GetHashCode(::uUInt* __this);

struct GLBufferHandle
{
    static bool Equals(::uUInt __this, ::uObject* obj) { return GLBufferHandle__Equals(&__this, obj); }
    static int GetHashCode(::uUInt __this) { return GLBufferHandle__GetHashCode(&__this); }
};

}}


#endif
