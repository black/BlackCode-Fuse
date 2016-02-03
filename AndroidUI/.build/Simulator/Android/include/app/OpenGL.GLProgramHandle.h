// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\OpenGL\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OPEN_G_L_G_L_PROGRAM_HANDLE_H__
#define __APP_OPEN_G_L_G_L_PROGRAM_HANDLE_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace OpenGL {

extern ::uUInt GLProgramHandle__Zero;

struct GLProgramHandle__uType : ::uStructType
{
};

GLProgramHandle__uType* GLProgramHandle__typeof();

bool GLProgramHandle__Equals(::uUInt* __this, ::uObject* obj);
int GLProgramHandle__GetHashCode(::uUInt* __this);

struct GLProgramHandle
{
    static bool Equals(::uUInt __this, ::uObject* obj) { return GLProgramHandle__Equals(&__this, obj); }
    static int GetHashCode(::uUInt __this) { return GLProgramHandle__GetHashCode(&__this); }
};

}}


#endif
