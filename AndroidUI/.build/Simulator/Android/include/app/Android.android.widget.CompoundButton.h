// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_WIDGET_COMPOUND_BUTTON_H__
#define __APP_ANDROID_ANDROID_WIDGET_COMPOUND_BUTTON_H__

#include <app/Android.android.widget.Button.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace graphics { namespace drawable { struct Drawable; } } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct Canvas; } } } }
namespace app { namespace Android { namespace android { namespace view { namespace accessibility { struct AccessibilityEvent; } } } } }
namespace app { namespace Android { namespace android { namespace view { namespace accessibility { struct AccessibilityNodeInfo; } } } } }
namespace app { namespace Android { namespace Runtime { struct IntArray; } } }

namespace app {
namespace Android {
namespace android {
namespace widget {

struct CompoundButton;

extern jclass CompoundButton___javaClass_5;
extern jmethodID CompoundButton__drawableStateChanged_24941_ID;
extern jmethodID CompoundButton__jumpDrawablesToCurrentState_24943_ID;
extern jmethodID CompoundButton__onCreateDrawableState_24940_ID;
extern jmethodID CompoundButton__onDraw_24939_ID;
extern jmethodID CompoundButton__onInitializeAccessibilityEvent_24935_ID;
extern jmethodID CompoundButton__onInitializeAccessibilityNodeInfo_24936_ID;
extern jmethodID CompoundButton__performClick_24929_ID;
extern jmethodID CompoundButton__setChecked_24931_ID;
extern jmethodID CompoundButton__setOnCheckedChangeListener_24932_ID;
extern jmethodID CompoundButton__verifyDrawable_24942_ID;

struct CompoundButton__uType : ::app::Android::android::widget::Button__uType
{
    void(*__fp_setChecked)(CompoundButton*, bool);
};

CompoundButton__uType* CompoundButton__typeof();

void CompoundButton___Init_5(::uStatic* __this);
void CompoundButton___ObjInit_19(CompoundButton* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
void CompoundButton__drawableStateChanged(CompoundButton* __this);
void CompoundButton__drawableStateChanged_IMPL_24941(::uStatic* __this, bool arg0_, jobject arg1_);
void CompoundButton__jumpDrawablesToCurrentState(CompoundButton* __this);
void CompoundButton__jumpDrawablesToCurrentState_IMPL_24943(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::Runtime::IntArray* CompoundButton__onCreateDrawableState(CompoundButton* __this, int arg0);
::uObject* CompoundButton__onCreateDrawableState_IMPL_24940(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void CompoundButton__onDraw(CompoundButton* __this, ::app::Android::android::graphics::Canvas* arg0);
void CompoundButton__onDraw_IMPL_24939(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void CompoundButton__onInitializeAccessibilityEvent(CompoundButton* __this, ::app::Android::android::view::accessibility::AccessibilityEvent* arg0);
void CompoundButton__onInitializeAccessibilityEvent_IMPL_24935(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void CompoundButton__onInitializeAccessibilityNodeInfo(CompoundButton* __this, ::app::Android::android::view::accessibility::AccessibilityNodeInfo* arg0);
void CompoundButton__onInitializeAccessibilityNodeInfo_IMPL_24936(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool CompoundButton__performClick(CompoundButton* __this);
bool CompoundButton__performClick_IMPL_24929(::uStatic* __this, bool arg0_, jobject arg1_);
void CompoundButton__setChecked(CompoundButton* __this, bool arg0);
void CompoundButton__setChecked_IMPL_24931(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void CompoundButton__setOnCheckedChangeListener(CompoundButton* __this, ::uObject* arg0);
void CompoundButton__setOnCheckedChangeListener_IMPL_24932(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool CompoundButton__verifyDrawable(CompoundButton* __this, ::app::Android::android::graphics::drawable::Drawable* arg0);
bool CompoundButton__verifyDrawable_IMPL_24942(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);

struct CompoundButton : ::app::Android::android::widget::Button
{
    void _ObjInit_19(jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType) { CompoundButton___ObjInit_19(this, obj, utype, hasFallbackClass, resolveType); }
    void setChecked(bool arg0) { (((CompoundButton__uType*)this->__obj_type)->__fp_setChecked)(this, arg0); }
    void setOnCheckedChangeListener(::uObject* arg0) { CompoundButton__setOnCheckedChangeListener(this, arg0); }
};

}}}}


#endif
