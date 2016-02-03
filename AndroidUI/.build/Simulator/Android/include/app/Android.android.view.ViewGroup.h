// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_VIEW_GROUP_H__
#define __APP_ANDROID_ANDROID_VIEW_VIEW_GROUP_H__

#include <app/Android.android.view.View.h>
#include <app/Android.android.view.ViewParent.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace animation { struct LayoutTransition; } } } }
namespace app { namespace Android { namespace android { namespace content { namespace res { struct Configuration; } } } } }
namespace app { namespace Android { namespace android { namespace content { struct Context; } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct Canvas; } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct Point; } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct Rect; } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct Region; } } } }
namespace app { namespace Android { namespace android { namespace util { struct SparseArray; } } } }
namespace app { namespace Android { namespace android { namespace view { namespace accessibility { struct AccessibilityEvent; } } } } }
namespace app { namespace Android { namespace android { namespace view { namespace animation { struct LayoutAnimationController; } } } } }
namespace app { namespace Android { namespace android { namespace view { namespace animation { struct Transformation; } } } } }
namespace app { namespace Android { namespace android { namespace view { struct ActionMode; } } } }
namespace app { namespace Android { namespace android { namespace view { struct DragEvent; } } } }
namespace app { namespace Android { namespace android { namespace view { struct KeyEvent; } } } }
namespace app { namespace Android { namespace android { namespace view { struct MotionEvent; } } } }
namespace app { namespace Android { namespace android { namespace view { struct ViewGroupDLRLayoutParams; } } } }
namespace app { namespace Android { namespace android { namespace view { struct ViewGroupOverlay; } } } }
namespace app { namespace Android { namespace java { namespace util { struct ArrayList; } } } }
namespace app { namespace Android { namespace Runtime { struct IntArray; } } }

