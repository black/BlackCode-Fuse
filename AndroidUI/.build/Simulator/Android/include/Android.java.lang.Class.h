// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\java\lang\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace java{namespace lang{namespace reflect{struct Field;}}}}}
namespace g{namespace Android{namespace java{namespace lang{struct Class;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace java{
namespace lang{

// public sealed extern class Class :9021
// {
::g::Android::java::lang::Object_type* Class_typeof();
void Class___Init2_fn();
void Class__forName_fn(::g::Android::java::lang::String* arg0, Class** __retval);
void Class__forName_IMPL_30884_fn(uObject* arg0_, uObject** __retval);
void Class__getDeclaredField_fn(Class* __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::lang::reflect::Field** __retval);
void Class__getDeclaredField_IMPL_30898_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);
void Class__toString_fn(Class* __this, ::g::Android::java::lang::String** __retval);
void Class__toString_IMPL_30936_fn(bool* arg0_, jobject* arg1_, uObject** __retval);

struct Class : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID forName_30884_ID_;
    static jmethodID& forName_30884_ID() { return forName_30884_ID_; }
    static jmethodID getDeclaredField_30898_ID_;
    static jmethodID& getDeclaredField_30898_ID() { return getDeclaredField_30898_ID_; }
    static jmethodID toString_30936_ID_;
    static jmethodID& toString_30936_ID() { return toString_30936_ID_; }

    ::g::Android::java::lang::reflect::Field* getDeclaredField(::g::Android::java::lang::String* arg0);
    static void _Init2();
    static Class* forName(::g::Android::java::lang::String* arg0);
    static uObject* forName_IMPL_30884(uObject* arg0_);
    static uObject* getDeclaredField_IMPL_30898(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* toString_IMPL_30936(bool arg0_, jobject arg1_);
};
// }

}}}} // ::g::Android::java::lang
