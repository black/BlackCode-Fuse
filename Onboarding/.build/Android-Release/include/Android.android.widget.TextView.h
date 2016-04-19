// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.View.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{namespace res{struct ColorStateList;}}}}}
namespace g{namespace Android{namespace android{namespace content{struct Context;}}}}
namespace g{namespace Android{namespace android{namespace graphics{struct Typeface;}}}}
namespace g{namespace Android{namespace android{namespace text{struct TextUtilsDLRTruncateAt;}}}}
namespace g{namespace Android{namespace android{namespace view{struct MotionEvent;}}}}
namespace g{namespace Android{namespace android{namespace widget{struct TextView;}}}}

namespace g{
namespace Android{
namespace android{
namespace widget{

// public extern class TextView :3399
// {
struct TextView_type : ::g::Android::android::view::View_type
{
    void(*fp_setEllipsize)(::g::Android::android::widget::TextView*, ::g::Android::android::text::TextUtilsDLRTruncateAt*);
};

TextView_type* TextView_typeof();
void TextView__ctor_8_fn(TextView* __this, ::g::Android::android::content::Context* arg0);
void TextView__ctor_11_fn(TextView* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType);
void TextView___Init3_fn();
void TextView__addTextChangedListener_fn(TextView* __this, uObject* arg0);
void TextView__addTextChangedListener_IMPL_26729_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void TextView__getTextColors_fn(TextView* __this, ::g::Android::android::content::res::ColorStateList** __retval);
void TextView__getTextColors_IMPL_26582_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void TextView__New9_fn(::g::Android::android::content::Context* arg0, TextView** __retval);
void TextView__onScrollChanged_fn(TextView* __this, int* arg0, int* arg1, int* arg2, int* arg3);
void TextView__onScrollChanged_IMPL_26761_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_);
void TextView__onTouchEvent_fn(TextView* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval);
void TextView__onTouchEvent_IMPL_26738_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void TextView__removeTextChangedListener_fn(TextView* __this, uObject* arg0);
void TextView__removeTextChangedListener_IMPL_26730_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void TextView__setEllipsize_fn(TextView* __this, ::g::Android::android::text::TextUtilsDLRTruncateAt* arg0);
void TextView__setEllipsize_IMPL_26720_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void TextView__setEnabled_fn(TextView* __this, bool* arg0);
void TextView__setEnabled_IMPL_26528_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void TextView__setGravity_fn(TextView* __this, int* arg0);
void TextView__setGravity_IMPL_26603_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void TextView__setHint_fn(TextView* __this, uObject* arg0);
void TextView__setHint_IMPL_26647_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void TextView__setHintTextColor1_fn(TextView* __this, int* arg0);
void TextView__setHintTextColor_IMPL_26596_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void TextView__setHorizontallyScrolling_fn(TextView* __this, bool* arg0);
void TextView__setHorizontallyScrolling_IMPL_26607_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void TextView__setImeOptions_fn(TextView* __this, int* arg0);
void TextView__setImeOptions_IMPL_26653_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void TextView__setIncludeFontPadding_fn(TextView* __this, bool* arg0);
void TextView__setIncludeFontPadding_IMPL_26706_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void TextView__setInputType_fn(TextView* __this, int* arg0);
void TextView__setInputType_IMPL_26650_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void TextView__setLineSpacing_fn(TextView* __this, float* arg0, float* arg1);
void TextView__setLineSpacing_IMPL_26628_fn(bool* arg0_, jobject* arg1_, float* arg2_, float* arg3_);
void TextView__setMaxLines_fn(TextView* __this, int* arg0);
void TextView__setMaxLines_IMPL_26612_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void TextView__setOnEditorActionListener_fn(TextView* __this, uObject* arg0);
void TextView__setOnEditorActionListener_IMPL_26658_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void TextView__setPadding_fn(TextView* __this, int* arg0, int* arg1, int* arg2, int* arg3);
void TextView__setPadding_IMPL_26567_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_);
void TextView__setPaddingRelative_fn(TextView* __this, int* arg0, int* arg1, int* arg2, int* arg3);
void TextView__setPaddingRelative_IMPL_26568_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_);
void TextView__setText_fn(TextView* __this, uObject* arg0);
void TextView__setText_IMPL_26640_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void TextView__setTextColor1_fn(TextView* __this, int* arg0);
void TextView__setTextColor_IMPL_26580_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void TextView__setTextSize1_fn(TextView* __this, int* arg0, float* arg1);
void TextView__setTextSize_IMPL_26575_fn(bool* arg0_, jobject* arg1_, int* arg2_, float* arg3_);
void TextView__setTypeface_fn(TextView* __this, ::g::Android::android::graphics::Typeface* arg0);
void TextView__setTypeface_IMPL_26578_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);

