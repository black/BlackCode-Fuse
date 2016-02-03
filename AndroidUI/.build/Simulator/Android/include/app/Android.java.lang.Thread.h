// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\java\lang\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_JAVA_LANG_THREAD_H__
#define __APP_ANDROID_JAVA_LANG_THREAD_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Android.java.lang.Runnable.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }

namespace app {
namespace Android {
namespace java {
namespace lang {

struct Thread;

extern jclass Thread___javaClass_2;
extern jmethodID Thread__run_31761_ID;
extern jmethodID Thread__start_31770_ID;
extern jmethodID Thread__stop_31771_ID;
extern jmethodID Thread__Thread_31728_ID_c;
extern jmethodID Thread__toString_31774_ID;

struct Thread__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::java::lang::Runnable __interface_2;
};

Thread__uType* Thread__typeof();

void Thread___Init_2(::uStatic* __this);
void Thread___ObjInit_5(Thread* __this, ::uObject* arg0);
Thread* Thread__New_6(::uStatic* __this, ::uObject* arg0);
void Thread__run(Thread* __this);
void Thread__run_IMPL_31761(::uStatic* __this, bool arg0_, jobject arg1_);
void Thread__start(Thread* __this);
void Thread__start_IMPL_31770(::uStatic* __this, bool arg0_, jobject arg1_);
void Thread__stop(Thread* __this);
void Thread__stop_IMPL_31771(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::java::lang::String* Thread__toString(Thread* __this);
::uObject* Thread__toString_IMPL_31774(::uStatic* __this, bool arg0_, jobject arg1_);

struct Thread : ::app::Android::java::lang::Object
{
    void _ObjInit_5(::uObject* arg0) { Thread___ObjInit_5(this, arg0); }
    void run() { Thread__run(this); }
    void start() { Thread__start(this); }
    void stop() { Thread__stop(this); }
};

}}}}


#endif
