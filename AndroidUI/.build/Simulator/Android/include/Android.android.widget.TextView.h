// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.View.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{namespace res{struct ColorStateList;}}}}}
namespace g{namespace Android{namespace android{namespace content{struct Context;}}}}
namespace g{namespace Android{namespace android{namespace graphics{namespace drawable{struct Drawable;}}}}}
namespace g{namespace Android{namespace android{namespace graphics{struct Rect;}}}}
namespace g{namespace Android{namespace android{namespace graphics{struct Typeface;}}}}
namespace g{namespace Android{namespace android{namespace os{struct Bundle;}}}}
namespace g{namespace Android{namespace android{namespace text{struct TextUtilsDLRTruncateAt;}}}}
namespace g{namespace Android{namespace android{namespace view{namespace accessibility{struct AccessibilityEvent;}}}}}
namespace g{namespace Android{namespace android{namespace view{namespace accessibility{struct AccessibilityNodeInfo;}}}}}
namespace g{namespace Android{namespace android{namespace view{namespace inputmethod{struct EditorInfo;}}}}}
namespace g{namespace Android{namespace android{namespace view{struct DragEvent;}}}}
namespace g{namespace Android{namespace android{namespace view{struct KeyEvent;}}}}
namespace g{namespace Android{namespace android{namespace view{struct MotionEvent;}}}}
namespace g{namespace Android{namespace android{namespace widget{struct TextView;}}}}
namespace g{namespace Android{namespace java{namespace util{struct ArrayList;}}}}

