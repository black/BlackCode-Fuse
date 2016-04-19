// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.ChoreographerDLRFrameCallback.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace Fallbacks{struct Android_android_view_ChoreographerDLRFrameCallback;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_view_ChoreographerDLRFrameCallback :18280
// {
struct Android_android_view_ChoreographerDLRFrameCallback_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::view::ChoreographerDLRFrameCallback interface2;
};

Android_android_view_ChoreographerDLRFrameCallback_type* Android_android_view_ChoreographerDLRFrameCallback_typeof();
void Android_android_view_ChoreographerDLRFrameCallback__doFrame_fn(Android_android_view_ChoreographerDLRFrameCallback* __this, int64_t* arg0);
void Android_android_view_ChoreographerDLRFrameCallback__doFrame_IMPL_21642_fn(bool* arg0_, jobject* arg1_, int64_t* arg2_);

struct Android_android_view_ChoreographerDLRFrameCallback : ::g::Android::java::lang::Object
{
    static jmethodID doFrame_21642_ID_;
    static jmethodID& doFrame_21642_ID() { return doFrame_21642_ID_; }

    void doFrame(int64_t arg0);
    static void doFrame_IMPL_21642(bool arg0_, jobject arg1_, int64_t arg2_);
};
// }

}}} // ::g::Android::Fallbacks
