// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace graphics{struct Color;}}}}

namespace g{
namespace Android{
namespace android{
namespace graphics{

// public sealed extern class Color :4713
// {
::g::Android::java::lang::Object_type* Color_typeof();
void Color___Init2_fn();
void Color__argb_fn(int* arg0, int* arg1, int* arg2, int* arg3, int* __retval);
void Color__argb_IMPL_6680_fn(int* arg0_, int* arg1_, int* arg2_, int* arg3_, int* __retval);

struct Color : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID argb_6680_ID_;
    static jmethodID& argb_6680_ID() { return argb_6680_ID_; }

    static void _Init2();
    static int argb(int arg0, int arg1, int arg2, int arg3);
    static int argb_IMPL_6680(int arg0_, int arg1_, int arg2_, int arg3_);
};
// }

}}}} // ::g::Android::android::graphics
