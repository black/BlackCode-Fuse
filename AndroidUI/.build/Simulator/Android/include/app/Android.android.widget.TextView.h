// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\widget\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_WIDGET_TEXT_VIEW_H__
#define __APP_ANDROID_ANDROID_WIDGET_TEXT_VIEW_H__

#include <app/Android.android.view.View.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace content { namespace res { struct ColorStateList; } } } } }
namespace app { namespace Android { namespace android { namespace content { struct Context; } } } }
namespace app { namespace Android { namespace android { namespace graphics { namespace drawable { struct Drawable; } } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct Canvas; } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct Rect; } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct Typeface; } } } }
namespace app { namespace Android { namespace android { namespace os { struct Bundle; } } } }
namespace app { namespace Android { namespace android { namespace text { struct TextUtilsDLRTruncateAt; } } } }
namespace app { namespace Android { namespace android { namespace view { namespace accessibility { struct AccessibilityEvent; } } } } }
namespace app { namespace Android { namespace android { namespace view { namespace accessibility { struct AccessibilityNodeInfo; } } } } }
namespace app { namespace Android { namespace android { namespace view { namespace inputmethod { struct EditorInfo; } } } } }
namespace app { namespace Android { namespace android { namespace view { struct DragEvent; } } } }
namespace app { namespace Android { namespace android { namespace view { struct KeyEvent; } } } }
namespace app { namespace Android { namespace android { namespace view { struct MotionEvent; } } } }
namespace app { namespace Android { namespace java { namespace util { struct ArrayList; } } } }
namespace app { namespace Android { namespace Runtime { struct IntArray; } } }

