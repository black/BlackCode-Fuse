// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\java\lang\reflect\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace java{namespace lang{namespace reflect{struct AccessibleObject;}}}}}

namespace g{
namespace Android{
namespace java{
namespace lang{
namespace reflect{

// public extern class AccessibleObject :11
// {
::g::Android::java::lang::Object_type* AccessibleObject_typeof();
void AccessibleObject___Init2_fn();
void AccessibleObject__setAccessible1_fn(AccessibleObject* __this, bool* arg0);
void AccessibleObject__setAccessible_IMPL_30251_fn(bool* arg0_, jobject* arg1_, bool* arg2_);

struct AccessibleObject : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID setAccessible_30251_ID_;
    static jmethodID& setAccessible_30251_ID() { return setAccessible_30251_ID_; }

    void setAccessible1(bool arg0);
    static void _Init2();
    static void setAccessible_IMPL_30251(bool arg0_, jobject arg1_, bool arg2_);
};
// }

}}}}} // ::g::Android::java::lang::reflect
