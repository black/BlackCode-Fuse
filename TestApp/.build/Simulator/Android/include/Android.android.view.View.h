// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{namespace res{struct Configuration;}}}}}
namespace g{namespace Android{namespace android{namespace content{namespace res{struct Resources;}}}}}
namespace g{namespace Android{namespace android{namespace content{struct ClipData;}}}}
namespace g{namespace Android{namespace android{namespace content{struct Context;}}}}
namespace g{namespace Android{namespace android{namespace graphics{namespace drawable{struct Drawable;}}}}}
namespace g{namespace Android{namespace android{namespace graphics{struct Bitmap;}}}}
namespace g{namespace Android{namespace android{namespace graphics{struct Canvas;}}}}
namespace g{namespace Android{namespace android{namespace graphics{struct Matrix;}}}}
namespace g{namespace Android{namespace android{namespace graphics{struct Paint;}}}}
namespace g{namespace Android{namespace android{namespace graphics{struct Point;}}}}
namespace g{namespace Android{namespace android{namespace graphics{struct Rect;}}}}
namespace g{namespace Android{namespace android{namespace os{struct Bundle;}}}}
namespace g{namespace Android{namespace android{namespace os{struct Handler;}}}}
namespace g{namespace Android{namespace android{namespace util{struct Property;}}}}
namespace g{namespace Android{namespace android{namespace util{struct SparseArray;}}}}
namespace g{namespace Android{namespace android{namespace view{namespace accessibility{struct AccessibilityEvent;}}}}}
namespace g{namespace Android{namespace android{namespace view{namespace accessibility{struct AccessibilityNodeInfo;}}}}}
namespace g{namespace Android{namespace android{namespace view{namespace accessibility{struct AccessibilityNodeProvider;}}}}}
namespace g{namespace Android{namespace android{namespace view{namespace animation{struct Animation;}}}}}
namespace g{namespace Android{namespace android{namespace view{namespace inputmethod{struct EditorInfo;}}}}}
namespace g{namespace Android{namespace android{namespace view{struct ActionMode;}}}}
namespace g{namespace Android{namespace android{namespace view{struct Display;}}}}
namespace g{namespace Android{namespace android{namespace view{struct DragEvent;}}}}
namespace g{namespace Android{namespace android{namespace view{struct KeyEvent;}}}}
namespace g{namespace Android{namespace android{namespace view{struct KeyEventDLRDispatcherState;}}}}
namespace g{namespace Android{namespace android{namespace view{struct MotionEvent;}}}}
namespace g{namespace Android{namespace android{namespace view{struct TouchDelegate;}}}}
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Android{namespace android{namespace view{struct ViewDLRAccessibilityDelegate;}}}}
namespace g{namespace Android{namespace android{namespace view{struct ViewDLRDragShadowBuilder;}}}}
namespace g{namespace Android{namespace android{namespace view{struct ViewGroup;}}}}
namespace g{namespace Android{namespace android{namespace view{struct ViewGroupDLRLayoutParams;}}}}
namespace g{namespace Android{namespace android{namespace view{struct ViewOverlay;}}}}
namespace g{namespace Android{namespace android{namespace view{struct ViewPropertyAnimator;}}}}
namespace g{namespace Android{namespace android{namespace view{struct ViewTreeObserver;}}}}
namespace g{namespace Android{namespace android{namespace view{struct WindowId;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}
namespace g{namespace Android{namespace java{namespace util{struct ArrayList;}}}}
namespace g{namespace Android{namespace Runtime{struct IntArray;}}}

namespace g{
namespace Android{
namespace android{
namespace view{

// public extern class View :954
// {
struct View_type : ::g::Android::java::lang::Object_type
{
    void(*fp_addChildrenForAccessibility)(::g::Android::android::view::View*, ::g::Android::java::util::ArrayList*);
    void(*fp_addFocusables1)(::g::Android::android::view::View*, ::g::Android::java::util::ArrayList*, int*, int*);
    void(*fp_addTouchables)(::g::Android::android::view::View*, ::g::Android::java::util::ArrayList*);
    void(*fp_buildLayer)(::g::Android::android::view::View*);
    void(*fp_cancelLongPress)(::g::Android::android::view::View*);
    void(*fp_clearFocus)(::g::Android::android::view::View*);
    void(*fp_computeScroll)(::g::Android::android::view::View*);
    void(*fp_dispatchConfigurationChanged)(::g::Android::android::view::View*, ::g::Android::android::content::res::Configuration*);
    void(*fp_dispatchDisplayHint)(::g::Android::android::view::View*, int*);
    void(*fp_dispatchDragEvent)(::g::Android::android::view::View*, ::g::Android::android::view::DragEvent*, bool*);
    void(*fp_dispatchKeyEvent)(::g::Android::android::view::View*, ::g::Android::android::view::KeyEvent*, bool*);
    void(*fp_dispatchKeyEventPreIme)(::g::Android::android::view::View*, ::g::Android::android::view::KeyEvent*, bool*);
    void(*fp_dispatchKeyShortcutEvent)(::g::Android::android::view::View*, ::g::Android::android::view::KeyEvent*, bool*);
    void(*fp_dispatchPopulateAccessibilityEvent)(::g::Android::android::view::View*, ::g::Android::android::view::accessibility::AccessibilityEvent*, bool*);
    void(*fp_dispatchSystemUiVisibilityChanged)(::g::Android::android::view::View*, int*);
    void(*fp_dispatchTouchEvent)(::g::Android::android::view::View*, ::g::Android::android::view::MotionEvent*, bool*);
    void(*fp_dispatchTrackballEvent)(::g::Android::android::view::View*, ::g::Android::android::view::MotionEvent*, bool*);
    void(*fp_dispatchUnhandledMove)(::g::Android::android::view::View*, ::g::Android::android::view::View*, int*, bool*);
    void(*fp_dispatchWindowFocusChanged)(::g::Android::android::view::View*, bool*);
    void(*fp_dispatchWindowSystemUiVisiblityChanged)(::g::Android::android::view::View*, int*);
    void(*fp_dispatchWindowVisibilityChanged)(::g::Android::android::view::View*, int*);
    void(*fp_findFocus)(::g::Android::android::view::View*, ::g::Android::android::view::View**);
    void(*fp_findViewsWithText)(::g::Android::android::view::View*, ::g::Android::java::util::ArrayList*, uObject*, int*);
    void(*fp_getAccessibilityNodeProvider)(::g::Android::android::view::View*, ::g::Android::android::view::accessibility::AccessibilityNodeProvider**);
    void(*fp_getBaseline)(::g::Android::android::view::View*, int*);
    void(*fp_getFocusedRect)(::g::Android::android::view::View*, ::g::Android::android::graphics::Rect*);
    void(*fp_getLayerType)(::g::Android::android::view::View*, int*);
    void(*fp_hasFocus)(::g::Android::android::view::View*, bool*);
    void(*fp_hasFocusable)(::g::Android::android::view::View*, bool*);
    void(*fp_hasOverlappingRendering)(::g::Android::android::view::View*, bool*);
    void(*fp_hasTransientState)(::g::Android::android::view::View*, bool*);
    void(*fp_invalidateDrawable)(::g::Android::android::view::View*, ::g::Android::android::graphics::drawable::Drawable*);
    void(*fp_isOpaque)(::g::Android::android::view::View*, bool*);
    void(*fp_j_draw)(::g::Android::android::view::View*, ::g::Android::android::graphics::Canvas*);
    void(*fp_jumpDrawablesToCurrentState)(::g::Android::android::view::View*);
    void(*fp_layout)(::g::Android::android::view::View*, int*, int*, int*, int*);
    void(*fp_onCheckIsTextEditor)(::g::Android::android::view::View*, bool*);
    void(*fp_onCreateInputConnection)(::g::Android::android::view::View*, ::g::Android::android::view::inputmethod::EditorInfo*, uObject**);
    void(*fp_onDragEvent)(::g::Android::android::view::View*, ::g::Android::android::view::DragEvent*, bool*);
    void(*fp_onFinishTemporaryDetach)(::g::Android::android::view::View*);
    void(*fp_onGenericMotionEvent)(::g::Android::android::view::View*, ::g::Android::android::view::MotionEvent*, bool*);
    void(*fp_onHoverEvent)(::g::Android::android::view::View*, ::g::Android::android::view::MotionEvent*, bool*);
    void(*fp_onInitializeAccessibilityEvent)(::g::Android::android::view::View*, ::g::Android::android::view::accessibility::AccessibilityEvent*);
    void(*fp_onInitializeAccessibilityNodeInfo)(::g::Android::android::view::View*, ::g::Android::android::view::accessibility::AccessibilityNodeInfo*);
    void(*fp_onKeyDown)(::g::Android::android::view::View*, int*, ::g::Android::android::view::KeyEvent*, bool*);
    void(*fp_onKeyMultiple)(::g::Android::android::view::View*, int*, int*, ::g::Android::android::view::KeyEvent*, bool*);
    void(*fp_onKeyPreIme)(::g::Android::android::view::View*, int*, ::g::Android::android::view::KeyEvent*, bool*);
    void(*fp_onKeyShortcut)(::g::Android::android::view::View*, int*, ::g::Android::android::view::KeyEvent*, bool*);
    void(*fp_onKeyUp)(::g::Android::android::view::View*, int*, ::g::Android::android::view::KeyEvent*, bool*);
    void(*fp_onPopulateAccessibilityEvent)(::g::Android::android::view::View*, ::g::Android::android::view::accessibility::AccessibilityEvent*);
    void(*fp_onRtlPropertiesChanged)(::g::Android::android::view::View*, int*);
    void(*fp_onScreenStateChanged)(::g::Android::android::view::View*, int*);
    void(*fp_onScrollChanged)(::g::Android::android::view::View*, int*, int*, int*, int*);
    void(*fp_onStartTemporaryDetach)(::g::Android::android::view::View*);
    void(*fp_onTouchEvent)(::g::Android::android::view::View*, ::g::Android::android::view::MotionEvent*, bool*);
    void(*fp_onTrackballEvent)(::g::Android::android::view::View*, ::g::Android::android::view::MotionEvent*, bool*);
    void(*fp_onWindowFocusChanged)(::g::Android::android::view::View*, bool*);
    void(*fp_performAccessibilityAction)(::g::Android::android::view::View*, int*, ::g::Android::android::os::Bundle*, bool*);
    void(*fp_performClick)(::g::Android::android::view::View*, bool*);
    void(*fp_performLongClick)(::g::Android::android::view::View*, bool*);
    void(*fp_postInvalidate)(::g::Android::android::view::View*);
    void(*fp_requestFocus2)(::g::Android::android::view::View*, int*, ::g::Android::android::graphics::Rect*, bool*);
    void(*fp_requestLayout)(::g::Android::android::view::View*);
    void(*fp_scrollTo)(::g::Android::android::view::View*, int*, int*);
    void(*fp_sendAccessibilityEvent)(::g::Android::android::view::View*, int*);
    void(*fp_setBackgroundColor)(::g::Android::android::view::View*, int*);
    void(*fp_setEnabled)(::g::Android::android::view::View*, bool*);
    void(*fp_setLayerType)(::g::Android::android::view::View*, int*, ::g::Android::android::graphics::Paint*);
    void(*fp_setLayoutParams)(::g::Android::android::view::View*, ::g::Android::android::view::ViewGroupDLRLayoutParams*);
    void(*fp_setOverScrollMode)(::g::Android::android::view::View*, int*);
    void(*fp_setPadding)(::g::Android::android::view::View*, int*, int*, int*, int*);
    void(*fp_setPaddingRelative)(::g::Android::android::view::View*, int*, int*, int*, int*);
    void(*fp_setScrollBarStyle)(::g::Android::android::view::View*, int*);
    void(*fp_setSelected)(::g::Android::android::view::View*, bool*);
    void(*fp_setVisibility)(::g::Android::android::view::View*, int*);
};

View_type* View_typeof();
void View__ctor_4_fn(View* __this, ::g::Android::android::content::Context* arg0);
void View__ctor_5_fn(View* __this, ::g::Android::android::content::Context* arg0, uObject* arg1);
void View__ctor_6_fn(View* __this, ::g::Android::android::content::Context* arg0, uObject* arg1, int* arg2);
void View__ctor_7_fn(View* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType);
void View___Init2_fn();
void View__get_ACCESSIBILITY_LIVE_REGION_ASSERTIVE_fn(int* __retval);
void View__get_ACCESSIBILITY_LIVE_REGION_NONE_fn(int* __retval);
void View__get_ACCESSIBILITY_LIVE_REGION_POLITE_fn(int* __retval);
void View__addChildrenForAccessibility_fn(View* __this, ::g::Android::java::util::ArrayList* arg0);
void View__addChildrenForAccessibility_IMPL_22943_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__addFocusables_fn(View* __this, ::g::Android::java::util::ArrayList* arg0, int* arg1);
void View__addFocusables1_fn(View* __this, ::g::Android::java::util::ArrayList* arg0, int* arg1, int* arg2);
void View__addFocusables_IMPL_22929_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_);
void View__addFocusables_IMPL_22930_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, int* arg4_);
void View__addOnAttachStateChangeListener_fn(View* __this, uObject* arg0);
void View__addOnAttachStateChangeListener_IMPL_22831_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__addOnLayoutChangeListener_fn(View* __this, uObject* arg0);
void View__addOnLayoutChangeListener_IMPL_22829_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__addTouchables_fn(View* __this, ::g::Android::java::util::ArrayList* arg0);
void View__addTouchables_IMPL_22933_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__get_ALPHA_fn(::g::Android::android::util::Property** __retval);
void View__animate_fn(View* __this, ::g::Android::android::view::ViewPropertyAnimator** __retval);
void View__animate_IMPL_23258_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void View__announceForAccessibility_fn(View* __this, uObject* arg0);
void View__announceForAccessibility_IMPL_22855_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__awakenScrollBars_IMPL_23060_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__awakenScrollBars_IMPL_23061_fn(bool* arg0_, jobject* arg1_, int* arg2_, bool* __retval);
void View__awakenScrollBars_IMPL_23062_fn(bool* arg0_, jobject* arg1_, int* arg2_, bool* arg3_, bool* __retval);
void View__bringToFront_fn(View* __this);
void View__bringToFront_IMPL_22995_fn(bool* arg0_, jobject* arg1_);
void View__buildDrawingCache_fn(View* __this);
void View__buildDrawingCache1_fn(View* __this, bool* arg0);
void View__buildDrawingCache_IMPL_23145_fn(bool* arg0_, jobject* arg1_);
void View__buildDrawingCache_IMPL_23146_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void View__buildLayer_fn(View* __this);
void View__buildLayer_IMPL_23137_fn(bool* arg0_, jobject* arg1_);
void View__callOnClick_fn(View* __this, bool* __retval);
void View__callOnClick_IMPL_22839_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__cancelLongPress_fn(View* __this);
void View__cancelLongPress_IMPL_22992_fn(bool* arg0_, jobject* arg1_);
void View__cancelPendingInputEvents_fn(View* __this);
void View__cancelPendingInputEvents_IMPL_23123_fn(bool* arg0_, jobject* arg1_);
void View__canResolveLayoutDirection_fn(View* __this, bool* __retval);
void View__canResolveLayoutDirection_IMPL_23115_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__canResolveTextAlignment_fn(View* __this, bool* __retval);
void View__canResolveTextAlignment_IMPL_23255_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__canResolveTextDirection_fn(View* __this, bool* __retval);
void View__canResolveTextDirection_IMPL_23251_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__canScrollHorizontally_fn(View* __this, int* arg0, bool* __retval);
void View__canScrollHorizontally_IMPL_23108_fn(bool* arg0_, jobject* arg1_, int* arg2_, bool* __retval);
void View__canScrollVertically_fn(View* __this, int* arg0, bool* __retval);
void View__canScrollVertically_IMPL_23109_fn(bool* arg0_, jobject* arg1_, int* arg2_, bool* __retval);
void View__checkInputConnectionProxy_fn(View* __this, View* arg0, bool* __retval);
void View__checkInputConnectionProxy_IMPL_22981_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void View__clearAnimation_fn(View* __this);
void View__clearAnimation_IMPL_23226_fn(bool* arg0_, jobject* arg1_);
void View__clearFocus_fn(View* __this);
void View__clearFocus_IMPL_22850_fn(bool* arg0_, jobject* arg1_);
void View__combineMeasuredStates_fn(int* arg0, int* arg1, int* __retval);
void View__combineMeasuredStates_IMPL_23214_fn(int* arg0_, int* arg1_, int* __retval);
void View__computeHorizontalScrollExtent_IMPL_23104_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__computeHorizontalScrollOffset_IMPL_23103_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__computeHorizontalScrollRange_IMPL_23102_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__computeScroll_fn(View* __this);
void View__computeScroll_IMPL_23079_fn(bool* arg0_, jobject* arg1_);
void View__computeVerticalScrollExtent_IMPL_23107_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__computeVerticalScrollOffset_IMPL_23106_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__computeVerticalScrollRange_IMPL_23105_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__createAccessibilityNodeInfo_fn(View* __this, ::g::Android::android::view::accessibility::AccessibilityNodeInfo** __retval);
void View__createAccessibilityNodeInfo_IMPL_22860_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void View__createContextMenu_fn(View* __this, uObject* arg0);
void View__createContextMenu_IMPL_22982_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__destroyDrawingCache_fn(View* __this);
void View__destroyDrawingCache_IMPL_23142_fn(bool* arg0_, jobject* arg1_);
void View__dispatchConfigurationChanged_fn(View* __this, ::g::Android::android::content::res::Configuration* arg0);
void View__dispatchConfigurationChanged_IMPL_22969_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__dispatchDisplayHint_fn(View* __this, int* arg0);
void View__dispatchDisplayHint_IMPL_22963_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__dispatchDragEvent_fn(View* __this, ::g::Android::android::view::DragEvent* arg0, bool* __retval);
void View__dispatchDragEvent_IMPL_23243_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void View__dispatchDraw_IMPL_22998_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__dispatchGenericFocusedEvent_IMPL_22957_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void View__dispatchGenericMotionEvent_fn(View* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval);
void View__dispatchGenericMotionEvent_IMPL_22954_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void View__dispatchGenericPointerEvent_IMPL_22956_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void View__dispatchHoverEvent_IMPL_22955_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void View__dispatchKeyEvent_fn(View* __this, ::g::Android::android::view::KeyEvent* arg0, bool* __retval);
void View__dispatchKeyEvent_IMPL_22949_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void View__dispatchKeyEventPreIme_fn(View* __this, ::g::Android::android::view::KeyEvent* arg0, bool* __retval);
void View__dispatchKeyEventPreIme_IMPL_22948_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void View__dispatchKeyShortcutEvent_fn(View* __this, ::g::Android::android::view::KeyEvent* arg0, bool* __retval);
void View__dispatchKeyShortcutEvent_IMPL_22950_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void View__dispatchPopulateAccessibilityEvent_fn(View* __this, ::g::Android::android::view::accessibility::AccessibilityEvent* arg0, bool* __retval);
void View__dispatchPopulateAccessibilityEvent_IMPL_22857_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void View__dispatchRestoreInstanceState_IMPL_23129_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__dispatchSaveInstanceState_IMPL_23126_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__dispatchSetActivated_IMPL_23193_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void View__dispatchSetPressed_IMPL_22916_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void View__dispatchSetSelected_IMPL_23190_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void View__dispatchSystemUiVisibilityChanged_fn(View* __this, int* arg0);
void View__dispatchSystemUiVisibilityChanged_IMPL_23240_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__dispatchTouchEvent_fn(View* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval);
void View__dispatchTouchEvent_IMPL_22951_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void View__dispatchTrackballEvent_fn(View* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval);
void View__dispatchTrackballEvent_IMPL_22953_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void View__dispatchUnhandledMove_fn(View* __this, View* arg0, int* arg1, bool* __retval);
void View__dispatchUnhandledMove_IMPL_22927_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, bool* __retval);
void View__dispatchVisibilityChanged_IMPL_22961_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_);
void View__dispatchWindowFocusChanged_fn(View* __this, bool* arg0);
void View__dispatchWindowFocusChanged_IMPL_22958_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void View__dispatchWindowSystemUiVisiblityChanged_fn(View* __this, int* arg0);
void View__dispatchWindowSystemUiVisiblityChanged_IMPL_23238_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__dispatchWindowVisibilityChanged_fn(View* __this, int* arg0);
void View__dispatchWindowVisibilityChanged_IMPL_22965_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__drawableStateChanged_IMPL_23169_fn(bool* arg0_, jobject* arg1_);
void View__get_DRAWING_CACHE_QUALITY_AUTO_fn(int* __retval);
void View__get_DRAWING_CACHE_QUALITY_HIGH_fn(int* __retval);
void View__get_DRAWING_CACHE_QUALITY_LOW_fn(int* __retval);
void View__get_FIND_VIEWS_WITH_CONTENT_DESCRIPTION_fn(int* __retval);
void View__get_FIND_VIEWS_WITH_TEXT_fn(int* __retval);
void View__findFocus_fn(View* __this, View** __retval);
void View__findFocus_IMPL_22869_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void View__findViewById_fn(View* __this, int* arg0, View** __retval);
void View__findViewById_IMPL_23199_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval);
void View__findViewsWithText_fn(View* __this, ::g::Android::java::util::ArrayList* arg0, uObject* arg1, int* arg2);
void View__findViewsWithText_IMPL_22931_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, int* arg4_);
void View__findViewWithTag_fn(View* __this, ::g::Android::java::lang::Object* arg0, View** __retval);
void View__findViewWithTag_IMPL_23200_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);
void View__fitSystemWindows_IMPL_22887_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void View__get_FOCUS_BACKWARD_fn(int* __retval);
void View__get_FOCUS_DOWN_fn(int* __retval);
void View__get_FOCUS_FORWARD_fn(int* __retval);
void View__get_FOCUS_LEFT_fn(int* __retval);
void View__get_FOCUS_RIGHT_fn(int* __retval);
void View__get_FOCUS_UP_fn(int* __retval);
void View__get_FOCUSABLES_ALL_fn(int* __retval);
void View__get_FOCUSABLES_TOUCH_MODE_fn(int* __retval);
void View__focusSearch_fn(View* __this, int* arg0, View** __retval);
void View__focusSearch_IMPL_22926_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval);
void View__forceLayout_fn(View* __this);
void View__forceLayout_IMPL_23210_fn(bool* arg0_, jobject* arg1_);
void View__generateViewId_fn(int* __retval);
void View__generateViewId_IMPL_23257_fn(int* __retval);
void View__getAccessibilityLiveRegion_fn(View* __this, int* __retval);
void View__getAccessibilityLiveRegion_IMPL_22940_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getAccessibilityNodeProvider_fn(View* __this, ::g::Android::android::view::accessibility::AccessibilityNodeProvider** __retval);
void View__getAccessibilityNodeProvider_IMPL_22863_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void View__getAlpha_fn(View* __this, float* __retval);
void View__getAlpha_IMPL_23029_fn(bool* arg0_, jobject* arg1_, float* __retval);
void View__getAnimation_fn(View* __this, ::g::Android::android::view::animation::Animation** __retval);
void View__getAnimation_IMPL_23224_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void View__getApplicationWindowToken_fn(View* __this, uObject** __retval);
void View__getApplicationWindowToken_IMPL_23121_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void View__getBackground_fn(View* __this, ::g::Android::android::graphics::drawable::Drawable** __retval);
void View__getBackground_IMPL_23179_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void View__getBaseline_fn(View* __this, int* __retval);
void View__getBaseline_IMPL_23207_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getBottom_fn(View* __this, int* __retval);
void View__getBottom_IMPL_23034_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getBottomFadingEdgeStrength_IMPL_23085_fn(bool* arg0_, jobject* arg1_, float* __retval);
void View__getBottomPaddingOffset_IMPL_23152_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getCameraDistance_fn(View* __this, float* __retval);
void View__getCameraDistance_IMPL_23013_fn(bool* arg0_, jobject* arg1_, float* __retval);
void View__getClipBounds_fn(View* __this, ::g::Android::android::graphics::Rect** __retval);
void View__getClipBounds_IMPL_23155_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void View__getContentDescription_fn(View* __this, uObject** __retval);
void View__getContentDescription_IMPL_22864_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void View__getContext_fn(View* __this, ::g::Android::android::content::Context** __retval);
void View__getContext_IMPL_22972_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void View__getContextMenuInfo_IMPL_22983_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void View__getDefaultSize_fn(int* arg0, int* arg1, int* __retval);
void View__getDefaultSize_IMPL_23217_fn(int* arg0_, int* arg1_, int* __retval);
void View__getDisplay_fn(View* __this, ::g::Android::android::view::Display** __retval);
void View__getDisplay_IMPL_23122_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void View__getDrawableState_fn(View* __this, ::g::Android::Runtime::IntArray** __retval);
void View__getDrawableState_IMPL_23171_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void View__getDrawingCache_fn(View* __this, ::g::Android::android::graphics::Bitmap** __retval);
void View__getDrawingCache1_fn(View* __this, bool* arg0, ::g::Android::android::graphics::Bitmap** __retval);
void View__getDrawingCache_IMPL_23140_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void View__getDrawingCache_IMPL_23141_fn(bool* arg0_, jobject* arg1_, bool* arg2_, uObject** __retval);
void View__getDrawingCacheBackgroundColor_fn(View* __this, int* __retval);
void View__getDrawingCacheBackgroundColor_IMPL_23144_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getDrawingCacheQuality_fn(View* __this, int* __retval);
void View__getDrawingCacheQuality_IMPL_22872_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getDrawingRect_fn(View* __this, ::g::Android::android::graphics::Rect* arg0);
void View__getDrawingRect_IMPL_23006_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__getDrawingTime_fn(View* __this, int64_t* __retval);
void View__getDrawingTime_IMPL_23131_fn(bool* arg0_, jobject* arg1_, int64_t* __retval);
void View__getFilterTouchesWhenObscured_fn(View* __this, bool* __retval);
void View__getFilterTouchesWhenObscured_IMPL_22920_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__getFitsSystemWindows_fn(View* __this, bool* __retval);
void View__getFitsSystemWindows_IMPL_22889_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__getFocusables_fn(View* __this, int* arg0, ::g::Android::java::util::ArrayList** __retval);
void View__getFocusables_IMPL_22928_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval);
void View__getFocusedRect_fn(View* __this, ::g::Android::android::graphics::Rect* arg0);
void View__getFocusedRect_IMPL_23050_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__getGlobalVisibleRect_fn(View* __this, ::g::Android::android::graphics::Rect* arg0, bool* __retval);
void View__getGlobalVisibleRect1_fn(View* __this, ::g::Android::android::graphics::Rect* arg0, ::g::Android::android::graphics::Point* arg1, bool* __retval);
void View__getGlobalVisibleRect_IMPL_23051_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, bool* __retval);
void View__getGlobalVisibleRect_IMPL_23052_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void View__getHandler_fn(View* __this, ::g::Android::android::os::Handler** __retval);
void View__getHandler_IMPL_23067_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void View__getHeight_fn(View* __this, int* __retval);
void View__getHeight_IMPL_23005_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getHitRect_fn(View* __this, ::g::Android::android::graphics::Rect* arg0);
void View__getHitRect_IMPL_23049_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__getHorizontalFadingEdgeLength_fn(View* __this, int* __retval);
void View__getHorizontalFadingEdgeLength_IMPL_22822_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getHorizontalScrollbarHeight_IMPL_22824_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getId_fn(View* __this, int* __retval);
void View__getId_IMPL_23202_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getImportantForAccessibility_fn(View* __this, int* __retval);
void View__getImportantForAccessibility_IMPL_22938_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getKeepScreenOn_fn(View* __this, bool* __retval);
void View__getKeepScreenOn_IMPL_22874_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__getKeyDispatcherState_fn(View* __this, ::g::Android::android::view::KeyEventDLRDispatcherState** __retval);
void View__getKeyDispatcherState_IMPL_22947_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void View__getLabelFor_fn(View* __this, int* __retval);
void View__getLabelFor_IMPL_22866_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getLayerType_fn(View* __this, int* __retval);
void View__getLayerType_IMPL_23136_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getLayoutDirection_fn(View* __this, int* __retval);
void View__getLayoutDirection_IMPL_22902_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getLayoutParams_fn(View* __this, ::g::Android::android::view::ViewGroupDLRLayoutParams** __retval);
void View__getLayoutParams_IMPL_23056_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void View__getLeft_fn(View* __this, int* __retval);
void View__getLeft_IMPL_23037_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getLeftFadingEdgeStrength_IMPL_23086_fn(bool* arg0_, jobject* arg1_, float* __retval);
void View__getLeftPaddingOffset_IMPL_23149_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getLocalVisibleRect_fn(View* __this, ::g::Android::android::graphics::Rect* arg0, bool* __retval);
void View__getLocalVisibleRect_IMPL_23053_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void View__getLocationInWindow_fn(View* __this, ::g::Android::Runtime::IntArray* arg0);
void View__getLocationInWindow_IMPL_23198_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__getLocationOnScreen_fn(View* __this, ::g::Android::Runtime::IntArray* arg0);
void View__getLocationOnScreen_IMPL_23197_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__getMatrix_fn(View* __this, ::g::Android::android::graphics::Matrix** __retval);
void View__getMatrix_IMPL_23012_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void View__getMeasuredHeight_fn(View* __this, int* __retval);
void View__getMeasuredHeight_IMPL_23009_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getMeasuredHeightAndState_fn(View* __this, int* __retval);
void View__getMeasuredHeightAndState_IMPL_23010_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getMeasuredState_fn(View* __this, int* __retval);
void View__getMeasuredState_IMPL_23011_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getMeasuredWidth_fn(View* __this, int* __retval);
void View__getMeasuredWidth_IMPL_23007_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getMeasuredWidthAndState_fn(View* __this, int* __retval);
void View__getMeasuredWidthAndState_IMPL_23008_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getMinimumHeight_fn(View* __this, int* __retval);
void View__getMinimumHeight_IMPL_23220_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getMinimumWidth_fn(View* __this, int* __retval);
void View__getMinimumWidth_IMPL_23222_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getNextFocusDownId_fn(View* __this, int* __retval);
void View__getNextFocusDownId_IMPL_22882_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getNextFocusForwardId_fn(View* __this, int* __retval);
void View__getNextFocusForwardId_IMPL_22884_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getNextFocusLeftId_fn(View* __this, int* __retval);
void View__getNextFocusLeftId_IMPL_22876_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getNextFocusRightId_fn(View* __this, int* __retval);
void View__getNextFocusRightId_IMPL_22878_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getNextFocusUpId_fn(View* __this, int* __retval);
void View__getNextFocusUpId_IMPL_22880_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getOnFocusChangeListener_fn(View* __this, uObject** __retval);
void View__getOnFocusChangeListener_IMPL_22833_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void View__getOverlay_fn(View* __this, ::g::Android::android::view::ViewOverlay** __retval);
void View__getOverlay_IMPL_23157_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void View__getOverScrollMode_fn(View* __this, int* __retval);
void View__getOverScrollMode_IMPL_23247_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getPaddingBottom_fn(View* __this, int* __retval);
void View__getPaddingBottom_IMPL_23183_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getPaddingEnd_fn(View* __this, int* __retval);
void View__getPaddingEnd_IMPL_23187_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getPaddingLeft_fn(View* __this, int* __retval);
void View__getPaddingLeft_IMPL_23184_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getPaddingRight_fn(View* __this, int* __retval);
void View__getPaddingRight_IMPL_23186_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getPaddingStart_fn(View* __this, int* __retval);
void View__getPaddingStart_IMPL_23185_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getPaddingTop_fn(View* __this, int* __retval);
void View__getPaddingTop_IMPL_23182_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getParent_fn(View* __this, uObject** __retval);
void View__getParent_IMPL_22999_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void View__getParentForAccessibility_fn(View* __this, uObject** __retval);
void View__getParentForAccessibility_IMPL_22942_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void View__getPivotX_fn(View* __this, float* __retval);
void View__getPivotX_IMPL_23025_fn(bool* arg0_, jobject* arg1_, float* __retval);
void View__getPivotY_fn(View* __this, float* __retval);
void View__getPivotY_IMPL_23027_fn(bool* arg0_, jobject* arg1_, float* __retval);
void View__getResources_fn(View* __this, ::g::Android::android::content::res::Resources** __retval);
void View__getResources_IMPL_23163_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void View__getRight_fn(View* __this, int* __retval);
void View__getRight_IMPL_23039_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getRightFadingEdgeStrength_IMPL_23087_fn(bool* arg0_, jobject* arg1_, float* __retval);
void View__getRightPaddingOffset_IMPL_23150_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getRootView_fn(View* __this, View** __retval);
void View__getRootView_IMPL_23196_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void View__getRotation_fn(View* __this, float* __retval);
void View__getRotation_IMPL_23015_fn(bool* arg0_, jobject* arg1_, float* __retval);
void View__getRotationX_fn(View* __this, float* __retval);
void View__getRotationX_IMPL_23019_fn(bool* arg0_, jobject* arg1_, float* __retval);
void View__getRotationY_fn(View* __this, float* __retval);
void View__getRotationY_IMPL_23017_fn(bool* arg0_, jobject* arg1_, float* __retval);
void View__getScaleX_fn(View* __this, float* __retval);
void View__getScaleX_IMPL_23021_fn(bool* arg0_, jobject* arg1_, float* __retval);
void View__getScaleY_fn(View* __this, float* __retval);
void View__getScaleY_IMPL_23023_fn(bool* arg0_, jobject* arg1_, float* __retval);
void View__getScrollBarDefaultDelayBeforeFade_fn(View* __this, int* __retval);
void View__getScrollBarDefaultDelayBeforeFade_IMPL_23094_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getScrollBarFadeDuration_fn(View* __this, int* __retval);
void View__getScrollBarFadeDuration_IMPL_23096_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getScrollBarSize_fn(View* __this, int* __retval);
void View__getScrollBarSize_IMPL_23098_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getScrollBarStyle_fn(View* __this, int* __retval);
void View__getScrollBarStyle_IMPL_23101_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getScrollX_fn(View* __this, int* __retval);
void View__getScrollX_IMPL_23002_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getScrollY_fn(View* __this, int* __retval);
void View__getScrollY_IMPL_23003_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getSolidColor_fn(View* __this, int* __retval);
void View__getSolidColor_IMPL_23158_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getSuggestedMinimumHeight_IMPL_23218_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getSuggestedMinimumWidth_IMPL_23219_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getSystemUiVisibility_fn(View* __this, int* __retval);
void View__getSystemUiVisibility_IMPL_23235_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getTag_fn(View* __this, ::g::Android::java::lang::Object** __retval);
void View__getTag1_fn(View* __this, int* arg0, ::g::Android::java::lang::Object** __retval);
void View__getTag_IMPL_23203_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void View__getTag_IMPL_23205_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval);
void View__getTextAlignment_fn(View* __this, int* __retval);
void View__getTextAlignment_IMPL_23254_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getTextDirection_fn(View* __this, int* __retval);
void View__getTextDirection_IMPL_23250_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getTop_fn(View* __this, int* __retval);
void View__getTop_IMPL_23032_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getTopFadingEdgeStrength_IMPL_23084_fn(bool* arg0_, jobject* arg1_, float* __retval);
void View__getTopPaddingOffset_IMPL_23151_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getTouchables_fn(View* __this, ::g::Android::java::util::ArrayList** __retval);
void View__getTouchables_IMPL_22932_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void View__getTouchDelegate_fn(View* __this, ::g::Android::android::view::TouchDelegate** __retval);
void View__getTouchDelegate_IMPL_22994_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void View__getTranslationX_fn(View* __this, float* __retval);
void View__getTranslationX_IMPL_23045_fn(bool* arg0_, jobject* arg1_, float* __retval);
void View__getTranslationY_fn(View* __this, float* __retval);
void View__getTranslationY_IMPL_23047_fn(bool* arg0_, jobject* arg1_, float* __retval);
void View__getVerticalFadingEdgeLength_fn(View* __this, int* __retval);
void View__getVerticalFadingEdgeLength_IMPL_22820_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getVerticalScrollbarPosition_fn(View* __this, int* __retval);
void View__getVerticalScrollbarPosition_IMPL_22827_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getVerticalScrollbarWidth_fn(View* __this, int* __retval);
void View__getVerticalScrollbarWidth_IMPL_22823_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getViewTreeObserver_fn(View* __this, ::g::Android::android::view::ViewTreeObserver** __retval);
void View__getViewTreeObserver_IMPL_23195_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void View__getVisibility_fn(View* __this, int* __retval);
void View__getVisibility_IMPL_22891_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getWidth_fn(View* __this, int* __retval);
void View__getWidth_IMPL_23004_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getWindowAttachCount_IMPL_23118_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getWindowId_fn(View* __this, ::g::Android::android::view::WindowId** __retval);
void View__getWindowId_IMPL_23120_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void View__getWindowSystemUiVisibility_fn(View* __this, int* __retval);
void View__getWindowSystemUiVisibility_IMPL_23236_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getWindowToken_fn(View* __this, uObject** __retval);
void View__getWindowToken_IMPL_23119_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void View__getWindowVisibility_fn(View* __this, int* __retval);
void View__getWindowVisibility_IMPL_22967_fn(bool* arg0_, jobject* arg1_, int* __retval);
void View__getWindowVisibleDisplayFrame_fn(View* __this, ::g::Android::android::graphics::Rect* arg0);
void View__getWindowVisibleDisplayFrame_IMPL_22968_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__getX_fn(View* __this, float* __retval);
void View__getX_IMPL_23041_fn(bool* arg0_, jobject* arg1_, float* __retval);
void View__getY_fn(View* __this, float* __retval);
void View__getY_IMPL_23043_fn(bool* arg0_, jobject* arg1_, float* __retval);
void View__get_GONE_fn(int* __retval);
void View__get_HAPTIC_FEEDBACK_ENABLED_fn(int* __retval);
void View__hasFocus_fn(View* __this, bool* __retval);
void View__hasFocus_IMPL_22851_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__hasFocusable_fn(View* __this, bool* __retval);
void View__hasFocusable_IMPL_22852_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__hasOnClickListeners_fn(View* __this, bool* __retval);
void View__hasOnClickListeners_IMPL_22835_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__hasOverlappingRendering_fn(View* __this, bool* __retval);
void View__hasOverlappingRendering_IMPL_23030_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__hasTransientState_fn(View* __this, bool* __retval);
void View__hasTransientState_IMPL_22903_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__hasWindowFocus_fn(View* __this, bool* __retval);
void View__hasWindowFocus_IMPL_22960_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__get_IMPORTANT_FOR_ACCESSIBILITY_AUTO_fn(int* __retval);
void View__get_IMPORTANT_FOR_ACCESSIBILITY_NO_fn(int* __retval);
void View__get_IMPORTANT_FOR_ACCESSIBILITY_NO_HIDE_DESCENDANTS_fn(int* __retval);
void View__get_IMPORTANT_FOR_ACCESSIBILITY_YES_fn(int* __retval);
void View__inflate_fn(::g::Android::android::content::Context* arg0, int* arg1, ::g::Android::android::view::ViewGroup* arg2, View** __retval);
void View__inflate_IMPL_23244_fn(uObject* arg0_, int* arg1_, uObject* arg2_, uObject** __retval);
void View__initializeFadingEdge_IMPL_22819_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__initializeScrollbars_IMPL_22825_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__invalidate_fn(View* __this);
void View__invalidate1_fn(View* __this, ::g::Android::android::graphics::Rect* arg0);
void View__invalidate2_fn(View* __this, int* arg0, int* arg1, int* arg2, int* arg3);
void View__invalidate_IMPL_23063_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__invalidate_IMPL_23064_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_);
void View__invalidate_IMPL_23065_fn(bool* arg0_, jobject* arg1_);
void View__invalidateDrawable_fn(View* __this, ::g::Android::android::graphics::drawable::Drawable* arg0);
void View__invalidateDrawable_IMPL_23164_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__get_INVISIBLE_fn(int* __retval);
void View__isActivated_fn(View* __this, bool* __retval);
void View__isActivated_IMPL_23194_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__isAttachedToWindow_fn(View* __this, bool* __retval);
void View__isAttachedToWindow_IMPL_22905_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__isClickable_fn(View* __this, bool* __retval);
void View__isClickable_IMPL_22911_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__isDirty_fn(View* __this, bool* __retval);
void View__isDirty_IMPL_23035_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__isDrawingCacheEnabled_fn(View* __this, bool* __retval);
void View__isDrawingCacheEnabled_IMPL_23139_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__isDuplicateParentStateEnabled_fn(View* __this, bool* __retval);
void View__isDuplicateParentStateEnabled_IMPL_23133_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__isEnabled_fn(View* __this, bool* __retval);
void View__isEnabled_IMPL_22893_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__isFocusable_fn(View* __this, bool* __retval);
void View__isFocusable_IMPL_22924_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__isFocusableInTouchMode_fn(View* __this, bool* __retval);
void View__isFocusableInTouchMode_IMPL_22925_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__isFocused_fn(View* __this, bool* __retval);
void View__isFocused_IMPL_22868_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__isHapticFeedbackEnabled_fn(View* __this, bool* __retval);
void View__isHapticFeedbackEnabled_IMPL_22900_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__isHardwareAccelerated_fn(View* __this, bool* __retval);
void View__isHardwareAccelerated_IMPL_23153_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__isHorizontalFadingEdgeEnabled_fn(View* __this, bool* __retval);
void View__isHorizontalFadingEdgeEnabled_IMPL_23080_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__isHorizontalScrollBarEnabled_fn(View* __this, bool* __retval);
void View__isHorizontalScrollBarEnabled_IMPL_23088_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__isHovered_fn(View* __this, bool* __retval);
void View__isHovered_IMPL_22988_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__isInEditMode_fn(View* __this, bool* __retval);
void View__isInEditMode_IMPL_23147_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__isInLayout_fn(View* __this, bool* __retval);
void View__isInLayout_IMPL_23208_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__isInTouchMode_fn(View* __this, bool* __retval);
void View__isInTouchMode_IMPL_22971_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__isLaidOut_fn(View* __this, bool* __retval);
void View__isLaidOut_IMPL_22906_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__isLayoutDirectionResolved_fn(View* __this, bool* __retval);
void View__isLayoutDirectionResolved_IMPL_23116_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__isLayoutRequested_fn(View* __this, bool* __retval);
void View__isLayoutRequested_IMPL_23159_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__isLongClickable_fn(View* __this, bool* __retval);
void View__isLongClickable_IMPL_22913_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__isOpaque_fn(View* __this, bool* __retval);
void View__isOpaque_IMPL_23066_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__isPaddingOffsetRequired_IMPL_23148_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__isPaddingRelative_fn(View* __this, bool* __retval);
void View__isPaddingRelative_IMPL_23188_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__isPressed_fn(View* __this, bool* __retval);
void View__isPressed_IMPL_22917_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__isSaveEnabled_fn(View* __this, bool* __retval);
void View__isSaveEnabled_IMPL_22918_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__isSaveFromParentEnabled_fn(View* __this, bool* __retval);
void View__isSaveFromParentEnabled_IMPL_22922_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__isScrollbarFadingEnabled_fn(View* __this, bool* __retval);
void View__isScrollbarFadingEnabled_IMPL_23093_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__isScrollContainer_fn(View* __this, bool* __retval);
void View__isScrollContainer_IMPL_22870_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__isSelected_fn(View* __this, bool* __retval);
void View__isSelected_IMPL_23191_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__isShown_fn(View* __this, bool* __retval);
void View__isShown_IMPL_22886_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__isSoundEffectsEnabled_fn(View* __this, bool* __retval);
void View__isSoundEffectsEnabled_IMPL_22898_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__isTextAlignmentResolved_fn(View* __this, bool* __retval);
void View__isTextAlignmentResolved_IMPL_23256_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__isTextDirectionResolved_fn(View* __this, bool* __retval);
void View__isTextDirectionResolved_IMPL_23252_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__isVerticalFadingEdgeEnabled_fn(View* __this, bool* __retval);
void View__isVerticalFadingEdgeEnabled_IMPL_23082_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__isVerticalScrollBarEnabled_fn(View* __this, bool* __retval);
void View__isVerticalScrollBarEnabled_IMPL_23090_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__j_draw_fn(View* __this, ::g::Android::android::graphics::Canvas* arg0);
void View__j_draw_IMPL_23156_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__jumpDrawablesToCurrentState_fn(View* __this);
void View__jumpDrawablesToCurrentState_IMPL_23174_fn(bool* arg0_, jobject* arg1_);
void View__get_KEEP_SCREEN_ON_fn(int* __retval);
void View__get_LAYER_TYPE_HARDWARE_fn(int* __retval);
void View__get_LAYER_TYPE_NONE_fn(int* __retval);
void View__get_LAYER_TYPE_SOFTWARE_fn(int* __retval);
void View__layout_fn(View* __this, int* arg0, int* arg1, int* arg2, int* arg3);
void View__get_LAYOUT_DIRECTION_INHERIT_fn(int* __retval);
void View__get_LAYOUT_DIRECTION_LOCALE_fn(int* __retval);
void View__get_LAYOUT_DIRECTION_LTR_fn(int* __retval);
void View__get_LAYOUT_DIRECTION_RTL_fn(int* __retval);
void View__layout_IMPL_23160_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_);
void View__measure_fn(View* __this, int* arg0, int* arg1);
void View__measure_IMPL_23211_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_);
void View__get_MEASURED_HEIGHT_STATE_SHIFT_fn(int* __retval);
void View__get_MEASURED_SIZE_MASK_fn(int* __retval);
void View__get_MEASURED_STATE_MASK_fn(int* __retval);
void View__get_MEASURED_STATE_TOO_SMALL_fn(int* __retval);
void View__mergeDrawableStates_IMPL_23173_fn(uObject* arg0_, uObject* arg1_, uObject** __retval);
void View__New5_fn(::g::Android::android::content::Context* arg0, View** __retval);
void View__New6_fn(::g::Android::android::content::Context* arg0, uObject* arg1, View** __retval);
void View__New7_fn(::g::Android::android::content::Context* arg0, uObject* arg1, int* arg2, View** __retval);
void View__New8_fn(jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType, View** __retval);
void View__get_NO_ID_fn(int* __retval);
void View__offsetLeftAndRight_fn(View* __this, int* arg0);
void View__offsetLeftAndRight_IMPL_23055_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__offsetTopAndBottom_fn(View* __this, int* arg0);
void View__offsetTopAndBottom_IMPL_23054_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__onAnimationEnd_IMPL_23229_fn(bool* arg0_, jobject* arg1_);
void View__onAnimationStart_IMPL_23228_fn(bool* arg0_, jobject* arg1_);
void View__onAttachedToWindow_IMPL_23112_fn(bool* arg0_, jobject* arg1_);
void View__onCancelPendingInputEvents_fn(View* __this);
void View__onCancelPendingInputEvents_IMPL_23124_fn(bool* arg0_, jobject* arg1_);
void View__onCheckIsTextEditor_fn(View* __this, bool* __retval);
void View__onCheckIsTextEditor_IMPL_22979_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__onConfigurationChanged_IMPL_22970_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__onCreateContextMenu_IMPL_22984_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__onCreateDrawableState_IMPL_23172_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval);
void View__onCreateInputConnection_fn(View* __this, ::g::Android::android::view::inputmethod::EditorInfo* arg0, uObject** __retval);
void View__onCreateInputConnection_IMPL_22980_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);
void View__onDetachedFromWindow_IMPL_23117_fn(bool* arg0_, jobject* arg1_);
void View__onDisplayHint_IMPL_22964_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__onDragEvent_fn(View* __this, ::g::Android::android::view::DragEvent* arg0, bool* __retval);
void View__onDragEvent_IMPL_23242_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void View__onDraw_IMPL_23111_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__onDrawScrollBars_IMPL_23110_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__onFilterTouchEventForSecurity_fn(View* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval);
void View__onFilterTouchEventForSecurity_IMPL_22952_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void View__onFinishInflate_IMPL_23162_fn(bool* arg0_, jobject* arg1_);
void View__onFinishTemporaryDetach_fn(View* __this);
void View__onFinishTemporaryDetach_IMPL_22946_fn(bool* arg0_, jobject* arg1_);
void View__onFocusChanged_IMPL_22853_fn(bool* arg0_, jobject* arg1_, bool* arg2_, int* arg3_, uObject* arg4_);
void View__onGenericMotionEvent_fn(View* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval);
void View__onGenericMotionEvent_IMPL_22986_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void View__onHoverChanged_fn(View* __this, bool* arg0);
void View__onHoverChanged_IMPL_22990_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void View__onHoverEvent_fn(View* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval);
void View__onHoverEvent_IMPL_22987_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void View__onInitializeAccessibilityEvent_fn(View* __this, ::g::Android::android::view::accessibility::AccessibilityEvent* arg0);
void View__onInitializeAccessibilityEvent_IMPL_22859_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__onInitializeAccessibilityNodeInfo_fn(View* __this, ::g::Android::android::view::accessibility::AccessibilityNodeInfo* arg0);
void View__onInitializeAccessibilityNodeInfo_IMPL_22861_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__onKeyDown_fn(View* __this, int* arg0, ::g::Android::android::view::KeyEvent* arg1, bool* __retval);
void View__onKeyDown_IMPL_22974_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval);
void View__onKeyLongPress_fn(View* __this, int* arg0, ::g::Android::android::view::KeyEvent* arg1, bool* __retval);
void View__onKeyLongPress_IMPL_22975_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval);
void View__onKeyMultiple_fn(View* __this, int* arg0, int* arg1, ::g::Android::android::view::KeyEvent* arg2, bool* __retval);
void View__onKeyMultiple_IMPL_22977_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, uObject* arg4_, bool* __retval);
void View__onKeyPreIme_fn(View* __this, int* arg0, ::g::Android::android::view::KeyEvent* arg1, bool* __retval);
void View__onKeyPreIme_IMPL_22973_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval);
void View__onKeyShortcut_fn(View* __this, int* arg0, ::g::Android::android::view::KeyEvent* arg1, bool* __retval);
void View__onKeyShortcut_IMPL_22978_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval);
void View__onKeyUp_fn(View* __this, int* arg0, ::g::Android::android::view::KeyEvent* arg1, bool* __retval);
void View__onKeyUp_IMPL_22976_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval);
void View__onLayout_IMPL_23161_fn(bool* arg0_, jobject* arg1_, bool* arg2_, int* arg3_, int* arg4_, int* arg5_, int* arg6_);
void View__onMeasure_IMPL_23212_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_);
void View__onOverScrolled_IMPL_23246_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, bool* arg4_, bool* arg5_);
void View__onPopulateAccessibilityEvent_fn(View* __this, ::g::Android::android::view::accessibility::AccessibilityEvent* arg0);
void View__onPopulateAccessibilityEvent_IMPL_22858_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__onRestoreInstanceState_IMPL_23130_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__onRtlPropertiesChanged_fn(View* __this, int* arg0);
void View__onRtlPropertiesChanged_IMPL_23114_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__onSaveInstanceState_IMPL_23127_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void View__onScreenStateChanged_fn(View* __this, int* arg0);
void View__onScreenStateChanged_IMPL_23113_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__onScrollChanged_fn(View* __this, int* arg0, int* arg1, int* arg2, int* arg3);
void View__onScrollChanged_IMPL_22996_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_);
void View__onSetAlpha_IMPL_23230_fn(bool* arg0_, jobject* arg1_, int* arg2_, bool* __retval);
void View__onSizeChanged_IMPL_22997_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_);
void View__onStartTemporaryDetach_fn(View* __this);
void View__onStartTemporaryDetach_IMPL_22945_fn(bool* arg0_, jobject* arg1_);
void View__onTouchEvent_fn(View* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval);
void View__onTouchEvent_IMPL_22991_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void View__onTrackballEvent_fn(View* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval);
void View__onTrackballEvent_IMPL_22985_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void View__onVisibilityChanged_IMPL_22962_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_);
void View__onWindowFocusChanged_fn(View* __this, bool* arg0);
void View__onWindowFocusChanged_IMPL_22959_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void View__onWindowSystemUiVisibilityChanged_fn(View* __this, int* arg0);
void View__onWindowSystemUiVisibilityChanged_IMPL_23237_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__onWindowVisibilityChanged_IMPL_22966_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__get_OVER_SCROLL_ALWAYS_fn(int* __retval);
void View__get_OVER_SCROLL_IF_CONTENT_SCROLLS_fn(int* __retval);
void View__get_OVER_SCROLL_NEVER_fn(int* __retval);
void View__overScrollBy_IMPL_23245_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_, int* arg6_, int* arg7_, int* arg8_, int* arg9_, bool* arg10_, bool* __retval);
void View__performAccessibilityAction_fn(View* __this, int* arg0, ::g::Android::android::os::Bundle* arg1, bool* __retval);
void View__performAccessibilityAction_IMPL_22944_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval);
void View__performClick_fn(View* __this, bool* __retval);
void View__performClick_IMPL_22838_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__performHapticFeedback_fn(View* __this, int* arg0, bool* __retval);
void View__performHapticFeedback1_fn(View* __this, int* arg0, int* arg1, bool* __retval);
void View__performHapticFeedback_IMPL_23232_fn(bool* arg0_, jobject* arg1_, int* arg2_, bool* __retval);
void View__performHapticFeedback_IMPL_23233_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, bool* __retval);
void View__performLongClick_fn(View* __this, bool* __retval);
void View__performLongClick_IMPL_22840_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__playSoundEffect_fn(View* __this, int* arg0);
void View__playSoundEffect_IMPL_23231_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__post_fn(View* __this, uObject* arg0, bool* __retval);
void View__post_IMPL_23068_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void View__postDelayed_fn(View* __this, uObject* arg0, int64_t* arg1, bool* __retval);
void View__postDelayed_IMPL_23069_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int64_t* arg3_, bool* __retval);
void View__postInvalidate_fn(View* __this);
void View__postInvalidate1_fn(View* __this, int* arg0, int* arg1, int* arg2, int* arg3);
void View__postInvalidate_IMPL_23073_fn(bool* arg0_, jobject* arg1_);
void View__postInvalidate_IMPL_23074_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_);
void View__postInvalidateDelayed_fn(View* __this, int64_t* arg0);
void View__postInvalidateDelayed1_fn(View* __this, int64_t* arg0, int* arg1, int* arg2, int* arg3, int* arg4);
void View__postInvalidateDelayed_IMPL_23075_fn(bool* arg0_, jobject* arg1_, int64_t* arg2_);
void View__postInvalidateDelayed_IMPL_23076_fn(bool* arg0_, jobject* arg1_, int64_t* arg2_, int* arg3_, int* arg4_, int* arg5_, int* arg6_);
void View__postInvalidateOnAnimation_fn(View* __this);
void View__postInvalidateOnAnimation1_fn(View* __this, int* arg0, int* arg1, int* arg2, int* arg3);
void View__postInvalidateOnAnimation_IMPL_23077_fn(bool* arg0_, jobject* arg1_);
void View__postInvalidateOnAnimation_IMPL_23078_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_);
void View__postOnAnimation_fn(View* __this, uObject* arg0);
void View__postOnAnimation_IMPL_23070_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__postOnAnimationDelayed_fn(View* __this, uObject* arg0, int64_t* arg1);
void View__postOnAnimationDelayed_IMPL_23071_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int64_t* arg3_);
void View__refreshDrawableState_fn(View* __this);
void View__refreshDrawableState_IMPL_23170_fn(bool* arg0_, jobject* arg1_);
void View__removeCallbacks_fn(View* __this, uObject* arg0, bool* __retval);
void View__removeCallbacks_IMPL_23072_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void View__removeOnAttachStateChangeListener_fn(View* __this, uObject* arg0);
void View__removeOnAttachStateChangeListener_IMPL_22832_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__removeOnLayoutChangeListener_fn(View* __this, uObject* arg0);
void View__removeOnLayoutChangeListener_IMPL_22830_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__requestFitSystemWindows_fn(View* __this);
void View__requestFitSystemWindows_IMPL_22890_fn(bool* arg0_, jobject* arg1_);
void View__requestFocus_fn(View* __this, bool* __retval);
void View__requestFocus1_fn(View* __this, int* arg0, bool* __retval);
void View__requestFocus2_fn(View* __this, int* arg0, ::g::Android::android::graphics::Rect* arg1, bool* __retval);
void View__requestFocus_IMPL_22934_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__requestFocus_IMPL_22935_fn(bool* arg0_, jobject* arg1_, int* arg2_, bool* __retval);
void View__requestFocus_IMPL_22936_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval);
void View__requestFocusFromTouch_fn(View* __this, bool* __retval);
void View__requestFocusFromTouch_IMPL_22937_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__requestLayout_fn(View* __this);
void View__requestLayout_IMPL_23209_fn(bool* arg0_, jobject* arg1_);
void View__requestRectangleOnScreen_fn(View* __this, ::g::Android::android::graphics::Rect* arg0, bool* __retval);
void View__requestRectangleOnScreen1_fn(View* __this, ::g::Android::android::graphics::Rect* arg0, bool* arg1, bool* __retval);
void View__requestRectangleOnScreen_IMPL_22848_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void View__requestRectangleOnScreen_IMPL_22849_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* arg3_, bool* __retval);
void View__resolveSize_fn(int* arg0, int* arg1, int* __retval);
void View__resolveSize_IMPL_23215_fn(int* arg0_, int* arg1_, int* __retval);
void View__resolveSizeAndState_fn(int* arg0, int* arg1, int* arg2, int* __retval);
void View__resolveSizeAndState_IMPL_23216_fn(int* arg0_, int* arg1_, int* arg2_, int* __retval);
void View__restoreHierarchyState_fn(View* __this, ::g::Android::android::util::SparseArray* arg0);
void View__restoreHierarchyState_IMPL_23128_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__get_ROTATION_fn(::g::Android::android::util::Property** __retval);
void View__get_ROTATION_X_fn(::g::Android::android::util::Property** __retval);
void View__get_ROTATION_Y_fn(::g::Android::android::util::Property** __retval);
void View__saveHierarchyState_fn(View* __this, ::g::Android::android::util::SparseArray* arg0);
void View__saveHierarchyState_IMPL_23125_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__get_SCALE_X_fn(::g::Android::android::util::Property** __retval);
void View__get_SCALE_Y_fn(::g::Android::android::util::Property** __retval);
void View__scheduleDrawable_fn(View* __this, ::g::Android::android::graphics::drawable::Drawable* arg0, uObject* arg1, int64_t* arg2);
void View__scheduleDrawable_IMPL_23165_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, int64_t* arg4_);
void View__get_SCREEN_STATE_OFF_fn(int* __retval);
void View__get_SCREEN_STATE_ON_fn(int* __retval);
void View__get_SCROLLBAR_POSITION_DEFAULT_fn(int* __retval);
void View__get_SCROLLBAR_POSITION_LEFT_fn(int* __retval);
void View__get_SCROLLBAR_POSITION_RIGHT_fn(int* __retval);
void View__get_SCROLLBARS_INSIDE_INSET_fn(int* __retval);
void View__get_SCROLLBARS_INSIDE_OVERLAY_fn(int* __retval);
void View__get_SCROLLBARS_OUTSIDE_INSET_fn(int* __retval);
void View__get_SCROLLBARS_OUTSIDE_OVERLAY_fn(int* __retval);
void View__scrollBy_fn(View* __this, int* arg0, int* arg1);
void View__scrollBy_IMPL_23059_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_);
void View__scrollTo_fn(View* __this, int* arg0, int* arg1);
void View__scrollTo_IMPL_23058_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_);
void View__sendAccessibilityEvent_fn(View* __this, int* arg0);
void View__sendAccessibilityEvent_IMPL_22854_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__sendAccessibilityEventUnchecked_fn(View* __this, ::g::Android::android::view::accessibility::AccessibilityEvent* arg0);
void View__sendAccessibilityEventUnchecked_IMPL_22856_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__setAccessibilityDelegate_fn(View* __this, ::g::Android::android::view::ViewDLRAccessibilityDelegate* arg0);
void View__setAccessibilityDelegate_IMPL_22862_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__setAccessibilityLiveRegion_fn(View* __this, int* arg0);
void View__setAccessibilityLiveRegion_IMPL_22939_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__setActivated_fn(View* __this, bool* arg0);
void View__setActivated_IMPL_23192_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void View__setAlpha_fn(View* __this, float* arg0);
void View__setAlpha_IMPL_23031_fn(bool* arg0_, jobject* arg1_, float* arg2_);
void View__setAnimation_fn(View* __this, ::g::Android::android::view::animation::Animation* arg0);
void View__setAnimation_IMPL_23227_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__setBackground_fn(View* __this, ::g::Android::android::graphics::drawable::Drawable* arg0);
void View__setBackground_IMPL_23177_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__setBackgroundColor_fn(View* __this, int* arg0);
void View__setBackgroundColor_IMPL_23175_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__setBackgroundDrawable_fn(View* __this, ::g::Android::android::graphics::drawable::Drawable* arg0);
void View__setBackgroundDrawable_IMPL_23178_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__setBackgroundResource_fn(View* __this, int* arg0);
void View__setBackgroundResource_IMPL_23176_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__setBottom_fn(View* __this, int* arg0);
void View__setBottom_IMPL_23036_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__setCameraDistance_fn(View* __this, float* arg0);
void View__setCameraDistance_IMPL_23014_fn(bool* arg0_, jobject* arg1_, float* arg2_);
void View__setClickable_fn(View* __this, bool* arg0);
void View__setClickable_IMPL_22912_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void View__setClipBounds_fn(View* __this, ::g::Android::android::graphics::Rect* arg0);
void View__setClipBounds_IMPL_23154_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__setContentDescription_fn(View* __this, uObject* arg0);
void View__setContentDescription_IMPL_22865_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__setDrawingCacheBackgroundColor_fn(View* __this, int* arg0);
void View__setDrawingCacheBackgroundColor_IMPL_23143_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__setDrawingCacheEnabled_fn(View* __this, bool* arg0);
void View__setDrawingCacheEnabled_IMPL_23138_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void View__setDrawingCacheQuality_fn(View* __this, int* arg0);
void View__setDrawingCacheQuality_IMPL_22873_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__setDuplicateParentStateEnabled_fn(View* __this, bool* arg0);
void View__setDuplicateParentStateEnabled_IMPL_23132_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void View__setEnabled_fn(View* __this, bool* arg0);
void View__setEnabled_IMPL_22894_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void View__setFadingEdgeLength_fn(View* __this, int* arg0);
void View__setFadingEdgeLength_IMPL_22821_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__setFilterTouchesWhenObscured_fn(View* __this, bool* arg0);
void View__setFilterTouchesWhenObscured_IMPL_22921_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void View__setFitsSystemWindows_fn(View* __this, bool* arg0);
void View__setFitsSystemWindows_IMPL_22888_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void View__setFocusable_fn(View* __this, bool* arg0);
void View__setFocusable_IMPL_22895_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void View__setFocusableInTouchMode_fn(View* __this, bool* arg0);
void View__setFocusableInTouchMode_IMPL_22896_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void View__setHapticFeedbackEnabled_fn(View* __this, bool* arg0);
void View__setHapticFeedbackEnabled_IMPL_22899_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void View__setHasTransientState_fn(View* __this, bool* arg0);
void View__setHasTransientState_IMPL_22904_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void View__setHorizontalFadingEdgeEnabled_fn(View* __this, bool* arg0);
void View__setHorizontalFadingEdgeEnabled_IMPL_23081_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void View__setHorizontalScrollBarEnabled_fn(View* __this, bool* arg0);
void View__setHorizontalScrollBarEnabled_IMPL_23089_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void View__setHovered_fn(View* __this, bool* arg0);
void View__setHovered_IMPL_22989_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void View__setId_fn(View* __this, int* arg0);
void View__setId_IMPL_23201_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__setImportantForAccessibility_fn(View* __this, int* arg0);
void View__setImportantForAccessibility_IMPL_22941_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__setKeepScreenOn_fn(View* __this, bool* arg0);
void View__setKeepScreenOn_IMPL_22875_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void View__setLabelFor_fn(View* __this, int* arg0);
void View__setLabelFor_IMPL_22867_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__setLayerPaint_fn(View* __this, ::g::Android::android::graphics::Paint* arg0);
void View__setLayerPaint_IMPL_23135_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__setLayerType_fn(View* __this, int* arg0, ::g::Android::android::graphics::Paint* arg1);
void View__setLayerType_IMPL_23134_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_);
void View__setLayoutDirection_fn(View* __this, int* arg0);
void View__setLayoutDirection_IMPL_22901_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__setLayoutParams_fn(View* __this, ::g::Android::android::view::ViewGroupDLRLayoutParams* arg0);
void View__setLayoutParams_IMPL_23057_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__setLeft_fn(View* __this, int* arg0);
void View__setLeft_IMPL_23038_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__setLongClickable_fn(View* __this, bool* arg0);
void View__setLongClickable_IMPL_22914_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void View__setMeasuredDimension_IMPL_23213_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_);
void View__setMinimumHeight_fn(View* __this, int* arg0);
void View__setMinimumHeight_IMPL_23221_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__setMinimumWidth_fn(View* __this, int* arg0);
void View__setMinimumWidth_IMPL_23223_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__setNextFocusDownId_fn(View* __this, int* arg0);
void View__setNextFocusDownId_IMPL_22883_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__setNextFocusForwardId_fn(View* __this, int* arg0);
void View__setNextFocusForwardId_IMPL_22885_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__setNextFocusLeftId_fn(View* __this, int* arg0);
void View__setNextFocusLeftId_IMPL_22877_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__setNextFocusRightId_fn(View* __this, int* arg0);
void View__setNextFocusRightId_IMPL_22879_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__setNextFocusUpId_fn(View* __this, int* arg0);
void View__setNextFocusUpId_IMPL_22881_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__setOnClickListener_fn(View* __this, uObject* arg0);
void View__setOnClickListener_IMPL_22834_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__setOnCreateContextMenuListener_fn(View* __this, uObject* arg0);
void View__setOnCreateContextMenuListener_IMPL_22837_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__setOnDragListener_fn(View* __this, uObject* arg0);
void View__setOnDragListener_IMPL_22847_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__setOnFocusChangeListener_fn(View* __this, uObject* arg0);
void View__setOnFocusChangeListener_IMPL_22828_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__setOnGenericMotionListener_fn(View* __this, uObject* arg0);
void View__setOnGenericMotionListener_IMPL_22845_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__setOnHoverListener_fn(View* __this, uObject* arg0);
void View__setOnHoverListener_IMPL_22846_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__setOnKeyListener_fn(View* __this, uObject* arg0);
void View__setOnKeyListener_IMPL_22843_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__setOnLongClickListener_fn(View* __this, uObject* arg0);
void View__setOnLongClickListener_IMPL_22836_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__setOnSystemUiVisibilityChangeListener_fn(View* __this, uObject* arg0);
void View__setOnSystemUiVisibilityChangeListener_IMPL_23239_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__setOnTouchListener_fn(View* __this, uObject* arg0);
void View__setOnTouchListener_IMPL_22844_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__setOverScrollMode_fn(View* __this, int* arg0);
void View__setOverScrollMode_IMPL_23248_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__setPadding_fn(View* __this, int* arg0, int* arg1, int* arg2, int* arg3);
void View__setPadding_IMPL_23180_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_);
void View__setPaddingRelative_fn(View* __this, int* arg0, int* arg1, int* arg2, int* arg3);
void View__setPaddingRelative_IMPL_23181_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_);
void View__setPivotX_fn(View* __this, float* arg0);
void View__setPivotX_IMPL_23026_fn(bool* arg0_, jobject* arg1_, float* arg2_);
void View__setPivotY_fn(View* __this, float* arg0);
void View__setPivotY_IMPL_23028_fn(bool* arg0_, jobject* arg1_, float* arg2_);
void View__setPressed_fn(View* __this, bool* arg0);
void View__setPressed_IMPL_22915_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void View__setRight_fn(View* __this, int* arg0);
void View__setRight_IMPL_23040_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__setRotation_fn(View* __this, float* arg0);
void View__setRotation_IMPL_23016_fn(bool* arg0_, jobject* arg1_, float* arg2_);
void View__setRotationX_fn(View* __this, float* arg0);
void View__setRotationX_IMPL_23020_fn(bool* arg0_, jobject* arg1_, float* arg2_);
void View__setRotationY_fn(View* __this, float* arg0);
void View__setRotationY_IMPL_23018_fn(bool* arg0_, jobject* arg1_, float* arg2_);
void View__setSaveEnabled_fn(View* __this, bool* arg0);
void View__setSaveEnabled_IMPL_22919_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void View__setSaveFromParentEnabled_fn(View* __this, bool* arg0);
void View__setSaveFromParentEnabled_IMPL_22923_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void View__setScaleX_fn(View* __this, float* arg0);
void View__setScaleX_IMPL_23022_fn(bool* arg0_, jobject* arg1_, float* arg2_);
void View__setScaleY_fn(View* __this, float* arg0);
void View__setScaleY_IMPL_23024_fn(bool* arg0_, jobject* arg1_, float* arg2_);
void View__setScrollBarDefaultDelayBeforeFade_fn(View* __this, int* arg0);
void View__setScrollBarDefaultDelayBeforeFade_IMPL_23095_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__setScrollBarFadeDuration_fn(View* __this, int* arg0);
void View__setScrollBarFadeDuration_IMPL_23097_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__setScrollbarFadingEnabled_fn(View* __this, bool* arg0);
void View__setScrollbarFadingEnabled_IMPL_23092_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void View__setScrollBarSize_fn(View* __this, int* arg0);
void View__setScrollBarSize_IMPL_23099_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__setScrollBarStyle_fn(View* __this, int* arg0);
void View__setScrollBarStyle_IMPL_23100_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__setScrollContainer_fn(View* __this, bool* arg0);
void View__setScrollContainer_IMPL_22871_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void View__setScrollX_fn(View* __this, int* arg0);
void View__setScrollX_IMPL_23000_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__setScrollY_fn(View* __this, int* arg0);
void View__setScrollY_IMPL_23001_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__setSelected_fn(View* __this, bool* arg0);
void View__setSelected_IMPL_23189_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void View__setSoundEffectsEnabled_fn(View* __this, bool* arg0);
void View__setSoundEffectsEnabled_IMPL_22897_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void View__setSystemUiVisibility_fn(View* __this, int* arg0);
void View__setSystemUiVisibility_IMPL_23234_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__setTag_fn(View* __this, ::g::Android::java::lang::Object* arg0);
void View__setTag1_fn(View* __this, int* arg0, ::g::Android::java::lang::Object* arg1);
void View__setTag_IMPL_23204_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__setTag_IMPL_23206_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_);
void View__setTextAlignment_fn(View* __this, int* arg0);
void View__setTextAlignment_IMPL_23253_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__setTextDirection_fn(View* __this, int* arg0);
void View__setTextDirection_IMPL_23249_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__setTop_fn(View* __this, int* arg0);
void View__setTop_IMPL_23033_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__setTouchDelegate_fn(View* __this, ::g::Android::android::view::TouchDelegate* arg0);
void View__setTouchDelegate_IMPL_22993_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__setTranslationX_fn(View* __this, float* arg0);
void View__setTranslationX_IMPL_23046_fn(bool* arg0_, jobject* arg1_, float* arg2_);
void View__setTranslationY_fn(View* __this, float* arg0);
void View__setTranslationY_IMPL_23048_fn(bool* arg0_, jobject* arg1_, float* arg2_);
void View__setVerticalFadingEdgeEnabled_fn(View* __this, bool* arg0);
void View__setVerticalFadingEdgeEnabled_IMPL_23083_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void View__setVerticalScrollBarEnabled_fn(View* __this, bool* arg0);
void View__setVerticalScrollBarEnabled_IMPL_23091_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void View__setVerticalScrollbarPosition_fn(View* __this, int* arg0);
void View__setVerticalScrollbarPosition_IMPL_22826_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__setVisibility_fn(View* __this, int* arg0);
void View__setVisibility_IMPL_22892_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void View__setWillNotCacheDrawing_fn(View* __this, bool* arg0);
void View__setWillNotCacheDrawing_IMPL_22909_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void View__setWillNotDraw_fn(View* __this, bool* arg0);
void View__setWillNotDraw_IMPL_22907_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void View__setX_fn(View* __this, float* arg0);
void View__setX_IMPL_23042_fn(bool* arg0_, jobject* arg1_, float* arg2_);
void View__setY_fn(View* __this, float* arg0);
void View__setY_IMPL_23044_fn(bool* arg0_, jobject* arg1_, float* arg2_);
void View__showContextMenu_fn(View* __this, bool* __retval);
void View__showContextMenu_IMPL_22841_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__get_SOUND_EFFECTS_ENABLED_fn(int* __retval);
void View__startActionMode_fn(View* __this, uObject* arg0, ::g::Android::android::view::ActionMode** __retval);
void View__startActionMode_IMPL_22842_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);
void View__startAnimation_fn(View* __this, ::g::Android::android::view::animation::Animation* arg0);
void View__startAnimation_IMPL_23225_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__startDrag_fn(View* __this, ::g::Android::android::content::ClipData* arg0, ::g::Android::android::view::ViewDLRDragShadowBuilder* arg1, ::g::Android::java::lang::Object* arg2, int* arg3, bool* __retval);
void View__startDrag_IMPL_23241_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_, int* arg5_, bool* __retval);
void View__get_STATUS_BAR_HIDDEN_fn(int* __retval);
void View__get_STATUS_BAR_VISIBLE_fn(int* __retval);
void View__get_SYSTEM_UI_FLAG_FULLSCREEN_fn(int* __retval);
void View__get_SYSTEM_UI_FLAG_HIDE_NAVIGATION_fn(int* __retval);
void View__get_SYSTEM_UI_FLAG_IMMERSIVE_fn(int* __retval);
void View__get_SYSTEM_UI_FLAG_IMMERSIVE_STICKY_fn(int* __retval);
void View__get_SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN_fn(int* __retval);
void View__get_SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION_fn(int* __retval);
void View__get_SYSTEM_UI_FLAG_LAYOUT_STABLE_fn(int* __retval);
void View__get_SYSTEM_UI_FLAG_LOW_PROFILE_fn(int* __retval);
void View__get_SYSTEM_UI_FLAG_VISIBLE_fn(int* __retval);
void View__get_SYSTEM_UI_LAYOUT_FLAGS_fn(int* __retval);
void View__get_TEXT_ALIGNMENT_CENTER_fn(int* __retval);
void View__get_TEXT_ALIGNMENT_GRAVITY_fn(int* __retval);
void View__get_TEXT_ALIGNMENT_INHERIT_fn(int* __retval);
void View__get_TEXT_ALIGNMENT_TEXT_END_fn(int* __retval);
void View__get_TEXT_ALIGNMENT_TEXT_START_fn(int* __retval);
void View__get_TEXT_ALIGNMENT_VIEW_END_fn(int* __retval);
void View__get_TEXT_ALIGNMENT_VIEW_START_fn(int* __retval);
void View__get_TEXT_DIRECTION_ANY_RTL_fn(int* __retval);
void View__get_TEXT_DIRECTION_FIRST_STRONG_fn(int* __retval);
void View__get_TEXT_DIRECTION_INHERIT_fn(int* __retval);
void View__get_TEXT_DIRECTION_LOCALE_fn(int* __retval);
void View__get_TEXT_DIRECTION_LTR_fn(int* __retval);
void View__get_TEXT_DIRECTION_RTL_fn(int* __retval);
void View__toString_fn(View* __this, ::g::Android::java::lang::String** __retval);
void View__toString_IMPL_22818_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void View__get_TRANSLATION_X_fn(::g::Android::android::util::Property** __retval);
void View__get_TRANSLATION_Y_fn(::g::Android::android::util::Property** __retval);
void View__unscheduleDrawable_fn(View* __this, ::g::Android::android::graphics::drawable::Drawable* arg0);
void View__unscheduleDrawable1_fn(View* __this, ::g::Android::android::graphics::drawable::Drawable* arg0, uObject* arg1);
void View__unscheduleDrawable_IMPL_23166_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_);
void View__unscheduleDrawable_IMPL_23167_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void View__verifyDrawable_IMPL_23168_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void View__get_VISIBLE_fn(int* __retval);
void View__willNotCacheDrawing_fn(View* __this, bool* __retval);
void View__willNotCacheDrawing_IMPL_22910_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__willNotDraw_fn(View* __this, bool* __retval);
void View__willNotDraw_IMPL_22908_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void View__get_X_fn(::g::Android::android::util::Property** __retval);
void View__get_Y_fn(::g::Android::android::util::Property** __retval);

