// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.ViewGroup.h>
#include <Android.android.view.ViewParent.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{struct Context;}}}}
namespace g{namespace Android{namespace android{namespace graphics{namespace drawable{struct Drawable;}}}}}
namespace g{namespace Android{namespace android{namespace graphics{struct Canvas;}}}}
namespace g{namespace Android{namespace android{namespace graphics{struct Region;}}}}
namespace g{namespace Android{namespace android{namespace view{namespace accessibility{struct AccessibilityEvent;}}}}}
namespace g{namespace Android{namespace android{namespace view{namespace accessibility{struct AccessibilityNodeInfo;}}}}}
namespace g{namespace Android{namespace android{namespace widget{struct FrameLayout;}}}}
namespace g{namespace Android{namespace android{namespace widget{struct FrameLayoutDLRLayoutParams;}}}}

namespace g{
namespace Android{
namespace android{
namespace widget{

// public extern class FrameLayout :9237
// {
::g::Android::android::view::ViewGroup_type* FrameLayout_typeof();
void FrameLayout__ctor_12_fn(FrameLayout* __this, ::g::Android::android::content::Context* arg0);
void FrameLayout__ctor_13_fn(FrameLayout* __this, ::g::Android::android::content::Context* arg0, uObject* arg1);
void FrameLayout__ctor_14_fn(FrameLayout* __this, ::g::Android::android::content::Context* arg0, uObject* arg1, int* arg2);
void FrameLayout__ctor_15_fn(FrameLayout* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType);
void FrameLayout___Init4_fn();
void FrameLayout__checkLayoutParams_IMPL_25192_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void FrameLayout__drawableStateChanged_IMPL_25178_fn(bool* arg0_, jobject* arg1_);
void FrameLayout__gatherTransparentRegion_fn(FrameLayout* __this, ::g::Android::android::graphics::Region* arg0, bool* __retval);
void FrameLayout__gatherTransparentRegion_IMPL_25186_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void FrameLayout__generateDefaultLayoutParams_IMPL_25179_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void FrameLayout__generateLayoutParams2_fn(FrameLayout* __this, uObject* arg0, ::g::Android::android::widget::FrameLayoutDLRLayoutParams** __retval);
void FrameLayout__generateLayoutParams_IMPL_25190_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);
void FrameLayout__generateLayoutParams_IMPL_25193_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);
void FrameLayout__getConsiderGoneChildrenWhenMeasuring_fn(FrameLayout* __this, bool* __retval);
void FrameLayout__getConsiderGoneChildrenWhenMeasuring_IMPL_25188_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void FrameLayout__getForeground_fn(FrameLayout* __this, ::g::Android::android::graphics::drawable::Drawable** __retval);
void FrameLayout__getForeground_IMPL_25181_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void FrameLayout__getForegroundGravity_fn(FrameLayout* __this, int* __retval);
void FrameLayout__getForegroundGravity_IMPL_25174_fn(bool* arg0_, jobject* arg1_, int* __retval);
void FrameLayout__getMeasureAllChildren_fn(FrameLayout* __this, bool* __retval);
void FrameLayout__getMeasureAllChildren_IMPL_25189_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void FrameLayout__j_draw_fn(FrameLayout* __this, ::g::Android::android::graphics::Canvas* arg0);
void FrameLayout__j_draw_IMPL_25185_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void FrameLayout__jumpDrawablesToCurrentState_fn(FrameLayout* __this);
void FrameLayout__jumpDrawablesToCurrentState_IMPL_25177_fn(bool* arg0_, jobject* arg1_);
void FrameLayout__New9_fn(::g::Android::android::content::Context* arg0, FrameLayout** __retval);
void FrameLayout__New10_fn(::g::Android::android::content::Context* arg0, uObject* arg1, FrameLayout** __retval);
void FrameLayout__New11_fn(::g::Android::android::content::Context* arg0, uObject* arg1, int* arg2, FrameLayout** __retval);
void FrameLayout__New12_fn(jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType, FrameLayout** __retval);
void FrameLayout__onInitializeAccessibilityEvent_fn(FrameLayout* __this, ::g::Android::android::view::accessibility::AccessibilityEvent* arg0);
void FrameLayout__onInitializeAccessibilityEvent_IMPL_25194_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void FrameLayout__onInitializeAccessibilityNodeInfo_fn(FrameLayout* __this, ::g::Android::android::view::accessibility::AccessibilityNodeInfo* arg0);
void FrameLayout__onInitializeAccessibilityNodeInfo_IMPL_25195_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void FrameLayout__onLayout_IMPL_25183_fn(bool* arg0_, jobject* arg1_, bool* arg2_, int* arg3_, int* arg4_, int* arg5_, int* arg6_);
void FrameLayout__onMeasure_IMPL_25182_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_);
void FrameLayout__onSizeChanged_IMPL_25184_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_);
void FrameLayout__setForeground_fn(FrameLayout* __this, ::g::Android::android::graphics::drawable::Drawable* arg0);
void FrameLayout__setForeground_IMPL_25180_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void FrameLayout__setForegroundGravity_fn(FrameLayout* __this, int* arg0);
void FrameLayout__setForegroundGravity_IMPL_25175_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void FrameLayout__setMeasureAllChildren_fn(FrameLayout* __this, bool* arg0);
void FrameLayout__setMeasureAllChildren_IMPL_25187_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void FrameLayout__shouldDelayChildPressedState_fn(FrameLayout* __this, bool* __retval);
void FrameLayout__shouldDelayChildPressedState_IMPL_25191_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void FrameLayout__verifyDrawable_IMPL_25176_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);

