// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_WHILE_IN_EXIT_STATE_H__
#define __APP_FUSE_NAVIGATION_WHILE_IN_EXIT_STATE_H__

#include <app/Fuse.Navigation.WhileNavigationTrigger.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Navigation { struct NavigationArgs; } } }

namespace app {
namespace Fuse {
namespace Navigation {

struct WhileInExitState;

struct WhileInExitState__uType : ::app::Fuse::Navigation::WhileNavigationTrigger__uType
{
};

WhileInExitState__uType* WhileInExitState__typeof();

void WhileInExitState___ObjInit_4(WhileInExitState* __this);
void WhileInExitState__ForceUpdate(WhileInExitState* __this);
WhileInExitState* WhileInExitState__New_1(::uStatic* __this);
void WhileInExitState__OnNavigationStateChanged(WhileInExitState* __this, ::uObject* sender, ::app::Fuse::Navigation::NavigationArgs* state);

struct WhileInExitState : ::app::Fuse::Navigation::WhileNavigationTrigger
{
    void _ObjInit_4() { WhileInExitState___ObjInit_4(this); }
};

}}}


#endif