namespace g{
namespace Android{
namespace android{
namespace widget{

// public extern class TextView :3399
// {
struct TextView_type : ::g::Android::android::view::View_type
{
    void(*fp_setEllipsize)(::g::Android::android::widget::TextView*, ::g::Android::android::text::TextUtilsDLRTruncateAt*);
};

TextView_type* TextView_typeof();
void TextView__ctor_8_fn(TextView* __this, ::g::Android::android::content::Context* arg0);
void TextView__ctor_11_fn(TextView* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType);
void TextView___Init3_fn();
void TextView__addTextChangedListener_fn(TextView* __this, uObject* arg0);
void TextView__addTextChangedListener_IMPL_26729_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void TextView__cancelLongPress_fn(TextView* __this);
void TextView__cancelLongPress_IMPL_26741_fn(bool* arg0_, jobject* arg1_);
void TextView__computeScroll_fn(TextView* __this);
void TextView__computeScroll_IMPL_26712_fn(bool* arg0_, jobject* arg1_);
void TextView__findViewsWithText_fn(TextView* __this, ::g::Android::java::util::ArrayList* arg0, uObject* arg1, int* arg2);
void TextView__findViewsWithText_IMPL_26749_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, int* arg4_);
void TextView__getBaseline_fn(TextView* __this, int* __retval);
void TextView__getBaseline_IMPL_26690_fn(bool* arg0_, jobject* arg1_, int* __retval);
void TextView__getFocusedRect_fn(TextView* __this, ::g::Android::android::graphics::Rect* arg0);
void TextView__getFocusedRect_IMPL_26687_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void TextView__getTextColors_fn(TextView* __this, ::g::Android::android::content::res::ColorStateList** __retval);
void TextView__getTextColors_IMPL_26582_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void TextView__hasOverlappingRendering_fn(TextView* __this, bool* __retval);
void TextView__hasOverlappingRendering_IMPL_26682_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void TextView__invalidateDrawable_fn(TextView* __this, ::g::Android::android::graphics::drawable::Drawable* arg0);
void TextView__invalidateDrawable_IMPL_26681_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void TextView__jumpDrawablesToCurrentState_fn(TextView* __this);
void TextView__jumpDrawablesToCurrentState_IMPL_26680_fn(bool* arg0_, jobject* arg1_);
void TextView__New9_fn(::g::Android::android::content::Context* arg0, TextView** __retval);
void TextView__onCheckIsTextEditor_fn(TextView* __this, bool* __retval);
void TextView__onCheckIsTextEditor_IMPL_26695_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void TextView__onCreateInputConnection_fn(TextView* __this, ::g::Android::android::view::inputmethod::EditorInfo* arg0, uObject** __retval);
void TextView__onCreateInputConnection_IMPL_26696_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);
void TextView__onDragEvent_fn(TextView* __this, ::g::Android::android::view::DragEvent* arg0, bool* __retval);
void TextView__onDragEvent_IMPL_26766_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void TextView__onFinishTemporaryDetach_fn(TextView* __this);
void TextView__onFinishTemporaryDetach_IMPL_26732_fn(bool* arg0_, jobject* arg1_);
void TextView__onGenericMotionEvent_fn(TextView* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval);
void TextView__onGenericMotionEvent_IMPL_26739_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void TextView__onInitializeAccessibilityEvent_fn(TextView* __this, ::g::Android::android::view::accessibility::AccessibilityEvent* arg0);
void TextView__onInitializeAccessibilityEvent_IMPL_26754_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void TextView__onInitializeAccessibilityNodeInfo_fn(TextView* __this, ::g::Android::android::view::accessibility::AccessibilityNodeInfo* arg0);
void TextView__onInitializeAccessibilityNodeInfo_IMPL_26755_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void TextView__onKeyDown_fn(TextView* __this, int* arg0, ::g::Android::android::view::KeyEvent* arg1, bool* __retval);
void TextView__onKeyDown_IMPL_26692_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval);
void TextView__onKeyMultiple_fn(TextView* __this, int* arg0, int* arg1, ::g::Android::android::view::KeyEvent* arg2, bool* __retval);
void TextView__onKeyMultiple_IMPL_26693_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, uObject* arg4_, bool* __retval);
void TextView__onKeyPreIme_fn(TextView* __this, int* arg0, ::g::Android::android::view::KeyEvent* arg1, bool* __retval);
void TextView__onKeyPreIme_IMPL_26691_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval);
void TextView__onKeyShortcut_fn(TextView* __this, int* arg0, ::g::Android::android::view::KeyEvent* arg1, bool* __retval);
void TextView__onKeyShortcut_IMPL_26752_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval);
void TextView__onKeyUp_fn(TextView* __this, int* arg0, ::g::Android::android::view::KeyEvent* arg1, bool* __retval);
void TextView__onKeyUp_IMPL_26694_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval);
void TextView__onPopulateAccessibilityEvent_fn(TextView* __this, ::g::Android::android::view::accessibility::AccessibilityEvent* arg0);
void TextView__onPopulateAccessibilityEvent_IMPL_26753_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void TextView__onRtlPropertiesChanged_fn(TextView* __this, int* arg0);
void TextView__onRtlPropertiesChanged_IMPL_26767_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void TextView__onScreenStateChanged_fn(TextView* __this, int* arg0);
void TextView__onScreenStateChanged_IMPL_26673_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void TextView__onScrollChanged_fn(TextView* __this, int* arg0, int* arg1, int* arg2, int* arg3);
void TextView__onScrollChanged_IMPL_26761_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_);
void TextView__onStartTemporaryDetach_fn(TextView* __this);
void TextView__onStartTemporaryDetach_IMPL_26731_fn(bool* arg0_, jobject* arg1_);
void TextView__onTouchEvent_fn(TextView* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval);
void TextView__onTouchEvent_IMPL_26738_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void TextView__onTrackballEvent_fn(TextView* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval);
void TextView__onTrackballEvent_IMPL_26742_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void TextView__onWindowFocusChanged_fn(TextView* __this, bool* arg0);
void TextView__onWindowFocusChanged_IMPL_26734_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void TextView__performAccessibilityAction_fn(TextView* __this, int* arg0, ::g::Android::android::os::Bundle* arg1, bool* __retval);
void TextView__performAccessibilityAction_IMPL_26756_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval);
void TextView__performLongClick_fn(TextView* __this, bool* __retval);
void TextView__performLongClick_IMPL_26760_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void TextView__removeTextChangedListener_fn(TextView* __this, uObject* arg0);
void TextView__removeTextChangedListener_IMPL_26730_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void TextView__sendAccessibilityEvent_fn(TextView* __this, int* arg0);
void TextView__sendAccessibilityEvent_IMPL_26757_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void TextView__setEllipsize_fn(TextView* __this, ::g::Android::android::text::TextUtilsDLRTruncateAt* arg0);
void TextView__setEllipsize_IMPL_26720_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void TextView__setEnabled_fn(TextView* __this, bool* arg0);
void TextView__setEnabled_IMPL_26528_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void TextView__setGravity_fn(TextView* __this, int* arg0);
void TextView__setGravity_IMPL_26603_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void TextView__setHint_fn(TextView* __this, uObject* arg0);
void TextView__setHint_IMPL_26647_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void TextView__setHintTextColor1_fn(TextView* __this, int* arg0);
void TextView__setHintTextColor_IMPL_26596_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void TextView__setHorizontallyScrolling_fn(TextView* __this, bool* arg0);
void TextView__setHorizontallyScrolling_IMPL_26607_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void TextView__setImeOptions_fn(TextView* __this, int* arg0);
void TextView__setImeOptions_IMPL_26653_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void TextView__setIncludeFontPadding_fn(TextView* __this, bool* arg0);
void TextView__setIncludeFontPadding_IMPL_26706_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void TextView__setInputType_fn(TextView* __this, int* arg0);
void TextView__setInputType_IMPL_26650_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void TextView__setMaxLines_fn(TextView* __this, int* arg0);
void TextView__setMaxLines_IMPL_26612_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void TextView__setOnEditorActionListener_fn(TextView* __this, uObject* arg0);
void TextView__setOnEditorActionListener_IMPL_26658_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void TextView__setPadding_fn(TextView* __this, int* arg0, int* arg1, int* arg2, int* arg3);
void TextView__setPadding_IMPL_26567_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_);
void TextView__setPaddingRelative_fn(TextView* __this, int* arg0, int* arg1, int* arg2, int* arg3);
void TextView__setPaddingRelative_IMPL_26568_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_);
void TextView__setSelected_fn(TextView* __this, bool* arg0);
void TextView__setSelected_IMPL_26737_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void TextView__setText_fn(TextView* __this, uObject* arg0);
void TextView__setText_IMPL_26640_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void TextView__setTextColor1_fn(TextView* __this, int* arg0);
void TextView__setTextColor_IMPL_26580_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void TextView__setTextSize1_fn(TextView* __this, int* arg0, float* arg1);
void TextView__setTextSize_IMPL_26575_fn(bool* arg0_, jobject* arg1_, int* arg2_, float* arg3_);
void TextView__setTypeface_fn(TextView* __this, ::g::Android::android::graphics::Typeface* arg0);
void TextView__setTypeface_IMPL_26578_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);

