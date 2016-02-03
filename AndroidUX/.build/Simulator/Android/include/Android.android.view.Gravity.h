// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace view{struct Gravity;}}}}

namespace g{
namespace Android{
namespace android{
namespace view{

// public sealed extern class Gravity :10549
// {
::g::Android::java::lang::Object_type* Gravity_typeof();
void Gravity___Init2_fn();
void Gravity__get_CENTER_HORIZONTAL_fn(int* __retval);
void Gravity__get_LEFT_fn(int* __retval);
void Gravity__get_RIGHT_fn(int* __retval);

struct Gravity : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jfieldID CENTER_HORIZONTAL_21752_ID_;
    static jfieldID& CENTER_HORIZONTAL_21752_ID() { return CENTER_HORIZONTAL_21752_ID_; }
    static jfieldID LEFT_21748_ID_;
    static jfieldID& LEFT_21748_ID() { return LEFT_21748_ID_; }
    static jfieldID RIGHT_21749_ID_;
    static jfieldID& RIGHT_21749_ID() { return RIGHT_21749_ID_; }

    static void _Init2();
    static int CENTER_HORIZONTAL();
    static int LEFT();
    static int RIGHT();
};
// }

}}}} // ::g::Android::android::view
