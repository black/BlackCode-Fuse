// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Navigation.IBaseNavigation.h>
#include <Fuse.Navigation.INavigation.h>
namespace g{namespace Fuse{namespace Navigation{struct Navigation;}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationArgs;}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationStateArgs;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct PropertyHandle;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public interfacemodifiers class Navigation :677
// {
struct Navigation_type : ::g::Fuse::Behavior_type
{
    ::g::Fuse::Navigation::INavigation interface0;
    ::g::Fuse::Navigation::IBaseNavigation interface1;
    void(*fp_get_Active)(::g::Fuse::Navigation::Navigation*, ::g::Fuse::Node**);
    void(*fp_set_Active)(::g::Fuse::Navigation::Navigation*, ::g::Fuse::Node*);
    void(*fp_get_CanGoBack)(::g::Fuse::Navigation::Navigation*, bool*);
    void(*fp_get_CanGoForward)(::g::Fuse::Navigation::Navigation*, bool*);
    void(*fp_GoBack)(::g::Fuse::Navigation::Navigation*);
    void(*fp_GoForward)(::g::Fuse::Navigation::Navigation*);
    void(*fp_Goto)(::g::Fuse::Navigation::Navigation*, ::g::Fuse::Node*, int*);
    void(*fp_OnChildAdded)(::g::Fuse::Navigation::Navigation*, uObject*, ::g::Fuse::Node*);
    void(*fp_OnChildRemoved)(::g::Fuse::Navigation::Navigation*, uObject*, ::g::Fuse::Node*);
    void(*fp_get_PageProgress)(::g::Fuse::Navigation::Navigation*, double*);
    void(*fp_Toggle)(::g::Fuse::Navigation::Navigation*, ::g::Fuse::Node*);
};

Navigation_type* Navigation_typeof();
void Navigation__ctor_1_fn(Navigation* __this);
void Navigation__get_ActivePage_fn(Navigation* __this, ::g::Fuse::Node** __retval);
void Navigation__AddHandler_fn(::g::Fuse::Node* node, uDelegate* handler);
void Navigation__AddStateHandler_fn(::g::Fuse::Node* node, uDelegate* handler);
void Navigation__get_CanGoBack_fn(Navigation* __this, bool* __retval);
void Navigation__get_CanGoForward_fn(Navigation* __this, bool* __retval);
void Navigation__ClearHistory_fn(Navigation* __this);
void Navigation__GetLocalNavigation_fn(::g::Fuse::Node* node, uObject** __retval);
void Navigation__GetNavigationNavigation_fn(::g::Fuse::Node* n, uObject** __retval);
void Navigation__GetPage_fn(Navigation* __this, int* index, ::g::Fuse::Node** __retval);
void Navigation__GetPageIndex_fn(Navigation* __this, ::g::Fuse::Node* child, int* __retval);
void Navigation__GetProgress_fn(::g::Fuse::Node* n, double* __retval);
void Navigation__GoBack_fn(Navigation* __this);
void Navigation__GoForward_fn(Navigation* __this);
void Navigation__get_HasPages_fn(Navigation* __this, bool* __retval);
void Navigation__add_HistoryChanged_fn(Navigation* __this, uDelegate* value);
void Navigation__remove_HistoryChanged_fn(Navigation* __this, uDelegate* value);
void Navigation__Invoke_fn(uObject* handler, uArray* state);
void Navigation__InvokeState_fn(uObject* handler, uArray* state);
void Navigation__IsPage_fn(Navigation* __this, ::g::Fuse::Node* n, bool* __retval);
void Navigation__add_Navigated_fn(Navigation* __this, uDelegate* value);
void Navigation__remove_Navigated_fn(Navigation* __this, uDelegate* value);
void Navigation__NotifyNavigation_fn(::g::Fuse::Node* n, ::g::Fuse::Navigation::NavigationArgs* state);
void Navigation__NotifyNavigationState_fn(::g::Fuse::Node* n, ::g::Fuse::Navigation::NavigationStateArgs* state);
void Navigation__OnChildAdded_fn(Navigation* __this, uObject* s, ::g::Fuse::Node* child);
void Navigation__OnChildRemoved_fn(Navigation* __this, uObject* s, ::g::Fuse::Node* child);
void Navigation__OnHistoryChanged_fn(Navigation* __this);
void Navigation__OnNavChildAdded_fn(Navigation* __this, uObject* s, ::g::Fuse::Node* child);
void Navigation__OnNavChildRemoved_fn(Navigation* __this, uObject* s, ::g::Fuse::Node* child);
void Navigation__OnNavigated_fn(Navigation* __this, ::g::Fuse::Node* newElement);
void Navigation__OnPageCountChanged_fn(Navigation* __this);
void Navigation__OnPageProgressChanged_fn(Navigation* __this, double* current, double* prev);
void Navigation__OnRooted_fn(Navigation* __this, ::g::Fuse::Node* parentNode);
void Navigation__OnUnrooted_fn(Navigation* __this, ::g::Fuse::Node* parentNode);
void Navigation__get_Owner_fn(Navigation* __this, uObject** __retval);
void Navigation__get_PageCount_fn(Navigation* __this, int* __retval);
void Navigation__add_PageCountChanged_fn(Navigation* __this, uDelegate* value);
void Navigation__remove_PageCountChanged_fn(Navigation* __this, uDelegate* value);
void Navigation__add_PageProgressChanged_fn(Navigation* __this, uDelegate* value);
void Navigation__remove_PageProgressChanged_fn(Navigation* __this, uDelegate* value);
void Navigation__RemoveHandler_fn(::g::Fuse::Node* node, uDelegate* handler);
void Navigation__RemoveStateHandler_fn(::g::Fuse::Node* node, uDelegate* handler);
void Navigation__ResetNavigationNavigation_fn(::g::Fuse::Node* n);
void Navigation__SetNavigationNavigation_fn(::g::Fuse::Node* n, uObject* ctx);
void Navigation__SetProgress_fn(::g::Fuse::Node* n, double* progress);
void Navigation__Toggle_fn(Navigation* __this, ::g::Fuse::Node* page);
void Navigation__TryFind_fn(::g::Fuse::Node* node, uObject** __retval);
void Navigation__TryFindPage_fn(::g::Fuse::Node* node, ::g::Fuse::Node** __retval);

struct Navigation : ::g::Fuse::Behavior
{
    static uSStrong< ::g::Fuse::PropertyHandle*> _contextHandle_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _contextHandle() { return Navigation_typeof()->Init(), _contextHandle_; }
    static uSStrong< ::g::Fuse::PropertyHandle*> _navigationHandler_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _navigationHandler() { return Navigation_typeof()->Init(), _navigationHandler_; }
    static uSStrong< ::g::Fuse::PropertyHandle*> _navigationProgress_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _navigationProgress() { return Navigation_typeof()->Init(), _navigationProgress_; }
    static uSStrong< ::g::Fuse::PropertyHandle*> _navigationStateHandler_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _navigationStateHandler() { return Navigation_typeof()->Init(), _navigationStateHandler_; }
    uStrong<uObject*> _panel;
    uStrong<uDelegate*> HistoryChanged1;
    uStrong<uDelegate*> Navigated1;
    uStrong<uDelegate*> PageCountChanged1;
    uStrong<uDelegate*> PageProgressChanged1;

