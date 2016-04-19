// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{struct Context;}}}}
namespace g{namespace Android{namespace android{namespace graphics{namespace drawable{struct Drawable;}}}}}
namespace g{namespace Android{namespace android{namespace view{struct MotionEvent;}}}}
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Android{namespace android{namespace view{struct ViewGroupDLRLayoutParams;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}
namespace g{namespace Android{namespace Runtime{struct IntArray;}}}

namespace g{
namespace Android{
namespace android{
namespace view{

// public extern class View :954
// {
struct View_type : ::g::Android::java::lang::Object_type
{
    void(*fp_hasFocus)(::g::Android::android::view::View*, bool*);
    void(*fp_onScrollChanged)(::g::Android::android::view::View*, int*, int*, int*, int*);
    void(*fp_onTouchEvent)(::g::Android::android::view::View*, ::g::Android::android::view::MotionEvent*, bool*);
    void(*fp_requestLayout)(::g::Android::android::view::View*);
    void(*fp_setBackgroundColor)(::g::Android::android::view::View*, int*);
    void(*fp_setEnabled)(::g::Android::android::view::View*, bool*);
    void(*fp_setLayoutParams)(::g::Android::android::view::View*, ::g::Android::android::view::ViewGroupDLRLayoutParams*);
    void(*fp_setVisibility)(::g::Android::android::view::View*, int*);
};

View_type* View_typeof();
void View__ctor_4_fn(View* __this, ::g::Android::android::content::Context* arg0);
void View__ctor_7_fn(View* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType);
void View___Init2_fn();
void View__bringToFront_fn(View* __this);
void View__bringToFront_IMPL_22995_fn(bool* arg0_, jobject* arg1_);
void View__getContext_fn(View* __this, ::g::Android::android::content::Context** __retval);
void View__getContext_IMPL_22972_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void View__getLocationOnScreen_fn(View* __this, ::g::Android::Runtime::IntArray* arg0);
void View__getLocationOnScreen_IMPL_23197_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__getMeasuredHeight_fn(View* __this, int* __retval);
void View__getMeasuredHeight_IMPL_23009_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getMeasuredWidth_fn(View* __this, int* __retval);
void View__getMeasuredWidth_IMPL_23007_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getRootView_fn(View* __this, View** __retval);
void View__getRootView_IMPL_23196_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void View__getWindowToken_fn(View* __this, uObject** __retval);
void View__getWindowToken_IMPL_23119_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void View__hasFocus_fn(View* __this, bool* __retval);
void View__hasFocus_IMPL_22851_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__invalidate_fn(View* __this);
void View__invalidate_IMPL_23065_fn(bool* arg0_, jobject* arg1_);
void View__get_INVISIBLE_fn(int* __retval);
void View__measure_fn(View* __this, int* arg0, int* arg1);
void View__measure_IMPL_23211_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_);
void View__New5_fn(::g::Android::android::content::Context* arg0, View** __retval);
void View__onScrollChanged_fn(View* __this, int* arg0, int* arg1, int* arg2, int* arg3);
void View__onScrollChanged_IMPL_22996_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_);
void View__onTouchEvent_fn(View* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval);
void View__onTouchEvent_IMPL_22991_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void View__requestFocus_fn(View* __this, bool* __retval);
void View__requestFocus_IMPL_22934_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__requestLayout_fn(View* __this);
void View__requestLayout_IMPL_23209_fn(bool* arg0_, jobject* arg1_);
void View__setAlpha_fn(View* __this, float* arg0);
void View__setAlpha_IMPL_23031_fn(bool* arg0_, jobject* arg1_, float* arg2_);
void View__setBackground_fn(View* __this, ::g::Android::android::graphics::drawable::Drawable* arg0);
void View__setBackground_IMPL_23177_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__setBackgroundColor_fn(View* __this, int* arg0);
void View__setBackgroundColor_IMPL_23175_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__setBackgroundDrawable_fn(View* __this, ::g::Android::android::graphics::drawable::Drawable* arg0);
void View__setBackgroundDrawable_IMPL_23178_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__setBackgroundResource_fn(View* __this, int* arg0);
void View__setBackgroundResource_IMPL_23176_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__setEnabled_fn(View* __this, bool* arg0);
void View__setEnabled_IMPL_22894_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void View__setFocusable_fn(View* __this, bool* arg0);
void View__setFocusable_IMPL_22895_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void View__setFocusableInTouchMode_fn(View* __this, bool* arg0);
void View__setFocusableInTouchMode_IMPL_22896_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void View__setLayoutParams_fn(View* __this, ::g::Android::android::view::ViewGroupDLRLayoutParams* arg0);
void View__setLayoutParams_IMPL_23057_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__setOnFocusChangeListener_fn(View* __this, uObject* arg0);
void View__setOnFocusChangeListener_IMPL_22828_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__setOnTouchListener_fn(View* __this, uObject* arg0);
void View__setOnTouchListener_IMPL_22844_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__setPivotX_fn(View* __this, float* arg0);
void View__setPivotX_IMPL_23026_fn(bool* arg0_, jobject* arg1_, float* arg2_);
void View__setPivotY_fn(View* __this, float* arg0);
void View__setPivotY_IMPL_23028_fn(bool* arg0_, jobject* arg1_, float* arg2_);
void View__setRotation_fn(View* __this, float* arg0);
void View__setRotation_IMPL_23016_fn(bool* arg0_, jobject* arg1_, float* arg2_);
void View__setScaleX_fn(View* __this, float* arg0);
void View__setScaleX_IMPL_23022_fn(bool* arg0_, jobject* arg1_, float* arg2_);
void View__setScaleY_fn(View* __this, float* arg0);
void View__setScaleY_IMPL_23024_fn(bool* arg0_, jobject* arg1_, float* arg2_);
void View__setScrollX_fn(View* __this, int* arg0);
void View__setScrollX_IMPL_23000_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__setScrollY_fn(View* __this, int* arg0);
void View__setScrollY_IMPL_23001_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__setTextAlignment_fn(View* __this, int* arg0);
void View__setTextAlignment_IMPL_23253_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__setTranslationX_fn(View* __this, float* arg0);
void View__setTranslationX_IMPL_23046_fn(bool* arg0_, jobject* arg1_, float* arg2_);
void View__setTranslationY_fn(View* __this, float* arg0);
void View__setTranslationY_IMPL_23048_fn(bool* arg0_, jobject* arg1_, float* arg2_);
void View__setVisibility_fn(View* __this, int* arg0);
void View__setVisibility_IMPL_22892_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__get_TEXT_ALIGNMENT_GRAVITY_fn(int* __retval);
void View__toString_fn(View* __this, ::g::Android::java::lang::String** __retval);
void View__toString_IMPL_22818_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void View__get_VISIBLE_fn(int* __retval);

struct View : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID bringToFront_22995_ID_;
    static jmethodID& bringToFront_22995_ID() { return bringToFront_22995_ID_; }
    static jmethodID getContext_22972_ID_;
    static jmethodID& getContext_22972_ID() { return getContext_22972_ID_; }
    static jmethodID getLocationOnScreen_23197_ID_;
    static jmethodID& getLocationOnScreen_23197_ID() { return getLocationOnScreen_23197_ID_; }
    static jmethodID getMeasuredHeight_23009_ID_;
    static jmethodID& getMeasuredHeight_23009_ID() { return getMeasuredHeight_23009_ID_; }
    static jmethodID getMeasuredWidth_23007_ID_;
    static jmethodID& getMeasuredWidth_23007_ID() { return getMeasuredWidth_23007_ID_; }
    static jmethodID getRootView_23196_ID_;
    static jmethodID& getRootView_23196_ID() { return getRootView_23196_ID_; }
    static jmethodID getWindowToken_23119_ID_;
    static jmethodID& getWindowToken_23119_ID() { return getWindowToken_23119_ID_; }
    static jmethodID hasFocus_22851_ID_;
    static jmethodID& hasFocus_22851_ID() { return hasFocus_22851_ID_; }
    static jmethodID invalidate_23065_ID_;
    static jmethodID& invalidate_23065_ID() { return invalidate_23065_ID_; }
    static jfieldID INVISIBLE_22732_ID_;
    static jfieldID& INVISIBLE_22732_ID() { return INVISIBLE_22732_ID_; }
    static jmethodID measure_23211_ID_;
    static jmethodID& measure_23211_ID() { return measure_23211_ID_; }
    static jmethodID onScrollChanged_22996_ID_;
    static jmethodID& onScrollChanged_22996_ID() { return onScrollChanged_22996_ID_; }
    static jmethodID onTouchEvent_22991_ID_;
    static jmethodID& onTouchEvent_22991_ID() { return onTouchEvent_22991_ID_; }
    static jmethodID requestFocus_22934_ID_;
    static jmethodID& requestFocus_22934_ID() { return requestFocus_22934_ID_; }
    static jmethodID requestLayout_23209_ID_;
    static jmethodID& requestLayout_23209_ID() { return requestLayout_23209_ID_; }
    static jmethodID setAlpha_23031_ID_;
    static jmethodID& setAlpha_23031_ID() { return setAlpha_23031_ID_; }
    static jmethodID setBackground_23177_ID_;
    static jmethodID& setBackground_23177_ID() { return setBackground_23177_ID_; }
    static jmethodID setBackgroundColor_23175_ID_;
    static jmethodID& setBackgroundColor_23175_ID() { return setBackgroundColor_23175_ID_; }
    static jmethodID setBackgroundDrawable_23178_ID_;
    static jmethodID& setBackgroundDrawable_23178_ID() { return setBackgroundDrawable_23178_ID_; }
    static jmethodID setBackgroundResource_23176_ID_;
    static jmethodID& setBackgroundResource_23176_ID() { return setBackgroundResource_23176_ID_; }
    static jmethodID setEnabled_22894_ID_;
    static jmethodID& setEnabled_22894_ID() { return setEnabled_22894_ID_; }
    static jmethodID setFocusable_22895_ID_;
    static jmethodID& setFocusable_22895_ID() { return setFocusable_22895_ID_; }
    static jmethodID setFocusableInTouchMode_22896_ID_;
    static jmethodID& setFocusableInTouchMode_22896_ID() { return setFocusableInTouchMode_22896_ID_; }
    static jmethodID setLayoutParams_23057_ID_;
    static jmethodID& setLayoutParams_23057_ID() { return setLayoutParams_23057_ID_; }
    static jmethodID setOnFocusChangeListener_22828_ID_;
    static jmethodID& setOnFocusChangeListener_22828_ID() { return setOnFocusChangeListener_22828_ID_; }
    static jmethodID setOnTouchListener_22844_ID_;
    static jmethodID& setOnTouchListener_22844_ID() { return setOnTouchListener_22844_ID_; }
    static jmethodID setPivotX_23026_ID_;
    static jmethodID& setPivotX_23026_ID() { return setPivotX_23026_ID_; }
    static jmethodID setPivotY_23028_ID_;
    static jmethodID& setPivotY_23028_ID() { return setPivotY_23028_ID_; }
    static jmethodID setRotation_23016_ID_;
    static jmethodID& setRotation_23016_ID() { return setRotation_23016_ID_; }
    static jmethodID setScaleX_23022_ID_;
    static jmethodID& setScaleX_23022_ID() { return setScaleX_23022_ID_; }
    static jmethodID setScaleY_23024_ID_;
    static jmethodID& setScaleY_23024_ID() { return setScaleY_23024_ID_; }
    static jmethodID setScrollX_23000_ID_;
    static jmethodID& setScrollX_23000_ID() { return setScrollX_23000_ID_; }
    static jmethodID setScrollY_23001_ID_;
    static jmethodID& setScrollY_23001_ID() { return setScrollY_23001_ID_; }
    static jmethodID setTextAlignment_23253_ID_;
    static jmethodID& setTextAlignment_23253_ID() { return setTextAlignment_23253_ID_; }
    static jmethodID setTranslationX_23046_ID_;
    static jmethodID& setTranslationX_23046_ID() { return setTranslationX_23046_ID_; }
    static jmethodID setTranslationY_23048_ID_;
    static jmethodID& setTranslationY_23048_ID() { return setTranslationY_23048_ID_; }
    static jmethodID setVisibility_22892_ID_;
    static jmethodID& setVisibility_22892_ID() { return setVisibility_22892_ID_; }
    static jfieldID TEXT_ALIGNMENT_GRAVITY_22767_ID_;
    static jfieldID& TEXT_ALIGNMENT_GRAVITY_22767_ID() { return TEXT_ALIGNMENT_GRAVITY_22767_ID_; }
    static jmethodID toString_22818_ID_;
    static jmethodID& toString_22818_ID() { return toString_22818_ID_; }
    static jmethodID View_22815_ID_c_;
    static jmethodID& View_22815_ID_c() { return View_22815_ID_c_; }
    static jfieldID VISIBLE_22731_ID_;
    static jfieldID& VISIBLE_22731_ID() { return VISIBLE_22731_ID_; }

    void ctor_4(::g::Android::android::content::Context* arg0);
    void ctor_7(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    void bringToFront();
    ::g::Android::android::content::Context* getContext();
    void getLocationOnScreen(::g::Android::Runtime::IntArray* arg0);
    int getMeasuredHeight();
    int getMeasuredWidth();
    View* getRootView();
    uObject* getWindowToken();
    bool hasFocus() { bool __retval; return (((View_type*)__type)->fp_hasFocus)(this, &__retval), __retval; }
    void invalidate();
    void measure(int arg0, int arg1);
    void onScrollChanged(int arg0, int arg1, int arg2, int arg3) { (((View_type*)__type)->fp_onScrollChanged)(this, &arg0, &arg1, &arg2, &arg3); }
    bool onTouchEvent(::g::Android::android::view::MotionEvent* arg0) { bool __retval; return (((View_type*)__type)->fp_onTouchEvent)(this, arg0, &__retval), __retval; }
    bool requestFocus();
    void requestLayout() { (((View_type*)__type)->fp_requestLayout)(this); }
    void setAlpha(float arg0);
    void setBackground(::g::Android::android::graphics::drawable::Drawable* arg0);
    void setBackgroundColor(int arg0) { (((View_type*)__type)->fp_setBackgroundColor)(this, &arg0); }
    void setBackgroundDrawable(::g::Android::android::graphics::drawable::Drawable* arg0);
    void setBackgroundResource(int arg0);
    void setEnabled(bool arg0) { (((View_type*)__type)->fp_setEnabled)(this, &arg0); }
    void setFocusable(bool arg0);
    void setFocusableInTouchMode(bool arg0);
    void setLayoutParams(::g::Android::android::view::ViewGroupDLRLayoutParams* arg0) { (((View_type*)__type)->fp_setLayoutParams)(this, arg0); }
    void setOnFocusChangeListener(uObject* arg0);
    void setOnTouchListener(uObject* arg0);
    void setPivotX(float arg0);
    void setPivotY(float arg0);
    void setRotation(float arg0);
    void setScaleX(float arg0);
    void setScaleY(float arg0);
    void setScrollX(int arg0);
    void setScrollY(int arg0);
    void setTextAlignment(int arg0);
    void setTranslationX(float arg0);
    void setTranslationY(float arg0);
    void setVisibility(int arg0) { (((View_type*)__type)->fp_setVisibility)(this, &arg0); }
    static void _Init2();
    static void bringToFront_IMPL_22995(bool arg0_, jobject arg1_);
    static uObject* getContext_IMPL_22972(bool arg0_, jobject arg1_);
    static void getLocationOnScreen_IMPL_23197(bool arg0_, jobject arg1_, uObject* arg2_);
    static int getMeasuredHeight_IMPL_23009(bool arg0_, jobject arg1_);
    static int getMeasuredWidth_IMPL_23007(bool arg0_, jobject arg1_);
    static uObject* getRootView_IMPL_23196(bool arg0_, jobject arg1_);
    static uObject* getWindowToken_IMPL_23119(bool arg0_, jobject arg1_);
    static bool hasFocus(View* __this) { bool __retval; return View__hasFocus_fn(__this, &__retval), __retval; }
    static bool hasFocus_IMPL_22851(bool arg0_, jobject arg1_);
    static void invalidate_IMPL_23065(bool arg0_, jobject arg1_);
    static void measure_IMPL_23211(bool arg0_, jobject arg1_, int arg2_, int arg3_);
    static View* New5(::g::Android::android::content::Context* arg0);
    static void onScrollChanged(View* __this, int arg0, int arg1, int arg2, int arg3) { View__onScrollChanged_fn(__this, &arg0, &arg1, &arg2, &arg3); }
    static void onScrollChanged_IMPL_22996(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
    static bool onTouchEvent(View* __this, ::g::Android::android::view::MotionEvent* arg0) { bool __retval; return View__onTouchEvent_fn(__this, arg0, &__retval), __retval; }
    static bool onTouchEvent_IMPL_22991(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool requestFocus_IMPL_22934(bool arg0_, jobject arg1_);
    static void requestLayout(View* __this) { View__requestLayout_fn(__this); }
    static void requestLayout_IMPL_23209(bool arg0_, jobject arg1_);
    static void setAlpha_IMPL_23031(bool arg0_, jobject arg1_, float arg2_);
    static void setBackground_IMPL_23177(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setBackgroundColor(View* __this, int arg0) { View__setBackgroundColor_fn(__this, &arg0); }
    static void setBackgroundColor_IMPL_23175(bool arg0_, jobject arg1_, int arg2_);
    static void setBackgroundDrawable_IMPL_23178(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setBackgroundResource_IMPL_23176(bool arg0_, jobject arg1_, int arg2_);
    static void setEnabled(View* __this, bool arg0) { View__setEnabled_fn(__this, &arg0); }
    static void setEnabled_IMPL_22894(bool arg0_, jobject arg1_, bool arg2_);
    static void setFocusable_IMPL_22895(bool arg0_, jobject arg1_, bool arg2_);
    static void setFocusableInTouchMode_IMPL_22896(bool arg0_, jobject arg1_, bool arg2_);
    static void setLayoutParams(View* __this, ::g::Android::android::view::ViewGroupDLRLayoutParams* arg0) { View__setLayoutParams_fn(__this, arg0); }
    static void setLayoutParams_IMPL_23057(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setOnFocusChangeListener_IMPL_22828(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setOnTouchListener_IMPL_22844(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setPivotX_IMPL_23026(bool arg0_, jobject arg1_, float arg2_);
    static void setPivotY_IMPL_23028(bool arg0_, jobject arg1_, float arg2_);
    static void setRotation_IMPL_23016(bool arg0_, jobject arg1_, float arg2_);
    static void setScaleX_IMPL_23022(bool arg0_, jobject arg1_, float arg2_);
    static void setScaleY_IMPL_23024(bool arg0_, jobject arg1_, float arg2_);
    static void setScrollX_IMPL_23000(bool arg0_, jobject arg1_, int arg2_);
    static void setScrollY_IMPL_23001(bool arg0_, jobject arg1_, int arg2_);
    static void setTextAlignment_IMPL_23253(bool arg0_, jobject arg1_, int arg2_);
    static void setTranslationX_IMPL_23046(bool arg0_, jobject arg1_, float arg2_);
    static void setTranslationY_IMPL_23048(bool arg0_, jobject arg1_, float arg2_);
    static void setVisibility(View* __this, int arg0) { View__setVisibility_fn(__this, &arg0); }
    static void setVisibility_IMPL_22892(bool arg0_, jobject arg1_, int arg2_);
    static uObject* toString_IMPL_22818(bool arg0_, jobject arg1_);
    static int INVISIBLE();
    static int TEXT_ALIGNMENT_GRAVITY();
    static int VISIBLE();
};
// }

}}}} // ::g::Android::android::view