struct TextView : ::g::Android::android::view::View
{
    static jclass _javaClass3_;
    static jclass& _javaClass3() { return _javaClass3_; }
    static jmethodID addTextChangedListener_26729_ID_;
    static jmethodID& addTextChangedListener_26729_ID() { return addTextChangedListener_26729_ID_; }
    static jmethodID getTextColors_26582_ID_;
    static jmethodID& getTextColors_26582_ID() { return getTextColors_26582_ID_; }
    static jmethodID onScrollChanged_26761_ID_;
    static jmethodID& onScrollChanged_26761_ID() { return onScrollChanged_26761_ID_; }
    static jmethodID onTouchEvent_26738_ID_;
    static jmethodID& onTouchEvent_26738_ID() { return onTouchEvent_26738_ID_; }
    static jmethodID removeTextChangedListener_26730_ID_;
    static jmethodID& removeTextChangedListener_26730_ID() { return removeTextChangedListener_26730_ID_; }
    static jmethodID setEllipsize_26720_ID_;
    static jmethodID& setEllipsize_26720_ID() { return setEllipsize_26720_ID_; }
    static jmethodID setEnabled_26528_ID_;
    static jmethodID& setEnabled_26528_ID() { return setEnabled_26528_ID_; }
    static jmethodID setGravity_26603_ID_;
    static jmethodID& setGravity_26603_ID() { return setGravity_26603_ID_; }
    static jmethodID setHint_26647_ID_;
    static jmethodID& setHint_26647_ID() { return setHint_26647_ID_; }
    static jmethodID setHintTextColor_26596_ID_;
    static jmethodID& setHintTextColor_26596_ID() { return setHintTextColor_26596_ID_; }
    static jmethodID setHorizontallyScrolling_26607_ID_;
    static jmethodID& setHorizontallyScrolling_26607_ID() { return setHorizontallyScrolling_26607_ID_; }
    static jmethodID setImeOptions_26653_ID_;
    static jmethodID& setImeOptions_26653_ID() { return setImeOptions_26653_ID_; }
    static jmethodID setIncludeFontPadding_26706_ID_;
    static jmethodID& setIncludeFontPadding_26706_ID() { return setIncludeFontPadding_26706_ID_; }
    static jmethodID setInputType_26650_ID_;
    static jmethodID& setInputType_26650_ID() { return setInputType_26650_ID_; }
    static jmethodID setLineSpacing_26628_ID_;
    static jmethodID& setLineSpacing_26628_ID() { return setLineSpacing_26628_ID_; }
    static jmethodID setMaxLines_26612_ID_;
    static jmethodID& setMaxLines_26612_ID() { return setMaxLines_26612_ID_; }
    static jmethodID setOnEditorActionListener_26658_ID_;
    static jmethodID& setOnEditorActionListener_26658_ID() { return setOnEditorActionListener_26658_ID_; }
    static jmethodID setPadding_26567_ID_;
    static jmethodID& setPadding_26567_ID() { return setPadding_26567_ID_; }
    static jmethodID setPaddingRelative_26568_ID_;
    static jmethodID& setPaddingRelative_26568_ID() { return setPaddingRelative_26568_ID_; }
    static jmethodID setText_26640_ID_;
    static jmethodID& setText_26640_ID() { return setText_26640_ID_; }
    static jmethodID setTextColor_26580_ID_;
    static jmethodID& setTextColor_26580_ID() { return setTextColor_26580_ID_; }
    static jmethodID setTextSize_26575_ID_;
    static jmethodID& setTextSize_26575_ID() { return setTextSize_26575_ID_; }
    static jmethodID setTypeface_26578_ID_;
    static jmethodID& setTypeface_26578_ID() { return setTypeface_26578_ID_; }
    static jmethodID TextView_26525_ID_c_;
    static jmethodID& TextView_26525_ID_c() { return TextView_26525_ID_c_; }

