// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.widget.ProgressBar.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{struct Context;}}}}
namespace g{namespace Android{namespace android{namespace graphics{namespace drawable{struct Drawable;}}}}}
namespace g{namespace Android{namespace android{namespace os{struct Bundle;}}}}
namespace g{namespace Android{namespace android{namespace view{namespace accessibility{struct AccessibilityEvent;}}}}}
namespace g{namespace Android{namespace android{namespace view{namespace accessibility{struct AccessibilityNodeInfo;}}}}}
namespace g{namespace Android{namespace android{namespace view{struct KeyEvent;}}}}
namespace g{namespace Android{namespace android{namespace view{struct MotionEvent;}}}}
namespace g{namespace Android{namespace android{namespace widget{struct AbsSeekBar;}}}}

namespace g{
namespace Android{
namespace android{
namespace widget{

// public abstract extern class AbsSeekBar :2238
// {
::g::Android::android::widget::ProgressBar_type* AbsSeekBar_typeof();
void AbsSeekBar__ctor_12_fn(AbsSeekBar* __this, ::g::Android::android::content::Context* arg0);
void AbsSeekBar__ctor_13_fn(AbsSeekBar* __this, ::g::Android::android::content::Context* arg0, uObject* arg1);
void AbsSeekBar__ctor_14_fn(AbsSeekBar* __this, ::g::Android::android::content::Context* arg0, uObject* arg1, int* arg2);
void AbsSeekBar__ctor_15_fn(AbsSeekBar* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType);
void AbsSeekBar___Init4_fn();
void AbsSeekBar__drawableStateChanged_IMPL_24547_fn(bool* arg0_, jobject* arg1_);
void AbsSeekBar__getKeyProgressIncrement_fn(AbsSeekBar* __this, int* __retval);
void AbsSeekBar__getKeyProgressIncrement_IMPL_24543_fn(bool* arg0_, jobject* arg1_, int* __retval);
void AbsSeekBar__getThumb_fn(AbsSeekBar* __this, ::g::Android::android::graphics::drawable::Drawable** __retval);
void AbsSeekBar__getThumb_IMPL_24539_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void AbsSeekBar__getThumbOffset_fn(AbsSeekBar* __this, int* __retval);
void AbsSeekBar__getThumbOffset_IMPL_24540_fn(bool* arg0_, jobject* arg1_, int* __retval);
void AbsSeekBar__jumpDrawablesToCurrentState_fn(AbsSeekBar* __this);
void AbsSeekBar__jumpDrawablesToCurrentState_IMPL_24546_fn(bool* arg0_, jobject* arg1_);
void AbsSeekBar__onDraw_IMPL_24549_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void AbsSeekBar__onInitializeAccessibilityEvent_fn(AbsSeekBar* __this, ::g::Android::android::view::accessibility::AccessibilityEvent* arg0);
void AbsSeekBar__onInitializeAccessibilityEvent_IMPL_24553_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void AbsSeekBar__onInitializeAccessibilityNodeInfo_fn(AbsSeekBar* __this, ::g::Android::android::view::accessibility::AccessibilityNodeInfo* arg0);
void AbsSeekBar__onInitializeAccessibilityNodeInfo_IMPL_24554_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void AbsSeekBar__onKeyDown_fn(AbsSeekBar* __this, int* arg0, ::g::Android::android::view::KeyEvent* arg1, bool* __retval);
void AbsSeekBar__onKeyDown_IMPL_24552_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval);
void AbsSeekBar__onMeasure_IMPL_24550_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_);
void AbsSeekBar__onRtlPropertiesChanged_fn(AbsSeekBar* __this, int* arg0);
void AbsSeekBar__onRtlPropertiesChanged_IMPL_24556_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void AbsSeekBar__onSizeChanged_IMPL_24548_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_);
void AbsSeekBar__onTouchEvent_fn(AbsSeekBar* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval);
void AbsSeekBar__onTouchEvent_IMPL_24551_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void AbsSeekBar__performAccessibilityAction_fn(AbsSeekBar* __this, int* arg0, ::g::Android::android::os::Bundle* arg1, bool* __retval);
void AbsSeekBar__performAccessibilityAction_IMPL_24555_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval);
void AbsSeekBar__setKeyProgressIncrement_fn(AbsSeekBar* __this, int* arg0);
void AbsSeekBar__setKeyProgressIncrement_IMPL_24542_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void AbsSeekBar__setMax_fn(AbsSeekBar* __this, int* arg0);
void AbsSeekBar__setMax_IMPL_24544_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void AbsSeekBar__setThumb_fn(AbsSeekBar* __this, ::g::Android::android::graphics::drawable::Drawable* arg0);
void AbsSeekBar__setThumb_IMPL_24538_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void AbsSeekBar__setThumbOffset_fn(AbsSeekBar* __this, int* arg0);
void AbsSeekBar__setThumbOffset_IMPL_24541_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void AbsSeekBar__verifyDrawable_IMPL_24545_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);

