// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_NAVIGATION_H__
#define __APP_FUSE_NAVIGATION_NAVIGATION_H__

#include <app/Fuse.Behavior.h>
#include <app/Fuse.Navigation.INavigation.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Navigation { struct NavigationArgs; } } }
namespace app { namespace Fuse { namespace Navigation { struct NavigationStateArgs; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Node; } } }

namespace app {
namespace Fuse {
namespace Navigation {

struct Navigation;

extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> Navigation___contextHandle;
extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> Navigation___navigationHandler;
extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> Navigation___navigationProgress;
extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> Navigation___navigationStateHandler;

struct Navigation__uType : ::app::Fuse::Behavior__uType
{
    ::app::Fuse::Navigation::INavigation __interface_0;
    ::app::Fuse::Node*(*__fp_get_Active)(Navigation*);
    bool(*__fp_get_CanGoBack)(Navigation*);
    bool(*__fp_get_CanGoForward)(Navigation*);
    double(*__fp_get_PageProgress)(Navigation*);
    void(*__fp_GoBack)(Navigation*);
    void(*__fp_GoForward)(Navigation*);
    void(*__fp_Goto)(Navigation*, ::app::Fuse::Node*, int);
    void(*__fp_OnChildAdded)(Navigation*, ::uObject*, ::app::Fuse::Node*);
    void(*__fp_OnChildRemoved)(Navigation*, ::uObject*, ::app::Fuse::Node*);
    void(*__fp_set_Active)(Navigation*, ::app::Fuse::Node*);
    void(*__fp_Toggle)(Navigation*, ::app::Fuse::Node*);
};

Navigation__uType* Navigation__typeof();

void Navigation___ObjInit_1(Navigation* __this);
void Navigation___TypeInit(::uStatic* __this);
void Navigation__add_HistoryChanged(Navigation* __this, ::uDelegate* value);
void Navigation__add_Navigated(Navigation* __this, ::uDelegate* value);
void Navigation__add_PageCountChanged(Navigation* __this, ::uDelegate* value);
void Navigation__add_PageProgressChanged(Navigation* __this, ::uDelegate* value);
void Navigation__AddHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler);
void Navigation__AddStateHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler);
void Navigation__ClearHistory(Navigation* __this);
bool Navigation__get_CanGoBack(Navigation* __this);
bool Navigation__get_CanGoForward(Navigation* __this);
bool Navigation__get_HasPages(Navigation* __this);
::uObject* Navigation__get_Owner(Navigation* __this);
int Navigation__get_PageCount(Navigation* __this);
::uObject* Navigation__GetLocalNavigation(::uStatic* __this, ::app::Fuse::Node* node);
::uObject* Navigation__GetNavigationNavigation(::uStatic* __this, ::app::Fuse::Node* n);
::app::Fuse::Node* Navigation__GetPage(Navigation* __this, int index);
int Navigation__GetPageIndex(Navigation* __this, ::app::Fuse::Node* child);
void Navigation__GetPagesFromOwner(Navigation* __this);
double Navigation__GetProgress(::uStatic* __this, ::app::Fuse::Node* n);
void Navigation__GoBack(Navigation* __this);
void Navigation__GoForward(Navigation* __this);
void Navigation__Invoke(::uStatic* __this, ::uObject* handler, ::uArray* state);
void Navigation__InvokeState(::uStatic* __this, ::uObject* handler, ::uArray* state);
void Navigation__NotifyNavigation(::uStatic* __this, ::app::Fuse::Node* n, ::app::Fuse::Navigation::NavigationArgs* state);
void Navigation__NotifyNavigationState(::uStatic* __this, ::app::Fuse::Node* n, ::app::Fuse::Navigation::NavigationStateArgs* state);
void Navigation__OnChildAdded(Navigation* __this, ::uObject* s, ::app::Fuse::Node* child);
void Navigation__OnChildRemoved(Navigation* __this, ::uObject* s, ::app::Fuse::Node* child);
void Navigation__OnHistoryChanged(Navigation* __this);
void Navigation__OnNavChildAdded(Navigation* __this, ::uObject* s, ::app::Fuse::Node* child);
void Navigation__OnNavChildRemoved(Navigation* __this, ::uObject* s, ::app::Fuse::Node* child);
void Navigation__OnNavigated(Navigation* __this, ::app::Fuse::Node* newElement);
void Navigation__OnPageCountChanged(Navigation* __this);
void Navigation__OnPageProgressChanged(Navigation* __this, double current, double prev);
void Navigation__OnRooted(Navigation* __this, ::app::Fuse::Node* node);
void Navigation__OnUnrooted(Navigation* __this, ::app::Fuse::Node* node);
void Navigation__remove_HistoryChanged(Navigation* __this, ::uDelegate* value);
void Navigation__remove_Navigated(Navigation* __this, ::uDelegate* value);
void Navigation__remove_PageCountChanged(Navigation* __this, ::uDelegate* value);
void Navigation__remove_PageProgressChanged(Navigation* __this, ::uDelegate* value);
void Navigation__RemoveHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler);
void Navigation__RemoveStateHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler);
void Navigation__ResetNavigationNavigation(::uStatic* __this, ::app::Fuse::Node* n);
void Navigation__SetNavigationNavigation(::uStatic* __this, ::app::Fuse::Node* n, ::uObject* ctx);
void Navigation__SetProgress(::uStatic* __this, ::app::Fuse::Node* n, double progress);
void Navigation__Toggle(Navigation* __this, ::app::Fuse::Node* page);
::uObject* Navigation__TryFind(::uStatic* __this, ::app::Fuse::Node* node);
::app::Fuse::Node* Navigation__TryFindPage(::uStatic* __this, ::app::Fuse::Node* node);