namespace app {
namespace Android {
namespace android {
namespace widget {

struct TextView;

extern jclass TextView___javaClass_3;
extern jmethodID TextView__addTextChangedListener_26729_ID;
extern jmethodID TextView__cancelLongPress_26741_ID;
extern jmethodID TextView__computeHorizontalScrollRange_26746_ID;
extern jmethodID TextView__computeScroll_26712_ID;
extern jmethodID TextView__computeVerticalScrollExtent_26748_ID;
extern jmethodID TextView__computeVerticalScrollRange_26747_ID;
extern jmethodID TextView__drawableStateChanged_26633_ID;
extern jmethodID TextView__findViewsWithText_26749_ID;
extern jmethodID TextView__getBaseline_26690_ID;
extern jmethodID TextView__getBottomPaddingOffset_26677_ID;
extern jmethodID TextView__getFocusedRect_26687_ID;
extern jmethodID TextView__getLeftFadingEdgeStrength_26744_ID;
extern jmethodID TextView__getLeftPaddingOffset_26675_ID;
extern jmethodID TextView__getLineCount_26688_ID;
extern jmethodID TextView__getRightFadingEdgeStrength_26745_ID;
extern jmethodID TextView__getRightPaddingOffset_26678_ID;
extern jmethodID TextView__getTextColors_26582_ID;
extern jmethodID TextView__getTopPaddingOffset_26676_ID;
extern jmethodID TextView__hasOverlappingRendering_26682_ID;
extern jmethodID TextView__invalidateDrawable_26681_ID;
extern jmethodID TextView__isPaddingOffsetRequired_26674_ID;
extern jmethodID TextView__jumpDrawablesToCurrentState_26680_ID;
extern jmethodID TextView__onAttachedToWindow_26671_ID;
extern jmethodID TextView__onCheckIsTextEditor_26695_ID;
extern jmethodID TextView__onCreateDrawableState_26685_ID;
extern jmethodID TextView__onCreateInputConnection_26696_ID;
extern jmethodID TextView__onDetachedFromWindow_26672_ID;
extern jmethodID TextView__onDragEvent_26766_ID;
extern jmethodID TextView__onDraw_26686_ID;
extern jmethodID TextView__onFinishTemporaryDetach_26732_ID;
extern jmethodID TextView__onFocusChanged_26733_ID;
extern jmethodID TextView__onGenericMotionEvent_26739_ID;
extern jmethodID TextView__onInitializeAccessibilityEvent_26754_ID;
extern jmethodID TextView__onInitializeAccessibilityNodeInfo_26755_ID;
extern jmethodID TextView__onKeyDown_26692_ID;
extern jmethodID TextView__onKeyMultiple_26693_ID;
extern jmethodID TextView__onKeyPreIme_26691_ID;
extern jmethodID TextView__onKeyShortcut_26752_ID;
extern jmethodID TextView__onKeyUp_26694_ID;
extern jmethodID TextView__onLayout_26709_ID;
extern jmethodID TextView__onMeasure_26708_ID;
extern jmethodID TextView__onPopulateAccessibilityEvent_26753_ID;
extern jmethodID TextView__onRtlPropertiesChanged_26767_ID;
extern jmethodID TextView__onScreenStateChanged_26673_ID;
extern jmethodID TextView__onScrollChanged_26761_ID;
extern jmethodID TextView__onStartTemporaryDetach_26731_ID;
extern jmethodID TextView__onTouchEvent_26738_ID;
extern jmethodID TextView__onTrackballEvent_26742_ID;
extern jmethodID TextView__onVisibilityChanged_26735_ID;
extern jmethodID TextView__onWindowFocusChanged_26734_ID;
extern jmethodID TextView__performAccessibilityAction_26756_ID;
extern jmethodID TextView__performLongClick_26760_ID;
extern jmethodID TextView__removeTextChangedListener_26730_ID;
extern jmethodID TextView__sendAccessibilityEvent_26757_ID;
extern jmethodID TextView__setEllipsize_26720_ID;
extern jmethodID TextView__setEnabled_26528_ID;
extern jmethodID TextView__setGravity_26603_ID;
extern jmethodID TextView__setHorizontallyScrolling_26607_ID;
extern jmethodID TextView__setIncludeFontPadding_26706_ID;
extern jmethodID TextView__setInputType_26650_ID;
extern jmethodID TextView__setMaxLines_26612_ID;
extern jmethodID TextView__setOnEditorActionListener_26658_ID;
extern jmethodID TextView__setPadding_26567_ID;
extern jmethodID TextView__setPaddingRelative_26568_ID;
extern jmethodID TextView__setSelected_26737_ID;
extern jmethodID TextView__setText_26640_ID;
extern jmethodID TextView__setTextColor_26580_ID;
extern jmethodID TextView__setTextSize_26575_ID;
extern jmethodID TextView__setTypeface_26578_ID;
extern jmethodID TextView__TextView_26525_ID_c;
extern jmethodID TextView__verifyDrawable_26679_ID;

struct TextView__uType : ::app::Android::android::view::View__uType
{
    void(*__fp_setEllipsize)(TextView*, ::app::Android::android::text::TextUtilsDLRTruncateAt*);
};

TextView__uType* TextView__typeof();

void TextView___Init_3(::uStatic* __this);
void TextView___ObjInit_11(TextView* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
void TextView___ObjInit_8(TextView* __this, ::app::Android::android::content::Context* arg0);
void TextView__addTextChangedListener(TextView* __this, ::uObject* arg0);
void TextView__addTextChangedListener_IMPL_26729(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void TextView__cancelLongPress(TextView* __this);
void TextView__cancelLongPress_IMPL_26741(::uStatic* __this, bool arg0_, jobject arg1_);
int TextView__computeHorizontalScrollRange(TextView* __this);
int TextView__computeHorizontalScrollRange_IMPL_26746(::uStatic* __this, bool arg0_, jobject arg1_);
void TextView__computeScroll(TextView* __this);
void TextView__computeScroll_IMPL_26712(::uStatic* __this, bool arg0_, jobject arg1_);
int TextView__computeVerticalScrollExtent(TextView* __this);
int TextView__computeVerticalScrollExtent_IMPL_26748(::uStatic* __this, bool arg0_, jobject arg1_);
int TextView__computeVerticalScrollRange(TextView* __this);
int TextView__computeVerticalScrollRange_IMPL_26747(::uStatic* __this, bool arg0_, jobject arg1_);
void TextView__drawableStateChanged(TextView* __this);
void TextView__drawableStateChanged_IMPL_26633(::uStatic* __this, bool arg0_, jobject arg1_);
void TextView__findViewsWithText(TextView* __this, ::app::Android::java::util::ArrayList* arg0, ::uObject* arg1, int arg2);
void TextView__findViewsWithText_IMPL_26749(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, int arg4_);
int TextView__getBaseline(TextView* __this);
int TextView__getBaseline_IMPL_26690(::uStatic* __this, bool arg0_, jobject arg1_);
int TextView__getBottomPaddingOffset(TextView* __this);
int TextView__getBottomPaddingOffset_IMPL_26677(::uStatic* __this, bool arg0_, jobject arg1_);
void TextView__getFocusedRect(TextView* __this, ::app::Android::android::graphics::Rect* arg0);
void TextView__getFocusedRect_IMPL_26687(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
float TextView__getLeftFadingEdgeStrength(TextView* __this);
float TextView__getLeftFadingEdgeStrength_IMPL_26744(::uStatic* __this, bool arg0_, jobject arg1_);
int TextView__getLeftPaddingOffset(TextView* __this);
int TextView__getLeftPaddingOffset_IMPL_26675(::uStatic* __this, bool arg0_, jobject arg1_);
int TextView__getLineCount(TextView* __this);
int TextView__getLineCount_IMPL_26688(::uStatic* __this, bool arg0_, jobject arg1_);
float TextView__getRightFadingEdgeStrength(TextView* __this);
float TextView__getRightFadingEdgeStrength_IMPL_26745(::uStatic* __this, bool arg0_, jobject arg1_);
int TextView__getRightPaddingOffset(TextView* __this);
int TextView__getRightPaddingOffset_IMPL_26678(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::android::content::res::ColorStateList* TextView__getTextColors(TextView* __this);
::uObject* TextView__getTextColors_IMPL_26582(::uStatic* __this, bool arg0_, jobject arg1_);
int TextView__getTopPaddingOffset(TextView* __this);
int TextView__getTopPaddingOffset_IMPL_26676(::uStatic* __this, bool arg0_, jobject arg1_);
bool TextView__hasOverlappingRendering(TextView* __this);
bool TextView__hasOverlappingRendering_IMPL_26682(::uStatic* __this, bool arg0_, jobject arg1_);
void TextView__invalidateDrawable(TextView* __this, ::app::Android::android::graphics::drawable::Drawable* arg0);
void TextView__invalidateDrawable_IMPL_26681(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool TextView__isPaddingOffsetRequired(TextView* __this);
bool TextView__isPaddingOffsetRequired_IMPL_26674(::uStatic* __this, bool arg0_, jobject arg1_);
void TextView__jumpDrawablesToCurrentState(TextView* __this);
void TextView__jumpDrawablesToCurrentState_IMPL_26680(::uStatic* __this, bool arg0_, jobject arg1_);
TextView* TextView__New_9(::uStatic* __this, ::app::Android::android::content::Context* arg0);
void TextView__onAttachedToWindow(TextView* __this);
void TextView__onAttachedToWindow_IMPL_26671(::uStatic* __this, bool arg0_, jobject arg1_);
bool TextView__onCheckIsTextEditor(TextView* __this);
bool TextView__onCheckIsTextEditor_IMPL_26695(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::Runtime::IntArray* TextView__onCreateDrawableState(TextView* __this, int arg0);
::uObject* TextView__onCreateDrawableState_IMPL_26685(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
::uObject* TextView__onCreateInputConnection(TextView* __this, ::app::Android::android::view::inputmethod::EditorInfo* arg0);
::uObject* TextView__onCreateInputConnection_IMPL_26696(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void TextView__onDetachedFromWindow(TextView* __this);
void TextView__onDetachedFromWindow_IMPL_26672(::uStatic* __this, bool arg0_, jobject arg1_);
bool TextView__onDragEvent(TextView* __this, ::app::Android::android::view::DragEvent* arg0);
bool TextView__onDragEvent_IMPL_26766(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void TextView__onDraw(TextView* __this, ::app::Android::android::graphics::Canvas* arg0);
void TextView__onDraw_IMPL_26686(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void TextView__onFinishTemporaryDetach(TextView* __this);
void TextView__onFinishTemporaryDetach_IMPL_26732(::uStatic* __this, bool arg0_, jobject arg1_);
void TextView__onFocusChanged(TextView* __this, bool arg0, int arg1, ::app::Android::android::graphics::Rect* arg2);
void TextView__onFocusChanged_IMPL_26733(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_, int arg3_, ::uObject* arg4_);
bool TextView__onGenericMotionEvent(TextView* __this, ::app::Android::android::view::MotionEvent* arg0);
bool TextView__onGenericMotionEvent_IMPL_26739(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void TextView__onInitializeAccessibilityEvent(TextView* __this, ::app::Android::android::view::accessibility::AccessibilityEvent* arg0);
void TextView__onInitializeAccessibilityEvent_IMPL_26754(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void TextView__onInitializeAccessibilityNodeInfo(TextView* __this, ::app::Android::android::view::accessibility::AccessibilityNodeInfo* arg0);
void TextView__onInitializeAccessibilityNodeInfo_IMPL_26755(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool TextView__onKeyDown(TextView* __this, int arg0, ::app::Android::android::view::KeyEvent* arg1);
bool TextView__onKeyDown_IMPL_26692(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_);
bool TextView__onKeyMultiple(TextView* __this, int arg0, int arg1, ::app::Android::android::view::KeyEvent* arg2);
bool TextView__onKeyMultiple_IMPL_26693(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, ::uObject* arg4_);
bool TextView__onKeyPreIme(TextView* __this, int arg0, ::app::Android::android::view::KeyEvent* arg1);
bool TextView__onKeyPreIme_IMPL_26691(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_);
bool TextView__onKeyShortcut(TextView* __this, int arg0, ::app::Android::android::view::KeyEvent* arg1);
bool TextView__onKeyShortcut_IMPL_26752(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_);
bool TextView__onKeyUp(TextView* __this, int arg0, ::app::Android::android::view::KeyEvent* arg1);
bool TextView__onKeyUp_IMPL_26694(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_);
void TextView__onLayout(TextView* __this, bool arg0, int arg1, int arg2, int arg3, int arg4);
void TextView__onLayout_IMPL_26709(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_, int arg3_, int arg4_, int arg5_, int arg6_);
void TextView__onMeasure(TextView* __this, int arg0, int arg1);
void TextView__onMeasure_IMPL_26708(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_);
void TextView__onPopulateAccessibilityEvent(TextView* __this, ::app::Android::android::view::accessibility::AccessibilityEvent* arg0);
void TextView__onPopulateAccessibilityEvent_IMPL_26753(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void TextView__onRtlPropertiesChanged(TextView* __this, int arg0);
void TextView__onRtlPropertiesChanged_IMPL_26767(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void TextView__onScreenStateChanged(TextView* __this, int arg0);
void TextView__onScreenStateChanged_IMPL_26673(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void TextView__onScrollChanged(TextView* __this, int arg0, int arg1, int arg2, int arg3);
void TextView__onScrollChanged_IMPL_26761(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
void TextView__onStartTemporaryDetach(TextView* __this);
void TextView__onStartTemporaryDetach_IMPL_26731(::uStatic* __this, bool arg0_, jobject arg1_);
bool TextView__onTouchEvent(TextView* __this, ::app::Android::android::view::MotionEvent* arg0);
bool TextView__onTouchEvent_IMPL_26738(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool TextView__onTrackballEvent(TextView* __this, ::app::Android::android::view::MotionEvent* arg0);
bool TextView__onTrackballEvent_IMPL_26742(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void TextView__onVisibilityChanged(TextView* __this, ::app::Android::android::view::View* arg0, int arg1);
void TextView__onVisibilityChanged_IMPL_26735(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);
void TextView__onWindowFocusChanged(TextView* __this, bool arg0);
void TextView__onWindowFocusChanged_IMPL_26734(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
bool TextView__performAccessibilityAction(TextView* __this, int arg0, ::app::Android::android::os::Bundle* arg1);
bool TextView__performAccessibilityAction_IMPL_26756(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_);
bool TextView__performLongClick(TextView* __this);
bool TextView__performLongClick_IMPL_26760(::uStatic* __this, bool arg0_, jobject arg1_);
void TextView__removeTextChangedListener(TextView* __this, ::uObject* arg0);
void TextView__removeTextChangedListener_IMPL_26730(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void TextView__sendAccessibilityEvent(TextView* __this, int arg0);
void TextView__sendAccessibilityEvent_IMPL_26757(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void TextView__setEllipsize(TextView* __this, ::app::Android::android::text::TextUtilsDLRTruncateAt* arg0);
void TextView__setEllipsize_IMPL_26720(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void TextView__setEnabled(TextView* __this, bool arg0);
void TextView__setEnabled_IMPL_26528(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void TextView__setGravity(TextView* __this, int arg0);
void TextView__setGravity_IMPL_26603(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void TextView__setHorizontallyScrolling(TextView* __this, bool arg0);
void TextView__setHorizontallyScrolling_IMPL_26607(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void TextView__setIncludeFontPadding(TextView* __this, bool arg0);
void TextView__setIncludeFontPadding_IMPL_26706(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void TextView__setInputType(TextView* __this, int arg0);
void TextView__setInputType_IMPL_26650(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void TextView__setMaxLines(TextView* __this, int arg0);
void TextView__setMaxLines_IMPL_26612(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void TextView__setOnEditorActionListener(TextView* __this, ::uObject* arg0);
void TextView__setOnEditorActionListener_IMPL_26658(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void TextView__setPadding(TextView* __this, int arg0, int arg1, int arg2, int arg3);
void TextView__setPadding_IMPL_26567(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
void TextView__setPaddingRelative(TextView* __this, int arg0, int arg1, int arg2, int arg3);
void TextView__setPaddingRelative_IMPL_26568(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
void TextView__setSelected(TextView* __this, bool arg0);
void TextView__setSelected_IMPL_26737(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void TextView__setText_1(TextView* __this, ::uObject* arg0);
void TextView__setText_IMPL_26640(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void TextView__setTextColor_1(TextView* __this, int arg0);
void TextView__setTextColor_IMPL_26580(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void TextView__setTextSize_1(TextView* __this, int arg0, float arg1);
void TextView__setTextSize_IMPL_26575(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, float arg3_);
void TextView__setTypeface(TextView* __this, ::app::Android::android::graphics::Typeface* arg0);
void TextView__setTypeface_IMPL_26578(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool TextView__verifyDrawable(TextView* __this, ::app::Android::android::graphics::drawable::Drawable* arg0);
bool TextView__verifyDrawable_IMPL_26679(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);

struct TextView : ::app::Android::android::view::View
{
    void _ObjInit_11(jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType) { TextView___ObjInit_11(this, obj, utype, hasFallbackClass, resolveType); }
    void _ObjInit_8(::app::Android::android::content::Context* arg0) { TextView___ObjInit_8(this, arg0); }
    void addTextChangedListener(::uObject* arg0) { TextView__addTextChangedListener(this, arg0); }
    int getLineCount() { return TextView__getLineCount(this); }
    ::app::Android::android::content::res::ColorStateList* getTextColors() { return TextView__getTextColors(this); }
    void removeTextChangedListener(::uObject* arg0) { TextView__removeTextChangedListener(this, arg0); }
    void setEllipsize(::app::Android::android::text::TextUtilsDLRTruncateAt* arg0) { (((TextView__uType*)this->__obj_type)->__fp_setEllipsize)(this, arg0); }
    void setGravity(int arg0) { TextView__setGravity(this, arg0); }
    void setHorizontallyScrolling(bool arg0) { TextView__setHorizontallyScrolling(this, arg0); }
    void setIncludeFontPadding(bool arg0) { TextView__setIncludeFontPadding(this, arg0); }
    void setInputType(int arg0) { TextView__setInputType(this, arg0); }
    void setMaxLines(int arg0) { TextView__setMaxLines(this, arg0); }
    void setOnEditorActionListener(::uObject* arg0) { TextView__setOnEditorActionListener(this, arg0); }
    void setText_1(::uObject* arg0) { TextView__setText_1(this, arg0); }
    void setTextColor_1(int arg0) { TextView__setTextColor_1(this, arg0); }
    void setTextSize_1(int arg0, float arg1) { TextView__setTextSize_1(this, arg0, arg1); }
    void setTypeface(::app::Android::android::graphics::Typeface* arg0) { TextView__setTypeface(this, arg0); }
};

}}}}


#endif
