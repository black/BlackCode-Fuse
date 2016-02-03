// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Navigation.NavigationTriggerAction.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigateToggle;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class NavigateToggle :2050
// {
::g::Fuse::Navigation::NavigationTriggerAction_type* NavigateToggle_typeof();
void NavigateToggle__ctor_2_fn(NavigateToggle* __this);
void NavigateToggle__New1_fn(NavigateToggle** __retval);
void NavigateToggle__Perform1_fn(NavigateToggle* __this, uObject* ctx, ::g::Fuse::Node* n);
void NavigateToggle__get_Target_fn(NavigateToggle* __this, ::g::Fuse::Node** __retval);
void NavigateToggle__set_Target_fn(NavigateToggle* __this, ::g::Fuse::Node* value);

struct NavigateToggle : ::g::Fuse::Navigation::NavigationTriggerAction
{
    uStrong< ::g::Fuse::Node*> _Target;

    void ctor_2();
    ::g::Fuse::Node* Target();
    void Target(::g::Fuse::Node* value);
    static NavigateToggle* New1();
};
// }

}}} // ::g::Fuse::Navigation
