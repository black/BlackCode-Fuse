// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_STRUCTURED_NAVIGATION_H__
#define __APP_FUSE_NAVIGATION_STRUCTURED_NAVIGATION_H__

#include <app/Fuse.Navigation.INavigation.h>
#include <app/Fuse.Navigation.Navigation.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Navigation { struct EndSeekArgs; } } }
namespace app { namespace Fuse { namespace Navigation { struct NavigationTween; } } }
namespace app { namespace Fuse { namespace Navigation { struct UpdateSeekArgs; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { struct EventArgs; } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Navigation {

struct StructuredNavigation;

struct StructuredNavigation__uType : ::app::Fuse::Navigation::Navigation__uType
{
};

StructuredNavigation__uType* StructuredNavigation__typeof();

void StructuredNavigation___ObjInit_2(StructuredNavigation* __this, int mode);
void StructuredNavigation__AnimatorDoneCallback(StructuredNavigation* __this);
void StructuredNavigation__BeginSeek(StructuredNavigation* __this);
void StructuredNavigation__ClearForwardHistory(StructuredNavigation* __this);
void StructuredNavigation__EndSeek(StructuredNavigation* __this, ::app::Fuse::Navigation::EndSeekArgs* args);
void StructuredNavigation__EnsureChildAnimationState(StructuredNavigation* __this);
::app::Fuse::Node* StructuredNavigation__get_Active(StructuredNavigation* __this);
::app::Fuse::Node* StructuredNavigation__get_Back(StructuredNavigation* __this);
bool StructuredNavigation__get_CanGoBack(StructuredNavigation* __this);
bool StructuredNavigation__get_CanGoForward(StructuredNavigation* __this);
double StructuredNavigation__get_Duration(StructuredNavigation* __this);
double StructuredNavigation__get_DurationBack(StructuredNavigation* __this);
int StructuredNavigation__get_Easing(StructuredNavigation* __this);
int StructuredNavigation__get_EasingBack(StructuredNavigation* __this);
::app::Fuse::Node* StructuredNavigation__get_Front(StructuredNavigation* __this);
int StructuredNavigation__get_Mode(StructuredNavigation* __this);
::app::Fuse::Node* StructuredNavigation__get_Next(StructuredNavigation* __this);
double StructuredNavigation__get_PageProgress(StructuredNavigation* __this);
::app::Fuse::Node* StructuredNavigation__get_Previous(StructuredNavigation* __this);
double StructuredNavigation__get_Progress(StructuredNavigation* __this);
::app::Uno::Float2 StructuredNavigation__get_SeekRange(StructuredNavigation* __this);
::uObject* StructuredNavigation__GetAnimators(StructuredNavigation* __this);
void StructuredNavigation__GoBack(StructuredNavigation* __this);
void StructuredNavigation__GoForward(StructuredNavigation* __this);
void StructuredNavigation__Goto(StructuredNavigation* __this, ::app::Fuse::Node* element, int mode);
void StructuredNavigation__GotoImpl(StructuredNavigation* __this, ::app::Fuse::Node* element, int mode);
void StructuredNavigation__OnChildAdded(StructuredNavigation* __this, ::uObject* s, ::app::Fuse::Node* child);
void StructuredNavigation__OnChildRemoved(StructuredNavigation* __this, ::uObject* s, ::app::Fuse::Node* child);
void StructuredNavigation__OnPlaced(StructuredNavigation* __this, ::uObject* s, ::uObject* a);
void StructuredNavigation__OnRooted(StructuredNavigation* __this, ::app::Fuse::Node* node);
void StructuredNavigation__OnUnrooted(StructuredNavigation* __this, ::app::Fuse::Node* node);
void StructuredNavigation__OnUpdate(StructuredNavigation* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
double StructuredNavigation__ProgressGetterCallback(StructuredNavigation* __this);
void StructuredNavigation__ProgressSetterCallback(StructuredNavigation* __this, double newProgress);
void StructuredNavigation__Seek(StructuredNavigation* __this, ::app::Fuse::Navigation::UpdateSeekArgs* args);
void StructuredNavigation__set_Active(StructuredNavigation* __this, ::app::Fuse::Node* value);
void StructuredNavigation__set_Duration(StructuredNavigation* __this, double value);
void StructuredNavigation__set_DurationBack(StructuredNavigation* __this, double value);
void StructuredNavigation__set_Easing(StructuredNavigation* __this, int value);
void StructuredNavigation__set_EasingBack(StructuredNavigation* __this, int value);
void StructuredNavigation__set_Mode(StructuredNavigation* __this, int value);
void StructuredNavigation__set_Progress(StructuredNavigation* __this, double value);
void StructuredNavigation__TransitionToChild(StructuredNavigation* __this, ::app::Fuse::Node* element, bool bypass);

struct StructuredNavigation : ::app::Fuse::Navigation::Navigation
{
    bool _reuseExistingNode;
    ::uStrong< ::app::Fuse::Node*> _node;
    ::uStrong< ::app::Fuse::Navigation::NavigationTween*> _navigationTween;
    ::uStrong< ::uObject*> _currentAnimatorPlayer;
    double _progress;
    bool _queueClearForwardHistory;
    ::uStrong< ::app::Fuse::Node*> _active;
    double _progressBase;
    int _Mode;

    void _ObjInit_2(int mode) { StructuredNavigation___ObjInit_2(this, mode); }
    void AnimatorDoneCallback() { StructuredNavigation__AnimatorDoneCallback(this); }
    void BeginSeek() { StructuredNavigation__BeginSeek(this); }
    void ClearForwardHistory() { StructuredNavigation__ClearForwardHistory(this); }
    void EndSeek(::app::Fuse::Navigation::EndSeekArgs* args) { StructuredNavigation__EndSeek(this, args); }
    void EnsureChildAnimationState() { StructuredNavigation__EnsureChildAnimationState(this); }
    ::app::Fuse::Node* Back() { return StructuredNavigation__get_Back(this); }
    double Duration() { return StructuredNavigation__get_Duration(this); }
    double DurationBack() { return StructuredNavigation__get_DurationBack(this); }
    int Easing() { return StructuredNavigation__get_Easing(this); }
    int EasingBack() { return StructuredNavigation__get_EasingBack(this); }
    ::app::Fuse::Node* Front() { return StructuredNavigation__get_Front(this); }
    int Mode() { return StructuredNavigation__get_Mode(this); }
    ::app::Fuse::Node* Next() { return StructuredNavigation__get_Next(this); }
    ::app::Fuse::Node* Previous() { return StructuredNavigation__get_Previous(this); }
    double Progress() { return StructuredNavigation__get_Progress(this); }
    ::app::Uno::Float2 SeekRange();
    ::uObject* GetAnimators() { return StructuredNavigation__GetAnimators(this); }
    void GotoImpl(::app::Fuse::Node* element, int mode) { StructuredNavigation__GotoImpl(this, element, mode); }
    void OnPlaced(::uObject* s, ::uObject* a) { StructuredNavigation__OnPlaced(this, s, a); }
    void OnUpdate(::uObject* sender, ::app::Uno::EventArgs* args) { StructuredNavigation__OnUpdate(this, sender, args); }
    double ProgressGetterCallback() { return StructuredNavigation__ProgressGetterCallback(this); }
    void ProgressSetterCallback(double newProgress) { StructuredNavigation__ProgressSetterCallback(this, newProgress); }
    void Seek(::app::Fuse::Navigation::UpdateSeekArgs* args) { StructuredNavigation__Seek(this, args); }
    void Duration(double value) { StructuredNavigation__set_Duration(this, value); }
    void DurationBack(double value) { StructuredNavigation__set_DurationBack(this, value); }
    void Easing(int value) { StructuredNavigation__set_Easing(this, value); }
    void EasingBack(int value) { StructuredNavigation__set_EasingBack(this, value); }
    void Mode(int value) { StructuredNavigation__set_Mode(this, value); }
    void Progress(double value) { StructuredNavigation__set_Progress(this, value); }
    void TransitionToChild(::app::Fuse::Node* element, bool bypass) { StructuredNavigation__TransitionToChild(this, element, bypass); }
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Navigation {

inline ::app::Uno::Float2 StructuredNavigation::SeekRange() { return StructuredNavigation__get_SeekRange(this); }

}}}


#endif
