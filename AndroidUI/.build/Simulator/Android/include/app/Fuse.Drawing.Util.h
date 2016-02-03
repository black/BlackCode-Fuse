// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_UTIL_H__
#define __APP_FUSE_DRAWING_UTIL_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Drawing {

struct Util;

struct Util__uType : ::uClassType
{
};

Util__uType* Util__typeof();

void Util___ObjInit(Util* __this);
Util* Util__New_1(::uStatic* __this);
void Util__ValidateFloat(::uStatic* __this, float v);
void Util__ValidateFloat2(::uStatic* __this, ::app::Uno::Float2 v);

struct Util : ::uObject
{
    void _ObjInit() { Util___ObjInit(this); }
};

}}}


#endif
