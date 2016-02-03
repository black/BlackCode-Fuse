// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.ViewDLROnAttachStateChangeListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_view_ViewDLROnAttachStateChangeListener;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_view_ViewDLROnAttachStateChangeListener :20077
// {
struct Android_android_view_ViewDLROnAttachStateChangeListener_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::view::ViewDLROnAttachStateChangeListener interface2;
};

Android_android_view_ViewDLROnAttachStateChangeListener_type* Android_android_view_ViewDLROnAttachStateChangeListener_typeof();
void Android_android_view_ViewDLROnAttachStateChangeListener__onViewAttachedToWindow_fn(Android_android_view_ViewDLROnAttachStateChangeListener* __this, ::g::Android::android::view::View* arg0);
void Android_android_view_ViewDLROnAttachStateChangeListener__onViewAttachedToWindow_IMPL_22717_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void Android_android_view_ViewDLROnAttachStateChangeListener__onViewDetachedFromWindow_fn(Android_android_view_ViewDLROnAttachStateChangeListener* __this, ::g::Android::android::view::View* arg0);
void Android_android_view_ViewDLROnAttachStateChangeListener__onViewDetachedFromWindow_IMPL_22718_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);

struct Android_android_view_ViewDLROnAttachStateChangeListener : ::g::Android::java::lang::Object
{
    static jmethodID onViewAttachedToWindow_22717_ID_;
    static jmethodID& onViewAttachedToWindow_22717_ID() { return onViewAttachedToWindow_22717_ID_; }
    static jmethodID onViewDetachedFromWindow_22718_ID_;
    static jmethodID& onViewDetachedFromWindow_22718_ID() { return onViewDetachedFromWindow_22718_ID_; }

    void onViewAttachedToWindow(::g::Android::android::view::View* arg0);
    void onViewDetachedFromWindow(::g::Android::android::view::View* arg0);
    static void onViewAttachedToWindow_IMPL_22717(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onViewDetachedFromWindow_IMPL_22718(bool arg0_, jobject arg1_, uObject* arg2_);
};
// }

}}} // ::g::Android::Fallbacks
