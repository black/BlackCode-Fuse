// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\java\lang\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace java{namespace lang{struct System;}}}}

namespace g{
namespace Android{
namespace java{
namespace lang{

// public sealed extern class System :17625
// {
::g::Android::java::lang::Object_type* System_typeof();
void System___Init2_fn();
void System__nanoTime_fn(int64_t* __retval);
void System__nanoTime_IMPL_31693_fn(int64_t* __retval);

struct System : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID nanoTime_31693_ID_;
    static jmethodID& nanoTime_31693_ID() { return nanoTime_31693_ID_; }

    static void _Init2();
    static int64_t nanoTime();
    static int64_t nanoTime_IMPL_31693();
};
// }

}}}} // ::g::Android::java::lang
