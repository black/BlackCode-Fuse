// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.ViewGroup.h>
#include <Android.android.view.ViewParent.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{struct Context;}}}}
namespace g{namespace Android{namespace android{namespace view{namespace accessibility{struct AccessibilityEvent;}}}}}
namespace g{namespace Android{namespace android{namespace view{namespace accessibility{struct AccessibilityNodeInfo;}}}}}
namespace g{namespace Android{namespace android{namespace widget{struct RelativeLayout;}}}}
namespace g{namespace Android{namespace android{namespace widget{struct RelativeLayoutDLRLayoutParams;}}}}

namespace g{
namespace Android{
namespace android{
namespace widget{

// public extern class RelativeLayout :10647
// {
::g::Android::android::view::ViewGroup_type* RelativeLayout_typeof();
void RelativeLayout__ctor_12_fn(RelativeLayout* __this, ::g::Android::android::content::Context* arg0);
void RelativeLayout__ctor_13_fn(RelativeLayout* __this, ::g::Android::android::content::Context* arg0, uObject* arg1);
void RelativeLayout__ctor_14_fn(RelativeLayout* __this, ::g::Android::android::content::Context* arg0, uObject* arg1, int* arg2);
void RelativeLayout__ctor_15_fn(RelativeLayout* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType);
void RelativeLayout___Init4_fn();
void RelativeLayout__get_ABOVE_fn(int* __retval);
void RelativeLayout__get_ALIGN_BASELINE_fn(int* __retval);
void RelativeLayout__get_ALIGN_BOTTOM_fn(int* __retval);
void RelativeLayout__get_ALIGN_END_fn(int* __retval);
void RelativeLayout__get_ALIGN_LEFT_fn(int* __retval);
void RelativeLayout__get_ALIGN_PARENT_BOTTOM_fn(int* __retval);
void RelativeLayout__get_ALIGN_PARENT_END_fn(int* __retval);
void RelativeLayout__get_ALIGN_PARENT_LEFT_fn(int* __retval);
void RelativeLayout__get_ALIGN_PARENT_RIGHT_fn(int* __retval);
void RelativeLayout__get_ALIGN_PARENT_START_fn(int* __retval);
void RelativeLayout__get_ALIGN_PARENT_TOP_fn(int* __retval);
void RelativeLayout__get_ALIGN_RIGHT_fn(int* __retval);
void RelativeLayout__get_ALIGN_START_fn(int* __retval);
void RelativeLayout__get_ALIGN_TOP_fn(int* __retval);
void RelativeLayout__get_BELOW_fn(int* __retval);
void RelativeLayout__get_CENTER_HORIZONTAL_fn(int* __retval);
void RelativeLayout__get_CENTER_IN_PARENT_fn(int* __retval);
void RelativeLayout__get_CENTER_VERTICAL_fn(int* __retval);
void RelativeLayout__checkLayoutParams_IMPL_25979_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void RelativeLayout__dispatchPopulateAccessibilityEvent_fn(RelativeLayout* __this, ::g::Android::android::view::accessibility::AccessibilityEvent* arg0, bool* __retval);
void RelativeLayout__dispatchPopulateAccessibilityEvent_IMPL_25981_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void RelativeLayout__get_END_OF_fn(int* __retval);
void RelativeLayout__generateDefaultLayoutParams_IMPL_25978_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void RelativeLayout__generateLayoutParams2_fn(RelativeLayout* __this, uObject* arg0, ::g::Android::android::widget::RelativeLayoutDLRLayoutParams** __retval);
void RelativeLayout__generateLayoutParams_IMPL_25977_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);
void RelativeLayout__generateLayoutParams_IMPL_25980_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);
void RelativeLayout__getBaseline_fn(RelativeLayout* __this, int* __retval);
void RelativeLayout__getBaseline_IMPL_25973_fn(bool* arg0_, jobject* arg1_, int* __retval);
void RelativeLayout__getGravity_fn(RelativeLayout* __this, int* __retval);
void RelativeLayout__getGravity_IMPL_25969_fn(bool* arg0_, jobject* arg1_, int* __retval);
void RelativeLayout__get_LEFT_OF_fn(int* __retval);
void RelativeLayout__New9_fn(::g::Android::android::content::Context* arg0, RelativeLayout** __retval);
void RelativeLayout__New10_fn(::g::Android::android::content::Context* arg0, uObject* arg1, RelativeLayout** __retval);
void RelativeLayout__New11_fn(::g::Android::android::content::Context* arg0, uObject* arg1, int* arg2, RelativeLayout** __retval);
void RelativeLayout__New12_fn(jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType, RelativeLayout** __retval);
void RelativeLayout__onInitializeAccessibilityEvent_fn(RelativeLayout* __this, ::g::Android::android::view::accessibility::AccessibilityEvent* arg0);
void RelativeLayout__onInitializeAccessibilityEvent_IMPL_25982_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void RelativeLayout__onInitializeAccessibilityNodeInfo_fn(RelativeLayout* __this, ::g::Android::android::view::accessibility::AccessibilityNodeInfo* arg0);
void RelativeLayout__onInitializeAccessibilityNodeInfo_IMPL_25983_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void RelativeLayout__onLayout_IMPL_25976_fn(bool* arg0_, jobject* arg1_, bool* arg2_, int* arg3_, int* arg4_, int* arg5_, int* arg6_);
void RelativeLayout__onMeasure_IMPL_25975_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_);
void RelativeLayout__requestLayout_fn(RelativeLayout* __this);
void RelativeLayout__requestLayout_IMPL_25974_fn(bool* arg0_, jobject* arg1_);
void RelativeLayout__get_RIGHT_OF_fn(int* __retval);
void RelativeLayout__setGravity_fn(RelativeLayout* __this, int* arg0);
void RelativeLayout__setGravity_IMPL_25970_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void RelativeLayout__setHorizontalGravity_fn(RelativeLayout* __this, int* arg0);
void RelativeLayout__setHorizontalGravity_IMPL_25971_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void RelativeLayout__setIgnoreGravity_fn(RelativeLayout* __this, int* arg0);
void RelativeLayout__setIgnoreGravity_IMPL_25968_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void RelativeLayout__setVerticalGravity_fn(RelativeLayout* __this, int* arg0);
void RelativeLayout__setVerticalGravity_IMPL_25972_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void RelativeLayout__shouldDelayChildPressedState_fn(RelativeLayout* __this, bool* __retval);
void RelativeLayout__shouldDelayChildPressedState_IMPL_25967_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void RelativeLayout__get_START_OF_fn(int* __retval);
void RelativeLayout__get_TRUE_fn(int* __retval);

struct RelativeLayout : ::g::Android::android::view::ViewGroup
{
    static jclass _javaClass4_;
    static jclass& _javaClass4() { return _javaClass4_; }
    static jfieldID ABOVE_25944_ID_;
    static jfieldID& ABOVE_25944_ID() { return ABOVE_25944_ID_; }
    static jfieldID ALIGN_BASELINE_25946_ID_;
    static jfieldID& ALIGN_BASELINE_25946_ID() { return ALIGN_BASELINE_25946_ID_; }
    static jfieldID ALIGN_BOTTOM_25950_ID_;
    static jfieldID& ALIGN_BOTTOM_25950_ID() { return ALIGN_BOTTOM_25950_ID_; }
    static jfieldID ALIGN_END_25961_ID_;
    static jfieldID& ALIGN_END_25961_ID() { return ALIGN_END_25961_ID_; }
    static jfieldID ALIGN_LEFT_25947_ID_;
    static jfieldID& ALIGN_LEFT_25947_ID() { return ALIGN_LEFT_25947_ID_; }
    static jfieldID ALIGN_PARENT_BOTTOM_25954_ID_;
    static jfieldID& ALIGN_PARENT_BOTTOM_25954_ID() { return ALIGN_PARENT_BOTTOM_25954_ID_; }
    static jfieldID ALIGN_PARENT_END_25963_ID_;
    static jfieldID& ALIGN_PARENT_END_25963_ID() { return ALIGN_PARENT_END_25963_ID_; }
    static jfieldID ALIGN_PARENT_LEFT_25951_ID_;
    static jfieldID& ALIGN_PARENT_LEFT_25951_ID() { return ALIGN_PARENT_LEFT_25951_ID_; }
    static jfieldID ALIGN_PARENT_RIGHT_25953_ID_;
    static jfieldID& ALIGN_PARENT_RIGHT_25953_ID() { return ALIGN_PARENT_RIGHT_25953_ID_; }
    static jfieldID ALIGN_PARENT_START_25962_ID_;
    static jfieldID& ALIGN_PARENT_START_25962_ID() { return ALIGN_PARENT_START_25962_ID_; }
    static jfieldID ALIGN_PARENT_TOP_25952_ID_;
    static jfieldID& ALIGN_PARENT_TOP_25952_ID() { return ALIGN_PARENT_TOP_25952_ID_; }
    static jfieldID ALIGN_RIGHT_25949_ID_;
    static jfieldID& ALIGN_RIGHT_25949_ID() { return ALIGN_RIGHT_25949_ID_; }
    static jfieldID ALIGN_START_25960_ID_;
    static jfieldID& ALIGN_START_25960_ID() { return ALIGN_START_25960_ID_; }
    static jfieldID ALIGN_TOP_25948_ID_;
    static jfieldID& ALIGN_TOP_25948_ID() { return ALIGN_TOP_25948_ID_; }
    static jfieldID BELOW_25945_ID_;
    static jfieldID& BELOW_25945_ID() { return BELOW_25945_ID_; }
    static jfieldID CENTER_HORIZONTAL_25956_ID_;
    static jfieldID& CENTER_HORIZONTAL_25956_ID() { return CENTER_HORIZONTAL_25956_ID_; }
    static jfieldID CENTER_IN_PARENT_25955_ID_;
    static jfieldID& CENTER_IN_PARENT_25955_ID() { return CENTER_IN_PARENT_25955_ID_; }
    static jfieldID CENTER_VERTICAL_25957_ID_;
    static jfieldID& CENTER_VERTICAL_25957_ID() { return CENTER_VERTICAL_25957_ID_; }
    static jmethodID checkLayoutParams_25979_ID_;
    static jmethodID& checkLayoutParams_25979_ID() { return checkLayoutParams_25979_ID_; }
    static jmethodID dispatchPopulateAccessibilityEvent_25981_ID_;
    static jmethodID& dispatchPopulateAccessibilityEvent_25981_ID() { return dispatchPopulateAccessibilityEvent_25981_ID_; }
    static jfieldID END_OF_25959_ID_;
    static jfieldID& END_OF_25959_ID() { return END_OF_25959_ID_; }
    static jmethodID generateDefaultLayoutParams_25978_ID_;
    static jmethodID& generateDefaultLayoutParams_25978_ID() { return generateDefaultLayoutParams_25978_ID_; }
    static jmethodID generateLayoutParams_25977_ID_;
    static jmethodID& generateLayoutParams_25977_ID() { return generateLayoutParams_25977_ID_; }
    static jmethodID generateLayoutParams_25980_ID_;
    static jmethodID& generateLayoutParams_25980_ID() { return generateLayoutParams_25980_ID_; }
    static jmethodID getBaseline_25973_ID_;
    static jmethodID& getBaseline_25973_ID() { return getBaseline_25973_ID_; }
    static jmethodID getGravity_25969_ID_;
    static jmethodID& getGravity_25969_ID() { return getGravity_25969_ID_; }
    static jfieldID LEFT_OF_25942_ID_;
    static jfieldID& LEFT_OF_25942_ID() { return LEFT_OF_25942_ID_; }
    static jmethodID onInitializeAccessibilityEvent_25982_ID_;
    static jmethodID& onInitializeAccessibilityEvent_25982_ID() { return onInitializeAccessibilityEvent_25982_ID_; }
    static jmethodID onInitializeAccessibilityNodeInfo_25983_ID_;
    static jmethodID& onInitializeAccessibilityNodeInfo_25983_ID() { return onInitializeAccessibilityNodeInfo_25983_ID_; }
    static jmethodID onLayout_25976_ID_;
    static jmethodID& onLayout_25976_ID() { return onLayout_25976_ID_; }
    static jmethodID onMeasure_25975_ID_;
    static jmethodID& onMeasure_25975_ID() { return onMeasure_25975_ID_; }
    static jmethodID RelativeLayout_25964_ID_c_;
    static jmethodID& RelativeLayout_25964_ID_c() { return RelativeLayout_25964_ID_c_; }
    static jmethodID RelativeLayout_25965_ID_c_;
    static jmethodID& RelativeLayout_25965_ID_c() { return RelativeLayout_25965_ID_c_; }
    static jmethodID RelativeLayout_25966_ID_c_;
    static jmethodID& RelativeLayout_25966_ID_c() { return RelativeLayout_25966_ID_c_; }
    static jmethodID requestLayout_25974_ID_;
    static jmethodID& requestLayout_25974_ID() { return requestLayout_25974_ID_; }
    static jfieldID RIGHT_OF_25943_ID_;
    static jfieldID& RIGHT_OF_25943_ID() { return RIGHT_OF_25943_ID_; }
    static jmethodID setGravity_25970_ID_;
    static jmethodID& setGravity_25970_ID() { return setGravity_25970_ID_; }
    static jmethodID setHorizontalGravity_25971_ID_;
    static jmethodID& setHorizontalGravity_25971_ID() { return setHorizontalGravity_25971_ID_; }
    static jmethodID setIgnoreGravity_25968_ID_;
    static jmethodID& setIgnoreGravity_25968_ID() { return setIgnoreGravity_25968_ID_; }
    static jmethodID setVerticalGravity_25972_ID_;
    static jmethodID& setVerticalGravity_25972_ID() { return setVerticalGravity_25972_ID_; }
    static jmethodID shouldDelayChildPressedState_25967_ID_;
    static jmethodID& shouldDelayChildPressedState_25967_ID() { return shouldDelayChildPressedState_25967_ID_; }
    static jfieldID START_OF_25958_ID_;
    static jfieldID& START_OF_25958_ID() { return START_OF_25958_ID_; }
    static jfieldID TRUE_25941_ID_;
    static jfieldID& TRUE_25941_ID() { return TRUE_25941_ID_; }

