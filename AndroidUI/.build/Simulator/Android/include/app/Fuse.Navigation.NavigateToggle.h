// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_NAVIGATE_TOGGLE_H__
#define __APP_FUSE_NAVIGATION_NAVIGATE_TOGGLE_H__

#include <app/Fuse.Navigation.NavigationTriggerAction.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Navigation {

struct NavigateToggle;

struct NavigateToggle__uType : ::app::Fuse::Navigation::NavigationTriggerAction__uType
{
};

NavigateToggle__uType* NavigateToggle__typeof();

void NavigateToggle___ObjInit_2(NavigateToggle* __this);
::app::Fuse::Node* NavigateToggle__get_Target(NavigateToggle* __this);
NavigateToggle* NavigateToggle__New_1(::uStatic* __this);
void NavigateToggle__Perform_1(NavigateToggle* __this, ::uObject* ctx, ::app::Fuse::Node* n);
void NavigateToggle__set_Target(NavigateToggle* __this, ::app::Fuse::Node* value);

struct NavigateToggle : ::app::Fuse::Navigation::NavigationTriggerAction
{
    ::uStrong< ::app::Fuse::Node*> _Target;

    void _ObjInit_2() { NavigateToggle___ObjInit_2(this); }
    ::app::Fuse::Node* Target() { return NavigateToggle__get_Target(this); }
    void Target(::app::Fuse::Node* value) { NavigateToggle__set_Target(this, value); }
};

}}}


#endif
