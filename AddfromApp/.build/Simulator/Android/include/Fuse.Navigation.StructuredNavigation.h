// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Navigation.IBaseNavigation.h>
#include <Fuse.Navigation.INavigation.h>
#include <Fuse.Navigation.Navigation.h>
namespace g{namespace Fuse{namespace Navigation{struct EndSeekArgs;}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationTween;}}}
namespace g{namespace Fuse{namespace Navigation{struct StructuredNavigation;}}}
namespace g{namespace Fuse{namespace Navigation{struct UpdateSeekArgs;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{struct EventArgs;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public interfacemodifiers class StructuredNavigation :1207
// {
::g::Fuse::Navigation::Navigation_type* StructuredNavigation_typeof();
void StructuredNavigation__ctor_2_fn(StructuredNavigation* __this, int* mode);
void StructuredNavigation__get_Active_fn(StructuredNavigation* __this, ::g::Fuse::Node** __retval);
void StructuredNavigation__set_Active_fn(StructuredNavigation* __this, ::g::Fuse::Node* value);
void StructuredNavigation__AnimatorDoneCallback_fn(StructuredNavigation* __this);
void StructuredNavigation__get_Back_fn(StructuredNavigation* __this, ::g::Fuse::Node** __retval);
void StructuredNavigation__BeginSeek_fn(StructuredNavigation* __this);
void StructuredNavigation__get_CanGoBack_fn(StructuredNavigation* __this, bool* __retval);
void StructuredNavigation__get_CanGoForward_fn(StructuredNavigation* __this, bool* __retval);
void StructuredNavigation__ClearForwardHistory_fn(StructuredNavigation* __this);
void StructuredNavigation__get_Duration_fn(StructuredNavigation* __this, double* __retval);
void StructuredNavigation__set_Duration_fn(StructuredNavigation* __this, double* value);
void StructuredNavigation__get_DurationBack_fn(StructuredNavigation* __this, double* __retval);
void StructuredNavigation__set_DurationBack_fn(StructuredNavigation* __this, double* value);
void StructuredNavigation__get_Easing_fn(StructuredNavigation* __this, int* __retval);
void StructuredNavigation__set_Easing_fn(StructuredNavigation* __this, int* value);
void StructuredNavigation__get_EasingBack_fn(StructuredNavigation* __this, int* __retval);
void StructuredNavigation__set_EasingBack_fn(StructuredNavigation* __this, int* value);
void StructuredNavigation__EndSeek_fn(StructuredNavigation* __this, ::g::Fuse::Navigation::EndSeekArgs* args);
void StructuredNavigation__EnsureChildAnimationState_fn(StructuredNavigation* __this);
void StructuredNavigation__get_Front_fn(StructuredNavigation* __this, ::g::Fuse::Node** __retval);
void StructuredNavigation__GetAnimators_fn(StructuredNavigation* __this, uObject** __retval);
void StructuredNavigation__GoBack_fn(StructuredNavigation* __this);
void StructuredNavigation__GoForward_fn(StructuredNavigation* __this);
void StructuredNavigation__Goto_fn(StructuredNavigation* __this, ::g::Fuse::Node* element, int* mode);
void StructuredNavigation__GotoImpl_fn(StructuredNavigation* __this, ::g::Fuse::Node* element, int* mode);
void StructuredNavigation__get_Mode_fn(StructuredNavigation* __this, int* __retval);
void StructuredNavigation__set_Mode_fn(StructuredNavigation* __this, int* value);
void StructuredNavigation__get_Next_fn(StructuredNavigation* __this, ::g::Fuse::Node** __retval);
void StructuredNavigation__OnChildAdded_fn(StructuredNavigation* __this, uObject* s, ::g::Fuse::Node* child);
void StructuredNavigation__OnChildRemoved_fn(StructuredNavigation* __this, uObject* s, ::g::Fuse::Node* child);
void StructuredNavigation__OnPlaced_fn(StructuredNavigation* __this, uObject* s, uObject* a);
void StructuredNavigation__OnRooted_fn(StructuredNavigation* __this, ::g::Fuse::Node* parentNode);
void StructuredNavigation__OnUnrooted_fn(StructuredNavigation* __this, ::g::Fuse::Node* parentNode);
void StructuredNavigation__OnUpdate_fn(StructuredNavigation* __this, uObject* sender, ::g::Uno::EventArgs* args);
void StructuredNavigation__get_PageProgress_fn(StructuredNavigation* __this, double* __retval);
void StructuredNavigation__get_Previous_fn(StructuredNavigation* __this, ::g::Fuse::Node** __retval);
void StructuredNavigation__get_Progress_fn(StructuredNavigation* __this, double* __retval);
void StructuredNavigation__set_Progress_fn(StructuredNavigation* __this, double* value);
void StructuredNavigation__ProgressGetterCallback_fn(StructuredNavigation* __this, double* __retval);
void StructuredNavigation__ProgressSetterCallback_fn(StructuredNavigation* __this, double* newProgress);
void StructuredNavigation__Seek_fn(StructuredNavigation* __this, ::g::Fuse::Navigation::UpdateSeekArgs* args);
void StructuredNavigation__get_SeekRange_fn(StructuredNavigation* __this, ::g::Uno::Float2* __retval);
void StructuredNavigation__TransitionToChild_fn(StructuredNavigation* __this, ::g::Fuse::Node* element, bool* bypass);

struct StructuredNavigation : ::g::Fuse::Navigation::Navigation
{
    uStrong< ::g::Fuse::Node*> _active;
    uStrong<uObject*> _currentAnimatorPlayer;
    uStrong< ::g::Fuse::Navigation::NavigationTween*> _navigationTween;
    double _progress;
    double _progressBase;
    bool _queueClearForwardHistory;
    bool _reuseExistingNode;
    int _Mode;

    void ctor_2(int mode);
    void AnimatorDoneCallback();
    ::g::Fuse::Node* Back();
    void BeginSeek();
    void ClearForwardHistory();
    double Duration();
    void Duration(double value);
    double DurationBack();
    void DurationBack(double value);
    int Easing();
    void Easing(int value);
    int EasingBack();
    void EasingBack(int value);
    void EndSeek(::g::Fuse::Navigation::EndSeekArgs* args);
    void EnsureChildAnimationState();
    ::g::Fuse::Node* Front();
    uObject* GetAnimators();
    void GotoImpl(::g::Fuse::Node* element, int mode);
    int Mode();
    void Mode(int value);
    ::g::Fuse::Node* Next();
    void OnPlaced(uObject* s, uObject* a);
    void OnUpdate(uObject* sender, ::g::Uno::EventArgs* args);
    ::g::Fuse::Node* Previous();
    double Progress();
    void Progress(double value);
    double ProgressGetterCallback();
    void ProgressSetterCallback(double newProgress);
    void Seek(::g::Fuse::Navigation::UpdateSeekArgs* args);
    ::g::Uno::Float2 SeekRange();
    void TransitionToChild(::g::Fuse::Node* element, bool bypass);
};
// }

}}} // ::g::Fuse::Navigation