    void ctor_12(::g::Android::android::content::Context* arg0);
    void ctor_13(::g::Android::android::content::Context* arg0, uObject* arg1);
    void ctor_14(::g::Android::android::content::Context* arg0, uObject* arg1, int arg2);
    void ctor_15(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    ::g::Android::android::widget::RelativeLayoutDLRLayoutParams* generateLayoutParams2(uObject* arg0);
    int getGravity();
    void setGravity(int arg0);
    void setHorizontalGravity(int arg0);
    void setIgnoreGravity(int arg0);
    void setVerticalGravity(int arg0);
    static void _Init4();
    static bool checkLayoutParams_IMPL_25979(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool dispatchPopulateAccessibilityEvent_IMPL_25981(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* generateDefaultLayoutParams_IMPL_25978(bool arg0_, jobject arg1_);
    static uObject* generateLayoutParams_IMPL_25977(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* generateLayoutParams_IMPL_25980(bool arg0_, jobject arg1_, uObject* arg2_);
    static int getBaseline_IMPL_25973(bool arg0_, jobject arg1_);
    static int getGravity_IMPL_25969(bool arg0_, jobject arg1_);
    static RelativeLayout* New9(::g::Android::android::content::Context* arg0);
    static RelativeLayout* New10(::g::Android::android::content::Context* arg0, uObject* arg1);
    static RelativeLayout* New11(::g::Android::android::content::Context* arg0, uObject* arg1, int arg2);
    static RelativeLayout* New12(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    static void onInitializeAccessibilityEvent_IMPL_25982(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onInitializeAccessibilityNodeInfo_IMPL_25983(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onLayout_IMPL_25976(bool arg0_, jobject arg1_, bool arg2_, int arg3_, int arg4_, int arg5_, int arg6_);
    static void onMeasure_IMPL_25975(bool arg0_, jobject arg1_, int arg2_, int arg3_);
    static void requestLayout_IMPL_25974(bool arg0_, jobject arg1_);
    static void setGravity_IMPL_25970(bool arg0_, jobject arg1_, int arg2_);
    static void setHorizontalGravity_IMPL_25971(bool arg0_, jobject arg1_, int arg2_);
    static void setIgnoreGravity_IMPL_25968(bool arg0_, jobject arg1_, int arg2_);
    static void setVerticalGravity_IMPL_25972(bool arg0_, jobject arg1_, int arg2_);
    static bool shouldDelayChildPressedState_IMPL_25967(bool arg0_, jobject arg1_);
    static int ABOVE();
    static int ALIGN_BASELINE();
    static int ALIGN_BOTTOM();
    static int ALIGN_END();
    static int ALIGN_LEFT();
    static int ALIGN_PARENT_BOTTOM();
    static int ALIGN_PARENT_END();
    static int ALIGN_PARENT_LEFT();
    static int ALIGN_PARENT_RIGHT();
    static int ALIGN_PARENT_START();
    static int ALIGN_PARENT_TOP();
    static int ALIGN_RIGHT();
    static int ALIGN_START();
    static int ALIGN_TOP();
    static int BELOW();
    static int CENTER_HORIZONTAL();
    static int CENTER_IN_PARENT();
    static int CENTER_VERTICAL();
    static int END_OF();
    static int LEFT_OF();
    static int RIGHT_OF();
    static int START_OF();
    static int TRUE();
};
// }

}}}} // ::g::Android::android::widget
