// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.ActionModeDLRCallback.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace view{struct ActionMode;}}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_view_ActionModeDLRCallback;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_view_ActionModeDLRCallback :18206
// {
struct Android_android_view_ActionModeDLRCallback_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::view::ActionModeDLRCallback interface2;
};

Android_android_view_ActionModeDLRCallback_type* Android_android_view_ActionModeDLRCallback_typeof();
void Android_android_view_ActionModeDLRCallback__onActionItemClicked_fn(Android_android_view_ActionModeDLRCallback* __this, ::g::Android::android::view::ActionMode* arg0, uObject* arg1, bool* __retval);
void Android_android_view_ActionModeDLRCallback__onActionItemClicked_IMPL_21611_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, bool* __retval);
void Android_android_view_ActionModeDLRCallback__onCreateActionMode_fn(Android_android_view_ActionModeDLRCallback* __this, ::g::Android::android::view::ActionMode* arg0, uObject* arg1, bool* __retval);
void Android_android_view_ActionModeDLRCallback__onCreateActionMode_IMPL_21609_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, bool* __retval);
void Android_android_view_ActionModeDLRCallback__onDestroyActionMode_fn(Android_android_view_ActionModeDLRCallback* __this, ::g::Android::android::view::ActionMode* arg0);
void Android_android_view_ActionModeDLRCallback__onDestroyActionMode_IMPL_21612_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void Android_android_view_ActionModeDLRCallback__onPrepareActionMode_fn(Android_android_view_ActionModeDLRCallback* __this, ::g::Android::android::view::ActionMode* arg0, uObject* arg1, bool* __retval);
void Android_android_view_ActionModeDLRCallback__onPrepareActionMode_IMPL_21610_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, bool* __retval);

struct Android_android_view_ActionModeDLRCallback : ::g::Android::java::lang::Object
{
    static jmethodID onActionItemClicked_21611_ID_;
    static jmethodID& onActionItemClicked_21611_ID() { return onActionItemClicked_21611_ID_; }
    static jmethodID onCreateActionMode_21609_ID_;
    static jmethodID& onCreateActionMode_21609_ID() { return onCreateActionMode_21609_ID_; }
    static jmethodID onDestroyActionMode_21612_ID_;
    static jmethodID& onDestroyActionMode_21612_ID() { return onDestroyActionMode_21612_ID_; }
    static jmethodID onPrepareActionMode_21610_ID_;
    static jmethodID& onPrepareActionMode_21610_ID() { return onPrepareActionMode_21610_ID_; }

    bool onActionItemClicked(::g::Android::android::view::ActionMode* arg0, uObject* arg1);
    bool onCreateActionMode(::g::Android::android::view::ActionMode* arg0, uObject* arg1);
    void onDestroyActionMode(::g::Android::android::view::ActionMode* arg0);
    bool onPrepareActionMode(::g::Android::android::view::ActionMode* arg0, uObject* arg1);
    static bool onActionItemClicked_IMPL_21611(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
    static bool onCreateActionMode_IMPL_21609(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
    static void onDestroyActionMode_IMPL_21612(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool onPrepareActionMode_IMPL_21610(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
};
// }

}}} // ::g::Android::Fallbacks
