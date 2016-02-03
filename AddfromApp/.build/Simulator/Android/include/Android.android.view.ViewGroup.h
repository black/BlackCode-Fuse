// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.View.h>
#include <Android.android.view.ViewParent.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace animation{struct LayoutTransition;}}}}
namespace g{namespace Android{namespace android{namespace content{namespace res{struct Configuration;}}}}}
namespace g{namespace Android{namespace android{namespace content{struct Context;}}}}
namespace g{namespace Android{namespace android{namespace graphics{struct Point;}}}}
namespace g{namespace Android{namespace android{namespace graphics{struct Rect;}}}}
namespace g{namespace Android{namespace android{namespace graphics{struct Region;}}}}
namespace g{namespace Android{namespace android{namespace view{namespace accessibility{struct AccessibilityEvent;}}}}}
namespace g{namespace Android{namespace android{namespace view{namespace animation{struct LayoutAnimationController;}}}}}
namespace g{namespace Android{namespace android{namespace view{struct ActionMode;}}}}
namespace g{namespace Android{namespace android{namespace view{struct DragEvent;}}}}
namespace g{namespace Android{namespace android{namespace view{struct KeyEvent;}}}}
namespace g{namespace Android{namespace android{namespace view{struct MotionEvent;}}}}
namespace g{namespace Android{namespace android{namespace view{struct ViewGroup;}}}}
namespace g{namespace Android{namespace android{namespace view{struct ViewGroupDLRLayoutParams;}}}}
namespace g{namespace Android{namespace android{namespace view{struct ViewGroupOverlay;}}}}
namespace g{namespace Android{namespace java{namespace util{struct ArrayList;}}}}
namespace g{namespace Android{namespace Runtime{struct IntArray;}}}

