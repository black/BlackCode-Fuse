// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\java\lang\reflect\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_JAVA_LANG_REFLECT_ACCESSIBLE_OBJECT_H__
#define __APP_ANDROID_JAVA_LANG_REFLECT_ACCESSIBLE_OBJECT_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace java {
namespace lang {
namespace reflect {

struct AccessibleObject;

extern jclass AccessibleObject___javaClass_2;
extern jmethodID AccessibleObject__setAccessible_30251_ID;

struct AccessibleObject__uType : ::app::Android::java::lang::Object__uType
{
};

AccessibleObject__uType* AccessibleObject__typeof();

void AccessibleObject___Init_2(::uStatic* __this);
void AccessibleObject__setAccessible(AccessibleObject* __this, bool arg0);
void AccessibleObject__setAccessible_IMPL_30251(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);

struct AccessibleObject : ::app::Android::java::lang::Object
{
    void setAccessible(bool arg0) { AccessibleObject__setAccessible(this, arg0); }
};

}}}}}


#endif
