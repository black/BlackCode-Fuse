// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_NAVIGATE_TO_H__
#define __APP_FUSE_NAVIGATION_NAVIGATE_TO_H__

#include <app/Fuse.Navigation.NavigationTriggerAction.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Navigation {

struct NavigateTo;

struct NavigateTo__uType : ::app::Fuse::Navigation::NavigationTriggerAction__uType
{
};

NavigateTo__uType* NavigateTo__typeof();

void NavigateTo___ObjInit_2(NavigateTo* __this);
bool NavigateTo__get_Bypass(NavigateTo* __this);
bool NavigateTo__get_ClearForwardHistory(NavigateTo* __this);
::app::Fuse::Node* NavigateTo__get_Target(NavigateTo* __this);
NavigateTo* NavigateTo__New_1(::uStatic* __this);
void NavigateTo__Perform_1(NavigateTo* __this, ::uObject* ctx, ::app::Fuse::Node* n);
void NavigateTo__set_Bypass(NavigateTo* __this, bool value);
void NavigateTo__set_ClearForwardHistory(NavigateTo* __this, bool value);
void NavigateTo__set_Target(NavigateTo* __this, ::app::Fuse::Node* value);

struct NavigateTo : ::app::Fuse::Navigation::NavigationTriggerAction
{
    ::uStrong< ::app::Fuse::Node*> _Target;
    bool _Bypass;
    bool _ClearForwardHistory;

    void _ObjInit_2() { NavigateTo___ObjInit_2(this); }
    bool Bypass() { return NavigateTo__get_Bypass(this); }
    bool ClearForwardHistory() { return NavigateTo__get_ClearForwardHistory(this); }
    ::app::Fuse::Node* Target() { return NavigateTo__get_Target(this); }
    void Bypass(bool value) { NavigateTo__set_Bypass(this, value); }
    void ClearForwardHistory(bool value) { NavigateTo__set_ClearForwardHistory(this, value); }
    void Target(::app::Fuse::Node* value) { NavigateTo__set_Target(this, value); }
};

}}}


#endif
