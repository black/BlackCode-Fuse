// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.content.Context.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{namespace res{struct Resources;}}}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_content_Context;}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_content_Context :1973
// {
::g::Android::android::content::Context_type* Android_android_content_Context_typeof();
void Android_android_content_Context__getResources_fn(Android_android_content_Context* __this, ::g::Android::android::content::res::Resources** __retval);
void Android_android_content_Context__getResources_IMPL_44466_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void Android_android_content_Context__getSystemService_fn(Android_android_content_Context* __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::lang::Object** __retval);
void Android_android_content_Context__getSystemService_IMPL_44532_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);

struct Android_android_content_Context : ::g::Android::android::content::Context
{
    static jmethodID getResources_44466_ID_;
    static jmethodID& getResources_44466_ID() { return getResources_44466_ID_; }
    static jmethodID getSystemService_44532_ID_;
    static jmethodID& getSystemService_44532_ID() { return getSystemService_44532_ID_; }

    static uObject* getResources_IMPL_44466(bool arg0_, jobject arg1_);
    static uObject* getSystemService_IMPL_44532(bool arg0_, jobject arg1_, uObject* arg2_);
};
// }

}}} // ::g::Android::Fallbacks
