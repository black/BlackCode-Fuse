// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.widget.TextView.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{struct Context;}}}}
namespace g{namespace Android{namespace android{namespace text{struct TextUtilsDLRTruncateAt;}}}}
namespace g{namespace Android{namespace android{namespace widget{struct EditText;}}}}

namespace g{
namespace Android{
namespace android{
namespace widget{

// public sealed extern class EditText :8497
// {
::g::Android::android::widget::TextView_type* EditText_typeof();
void EditText__ctor_12_fn(EditText* __this, ::g::Android::android::content::Context* arg0);
void EditText___Init4_fn();
void EditText__New13_fn(::g::Android::android::content::Context* arg0, EditText** __retval);
void EditText__setEllipsize_fn(EditText* __this, ::g::Android::android::text::TextUtilsDLRTruncateAt* arg0);
void EditText__setEllipsize_IMPL_25077_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);

struct EditText : ::g::Android::android::widget::TextView
{
    static jclass _javaClass4_;
    static jclass& _javaClass4() { return _javaClass4_; }
    static jmethodID EditText_25066_ID_c_;
    static jmethodID& EditText_25066_ID_c() { return EditText_25066_ID_c_; }
    static jmethodID setEllipsize_25077_ID_;
    static jmethodID& setEllipsize_25077_ID() { return setEllipsize_25077_ID_; }

    void ctor_12(::g::Android::android::content::Context* arg0);
    static void _Init4();
    static EditText* New13(::g::Android::android::content::Context* arg0);
    static void setEllipsize_IMPL_25077(bool arg0_, jobject arg1_, uObject* arg2_);
};
// }

}}}} // ::g::Android::android::widget
