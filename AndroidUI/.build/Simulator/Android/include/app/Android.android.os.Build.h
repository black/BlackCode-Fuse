// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\os\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_OS_BUILD_H__
#define __APP_ANDROID_ANDROID_OS_BUILD_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }

namespace app {
namespace Android {
namespace android {
namespace os {

struct Build;

extern jclass Build___javaClass_2;
extern jfieldID Build__MODEL_13483_ID;
extern jfieldID Build__SERIAL_13487_ID;

struct Build__uType : ::app::Android::java::lang::Object__uType
{
};

Build__uType* Build__typeof();

void Build___Init_2(::uStatic* __this);
::app::Android::java::lang::String* Build__get_MODEL(::uStatic* __this);
::app::Android::java::lang::String* Build__get_SERIAL(::uStatic* __this);

struct Build : ::app::Android::java::lang::Object
{
};

}}}}


#endif
