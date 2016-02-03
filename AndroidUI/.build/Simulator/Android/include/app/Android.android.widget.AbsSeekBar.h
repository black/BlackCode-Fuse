// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_WIDGET_ABS_SEEK_BAR_H__
#define __APP_ANDROID_ANDROID_WIDGET_ABS_SEEK_BAR_H__

#include <app/Android.android.widget.ProgressBar.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace content { struct Context; } } } }
namespace app { namespace Android { namespace android { namespace graphics { namespace drawable { struct Drawable; } } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct Canvas; } } } }
namespace app { namespace Android { namespace android { namespace os { struct Bundle; } } } }
namespace app { namespace Android { namespace android { namespace view { namespace accessibility { struct AccessibilityEvent; } } } } }
namespace app { namespace Android { namespace android { namespace view { namespace accessibility { struct AccessibilityNodeInfo; } } } } }
namespace app { namespace Android { namespace android { namespace view { struct KeyEvent; } } } }
namespace app { namespace Android { namespace android { namespace view { struct MotionEvent; } } } }

namespace app {
namespace Android {
namespace android {
namespace widget {

struct AbsSeekBar;

extern jclass AbsSeekBar___javaClass_4;
extern jmethodID AbsSeekBar__AbsSeekBar_24535_ID_c;
extern jmethodID AbsSeekBar__AbsSeekBar_24536_ID_c;
extern jmethodID AbsSeekBar__AbsSeekBar_24537_ID_c;
extern jmethodID AbsSeekBar__drawableStateChanged_24547_ID;
extern jmethodID AbsSeekBar__getKeyProgressIncrement_24543_ID;
extern jmethodID AbsSeekBar__getThumb_24539_ID;
extern jmethodID AbsSeekBar__getThumbOffset_24540_ID;
extern jmethodID AbsSeekBar__jumpDrawablesToCurrentState_24546_ID;
extern jmethodID AbsSeekBar__onDraw_24549_ID;
extern jmethodID AbsSeekBar__onInitializeAccessibilityEvent_24553_ID;
extern jmethodID AbsSeekBar__onInitializeAccessibilityNodeInfo_24554_ID;
extern jmethodID AbsSeekBar__onKeyDown_24552_ID;
extern jmethodID AbsSeekBar__onMeasure_24550_ID;
extern jmethodID AbsSeekBar__onRtlPropertiesChanged_24556_ID;
extern jmethodID AbsSeekBar__onSizeChanged_24548_ID;
extern jmethodID AbsSeekBar__onTouchEvent_24551_ID;
extern jmethodID AbsSeekBar__performAccessibilityAction_24555_ID;
extern jmethodID AbsSeekBar__setKeyProgressIncrement_24542_ID;
extern jmethodID AbsSeekBar__setMax_24544_ID;
extern jmethodID AbsSeekBar__setThumb_24538_ID;
extern jmethodID AbsSeekBar__setThumbOffset_24541_ID;
extern jmethodID AbsSeekBar__verifyDrawable_24545_ID;

struct AbsSeekBar__uType : ::app::Android::android::widget::ProgressBar__uType
{
};

AbsSeekBar__uType* AbsSeekBar__typeof();

void AbsSeekBar___Init_4(::uStatic* __this);
void AbsSeekBar___ObjInit_12(AbsSeekBar* __this, ::app::Android::android::content::Context* arg0);
void AbsSeekBar___ObjInit_13(AbsSeekBar* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1);
void AbsSeekBar___ObjInit_14(AbsSeekBar* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1, int arg2);
void AbsSeekBar___ObjInit_15(AbsSeekBar* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
void AbsSeekBar__drawableStateChanged(AbsSeekBar* __this);
void AbsSeekBar__drawableStateChanged_IMPL_24547(::uStatic* __this, bool arg0_, jobject arg1_);
int AbsSeekBar__getKeyProgressIncrement(AbsSeekBar* __this);
int AbsSeekBar__getKeyProgressIncrement_IMPL_24543(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::android::graphics::drawable::Drawable* AbsSeekBar__getThumb(AbsSeekBar* __this);
::uObject* AbsSeekBar__getThumb_IMPL_24539(::uStatic* __this, bool arg0_, jobject arg1_);
int AbsSeekBar__getThumbOffset(AbsSeekBar* __this);
int AbsSeekBar__getThumbOffset_IMPL_24540(::uStatic* __this, bool arg0_, jobject arg1_);
void AbsSeekBar__jumpDrawablesToCurrentState(AbsSeekBar* __this);
void AbsSeekBar__jumpDrawablesToCurrentState_IMPL_24546(::uStatic* __this, bool arg0_, jobject arg1_);
void AbsSeekBar__onDraw(AbsSeekBar* __this, ::app::Android::android::graphics::Canvas* arg0);
void AbsSeekBar__onDraw_IMPL_24549(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void AbsSeekBar__onInitializeAccessibilityEvent(AbsSeekBar* __this, ::app::Android::android::view::accessibility::AccessibilityEvent* arg0);
void AbsSeekBar__onInitializeAccessibilityEvent_IMPL_24553(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void AbsSeekBar__onInitializeAccessibilityNodeInfo(AbsSeekBar* __this, ::app::Android::android::view::accessibility::AccessibilityNodeInfo* arg0);
void AbsSeekBar__onInitializeAccessibilityNodeInfo_IMPL_24554(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool AbsSeekBar__onKeyDown(AbsSeekBar* __this, int arg0, ::app::Android::android::view::KeyEvent* arg1);
bool AbsSeekBar__onKeyDown_IMPL_24552(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_);
void AbsSeekBar__onMeasure(AbsSeekBar* __this, int arg0, int arg1);
void AbsSeekBar__onMeasure_IMPL_24550(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_);
void AbsSeekBar__onRtlPropertiesChanged(AbsSeekBar* __this, int arg0);
void AbsSeekBar__onRtlPropertiesChanged_IMPL_24556(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void AbsSeekBar__onSizeChanged(AbsSeekBar* __this, int arg0, int arg1, int arg2, int arg3);
void AbsSeekBar__onSizeChanged_IMPL_24548(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
bool AbsSeekBar__onTouchEvent(AbsSeekBar* __this, ::app::Android::android::view::MotionEvent* arg0);
bool AbsSeekBar__onTouchEvent_IMPL_24551(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool AbsSeekBar__performAccessibilityAction(AbsSeekBar* __this, int arg0, ::app::Android::android::os::Bundle* arg1);
bool AbsSeekBar__performAccessibilityAction_IMPL_24555(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_);
void AbsSeekBar__setKeyProgressIncrement(AbsSeekBar* __this, int arg0);
void AbsSeekBar__setKeyProgressIncrement_IMPL_24542(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void AbsSeekBar__setMax(AbsSeekBar* __this, int arg0);
void AbsSeekBar__setMax_IMPL_24544(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void AbsSeekBar__setThumb(AbsSeekBar* __this, ::app::Android::android::graphics::drawable::Drawable* arg0);
void AbsSeekBar__setThumb_IMPL_24538(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void AbsSeekBar__setThumbOffset(AbsSeekBar* __this, int arg0);
void AbsSeekBar__setThumbOffset_IMPL_24541(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
bool AbsSeekBar__verifyDrawable(AbsSeekBar* __this, ::app::Android::android::graphics::drawable::Drawable* arg0);
bool AbsSeekBar__verifyDrawable_IMPL_24545(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);

struct AbsSeekBar : ::app::Android::android::widget::ProgressBar
{
    void _ObjInit_12(::app::Android::android::content::Context* arg0) { AbsSeekBar___ObjInit_12(this, arg0); }
    void _ObjInit_13(::app::Android::android::content::Context* arg0, ::uObject* arg1) { AbsSeekBar___ObjInit_13(this, arg0, arg1); }
    void _ObjInit_14(::app::Android::android::content::Context* arg0, ::uObject* arg1, int arg2) { AbsSeekBar___ObjInit_14(this, arg0, arg1, arg2); }
    void _ObjInit_15(jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType) { AbsSeekBar___ObjInit_15(this, obj, utype, hasFallbackClass, resolveType); }
    int getKeyProgressIncrement() { return AbsSeekBar__getKeyProgressIncrement(this); }
    ::app::Android::android::graphics::drawable::Drawable* getThumb() { return AbsSeekBar__getThumb(this); }
    int getThumbOffset() { return AbsSeekBar__getThumbOffset(this); }
    void setKeyProgressIncrement(int arg0) { AbsSeekBar__setKeyProgressIncrement(this, arg0); }
    void setThumb(::app::Android::android::graphics::drawable::Drawable* arg0) { AbsSeekBar__setThumb(this, arg0); }
    void setThumbOffset(int arg0) { AbsSeekBar__setThumbOffset(this, arg0); }
};

}}}}


#endif
