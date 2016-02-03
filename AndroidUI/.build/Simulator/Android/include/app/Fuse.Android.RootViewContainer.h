// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_ROOT_VIEW_CONTAINER_H__
#define __APP_FUSE_ANDROID_ROOT_VIEW_CONTAINER_H__

#include <app/Android.android.view.ViewParent.h>
#include <app/Android.android.widget.RelativeLayout.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace content { struct Context; } } } }
namespace app { namespace Android { namespace android { namespace view { struct MotionEvent; } } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Android {

struct RootViewContainer;

extern jclass RootViewContainer___javaClass_5;

struct RootViewContainer__uType : ::app::Android::android::widget::RelativeLayout__uType
{
};

RootViewContainer__uType* RootViewContainer__typeof();

void RootViewContainer___ObjInit_16(RootViewContainer* __this, ::app::Android::android::content::Context* context);
::app::Fuse::Node* RootViewContainer__get_RootNode(RootViewContainer* __this);
void RootViewContainer__LostCallback(RootViewContainer* __this);
RootViewContainer* RootViewContainer__New_13(::uStatic* __this, ::app::Android::android::content::Context* context);
bool RootViewContainer__onInterceptTouchEvent(RootViewContainer* __this, ::app::Android::android::view::MotionEvent* motionEvent);
bool RootViewContainer__onTouchEvent(RootViewContainer* __this, ::app::Android::android::view::MotionEvent* motionEvent);

struct RootViewContainer : ::app::Android::android::widget::RelativeLayout
{
    ::uStrong< ::app::Android::android::view::MotionEvent*> _currentEvent;

    void _ObjInit_16(::app::Android::android::content::Context* context) { RootViewContainer___ObjInit_16(this, context); }
    ::app::Fuse::Node* RootNode() { return RootViewContainer__get_RootNode(this); }
    void LostCallback() { RootViewContainer__LostCallback(this); }
};

}}}


#endif
