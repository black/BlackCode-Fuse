// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_PAGE_CONTROL_H__
#define __APP_FUSE_CONTROLS_PAGE_CONTROL_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.Navigation.INavigation.h>
#include <app/Fuse.Navigation.INavigationPanel.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Fuse.Triggers.IAddRemove__Fuse_Node.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Navigation { struct LinearNavigation; } } }
namespace app { namespace Fuse { namespace Navigation { struct StructuredNavigation; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Controls {

struct PageControl;

struct PageControl__uType : ::app::Fuse::Controls::Panel__uType
{
    ::app::Fuse::Navigation::INavigation __interface_8;
};

PageControl__uType* PageControl__typeof();

void PageControl___ObjInit_4(PageControl* __this);
void PageControl__add_HistoryChanged(PageControl* __this, ::uDelegate* value);
void PageControl__add_Navigated(PageControl* __this, ::uDelegate* value);
void PageControl__add_PageCountChanged(PageControl* __this, ::uDelegate* value);
void PageControl__add_PageProgressChanged(PageControl* __this, ::uDelegate* value);
int PageControl__Fuse_Navigation_INavigation_get_PageCount(PageControl* __this);
double PageControl__Fuse_Navigation_INavigation_get_PageProgress(PageControl* __this);
::app::Fuse::Node* PageControl__Fuse_Navigation_INavigation_GetPage(PageControl* __this, int index);
::app::Fuse::Node* PageControl__get_Active(PageControl* __this);
bool PageControl__get_CanGoBack(PageControl* __this);
bool PageControl__get_CanGoForward(PageControl* __this);
::app::Fuse::Navigation::StructuredNavigation* PageControl__get_Navigation(PageControl* __this);
void PageControl__GoBack(PageControl* __this);
void PageControl__GoForward(PageControl* __this);
void PageControl__Goto(PageControl* __this, ::app::Fuse::Node* node, int mode);
void PageControl__InitializeUX(PageControl* __this);
PageControl* PageControl__New_2(::uStatic* __this);
void PageControl__remove_HistoryChanged(PageControl* __this, ::uDelegate* value);
void PageControl__remove_Navigated(PageControl* __this, ::uDelegate* value);
void PageControl__remove_PageCountChanged(PageControl* __this, ::uDelegate* value);
void PageControl__remove_PageProgressChanged(PageControl* __this, ::uDelegate* value);
void PageControl__set_Active(PageControl* __this, ::app::Fuse::Node* value);
void PageControl__Toggle(PageControl* __this, ::app::Fuse::Node* node);

struct PageControl : ::app::Fuse::Controls::Panel
{
    ::uStrong< ::app::Fuse::Navigation::LinearNavigation*> TheNavigation;

    void _ObjInit_4() { PageControl___ObjInit_4(this); }
    void add_HistoryChanged(::uDelegate* value) { PageControl__add_HistoryChanged(this, value); }
    void add_Navigated(::uDelegate* value) { PageControl__add_Navigated(this, value); }
    void add_PageCountChanged(::uDelegate* value) { PageControl__add_PageCountChanged(this, value); }
    void add_PageProgressChanged(::uDelegate* value) { PageControl__add_PageProgressChanged(this, value); }
    ::app::Fuse::Node* Active() { return PageControl__get_Active(this); }
    bool CanGoBack() { return PageControl__get_CanGoBack(this); }
    bool CanGoForward() { return PageControl__get_CanGoForward(this); }
    ::app::Fuse::Navigation::StructuredNavigation* Navigation() { return PageControl__get_Navigation(this); }
    void GoBack() { PageControl__GoBack(this); }
    void GoForward() { PageControl__GoForward(this); }
    void Goto(::app::Fuse::Node* node, int mode) { PageControl__Goto(this, node, mode); }
    void InitializeUX() { PageControl__InitializeUX(this); }
    void remove_HistoryChanged(::uDelegate* value) { PageControl__remove_HistoryChanged(this, value); }
    void remove_Navigated(::uDelegate* value) { PageControl__remove_Navigated(this, value); }
    void remove_PageCountChanged(::uDelegate* value) { PageControl__remove_PageCountChanged(this, value); }
    void remove_PageProgressChanged(::uDelegate* value) { PageControl__remove_PageProgressChanged(this, value); }
    void Active(::app::Fuse::Node* value) { PageControl__set_Active(this, value); }
    void Toggle(::app::Fuse::Node* node) { PageControl__Toggle(this, node); }
};

}}}


#endif
