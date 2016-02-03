// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\os\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace os{struct Handler;}}}}
namespace g{namespace Android{namespace android{namespace os{struct Looper;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace os{

// public extern class Handler :11
// {
::g::Android::java::lang::Object_type* Handler_typeof();
void Handler__ctor_6_fn(Handler* __this, ::g::Android::android::os::Looper* arg0);
void Handler___Init2_fn();
void Handler__New7_fn(::g::Android::android::os::Looper* arg0, Handler** __retval);
void Handler__post_fn(Handler* __this, uObject* arg0, bool* __retval);
void Handler__post_IMPL_13788_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void Handler__postDelayed_fn(Handler* __this, uObject* arg0, int64_t* arg1, bool* __retval);
void Handler__postDelayed_IMPL_13791_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int64_t* arg3_, bool* __retval);
void Handler__toString_fn(Handler* __this, ::g::Android::java::lang::String** __retval);
void Handler__toString_IMPL_13809_fn(bool* arg0_, jobject* arg1_, uObject** __retval);

struct Handler : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID Handler_13778_ID_c_;
    static jmethodID& Handler_13778_ID_c() { return Handler_13778_ID_c_; }
    static jmethodID post_13788_ID_;
    static jmethodID& post_13788_ID() { return post_13788_ID_; }
    static jmethodID postDelayed_13791_ID_;
    static jmethodID& postDelayed_13791_ID() { return postDelayed_13791_ID_; }
    static jmethodID toString_13809_ID_;
    static jmethodID& toString_13809_ID() { return toString_13809_ID_; }

    void ctor_6(::g::Android::android::os::Looper* arg0);
    bool post(uObject* arg0);
    bool postDelayed(uObject* arg0, int64_t arg1);
    static void _Init2();
    static Handler* New7(::g::Android::android::os::Looper* arg0);
    static bool post_IMPL_13788(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool postDelayed_IMPL_13791(bool arg0_, jobject arg1_, uObject* arg2_, int64_t arg3_);
    static uObject* toString_IMPL_13809(bool arg0_, jobject arg1_);
};
// }

}}}} // ::g::Android::android::os
