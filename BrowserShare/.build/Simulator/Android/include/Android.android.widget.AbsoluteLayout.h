// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.ViewGroup.h>
#include <Android.android.view.ViewParent.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace view{struct ViewGroupDLRLayoutParams;}}}}
namespace g{namespace Android{namespace android{namespace widget{struct AbsoluteLayout;}}}}

namespace g{
namespace Android{
namespace android{
namespace widget{

// public extern class AbsoluteLayout :7534
// {
::g::Android::android::view::ViewGroup_type* AbsoluteLayout_typeof();
void AbsoluteLayout__ctor_15_fn(AbsoluteLayout* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType);
void AbsoluteLayout___Init4_fn();
void AbsoluteLayout__generateLayoutParams_fn(AbsoluteLayout* __this, uObject* arg0, ::g::Android::android::view::ViewGroupDLRLayoutParams** __retval);
void AbsoluteLayout__generateLayoutParams_IMPL_24586_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);
void AbsoluteLayout__shouldDelayChildPressedState_fn(AbsoluteLayout* __this, bool* __retval);
void AbsoluteLayout__shouldDelayChildPressedState_IMPL_24589_fn(bool* arg0_, jobject* arg1_, bool* __retval);

struct AbsoluteLayout : ::g::Android::android::view::ViewGroup
{
    static jclass _javaClass4_;
    static jclass& _javaClass4() { return _javaClass4_; }
    static jmethodID generateLayoutParams_24586_ID_;
    static jmethodID& generateLayoutParams_24586_ID() { return generateLayoutParams_24586_ID_; }
    static jmethodID shouldDelayChildPressedState_24589_ID_;
    static jmethodID& shouldDelayChildPressedState_24589_ID() { return shouldDelayChildPressedState_24589_ID_; }

    void ctor_15(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    static void _Init4();
    static uObject* generateLayoutParams_IMPL_24586(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool shouldDelayChildPressedState_IMPL_24589(bool arg0_, jobject arg1_);
};
// }

}}}} // ::g::Android::android::widget
