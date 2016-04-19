// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.ViewGroup.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{struct Context;}}}}
namespace g{namespace Android{namespace android{namespace widget{struct RelativeLayout;}}}}

namespace g{
namespace Android{
namespace android{
namespace widget{

// public extern class RelativeLayout :10647
// {
::g::Android::android::view::ViewGroup_type* RelativeLayout_typeof();
void RelativeLayout__ctor_12_fn(RelativeLayout* __this, ::g::Android::android::content::Context* arg0);
void RelativeLayout__ctor_15_fn(RelativeLayout* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType);
void RelativeLayout___Init4_fn();
void RelativeLayout__New9_fn(::g::Android::android::content::Context* arg0, RelativeLayout** __retval);
void RelativeLayout__requestLayout_fn(RelativeLayout* __this);
void RelativeLayout__requestLayout_IMPL_25974_fn(bool* arg0_, jobject* arg1_);

struct RelativeLayout : ::g::Android::android::view::ViewGroup
{
    static jclass _javaClass4_;
    static jclass& _javaClass4() { return _javaClass4_; }
    static jmethodID RelativeLayout_25964_ID_c_;
    static jmethodID& RelativeLayout_25964_ID_c() { return RelativeLayout_25964_ID_c_; }
    static jmethodID requestLayout_25974_ID_;
    static jmethodID& requestLayout_25974_ID() { return requestLayout_25974_ID_; }

    void ctor_12(::g::Android::android::content::Context* arg0);
    void ctor_15(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    static void _Init4();
    static RelativeLayout* New9(::g::Android::android::content::Context* arg0);
    static void requestLayout_IMPL_25974(bool arg0_, jobject arg1_);
};
// }

}}}} // ::g::Android::android::widget
