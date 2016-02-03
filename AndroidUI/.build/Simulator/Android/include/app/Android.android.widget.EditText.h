// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_WIDGET_EDIT_TEXT_H__
#define __APP_ANDROID_ANDROID_WIDGET_EDIT_TEXT_H__

#include <app/Android.android.widget.TextView.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace content { struct Context; } } } }
namespace app { namespace Android { namespace android { namespace text { struct TextUtilsDLRTruncateAt; } } } }
namespace app { namespace Android { namespace android { namespace view { namespace accessibility { struct AccessibilityEvent; } } } } }
namespace app { namespace Android { namespace android { namespace view { namespace accessibility { struct AccessibilityNodeInfo; } } } } }

namespace app {
namespace Android {
namespace android {
namespace widget {

struct EditText;

extern jclass EditText___javaClass_4;
extern jmethodID EditText__EditText_25066_ID_c;
extern jmethodID EditText__onInitializeAccessibilityEvent_25078_ID;
extern jmethodID EditText__onInitializeAccessibilityNodeInfo_25079_ID;
extern jmethodID EditText__setEllipsize_25077_ID;

struct EditText__uType : ::app::Android::android::widget::TextView__uType
{
};

EditText__uType* EditText__typeof();

void EditText___Init_4(::uStatic* __this);
void EditText___ObjInit_12(EditText* __this, ::app::Android::android::content::Context* arg0);
EditText* EditText__New_13(::uStatic* __this, ::app::Android::android::content::Context* arg0);
void EditText__onInitializeAccessibilityEvent(EditText* __this, ::app::Android::android::view::accessibility::AccessibilityEvent* arg0);
void EditText__onInitializeAccessibilityEvent_IMPL_25078(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void EditText__onInitializeAccessibilityNodeInfo(EditText* __this, ::app::Android::android::view::accessibility::AccessibilityNodeInfo* arg0);
void EditText__onInitializeAccessibilityNodeInfo_IMPL_25079(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void EditText__setEllipsize(EditText* __this, ::app::Android::android::text::TextUtilsDLRTruncateAt* arg0);
void EditText__setEllipsize_IMPL_25077(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);

struct EditText : ::app::Android::android::widget::TextView
{
    void _ObjInit_12(::app::Android::android::content::Context* arg0) { EditText___ObjInit_12(this, arg0); }
};

}}}}


#endif
