// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.content.ContextWrapper.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{namespace res{struct Resources;}}}}}
namespace g{namespace Android{namespace android{namespace view{struct ContextThemeWrapper;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace view{

// public extern class ContextThemeWrapper :11
// {
::g::Android::android::content::Context_type* ContextThemeWrapper_typeof();
void ContextThemeWrapper__ctor_10_fn(ContextThemeWrapper* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType);
void ContextThemeWrapper___Init4_fn();
void ContextThemeWrapper__getResources_fn(ContextThemeWrapper* __this, ::g::Android::android::content::res::Resources** __retval);
void ContextThemeWrapper__getResources_IMPL_21660_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void ContextThemeWrapper__getSystemService_fn(ContextThemeWrapper* __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::lang::Object** __retval);
void ContextThemeWrapper__getSystemService_IMPL_21663_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);

struct ContextThemeWrapper : ::g::Android::android::content::ContextWrapper
{
    static jclass _javaClass4_;
    static jclass& _javaClass4() { return _javaClass4_; }
    static jmethodID getResources_21660_ID_;
    static jmethodID& getResources_21660_ID() { return getResources_21660_ID_; }
    static jmethodID getSystemService_21663_ID_;
    static jmethodID& getSystemService_21663_ID() { return getSystemService_21663_ID_; }

    void ctor_10(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    static void _Init4();
    static uObject* getResources_IMPL_21660(bool arg0_, jobject arg1_);
    static uObject* getSystemService_IMPL_21663(bool arg0_, jobject arg1_, uObject* arg2_);
};
// }

}}}} // ::g::Android::android::view
