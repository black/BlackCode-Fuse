// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_WIDGET_PROGRESS_BAR_H__
#define __APP_ANDROID_ANDROID_WIDGET_PROGRESS_BAR_H__

#include <app/Android.android.view.View.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace content { struct Context; } } } }
namespace app { namespace Android { namespace android { namespace graphics { namespace drawable { struct Drawable; } } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct Canvas; } } } }
namespace app { namespace Android { namespace android { namespace view { namespace accessibility { struct AccessibilityEvent; } } } } }
namespace app { namespace Android { namespace android { namespace view { namespace accessibility { struct AccessibilityNodeInfo; } } } } }

namespace app {
namespace Android {
namespace android {
namespace widget {

struct ProgressBar;

extern jclass ProgressBar___javaClass_3;
extern jmethodID ProgressBar__drawableStateChanged_25861_ID;
extern jmethodID ProgressBar__getIndeterminateDrawable_25837_ID;
extern jmethodID ProgressBar__getInterpolator_25854_ID;
extern jmethodID ProgressBar__getMax_25848_ID;
extern jmethodID ProgressBar__getProgress_25846_ID;
extern jmethodID ProgressBar__getProgressDrawable_25839_ID;
extern jmethodID ProgressBar__getSecondaryProgress_25847_ID;
extern jmethodID ProgressBar__incrementProgressBy_25850_ID;
extern jmethodID ProgressBar__incrementSecondaryProgressBy_25851_ID;
extern jmethodID ProgressBar__invalidateDrawable_25857_ID;
extern jmethodID ProgressBar__isIndeterminate_25835_ID;
extern jmethodID ProgressBar__jumpDrawablesToCurrentState_25842_ID;
extern jmethodID ProgressBar__onAttachedToWindow_25864_ID;
extern jmethodID ProgressBar__onDetachedFromWindow_25865_ID;
extern jmethodID ProgressBar__onDraw_25859_ID;
extern jmethodID ProgressBar__onInitializeAccessibilityEvent_25866_ID;
extern jmethodID ProgressBar__onInitializeAccessibilityNodeInfo_25867_ID;
extern jmethodID ProgressBar__onMeasure_25860_ID;
extern jmethodID ProgressBar__onRestoreInstanceState_25863_ID;
extern jmethodID ProgressBar__onSaveInstanceState_25862_ID;
extern jmethodID ProgressBar__onSizeChanged_25858_ID;
extern jmethodID ProgressBar__onVisibilityChanged_25856_ID;
extern jmethodID ProgressBar__postInvalidate_25843_ID;
extern jmethodID ProgressBar__ProgressBar_25832_ID_c;
extern jmethodID ProgressBar__ProgressBar_25833_ID_c;
extern jmethodID ProgressBar__ProgressBar_25834_ID_c;
extern jmethodID ProgressBar__setIndeterminate_25836_ID;
extern jmethodID ProgressBar__setIndeterminateDrawable_25838_ID;
extern jmethodID ProgressBar__setInterpolator_25852_ID;
extern jmethodID ProgressBar__setInterpolator_25853_ID;
extern jmethodID ProgressBar__setMax_25849_ID;
extern jmethodID ProgressBar__setProgress_25844_ID;
extern jmethodID ProgressBar__setProgressDrawable_25840_ID;
extern jmethodID ProgressBar__setSecondaryProgress_25845_ID;
extern jmethodID ProgressBar__setVisibility_25855_ID;
extern jmethodID ProgressBar__verifyDrawable_25841_ID;

struct ProgressBar__uType : ::app::Android::android::view::View__uType
{
    void(*__fp_setMax)(ProgressBar*, int);
};

ProgressBar__uType* ProgressBar__typeof();

void ProgressBar___Init_3(::uStatic* __this);
void ProgressBar___ObjInit_10(ProgressBar* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1, int arg2);
void ProgressBar___ObjInit_11(ProgressBar* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
void ProgressBar___ObjInit_8(ProgressBar* __this, ::app::Android::android::content::Context* arg0);
void ProgressBar___ObjInit_9(ProgressBar* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1);
void ProgressBar__drawableStateChanged(ProgressBar* __this);
void ProgressBar__drawableStateChanged_IMPL_25861(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::android::graphics::drawable::Drawable* ProgressBar__getIndeterminateDrawable(ProgressBar* __this);
::uObject* ProgressBar__getIndeterminateDrawable_IMPL_25837(::uStatic* __this, bool arg0_, jobject arg1_);
::uObject* ProgressBar__getInterpolator(ProgressBar* __this);
::uObject* ProgressBar__getInterpolator_IMPL_25854(::uStatic* __this, bool arg0_, jobject arg1_);
int ProgressBar__getMax(ProgressBar* __this);
int ProgressBar__getMax_IMPL_25848(::uStatic* __this, bool arg0_, jobject arg1_);
int ProgressBar__getProgress(ProgressBar* __this);
int ProgressBar__getProgress_IMPL_25846(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::android::graphics::drawable::Drawable* ProgressBar__getProgressDrawable(ProgressBar* __this);
::uObject* ProgressBar__getProgressDrawable_IMPL_25839(::uStatic* __this, bool arg0_, jobject arg1_);
int ProgressBar__getSecondaryProgress(ProgressBar* __this);
int ProgressBar__getSecondaryProgress_IMPL_25847(::uStatic* __this, bool arg0_, jobject arg1_);
void ProgressBar__incrementProgressBy(ProgressBar* __this, int arg0);
void ProgressBar__incrementProgressBy_IMPL_25850(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void ProgressBar__incrementSecondaryProgressBy(ProgressBar* __this, int arg0);
void ProgressBar__incrementSecondaryProgressBy_IMPL_25851(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void ProgressBar__invalidateDrawable(ProgressBar* __this, ::app::Android::android::graphics::drawable::Drawable* arg0);
void ProgressBar__invalidateDrawable_IMPL_25857(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool ProgressBar__isIndeterminate(ProgressBar* __this);
bool ProgressBar__isIndeterminate_IMPL_25835(::uStatic* __this, bool arg0_, jobject arg1_);
void ProgressBar__jumpDrawablesToCurrentState(ProgressBar* __this);
void ProgressBar__jumpDrawablesToCurrentState_IMPL_25842(::uStatic* __this, bool arg0_, jobject arg1_);
ProgressBar* ProgressBar__New_10(::uStatic* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1);
ProgressBar* ProgressBar__New_11(::uStatic* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1, int arg2);
ProgressBar* ProgressBar__New_12(::uStatic* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
ProgressBar* ProgressBar__New_9(::uStatic* __this, ::app::Android::android::content::Context* arg0);
void ProgressBar__onAttachedToWindow(ProgressBar* __this);
void ProgressBar__onAttachedToWindow_IMPL_25864(::uStatic* __this, bool arg0_, jobject arg1_);
void ProgressBar__onDetachedFromWindow(ProgressBar* __this);
void ProgressBar__onDetachedFromWindow_IMPL_25865(::uStatic* __this, bool arg0_, jobject arg1_);
void ProgressBar__onDraw(ProgressBar* __this, ::app::Android::android::graphics::Canvas* arg0);
void ProgressBar__onDraw_IMPL_25859(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ProgressBar__onInitializeAccessibilityEvent(ProgressBar* __this, ::app::Android::android::view::accessibility::AccessibilityEvent* arg0);
void ProgressBar__onInitializeAccessibilityEvent_IMPL_25866(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ProgressBar__onInitializeAccessibilityNodeInfo(ProgressBar* __this, ::app::Android::android::view::accessibility::AccessibilityNodeInfo* arg0);
void ProgressBar__onInitializeAccessibilityNodeInfo_IMPL_25867(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ProgressBar__onMeasure(ProgressBar* __this, int arg0, int arg1);
void ProgressBar__onMeasure_IMPL_25860(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_);
void ProgressBar__onRestoreInstanceState_1(ProgressBar* __this, ::uObject* arg0);
void ProgressBar__onRestoreInstanceState_IMPL_25863(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
::uObject* ProgressBar__onSaveInstanceState_1(ProgressBar* __this);
::uObject* ProgressBar__onSaveInstanceState_IMPL_25862(::uStatic* __this, bool arg0_, jobject arg1_);
void ProgressBar__onSizeChanged(ProgressBar* __this, int arg0, int arg1, int arg2, int arg3);
void ProgressBar__onSizeChanged_IMPL_25858(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
void ProgressBar__onVisibilityChanged(ProgressBar* __this, ::app::Android::android::view::View* arg0, int arg1);
void ProgressBar__onVisibilityChanged_IMPL_25856(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);
void ProgressBar__postInvalidate(ProgressBar* __this);
void ProgressBar__postInvalidate_IMPL_25843(::uStatic* __this, bool arg0_, jobject arg1_);
void ProgressBar__setIndeterminate(ProgressBar* __this, bool arg0);
void ProgressBar__setIndeterminate_IMPL_25836(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void ProgressBar__setIndeterminateDrawable(ProgressBar* __this, ::app::Android::android::graphics::drawable::Drawable* arg0);
void ProgressBar__setIndeterminateDrawable_IMPL_25838(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ProgressBar__setInterpolator(ProgressBar* __this, ::app::Android::android::content::Context* arg0, int arg1);
void ProgressBar__setInterpolator_1(ProgressBar* __this, ::uObject* arg0);
void ProgressBar__setInterpolator_IMPL_25852(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);
void ProgressBar__setInterpolator_IMPL_25853(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ProgressBar__setMax(ProgressBar* __this, int arg0);
void ProgressBar__setMax_IMPL_25849(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void ProgressBar__setProgress(ProgressBar* __this, int arg0);
void ProgressBar__setProgress_IMPL_25844(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void ProgressBar__setProgressDrawable(ProgressBar* __this, ::app::Android::android::graphics::drawable::Drawable* arg0);
void ProgressBar__setProgressDrawable_IMPL_25840(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ProgressBar__setSecondaryProgress(ProgressBar* __this, int arg0);
void ProgressBar__setSecondaryProgress_IMPL_25845(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void ProgressBar__setVisibility(ProgressBar* __this, int arg0);
void ProgressBar__setVisibility_IMPL_25855(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
bool ProgressBar__verifyDrawable(ProgressBar* __this, ::app::Android::android::graphics::drawable::Drawable* arg0);
bool ProgressBar__verifyDrawable_IMPL_25841(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);

struct ProgressBar : ::app::Android::android::view::View
{
    void _ObjInit_10(::app::Android::android::content::Context* arg0, ::uObject* arg1, int arg2) { ProgressBar___ObjInit_10(this, arg0, arg1, arg2); }
    void _ObjInit_11(jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType) { ProgressBar___ObjInit_11(this, obj, utype, hasFallbackClass, resolveType); }
    void _ObjInit_8(::app::Android::android::content::Context* arg0) { ProgressBar___ObjInit_8(this, arg0); }
    void _ObjInit_9(::app::Android::android::content::Context* arg0, ::uObject* arg1) { ProgressBar___ObjInit_9(this, arg0, arg1); }
    ::app::Android::android::graphics::drawable::Drawable* getIndeterminateDrawable() { return ProgressBar__getIndeterminateDrawable(this); }
    ::uObject* getInterpolator() { return ProgressBar__getInterpolator(this); }
    int getMax() { return ProgressBar__getMax(this); }
    int getProgress() { return ProgressBar__getProgress(this); }
    ::app::Android::android::graphics::drawable::Drawable* getProgressDrawable() { return ProgressBar__getProgressDrawable(this); }
    int getSecondaryProgress() { return ProgressBar__getSecondaryProgress(this); }
    void incrementProgressBy(int arg0) { ProgressBar__incrementProgressBy(this, arg0); }
    void incrementSecondaryProgressBy(int arg0) { ProgressBar__incrementSecondaryProgressBy(this, arg0); }
    bool isIndeterminate() { return ProgressBar__isIndeterminate(this); }
    void onRestoreInstanceState_1(::uObject* arg0) { ProgressBar__onRestoreInstanceState_1(this, arg0); }
    ::uObject* onSaveInstanceState_1() { return ProgressBar__onSaveInstanceState_1(this); }
    void setIndeterminate(bool arg0) { ProgressBar__setIndeterminate(this, arg0); }
    void setIndeterminateDrawable(::app::Android::android::graphics::drawable::Drawable* arg0) { ProgressBar__setIndeterminateDrawable(this, arg0); }
    void setInterpolator(::app::Android::android::content::Context* arg0, int arg1) { ProgressBar__setInterpolator(this, arg0, arg1); }
    void setInterpolator_1(::uObject* arg0) { ProgressBar__setInterpolator_1(this, arg0); }
    void setMax(int arg0) { (((ProgressBar__uType*)this->__obj_type)->__fp_setMax)(this, arg0); }
    void setProgress(int arg0) { ProgressBar__setProgress(this, arg0); }
    void setProgressDrawable(::app::Android::android::graphics::drawable::Drawable* arg0) { ProgressBar__setProgressDrawable(this, arg0); }
    void setSecondaryProgress(int arg0) { ProgressBar__setSecondaryProgress(this, arg0); }
};

}}}}


#endif
