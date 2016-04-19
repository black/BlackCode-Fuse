// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Input{struct Focus;}}}
namespace g{namespace Fuse{namespace Input{struct FocusGained;}}}
namespace g{namespace Fuse{namespace Input{struct FocusGainedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct FocusLost;}}}
namespace g{namespace Fuse{namespace Input{struct FocusLostArgs;}}}
namespace g{namespace Fuse{namespace Input{struct IsFocusableChangedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct IsFocusableChangedEvent;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct NodeEvent;}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Fuse{struct StyleProperty1;}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Input{

// public partial static class Focus :226
// {
uClassType* Focus_typeof();
void Focus__CanSetFocus_fn(::g::Fuse::Node* node, bool* __retval);
void Focus__ChangeFocusedNode_fn(::g::Fuse::Node* node, uString* memberName);
void Focus__FindRoot_fn(::g::Fuse::Node** __retval);
void Focus__get_FocusedNode_fn(::g::Fuse::Node** __retval);
void Focus__get_Gained_fn(::g::Fuse::NodeEvent** __retval);
void Focus__GetDelegator_fn(::g::Fuse::Node* n, uDelegate** __retval);
void Focus__GetFocusDelegate_fn(::g::Fuse::Node* n, ::g::Fuse::Node** __retval);
void Focus__GiveTo_fn(::g::Fuse::Node* n);
void Focus__HandlesFocusEvent_fn(::g::Fuse::Node* n, bool* __retval);
void Focus__IsFocusable_fn(::g::Fuse::Node* n, bool* __retval);
void Focus__get_IsFocusableChanged_fn(::g::Fuse::NodeEvent** __retval);
void Focus__IsWithin_fn(::g::Fuse::Node* n, bool* __retval);
void Focus__get_Lost_fn(::g::Fuse::NodeEvent** __retval);
void Focus__Move_fn(int* direction);
void Focus__Obtained_fn(::g::Fuse::Node* n);
void Focus__OnFocusDelegateChanged_fn(::g::Fuse::Node* n);
void Focus__OnIsFocusableChanged_fn(::g::Fuse::Node* n);
void Focus__OnNodeUnrooted_fn(uObject* sender, ::g::Uno::EventArgs* args);
void Focus__OnWindowGotFocus_fn(uObject* sender, ::g::Uno::EventArgs* args);
void Focus__OnWindowLostFocus_fn(uObject* sender, ::g::Uno::EventArgs* args);
void Focus__Predict_fn(int* direction, ::g::Fuse::Node** __retval);
void Focus__Release_fn();
void Focus__ReleaseFrom_fn(::g::Fuse::Node* n);
void Focus__SetDelegator_fn(::g::Fuse::Node* n, uDelegate* delegator);
void Focus__SetIsFocusable_fn(::g::Fuse::Node* n, bool* focusable);
void Focus__SetStyleFocusDelegate_fn(::g::Fuse::Node* n, ::g::Fuse::Node* d);
void Focus__SetStyleIsFocusable_fn(::g::Fuse::Node* n, bool* focusable);

struct Focus : uObject
{
    static uSStrong< ::g::Fuse::PropertyHandle*> _focusDelegatorHandle_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _focusDelegatorHandle() { return Focus_typeof()->Init(), _focusDelegatorHandle_; }
    static uSStrong< ::g::Fuse::Node*> _focusedObject_;
    static uSStrong< ::g::Fuse::Node*>& _focusedObject() { return Focus_typeof()->Init(), _focusedObject_; }
    static uSStrong< ::g::Fuse::Input::FocusGained*> _gained_;
    static uSStrong< ::g::Fuse::Input::FocusGained*>& _gained() { return Focus_typeof()->Init(), _gained_; }
    static uSStrong< ::g::Fuse::Input::IsFocusableChangedEvent*> _isFoucsableChanged_;
    static uSStrong< ::g::Fuse::Input::IsFocusableChangedEvent*>& _isFoucsableChanged() { return Focus_typeof()->Init(), _isFoucsableChanged_; }
    static uSStrong< ::g::Fuse::Node*> _lastFocusedNode_;
    static uSStrong< ::g::Fuse::Node*>& _lastFocusedNode() { return Focus_typeof()->Init(), _lastFocusedNode_; }
    static uSStrong< ::g::Fuse::Input::FocusLost*> _lost_;
    static uSStrong< ::g::Fuse::Input::FocusLost*>& _lost() { return Focus_typeof()->Init(), _lost_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> FocusDelegateProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& FocusDelegateProperty() { return Focus_typeof()->Init(), FocusDelegateProperty_; }
    static uSStrong< ::g::Fuse::StyleProperty1*> IsFocusableProperty_;
    static uSStrong< ::g::Fuse::StyleProperty1*>& IsFocusableProperty() { return Focus_typeof()->Init(), IsFocusableProperty_; }

    static bool CanSetFocus(::g::Fuse::Node* node);
    static void ChangeFocusedNode(::g::Fuse::Node* node, uString* memberName);
    static ::g::Fuse::Node* FindRoot();
    static uDelegate* GetDelegator(::g::Fuse::Node* n);
    static ::g::Fuse::Node* GetFocusDelegate(::g::Fuse::Node* n);
    static void GiveTo(::g::Fuse::Node* n);
    static bool HandlesFocusEvent(::g::Fuse::Node* n);
    static bool IsFocusable(::g::Fuse::Node* n);
    static bool IsWithin(::g::Fuse::Node* n);
    static void Move(int direction);
    static void Obtained(::g::Fuse::Node* n);
    static void OnFocusDelegateChanged(::g::Fuse::Node* n);
    static void OnIsFocusableChanged(::g::Fuse::Node* n);
    static void OnNodeUnrooted(uObject* sender, ::g::Uno::EventArgs* args);
    static void OnWindowGotFocus(uObject* sender, ::g::Uno::EventArgs* args);
    static void OnWindowLostFocus(uObject* sender, ::g::Uno::EventArgs* args);
    static ::g::Fuse::Node* Predict(int direction);
    static void Release();
    static void ReleaseFrom(::g::Fuse::Node* n);
    static void SetDelegator(::g::Fuse::Node* n, uDelegate* delegator);
    static void SetIsFocusable(::g::Fuse::Node* n, bool focusable);
    static void SetStyleFocusDelegate(::g::Fuse::Node* n, ::g::Fuse::Node* d);
    static void SetStyleIsFocusable(::g::Fuse::Node* n, bool focusable);
    static ::g::Fuse::Node* FocusedNode();
    static ::g::Fuse::NodeEvent* Gained();
    static ::g::Fuse::NodeEvent* IsFocusableChanged();
    static ::g::Fuse::NodeEvent* Lost();
};
// }

}}} // ::g::Fuse::Input