namespace g{
namespace Android{
namespace android{
namespace view{

// public abstract extern class ViewGroup :6451
// {
struct ViewGroup_type : ::g::Android::android::view::View_type
{
    ::g::Android::android::view::ViewParent interface2;
    void(*fp_addView)(::g::Android::android::view::ViewGroup*, ::g::Android::android::view::View*);
    void(*fp_addView1)(::g::Android::android::view::ViewGroup*, ::g::Android::android::view::View*, ::g::Android::android::view::ViewGroupDLRLayoutParams*);
    void(*fp_addView2)(::g::Android::android::view::ViewGroup*, ::g::Android::android::view::View*, int*);
    void(*fp_addView3)(::g::Android::android::view::ViewGroup*, ::g::Android::android::view::View*, int*, ::g::Android::android::view::ViewGroupDLRLayoutParams*);
    void(*fp_gatherTransparentRegion)(::g::Android::android::view::ViewGroup*, ::g::Android::android::graphics::Region*, bool*);
    void(*fp_generateLayoutParams)(::g::Android::android::view::ViewGroup*, uObject*, ::g::Android::android::view::ViewGroupDLRLayoutParams**);
    void(*fp_onInterceptTouchEvent)(::g::Android::android::view::ViewGroup*, ::g::Android::android::view::MotionEvent*, bool*);
    void(*fp_requestChildFocus)(::g::Android::android::view::ViewGroup*, ::g::Android::android::view::View*, ::g::Android::android::view::View*);
    void(*fp_requestChildRectangleOnScreen)(::g::Android::android::view::ViewGroup*, ::g::Android::android::view::View*, ::g::Android::android::graphics::Rect*, bool*, bool*);
    void(*fp_requestDisallowInterceptTouchEvent)(::g::Android::android::view::ViewGroup*, bool*);
    void(*fp_shouldDelayChildPressedState)(::g::Android::android::view::ViewGroup*, bool*);
};

ViewGroup_type* ViewGroup_typeof();
void ViewGroup__ctor_8_fn(ViewGroup* __this, ::g::Android::android::content::Context* arg0);
void ViewGroup__ctor_9_fn(ViewGroup* __this, ::g::Android::android::content::Context* arg0, uObject* arg1);
void ViewGroup__ctor_10_fn(ViewGroup* __this, ::g::Android::android::content::Context* arg0, uObject* arg1, int* arg2);
void ViewGroup__ctor_11_fn(ViewGroup* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType);
void ViewGroup___Init3_fn();
void ViewGroup__addChildrenForAccessibility_fn(ViewGroup* __this, ::g::Android::java::util::ArrayList* arg0);
void ViewGroup__addChildrenForAccessibility_IMPL_23401_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ViewGroup__addFocusables1_fn(ViewGroup* __this, ::g::Android::java::util::ArrayList* arg0, int* arg1, int* arg2);
void ViewGroup__addFocusables_IMPL_23383_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, int* arg4_);
void ViewGroup__addStatesFromChildren_fn(ViewGroup* __this, bool* __retval);
void ViewGroup__addStatesFromChildren_IMPL_23507_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void ViewGroup__addTouchables_fn(ViewGroup* __this, ::g::Android::java::util::ArrayList* arg0);
void ViewGroup__addTouchables_IMPL_23386_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ViewGroup__addView_fn(ViewGroup* __this, ::g::Android::android::view::View* arg0);
void ViewGroup__addView1_fn(ViewGroup* __this, ::g::Android::android::view::View* arg0, ::g::Android::android::view::ViewGroupDLRLayoutParams* arg1);
void ViewGroup__addView2_fn(ViewGroup* __this, ::g::Android::android::view::View* arg0, int* arg1);
void ViewGroup__addView3_fn(ViewGroup* __this, ::g::Android::android::view::View* arg0, int* arg1, ::g::Android::android::view::ViewGroupDLRLayoutParams* arg2);
void ViewGroup__addView4_fn(ViewGroup* __this, ::g::Android::android::view::View* arg0, int* arg1, int* arg2);
void ViewGroup__addView_IMPL_23432_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ViewGroup__addView_IMPL_23433_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_);
void ViewGroup__addView_IMPL_23434_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, int* arg4_);
void ViewGroup__addView_IMPL_23435_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_);
void ViewGroup__addView_IMPL_23436_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, uObject* arg4_);
void ViewGroup__addViewInLayout_IMPL_23442_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, uObject* arg4_, bool* __retval);
void ViewGroup__addViewInLayout_IMPL_23443_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, uObject* arg4_, bool* arg5_, bool* __retval);
void ViewGroup__attachLayoutAnimationParameters_IMPL_23445_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, int* arg4_, int* arg5_);
void ViewGroup__attachViewToParent_IMPL_23456_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, uObject* arg4_);
void ViewGroup__bringChildToFront_fn(ViewGroup* __this, ::g::Android::android::view::View* arg0);
void ViewGroup__bringChildToFront_IMPL_23392_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ViewGroup__canAnimate_IMPL_23468_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void ViewGroup__checkLayoutParams_IMPL_23438_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void ViewGroup__childDrawableStateChanged_fn(ViewGroup* __this, ::g::Android::android::view::View* arg0);
void ViewGroup__childDrawableStateChanged_IMPL_23508_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ViewGroup__childHasTransientStateChanged_fn(ViewGroup* __this, ::g::Android::android::view::View* arg0, bool* arg1);
void ViewGroup__childHasTransientStateChanged_IMPL_23374_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* arg3_);
void ViewGroup__cleanupLayoutState_IMPL_23444_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ViewGroup__clearChildFocus_fn(ViewGroup* __this, ::g::Android::android::view::View* arg0);
void ViewGroup__clearChildFocus_IMPL_23377_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ViewGroup__clearDisappearingChildren_fn(ViewGroup* __this);
void ViewGroup__clearDisappearingChildren_IMPL_23496_fn(bool* arg0_, jobject* arg1_);
void ViewGroup__clearFocus_fn(ViewGroup* __this);
void ViewGroup__clearFocus_IMPL_23378_fn(bool* arg0_, jobject* arg1_);
void ViewGroup__debug_IMPL_23488_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void ViewGroup__detachAllViewsFromParent_IMPL_23460_fn(bool* arg0_, jobject* arg1_);
void ViewGroup__detachViewFromParent_IMPL_23457_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ViewGroup__detachViewFromParent_IMPL_23458_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void ViewGroup__detachViewsFromParent_IMPL_23459_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_);
void ViewGroup__dispatchConfigurationChanged_fn(ViewGroup* __this, ::g::Android::android::content::res::Configuration* arg0);
void ViewGroup__dispatchConfigurationChanged_IMPL_23390_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ViewGroup__dispatchDisplayHint_fn(ViewGroup* __this, int* arg0);
void ViewGroup__dispatchDisplayHint_IMPL_23387_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void ViewGroup__dispatchDragEvent_fn(ViewGroup* __this, ::g::Android::android::view::DragEvent* arg0, bool* __retval);
void ViewGroup__dispatchDragEvent_IMPL_23393_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void ViewGroup__dispatchDraw_IMPL_23420_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ViewGroup__dispatchFreezeSelfOnly_IMPL_23414_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ViewGroup__dispatchGenericFocusedEvent_IMPL_23404_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void ViewGroup__dispatchGenericPointerEvent_IMPL_23403_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void ViewGroup__dispatchHoverEvent_IMPL_23400_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void ViewGroup__dispatchKeyEvent_fn(ViewGroup* __this, ::g::Android::android::view::KeyEvent* arg0, bool* __retval);
void ViewGroup__dispatchKeyEvent_IMPL_23397_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void ViewGroup__dispatchKeyEventPreIme_fn(ViewGroup* __this, ::g::Android::android::view::KeyEvent* arg0, bool* __retval);
void ViewGroup__dispatchKeyEventPreIme_IMPL_23396_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void ViewGroup__dispatchKeyShortcutEvent_fn(ViewGroup* __this, ::g::Android::android::view::KeyEvent* arg0, bool* __retval);
void ViewGroup__dispatchKeyShortcutEvent_IMPL_23398_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void ViewGroup__dispatchRestoreInstanceState_IMPL_23415_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ViewGroup__dispatchSaveInstanceState_IMPL_23413_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ViewGroup__dispatchSetActivated1_fn(ViewGroup* __this, bool* arg0);
void ViewGroup__dispatchSetActivated_IMPL_23428_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void ViewGroup__dispatchSetPressed_IMPL_23429_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void ViewGroup__dispatchSetSelected1_fn(ViewGroup* __this, bool* arg0);
void ViewGroup__dispatchSetSelected_IMPL_23427_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void ViewGroup__dispatchSystemUiVisibilityChanged_fn(ViewGroup* __this, int* arg0);
void ViewGroup__dispatchSystemUiVisibilityChanged_IMPL_23395_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void ViewGroup__dispatchThawSelfOnly_IMPL_23416_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ViewGroup__dispatchTouchEvent_fn(ViewGroup* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval);
void ViewGroup__dispatchTouchEvent_IMPL_23405_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void ViewGroup__dispatchTrackballEvent_fn(ViewGroup* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval);
void ViewGroup__dispatchTrackballEvent_IMPL_23399_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void ViewGroup__dispatchUnhandledMove_fn(ViewGroup* __this, ::g::Android::android::view::View* arg0, int* arg1, bool* __retval);
void ViewGroup__dispatchUnhandledMove_IMPL_23376_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, bool* __retval);
void ViewGroup__dispatchVisibilityChanged_IMPL_23388_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_);
void ViewGroup__dispatchWindowFocusChanged_fn(ViewGroup* __this, bool* arg0);
void ViewGroup__dispatchWindowFocusChanged_IMPL_23385_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void ViewGroup__dispatchWindowSystemUiVisiblityChanged_fn(ViewGroup* __this, int* arg0);
void ViewGroup__dispatchWindowSystemUiVisiblityChanged_IMPL_23394_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void ViewGroup__dispatchWindowVisibilityChanged_fn(ViewGroup* __this, int* arg0);
void ViewGroup__dispatchWindowVisibilityChanged_IMPL_23389_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void ViewGroup__drawableStateChanged_IMPL_23503_fn(bool* arg0_, jobject* arg1_);
void ViewGroup__drawChild_IMPL_23423_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, int64_t* arg4_, bool* __retval);
void ViewGroup__endViewTransition_fn(ViewGroup* __this, ::g::Android::android::view::View* arg0);
void ViewGroup__endViewTransition_IMPL_23498_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ViewGroup__findFocus_fn(ViewGroup* __this, ::g::Android::android::view::View** __retval);
void ViewGroup__findFocus_IMPL_23381_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void ViewGroup__findViewsWithText_fn(ViewGroup* __this, ::g::Android::java::util::ArrayList* arg0, uObject* arg1, int* arg2);
void ViewGroup__findViewsWithText_IMPL_23384_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, int* arg4_);
void ViewGroup__fitSystemWindows_IMPL_23501_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void ViewGroup__get_FOCUS_AFTER_DESCENDANTS_fn(int* __retval);
void ViewGroup__get_FOCUS_BEFORE_DESCENDANTS_fn(int* __retval);
void ViewGroup__get_FOCUS_BLOCK_DESCENDANTS_fn(int* __retval);
void ViewGroup__focusableViewAvailable_fn(ViewGroup* __this, ::g::Android::android::view::View* arg0);
void ViewGroup__focusableViewAvailable_IMPL_23367_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ViewGroup__focusSearch1_fn(ViewGroup* __this, ::g::Android::android::view::View* arg0, int* arg1, ::g::Android::android::view::View** __retval);
void ViewGroup__focusSearch_IMPL_23370_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, uObject** __retval);
void ViewGroup__gatherTransparentRegion_fn(ViewGroup* __this, ::g::Android::android::graphics::Region* arg0, bool* __retval);
void ViewGroup__gatherTransparentRegion_IMPL_23499_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void ViewGroup__generateDefaultLayoutParams_IMPL_23487_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void ViewGroup__generateLayoutParams_fn(ViewGroup* __this, uObject* arg0, ::g::Android::android::view::ViewGroupDLRLayoutParams** __retval);
void ViewGroup__generateLayoutParams_IMPL_23485_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);
void ViewGroup__generateLayoutParams_IMPL_23486_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);
void ViewGroup__getChildAt_fn(ViewGroup* __this, int* arg0, ::g::Android::android::view::View** __retval);
void ViewGroup__getChildAt_IMPL_23491_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval);
void ViewGroup__getChildCount_fn(ViewGroup* __this, int* __retval);
void ViewGroup__getChildCount_IMPL_23490_fn(bool* arg0_, jobject* arg1_, int* __retval);
void ViewGroup__getChildDrawingOrder_IMPL_23422_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* __retval);
void ViewGroup__getChildMeasureSpec_fn(int* arg0, int* arg1, int* arg2, int* __retval);
void ViewGroup__getChildMeasureSpec_IMPL_23495_fn(int* arg0_, int* arg1_, int* arg2_, int* __retval);
void ViewGroup__getChildStaticTransformation_IMPL_23431_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, bool* __retval);
void ViewGroup__getChildVisibleRect_fn(ViewGroup* __this, ::g::Android::android::view::View* arg0, ::g::Android::android::graphics::Rect* arg1, ::g::Android::android::graphics::Point* arg2, bool* __retval);
void ViewGroup__getChildVisibleRect_IMPL_23465_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_, bool* __retval);
void ViewGroup__getClipChildren_fn(ViewGroup* __this, bool* __retval);
void ViewGroup__getClipChildren_IMPL_23424_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void ViewGroup__getDescendantFocusability_fn(ViewGroup* __this, int* __retval);
void ViewGroup__getDescendantFocusability_IMPL_23364_fn(bool* arg0_, jobject* arg1_, int* __retval);
void ViewGroup__getFocusedChild_fn(ViewGroup* __this, ::g::Android::android::view::View** __retval);
void ViewGroup__getFocusedChild_IMPL_23379_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void ViewGroup__getLayoutAnimation_fn(ViewGroup* __this, ::g::Android::android::view::animation::LayoutAnimationController** __retval);
void ViewGroup__getLayoutAnimation_IMPL_23472_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void ViewGroup__getLayoutAnimationListener_fn(ViewGroup* __this, uObject** __retval);
void ViewGroup__getLayoutAnimationListener_IMPL_23502_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void ViewGroup__getLayoutMode_fn(ViewGroup* __this, int* __retval);
void ViewGroup__getLayoutMode_IMPL_23483_fn(bool* arg0_, jobject* arg1_, int* __retval);
void ViewGroup__getLayoutTransition_fn(ViewGroup* __this, ::g::Android::android::animation::LayoutTransition** __retval);
void ViewGroup__getLayoutTransition_IMPL_23452_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void ViewGroup__getOverlay1_fn(ViewGroup* __this, ::g::Android::android::view::ViewGroupOverlay** __retval);
void ViewGroup__getOverlay_IMPL_23421_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void ViewGroup__getPersistentDrawingCache_fn(ViewGroup* __this, int* __retval);
void ViewGroup__getPersistentDrawingCache_IMPL_23481_fn(bool* arg0_, jobject* arg1_, int* __retval);
void ViewGroup__hasFocus_fn(ViewGroup* __this, bool* __retval);
void ViewGroup__hasFocus_IMPL_23380_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void ViewGroup__hasFocusable_fn(ViewGroup* __this, bool* __retval);
void ViewGroup__hasFocusable_IMPL_23382_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void ViewGroup__hasTransientState_fn(ViewGroup* __this, bool* __retval);
void ViewGroup__hasTransientState_IMPL_23375_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void ViewGroup__indexOfChild_fn(ViewGroup* __this, ::g::Android::android::view::View* arg0, int* __retval);
void ViewGroup__indexOfChild_IMPL_23489_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* __retval);
void ViewGroup__invalidateChild_fn(ViewGroup* __this, ::g::Android::android::view::View* arg0, ::g::Android::android::graphics::Rect* arg1);
void ViewGroup__invalidateChild_IMPL_23461_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_);
void ViewGroup__invalidateChildInParent_fn(ViewGroup* __this, ::g::Android::Runtime::IntArray* arg0, ::g::Android::android::graphics::Rect* arg1, uObject** __retval);
void ViewGroup__invalidateChildInParent_IMPL_23462_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, uObject** __retval);
void ViewGroup__isAlwaysDrawnWithCacheEnabled_fn(ViewGroup* __this, bool* __retval);
void ViewGroup__isAlwaysDrawnWithCacheEnabled_IMPL_23475_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void ViewGroup__isAnimationCacheEnabled_fn(ViewGroup* __this, bool* __retval);
void ViewGroup__isAnimationCacheEnabled_IMPL_23473_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void ViewGroup__isChildrenDrawingOrderEnabled_IMPL_23479_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void ViewGroup__isChildrenDrawnWithCacheEnabled_IMPL_23477_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void ViewGroup__isMotionEventSplittingEnabled_fn(ViewGroup* __this, bool* __retval);
void ViewGroup__isMotionEventSplittingEnabled_IMPL_23407_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void ViewGroup__jumpDrawablesToCurrentState_fn(ViewGroup* __this);
void ViewGroup__jumpDrawablesToCurrentState_IMPL_23504_fn(bool* arg0_, jobject* arg1_);
void ViewGroup__layout_fn(ViewGroup* __this, int* arg0, int* arg1, int* arg2, int* arg3);
void ViewGroup__layout_IMPL_23466_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, int* arg4_, int* arg5_);
void ViewGroup__get_LAYOUT_MODE_CLIP_BOUNDS_fn(int* __retval);
void ViewGroup__get_LAYOUT_MODE_OPTICAL_BOUNDS_fn(int* __retval);
void ViewGroup__measureChild_IMPL_23493_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, int* arg4_);
void ViewGroup__measureChildren_IMPL_23492_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_);
void ViewGroup__measureChildWithMargins_IMPL_23494_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, int* arg4_, int* arg5_, int* arg6_);
void ViewGroup__notifySubtreeAccessibilityStateChanged_fn(ViewGroup* __this, ::g::Android::android::view::View* arg0, ::g::Android::android::view::View* arg1, int* arg2);
void ViewGroup__notifySubtreeAccessibilityStateChanged_IMPL_23412_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, int* arg4_);
void ViewGroup__offsetDescendantRectToMyCoords_fn(ViewGroup* __this, ::g::Android::android::view::View* arg0, ::g::Android::android::graphics::Rect* arg1);
void ViewGroup__offsetDescendantRectToMyCoords_IMPL_23463_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_);
void ViewGroup__offsetRectIntoDescendantCoords_fn(ViewGroup* __this, ::g::Android::android::view::View* arg0, ::g::Android::android::graphics::Rect* arg1);
void ViewGroup__offsetRectIntoDescendantCoords_IMPL_23464_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_);
void ViewGroup__onAnimationEnd_IMPL_23419_fn(bool* arg0_, jobject* arg1_);
void ViewGroup__onAnimationStart_IMPL_23418_fn(bool* arg0_, jobject* arg1_);
void ViewGroup__onAttachedToWindow_IMPL_23440_fn(bool* arg0_, jobject* arg1_);
void ViewGroup__onCreateDrawableState_IMPL_23505_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject** __retval);
void ViewGroup__onDetachedFromWindow_IMPL_23441_fn(bool* arg0_, jobject* arg1_);
void ViewGroup__onInterceptHoverEvent_fn(ViewGroup* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval);
void ViewGroup__onInterceptHoverEvent_IMPL_23402_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void ViewGroup__onInterceptTouchEvent_fn(ViewGroup* __this, ::g::Android::android::view::MotionEvent* arg0, bool* __retval);
void ViewGroup__onInterceptTouchEvent_IMPL_23409_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void ViewGroup__onRequestFocusInDescendants_IMPL_23411_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval);
void ViewGroup__onRequestSendAccessibilityEvent_fn(ViewGroup* __this, ::g::Android::android::view::View* arg0, ::g::Android::android::view::accessibility::AccessibilityEvent* arg1, bool* __retval);
void ViewGroup__onRequestSendAccessibilityEvent_IMPL_23373_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, bool* __retval);
void ViewGroup__get_PERSISTENT_ALL_CACHES_fn(int* __retval);
void ViewGroup__get_PERSISTENT_ANIMATION_CACHE_fn(int* __retval);
void ViewGroup__get_PERSISTENT_NO_CACHE_fn(int* __retval);
void ViewGroup__get_PERSISTENT_SCROLLING_CACHE_fn(int* __retval);
void ViewGroup__recomputeViewAttributes_fn(ViewGroup* __this, ::g::Android::android::view::View* arg0);
void ViewGroup__recomputeViewAttributes_IMPL_23391_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ViewGroup__removeAllViews_fn(ViewGroup* __this);
void ViewGroup__removeAllViews_IMPL_23453_fn(bool* arg0_, jobject* arg1_);
void ViewGroup__removeAllViewsInLayout_fn(ViewGroup* __this);
void ViewGroup__removeAllViewsInLayout_IMPL_23454_fn(bool* arg0_, jobject* arg1_);
void ViewGroup__removeDetachedView_IMPL_23455_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* arg3_);
void ViewGroup__removeView_fn(ViewGroup* __this, ::g::Android::android::view::View* arg0);
void ViewGroup__removeView_IMPL_23446_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ViewGroup__removeViewAt_fn(ViewGroup* __this, int* arg0);
void ViewGroup__removeViewAt_IMPL_23449_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void ViewGroup__removeViewInLayout_fn(ViewGroup* __this, ::g::Android::android::view::View* arg0);
void ViewGroup__removeViewInLayout_IMPL_23447_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ViewGroup__removeViews_fn(ViewGroup* __this, int* arg0, int* arg1);
void ViewGroup__removeViews_IMPL_23450_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_);
void ViewGroup__removeViewsInLayout_fn(ViewGroup* __this, int* arg0, int* arg1);
void ViewGroup__removeViewsInLayout_IMPL_23448_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_);
void ViewGroup__requestChildFocus_fn(ViewGroup* __this, ::g::Android::android::view::View* arg0, ::g::Android::android::view::View* arg1);
void ViewGroup__requestChildFocus_IMPL_23366_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_);
void ViewGroup__requestChildRectangleOnScreen_fn(ViewGroup* __this, ::g::Android::android::view::View* arg0, ::g::Android::android::graphics::Rect* arg1, bool* arg2, bool* __retval);
void ViewGroup__requestChildRectangleOnScreen_IMPL_23371_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, bool* arg4_, bool* __retval);
void ViewGroup__requestDisallowInterceptTouchEvent_fn(ViewGroup* __this, bool* arg0);
void ViewGroup__requestDisallowInterceptTouchEvent_IMPL_23408_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void ViewGroup__requestFocus2_fn(ViewGroup* __this, int* arg0, ::g::Android::android::graphics::Rect* arg1, bool* __retval);
void ViewGroup__requestFocus_IMPL_23410_fn(bool* arg0_, jobject* arg1_, int* arg2_, uObject* arg3_, bool* __retval);
void ViewGroup__requestSendAccessibilityEvent_fn(ViewGroup* __this, ::g::Android::android::view::View* arg0, ::g::Android::android::view::accessibility::AccessibilityEvent* arg1, bool* __retval);
void ViewGroup__requestSendAccessibilityEvent_IMPL_23372_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, bool* __retval);
void ViewGroup__requestTransparentRegion_fn(ViewGroup* __this, ::g::Android::android::view::View* arg0);
void ViewGroup__requestTransparentRegion_IMPL_23500_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ViewGroup__scheduleLayoutAnimation_fn(ViewGroup* __this);
void ViewGroup__scheduleLayoutAnimation_IMPL_23470_fn(bool* arg0_, jobject* arg1_);
void ViewGroup__setAddStatesFromChildren_fn(ViewGroup* __this, bool* arg0);
void ViewGroup__setAddStatesFromChildren_IMPL_23506_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void ViewGroup__setAlwaysDrawnWithCacheEnabled_fn(ViewGroup* __this, bool* arg0);
void ViewGroup__setAlwaysDrawnWithCacheEnabled_IMPL_23476_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void ViewGroup__setAnimationCacheEnabled_fn(ViewGroup* __this, bool* arg0);
void ViewGroup__setAnimationCacheEnabled_IMPL_23474_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void ViewGroup__setChildrenDrawingCacheEnabled_IMPL_23417_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void ViewGroup__setChildrenDrawingOrderEnabled_IMPL_23480_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void ViewGroup__setChildrenDrawnWithCacheEnabled_IMPL_23478_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void ViewGroup__setClipChildren_fn(ViewGroup* __this, bool* arg0);
void ViewGroup__setClipChildren_IMPL_23425_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void ViewGroup__setClipToPadding_fn(ViewGroup* __this, bool* arg0);
void ViewGroup__setClipToPadding_IMPL_23426_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void ViewGroup__setDescendantFocusability_fn(ViewGroup* __this, int* arg0);
void ViewGroup__setDescendantFocusability_IMPL_23365_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void ViewGroup__setLayoutAnimation_fn(ViewGroup* __this, ::g::Android::android::view::animation::LayoutAnimationController* arg0);
void ViewGroup__setLayoutAnimation_IMPL_23471_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ViewGroup__setLayoutAnimationListener_fn(ViewGroup* __this, uObject* arg0);
void ViewGroup__setLayoutAnimationListener_IMPL_23509_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ViewGroup__setLayoutMode_fn(ViewGroup* __this, int* arg0);
void ViewGroup__setLayoutMode_IMPL_23484_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void ViewGroup__setLayoutTransition_fn(ViewGroup* __this, ::g::Android::android::animation::LayoutTransition* arg0);
void ViewGroup__setLayoutTransition_IMPL_23451_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ViewGroup__setMotionEventSplittingEnabled_fn(ViewGroup* __this, bool* arg0);
void ViewGroup__setMotionEventSplittingEnabled_IMPL_23406_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void ViewGroup__setOnHierarchyChangeListener_fn(ViewGroup* __this, uObject* arg0);
void ViewGroup__setOnHierarchyChangeListener_IMPL_23439_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ViewGroup__setPersistentDrawingCache_fn(ViewGroup* __this, int* arg0);
void ViewGroup__setPersistentDrawingCache_IMPL_23482_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void ViewGroup__setStaticTransformationsEnabled_IMPL_23430_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void ViewGroup__shouldDelayChildPressedState_fn(ViewGroup* __this, bool* __retval);
void ViewGroup__shouldDelayChildPressedState_IMPL_23510_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void ViewGroup__showContextMenuForChild_fn(ViewGroup* __this, ::g::Android::android::view::View* arg0, bool* __retval);
void ViewGroup__showContextMenuForChild_IMPL_23368_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void ViewGroup__startActionModeForChild_fn(ViewGroup* __this, ::g::Android::android::view::View* arg0, uObject* arg1, ::g::Android::android::view::ActionMode** __retval);
void ViewGroup__startActionModeForChild_IMPL_23369_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, uObject** __retval);
void ViewGroup__startLayoutAnimation_fn(ViewGroup* __this);
void ViewGroup__startLayoutAnimation_IMPL_23469_fn(bool* arg0_, jobject* arg1_);
void ViewGroup__startViewTransition_fn(ViewGroup* __this, ::g::Android::android::view::View* arg0);
void ViewGroup__startViewTransition_IMPL_23497_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void ViewGroup__updateViewLayout_fn(ViewGroup* __this, ::g::Android::android::view::View* arg0, ::g::Android::android::view::ViewGroupDLRLayoutParams* arg1);
void ViewGroup__updateViewLayout_IMPL_23437_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_);