struct FrameLayout : ::g::Android::android::view::ViewGroup
{
    static jclass _javaClass4_;
    static jclass& _javaClass4() { return _javaClass4_; }
    static jmethodID checkLayoutParams_25192_ID_;
    static jmethodID& checkLayoutParams_25192_ID() { return checkLayoutParams_25192_ID_; }
    static jmethodID drawableStateChanged_25178_ID_;
    static jmethodID& drawableStateChanged_25178_ID() { return drawableStateChanged_25178_ID_; }
    static jmethodID FrameLayout_25171_ID_c_;
    static jmethodID& FrameLayout_25171_ID_c() { return FrameLayout_25171_ID_c_; }
    static jmethodID FrameLayout_25172_ID_c_;
    static jmethodID& FrameLayout_25172_ID_c() { return FrameLayout_25172_ID_c_; }
    static jmethodID FrameLayout_25173_ID_c_;
    static jmethodID& FrameLayout_25173_ID_c() { return FrameLayout_25173_ID_c_; }
    static jmethodID gatherTransparentRegion_25186_ID_;
    static jmethodID& gatherTransparentRegion_25186_ID() { return gatherTransparentRegion_25186_ID_; }
    static jmethodID generateDefaultLayoutParams_25179_ID_;
    static jmethodID& generateDefaultLayoutParams_25179_ID() { return generateDefaultLayoutParams_25179_ID_; }
    static jmethodID generateLayoutParams_25190_ID_;
    static jmethodID& generateLayoutParams_25190_ID() { return generateLayoutParams_25190_ID_; }
    static jmethodID generateLayoutParams_25193_ID_;
    static jmethodID& generateLayoutParams_25193_ID() { return generateLayoutParams_25193_ID_; }
    static jmethodID getConsiderGoneChildrenWhenMeasuring_25188_ID_;
    static jmethodID& getConsiderGoneChildrenWhenMeasuring_25188_ID() { return getConsiderGoneChildrenWhenMeasuring_25188_ID_; }
    static jmethodID getForeground_25181_ID_;
    static jmethodID& getForeground_25181_ID() { return getForeground_25181_ID_; }
    static jmethodID getForegroundGravity_25174_ID_;
    static jmethodID& getForegroundGravity_25174_ID() { return getForegroundGravity_25174_ID_; }
    static jmethodID getMeasureAllChildren_25189_ID_;
    static jmethodID& getMeasureAllChildren_25189_ID() { return getMeasureAllChildren_25189_ID_; }
    static jmethodID j_draw_25185_ID_;
    static jmethodID& j_draw_25185_ID() { return j_draw_25185_ID_; }
    static jmethodID jumpDrawablesToCurrentState_25177_ID_;
    static jmethodID& jumpDrawablesToCurrentState_25177_ID() { return jumpDrawablesToCurrentState_25177_ID_; }
    static jmethodID onInitializeAccessibilityEvent_25194_ID_;
    static jmethodID& onInitializeAccessibilityEvent_25194_ID() { return onInitializeAccessibilityEvent_25194_ID_; }
    static jmethodID onInitializeAccessibilityNodeInfo_25195_ID_;
    static jmethodID& onInitializeAccessibilityNodeInfo_25195_ID() { return onInitializeAccessibilityNodeInfo_25195_ID_; }
    static jmethodID onLayout_25183_ID_;
    static jmethodID& onLayout_25183_ID() { return onLayout_25183_ID_; }
    static jmethodID onMeasure_25182_ID_;
    static jmethodID& onMeasure_25182_ID() { return onMeasure_25182_ID_; }
    static jmethodID onSizeChanged_25184_ID_;
    static jmethodID& onSizeChanged_25184_ID() { return onSizeChanged_25184_ID_; }
    static jmethodID setForeground_25180_ID_;
    static jmethodID& setForeground_25180_ID() { return setForeground_25180_ID_; }
    static jmethodID setForegroundGravity_25175_ID_;
    static jmethodID& setForegroundGravity_25175_ID() { return setForegroundGravity_25175_ID_; }
    static jmethodID setMeasureAllChildren_25187_ID_;
    static jmethodID& setMeasureAllChildren_25187_ID() { return setMeasureAllChildren_25187_ID_; }
    static jmethodID shouldDelayChildPressedState_25191_ID_;
    static jmethodID& shouldDelayChildPressedState_25191_ID() { return shouldDelayChildPressedState_25191_ID_; }
    static jmethodID verifyDrawable_25176_ID_;
    static jmethodID& verifyDrawable_25176_ID() { return verifyDrawable_25176_ID_; }

