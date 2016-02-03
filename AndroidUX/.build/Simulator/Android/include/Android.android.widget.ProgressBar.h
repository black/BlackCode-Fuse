// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.View.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{struct Context;}}}}
namespace g{namespace Android{namespace android{namespace graphics{namespace drawable{struct Drawable;}}}}}
namespace g{namespace Android{namespace android{namespace view{namespace accessibility{struct AccessibilityEvent;}}}}}
namespace g{namespace Android{namespace android{namespace view{namespace accessibility{struct AccessibilityNodeInfo;}}}}}
namespace g{namespace Android{namespace android{namespace widget{struct ProgressBar;}}}}

namespace g{
namespace Android{
namespace android{
namespace widget{

// public extern class ProgressBar :1868
// {
struct ProgressBar_type : ::g::Android::android::view::View_type
{
    void(*fp_setMax)(::g::Android::android::widget::ProgressBar*, int*);
};

ProgressBar_type* ProgressBar_typeof();
void ProgressBar__ctor_8_fn(ProgressBar* __this, ::g::Android::android::content::Context* arg0);
void ProgressBar__ctor_9_fn(ProgressBar* __this, ::g::Android::android::content::Context* arg0, uObject* arg1);
void ProgressBar__ctor_10_fn(ProgressBar* __this, ::g::Android::android::content::Context* arg0, uObject* arg1, int* arg2);
void ProgressBar__ctor_11_fn(ProgressBar* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType);
void ProgressBar___Init3_fn();
void ProgressBar__drawableStateChanged_IMPL_25861_fn(bool* arg0_, jobject* arg1_);
void ProgressBar__getIndeterminateDrawable_fn(ProgressBar* __this, ::g::Android::android::graphics::drawable::Drawable** __retval);
void ProgressBar__getIndeterminateDrawable_IMPL_25837_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void ProgressBar__getInterpolator_fn(ProgressBar* __this, uObject** __retval);
void ProgressBar__getInterpolator_IMPL_25854_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void ProgressBar__getMax_fn(ProgressBar* __this, int* __retval);
void ProgressBar__getMax_IMPL_25848_fn(bool* arg0_, jobject* arg1_, int* __retval);
void ProgressBar__getProgress_fn(ProgressBar* __this, int* __retval);
void ProgressBar__getProgress_IMPL_25846_fn(bool* arg0_, jobject* arg1_, int* __retval);
void ProgressBar__getProgressDrawable_fn(ProgressBar* __this, ::g::Android::android::graphics::drawable::Drawable** __retval);
void ProgressBar__getProgressDrawable_IMPL_25839_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void ProgressBar__getSecondaryProgress_fn(ProgressBar* __this, int* __retval);
void ProgressBar__getSecondaryProgress_IMPL_25847_fn(bool* arg0_, jobject* arg1_, int* __retval);
void ProgressBar__incrementProgressBy_fn(ProgressBar* __this, int* arg0);
void ProgressBar__incrementProgressBy_IMPL_25850_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void ProgressBar__incrementSecondaryProgressBy_fn(ProgressBar* __this, int* arg0);
void ProgressBar__incrementSecondaryProgressBy_IMPL_25851_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void ProgressBar__invalidateDrawable_fn(ProgressBar* __this, ::g::Android::android::graphics::drawable::Drawable* arg0);
void ProgressBar__invalidateDrawable_IMPL_25857_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ProgressBar__isIndeterminate_fn(ProgressBar* __this, bool* __retval);
void ProgressBar__isIndeterminate_IMPL_25835_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void ProgressBar__jumpDrawablesToCurrentState_fn(ProgressBar* __this);
void ProgressBar__jumpDrawablesToCurrentState_IMPL_25842_fn(bool* arg0_, jobject* arg1_);
void ProgressBar__New9_fn(::g::Android::android::content::Context* arg0, ProgressBar** __retval);
void ProgressBar__New10_fn(::g::Android::android::content::Context* arg0, uObject* arg1, ProgressBar** __retval);
void ProgressBar__New11_fn(::g::Android::android::content::Context* arg0, uObject* arg1, int* arg2, ProgressBar** __retval);
void ProgressBar__New12_fn(jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType, ProgressBar** __retval);
void ProgressBar__onAttachedToWindow_IMPL_25864_fn(bool* arg0_, jobject* arg1_);
void ProgressBar__onDetachedFromWindow_IMPL_25865_fn(bool* arg0_, jobject* arg1_);
void ProgressBar__onDraw_IMPL_25859_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ProgressBar__onInitializeAccessibilityEvent_fn(ProgressBar* __this, ::g::Android::android::view::accessibility::AccessibilityEvent* arg0);
void ProgressBar__onInitializeAccessibilityEvent_IMPL_25866_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ProgressBar__onInitializeAccessibilityNodeInfo_fn(ProgressBar* __this, ::g::Android::android::view::accessibility::AccessibilityNodeInfo* arg0);
void ProgressBar__onInitializeAccessibilityNodeInfo_IMPL_25867_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ProgressBar__onMeasure_IMPL_25860_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_);
void ProgressBar__onRestoreInstanceState1_fn(ProgressBar* __this, uObject* arg0);
void ProgressBar__onRestoreInstanceState_IMPL_25863_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ProgressBar__onSaveInstanceState1_fn(ProgressBar* __this, uObject** __retval);
void ProgressBar__onSaveInstanceState_IMPL_25862_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void ProgressBar__onSizeChanged_IMPL_25858_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_);
void ProgressBar__onVisibilityChanged_IMPL_25856_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_);
void ProgressBar__postInvalidate_fn(ProgressBar* __this);
void ProgressBar__postInvalidate_IMPL_25843_fn(bool* arg0_, jobject* arg1_);
void ProgressBar__setIndeterminate_fn(ProgressBar* __this, bool* arg0);
void ProgressBar__setIndeterminate_IMPL_25836_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void ProgressBar__setIndeterminateDrawable_fn(ProgressBar* __this, ::g::Android::android::graphics::drawable::Drawable* arg0);
void ProgressBar__setIndeterminateDrawable_IMPL_25838_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ProgressBar__setInterpolator_fn(ProgressBar* __this, ::g::Android::android::content::Context* arg0, int* arg1);
void ProgressBar__setInterpolator1_fn(ProgressBar* __this, uObject* arg0);
void ProgressBar__setInterpolator_IMPL_25852_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_);
void ProgressBar__setInterpolator_IMPL_25853_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ProgressBar__setMax_fn(ProgressBar* __this, int* arg0);
void ProgressBar__setMax_IMPL_25849_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void ProgressBar__setProgress_fn(ProgressBar* __this, int* arg0);
void ProgressBar__setProgress_IMPL_25844_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void ProgressBar__setProgressDrawable_fn(ProgressBar* __this, ::g::Android::android::graphics::drawable::Drawable* arg0);
void ProgressBar__setProgressDrawable_IMPL_25840_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ProgressBar__setSecondaryProgress_fn(ProgressBar* __this, int* arg0);
void ProgressBar__setSecondaryProgress_IMPL_25845_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void ProgressBar__setVisibility_fn(ProgressBar* __this, int* arg0);
void ProgressBar__setVisibility_IMPL_25855_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void ProgressBar__verifyDrawable_IMPL_25841_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);

