// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_WIDGET_BUTTON_H__
#define __APP_ANDROID_ANDROID_WIDGET_BUTTON_H__

#include <app/Android.android.widget.TextView.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace content { struct Context; } } } }
namespace app { namespace Android { namespace android { namespace view { namespace accessibility { struct AccessibilityEvent; } } } } }
namespace app { namespace Android { namespace android { namespace view { namespace accessibility { struct AccessibilityNodeInfo; } } } } }

namespace app {
namespace Android {
namespace android {
namespace widget {

struct Button;

extern jclass Button___javaClass_4;
extern jmethodID Button__Button_24840_ID_c;
extern jmethodID Button__onInitializeAccessibilityEvent_24843_ID;
extern jmethodID Button__onInitializeAccessibilityNodeInfo_24844_ID;

struct Button__uType : ::app::Android::android::widget::TextView__uType
{
};

Button__uType* Button__typeof();

void Button___Init_4(::uStatic* __this);
void Button___ObjInit_12(Button* __this, ::app::Android::android::content::Context* arg0);
void Button___ObjInit_15(Button* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
Button* Button__New_13(::uStatic* __this, ::app::Android::android::content::Context* arg0);
void Button__onInitializeAccessibilityEvent(Button* __this, ::app::Android::android::view::accessibility::AccessibilityEvent* arg0);
void Button__onInitializeAccessibilityEvent_IMPL_24843(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void Button__onInitializeAccessibilityNodeInfo(Button* __this, ::app::Android::android::view::accessibility::AccessibilityNodeInfo* arg0);
void Button__onInitializeAccessibilityNodeInfo_IMPL_24844(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);

struct Button : ::app::Android::android::widget::TextView
{
    void _ObjInit_12(::app::Android::android::content::Context* arg0) { Button___ObjInit_12(this, arg0); }
    void _ObjInit_15(jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType) { Button___ObjInit_15(this, obj, utype, hasFallbackClass, resolveType); }
};

}}}}


#endif
