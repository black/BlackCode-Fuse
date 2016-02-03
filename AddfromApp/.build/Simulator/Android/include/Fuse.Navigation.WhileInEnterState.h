// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Navigation.WhileNavigationTrigger.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigationArgs;}}}
namespace g{namespace Fuse{namespace Navigation{struct WhileInEnterState;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class WhileInEnterState :2304
// {
::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileInEnterState_typeof();
void WhileInEnterState__ctor_4_fn(WhileInEnterState* __this);
void WhileInEnterState__ForceUpdate_fn(WhileInEnterState* __this);
void WhileInEnterState__New1_fn(WhileInEnterState** __retval);
void WhileInEnterState__OnNavigationStateChanged_fn(WhileInEnterState* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state);

struct WhileInEnterState : ::g::Fuse::Navigation::WhileNavigationTrigger
{
    void ctor_4();
    static WhileInEnterState* New1();
};
// }

}}} // ::g::Fuse::Navigation