struct Navigation : ::app::Fuse::Behavior
{
    ::uStrong< ::uObject*> _panel;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Node*> Pages;
    ::uStrong< ::uDelegate*> PageCountChanged;
    ::uStrong< ::uDelegate*> PageProgressChanged;
    ::uStrong< ::uDelegate*> Navigated;
    ::uStrong< ::uDelegate*> HistoryChanged;

    void _ObjInit_1() { Navigation___ObjInit_1(this); }
    void add_HistoryChanged(::uDelegate* value) { Navigation__add_HistoryChanged(this, value); }
    void add_Navigated(::uDelegate* value) { Navigation__add_Navigated(this, value); }
    void add_PageCountChanged(::uDelegate* value) { Navigation__add_PageCountChanged(this, value); }
    void add_PageProgressChanged(::uDelegate* value) { Navigation__add_PageProgressChanged(this, value); }
    void ClearHistory() { Navigation__ClearHistory(this); }
    ::app::Fuse::Node* Active() { return (((Navigation__uType*)this->__obj_type)->__fp_get_Active)(this); }
    bool CanGoBack() { return (((Navigation__uType*)this->__obj_type)->__fp_get_CanGoBack)(this); }
    bool CanGoForward() { return (((Navigation__uType*)this->__obj_type)->__fp_get_CanGoForward)(this); }
    bool HasPages() { return Navigation__get_HasPages(this); }
    ::uObject* Owner() { return Navigation__get_Owner(this); }
    int PageCount() { return Navigation__get_PageCount(this); }
    double PageProgress() { return (((Navigation__uType*)this->__obj_type)->__fp_get_PageProgress)(this); }
    ::app::Fuse::Node* GetPage(int index) { return Navigation__GetPage(this, index); }
    int GetPageIndex(::app::Fuse::Node* child) { return Navigation__GetPageIndex(this, child); }
    void GetPagesFromOwner() { Navigation__GetPagesFromOwner(this); }
    void GoBack() { (((Navigation__uType*)this->__obj_type)->__fp_GoBack)(this); }
    void GoForward() { (((Navigation__uType*)this->__obj_type)->__fp_GoForward)(this); }
    void Goto(::app::Fuse::Node* element, int mode) { (((Navigation__uType*)this->__obj_type)->__fp_Goto)(this, element, mode); }
    void OnChildAdded(::uObject* s, ::app::Fuse::Node* child) { (((Navigation__uType*)this->__obj_type)->__fp_OnChildAdded)(this, s, child); }
    void OnChildRemoved(::uObject* s, ::app::Fuse::Node* child) { (((Navigation__uType*)this->__obj_type)->__fp_OnChildRemoved)(this, s, child); }
    void OnHistoryChanged() { Navigation__OnHistoryChanged(this); }
    void OnNavChildAdded(::uObject* s, ::app::Fuse::Node* child) { Navigation__OnNavChildAdded(this, s, child); }
    void OnNavChildRemoved(::uObject* s, ::app::Fuse::Node* child) { Navigation__OnNavChildRemoved(this, s, child); }
    void OnNavigated(::app::Fuse::Node* newElement) { Navigation__OnNavigated(this, newElement); }
    void OnPageCountChanged() { Navigation__OnPageCountChanged(this); }
    void OnPageProgressChanged(double current, double prev) { Navigation__OnPageProgressChanged(this, current, prev); }
    void remove_HistoryChanged(::uDelegate* value) { Navigation__remove_HistoryChanged(this, value); }
    void remove_Navigated(::uDelegate* value) { Navigation__remove_Navigated(this, value); }
    void remove_PageCountChanged(::uDelegate* value) { Navigation__remove_PageCountChanged(this, value); }
    void remove_PageProgressChanged(::uDelegate* value) { Navigation__remove_PageProgressChanged(this, value); }
    void Active(::app::Fuse::Node* value) { (((Navigation__uType*)this->__obj_type)->__fp_set_Active)(this, value); }
    void Toggle(::app::Fuse::Node* page) { (((Navigation__uType*)this->__obj_type)->__fp_Toggle)(this, page); }
};

}}}


#endif
