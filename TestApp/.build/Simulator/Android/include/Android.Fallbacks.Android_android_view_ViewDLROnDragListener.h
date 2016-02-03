// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.ViewDLROnDragListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace view{struct DragEvent;}}}}
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_view_ViewDLROnDragListener;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_view_ViewDLROnDragListener :20160
// {
struct Android_android_view_ViewDLROnDragListener_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::view::ViewDLROnDragListener interface2;
};

Android_android_view_ViewDLROnDragListener_type* Android_android_view_ViewDLROnDragListener_typeof();
void Android_android_view_ViewDLROnDragListener__onDrag_fn(Android_android_view_ViewDLROnDragListener* __this, ::g::Android::android::view::View* arg0, ::g::Android::android::view::DragEvent* arg1, bool* __retval);
void Android_android_view_ViewDLROnDragListener__onDrag_IMPL_22721_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, bool* __retval);

struct Android_android_view_ViewDLROnDragListener : ::g::Android::java::lang::Object
{
    static jmethodID onDrag_22721_ID_;
    static jmethodID& onDrag_22721_ID() { return onDrag_22721_ID_; }

    bool onDrag(::g::Android::android::view::View* arg0, ::g::Android::android::view::DragEvent* arg1);
    static bool onDrag_IMPL_22721(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
};
// }

}}} // ::g::Android::Fallbacks
