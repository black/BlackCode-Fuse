// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\content\res\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{namespace res{struct ColorStateList;}}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace content{
namespace res{

// public sealed extern class ColorStateList :688
// {
::g::Android::java::lang::Object_type* ColorStateList_typeof();
void ColorStateList___Init2_fn();
void ColorStateList__getDefaultColor_fn(ColorStateList* __this, int* __retval);
void ColorStateList__getDefaultColor_IMPL_3525_fn(bool* arg0_, jobject* arg1_, int* __retval);
void ColorStateList__toString_fn(ColorStateList* __this, ::g::Android::java::lang::String** __retval);
void ColorStateList__toString_IMPL_3526_fn(bool* arg0_, jobject* arg1_, uObject** __retval);

struct ColorStateList : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID getDefaultColor_3525_ID_;
    static jmethodID& getDefaultColor_3525_ID() { return getDefaultColor_3525_ID_; }
    static jmethodID toString_3526_ID_;
    static jmethodID& toString_3526_ID() { return toString_3526_ID_; }

    int getDefaultColor();
    static void _Init2();
    static int getDefaultColor_IMPL_3525(bool arg0_, jobject arg1_);
    static uObject* toString_IMPL_3526(bool arg0_, jobject arg1_);
};
// }

}}}}} // ::g::Android::android::content::res