    void ctor_8(::g::Android::android::content::Context* arg0);
    void ctor_11(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    void addTextChangedListener(uObject* arg0);
    ::g::Android::android::content::res::ColorStateList* getTextColors();
    void removeTextChangedListener(uObject* arg0);
    void setEllipsize(::g::Android::android::text::TextUtilsDLRTruncateAt* arg0) { (((TextView_type*)__type)->fp_setEllipsize)(this, arg0); }
    void setGravity(int arg0);
    void setHint(uObject* arg0);
    void setHintTextColor1(int arg0);
    void setHorizontallyScrolling(bool arg0);
    void setImeOptions(int arg0);
    void setIncludeFontPadding(bool arg0);
    void setInputType(int arg0);
    void setLineSpacing(float arg0, float arg1);
    void setMaxLines(int arg0);
    void setOnEditorActionListener(uObject* arg0);
    void setPadding(int arg0, int arg1, int arg2, int arg3);
    void setPaddingRelative(int arg0, int arg1, int arg2, int arg3);
    void setText(uObject* arg0);
    void setTextColor1(int arg0);
    void setTextSize1(int arg0, float arg1);
    void setTypeface(::g::Android::android::graphics::Typeface* arg0);
    static void _Init3();
    static void addTextChangedListener_IMPL_26729(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* getTextColors_IMPL_26582(bool arg0_, jobject arg1_);
    static TextView* New9(::g::Android::android::content::Context* arg0);
    static void onScrollChanged_IMPL_26761(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
    static bool onTouchEvent_IMPL_26738(bool arg0_, jobject arg1_, uObject* arg2_);
    static void removeTextChangedListener_IMPL_26730(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setEllipsize(TextView* __this, ::g::Android::android::text::TextUtilsDLRTruncateAt* arg0) { TextView__setEllipsize_fn(__this, arg0); }
    static void setEllipsize_IMPL_26720(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setEnabled_IMPL_26528(bool arg0_, jobject arg1_, bool arg2_);
    static void setGravity_IMPL_26603(bool arg0_, jobject arg1_, int arg2_);
    static void setHint_IMPL_26647(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setHintTextColor_IMPL_26596(bool arg0_, jobject arg1_, int arg2_);
    static void setHorizontallyScrolling_IMPL_26607(bool arg0_, jobject arg1_, bool arg2_);
    static void setImeOptions_IMPL_26653(bool arg0_, jobject arg1_, int arg2_);
    static void setIncludeFontPadding_IMPL_26706(bool arg0_, jobject arg1_, bool arg2_);
    static void setInputType_IMPL_26650(bool arg0_, jobject arg1_, int arg2_);
    static void setLineSpacing_IMPL_26628(bool arg0_, jobject arg1_, float arg2_, float arg3_);
    static void setMaxLines_IMPL_26612(bool arg0_, jobject arg1_, int arg2_);
    static void setOnEditorActionListener_IMPL_26658(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setPadding_IMPL_26567(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
    static void setPaddingRelative_IMPL_26568(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
    static void setText_IMPL_26640(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setTextColor_IMPL_26580(bool arg0_, jobject arg1_, int arg2_);
    static void setTextSize_IMPL_26575(bool arg0_, jobject arg1_, int arg2_, float arg3_);
    static void setTypeface_IMPL_26578(bool arg0_, jobject arg1_, uObject* arg2_);
};
// }

}}}} // ::g::Android::android::widget
