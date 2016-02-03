// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_INPUT_DISPATCH_H__
#define __APP_FUSE_ANDROID_INPUT_DISPATCH_H__

#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct MotionEvent; } } } }
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }
namespace app { namespace Fuse { namespace Android { struct InputDispatch_TouchListener; } } }
namespace app { namespace Fuse { namespace Android { struct NativeView; } } }
namespace app { namespace Fuse { namespace Input { struct PointerEventData; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Android_android_view_View__Fuse_Node; } } }
namespace app { namespace Uno { namespace Collections { struct HashSet__int; } } }

namespace app {
namespace Fuse {
namespace Android {

extern ::uStaticStrong< ::app::Uno::Collections::HashSet__int*> InputDispatch___activePointers;
extern ::uStaticStrong< ::uObject*> InputDispatch___captureIdentiy;
extern ::uStaticStrong< ::app::Uno::Collections::Dictionary__Android_android_view_View__Fuse_Node*> InputDispatch___listeners;
extern ::uStaticStrong< ::app::Fuse::Android::InputDispatch_TouchListener*> InputDispatch___touchListener;

struct InputDispatch__uType : ::uClassType
{
};

InputDispatch__uType* InputDispatch__typeof();

void InputDispatch___TypeInit(::uStatic* __this);
void InputDispatch__AddListener(::uStatic* __this, ::app::Fuse::Android::NativeView* nativeView);
::app::Fuse::Node* InputDispatch__FindRoot(::uStatic* __this, ::app::Fuse::Node* n);
::app::Fuse::Node* InputDispatch__GetNode(::uStatic* __this, ::app::Android::android::view::View* handle);
void InputDispatch__LostCallback(::uStatic* __this);
::uArray* InputDispatch__MakePointerEventData(::uStatic* __this, ::app::Fuse::Node* node, ::app::Android::android::view::View* view, ::app::Android::android::view::MotionEvent* motionEvent);
void InputDispatch__RaiseCancel(::uStatic* __this, ::app::Fuse::Node* node, ::app::Fuse::Input::PointerEventData* data);
void InputDispatch__RaiseEvent(::uStatic* __this, ::app::Fuse::Node* node, ::app::Android::android::view::View* view, ::app::Android::android::view::MotionEvent* motionEvent);
void InputDispatch__RaiseMoved(::uStatic* __this, ::app::Fuse::Node* node, ::app::Fuse::Input::PointerEventData* data);
void InputDispatch__RaisePressed(::uStatic* __this, ::app::Fuse::Node* node, ::app::Fuse::Input::PointerEventData* data);
void InputDispatch__RaiseReleased(::uStatic* __this, ::app::Fuse::Node* node, ::app::Fuse::Input::PointerEventData* data);
bool InputDispatch__RegisterPointer(::uStatic* __this, int pointerId);
void InputDispatch__RemoveListener(::uStatic* __this, ::app::Fuse::Android::NativeView* nativeView);
void InputDispatch__UnregisterPointer(::uStatic* __this, int pointerId);

}}}


#endif