struct ProgressBar : ::g::Android::android::view::View
{
    static jclass _javaClass3_;
    static jclass& _javaClass3() { return _javaClass3_; }
    static jmethodID drawableStateChanged_25861_ID_;
    static jmethodID& drawableStateChanged_25861_ID() { return drawableStateChanged_25861_ID_; }
    static jmethodID getIndeterminateDrawable_25837_ID_;
    static jmethodID& getIndeterminateDrawable_25837_ID() { return getIndeterminateDrawable_25837_ID_; }
    static jmethodID getInterpolator_25854_ID_;
    static jmethodID& getInterpolator_25854_ID() { return getInterpolator_25854_ID_; }
    static jmethodID getMax_25848_ID_;
    static jmethodID& getMax_25848_ID() { return getMax_25848_ID_; }
    static jmethodID getProgress_25846_ID_;
    static jmethodID& getProgress_25846_ID() { return getProgress_25846_ID_; }
    static jmethodID getProgressDrawable_25839_ID_;
    static jmethodID& getProgressDrawable_25839_ID() { return getProgressDrawable_25839_ID_; }
    static jmethodID getSecondaryProgress_25847_ID_;
    static jmethodID& getSecondaryProgress_25847_ID() { return getSecondaryProgress_25847_ID_; }
    static jmethodID incrementProgressBy_25850_ID_;
    static jmethodID& incrementProgressBy_25850_ID() { return incrementProgressBy_25850_ID_; }
    static jmethodID incrementSecondaryProgressBy_25851_ID_;
    static jmethodID& incrementSecondaryProgressBy_25851_ID() { return incrementSecondaryProgressBy_25851_ID_; }
    static jmethodID invalidateDrawable_25857_ID_;
    static jmethodID& invalidateDrawable_25857_ID() { return invalidateDrawable_25857_ID_; }
    static jmethodID isIndeterminate_25835_ID_;
    static jmethodID& isIndeterminate_25835_ID() { return isIndeterminate_25835_ID_; }
    static jmethodID jumpDrawablesToCurrentState_25842_ID_;
    static jmethodID& jumpDrawablesToCurrentState_25842_ID() { return jumpDrawablesToCurrentState_25842_ID_; }
    static jmethodID onAttachedToWindow_25864_ID_;
    static jmethodID& onAttachedToWindow_25864_ID() { return onAttachedToWindow_25864_ID_; }
    static jmethodID onDetachedFromWindow_25865_ID_;
    static jmethodID& onDetachedFromWindow_25865_ID() { return onDetachedFromWindow_25865_ID_; }
    static jmethodID onDraw_25859_ID_;
    static jmethodID& onDraw_25859_ID() { return onDraw_25859_ID_; }
    static jmethodID onInitializeAccessibilityEvent_25866_ID_;
    static jmethodID& onInitializeAccessibilityEvent_25866_ID() { return onInitializeAccessibilityEvent_25866_ID_; }
    static jmethodID onInitializeAccessibilityNodeInfo_25867_ID_;
    static jmethodID& onInitializeAccessibilityNodeInfo_25867_ID() { return onInitializeAccessibilityNodeInfo_25867_ID_; }
    static jmethodID onMeasure_25860_ID_;
    static jmethodID& onMeasure_25860_ID() { return onMeasure_25860_ID_; }
    static jmethodID onRestoreInstanceState_25863_ID_;
    static jmethodID& onRestoreInstanceState_25863_ID() { return onRestoreInstanceState_25863_ID_; }
    static jmethodID onSaveInstanceState_25862_ID_;
    static jmethodID& onSaveInstanceState_25862_ID() { return onSaveInstanceState_25862_ID_; }
    static jmethodID onSizeChanged_25858_ID_;
    static jmethodID& onSizeChanged_25858_ID() { return onSizeChanged_25858_ID_; }
    static jmethodID onVisibilityChanged_25856_ID_;
    static jmethodID& onVisibilityChanged_25856_ID() { return onVisibilityChanged_25856_ID_; }
    static jmethodID postInvalidate_25843_ID_;
    static jmethodID& postInvalidate_25843_ID() { return postInvalidate_25843_ID_; }
    static jmethodID ProgressBar_25832_ID_c_;
    static jmethodID& ProgressBar_25832_ID_c() { return ProgressBar_25832_ID_c_; }
    static jmethodID ProgressBar_25833_ID_c_;
    static jmethodID& ProgressBar_25833_ID_c() { return ProgressBar_25833_ID_c_; }
    static jmethodID ProgressBar_25834_ID_c_;
    static jmethodID& ProgressBar_25834_ID_c() { return ProgressBar_25834_ID_c_; }
    static jmethodID setIndeterminate_25836_ID_;
    static jmethodID& setIndeterminate_25836_ID() { return setIndeterminate_25836_ID_; }
    static jmethodID setIndeterminateDrawable_25838_ID_;
    static jmethodID& setIndeterminateDrawable_25838_ID() { return setIndeterminateDrawable_25838_ID_; }
    static jmethodID setInterpolator_25852_ID_;
    static jmethodID& setInterpolator_25852_ID() { return setInterpolator_25852_ID_; }
    static jmethodID setInterpolator_25853_ID_;
    static jmethodID& setInterpolator_25853_ID() { return setInterpolator_25853_ID_; }
    static jmethodID setMax_25849_ID_;
    static jmethodID& setMax_25849_ID() { return setMax_25849_ID_; }
    static jmethodID setProgress_25844_ID_;
    static jmethodID& setProgress_25844_ID() { return setProgress_25844_ID_; }
    static jmethodID setProgressDrawable_25840_ID_;
    static jmethodID& setProgressDrawable_25840_ID() { return setProgressDrawable_25840_ID_; }
    static jmethodID setSecondaryProgress_25845_ID_;
    static jmethodID& setSecondaryProgress_25845_ID() { return setSecondaryProgress_25845_ID_; }
    static jmethodID setVisibility_25855_ID_;
    static jmethodID& setVisibility_25855_ID() { return setVisibility_25855_ID_; }
    static jmethodID verifyDrawable_25841_ID_;
    static jmethodID& verifyDrawable_25841_ID() { return verifyDrawable_25841_ID_; }