namespace app {
namespace Android {
namespace android {
namespace view {

struct ViewGroup;

extern jclass ViewGroup___javaClass_3;
extern jmethodID ViewGroup__addChildrenForAccessibility_23401_ID;
extern jmethodID ViewGroup__addFocusables_23383_ID;
extern jmethodID ViewGroup__addStatesFromChildren_23507_ID;
extern jmethodID ViewGroup__addTouchables_23386_ID;
extern jmethodID ViewGroup__addView_23432_ID;
extern jmethodID ViewGroup__addView_23433_ID;
extern jmethodID ViewGroup__addView_23434_ID;
extern jmethodID ViewGroup__addView_23435_ID;
extern jmethodID ViewGroup__addView_23436_ID;
extern jmethodID ViewGroup__addViewInLayout_23442_ID;
extern jmethodID ViewGroup__addViewInLayout_23443_ID;
extern jmethodID ViewGroup__attachLayoutAnimationParameters_23445_ID;
extern jmethodID ViewGroup__attachViewToParent_23456_ID;
extern jmethodID ViewGroup__bringChildToFront_23392_ID;
extern jmethodID ViewGroup__canAnimate_23468_ID;
extern jmethodID ViewGroup__checkLayoutParams_23438_ID;
extern jmethodID ViewGroup__childDrawableStateChanged_23508_ID;
extern jmethodID ViewGroup__childHasTransientStateChanged_23374_ID;
extern jmethodID ViewGroup__cleanupLayoutState_23444_ID;
extern jmethodID ViewGroup__clearChildFocus_23377_ID;
extern jmethodID ViewGroup__clearDisappearingChildren_23496_ID;
extern jmethodID ViewGroup__clearFocus_23378_ID;
extern jmethodID ViewGroup__debug_23488_ID;
extern jmethodID ViewGroup__detachAllViewsFromParent_23460_ID;
extern jmethodID ViewGroup__detachViewFromParent_23457_ID;
extern jmethodID ViewGroup__detachViewFromParent_23458_ID;
extern jmethodID ViewGroup__detachViewsFromParent_23459_ID;
extern jmethodID ViewGroup__dispatchConfigurationChanged_23390_ID;
extern jmethodID ViewGroup__dispatchDisplayHint_23387_ID;
extern jmethodID ViewGroup__dispatchDragEvent_23393_ID;
extern jmethodID ViewGroup__dispatchDraw_23420_ID;
extern jmethodID ViewGroup__dispatchFreezeSelfOnly_23414_ID;
extern jmethodID ViewGroup__dispatchGenericFocusedEvent_23404_ID;
extern jmethodID ViewGroup__dispatchGenericPointerEvent_23403_ID;
extern jmethodID ViewGroup__dispatchHoverEvent_23400_ID;
extern jmethodID ViewGroup__dispatchKeyEvent_23397_ID;
extern jmethodID ViewGroup__dispatchKeyEventPreIme_23396_ID;
extern jmethodID ViewGroup__dispatchKeyShortcutEvent_23398_ID;
extern jmethodID ViewGroup__dispatchRestoreInstanceState_23415_ID;
extern jmethodID ViewGroup__dispatchSaveInstanceState_23413_ID;
extern jmethodID ViewGroup__dispatchSetActivated_23428_ID;
extern jmethodID ViewGroup__dispatchSetPressed_23429_ID;
extern jmethodID ViewGroup__dispatchSetSelected_23427_ID;
extern jmethodID ViewGroup__dispatchSystemUiVisibilityChanged_23395_ID;
extern jmethodID ViewGroup__dispatchThawSelfOnly_23416_ID;
extern jmethodID ViewGroup__dispatchTouchEvent_23405_ID;
extern jmethodID ViewGroup__dispatchTrackballEvent_23399_ID;
extern jmethodID ViewGroup__dispatchUnhandledMove_23376_ID;
extern jmethodID ViewGroup__dispatchVisibilityChanged_23388_ID;
extern jmethodID ViewGroup__dispatchWindowFocusChanged_23385_ID;
extern jmethodID ViewGroup__dispatchWindowSystemUiVisiblityChanged_23394_ID;
extern jmethodID ViewGroup__dispatchWindowVisibilityChanged_23389_ID;
extern jmethodID ViewGroup__drawableStateChanged_23503_ID;
extern jmethodID ViewGroup__drawChild_23423_ID;
extern jmethodID ViewGroup__endViewTransition_23498_ID;
extern jmethodID ViewGroup__findFocus_23381_ID;
extern jmethodID ViewGroup__findViewsWithText_23384_ID;
extern jmethodID ViewGroup__fitSystemWindows_23501_ID;
extern jfieldID ViewGroup__FOCUS_AFTER_DESCENDANTS_23353_ID;
extern jfieldID ViewGroup__FOCUS_BEFORE_DESCENDANTS_23352_ID;
extern jfieldID ViewGroup__FOCUS_BLOCK_DESCENDANTS_23354_ID;
extern jmethodID ViewGroup__focusableViewAvailable_23367_ID;
extern jmethodID ViewGroup__focusSearch_23370_ID;
extern jmethodID ViewGroup__gatherTransparentRegion_23499_ID;
extern jmethodID ViewGroup__generateDefaultLayoutParams_23487_ID;
extern jmethodID ViewGroup__generateLayoutParams_23485_ID;
extern jmethodID ViewGroup__generateLayoutParams_23486_ID;
extern jmethodID ViewGroup__getChildAt_23491_ID;
extern jmethodID ViewGroup__getChildCount_23490_ID;
extern jmethodID ViewGroup__getChildDrawingOrder_23422_ID;
extern jmethodID ViewGroup__getChildMeasureSpec_23495_ID;
extern jmethodID ViewGroup__getChildStaticTransformation_23431_ID;
extern jmethodID ViewGroup__getChildVisibleRect_23465_ID;
extern jmethodID ViewGroup__getClipChildren_23424_ID;
extern jmethodID ViewGroup__getDescendantFocusability_23364_ID;
extern jmethodID ViewGroup__getFocusedChild_23379_ID;
extern jmethodID ViewGroup__getLayoutAnimation_23472_ID;
extern jmethodID ViewGroup__getLayoutAnimationListener_23502_ID;
extern jmethodID ViewGroup__getLayoutMode_23483_ID;
extern jmethodID ViewGroup__getLayoutTransition_23452_ID;
extern jmethodID ViewGroup__getOverlay_23421_ID;
extern jmethodID ViewGroup__getPersistentDrawingCache_23481_ID;
extern jmethodID ViewGroup__hasFocus_23380_ID;
extern jmethodID ViewGroup__hasFocusable_23382_ID;
extern jmethodID ViewGroup__hasTransientState_23375_ID;
extern jmethodID ViewGroup__indexOfChild_23489_ID;
extern jmethodID ViewGroup__invalidateChild_23461_ID;
extern jmethodID ViewGroup__invalidateChildInParent_23462_ID;
extern jmethodID ViewGroup__isAlwaysDrawnWithCacheEnabled_23475_ID;
extern jmethodID ViewGroup__isAnimationCacheEnabled_23473_ID;
extern jmethodID ViewGroup__isChildrenDrawingOrderEnabled_23479_ID;
extern jmethodID ViewGroup__isChildrenDrawnWithCacheEnabled_23477_ID;
extern jmethodID ViewGroup__isMotionEventSplittingEnabled_23407_ID;
extern jmethodID ViewGroup__jumpDrawablesToCurrentState_23504_ID;
extern jmethodID ViewGroup__layout_23466_ID;
extern jfieldID ViewGroup__LAYOUT_MODE_CLIP_BOUNDS_23359_ID;
extern jfieldID ViewGroup__LAYOUT_MODE_OPTICAL_BOUNDS_23360_ID;
extern jmethodID ViewGroup__measureChild_23493_ID;
extern jmethodID ViewGroup__measureChildren_23492_ID;
extern jmethodID ViewGroup__measureChildWithMargins_23494_ID;
extern jmethodID ViewGroup__notifySubtreeAccessibilityStateChanged_23412_ID;
extern jmethodID ViewGroup__offsetDescendantRectToMyCoords_23463_ID;
extern jmethodID ViewGroup__offsetRectIntoDescendantCoords_23464_ID;
extern jmethodID ViewGroup__onAnimationEnd_23419_ID;
extern jmethodID ViewGroup__onAnimationStart_23418_ID;
extern jmethodID ViewGroup__onAttachedToWindow_23440_ID;
extern jmethodID ViewGroup__onCreateDrawableState_23505_ID;
extern jmethodID ViewGroup__onDetachedFromWindow_23441_ID;
extern jmethodID ViewGroup__onInterceptHoverEvent_23402_ID;
extern jmethodID ViewGroup__onInterceptTouchEvent_23409_ID;
extern jmethodID ViewGroup__onRequestFocusInDescendants_23411_ID;
extern jmethodID ViewGroup__onRequestSendAccessibilityEvent_23373_ID;
extern jfieldID ViewGroup__PERSISTENT_ALL_CACHES_23358_ID;
extern jfieldID ViewGroup__PERSISTENT_ANIMATION_CACHE_23356_ID;
extern jfieldID ViewGroup__PERSISTENT_NO_CACHE_23355_ID;
extern jfieldID ViewGroup__PERSISTENT_SCROLLING_CACHE_23357_ID;
extern jmethodID ViewGroup__recomputeViewAttributes_23391_ID;
extern jmethodID ViewGroup__removeAllViews_23453_ID;
extern jmethodID ViewGroup__removeAllViewsInLayout_23454_ID;
extern jmethodID ViewGroup__removeDetachedView_23455_ID;
extern jmethodID ViewGroup__removeView_23446_ID;
extern jmethodID ViewGroup__removeViewAt_23449_ID;
extern jmethodID ViewGroup__removeViewInLayout_23447_ID;
extern jmethodID ViewGroup__removeViews_23450_ID;
extern jmethodID ViewGroup__removeViewsInLayout_23448_ID;
extern jmethodID ViewGroup__requestChildFocus_23366_ID;
extern jmethodID ViewGroup__requestChildRectangleOnScreen_23371_ID;
extern jmethodID ViewGroup__requestDisallowInterceptTouchEvent_23408_ID;
extern jmethodID ViewGroup__requestFocus_23410_ID;
extern jmethodID ViewGroup__requestSendAccessibilityEvent_23372_ID;
extern jmethodID ViewGroup__requestTransparentRegion_23500_ID;
extern jmethodID ViewGroup__scheduleLayoutAnimation_23470_ID;
extern jmethodID ViewGroup__setAddStatesFromChildren_23506_ID;
extern jmethodID ViewGroup__setAlwaysDrawnWithCacheEnabled_23476_ID;
extern jmethodID ViewGroup__setAnimationCacheEnabled_23474_ID;
extern jmethodID ViewGroup__setChildrenDrawingCacheEnabled_23417_ID;
extern jmethodID ViewGroup__setChildrenDrawingOrderEnabled_23480_ID;
extern jmethodID ViewGroup__setChildrenDrawnWithCacheEnabled_23478_ID;
extern jmethodID ViewGroup__setClipChildren_23425_ID;
extern jmethodID ViewGroup__setClipToPadding_23426_ID;
extern jmethodID ViewGroup__setDescendantFocusability_23365_ID;
extern jmethodID ViewGroup__setLayoutAnimation_23471_ID;
extern jmethodID ViewGroup__setLayoutAnimationListener_23509_ID;
extern jmethodID ViewGroup__setLayoutMode_23484_ID;
extern jmethodID ViewGroup__setLayoutTransition_23451_ID;
extern jmethodID ViewGroup__setMotionEventSplittingEnabled_23406_ID;
extern jmethodID ViewGroup__setOnHierarchyChangeListener_23439_ID;
extern jmethodID ViewGroup__setPersistentDrawingCache_23482_ID;
extern jmethodID ViewGroup__setStaticTransformationsEnabled_23430_ID;
extern jmethodID ViewGroup__shouldDelayChildPressedState_23510_ID;
extern jmethodID ViewGroup__showContextMenuForChild_23368_ID;
extern jmethodID ViewGroup__startActionModeForChild_23369_ID;
extern jmethodID ViewGroup__startLayoutAnimation_23469_ID;
extern jmethodID ViewGroup__startViewTransition_23497_ID;
extern jmethodID ViewGroup__updateViewLayout_23437_ID;
extern jmethodID ViewGroup__ViewGroup_23361_ID_c;
extern jmethodID ViewGroup__ViewGroup_23362_ID_c;
extern jmethodID ViewGroup__ViewGroup_23363_ID_c;

struct ViewGroup__uType : ::app::Android::android::view::View__uType
{
    ::app::Android::android::view::ViewParent __interface_2;
    void(*__fp_addView)(ViewGroup*, ::app::Android::android::view::View*);
    void(*__fp_addView_1)(ViewGroup*, ::app::Android::android::view::View*, int);
    void(*__fp_addView_3)(ViewGroup*, ::app::Android::android::view::View*, int, ::app::Android::android::view::ViewGroupDLRLayoutParams*);
    void(*__fp_addView_4)(ViewGroup*, ::app::Android::android::view::View*, ::app::Android::android::view::ViewGroupDLRLayoutParams*);
    bool(*__fp_checkLayoutParams)(ViewGroup*, ::app::Android::android::view::ViewGroupDLRLayoutParams*);
    bool(*__fp_gatherTransparentRegion)(ViewGroup*, ::app::Android::android::graphics::Region*);
    ::app::Android::android::view::ViewGroupDLRLayoutParams*(*__fp_generateDefaultLayoutParams)(ViewGroup*);
    ::app::Android::android::view::ViewGroupDLRLayoutParams*(*__fp_generateLayoutParams)(ViewGroup*, ::uObject*);
    ::app::Android::android::view::ViewGroupDLRLayoutParams*(*__fp_generateLayoutParams_1)(ViewGroup*, ::app::Android::android::view::ViewGroupDLRLayoutParams*);
    void(*__fp_measureChild)(ViewGroup*, ::app::Android::android::view::View*, int, int);
    void(*__fp_measureChildWithMargins)(ViewGroup*, ::app::Android::android::view::View*, int, int, int, int);
    bool(*__fp_onInterceptTouchEvent)(ViewGroup*, ::app::Android::android::view::MotionEvent*);
    bool(*__fp_onRequestFocusInDescendants)(ViewGroup*, int, ::app::Android::android::graphics::Rect*);
    void(*__fp_requestChildFocus)(ViewGroup*, ::app::Android::android::view::View*, ::app::Android::android::view::View*);
    bool(*__fp_requestChildRectangleOnScreen)(ViewGroup*, ::app::Android::android::view::View*, ::app::Android::android::graphics::Rect*, bool);
    void(*__fp_requestDisallowInterceptTouchEvent)(ViewGroup*, bool);
    bool(*__fp_shouldDelayChildPressedState)(ViewGroup*);
};

ViewGroup__uType* ViewGroup__typeof();

void ViewGroup___Init_3(::uStatic* __this);
void ViewGroup___ObjInit_10(ViewGroup* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1, int arg2);
void ViewGroup___ObjInit_11(ViewGroup* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
void ViewGroup___ObjInit_8(ViewGroup* __this, ::app::Android::android::content::Context* arg0);
void ViewGroup___ObjInit_9(ViewGroup* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1);
void ViewGroup__addChildrenForAccessibility(ViewGroup* __this, ::app::Android::java::util::ArrayList* arg0);
void ViewGroup__addChildrenForAccessibility_IMPL_23401(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ViewGroup__addFocusables_1(ViewGroup* __this, ::app::Android::java::util::ArrayList* arg0, int arg1, int arg2);
void ViewGroup__addFocusables_IMPL_23383(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, int arg4_);
bool ViewGroup__addStatesFromChildren(ViewGroup* __this);
bool ViewGroup__addStatesFromChildren_IMPL_23507(::uStatic* __this, bool arg0_, jobject arg1_);
void ViewGroup__addTouchables(ViewGroup* __this, ::app::Android::java::util::ArrayList* arg0);
void ViewGroup__addTouchables_IMPL_23386(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ViewGroup__addView(ViewGroup* __this, ::app::Android::android::view::View* arg0);
void ViewGroup__addView_1(ViewGroup* __this, ::app::Android::android::view::View* arg0, int arg1);
void ViewGroup__addView_2(ViewGroup* __this, ::app::Android::android::view::View* arg0, int arg1, int arg2);
void ViewGroup__addView_3(ViewGroup* __this, ::app::Android::android::view::View* arg0, int arg1, ::app::Android::android::view::ViewGroupDLRLayoutParams* arg2);
void ViewGroup__addView_4(ViewGroup* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::view::ViewGroupDLRLayoutParams* arg1);
void ViewGroup__addView_IMPL_23432(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ViewGroup__addView_IMPL_23433(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);
void ViewGroup__addView_IMPL_23434(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, int arg4_);
void ViewGroup__addView_IMPL_23435(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_);
void ViewGroup__addView_IMPL_23436(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, ::uObject* arg4_);
bool ViewGroup__addViewInLayout(ViewGroup* __this, ::app::Android::android::view::View* arg0, int arg1, ::app::Android::android::view::ViewGroupDLRLayoutParams* arg2);
bool ViewGroup__addViewInLayout_1(ViewGroup* __this, ::app::Android::android::view::View* arg0, int arg1, ::app::Android::android::view::ViewGroupDLRLayoutParams* arg2, bool arg3);
bool ViewGroup__addViewInLayout_IMPL_23442(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, ::uObject* arg4_);
bool ViewGroup__addViewInLayout_IMPL_23443(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, ::uObject* arg4_, bool arg5_);
void ViewGroup__attachLayoutAnimationParameters(ViewGroup* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::view::ViewGroupDLRLayoutParams* arg1, int arg2, int arg3);
void ViewGroup__attachLayoutAnimationParameters_IMPL_23445(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, int arg4_, int arg5_);
void ViewGroup__attachViewToParent(ViewGroup* __this, ::app::Android::android::view::View* arg0, int arg1, ::app::Android::android::view::ViewGroupDLRLayoutParams* arg2);
void ViewGroup__attachViewToParent_IMPL_23456(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, ::uObject* arg4_);
void ViewGroup__bringChildToFront(ViewGroup* __this, ::app::Android::android::view::View* arg0);
void ViewGroup__bringChildToFront_IMPL_23392(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool ViewGroup__canAnimate(ViewGroup* __this);
bool ViewGroup__canAnimate_IMPL_23468(::uStatic* __this, bool arg0_, jobject arg1_);
bool ViewGroup__checkLayoutParams(ViewGroup* __this, ::app::Android::android::view::ViewGroupDLRLayoutParams* arg0);
bool ViewGroup__checkLayoutParams_IMPL_23438(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ViewGroup__childDrawableStateChanged(ViewGroup* __this, ::app::Android::android::view::View* arg0);
void ViewGroup__childDrawableStateChanged_IMPL_23508(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ViewGroup__childHasTransientStateChanged(ViewGroup* __this, ::app::Android::android::view::View* arg0, bool arg1);
void ViewGroup__childHasTransientStateChanged_IMPL_23374(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, bool arg3_);
void ViewGroup__cleanupLayoutState(ViewGroup* __this, ::app::Android::android::view::View* arg0);
void ViewGroup__cleanupLayoutState_IMPL_23444(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ViewGroup__clearChildFocus(ViewGroup* __this, ::app::Android::android::view::View* arg0);
void ViewGroup__clearChildFocus_IMPL_23377(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ViewGroup__clearDisappearingChildren(ViewGroup* __this);
void ViewGroup__clearDisappearingChildren_IMPL_23496(::uStatic* __this, bool arg0_, jobject arg1_);
void ViewGroup__clearFocus(ViewGroup* __this);
void ViewGroup__clearFocus_IMPL_23378(::uStatic* __this, bool arg0_, jobject arg1_);
void ViewGroup__debug(ViewGroup* __this, int arg0);
void ViewGroup__debug_IMPL_23488(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void ViewGroup__detachAllViewsFromParent(ViewGroup* __this);
void ViewGroup__detachAllViewsFromParent_IMPL_23460(::uStatic* __this, bool arg0_, jobject arg1_);
void ViewGroup__detachViewFromParent(ViewGroup* __this, int arg0);
void ViewGroup__detachViewFromParent_1(ViewGroup* __this, ::app::Android::android::view::View* arg0);
void ViewGroup__detachViewFromParent_IMPL_23457(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ViewGroup__detachViewFromParent_IMPL_23458(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void ViewGroup__detachViewsFromParent(ViewGroup* __this, int arg0, int arg1);
void ViewGroup__detachViewsFromParent_IMPL_23459(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_);
void ViewGroup__dispatchConfigurationChanged(ViewGroup* __this, ::app::Android::android::content::res::Configuration* arg0);
void ViewGroup__dispatchConfigurationChanged_IMPL_23390(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ViewGroup__dispatchDisplayHint(ViewGroup* __this, int arg0);
void ViewGroup__dispatchDisplayHint_IMPL_23387(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
bool ViewGroup__dispatchDragEvent(ViewGroup* __this, ::app::Android::android::view::DragEvent* arg0);
bool ViewGroup__dispatchDragEvent_IMPL_23393(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ViewGroup__dispatchDraw(ViewGroup* __this, ::app::Android::android::graphics::Canvas* arg0);
void ViewGroup__dispatchDraw_IMPL_23420(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ViewGroup__dispatchFreezeSelfOnly(ViewGroup* __this, ::app::Android::android::util::SparseArray* arg0);
void ViewGroup__dispatchFreezeSelfOnly_IMPL_23414(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool ViewGroup__dispatchGenericFocusedEvent(ViewGroup* __this, ::app::Android::android::view::MotionEvent* arg0);
bool ViewGroup__dispatchGenericFocusedEvent_IMPL_23404(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool ViewGroup__dispatchGenericPointerEvent(ViewGroup* __this, ::app::Android::android::view::MotionEvent* arg0);
bool ViewGroup__dispatchGenericPointerEvent_IMPL_23403(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool ViewGroup__dispatchHoverEvent(ViewGroup* __this, ::app::Android::android::view::MotionEvent* arg0);
bool ViewGroup__dispatchHoverEvent_IMPL_23400(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool ViewGroup__dispatchKeyEvent(ViewGroup* __this, ::app::Android::android::view::KeyEvent* arg0);
bool ViewGroup__dispatchKeyEvent_IMPL_23397(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool ViewGroup__dispatchKeyEventPreIme(ViewGroup* __this, ::app::Android::android::view::KeyEvent* arg0);
bool ViewGroup__dispatchKeyEventPreIme_IMPL_23396(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool ViewGroup__dispatchKeyShortcutEvent(ViewGroup* __this, ::app::Android::android::view::KeyEvent* arg0);
bool ViewGroup__dispatchKeyShortcutEvent_IMPL_23398(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ViewGroup__dispatchRestoreInstanceState(ViewGroup* __this, ::app::Android::android::util::SparseArray* arg0);
void ViewGroup__dispatchRestoreInstanceState_IMPL_23415(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ViewGroup__dispatchSaveInstanceState(ViewGroup* __this, ::app::Android::android::util::SparseArray* arg0);
void ViewGroup__dispatchSaveInstanceState_IMPL_23413(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ViewGroup__dispatchSetActivated_1(ViewGroup* __this, bool arg0);
void ViewGroup__dispatchSetActivated_IMPL_23428(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void ViewGroup__dispatchSetPressed(ViewGroup* __this, bool arg0);
void ViewGroup__dispatchSetPressed_IMPL_23429(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void ViewGroup__dispatchSetSelected_1(ViewGroup* __this, bool arg0);
void ViewGroup__dispatchSetSelected_IMPL_23427(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void ViewGroup__dispatchSystemUiVisibilityChanged(ViewGroup* __this, int arg0);
void ViewGroup__dispatchSystemUiVisibilityChanged_IMPL_23395(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void ViewGroup__dispatchThawSelfOnly(ViewGroup* __this, ::app::Android::android::util::SparseArray* arg0);
void ViewGroup__dispatchThawSelfOnly_IMPL_23416(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool ViewGroup__dispatchTouchEvent(ViewGroup* __this, ::app::Android::android::view::MotionEvent* arg0);
bool ViewGroup__dispatchTouchEvent_IMPL_23405(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool ViewGroup__dispatchTrackballEvent(ViewGroup* __this, ::app::Android::android::view::MotionEvent* arg0);
bool ViewGroup__dispatchTrackballEvent_IMPL_23399(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool ViewGroup__dispatchUnhandledMove(ViewGroup* __this, ::app::Android::android::view::View* arg0, int arg1);
bool ViewGroup__dispatchUnhandledMove_IMPL_23376(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);
void ViewGroup__dispatchVisibilityChanged(ViewGroup* __this, ::app::Android::android::view::View* arg0, int arg1);
void ViewGroup__dispatchVisibilityChanged_IMPL_23388(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);
void ViewGroup__dispatchWindowFocusChanged(ViewGroup* __this, bool arg0);
void ViewGroup__dispatchWindowFocusChanged_IMPL_23385(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void ViewGroup__dispatchWindowSystemUiVisiblityChanged(ViewGroup* __this, int arg0);
void ViewGroup__dispatchWindowSystemUiVisiblityChanged_IMPL_23394(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void ViewGroup__dispatchWindowVisibilityChanged(ViewGroup* __this, int arg0);
void ViewGroup__dispatchWindowVisibilityChanged_IMPL_23389(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void ViewGroup__drawableStateChanged(ViewGroup* __this);
void ViewGroup__drawableStateChanged_IMPL_23503(::uStatic* __this, bool arg0_, jobject arg1_);
bool ViewGroup__drawChild(ViewGroup* __this, ::app::Android::android::graphics::Canvas* arg0, ::app::Android::android::view::View* arg1, ::uLong arg2);
bool ViewGroup__drawChild_IMPL_23423(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, ::uLong arg4_);
void ViewGroup__endViewTransition(ViewGroup* __this, ::app::Android::android::view::View* arg0);
void ViewGroup__endViewTransition_IMPL_23498(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
::app::Android::android::view::View* ViewGroup__findFocus(ViewGroup* __this);
::uObject* ViewGroup__findFocus_IMPL_23381(::uStatic* __this, bool arg0_, jobject arg1_);
void ViewGroup__findViewsWithText(ViewGroup* __this, ::app::Android::java::util::ArrayList* arg0, ::uObject* arg1, int arg2);
void ViewGroup__findViewsWithText_IMPL_23384(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, int arg4_);
bool ViewGroup__fitSystemWindows(ViewGroup* __this, ::app::Android::android::graphics::Rect* arg0);
bool ViewGroup__fitSystemWindows_IMPL_23501(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ViewGroup__focusableViewAvailable(ViewGroup* __this, ::app::Android::android::view::View* arg0);
void ViewGroup__focusableViewAvailable_IMPL_23367(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
::app::Android::android::view::View* ViewGroup__focusSearch_1(ViewGroup* __this, ::app::Android::android::view::View* arg0, int arg1);
::uObject* ViewGroup__focusSearch_IMPL_23370(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);
bool ViewGroup__gatherTransparentRegion(ViewGroup* __this, ::app::Android::android::graphics::Region* arg0);
bool ViewGroup__gatherTransparentRegion_IMPL_23499(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
::app::Android::android::view::ViewGroupDLRLayoutParams* ViewGroup__generateDefaultLayoutParams(ViewGroup* __this);
::uObject* ViewGroup__generateDefaultLayoutParams_IMPL_23487(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::android::view::ViewGroupDLRLayoutParams* ViewGroup__generateLayoutParams(ViewGroup* __this, ::uObject* arg0);
::app::Android::android::view::ViewGroupDLRLayoutParams* ViewGroup__generateLayoutParams_1(ViewGroup* __this, ::app::Android::android::view::ViewGroupDLRLayoutParams* arg0);
::uObject* ViewGroup__generateLayoutParams_IMPL_23485(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
::uObject* ViewGroup__generateLayoutParams_IMPL_23486(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
int ViewGroup__get_FOCUS_AFTER_DESCENDANTS(::uStatic* __this);
int ViewGroup__get_FOCUS_BEFORE_DESCENDANTS(::uStatic* __this);
int ViewGroup__get_FOCUS_BLOCK_DESCENDANTS(::uStatic* __this);
int ViewGroup__get_LAYOUT_MODE_CLIP_BOUNDS(::uStatic* __this);
int ViewGroup__get_LAYOUT_MODE_OPTICAL_BOUNDS(::uStatic* __this);
int ViewGroup__get_PERSISTENT_ALL_CACHES(::uStatic* __this);
int ViewGroup__get_PERSISTENT_ANIMATION_CACHE(::uStatic* __this);
int ViewGroup__get_PERSISTENT_NO_CACHE(::uStatic* __this);
int ViewGroup__get_PERSISTENT_SCROLLING_CACHE(::uStatic* __this);
::app::Android::android::view::View* ViewGroup__getChildAt(ViewGroup* __this, int arg0);
::uObject* ViewGroup__getChildAt_IMPL_23491(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
int ViewGroup__getChildCount(ViewGroup* __this);
int ViewGroup__getChildCount_IMPL_23490(::uStatic* __this, bool arg0_, jobject arg1_);
int ViewGroup__getChildDrawingOrder(ViewGroup* __this, int arg0, int arg1);
int ViewGroup__getChildDrawingOrder_IMPL_23422(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_);
int ViewGroup__getChildMeasureSpec(::uStatic* __this, int arg0, int arg1, int arg2);
int ViewGroup__getChildMeasureSpec_IMPL_23495(::uStatic* __this, int arg0_, int arg1_, int arg2_);
bool ViewGroup__getChildStaticTransformation(ViewGroup* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::view::animation::Transformation* arg1);
bool ViewGroup__getChildStaticTransformation_IMPL_23431(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_);
bool ViewGroup__getChildVisibleRect(ViewGroup* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::graphics::Rect* arg1, ::app::Android::android::graphics::Point* arg2);
bool ViewGroup__getChildVisibleRect_IMPL_23465(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, ::uObject* arg4_);
bool ViewGroup__getClipChildren(ViewGroup* __this);
bool ViewGroup__getClipChildren_IMPL_23424(::uStatic* __this, bool arg0_, jobject arg1_);
int ViewGroup__getDescendantFocusability(ViewGroup* __this);
int ViewGroup__getDescendantFocusability_IMPL_23364(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::android::view::View* ViewGroup__getFocusedChild(ViewGroup* __this);
::uObject* ViewGroup__getFocusedChild_IMPL_23379(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::android::view::animation::LayoutAnimationController* ViewGroup__getLayoutAnimation(ViewGroup* __this);
::uObject* ViewGroup__getLayoutAnimation_IMPL_23472(::uStatic* __this, bool arg0_, jobject arg1_);
::uObject* ViewGroup__getLayoutAnimationListener(ViewGroup* __this);
::uObject* ViewGroup__getLayoutAnimationListener_IMPL_23502(::uStatic* __this, bool arg0_, jobject arg1_);
int ViewGroup__getLayoutMode(ViewGroup* __this);
int ViewGroup__getLayoutMode_IMPL_23483(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::android::animation::LayoutTransition* ViewGroup__getLayoutTransition(ViewGroup* __this);
::uObject* ViewGroup__getLayoutTransition_IMPL_23452(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::android::view::ViewGroupOverlay* ViewGroup__getOverlay_1(ViewGroup* __this);
::uObject* ViewGroup__getOverlay_IMPL_23421(::uStatic* __this, bool arg0_, jobject arg1_);
int ViewGroup__getPersistentDrawingCache(ViewGroup* __this);
int ViewGroup__getPersistentDrawingCache_IMPL_23481(::uStatic* __this, bool arg0_, jobject arg1_);
bool ViewGroup__hasFocus(ViewGroup* __this);
bool ViewGroup__hasFocus_IMPL_23380(::uStatic* __this, bool arg0_, jobject arg1_);
bool ViewGroup__hasFocusable(ViewGroup* __this);
bool ViewGroup__hasFocusable_IMPL_23382(::uStatic* __this, bool arg0_, jobject arg1_);
bool ViewGroup__hasTransientState(ViewGroup* __this);
bool ViewGroup__hasTransientState_IMPL_23375(::uStatic* __this, bool arg0_, jobject arg1_);
int ViewGroup__indexOfChild(ViewGroup* __this, ::app::Android::android::view::View* arg0);
int ViewGroup__indexOfChild_IMPL_23489(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ViewGroup__invalidateChild(ViewGroup* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::graphics::Rect* arg1);
void ViewGroup__invalidateChild_IMPL_23461(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_);
::uObject* ViewGroup__invalidateChildInParent(ViewGroup* __this, ::app::Android::Runtime::IntArray* arg0, ::app::Android::android::graphics::Rect* arg1);
::uObject* ViewGroup__invalidateChildInParent_IMPL_23462(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_);
bool ViewGroup__isAlwaysDrawnWithCacheEnabled(ViewGroup* __this);
bool ViewGroup__isAlwaysDrawnWithCacheEnabled_IMPL_23475(::uStatic* __this, bool arg0_, jobject arg1_);
bool ViewGroup__isAnimationCacheEnabled(ViewGroup* __this);
bool ViewGroup__isAnimationCacheEnabled_IMPL_23473(::uStatic* __this, bool arg0_, jobject arg1_);
bool ViewGroup__isChildrenDrawingOrderEnabled(ViewGroup* __this);
bool ViewGroup__isChildrenDrawingOrderEnabled_IMPL_23479(::uStatic* __this, bool arg0_, jobject arg1_);
bool ViewGroup__isChildrenDrawnWithCacheEnabled(ViewGroup* __this);
bool ViewGroup__isChildrenDrawnWithCacheEnabled_IMPL_23477(::uStatic* __this, bool arg0_, jobject arg1_);
bool ViewGroup__isMotionEventSplittingEnabled(ViewGroup* __this);
bool ViewGroup__isMotionEventSplittingEnabled_IMPL_23407(::uStatic* __this, bool arg0_, jobject arg1_);
void ViewGroup__jumpDrawablesToCurrentState(ViewGroup* __this);
void ViewGroup__jumpDrawablesToCurrentState_IMPL_23504(::uStatic* __this, bool arg0_, jobject arg1_);
void ViewGroup__layout(ViewGroup* __this, int arg0, int arg1, int arg2, int arg3);
void ViewGroup__layout_IMPL_23466(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
void ViewGroup__measureChild(ViewGroup* __this, ::app::Android::android::view::View* arg0, int arg1, int arg2);
void ViewGroup__measureChild_IMPL_23493(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, int arg4_);
void ViewGroup__measureChildren(ViewGroup* __this, int arg0, int arg1);
void ViewGroup__measureChildren_IMPL_23492(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_);
void ViewGroup__measureChildWithMargins(ViewGroup* __this, ::app::Android::android::view::View* arg0, int arg1, int arg2, int arg3, int arg4);
void ViewGroup__measureChildWithMargins_IMPL_23494(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, int arg4_, int arg5_, int arg6_);
void ViewGroup__notifySubtreeAccessibilityStateChanged(ViewGroup* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::view::View* arg1, int arg2);
void ViewGroup__notifySubtreeAccessibilityStateChanged_IMPL_23412(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, int arg4_);
void ViewGroup__offsetDescendantRectToMyCoords(ViewGroup* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::graphics::Rect* arg1);
void ViewGroup__offsetDescendantRectToMyCoords_IMPL_23463(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_);
void ViewGroup__offsetRectIntoDescendantCoords(ViewGroup* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::graphics::Rect* arg1);
void ViewGroup__offsetRectIntoDescendantCoords_IMPL_23464(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_);
void ViewGroup__onAnimationEnd(ViewGroup* __this);
void ViewGroup__onAnimationEnd_IMPL_23419(::uStatic* __this, bool arg0_, jobject arg1_);
void ViewGroup__onAnimationStart(ViewGroup* __this);
void ViewGroup__onAnimationStart_IMPL_23418(::uStatic* __this, bool arg0_, jobject arg1_);
void ViewGroup__onAttachedToWindow(ViewGroup* __this);
void ViewGroup__onAttachedToWindow_IMPL_23440(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::Runtime::IntArray* ViewGroup__onCreateDrawableState(ViewGroup* __this, int arg0);
::uObject* ViewGroup__onCreateDrawableState_IMPL_23505(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void ViewGroup__onDetachedFromWindow(ViewGroup* __this);
void ViewGroup__onDetachedFromWindow_IMPL_23441(::uStatic* __this, bool arg0_, jobject arg1_);
bool ViewGroup__onInterceptHoverEvent(ViewGroup* __this, ::app::Android::android::view::MotionEvent* arg0);
bool ViewGroup__onInterceptHoverEvent_IMPL_23402(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool ViewGroup__onInterceptTouchEvent(ViewGroup* __this, ::app::Android::android::view::MotionEvent* arg0);
bool ViewGroup__onInterceptTouchEvent_IMPL_23409(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool ViewGroup__onRequestFocusInDescendants(ViewGroup* __this, int arg0, ::app::Android::android::graphics::Rect* arg1);
bool ViewGroup__onRequestFocusInDescendants_IMPL_23411(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_);
bool ViewGroup__onRequestSendAccessibilityEvent(ViewGroup* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::view::accessibility::AccessibilityEvent* arg1);
bool ViewGroup__onRequestSendAccessibilityEvent_IMPL_23373(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_);
void ViewGroup__recomputeViewAttributes(ViewGroup* __this, ::app::Android::android::view::View* arg0);
void ViewGroup__recomputeViewAttributes_IMPL_23391(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ViewGroup__removeAllViews(ViewGroup* __this);
void ViewGroup__removeAllViews_IMPL_23453(::uStatic* __this, bool arg0_, jobject arg1_);
void ViewGroup__removeAllViewsInLayout(ViewGroup* __this);
void ViewGroup__removeAllViewsInLayout_IMPL_23454(::uStatic* __this, bool arg0_, jobject arg1_);
void ViewGroup__removeDetachedView(ViewGroup* __this, ::app::Android::android::view::View* arg0, bool arg1);
void ViewGroup__removeDetachedView_IMPL_23455(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, bool arg3_);
void ViewGroup__removeView(ViewGroup* __this, ::app::Android::android::view::View* arg0);
void ViewGroup__removeView_IMPL_23446(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ViewGroup__removeViewAt(ViewGroup* __this, int arg0);
void ViewGroup__removeViewAt_IMPL_23449(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void ViewGroup__removeViewInLayout(ViewGroup* __this, ::app::Android::android::view::View* arg0);
void ViewGroup__removeViewInLayout_IMPL_23447(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ViewGroup__removeViews(ViewGroup* __this, int arg0, int arg1);
void ViewGroup__removeViews_IMPL_23450(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_);
void ViewGroup__removeViewsInLayout(ViewGroup* __this, int arg0, int arg1);
void ViewGroup__removeViewsInLayout_IMPL_23448(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_);
void ViewGroup__requestChildFocus(ViewGroup* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::view::View* arg1);
void ViewGroup__requestChildFocus_IMPL_23366(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_);
bool ViewGroup__requestChildRectangleOnScreen(ViewGroup* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::graphics::Rect* arg1, bool arg2);
bool ViewGroup__requestChildRectangleOnScreen_IMPL_23371(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, bool arg4_);
void ViewGroup__requestDisallowInterceptTouchEvent(ViewGroup* __this, bool arg0);
void ViewGroup__requestDisallowInterceptTouchEvent_IMPL_23408(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
bool ViewGroup__requestFocus_2(ViewGroup* __this, int arg0, ::app::Android::android::graphics::Rect* arg1);
bool ViewGroup__requestFocus_IMPL_23410(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_);
bool ViewGroup__requestSendAccessibilityEvent(ViewGroup* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::view::accessibility::AccessibilityEvent* arg1);
bool ViewGroup__requestSendAccessibilityEvent_IMPL_23372(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_);
void ViewGroup__requestTransparentRegion(ViewGroup* __this, ::app::Android::android::view::View* arg0);
void ViewGroup__requestTransparentRegion_IMPL_23500(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ViewGroup__scheduleLayoutAnimation(ViewGroup* __this);
void ViewGroup__scheduleLayoutAnimation_IMPL_23470(::uStatic* __this, bool arg0_, jobject arg1_);
void ViewGroup__setAddStatesFromChildren(ViewGroup* __this, bool arg0);
void ViewGroup__setAddStatesFromChildren_IMPL_23506(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void ViewGroup__setAlwaysDrawnWithCacheEnabled(ViewGroup* __this, bool arg0);
void ViewGroup__setAlwaysDrawnWithCacheEnabled_IMPL_23476(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void ViewGroup__setAnimationCacheEnabled(ViewGroup* __this, bool arg0);
void ViewGroup__setAnimationCacheEnabled_IMPL_23474(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void ViewGroup__setChildrenDrawingCacheEnabled(ViewGroup* __this, bool arg0);
void ViewGroup__setChildrenDrawingCacheEnabled_IMPL_23417(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void ViewGroup__setChildrenDrawingOrderEnabled(ViewGroup* __this, bool arg0);
void ViewGroup__setChildrenDrawingOrderEnabled_IMPL_23480(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void ViewGroup__setChildrenDrawnWithCacheEnabled(ViewGroup* __this, bool arg0);
void ViewGroup__setChildrenDrawnWithCacheEnabled_IMPL_23478(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void ViewGroup__setClipChildren(ViewGroup* __this, bool arg0);
void ViewGroup__setClipChildren_IMPL_23425(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void ViewGroup__setClipToPadding(ViewGroup* __this, bool arg0);
void ViewGroup__setClipToPadding_IMPL_23426(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void ViewGroup__setDescendantFocusability(ViewGroup* __this, int arg0);
void ViewGroup__setDescendantFocusability_IMPL_23365(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void ViewGroup__setLayoutAnimation(ViewGroup* __this, ::app::Android::android::view::animation::LayoutAnimationController* arg0);
void ViewGroup__setLayoutAnimation_IMPL_23471(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ViewGroup__setLayoutAnimationListener(ViewGroup* __this, ::uObject* arg0);
void ViewGroup__setLayoutAnimationListener_IMPL_23509(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ViewGroup__setLayoutMode(ViewGroup* __this, int arg0);
void ViewGroup__setLayoutMode_IMPL_23484(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void ViewGroup__setLayoutTransition(ViewGroup* __this, ::app::Android::android::animation::LayoutTransition* arg0);
void ViewGroup__setLayoutTransition_IMPL_23451(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ViewGroup__setMotionEventSplittingEnabled(ViewGroup* __this, bool arg0);
void ViewGroup__setMotionEventSplittingEnabled_IMPL_23406(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void ViewGroup__setOnHierarchyChangeListener(ViewGroup* __this, ::uObject* arg0);
void ViewGroup__setOnHierarchyChangeListener_IMPL_23439(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ViewGroup__setPersistentDrawingCache(ViewGroup* __this, int arg0);
void ViewGroup__setPersistentDrawingCache_IMPL_23482(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void ViewGroup__setStaticTransformationsEnabled(ViewGroup* __this, bool arg0);
void ViewGroup__setStaticTransformationsEnabled_IMPL_23430(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
bool ViewGroup__shouldDelayChildPressedState(ViewGroup* __this);
bool ViewGroup__shouldDelayChildPressedState_IMPL_23510(::uStatic* __this, bool arg0_, jobject arg1_);
bool ViewGroup__showContextMenuForChild(ViewGroup* __this, ::app::Android::android::view::View* arg0);
bool ViewGroup__showContextMenuForChild_IMPL_23368(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
::app::Android::android::view::ActionMode* ViewGroup__startActionModeForChild(ViewGroup* __this, ::app::Android::android::view::View* arg0, ::uObject* arg1);
::uObject* ViewGroup__startActionModeForChild_IMPL_23369(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_);
void ViewGroup__startLayoutAnimation(ViewGroup* __this);
void ViewGroup__startLayoutAnimation_IMPL_23469(::uStatic* __this, bool arg0_, jobject arg1_);
void ViewGroup__startViewTransition(ViewGroup* __this, ::app::Android::android::view::View* arg0);
void ViewGroup__startViewTransition_IMPL_23497(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ViewGroup__updateViewLayout(ViewGroup* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::view::ViewGroupDLRLayoutParams* arg1);
void ViewGroup__updateViewLayout_IMPL_23437(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_);

struct ViewGroup : ::app::Android::android::view::View
{
    void _ObjInit_10(::app::Android::android::content::Context* arg0, ::uObject* arg1, int arg2) { ViewGroup___ObjInit_10(this, arg0, arg1, arg2); }
    void _ObjInit_11(jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType) { ViewGroup___ObjInit_11(this, obj, utype, hasFallbackClass, resolveType); }
    void _ObjInit_8(::app::Android::android::content::Context* arg0) { ViewGroup___ObjInit_8(this, arg0); }
    void _ObjInit_9(::app::Android::android::content::Context* arg0, ::uObject* arg1) { ViewGroup___ObjInit_9(this, arg0, arg1); }
    bool addStatesFromChildren() { return ViewGroup__addStatesFromChildren(this); }
    void addView(::app::Android::android::view::View* arg0) { (((ViewGroup__uType*)this->__obj_type)->__fp_addView)(this, arg0); }
    void addView_1(::app::Android::android::view::View* arg0, int arg1) { (((ViewGroup__uType*)this->__obj_type)->__fp_addView_1)(this, arg0, arg1); }
    void addView_2(::app::Android::android::view::View* arg0, int arg1, int arg2) { ViewGroup__addView_2(this, arg0, arg1, arg2); }
    void addView_3(::app::Android::android::view::View* arg0, int arg1, ::app::Android::android::view::ViewGroupDLRLayoutParams* arg2) { (((ViewGroup__uType*)this->__obj_type)->__fp_addView_3)(this, arg0, arg1, arg2); }
    void addView_4(::app::Android::android::view::View* arg0, ::app::Android::android::view::ViewGroupDLRLayoutParams* arg1) { (((ViewGroup__uType*)this->__obj_type)->__fp_addView_4)(this, arg0, arg1); }
    bool addViewInLayout(::app::Android::android::view::View* arg0, int arg1, ::app::Android::android::view::ViewGroupDLRLayoutParams* arg2) { return ViewGroup__addViewInLayout(this, arg0, arg1, arg2); }
    bool addViewInLayout_1(::app::Android::android::view::View* arg0, int arg1, ::app::Android::android::view::ViewGroupDLRLayoutParams* arg2, bool arg3) { return ViewGroup__addViewInLayout_1(this, arg0, arg1, arg2, arg3); }
    void attachLayoutAnimationParameters(::app::Android::android::view::View* arg0, ::app::Android::android::view::ViewGroupDLRLayoutParams* arg1, int arg2, int arg3) { ViewGroup__attachLayoutAnimationParameters(this, arg0, arg1, arg2, arg3); }
    void attachViewToParent(::app::Android::android::view::View* arg0, int arg1, ::app::Android::android::view::ViewGroupDLRLayoutParams* arg2) { ViewGroup__attachViewToParent(this, arg0, arg1, arg2); }
    void bringChildToFront(::app::Android::android::view::View* arg0) { ViewGroup__bringChildToFront(this, arg0); }
    bool canAnimate() { return ViewGroup__canAnimate(this); }
    bool checkLayoutParams(::app::Android::android::view::ViewGroupDLRLayoutParams* arg0) { return (((ViewGroup__uType*)this->__obj_type)->__fp_checkLayoutParams)(this, arg0); }
    void childDrawableStateChanged(::app::Android::android::view::View* arg0) { ViewGroup__childDrawableStateChanged(this, arg0); }
    void childHasTransientStateChanged(::app::Android::android::view::View* arg0, bool arg1) { ViewGroup__childHasTransientStateChanged(this, arg0, arg1); }
    void cleanupLayoutState(::app::Android::android::view::View* arg0) { ViewGroup__cleanupLayoutState(this, arg0); }
    void clearChildFocus(::app::Android::android::view::View* arg0) { ViewGroup__clearChildFocus(this, arg0); }
    void clearDisappearingChildren() { ViewGroup__clearDisappearingChildren(this); }
    void debug(int arg0) { ViewGroup__debug(this, arg0); }
    void detachAllViewsFromParent() { ViewGroup__detachAllViewsFromParent(this); }
    void detachViewFromParent(int arg0) { ViewGroup__detachViewFromParent(this, arg0); }
    void detachViewFromParent_1(::app::Android::android::view::View* arg0) { ViewGroup__detachViewFromParent_1(this, arg0); }
    void detachViewsFromParent(int arg0, int arg1) { ViewGroup__detachViewsFromParent(this, arg0, arg1); }
    void dispatchFreezeSelfOnly(::app::Android::android::util::SparseArray* arg0) { ViewGroup__dispatchFreezeSelfOnly(this, arg0); }
    void dispatchSetActivated_1(bool arg0) { ViewGroup__dispatchSetActivated_1(this, arg0); }
    void dispatchSetSelected_1(bool arg0) { ViewGroup__dispatchSetSelected_1(this, arg0); }
    void dispatchThawSelfOnly(::app::Android::android::util::SparseArray* arg0) { ViewGroup__dispatchThawSelfOnly(this, arg0); }
    bool drawChild(::app::Android::android::graphics::Canvas* arg0, ::app::Android::android::view::View* arg1, ::uLong arg2) { return ViewGroup__drawChild(this, arg0, arg1, arg2); }
    void endViewTransition(::app::Android::android::view::View* arg0) { ViewGroup__endViewTransition(this, arg0); }
    void focusableViewAvailable(::app::Android::android::view::View* arg0) { ViewGroup__focusableViewAvailable(this, arg0); }
    ::app::Android::android::view::View* focusSearch_1(::app::Android::android::view::View* arg0, int arg1) { return ViewGroup__focusSearch_1(this, arg0, arg1); }
    bool gatherTransparentRegion(::app::Android::android::graphics::Region* arg0) { return (((ViewGroup__uType*)this->__obj_type)->__fp_gatherTransparentRegion)(this, arg0); }
    ::app::Android::android::view::ViewGroupDLRLayoutParams* generateDefaultLayoutParams() { return (((ViewGroup__uType*)this->__obj_type)->__fp_generateDefaultLayoutParams)(this); }
    ::app::Android::android::view::ViewGroupDLRLayoutParams* generateLayoutParams(::uObject* arg0) { return (((ViewGroup__uType*)this->__obj_type)->__fp_generateLayoutParams)(this, arg0); }
    ::app::Android::android::view::ViewGroupDLRLayoutParams* generateLayoutParams_1(::app::Android::android::view::ViewGroupDLRLayoutParams* arg0) { return (((ViewGroup__uType*)this->__obj_type)->__fp_generateLayoutParams_1)(this, arg0); }
    ::app::Android::android::view::View* getChildAt(int arg0) { return ViewGroup__getChildAt(this, arg0); }
    int getChildCount() { return ViewGroup__getChildCount(this); }
    int getChildDrawingOrder(int arg0, int arg1) { return ViewGroup__getChildDrawingOrder(this, arg0, arg1); }
    bool getChildStaticTransformation(::app::Android::android::view::View* arg0, ::app::Android::android::view::animation::Transformation* arg1) { return ViewGroup__getChildStaticTransformation(this, arg0, arg1); }
    bool getChildVisibleRect(::app::Android::android::view::View* arg0, ::app::Android::android::graphics::Rect* arg1, ::app::Android::android::graphics::Point* arg2) { return ViewGroup__getChildVisibleRect(this, arg0, arg1, arg2); }
    bool getClipChildren() { return ViewGroup__getClipChildren(this); }
    int getDescendantFocusability() { return ViewGroup__getDescendantFocusability(this); }
    ::app::Android::android::view::View* getFocusedChild() { return ViewGroup__getFocusedChild(this); }
    ::app::Android::android::view::animation::LayoutAnimationController* getLayoutAnimation() { return ViewGroup__getLayoutAnimation(this); }
    ::uObject* getLayoutAnimationListener() { return ViewGroup__getLayoutAnimationListener(this); }
    int getLayoutMode() { return ViewGroup__getLayoutMode(this); }
    ::app::Android::android::animation::LayoutTransition* getLayoutTransition() { return ViewGroup__getLayoutTransition(this); }
    ::app::Android::android::view::ViewGroupOverlay* getOverlay_1() { return ViewGroup__getOverlay_1(this); }
    int getPersistentDrawingCache() { return ViewGroup__getPersistentDrawingCache(this); }
    int indexOfChild(::app::Android::android::view::View* arg0) { return ViewGroup__indexOfChild(this, arg0); }
    void invalidateChild(::app::Android::android::view::View* arg0, ::app::Android::android::graphics::Rect* arg1) { ViewGroup__invalidateChild(this, arg0, arg1); }
    ::uObject* invalidateChildInParent(::app::Android::Runtime::IntArray* arg0, ::app::Android::android::graphics::Rect* arg1) { return ViewGroup__invalidateChildInParent(this, arg0, arg1); }
    bool isAlwaysDrawnWithCacheEnabled() { return ViewGroup__isAlwaysDrawnWithCacheEnabled(this); }
    bool isAnimationCacheEnabled() { return ViewGroup__isAnimationCacheEnabled(this); }
    bool isChildrenDrawingOrderEnabled() { return ViewGroup__isChildrenDrawingOrderEnabled(this); }
    bool isChildrenDrawnWithCacheEnabled() { return ViewGroup__isChildrenDrawnWithCacheEnabled(this); }
    bool isMotionEventSplittingEnabled() { return ViewGroup__isMotionEventSplittingEnabled(this); }
    void measureChild(::app::Android::android::view::View* arg0, int arg1, int arg2) { (((ViewGroup__uType*)this->__obj_type)->__fp_measureChild)(this, arg0, arg1, arg2); }
    void measureChildren(int arg0, int arg1) { ViewGroup__measureChildren(this, arg0, arg1); }
    void measureChildWithMargins(::app::Android::android::view::View* arg0, int arg1, int arg2, int arg3, int arg4) { (((ViewGroup__uType*)this->__obj_type)->__fp_measureChildWithMargins)(this, arg0, arg1, arg2, arg3, arg4); }
    void notifySubtreeAccessibilityStateChanged(::app::Android::android::view::View* arg0, ::app::Android::android::view::View* arg1, int arg2) { ViewGroup__notifySubtreeAccessibilityStateChanged(this, arg0, arg1, arg2); }
    void offsetDescendantRectToMyCoords(::app::Android::android::view::View* arg0, ::app::Android::android::graphics::Rect* arg1) { ViewGroup__offsetDescendantRectToMyCoords(this, arg0, arg1); }
    void offsetRectIntoDescendantCoords(::app::Android::android::view::View* arg0, ::app::Android::android::graphics::Rect* arg1) { ViewGroup__offsetRectIntoDescendantCoords(this, arg0, arg1); }
    bool onInterceptHoverEvent(::app::Android::android::view::MotionEvent* arg0) { return ViewGroup__onInterceptHoverEvent(this, arg0); }
    bool onInterceptTouchEvent(::app::Android::android::view::MotionEvent* arg0) { return (((ViewGroup__uType*)this->__obj_type)->__fp_onInterceptTouchEvent)(this, arg0); }
    bool onRequestFocusInDescendants(int arg0, ::app::Android::android::graphics::Rect* arg1) { return (((ViewGroup__uType*)this->__obj_type)->__fp_onRequestFocusInDescendants)(this, arg0, arg1); }
    bool onRequestSendAccessibilityEvent(::app::Android::android::view::View* arg0, ::app::Android::android::view::accessibility::AccessibilityEvent* arg1) { return ViewGroup__onRequestSendAccessibilityEvent(this, arg0, arg1); }
    void recomputeViewAttributes(::app::Android::android::view::View* arg0) { ViewGroup__recomputeViewAttributes(this, arg0); }
    void removeAllViews() { ViewGroup__removeAllViews(this); }
    void removeAllViewsInLayout() { ViewGroup__removeAllViewsInLayout(this); }
    void removeDetachedView(::app::Android::android::view::View* arg0, bool arg1) { ViewGroup__removeDetachedView(this, arg0, arg1); }
    void removeView(::app::Android::android::view::View* arg0) { ViewGroup__removeView(this, arg0); }
    void removeViewAt(int arg0) { ViewGroup__removeViewAt(this, arg0); }
    void removeViewInLayout(::app::Android::android::view::View* arg0) { ViewGroup__removeViewInLayout(this, arg0); }
    void removeViews(int arg0, int arg1) { ViewGroup__removeViews(this, arg0, arg1); }
    void removeViewsInLayout(int arg0, int arg1) { ViewGroup__removeViewsInLayout(this, arg0, arg1); }
    void requestChildFocus(::app::Android::android::view::View* arg0, ::app::Android::android::view::View* arg1) { (((ViewGroup__uType*)this->__obj_type)->__fp_requestChildFocus)(this, arg0, arg1); }
    bool requestChildRectangleOnScreen(::app::Android::android::view::View* arg0, ::app::Android::android::graphics::Rect* arg1, bool arg2) { return (((ViewGroup__uType*)this->__obj_type)->__fp_requestChildRectangleOnScreen)(this, arg0, arg1, arg2); }
    void requestDisallowInterceptTouchEvent(bool arg0) { (((ViewGroup__uType*)this->__obj_type)->__fp_requestDisallowInterceptTouchEvent)(this, arg0); }
    bool requestSendAccessibilityEvent(::app::Android::android::view::View* arg0, ::app::Android::android::view::accessibility::AccessibilityEvent* arg1) { return ViewGroup__requestSendAccessibilityEvent(this, arg0, arg1); }
    void requestTransparentRegion(::app::Android::android::view::View* arg0) { ViewGroup__requestTransparentRegion(this, arg0); }
    void scheduleLayoutAnimation() { ViewGroup__scheduleLayoutAnimation(this); }
    void setAddStatesFromChildren(bool arg0) { ViewGroup__setAddStatesFromChildren(this, arg0); }
    void setAlwaysDrawnWithCacheEnabled(bool arg0) { ViewGroup__setAlwaysDrawnWithCacheEnabled(this, arg0); }
    void setAnimationCacheEnabled(bool arg0) { ViewGroup__setAnimationCacheEnabled(this, arg0); }
    void setChildrenDrawingCacheEnabled(bool arg0) { ViewGroup__setChildrenDrawingCacheEnabled(this, arg0); }
    void setChildrenDrawingOrderEnabled(bool arg0) { ViewGroup__setChildrenDrawingOrderEnabled(this, arg0); }
    void setChildrenDrawnWithCacheEnabled(bool arg0) { ViewGroup__setChildrenDrawnWithCacheEnabled(this, arg0); }
    void setClipChildren(bool arg0) { ViewGroup__setClipChildren(this, arg0); }
    void setClipToPadding(bool arg0) { ViewGroup__setClipToPadding(this, arg0); }
    void setDescendantFocusability(int arg0) { ViewGroup__setDescendantFocusability(this, arg0); }
    void setLayoutAnimation(::app::Android::android::view::animation::LayoutAnimationController* arg0) { ViewGroup__setLayoutAnimation(this, arg0); }
    void setLayoutAnimationListener(::uObject* arg0) { ViewGroup__setLayoutAnimationListener(this, arg0); }
    void setLayoutMode(int arg0) { ViewGroup__setLayoutMode(this, arg0); }
    void setLayoutTransition(::app::Android::android::animation::LayoutTransition* arg0) { ViewGroup__setLayoutTransition(this, arg0); }
    void setMotionEventSplittingEnabled(bool arg0) { ViewGroup__setMotionEventSplittingEnabled(this, arg0); }
    void setOnHierarchyChangeListener(::uObject* arg0) { ViewGroup__setOnHierarchyChangeListener(this, arg0); }
    void setPersistentDrawingCache(int arg0) { ViewGroup__setPersistentDrawingCache(this, arg0); }
    void setStaticTransformationsEnabled(bool arg0) { ViewGroup__setStaticTransformationsEnabled(this, arg0); }
    bool shouldDelayChildPressedState() { return (((ViewGroup__uType*)this->__obj_type)->__fp_shouldDelayChildPressedState)(this); }
    bool showContextMenuForChild(::app::Android::android::view::View* arg0) { return ViewGroup__showContextMenuForChild(this, arg0); }
    ::app::Android::android::view::ActionMode* startActionModeForChild(::app::Android::android::view::View* arg0, ::uObject* arg1) { return ViewGroup__startActionModeForChild(this, arg0, arg1); }
    void startLayoutAnimation() { ViewGroup__startLayoutAnimation(this); }
    void startViewTransition(::app::Android::android::view::View* arg0) { ViewGroup__startViewTransition(this, arg0); }
    void updateViewLayout(::app::Android::android::view::View* arg0, ::app::Android::android::view::ViewGroupDLRLayoutParams* arg1) { ViewGroup__updateViewLayout(this, arg0, arg1); }
};

}}}}


#endif
