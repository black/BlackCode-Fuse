// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\util\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_UTIL_TYPED_VALUE_H__
#define __APP_ANDROID_ANDROID_UTIL_TYPED_VALUE_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }

namespace app {
namespace Android {
namespace android {
namespace util {

struct TypedValue;

extern jclass TypedValue___javaClass_2;
extern jfieldID TypedValue__COMPLEX_UNIT_DIP_20678_ID;
extern jmethodID TypedValue__toString_20716_ID;

struct TypedValue__uType : ::app::Android::java::lang::Object__uType
{
};

TypedValue__uType* TypedValue__typeof();

void TypedValue___Init_2(::uStatic* __this);
int TypedValue__get_COMPLEX_UNIT_DIP(::uStatic* __this);
::app::Android::java::lang::String* TypedValue__toString(TypedValue* __this);
::uObject* TypedValue__toString_IMPL_20716(::uStatic* __this, bool arg0_, jobject arg1_);

struct TypedValue : ::app::Android::java::lang::Object
{
};

}}}}


#endif