    void ctor_8(::g::Android::android::content::Context* arg0);
    void ctor_9(::g::Android::android::content::Context* arg0, uObject* arg1);
    void ctor_10(::g::Android::android::content::Context* arg0, uObject* arg1, int arg2);
    void ctor_11(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    ::g::Android::android::graphics::drawable::Drawable* getIndeterminateDrawable();
    uObject* getInterpolator();
    int getMax();
    int getProgress();
    ::g::Android::android::graphics::drawable::Drawable* getProgressDrawable();
    int getSecondaryProgress();
    void incrementProgressBy(int arg0);
    void incrementSecondaryProgressBy(int arg0);
    bool isIndeterminate();
    void onRestoreInstanceState1(uObject* arg0);
    uObject* onSaveInstanceState1();
    void setIndeterminate(bool arg0);
    void setIndeterminateDrawable(::g::Android::android::graphics::drawable::Drawable* arg0);
    void setInterpolator(::g::Android::android::content::Context* arg0, int arg1);
    void setInterpolator1(uObject* arg0);
    void setMax(int arg0) { (((ProgressBar_type*)__type)->fp_setMax)(this, &arg0); }
    void setProgress(int arg0);
    void setProgressDrawable(::g::Android::android::graphics::drawable::Drawable* arg0);
    void setSecondaryProgress(int arg0);
    static void _Init3();
    static void drawableStateChanged_IMPL_25861(bool arg0_, jobject arg1_);
    static uObject* getIndeterminateDrawable_IMPL_25837(bool arg0_, jobject arg1_);
    static uObject* getInterpolator_IMPL_25854(bool arg0_, jobject arg1_);
    static int getMax_IMPL_25848(bool arg0_, jobject arg1_);
    static int getProgress_IMPL_25846(bool arg0_, jobject arg1_);
    static uObject* getProgressDrawable_IMPL_25839(bool arg0_, jobject arg1_);
    static int getSecondaryProgress_IMPL_25847(bool arg0_, jobject arg1_);
    static void incrementProgressBy_IMPL_25850(bool arg0_, jobject arg1_, int arg2_);
    static void incrementSecondaryProgressBy_IMPL_25851(bool arg0_, jobject arg1_, int arg2_);
    static void invalidateDrawable_IMPL_25857(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool isIndeterminate_IMPL_25835(bool arg0_, jobject arg1_);
    static void jumpDrawablesToCurrentState_IMPL_25842(bool arg0_, jobject arg1_);
    static ProgressBar* New9(::g::Android::android::content::Context* arg0);
    static ProgressBar* New10(::g::Android::android::content::Context* arg0, uObject* arg1);
    static ProgressBar* New11(::g::Android::android::content::Context* arg0, uObject* arg1, int arg2);
    static ProgressBar* New12(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    static void onAttachedToWindow_IMPL_25864(bool arg0_, jobject arg1_);
    static void onDetachedFromWindow_IMPL_25865(bool arg0_, jobject arg1_);
    static void onDraw_IMPL_25859(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onInitializeAccessibilityEvent_IMPL_25866(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onInitializeAccessibilityNodeInfo_IMPL_25867(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onMeasure_IMPL_25860(bool arg0_, jobject arg1_, int arg2_, int arg3_);
    static void onRestoreInstanceState_IMPL_25863(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* onSaveInstanceState_IMPL_25862(bool arg0_, jobject arg1_);
    static void onSizeChanged_IMPL_25858(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
    static void onVisibilityChanged_IMPL_25856(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
    static void postInvalidate_IMPL_25843(bool arg0_, jobject arg1_);
    static void setIndeterminate_IMPL_25836(bool arg0_, jobject arg1_, bool arg2_);
    static void setIndeterminateDrawable_IMPL_25838(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setInterpolator_IMPL_25852(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
    static void setInterpolator_IMPL_25853(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setMax(ProgressBar* __this, int arg0) { ProgressBar__setMax_fn(__this, &arg0); }
    static void setMax_IMPL_25849(bool arg0_, jobject arg1_, int arg2_);
    static void setProgress_IMPL_25844(bool arg0_, jobject arg1_, int arg2_);
    static void setProgressDrawable_IMPL_25840(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setSecondaryProgress_IMPL_25845(bool arg0_, jobject arg1_, int arg2_);
    static void setVisibility_IMPL_25855(bool arg0_, jobject arg1_, int arg2_);
    static bool verifyDrawable_IMPL_25841(bool arg0_, jobject arg1_, uObject* arg2_);
};
// }

}}}} // ::g::Android::android::widget
