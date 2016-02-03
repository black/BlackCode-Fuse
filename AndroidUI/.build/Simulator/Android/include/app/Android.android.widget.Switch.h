// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_WIDGET_SWITCH_H__
#define __APP_ANDROID_ANDROID_WIDGET_SWITCH_H__

#include <app/Android.android.widget.CompoundButton.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace content { struct Context; } } } }
namespace app { namespace Android { namespace android { namespace graphics { namespace drawable { struct Drawable; } } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct Canvas; } } } }
namespace app { namespace Android { namespace android { namespace view { namespace accessibility { struct AccessibilityEvent; } } } } }
namespace app { namespace Android { namespace android { namespace view { namespace accessibility { struct AccessibilityNodeInfo; } } } } }
namespace app { namespace Android { namespace android { namespace view { struct MotionEvent; } } } }
namespace app { namespace Android { namespace Runtime { struct IntArray; } } }

namespace app {
namespace Android {
namespace android {
namespace widget {

struct Switch;

extern jclass Switch___javaClass_6;
extern jmethodID Switch__drawableStateChanged_26372_ID;
extern jmethodID Switch__jumpDrawablesToCurrentState_26374_ID;
extern jmethodID Switch__onCreateDrawableState_26371_ID;
extern jmethodID Switch__onDraw_26368_ID;
extern jmethodID Switch__onInitializeAccessibilityEvent_26375_ID;
extern jmethodID Switch__onInitializeAccessibilityNodeInfo_26376_ID;
extern jmethodID Switch__onLayout_26367_ID;
extern jmethodID Switch__onPopulateAccessibilityEvent_26364_ID;
extern jmethodID Switch__onTouchEvent_26365_ID;
extern jmethodID Switch__setChecked_26366_ID;
extern jmethodID Switch__Switch_26341_ID_c;
extern jmethodID Switch__verifyDrawable_26373_ID;

struct Switch__uType : ::app::Android::android::widget::CompoundButton__uType
{
};

Switch__uType* Switch__typeof();

void Switch___Init_6(::uStatic* __this);
void Switch___ObjInit_20(Switch* __this, ::app::Android::android::content::Context* arg0);
void Switch__drawableStateChanged(Switch* __this);
void Switch__drawableStateChanged_IMPL_26372(::uStatic* __this, bool arg0_, jobject arg1_);
void Switch__jumpDrawablesToCurrentState(Switch* __this);
void Switch__jumpDrawablesToCurrentState_IMPL_26374(::uStatic* __this, bool arg0_, jobject arg1_);
Switch* Switch__New_17(::uStatic* __this, ::app::Android::android::content::Context* arg0);
::app::Android::Runtime::IntArray* Switch__onCreateDrawableState(Switch* __this, int arg0);
::uObject* Switch__onCreateDrawableState_IMPL_26371(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void Switch__onDraw(Switch* __this, ::app::Android::android::graphics::Canvas* arg0);
void Switch__onDraw_IMPL_26368(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void Switch__onInitializeAccessibilityEvent(Switch* __this, ::app::Android::android::view::accessibility::AccessibilityEvent* arg0);
void Switch__onInitializeAccessibilityEvent_IMPL_26375(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void Switch__onInitializeAccessibilityNodeInfo(Switch* __this, ::app::Android::android::view::accessibility::AccessibilityNodeInfo* arg0);
void Switch__onInitializeAccessibilityNodeInfo_IMPL_26376(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void Switch__onLayout(Switch* __this, bool arg0, int arg1, int arg2, int arg3, int arg4);
void Switch__onLayout_IMPL_26367(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_, int arg3_, int arg4_, int arg5_, int arg6_);
void Switch__onPopulateAccessibilityEvent(Switch* __this, ::app::Android::android::view::accessibility::AccessibilityEvent* arg0);
void Switch__onPopulateAccessibilityEvent_IMPL_26364(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool Switch__onTouchEvent(Switch* __this, ::app::Android::android::view::MotionEvent* arg0);
bool Switch__onTouchEvent_IMPL_26365(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void Switch__setChecked(Switch* __this, bool arg0);
void Switch__setChecked_IMPL_26366(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
bool Switch__verifyDrawable(Switch* __this, ::app::Android::android::graphics::drawable::Drawable* arg0);
bool Switch__verifyDrawable_IMPL_26373(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);

struct Switch : ::app::Android::android::widget::CompoundButton
{
    void _ObjInit_20(::app::Android::android::content::Context* arg0) { Switch___ObjInit_20(this, arg0); }
};

}}}}


#endif