struct ViewGroup : ::g::Android::android::view::View
{
    static jclass _javaClass3_;
    static jclass& _javaClass3() { return _javaClass3_; }
    static jmethodID addChildrenForAccessibility_23401_ID_;
    static jmethodID& addChildrenForAccessibility_23401_ID() { return addChildrenForAccessibility_23401_ID_; }
    static jmethodID addFocusables_23383_ID_;
    static jmethodID& addFocusables_23383_ID() { return addFocusables_23383_ID_; }
    static jmethodID addStatesFromChildren_23507_ID_;
    static jmethodID& addStatesFromChildren_23507_ID() { return addStatesFromChildren_23507_ID_; }
    static jmethodID addTouchables_23386_ID_;
    static jmethodID& addTouchables_23386_ID() { return addTouchables_23386_ID_; }
    static jmethodID addView_23432_ID_;
    static jmethodID& addView_23432_ID() { return addView_23432_ID_; }
    static jmethodID addView_23433_ID_;
    static jmethodID& addView_23433_ID() { return addView_23433_ID_; }
    static jmethodID addView_23434_ID_;
    static jmethodID& addView_23434_ID() { return addView_23434_ID_; }
    static jmethodID addView_23435_ID_;
    static jmethodID& addView_23435_ID() { return addView_23435_ID_; }
    static jmethodID addView_23436_ID_;
    static jmethodID& addView_23436_ID() { return addView_23436_ID_; }
    static jmethodID addViewInLayout_23442_ID_;
    static jmethodID& addViewInLayout_23442_ID() { return addViewInLayout_23442_ID_; }
    static jmethodID addViewInLayout_23443_ID_;
    static jmethodID& addViewInLayout_23443_ID() { return addViewInLayout_23443_ID_; }
    static jmethodID attachLayoutAnimationParameters_23445_ID_;
    static jmethodID& attachLayoutAnimationParameters_23445_ID() { return attachLayoutAnimationParameters_23445_ID_; }
    static jmethodID attachViewToParent_23456_ID_;
    static jmethodID& attachViewToParent_23456_ID() { return attachViewToParent_23456_ID_; }
    static jmethodID bringChildToFront_23392_ID_;
    static jmethodID& bringChildToFront_23392_ID() { return bringChildToFront_23392_ID_; }
    static jmethodID canAnimate_23468_ID_;
    static jmethodID& canAnimate_23468_ID() { return canAnimate_23468_ID_; }
    static jmethodID checkLayoutParams_23438_ID_;
    static jmethodID& checkLayoutParams_23438_ID() { return checkLayoutParams_23438_ID_; }
    static jmethodID childDrawableStateChanged_23508_ID_;
    static jmethodID& childDrawableStateChanged_23508_ID() { return childDrawableStateChanged_23508_ID_; }
    static jmethodID childHasTransientStateChanged_23374_ID_;
    static jmethodID& childHasTransientStateChanged_23374_ID() { return childHasTransientStateChanged_23374_ID_; }
    static jmethodID cleanupLayoutState_23444_ID_;
    static jmethodID& cleanupLayoutState_23444_ID() { return cleanupLayoutState_23444_ID_; }
    static jmethodID clearChildFocus_23377_ID_;
    static jmethodID& clearChildFocus_23377_ID() { return clearChildFocus_23377_ID_; }
    static jmethodID clearDisappearingChildren_23496_ID_;
    static jmethodID& clearDisappearingChildren_23496_ID() { return clearDisappearingChildren_23496_ID_; }
    static jmethodID clearFocus_23378_ID_;
    static jmethodID& clearFocus_23378_ID() { return clearFocus_23378_ID_; }
    static jmethodID debug_23488_ID_;
    static jmethodID& debug_23488_ID() { return debug_23488_ID_; }
    static jmethodID detachAllViewsFromParent_23460_ID_;
    static jmethodID& detachAllViewsFromParent_23460_ID() { return detachAllViewsFromParent_23460_ID_; }
    static jmethodID detachViewFromParent_23457_ID_;
    static jmethodID& detachViewFromParent_23457_ID() { return detachViewFromParent_23457_ID_; }
    static jmethodID detachViewFromParent_23458_ID_;
    static jmethodID& detachViewFromParent_23458_ID() { return detachViewFromParent_23458_ID_; }
    static jmethodID detachViewsFromParent_23459_ID_;
    static jmethodID& detachViewsFromParent_23459_ID() { return detachViewsFromParent_23459_ID_; }
    static jmethodID dispatchConfigurationChanged_23390_ID_;
    static jmethodID& dispatchConfigurationChanged_23390_ID() { return dispatchConfigurationChanged_23390_ID_; }
    static jmethodID dispatchDisplayHint_23387_ID_;
    static jmethodID& dispatchDisplayHint_23387_ID() { return dispatchDisplayHint_23387_ID_; }
    static jmethodID dispatchDragEvent_23393_ID_;
    static jmethodID& dispatchDragEvent_23393_ID() { return dispatchDragEvent_23393_ID_; }
    static jmethodID dispatchDraw_23420_ID_;
    static jmethodID& dispatchDraw_23420_ID() { return dispatchDraw_23420_ID_; }
    static jmethodID dispatchFreezeSelfOnly_23414_ID_;
    static jmethodID& dispatchFreezeSelfOnly_23414_ID() { return dispatchFreezeSelfOnly_23414_ID_; }
    static jmethodID dispatchGenericFocusedEvent_23404_ID_;
    static jmethodID& dispatchGenericFocusedEvent_23404_ID() { return dispatchGenericFocusedEvent_23404_ID_; }
    static jmethodID dispatchGenericPointerEvent_23403_ID_;
    static jmethodID& dispatchGenericPointerEvent_23403_ID() { return dispatchGenericPointerEvent_23403_ID_; }
    static jmethodID dispatchHoverEvent_23400_ID_;
    static jmethodID& dispatchHoverEvent_23400_ID() { return dispatchHoverEvent_23400_ID_; }
    static jmethodID dispatchKeyEvent_23397_ID_;
    static jmethodID& dispatchKeyEvent_23397_ID() { return dispatchKeyEvent_23397_ID_; }
    static jmethodID dispatchKeyEventPreIme_23396_ID_;
    static jmethodID& dispatchKeyEventPreIme_23396_ID() { return dispatchKeyEventPreIme_23396_ID_; }
    static jmethodID dispatchKeyShortcutEvent_23398_ID_;
    static jmethodID& dispatchKeyShortcutEvent_23398_ID() { return dispatchKeyShortcutEvent_23398_ID_; }
    static jmethodID dispatchRestoreInstanceState_23415_ID_;
    static jmethodID& dispatchRestoreInstanceState_23415_ID() { return dispatchRestoreInstanceState_23415_ID_; }
    static jmethodID dispatchSaveInstanceState_23413_ID_;
    static jmethodID& dispatchSaveInstanceState_23413_ID() { return dispatchSaveInstanceState_23413_ID_; }
    static jmethodID dispatchSetActivated_23428_ID_;
    static jmethodID& dispatchSetActivated_23428_ID() { return dispatchSetActivated_23428_ID_; }
    static jmethodID dispatchSetPressed_23429_ID_;
    static jmethodID& dispatchSetPressed_23429_ID() { return dispatchSetPressed_23429_ID_; }
    static jmethodID dispatchSetSelected_23427_ID_;
    static jmethodID& dispatchSetSelected_23427_ID() { return dispatchSetSelected_23427_ID_; }
    static jmethodID dispatchSystemUiVisibilityChanged_23395_ID_;
    static jmethodID& dispatchSystemUiVisibilityChanged_23395_ID() { return dispatchSystemUiVisibilityChanged_23395_ID_; }
    static jmethodID dispatchThawSelfOnly_23416_ID_;
    static jmethodID& dispatchThawSelfOnly_23416_ID() { return dispatchThawSelfOnly_23416_ID_; }
    static jmethodID dispatchTouchEvent_23405_ID_;
    static jmethodID& dispatchTouchEvent_23405_ID() { return dispatchTouchEvent_23405_ID_; }
    static jmethodID dispatchTrackballEvent_23399_ID_;
    static jmethodID& dispatchTrackballEvent_23399_ID() { return dispatchTrackballEvent_23399_ID_; }
    static jmethodID dispatchUnhandledMove_23376_ID_;
    static jmethodID& dispatchUnhandledMove_23376_ID() { return dispatchUnhandledMove_23376_ID_; }
    static jmethodID dispatchVisibilityChanged_23388_ID_;
    static jmethodID& dispatchVisibilityChanged_23388_ID() { return dispatchVisibilityChanged_23388_ID_; }
    static jmethodID dispatchWindowFocusChanged_23385_ID_;
    static jmethodID& dispatchWindowFocusChanged_23385_ID() { return dispatchWindowFocusChanged_23385_ID_; }
    static jmethodID dispatchWindowSystemUiVisiblityChanged_23394_ID_;
    static jmethodID& dispatchWindowSystemUiVisiblityChanged_23394_ID() { return dispatchWindowSystemUiVisiblityChanged_23394_ID_; }
    static jmethodID dispatchWindowVisibilityChanged_23389_ID_;
    static jmethodID& dispatchWindowVisibilityChanged_23389_ID() { return dispatchWindowVisibilityChanged_23389_ID_; }
    static jmethodID drawableStateChanged_23503_ID_;
    static jmethodID& drawableStateChanged_23503_ID() { return drawableStateChanged_23503_ID_; }
    static jmethodID drawChild_23423_ID_;
    static jmethodID& drawChild_23423_ID() { return drawChild_23423_ID_; }
    static jmethodID endViewTransition_23498_ID_;
    static jmethodID& endViewTransition_23498_ID() { return endViewTransition_23498_ID_; }
    static jmethodID findFocus_23381_ID_;
    static jmethodID& findFocus_23381_ID() { return findFocus_23381_ID_; }
    static jmethodID findViewsWithText_23384_ID_;
    static jmethodID& findViewsWithText_23384_ID() { return findViewsWithText_23384_ID_; }
    static jmethodID fitSystemWindows_23501_ID_;
    static jmethodID& fitSystemWindows_23501_ID() { return fitSystemWindows_23501_ID_; }
    static jfieldID FOCUS_AFTER_DESCENDANTS_23353_ID_;
    static jfieldID& FOCUS_AFTER_DESCENDANTS_23353_ID() { return FOCUS_AFTER_DESCENDANTS_23353_ID_; }
    static jfieldID FOCUS_BEFORE_DESCENDANTS_23352_ID_;
    static jfieldID& FOCUS_BEFORE_DESCENDANTS_23352_ID() { return FOCUS_BEFORE_DESCENDANTS_23352_ID_; }
    static jfieldID FOCUS_BLOCK_DESCENDANTS_23354_ID_;
    static jfieldID& FOCUS_BLOCK_DESCENDANTS_23354_ID() { return FOCUS_BLOCK_DESCENDANTS_23354_ID_; }
    static jmethodID focusableViewAvailable_23367_ID_;
    static jmethodID& focusableViewAvailable_23367_ID() { return focusableViewAvailable_23367_ID_; }
    static jmethodID focusSearch_23370_ID_;
    static jmethodID& focusSearch_23370_ID() { return focusSearch_23370_ID_; }
    static jmethodID gatherTransparentRegion_23499_ID_;
    static jmethodID& gatherTransparentRegion_23499_ID() { return gatherTransparentRegion_23499_ID_; }
    static jmethodID generateDefaultLayoutParams_23487_ID_;
    static jmethodID& generateDefaultLayoutParams_23487_ID() { return generateDefaultLayoutParams_23487_ID_; }
    static jmethodID generateLayoutParams_23485_ID_;
    static jmethodID& generateLayoutParams_23485_ID() { return generateLayoutParams_23485_ID_; }
    static jmethodID generateLayoutParams_23486_ID_;
    static jmethodID& generateLayoutParams_23486_ID() { return generateLayoutParams_23486_ID_; }
    static jmethodID getChildAt_23491_ID_;
    static jmethodID& getChildAt_23491_ID() { return getChildAt_23491_ID_; }
    static jmethodID getChildCount_23490_ID_;
    static jmethodID& getChildCount_23490_ID() { return getChildCount_23490_ID_; }
    static jmethodID getChildDrawingOrder_23422_ID_;
    static jmethodID& getChildDrawingOrder_23422_ID() { return getChildDrawingOrder_23422_ID_; }
    static jmethodID getChildMeasureSpec_23495_ID_;
    static jmethodID& getChildMeasureSpec_23495_ID() { return getChildMeasureSpec_23495_ID_; }
    static jmethodID getChildStaticTransformation_23431_ID_;
    static jmethodID& getChildStaticTransformation_23431_ID() { return getChildStaticTransformation_23431_ID_; }
    static jmethodID getChildVisibleRect_23465_ID_;
    static jmethodID& getChildVisibleRect_23465_ID() { return getChildVisibleRect_23465_ID_; }
    static jmethodID getClipChildren_23424_ID_;
    static jmethodID& getClipChildren_23424_ID() { return getClipChildren_23424_ID_; }
    static jmethodID getDescendantFocusability_23364_ID_;
    static jmethodID& getDescendantFocusability_23364_ID() { return getDescendantFocusability_23364_ID_; }
    static jmethodID getFocusedChild_23379_ID_;
    static jmethodID& getFocusedChild_23379_ID() { return getFocusedChild_23379_ID_; }
    static jmethodID getLayoutAnimation_23472_ID_;
    static jmethodID& getLayoutAnimation_23472_ID() { return getLayoutAnimation_23472_ID_; }
    static jmethodID getLayoutAnimationListener_23502_ID_;
    static jmethodID& getLayoutAnimationListener_23502_ID() { return getLayoutAnimationListener_23502_ID_; }
    static jmethodID getLayoutMode_23483_ID_;
    static jmethodID& getLayoutMode_23483_ID() { return getLayoutMode_23483_ID_; }
    static jmethodID getLayoutTransition_23452_ID_;
    static jmethodID& getLayoutTransition_23452_ID() { return getLayoutTransition_23452_ID_; }
    static jmethodID getOverlay_23421_ID_;
    static jmethodID& getOverlay_23421_ID() { return getOverlay_23421_ID_; }
    static jmethodID getPersistentDrawingCache_23481_ID_;
    static jmethodID& getPersistentDrawingCache_23481_ID() { return getPersistentDrawingCache_23481_ID_; }
    static jmethodID hasFocus_23380_ID_;
    static jmethodID& hasFocus_23380_ID() { return hasFocus_23380_ID_; }
    static jmethodID hasFocusable_23382_ID_;
    static jmethodID& hasFocusable_23382_ID() { return hasFocusable_23382_ID_; }
    static jmethodID hasTransientState_23375_ID_;
    static jmethodID& hasTransientState_23375_ID() { return hasTransientState_23375_ID_; }
    static jmethodID indexOfChild_23489_ID_;
    static jmethodID& indexOfChild_23489_ID() { return indexOfChild_23489_ID_; }
    static jmethodID invalidateChild_23461_ID_;
    static jmethodID& invalidateChild_23461_ID() { return invalidateChild_23461_ID_; }
    static jmethodID invalidateChildInParent_23462_ID_;
    static jmethodID& invalidateChildInParent_23462_ID() { return invalidateChildInParent_23462_ID_; }
    static jmethodID isAlwaysDrawnWithCacheEnabled_23475_ID_;
    static jmethodID& isAlwaysDrawnWithCacheEnabled_23475_ID() { return isAlwaysDrawnWithCacheEnabled_23475_ID_; }
    static jmethodID isAnimationCacheEnabled_23473_ID_;
    static jmethodID& isAnimationCacheEnabled_23473_ID() { return isAnimationCacheEnabled_23473_ID_; }
    static jmethodID isChildrenDrawingOrderEnabled_23479_ID_;
    static jmethodID& isChildrenDrawingOrderEnabled_23479_ID() { return isChildrenDrawingOrderEnabled_23479_ID_; }
    static jmethodID isChildrenDrawnWithCacheEnabled_23477_ID_;
    static jmethodID& isChildrenDrawnWithCacheEnabled_23477_ID() { return isChildrenDrawnWithCacheEnabled_23477_ID_; }
    static jmethodID isMotionEventSplittingEnabled_23407_ID_;
    static jmethodID& isMotionEventSplittingEnabled_23407_ID() { return isMotionEventSplittingEnabled_23407_ID_; }
    static jmethodID jumpDrawablesToCurrentState_23504_ID_;
    static jmethodID& jumpDrawablesToCurrentState_23504_ID() { return jumpDrawablesToCurrentState_23504_ID_; }
    static jmethodID layout_23466_ID_;
    static jmethodID& layout_23466_ID() { return layout_23466_ID_; }
    static jfieldID LAYOUT_MODE_CLIP_BOUNDS_23359_ID_;
    static jfieldID& LAYOUT_MODE_CLIP_BOUNDS_23359_ID() { return LAYOUT_MODE_CLIP_BOUNDS_23359_ID_; }
    static jfieldID LAYOUT_MODE_OPTICAL_BOUNDS_23360_ID_;
    static jfieldID& LAYOUT_MODE_OPTICAL_BOUNDS_23360_ID() { return LAYOUT_MODE_OPTICAL_BOUNDS_23360_ID_; }
    static jmethodID measureChild_23493_ID_;
    static jmethodID& measureChild_23493_ID() { return measureChild_23493_ID_; }
    static jmethodID measureChildren_23492_ID_;
    static jmethodID& measureChildren_23492_ID() { return measureChildren_23492_ID_; }
    static jmethodID measureChildWithMargins_23494_ID_;
    static jmethodID& measureChildWithMargins_23494_ID() { return measureChildWithMargins_23494_ID_; }
    static jmethodID notifySubtreeAccessibilityStateChanged_23412_ID_;
    static jmethodID& notifySubtreeAccessibilityStateChanged_23412_ID() { return notifySubtreeAccessibilityStateChanged_23412_ID_; }
    static jmethodID offsetDescendantRectToMyCoords_23463_ID_;
    static jmethodID& offsetDescendantRectToMyCoords_23463_ID() { return offsetDescendantRectToMyCoords_23463_ID_; }
    static jmethodID offsetRectIntoDescendantCoords_23464_ID_;
    static jmethodID& offsetRectIntoDescendantCoords_23464_ID() { return offsetRectIntoDescendantCoords_23464_ID_; }
    static jmethodID onAnimationEnd_23419_ID_;
    static jmethodID& onAnimationEnd_23419_ID() { return onAnimationEnd_23419_ID_; }
    static jmethodID onAnimationStart_23418_ID_;
    static jmethodID& onAnimationStart_23418_ID() { return onAnimationStart_23418_ID_; }
    static jmethodID onAttachedToWindow_23440_ID_;
    static jmethodID& onAttachedToWindow_23440_ID() { return onAttachedToWindow_23440_ID_; }
    static jmethodID onCreateDrawableState_23505_ID_;
    static jmethodID& onCreateDrawableState_23505_ID() { return onCreateDrawableState_23505_ID_; }
    static jmethodID onDetachedFromWindow_23441_ID_;
    static jmethodID& onDetachedFromWindow_23441_ID() { return onDetachedFromWindow_23441_ID_; }
    static jmethodID onInterceptHoverEvent_23402_ID_;
    static jmethodID& onInterceptHoverEvent_23402_ID() { return onInterceptHoverEvent_23402_ID_; }
    static jmethodID onInterceptTouchEvent_23409_ID_;
    static jmethodID& onInterceptTouchEvent_23409_ID() { return onInterceptTouchEvent_23409_ID_; }
    static jmethodID onRequestFocusInDescendants_23411_ID_;
    static jmethodID& onRequestFocusInDescendants_23411_ID() { return onRequestFocusInDescendants_23411_ID_; }
    static jmethodID onRequestSendAccessibilityEvent_23373_ID_;
    static jmethodID& onRequestSendAccessibilityEvent_23373_ID() { return onRequestSendAccessibilityEvent_23373_ID_; }
    static jfieldID PERSISTENT_ALL_CACHES_23358_ID_;
    static jfieldID& PERSISTENT_ALL_CACHES_23358_ID() { return PERSISTENT_ALL_CACHES_23358_ID_; }
    static jfieldID PERSISTENT_ANIMATION_CACHE_23356_ID_;
    static jfieldID& PERSISTENT_ANIMATION_CACHE_23356_ID() { return PERSISTENT_ANIMATION_CACHE_23356_ID_; }
    static jfieldID PERSISTENT_NO_CACHE_23355_ID_;
    static jfieldID& PERSISTENT_NO_CACHE_23355_ID() { return PERSISTENT_NO_CACHE_23355_ID_; }
    static jfieldID PERSISTENT_SCROLLING_CACHE_23357_ID_;
    static jfieldID& PERSISTENT_SCROLLING_CACHE_23357_ID() { return PERSISTENT_SCROLLING_CACHE_23357_ID_; }
    static jmethodID recomputeViewAttributes_23391_ID_;
    static jmethodID& recomputeViewAttributes_23391_ID() { return recomputeViewAttributes_23391_ID_; }
    static jmethodID removeAllViews_23453_ID_;
    static jmethodID& removeAllViews_23453_ID() { return removeAllViews_23453_ID_; }
    static jmethodID removeAllViewsInLayout_23454_ID_;
    static jmethodID& removeAllViewsInLayout_23454_ID() { return removeAllViewsInLayout_23454_ID_; }
    static jmethodID removeDetachedView_23455_ID_;
    static jmethodID& removeDetachedView_23455_ID() { return removeDetachedView_23455_ID_; }
    static jmethodID removeView_23446_ID_;
    static jmethodID& removeView_23446_ID() { return removeView_23446_ID_; }
    static jmethodID removeViewAt_23449_ID_;
    static jmethodID& removeViewAt_23449_ID() { return removeViewAt_23449_ID_; }
    static jmethodID removeViewInLayout_23447_ID_;
    static jmethodID& removeViewInLayout_23447_ID() { return removeViewInLayout_23447_ID_; }
    static jmethodID removeViews_23450_ID_;
    static jmethodID& removeViews_23450_ID() { return removeViews_23450_ID_; }
    static jmethodID removeViewsInLayout_23448_ID_;
    static jmethodID& removeViewsInLayout_23448_ID() { return removeViewsInLayout_23448_ID_; }
    static jmethodID requestChildFocus_23366_ID_;
    static jmethodID& requestChildFocus_23366_ID() { return requestChildFocus_23366_ID_; }
    static jmethodID requestChildRectangleOnScreen_23371_ID_;
    static jmethodID& requestChildRectangleOnScreen_23371_ID() { return requestChildRectangleOnScreen_23371_ID_; }
    static jmethodID requestDisallowInterceptTouchEvent_23408_ID_;
    static jmethodID& requestDisallowInterceptTouchEvent_23408_ID() { return requestDisallowInterceptTouchEvent_23408_ID_; }
    static jmethodID requestFocus_23410_ID_;
    static jmethodID& requestFocus_23410_ID() { return requestFocus_23410_ID_; }
    static jmethodID requestSendAccessibilityEvent_23372_ID_;
    static jmethodID& requestSendAccessibilityEvent_23372_ID() { return requestSendAccessibilityEvent_23372_ID_; }
    static jmethodID requestTransparentRegion_23500_ID_;
    static jmethodID& requestTransparentRegion_23500_ID() { return requestTransparentRegion_23500_ID_; }
    static jmethodID scheduleLayoutAnimation_23470_ID_;
    static jmethodID& scheduleLayoutAnimation_23470_ID() { return scheduleLayoutAnimation_23470_ID_; }
    static jmethodID setAddStatesFromChildren_23506_ID_;
    static jmethodID& setAddStatesFromChildren_23506_ID() { return setAddStatesFromChildren_23506_ID_; }
    static jmethodID setAlwaysDrawnWithCacheEnabled_23476_ID_;
    static jmethodID& setAlwaysDrawnWithCacheEnabled_23476_ID() { return setAlwaysDrawnWithCacheEnabled_23476_ID_; }
    static jmethodID setAnimationCacheEnabled_23474_ID_;
    static jmethodID& setAnimationCacheEnabled_23474_ID() { return setAnimationCacheEnabled_23474_ID_; }
    static jmethodID setChildrenDrawingCacheEnabled_23417_ID_;
    static jmethodID& setChildrenDrawingCacheEnabled_23417_ID() { return setChildrenDrawingCacheEnabled_23417_ID_; }
    static jmethodID setChildrenDrawingOrderEnabled_23480_ID_;
    static jmethodID& setChildrenDrawingOrderEnabled_23480_ID() { return setChildrenDrawingOrderEnabled_23480_ID_; }
    static jmethodID setChildrenDrawnWithCacheEnabled_23478_ID_;
    static jmethodID& setChildrenDrawnWithCacheEnabled_23478_ID() { return setChildrenDrawnWithCacheEnabled_23478_ID_; }
    static jmethodID setClipChildren_23425_ID_;
    static jmethodID& setClipChildren_23425_ID() { return setClipChildren_23425_ID_; }
    static jmethodID setClipToPadding_23426_ID_;
    static jmethodID& setClipToPadding_23426_ID() { return setClipToPadding_23426_ID_; }
    static jmethodID setDescendantFocusability_23365_ID_;
    static jmethodID& setDescendantFocusability_23365_ID() { return setDescendantFocusability_23365_ID_; }
    static jmethodID setLayoutAnimation_23471_ID_;
    static jmethodID& setLayoutAnimation_23471_ID() { return setLayoutAnimation_23471_ID_; }
    static jmethodID setLayoutAnimationListener_23509_ID_;
    static jmethodID& setLayoutAnimationListener_23509_ID() { return setLayoutAnimationListener_23509_ID_; }
    static jmethodID setLayoutMode_23484_ID_;
    static jmethodID& setLayoutMode_23484_ID() { return setLayoutMode_23484_ID_; }
    static jmethodID setLayoutTransition_23451_ID_;
    static jmethodID& setLayoutTransition_23451_ID() { return setLayoutTransition_23451_ID_; }
    static jmethodID setMotionEventSplittingEnabled_23406_ID_;
    static jmethodID& setMotionEventSplittingEnabled_23406_ID() { return setMotionEventSplittingEnabled_23406_ID_; }
    static jmethodID setOnHierarchyChangeListener_23439_ID_;
    static jmethodID& setOnHierarchyChangeListener_23439_ID() { return setOnHierarchyChangeListener_23439_ID_; }
    static jmethodID setPersistentDrawingCache_23482_ID_;
    static jmethodID& setPersistentDrawingCache_23482_ID() { return setPersistentDrawingCache_23482_ID_; }
    static jmethodID setStaticTransformationsEnabled_23430_ID_;
    static jmethodID& setStaticTransformationsEnabled_23430_ID() { return setStaticTransformationsEnabled_23430_ID_; }
    static jmethodID shouldDelayChildPressedState_23510_ID_;
    static jmethodID& shouldDelayChildPressedState_23510_ID() { return shouldDelayChildPressedState_23510_ID_; }
    static jmethodID showContextMenuForChild_23368_ID_;
    static jmethodID& showContextMenuForChild_23368_ID() { return showContextMenuForChild_23368_ID_; }
    static jmethodID startActionModeForChild_23369_ID_;
    static jmethodID& startActionModeForChild_23369_ID() { return startActionModeForChild_23369_ID_; }
    static jmethodID startLayoutAnimation_23469_ID_;
    static jmethodID& startLayoutAnimation_23469_ID() { return startLayoutAnimation_23469_ID_; }
    static jmethodID startViewTransition_23497_ID_;
    static jmethodID& startViewTransition_23497_ID() { return startViewTransition_23497_ID_; }
    static jmethodID updateViewLayout_23437_ID_;
    static jmethodID& updateViewLayout_23437_ID() { return updateViewLayout_23437_ID_; }
    static jmethodID ViewGroup_23361_ID_c_;
    static jmethodID& ViewGroup_23361_ID_c() { return ViewGroup_23361_ID_c_; }
    static jmethodID ViewGroup_23362_ID_c_;
    static jmethodID& ViewGroup_23362_ID_c() { return ViewGroup_23362_ID_c_; }
    static jmethodID ViewGroup_23363_ID_c_;
    static jmethodID& ViewGroup_23363_ID_c() { return ViewGroup_23363_ID_c_; }

