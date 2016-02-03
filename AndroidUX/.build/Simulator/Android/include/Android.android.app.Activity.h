// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\app\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.ContextThemeWrapper.h>
#include <Android.android.view.ViewDLROnCreateContextMenuListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace app{struct Activity;}}}}
namespace g{namespace Android{namespace android{namespace content{struct Intent;}}}}
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Object;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace app{

// public sealed extern class Activity :1260
// {
struct Activity_type : ::g::Android::android::content::Context_type
{
    ::g::Android::android::view::ViewDLROnCreateContextMenuListener interface2;
};

Activity_type* Activity_typeof();
void Activity__ctor_12_fn(Activity* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType);
void Activity___Init5_fn();
void Activity__GetAppActivity_fn(Activity** __retval);
void Activity__getSystemService_fn(Activity* __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::lang::Object** __retval);
void Activity__getSystemService_IMPL_847_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);
void Activity__New11_fn(jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType, Activity** __retval);
void Activity__onCreateContextMenu_fn(Activity* __this, uObject* arg0, ::g::Android::android::view::View* arg1, uObject* arg2);
void Activity__onCreateContextMenu_IMPL_775_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_);
void Activity__runOnUiThread_fn(Activity* __this, uObject* arg0);
void Activity__runOnUiThread_IMPL_862_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void Activity__startActivity_fn(Activity* __this, ::g::Android::android::content::Intent* arg0);
void Activity__startActivity_IMPL_806_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);

struct Activity : ::g::Android::android::view::ContextThemeWrapper
{
    static jclass _javaClass5_;
    static jclass& _javaClass5() { return _javaClass5_; }
    static jmethodID getSystemService_847_ID_;
    static jmethodID& getSystemService_847_ID() { return getSystemService_847_ID_; }
    static jmethodID onCreateContextMenu_775_ID_;
    static jmethodID& onCreateContextMenu_775_ID() { return onCreateContextMenu_775_ID_; }
    static jmethodID runOnUiThread_862_ID_;
    static jmethodID& runOnUiThread_862_ID() { return runOnUiThread_862_ID_; }
    static jmethodID startActivity_806_ID_;
    static jmethodID& startActivity_806_ID() { return startActivity_806_ID_; }

    void ctor_12(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    void onCreateContextMenu(uObject* arg0, ::g::Android::android::view::View* arg1, uObject* arg2);
    void runOnUiThread(uObject* arg0);
    void startActivity(::g::Android::android::content::Intent* arg0);
    static void _Init5();
    static Activity* GetAppActivity();
    static uObject* getSystemService_IMPL_847(bool arg0_, jobject arg1_, uObject* arg2_);
    static Activity* New11(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    static void onCreateContextMenu_IMPL_775(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_);
    static void runOnUiThread_IMPL_862(bool arg0_, jobject arg1_, uObject* arg2_);
    static void startActivity_IMPL_806(bool arg0_, jobject arg1_, uObject* arg2_);
};
// }

}}}} // ::g::Android::android::app