struct View : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jfieldID ACCESSIBILITY_LIVE_REGION_ASSERTIVE_22779_ID_;
    static jfieldID& ACCESSIBILITY_LIVE_REGION_ASSERTIVE_22779_ID() { return ACCESSIBILITY_LIVE_REGION_ASSERTIVE_22779_ID_; }
    static jfieldID ACCESSIBILITY_LIVE_REGION_NONE_22777_ID_;
    static jfieldID& ACCESSIBILITY_LIVE_REGION_NONE_22777_ID() { return ACCESSIBILITY_LIVE_REGION_NONE_22777_ID_; }
    static jfieldID ACCESSIBILITY_LIVE_REGION_POLITE_22778_ID_;
    static jfieldID& ACCESSIBILITY_LIVE_REGION_POLITE_22778_ID() { return ACCESSIBILITY_LIVE_REGION_POLITE_22778_ID_; }
    static jmethodID addChildrenForAccessibility_22943_ID_;
    static jmethodID& addChildrenForAccessibility_22943_ID() { return addChildrenForAccessibility_22943_ID_; }
    static jmethodID addFocusables_22929_ID_;
    static jmethodID& addFocusables_22929_ID() { return addFocusables_22929_ID_; }
    static jmethodID addFocusables_22930_ID_;
    static jmethodID& addFocusables_22930_ID() { return addFocusables_22930_ID_; }
    static jmethodID addOnAttachStateChangeListener_22831_ID_;
    static jmethodID& addOnAttachStateChangeListener_22831_ID() { return addOnAttachStateChangeListener_22831_ID_; }
    static jmethodID addOnLayoutChangeListener_22829_ID_;
    static jmethodID& addOnLayoutChangeListener_22829_ID() { return addOnLayoutChangeListener_22829_ID_; }
    static jmethodID addTouchables_22933_ID_;
    static jmethodID& addTouchables_22933_ID() { return addTouchables_22933_ID_; }
    static jfieldID ALPHA_22805_ID_;
    static jfieldID& ALPHA_22805_ID() { return ALPHA_22805_ID_; }
    static jmethodID animate_23258_ID_;
    static jmethodID& animate_23258_ID() { return animate_23258_ID_; }
    static jmethodID announceForAccessibility_22855_ID_;
    static jmethodID& announceForAccessibility_22855_ID() { return announceForAccessibility_22855_ID_; }
    static jmethodID awakenScrollBars_23060_ID_;
    static jmethodID& awakenScrollBars_23060_ID() { return awakenScrollBars_23060_ID_; }
    static jmethodID awakenScrollBars_23061_ID_;
    static jmethodID& awakenScrollBars_23061_ID() { return awakenScrollBars_23061_ID_; }
    static jmethodID awakenScrollBars_23062_ID_;
    static jmethodID& awakenScrollBars_23062_ID() { return awakenScrollBars_23062_ID_; }
    static jmethodID bringToFront_22995_ID_;
    static jmethodID& bringToFront_22995_ID() { return bringToFront_22995_ID_; }
    static jmethodID buildDrawingCache_23145_ID_;
    static jmethodID& buildDrawingCache_23145_ID() { return buildDrawingCache_23145_ID_; }
    static jmethodID buildDrawingCache_23146_ID_;
    static jmethodID& buildDrawingCache_23146_ID() { return buildDrawingCache_23146_ID_; }
    static jmethodID buildLayer_23137_ID_;
    static jmethodID& buildLayer_23137_ID() { return buildLayer_23137_ID_; }
    static jmethodID callOnClick_22839_ID_;
    static jmethodID& callOnClick_22839_ID() { return callOnClick_22839_ID_; }
    static jmethodID cancelLongPress_22992_ID_;
    static jmethodID& cancelLongPress_22992_ID() { return cancelLongPress_22992_ID_; }
    static jmethodID cancelPendingInputEvents_23123_ID_;
    static jmethodID& cancelPendingInputEvents_23123_ID() { return cancelPendingInputEvents_23123_ID_; }
    static jmethodID canResolveLayoutDirection_23115_ID_;
    static jmethodID& canResolveLayoutDirection_23115_ID() { return canResolveLayoutDirection_23115_ID_; }
    static jmethodID canResolveTextAlignment_23255_ID_;
    static jmethodID& canResolveTextAlignment_23255_ID() { return canResolveTextAlignment_23255_ID_; }
    static jmethodID canResolveTextDirection_23251_ID_;
    static jmethodID& canResolveTextDirection_23251_ID() { return canResolveTextDirection_23251_ID_; }
    static jmethodID canScrollHorizontally_23108_ID_;
    static jmethodID& canScrollHorizontally_23108_ID() { return canScrollHorizontally_23108_ID_; }
    static jmethodID canScrollVertically_23109_ID_;
    static jmethodID& canScrollVertically_23109_ID() { return canScrollVertically_23109_ID_; }
    static jmethodID checkInputConnectionProxy_22981_ID_;
    static jmethodID& checkInputConnectionProxy_22981_ID() { return checkInputConnectionProxy_22981_ID_; }
    static jmethodID clearAnimation_23226_ID_;
    static jmethodID& clearAnimation_23226_ID() { return clearAnimation_23226_ID_; }
    static jmethodID clearFocus_22850_ID_;
    static jmethodID& clearFocus_22850_ID() { return clearFocus_22850_ID_; }
    static jmethodID combineMeasuredStates_23214_ID_;
    static jmethodID& combineMeasuredStates_23214_ID() { return combineMeasuredStates_23214_ID_; }
    static jmethodID computeHorizontalScrollExtent_23104_ID_;
    static jmethodID& computeHorizontalScrollExtent_23104_ID() { return computeHorizontalScrollExtent_23104_ID_; }
    static jmethodID computeHorizontalScrollOffset_23103_ID_;
    static jmethodID& computeHorizontalScrollOffset_23103_ID() { return computeHorizontalScrollOffset_23103_ID_; }
    static jmethodID computeHorizontalScrollRange_23102_ID_;
    static jmethodID& computeHorizontalScrollRange_23102_ID() { return computeHorizontalScrollRange_23102_ID_; }
    static jmethodID computeScroll_23079_ID_;
    static jmethodID& computeScroll_23079_ID() { return computeScroll_23079_ID_; }
    static jmethodID computeVerticalScrollExtent_23107_ID_;
    static jmethodID& computeVerticalScrollExtent_23107_ID() { return computeVerticalScrollExtent_23107_ID_; }
    static jmethodID computeVerticalScrollOffset_23106_ID_;
    static jmethodID& computeVerticalScrollOffset_23106_ID() { return computeVerticalScrollOffset_23106_ID_; }
    static jmethodID computeVerticalScrollRange_23105_ID_;
    static jmethodID& computeVerticalScrollRange_23105_ID() { return computeVerticalScrollRange_23105_ID_; }
    static jmethodID createAccessibilityNodeInfo_22860_ID_;
    static jmethodID& createAccessibilityNodeInfo_22860_ID() { return createAccessibilityNodeInfo_22860_ID_; }
    static jmethodID createContextMenu_22982_ID_;
    static jmethodID& createContextMenu_22982_ID() { return createContextMenu_22982_ID_; }
    static jmethodID destroyDrawingCache_23142_ID_;
    static jmethodID& destroyDrawingCache_23142_ID() { return destroyDrawingCache_23142_ID_; }
    static jmethodID dispatchConfigurationChanged_22969_ID_;
    static jmethodID& dispatchConfigurationChanged_22969_ID() { return dispatchConfigurationChanged_22969_ID_; }
    static jmethodID dispatchDisplayHint_22963_ID_;
    static jmethodID& dispatchDisplayHint_22963_ID() { return dispatchDisplayHint_22963_ID_; }
    static jmethodID dispatchDragEvent_23243_ID_;
    static jmethodID& dispatchDragEvent_23243_ID() { return dispatchDragEvent_23243_ID_; }
    static jmethodID dispatchDraw_22998_ID_;
    static jmethodID& dispatchDraw_22998_ID() { return dispatchDraw_22998_ID_; }
    static jmethodID dispatchGenericFocusedEvent_22957_ID_;
    static jmethodID& dispatchGenericFocusedEvent_22957_ID() { return dispatchGenericFocusedEvent_22957_ID_; }
    static jmethodID dispatchGenericMotionEvent_22954_ID_;
    static jmethodID& dispatchGenericMotionEvent_22954_ID() { return dispatchGenericMotionEvent_22954_ID_; }
    static jmethodID dispatchGenericPointerEvent_22956_ID_;
    static jmethodID& dispatchGenericPointerEvent_22956_ID() { return dispatchGenericPointerEvent_22956_ID_; }
    static jmethodID dispatchHoverEvent_22955_ID_;
    static jmethodID& dispatchHoverEvent_22955_ID() { return dispatchHoverEvent_22955_ID_; }
    static jmethodID dispatchKeyEvent_22949_ID_;
    static jmethodID& dispatchKeyEvent_22949_ID() { return dispatchKeyEvent_22949_ID_; }
    static jmethodID dispatchKeyEventPreIme_22948_ID_;
    static jmethodID& dispatchKeyEventPreIme_22948_ID() { return dispatchKeyEventPreIme_22948_ID_; }
    static jmethodID dispatchKeyShortcutEvent_22950_ID_;
    static jmethodID& dispatchKeyShortcutEvent_22950_ID() { return dispatchKeyShortcutEvent_22950_ID_; }
    static jmethodID dispatchPopulateAccessibilityEvent_22857_ID_;
    static jmethodID& dispatchPopulateAccessibilityEvent_22857_ID() { return dispatchPopulateAccessibilityEvent_22857_ID_; }
    static jmethodID dispatchRestoreInstanceState_23129_ID_;
    static jmethodID& dispatchRestoreInstanceState_23129_ID() { return dispatchRestoreInstanceState_23129_ID_; }
    static jmethodID dispatchSaveInstanceState_23126_ID_;
    static jmethodID& dispatchSaveInstanceState_23126_ID() { return dispatchSaveInstanceState_23126_ID_; }
    static jmethodID dispatchSetActivated_23193_ID_;
    static jmethodID& dispatchSetActivated_23193_ID() { return dispatchSetActivated_23193_ID_; }
    static jmethodID dispatchSetPressed_22916_ID_;
    static jmethodID& dispatchSetPressed_22916_ID() { return dispatchSetPressed_22916_ID_; }
    static jmethodID dispatchSetSelected_23190_ID_;
    static jmethodID& dispatchSetSelected_23190_ID() { return dispatchSetSelected_23190_ID_; }
    static jmethodID dispatchSystemUiVisibilityChanged_23240_ID_;
    static jmethodID& dispatchSystemUiVisibilityChanged_23240_ID() { return dispatchSystemUiVisibilityChanged_23240_ID_; }
    static jmethodID dispatchTouchEvent_22951_ID_;
    static jmethodID& dispatchTouchEvent_22951_ID() { return dispatchTouchEvent_22951_ID_; }
    static jmethodID dispatchTrackballEvent_22953_ID_;
    static jmethodID& dispatchTrackballEvent_22953_ID() { return dispatchTrackballEvent_22953_ID_; }
    static jmethodID dispatchUnhandledMove_22927_ID_;
    static jmethodID& dispatchUnhandledMove_22927_ID() { return dispatchUnhandledMove_22927_ID_; }
    static jmethodID dispatchVisibilityChanged_22961_ID_;
    static jmethodID& dispatchVisibilityChanged_22961_ID() { return dispatchVisibilityChanged_22961_ID_; }
    static jmethodID dispatchWindowFocusChanged_22958_ID_;
    static jmethodID& dispatchWindowFocusChanged_22958_ID() { return dispatchWindowFocusChanged_22958_ID_; }
    static jmethodID dispatchWindowSystemUiVisiblityChanged_23238_ID_;
    static jmethodID& dispatchWindowSystemUiVisiblityChanged_23238_ID() { return dispatchWindowSystemUiVisiblityChanged_23238_ID_; }
    static jmethodID dispatchWindowVisibilityChanged_22965_ID_;
    static jmethodID& dispatchWindowVisibilityChanged_22965_ID() { return dispatchWindowVisibilityChanged_22965_ID_; }
    static jmethodID drawableStateChanged_23169_ID_;
    static jmethodID& drawableStateChanged_23169_ID() { return drawableStateChanged_23169_ID_; }
    static jfieldID DRAWING_CACHE_QUALITY_AUTO_22736_ID_;
    static jfieldID& DRAWING_CACHE_QUALITY_AUTO_22736_ID() { return DRAWING_CACHE_QUALITY_AUTO_22736_ID_; }
    static jfieldID DRAWING_CACHE_QUALITY_HIGH_22735_ID_;
    static jfieldID& DRAWING_CACHE_QUALITY_HIGH_22735_ID() { return DRAWING_CACHE_QUALITY_HIGH_22735_ID_; }
    static jfieldID DRAWING_CACHE_QUALITY_LOW_22734_ID_;
    static jfieldID& DRAWING_CACHE_QUALITY_LOW_22734_ID() { return DRAWING_CACHE_QUALITY_LOW_22734_ID_; }
    static jfieldID FIND_VIEWS_WITH_CONTENT_DESCRIPTION_22796_ID_;
    static jfieldID& FIND_VIEWS_WITH_CONTENT_DESCRIPTION_22796_ID() { return FIND_VIEWS_WITH_CONTENT_DESCRIPTION_22796_ID_; }
    static jfieldID FIND_VIEWS_WITH_TEXT_22795_ID_;
    static jfieldID& FIND_VIEWS_WITH_TEXT_22795_ID() { return FIND_VIEWS_WITH_TEXT_22795_ID_; }
    static jmethodID findFocus_22869_ID_;
    static jmethodID& findFocus_22869_ID() { return findFocus_22869_ID_; }
    static jmethodID findViewById_23199_ID_;
    static jmethodID& findViewById_23199_ID() { return findViewById_23199_ID_; }
    static jmethodID findViewsWithText_22931_ID_;
    static jmethodID& findViewsWithText_22931_ID() { return findViewsWithText_22931_ID_; }
    static jmethodID findViewWithTag_23200_ID_;
    static jmethodID& findViewWithTag_23200_ID() { return findViewWithTag_23200_ID_; }
    static jmethodID fitSystemWindows_22887_ID_;
    static jmethodID& fitSystemWindows_22887_ID() { return fitSystemWindows_22887_ID_; }
    static jfieldID FOCUS_BACKWARD_22746_ID_;
    static jfieldID& FOCUS_BACKWARD_22746_ID() { return FOCUS_BACKWARD_22746_ID_; }
    static jfieldID FOCUS_DOWN_22751_ID_;
    static jfieldID& FOCUS_DOWN_22751_ID() { return FOCUS_DOWN_22751_ID_; }
    static jfieldID FOCUS_FORWARD_22747_ID_;
    static jfieldID& FOCUS_FORWARD_22747_ID() { return FOCUS_FORWARD_22747_ID_; }
    static jfieldID FOCUS_LEFT_22748_ID_;
    static jfieldID& FOCUS_LEFT_22748_ID() { return FOCUS_LEFT_22748_ID_; }
    static jfieldID FOCUS_RIGHT_22750_ID_;
    static jfieldID& FOCUS_RIGHT_22750_ID() { return FOCUS_RIGHT_22750_ID_; }
    static jfieldID FOCUS_UP_22749_ID_;
    static jfieldID& FOCUS_UP_22749_ID() { return FOCUS_UP_22749_ID_; }
    static jfieldID FOCUSABLES_ALL_22744_ID_;
    static jfieldID& FOCUSABLES_ALL_22744_ID() { return FOCUSABLES_ALL_22744_ID_; }
    static jfieldID FOCUSABLES_TOUCH_MODE_22745_ID_;
    static jfieldID& FOCUSABLES_TOUCH_MODE_22745_ID() { return FOCUSABLES_TOUCH_MODE_22745_ID_; }
    static jmethodID focusSearch_22926_ID_;
    static jmethodID& focusSearch_22926_ID() { return focusSearch_22926_ID_; }
    static jmethodID forceLayout_23210_ID_;
    static jmethodID& forceLayout_23210_ID() { return forceLayout_23210_ID_; }
    static jmethodID generateViewId_23257_ID_;
    static jmethodID& generateViewId_23257_ID() { return generateViewId_23257_ID_; }
    static jmethodID getAccessibilityLiveRegion_22940_ID_;
    static jmethodID& getAccessibilityLiveRegion_22940_ID() { return getAccessibilityLiveRegion_22940_ID_; }
    static jmethodID getAccessibilityNodeProvider_22863_ID_;
    static jmethodID& getAccessibilityNodeProvider_22863_ID() { return getAccessibilityNodeProvider_22863_ID_; }
    static jmethodID getAlpha_23029_ID_;
    static jmethodID& getAlpha_23029_ID() { return getAlpha_23029_ID_; }
    static jmethodID getAnimation_23224_ID_;
    static jmethodID& getAnimation_23224_ID() { return getAnimation_23224_ID_; }
    static jmethodID getApplicationWindowToken_23121_ID_;
    static jmethodID& getApplicationWindowToken_23121_ID() { return getApplicationWindowToken_23121_ID_; }
    static jmethodID getBackground_23179_ID_;
    static jmethodID& getBackground_23179_ID() { return getBackground_23179_ID_; }
    static jmethodID getBaseline_23207_ID_;
    static jmethodID& getBaseline_23207_ID() { return getBaseline_23207_ID_; }
    static jmethodID getBottom_23034_ID_;
    static jmethodID& getBottom_23034_ID() { return getBottom_23034_ID_; }
    static jmethodID getBottomFadingEdgeStrength_23085_ID_;
    static jmethodID& getBottomFadingEdgeStrength_23085_ID() { return getBottomFadingEdgeStrength_23085_ID_; }
    static jmethodID getBottomPaddingOffset_23152_ID_;
    static jmethodID& getBottomPaddingOffset_23152_ID() { return getBottomPaddingOffset_23152_ID_; }
    static jmethodID getCameraDistance_23013_ID_;
    static jmethodID& getCameraDistance_23013_ID() { return getCameraDistance_23013_ID_; }
    static jmethodID getClipBounds_23155_ID_;
    static jmethodID& getClipBounds_23155_ID() { return getClipBounds_23155_ID_; }
    static jmethodID getContentDescription_22864_ID_;
    static jmethodID& getContentDescription_22864_ID() { return getContentDescription_22864_ID_; }
    static jmethodID getContext_22972_ID_;
    static jmethodID& getContext_22972_ID() { return getContext_22972_ID_; }
    static jmethodID getContextMenuInfo_22983_ID_;
    static jmethodID& getContextMenuInfo_22983_ID() { return getContextMenuInfo_22983_ID_; }
    static jmethodID getDefaultSize_23217_ID_;
    static jmethodID& getDefaultSize_23217_ID() { return getDefaultSize_23217_ID_; }
    static jmethodID getDisplay_23122_ID_;
    static jmethodID& getDisplay_23122_ID() { return getDisplay_23122_ID_; }
    static jmethodID getDrawableState_23171_ID_;
    static jmethodID& getDrawableState_23171_ID() { return getDrawableState_23171_ID_; }
    static jmethodID getDrawingCache_23140_ID_;
    static jmethodID& getDrawingCache_23140_ID() { return getDrawingCache_23140_ID_; }
    static jmethodID getDrawingCache_23141_ID_;
    static jmethodID& getDrawingCache_23141_ID() { return getDrawingCache_23141_ID_; }
    static jmethodID getDrawingCacheBackgroundColor_23144_ID_;
    static jmethodID& getDrawingCacheBackgroundColor_23144_ID() { return getDrawingCacheBackgroundColor_23144_ID_; }
    static jmethodID getDrawingCacheQuality_22872_ID_;
    static jmethodID& getDrawingCacheQuality_22872_ID() { return getDrawingCacheQuality_22872_ID_; }
    static jmethodID getDrawingRect_23006_ID_;
    static jmethodID& getDrawingRect_23006_ID() { return getDrawingRect_23006_ID_; }
    static jmethodID getDrawingTime_23131_ID_;
    static jmethodID& getDrawingTime_23131_ID() { return getDrawingTime_23131_ID_; }
    static jmethodID getFilterTouchesWhenObscured_22920_ID_;
    static jmethodID& getFilterTouchesWhenObscured_22920_ID() { return getFilterTouchesWhenObscured_22920_ID_; }
    static jmethodID getFitsSystemWindows_22889_ID_;
    static jmethodID& getFitsSystemWindows_22889_ID() { return getFitsSystemWindows_22889_ID_; }
    static jmethodID getFocusables_22928_ID_;
    static jmethodID& getFocusables_22928_ID() { return getFocusables_22928_ID_; }
    static jmethodID getFocusedRect_23050_ID_;
    static jmethodID& getFocusedRect_23050_ID() { return getFocusedRect_23050_ID_; }
    static jmethodID getGlobalVisibleRect_23051_ID_;
    static jmethodID& getGlobalVisibleRect_23051_ID() { return getGlobalVisibleRect_23051_ID_; }
    static jmethodID getGlobalVisibleRect_23052_ID_;
    static jmethodID& getGlobalVisibleRect_23052_ID() { return getGlobalVisibleRect_23052_ID_; }
    static jmethodID getHandler_23067_ID_;
    static jmethodID& getHandler_23067_ID() { return getHandler_23067_ID_; }
    static jmethodID getHeight_23005_ID_;
    static jmethodID& getHeight_23005_ID() { return getHeight_23005_ID_; }
    static jmethodID getHitRect_23049_ID_;
    static jmethodID& getHitRect_23049_ID() { return getHitRect_23049_ID_; }
    static jmethodID getHorizontalFadingEdgeLength_22822_ID_;
    static jmethodID& getHorizontalFadingEdgeLength_22822_ID() { return getHorizontalFadingEdgeLength_22822_ID_; }
    static jmethodID getHorizontalScrollbarHeight_22824_ID_;
    static jmethodID& getHorizontalScrollbarHeight_22824_ID() { return getHorizontalScrollbarHeight_22824_ID_; }
    static jmethodID getId_23202_ID_;
    static jmethodID& getId_23202_ID() { return getId_23202_ID_; }
    static jmethodID getImportantForAccessibility_22938_ID_;
    static jmethodID& getImportantForAccessibility_22938_ID() { return getImportantForAccessibility_22938_ID_; }
    static jmethodID getKeepScreenOn_22874_ID_;
    static jmethodID& getKeepScreenOn_22874_ID() { return getKeepScreenOn_22874_ID_; }
    static jmethodID getKeyDispatcherState_22947_ID_;
    static jmethodID& getKeyDispatcherState_22947_ID() { return getKeyDispatcherState_22947_ID_; }
    static jmethodID getLabelFor_22866_ID_;
    static jmethodID& getLabelFor_22866_ID() { return getLabelFor_22866_ID_; }
    static jmethodID getLayerType_23136_ID_;
    static jmethodID& getLayerType_23136_ID() { return getLayerType_23136_ID_; }
    static jmethodID getLayoutDirection_22902_ID_;
    static jmethodID& getLayoutDirection_22902_ID() { return getLayoutDirection_22902_ID_; }
    static jmethodID getLayoutParams_23056_ID_;
    static jmethodID& getLayoutParams_23056_ID() { return getLayoutParams_23056_ID_; }
    static jmethodID getLeft_23037_ID_;
    static jmethodID& getLeft_23037_ID() { return getLeft_23037_ID_; }
    static jmethodID getLeftFadingEdgeStrength_23086_ID_;
    static jmethodID& getLeftFadingEdgeStrength_23086_ID() { return getLeftFadingEdgeStrength_23086_ID_; }
    static jmethodID getLeftPaddingOffset_23149_ID_;
    static jmethodID& getLeftPaddingOffset_23149_ID() { return getLeftPaddingOffset_23149_ID_; }
    static jmethodID getLocalVisibleRect_23053_ID_;
    static jmethodID& getLocalVisibleRect_23053_ID() { return getLocalVisibleRect_23053_ID_; }
    static jmethodID getLocationInWindow_23198_ID_;
    static jmethodID& getLocationInWindow_23198_ID() { return getLocationInWindow_23198_ID_; }
    static jmethodID getLocationOnScreen_23197_ID_;
    static jmethodID& getLocationOnScreen_23197_ID() { return getLocationOnScreen_23197_ID_; }
    static jmethodID getMatrix_23012_ID_;
    static jmethodID& getMatrix_23012_ID() { return getMatrix_23012_ID_; }
    static jmethodID getMeasuredHeight_23009_ID_;
    static jmethodID& getMeasuredHeight_23009_ID() { return getMeasuredHeight_23009_ID_; }
    static jmethodID getMeasuredHeightAndState_23010_ID_;
    static jmethodID& getMeasuredHeightAndState_23010_ID() { return getMeasuredHeightAndState_23010_ID_; }
    static jmethodID getMeasuredState_23011_ID_;
    static jmethodID& getMeasuredState_23011_ID() { return getMeasuredState_23011_ID_; }
    static jmethodID getMeasuredWidth_23007_ID_;
    static jmethodID& getMeasuredWidth_23007_ID() { return getMeasuredWidth_23007_ID_; }
    static jmethodID getMeasuredWidthAndState_23008_ID_;
    static jmethodID& getMeasuredWidthAndState_23008_ID() { return getMeasuredWidthAndState_23008_ID_; }
    static jmethodID getMinimumHeight_23220_ID_;
    static jmethodID& getMinimumHeight_23220_ID() { return getMinimumHeight_23220_ID_; }
    static jmethodID getMinimumWidth_23222_ID_;
    static jmethodID& getMinimumWidth_23222_ID() { return getMinimumWidth_23222_ID_; }
    static jmethodID getNextFocusDownId_22882_ID_;
    static jmethodID& getNextFocusDownId_22882_ID() { return getNextFocusDownId_22882_ID_; }
    static jmethodID getNextFocusForwardId_22884_ID_;
    static jmethodID& getNextFocusForwardId_22884_ID() { return getNextFocusForwardId_22884_ID_; }
    static jmethodID getNextFocusLeftId_22876_ID_;
    static jmethodID& getNextFocusLeftId_22876_ID() { return getNextFocusLeftId_22876_ID_; }
    static jmethodID getNextFocusRightId_22878_ID_;
    static jmethodID& getNextFocusRightId_22878_ID() { return getNextFocusRightId_22878_ID_; }
    static jmethodID getNextFocusUpId_22880_ID_;
    static jmethodID& getNextFocusUpId_22880_ID() { return getNextFocusUpId_22880_ID_; }
    static jmethodID getOnFocusChangeListener_22833_ID_;
    static jmethodID& getOnFocusChangeListener_22833_ID() { return getOnFocusChangeListener_22833_ID_; }
    static jmethodID getOverlay_23157_ID_;
    static jmethodID& getOverlay_23157_ID() { return getOverlay_23157_ID_; }
    static jmethodID getOverScrollMode_23247_ID_;
    static jmethodID& getOverScrollMode_23247_ID() { return getOverScrollMode_23247_ID_; }
    static jmethodID getPaddingBottom_23183_ID_;
    static jmethodID& getPaddingBottom_23183_ID() { return getPaddingBottom_23183_ID_; }
    static jmethodID getPaddingEnd_23187_ID_;
    static jmethodID& getPaddingEnd_23187_ID() { return getPaddingEnd_23187_ID_; }
    static jmethodID getPaddingLeft_23184_ID_;
    static jmethodID& getPaddingLeft_23184_ID() { return getPaddingLeft_23184_ID_; }
    static jmethodID getPaddingRight_23186_ID_;
    static jmethodID& getPaddingRight_23186_ID() { return getPaddingRight_23186_ID_; }
    static jmethodID getPaddingStart_23185_ID_;
    static jmethodID& getPaddingStart_23185_ID() { return getPaddingStart_23185_ID_; }
    static jmethodID getPaddingTop_23182_ID_;
    static jmethodID& getPaddingTop_23182_ID() { return getPaddingTop_23182_ID_; }
    static jmethodID getParent_22999_ID_;
    static jmethodID& getParent_22999_ID() { return getParent_22999_ID_; }
    static jmethodID getParentForAccessibility_22942_ID_;
    static jmethodID& getParentForAccessibility_22942_ID() { return getParentForAccessibility_22942_ID_; }
    static jmethodID getPivotX_23025_ID_;
    static jmethodID& getPivotX_23025_ID() { return getPivotX_23025_ID_; }
    static jmethodID getPivotY_23027_ID_;
    static jmethodID& getPivotY_23027_ID() { return getPivotY_23027_ID_; }
    static jmethodID getResources_23163_ID_;
    static jmethodID& getResources_23163_ID() { return getResources_23163_ID_; }
    static jmethodID getRight_23039_ID_;
    static jmethodID& getRight_23039_ID() { return getRight_23039_ID_; }
    static jmethodID getRightFadingEdgeStrength_23087_ID_;
    static jmethodID& getRightFadingEdgeStrength_23087_ID() { return getRightFadingEdgeStrength_23087_ID_; }
    static jmethodID getRightPaddingOffset_23150_ID_;
    static jmethodID& getRightPaddingOffset_23150_ID() { return getRightPaddingOffset_23150_ID_; }
    static jmethodID getRootView_23196_ID_;
    static jmethodID& getRootView_23196_ID() { return getRootView_23196_ID_; }
    static jmethodID getRotation_23015_ID_;
    static jmethodID& getRotation_23015_ID() { return getRotation_23015_ID_; }
    static jmethodID getRotationX_23019_ID_;
    static jmethodID& getRotationX_23019_ID() { return getRotationX_23019_ID_; }
    static jmethodID getRotationY_23017_ID_;
    static jmethodID& getRotationY_23017_ID() { return getRotationY_23017_ID_; }
    static jmethodID getScaleX_23021_ID_;
    static jmethodID& getScaleX_23021_ID() { return getScaleX_23021_ID_; }
    static jmethodID getScaleY_23023_ID_;
    static jmethodID& getScaleY_23023_ID() { return getScaleY_23023_ID_; }
    static jmethodID getScrollBarDefaultDelayBeforeFade_23094_ID_;
    static jmethodID& getScrollBarDefaultDelayBeforeFade_23094_ID() { return getScrollBarDefaultDelayBeforeFade_23094_ID_; }
    static jmethodID getScrollBarFadeDuration_23096_ID_;
    static jmethodID& getScrollBarFadeDuration_23096_ID() { return getScrollBarFadeDuration_23096_ID_; }
    static jmethodID getScrollBarSize_23098_ID_;
    static jmethodID& getScrollBarSize_23098_ID() { return getScrollBarSize_23098_ID_; }
    static jmethodID getScrollBarStyle_23101_ID_;
    static jmethodID& getScrollBarStyle_23101_ID() { return getScrollBarStyle_23101_ID_; }
    static jmethodID getScrollX_23002_ID_;
    static jmethodID& getScrollX_23002_ID() { return getScrollX_23002_ID_; }
    static jmethodID getScrollY_23003_ID_;
    static jmethodID& getScrollY_23003_ID() { return getScrollY_23003_ID_; }
    static jmethodID getSolidColor_23158_ID_;
    static jmethodID& getSolidColor_23158_ID() { return getSolidColor_23158_ID_; }
    static jmethodID getSuggestedMinimumHeight_23218_ID_;
    static jmethodID& getSuggestedMinimumHeight_23218_ID() { return getSuggestedMinimumHeight_23218_ID_; }
    static jmethodID getSuggestedMinimumWidth_23219_ID_;
    static jmethodID& getSuggestedMinimumWidth_23219_ID() { return getSuggestedMinimumWidth_23219_ID_; }
    static jmethodID getSystemUiVisibility_23235_ID_;
    static jmethodID& getSystemUiVisibility_23235_ID() { return getSystemUiVisibility_23235_ID_; }
    static jmethodID getTag_23203_ID_;
    static jmethodID& getTag_23203_ID() { return getTag_23203_ID_; }
    static jmethodID getTag_23205_ID_;
    static jmethodID& getTag_23205_ID() { return getTag_23205_ID_; }
    static jmethodID getTextAlignment_23254_ID_;
    static jmethodID& getTextAlignment_23254_ID() { return getTextAlignment_23254_ID_; }
    static jmethodID getTextDirection_23250_ID_;
    static jmethodID& getTextDirection_23250_ID() { return getTextDirection_23250_ID_; }
    static jmethodID getTop_23032_ID_;
    static jmethodID& getTop_23032_ID() { return getTop_23032_ID_; }
    static jmethodID getTopFadingEdgeStrength_23084_ID_;
    static jmethodID& getTopFadingEdgeStrength_23084_ID() { return getTopFadingEdgeStrength_23084_ID_; }
    static jmethodID getTopPaddingOffset_23151_ID_;
    static jmethodID& getTopPaddingOffset_23151_ID() { return getTopPaddingOffset_23151_ID_; }
    static jmethodID getTouchables_22932_ID_;
    static jmethodID& getTouchables_22932_ID() { return getTouchables_22932_ID_; }
    static jmethodID getTouchDelegate_22994_ID_;
    static jmethodID& getTouchDelegate_22994_ID() { return getTouchDelegate_22994_ID_; }
    static jmethodID getTranslationX_23045_ID_;
    static jmethodID& getTranslationX_23045_ID() { return getTranslationX_23045_ID_; }
    static jmethodID getTranslationY_23047_ID_;
    static jmethodID& getTranslationY_23047_ID() { return getTranslationY_23047_ID_; }
    static jmethodID getVerticalFadingEdgeLength_22820_ID_;
    static jmethodID& getVerticalFadingEdgeLength_22820_ID() { return getVerticalFadingEdgeLength_22820_ID_; }
    static jmethodID getVerticalScrollbarPosition_22827_ID_;
    static jmethodID& getVerticalScrollbarPosition_22827_ID() { return getVerticalScrollbarPosition_22827_ID_; }
    static jmethodID getVerticalScrollbarWidth_22823_ID_;
    static jmethodID& getVerticalScrollbarWidth_22823_ID() { return getVerticalScrollbarWidth_22823_ID_; }
    static jmethodID getViewTreeObserver_23195_ID_;
    static jmethodID& getViewTreeObserver_23195_ID() { return getViewTreeObserver_23195_ID_; }
    static jmethodID getVisibility_22891_ID_;
    static jmethodID& getVisibility_22891_ID() { return getVisibility_22891_ID_; }
    static jmethodID getWidth_23004_ID_;
    static jmethodID& getWidth_23004_ID() { return getWidth_23004_ID_; }
    static jmethodID getWindowAttachCount_23118_ID_;
    static jmethodID& getWindowAttachCount_23118_ID() { return getWindowAttachCount_23118_ID_; }
    static jmethodID getWindowId_23120_ID_;
    static jmethodID& getWindowId_23120_ID() { return getWindowId_23120_ID_; }
    static jmethodID getWindowSystemUiVisibility_23236_ID_;
    static jmethodID& getWindowSystemUiVisibility_23236_ID() { return getWindowSystemUiVisibility_23236_ID_; }
    static jmethodID getWindowToken_23119_ID_;
    static jmethodID& getWindowToken_23119_ID() { return getWindowToken_23119_ID_; }
    static jmethodID getWindowVisibility_22967_ID_;
    static jmethodID& getWindowVisibility_22967_ID() { return getWindowVisibility_22967_ID_; }
    static jmethodID getWindowVisibleDisplayFrame_22968_ID_;
    static jmethodID& getWindowVisibleDisplayFrame_22968_ID() { return getWindowVisibleDisplayFrame_22968_ID_; }
    static jmethodID getX_23041_ID_;
    static jmethodID& getX_23041_ID() { return getX_23041_ID_; }
    static jmethodID getY_23043_ID_;
    static jmethodID& getY_23043_ID() { return getY_23043_ID_; }
    static jfieldID GONE_22733_ID_;
    static jfieldID& GONE_22733_ID() { return GONE_22733_ID_; }
    static jfieldID HAPTIC_FEEDBACK_ENABLED_22743_ID_;
    static jfieldID& HAPTIC_FEEDBACK_ENABLED_22743_ID() { return HAPTIC_FEEDBACK_ENABLED_22743_ID_; }
    static jmethodID hasFocus_22851_ID_;
    static jmethodID& hasFocus_22851_ID() { return hasFocus_22851_ID_; }
    static jmethodID hasFocusable_22852_ID_;
    static jmethodID& hasFocusable_22852_ID() { return hasFocusable_22852_ID_; }
    static jmethodID hasOnClickListeners_22835_ID_;
    static jmethodID& hasOnClickListeners_22835_ID() { return hasOnClickListeners_22835_ID_; }
    static jmethodID hasOverlappingRendering_23030_ID_;
    static jmethodID& hasOverlappingRendering_23030_ID() { return hasOverlappingRendering_23030_ID_; }
    static jmethodID hasTransientState_22903_ID_;
    static jmethodID& hasTransientState_22903_ID() { return hasTransientState_22903_ID_; }
    static jmethodID hasWindowFocus_22960_ID_;
    static jmethodID& hasWindowFocus_22960_ID() { return hasWindowFocus_22960_ID_; }
    static jfieldID IMPORTANT_FOR_ACCESSIBILITY_AUTO_22773_ID_;
    static jfieldID& IMPORTANT_FOR_ACCESSIBILITY_AUTO_22773_ID() { return IMPORTANT_FOR_ACCESSIBILITY_AUTO_22773_ID_; }
    static jfieldID IMPORTANT_FOR_ACCESSIBILITY_NO_22775_ID_;
    static jfieldID& IMPORTANT_FOR_ACCESSIBILITY_NO_22775_ID() { return IMPORTANT_FOR_ACCESSIBILITY_NO_22775_ID_; }
    static jfieldID IMPORTANT_FOR_ACCESSIBILITY_NO_HIDE_DESCENDANTS_22776_ID_;
    static jfieldID& IMPORTANT_FOR_ACCESSIBILITY_NO_HIDE_DESCENDANTS_22776_ID() { return IMPORTANT_FOR_ACCESSIBILITY_NO_HIDE_DESCENDANTS_22776_ID_; }
    static jfieldID IMPORTANT_FOR_ACCESSIBILITY_YES_22774_ID_;
    static jfieldID& IMPORTANT_FOR_ACCESSIBILITY_YES_22774_ID() { return IMPORTANT_FOR_ACCESSIBILITY_YES_22774_ID_; }
    static jmethodID inflate_23244_ID_;
    static jmethodID& inflate_23244_ID() { return inflate_23244_ID_; }
    static jmethodID initializeFadingEdge_22819_ID_;
    static jmethodID& initializeFadingEdge_22819_ID() { return initializeFadingEdge_22819_ID_; }
    static jmethodID initializeScrollbars_22825_ID_;
    static jmethodID& initializeScrollbars_22825_ID() { return initializeScrollbars_22825_ID_; }
    static jmethodID invalidate_23063_ID_;
    static jmethodID& invalidate_23063_ID() { return invalidate_23063_ID_; }
    static jmethodID invalidate_23064_ID_;
    static jmethodID& invalidate_23064_ID() { return invalidate_23064_ID_; }
    static jmethodID invalidate_23065_ID_;
    static jmethodID& invalidate_23065_ID() { return invalidate_23065_ID_; }
    static jmethodID invalidateDrawable_23164_ID_;
    static jmethodID& invalidateDrawable_23164_ID() { return invalidateDrawable_23164_ID_; }
    static jfieldID INVISIBLE_22732_ID_;
    static jfieldID& INVISIBLE_22732_ID() { return INVISIBLE_22732_ID_; }
    static jmethodID isActivated_23194_ID_;
    static jmethodID& isActivated_23194_ID() { return isActivated_23194_ID_; }
    static jmethodID isAttachedToWindow_22905_ID_;
    static jmethodID& isAttachedToWindow_22905_ID() { return isAttachedToWindow_22905_ID_; }
    static jmethodID isClickable_22911_ID_;
    static jmethodID& isClickable_22911_ID() { return isClickable_22911_ID_; }
    static jmethodID isDirty_23035_ID_;
    static jmethodID& isDirty_23035_ID() { return isDirty_23035_ID_; }
    static jmethodID isDrawingCacheEnabled_23139_ID_;
    static jmethodID& isDrawingCacheEnabled_23139_ID() { return isDrawingCacheEnabled_23139_ID_; }
    static jmethodID isDuplicateParentStateEnabled_23133_ID_;
    static jmethodID& isDuplicateParentStateEnabled_23133_ID() { return isDuplicateParentStateEnabled_23133_ID_; }
    static jmethodID isEnabled_22893_ID_;
    static jmethodID& isEnabled_22893_ID() { return isEnabled_22893_ID_; }
    static jmethodID isFocusable_22924_ID_;
    static jmethodID& isFocusable_22924_ID() { return isFocusable_22924_ID_; }
    static jmethodID isFocusableInTouchMode_22925_ID_;
    static jmethodID& isFocusableInTouchMode_22925_ID() { return isFocusableInTouchMode_22925_ID_; }
    static jmethodID isFocused_22868_ID_;
    static jmethodID& isFocused_22868_ID() { return isFocused_22868_ID_; }
    static jmethodID isHapticFeedbackEnabled_22900_ID_;
    static jmethodID& isHapticFeedbackEnabled_22900_ID() { return isHapticFeedbackEnabled_22900_ID_; }
    static jmethodID isHardwareAccelerated_23153_ID_;
    static jmethodID& isHardwareAccelerated_23153_ID() { return isHardwareAccelerated_23153_ID_; }
    static jmethodID isHorizontalFadingEdgeEnabled_23080_ID_;
    static jmethodID& isHorizontalFadingEdgeEnabled_23080_ID() { return isHorizontalFadingEdgeEnabled_23080_ID_; }
    static jmethodID isHorizontalScrollBarEnabled_23088_ID_;
    static jmethodID& isHorizontalScrollBarEnabled_23088_ID() { return isHorizontalScrollBarEnabled_23088_ID_; }
    static jmethodID isHovered_22988_ID_;
    static jmethodID& isHovered_22988_ID() { return isHovered_22988_ID_; }
    static jmethodID isInEditMode_23147_ID_;
    static jmethodID& isInEditMode_23147_ID() { return isInEditMode_23147_ID_; }
    static jmethodID isInLayout_23208_ID_;
    static jmethodID& isInLayout_23208_ID() { return isInLayout_23208_ID_; }
    static jmethodID isInTouchMode_22971_ID_;
    static jmethodID& isInTouchMode_22971_ID() { return isInTouchMode_22971_ID_; }
    static jmethodID isLaidOut_22906_ID_;
    static jmethodID& isLaidOut_22906_ID() { return isLaidOut_22906_ID_; }
    static jmethodID isLayoutDirectionResolved_23116_ID_;
    static jmethodID& isLayoutDirectionResolved_23116_ID() { return isLayoutDirectionResolved_23116_ID_; }
    static jmethodID isLayoutRequested_23159_ID_;
    static jmethodID& isLayoutRequested_23159_ID() { return isLayoutRequested_23159_ID_; }
    static jmethodID isLongClickable_22913_ID_;
    static jmethodID& isLongClickable_22913_ID() { return isLongClickable_22913_ID_; }
    static jmethodID isOpaque_23066_ID_;
    static jmethodID& isOpaque_23066_ID() { return isOpaque_23066_ID_; }
    static jmethodID isPaddingOffsetRequired_23148_ID_;
    static jmethodID& isPaddingOffsetRequired_23148_ID() { return isPaddingOffsetRequired_23148_ID_; }
    static jmethodID isPaddingRelative_23188_ID_;
    static jmethodID& isPaddingRelative_23188_ID() { return isPaddingRelative_23188_ID_; }
    static jmethodID isPressed_22917_ID_;
    static jmethodID& isPressed_22917_ID() { return isPressed_22917_ID_; }
    static jmethodID isSaveEnabled_22918_ID_;
    static jmethodID& isSaveEnabled_22918_ID() { return isSaveEnabled_22918_ID_; }
    static jmethodID isSaveFromParentEnabled_22922_ID_;
    static jmethodID& isSaveFromParentEnabled_22922_ID() { return isSaveFromParentEnabled_22922_ID_; }
    static jmethodID isScrollbarFadingEnabled_23093_ID_;
    static jmethodID& isScrollbarFadingEnabled_23093_ID() { return isScrollbarFadingEnabled_23093_ID_; }
    static jmethodID isScrollContainer_22870_ID_;
    static jmethodID& isScrollContainer_22870_ID() { return isScrollContainer_22870_ID_; }
    static jmethodID isSelected_23191_ID_;
    static jmethodID& isSelected_23191_ID() { return isSelected_23191_ID_; }
    static jmethodID isShown_22886_ID_;
    static jmethodID& isShown_22886_ID() { return isShown_22886_ID_; }
    static jmethodID isSoundEffectsEnabled_22898_ID_;
    static jmethodID& isSoundEffectsEnabled_22898_ID() { return isSoundEffectsEnabled_22898_ID_; }
    static jmethodID isTextAlignmentResolved_23256_ID_;
    static jmethodID& isTextAlignmentResolved_23256_ID() { return isTextAlignmentResolved_23256_ID_; }
    static jmethodID isTextDirectionResolved_23252_ID_;
    static jmethodID& isTextDirectionResolved_23252_ID() { return isTextDirectionResolved_23252_ID_; }
    static jmethodID isVerticalFadingEdgeEnabled_23082_ID_;
    static jmethodID& isVerticalFadingEdgeEnabled_23082_ID() { return isVerticalFadingEdgeEnabled_23082_ID_; }
    static jmethodID isVerticalScrollBarEnabled_23090_ID_;
    static jmethodID& isVerticalScrollBarEnabled_23090_ID() { return isVerticalScrollBarEnabled_23090_ID_; }
    static jmethodID j_draw_23156_ID_;
    static jmethodID& j_draw_23156_ID() { return j_draw_23156_ID_; }
    static jmethodID jumpDrawablesToCurrentState_23174_ID_;
    static jmethodID& jumpDrawablesToCurrentState_23174_ID() { return jumpDrawablesToCurrentState_23174_ID_; }
    static jfieldID KEEP_SCREEN_ON_22741_ID_;
    static jfieldID& KEEP_SCREEN_ON_22741_ID() { return KEEP_SCREEN_ON_22741_ID_; }
    static jfieldID LAYER_TYPE_HARDWARE_22804_ID_;
    static jfieldID& LAYER_TYPE_HARDWARE_22804_ID() { return LAYER_TYPE_HARDWARE_22804_ID_; }
    static jfieldID LAYER_TYPE_NONE_22802_ID_;
    static jfieldID& LAYER_TYPE_NONE_22802_ID() { return LAYER_TYPE_NONE_22802_ID_; }
    static jfieldID LAYER_TYPE_SOFTWARE_22803_ID_;
    static jfieldID& LAYER_TYPE_SOFTWARE_22803_ID() { return LAYER_TYPE_SOFTWARE_22803_ID_; }
    static jmethodID layout_23160_ID_;
    static jmethodID& layout_23160_ID() { return layout_23160_ID_; }
    static jfieldID LAYOUT_DIRECTION_INHERIT_22758_ID_;
    static jfieldID& LAYOUT_DIRECTION_INHERIT_22758_ID() { return LAYOUT_DIRECTION_INHERIT_22758_ID_; }
    static jfieldID LAYOUT_DIRECTION_LOCALE_22759_ID_;
    static jfieldID& LAYOUT_DIRECTION_LOCALE_22759_ID() { return LAYOUT_DIRECTION_LOCALE_22759_ID_; }
    static jfieldID LAYOUT_DIRECTION_LTR_22756_ID_;
    static jfieldID& LAYOUT_DIRECTION_LTR_22756_ID() { return LAYOUT_DIRECTION_LTR_22756_ID_; }
    static jfieldID LAYOUT_DIRECTION_RTL_22757_ID_;
    static jfieldID& LAYOUT_DIRECTION_RTL_22757_ID() { return LAYOUT_DIRECTION_RTL_22757_ID_; }
    static jmethodID measure_23211_ID_;
    static jmethodID& measure_23211_ID() { return measure_23211_ID_; }
    static jfieldID MEASURED_HEIGHT_STATE_SHIFT_22754_ID_;
    static jfieldID& MEASURED_HEIGHT_STATE_SHIFT_22754_ID() { return MEASURED_HEIGHT_STATE_SHIFT_22754_ID_; }
    static jfieldID MEASURED_SIZE_MASK_22752_ID_;
    static jfieldID& MEASURED_SIZE_MASK_22752_ID() { return MEASURED_SIZE_MASK_22752_ID_; }
    static jfieldID MEASURED_STATE_MASK_22753_ID_;
    static jfieldID& MEASURED_STATE_MASK_22753_ID() { return MEASURED_STATE_MASK_22753_ID_; }
    static jfieldID MEASURED_STATE_TOO_SMALL_22755_ID_;
    static jfieldID& MEASURED_STATE_TOO_SMALL_22755_ID() { return MEASURED_STATE_TOO_SMALL_22755_ID_; }
    static jmethodID mergeDrawableStates_23173_ID_;
    static jmethodID& mergeDrawableStates_23173_ID() { return mergeDrawableStates_23173_ID_; }
    static jfieldID NO_ID_22730_ID_;
    static jfieldID& NO_ID_22730_ID() { return NO_ID_22730_ID_; }
    static jmethodID offsetLeftAndRight_23055_ID_;
    static jmethodID& offsetLeftAndRight_23055_ID() { return offsetLeftAndRight_23055_ID_; }
    static jmethodID offsetTopAndBottom_23054_ID_;
    static jmethodID& offsetTopAndBottom_23054_ID() { return offsetTopAndBottom_23054_ID_; }
    static jmethodID onAnimationEnd_23229_ID_;
    static jmethodID& onAnimationEnd_23229_ID() { return onAnimationEnd_23229_ID_; }
    static jmethodID onAnimationStart_23228_ID_;
    static jmethodID& onAnimationStart_23228_ID() { return onAnimationStart_23228_ID_; }
    static jmethodID onAttachedToWindow_23112_ID_;
    static jmethodID& onAttachedToWindow_23112_ID() { return onAttachedToWindow_23112_ID_; }
    static jmethodID onCancelPendingInputEvents_23124_ID_;
    static jmethodID& onCancelPendingInputEvents_23124_ID() { return onCancelPendingInputEvents_23124_ID_; }
    static jmethodID onCheckIsTextEditor_22979_ID_;
    static jmethodID& onCheckIsTextEditor_22979_ID() { return onCheckIsTextEditor_22979_ID_; }
    static jmethodID onConfigurationChanged_22970_ID_;
    static jmethodID& onConfigurationChanged_22970_ID() { return onConfigurationChanged_22970_ID_; }
    static jmethodID onCreateContextMenu_22984_ID_;
    static jmethodID& onCreateContextMenu_22984_ID() { return onCreateContextMenu_22984_ID_; }
    static jmethodID onCreateDrawableState_23172_ID_;
    static jmethodID& onCreateDrawableState_23172_ID() { return onCreateDrawableState_23172_ID_; }
    static jmethodID onCreateInputConnection_22980_ID_;
    static jmethodID& onCreateInputConnection_22980_ID() { return onCreateInputConnection_22980_ID_; }
    static jmethodID onDetachedFromWindow_23117_ID_;
    static jmethodID& onDetachedFromWindow_23117_ID() { return onDetachedFromWindow_23117_ID_; }
    static jmethodID onDisplayHint_22964_ID_;
    static jmethodID& onDisplayHint_22964_ID() { return onDisplayHint_22964_ID_; }
    static jmethodID onDragEvent_23242_ID_;
    static jmethodID& onDragEvent_23242_ID() { return onDragEvent_23242_ID_; }
    static jmethodID onDraw_23111_ID_;
    static jmethodID& onDraw_23111_ID() { return onDraw_23111_ID_; }
    static jmethodID onDrawScrollBars_23110_ID_;
    static jmethodID& onDrawScrollBars_23110_ID() { return onDrawScrollBars_23110_ID_; }
    static jmethodID onFilterTouchEventForSecurity_22952_ID_;
    static jmethodID& onFilterTouchEventForSecurity_22952_ID() { return onFilterTouchEventForSecurity_22952_ID_; }
    static jmethodID onFinishInflate_23162_ID_;
    static jmethodID& onFinishInflate_23162_ID() { return onFinishInflate_23162_ID_; }
    static jmethodID onFinishTemporaryDetach_22946_ID_;
    static jmethodID& onFinishTemporaryDetach_22946_ID() { return onFinishTemporaryDetach_22946_ID_; }
    static jmethodID onFocusChanged_22853_ID_;
    static jmethodID& onFocusChanged_22853_ID() { return onFocusChanged_22853_ID_; }
    static jmethodID onGenericMotionEvent_22986_ID_;
    static jmethodID& onGenericMotionEvent_22986_ID() { return onGenericMotionEvent_22986_ID_; }
    static jmethodID onHoverChanged_22990_ID_;
    static jmethodID& onHoverChanged_22990_ID() { return onHoverChanged_22990_ID_; }
    static jmethodID onHoverEvent_22987_ID_;
    static jmethodID& onHoverEvent_22987_ID() { return onHoverEvent_22987_ID_; }
    static jmethodID onInitializeAccessibilityEvent_22859_ID_;
    static jmethodID& onInitializeAccessibilityEvent_22859_ID() { return onInitializeAccessibilityEvent_22859_ID_; }
    static jmethodID onInitializeAccessibilityNodeInfo_22861_ID_;
    static jmethodID& onInitializeAccessibilityNodeInfo_22861_ID() { return onInitializeAccessibilityNodeInfo_22861_ID_; }
    static jmethodID onKeyDown_22974_ID_;
    static jmethodID& onKeyDown_22974_ID() { return onKeyDown_22974_ID_; }
    static jmethodID onKeyLongPress_22975_ID_;
    static jmethodID& onKeyLongPress_22975_ID() { return onKeyLongPress_22975_ID_; }
    static jmethodID onKeyMultiple_22977_ID_;
    static jmethodID& onKeyMultiple_22977_ID() { return onKeyMultiple_22977_ID_; }
    static jmethodID onKeyPreIme_22973_ID_;
    static jmethodID& onKeyPreIme_22973_ID() { return onKeyPreIme_22973_ID_; }
    static jmethodID onKeyShortcut_22978_ID_;
    static jmethodID& onKeyShortcut_22978_ID() { return onKeyShortcut_22978_ID_; }
    static jmethodID onKeyUp_22976_ID_;
    static jmethodID& onKeyUp_22976_ID() { return onKeyUp_22976_ID_; }
    static jmethodID onLayout_23161_ID_;
    static jmethodID& onLayout_23161_ID() { return onLayout_23161_ID_; }
    static jmethodID onMeasure_23212_ID_;
    static jmethodID& onMeasure_23212_ID() { return onMeasure_23212_ID_; }
    static jmethodID onOverScrolled_23246_ID_;
    static jmethodID& onOverScrolled_23246_ID() { return onOverScrolled_23246_ID_; }
    static jmethodID onPopulateAccessibilityEvent_22858_ID_;
    static jmethodID& onPopulateAccessibilityEvent_22858_ID() { return onPopulateAccessibilityEvent_22858_ID_; }
    static jmethodID onRestoreInstanceState_23130_ID_;
    static jmethodID& onRestoreInstanceState_23130_ID() { return onRestoreInstanceState_23130_ID_; }
    static jmethodID onRtlPropertiesChanged_23114_ID_;
    static jmethodID& onRtlPropertiesChanged_23114_ID() { return onRtlPropertiesChanged_23114_ID_; }
    static jmethodID onSaveInstanceState_23127_ID_;
    static jmethodID& onSaveInstanceState_23127_ID() { return onSaveInstanceState_23127_ID_; }
    static jmethodID onScreenStateChanged_23113_ID_;
    static jmethodID& onScreenStateChanged_23113_ID() { return onScreenStateChanged_23113_ID_; }
    static jmethodID onScrollChanged_22996_ID_;
    static jmethodID& onScrollChanged_22996_ID() { return onScrollChanged_22996_ID_; }
    static jmethodID onSetAlpha_23230_ID_;
    static jmethodID& onSetAlpha_23230_ID() { return onSetAlpha_23230_ID_; }
    static jmethodID onSizeChanged_22997_ID_;
    static jmethodID& onSizeChanged_22997_ID() { return onSizeChanged_22997_ID_; }
    static jmethodID onStartTemporaryDetach_22945_ID_;
    static jmethodID& onStartTemporaryDetach_22945_ID() { return onStartTemporaryDetach_22945_ID_; }
    static jmethodID onTouchEvent_22991_ID_;
    static jmethodID& onTouchEvent_22991_ID() { return onTouchEvent_22991_ID_; }
    static jmethodID onTrackballEvent_22985_ID_;
    static jmethodID& onTrackballEvent_22985_ID() { return onTrackballEvent_22985_ID_; }
    static jmethodID onVisibilityChanged_22962_ID_;
    static jmethodID& onVisibilityChanged_22962_ID() { return onVisibilityChanged_22962_ID_; }
    static jmethodID onWindowFocusChanged_22959_ID_;
    static jmethodID& onWindowFocusChanged_22959_ID() { return onWindowFocusChanged_22959_ID_; }
    static jmethodID onWindowSystemUiVisibilityChanged_23237_ID_;
    static jmethodID& onWindowSystemUiVisibilityChanged_23237_ID() { return onWindowSystemUiVisibilityChanged_23237_ID_; }
    static jmethodID onWindowVisibilityChanged_22966_ID_;
    static jmethodID& onWindowVisibilityChanged_22966_ID() { return onWindowVisibilityChanged_22966_ID_; }
    static jfieldID OVER_SCROLL_ALWAYS_22780_ID_;
    static jfieldID& OVER_SCROLL_ALWAYS_22780_ID() { return OVER_SCROLL_ALWAYS_22780_ID_; }
    static jfieldID OVER_SCROLL_IF_CONTENT_SCROLLS_22781_ID_;
    static jfieldID& OVER_SCROLL_IF_CONTENT_SCROLLS_22781_ID() { return OVER_SCROLL_IF_CONTENT_SCROLLS_22781_ID_; }
    static jfieldID OVER_SCROLL_NEVER_22782_ID_;
    static jfieldID& OVER_SCROLL_NEVER_22782_ID() { return OVER_SCROLL_NEVER_22782_ID_; }
    static jmethodID overScrollBy_23245_ID_;
    static jmethodID& overScrollBy_23245_ID() { return overScrollBy_23245_ID_; }
    static jmethodID performAccessibilityAction_22944_ID_;
    static jmethodID& performAccessibilityAction_22944_ID() { return performAccessibilityAction_22944_ID_; }
    static jmethodID performClick_22838_ID_;
    static jmethodID& performClick_22838_ID() { return performClick_22838_ID_; }
    static jmethodID performHapticFeedback_23232_ID_;
    static jmethodID& performHapticFeedback_23232_ID() { return performHapticFeedback_23232_ID_; }
    static jmethodID performHapticFeedback_23233_ID_;
    static jmethodID& performHapticFeedback_23233_ID() { return performHapticFeedback_23233_ID_; }
    static jmethodID performLongClick_22840_ID_;
    static jmethodID& performLongClick_22840_ID() { return performLongClick_22840_ID_; }
    static jmethodID playSoundEffect_23231_ID_;
    static jmethodID& playSoundEffect_23231_ID() { return playSoundEffect_23231_ID_; }
    static jmethodID post_23068_ID_;
    static jmethodID& post_23068_ID() { return post_23068_ID_; }
    static jmethodID postDelayed_23069_ID_;
    static jmethodID& postDelayed_23069_ID() { return postDelayed_23069_ID_; }
    static jmethodID postInvalidate_23073_ID_;
    static jmethodID& postInvalidate_23073_ID() { return postInvalidate_23073_ID_; }
    static jmethodID postInvalidate_23074_ID_;
    static jmethodID& postInvalidate_23074_ID() { return postInvalidate_23074_ID_; }
    static jmethodID postInvalidateDelayed_23075_ID_;
    static jmethodID& postInvalidateDelayed_23075_ID() { return postInvalidateDelayed_23075_ID_; }
    static jmethodID postInvalidateDelayed_23076_ID_;
    static jmethodID& postInvalidateDelayed_23076_ID() { return postInvalidateDelayed_23076_ID_; }
    static jmethodID postInvalidateOnAnimation_23077_ID_;
    static jmethodID& postInvalidateOnAnimation_23077_ID() { return postInvalidateOnAnimation_23077_ID_; }
    static jmethodID postInvalidateOnAnimation_23078_ID_;
    static jmethodID& postInvalidateOnAnimation_23078_ID() { return postInvalidateOnAnimation_23078_ID_; }
    static jmethodID postOnAnimation_23070_ID_;
    static jmethodID& postOnAnimation_23070_ID() { return postOnAnimation_23070_ID_; }
    static jmethodID postOnAnimationDelayed_23071_ID_;
    static jmethodID& postOnAnimationDelayed_23071_ID() { return postOnAnimationDelayed_23071_ID_; }
    static jmethodID refreshDrawableState_23170_ID_;
    static jmethodID& refreshDrawableState_23170_ID() { return refreshDrawableState_23170_ID_; }
    static jmethodID removeCallbacks_23072_ID_;
    static jmethodID& removeCallbacks_23072_ID() { return removeCallbacks_23072_ID_; }
    static jmethodID removeOnAttachStateChangeListener_22832_ID_;
    static jmethodID& removeOnAttachStateChangeListener_22832_ID() { return removeOnAttachStateChangeListener_22832_ID_; }
    static jmethodID removeOnLayoutChangeListener_22830_ID_;
    static jmethodID& removeOnLayoutChangeListener_22830_ID() { return removeOnLayoutChangeListener_22830_ID_; }
    static jmethodID requestFitSystemWindows_22890_ID_;
    static jmethodID& requestFitSystemWindows_22890_ID() { return requestFitSystemWindows_22890_ID_; }
    static jmethodID requestFocus_22934_ID_;
    static jmethodID& requestFocus_22934_ID() { return requestFocus_22934_ID_; }
    static jmethodID requestFocus_22935_ID_;
    static jmethodID& requestFocus_22935_ID() { return requestFocus_22935_ID_; }
    static jmethodID requestFocus_22936_ID_;
    static jmethodID& requestFocus_22936_ID() { return requestFocus_22936_ID_; }
    static jmethodID requestFocusFromTouch_22937_ID_;
    static jmethodID& requestFocusFromTouch_22937_ID() { return requestFocusFromTouch_22937_ID_; }
    static jmethodID requestLayout_23209_ID_;
    static jmethodID& requestLayout_23209_ID() { return requestLayout_23209_ID_; }
    static jmethodID requestRectangleOnScreen_22848_ID_;
    static jmethodID& requestRectangleOnScreen_22848_ID() { return requestRectangleOnScreen_22848_ID_; }
    static jmethodID requestRectangleOnScreen_22849_ID_;
    static jmethodID& requestRectangleOnScreen_22849_ID() { return requestRectangleOnScreen_22849_ID_; }
    static jmethodID resolveSize_23215_ID_;
    static jmethodID& resolveSize_23215_ID() { return resolveSize_23215_ID_; }
    static jmethodID resolveSizeAndState_23216_ID_;
    static jmethodID& resolveSizeAndState_23216_ID() { return resolveSizeAndState_23216_ID_; }
    static jmethodID restoreHierarchyState_23128_ID_;
    static jmethodID& restoreHierarchyState_23128_ID() { return restoreHierarchyState_23128_ID_; }
    static jfieldID ROTATION_22810_ID_;
    static jfieldID& ROTATION_22810_ID() { return ROTATION_22810_ID_; }
    static jfieldID ROTATION_X_22811_ID_;
    static jfieldID& ROTATION_X_22811_ID() { return ROTATION_X_22811_ID_; }
    static jfieldID ROTATION_Y_22812_ID_;
    static jfieldID& ROTATION_Y_22812_ID() { return ROTATION_Y_22812_ID_; }
    static jmethodID saveHierarchyState_23125_ID_;
    static jmethodID& saveHierarchyState_23125_ID() { return saveHierarchyState_23125_ID_; }
    static jfieldID SCALE_X_22813_ID_;
    static jfieldID& SCALE_X_22813_ID() { return SCALE_X_22813_ID_; }
    static jfieldID SCALE_Y_22814_ID_;
    static jfieldID& SCALE_Y_22814_ID() { return SCALE_Y_22814_ID_; }
    static jmethodID scheduleDrawable_23165_ID_;
    static jmethodID& scheduleDrawable_23165_ID() { return scheduleDrawable_23165_ID_; }
    static jfieldID SCREEN_STATE_OFF_22797_ID_;
    static jfieldID& SCREEN_STATE_OFF_22797_ID() { return SCREEN_STATE_OFF_22797_ID_; }
    static jfieldID SCREEN_STATE_ON_22798_ID_;
    static jfieldID& SCREEN_STATE_ON_22798_ID() { return SCREEN_STATE_ON_22798_ID_; }
    static jfieldID SCROLLBAR_POSITION_DEFAULT_22799_ID_;
    static jfieldID& SCROLLBAR_POSITION_DEFAULT_22799_ID() { return SCROLLBAR_POSITION_DEFAULT_22799_ID_; }
    static jfieldID SCROLLBAR_POSITION_LEFT_22800_ID_;
    static jfieldID& SCROLLBAR_POSITION_LEFT_22800_ID() { return SCROLLBAR_POSITION_LEFT_22800_ID_; }
    static jfieldID SCROLLBAR_POSITION_RIGHT_22801_ID_;
    static jfieldID& SCROLLBAR_POSITION_RIGHT_22801_ID() { return SCROLLBAR_POSITION_RIGHT_22801_ID_; }
    static jfieldID SCROLLBARS_INSIDE_INSET_22738_ID_;
    static jfieldID& SCROLLBARS_INSIDE_INSET_22738_ID() { return SCROLLBARS_INSIDE_INSET_22738_ID_; }
    static jfieldID SCROLLBARS_INSIDE_OVERLAY_22737_ID_;
    static jfieldID& SCROLLBARS_INSIDE_OVERLAY_22737_ID() { return SCROLLBARS_INSIDE_OVERLAY_22737_ID_; }
    static jfieldID SCROLLBARS_OUTSIDE_INSET_22740_ID_;
    static jfieldID& SCROLLBARS_OUTSIDE_INSET_22740_ID() { return SCROLLBARS_OUTSIDE_INSET_22740_ID_; }
    static jfieldID SCROLLBARS_OUTSIDE_OVERLAY_22739_ID_;
    static jfieldID& SCROLLBARS_OUTSIDE_OVERLAY_22739_ID() { return SCROLLBARS_OUTSIDE_OVERLAY_22739_ID_; }
    static jmethodID scrollBy_23059_ID_;
    static jmethodID& scrollBy_23059_ID() { return scrollBy_23059_ID_; }
    static jmethodID scrollTo_23058_ID_;
    static jmethodID& scrollTo_23058_ID() { return scrollTo_23058_ID_; }
    static jmethodID sendAccessibilityEvent_22854_ID_;
    static jmethodID& sendAccessibilityEvent_22854_ID() { return sendAccessibilityEvent_22854_ID_; }
    static jmethodID sendAccessibilityEventUnchecked_22856_ID_;
    static jmethodID& sendAccessibilityEventUnchecked_22856_ID() { return sendAccessibilityEventUnchecked_22856_ID_; }
    static jmethodID setAccessibilityDelegate_22862_ID_;
    static jmethodID& setAccessibilityDelegate_22862_ID() { return setAccessibilityDelegate_22862_ID_; }
    static jmethodID setAccessibilityLiveRegion_22939_ID_;
    static jmethodID& setAccessibilityLiveRegion_22939_ID() { return setAccessibilityLiveRegion_22939_ID_; }
    static jmethodID setActivated_23192_ID_;
    static jmethodID& setActivated_23192_ID() { return setActivated_23192_ID_; }
    static jmethodID setAlpha_23031_ID_;
    static jmethodID& setAlpha_23031_ID() { return setAlpha_23031_ID_; }
    static jmethodID setAnimation_23227_ID_;
    static jmethodID& setAnimation_23227_ID() { return setAnimation_23227_ID_; }
    static jmethodID setBackground_23177_ID_;
    static jmethodID& setBackground_23177_ID() { return setBackground_23177_ID_; }
    static jmethodID setBackgroundColor_23175_ID_;
    static jmethodID& setBackgroundColor_23175_ID() { return setBackgroundColor_23175_ID_; }
    static jmethodID setBackgroundDrawable_23178_ID_;
    static jmethodID& setBackgroundDrawable_23178_ID() { return setBackgroundDrawable_23178_ID_; }
    static jmethodID setBackgroundResource_23176_ID_;
    static jmethodID& setBackgroundResource_23176_ID() { return setBackgroundResource_23176_ID_; }
    static jmethodID setBottom_23036_ID_;
    static jmethodID& setBottom_23036_ID() { return setBottom_23036_ID_; }
    static jmethodID setCameraDistance_23014_ID_;
    static jmethodID& setCameraDistance_23014_ID() { return setCameraDistance_23014_ID_; }
    static jmethodID setClickable_22912_ID_;
    static jmethodID& setClickable_22912_ID() { return setClickable_22912_ID_; }
    static jmethodID setClipBounds_23154_ID_;
    static jmethodID& setClipBounds_23154_ID() { return setClipBounds_23154_ID_; }
    static jmethodID setContentDescription_22865_ID_;
    static jmethodID& setContentDescription_22865_ID() { return setContentDescription_22865_ID_; }
    static jmethodID setDrawingCacheBackgroundColor_23143_ID_;
    static jmethodID& setDrawingCacheBackgroundColor_23143_ID() { return setDrawingCacheBackgroundColor_23143_ID_; }
    static jmethodID setDrawingCacheEnabled_23138_ID_;
    static jmethodID& setDrawingCacheEnabled_23138_ID() { return setDrawingCacheEnabled_23138_ID_; }
    static jmethodID setDrawingCacheQuality_22873_ID_;
    static jmethodID& setDrawingCacheQuality_22873_ID() { return setDrawingCacheQuality_22873_ID_; }
    static jmethodID setDuplicateParentStateEnabled_23132_ID_;
    static jmethodID& setDuplicateParentStateEnabled_23132_ID() { return setDuplicateParentStateEnabled_23132_ID_; }
    static jmethodID setEnabled_22894_ID_;
    static jmethodID& setEnabled_22894_ID() { return setEnabled_22894_ID_; }
    static jmethodID setFadingEdgeLength_22821_ID_;
    static jmethodID& setFadingEdgeLength_22821_ID() { return setFadingEdgeLength_22821_ID_; }
    static jmethodID setFilterTouchesWhenObscured_22921_ID_;
    static jmethodID& setFilterTouchesWhenObscured_22921_ID() { return setFilterTouchesWhenObscured_22921_ID_; }
    static jmethodID setFitsSystemWindows_22888_ID_;
    static jmethodID& setFitsSystemWindows_22888_ID() { return setFitsSystemWindows_22888_ID_; }
    static jmethodID setFocusable_22895_ID_;
    static jmethodID& setFocusable_22895_ID() { return setFocusable_22895_ID_; }
    static jmethodID setFocusableInTouchMode_22896_ID_;
    static jmethodID& setFocusableInTouchMode_22896_ID() { return setFocusableInTouchMode_22896_ID_; }
    static jmethodID setHapticFeedbackEnabled_22899_ID_;
    static jmethodID& setHapticFeedbackEnabled_22899_ID() { return setHapticFeedbackEnabled_22899_ID_; }
    static jmethodID setHasTransientState_22904_ID_;
    static jmethodID& setHasTransientState_22904_ID() { return setHasTransientState_22904_ID_; }
    static jmethodID setHorizontalFadingEdgeEnabled_23081_ID_;
    static jmethodID& setHorizontalFadingEdgeEnabled_23081_ID() { return setHorizontalFadingEdgeEnabled_23081_ID_; }
    static jmethodID setHorizontalScrollBarEnabled_23089_ID_;
    static jmethodID& setHorizontalScrollBarEnabled_23089_ID() { return setHorizontalScrollBarEnabled_23089_ID_; }
    static jmethodID setHovered_22989_ID_;
    static jmethodID& setHovered_22989_ID() { return setHovered_22989_ID_; }
    static jmethodID setId_23201_ID_;
    static jmethodID& setId_23201_ID() { return setId_23201_ID_; }
    static jmethodID setImportantForAccessibility_22941_ID_;
    static jmethodID& setImportantForAccessibility_22941_ID() { return setImportantForAccessibility_22941_ID_; }
    static jmethodID setKeepScreenOn_22875_ID_;
    static jmethodID& setKeepScreenOn_22875_ID() { return setKeepScreenOn_22875_ID_; }
    static jmethodID setLabelFor_22867_ID_;
    static jmethodID& setLabelFor_22867_ID() { return setLabelFor_22867_ID_; }
    static jmethodID setLayerPaint_23135_ID_;
    static jmethodID& setLayerPaint_23135_ID() { return setLayerPaint_23135_ID_; }
    static jmethodID setLayerType_23134_ID_;
    static jmethodID& setLayerType_23134_ID() { return setLayerType_23134_ID_; }
    static jmethodID setLayoutDirection_22901_ID_;
    static jmethodID& setLayoutDirection_22901_ID() { return setLayoutDirection_22901_ID_; }
    static jmethodID setLayoutParams_23057_ID_;
    static jmethodID& setLayoutParams_23057_ID() { return setLayoutParams_23057_ID_; }
    static jmethodID setLeft_23038_ID_;
    static jmethodID& setLeft_23038_ID() { return setLeft_23038_ID_; }
    static jmethodID setLongClickable_22914_ID_;
    static jmethodID& setLongClickable_22914_ID() { return setLongClickable_22914_ID_; }
    static jmethodID setMeasuredDimension_23213_ID_;
    static jmethodID& setMeasuredDimension_23213_ID() { return setMeasuredDimension_23213_ID_; }
    static jmethodID setMinimumHeight_23221_ID_;
    static jmethodID& setMinimumHeight_23221_ID() { return setMinimumHeight_23221_ID_; }
    static jmethodID setMinimumWidth_23223_ID_;
    static jmethodID& setMinimumWidth_23223_ID() { return setMinimumWidth_23223_ID_; }
    static jmethodID setNextFocusDownId_22883_ID_;
    static jmethodID& setNextFocusDownId_22883_ID() { return setNextFocusDownId_22883_ID_; }
    static jmethodID setNextFocusForwardId_22885_ID_;
    static jmethodID& setNextFocusForwardId_22885_ID() { return setNextFocusForwardId_22885_ID_; }
    static jmethodID setNextFocusLeftId_22877_ID_;
    static jmethodID& setNextFocusLeftId_22877_ID() { return setNextFocusLeftId_22877_ID_; }
    static jmethodID setNextFocusRightId_22879_ID_;
    static jmethodID& setNextFocusRightId_22879_ID() { return setNextFocusRightId_22879_ID_; }
    static jmethodID setNextFocusUpId_22881_ID_;
    static jmethodID& setNextFocusUpId_22881_ID() { return setNextFocusUpId_22881_ID_; }
    static jmethodID setOnClickListener_22834_ID_;
    static jmethodID& setOnClickListener_22834_ID() { return setOnClickListener_22834_ID_; }
    static jmethodID setOnCreateContextMenuListener_22837_ID_;
    static jmethodID& setOnCreateContextMenuListener_22837_ID() { return setOnCreateContextMenuListener_22837_ID_; }
    static jmethodID setOnDragListener_22847_ID_;
    static jmethodID& setOnDragListener_22847_ID() { return setOnDragListener_22847_ID_; }
    static jmethodID setOnFocusChangeListener_22828_ID_;
    static jmethodID& setOnFocusChangeListener_22828_ID() { return setOnFocusChangeListener_22828_ID_; }
    static jmethodID setOnGenericMotionListener_22845_ID_;
    static jmethodID& setOnGenericMotionListener_22845_ID() { return setOnGenericMotionListener_22845_ID_; }
    static jmethodID setOnHoverListener_22846_ID_;
    static jmethodID& setOnHoverListener_22846_ID() { return setOnHoverListener_22846_ID_; }
    static jmethodID setOnKeyListener_22843_ID_;
    static jmethodID& setOnKeyListener_22843_ID() { return setOnKeyListener_22843_ID_; }
    static jmethodID setOnLongClickListener_22836_ID_;
    static jmethodID& setOnLongClickListener_22836_ID() { return setOnLongClickListener_22836_ID_; }
    static jmethodID setOnSystemUiVisibilityChangeListener_23239_ID_;
    static jmethodID& setOnSystemUiVisibilityChangeListener_23239_ID() { return setOnSystemUiVisibilityChangeListener_23239_ID_; }
    static jmethodID setOnTouchListener_22844_ID_;
    static jmethodID& setOnTouchListener_22844_ID() { return setOnTouchListener_22844_ID_; }
    static jmethodID setOverScrollMode_23248_ID_;
    static jmethodID& setOverScrollMode_23248_ID() { return setOverScrollMode_23248_ID_; }
    static jmethodID setPadding_23180_ID_;
    static jmethodID& setPadding_23180_ID() { return setPadding_23180_ID_; }
    static jmethodID setPaddingRelative_23181_ID_;
    static jmethodID& setPaddingRelative_23181_ID() { return setPaddingRelative_23181_ID_; }
    static jmethodID setPivotX_23026_ID_;
    static jmethodID& setPivotX_23026_ID() { return setPivotX_23026_ID_; }
    static jmethodID setPivotY_23028_ID_;
    static jmethodID& setPivotY_23028_ID() { return setPivotY_23028_ID_; }
    static jmethodID setPressed_22915_ID_;
    static jmethodID& setPressed_22915_ID() { return setPressed_22915_ID_; }
    static jmethodID setRight_23040_ID_;
    static jmethodID& setRight_23040_ID() { return setRight_23040_ID_; }
    static jmethodID setRotation_23016_ID_;
    static jmethodID& setRotation_23016_ID() { return setRotation_23016_ID_; }
    static jmethodID setRotationX_23020_ID_;
    static jmethodID& setRotationX_23020_ID() { return setRotationX_23020_ID_; }
    static jmethodID setRotationY_23018_ID_;
    static jmethodID& setRotationY_23018_ID() { return setRotationY_23018_ID_; }
    static jmethodID setSaveEnabled_22919_ID_;
    static jmethodID& setSaveEnabled_22919_ID() { return setSaveEnabled_22919_ID_; }
    static jmethodID setSaveFromParentEnabled_22923_ID_;
    static jmethodID& setSaveFromParentEnabled_22923_ID() { return setSaveFromParentEnabled_22923_ID_; }
    static jmethodID setScaleX_23022_ID_;
    static jmethodID& setScaleX_23022_ID() { return setScaleX_23022_ID_; }
    static jmethodID setScaleY_23024_ID_;
    static jmethodID& setScaleY_23024_ID() { return setScaleY_23024_ID_; }
    static jmethodID setScrollBarDefaultDelayBeforeFade_23095_ID_;
    static jmethodID& setScrollBarDefaultDelayBeforeFade_23095_ID() { return setScrollBarDefaultDelayBeforeFade_23095_ID_; }
    static jmethodID setScrollBarFadeDuration_23097_ID_;
    static jmethodID& setScrollBarFadeDuration_23097_ID() { return setScrollBarFadeDuration_23097_ID_; }
    static jmethodID setScrollbarFadingEnabled_23092_ID_;
    static jmethodID& setScrollbarFadingEnabled_23092_ID() { return setScrollbarFadingEnabled_23092_ID_; }
    static jmethodID setScrollBarSize_23099_ID_;
    static jmethodID& setScrollBarSize_23099_ID() { return setScrollBarSize_23099_ID_; }
    static jmethodID setScrollBarStyle_23100_ID_;
    static jmethodID& setScrollBarStyle_23100_ID() { return setScrollBarStyle_23100_ID_; }
    static jmethodID setScrollContainer_22871_ID_;
    static jmethodID& setScrollContainer_22871_ID() { return setScrollContainer_22871_ID_; }
    static jmethodID setScrollX_23000_ID_;
    static jmethodID& setScrollX_23000_ID() { return setScrollX_23000_ID_; }
    static jmethodID setScrollY_23001_ID_;
    static jmethodID& setScrollY_23001_ID() { return setScrollY_23001_ID_; }
    static jmethodID setSelected_23189_ID_;
    static jmethodID& setSelected_23189_ID() { return setSelected_23189_ID_; }
    static jmethodID setSoundEffectsEnabled_22897_ID_;
    static jmethodID& setSoundEffectsEnabled_22897_ID() { return setSoundEffectsEnabled_22897_ID_; }
    static jmethodID setSystemUiVisibility_23234_ID_;
    static jmethodID& setSystemUiVisibility_23234_ID() { return setSystemUiVisibility_23234_ID_; }
    static jmethodID setTag_23204_ID_;
    static jmethodID& setTag_23204_ID() { return setTag_23204_ID_; }
    static jmethodID setTag_23206_ID_;
    static jmethodID& setTag_23206_ID() { return setTag_23206_ID_; }
    static jmethodID setTextAlignment_23253_ID_;
    static jmethodID& setTextAlignment_23253_ID() { return setTextAlignment_23253_ID_; }
    static jmethodID setTextDirection_23249_ID_;
    static jmethodID& setTextDirection_23249_ID() { return setTextDirection_23249_ID_; }
    static jmethodID setTop_23033_ID_;
    static jmethodID& setTop_23033_ID() { return setTop_23033_ID_; }
    static jmethodID setTouchDelegate_22993_ID_;
    static jmethodID& setTouchDelegate_22993_ID() { return setTouchDelegate_22993_ID_; }
    static jmethodID setTranslationX_23046_ID_;
    static jmethodID& setTranslationX_23046_ID() { return setTranslationX_23046_ID_; }
    static jmethodID setTranslationY_23048_ID_;
    static jmethodID& setTranslationY_23048_ID() { return setTranslationY_23048_ID_; }
    static jmethodID setVerticalFadingEdgeEnabled_23083_ID_;
    static jmethodID& setVerticalFadingEdgeEnabled_23083_ID() { return setVerticalFadingEdgeEnabled_23083_ID_; }
    static jmethodID setVerticalScrollBarEnabled_23091_ID_;
    static jmethodID& setVerticalScrollBarEnabled_23091_ID() { return setVerticalScrollBarEnabled_23091_ID_; }
    static jmethodID setVerticalScrollbarPosition_22826_ID_;
    static jmethodID& setVerticalScrollbarPosition_22826_ID() { return setVerticalScrollbarPosition_22826_ID_; }
    static jmethodID setVisibility_22892_ID_;
    static jmethodID& setVisibility_22892_ID() { return setVisibility_22892_ID_; }
    static jmethodID setWillNotCacheDrawing_22909_ID_;
    static jmethodID& setWillNotCacheDrawing_22909_ID() { return setWillNotCacheDrawing_22909_ID_; }
    static jmethodID setWillNotDraw_22907_ID_;
    static jmethodID& setWillNotDraw_22907_ID() { return setWillNotDraw_22907_ID_; }
    static jmethodID setX_23042_ID_;
    static jmethodID& setX_23042_ID() { return setX_23042_ID_; }
    static jmethodID setY_23044_ID_;
    static jmethodID& setY_23044_ID() { return setY_23044_ID_; }
    static jmethodID showContextMenu_22841_ID_;
    static jmethodID& showContextMenu_22841_ID() { return showContextMenu_22841_ID_; }
    static jfieldID SOUND_EFFECTS_ENABLED_22742_ID_;
    static jfieldID& SOUND_EFFECTS_ENABLED_22742_ID() { return SOUND_EFFECTS_ENABLED_22742_ID_; }
    static jmethodID startActionMode_22842_ID_;
    static jmethodID& startActionMode_22842_ID() { return startActionMode_22842_ID_; }
    static jmethodID startAnimation_23225_ID_;
    static jmethodID& startAnimation_23225_ID() { return startAnimation_23225_ID_; }
    static jmethodID startDrag_23241_ID_;
    static jmethodID& startDrag_23241_ID() { return startDrag_23241_ID_; }
    static jfieldID STATUS_BAR_HIDDEN_22792_ID_;
    static jfieldID& STATUS_BAR_HIDDEN_22792_ID() { return STATUS_BAR_HIDDEN_22792_ID_; }
    static jfieldID STATUS_BAR_VISIBLE_22793_ID_;
    static jfieldID& STATUS_BAR_VISIBLE_22793_ID() { return STATUS_BAR_VISIBLE_22793_ID_; }
    static jfieldID SYSTEM_UI_FLAG_FULLSCREEN_22786_ID_;
    static jfieldID& SYSTEM_UI_FLAG_FULLSCREEN_22786_ID() { return SYSTEM_UI_FLAG_FULLSCREEN_22786_ID_; }
    static jfieldID SYSTEM_UI_FLAG_HIDE_NAVIGATION_22785_ID_;
    static jfieldID& SYSTEM_UI_FLAG_HIDE_NAVIGATION_22785_ID() { return SYSTEM_UI_FLAG_HIDE_NAVIGATION_22785_ID_; }
    static jfieldID SYSTEM_UI_FLAG_IMMERSIVE_22790_ID_;
    static jfieldID& SYSTEM_UI_FLAG_IMMERSIVE_22790_ID() { return SYSTEM_UI_FLAG_IMMERSIVE_22790_ID_; }
    static jfieldID SYSTEM_UI_FLAG_IMMERSIVE_STICKY_22791_ID_;
    static jfieldID& SYSTEM_UI_FLAG_IMMERSIVE_STICKY_22791_ID() { return SYSTEM_UI_FLAG_IMMERSIVE_STICKY_22791_ID_; }
    static jfieldID SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN_22789_ID_;
    static jfieldID& SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN_22789_ID() { return SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN_22789_ID_; }
    static jfieldID SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION_22788_ID_;
    static jfieldID& SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION_22788_ID() { return SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION_22788_ID_; }
    static jfieldID SYSTEM_UI_FLAG_LAYOUT_STABLE_22787_ID_;
    static jfieldID& SYSTEM_UI_FLAG_LAYOUT_STABLE_22787_ID() { return SYSTEM_UI_FLAG_LAYOUT_STABLE_22787_ID_; }
    static jfieldID SYSTEM_UI_FLAG_LOW_PROFILE_22784_ID_;
    static jfieldID& SYSTEM_UI_FLAG_LOW_PROFILE_22784_ID() { return SYSTEM_UI_FLAG_LOW_PROFILE_22784_ID_; }
    static jfieldID SYSTEM_UI_FLAG_VISIBLE_22783_ID_;
    static jfieldID& SYSTEM_UI_FLAG_VISIBLE_22783_ID() { return SYSTEM_UI_FLAG_VISIBLE_22783_ID_; }
    static jfieldID SYSTEM_UI_LAYOUT_FLAGS_22794_ID_;
    static jfieldID& SYSTEM_UI_LAYOUT_FLAGS_22794_ID() { return SYSTEM_UI_LAYOUT_FLAGS_22794_ID_; }
    static jfieldID TEXT_ALIGNMENT_CENTER_22770_ID_;
    static jfieldID& TEXT_ALIGNMENT_CENTER_22770_ID() { return TEXT_ALIGNMENT_CENTER_22770_ID_; }
    static jfieldID TEXT_ALIGNMENT_GRAVITY_22767_ID_;
    static jfieldID& TEXT_ALIGNMENT_GRAVITY_22767_ID() { return TEXT_ALIGNMENT_GRAVITY_22767_ID_; }
    static jfieldID TEXT_ALIGNMENT_INHERIT_22766_ID_;
    static jfieldID& TEXT_ALIGNMENT_INHERIT_22766_ID() { return TEXT_ALIGNMENT_INHERIT_22766_ID_; }
    static jfieldID TEXT_ALIGNMENT_TEXT_END_22769_ID_;
    static jfieldID& TEXT_ALIGNMENT_TEXT_END_22769_ID() { return TEXT_ALIGNMENT_TEXT_END_22769_ID_; }
    static jfieldID TEXT_ALIGNMENT_TEXT_START_22768_ID_;
    static jfieldID& TEXT_ALIGNMENT_TEXT_START_22768_ID() { return TEXT_ALIGNMENT_TEXT_START_22768_ID_; }
    static jfieldID TEXT_ALIGNMENT_VIEW_END_22772_ID_;
    static jfieldID& TEXT_ALIGNMENT_VIEW_END_22772_ID() { return TEXT_ALIGNMENT_VIEW_END_22772_ID_; }
    static jfieldID TEXT_ALIGNMENT_VIEW_START_22771_ID_;
    static jfieldID& TEXT_ALIGNMENT_VIEW_START_22771_ID() { return TEXT_ALIGNMENT_VIEW_START_22771_ID_; }
    static jfieldID TEXT_DIRECTION_ANY_RTL_22762_ID_;
    static jfieldID& TEXT_DIRECTION_ANY_RTL_22762_ID() { return TEXT_DIRECTION_ANY_RTL_22762_ID_; }
    static jfieldID TEXT_DIRECTION_FIRST_STRONG_22761_ID_;
    static jfieldID& TEXT_DIRECTION_FIRST_STRONG_22761_ID() { return TEXT_DIRECTION_FIRST_STRONG_22761_ID_; }
    static jfieldID TEXT_DIRECTION_INHERIT_22760_ID_;
    static jfieldID& TEXT_DIRECTION_INHERIT_22760_ID() { return TEXT_DIRECTION_INHERIT_22760_ID_; }
    static jfieldID TEXT_DIRECTION_LOCALE_22765_ID_;
    static jfieldID& TEXT_DIRECTION_LOCALE_22765_ID() { return TEXT_DIRECTION_LOCALE_22765_ID_; }
    static jfieldID TEXT_DIRECTION_LTR_22763_ID_;
    static jfieldID& TEXT_DIRECTION_LTR_22763_ID() { return TEXT_DIRECTION_LTR_22763_ID_; }
    static jfieldID TEXT_DIRECTION_RTL_22764_ID_;
    static jfieldID& TEXT_DIRECTION_RTL_22764_ID() { return TEXT_DIRECTION_RTL_22764_ID_; }
    static jmethodID toString_22818_ID_;
    static jmethodID& toString_22818_ID() { return toString_22818_ID_; }
    static jfieldID TRANSLATION_X_22806_ID_;
    static jfieldID& TRANSLATION_X_22806_ID() { return TRANSLATION_X_22806_ID_; }
    static jfieldID TRANSLATION_Y_22807_ID_;
    static jfieldID& TRANSLATION_Y_22807_ID() { return TRANSLATION_Y_22807_ID_; }
    static jmethodID unscheduleDrawable_23166_ID_;
    static jmethodID& unscheduleDrawable_23166_ID() { return unscheduleDrawable_23166_ID_; }
    static jmethodID unscheduleDrawable_23167_ID_;
    static jmethodID& unscheduleDrawable_23167_ID() { return unscheduleDrawable_23167_ID_; }
    static jmethodID verifyDrawable_23168_ID_;
    static jmethodID& verifyDrawable_23168_ID() { return verifyDrawable_23168_ID_; }
    static jmethodID View_22815_ID_c_;
    static jmethodID& View_22815_ID_c() { return View_22815_ID_c_; }
    static jmethodID View_22816_ID_c_;
    static jmethodID& View_22816_ID_c() { return View_22816_ID_c_; }
    static jmethodID View_22817_ID_c_;
    static jmethodID& View_22817_ID_c() { return View_22817_ID_c_; }
    static jfieldID VISIBLE_22731_ID_;
    static jfieldID& VISIBLE_22731_ID() { return VISIBLE_22731_ID_; }
    static jmethodID willNotCacheDrawing_22910_ID_;
    static jmethodID& willNotCacheDrawing_22910_ID() { return willNotCacheDrawing_22910_ID_; }
    static jmethodID willNotDraw_22908_ID_;
    static jmethodID& willNotDraw_22908_ID() { return willNotDraw_22908_ID_; }
    static jfieldID X_22808_ID_;
    static jfieldID& X_22808_ID() { return X_22808_ID_; }
    static jfieldID Y_22809_ID_;
    static jfieldID& Y_22809_ID() { return Y_22809_ID_; }

    void ctor_4(::g::Android::android::content::Context* arg0);
    void ctor_5(::g::Android::android::content::Context* arg0, uObject* arg1);
    void ctor_6(::g::Android::android::content::Context* arg0, uObject* arg1, int arg2);
    void ctor_7(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    void addChildrenForAccessibility(::g::Android::java::util::ArrayList* arg0) { (((View_type*)__type)->fp_addChildrenForAccessibility)(this, arg0); }
    void addFocusables(::g::Android::java::util::ArrayList* arg0, int arg1);
    void addFocusables1(::g::Android::java::util::ArrayList* arg0, int arg1, int arg2) { (((View_type*)__type)->fp_addFocusables1)(this, arg0, &arg1, &arg2); }
    void addOnAttachStateChangeListener(uObject* arg0);
    void addOnLayoutChangeListener(uObject* arg0);
    void addTouchables(::g::Android::java::util::ArrayList* arg0) { (((View_type*)__type)->fp_addTouchables)(this, arg0); }
    ::g::Android::android::view::ViewPropertyAnimator* animate();
    void announceForAccessibility(uObject* arg0);
    void bringToFront();
    void buildDrawingCache();
    void buildDrawingCache1(bool arg0);
    void buildLayer() { (((View_type*)__type)->fp_buildLayer)(this); }
    bool callOnClick();
    void cancelLongPress() { (((View_type*)__type)->fp_cancelLongPress)(this); }
    void cancelPendingInputEvents();
    bool canResolveLayoutDirection();
    bool canResolveTextAlignment();
    bool canResolveTextDirection();
    bool canScrollHorizontally(int arg0);
    bool canScrollVertically(int arg0);
    bool checkInputConnectionProxy(View* arg0);
    void clearAnimation();
    void clearFocus() { (((View_type*)__type)->fp_clearFocus)(this); }
    void computeScroll() { (((View_type*)__type)->fp_computeScroll)(this); }
    ::g::Android::android::view::accessibility::AccessibilityNodeInfo* createAccessibilityNodeInfo();
    void createContextMenu(uObject* arg0);
    void destroyDrawingCache();
    void dispatchConfigurationChanged(::g::Android::android::content::res::Configuration* arg0) { (((View_type*)__type)->fp_dispatchConfigurationChanged)(this, arg0); }
    void dispatchDisplayHint(int arg0) { (((View_type*)__type)->fp_dispatchDisplayHint)(this, &arg0); }
    bool dispatchDragEvent(::g::Android::android::view::DragEvent* arg0) { bool __retval; return (((View_type*)__type)->fp_dispatchDragEvent)(this, arg0, &__retval), __retval; }
    bool dispatchGenericMotionEvent(::g::Android::android::view::MotionEvent* arg0);
    bool dispatchKeyEvent(::g::Android::android::view::KeyEvent* arg0) { bool __retval; return (((View_type*)__type)->fp_dispatchKeyEvent)(this, arg0, &__retval), __retval; }
    bool dispatchKeyEventPreIme(::g::Android::android::view::KeyEvent* arg0) { bool __retval; return (((View_type*)__type)->fp_dispatchKeyEventPreIme)(this, arg0, &__retval), __retval; }
    bool dispatchKeyShortcutEvent(::g::Android::android::view::KeyEvent* arg0) { bool __retval; return (((View_type*)__type)->fp_dispatchKeyShortcutEvent)(this, arg0, &__retval), __retval; }
    bool dispatchPopulateAccessibilityEvent(::g::Android::android::view::accessibility::AccessibilityEvent* arg0) { bool __retval; return (((View_type*)__type)->fp_dispatchPopulateAccessibilityEvent)(this, arg0, &__retval), __retval; }
    void dispatchSystemUiVisibilityChanged(int arg0) { (((View_type*)__type)->fp_dispatchSystemUiVisibilityChanged)(this, &arg0); }
    bool dispatchTouchEvent(::g::Android::android::view::MotionEvent* arg0) { bool __retval; return (((View_type*)__type)->fp_dispatchTouchEvent)(this, arg0, &__retval), __retval; }
    bool dispatchTrackballEvent(::g::Android::android::view::MotionEvent* arg0) { bool __retval; return (((View_type*)__type)->fp_dispatchTrackballEvent)(this, arg0, &__retval), __retval; }
    bool dispatchUnhandledMove(View* arg0, int arg1) { bool __retval; return (((View_type*)__type)->fp_dispatchUnhandledMove)(this, arg0, &arg1, &__retval), __retval; }
    void dispatchWindowFocusChanged(bool arg0) { (((View_type*)__type)->fp_dispatchWindowFocusChanged)(this, &arg0); }
    void dispatchWindowSystemUiVisiblityChanged(int arg0) { (((View_type*)__type)->fp_dispatchWindowSystemUiVisiblityChanged)(this, &arg0); }
    void dispatchWindowVisibilityChanged(int arg0) { (((View_type*)__type)->fp_dispatchWindowVisibilityChanged)(this, &arg0); }
    View* findFocus() { View* __retval; return (((View_type*)__type)->fp_findFocus)(this, &__retval), __retval; }
    View* findViewById(int arg0);
    void findViewsWithText(::g::Android::java::util::ArrayList* arg0, uObject* arg1, int arg2) { (((View_type*)__type)->fp_findViewsWithText)(this, arg0, arg1, &arg2); }
    View* findViewWithTag(::g::Android::java::lang::Object* arg0);
    View* focusSearch(int arg0);
    void forceLayout();
    int getAccessibilityLiveRegion();
    ::g::Android::android::view::accessibility::AccessibilityNodeProvider* getAccessibilityNodeProvider() { ::g::Android::android::view::accessibility::AccessibilityNodeProvider* __retval; return (((View_type*)__type)->fp_getAccessibilityNodeProvider)(this, &__retval), __retval; }
    float getAlpha();
    ::g::Android::android::view::animation::Animation* getAnimation();
    uObject* getApplicationWindowToken();
    ::g::Android::android::graphics::drawable::Drawable* getBackground();
    int getBaseline() { int __retval; return (((View_type*)__type)->fp_getBaseline)(this, &__retval), __retval; }
    int getBottom();
    float getCameraDistance();
    ::g::Android::android::graphics::Rect* getClipBounds();
    uObject* getContentDescription();
    ::g::Android::android::content::Context* getContext();
    ::g::Android::android::view::Display* getDisplay();
    ::g::Android::Runtime::IntArray* getDrawableState();
    ::g::Android::android::graphics::Bitmap* getDrawingCache();
    ::g::Android::android::graphics::Bitmap* getDrawingCache1(bool arg0);
    int getDrawingCacheBackgroundColor();
    int getDrawingCacheQuality();
    void getDrawingRect(::g::Android::android::graphics::Rect* arg0);
    int64_t getDrawingTime();
    bool getFilterTouchesWhenObscured();
    bool getFitsSystemWindows();
    ::g::Android::java::util::ArrayList* getFocusables(int arg0);
    void getFocusedRect(::g::Android::android::graphics::Rect* arg0) { (((View_type*)__type)->fp_getFocusedRect)(this, arg0); }
    bool getGlobalVisibleRect(::g::Android::android::graphics::Rect* arg0);
    bool getGlobalVisibleRect1(::g::Android::android::graphics::Rect* arg0, ::g::Android::android::graphics::Point* arg1);
    ::g::Android::android::os::Handler* getHandler();
    int getHeight();
    void getHitRect(::g::Android::android::graphics::Rect* arg0);
    int getHorizontalFadingEdgeLength();
    int getId();
    int getImportantForAccessibility();
    bool getKeepScreenOn();
    ::g::Android::android::view::KeyEventDLRDispatcherState* getKeyDispatcherState();
    int getLabelFor();
    int getLayerType() { int __retval; return (((View_type*)__type)->fp_getLayerType)(this, &__retval), __retval; }
    int getLayoutDirection();
    ::g::Android::android::view::ViewGroupDLRLayoutParams* getLayoutParams();
    int getLeft();
    bool getLocalVisibleRect(::g::Android::android::graphics::Rect* arg0);
    void getLocationInWindow(::g::Android::Runtime::IntArray* arg0);
    void getLocationOnScreen(::g::Android::Runtime::IntArray* arg0);
    ::g::Android::android::graphics::Matrix* getMatrix();
    int getMeasuredHeight();
    int getMeasuredHeightAndState();
    int getMeasuredState();
    int getMeasuredWidth();
    int getMeasuredWidthAndState();
    int getMinimumHeight();
    int getMinimumWidth();
    int getNextFocusDownId();
    int getNextFocusForwardId();
    int getNextFocusLeftId();
    int getNextFocusRightId();
    int getNextFocusUpId();
    uObject* getOnFocusChangeListener();
    ::g::Android::android::view::ViewOverlay* getOverlay();
    int getOverScrollMode();
    int getPaddingBottom();
    int getPaddingEnd();
    int getPaddingLeft();
    int getPaddingRight();
    int getPaddingStart();
    int getPaddingTop();
    uObject* getParent();
    uObject* getParentForAccessibility();
    float getPivotX();
    float getPivotY();
    ::g::Android::android::content::res::Resources* getResources();
    int getRight();
    View* getRootView();
    float getRotation();
    float getRotationX();
    float getRotationY();
    float getScaleX();
    float getScaleY();
    int getScrollBarDefaultDelayBeforeFade();
    int getScrollBarFadeDuration();
    int getScrollBarSize();
    int getScrollBarStyle();
    int getScrollX();
    int getScrollY();
    int getSolidColor();
    int getSystemUiVisibility();
    ::g::Android::java::lang::Object* getTag();
    ::g::Android::java::lang::Object* getTag1(int arg0);
    int getTextAlignment();
    int getTextDirection();
    int getTop();
    ::g::Android::java::util::ArrayList* getTouchables();
    ::g::Android::android::view::TouchDelegate* getTouchDelegate();
    float getTranslationX();
    float getTranslationY();
    int getVerticalFadingEdgeLength();
    int getVerticalScrollbarPosition();
    int getVerticalScrollbarWidth();
    ::g::Android::android::view::ViewTreeObserver* getViewTreeObserver();
    int getVisibility();
    int getWidth();
    ::g::Android::android::view::WindowId* getWindowId();
    int getWindowSystemUiVisibility();
    uObject* getWindowToken();
    int getWindowVisibility();
    void getWindowVisibleDisplayFrame(::g::Android::android::graphics::Rect* arg0);
    float getX();
    float getY();
    bool hasFocus() { bool __retval; return (((View_type*)__type)->fp_hasFocus)(this, &__retval), __retval; }
    bool hasFocusable() { bool __retval; return (((View_type*)__type)->fp_hasFocusable)(this, &__retval), __retval; }
    bool hasOnClickListeners();
    bool hasOverlappingRendering() { bool __retval; return (((View_type*)__type)->fp_hasOverlappingRendering)(this, &__retval), __retval; }
    bool hasTransientState() { bool __retval; return (((View_type*)__type)->fp_hasTransientState)(this, &__retval), __retval; }
    bool hasWindowFocus();
    void invalidate();
    void invalidate1(::g::Android::android::graphics::Rect* arg0);
    void invalidate2(int arg0, int arg1, int arg2, int arg3);
    void invalidateDrawable(::g::Android::android::graphics::drawable::Drawable* arg0) { (((View_type*)__type)->fp_invalidateDrawable)(this, arg0); }
    bool isActivated();
    bool isAttachedToWindow();
    bool isClickable();
    bool isDirty();
    bool isDrawingCacheEnabled();
    bool isDuplicateParentStateEnabled();
    bool isEnabled();
    bool isFocusable();
    bool isFocusableInTouchMode();
    bool isFocused();
    bool isHapticFeedbackEnabled();
    bool isHardwareAccelerated();
    bool isHorizontalFadingEdgeEnabled();
    bool isHorizontalScrollBarEnabled();
    bool isHovered();
    bool isInEditMode();
    bool isInLayout();
    bool isInTouchMode();
    bool isLaidOut();
    bool isLayoutDirectionResolved();
    bool isLayoutRequested();
    bool isLongClickable();
    bool isOpaque() { bool __retval; return (((View_type*)__type)->fp_isOpaque)(this, &__retval), __retval; }
    bool isPaddingRelative();
    bool isPressed();
    bool isSaveEnabled();
    bool isSaveFromParentEnabled();
    bool isScrollbarFadingEnabled();
    bool isScrollContainer();
    bool isSelected();
    bool isShown();
    bool isSoundEffectsEnabled();
    bool isTextAlignmentResolved();
    bool isTextDirectionResolved();
    bool isVerticalFadingEdgeEnabled();
    bool isVerticalScrollBarEnabled();
    void j_draw(::g::Android::android::graphics::Canvas* arg0) { (((View_type*)__type)->fp_j_draw)(this, arg0); }
    void jumpDrawablesToCurrentState() { (((View_type*)__type)->fp_jumpDrawablesToCurrentState)(this); }
    void layout(int arg0, int arg1, int arg2, int arg3) { (((View_type*)__type)->fp_layout)(this, &arg0, &arg1, &arg2, &arg3); }
    void measure(int arg0, int arg1);
    void offsetLeftAndRight(int arg0);
    void offsetTopAndBottom(int arg0);
    void onCancelPendingInputEvents();
    bool onCheckIsTextEditor() { bool __retval; return (((View_type*)__type)->fp_onCheckIsTextEditor)(this, &__retval), __retval; }
    uObject* onCreateInputConnection(::g::Android::android::view::inputmethod::EditorInfo* arg0) { uObject* __retval; return (((View_type*)__type)->fp_onCreateInputConnection)(this, arg0, &__retval), __retval; }
    bool onDragEvent(::g::Android::android::view::DragEvent* arg0) { bool __retval; return (((View_type*)__type)->fp_onDragEvent)(this, arg0, &__retval), __retval; }
    bool onFilterTouchEventForSecurity(::g::Android::android::view::MotionEvent* arg0);
    void onFinishTemporaryDetach() { (((View_type*)__type)->fp_onFinishTemporaryDetach)(this); }
    bool onGenericMotionEvent(::g::Android::android::view::MotionEvent* arg0) { bool __retval; return (((View_type*)__type)->fp_onGenericMotionEvent)(this, arg0, &__retval), __retval; }
    void onHoverChanged(bool arg0);
    bool onHoverEvent(::g::Android::android::view::MotionEvent* arg0) { bool __retval; return (((View_type*)__type)->fp_onHoverEvent)(this, arg0, &__retval), __retval; }
    void onInitializeAccessibilityEvent(::g::Android::android::view::accessibility::AccessibilityEvent* arg0) { (((View_type*)__type)->fp_onInitializeAccessibilityEvent)(this, arg0); }
    void onInitializeAccessibilityNodeInfo(::g::Android::android::view::accessibility::AccessibilityNodeInfo* arg0) { (((View_type*)__type)->fp_onInitializeAccessibilityNodeInfo)(this, arg0); }
    bool onKeyDown(int arg0, ::g::Android::android::view::KeyEvent* arg1) { bool __retval; return (((View_type*)__type)->fp_onKeyDown)(this, &arg0, arg1, &__retval), __retval; }
    bool onKeyLongPress(int arg0, ::g::Android::android::view::KeyEvent* arg1);
    bool onKeyMultiple(int arg0, int arg1, ::g::Android::android::view::KeyEvent* arg2) { bool __retval; return (((View_type*)__type)->fp_onKeyMultiple)(this, &arg0, &arg1, arg2, &__retval), __retval; }
    bool onKeyPreIme(int arg0, ::g::Android::android::view::KeyEvent* arg1) { bool __retval; return (((View_type*)__type)->fp_onKeyPreIme)(this, &arg0, arg1, &__retval), __retval; }
    bool onKeyShortcut(int arg0, ::g::Android::android::view::KeyEvent* arg1) { bool __retval; return (((View_type*)__type)->fp_onKeyShortcut)(this, &arg0, arg1, &__retval), __retval; }
    bool onKeyUp(int arg0, ::g::Android::android::view::KeyEvent* arg1) { bool __retval; return (((View_type*)__type)->fp_onKeyUp)(this, &arg0, arg1, &__retval), __retval; }
    void onPopulateAccessibilityEvent(::g::Android::android::view::accessibility::AccessibilityEvent* arg0) { (((View_type*)__type)->fp_onPopulateAccessibilityEvent)(this, arg0); }
    void onRtlPropertiesChanged(int arg0) { (((View_type*)__type)->fp_onRtlPropertiesChanged)(this, &arg0); }
    void onScreenStateChanged(int arg0) { (((View_type*)__type)->fp_onScreenStateChanged)(this, &arg0); }
    void onScrollChanged(int arg0, int arg1, int arg2, int arg3) { (((View_type*)__type)->fp_onScrollChanged)(this, &arg0, &arg1, &arg2, &arg3); }
    void onStartTemporaryDetach() { (((View_type*)__type)->fp_onStartTemporaryDetach)(this); }
    bool onTouchEvent(::g::Android::android::view::MotionEvent* arg0) { bool __retval; return (((View_type*)__type)->fp_onTouchEvent)(this, arg0, &__retval), __retval; }
    bool onTrackballEvent(::g::Android::android::view::MotionEvent* arg0) { bool __retval; return (((View_type*)__type)->fp_onTrackballEvent)(this, arg0, &__retval), __retval; }
    void onWindowFocusChanged(bool arg0) { (((View_type*)__type)->fp_onWindowFocusChanged)(this, &arg0); }
    void onWindowSystemUiVisibilityChanged(int arg0);
    bool performAccessibilityAction(int arg0, ::g::Android::android::os::Bundle* arg1) { bool __retval; return (((View_type*)__type)->fp_performAccessibilityAction)(this, &arg0, arg1, &__retval), __retval; }
    bool performClick() { bool __retval; return (((View_type*)__type)->fp_performClick)(this, &__retval), __retval; }
    bool performHapticFeedback(int arg0);
    bool performHapticFeedback1(int arg0, int arg1);
    bool performLongClick() { bool __retval; return (((View_type*)__type)->fp_performLongClick)(this, &__retval), __retval; }
    void playSoundEffect(int arg0);
    bool post(uObject* arg0);
    bool postDelayed(uObject* arg0, int64_t arg1);
    void postInvalidate() { (((View_type*)__type)->fp_postInvalidate)(this); }
    void postInvalidate1(int arg0, int arg1, int arg2, int arg3);
    void postInvalidateDelayed(int64_t arg0);
    void postInvalidateDelayed1(int64_t arg0, int arg1, int arg2, int arg3, int arg4);
    void postInvalidateOnAnimation();
    void postInvalidateOnAnimation1(int arg0, int arg1, int arg2, int arg3);
    void postOnAnimation(uObject* arg0);
    void postOnAnimationDelayed(uObject* arg0, int64_t arg1);
    void refreshDrawableState();
    bool removeCallbacks(uObject* arg0);
    void removeOnAttachStateChangeListener(uObject* arg0);
    void removeOnLayoutChangeListener(uObject* arg0);
    void requestFitSystemWindows();
    bool requestFocus();
    bool requestFocus1(int arg0);
    bool requestFocus2(int arg0, ::g::Android::android::graphics::Rect* arg1) { bool __retval; return (((View_type*)__type)->fp_requestFocus2)(this, &arg0, arg1, &__retval), __retval; }
    bool requestFocusFromTouch();
    void requestLayout() { (((View_type*)__type)->fp_requestLayout)(this); }
    bool requestRectangleOnScreen(::g::Android::android::graphics::Rect* arg0);
    bool requestRectangleOnScreen1(::g::Android::android::graphics::Rect* arg0, bool arg1);
    void restoreHierarchyState(::g::Android::android::util::SparseArray* arg0);
    void saveHierarchyState(::g::Android::android::util::SparseArray* arg0);
    void scheduleDrawable(::g::Android::android::graphics::drawable::Drawable* arg0, uObject* arg1, int64_t arg2);
    void scrollBy(int arg0, int arg1);
    void scrollTo(int arg0, int arg1) { (((View_type*)__type)->fp_scrollTo)(this, &arg0, &arg1); }
    void sendAccessibilityEvent(int arg0) { (((View_type*)__type)->fp_sendAccessibilityEvent)(this, &arg0); }
    void sendAccessibilityEventUnchecked(::g::Android::android::view::accessibility::AccessibilityEvent* arg0);
    void setAccessibilityDelegate(::g::Android::android::view::ViewDLRAccessibilityDelegate* arg0);
    void setAccessibilityLiveRegion(int arg0);
    void setActivated(bool arg0);
    void setAlpha(float arg0);
    void setAnimation(::g::Android::android::view::animation::Animation* arg0);
    void setBackground(::g::Android::android::graphics::drawable::Drawable* arg0);
    void setBackgroundColor(int arg0) { (((View_type*)__type)->fp_setBackgroundColor)(this, &arg0); }
    void setBackgroundDrawable(::g::Android::android::graphics::drawable::Drawable* arg0);
    void setBackgroundResource(int arg0);
    void setBottom(int arg0);
    void setCameraDistance(float arg0);
    void setClickable(bool arg0);
    void setClipBounds(::g::Android::android::graphics::Rect* arg0);
    void setContentDescription(uObject* arg0);
    void setDrawingCacheBackgroundColor(int arg0);
    void setDrawingCacheEnabled(bool arg0);
    void setDrawingCacheQuality(int arg0);
    void setDuplicateParentStateEnabled(bool arg0);
    void setEnabled(bool arg0) { (((View_type*)__type)->fp_setEnabled)(this, &arg0); }
    void setFadingEdgeLength(int arg0);
    void setFilterTouchesWhenObscured(bool arg0);
    void setFitsSystemWindows(bool arg0);
    void setFocusable(bool arg0);
    void setFocusableInTouchMode(bool arg0);
    void setHapticFeedbackEnabled(bool arg0);
    void setHasTransientState(bool arg0);
    void setHorizontalFadingEdgeEnabled(bool arg0);
    void setHorizontalScrollBarEnabled(bool arg0);
    void setHovered(bool arg0);
    void setId(int arg0);
    void setImportantForAccessibility(int arg0);
    void setKeepScreenOn(bool arg0);
    void setLabelFor(int arg0);
    void setLayerPaint(::g::Android::android::graphics::Paint* arg0);
    void setLayerType(int arg0, ::g::Android::android::graphics::Paint* arg1) { (((View_type*)__type)->fp_setLayerType)(this, &arg0, arg1); }
    void setLayoutDirection(int arg0);
    void setLayoutParams(::g::Android::android::view::ViewGroupDLRLayoutParams* arg0) { (((View_type*)__type)->fp_setLayoutParams)(this, arg0); }
    void setLeft(int arg0);
    void setLongClickable(bool arg0);
    void setMinimumHeight(int arg0);
    void setMinimumWidth(int arg0);
    void setNextFocusDownId(int arg0);
    void setNextFocusForwardId(int arg0);
    void setNextFocusLeftId(int arg0);
    void setNextFocusRightId(int arg0);
    void setNextFocusUpId(int arg0);
    void setOnClickListener(uObject* arg0);
    void setOnCreateContextMenuListener(uObject* arg0);
    void setOnDragListener(uObject* arg0);
    void setOnFocusChangeListener(uObject* arg0);
    void setOnGenericMotionListener(uObject* arg0);
    void setOnHoverListener(uObject* arg0);
    void setOnKeyListener(uObject* arg0);
    void setOnLongClickListener(uObject* arg0);
    void setOnSystemUiVisibilityChangeListener(uObject* arg0);
    void setOnTouchListener(uObject* arg0);
    void setOverScrollMode(int arg0) { (((View_type*)__type)->fp_setOverScrollMode)(this, &arg0); }
    void setPadding(int arg0, int arg1, int arg2, int arg3) { (((View_type*)__type)->fp_setPadding)(this, &arg0, &arg1, &arg2, &arg3); }
    void setPaddingRelative(int arg0, int arg1, int arg2, int arg3) { (((View_type*)__type)->fp_setPaddingRelative)(this, &arg0, &arg1, &arg2, &arg3); }
    void setPivotX(float arg0);
    void setPivotY(float arg0);
    void setPressed(bool arg0);
    void setRight(int arg0);
    void setRotation(float arg0);
    void setRotationX(float arg0);
    void setRotationY(float arg0);
    void setSaveEnabled(bool arg0);
    void setSaveFromParentEnabled(bool arg0);
    void setScaleX(float arg0);
    void setScaleY(float arg0);
    void setScrollBarDefaultDelayBeforeFade(int arg0);
    void setScrollBarFadeDuration(int arg0);
    void setScrollbarFadingEnabled(bool arg0);
    void setScrollBarSize(int arg0);
    void setScrollBarStyle(int arg0) { (((View_type*)__type)->fp_setScrollBarStyle)(this, &arg0); }
    void setScrollContainer(bool arg0);
    void setScrollX(int arg0);
    void setScrollY(int arg0);
    void setSelected(bool arg0) { (((View_type*)__type)->fp_setSelected)(this, &arg0); }
    void setSoundEffectsEnabled(bool arg0);
    void setSystemUiVisibility(int arg0);
    void setTag(::g::Android::java::lang::Object* arg0);
    void setTag1(int arg0, ::g::Android::java::lang::Object* arg1);
    void setTextAlignment(int arg0);
    void setTextDirection(int arg0);
    void setTop(int arg0);
    void setTouchDelegate(::g::Android::android::view::TouchDelegate* arg0);
    void setTranslationX(float arg0);
    void setTranslationY(float arg0);
    void setVerticalFadingEdgeEnabled(bool arg0);
    void setVerticalScrollBarEnabled(bool arg0);
    void setVerticalScrollbarPosition(int arg0);
    void setVisibility(int arg0) { (((View_type*)__type)->fp_setVisibility)(this, &arg0); }
    void setWillNotCacheDrawing(bool arg0);
    void setWillNotDraw(bool arg0);
    void setX(float arg0);
    void setY(float arg0);
    bool showContextMenu();
    ::g::Android::android::view::ActionMode* startActionMode(uObject* arg0);
    void startAnimation(::g::Android::android::view::animation::Animation* arg0);
    bool startDrag(::g::Android::android::content::ClipData* arg0, ::g::Android::android::view::ViewDLRDragShadowBuilder* arg1, ::g::Android::java::lang::Object* arg2, int arg3);
    void unscheduleDrawable(::g::Android::android::graphics::drawable::Drawable* arg0);
    void unscheduleDrawable1(::g::Android::android::graphics::drawable::Drawable* arg0, uObject* arg1);
    bool willNotCacheDrawing();
    bool willNotDraw();
    static void _Init2();
    static void addChildrenForAccessibility(View* __this, ::g::Android::java::util::ArrayList* arg0) { View__addChildrenForAccessibility_fn(__this, arg0); }
    static void addChildrenForAccessibility_IMPL_22943(bool arg0_, jobject arg1_, uObject* arg2_);
    static void addFocusables1(View* __this, ::g::Android::java::util::ArrayList* arg0, int arg1, int arg2) { View__addFocusables1_fn(__this, arg0, &arg1, &arg2); }
    static void addFocusables_IMPL_22929(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
    static void addFocusables_IMPL_22930(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, int arg4_);
    static void addOnAttachStateChangeListener_IMPL_22831(bool arg0_, jobject arg1_, uObject* arg2_);
    static void addOnLayoutChangeListener_IMPL_22829(bool arg0_, jobject arg1_, uObject* arg2_);
    static void addTouchables(View* __this, ::g::Android::java::util::ArrayList* arg0) { View__addTouchables_fn(__this, arg0); }
    static void addTouchables_IMPL_22933(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* animate_IMPL_23258(bool arg0_, jobject arg1_);
    static void announceForAccessibility_IMPL_22855(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool awakenScrollBars_IMPL_23060(bool arg0_, jobject arg1_);
    static bool awakenScrollBars_IMPL_23061(bool arg0_, jobject arg1_, int arg2_);
    static bool awakenScrollBars_IMPL_23062(bool arg0_, jobject arg1_, int arg2_, bool arg3_);
    static void bringToFront_IMPL_22995(bool arg0_, jobject arg1_);
    static void buildDrawingCache_IMPL_23145(bool arg0_, jobject arg1_);
    static void buildDrawingCache_IMPL_23146(bool arg0_, jobject arg1_, bool arg2_);
    static void buildLayer(View* __this) { View__buildLayer_fn(__this); }
    static void buildLayer_IMPL_23137(bool arg0_, jobject arg1_);
    static bool callOnClick_IMPL_22839(bool arg0_, jobject arg1_);
    static void cancelLongPress(View* __this) { View__cancelLongPress_fn(__this); }
    static void cancelLongPress_IMPL_22992(bool arg0_, jobject arg1_);
    static void cancelPendingInputEvents_IMPL_23123(bool arg0_, jobject arg1_);
    static bool canResolveLayoutDirection_IMPL_23115(bool arg0_, jobject arg1_);
    static bool canResolveTextAlignment_IMPL_23255(bool arg0_, jobject arg1_);
    static bool canResolveTextDirection_IMPL_23251(bool arg0_, jobject arg1_);
    static bool canScrollHorizontally_IMPL_23108(bool arg0_, jobject arg1_, int arg2_);
    static bool canScrollVertically_IMPL_23109(bool arg0_, jobject arg1_, int arg2_);
    static bool checkInputConnectionProxy_IMPL_22981(bool arg0_, jobject arg1_, uObject* arg2_);
    static void clearAnimation_IMPL_23226(bool arg0_, jobject arg1_);
    static void clearFocus(View* __this) { View__clearFocus_fn(__this); }
    static void clearFocus_IMPL_22850(bool arg0_, jobject arg1_);
    static int combineMeasuredStates(int arg0, int arg1);
    static int combineMeasuredStates_IMPL_23214(int arg0_, int arg1_);
    static int computeHorizontalScrollExtent_IMPL_23104(bool arg0_, jobject arg1_);
    static int computeHorizontalScrollOffset_IMPL_23103(bool arg0_, jobject arg1_);
    static int computeHorizontalScrollRange_IMPL_23102(bool arg0_, jobject arg1_);
    static void computeScroll(View* __this) { View__computeScroll_fn(__this); }
    static void computeScroll_IMPL_23079(bool arg0_, jobject arg1_);
    static int computeVerticalScrollExtent_IMPL_23107(bool arg0_, jobject arg1_);
    static int computeVerticalScrollOffset_IMPL_23106(bool arg0_, jobject arg1_);
    static int computeVerticalScrollRange_IMPL_23105(bool arg0_, jobject arg1_);
    static uObject* createAccessibilityNodeInfo_IMPL_22860(bool arg0_, jobject arg1_);
    static void createContextMenu_IMPL_22982(bool arg0_, jobject arg1_, uObject* arg2_);
    static void destroyDrawingCache_IMPL_23142(bool arg0_, jobject arg1_);
    static void dispatchConfigurationChanged(View* __this, ::g::Android::android::content::res::Configuration* arg0) { View__dispatchConfigurationChanged_fn(__this, arg0); }
    static void dispatchConfigurationChanged_IMPL_22969(bool arg0_, jobject arg1_, uObject* arg2_);
    static void dispatchDisplayHint(View* __this, int arg0) { View__dispatchDisplayHint_fn(__this, &arg0); }
    static void dispatchDisplayHint_IMPL_22963(bool arg0_, jobject arg1_, int arg2_);
    static bool dispatchDragEvent(View* __this, ::g::Android::android::view::DragEvent* arg0) { bool __retval; return View__dispatchDragEvent_fn(__this, arg0, &__retval), __retval; }
    static bool dispatchDragEvent_IMPL_23243(bool arg0_, jobject arg1_, uObject* arg2_);
    static void dispatchDraw_IMPL_22998(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool dispatchGenericFocusedEvent_IMPL_22957(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool dispatchGenericMotionEvent_IMPL_22954(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool dispatchGenericPointerEvent_IMPL_22956(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool dispatchHoverEvent_IMPL_22955(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool dispatchKeyEvent(View* __this, ::g::Android::android::view::KeyEvent* arg0) { bool __retval; return View__dispatchKeyEvent_fn(__this, arg0, &__retval), __retval; }
    static bool dispatchKeyEvent_IMPL_22949(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool dispatchKeyEventPreIme(View* __this, ::g::Android::android::view::KeyEvent* arg0) { bool __retval; return View__dispatchKeyEventPreIme_fn(__this, arg0, &__retval), __retval; }
    static bool dispatchKeyEventPreIme_IMPL_22948(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool dispatchKeyShortcutEvent(View* __this, ::g::Android::android::view::KeyEvent* arg0) { bool __retval; return View__dispatchKeyShortcutEvent_fn(__this, arg0, &__retval), __retval; }
    static bool dispatchKeyShortcutEvent_IMPL_22950(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool dispatchPopulateAccessibilityEvent(View* __this, ::g::Android::android::view::accessibility::AccessibilityEvent* arg0) { bool __retval; return View__dispatchPopulateAccessibilityEvent_fn(__this, arg0, &__retval), __retval; }
    static bool dispatchPopulateAccessibilityEvent_IMPL_22857(bool arg0_, jobject arg1_, uObject* arg2_);
    static void dispatchRestoreInstanceState_IMPL_23129(bool arg0_, jobject arg1_, uObject* arg2_);
    static void dispatchSaveInstanceState_IMPL_23126(bool arg0_, jobject arg1_, uObject* arg2_);
    static void dispatchSetActivated_IMPL_23193(bool arg0_, jobject arg1_, bool arg2_);
    static void dispatchSetPressed_IMPL_22916(bool arg0_, jobject arg1_, bool arg2_);
    static void dispatchSetSelected_IMPL_23190(bool arg0_, jobject arg1_, bool arg2_);
    static void dispatchSystemUiVisibilityChanged(View* __this, int arg0) { View__dispatchSystemUiVisibilityChanged_fn(__this, &arg0); }
    static void dispatchSystemUiVisibilityChanged_IMPL_23240(bool arg0_, jobject arg1_, int arg2_);
    static bool dispatchTouchEvent(View* __this, ::g::Android::android::view::MotionEvent* arg0) { bool __retval; return View__dispatchTouchEvent_fn(__this, arg0, &__retval), __retval; }
    static bool dispatchTouchEvent_IMPL_22951(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool dispatchTrackballEvent(View* __this, ::g::Android::android::view::MotionEvent* arg0) { bool __retval; return View__dispatchTrackballEvent_fn(__this, arg0, &__retval), __retval; }
    static bool dispatchTrackballEvent_IMPL_22953(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool dispatchUnhandledMove(View* __this, View* arg0, int arg1) { bool __retval; return View__dispatchUnhandledMove_fn(__this, arg0, &arg1, &__retval), __retval; }
    static bool dispatchUnhandledMove_IMPL_22927(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
    static void dispatchVisibilityChanged_IMPL_22961(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
    static void dispatchWindowFocusChanged(View* __this, bool arg0) { View__dispatchWindowFocusChanged_fn(__this, &arg0); }
    static void dispatchWindowFocusChanged_IMPL_22958(bool arg0_, jobject arg1_, bool arg2_);
    static void dispatchWindowSystemUiVisiblityChanged(View* __this, int arg0) { View__dispatchWindowSystemUiVisiblityChanged_fn(__this, &arg0); }
    static void dispatchWindowSystemUiVisiblityChanged_IMPL_23238(bool arg0_, jobject arg1_, int arg2_);
    static void dispatchWindowVisibilityChanged(View* __this, int arg0) { View__dispatchWindowVisibilityChanged_fn(__this, &arg0); }
    static void dispatchWindowVisibilityChanged_IMPL_22965(bool arg0_, jobject arg1_, int arg2_);
    static void drawableStateChanged_IMPL_23169(bool arg0_, jobject arg1_);
    static View* findFocus(View* __this) { View* __retval; return View__findFocus_fn(__this, &__retval), __retval; }
    static uObject* findFocus_IMPL_22869(bool arg0_, jobject arg1_);
    static uObject* findViewById_IMPL_23199(bool arg0_, jobject arg1_, int arg2_);
    static void findViewsWithText(View* __this, ::g::Android::java::util::ArrayList* arg0, uObject* arg1, int arg2) { View__findViewsWithText_fn(__this, arg0, arg1, &arg2); }
    static void findViewsWithText_IMPL_22931(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, int arg4_);
    static uObject* findViewWithTag_IMPL_23200(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool fitSystemWindows_IMPL_22887(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* focusSearch_IMPL_22926(bool arg0_, jobject arg1_, int arg2_);
    static void forceLayout_IMPL_23210(bool arg0_, jobject arg1_);
    static int generateViewId();
    static int generateViewId_IMPL_23257();
    static int getAccessibilityLiveRegion_IMPL_22940(bool arg0_, jobject arg1_);
    static ::g::Android::android::view::accessibility::AccessibilityNodeProvider* getAccessibilityNodeProvider(View* __this) { ::g::Android::android::view::accessibility::AccessibilityNodeProvider* __retval; return View__getAccessibilityNodeProvider_fn(__this, &__retval), __retval; }
    static uObject* getAccessibilityNodeProvider_IMPL_22863(bool arg0_, jobject arg1_);
    static float getAlpha_IMPL_23029(bool arg0_, jobject arg1_);
    static uObject* getAnimation_IMPL_23224(bool arg0_, jobject arg1_);
    static uObject* getApplicationWindowToken_IMPL_23121(bool arg0_, jobject arg1_);
    static uObject* getBackground_IMPL_23179(bool arg0_, jobject arg1_);
    static int getBaseline(View* __this) { int __retval; return View__getBaseline_fn(__this, &__retval), __retval; }
    static int getBaseline_IMPL_23207(bool arg0_, jobject arg1_);
    static int getBottom_IMPL_23034(bool arg0_, jobject arg1_);
    static float getBottomFadingEdgeStrength_IMPL_23085(bool arg0_, jobject arg1_);
    static int getBottomPaddingOffset_IMPL_23152(bool arg0_, jobject arg1_);
    static float getCameraDistance_IMPL_23013(bool arg0_, jobject arg1_);
    static uObject* getClipBounds_IMPL_23155(bool arg0_, jobject arg1_);
    static uObject* getContentDescription_IMPL_22864(bool arg0_, jobject arg1_);
    static uObject* getContext_IMPL_22972(bool arg0_, jobject arg1_);
    static uObject* getContextMenuInfo_IMPL_22983(bool arg0_, jobject arg1_);
    static int getDefaultSize(int arg0, int arg1);
    static int getDefaultSize_IMPL_23217(int arg0_, int arg1_);
    static uObject* getDisplay_IMPL_23122(bool arg0_, jobject arg1_);
    static uObject* getDrawableState_IMPL_23171(bool arg0_, jobject arg1_);
    static uObject* getDrawingCache_IMPL_23140(bool arg0_, jobject arg1_);
    static uObject* getDrawingCache_IMPL_23141(bool arg0_, jobject arg1_, bool arg2_);
    static int getDrawingCacheBackgroundColor_IMPL_23144(bool arg0_, jobject arg1_);
    static int getDrawingCacheQuality_IMPL_22872(bool arg0_, jobject arg1_);
    static void getDrawingRect_IMPL_23006(bool arg0_, jobject arg1_, uObject* arg2_);
    static int64_t getDrawingTime_IMPL_23131(bool arg0_, jobject arg1_);
    static bool getFilterTouchesWhenObscured_IMPL_22920(bool arg0_, jobject arg1_);
    static bool getFitsSystemWindows_IMPL_22889(bool arg0_, jobject arg1_);
    static uObject* getFocusables_IMPL_22928(bool arg0_, jobject arg1_, int arg2_);
    static void getFocusedRect(View* __this, ::g::Android::android::graphics::Rect* arg0) { View__getFocusedRect_fn(__this, arg0); }
    static void getFocusedRect_IMPL_23050(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool getGlobalVisibleRect_IMPL_23051(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
    static bool getGlobalVisibleRect_IMPL_23052(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* getHandler_IMPL_23067(bool arg0_, jobject arg1_);
    static int getHeight_IMPL_23005(bool arg0_, jobject arg1_);
    static void getHitRect_IMPL_23049(bool arg0_, jobject arg1_, uObject* arg2_);
    static int getHorizontalFadingEdgeLength_IMPL_22822(bool arg0_, jobject arg1_);
    static int getHorizontalScrollbarHeight_IMPL_22824(bool arg0_, jobject arg1_);
    static int getId_IMPL_23202(bool arg0_, jobject arg1_);
    static int getImportantForAccessibility_IMPL_22938(bool arg0_, jobject arg1_);
    static bool getKeepScreenOn_IMPL_22874(bool arg0_, jobject arg1_);
    static uObject* getKeyDispatcherState_IMPL_22947(bool arg0_, jobject arg1_);
    static int getLabelFor_IMPL_22866(bool arg0_, jobject arg1_);
    static int getLayerType(View* __this) { int __retval; return View__getLayerType_fn(__this, &__retval), __retval; }
    static int getLayerType_IMPL_23136(bool arg0_, jobject arg1_);
    static int getLayoutDirection_IMPL_22902(bool arg0_, jobject arg1_);
    static uObject* getLayoutParams_IMPL_23056(bool arg0_, jobject arg1_);
    static int getLeft_IMPL_23037(bool arg0_, jobject arg1_);
    static float getLeftFadingEdgeStrength_IMPL_23086(bool arg0_, jobject arg1_);
    static int getLeftPaddingOffset_IMPL_23149(bool arg0_, jobject arg1_);
    static bool getLocalVisibleRect_IMPL_23053(bool arg0_, jobject arg1_, uObject* arg2_);
    static void getLocationInWindow_IMPL_23198(bool arg0_, jobject arg1_, uObject* arg2_);
    static void getLocationOnScreen_IMPL_23197(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* getMatrix_IMPL_23012(bool arg0_, jobject arg1_);
    static int getMeasuredHeight_IMPL_23009(bool arg0_, jobject arg1_);
    static int getMeasuredHeightAndState_IMPL_23010(bool arg0_, jobject arg1_);
    static int getMeasuredState_IMPL_23011(bool arg0_, jobject arg1_);
    static int getMeasuredWidth_IMPL_23007(bool arg0_, jobject arg1_);
    static int getMeasuredWidthAndState_IMPL_23008(bool arg0_, jobject arg1_);
    static int getMinimumHeight_IMPL_23220(bool arg0_, jobject arg1_);
    static int getMinimumWidth_IMPL_23222(bool arg0_, jobject arg1_);
    static int getNextFocusDownId_IMPL_22882(bool arg0_, jobject arg1_);
    static int getNextFocusForwardId_IMPL_22884(bool arg0_, jobject arg1_);
    static int getNextFocusLeftId_IMPL_22876(bool arg0_, jobject arg1_);
    static int getNextFocusRightId_IMPL_22878(bool arg0_, jobject arg1_);
    static int getNextFocusUpId_IMPL_22880(bool arg0_, jobject arg1_);
    static uObject* getOnFocusChangeListener_IMPL_22833(bool arg0_, jobject arg1_);
    static uObject* getOverlay_IMPL_23157(bool arg0_, jobject arg1_);
    static int getOverScrollMode_IMPL_23247(bool arg0_, jobject arg1_);
    static int getPaddingBottom_IMPL_23183(bool arg0_, jobject arg1_);
    static int getPaddingEnd_IMPL_23187(bool arg0_, jobject arg1_);
    static int getPaddingLeft_IMPL_23184(bool arg0_, jobject arg1_);
    static int getPaddingRight_IMPL_23186(bool arg0_, jobject arg1_);
    static int getPaddingStart_IMPL_23185(bool arg0_, jobject arg1_);
    static int getPaddingTop_IMPL_23182(bool arg0_, jobject arg1_);
    static uObject* getParent_IMPL_22999(bool arg0_, jobject arg1_);
    static uObject* getParentForAccessibility_IMPL_22942(bool arg0_, jobject arg1_);
    static float getPivotX_IMPL_23025(bool arg0_, jobject arg1_);
    static float getPivotY_IMPL_23027(bool arg0_, jobject arg1_);
    static uObject* getResources_IMPL_23163(bool arg0_, jobject arg1_);
    static int getRight_IMPL_23039(bool arg0_, jobject arg1_);
    static float getRightFadingEdgeStrength_IMPL_23087(bool arg0_, jobject arg1_);
    static int getRightPaddingOffset_IMPL_23150(bool arg0_, jobject arg1_);
    static uObject* getRootView_IMPL_23196(bool arg0_, jobject arg1_);
    static float getRotation_IMPL_23015(bool arg0_, jobject arg1_);
    static float getRotationX_IMPL_23019(bool arg0_, jobject arg1_);
    static float getRotationY_IMPL_23017(bool arg0_, jobject arg1_);
    static float getScaleX_IMPL_23021(bool arg0_, jobject arg1_);
    static float getScaleY_IMPL_23023(bool arg0_, jobject arg1_);
    static int getScrollBarDefaultDelayBeforeFade_IMPL_23094(bool arg0_, jobject arg1_);
    static int getScrollBarFadeDuration_IMPL_23096(bool arg0_, jobject arg1_);
    static int getScrollBarSize_IMPL_23098(bool arg0_, jobject arg1_);
    static int getScrollBarStyle_IMPL_23101(bool arg0_, jobject arg1_);
    static int getScrollX_IMPL_23002(bool arg0_, jobject arg1_);
    static int getScrollY_IMPL_23003(bool arg0_, jobject arg1_);
    static int getSolidColor_IMPL_23158(bool arg0_, jobject arg1_);
    static int getSuggestedMinimumHeight_IMPL_23218(bool arg0_, jobject arg1_);
    static int getSuggestedMinimumWidth_IMPL_23219(bool arg0_, jobject arg1_);
    static int getSystemUiVisibility_IMPL_23235(bool arg0_, jobject arg1_);
    static uObject* getTag_IMPL_23203(bool arg0_, jobject arg1_);
    static uObject* getTag_IMPL_23205(bool arg0_, jobject arg1_, int arg2_);
    static int getTextAlignment_IMPL_23254(bool arg0_, jobject arg1_);
    static int getTextDirection_IMPL_23250(bool arg0_, jobject arg1_);
    static int getTop_IMPL_23032(bool arg0_, jobject arg1_);
    static float getTopFadingEdgeStrength_IMPL_23084(bool arg0_, jobject arg1_);
    static int getTopPaddingOffset_IMPL_23151(bool arg0_, jobject arg1_);
    static uObject* getTouchables_IMPL_22932(bool arg0_, jobject arg1_);
    static uObject* getTouchDelegate_IMPL_22994(bool arg0_, jobject arg1_);
    static float getTranslationX_IMPL_23045(bool arg0_, jobject arg1_);
    static float getTranslationY_IMPL_23047(bool arg0_, jobject arg1_);
    static int getVerticalFadingEdgeLength_IMPL_22820(bool arg0_, jobject arg1_);
    static int getVerticalScrollbarPosition_IMPL_22827(bool arg0_, jobject arg1_);
    static int getVerticalScrollbarWidth_IMPL_22823(bool arg0_, jobject arg1_);
    static uObject* getViewTreeObserver_IMPL_23195(bool arg0_, jobject arg1_);
    static int getVisibility_IMPL_22891(bool arg0_, jobject arg1_);
    static int getWidth_IMPL_23004(bool arg0_, jobject arg1_);
    static int getWindowAttachCount_IMPL_23118(bool arg0_, jobject arg1_);
    static uObject* getWindowId_IMPL_23120(bool arg0_, jobject arg1_);
    static int getWindowSystemUiVisibility_IMPL_23236(bool arg0_, jobject arg1_);
    static uObject* getWindowToken_IMPL_23119(bool arg0_, jobject arg1_);
    static int getWindowVisibility_IMPL_22967(bool arg0_, jobject arg1_);
    static void getWindowVisibleDisplayFrame_IMPL_22968(bool arg0_, jobject arg1_, uObject* arg2_);
    static float getX_IMPL_23041(bool arg0_, jobject arg1_);
    static float getY_IMPL_23043(bool arg0_, jobject arg1_);
    static bool hasFocus(View* __this) { bool __retval; return View__hasFocus_fn(__this, &__retval), __retval; }
    static bool hasFocus_IMPL_22851(bool arg0_, jobject arg1_);
    static bool hasFocusable(View* __this) { bool __retval; return View__hasFocusable_fn(__this, &__retval), __retval; }
    static bool hasFocusable_IMPL_22852(bool arg0_, jobject arg1_);
    static bool hasOnClickListeners_IMPL_22835(bool arg0_, jobject arg1_);
    static bool hasOverlappingRendering(View* __this) { bool __retval; return View__hasOverlappingRendering_fn(__this, &__retval), __retval; }
    static bool hasOverlappingRendering_IMPL_23030(bool arg0_, jobject arg1_);
    static bool hasTransientState(View* __this) { bool __retval; return View__hasTransientState_fn(__this, &__retval), __retval; }
    static bool hasTransientState_IMPL_22903(bool arg0_, jobject arg1_);
    static bool hasWindowFocus_IMPL_22960(bool arg0_, jobject arg1_);
    static View* inflate(::g::Android::android::content::Context* arg0, int arg1, ::g::Android::android::view::ViewGroup* arg2);
    static uObject* inflate_IMPL_23244(uObject* arg0_, int arg1_, uObject* arg2_);
    static void initializeFadingEdge_IMPL_22819(bool arg0_, jobject arg1_, uObject* arg2_);
    static void initializeScrollbars_IMPL_22825(bool arg0_, jobject arg1_, uObject* arg2_);
    static void invalidate_IMPL_23063(bool arg0_, jobject arg1_, uObject* arg2_);
    static void invalidate_IMPL_23064(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
    static void invalidate_IMPL_23065(bool arg0_, jobject arg1_);
    static void invalidateDrawable(View* __this, ::g::Android::android::graphics::drawable::Drawable* arg0) { View__invalidateDrawable_fn(__this, arg0); }
    static void invalidateDrawable_IMPL_23164(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool isActivated_IMPL_23194(bool arg0_, jobject arg1_);
    static bool isAttachedToWindow_IMPL_22905(bool arg0_, jobject arg1_);
    static bool isClickable_IMPL_22911(bool arg0_, jobject arg1_);
    static bool isDirty_IMPL_23035(bool arg0_, jobject arg1_);
    static bool isDrawingCacheEnabled_IMPL_23139(bool arg0_, jobject arg1_);
    static bool isDuplicateParentStateEnabled_IMPL_23133(bool arg0_, jobject arg1_);
    static bool isEnabled_IMPL_22893(bool arg0_, jobject arg1_);
    static bool isFocusable_IMPL_22924(bool arg0_, jobject arg1_);
    static bool isFocusableInTouchMode_IMPL_22925(bool arg0_, jobject arg1_);
    static bool isFocused_IMPL_22868(bool arg0_, jobject arg1_);
    static bool isHapticFeedbackEnabled_IMPL_22900(bool arg0_, jobject arg1_);
    static bool isHardwareAccelerated_IMPL_23153(bool arg0_, jobject arg1_);
    static bool isHorizontalFadingEdgeEnabled_IMPL_23080(bool arg0_, jobject arg1_);
    static bool isHorizontalScrollBarEnabled_IMPL_23088(bool arg0_, jobject arg1_);
    static bool isHovered_IMPL_22988(bool arg0_, jobject arg1_);
    static bool isInEditMode_IMPL_23147(bool arg0_, jobject arg1_);
    static bool isInLayout_IMPL_23208(bool arg0_, jobject arg1_);
    static bool isInTouchMode_IMPL_22971(bool arg0_, jobject arg1_);
    static bool isLaidOut_IMPL_22906(bool arg0_, jobject arg1_);
    static bool isLayoutDirectionResolved_IMPL_23116(bool arg0_, jobject arg1_);
    static bool isLayoutRequested_IMPL_23159(bool arg0_, jobject arg1_);
    static bool isLongClickable_IMPL_22913(bool arg0_, jobject arg1_);
    static bool isOpaque(View* __this) { bool __retval; return View__isOpaque_fn(__this, &__retval), __retval; }
    static bool isOpaque_IMPL_23066(bool arg0_, jobject arg1_);
    static bool isPaddingOffsetRequired_IMPL_23148(bool arg0_, jobject arg1_);
    static bool isPaddingRelative_IMPL_23188(bool arg0_, jobject arg1_);
    static bool isPressed_IMPL_22917(bool arg0_, jobject arg1_);
    static bool isSaveEnabled_IMPL_22918(bool arg0_, jobject arg1_);
    static bool isSaveFromParentEnabled_IMPL_22922(bool arg0_, jobject arg1_);
    static bool isScrollbarFadingEnabled_IMPL_23093(bool arg0_, jobject arg1_);
    static bool isScrollContainer_IMPL_22870(bool arg0_, jobject arg1_);
    static bool isSelected_IMPL_23191(bool arg0_, jobject arg1_);
    static bool isShown_IMPL_22886(bool arg0_, jobject arg1_);
    static bool isSoundEffectsEnabled_IMPL_22898(bool arg0_, jobject arg1_);
    static bool isTextAlignmentResolved_IMPL_23256(bool arg0_, jobject arg1_);
    static bool isTextDirectionResolved_IMPL_23252(bool arg0_, jobject arg1_);
    static bool isVerticalFadingEdgeEnabled_IMPL_23082(bool arg0_, jobject arg1_);
    static bool isVerticalScrollBarEnabled_IMPL_23090(bool arg0_, jobject arg1_);
    static void j_draw(View* __this, ::g::Android::android::graphics::Canvas* arg0) { View__j_draw_fn(__this, arg0); }
    static void j_draw_IMPL_23156(bool arg0_, jobject arg1_, uObject* arg2_);
    static void jumpDrawablesToCurrentState(View* __this) { View__jumpDrawablesToCurrentState_fn(__this); }
    static void jumpDrawablesToCurrentState_IMPL_23174(bool arg0_, jobject arg1_);
    static void layout(View* __this, int arg0, int arg1, int arg2, int arg3) { View__layout_fn(__this, &arg0, &arg1, &arg2, &arg3); }
    static void layout_IMPL_23160(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
    static void measure_IMPL_23211(bool arg0_, jobject arg1_, int arg2_, int arg3_);
    static uObject* mergeDrawableStates_IMPL_23173(uObject* arg0_, uObject* arg1_);
    static View* New5(::g::Android::android::content::Context* arg0);
    static View* New6(::g::Android::android::content::Context* arg0, uObject* arg1);
    static View* New7(::g::Android::android::content::Context* arg0, uObject* arg1, int arg2);
    static View* New8(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    static void offsetLeftAndRight_IMPL_23055(bool arg0_, jobject arg1_, int arg2_);
    static void offsetTopAndBottom_IMPL_23054(bool arg0_, jobject arg1_, int arg2_);
    static void onAnimationEnd_IMPL_23229(bool arg0_, jobject arg1_);
    static void onAnimationStart_IMPL_23228(bool arg0_, jobject arg1_);
    static void onAttachedToWindow_IMPL_23112(bool arg0_, jobject arg1_);
    static void onCancelPendingInputEvents_IMPL_23124(bool arg0_, jobject arg1_);
    static bool onCheckIsTextEditor(View* __this) { bool __retval; return View__onCheckIsTextEditor_fn(__this, &__retval), __retval; }
    static bool onCheckIsTextEditor_IMPL_22979(bool arg0_, jobject arg1_);
    static void onConfigurationChanged_IMPL_22970(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onCreateContextMenu_IMPL_22984(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* onCreateDrawableState_IMPL_23172(bool arg0_, jobject arg1_, int arg2_);
    static uObject* onCreateInputConnection(View* __this, ::g::Android::android::view::inputmethod::EditorInfo* arg0) { uObject* __retval; return View__onCreateInputConnection_fn(__this, arg0, &__retval), __retval; }
    static uObject* onCreateInputConnection_IMPL_22980(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onDetachedFromWindow_IMPL_23117(bool arg0_, jobject arg1_);
    static void onDisplayHint_IMPL_22964(bool arg0_, jobject arg1_, int arg2_);
    static bool onDragEvent(View* __this, ::g::Android::android::view::DragEvent* arg0) { bool __retval; return View__onDragEvent_fn(__this, arg0, &__retval), __retval; }
    static bool onDragEvent_IMPL_23242(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onDraw_IMPL_23111(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onDrawScrollBars_IMPL_23110(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool onFilterTouchEventForSecurity_IMPL_22952(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onFinishInflate_IMPL_23162(bool arg0_, jobject arg1_);
    static void onFinishTemporaryDetach(View* __this) { View__onFinishTemporaryDetach_fn(__this); }
    static void onFinishTemporaryDetach_IMPL_22946(bool arg0_, jobject arg1_);
    static void onFocusChanged_IMPL_22853(bool arg0_, jobject arg1_, bool arg2_, int arg3_, uObject* arg4_);
    static bool onGenericMotionEvent(View* __this, ::g::Android::android::view::MotionEvent* arg0) { bool __retval; return View__onGenericMotionEvent_fn(__this, arg0, &__retval), __retval; }
    static bool onGenericMotionEvent_IMPL_22986(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onHoverChanged_IMPL_22990(bool arg0_, jobject arg1_, bool arg2_);
    static bool onHoverEvent(View* __this, ::g::Android::android::view::MotionEvent* arg0) { bool __retval; return View__onHoverEvent_fn(__this, arg0, &__retval), __retval; }
    static bool onHoverEvent_IMPL_22987(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onInitializeAccessibilityEvent(View* __this, ::g::Android::android::view::accessibility::AccessibilityEvent* arg0) { View__onInitializeAccessibilityEvent_fn(__this, arg0); }
    static void onInitializeAccessibilityEvent_IMPL_22859(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onInitializeAccessibilityNodeInfo(View* __this, ::g::Android::android::view::accessibility::AccessibilityNodeInfo* arg0) { View__onInitializeAccessibilityNodeInfo_fn(__this, arg0); }
    static void onInitializeAccessibilityNodeInfo_IMPL_22861(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool onKeyDown(View* __this, int arg0, ::g::Android::android::view::KeyEvent* arg1) { bool __retval; return View__onKeyDown_fn(__this, &arg0, arg1, &__retval), __retval; }
    static bool onKeyDown_IMPL_22974(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_);
    static bool onKeyLongPress_IMPL_22975(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_);
    static bool onKeyMultiple(View* __this, int arg0, int arg1, ::g::Android::android::view::KeyEvent* arg2) { bool __retval; return View__onKeyMultiple_fn(__this, &arg0, &arg1, arg2, &__retval), __retval; }
    static bool onKeyMultiple_IMPL_22977(bool arg0_, jobject arg1_, int arg2_, int arg3_, uObject* arg4_);
    static bool onKeyPreIme(View* __this, int arg0, ::g::Android::android::view::KeyEvent* arg1) { bool __retval; return View__onKeyPreIme_fn(__this, &arg0, arg1, &__retval), __retval; }
    static bool onKeyPreIme_IMPL_22973(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_);
    static bool onKeyShortcut(View* __this, int arg0, ::g::Android::android::view::KeyEvent* arg1) { bool __retval; return View__onKeyShortcut_fn(__this, &arg0, arg1, &__retval), __retval; }
    static bool onKeyShortcut_IMPL_22978(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_);
    static bool onKeyUp(View* __this, int arg0, ::g::Android::android::view::KeyEvent* arg1) { bool __retval; return View__onKeyUp_fn(__this, &arg0, arg1, &__retval), __retval; }
    static bool onKeyUp_IMPL_22976(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_);
    static void onLayout_IMPL_23161(bool arg0_, jobject arg1_, bool arg2_, int arg3_, int arg4_, int arg5_, int arg6_);
    static void onMeasure_IMPL_23212(bool arg0_, jobject arg1_, int arg2_, int arg3_);
    static void onOverScrolled_IMPL_23246(bool arg0_, jobject arg1_, int arg2_, int arg3_, bool arg4_, bool arg5_);
    static void onPopulateAccessibilityEvent(View* __this, ::g::Android::android::view::accessibility::AccessibilityEvent* arg0) { View__onPopulateAccessibilityEvent_fn(__this, arg0); }
    static void onPopulateAccessibilityEvent_IMPL_22858(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onRestoreInstanceState_IMPL_23130(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onRtlPropertiesChanged(View* __this, int arg0) { View__onRtlPropertiesChanged_fn(__this, &arg0); }
    static void onRtlPropertiesChanged_IMPL_23114(bool arg0_, jobject arg1_, int arg2_);
    static uObject* onSaveInstanceState_IMPL_23127(bool arg0_, jobject arg1_);
    static void onScreenStateChanged(View* __this, int arg0) { View__onScreenStateChanged_fn(__this, &arg0); }
    static void onScreenStateChanged_IMPL_23113(bool arg0_, jobject arg1_, int arg2_);
    static void onScrollChanged(View* __this, int arg0, int arg1, int arg2, int arg3) { View__onScrollChanged_fn(__this, &arg0, &arg1, &arg2, &arg3); }
    static void onScrollChanged_IMPL_22996(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
    static bool onSetAlpha_IMPL_23230(bool arg0_, jobject arg1_, int arg2_);
    static void onSizeChanged_IMPL_22997(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
    static void onStartTemporaryDetach(View* __this) { View__onStartTemporaryDetach_fn(__this); }
    static void onStartTemporaryDetach_IMPL_22945(bool arg0_, jobject arg1_);
    static bool onTouchEvent(View* __this, ::g::Android::android::view::MotionEvent* arg0) { bool __retval; return View__onTouchEvent_fn(__this, arg0, &__retval), __retval; }
    static bool onTouchEvent_IMPL_22991(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool onTrackballEvent(View* __this, ::g::Android::android::view::MotionEvent* arg0) { bool __retval; return View__onTrackballEvent_fn(__this, arg0, &__retval), __retval; }
    static bool onTrackballEvent_IMPL_22985(bool arg0_, jobject arg1_, uObject* arg2_);
    static void onVisibilityChanged_IMPL_22962(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
    static void onWindowFocusChanged(View* __this, bool arg0) { View__onWindowFocusChanged_fn(__this, &arg0); }
    static void onWindowFocusChanged_IMPL_22959(bool arg0_, jobject arg1_, bool arg2_);
    static void onWindowSystemUiVisibilityChanged_IMPL_23237(bool arg0_, jobject arg1_, int arg2_);
    static void onWindowVisibilityChanged_IMPL_22966(bool arg0_, jobject arg1_, int arg2_);
    static bool overScrollBy_IMPL_23245(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_, int arg6_, int arg7_, int arg8_, int arg9_, bool arg10_);
    static bool performAccessibilityAction(View* __this, int arg0, ::g::Android::android::os::Bundle* arg1) { bool __retval; return View__performAccessibilityAction_fn(__this, &arg0, arg1, &__retval), __retval; }
    static bool performAccessibilityAction_IMPL_22944(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_);
    static bool performClick(View* __this) { bool __retval; return View__performClick_fn(__this, &__retval), __retval; }
    static bool performClick_IMPL_22838(bool arg0_, jobject arg1_);
    static bool performHapticFeedback_IMPL_23232(bool arg0_, jobject arg1_, int arg2_);
    static bool performHapticFeedback_IMPL_23233(bool arg0_, jobject arg1_, int arg2_, int arg3_);
    static bool performLongClick(View* __this) { bool __retval; return View__performLongClick_fn(__this, &__retval), __retval; }
    static bool performLongClick_IMPL_22840(bool arg0_, jobject arg1_);
    static void playSoundEffect_IMPL_23231(bool arg0_, jobject arg1_, int arg2_);
    static bool post_IMPL_23068(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool postDelayed_IMPL_23069(bool arg0_, jobject arg1_, uObject* arg2_, int64_t arg3_);
    static void postInvalidate(View* __this) { View__postInvalidate_fn(__this); }
    static void postInvalidate_IMPL_23073(bool arg0_, jobject arg1_);
    static void postInvalidate_IMPL_23074(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
    static void postInvalidateDelayed_IMPL_23075(bool arg0_, jobject arg1_, int64_t arg2_);
    static void postInvalidateDelayed_IMPL_23076(bool arg0_, jobject arg1_, int64_t arg2_, int arg3_, int arg4_, int arg5_, int arg6_);
    static void postInvalidateOnAnimation_IMPL_23077(bool arg0_, jobject arg1_);
    static void postInvalidateOnAnimation_IMPL_23078(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
    static void postOnAnimation_IMPL_23070(bool arg0_, jobject arg1_, uObject* arg2_);
    static void postOnAnimationDelayed_IMPL_23071(bool arg0_, jobject arg1_, uObject* arg2_, int64_t arg3_);
    static void refreshDrawableState_IMPL_23170(bool arg0_, jobject arg1_);
    static bool removeCallbacks_IMPL_23072(bool arg0_, jobject arg1_, uObject* arg2_);
    static void removeOnAttachStateChangeListener_IMPL_22832(bool arg0_, jobject arg1_, uObject* arg2_);
    static void removeOnLayoutChangeListener_IMPL_22830(bool arg0_, jobject arg1_, uObject* arg2_);
    static void requestFitSystemWindows_IMPL_22890(bool arg0_, jobject arg1_);
    static bool requestFocus2(View* __this, int arg0, ::g::Android::android::graphics::Rect* arg1) { bool __retval; return View__requestFocus2_fn(__this, &arg0, arg1, &__retval), __retval; }
    static bool requestFocus_IMPL_22934(bool arg0_, jobject arg1_);
    static bool requestFocus_IMPL_22935(bool arg0_, jobject arg1_, int arg2_);
    static bool requestFocus_IMPL_22936(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_);
    static bool requestFocusFromTouch_IMPL_22937(bool arg0_, jobject arg1_);
    static void requestLayout(View* __this) { View__requestLayout_fn(__this); }
    static void requestLayout_IMPL_23209(bool arg0_, jobject arg1_);
    static bool requestRectangleOnScreen_IMPL_22848(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool requestRectangleOnScreen_IMPL_22849(bool arg0_, jobject arg1_, uObject* arg2_, bool arg3_);
    static int resolveSize(int arg0, int arg1);
    static int resolveSize_IMPL_23215(int arg0_, int arg1_);
    static int resolveSizeAndState(int arg0, int arg1, int arg2);
    static int resolveSizeAndState_IMPL_23216(int arg0_, int arg1_, int arg2_);
    static void restoreHierarchyState_IMPL_23128(bool arg0_, jobject arg1_, uObject* arg2_);
    static void saveHierarchyState_IMPL_23125(bool arg0_, jobject arg1_, uObject* arg2_);
    static void scheduleDrawable_IMPL_23165(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, int64_t arg4_);
    static void scrollBy_IMPL_23059(bool arg0_, jobject arg1_, int arg2_, int arg3_);
    static void scrollTo(View* __this, int arg0, int arg1) { View__scrollTo_fn(__this, &arg0, &arg1); }
    static void scrollTo_IMPL_23058(bool arg0_, jobject arg1_, int arg2_, int arg3_);
    static void sendAccessibilityEvent(View* __this, int arg0) { View__sendAccessibilityEvent_fn(__this, &arg0); }
    static void sendAccessibilityEvent_IMPL_22854(bool arg0_, jobject arg1_, int arg2_);
    static void sendAccessibilityEventUnchecked_IMPL_22856(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setAccessibilityDelegate_IMPL_22862(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setAccessibilityLiveRegion_IMPL_22939(bool arg0_, jobject arg1_, int arg2_);
    static void setActivated_IMPL_23192(bool arg0_, jobject arg1_, bool arg2_);
    static void setAlpha_IMPL_23031(bool arg0_, jobject arg1_, float arg2_);
    static void setAnimation_IMPL_23227(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setBackground_IMPL_23177(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setBackgroundColor(View* __this, int arg0) { View__setBackgroundColor_fn(__this, &arg0); }
    static void setBackgroundColor_IMPL_23175(bool arg0_, jobject arg1_, int arg2_);
    static void setBackgroundDrawable_IMPL_23178(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setBackgroundResource_IMPL_23176(bool arg0_, jobject arg1_, int arg2_);
    static void setBottom_IMPL_23036(bool arg0_, jobject arg1_, int arg2_);
    static void setCameraDistance_IMPL_23014(bool arg0_, jobject arg1_, float arg2_);
    static void setClickable_IMPL_22912(bool arg0_, jobject arg1_, bool arg2_);
    static void setClipBounds_IMPL_23154(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setContentDescription_IMPL_22865(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setDrawingCacheBackgroundColor_IMPL_23143(bool arg0_, jobject arg1_, int arg2_);
    static void setDrawingCacheEnabled_IMPL_23138(bool arg0_, jobject arg1_, bool arg2_);
    static void setDrawingCacheQuality_IMPL_22873(bool arg0_, jobject arg1_, int arg2_);
    static void setDuplicateParentStateEnabled_IMPL_23132(bool arg0_, jobject arg1_, bool arg2_);
    static void setEnabled(View* __this, bool arg0) { View__setEnabled_fn(__this, &arg0); }
    static void setEnabled_IMPL_22894(bool arg0_, jobject arg1_, bool arg2_);
    static void setFadingEdgeLength_IMPL_22821(bool arg0_, jobject arg1_, int arg2_);
    static void setFilterTouchesWhenObscured_IMPL_22921(bool arg0_, jobject arg1_, bool arg2_);
    static void setFitsSystemWindows_IMPL_22888(bool arg0_, jobject arg1_, bool arg2_);
    static void setFocusable_IMPL_22895(bool arg0_, jobject arg1_, bool arg2_);
    static void setFocusableInTouchMode_IMPL_22896(bool arg0_, jobject arg1_, bool arg2_);
    static void setHapticFeedbackEnabled_IMPL_22899(bool arg0_, jobject arg1_, bool arg2_);
    static void setHasTransientState_IMPL_22904(bool arg0_, jobject arg1_, bool arg2_);
    static void setHorizontalFadingEdgeEnabled_IMPL_23081(bool arg0_, jobject arg1_, bool arg2_);
    static void setHorizontalScrollBarEnabled_IMPL_23089(bool arg0_, jobject arg1_, bool arg2_);
    static void setHovered_IMPL_22989(bool arg0_, jobject arg1_, bool arg2_);
    static void setId_IMPL_23201(bool arg0_, jobject arg1_, int arg2_);
    static void setImportantForAccessibility_IMPL_22941(bool arg0_, jobject arg1_, int arg2_);
    static void setKeepScreenOn_IMPL_22875(bool arg0_, jobject arg1_, bool arg2_);
    static void setLabelFor_IMPL_22867(bool arg0_, jobject arg1_, int arg2_);
    static void setLayerPaint_IMPL_23135(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setLayerType(View* __this, int arg0, ::g::Android::android::graphics::Paint* arg1) { View__setLayerType_fn(__this, &arg0, arg1); }
    static void setLayerType_IMPL_23134(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_);
    static void setLayoutDirection_IMPL_22901(bool arg0_, jobject arg1_, int arg2_);
    static void setLayoutParams(View* __this, ::g::Android::android::view::ViewGroupDLRLayoutParams* arg0) { View__setLayoutParams_fn(__this, arg0); }
    static void setLayoutParams_IMPL_23057(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setLeft_IMPL_23038(bool arg0_, jobject arg1_, int arg2_);
    static void setLongClickable_IMPL_22914(bool arg0_, jobject arg1_, bool arg2_);
    static void setMeasuredDimension_IMPL_23213(bool arg0_, jobject arg1_, int arg2_, int arg3_);
    static void setMinimumHeight_IMPL_23221(bool arg0_, jobject arg1_, int arg2_);
    static void setMinimumWidth_IMPL_23223(bool arg0_, jobject arg1_, int arg2_);
    static void setNextFocusDownId_IMPL_22883(bool arg0_, jobject arg1_, int arg2_);
    static void setNextFocusForwardId_IMPL_22885(bool arg0_, jobject arg1_, int arg2_);
    static void setNextFocusLeftId_IMPL_22877(bool arg0_, jobject arg1_, int arg2_);
    static void setNextFocusRightId_IMPL_22879(bool arg0_, jobject arg1_, int arg2_);
    static void setNextFocusUpId_IMPL_22881(bool arg0_, jobject arg1_, int arg2_);
    static void setOnClickListener_IMPL_22834(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setOnCreateContextMenuListener_IMPL_22837(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setOnDragListener_IMPL_22847(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setOnFocusChangeListener_IMPL_22828(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setOnGenericMotionListener_IMPL_22845(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setOnHoverListener_IMPL_22846(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setOnKeyListener_IMPL_22843(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setOnLongClickListener_IMPL_22836(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setOnSystemUiVisibilityChangeListener_IMPL_23239(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setOnTouchListener_IMPL_22844(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setOverScrollMode(View* __this, int arg0) { View__setOverScrollMode_fn(__this, &arg0); }
    static void setOverScrollMode_IMPL_23248(bool arg0_, jobject arg1_, int arg2_);
    static void setPadding(View* __this, int arg0, int arg1, int arg2, int arg3) { View__setPadding_fn(__this, &arg0, &arg1, &arg2, &arg3); }
    static void setPadding_IMPL_23180(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
    static void setPaddingRelative(View* __this, int arg0, int arg1, int arg2, int arg3) { View__setPaddingRelative_fn(__this, &arg0, &arg1, &arg2, &arg3); }
    static void setPaddingRelative_IMPL_23181(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
    static void setPivotX_IMPL_23026(bool arg0_, jobject arg1_, float arg2_);
    static void setPivotY_IMPL_23028(bool arg0_, jobject arg1_, float arg2_);
    static void setPressed_IMPL_22915(bool arg0_, jobject arg1_, bool arg2_);
    static void setRight_IMPL_23040(bool arg0_, jobject arg1_, int arg2_);
    static void setRotation_IMPL_23016(bool arg0_, jobject arg1_, float arg2_);
    static void setRotationX_IMPL_23020(bool arg0_, jobject arg1_, float arg2_);
    static void setRotationY_IMPL_23018(bool arg0_, jobject arg1_, float arg2_);
    static void setSaveEnabled_IMPL_22919(bool arg0_, jobject arg1_, bool arg2_);
    static void setSaveFromParentEnabled_IMPL_22923(bool arg0_, jobject arg1_, bool arg2_);
    static void setScaleX_IMPL_23022(bool arg0_, jobject arg1_, float arg2_);
    static void setScaleY_IMPL_23024(bool arg0_, jobject arg1_, float arg2_);
    static void setScrollBarDefaultDelayBeforeFade_IMPL_23095(bool arg0_, jobject arg1_, int arg2_);
    static void setScrollBarFadeDuration_IMPL_23097(bool arg0_, jobject arg1_, int arg2_);
    static void setScrollbarFadingEnabled_IMPL_23092(bool arg0_, jobject arg1_, bool arg2_);
    static void setScrollBarSize_IMPL_23099(bool arg0_, jobject arg1_, int arg2_);
    static void setScrollBarStyle(View* __this, int arg0) { View__setScrollBarStyle_fn(__this, &arg0); }
    static void setScrollBarStyle_IMPL_23100(bool arg0_, jobject arg1_, int arg2_);
    static void setScrollContainer_IMPL_22871(bool arg0_, jobject arg1_, bool arg2_);
    static void setScrollX_IMPL_23000(bool arg0_, jobject arg1_, int arg2_);
    static void setScrollY_IMPL_23001(bool arg0_, jobject arg1_, int arg2_);
    static void setSelected(View* __this, bool arg0) { View__setSelected_fn(__this, &arg0); }
    static void setSelected_IMPL_23189(bool arg0_, jobject arg1_, bool arg2_);
    static void setSoundEffectsEnabled_IMPL_22897(bool arg0_, jobject arg1_, bool arg2_);
    static void setSystemUiVisibility_IMPL_23234(bool arg0_, jobject arg1_, int arg2_);
    static void setTag_IMPL_23204(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setTag_IMPL_23206(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_);
    static void setTextAlignment_IMPL_23253(bool arg0_, jobject arg1_, int arg2_);
    static void setTextDirection_IMPL_23249(bool arg0_, jobject arg1_, int arg2_);
    static void setTop_IMPL_23033(bool arg0_, jobject arg1_, int arg2_);
    static void setTouchDelegate_IMPL_22993(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setTranslationX_IMPL_23046(bool arg0_, jobject arg1_, float arg2_);
    static void setTranslationY_IMPL_23048(bool arg0_, jobject arg1_, float arg2_);
    static void setVerticalFadingEdgeEnabled_IMPL_23083(bool arg0_, jobject arg1_, bool arg2_);
    static void setVerticalScrollBarEnabled_IMPL_23091(bool arg0_, jobject arg1_, bool arg2_);
    static void setVerticalScrollbarPosition_IMPL_22826(bool arg0_, jobject arg1_, int arg2_);
    static void setVisibility(View* __this, int arg0) { View__setVisibility_fn(__this, &arg0); }
    static void setVisibility_IMPL_22892(bool arg0_, jobject arg1_, int arg2_);
    static void setWillNotCacheDrawing_IMPL_22909(bool arg0_, jobject arg1_, bool arg2_);
    static void setWillNotDraw_IMPL_22907(bool arg0_, jobject arg1_, bool arg2_);
    static void setX_IMPL_23042(bool arg0_, jobject arg1_, float arg2_);
    static void setY_IMPL_23044(bool arg0_, jobject arg1_, float arg2_);
    static bool showContextMenu_IMPL_22841(bool arg0_, jobject arg1_);
    static uObject* startActionMode_IMPL_22842(bool arg0_, jobject arg1_, uObject* arg2_);
    static void startAnimation_IMPL_23225(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool startDrag_IMPL_23241(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_, int arg5_);
    static uObject* toString_IMPL_22818(bool arg0_, jobject arg1_);
    static void unscheduleDrawable_IMPL_23166(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
    static void unscheduleDrawable_IMPL_23167(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool verifyDrawable_IMPL_23168(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool willNotCacheDrawing_IMPL_22910(bool arg0_, jobject arg1_);
    static bool willNotDraw_IMPL_22908(bool arg0_, jobject arg1_);
    static int ACCESSIBILITY_LIVE_REGION_ASSERTIVE();
    static int ACCESSIBILITY_LIVE_REGION_NONE();
    static int ACCESSIBILITY_LIVE_REGION_POLITE();
    static ::g::Android::android::util::Property* ALPHA();
    static int DRAWING_CACHE_QUALITY_AUTO();
    static int DRAWING_CACHE_QUALITY_HIGH();
    static int DRAWING_CACHE_QUALITY_LOW();
    static int FIND_VIEWS_WITH_CONTENT_DESCRIPTION();
    static int FIND_VIEWS_WITH_TEXT();
    static int FOCUS_BACKWARD();
    static int FOCUS_DOWN();
    static int FOCUS_FORWARD();
    static int FOCUS_LEFT();
    static int FOCUS_RIGHT();
    static int FOCUS_UP();
    static int FOCUSABLES_ALL();
    static int FOCUSABLES_TOUCH_MODE();
    static int GONE();
    static int HAPTIC_FEEDBACK_ENABLED();
    static int IMPORTANT_FOR_ACCESSIBILITY_AUTO();
    static int IMPORTANT_FOR_ACCESSIBILITY_NO();
    static int IMPORTANT_FOR_ACCESSIBILITY_NO_HIDE_DESCENDANTS();
    static int IMPORTANT_FOR_ACCESSIBILITY_YES();
    static int INVISIBLE();
    static int KEEP_SCREEN_ON();
    static int LAYER_TYPE_HARDWARE();
    static int LAYER_TYPE_NONE();
    static int LAYER_TYPE_SOFTWARE();
    static int LAYOUT_DIRECTION_INHERIT();
    static int LAYOUT_DIRECTION_LOCALE();
    static int LAYOUT_DIRECTION_LTR();
    static int LAYOUT_DIRECTION_RTL();
    static int MEASURED_HEIGHT_STATE_SHIFT();
    static int MEASURED_SIZE_MASK();
    static int MEASURED_STATE_MASK();
    static int MEASURED_STATE_TOO_SMALL();
    static int NO_ID();
    static int OVER_SCROLL_ALWAYS();
    static int OVER_SCROLL_IF_CONTENT_SCROLLS();
    static int OVER_SCROLL_NEVER();
    static ::g::Android::android::util::Property* ROTATION();
    static ::g::Android::android::util::Property* ROTATION_X();
    static ::g::Android::android::util::Property* ROTATION_Y();
    static ::g::Android::android::util::Property* SCALE_X();
    static ::g::Android::android::util::Property* SCALE_Y();
    static int SCREEN_STATE_OFF();
    static int SCREEN_STATE_ON();
    static int SCROLLBAR_POSITION_DEFAULT();
    static int SCROLLBAR_POSITION_LEFT();
    static int SCROLLBAR_POSITION_RIGHT();
    static int SCROLLBARS_INSIDE_INSET();
    static int SCROLLBARS_INSIDE_OVERLAY();
    static int SCROLLBARS_OUTSIDE_INSET();
    static int SCROLLBARS_OUTSIDE_OVERLAY();
    static int SOUND_EFFECTS_ENABLED();
    static int STATUS_BAR_HIDDEN();
    static int STATUS_BAR_VISIBLE();
    static int SYSTEM_UI_FLAG_FULLSCREEN();
    static int SYSTEM_UI_FLAG_HIDE_NAVIGATION();
    static int SYSTEM_UI_FLAG_IMMERSIVE();
    static int SYSTEM_UI_FLAG_IMMERSIVE_STICKY();
    static int SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN();
    static int SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION();
    static int SYSTEM_UI_FLAG_LAYOUT_STABLE();
    static int SYSTEM_UI_FLAG_LOW_PROFILE();
    static int SYSTEM_UI_FLAG_VISIBLE();
    static int SYSTEM_UI_LAYOUT_FLAGS();
    static int TEXT_ALIGNMENT_CENTER();
    static int TEXT_ALIGNMENT_GRAVITY();
    static int TEXT_ALIGNMENT_INHERIT();
    static int TEXT_ALIGNMENT_TEXT_END();
    static int TEXT_ALIGNMENT_TEXT_START();
    static int TEXT_ALIGNMENT_VIEW_END();
    static int TEXT_ALIGNMENT_VIEW_START();
    static int TEXT_DIRECTION_ANY_RTL();
    static int TEXT_DIRECTION_FIRST_STRONG();
    static int TEXT_DIRECTION_INHERIT();
    static int TEXT_DIRECTION_LOCALE();
    static int TEXT_DIRECTION_LTR();
    static int TEXT_DIRECTION_RTL();
    static ::g::Android::android::util::Property* TRANSLATION_X();
    static ::g::Android::android::util::Property* TRANSLATION_Y();
    static int VISIBLE();
    static ::g::Android::android::util::Property* X();
    static ::g::Android::android::util::Property* Y();
};
// }

}}}} // ::g::Android::android::view
