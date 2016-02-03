// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Targets\CPlusPlus\Android\Source\Base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_BASE_TYPES_STRING_H__
#define __APP_ANDROID_BASE_TYPES_STRING_H__

#include <android/log.h>
#include <app/Android.Base.JNI.h>
#include <jni.h>
#include <Uno.h>
#include <Xli.h>
#include <XliPlatform/PlatformSpecific/Android.h>

namespace app {
namespace Android {
namespace Base {
namespace Types {

struct String__uType : ::uClassType
{
};

String__uType* String__typeof();

::uString* String__JavaToUno(::uStatic* __this, ::uObject* jstr);
::uString* String__JavaToUno_1(::uStatic* __this, JNIEnv* jni_, jobject jstr_);
::uString* String__JavaToUno_2(::uStatic* __this, jobject jstr);
jobject String__UnoToJava(::uStatic* __this, JNIEnv* jni_, ::uString* str_);
jobject String__UnoToJava_1(::uStatic* __this, ::uString* str);

}}}}


#endif