    void ctor_1();
    ::g::Fuse::Node* Active() { ::g::Fuse::Node* __retval; return (((Navigation_type*)__type)->fp_get_Active)(this, &__retval), __retval; }
    void Active(::g::Fuse::Node* value) { (((Navigation_type*)__type)->fp_set_Active)(this, value); }
    ::g::Fuse::Node* ActivePage();
    bool CanGoBack() { bool __retval; return (((Navigation_type*)__type)->fp_get_CanGoBack)(this, &__retval), __retval; }
    bool CanGoForward() { bool __retval; return (((Navigation_type*)__type)->fp_get_CanGoForward)(this, &__retval), __retval; }
    void ClearHistory();
    ::g::Fuse::Node* GetPage(int index);
    int GetPageIndex(::g::Fuse::Node* child);
    void GoBack() { (((Navigation_type*)__type)->fp_GoBack)(this); }
    void GoForward() { (((Navigation_type*)__type)->fp_GoForward)(this); }
    void Goto(::g::Fuse::Node* element, int mode) { (((Navigation_type*)__type)->fp_Goto)(this, element, &mode); }
    bool HasPages();
    void add_HistoryChanged(uDelegate* value);
    void remove_HistoryChanged(uDelegate* value);
    bool IsPage(::g::Fuse::Node* n);
    void add_Navigated(uDelegate* value);
    void remove_Navigated(uDelegate* value);
    void OnChildAdded(uObject* s, ::g::Fuse::Node* child) { (((Navigation_type*)__type)->fp_OnChildAdded)(this, s, child); }
    void OnChildRemoved(uObject* s, ::g::Fuse::Node* child) { (((Navigation_type*)__type)->fp_OnChildRemoved)(this, s, child); }
    void OnHistoryChanged();
    void OnNavChildAdded(uObject* s, ::g::Fuse::Node* child);
    void OnNavChildRemoved(uObject* s, ::g::Fuse::Node* child);
    void OnNavigated(::g::Fuse::Node* newElement);
    void OnPageCountChanged();
    void OnPageProgressChanged(double current, double prev);
    uObject* Owner();
    int PageCount();
    void add_PageCountChanged(uDelegate* value);
    void remove_PageCountChanged(uDelegate* value);
    double PageProgress() { double __retval; return (((Navigation_type*)__type)->fp_get_PageProgress)(this, &__retval), __retval; }
    void add_PageProgressChanged(uDelegate* value);
    void remove_PageProgressChanged(uDelegate* value);
    void Toggle(::g::Fuse::Node* page) { (((Navigation_type*)__type)->fp_Toggle)(this, page); }
    static void AddHandler(::g::Fuse::Node* node, uDelegate* handler);
    static void AddStateHandler(::g::Fuse::Node* node, uDelegate* handler);
    static uObject* GetLocalNavigation(::g::Fuse::Node* node);
    static uObject* GetNavigationNavigation(::g::Fuse::Node* n);
    static double GetProgress(::g::Fuse::Node* n);
    static void GoBack(Navigation* __this) { Navigation__GoBack_fn(__this); }
    static void GoForward(Navigation* __this) { Navigation__GoForward_fn(__this); }
    static void Invoke(uObject* handler, uArray* state);
    static void InvokeState(uObject* handler, uArray* state);
    static void NotifyNavigation(::g::Fuse::Node* n, ::g::Fuse::Navigation::NavigationArgs* state);
    static void NotifyNavigationState(::g::Fuse::Node* n, ::g::Fuse::Navigation::NavigationStateArgs* state);
    static void OnChildAdded(Navigation* __this, uObject* s, ::g::Fuse::Node* child) { Navigation__OnChildAdded_fn(__this, s, child); }
    static void OnChildRemoved(Navigation* __this, uObject* s, ::g::Fuse::Node* child) { Navigation__OnChildRemoved_fn(__this, s, child); }
    static void RemoveHandler(::g::Fuse::Node* node, uDelegate* handler);
    static void RemoveStateHandler(::g::Fuse::Node* node, uDelegate* handler);
    static void ResetNavigationNavigation(::g::Fuse::Node* n);
    static void SetNavigationNavigation(::g::Fuse::Node* n, uObject* ctx);
    static void SetProgress(::g::Fuse::Node* n, double progress);
    static void Toggle(Navigation* __this, ::g::Fuse::Node* page) { Navigation__Toggle_fn(__this, page); }
    static uObject* TryFind(::g::Fuse::Node* node);
    static ::g::Fuse::Node* TryFindPage(::g::Fuse::Node* node);
    static bool CanGoBack(Navigation* __this) { bool __retval; return Navigation__get_CanGoBack_fn(__this, &__retval), __retval; }
    static bool CanGoForward(Navigation* __this) { bool __retval; return Navigation__get_CanGoForward_fn(__this, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Navigation