struct AbsSeekBar : ::g::Android::android::widget::ProgressBar
{
    static jclass _javaClass4_;
    static jclass& _javaClass4() { return _javaClass4_; }
    static jmethodID AbsSeekBar_24535_ID_c_;
    static jmethodID& AbsSeekBar_24535_ID_c() { return AbsSeekBar_24535_ID_c_; }
    static jmethodID AbsSeekBar_24536_ID_c_;
    static jmethodID& AbsSeekBar_24536_ID_c() { return AbsSeekBar_24536_ID_c_; }
    static jmethodID AbsSeekBar_24537_ID_c_;
    static jmethodID& AbsSeekBar_24537_ID_c() { return AbsSeekBar_24537_ID_c_; }
    static jmethodID drawableStateChanged_24547_ID_;
    static jmethodID& drawableStateChanged_24547_ID() { return drawableStateChanged_24547_ID_; }
    static jmethodID getKeyProgressIncrement_24543_ID_;
    static jmethodID& getKeyProgressIncrement_24543_ID() { return getKeyProgressIncrement_24543_ID_; }
    static jmethodID getThumb_24539_ID_;
    static jmethodID& getThumb_24539_ID() { return getThumb_24539_ID_; }
    static jmethodID getThumbOffset_24540_ID_;
    static jmethodID& getThumbOffset_24540_ID() { return getThumbOffset_24540_ID_; }
    static jmethodID jumpDrawablesToCurrentState_24546_ID_;
    static jmethodID& jumpDrawablesToCurrentState_24546_ID() { return jumpDrawablesToCurrentState_24546_ID_; }
    static jmethodID onDraw_24549_ID_;
    static jmethodID& onDraw_24549_ID() { return onDraw_24549_ID_; }
    static jmethodID onInitializeAccessibilityEvent_24553_ID_;
    static jmethodID& onInitializeAccessibilityEvent_24553_ID() { return onInitializeAccessibilityEvent_24553_ID_; }
    static jmethodID onInitializeAccessibilityNodeInfo_24554_ID_;
    static jmethodID& onInitializeAccessibilityNodeInfo_24554_ID() { return onInitializeAccessibilityNodeInfo_24554_ID_; }
    static jmethodID onKeyDown_24552_ID_;
    static jmethodID& onKeyDown_24552_ID() { return onKeyDown_24552_ID_; }
    static jmethodID onMeasure_24550_ID_;
    static jmethodID& onMeasure_24550_ID() { return onMeasure_24550_ID_; }
    static jmethodID onRtlPropertiesChanged_24556_ID_;
    static jmethodID& onRtlPropertiesChanged_24556_ID() { return onRtlPropertiesChanged_24556_ID_; }
    static jmethodID onSizeChanged_24548_ID_;
    static jmethodID& onSizeChanged_24548_ID() { return onSizeChanged_24548_ID_; }
    static jmethodID onTouchEvent_24551_ID_;
    static jmethodID& onTouchEvent_24551_ID() { return onTouchEvent_24551_ID_; }
    static jmethodID performAccessibilityAction_24555_ID_;
    static jmethodID& performAccessibilityAction_24555_ID() { return performAccessibilityAction_24555_ID_; }
    static jmethodID setKeyProgressIncrement_24542_ID_;
    static jmethodID& setKeyProgressIncrement_24542_ID() { return setKeyProgressIncrement_24542_ID_; }
    static jmethodID setMax_24544_ID_;
    static jmethodID& setMax_24544_ID() { return setMax_24544_ID_; }
    static jmethodID setThumb_24538_ID_;
    static jmethodID& setThumb_24538_ID() { return setThumb_24538_ID_; }
    static jmethodID setThumbOffset_24541_ID_;
    static jmethodID& setThumbOffset_24541_ID() { return setThumbOffset_24541_ID_; }
    static jmethodID verifyDrawable_24545_ID_;
    static jmethodID& verifyDrawable_24545_ID() { return verifyDrawable_24545_ID_; }

    void ctor_12(::g::Android::android::content::Context* arg0);
    void ctor_13(::g::Android::android::content::Context* arg0, uObject* arg1);
    void ctor_14(::g::Android::android::content::Context* arg0, uObject* arg1, int arg2);
    void ctor_15(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    int getKeyProgressIncrement();
    ::g::Android::android::graphics::drawable::Drawable* getThumb();
    int getThumbOffset();
    void setKeyProgressIncrement(int arg0);
    void setThumb(::g::Android::android::graphics::drawable::Drawable* arg0);
    void setThumbOffset(int arg0);
    static void _Init4();
    static void drawableStateChanged_IMPL_24547(bool arg0_, jobject arg1_);
    static int getKeyProgressIncrement_IMPL_24543(bool arg0_, jobject arg1_);
    static uObject* getThumb_IMPL_24539(bool arg0_, jobject arg1_);
    static int getThumbOffset_IMPL_24540(bool arg0_, jobject arg1_);
    static void jumpDrawablesToCurrentState_IMPL_24546(bool arg0_, jobject arg1_);
    static void onDraw_IMPL_24549(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onInitializeAccessibilityEvent_IMPL_24553(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onInitializeAccessibilityNodeInfo_IMPL_24554(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool onKeyDown_IMPL_24552(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_);
    static void onMeasure_IMPL_24550(bool arg0_, jobject arg1_, int arg2_, int arg3_);
    static void onRtlPropertiesChanged_IMPL_24556(bool arg0_, jobject arg1_, int arg2_);
    static void onSizeChanged_IMPL_24548(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
    static bool onTouchEvent_IMPL_24551(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool performAccessibilityAction_IMPL_24555(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_);
    static void setKeyProgressIncrement_IMPL_24542(bool arg0_, jobject arg1_, int arg2_);
    static void setMax_IMPL_24544(bool arg0_, jobject arg1_, int arg2_);
    static void setThumb_IMPL_24538(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setThumbOffset_IMPL_24541(bool arg0_, jobject arg1_, int arg2_);
    static bool verifyDrawable_IMPL_24545(bool arg0_, jobject arg1_, uObject* arg2_);
};
// }

}}}} // ::g::Android::android::widget
