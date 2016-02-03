// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ELEMENTS_NO_IMPLICIT_MAX_BOX_SIZING_H__
#define __APP_FUSE_ELEMENTS_NO_IMPLICIT_MAX_BOX_SIZING_H__

#include <app/Fuse.Elements.StandardBoxSizing.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Elements {

struct NoImplicitMaxBoxSizing;

extern ::uStaticStrong< NoImplicitMaxBoxSizing*> NoImplicitMaxBoxSizing__Singleton_1;

struct NoImplicitMaxBoxSizing__uType : ::app::Fuse::Elements::StandardBoxSizing__uType
{
};

NoImplicitMaxBoxSizing__uType* NoImplicitMaxBoxSizing__typeof();

void NoImplicitMaxBoxSizing___ObjInit_2(NoImplicitMaxBoxSizing* __this);
void NoImplicitMaxBoxSizing___TypeInit_1(::uStatic* __this);
NoImplicitMaxBoxSizing* NoImplicitMaxBoxSizing__New_2(::uStatic* __this);

struct NoImplicitMaxBoxSizing : ::app::Fuse::Elements::StandardBoxSizing
{
    void _ObjInit_2() { NoImplicitMaxBoxSizing___ObjInit_2(this); }
};

}}}


#endif
