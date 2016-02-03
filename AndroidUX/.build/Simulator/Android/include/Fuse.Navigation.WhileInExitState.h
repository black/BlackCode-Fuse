// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Navigation.WhileNavigationTrigger.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigationArgs;}}}
namespace g{namespace Fuse{namespace Navigation{struct WhileInExitState;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class WhileInExitState :2287
// {
::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileInExitState_typeof();
void WhileInExitState__ctor_4_fn(WhileInExitState* __this);
void WhileInExitState__ForceUpdate_fn(WhileInExitState* __this);
void WhileInExitState__New1_fn(WhileInExitState** __retval);
void WhileInExitState__OnNavigationStateChanged_fn(WhileInExitState* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state);

struct WhileInExitState : ::g::Fuse::Navigation::WhileNavigationTrigger
{
    void ctor_4();
    static WhileInExitState* New1();
};
// }

}}} // ::g::Fuse::Navigation
