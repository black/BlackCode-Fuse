// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\view\animation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace view{namespace animation{struct Transformation;}}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace view{
namespace animation{

// public sealed extern class Transformation :2824
// {
::g::Android::java::lang::Object_type* Transformation_typeof();
void Transformation___Init2_fn();
void Transformation__toString_fn(Transformation* __this, ::g::Android::java::lang::String** __retval);
void Transformation__toString_IMPL_21241_fn(bool* arg0_, jobject* arg1_, uObject** __retval);

struct Transformation : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID toString_21241_ID_;
    static jmethodID& toString_21241_ID() { return toString_21241_ID_; }

    static void _Init2();
    static uObject* toString_IMPL_21241(bool arg0_, jobject arg1_);
};
// }

}}}}} // ::g::Android::android::view::animation
