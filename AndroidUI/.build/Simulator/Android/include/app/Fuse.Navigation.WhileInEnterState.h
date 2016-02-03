// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_WHILE_IN_ENTER_STATE_H__
#define __APP_FUSE_NAVIGATION_WHILE_IN_ENTER_STATE_H__

#include <app/Fuse.Navigation.WhileNavigationTrigger.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Navigation { struct NavigationArgs; } } }

namespace app {
namespace Fuse {
namespace Navigation {

struct WhileInEnterState;

struct WhileInEnterState__uType : ::app::Fuse::Navigation::WhileNavigationTrigger__uType
{
};

WhileInEnterState__uType* WhileInEnterState__typeof();

void WhileInEnterState___ObjInit_4(WhileInEnterState* __this);
void WhileInEnterState__ForceUpdate(WhileInEnterState* __this);
WhileInEnterState* WhileInEnterState__New_1(::uStatic* __this);
void WhileInEnterState__OnNavigationStateChanged(WhileInEnterState* __this, ::uObject* sender, ::app::Fuse::Navigation::NavigationArgs* state);

struct WhileInEnterState : ::app::Fuse::Navigation::WhileNavigationTrigger
{
    void _ObjInit_4() { WhileInEnterState___ObjInit_4(this); }
};

}}}


#endif
