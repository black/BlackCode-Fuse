// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_RUNTIME_RUNNABLE_ACTION_H__
#define __APP_ANDROID_RUNTIME_RUNNABLE_ACTION_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Android.java.lang.Runnable.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace Runtime {

struct RunnableAction;

extern jclass RunnableAction___javaClass_2;

struct RunnableAction__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::java::lang::Runnable __interface_2;
};

RunnableAction__uType* RunnableAction__typeof();

void RunnableAction___ObjInit_4(RunnableAction* __this, ::uDelegate* actn);
RunnableAction* RunnableAction__New_5(::uStatic* __this, ::uDelegate* actn);
void RunnableAction__run(RunnableAction* __this);

struct RunnableAction : ::app::Android::java::lang::Object
{
    ::uStrong< ::uDelegate*> _internalAction;

    void _ObjInit_4(::uDelegate* actn) { RunnableAction___ObjInit_4(this, actn); }
    void run() { RunnableAction__run(this); }
};

}}}


#endif
