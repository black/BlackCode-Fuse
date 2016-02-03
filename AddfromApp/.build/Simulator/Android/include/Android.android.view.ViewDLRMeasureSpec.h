// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace view{struct ViewDLRMeasureSpec;}}}}

namespace g{
namespace Android{
namespace android{
namespace view{

// public sealed extern class ViewDLRMeasureSpec :22284
// {
::g::Android::java::lang::Object_type* ViewDLRMeasureSpec_typeof();
void ViewDLRMeasureSpec___Init2_fn();
void ViewDLRMeasureSpec__get_EXACTLY_fn(int* __retval);
void ViewDLRMeasureSpec__makeMeasureSpec_fn(int* arg0, int* arg1, int* __retval);
void ViewDLRMeasureSpec__makeMeasureSpec_IMPL_22713_fn(int* arg0_, int* arg1_, int* __retval);
void ViewDLRMeasureSpec__get_UNSPECIFIED_fn(int* __retval);

struct ViewDLRMeasureSpec : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jfieldID EXACTLY_22710_ID_;
    static jfieldID& EXACTLY_22710_ID() { return EXACTLY_22710_ID_; }
    static jmethodID makeMeasureSpec_22713_ID_;
    static jmethodID& makeMeasureSpec_22713_ID() { return makeMeasureSpec_22713_ID_; }
    static jfieldID UNSPECIFIED_22709_ID_;
    static jfieldID& UNSPECIFIED_22709_ID() { return UNSPECIFIED_22709_ID_; }

    static void _Init2();
    static int makeMeasureSpec(int arg0, int arg1);
    static int makeMeasureSpec_IMPL_22713(int arg0_, int arg1_);
    static int EXACTLY();
    static int UNSPECIFIED();
};
// }

}}}} // ::g::Android::android::view
