// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_LINEAR_NAVIGATION_H__
#define __APP_FUSE_NAVIGATION_LINEAR_NAVIGATION_H__

#include <app/Fuse.Navigation.INavigation.h>
#include <app/Fuse.Navigation.StructuredNavigation.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Navigation {

struct LinearNavigation;

struct LinearNavigation__uType : ::app::Fuse::Navigation::StructuredNavigation__uType
{
};

LinearNavigation__uType* LinearNavigation__typeof();

void LinearNavigation___ObjInit_3(LinearNavigation* __this);
LinearNavigation* LinearNavigation__New_1(::uStatic* __this);

struct LinearNavigation : ::app::Fuse::Navigation::StructuredNavigation
{
    void _ObjInit_3() { LinearNavigation___ObjInit_3(this); }
};

}}}


#endif
