// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Android{namespace android{namespace view{struct MotionEvent;}}}}
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Fuse{namespace Android{namespace NativeViews{struct NativeView;}}}}
namespace g{namespace Fuse{namespace Android{struct InputDispatch;}}}
namespace g{namespace Fuse{namespace Android{struct InputDispatch__TouchListener;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventData;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct HashSet;}}}

namespace g{
namespace Fuse{
namespace Android{

// internal static extern class InputDispatch :283
// {
uClassType* InputDispatch_typeof();
void InputDispatch__AddListener_fn(::g::Fuse::Android::NativeViews::NativeView* nativeView);
void InputDispatch__FindRoot_fn(::g::Fuse::Node* n, ::g::Fuse::Node** __retval);
void InputDispatch__GetNode_fn(::g::Android::android::view::View* handle, ::g::Fuse::Node** __retval);
void InputDispatch__LostCallback_fn();
void InputDispatch__MakePointerEventData_fn(::g::Fuse::Node* node, ::g::Android::android::view::View* view, ::g::Android::android::view::MotionEvent* motionEvent, uArray** __retval);
void InputDispatch__RaiseCancel_fn(::g::Fuse::Node* node, ::g::Fuse::Input::PointerEventData* data);
void InputDispatch__RaiseEvent_fn(::g::Fuse::Node* node, ::g::Android::android::view::View* view, ::g::Android::android::view::MotionEvent* motionEvent);
void InputDispatch__RaiseMoved_fn(::g::Fuse::Node* node, ::g::Fuse::Input::PointerEventData* data);
void InputDispatch__RaisePressed_fn(::g::Fuse::Node* node, ::g::Fuse::Input::PointerEventData* data);
void InputDispatch__RaiseReleased_fn(::g::Fuse::Node* node, ::g::Fuse::Input::PointerEventData* data);
void InputDispatch__RegisterPointer_fn(int* pointerId, bool* __retval);
void InputDispatch__RemoveListener_fn(::g::Fuse::Android::NativeViews::NativeView* nativeView);
void InputDispatch__UnregisterPointer_fn(int* pointerId);

struct InputDispatch : uObject
{
    static uSStrong< ::g::Uno::Collections::HashSet*> _activePointers_;
    static uSStrong< ::g::Uno::Collections::HashSet*>& _activePointers() { return InputDispatch_typeof()->Init(), _activePointers_; }
    static uSStrong<uObject*> _captureIdentiy_;
    static uSStrong<uObject*>& _captureIdentiy() { return InputDispatch_typeof()->Init(), _captureIdentiy_; }
    static uSStrong< ::g::Uno::Collections::Dictionary*> _listeners_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _listeners() { return InputDispatch_typeof()->Init(), _listeners_; }
    static uSStrong<InputDispatch__TouchListener*> _touchListener_;
    static uSStrong<InputDispatch__TouchListener*>& _touchListener() { return InputDispatch_typeof()->Init(), _touchListener_; }

    static void AddListener(::g::Fuse::Android::NativeViews::NativeView* nativeView);
    static ::g::Fuse::Node* FindRoot(::g::Fuse::Node* n);
    static ::g::Fuse::Node* GetNode(::g::Android::android::view::View* handle);
    static void LostCallback();
    static uArray* MakePointerEventData(::g::Fuse::Node* node, ::g::Android::android::view::View* view, ::g::Android::android::view::MotionEvent* motionEvent);
    static void RaiseCancel(::g::Fuse::Node* node, ::g::Fuse::Input::PointerEventData* data);
    static void RaiseEvent(::g::Fuse::Node* node, ::g::Android::android::view::View* view, ::g::Android::android::view::MotionEvent* motionEvent);
    static void RaiseMoved(::g::Fuse::Node* node, ::g::Fuse::Input::PointerEventData* data);
    static void RaisePressed(::g::Fuse::Node* node, ::g::Fuse::Input::PointerEventData* data);
    static void RaiseReleased(::g::Fuse::Node* node, ::g::Fuse::Input::PointerEventData* data);
    static bool RegisterPointer(int pointerId);
    static void RemoveListener(::g::Fuse::Android::NativeViews::NativeView* nativeView);
    static void UnregisterPointer(int pointerId);
};
// }

}}} // ::g::Fuse::Android