    void ctor_12(::g::Android::android::content::Context* arg0);
    void ctor_13(::g::Android::android::content::Context* arg0, uObject* arg1);
    void ctor_14(::g::Android::android::content::Context* arg0, uObject* arg1, int arg2);
    void ctor_15(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    ::g::Android::android::widget::FrameLayoutDLRLayoutParams* generateLayoutParams2(uObject* arg0);
    bool getConsiderGoneChildrenWhenMeasuring();
    ::g::Android::android::graphics::drawable::Drawable* getForeground();
    int getForegroundGravity();
    bool getMeasureAllChildren();
    void setForeground(::g::Android::android::graphics::drawable::Drawable* arg0);
    void setForegroundGravity(int arg0);
    void setMeasureAllChildren(bool arg0);
    static void _Init4();
    static bool checkLayoutParams_IMPL_25192(bool arg0_, jobject arg1_, uObject* arg2_);
    static void drawableStateChanged_IMPL_25178(bool arg0_, jobject arg1_);
    static bool gatherTransparentRegion_IMPL_25186(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* generateDefaultLayoutParams_IMPL_25179(bool arg0_, jobject arg1_);
    static uObject* generateLayoutParams_IMPL_25190(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* generateLayoutParams_IMPL_25193(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool getConsiderGoneChildrenWhenMeasuring_IMPL_25188(bool arg0_, jobject arg1_);
    static uObject* getForeground_IMPL_25181(bool arg0_, jobject arg1_);
    static int getForegroundGravity_IMPL_25174(bool arg0_, jobject arg1_);
    static bool getMeasureAllChildren_IMPL_25189(bool arg0_, jobject arg1_);
    static void j_draw_IMPL_25185(bool arg0_, jobject arg1_, uObject* arg2_);
    static void jumpDrawablesToCurrentState_IMPL_25177(bool arg0_, jobject arg1_);
    static FrameLayout* New9(::g::Android::android::content::Context* arg0);
    static FrameLayout* New10(::g::Android::android::content::Context* arg0, uObject* arg1);
    static FrameLayout* New11(::g::Android::android::content::Context* arg0, uObject* arg1, int arg2);
    static FrameLayout* New12(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    static void onInitializeAccessibilityEvent_IMPL_25194(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onInitializeAccessibilityNodeInfo_IMPL_25195(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onLayout_IMPL_25183(bool arg0_, jobject arg1_, bool arg2_, int arg3_, int arg4_, int arg5_, int arg6_);
    static void onMeasure_IMPL_25182(bool arg0_, jobject arg1_, int arg2_, int arg3_);
    static void onSizeChanged_IMPL_25184(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
    static void setForeground_IMPL_25180(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setForegroundGravity_IMPL_25175(bool arg0_, jobject arg1_, int arg2_);
    static void setMeasureAllChildren_IMPL_25187(bool arg0_, jobject arg1_, bool arg2_);
    static bool shouldDelayChildPressedState_IMPL_25191(bool arg0_, jobject arg1_);
    static bool verifyDrawable_IMPL_25176(bool arg0_, jobject arg1_, uObject* arg2_);
};
// }

}}}} // ::g::Android::android::widget
