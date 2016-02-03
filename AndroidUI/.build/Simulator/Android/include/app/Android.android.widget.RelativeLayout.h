// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_WIDGET_RELATIVE_LAYOUT_H__
#define __APP_ANDROID_ANDROID_WIDGET_RELATIVE_LAYOUT_H__

#include <app/Android.android.view.ViewGroup.h>
#include <app/Android.android.view.ViewParent.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace content { struct Context; } } } }
namespace app { namespace Android { namespace android { namespace view { namespace accessibility { struct AccessibilityEvent; } } } } }
namespace app { namespace Android { namespace android { namespace view { namespace accessibility { struct AccessibilityNodeInfo; } } } } }
namespace app { namespace Android { namespace android { namespace view { struct ViewGroupDLRLayoutParams; } } } }
namespace app { namespace Android { namespace android { namespace widget { struct RelativeLayoutDLRLayoutParams; } } } }

namespace app {
namespace Android {
namespace android {
namespace widget {

struct RelativeLayout;

extern jclass RelativeLayout___javaClass_4;
extern jfieldID RelativeLayout__ABOVE_25944_ID;
extern jfieldID RelativeLayout__ALIGN_BASELINE_25946_ID;
extern jfieldID RelativeLayout__ALIGN_BOTTOM_25950_ID;
extern jfieldID RelativeLayout__ALIGN_END_25961_ID;
extern jfieldID RelativeLayout__ALIGN_LEFT_25947_ID;
extern jfieldID RelativeLayout__ALIGN_PARENT_BOTTOM_25954_ID;
extern jfieldID RelativeLayout__ALIGN_PARENT_END_25963_ID;
extern jfieldID RelativeLayout__ALIGN_PARENT_LEFT_25951_ID;
extern jfieldID RelativeLayout__ALIGN_PARENT_RIGHT_25953_ID;
extern jfieldID RelativeLayout__ALIGN_PARENT_START_25962_ID;
extern jfieldID RelativeLayout__ALIGN_PARENT_TOP_25952_ID;
extern jfieldID RelativeLayout__ALIGN_RIGHT_25949_ID;
extern jfieldID RelativeLayout__ALIGN_START_25960_ID;
extern jfieldID RelativeLayout__ALIGN_TOP_25948_ID;
extern jfieldID RelativeLayout__BELOW_25945_ID;
extern jfieldID RelativeLayout__CENTER_HORIZONTAL_25956_ID;
extern jfieldID RelativeLayout__CENTER_IN_PARENT_25955_ID;
extern jfieldID RelativeLayout__CENTER_VERTICAL_25957_ID;
extern jmethodID RelativeLayout__checkLayoutParams_25979_ID;
extern jmethodID RelativeLayout__dispatchPopulateAccessibilityEvent_25981_ID;
extern jfieldID RelativeLayout__END_OF_25959_ID;
extern jmethodID RelativeLayout__generateDefaultLayoutParams_25978_ID;
extern jmethodID RelativeLayout__generateLayoutParams_25977_ID;
extern jmethodID RelativeLayout__generateLayoutParams_25980_ID;
extern jmethodID RelativeLayout__getBaseline_25973_ID;
extern jmethodID RelativeLayout__getGravity_25969_ID;
extern jfieldID RelativeLayout__LEFT_OF_25942_ID;
extern jmethodID RelativeLayout__onInitializeAccessibilityEvent_25982_ID;
extern jmethodID RelativeLayout__onInitializeAccessibilityNodeInfo_25983_ID;
extern jmethodID RelativeLayout__onLayout_25976_ID;
extern jmethodID RelativeLayout__onMeasure_25975_ID;
extern jmethodID RelativeLayout__RelativeLayout_25964_ID_c;
extern jmethodID RelativeLayout__RelativeLayout_25965_ID_c;
extern jmethodID RelativeLayout__RelativeLayout_25966_ID_c;
extern jmethodID RelativeLayout__requestLayout_25974_ID;
extern jfieldID RelativeLayout__RIGHT_OF_25943_ID;
extern jmethodID RelativeLayout__setGravity_25970_ID;
extern jmethodID RelativeLayout__setHorizontalGravity_25971_ID;
extern jmethodID RelativeLayout__setIgnoreGravity_25968_ID;
extern jmethodID RelativeLayout__setVerticalGravity_25972_ID;
extern jmethodID RelativeLayout__shouldDelayChildPressedState_25967_ID;
extern jfieldID RelativeLayout__START_OF_25958_ID;
extern jfieldID RelativeLayout__TRUE_25941_ID;

struct RelativeLayout__uType : ::app::Android::android::view::ViewGroup__uType
{
};

RelativeLayout__uType* RelativeLayout__typeof();

void RelativeLayout___Init_4(::uStatic* __this);
void RelativeLayout___ObjInit_12(RelativeLayout* __this, ::app::Android::android::content::Context* arg0);
void RelativeLayout___ObjInit_13(RelativeLayout* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1);
void RelativeLayout___ObjInit_14(RelativeLayout* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1, int arg2);
void RelativeLayout___ObjInit_15(RelativeLayout* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
bool RelativeLayout__checkLayoutParams(RelativeLayout* __this, ::app::Android::android::view::ViewGroupDLRLayoutParams* arg0);
bool RelativeLayout__checkLayoutParams_IMPL_25979(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool RelativeLayout__dispatchPopulateAccessibilityEvent(RelativeLayout* __this, ::app::Android::android::view::accessibility::AccessibilityEvent* arg0);
bool RelativeLayout__dispatchPopulateAccessibilityEvent_IMPL_25981(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
::app::Android::android::view::ViewGroupDLRLayoutParams* RelativeLayout__generateDefaultLayoutParams(RelativeLayout* __this);
::uObject* RelativeLayout__generateDefaultLayoutParams_IMPL_25978(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::android::view::ViewGroupDLRLayoutParams* RelativeLayout__generateLayoutParams_1(RelativeLayout* __this, ::app::Android::android::view::ViewGroupDLRLayoutParams* arg0);
::app::Android::android::widget::RelativeLayoutDLRLayoutParams* RelativeLayout__generateLayoutParams_2(RelativeLayout* __this, ::uObject* arg0);
::uObject* RelativeLayout__generateLayoutParams_IMPL_25977(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
::uObject* RelativeLayout__generateLayoutParams_IMPL_25980(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
int RelativeLayout__get_ABOVE(::uStatic* __this);
int RelativeLayout__get_ALIGN_BASELINE(::uStatic* __this);
int RelativeLayout__get_ALIGN_BOTTOM(::uStatic* __this);
int RelativeLayout__get_ALIGN_END(::uStatic* __this);
int RelativeLayout__get_ALIGN_LEFT(::uStatic* __this);
int RelativeLayout__get_ALIGN_PARENT_BOTTOM(::uStatic* __this);
int RelativeLayout__get_ALIGN_PARENT_END(::uStatic* __this);
int RelativeLayout__get_ALIGN_PARENT_LEFT(::uStatic* __this);
int RelativeLayout__get_ALIGN_PARENT_RIGHT(::uStatic* __this);
int RelativeLayout__get_ALIGN_PARENT_START(::uStatic* __this);
int RelativeLayout__get_ALIGN_PARENT_TOP(::uStatic* __this);
int RelativeLayout__get_ALIGN_RIGHT(::uStatic* __this);
int RelativeLayout__get_ALIGN_START(::uStatic* __this);
int RelativeLayout__get_ALIGN_TOP(::uStatic* __this);
int RelativeLayout__get_BELOW(::uStatic* __this);
int RelativeLayout__get_CENTER_HORIZONTAL(::uStatic* __this);
int RelativeLayout__get_CENTER_IN_PARENT(::uStatic* __this);
int RelativeLayout__get_CENTER_VERTICAL(::uStatic* __this);
int RelativeLayout__get_END_OF(::uStatic* __this);
int RelativeLayout__get_LEFT_OF(::uStatic* __this);
int RelativeLayout__get_RIGHT_OF(::uStatic* __this);
int RelativeLayout__get_START_OF(::uStatic* __this);
int RelativeLayout__get_TRUE(::uStatic* __this);
int RelativeLayout__getBaseline(RelativeLayout* __this);
int RelativeLayout__getBaseline_IMPL_25973(::uStatic* __this, bool arg0_, jobject arg1_);
int RelativeLayout__getGravity(RelativeLayout* __this);
int RelativeLayout__getGravity_IMPL_25969(::uStatic* __this, bool arg0_, jobject arg1_);
RelativeLayout* RelativeLayout__New_10(::uStatic* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1);
RelativeLayout* RelativeLayout__New_11(::uStatic* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1, int arg2);
RelativeLayout* RelativeLayout__New_12(::uStatic* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
RelativeLayout* RelativeLayout__New_9(::uStatic* __this, ::app::Android::android::content::Context* arg0);
void RelativeLayout__onInitializeAccessibilityEvent(RelativeLayout* __this, ::app::Android::android::view::accessibility::AccessibilityEvent* arg0);
void RelativeLayout__onInitializeAccessibilityEvent_IMPL_25982(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void RelativeLayout__onInitializeAccessibilityNodeInfo(RelativeLayout* __this, ::app::Android::android::view::accessibility::AccessibilityNodeInfo* arg0);
void RelativeLayout__onInitializeAccessibilityNodeInfo_IMPL_25983(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void RelativeLayout__onLayout(RelativeLayout* __this, bool arg0, int arg1, int arg2, int arg3, int arg4);
void RelativeLayout__onLayout_IMPL_25976(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_, int arg3_, int arg4_, int arg5_, int arg6_);
void RelativeLayout__onMeasure(RelativeLayout* __this, int arg0, int arg1);
void RelativeLayout__onMeasure_IMPL_25975(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_);
void RelativeLayout__requestLayout(RelativeLayout* __this);
void RelativeLayout__requestLayout_IMPL_25974(::uStatic* __this, bool arg0_, jobject arg1_);
void RelativeLayout__setGravity(RelativeLayout* __this, int arg0);
void RelativeLayout__setGravity_IMPL_25970(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void RelativeLayout__setHorizontalGravity(RelativeLayout* __this, int arg0);
void RelativeLayout__setHorizontalGravity_IMPL_25971(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void RelativeLayout__setIgnoreGravity(RelativeLayout* __this, int arg0);
void RelativeLayout__setIgnoreGravity_IMPL_25968(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void RelativeLayout__setVerticalGravity(RelativeLayout* __this, int arg0);
void RelativeLayout__setVerticalGravity_IMPL_25972(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
bool RelativeLayout__shouldDelayChildPressedState(RelativeLayout* __this);
bool RelativeLayout__shouldDelayChildPressedState_IMPL_25967(::uStatic* __this, bool arg0_, jobject arg1_);

struct RelativeLayout : ::app::Android::android::view::ViewGroup
{
    void _ObjInit_12(::app::Android::android::content::Context* arg0) { RelativeLayout___ObjInit_12(this, arg0); }
    void _ObjInit_13(::app::Android::android::content::Context* arg0, ::uObject* arg1) { RelativeLayout___ObjInit_13(this, arg0, arg1); }
    void _ObjInit_14(::app::Android::android::content::Context* arg0, ::uObject* arg1, int arg2) { RelativeLayout___ObjInit_14(this, arg0, arg1, arg2); }
    void _ObjInit_15(jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType) { RelativeLayout___ObjInit_15(this, obj, utype, hasFallbackClass, resolveType); }
    ::app::Android::android::widget::RelativeLayoutDLRLayoutParams* generateLayoutParams_2(::uObject* arg0) { return RelativeLayout__generateLayoutParams_2(this, arg0); }
    int getGravity() { return RelativeLayout__getGravity(this); }
    void setGravity(int arg0) { RelativeLayout__setGravity(this, arg0); }
    void setHorizontalGravity(int arg0) { RelativeLayout__setHorizontalGravity(this, arg0); }
    void setIgnoreGravity(int arg0) { RelativeLayout__setIgnoreGravity(this, arg0); }
    void setVerticalGravity(int arg0) { RelativeLayout__setVerticalGravity(this, arg0); }
};

}}}}


#endif