    void ctor_8(::g::Android::android::content::Context* arg0);
    void ctor_9(::g::Android::android::content::Context* arg0, uObject* arg1);
    void ctor_10(::g::Android::android::content::Context* arg0, uObject* arg1, int arg2);
    void ctor_11(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    bool addStatesFromChildren();
    void addView(::g::Android::android::view::View* arg0) { (((ViewGroup_type*)__type)->fp_addView)(this, arg0); }
    void addView1(::g::Android::android::view::View* arg0, ::g::Android::android::view::ViewGroupDLRLayoutParams* arg1) { (((ViewGroup_type*)__type)->fp_addView1)(this, arg0, arg1); }
    void addView2(::g::Android::android::view::View* arg0, int arg1) { (((ViewGroup_type*)__type)->fp_addView2)(this, arg0, &arg1); }
    void addView3(::g::Android::android::view::View* arg0, int arg1, ::g::Android::android::view::ViewGroupDLRLayoutParams* arg2) { (((ViewGroup_type*)__type)->fp_addView3)(this, arg0, &arg1, arg2); }
    void addView4(::g::Android::android::view::View* arg0, int arg1, int arg2);
    void bringChildToFront(::g::Android::android::view::View* arg0);
    void childDrawableStateChanged(::g::Android::android::view::View* arg0);
    void childHasTransientStateChanged(::g::Android::android::view::View* arg0, bool arg1);
    void clearChildFocus(::g::Android::android::view::View* arg0);
    void clearDisappearingChildren();
    void dispatchSetActivated1(bool arg0);
    void dispatchSetSelected1(bool arg0);
    void endViewTransition(::g::Android::android::view::View* arg0);
    void focusableViewAvailable(::g::Android::android::view::View* arg0);
    ::g::Android::android::view::View* focusSearch1(::g::Android::android::view::View* arg0, int arg1);
    bool gatherTransparentRegion(::g::Android::android::graphics::Region* arg0) { bool __retval; return (((ViewGroup_type*)__type)->fp_gatherTransparentRegion)(this, arg0, &__retval), __retval; }
    ::g::Android::android::view::ViewGroupDLRLayoutParams* generateLayoutParams(uObject* arg0) { ::g::Android::android::view::ViewGroupDLRLayoutParams* __retval; return (((ViewGroup_type*)__type)->fp_generateLayoutParams)(this, arg0, &__retval), __retval; }
    ::g::Android::android::view::View* getChildAt(int arg0);
    int getChildCount();
    bool getChildVisibleRect(::g::Android::android::view::View* arg0, ::g::Android::android::graphics::Rect* arg1, ::g::Android::android::graphics::Point* arg2);
    bool getClipChildren();
    int getDescendantFocusability();
    ::g::Android::android::view::View* getFocusedChild();
    ::g::Android::android::view::animation::LayoutAnimationController* getLayoutAnimation();
    uObject* getLayoutAnimationListener();
    int getLayoutMode();
    ::g::Android::android::animation::LayoutTransition* getLayoutTransition();
    ::g::Android::android::view::ViewGroupOverlay* getOverlay1();
    int getPersistentDrawingCache();
    int indexOfChild(::g::Android::android::view::View* arg0);
    void invalidateChild(::g::Android::android::view::View* arg0, ::g::Android::android::graphics::Rect* arg1);
    uObject* invalidateChildInParent(::g::Android::Runtime::IntArray* arg0, ::g::Android::android::graphics::Rect* arg1);
    bool isAlwaysDrawnWithCacheEnabled();
    bool isAnimationCacheEnabled();
    bool isMotionEventSplittingEnabled();
    void notifySubtreeAccessibilityStateChanged(::g::Android::android::view::View* arg0, ::g::Android::android::view::View* arg1, int arg2);
    void offsetDescendantRectToMyCoords(::g::Android::android::view::View* arg0, ::g::Android::android::graphics::Rect* arg1);
    void offsetRectIntoDescendantCoords(::g::Android::android::view::View* arg0, ::g::Android::android::graphics::Rect* arg1);
    bool onInterceptHoverEvent(::g::Android::android::view::MotionEvent* arg0);
    bool onInterceptTouchEvent(::g::Android::android::view::MotionEvent* arg0) { bool __retval; return (((ViewGroup_type*)__type)->fp_onInterceptTouchEvent)(this, arg0, &__retval), __retval; }
    bool onRequestSendAccessibilityEvent(::g::Android::android::view::View* arg0, ::g::Android::android::view::accessibility::AccessibilityEvent* arg1);
    void recomputeViewAttributes(::g::Android::android::view::View* arg0);
    void removeAllViews();
    void removeAllViewsInLayout();
    void removeView(::g::Android::android::view::View* arg0);
    void removeViewAt(int arg0);
    void removeViewInLayout(::g::Android::android::view::View* arg0);
    void removeViews(int arg0, int arg1);
    void removeViewsInLayout(int arg0, int arg1);
    void requestChildFocus(::g::Android::android::view::View* arg0, ::g::Android::android::view::View* arg1) { (((ViewGroup_type*)__type)->fp_requestChildFocus)(this, arg0, arg1); }
    bool requestChildRectangleOnScreen(::g::Android::android::view::View* arg0, ::g::Android::android::graphics::Rect* arg1, bool arg2) { bool __retval; return (((ViewGroup_type*)__type)->fp_requestChildRectangleOnScreen)(this, arg0, arg1, &arg2, &__retval), __retval; }
    void requestDisallowInterceptTouchEvent(bool arg0) { (((ViewGroup_type*)__type)->fp_requestDisallowInterceptTouchEvent)(this, &arg0); }
    bool requestSendAccessibilityEvent(::g::Android::android::view::View* arg0, ::g::Android::android::view::accessibility::AccessibilityEvent* arg1);
    void requestTransparentRegion(::g::Android::android::view::View* arg0);
    void scheduleLayoutAnimation();
    void setAddStatesFromChildren(bool arg0);
    void setAlwaysDrawnWithCacheEnabled(bool arg0);
    void setAnimationCacheEnabled(bool arg0);
    void setClipChildren(bool arg0);
    void setClipToPadding(bool arg0);
    void setDescendantFocusability(int arg0);
    void setLayoutAnimation(::g::Android::android::view::animation::LayoutAnimationController* arg0);
    void setLayoutAnimationListener(uObject* arg0);
    void setLayoutMode(int arg0);
    void setLayoutTransition(::g::Android::android::animation::LayoutTransition* arg0);
    void setMotionEventSplittingEnabled(bool arg0);
    void setOnHierarchyChangeListener(uObject* arg0);
    void setPersistentDrawingCache(int arg0);
    bool shouldDelayChildPressedState() { bool __retval; return (((ViewGroup_type*)__type)->fp_shouldDelayChildPressedState)(this, &__retval), __retval; }
    bool showContextMenuForChild(::g::Android::android::view::View* arg0);
    ::g::Android::android::view::ActionMode* startActionModeForChild(::g::Android::android::view::View* arg0, uObject* arg1);
    void startLayoutAnimation();
    void startViewTransition(::g::Android::android::view::View* arg0);
    void updateViewLayout(::g::Android::android::view::View* arg0, ::g::Android::android::view::ViewGroupDLRLayoutParams* arg1);
    static void _Init3();
    static void addChildrenForAccessibility_IMPL_23401(bool arg0_, jobject arg1_, uObject* arg2_);
    static void addFocusables_IMPL_23383(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, int arg4_);
    static bool addStatesFromChildren_IMPL_23507(bool arg0_, jobject arg1_);
    static void addTouchables_IMPL_23386(bool arg0_, jobject arg1_, uObject* arg2_);
    static void addView(ViewGroup* __this, ::g::Android::android::view::View* arg0) { ViewGroup__addView_fn(__this, arg0); }
    static void addView1(ViewGroup* __this, ::g::Android::android::view::View* arg0, ::g::Android::android::view::ViewGroupDLRLayoutParams* arg1) { ViewGroup__addView1_fn(__this, arg0, arg1); }
    static void addView2(ViewGroup* __this, ::g::Android::android::view::View* arg0, int arg1) { ViewGroup__addView2_fn(__this, arg0, &arg1); }
    static void addView3(ViewGroup* __this, ::g::Android::android::view::View* arg0, int arg1, ::g::Android::android::view::ViewGroupDLRLayoutParams* arg2) { ViewGroup__addView3_fn(__this, arg0, &arg1, arg2); }
    static void addView_IMPL_23432(bool arg0_, jobject arg1_, uObject* arg2_);
    static void addView_IMPL_23433(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
    static void addView_IMPL_23434(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, int arg4_);
    static void addView_IMPL_23435(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
    static void addView_IMPL_23436(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, uObject* arg4_);
    static bool addViewInLayout_IMPL_23442(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, uObject* arg4_);
    static bool addViewInLayout_IMPL_23443(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, uObject* arg4_, bool arg5_);
    static void attachLayoutAnimationParameters_IMPL_23445(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, int arg4_, int arg5_);
    static void attachViewToParent_IMPL_23456(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, uObject* arg4_);
    static void bringChildToFront_IMPL_23392(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool canAnimate_IMPL_23468(bool arg0_, jobject arg1_);
    static bool checkLayoutParams_IMPL_23438(bool arg0_, jobject arg1_, uObject* arg2_);
    static void childDrawableStateChanged_IMPL_23508(bool arg0_, jobject arg1_, uObject* arg2_);
    static void childHasTransientStateChanged_IMPL_23374(bool arg0_, jobject arg1_, uObject* arg2_, bool arg3_);
    static void cleanupLayoutState_IMPL_23444(bool arg0_, jobject arg1_, uObject* arg2_);
    static void clearChildFocus_IMPL_23377(bool arg0_, jobject arg1_, uObject* arg2_);
    static void clearDisappearingChildren_IMPL_23496(bool arg0_, jobject arg1_);
    static void clearFocus_IMPL_23378(bool arg0_, jobject arg1_);
    static void debug_IMPL_23488(bool arg0_, jobject arg1_, int arg2_);
    static void detachAllViewsFromParent_IMPL_23460(bool arg0_, jobject arg1_);
    static void detachViewFromParent_IMPL_23457(bool arg0_, jobject arg1_, uObject* arg2_);
    static void detachViewFromParent_IMPL_23458(bool arg0_, jobject arg1_, int arg2_);
    static void detachViewsFromParent_IMPL_23459(bool arg0_, jobject arg1_, int arg2_, int arg3_);
    static void dispatchConfigurationChanged_IMPL_23390(bool arg0_, jobject arg1_, uObject* arg2_);
    static void dispatchDisplayHint_IMPL_23387(bool arg0_, jobject arg1_, int arg2_);
    static bool dispatchDragEvent_IMPL_23393(bool arg0_, jobject arg1_, uObject* arg2_);
    static void dispatchDraw_IMPL_23420(bool arg0_, jobject arg1_, uObject* arg2_);
    static void dispatchFreezeSelfOnly_IMPL_23414(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool dispatchGenericFocusedEvent_IMPL_23404(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool dispatchGenericPointerEvent_IMPL_23403(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool dispatchHoverEvent_IMPL_23400(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool dispatchKeyEvent_IMPL_23397(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool dispatchKeyEventPreIme_IMPL_23396(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool dispatchKeyShortcutEvent_IMPL_23398(bool arg0_, jobject arg1_, uObject* arg2_);
    static void dispatchRestoreInstanceState_IMPL_23415(bool arg0_, jobject arg1_, uObject* arg2_);
    static void dispatchSaveInstanceState_IMPL_23413(bool arg0_, jobject arg1_, uObject* arg2_);
    static void dispatchSetActivated_IMPL_23428(bool arg0_, jobject arg1_, bool arg2_);
    static void dispatchSetPressed_IMPL_23429(bool arg0_, jobject arg1_, bool arg2_);
    static void dispatchSetSelected_IMPL_23427(bool arg0_, jobject arg1_, bool arg2_);
    static void dispatchSystemUiVisibilityChanged_IMPL_23395(bool arg0_, jobject arg1_, int arg2_);
    static void dispatchThawSelfOnly_IMPL_23416(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool dispatchTouchEvent_IMPL_23405(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool dispatchTrackballEvent_IMPL_23399(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool dispatchUnhandledMove_IMPL_23376(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
    static void dispatchVisibilityChanged_IMPL_23388(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
    static void dispatchWindowFocusChanged_IMPL_23385(bool arg0_, jobject arg1_, bool arg2_);
    static void dispatchWindowSystemUiVisiblityChanged_IMPL_23394(bool arg0_, jobject arg1_, int arg2_);
    static void dispatchWindowVisibilityChanged_IMPL_23389(bool arg0_, jobject arg1_, int arg2_);
    static void drawableStateChanged_IMPL_23503(bool arg0_, jobject arg1_);
    static bool drawChild_IMPL_23423(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, int64_t arg4_);
    static void endViewTransition_IMPL_23498(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* findFocus_IMPL_23381(bool arg0_, jobject arg1_);
    static void findViewsWithText_IMPL_23384(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, int arg4_);
    static bool fitSystemWindows_IMPL_23501(bool arg0_, jobject arg1_, uObject* arg2_);
    static void focusableViewAvailable_IMPL_23367(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* focusSearch_IMPL_23370(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
    static bool gatherTransparentRegion(ViewGroup* __this, ::g::Android::android::graphics::Region* arg0) { bool __retval; return ViewGroup__gatherTransparentRegion_fn(__this, arg0, &__retval), __retval; }
    static bool gatherTransparentRegion_IMPL_23499(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* generateDefaultLayoutParams_IMPL_23487(bool arg0_, jobject arg1_);
    static ::g::Android::android::view::ViewGroupDLRLayoutParams* generateLayoutParams(ViewGroup* __this, uObject* arg0) { ::g::Android::android::view::ViewGroupDLRLayoutParams* __retval; return ViewGroup__generateLayoutParams_fn(__this, arg0, &__retval), __retval; }
    static uObject* generateLayoutParams_IMPL_23485(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* generateLayoutParams_IMPL_23486(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* getChildAt_IMPL_23491(bool arg0_, jobject arg1_, int arg2_);
    static int getChildCount_IMPL_23490(bool arg0_, jobject arg1_);
    static int getChildDrawingOrder_IMPL_23422(bool arg0_, jobject arg1_, int arg2_, int arg3_);
    static int getChildMeasureSpec(int arg0, int arg1, int arg2);
    static int getChildMeasureSpec_IMPL_23495(int arg0_, int arg1_, int arg2_);
    static bool getChildStaticTransformation_IMPL_23431(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
    static bool getChildVisibleRect_IMPL_23465(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_);
    static bool getClipChildren_IMPL_23424(bool arg0_, jobject arg1_);
    static int getDescendantFocusability_IMPL_23364(bool arg0_, jobject arg1_);
    static uObject* getFocusedChild_IMPL_23379(bool arg0_, jobject arg1_);
    static uObject* getLayoutAnimation_IMPL_23472(bool arg0_, jobject arg1_);
    static uObject* getLayoutAnimationListener_IMPL_23502(bool arg0_, jobject arg1_);
    static int getLayoutMode_IMPL_23483(bool arg0_, jobject arg1_);
    static uObject* getLayoutTransition_IMPL_23452(bool arg0_, jobject arg1_);
    static uObject* getOverlay_IMPL_23421(bool arg0_, jobject arg1_);
    static int getPersistentDrawingCache_IMPL_23481(bool arg0_, jobject arg1_);
    static bool hasFocus_IMPL_23380(bool arg0_, jobject arg1_);
    static bool hasFocusable_IMPL_23382(bool arg0_, jobject arg1_);
    static bool hasTransientState_IMPL_23375(bool arg0_, jobject arg1_);
    static int indexOfChild_IMPL_23489(bool arg0_, jobject arg1_, uObject* arg2_);
    static void invalidateChild_IMPL_23461(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
    static uObject* invalidateChildInParent_IMPL_23462(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
    static bool isAlwaysDrawnWithCacheEnabled_IMPL_23475(bool arg0_, jobject arg1_);
    static bool isAnimationCacheEnabled_IMPL_23473(bool arg0_, jobject arg1_);
    static bool isChildrenDrawingOrderEnabled_IMPL_23479(bool arg0_, jobject arg1_);
    static bool isChildrenDrawnWithCacheEnabled_IMPL_23477(bool arg0_, jobject arg1_);
    static bool isMotionEventSplittingEnabled_IMPL_23407(bool arg0_, jobject arg1_);
    static void jumpDrawablesToCurrentState_IMPL_23504(bool arg0_, jobject arg1_);
    static void layout_IMPL_23466(bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
    static void measureChild_IMPL_23493(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, int arg4_);
    static void measureChildren_IMPL_23492(bool arg0_, jobject arg1_, int arg2_, int arg3_);
    static void measureChildWithMargins_IMPL_23494(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, int arg4_, int arg5_, int arg6_);
    static void notifySubtreeAccessibilityStateChanged_IMPL_23412(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, int arg4_);
    static void offsetDescendantRectToMyCoords_IMPL_23463(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
    static void offsetRectIntoDescendantCoords_IMPL_23464(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
    static void onAnimationEnd_IMPL_23419(bool arg0_, jobject arg1_);
    static void onAnimationStart_IMPL_23418(bool arg0_, jobject arg1_);
    static void onAttachedToWindow_IMPL_23440(bool arg0_, jobject arg1_);
    static uObject* onCreateDrawableState_IMPL_23505(bool arg0_, jobject arg1_, int arg2_);
    static void onDetachedFromWindow_IMPL_23441(bool arg0_, jobject arg1_);
    static bool onInterceptHoverEvent_IMPL_23402(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool onInterceptTouchEvent(ViewGroup* __this, ::g::Android::android::view::MotionEvent* arg0) { bool __retval; return ViewGroup__onInterceptTouchEvent_fn(__this, arg0, &__retval), __retval; }
    static bool onInterceptTouchEvent_IMPL_23409(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool onRequestFocusInDescendants_IMPL_23411(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_);
    static bool onRequestSendAccessibilityEvent_IMPL_23373(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
    static void recomputeViewAttributes_IMPL_23391(bool arg0_, jobject arg1_, uObject* arg2_);
    static void removeAllViews_IMPL_23453(bool arg0_, jobject arg1_);
    static void removeAllViewsInLayout_IMPL_23454(bool arg0_, jobject arg1_);
    static void removeDetachedView_IMPL_23455(bool arg0_, jobject arg1_, uObject* arg2_, bool arg3_);
    static void removeView_IMPL_23446(bool arg0_, jobject arg1_, uObject* arg2_);
    static void removeViewAt_IMPL_23449(bool arg0_, jobject arg1_, int arg2_);
    static void removeViewInLayout_IMPL_23447(bool arg0_, jobject arg1_, uObject* arg2_);
    static void removeViews_IMPL_23450(bool arg0_, jobject arg1_, int arg2_, int arg3_);
    static void removeViewsInLayout_IMPL_23448(bool arg0_, jobject arg1_, int arg2_, int arg3_);
    static void requestChildFocus(ViewGroup* __this, ::g::Android::android::view::View* arg0, ::g::Android::android::view::View* arg1) { ViewGroup__requestChildFocus_fn(__this, arg0, arg1); }
    static void requestChildFocus_IMPL_23366(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
    static bool requestChildRectangleOnScreen(ViewGroup* __this, ::g::Android::android::view::View* arg0, ::g::Android::android::graphics::Rect* arg1, bool arg2) { bool __retval; return ViewGroup__requestChildRectangleOnScreen_fn(__this, arg0, arg1, &arg2, &__retval), __retval; }
    static bool requestChildRectangleOnScreen_IMPL_23371(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, bool arg4_);
    static void requestDisallowInterceptTouchEvent(ViewGroup* __this, bool arg0) { ViewGroup__requestDisallowInterceptTouchEvent_fn(__this, &arg0); }
    static void requestDisallowInterceptTouchEvent_IMPL_23408(bool arg0_, jobject arg1_, bool arg2_);
    static bool requestFocus_IMPL_23410(bool arg0_, jobject arg1_, int arg2_, uObject* arg3_);
    static bool requestSendAccessibilityEvent_IMPL_23372(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
    static void requestTransparentRegion_IMPL_23500(bool arg0_, jobject arg1_, uObject* arg2_);
    static void scheduleLayoutAnimation_IMPL_23470(bool arg0_, jobject arg1_);
    static void setAddStatesFromChildren_IMPL_23506(bool arg0_, jobject arg1_, bool arg2_);
    static void setAlwaysDrawnWithCacheEnabled_IMPL_23476(bool arg0_, jobject arg1_, bool arg2_);
    static void setAnimationCacheEnabled_IMPL_23474(bool arg0_, jobject arg1_, bool arg2_);
    static void setChildrenDrawingCacheEnabled_IMPL_23417(bool arg0_, jobject arg1_, bool arg2_);
    static void setChildrenDrawingOrderEnabled_IMPL_23480(bool arg0_, jobject arg1_, bool arg2_);
    static void setChildrenDrawnWithCacheEnabled_IMPL_23478(bool arg0_, jobject arg1_, bool arg2_);
    static void setClipChildren_IMPL_23425(bool arg0_, jobject arg1_, bool arg2_);
    static void setClipToPadding_IMPL_23426(bool arg0_, jobject arg1_, bool arg2_);
    static void setDescendantFocusability_IMPL_23365(bool arg0_, jobject arg1_, int arg2_);
    static void setLayoutAnimation_IMPL_23471(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setLayoutAnimationListener_IMPL_23509(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setLayoutMode_IMPL_23484(bool arg0_, jobject arg1_, int arg2_);
    static void setLayoutTransition_IMPL_23451(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setMotionEventSplittingEnabled_IMPL_23406(bool arg0_, jobject arg1_, bool arg2_);
    static void setOnHierarchyChangeListener_IMPL_23439(bool arg0_, jobject arg1_, uObject* arg2_);
    static void setPersistentDrawingCache_IMPL_23482(bool arg0_, jobject arg1_, int arg2_);
    static void setStaticTransformationsEnabled_IMPL_23430(bool arg0_, jobject arg1_, bool arg2_);
    static bool shouldDelayChildPressedState(ViewGroup* __this) { bool __retval; return ViewGroup__shouldDelayChildPressedState_fn(__this, &__retval), __retval; }
    static bool shouldDelayChildPressedState_IMPL_23510(bool arg0_, jobject arg1_);
    static bool showContextMenuForChild_IMPL_23368(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* startActionModeForChild_IMPL_23369(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
    static void startLayoutAnimation_IMPL_23469(bool arg0_, jobject arg1_);
    static void startViewTransition_IMPL_23497(bool arg0_, jobject arg1_, uObject* arg2_);
    static void updateViewLayout_IMPL_23437(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
    static int FOCUS_AFTER_DESCENDANTS();
    static int FOCUS_BEFORE_DESCENDANTS();
    static int FOCUS_BLOCK_DESCENDANTS();
    static int LAYOUT_MODE_CLIP_BOUNDS();
    static int LAYOUT_MODE_OPTICAL_BOUNDS();
    static int PERSISTENT_ALL_CACHES();
    static int PERSISTENT_ANIMATION_CACHE();
    static int PERSISTENT_NO_CACHE();
    static int PERSISTENT_SCROLLING_CACHE();
};
// }

}}}} // ::g::Android::android::view
