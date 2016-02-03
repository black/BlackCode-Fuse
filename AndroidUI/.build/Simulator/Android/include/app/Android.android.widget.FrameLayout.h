// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_WIDGET_FRAME_LAYOUT_H__
#define __APP_ANDROID_ANDROID_WIDGET_FRAME_LAYOUT_H__

#include <app/Android.android.view.ViewGroup.h>
#include <app/Android.android.view.ViewParent.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace content { struct Context; } } } }
namespace app { namespace Android { namespace android { namespace graphics { namespace drawable { struct Drawable; } } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct Canvas; } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct Region; } } } }
namespace app { namespace Android { namespace android { namespace view { namespace accessibility { struct AccessibilityEvent; } } } } }
namespace app { namespace Android { namespace android { namespace view { namespace accessibility { struct AccessibilityNodeInfo; } } } } }
namespace app { namespace Android { namespace android { namespace view { struct ViewGroupDLRLayoutParams; } } } }
namespace app { namespace Android { namespace android { namespace widget { struct FrameLayoutDLRLayoutParams; } } } }

namespace app {
namespace Android {
namespace android {
namespace widget {

struct FrameLayout;

extern jclass FrameLayout___javaClass_4;
extern jmethodID FrameLayout__checkLayoutParams_25192_ID;
extern jmethodID FrameLayout__drawableStateChanged_25178_ID;
extern jmethodID FrameLayout__FrameLayout_25171_ID_c;
extern jmethodID FrameLayout__FrameLayout_25172_ID_c;
extern jmethodID FrameLayout__FrameLayout_25173_ID_c;
extern jmethodID FrameLayout__gatherTransparentRegion_25186_ID;
extern jmethodID FrameLayout__generateDefaultLayoutParams_25179_ID;
extern jmethodID FrameLayout__generateLayoutParams_25190_ID;
extern jmethodID FrameLayout__generateLayoutParams_25193_ID;
extern jmethodID FrameLayout__getConsiderGoneChildrenWhenMeasuring_25188_ID;
extern jmethodID FrameLayout__getForeground_25181_ID;
extern jmethodID FrameLayout__getForegroundGravity_25174_ID;
extern jmethodID FrameLayout__getMeasureAllChildren_25189_ID;
extern jmethodID FrameLayout__j_draw_25185_ID;
extern jmethodID FrameLayout__jumpDrawablesToCurrentState_25177_ID;
extern jmethodID FrameLayout__onInitializeAccessibilityEvent_25194_ID;
extern jmethodID FrameLayout__onInitializeAccessibilityNodeInfo_25195_ID;
extern jmethodID FrameLayout__onLayout_25183_ID;
extern jmethodID FrameLayout__onMeasure_25182_ID;
extern jmethodID FrameLayout__onSizeChanged_25184_ID;
extern jmethodID FrameLayout__setForeground_25180_ID;
extern jmethodID FrameLayout__setForegroundGravity_25175_ID;
extern jmethodID FrameLayout__setMeasureAllChildren_25187_ID;
extern jmethodID FrameLayout__shouldDelayChildPressedState_25191_ID;
extern jmethodID FrameLayout__verifyDrawable_25176_ID;

struct FrameLayout__uType : ::app::Android::android::view::ViewGroup__uType
{
};

FrameLayout__uType* FrameLayout__typeof();

void FrameLayout___Init_4(::uStatic* __this);
void FrameLayout___ObjInit_12(FrameLayout* __this, ::app::Android::android::content::Context* arg0);
void FrameLayout___ObjInit_13(FrameLayout* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1);
void FrameLayout___ObjInit_14(FrameLayout* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1, int arg2);
void FrameLayout___ObjInit_15(FrameLayout* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
bool FrameLayout__checkLayoutParams(FrameLayout* __this, ::app::Android::android::view::ViewGroupDLRLayoutParams* arg0);
bool FrameLayout__checkLayoutParams_IMPL_25192(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void FrameLayout__drawableStateChanged(FrameLayout* __this);
void FrameLayout__drawableStateChanged_IMPL_25178(::uStatic* __this, bool arg0_, jobject arg1_);
bool FrameLayout__gatherTransparentRegion(FrameLayout* __this, ::app::Android::android::graphics::Region* arg0);
bool FrameLayout__gatherTransparentRegion_IMPL_25186(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
::app::Android::android::widget::FrameLayoutDLRLayoutParams* FrameLayout__generateDefaultLayoutParams_1(FrameLayout* __this);
::uObject* FrameLayout__generateDefaultLayoutParams_IMPL_25179(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::android::view::ViewGroupDLRLayoutParams* FrameLayout__generateLayoutParams_1(FrameLayout* __this, ::app::Android::android::view::ViewGroupDLRLayoutParams* arg0);
::app::Android::android::widget::FrameLayoutDLRLayoutParams* FrameLayout__generateLayoutParams_2(FrameLayout* __this, ::uObject* arg0);
::uObject* FrameLayout__generateLayoutParams_IMPL_25190(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
::uObject* FrameLayout__generateLayoutParams_IMPL_25193(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool FrameLayout__getConsiderGoneChildrenWhenMeasuring(FrameLayout* __this);
bool FrameLayout__getConsiderGoneChildrenWhenMeasuring_IMPL_25188(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::android::graphics::drawable::Drawable* FrameLayout__getForeground(FrameLayout* __this);
::uObject* FrameLayout__getForeground_IMPL_25181(::uStatic* __this, bool arg0_, jobject arg1_);
int FrameLayout__getForegroundGravity(FrameLayout* __this);
int FrameLayout__getForegroundGravity_IMPL_25174(::uStatic* __this, bool arg0_, jobject arg1_);
bool FrameLayout__getMeasureAllChildren(FrameLayout* __this);
bool FrameLayout__getMeasureAllChildren_IMPL_25189(::uStatic* __this, bool arg0_, jobject arg1_);
void FrameLayout__j_draw(FrameLayout* __this, ::app::Android::android::graphics::Canvas* arg0);
void FrameLayout__j_draw_IMPL_25185(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void FrameLayout__jumpDrawablesToCurrentState(FrameLayout* __this);
void FrameLayout__jumpDrawablesToCurrentState_IMPL_25177(::uStatic* __this, bool arg0_, jobject arg1_);
FrameLayout* FrameLayout__New_10(::uStatic* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1);
FrameLayout* FrameLayout__New_11(::uStatic* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1, int arg2);
FrameLayout* FrameLayout__New_12(::uStatic* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
FrameLayout* FrameLayout__New_9(::uStatic* __this, ::app::Android::android::content::Context* arg0);
void FrameLayout__onInitializeAccessibilityEvent(FrameLayout* __this, ::app::Android::android::view::accessibility::AccessibilityEvent* arg0);
void FrameLayout__onInitializeAccessibilityEvent_IMPL_25194(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void FrameLayout__onInitializeAccessibilityNodeInfo(FrameLayout* __this, ::app::Android::android::view::accessibility::AccessibilityNodeInfo* arg0);
void FrameLayout__onInitializeAccessibilityNodeInfo_IMPL_25195(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void FrameLayout__onLayout(FrameLayout* __this, bool arg0, int arg1, int arg2, int arg3, int arg4);
void FrameLayout__onLayout_IMPL_25183(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_, int arg3_, int arg4_, int arg5_, int arg6_);
void FrameLayout__onMeasure(FrameLayout* __this, int arg0, int arg1);
void FrameLayout__onMeasure_IMPL_25182(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_);
void FrameLayout__onSizeChanged(FrameLayout* __this, int arg0, int arg1, int arg2, int arg3);
void FrameLayout__onSizeChanged_IMPL_25184(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
void FrameLayout__setForeground(FrameLayout* __this, ::app::Android::android::graphics::drawable::Drawable* arg0);
void FrameLayout__setForeground_IMPL_25180(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void FrameLayout__setForegroundGravity(FrameLayout* __this, int arg0);
void FrameLayout__setForegroundGravity_IMPL_25175(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void FrameLayout__setMeasureAllChildren(FrameLayout* __this, bool arg0);
void FrameLayout__setMeasureAllChildren_IMPL_25187(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
bool FrameLayout__shouldDelayChildPressedState(FrameLayout* __this);
bool FrameLayout__shouldDelayChildPressedState_IMPL_25191(::uStatic* __this, bool arg0_, jobject arg1_);
bool FrameLayout__verifyDrawable(FrameLayout* __this, ::app::Android::android::graphics::drawable::Drawable* arg0);
bool FrameLayout__verifyDrawable_IMPL_25176(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);

struct FrameLayout : ::app::Android::android::view::ViewGroup
{
    void _ObjInit_12(::app::Android::android::content::Context* arg0) { FrameLayout___ObjInit_12(this, arg0); }
    void _ObjInit_13(::app::Android::android::content::Context* arg0, ::uObject* arg1) { FrameLayout___ObjInit_13(this, arg0, arg1); }
    void _ObjInit_14(::app::Android::android::content::Context* arg0, ::uObject* arg1, int arg2) { FrameLayout___ObjInit_14(this, arg0, arg1, arg2); }
    void _ObjInit_15(jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType) { FrameLayout___ObjInit_15(this, obj, utype, hasFallbackClass, resolveType); }
    ::app::Android::android::widget::FrameLayoutDLRLayoutParams* generateDefaultLayoutParams_1() { return FrameLayout__generateDefaultLayoutParams_1(this); }
    ::app::Android::android::widget::FrameLayoutDLRLayoutParams* generateLayoutParams_2(::uObject* arg0) { return FrameLayout__generateLayoutParams_2(this, arg0); }
    bool getConsiderGoneChildrenWhenMeasuring() { return FrameLayout__getConsiderGoneChildrenWhenMeasuring(this); }
    ::app::Android::android::graphics::drawable::Drawable* getForeground() { return FrameLayout__getForeground(this); }
    int getForegroundGravity() { return FrameLayout__getForegroundGravity(this); }
    bool getMeasureAllChildren() { return FrameLayout__getMeasureAllChildren(this); }
    void setForeground(::app::Android::android::graphics::drawable::Drawable* arg0) { FrameLayout__setForeground(this, arg0); }
    void setForegroundGravity(int arg0) { FrameLayout__setForegroundGravity(this, arg0); }
    void setMeasureAllChildren(bool arg0) { FrameLayout__setMeasureAllChildren(this, arg0); }
};

}}}}


#endif
