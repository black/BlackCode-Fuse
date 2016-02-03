// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\java\lang\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <Android.java.lang.Runnable.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Thread;}}}}

namespace g{
namespace Android{
namespace java{
namespace lang{

// public sealed extern class Thread :1457
// {
struct Thread_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::java::lang::Runnable interface2;
};

Thread_type* Thread_typeof();
void Thread__ctor_6_fn(Thread* __this, uObject* arg0);
void Thread___Init2_fn();
void Thread__New7_fn(uObject* arg0, Thread** __retval);
void Thread__run_fn(Thread* __this);
void Thread__run_IMPL_31761_fn(bool* arg0_, jobject* arg1_);
void Thread__start_fn(Thread* __this);
void Thread__start_IMPL_31770_fn(bool* arg0_, jobject* arg1_);
void Thread__stop_fn(Thread* __this);
void Thread__stop_IMPL_31771_fn(bool* arg0_, jobject* arg1_);
void Thread__toString_fn(Thread* __this, ::g::Android::java::lang::String** __retval);
void Thread__toString_IMPL_31774_fn(bool* arg0_, jobject* arg1_, uObject** __retval);

struct Thread : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID run_31761_ID_;
    static jmethodID& run_31761_ID() { return run_31761_ID_; }
    static jmethodID start_31770_ID_;
    static jmethodID& start_31770_ID() { return start_31770_ID_; }
    static jmethodID stop_31771_ID_;
    static jmethodID& stop_31771_ID() { return stop_31771_ID_; }
    static jmethodID Thread_31728_ID_c_;
    static jmethodID& Thread_31728_ID_c() { return Thread_31728_ID_c_; }
    static jmethodID toString_31774_ID_;
    static jmethodID& toString_31774_ID() { return toString_31774_ID_; }

    void ctor_6(uObject* arg0);
    void run();
    void start();
    void stop();
    static void _Init2();
    static Thread* New7(uObject* arg0);
    static void run_IMPL_31761(bool arg0_, jobject arg1_);
    static void start_IMPL_31770(bool arg0_, jobject arg1_);
    static void stop_IMPL_31771(bool arg0_, jobject arg1_);
    static uObject* toString_IMPL_31774(bool arg0_, jobject arg1_);
};
// }

}}}} // ::g::Android::java::lang
