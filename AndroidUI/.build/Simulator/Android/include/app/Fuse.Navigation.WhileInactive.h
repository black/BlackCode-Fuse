// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_WHILE_INACTIVE_H__
#define __APP_FUSE_NAVIGATION_WHILE_INACTIVE_H__

#include <app/Fuse.Navigation.WhileNavigationTrigger.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Navigation { struct NavigationArgs; } } }

namespace app {
namespace Fuse {
namespace Navigation {

struct WhileInactive;

struct WhileInactive__uType : ::app::Fuse::Navigation::WhileNavigationTrigger__uType
{
};

WhileInactive__uType* WhileInactive__typeof();

void WhileInactive___ObjInit_4(WhileInactive* __this);
void WhileInactive__ForceUpdate(WhileInactive* __this);
WhileInactive* WhileInactive__New_1(::uStatic* __this);
void WhileInactive__OnNavigationStateChanged(WhileInactive* __this, ::uObject* sender, ::app::Fuse::Navigation::NavigationArgs* state);

struct WhileInactive : ::app::Fuse::Navigation::WhileNavigationTrigger
{
    void _ObjInit_4() { WhileInactive___ObjInit_4(this); }
};

}}}


#endif
