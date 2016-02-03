// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_WIDGET_ABSOLUTE_LAYOUT_H__
#define __APP_ANDROID_ANDROID_WIDGET_ABSOLUTE_LAYOUT_H__

#include <app/Android.android.view.ViewGroup.h>
#include <app/Android.android.view.ViewParent.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct ViewGroupDLRLayoutParams; } } } }

namespace app {
namespace Android {
namespace android {
namespace widget {

struct AbsoluteLayout;

extern jclass AbsoluteLayout___javaClass_4;
extern jmethodID AbsoluteLayout__checkLayoutParams_24587_ID;
extern jmethodID AbsoluteLayout__generateDefaultLayoutParams_24584_ID;
extern jmethodID AbsoluteLayout__generateLayoutParams_24586_ID;
extern jmethodID AbsoluteLayout__generateLayoutParams_24588_ID;
extern jmethodID AbsoluteLayout__onLayout_24585_ID;
extern jmethodID AbsoluteLayout__onMeasure_24583_ID;
extern jmethodID AbsoluteLayout__shouldDelayChildPressedState_24589_ID;

struct AbsoluteLayout__uType : ::app::Android::android::view::ViewGroup__uType
{
};

AbsoluteLayout__uType* AbsoluteLayout__typeof();

void AbsoluteLayout___Init_4(::uStatic* __this);
void AbsoluteLayout___ObjInit_15(AbsoluteLayout* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
bool AbsoluteLayout__checkLayoutParams(AbsoluteLayout* __this, ::app::Android::android::view::ViewGroupDLRLayoutParams* arg0);
bool AbsoluteLayout__checkLayoutParams_IMPL_24587(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
::app::Android::android::view::ViewGroupDLRLayoutParams* AbsoluteLayout__generateDefaultLayoutParams(AbsoluteLayout* __this);
::uObject* AbsoluteLayout__generateDefaultLayoutParams_IMPL_24584(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::android::view::ViewGroupDLRLayoutParams* AbsoluteLayout__generateLayoutParams(AbsoluteLayout* __this, ::uObject* arg0);
::app::Android::android::view::ViewGroupDLRLayoutParams* AbsoluteLayout__generateLayoutParams_1(AbsoluteLayout* __this, ::app::Android::android::view::ViewGroupDLRLayoutParams* arg0);
::uObject* AbsoluteLayout__generateLayoutParams_IMPL_24586(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
::uObject* AbsoluteLayout__generateLayoutParams_IMPL_24588(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void AbsoluteLayout__onLayout(AbsoluteLayout* __this, bool arg0, int arg1, int arg2, int arg3, int arg4);
void AbsoluteLayout__onLayout_IMPL_24585(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_, int arg3_, int arg4_, int arg5_, int arg6_);
void AbsoluteLayout__onMeasure(AbsoluteLayout* __this, int arg0, int arg1);
void AbsoluteLayout__onMeasure_IMPL_24583(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_);
bool AbsoluteLayout__shouldDelayChildPressedState(AbsoluteLayout* __this);
bool AbsoluteLayout__shouldDelayChildPressedState_IMPL_24589(::uStatic* __this, bool arg0_, jobject arg1_);

struct AbsoluteLayout : ::app::Android::android::view::ViewGroup
{
    void _ObjInit_15(jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType) { AbsoluteLayout___ObjInit_15(this, obj, utype, hasFallbackClass, resolveType); }
};

}}}}


#endif