struct TextView : ::g::Android::android::view::View
{
    static jclass _javaClass3_;
    static jclass& _javaClass3() { return _javaClass3_; }
    static jmethodID addTextChangedListener_26729_ID_;
    static jmethodID& addTextChangedListener_26729_ID() { return addTextChangedListener_26729_ID_; }
    static jmethodID cancelLongPress_26741_ID_;
    static jmethodID& cancelLongPress_26741_ID() { return cancelLongPress_26741_ID_; }
    static jmethodID computeScroll_26712_ID_;
    static jmethodID& computeScroll_26712_ID() { return computeScroll_26712_ID_; }
    static jmethodID findViewsWithText_26749_ID_;
    static jmethodID& findViewsWithText_26749_ID() { return findViewsWithText_26749_ID_; }
    static jmethodID getBaseline_26690_ID_;
    static jmethodID& getBaseline_26690_ID() { return getBaseline_26690_ID_; }
    static jmethodID getFocusedRect_26687_ID_;
    static jmethodID& getFocusedRect_26687_ID() { return getFocusedRect_26687_ID_; }
    static jmethodID getTextColors_26582_ID_;
    static jmethodID& getTextColors_26582_ID() { return getTextColors_26582_ID_; }
    static jmethodID hasOverlappingRendering_26682_ID_;
    static jmethodID& hasOverlappingRendering_26682_ID() { return hasOverlappingRendering_26682_ID_; }
    static jmethodID invalidateDrawable_26681_ID_;
    static jmethodID& invalidateDrawable_26681_ID() { return invalidateDrawable_26681_ID_; }
    static jmethodID jumpDrawablesToCurrentState_26680_ID_;
    static jmethodID& jumpDrawablesToCurrentState_26680_ID() { return jumpDrawablesToCurrentState_26680_ID_; }
    static jmethodID onCheckIsTextEditor_26695_ID_;
    static jmethodID& onCheckIsTextEditor_26695_ID() { return onCheckIsTextEditor_26695_ID_; }
    static jmethodID onCreateInputConnection_26696_ID_;
    static jmethodID& onCreateInputConnection_26696_ID() { return onCreateInputConnection_26696_ID_; }
    static jmethodID onDragEvent_26766_ID_;
    static jmethodID& onDragEvent_26766_ID() { return onDragEvent_26766_ID_; }
    static jmethodID onFinishTemporaryDetach_26732_ID_;
    static jmethodID& onFinishTemporaryDetach_26732_ID() { return onFinishTemporaryDetach_26732_ID_; }
    static jmethodID onGenericMotionEvent_26739_ID_;
    static jmethodID& onGenericMotionEvent_26739_ID() { return onGenericMotionEvent_26739_ID_; }
    static jmethodID onInitializeAccessibilityEvent_26754_ID_;
    static jmethodID& onInitializeAccessibilityEvent_26754_ID() { return onInitializeAccessibilityEvent_26754_ID_; }
    static jmethodID onInitializeAccessibilityNodeInfo_26755_ID_;
    static jmethodID& onInitializeAccessibilityNodeInfo_26755_ID() { return onInitializeAccessibilityNodeInfo_26755_ID_; }
    static jmethodID onKeyDown_26692_ID_;
    static jmethodID& onKeyDown_26692_ID() { return onKeyDown_26692_ID_; }
    static jmethodID onKeyMultiple_26693_ID_;
    static jmethodID& onKeyMultiple_26693_ID() { return onKeyMultiple_26693_ID_; }
    static jmethodID onKeyPreIme_26691_ID_;
    static jmethodID& onKeyPreIme_26691_ID() { return onKeyPreIme_26691_ID_; }
    static jmethodID onKeyShortcut_26752_ID_;
    static jmethodID& onKeyShortcut_26752_ID() { return onKeyShortcut_26752_ID_; }
    static jmethodID onKeyUp_26694_ID_;
    static jmethodID& onKeyUp_26694_ID() { return onKeyUp_26694_ID_; }
    static jmethodID onPopulateAccessibilityEvent_26753_ID_;
    static jmethodID& onPopulateAccessibilityEvent_26753_ID() { return onPopulateAccessibilityEvent_26753_ID_; }
    static jmethodID onRtlPropertiesChanged_26767_ID_;
    static jmethodID& onRtlPropertiesChanged_26767_ID() { return onRtlPropertiesChanged_26767_ID_; }
    static jmethodID onScreenStateChanged_26673_ID_;
    static jmethodID& onScreenStateChanged_26673_ID() { return onScreenStateChanged_26673_ID_; }
    static jmethodID onScrollChanged_26761_ID_;
    static jmethodID& onScrollChanged_26761_ID() { return onScrollChanged_26761_ID_; }
    static jmethodID onStartTemporaryDetach_26731_ID_;
    static jmethodID& onStartTemporaryDetach_26731_ID() { return onStartTemporaryDetach_26731_ID_; }
    static jmethodID onTouchEvent_26738_ID_;
    static jmethodID& onTouchEvent_26738_ID() { return onTouchEvent_26738_ID_; }
    static jmethodID onTrackballEvent_26742_ID_;
    static jmethodID& onTrackballEvent_26742_ID() { return onTrackballEvent_26742_ID_; }
    static jmethodID onWindowFocusChanged_26734_ID_;
    static jmethodID& onWindowFocusChanged_26734_ID() { return onWindowFocusChanged_26734_ID_; }
    static jmethodID performAccessibilityAction_26756_ID_;
    static jmethodID& performAccessibilityAction_26756_ID() { return performAccessibilityAction_26756_ID_; }
    static jmethodID performLongClick_26760_ID_;
    static jmethodID& performLongClick_26760_ID() { return performLongClick_26760_ID_; }
    static jmethodID removeTextChangedListener_26730_ID_;
    static jmethodID& removeTextChangedListener_26730_ID() { return removeTextChangedListener_26730_ID_; }
    static jmethodID sendAccessibilityEvent_26757_ID_;
    static jmethodID& sendAccessibilityEvent_26757_ID() { return sendAccessibilityEvent_26757_ID_; }
    static jmethodID setEllipsize_26720_ID_;
    static jmethodID& setEllipsize_26720_ID() { return setEllipsize_26720_ID_; }
    static jmethodID setEnabled_26528_ID_;
    static jmethodID& setEnabled_26528_ID() { return setEnabled_26528_ID_; }
    static jmethodID setGravity_26603_ID_;
    static jmethodID& setGravity_26603_ID() { return setGravity_26603_ID_; }
    static jmethodID setHint_26647_ID_;
    static jmethodID& setHint_26647_ID() { return setHint_26647_ID_; }
    static jmethodID setHintTextColor_26596_ID_;
    static jmethodID& setHintTextColor_26596_ID() { return setHintTextColor_26596_ID_; }
    static jmethodID setHorizontallyScrolling_26607_ID_;
    static jmethodID& setHorizontallyScrolling_26607_ID() { return setHorizontallyScrolling_26607_ID_; }
    static jmethodID setImeOptions_26653_ID_;
    static jmethodID& setImeOptions_26653_ID() { return setImeOptions_26653_ID_; }
    static jmethodID setIncludeFontPadding_26706_ID_;
    static jmethodID& setIncludeFontPadding_26706_ID() { return setIncludeFontPadding_26706_ID_; }
    static jmethodID setInputType_26650_ID_;
    static jmethodID& setInputType_26650_ID() { return setInputType_26650_ID_; }
    static jmethodID setMaxLines_26612_ID_;
    static jmethodID& setMaxLines_26612_ID() { return setMaxLines_26612_ID_; }
    static jmethodID setOnEditorActionListener_26658_ID_;
    static jmethodID& setOnEditorActionListener_26658_ID() { return setOnEditorActionListener_26658_ID_; }
    static jmethodID setPadding_26567_ID_;
    static jmethodID& setPadding_26567_ID() { return setPadding_26567_ID_; }
    static jmethodID setPaddingRelative_26568_ID_;
    static jmethodID& setPaddingRelative_26568_ID() { return setPaddingRelative_26568_ID_; }
    static jmethodID setSelected_26737_ID_;
    static jmethodID& setSelected_26737_ID() { return setSelected_26737_ID_; }
    static jmethodID setText_26640_ID_;
    static jmethodID& setText_26640_ID() { return setText_26640_ID_; }
    static jmethodID setTextColor_26580_ID_;
    static jmethodID& setTextColor_26580_ID() { return setTextColor_26580_ID_; }
    static jmethodID setTextSize_26575_ID_;
    static jmethodID& setTextSize_26575_ID() { return setTextSize_26575_ID_; }
    static jmethodID setTypeface_26578_ID_;
    static jmethodID& setTypeface_26578_ID() { return setTypeface_26578_ID_; }
    static jmethodID TextView_26525_ID_c_;
    static jmethodID& TextView_26525_ID_c() { return TextView_26525_ID_c_; }

