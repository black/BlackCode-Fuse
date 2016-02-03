// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <Android.java.lang.Runnable.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace Runtime{struct RunnableAction;}}}

namespace g{
namespace Android{
namespace Runtime{

// public sealed extern class RunnableAction :58
// {
struct RunnableAction_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::java::lang::Runnable interface2;
};

RunnableAction_type* RunnableAction_typeof();
void RunnableAction__ctor_4_fn(RunnableAction* __this, uDelegate* actn);
void RunnableAction__New5_fn(uDelegate* actn, RunnableAction** __retval);
void RunnableAction__run_fn(RunnableAction* __this);

struct RunnableAction : ::g::Android::java::lang::Object
{
    uStrong<uDelegate*> _internalAction;
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }

    void ctor_4(uDelegate* actn);
    void run();
    static RunnableAction* New5(uDelegate* actn);
};
// }

}}} // ::g::Android::Runtime
