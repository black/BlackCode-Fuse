// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_CHOREOGRAPHER_H__
#define __APP_ANDROID_ANDROID_VIEW_CHOREOGRAPHER_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace android {
namespace view {

struct Choreographer;

extern jclass Choreographer___javaClass_2;
extern jmethodID Choreographer__getInstance_21644_ID;
extern jmethodID Choreographer__postFrameCallback_21645_ID;

struct Choreographer__uType : ::app::Android::java::lang::Object__uType
{
};

Choreographer__uType* Choreographer__typeof();

void Choreographer___Init_2(::uStatic* __this);
Choreographer* Choreographer__getInstance(::uStatic* __this);
::uObject* Choreographer__getInstance_IMPL_21644(::uStatic* __this);
void Choreographer__postFrameCallback(Choreographer* __this, ::uObject* arg0);
void Choreographer__postFrameCallback_IMPL_21645(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);

struct Choreographer : ::app::Android::java::lang::Object
{
    void postFrameCallback(::uObject* arg0) { Choreographer__postFrameCallback(this, arg0); }
};

}}}}


#endif