    void ctor_8(::g::Android::android::content::Context* arg0);
    void ctor_11(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    void addTextChangedListener(uObject* arg0);
    ::g::Android::android::content::res::ColorStateList* getTextColors();
    void removeTextChangedListener(uObject* arg0);
    void setEllipsize(::g::Android::android::text::TextUtilsDLRTruncateAt* arg0) { (((TextView_type*)__type)->fp_setEllipsize)(this, arg0); }
    void setGravity(int arg0);
    void setHint(uObject* arg0);
    void setHintTextColor1(int arg0);
    void setHorizontallyScrolling(bool arg0);
    void setImeOptions(int arg0);
    void setIncludeFontPadding(bool arg0);
    void setInputType(int arg0);
    void setMaxLines(int arg0);
    void setOnEditorActionListener(uObject* arg0);
    void setText(uObject* arg0);
    void setTextColor1(int arg0);
    void setTextSize1(int arg0, float arg1);
    void setTypeface(::g::Android::android::graphics::Typeface* arg0);
    static void _Init3();
    static void addTextChangedListener_IMPL_26729(bool arg0_, jobject arg1_, uObject* arg2_);
    static void cancelLongPress_IMPL_26741(bool arg0_, jobject arg1_);
    static void computeScroll_IMPL_26712(bool arg0_, jobject arg1_);
    static void findViewsWithText_IMPL_26749(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, int arg4_);
    static int getBaseline_IMPL_26690(bool arg0_, jobject arg1_);
    static void getFocusedRect_IMPL_26687(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* getTextColors_IMPL_26582(bool arg0_, jobject arg1_);
    static bool hasOverlappingRendering_IMPL_26682(bool arg0_, jobject arg1_);
    static void invalidateDrawable_IMPL_26681(bool arg0_, jobject arg1_, uObject* arg2_);
    static void jumpDrawablesToCurrentState_IMPL_26680(bool arg0_, jobject arg1_);
    static TextView* New9(::g::Android::android::content::Context* arg0);
    static bool onCheckIsTextEditor_IMPL_26695(bool arg0_, jobject arg1_);
    static uObject* onCreateInputConnection_IMPL_26696(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool onDragEvent_IMPL_26766(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onFinishTemporaryDetach_IMPL_26732(bool arg0_, jobject arg1_);
    static bool onGenericMotionEvent_IMPL_26739(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onInitializeAccessibilityEvent_IMPL_26754(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onInitializeAccessibilityNodeInfo_IMPL_26755(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool onKeyDown_IMPL_26692(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_);
    static bool onKeyMultiple_IMPL_26693(bool arg0_, jobject arg1_, int arg2_, int arg3_, uObject* arg4_);
    static bool onKeyPreIme_IMPL_26691(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_);
    static bool onKeyShortcut_IMPL_26752(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_);
    static bool onKeyUp_IMPL_26694(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_);
    static void onPopulateAccessibilityEvent_IMPL_26753(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onRtlPropertiesChanged_IMPL_26767(bool arg0_, jobject arg1_, int arg2_);
    static void onScreenStateChanged_IMPL_26673(bool arg0_, jobject arg1_, int arg2_);
    static void onScrollChanged_IMPL_26761(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
    static void onStartTemporaryDetach_IMPL_26731(bool arg0_, jobject arg1_);
    static bool onTouchEvent_IMPL_26738(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool onTrackballEvent_IMPL_26742(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onWindowFocusChanged_IMPL_26734(bool arg0_, jobject arg1_, bool arg2_);
    static bool performAccessibilityAction_IMPL_26756(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_);
    static bool performLongClick_IMPL_26760(bool arg0_, jobject arg1_);
    static void removeTextChangedListener_IMPL_26730(bool arg0_, jobject arg1_, uObject* arg2_);
    static void sendAccessibilityEvent_IMPL_26757(bool arg0_, jobject arg1_, int arg2_);
    static void setEllipsize(TextView* __this, ::g::Android::android::text::TextUtilsDLRTruncateAt* arg0) { TextView__setEllipsize_fn(__this, arg0); }
    static void setEllipsize_IMPL_26720(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setEnabled_IMPL_26528(bool arg0_, jobject arg1_, bool arg2_);
    static void setGravity_IMPL_26603(bool arg0_, jobject arg1_, int arg2_);
    static void setHint_IMPL_26647(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setHintTextColor_IMPL_26596(bool arg0_, jobject arg1_, int arg2_);
    static void setHorizontallyScrolling_IMPL_26607(bool arg0_, jobject arg1_, bool arg2_);
    static void setImeOptions_IMPL_26653(bool arg0_, jobject arg1_, int arg2_);
    static void setIncludeFontPadding_IMPL_26706(bool arg0_, jobject arg1_, bool arg2_);
    static void setInputType_IMPL_26650(bool arg0_, jobject arg1_, int arg2_);
    static void setMaxLines_IMPL_26612(bool arg0_, jobject arg1_, int arg2_);
    static void setOnEditorActionListener_IMPL_26658(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setPadding_IMPL_26567(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
    static void setPaddingRelative_IMPL_26568(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
    static void setSelected_IMPL_26737(bool arg0_, jobject arg1_, bool arg2_);
    static void setText_IMPL_26640(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setTextColor_IMPL_26580(bool arg0_, jobject arg1_, int arg2_);
    static void setTextSize_IMPL_26575(bool arg0_, jobject arg1_, int arg2_, float arg3_);
    static void setTypeface_IMPL_26578(bool arg0_, jobject arg1_, uObject* arg2_);
};
// }

}}}} // ::g::Android::android::widget
