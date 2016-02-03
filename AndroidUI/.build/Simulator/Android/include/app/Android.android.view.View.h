// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_VIEW_H__
#define __APP_ANDROID_ANDROID_VIEW_VIEW_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace content { namespace res { struct Configuration; } } } } }
namespace app { namespace Android { namespace android { namespace content { namespace res { struct Resources; } } } } }
namespace app { namespace Android { namespace android { namespace content { namespace res { struct TypedArray; } } } } }
namespace app { namespace Android { namespace android { namespace content { struct ClipData; } } } }
namespace app { namespace Android { namespace android { namespace content { struct Context; } } } }
namespace app { namespace Android { namespace android { namespace graphics { namespace drawable { struct Drawable; } } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct Bitmap; } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct Canvas; } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct Matrix; } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct Paint; } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct Point; } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct Rect; } } } }
namespace app { namespace Android { namespace android { namespace os { struct Bundle; } } } }
namespace app { namespace Android { namespace android { namespace os { struct Handler; } } } }
namespace app { namespace Android { namespace android { namespace util { struct Property; } } } }
namespace app { namespace Android { namespace android { namespace util { struct SparseArray; } } } }
namespace app { namespace Android { namespace android { namespace view { namespace accessibility { struct AccessibilityEvent; } } } } }
namespace app { namespace Android { namespace android { namespace view { namespace accessibility { struct AccessibilityNodeInfo; } } } } }
namespace app { namespace Android { namespace android { namespace view { namespace accessibility { struct AccessibilityNodeProvider; } } } } }
namespace app { namespace Android { namespace android { namespace view { namespace animation { struct Animation; } } } } }
namespace app { namespace Android { namespace android { namespace view { namespace inputmethod { struct EditorInfo; } } } } }
namespace app { namespace Android { namespace android { namespace view { struct ActionMode; } } } }
namespace app { namespace Android { namespace android { namespace view { struct Display; } } } }
namespace app { namespace Android { namespace android { namespace view { struct DragEvent; } } } }
namespace app { namespace Android { namespace android { namespace view { struct KeyEvent; } } } }
namespace app { namespace Android { namespace android { namespace view { struct KeyEventDLRDispatcherState; } } } }
namespace app { namespace Android { namespace android { namespace view { struct MotionEvent; } } } }
namespace app { namespace Android { namespace android { namespace view { struct TouchDelegate; } } } }
namespace app { namespace Android { namespace android { namespace view { struct ViewDLRAccessibilityDelegate; } } } }
namespace app { namespace Android { namespace android { namespace view { struct ViewDLRDragShadowBuilder; } } } }
namespace app { namespace Android { namespace android { namespace view { struct ViewGroup; } } } }
namespace app { namespace Android { namespace android { namespace view { struct ViewGroupDLRLayoutParams; } } } }
namespace app { namespace Android { namespace android { namespace view { struct ViewOverlay; } } } }
namespace app { namespace Android { namespace android { namespace view { struct ViewPropertyAnimator; } } } }
namespace app { namespace Android { namespace android { namespace view { struct ViewTreeObserver; } } } }
namespace app { namespace Android { namespace android { namespace view { struct WindowId; } } } }
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }
namespace app { namespace Android { namespace java { namespace util { struct ArrayList; } } } }
namespace app { namespace Android { namespace Runtime { struct IntArray; } } }

namespace app {
namespace Android {
namespace android {
namespace view {

struct View;

extern jclass View___javaClass_2;
extern jfieldID View__ACCESSIBILITY_LIVE_REGION_ASSERTIVE_22779_ID;
extern jfieldID View__ACCESSIBILITY_LIVE_REGION_NONE_22777_ID;
extern jfieldID View__ACCESSIBILITY_LIVE_REGION_POLITE_22778_ID;
extern jmethodID View__addChildrenForAccessibility_22943_ID;
extern jmethodID View__addFocusables_22929_ID;
extern jmethodID View__addFocusables_22930_ID;
extern jmethodID View__addOnAttachStateChangeListener_22831_ID;
extern jmethodID View__addOnLayoutChangeListener_22829_ID;
extern jmethodID View__addTouchables_22933_ID;
extern jfieldID View__ALPHA_22805_ID;
extern jmethodID View__animate_23258_ID;
extern jmethodID View__announceForAccessibility_22855_ID;
extern jmethodID View__awakenScrollBars_23060_ID;
extern jmethodID View__awakenScrollBars_23061_ID;
extern jmethodID View__awakenScrollBars_23062_ID;
extern jmethodID View__bringToFront_22995_ID;
extern jmethodID View__buildDrawingCache_23145_ID;
extern jmethodID View__buildDrawingCache_23146_ID;
extern jmethodID View__buildLayer_23137_ID;
extern jmethodID View__callOnClick_22839_ID;
extern jmethodID View__cancelLongPress_22992_ID;
extern jmethodID View__cancelPendingInputEvents_23123_ID;
extern jmethodID View__canResolveLayoutDirection_23115_ID;
extern jmethodID View__canResolveTextAlignment_23255_ID;
extern jmethodID View__canResolveTextDirection_23251_ID;
extern jmethodID View__canScrollHorizontally_23108_ID;
extern jmethodID View__canScrollVertically_23109_ID;
extern jmethodID View__checkInputConnectionProxy_22981_ID;
extern jmethodID View__clearAnimation_23226_ID;
extern jmethodID View__clearFocus_22850_ID;
extern jmethodID View__combineMeasuredStates_23214_ID;
extern jmethodID View__computeHorizontalScrollExtent_23104_ID;
extern jmethodID View__computeHorizontalScrollOffset_23103_ID;
extern jmethodID View__computeHorizontalScrollRange_23102_ID;
extern jmethodID View__computeScroll_23079_ID;
extern jmethodID View__computeVerticalScrollExtent_23107_ID;
extern jmethodID View__computeVerticalScrollOffset_23106_ID;
extern jmethodID View__computeVerticalScrollRange_23105_ID;
extern jmethodID View__createAccessibilityNodeInfo_22860_ID;
extern jmethodID View__createContextMenu_22982_ID;
extern jmethodID View__destroyDrawingCache_23142_ID;
extern jmethodID View__dispatchConfigurationChanged_22969_ID;
extern jmethodID View__dispatchDisplayHint_22963_ID;
extern jmethodID View__dispatchDragEvent_23243_ID;
extern jmethodID View__dispatchDraw_22998_ID;
extern jmethodID View__dispatchGenericFocusedEvent_22957_ID;
extern jmethodID View__dispatchGenericMotionEvent_22954_ID;
extern jmethodID View__dispatchGenericPointerEvent_22956_ID;
extern jmethodID View__dispatchHoverEvent_22955_ID;
extern jmethodID View__dispatchKeyEvent_22949_ID;
extern jmethodID View__dispatchKeyEventPreIme_22948_ID;
extern jmethodID View__dispatchKeyShortcutEvent_22950_ID;
extern jmethodID View__dispatchPopulateAccessibilityEvent_22857_ID;
extern jmethodID View__dispatchRestoreInstanceState_23129_ID;
extern jmethodID View__dispatchSaveInstanceState_23126_ID;
extern jmethodID View__dispatchSetActivated_23193_ID;
extern jmethodID View__dispatchSetPressed_22916_ID;
extern jmethodID View__dispatchSetSelected_23190_ID;
extern jmethodID View__dispatchSystemUiVisibilityChanged_23240_ID;
extern jmethodID View__dispatchTouchEvent_22951_ID;
extern jmethodID View__dispatchTrackballEvent_22953_ID;
extern jmethodID View__dispatchUnhandledMove_22927_ID;
extern jmethodID View__dispatchVisibilityChanged_22961_ID;
extern jmethodID View__dispatchWindowFocusChanged_22958_ID;
extern jmethodID View__dispatchWindowSystemUiVisiblityChanged_23238_ID;
extern jmethodID View__dispatchWindowVisibilityChanged_22965_ID;
extern jmethodID View__drawableStateChanged_23169_ID;
extern jfieldID View__DRAWING_CACHE_QUALITY_AUTO_22736_ID;
extern jfieldID View__DRAWING_CACHE_QUALITY_HIGH_22735_ID;
extern jfieldID View__DRAWING_CACHE_QUALITY_LOW_22734_ID;
extern jfieldID View__FIND_VIEWS_WITH_CONTENT_DESCRIPTION_22796_ID;
extern jfieldID View__FIND_VIEWS_WITH_TEXT_22795_ID;
extern jmethodID View__findFocus_22869_ID;
extern jmethodID View__findViewById_23199_ID;
extern jmethodID View__findViewsWithText_22931_ID;
extern jmethodID View__findViewWithTag_23200_ID;
extern jmethodID View__fitSystemWindows_22887_ID;
extern jfieldID View__FOCUS_BACKWARD_22746_ID;
extern jfieldID View__FOCUS_DOWN_22751_ID;
extern jfieldID View__FOCUS_FORWARD_22747_ID;
extern jfieldID View__FOCUS_LEFT_22748_ID;
extern jfieldID View__FOCUS_RIGHT_22750_ID;
extern jfieldID View__FOCUS_UP_22749_ID;
extern jfieldID View__FOCUSABLES_ALL_22744_ID;
extern jfieldID View__FOCUSABLES_TOUCH_MODE_22745_ID;
extern jmethodID View__focusSearch_22926_ID;
extern jmethodID View__forceLayout_23210_ID;
extern jmethodID View__generateViewId_23257_ID;
extern jmethodID View__getAccessibilityLiveRegion_22940_ID;
extern jmethodID View__getAccessibilityNodeProvider_22863_ID;
extern jmethodID View__getAlpha_23029_ID;
extern jmethodID View__getAnimation_23224_ID;
extern jmethodID View__getApplicationWindowToken_23121_ID;
extern jmethodID View__getBackground_23179_ID;
extern jmethodID View__getBaseline_23207_ID;
extern jmethodID View__getBottom_23034_ID;
extern jmethodID View__getBottomFadingEdgeStrength_23085_ID;
extern jmethodID View__getBottomPaddingOffset_23152_ID;
extern jmethodID View__getCameraDistance_23013_ID;
extern jmethodID View__getClipBounds_23155_ID;
extern jmethodID View__getContentDescription_22864_ID;
extern jmethodID View__getContext_22972_ID;
extern jmethodID View__getContextMenuInfo_22983_ID;
extern jmethodID View__getDefaultSize_23217_ID;
extern jmethodID View__getDisplay_23122_ID;
extern jmethodID View__getDrawableState_23171_ID;
extern jmethodID View__getDrawingCache_23140_ID;
extern jmethodID View__getDrawingCache_23141_ID;
extern jmethodID View__getDrawingCacheBackgroundColor_23144_ID;
extern jmethodID View__getDrawingCacheQuality_22872_ID;
extern jmethodID View__getDrawingRect_23006_ID;
extern jmethodID View__getDrawingTime_23131_ID;
extern jmethodID View__getFilterTouchesWhenObscured_22920_ID;
extern jmethodID View__getFitsSystemWindows_22889_ID;
extern jmethodID View__getFocusables_22928_ID;
extern jmethodID View__getFocusedRect_23050_ID;
extern jmethodID View__getGlobalVisibleRect_23051_ID;
extern jmethodID View__getGlobalVisibleRect_23052_ID;
extern jmethodID View__getHandler_23067_ID;
extern jmethodID View__getHeight_23005_ID;
extern jmethodID View__getHitRect_23049_ID;
extern jmethodID View__getHorizontalFadingEdgeLength_22822_ID;
extern jmethodID View__getHorizontalScrollbarHeight_22824_ID;
extern jmethodID View__getId_23202_ID;
extern jmethodID View__getImportantForAccessibility_22938_ID;
extern jmethodID View__getKeepScreenOn_22874_ID;
extern jmethodID View__getKeyDispatcherState_22947_ID;
extern jmethodID View__getLabelFor_22866_ID;
extern jmethodID View__getLayerType_23136_ID;
extern jmethodID View__getLayoutDirection_22902_ID;
extern jmethodID View__getLayoutParams_23056_ID;
extern jmethodID View__getLeft_23037_ID;
extern jmethodID View__getLeftFadingEdgeStrength_23086_ID;
extern jmethodID View__getLeftPaddingOffset_23149_ID;
extern jmethodID View__getLocalVisibleRect_23053_ID;
extern jmethodID View__getLocationInWindow_23198_ID;
extern jmethodID View__getLocationOnScreen_23197_ID;
extern jmethodID View__getMatrix_23012_ID;
extern jmethodID View__getMeasuredHeight_23009_ID;
extern jmethodID View__getMeasuredHeightAndState_23010_ID;
extern jmethodID View__getMeasuredState_23011_ID;
extern jmethodID View__getMeasuredWidth_23007_ID;
extern jmethodID View__getMeasuredWidthAndState_23008_ID;
extern jmethodID View__getMinimumHeight_23220_ID;
extern jmethodID View__getMinimumWidth_23222_ID;
extern jmethodID View__getNextFocusDownId_22882_ID;
extern jmethodID View__getNextFocusForwardId_22884_ID;
extern jmethodID View__getNextFocusLeftId_22876_ID;
extern jmethodID View__getNextFocusRightId_22878_ID;
extern jmethodID View__getNextFocusUpId_22880_ID;
extern jmethodID View__getOnFocusChangeListener_22833_ID;
extern jmethodID View__getOverlay_23157_ID;
extern jmethodID View__getOverScrollMode_23247_ID;
extern jmethodID View__getPaddingBottom_23183_ID;
extern jmethodID View__getPaddingEnd_23187_ID;
extern jmethodID View__getPaddingLeft_23184_ID;
extern jmethodID View__getPaddingRight_23186_ID;
extern jmethodID View__getPaddingStart_23185_ID;
extern jmethodID View__getPaddingTop_23182_ID;
extern jmethodID View__getParent_22999_ID;
extern jmethodID View__getParentForAccessibility_22942_ID;
extern jmethodID View__getPivotX_23025_ID;
extern jmethodID View__getPivotY_23027_ID;
extern jmethodID View__getResources_23163_ID;
extern jmethodID View__getRight_23039_ID;
extern jmethodID View__getRightFadingEdgeStrength_23087_ID;
extern jmethodID View__getRightPaddingOffset_23150_ID;
extern jmethodID View__getRootView_23196_ID;
extern jmethodID View__getRotation_23015_ID;
extern jmethodID View__getRotationX_23019_ID;
extern jmethodID View__getRotationY_23017_ID;
extern jmethodID View__getScaleX_23021_ID;
extern jmethodID View__getScaleY_23023_ID;
extern jmethodID View__getScrollBarDefaultDelayBeforeFade_23094_ID;
extern jmethodID View__getScrollBarFadeDuration_23096_ID;
extern jmethodID View__getScrollBarSize_23098_ID;
extern jmethodID View__getScrollBarStyle_23101_ID;
extern jmethodID View__getScrollX_23002_ID;
extern jmethodID View__getScrollY_23003_ID;
extern jmethodID View__getSolidColor_23158_ID;
extern jmethodID View__getSuggestedMinimumHeight_23218_ID;
extern jmethodID View__getSuggestedMinimumWidth_23219_ID;
extern jmethodID View__getSystemUiVisibility_23235_ID;
extern jmethodID View__getTag_23203_ID;
extern jmethodID View__getTag_23205_ID;
extern jmethodID View__getTextAlignment_23254_ID;
extern jmethodID View__getTextDirection_23250_ID;
extern jmethodID View__getTop_23032_ID;
extern jmethodID View__getTopFadingEdgeStrength_23084_ID;
extern jmethodID View__getTopPaddingOffset_23151_ID;
extern jmethodID View__getTouchables_22932_ID;
extern jmethodID View__getTouchDelegate_22994_ID;
extern jmethodID View__getTranslationX_23045_ID;
extern jmethodID View__getTranslationY_23047_ID;
extern jmethodID View__getVerticalFadingEdgeLength_22820_ID;
extern jmethodID View__getVerticalScrollbarPosition_22827_ID;
extern jmethodID View__getVerticalScrollbarWidth_22823_ID;
extern jmethodID View__getViewTreeObserver_23195_ID;
extern jmethodID View__getVisibility_22891_ID;
extern jmethodID View__getWidth_23004_ID;
extern jmethodID View__getWindowAttachCount_23118_ID;
extern jmethodID View__getWindowId_23120_ID;
extern jmethodID View__getWindowSystemUiVisibility_23236_ID;
extern jmethodID View__getWindowToken_23119_ID;
extern jmethodID View__getWindowVisibility_22967_ID;
extern jmethodID View__getWindowVisibleDisplayFrame_22968_ID;
extern jmethodID View__getX_23041_ID;
extern jmethodID View__getY_23043_ID;
extern jfieldID View__GONE_22733_ID;
extern jfieldID View__HAPTIC_FEEDBACK_ENABLED_22743_ID;
extern jmethodID View__hasFocus_22851_ID;
extern jmethodID View__hasFocusable_22852_ID;
extern jmethodID View__hasOnClickListeners_22835_ID;
extern jmethodID View__hasOverlappingRendering_23030_ID;
extern jmethodID View__hasTransientState_22903_ID;
extern jmethodID View__hasWindowFocus_22960_ID;
extern jfieldID View__IMPORTANT_FOR_ACCESSIBILITY_AUTO_22773_ID;
extern jfieldID View__IMPORTANT_FOR_ACCESSIBILITY_NO_22775_ID;
extern jfieldID View__IMPORTANT_FOR_ACCESSIBILITY_NO_HIDE_DESCENDANTS_22776_ID;
extern jfieldID View__IMPORTANT_FOR_ACCESSIBILITY_YES_22774_ID;
extern jmethodID View__inflate_23244_ID;
extern jmethodID View__initializeFadingEdge_22819_ID;
extern jmethodID View__initializeScrollbars_22825_ID;
extern jmethodID View__invalidate_23063_ID;
extern jmethodID View__invalidate_23064_ID;
extern jmethodID View__invalidate_23065_ID;
extern jmethodID View__invalidateDrawable_23164_ID;
extern jfieldID View__INVISIBLE_22732_ID;
extern jmethodID View__isActivated_23194_ID;
extern jmethodID View__isAttachedToWindow_22905_ID;
extern jmethodID View__isClickable_22911_ID;
extern jmethodID View__isDirty_23035_ID;
extern jmethodID View__isDrawingCacheEnabled_23139_ID;
extern jmethodID View__isDuplicateParentStateEnabled_23133_ID;
extern jmethodID View__isEnabled_22893_ID;
extern jmethodID View__isFocusable_22924_ID;
extern jmethodID View__isFocusableInTouchMode_22925_ID;
extern jmethodID View__isFocused_22868_ID;
extern jmethodID View__isHapticFeedbackEnabled_22900_ID;
extern jmethodID View__isHardwareAccelerated_23153_ID;
extern jmethodID View__isHorizontalFadingEdgeEnabled_23080_ID;
extern jmethodID View__isHorizontalScrollBarEnabled_23088_ID;
extern jmethodID View__isHovered_22988_ID;
extern jmethodID View__isInEditMode_23147_ID;
extern jmethodID View__isInLayout_23208_ID;
extern jmethodID View__isInTouchMode_22971_ID;
extern jmethodID View__isLaidOut_22906_ID;
extern jmethodID View__isLayoutDirectionResolved_23116_ID;
extern jmethodID View__isLayoutRequested_23159_ID;
extern jmethodID View__isLongClickable_22913_ID;
extern jmethodID View__isOpaque_23066_ID;
extern jmethodID View__isPaddingOffsetRequired_23148_ID;
extern jmethodID View__isPaddingRelative_23188_ID;
extern jmethodID View__isPressed_22917_ID;
extern jmethodID View__isSaveEnabled_22918_ID;
extern jmethodID View__isSaveFromParentEnabled_22922_ID;
extern jmethodID View__isScrollbarFadingEnabled_23093_ID;
extern jmethodID View__isScrollContainer_22870_ID;
extern jmethodID View__isSelected_23191_ID;
extern jmethodID View__isShown_22886_ID;
extern jmethodID View__isSoundEffectsEnabled_22898_ID;
extern jmethodID View__isTextAlignmentResolved_23256_ID;
extern jmethodID View__isTextDirectionResolved_23252_ID;
extern jmethodID View__isVerticalFadingEdgeEnabled_23082_ID;
extern jmethodID View__isVerticalScrollBarEnabled_23090_ID;
extern jmethodID View__j_draw_23156_ID;
extern jmethodID View__jumpDrawablesToCurrentState_23174_ID;
extern jfieldID View__KEEP_SCREEN_ON_22741_ID;
extern jfieldID View__LAYER_TYPE_HARDWARE_22804_ID;
extern jfieldID View__LAYER_TYPE_NONE_22802_ID;
extern jfieldID View__LAYER_TYPE_SOFTWARE_22803_ID;
extern jmethodID View__layout_23160_ID;
extern jfieldID View__LAYOUT_DIRECTION_INHERIT_22758_ID;
extern jfieldID View__LAYOUT_DIRECTION_LOCALE_22759_ID;
extern jfieldID View__LAYOUT_DIRECTION_LTR_22756_ID;
extern jfieldID View__LAYOUT_DIRECTION_RTL_22757_ID;
extern jmethodID View__measure_23211_ID;
extern jfieldID View__MEASURED_HEIGHT_STATE_SHIFT_22754_ID;
extern jfieldID View__MEASURED_SIZE_MASK_22752_ID;
extern jfieldID View__MEASURED_STATE_MASK_22753_ID;
extern jfieldID View__MEASURED_STATE_TOO_SMALL_22755_ID;
extern jmethodID View__mergeDrawableStates_23173_ID;
extern jfieldID View__NO_ID_22730_ID;
extern jmethodID View__offsetLeftAndRight_23055_ID;
extern jmethodID View__offsetTopAndBottom_23054_ID;
extern jmethodID View__onAnimationEnd_23229_ID;
extern jmethodID View__onAnimationStart_23228_ID;
extern jmethodID View__onAttachedToWindow_23112_ID;
extern jmethodID View__onCancelPendingInputEvents_23124_ID;
extern jmethodID View__onCheckIsTextEditor_22979_ID;
extern jmethodID View__onConfigurationChanged_22970_ID;
extern jmethodID View__onCreateContextMenu_22984_ID;
extern jmethodID View__onCreateDrawableState_23172_ID;
extern jmethodID View__onCreateInputConnection_22980_ID;
extern jmethodID View__onDetachedFromWindow_23117_ID;
extern jmethodID View__onDisplayHint_22964_ID;
extern jmethodID View__onDragEvent_23242_ID;
extern jmethodID View__onDraw_23111_ID;
extern jmethodID View__onDrawScrollBars_23110_ID;
extern jmethodID View__onFilterTouchEventForSecurity_22952_ID;
extern jmethodID View__onFinishInflate_23162_ID;
extern jmethodID View__onFinishTemporaryDetach_22946_ID;
extern jmethodID View__onFocusChanged_22853_ID;
extern jmethodID View__onGenericMotionEvent_22986_ID;
extern jmethodID View__onHoverChanged_22990_ID;
extern jmethodID View__onHoverEvent_22987_ID;
extern jmethodID View__onInitializeAccessibilityEvent_22859_ID;
extern jmethodID View__onInitializeAccessibilityNodeInfo_22861_ID;
extern jmethodID View__onKeyDown_22974_ID;
extern jmethodID View__onKeyLongPress_22975_ID;
extern jmethodID View__onKeyMultiple_22977_ID;
extern jmethodID View__onKeyPreIme_22973_ID;
extern jmethodID View__onKeyShortcut_22978_ID;
extern jmethodID View__onKeyUp_22976_ID;
extern jmethodID View__onLayout_23161_ID;
extern jmethodID View__onMeasure_23212_ID;
extern jmethodID View__onOverScrolled_23246_ID;
extern jmethodID View__onPopulateAccessibilityEvent_22858_ID;
extern jmethodID View__onRestoreInstanceState_23130_ID;
extern jmethodID View__onRtlPropertiesChanged_23114_ID;
extern jmethodID View__onSaveInstanceState_23127_ID;
extern jmethodID View__onScreenStateChanged_23113_ID;
extern jmethodID View__onScrollChanged_22996_ID;
extern jmethodID View__onSetAlpha_23230_ID;
extern jmethodID View__onSizeChanged_22997_ID;
extern jmethodID View__onStartTemporaryDetach_22945_ID;
extern jmethodID View__onTouchEvent_22991_ID;
extern jmethodID View__onTrackballEvent_22985_ID;
extern jmethodID View__onVisibilityChanged_22962_ID;
extern jmethodID View__onWindowFocusChanged_22959_ID;
extern jmethodID View__onWindowSystemUiVisibilityChanged_23237_ID;
extern jmethodID View__onWindowVisibilityChanged_22966_ID;
extern jfieldID View__OVER_SCROLL_ALWAYS_22780_ID;
extern jfieldID View__OVER_SCROLL_IF_CONTENT_SCROLLS_22781_ID;
extern jfieldID View__OVER_SCROLL_NEVER_22782_ID;
extern jmethodID View__overScrollBy_23245_ID;
extern jmethodID View__performAccessibilityAction_22944_ID;
extern jmethodID View__performClick_22838_ID;
extern jmethodID View__performHapticFeedback_23232_ID;
extern jmethodID View__performHapticFeedback_23233_ID;
extern jmethodID View__performLongClick_22840_ID;
extern jmethodID View__playSoundEffect_23231_ID;
extern jmethodID View__post_23068_ID;
extern jmethodID View__postDelayed_23069_ID;
extern jmethodID View__postInvalidate_23073_ID;
extern jmethodID View__postInvalidate_23074_ID;
extern jmethodID View__postInvalidateDelayed_23075_ID;
extern jmethodID View__postInvalidateDelayed_23076_ID;
extern jmethodID View__postInvalidateOnAnimation_23077_ID;
extern jmethodID View__postInvalidateOnAnimation_23078_ID;
extern jmethodID View__postOnAnimation_23070_ID;
extern jmethodID View__postOnAnimationDelayed_23071_ID;
extern jmethodID View__refreshDrawableState_23170_ID;
extern jmethodID View__removeCallbacks_23072_ID;
extern jmethodID View__removeOnAttachStateChangeListener_22832_ID;
extern jmethodID View__removeOnLayoutChangeListener_22830_ID;
extern jmethodID View__requestFitSystemWindows_22890_ID;
extern jmethodID View__requestFocus_22934_ID;
extern jmethodID View__requestFocus_22935_ID;
extern jmethodID View__requestFocus_22936_ID;
extern jmethodID View__requestFocusFromTouch_22937_ID;
extern jmethodID View__requestLayout_23209_ID;
extern jmethodID View__requestRectangleOnScreen_22848_ID;
extern jmethodID View__requestRectangleOnScreen_22849_ID;
extern jmethodID View__resolveSize_23215_ID;
extern jmethodID View__resolveSizeAndState_23216_ID;
extern jmethodID View__restoreHierarchyState_23128_ID;
extern jfieldID View__ROTATION_22810_ID;
extern jfieldID View__ROTATION_X_22811_ID;
extern jfieldID View__ROTATION_Y_22812_ID;
extern jmethodID View__saveHierarchyState_23125_ID;
extern jfieldID View__SCALE_X_22813_ID;
extern jfieldID View__SCALE_Y_22814_ID;
extern jmethodID View__scheduleDrawable_23165_ID;
extern jfieldID View__SCREEN_STATE_OFF_22797_ID;
extern jfieldID View__SCREEN_STATE_ON_22798_ID;
extern jfieldID View__SCROLLBAR_POSITION_DEFAULT_22799_ID;
extern jfieldID View__SCROLLBAR_POSITION_LEFT_22800_ID;
extern jfieldID View__SCROLLBAR_POSITION_RIGHT_22801_ID;
extern jfieldID View__SCROLLBARS_INSIDE_INSET_22738_ID;
extern jfieldID View__SCROLLBARS_INSIDE_OVERLAY_22737_ID;
extern jfieldID View__SCROLLBARS_OUTSIDE_INSET_22740_ID;
extern jfieldID View__SCROLLBARS_OUTSIDE_OVERLAY_22739_ID;
extern jmethodID View__scrollBy_23059_ID;
extern jmethodID View__scrollTo_23058_ID;
extern jmethodID View__sendAccessibilityEvent_22854_ID;
extern jmethodID View__sendAccessibilityEventUnchecked_22856_ID;
extern jmethodID View__setAccessibilityDelegate_22862_ID;
extern jmethodID View__setAccessibilityLiveRegion_22939_ID;
extern jmethodID View__setActivated_23192_ID;
extern jmethodID View__setAlpha_23031_ID;
extern jmethodID View__setAnimation_23227_ID;
extern jmethodID View__setBackground_23177_ID;
extern jmethodID View__setBackgroundColor_23175_ID;
extern jmethodID View__setBackgroundDrawable_23178_ID;
extern jmethodID View__setBackgroundResource_23176_ID;
extern jmethodID View__setBottom_23036_ID;
extern jmethodID View__setCameraDistance_23014_ID;
extern jmethodID View__setClickable_22912_ID;
extern jmethodID View__setClipBounds_23154_ID;
extern jmethodID View__setContentDescription_22865_ID;
extern jmethodID View__setDrawingCacheBackgroundColor_23143_ID;
extern jmethodID View__setDrawingCacheEnabled_23138_ID;
extern jmethodID View__setDrawingCacheQuality_22873_ID;
extern jmethodID View__setDuplicateParentStateEnabled_23132_ID;
extern jmethodID View__setEnabled_22894_ID;
extern jmethodID View__setFadingEdgeLength_22821_ID;
extern jmethodID View__setFilterTouchesWhenObscured_22921_ID;
extern jmethodID View__setFitsSystemWindows_22888_ID;
extern jmethodID View__setFocusable_22895_ID;
extern jmethodID View__setFocusableInTouchMode_22896_ID;
extern jmethodID View__setHapticFeedbackEnabled_22899_ID;
extern jmethodID View__setHasTransientState_22904_ID;
extern jmethodID View__setHorizontalFadingEdgeEnabled_23081_ID;
extern jmethodID View__setHorizontalScrollBarEnabled_23089_ID;
extern jmethodID View__setHovered_22989_ID;
extern jmethodID View__setId_23201_ID;
extern jmethodID View__setImportantForAccessibility_22941_ID;
extern jmethodID View__setKeepScreenOn_22875_ID;
extern jmethodID View__setLabelFor_22867_ID;
extern jmethodID View__setLayerPaint_23135_ID;
extern jmethodID View__setLayerType_23134_ID;
extern jmethodID View__setLayoutDirection_22901_ID;
extern jmethodID View__setLayoutParams_23057_ID;
extern jmethodID View__setLeft_23038_ID;
extern jmethodID View__setLongClickable_22914_ID;
extern jmethodID View__setMeasuredDimension_23213_ID;
extern jmethodID View__setMinimumHeight_23221_ID;
extern jmethodID View__setMinimumWidth_23223_ID;
extern jmethodID View__setNextFocusDownId_22883_ID;
extern jmethodID View__setNextFocusForwardId_22885_ID;
extern jmethodID View__setNextFocusLeftId_22877_ID;
extern jmethodID View__setNextFocusRightId_22879_ID;
extern jmethodID View__setNextFocusUpId_22881_ID;
extern jmethodID View__setOnClickListener_22834_ID;
extern jmethodID View__setOnCreateContextMenuListener_22837_ID;
extern jmethodID View__setOnDragListener_22847_ID;
extern jmethodID View__setOnFocusChangeListener_22828_ID;
extern jmethodID View__setOnGenericMotionListener_22845_ID;
extern jmethodID View__setOnHoverListener_22846_ID;
extern jmethodID View__setOnKeyListener_22843_ID;
extern jmethodID View__setOnLongClickListener_22836_ID;
extern jmethodID View__setOnSystemUiVisibilityChangeListener_23239_ID;
extern jmethodID View__setOnTouchListener_22844_ID;
extern jmethodID View__setOverScrollMode_23248_ID;
extern jmethodID View__setPadding_23180_ID;
extern jmethodID View__setPaddingRelative_23181_ID;
extern jmethodID View__setPivotX_23026_ID;
extern jmethodID View__setPivotY_23028_ID;
extern jmethodID View__setPressed_22915_ID;
extern jmethodID View__setRight_23040_ID;
extern jmethodID View__setRotation_23016_ID;
extern jmethodID View__setRotationX_23020_ID;
extern jmethodID View__setRotationY_23018_ID;
extern jmethodID View__setSaveEnabled_22919_ID;
extern jmethodID View__setSaveFromParentEnabled_22923_ID;
extern jmethodID View__setScaleX_23022_ID;
extern jmethodID View__setScaleY_23024_ID;
extern jmethodID View__setScrollBarDefaultDelayBeforeFade_23095_ID;
extern jmethodID View__setScrollBarFadeDuration_23097_ID;
extern jmethodID View__setScrollbarFadingEnabled_23092_ID;
extern jmethodID View__setScrollBarSize_23099_ID;
extern jmethodID View__setScrollBarStyle_23100_ID;
extern jmethodID View__setScrollContainer_22871_ID;
extern jmethodID View__setScrollX_23000_ID;
extern jmethodID View__setScrollY_23001_ID;
extern jmethodID View__setSelected_23189_ID;
extern jmethodID View__setSoundEffectsEnabled_22897_ID;
extern jmethodID View__setSystemUiVisibility_23234_ID;
extern jmethodID View__setTag_23204_ID;
extern jmethodID View__setTag_23206_ID;
extern jmethodID View__setTextAlignment_23253_ID;
extern jmethodID View__setTextDirection_23249_ID;
extern jmethodID View__setTop_23033_ID;
extern jmethodID View__setTouchDelegate_22993_ID;
extern jmethodID View__setTranslationX_23046_ID;
extern jmethodID View__setTranslationY_23048_ID;
extern jmethodID View__setVerticalFadingEdgeEnabled_23083_ID;
extern jmethodID View__setVerticalScrollBarEnabled_23091_ID;
extern jmethodID View__setVerticalScrollbarPosition_22826_ID;
extern jmethodID View__setVisibility_22892_ID;
extern jmethodID View__setWillNotCacheDrawing_22909_ID;
extern jmethodID View__setWillNotDraw_22907_ID;
extern jmethodID View__setX_23042_ID;
extern jmethodID View__setY_23044_ID;
extern jmethodID View__showContextMenu_22841_ID;
extern jfieldID View__SOUND_EFFECTS_ENABLED_22742_ID;
extern jmethodID View__startActionMode_22842_ID;
extern jmethodID View__startAnimation_23225_ID;
extern jmethodID View__startDrag_23241_ID;
extern jfieldID View__STATUS_BAR_HIDDEN_22792_ID;
extern jfieldID View__STATUS_BAR_VISIBLE_22793_ID;
extern jfieldID View__SYSTEM_UI_FLAG_FULLSCREEN_22786_ID;
extern jfieldID View__SYSTEM_UI_FLAG_HIDE_NAVIGATION_22785_ID;
extern jfieldID View__SYSTEM_UI_FLAG_IMMERSIVE_22790_ID;
extern jfieldID View__SYSTEM_UI_FLAG_IMMERSIVE_STICKY_22791_ID;
extern jfieldID View__SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN_22789_ID;
extern jfieldID View__SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION_22788_ID;
extern jfieldID View__SYSTEM_UI_FLAG_LAYOUT_STABLE_22787_ID;
extern jfieldID View__SYSTEM_UI_FLAG_LOW_PROFILE_22784_ID;
extern jfieldID View__SYSTEM_UI_FLAG_VISIBLE_22783_ID;
extern jfieldID View__SYSTEM_UI_LAYOUT_FLAGS_22794_ID;
extern jfieldID View__TEXT_ALIGNMENT_CENTER_22770_ID;
extern jfieldID View__TEXT_ALIGNMENT_GRAVITY_22767_ID;
extern jfieldID View__TEXT_ALIGNMENT_INHERIT_22766_ID;
extern jfieldID View__TEXT_ALIGNMENT_TEXT_END_22769_ID;
extern jfieldID View__TEXT_ALIGNMENT_TEXT_START_22768_ID;
extern jfieldID View__TEXT_ALIGNMENT_VIEW_END_22772_ID;
extern jfieldID View__TEXT_ALIGNMENT_VIEW_START_22771_ID;
extern jfieldID View__TEXT_DIRECTION_ANY_RTL_22762_ID;
extern jfieldID View__TEXT_DIRECTION_FIRST_STRONG_22761_ID;
extern jfieldID View__TEXT_DIRECTION_INHERIT_22760_ID;
extern jfieldID View__TEXT_DIRECTION_LOCALE_22765_ID;
extern jfieldID View__TEXT_DIRECTION_LTR_22763_ID;
extern jfieldID View__TEXT_DIRECTION_RTL_22764_ID;
extern jmethodID View__toString_22818_ID;
extern jfieldID View__TRANSLATION_X_22806_ID;
extern jfieldID View__TRANSLATION_Y_22807_ID;
extern jmethodID View__unscheduleDrawable_23166_ID;
extern jmethodID View__unscheduleDrawable_23167_ID;
extern jmethodID View__verifyDrawable_23168_ID;
extern jmethodID View__View_22815_ID_c;
extern jmethodID View__View_22816_ID_c;
extern jmethodID View__View_22817_ID_c;
extern jfieldID View__VISIBLE_22731_ID;
extern jmethodID View__willNotCacheDrawing_22910_ID;
extern jmethodID View__willNotDraw_22908_ID;
extern jfieldID View__X_22808_ID;
extern jfieldID View__Y_22809_ID;

struct View__uType : ::app::Android::java::lang::Object__uType
{
    void(*__fp_addChildrenForAccessibility)(View*, ::app::Android::java::util::ArrayList*);
    void(*__fp_addFocusables_1)(View*, ::app::Android::java::util::ArrayList*, int, int);
    void(*__fp_addTouchables)(View*, ::app::Android::java::util::ArrayList*);
    void(*__fp_buildLayer)(View*);
    void(*__fp_cancelLongPress)(View*);
    void(*__fp_clearFocus)(View*);
    int(*__fp_computeHorizontalScrollOffset)(View*);
    int(*__fp_computeHorizontalScrollRange)(View*);
    void(*__fp_computeScroll)(View*);
    int(*__fp_computeVerticalScrollExtent)(View*);
    int(*__fp_computeVerticalScrollOffset)(View*);
    int(*__fp_computeVerticalScrollRange)(View*);
    void(*__fp_dispatchConfigurationChanged)(View*, ::app::Android::android::content::res::Configuration*);
    void(*__fp_dispatchDisplayHint)(View*, int);
    bool(*__fp_dispatchDragEvent)(View*, ::app::Android::android::view::DragEvent*);
    void(*__fp_dispatchDraw)(View*, ::app::Android::android::graphics::Canvas*);
    bool(*__fp_dispatchGenericFocusedEvent)(View*, ::app::Android::android::view::MotionEvent*);
    bool(*__fp_dispatchGenericPointerEvent)(View*, ::app::Android::android::view::MotionEvent*);
    bool(*__fp_dispatchHoverEvent)(View*, ::app::Android::android::view::MotionEvent*);
    bool(*__fp_dispatchKeyEvent)(View*, ::app::Android::android::view::KeyEvent*);
    bool(*__fp_dispatchKeyEventPreIme)(View*, ::app::Android::android::view::KeyEvent*);
    bool(*__fp_dispatchKeyShortcutEvent)(View*, ::app::Android::android::view::KeyEvent*);
    bool(*__fp_dispatchPopulateAccessibilityEvent)(View*, ::app::Android::android::view::accessibility::AccessibilityEvent*);
    void(*__fp_dispatchRestoreInstanceState)(View*, ::app::Android::android::util::SparseArray*);
    void(*__fp_dispatchSaveInstanceState)(View*, ::app::Android::android::util::SparseArray*);
    void(*__fp_dispatchSetPressed)(View*, bool);
    void(*__fp_dispatchSystemUiVisibilityChanged)(View*, int);
    bool(*__fp_dispatchTouchEvent)(View*, ::app::Android::android::view::MotionEvent*);
    bool(*__fp_dispatchTrackballEvent)(View*, ::app::Android::android::view::MotionEvent*);
    bool(*__fp_dispatchUnhandledMove)(View*, View*, int);
    void(*__fp_dispatchVisibilityChanged)(View*, View*, int);
    void(*__fp_dispatchWindowFocusChanged)(View*, bool);
    void(*__fp_dispatchWindowSystemUiVisiblityChanged)(View*, int);
    void(*__fp_dispatchWindowVisibilityChanged)(View*, int);
    void(*__fp_drawableStateChanged)(View*);
    View*(*__fp_findFocus)(View*);
    void(*__fp_findViewsWithText)(View*, ::app::Android::java::util::ArrayList*, ::uObject*, int);
    bool(*__fp_fitSystemWindows)(View*, ::app::Android::android::graphics::Rect*);
    ::app::Android::android::view::accessibility::AccessibilityNodeProvider*(*__fp_getAccessibilityNodeProvider)(View*);
    int(*__fp_getBaseline)(View*);
    float(*__fp_getBottomFadingEdgeStrength)(View*);
    int(*__fp_getBottomPaddingOffset)(View*);
    void(*__fp_getFocusedRect)(View*, ::app::Android::android::graphics::Rect*);
    int(*__fp_getLayerType)(View*);
    float(*__fp_getLeftFadingEdgeStrength)(View*);
    int(*__fp_getLeftPaddingOffset)(View*);
    float(*__fp_getRightFadingEdgeStrength)(View*);
    int(*__fp_getRightPaddingOffset)(View*);
    float(*__fp_getTopFadingEdgeStrength)(View*);
    int(*__fp_getTopPaddingOffset)(View*);
    bool(*__fp_hasFocus)(View*);
    bool(*__fp_hasFocusable)(View*);
    bool(*__fp_hasOverlappingRendering)(View*);
    bool(*__fp_hasTransientState)(View*);
    void(*__fp_invalidateDrawable)(View*, ::app::Android::android::graphics::drawable::Drawable*);
    bool(*__fp_isOpaque)(View*);
    bool(*__fp_isPaddingOffsetRequired)(View*);
    void(*__fp_j_draw)(View*, ::app::Android::android::graphics::Canvas*);
    void(*__fp_jumpDrawablesToCurrentState)(View*);
    void(*__fp_layout)(View*, int, int, int, int);
    void(*__fp_onAnimationEnd)(View*);
    void(*__fp_onAnimationStart)(View*);
    void(*__fp_onAttachedToWindow)(View*);
    bool(*__fp_onCheckIsTextEditor)(View*);
    void(*__fp_onConfigurationChanged)(View*, ::app::Android::android::content::res::Configuration*);
    ::app::Android::Runtime::IntArray*(*__fp_onCreateDrawableState)(View*, int);
    ::uObject*(*__fp_onCreateInputConnection)(View*, ::app::Android::android::view::inputmethod::EditorInfo*);
    void(*__fp_onDetachedFromWindow)(View*);
    bool(*__fp_onDragEvent)(View*, ::app::Android::android::view::DragEvent*);
    void(*__fp_onDraw)(View*, ::app::Android::android::graphics::Canvas*);
    void(*__fp_onFinishTemporaryDetach)(View*);
    void(*__fp_onFocusChanged)(View*, bool, int, ::app::Android::android::graphics::Rect*);
    bool(*__fp_onGenericMotionEvent)(View*, ::app::Android::android::view::MotionEvent*);
    bool(*__fp_onHoverEvent)(View*, ::app::Android::android::view::MotionEvent*);
    void(*__fp_onInitializeAccessibilityEvent)(View*, ::app::Android::android::view::accessibility::AccessibilityEvent*);
    void(*__fp_onInitializeAccessibilityNodeInfo)(View*, ::app::Android::android::view::accessibility::AccessibilityNodeInfo*);
    bool(*__fp_onKeyDown)(View*, int, ::app::Android::android::view::KeyEvent*);
    bool(*__fp_onKeyMultiple)(View*, int, int, ::app::Android::android::view::KeyEvent*);
    bool(*__fp_onKeyPreIme)(View*, int, ::app::Android::android::view::KeyEvent*);
    bool(*__fp_onKeyShortcut)(View*, int, ::app::Android::android::view::KeyEvent*);
    bool(*__fp_onKeyUp)(View*, int, ::app::Android::android::view::KeyEvent*);
    void(*__fp_onLayout)(View*, bool, int, int, int, int);
    void(*__fp_onMeasure)(View*, int, int);
    void(*__fp_onOverScrolled)(View*, int, int, bool, bool);
    void(*__fp_onPopulateAccessibilityEvent)(View*, ::app::Android::android::view::accessibility::AccessibilityEvent*);
    void(*__fp_onRestoreInstanceState)(View*, ::uObject*);
    void(*__fp_onRtlPropertiesChanged)(View*, int);
    ::uObject*(*__fp_onSaveInstanceState)(View*);
    void(*__fp_onScreenStateChanged)(View*, int);
    void(*__fp_onScrollChanged)(View*, int, int, int, int);
    void(*__fp_onSizeChanged)(View*, int, int, int, int);
    void(*__fp_onStartTemporaryDetach)(View*);
    bool(*__fp_onTouchEvent)(View*, ::app::Android::android::view::MotionEvent*);
    bool(*__fp_onTrackballEvent)(View*, ::app::Android::android::view::MotionEvent*);
    void(*__fp_onVisibilityChanged)(View*, View*, int);
    void(*__fp_onWindowFocusChanged)(View*, bool);
    void(*__fp_onWindowVisibilityChanged)(View*, int);
    bool(*__fp_performAccessibilityAction)(View*, int, ::app::Android::android::os::Bundle*);
    bool(*__fp_performClick)(View*);
    bool(*__fp_performLongClick)(View*);
    void(*__fp_postInvalidate)(View*);
    bool(*__fp_requestFocus_2)(View*, int, ::app::Android::android::graphics::Rect*);
    void(*__fp_requestLayout)(View*);
    void(*__fp_scrollTo)(View*, int, int);
    void(*__fp_sendAccessibilityEvent)(View*, int);
    void(*__fp_setBackgroundColor)(View*, int);
    void(*__fp_setEnabled)(View*, bool);
    void(*__fp_setLayerType)(View*, int, ::app::Android::android::graphics::Paint*);
    void(*__fp_setLayoutParams)(View*, ::app::Android::android::view::ViewGroupDLRLayoutParams*);
    void(*__fp_setOverScrollMode)(View*, int);
    void(*__fp_setPadding)(View*, int, int, int, int);
    void(*__fp_setPaddingRelative)(View*, int, int, int, int);
    void(*__fp_setScrollBarStyle)(View*, int);
    void(*__fp_setSelected)(View*, bool);
    void(*__fp_setVisibility)(View*, int);
    bool(*__fp_verifyDrawable)(View*, ::app::Android::android::graphics::drawable::Drawable*);
};

View__uType* View__typeof();

void View___Init_2(::uStatic* __this);
void View___ObjInit_4(View* __this, ::app::Android::android::content::Context* arg0);
void View___ObjInit_5(View* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1);
void View___ObjInit_6(View* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1, int arg2);
void View___ObjInit_7(View* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
void View__addChildrenForAccessibility(View* __this, ::app::Android::java::util::ArrayList* arg0);
void View__addChildrenForAccessibility_IMPL_22943(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__addFocusables(View* __this, ::app::Android::java::util::ArrayList* arg0, int arg1);
void View__addFocusables_1(View* __this, ::app::Android::java::util::ArrayList* arg0, int arg1, int arg2);
void View__addFocusables_IMPL_22929(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);
void View__addFocusables_IMPL_22930(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, int arg4_);
void View__addOnAttachStateChangeListener(View* __this, ::uObject* arg0);
void View__addOnAttachStateChangeListener_IMPL_22831(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__addOnLayoutChangeListener(View* __this, ::uObject* arg0);
void View__addOnLayoutChangeListener_IMPL_22829(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__addTouchables(View* __this, ::app::Android::java::util::ArrayList* arg0);
void View__addTouchables_IMPL_22933(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
::app::Android::android::view::ViewPropertyAnimator* View__animate(View* __this);
::uObject* View__animate_IMPL_23258(::uStatic* __this, bool arg0_, jobject arg1_);
void View__announceForAccessibility(View* __this, ::uObject* arg0);
void View__announceForAccessibility_IMPL_22855(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool View__awakenScrollBars(View* __this);
bool View__awakenScrollBars_1(View* __this, int arg0);
bool View__awakenScrollBars_2(View* __this, int arg0, bool arg1);
bool View__awakenScrollBars_IMPL_23060(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__awakenScrollBars_IMPL_23061(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
bool View__awakenScrollBars_IMPL_23062(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, bool arg3_);
void View__bringToFront(View* __this);
void View__bringToFront_IMPL_22995(::uStatic* __this, bool arg0_, jobject arg1_);
void View__buildDrawingCache(View* __this);
void View__buildDrawingCache_1(View* __this, bool arg0);
void View__buildDrawingCache_IMPL_23145(::uStatic* __this, bool arg0_, jobject arg1_);
void View__buildDrawingCache_IMPL_23146(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void View__buildLayer(View* __this);
void View__buildLayer_IMPL_23137(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__callOnClick(View* __this);
bool View__callOnClick_IMPL_22839(::uStatic* __this, bool arg0_, jobject arg1_);
void View__cancelLongPress(View* __this);
void View__cancelLongPress_IMPL_22992(::uStatic* __this, bool arg0_, jobject arg1_);
void View__cancelPendingInputEvents(View* __this);
void View__cancelPendingInputEvents_IMPL_23123(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__canResolveLayoutDirection(View* __this);
bool View__canResolveLayoutDirection_IMPL_23115(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__canResolveTextAlignment(View* __this);
bool View__canResolveTextAlignment_IMPL_23255(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__canResolveTextDirection(View* __this);
bool View__canResolveTextDirection_IMPL_23251(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__canScrollHorizontally(View* __this, int arg0);
bool View__canScrollHorizontally_IMPL_23108(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
bool View__canScrollVertically(View* __this, int arg0);
bool View__canScrollVertically_IMPL_23109(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
bool View__checkInputConnectionProxy(View* __this, View* arg0);
bool View__checkInputConnectionProxy_IMPL_22981(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__clearAnimation(View* __this);
void View__clearAnimation_IMPL_23226(::uStatic* __this, bool arg0_, jobject arg1_);
void View__clearFocus(View* __this);
void View__clearFocus_IMPL_22850(::uStatic* __this, bool arg0_, jobject arg1_);
int View__combineMeasuredStates(::uStatic* __this, int arg0, int arg1);
int View__combineMeasuredStates_IMPL_23214(::uStatic* __this, int arg0_, int arg1_);
int View__computeHorizontalScrollExtent(View* __this);
int View__computeHorizontalScrollExtent_IMPL_23104(::uStatic* __this, bool arg0_, jobject arg1_);
int View__computeHorizontalScrollOffset(View* __this);
int View__computeHorizontalScrollOffset_IMPL_23103(::uStatic* __this, bool arg0_, jobject arg1_);
int View__computeHorizontalScrollRange(View* __this);
int View__computeHorizontalScrollRange_IMPL_23102(::uStatic* __this, bool arg0_, jobject arg1_);
void View__computeScroll(View* __this);
void View__computeScroll_IMPL_23079(::uStatic* __this, bool arg0_, jobject arg1_);
int View__computeVerticalScrollExtent(View* __this);
int View__computeVerticalScrollExtent_IMPL_23107(::uStatic* __this, bool arg0_, jobject arg1_);
int View__computeVerticalScrollOffset(View* __this);
int View__computeVerticalScrollOffset_IMPL_23106(::uStatic* __this, bool arg0_, jobject arg1_);
int View__computeVerticalScrollRange(View* __this);
int View__computeVerticalScrollRange_IMPL_23105(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::android::view::accessibility::AccessibilityNodeInfo* View__createAccessibilityNodeInfo(View* __this);
::uObject* View__createAccessibilityNodeInfo_IMPL_22860(::uStatic* __this, bool arg0_, jobject arg1_);
void View__createContextMenu(View* __this, ::uObject* arg0);
void View__createContextMenu_IMPL_22982(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__destroyDrawingCache(View* __this);
void View__destroyDrawingCache_IMPL_23142(::uStatic* __this, bool arg0_, jobject arg1_);
void View__dispatchConfigurationChanged(View* __this, ::app::Android::android::content::res::Configuration* arg0);
void View__dispatchConfigurationChanged_IMPL_22969(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__dispatchDisplayHint(View* __this, int arg0);
void View__dispatchDisplayHint_IMPL_22963(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
bool View__dispatchDragEvent(View* __this, ::app::Android::android::view::DragEvent* arg0);
bool View__dispatchDragEvent_IMPL_23243(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__dispatchDraw(View* __this, ::app::Android::android::graphics::Canvas* arg0);
void View__dispatchDraw_IMPL_22998(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool View__dispatchGenericFocusedEvent(View* __this, ::app::Android::android::view::MotionEvent* arg0);
bool View__dispatchGenericFocusedEvent_IMPL_22957(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool View__dispatchGenericMotionEvent(View* __this, ::app::Android::android::view::MotionEvent* arg0);
bool View__dispatchGenericMotionEvent_IMPL_22954(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool View__dispatchGenericPointerEvent(View* __this, ::app::Android::android::view::MotionEvent* arg0);
bool View__dispatchGenericPointerEvent_IMPL_22956(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool View__dispatchHoverEvent(View* __this, ::app::Android::android::view::MotionEvent* arg0);
bool View__dispatchHoverEvent_IMPL_22955(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool View__dispatchKeyEvent(View* __this, ::app::Android::android::view::KeyEvent* arg0);
bool View__dispatchKeyEvent_IMPL_22949(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool View__dispatchKeyEventPreIme(View* __this, ::app::Android::android::view::KeyEvent* arg0);
bool View__dispatchKeyEventPreIme_IMPL_22948(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool View__dispatchKeyShortcutEvent(View* __this, ::app::Android::android::view::KeyEvent* arg0);
bool View__dispatchKeyShortcutEvent_IMPL_22950(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool View__dispatchPopulateAccessibilityEvent(View* __this, ::app::Android::android::view::accessibility::AccessibilityEvent* arg0);
bool View__dispatchPopulateAccessibilityEvent_IMPL_22857(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__dispatchRestoreInstanceState(View* __this, ::app::Android::android::util::SparseArray* arg0);
void View__dispatchRestoreInstanceState_IMPL_23129(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__dispatchSaveInstanceState(View* __this, ::app::Android::android::util::SparseArray* arg0);
void View__dispatchSaveInstanceState_IMPL_23126(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__dispatchSetActivated(View* __this, bool arg0);
void View__dispatchSetActivated_IMPL_23193(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void View__dispatchSetPressed(View* __this, bool arg0);
void View__dispatchSetPressed_IMPL_22916(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void View__dispatchSetSelected(View* __this, bool arg0);
void View__dispatchSetSelected_IMPL_23190(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void View__dispatchSystemUiVisibilityChanged(View* __this, int arg0);
void View__dispatchSystemUiVisibilityChanged_IMPL_23240(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
bool View__dispatchTouchEvent(View* __this, ::app::Android::android::view::MotionEvent* arg0);
bool View__dispatchTouchEvent_IMPL_22951(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool View__dispatchTrackballEvent(View* __this, ::app::Android::android::view::MotionEvent* arg0);
bool View__dispatchTrackballEvent_IMPL_22953(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool View__dispatchUnhandledMove(View* __this, View* arg0, int arg1);
bool View__dispatchUnhandledMove_IMPL_22927(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);
void View__dispatchVisibilityChanged(View* __this, View* arg0, int arg1);
void View__dispatchVisibilityChanged_IMPL_22961(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);
void View__dispatchWindowFocusChanged(View* __this, bool arg0);
void View__dispatchWindowFocusChanged_IMPL_22958(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void View__dispatchWindowSystemUiVisiblityChanged(View* __this, int arg0);
void View__dispatchWindowSystemUiVisiblityChanged_IMPL_23238(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__dispatchWindowVisibilityChanged(View* __this, int arg0);
void View__dispatchWindowVisibilityChanged_IMPL_22965(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__drawableStateChanged(View* __this);
void View__drawableStateChanged_IMPL_23169(::uStatic* __this, bool arg0_, jobject arg1_);
View* View__findFocus(View* __this);
::uObject* View__findFocus_IMPL_22869(::uStatic* __this, bool arg0_, jobject arg1_);
View* View__findViewById(View* __this, int arg0);
::uObject* View__findViewById_IMPL_23199(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__findViewsWithText(View* __this, ::app::Android::java::util::ArrayList* arg0, ::uObject* arg1, int arg2);
void View__findViewsWithText_IMPL_22931(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, int arg4_);
View* View__findViewWithTag(View* __this, ::app::Android::java::lang::Object* arg0);
::uObject* View__findViewWithTag_IMPL_23200(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool View__fitSystemWindows(View* __this, ::app::Android::android::graphics::Rect* arg0);
bool View__fitSystemWindows_IMPL_22887(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
View* View__focusSearch(View* __this, int arg0);
::uObject* View__focusSearch_IMPL_22926(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__forceLayout(View* __this);
void View__forceLayout_IMPL_23210(::uStatic* __this, bool arg0_, jobject arg1_);
int View__generateViewId(::uStatic* __this);
int View__generateViewId_IMPL_23257(::uStatic* __this);
int View__get_ACCESSIBILITY_LIVE_REGION_ASSERTIVE(::uStatic* __this);
int View__get_ACCESSIBILITY_LIVE_REGION_NONE(::uStatic* __this);
int View__get_ACCESSIBILITY_LIVE_REGION_POLITE(::uStatic* __this);
::app::Android::android::util::Property* View__get_ALPHA(::uStatic* __this);
int View__get_DRAWING_CACHE_QUALITY_AUTO(::uStatic* __this);
int View__get_DRAWING_CACHE_QUALITY_HIGH(::uStatic* __this);
int View__get_DRAWING_CACHE_QUALITY_LOW(::uStatic* __this);
int View__get_FIND_VIEWS_WITH_CONTENT_DESCRIPTION(::uStatic* __this);
int View__get_FIND_VIEWS_WITH_TEXT(::uStatic* __this);
int View__get_FOCUS_BACKWARD(::uStatic* __this);
int View__get_FOCUS_DOWN(::uStatic* __this);
int View__get_FOCUS_FORWARD(::uStatic* __this);
int View__get_FOCUS_LEFT(::uStatic* __this);
int View__get_FOCUS_RIGHT(::uStatic* __this);
int View__get_FOCUS_UP(::uStatic* __this);
int View__get_FOCUSABLES_ALL(::uStatic* __this);
int View__get_FOCUSABLES_TOUCH_MODE(::uStatic* __this);
int View__get_GONE(::uStatic* __this);
int View__get_HAPTIC_FEEDBACK_ENABLED(::uStatic* __this);
int View__get_IMPORTANT_FOR_ACCESSIBILITY_AUTO(::uStatic* __this);
int View__get_IMPORTANT_FOR_ACCESSIBILITY_NO(::uStatic* __this);
int View__get_IMPORTANT_FOR_ACCESSIBILITY_NO_HIDE_DESCENDANTS(::uStatic* __this);
int View__get_IMPORTANT_FOR_ACCESSIBILITY_YES(::uStatic* __this);
int View__get_INVISIBLE(::uStatic* __this);
int View__get_KEEP_SCREEN_ON(::uStatic* __this);
int View__get_LAYER_TYPE_HARDWARE(::uStatic* __this);
int View__get_LAYER_TYPE_NONE(::uStatic* __this);
int View__get_LAYER_TYPE_SOFTWARE(::uStatic* __this);
int View__get_LAYOUT_DIRECTION_INHERIT(::uStatic* __this);
int View__get_LAYOUT_DIRECTION_LOCALE(::uStatic* __this);
int View__get_LAYOUT_DIRECTION_LTR(::uStatic* __this);
int View__get_LAYOUT_DIRECTION_RTL(::uStatic* __this);
int View__get_MEASURED_HEIGHT_STATE_SHIFT(::uStatic* __this);
int View__get_MEASURED_SIZE_MASK(::uStatic* __this);
int View__get_MEASURED_STATE_MASK(::uStatic* __this);
int View__get_MEASURED_STATE_TOO_SMALL(::uStatic* __this);
int View__get_NO_ID(::uStatic* __this);
int View__get_OVER_SCROLL_ALWAYS(::uStatic* __this);
int View__get_OVER_SCROLL_IF_CONTENT_SCROLLS(::uStatic* __this);
int View__get_OVER_SCROLL_NEVER(::uStatic* __this);
::app::Android::android::util::Property* View__get_ROTATION(::uStatic* __this);
::app::Android::android::util::Property* View__get_ROTATION_X(::uStatic* __this);
::app::Android::android::util::Property* View__get_ROTATION_Y(::uStatic* __this);
::app::Android::android::util::Property* View__get_SCALE_X(::uStatic* __this);
::app::Android::android::util::Property* View__get_SCALE_Y(::uStatic* __this);
int View__get_SCREEN_STATE_OFF(::uStatic* __this);
int View__get_SCREEN_STATE_ON(::uStatic* __this);
int View__get_SCROLLBAR_POSITION_DEFAULT(::uStatic* __this);
int View__get_SCROLLBAR_POSITION_LEFT(::uStatic* __this);
int View__get_SCROLLBAR_POSITION_RIGHT(::uStatic* __this);
int View__get_SCROLLBARS_INSIDE_INSET(::uStatic* __this);
int View__get_SCROLLBARS_INSIDE_OVERLAY(::uStatic* __this);
int View__get_SCROLLBARS_OUTSIDE_INSET(::uStatic* __this);
int View__get_SCROLLBARS_OUTSIDE_OVERLAY(::uStatic* __this);
int View__get_SOUND_EFFECTS_ENABLED(::uStatic* __this);
int View__get_STATUS_BAR_HIDDEN(::uStatic* __this);
int View__get_STATUS_BAR_VISIBLE(::uStatic* __this);
int View__get_SYSTEM_UI_FLAG_FULLSCREEN(::uStatic* __this);
int View__get_SYSTEM_UI_FLAG_HIDE_NAVIGATION(::uStatic* __this);
int View__get_SYSTEM_UI_FLAG_IMMERSIVE(::uStatic* __this);
int View__get_SYSTEM_UI_FLAG_IMMERSIVE_STICKY(::uStatic* __this);
int View__get_SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN(::uStatic* __this);
int View__get_SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION(::uStatic* __this);
int View__get_SYSTEM_UI_FLAG_LAYOUT_STABLE(::uStatic* __this);
int View__get_SYSTEM_UI_FLAG_LOW_PROFILE(::uStatic* __this);
int View__get_SYSTEM_UI_FLAG_VISIBLE(::uStatic* __this);
int View__get_SYSTEM_UI_LAYOUT_FLAGS(::uStatic* __this);
int View__get_TEXT_ALIGNMENT_CENTER(::uStatic* __this);
int View__get_TEXT_ALIGNMENT_GRAVITY(::uStatic* __this);
int View__get_TEXT_ALIGNMENT_INHERIT(::uStatic* __this);
int View__get_TEXT_ALIGNMENT_TEXT_END(::uStatic* __this);
int View__get_TEXT_ALIGNMENT_TEXT_START(::uStatic* __this);
int View__get_TEXT_ALIGNMENT_VIEW_END(::uStatic* __this);
int View__get_TEXT_ALIGNMENT_VIEW_START(::uStatic* __this);
int View__get_TEXT_DIRECTION_ANY_RTL(::uStatic* __this);
int View__get_TEXT_DIRECTION_FIRST_STRONG(::uStatic* __this);
int View__get_TEXT_DIRECTION_INHERIT(::uStatic* __this);
int View__get_TEXT_DIRECTION_LOCALE(::uStatic* __this);
int View__get_TEXT_DIRECTION_LTR(::uStatic* __this);
int View__get_TEXT_DIRECTION_RTL(::uStatic* __this);
::app::Android::android::util::Property* View__get_TRANSLATION_X(::uStatic* __this);
::app::Android::android::util::Property* View__get_TRANSLATION_Y(::uStatic* __this);
int View__get_VISIBLE(::uStatic* __this);
::app::Android::android::util::Property* View__get_X(::uStatic* __this);
::app::Android::android::util::Property* View__get_Y(::uStatic* __this);
int View__getAccessibilityLiveRegion(View* __this);
int View__getAccessibilityLiveRegion_IMPL_22940(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::android::view::accessibility::AccessibilityNodeProvider* View__getAccessibilityNodeProvider(View* __this);
::uObject* View__getAccessibilityNodeProvider_IMPL_22863(::uStatic* __this, bool arg0_, jobject arg1_);
float View__getAlpha(View* __this);
float View__getAlpha_IMPL_23029(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::android::view::animation::Animation* View__getAnimation(View* __this);
::uObject* View__getAnimation_IMPL_23224(::uStatic* __this, bool arg0_, jobject arg1_);
::uObject* View__getApplicationWindowToken(View* __this);
::uObject* View__getApplicationWindowToken_IMPL_23121(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::android::graphics::drawable::Drawable* View__getBackground(View* __this);
::uObject* View__getBackground_IMPL_23179(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getBaseline(View* __this);
int View__getBaseline_IMPL_23207(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getBottom(View* __this);
int View__getBottom_IMPL_23034(::uStatic* __this, bool arg0_, jobject arg1_);
float View__getBottomFadingEdgeStrength(View* __this);
float View__getBottomFadingEdgeStrength_IMPL_23085(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getBottomPaddingOffset(View* __this);
int View__getBottomPaddingOffset_IMPL_23152(::uStatic* __this, bool arg0_, jobject arg1_);
float View__getCameraDistance(View* __this);
float View__getCameraDistance_IMPL_23013(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::android::graphics::Rect* View__getClipBounds(View* __this);
::uObject* View__getClipBounds_IMPL_23155(::uStatic* __this, bool arg0_, jobject arg1_);
::uObject* View__getContentDescription(View* __this);
::uObject* View__getContentDescription_IMPL_22864(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::android::content::Context* View__getContext(View* __this);
::uObject* View__getContext_IMPL_22972(::uStatic* __this, bool arg0_, jobject arg1_);
::uObject* View__getContextMenuInfo(View* __this);
::uObject* View__getContextMenuInfo_IMPL_22983(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getDefaultSize(::uStatic* __this, int arg0, int arg1);
int View__getDefaultSize_IMPL_23217(::uStatic* __this, int arg0_, int arg1_);
::app::Android::android::view::Display* View__getDisplay(View* __this);
::uObject* View__getDisplay_IMPL_23122(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::Runtime::IntArray* View__getDrawableState(View* __this);
::uObject* View__getDrawableState_IMPL_23171(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::android::graphics::Bitmap* View__getDrawingCache(View* __this);
::app::Android::android::graphics::Bitmap* View__getDrawingCache_1(View* __this, bool arg0);
::uObject* View__getDrawingCache_IMPL_23140(::uStatic* __this, bool arg0_, jobject arg1_);
::uObject* View__getDrawingCache_IMPL_23141(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
int View__getDrawingCacheBackgroundColor(View* __this);
int View__getDrawingCacheBackgroundColor_IMPL_23144(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getDrawingCacheQuality(View* __this);
int View__getDrawingCacheQuality_IMPL_22872(::uStatic* __this, bool arg0_, jobject arg1_);
void View__getDrawingRect(View* __this, ::app::Android::android::graphics::Rect* arg0);
void View__getDrawingRect_IMPL_23006(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
::uLong View__getDrawingTime(View* __this);
::uLong View__getDrawingTime_IMPL_23131(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__getFilterTouchesWhenObscured(View* __this);
bool View__getFilterTouchesWhenObscured_IMPL_22920(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__getFitsSystemWindows(View* __this);
bool View__getFitsSystemWindows_IMPL_22889(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::java::util::ArrayList* View__getFocusables(View* __this, int arg0);
::uObject* View__getFocusables_IMPL_22928(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__getFocusedRect(View* __this, ::app::Android::android::graphics::Rect* arg0);
void View__getFocusedRect_IMPL_23050(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool View__getGlobalVisibleRect(View* __this, ::app::Android::android::graphics::Rect* arg0);
bool View__getGlobalVisibleRect_1(View* __this, ::app::Android::android::graphics::Rect* arg0, ::app::Android::android::graphics::Point* arg1);
bool View__getGlobalVisibleRect_IMPL_23051(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_);
bool View__getGlobalVisibleRect_IMPL_23052(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
::app::Android::android::os::Handler* View__getHandler(View* __this);
::uObject* View__getHandler_IMPL_23067(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getHeight(View* __this);
int View__getHeight_IMPL_23005(::uStatic* __this, bool arg0_, jobject arg1_);
void View__getHitRect(View* __this, ::app::Android::android::graphics::Rect* arg0);
void View__getHitRect_IMPL_23049(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
int View__getHorizontalFadingEdgeLength(View* __this);
int View__getHorizontalFadingEdgeLength_IMPL_22822(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getHorizontalScrollbarHeight(View* __this);
int View__getHorizontalScrollbarHeight_IMPL_22824(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getId(View* __this);
int View__getId_IMPL_23202(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getImportantForAccessibility(View* __this);
int View__getImportantForAccessibility_IMPL_22938(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__getKeepScreenOn(View* __this);
bool View__getKeepScreenOn_IMPL_22874(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::android::view::KeyEventDLRDispatcherState* View__getKeyDispatcherState(View* __this);
::uObject* View__getKeyDispatcherState_IMPL_22947(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getLabelFor(View* __this);
int View__getLabelFor_IMPL_22866(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getLayerType(View* __this);
int View__getLayerType_IMPL_23136(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getLayoutDirection(View* __this);
int View__getLayoutDirection_IMPL_22902(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::android::view::ViewGroupDLRLayoutParams* View__getLayoutParams(View* __this);
::uObject* View__getLayoutParams_IMPL_23056(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getLeft(View* __this);
int View__getLeft_IMPL_23037(::uStatic* __this, bool arg0_, jobject arg1_);
float View__getLeftFadingEdgeStrength(View* __this);
float View__getLeftFadingEdgeStrength_IMPL_23086(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getLeftPaddingOffset(View* __this);
int View__getLeftPaddingOffset_IMPL_23149(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__getLocalVisibleRect(View* __this, ::app::Android::android::graphics::Rect* arg0);
bool View__getLocalVisibleRect_IMPL_23053(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__getLocationInWindow(View* __this, ::app::Android::Runtime::IntArray* arg0);
void View__getLocationInWindow_IMPL_23198(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__getLocationOnScreen(View* __this, ::app::Android::Runtime::IntArray* arg0);
void View__getLocationOnScreen_IMPL_23197(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
::app::Android::android::graphics::Matrix* View__getMatrix(View* __this);
::uObject* View__getMatrix_IMPL_23012(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getMeasuredHeight(View* __this);
int View__getMeasuredHeight_IMPL_23009(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getMeasuredHeightAndState(View* __this);
int View__getMeasuredHeightAndState_IMPL_23010(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getMeasuredState(View* __this);
int View__getMeasuredState_IMPL_23011(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getMeasuredWidth(View* __this);
int View__getMeasuredWidth_IMPL_23007(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getMeasuredWidthAndState(View* __this);
int View__getMeasuredWidthAndState_IMPL_23008(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getMinimumHeight(View* __this);
int View__getMinimumHeight_IMPL_23220(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getMinimumWidth(View* __this);
int View__getMinimumWidth_IMPL_23222(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getNextFocusDownId(View* __this);
int View__getNextFocusDownId_IMPL_22882(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getNextFocusForwardId(View* __this);
int View__getNextFocusForwardId_IMPL_22884(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getNextFocusLeftId(View* __this);
int View__getNextFocusLeftId_IMPL_22876(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getNextFocusRightId(View* __this);
int View__getNextFocusRightId_IMPL_22878(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getNextFocusUpId(View* __this);
int View__getNextFocusUpId_IMPL_22880(::uStatic* __this, bool arg0_, jobject arg1_);
::uObject* View__getOnFocusChangeListener(View* __this);
::uObject* View__getOnFocusChangeListener_IMPL_22833(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::android::view::ViewOverlay* View__getOverlay(View* __this);
::uObject* View__getOverlay_IMPL_23157(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getOverScrollMode(View* __this);
int View__getOverScrollMode_IMPL_23247(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getPaddingBottom(View* __this);
int View__getPaddingBottom_IMPL_23183(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getPaddingEnd(View* __this);
int View__getPaddingEnd_IMPL_23187(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getPaddingLeft(View* __this);
int View__getPaddingLeft_IMPL_23184(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getPaddingRight(View* __this);
int View__getPaddingRight_IMPL_23186(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getPaddingStart(View* __this);
int View__getPaddingStart_IMPL_23185(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getPaddingTop(View* __this);
int View__getPaddingTop_IMPL_23182(::uStatic* __this, bool arg0_, jobject arg1_);
::uObject* View__getParent(View* __this);
::uObject* View__getParent_IMPL_22999(::uStatic* __this, bool arg0_, jobject arg1_);
::uObject* View__getParentForAccessibility(View* __this);
::uObject* View__getParentForAccessibility_IMPL_22942(::uStatic* __this, bool arg0_, jobject arg1_);
float View__getPivotX(View* __this);
float View__getPivotX_IMPL_23025(::uStatic* __this, bool arg0_, jobject arg1_);
float View__getPivotY(View* __this);
float View__getPivotY_IMPL_23027(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::android::content::res::Resources* View__getResources(View* __this);
::uObject* View__getResources_IMPL_23163(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getRight(View* __this);
int View__getRight_IMPL_23039(::uStatic* __this, bool arg0_, jobject arg1_);
float View__getRightFadingEdgeStrength(View* __this);
float View__getRightFadingEdgeStrength_IMPL_23087(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getRightPaddingOffset(View* __this);
int View__getRightPaddingOffset_IMPL_23150(::uStatic* __this, bool arg0_, jobject arg1_);
View* View__getRootView(View* __this);
::uObject* View__getRootView_IMPL_23196(::uStatic* __this, bool arg0_, jobject arg1_);
float View__getRotation(View* __this);
float View__getRotation_IMPL_23015(::uStatic* __this, bool arg0_, jobject arg1_);
float View__getRotationX(View* __this);
float View__getRotationX_IMPL_23019(::uStatic* __this, bool arg0_, jobject arg1_);
float View__getRotationY(View* __this);
float View__getRotationY_IMPL_23017(::uStatic* __this, bool arg0_, jobject arg1_);
float View__getScaleX(View* __this);
float View__getScaleX_IMPL_23021(::uStatic* __this, bool arg0_, jobject arg1_);
float View__getScaleY(View* __this);
float View__getScaleY_IMPL_23023(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getScrollBarDefaultDelayBeforeFade(View* __this);
int View__getScrollBarDefaultDelayBeforeFade_IMPL_23094(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getScrollBarFadeDuration(View* __this);
int View__getScrollBarFadeDuration_IMPL_23096(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getScrollBarSize(View* __this);
int View__getScrollBarSize_IMPL_23098(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getScrollBarStyle(View* __this);
int View__getScrollBarStyle_IMPL_23101(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getScrollX(View* __this);
int View__getScrollX_IMPL_23002(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getScrollY(View* __this);
int View__getScrollY_IMPL_23003(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getSolidColor(View* __this);
int View__getSolidColor_IMPL_23158(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getSuggestedMinimumHeight(View* __this);
int View__getSuggestedMinimumHeight_IMPL_23218(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getSuggestedMinimumWidth(View* __this);
int View__getSuggestedMinimumWidth_IMPL_23219(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getSystemUiVisibility(View* __this);
int View__getSystemUiVisibility_IMPL_23235(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::java::lang::Object* View__getTag(View* __this);
::app::Android::java::lang::Object* View__getTag_1(View* __this, int arg0);
::uObject* View__getTag_IMPL_23203(::uStatic* __this, bool arg0_, jobject arg1_);
::uObject* View__getTag_IMPL_23205(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
int View__getTextAlignment(View* __this);
int View__getTextAlignment_IMPL_23254(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getTextDirection(View* __this);
int View__getTextDirection_IMPL_23250(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getTop(View* __this);
int View__getTop_IMPL_23032(::uStatic* __this, bool arg0_, jobject arg1_);
float View__getTopFadingEdgeStrength(View* __this);
float View__getTopFadingEdgeStrength_IMPL_23084(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getTopPaddingOffset(View* __this);
int View__getTopPaddingOffset_IMPL_23151(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::java::util::ArrayList* View__getTouchables(View* __this);
::uObject* View__getTouchables_IMPL_22932(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::android::view::TouchDelegate* View__getTouchDelegate(View* __this);
::uObject* View__getTouchDelegate_IMPL_22994(::uStatic* __this, bool arg0_, jobject arg1_);
float View__getTranslationX(View* __this);
float View__getTranslationX_IMPL_23045(::uStatic* __this, bool arg0_, jobject arg1_);
float View__getTranslationY(View* __this);
float View__getTranslationY_IMPL_23047(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getVerticalFadingEdgeLength(View* __this);
int View__getVerticalFadingEdgeLength_IMPL_22820(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getVerticalScrollbarPosition(View* __this);
int View__getVerticalScrollbarPosition_IMPL_22827(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getVerticalScrollbarWidth(View* __this);
int View__getVerticalScrollbarWidth_IMPL_22823(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::android::view::ViewTreeObserver* View__getViewTreeObserver(View* __this);
::uObject* View__getViewTreeObserver_IMPL_23195(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getVisibility(View* __this);
int View__getVisibility_IMPL_22891(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getWidth(View* __this);
int View__getWidth_IMPL_23004(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getWindowAttachCount(View* __this);
int View__getWindowAttachCount_IMPL_23118(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::android::view::WindowId* View__getWindowId(View* __this);
::uObject* View__getWindowId_IMPL_23120(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getWindowSystemUiVisibility(View* __this);
int View__getWindowSystemUiVisibility_IMPL_23236(::uStatic* __this, bool arg0_, jobject arg1_);
::uObject* View__getWindowToken(View* __this);
::uObject* View__getWindowToken_IMPL_23119(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getWindowVisibility(View* __this);
int View__getWindowVisibility_IMPL_22967(::uStatic* __this, bool arg0_, jobject arg1_);
void View__getWindowVisibleDisplayFrame(View* __this, ::app::Android::android::graphics::Rect* arg0);
void View__getWindowVisibleDisplayFrame_IMPL_22968(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
float View__getX(View* __this);
float View__getX_IMPL_23041(::uStatic* __this, bool arg0_, jobject arg1_);
float View__getY(View* __this);
float View__getY_IMPL_23043(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__hasFocus(View* __this);
bool View__hasFocus_IMPL_22851(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__hasFocusable(View* __this);
bool View__hasFocusable_IMPL_22852(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__hasOnClickListeners(View* __this);
bool View__hasOnClickListeners_IMPL_22835(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__hasOverlappingRendering(View* __this);
bool View__hasOverlappingRendering_IMPL_23030(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__hasTransientState(View* __this);
bool View__hasTransientState_IMPL_22903(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__hasWindowFocus(View* __this);
bool View__hasWindowFocus_IMPL_22960(::uStatic* __this, bool arg0_, jobject arg1_);
View* View__inflate(::uStatic* __this, ::app::Android::android::content::Context* arg0, int arg1, ::app::Android::android::view::ViewGroup* arg2);
::uObject* View__inflate_IMPL_23244(::uStatic* __this, ::uObject* arg0_, int arg1_, ::uObject* arg2_);
void View__initializeFadingEdge(View* __this, ::app::Android::android::content::res::TypedArray* arg0);
void View__initializeFadingEdge_IMPL_22819(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__initializeScrollbars(View* __this, ::app::Android::android::content::res::TypedArray* arg0);
void View__initializeScrollbars_IMPL_22825(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__invalidate(View* __this);
void View__invalidate_1(View* __this, int arg0, int arg1, int arg2, int arg3);
void View__invalidate_2(View* __this, ::app::Android::android::graphics::Rect* arg0);
void View__invalidate_IMPL_23063(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__invalidate_IMPL_23064(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
void View__invalidate_IMPL_23065(::uStatic* __this, bool arg0_, jobject arg1_);
void View__invalidateDrawable(View* __this, ::app::Android::android::graphics::drawable::Drawable* arg0);
void View__invalidateDrawable_IMPL_23164(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool View__isActivated(View* __this);
bool View__isActivated_IMPL_23194(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__isAttachedToWindow(View* __this);
bool View__isAttachedToWindow_IMPL_22905(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__isClickable(View* __this);
bool View__isClickable_IMPL_22911(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__isDirty(View* __this);
bool View__isDirty_IMPL_23035(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__isDrawingCacheEnabled(View* __this);
bool View__isDrawingCacheEnabled_IMPL_23139(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__isDuplicateParentStateEnabled(View* __this);
bool View__isDuplicateParentStateEnabled_IMPL_23133(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__isEnabled(View* __this);
bool View__isEnabled_IMPL_22893(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__isFocusable(View* __this);
bool View__isFocusable_IMPL_22924(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__isFocusableInTouchMode(View* __this);
bool View__isFocusableInTouchMode_IMPL_22925(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__isFocused(View* __this);
bool View__isFocused_IMPL_22868(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__isHapticFeedbackEnabled(View* __this);
bool View__isHapticFeedbackEnabled_IMPL_22900(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__isHardwareAccelerated(View* __this);
bool View__isHardwareAccelerated_IMPL_23153(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__isHorizontalFadingEdgeEnabled(View* __this);
bool View__isHorizontalFadingEdgeEnabled_IMPL_23080(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__isHorizontalScrollBarEnabled(View* __this);
bool View__isHorizontalScrollBarEnabled_IMPL_23088(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__isHovered(View* __this);
bool View__isHovered_IMPL_22988(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__isInEditMode(View* __this);
bool View__isInEditMode_IMPL_23147(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__isInLayout(View* __this);
bool View__isInLayout_IMPL_23208(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__isInTouchMode(View* __this);
bool View__isInTouchMode_IMPL_22971(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__isLaidOut(View* __this);
bool View__isLaidOut_IMPL_22906(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__isLayoutDirectionResolved(View* __this);
bool View__isLayoutDirectionResolved_IMPL_23116(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__isLayoutRequested(View* __this);
bool View__isLayoutRequested_IMPL_23159(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__isLongClickable(View* __this);
bool View__isLongClickable_IMPL_22913(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__isOpaque(View* __this);
bool View__isOpaque_IMPL_23066(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__isPaddingOffsetRequired(View* __this);
bool View__isPaddingOffsetRequired_IMPL_23148(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__isPaddingRelative(View* __this);
bool View__isPaddingRelative_IMPL_23188(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__isPressed(View* __this);
bool View__isPressed_IMPL_22917(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__isSaveEnabled(View* __this);
bool View__isSaveEnabled_IMPL_22918(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__isSaveFromParentEnabled(View* __this);
bool View__isSaveFromParentEnabled_IMPL_22922(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__isScrollbarFadingEnabled(View* __this);
bool View__isScrollbarFadingEnabled_IMPL_23093(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__isScrollContainer(View* __this);
bool View__isScrollContainer_IMPL_22870(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__isSelected(View* __this);
bool View__isSelected_IMPL_23191(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__isShown(View* __this);
bool View__isShown_IMPL_22886(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__isSoundEffectsEnabled(View* __this);
bool View__isSoundEffectsEnabled_IMPL_22898(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__isTextAlignmentResolved(View* __this);
bool View__isTextAlignmentResolved_IMPL_23256(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__isTextDirectionResolved(View* __this);
bool View__isTextDirectionResolved_IMPL_23252(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__isVerticalFadingEdgeEnabled(View* __this);
bool View__isVerticalFadingEdgeEnabled_IMPL_23082(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__isVerticalScrollBarEnabled(View* __this);
bool View__isVerticalScrollBarEnabled_IMPL_23090(::uStatic* __this, bool arg0_, jobject arg1_);
void View__j_draw(View* __this, ::app::Android::android::graphics::Canvas* arg0);
void View__j_draw_IMPL_23156(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__jumpDrawablesToCurrentState(View* __this);
void View__jumpDrawablesToCurrentState_IMPL_23174(::uStatic* __this, bool arg0_, jobject arg1_);
void View__layout(View* __this, int arg0, int arg1, int arg2, int arg3);
void View__layout_IMPL_23160(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
void View__measure(View* __this, int arg0, int arg1);
void View__measure_IMPL_23211(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_);
::app::Android::Runtime::IntArray* View__mergeDrawableStates(::uStatic* __this, ::app::Android::Runtime::IntArray* arg0, ::app::Android::Runtime::IntArray* arg1);
::uObject* View__mergeDrawableStates_IMPL_23173(::uStatic* __this, ::uObject* arg0_, ::uObject* arg1_);
View* View__New_5(::uStatic* __this, ::app::Android::android::content::Context* arg0);
View* View__New_6(::uStatic* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1);
View* View__New_7(::uStatic* __this, ::app::Android::android::content::Context* arg0, ::uObject* arg1, int arg2);
View* View__New_8(::uStatic* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
void View__offsetLeftAndRight(View* __this, int arg0);
void View__offsetLeftAndRight_IMPL_23055(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__offsetTopAndBottom(View* __this, int arg0);
void View__offsetTopAndBottom_IMPL_23054(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__onAnimationEnd(View* __this);
void View__onAnimationEnd_IMPL_23229(::uStatic* __this, bool arg0_, jobject arg1_);
void View__onAnimationStart(View* __this);
void View__onAnimationStart_IMPL_23228(::uStatic* __this, bool arg0_, jobject arg1_);
void View__onAttachedToWindow(View* __this);
void View__onAttachedToWindow_IMPL_23112(::uStatic* __this, bool arg0_, jobject arg1_);
void View__onCancelPendingInputEvents(View* __this);
void View__onCancelPendingInputEvents_IMPL_23124(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__onCheckIsTextEditor(View* __this);
bool View__onCheckIsTextEditor_IMPL_22979(::uStatic* __this, bool arg0_, jobject arg1_);
void View__onConfigurationChanged(View* __this, ::app::Android::android::content::res::Configuration* arg0);
void View__onConfigurationChanged_IMPL_22970(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__onCreateContextMenu(View* __this, ::uObject* arg0);
void View__onCreateContextMenu_IMPL_22984(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
::app::Android::Runtime::IntArray* View__onCreateDrawableState(View* __this, int arg0);
::uObject* View__onCreateDrawableState_IMPL_23172(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
::uObject* View__onCreateInputConnection(View* __this, ::app::Android::android::view::inputmethod::EditorInfo* arg0);
::uObject* View__onCreateInputConnection_IMPL_22980(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__onDetachedFromWindow(View* __this);
void View__onDetachedFromWindow_IMPL_23117(::uStatic* __this, bool arg0_, jobject arg1_);
void View__onDisplayHint(View* __this, int arg0);
void View__onDisplayHint_IMPL_22964(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
bool View__onDragEvent(View* __this, ::app::Android::android::view::DragEvent* arg0);
bool View__onDragEvent_IMPL_23242(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__onDraw(View* __this, ::app::Android::android::graphics::Canvas* arg0);
void View__onDraw_IMPL_23111(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__onDrawScrollBars(View* __this, ::app::Android::android::graphics::Canvas* arg0);
void View__onDrawScrollBars_IMPL_23110(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool View__onFilterTouchEventForSecurity(View* __this, ::app::Android::android::view::MotionEvent* arg0);
bool View__onFilterTouchEventForSecurity_IMPL_22952(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__onFinishInflate(View* __this);
void View__onFinishInflate_IMPL_23162(::uStatic* __this, bool arg0_, jobject arg1_);
void View__onFinishTemporaryDetach(View* __this);
void View__onFinishTemporaryDetach_IMPL_22946(::uStatic* __this, bool arg0_, jobject arg1_);
void View__onFocusChanged(View* __this, bool arg0, int arg1, ::app::Android::android::graphics::Rect* arg2);
void View__onFocusChanged_IMPL_22853(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_, int arg3_, ::uObject* arg4_);
bool View__onGenericMotionEvent(View* __this, ::app::Android::android::view::MotionEvent* arg0);
bool View__onGenericMotionEvent_IMPL_22986(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__onHoverChanged(View* __this, bool arg0);
void View__onHoverChanged_IMPL_22990(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
bool View__onHoverEvent(View* __this, ::app::Android::android::view::MotionEvent* arg0);
bool View__onHoverEvent_IMPL_22987(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__onInitializeAccessibilityEvent(View* __this, ::app::Android::android::view::accessibility::AccessibilityEvent* arg0);
void View__onInitializeAccessibilityEvent_IMPL_22859(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__onInitializeAccessibilityNodeInfo(View* __this, ::app::Android::android::view::accessibility::AccessibilityNodeInfo* arg0);
void View__onInitializeAccessibilityNodeInfo_IMPL_22861(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool View__onKeyDown(View* __this, int arg0, ::app::Android::android::view::KeyEvent* arg1);
bool View__onKeyDown_IMPL_22974(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_);
bool View__onKeyLongPress(View* __this, int arg0, ::app::Android::android::view::KeyEvent* arg1);
bool View__onKeyLongPress_IMPL_22975(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_);
bool View__onKeyMultiple(View* __this, int arg0, int arg1, ::app::Android::android::view::KeyEvent* arg2);
bool View__onKeyMultiple_IMPL_22977(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, ::uObject* arg4_);
bool View__onKeyPreIme(View* __this, int arg0, ::app::Android::android::view::KeyEvent* arg1);
bool View__onKeyPreIme_IMPL_22973(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_);
bool View__onKeyShortcut(View* __this, int arg0, ::app::Android::android::view::KeyEvent* arg1);
bool View__onKeyShortcut_IMPL_22978(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_);
bool View__onKeyUp(View* __this, int arg0, ::app::Android::android::view::KeyEvent* arg1);
bool View__onKeyUp_IMPL_22976(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_);
void View__onLayout(View* __this, bool arg0, int arg1, int arg2, int arg3, int arg4);
void View__onLayout_IMPL_23161(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_, int arg3_, int arg4_, int arg5_, int arg6_);
void View__onMeasure(View* __this, int arg0, int arg1);
void View__onMeasure_IMPL_23212(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_);
void View__onOverScrolled(View* __this, int arg0, int arg1, bool arg2, bool arg3);
void View__onOverScrolled_IMPL_23246(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, bool arg4_, bool arg5_);
void View__onPopulateAccessibilityEvent(View* __this, ::app::Android::android::view::accessibility::AccessibilityEvent* arg0);
void View__onPopulateAccessibilityEvent_IMPL_22858(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__onRestoreInstanceState(View* __this, ::uObject* arg0);
void View__onRestoreInstanceState_IMPL_23130(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__onRtlPropertiesChanged(View* __this, int arg0);
void View__onRtlPropertiesChanged_IMPL_23114(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
::uObject* View__onSaveInstanceState(View* __this);
::uObject* View__onSaveInstanceState_IMPL_23127(::uStatic* __this, bool arg0_, jobject arg1_);
void View__onScreenStateChanged(View* __this, int arg0);
void View__onScreenStateChanged_IMPL_23113(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__onScrollChanged(View* __this, int arg0, int arg1, int arg2, int arg3);
void View__onScrollChanged_IMPL_22996(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
bool View__onSetAlpha(View* __this, int arg0);
bool View__onSetAlpha_IMPL_23230(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__onSizeChanged(View* __this, int arg0, int arg1, int arg2, int arg3);
void View__onSizeChanged_IMPL_22997(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
void View__onStartTemporaryDetach(View* __this);
void View__onStartTemporaryDetach_IMPL_22945(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__onTouchEvent(View* __this, ::app::Android::android::view::MotionEvent* arg0);
bool View__onTouchEvent_IMPL_22991(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool View__onTrackballEvent(View* __this, ::app::Android::android::view::MotionEvent* arg0);
bool View__onTrackballEvent_IMPL_22985(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__onVisibilityChanged(View* __this, View* arg0, int arg1);
void View__onVisibilityChanged_IMPL_22962(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);
void View__onWindowFocusChanged(View* __this, bool arg0);
void View__onWindowFocusChanged_IMPL_22959(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void View__onWindowSystemUiVisibilityChanged(View* __this, int arg0);
void View__onWindowSystemUiVisibilityChanged_IMPL_23237(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__onWindowVisibilityChanged(View* __this, int arg0);
void View__onWindowVisibilityChanged_IMPL_22966(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
bool View__overScrollBy(View* __this, int arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, bool arg8);
bool View__overScrollBy_IMPL_23245(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_, int arg6_, int arg7_, int arg8_, int arg9_, bool arg10_);
bool View__performAccessibilityAction(View* __this, int arg0, ::app::Android::android::os::Bundle* arg1);
bool View__performAccessibilityAction_IMPL_22944(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_);
bool View__performClick(View* __this);
bool View__performClick_IMPL_22838(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__performHapticFeedback(View* __this, int arg0);
bool View__performHapticFeedback_1(View* __this, int arg0, int arg1);
bool View__performHapticFeedback_IMPL_23232(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
bool View__performHapticFeedback_IMPL_23233(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_);
bool View__performLongClick(View* __this);
bool View__performLongClick_IMPL_22840(::uStatic* __this, bool arg0_, jobject arg1_);
void View__playSoundEffect(View* __this, int arg0);
void View__playSoundEffect_IMPL_23231(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
bool View__post(View* __this, ::uObject* arg0);
bool View__post_IMPL_23068(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool View__postDelayed(View* __this, ::uObject* arg0, ::uLong arg1);
bool View__postDelayed_IMPL_23069(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uLong arg3_);
void View__postInvalidate(View* __this);
void View__postInvalidate_1(View* __this, int arg0, int arg1, int arg2, int arg3);
void View__postInvalidate_IMPL_23073(::uStatic* __this, bool arg0_, jobject arg1_);
void View__postInvalidate_IMPL_23074(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
void View__postInvalidateDelayed(View* __this, ::uLong arg0);
void View__postInvalidateDelayed_1(View* __this, ::uLong arg0, int arg1, int arg2, int arg3, int arg4);
void View__postInvalidateDelayed_IMPL_23075(::uStatic* __this, bool arg0_, jobject arg1_, ::uLong arg2_);
void View__postInvalidateDelayed_IMPL_23076(::uStatic* __this, bool arg0_, jobject arg1_, ::uLong arg2_, int arg3_, int arg4_, int arg5_, int arg6_);
void View__postInvalidateOnAnimation(View* __this);
void View__postInvalidateOnAnimation_1(View* __this, int arg0, int arg1, int arg2, int arg3);
void View__postInvalidateOnAnimation_IMPL_23077(::uStatic* __this, bool arg0_, jobject arg1_);
void View__postInvalidateOnAnimation_IMPL_23078(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
void View__postOnAnimation(View* __this, ::uObject* arg0);
void View__postOnAnimation_IMPL_23070(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__postOnAnimationDelayed(View* __this, ::uObject* arg0, ::uLong arg1);
void View__postOnAnimationDelayed_IMPL_23071(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uLong arg3_);
void View__refreshDrawableState(View* __this);
void View__refreshDrawableState_IMPL_23170(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__removeCallbacks(View* __this, ::uObject* arg0);
bool View__removeCallbacks_IMPL_23072(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__removeOnAttachStateChangeListener(View* __this, ::uObject* arg0);
void View__removeOnAttachStateChangeListener_IMPL_22832(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__removeOnLayoutChangeListener(View* __this, ::uObject* arg0);
void View__removeOnLayoutChangeListener_IMPL_22830(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__requestFitSystemWindows(View* __this);
void View__requestFitSystemWindows_IMPL_22890(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__requestFocus(View* __this);
bool View__requestFocus_1(View* __this, int arg0);
bool View__requestFocus_2(View* __this, int arg0, ::app::Android::android::graphics::Rect* arg1);
bool View__requestFocus_IMPL_22934(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__requestFocus_IMPL_22935(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
bool View__requestFocus_IMPL_22936(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_);
bool View__requestFocusFromTouch(View* __this);
bool View__requestFocusFromTouch_IMPL_22937(::uStatic* __this, bool arg0_, jobject arg1_);
void View__requestLayout(View* __this);
void View__requestLayout_IMPL_23209(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__requestRectangleOnScreen(View* __this, ::app::Android::android::graphics::Rect* arg0);
bool View__requestRectangleOnScreen_1(View* __this, ::app::Android::android::graphics::Rect* arg0, bool arg1);
bool View__requestRectangleOnScreen_IMPL_22848(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool View__requestRectangleOnScreen_IMPL_22849(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, bool arg3_);
int View__resolveSize(::uStatic* __this, int arg0, int arg1);
int View__resolveSize_IMPL_23215(::uStatic* __this, int arg0_, int arg1_);
int View__resolveSizeAndState(::uStatic* __this, int arg0, int arg1, int arg2);
int View__resolveSizeAndState_IMPL_23216(::uStatic* __this, int arg0_, int arg1_, int arg2_);
void View__restoreHierarchyState(View* __this, ::app::Android::android::util::SparseArray* arg0);
void View__restoreHierarchyState_IMPL_23128(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__saveHierarchyState(View* __this, ::app::Android::android::util::SparseArray* arg0);
void View__saveHierarchyState_IMPL_23125(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__scheduleDrawable(View* __this, ::app::Android::android::graphics::drawable::Drawable* arg0, ::uObject* arg1, ::uLong arg2);
void View__scheduleDrawable_IMPL_23165(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, ::uLong arg4_);
void View__scrollBy(View* __this, int arg0, int arg1);
void View__scrollBy_IMPL_23059(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_);
void View__scrollTo(View* __this, int arg0, int arg1);
void View__scrollTo_IMPL_23058(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_);
void View__sendAccessibilityEvent(View* __this, int arg0);
void View__sendAccessibilityEvent_IMPL_22854(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__sendAccessibilityEventUnchecked(View* __this, ::app::Android::android::view::accessibility::AccessibilityEvent* arg0);
void View__sendAccessibilityEventUnchecked_IMPL_22856(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__setAccessibilityDelegate(View* __this, ::app::Android::android::view::ViewDLRAccessibilityDelegate* arg0);
void View__setAccessibilityDelegate_IMPL_22862(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__setAccessibilityLiveRegion(View* __this, int arg0);
void View__setAccessibilityLiveRegion_IMPL_22939(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__setActivated(View* __this, bool arg0);
void View__setActivated_IMPL_23192(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void View__setAlpha(View* __this, float arg0);
void View__setAlpha_IMPL_23031(::uStatic* __this, bool arg0_, jobject arg1_, float arg2_);
void View__setAnimation(View* __this, ::app::Android::android::view::animation::Animation* arg0);
void View__setAnimation_IMPL_23227(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__setBackground(View* __this, ::app::Android::android::graphics::drawable::Drawable* arg0);
void View__setBackground_IMPL_23177(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__setBackgroundColor(View* __this, int arg0);
void View__setBackgroundColor_IMPL_23175(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__setBackgroundDrawable(View* __this, ::app::Android::android::graphics::drawable::Drawable* arg0);
void View__setBackgroundDrawable_IMPL_23178(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__setBackgroundResource(View* __this, int arg0);
void View__setBackgroundResource_IMPL_23176(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__setBottom(View* __this, int arg0);
void View__setBottom_IMPL_23036(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__setCameraDistance(View* __this, float arg0);
void View__setCameraDistance_IMPL_23014(::uStatic* __this, bool arg0_, jobject arg1_, float arg2_);
void View__setClickable(View* __this, bool arg0);
void View__setClickable_IMPL_22912(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void View__setClipBounds(View* __this, ::app::Android::android::graphics::Rect* arg0);
void View__setClipBounds_IMPL_23154(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__setContentDescription(View* __this, ::uObject* arg0);
void View__setContentDescription_IMPL_22865(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__setDrawingCacheBackgroundColor(View* __this, int arg0);
void View__setDrawingCacheBackgroundColor_IMPL_23143(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__setDrawingCacheEnabled(View* __this, bool arg0);
void View__setDrawingCacheEnabled_IMPL_23138(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void View__setDrawingCacheQuality(View* __this, int arg0);
void View__setDrawingCacheQuality_IMPL_22873(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__setDuplicateParentStateEnabled(View* __this, bool arg0);
void View__setDuplicateParentStateEnabled_IMPL_23132(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void View__setEnabled(View* __this, bool arg0);
void View__setEnabled_IMPL_22894(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void View__setFadingEdgeLength(View* __this, int arg0);
void View__setFadingEdgeLength_IMPL_22821(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__setFilterTouchesWhenObscured(View* __this, bool arg0);
void View__setFilterTouchesWhenObscured_IMPL_22921(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void View__setFitsSystemWindows(View* __this, bool arg0);
void View__setFitsSystemWindows_IMPL_22888(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void View__setFocusable(View* __this, bool arg0);
void View__setFocusable_IMPL_22895(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void View__setFocusableInTouchMode(View* __this, bool arg0);
void View__setFocusableInTouchMode_IMPL_22896(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void View__setHapticFeedbackEnabled(View* __this, bool arg0);
void View__setHapticFeedbackEnabled_IMPL_22899(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void View__setHasTransientState(View* __this, bool arg0);
void View__setHasTransientState_IMPL_22904(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void View__setHorizontalFadingEdgeEnabled(View* __this, bool arg0);
void View__setHorizontalFadingEdgeEnabled_IMPL_23081(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void View__setHorizontalScrollBarEnabled(View* __this, bool arg0);
void View__setHorizontalScrollBarEnabled_IMPL_23089(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void View__setHovered(View* __this, bool arg0);
void View__setHovered_IMPL_22989(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void View__setId(View* __this, int arg0);
void View__setId_IMPL_23201(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__setImportantForAccessibility(View* __this, int arg0);
void View__setImportantForAccessibility_IMPL_22941(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__setKeepScreenOn(View* __this, bool arg0);
void View__setKeepScreenOn_IMPL_22875(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void View__setLabelFor(View* __this, int arg0);
void View__setLabelFor_IMPL_22867(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__setLayerPaint(View* __this, ::app::Android::android::graphics::Paint* arg0);
void View__setLayerPaint_IMPL_23135(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__setLayerType(View* __this, int arg0, ::app::Android::android::graphics::Paint* arg1);
void View__setLayerType_IMPL_23134(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_);
void View__setLayoutDirection(View* __this, int arg0);
void View__setLayoutDirection_IMPL_22901(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__setLayoutParams(View* __this, ::app::Android::android::view::ViewGroupDLRLayoutParams* arg0);
void View__setLayoutParams_IMPL_23057(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__setLeft(View* __this, int arg0);
void View__setLeft_IMPL_23038(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__setLongClickable(View* __this, bool arg0);
void View__setLongClickable_IMPL_22914(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void View__setMeasuredDimension(View* __this, int arg0, int arg1);
void View__setMeasuredDimension_IMPL_23213(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_);
void View__setMinimumHeight(View* __this, int arg0);
void View__setMinimumHeight_IMPL_23221(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__setMinimumWidth(View* __this, int arg0);
void View__setMinimumWidth_IMPL_23223(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__setNextFocusDownId(View* __this, int arg0);
void View__setNextFocusDownId_IMPL_22883(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__setNextFocusForwardId(View* __this, int arg0);
void View__setNextFocusForwardId_IMPL_22885(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__setNextFocusLeftId(View* __this, int arg0);
void View__setNextFocusLeftId_IMPL_22877(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__setNextFocusRightId(View* __this, int arg0);
void View__setNextFocusRightId_IMPL_22879(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__setNextFocusUpId(View* __this, int arg0);
void View__setNextFocusUpId_IMPL_22881(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__setOnClickListener(View* __this, ::uObject* arg0);
void View__setOnClickListener_IMPL_22834(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__setOnCreateContextMenuListener(View* __this, ::uObject* arg0);
void View__setOnCreateContextMenuListener_IMPL_22837(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__setOnDragListener(View* __this, ::uObject* arg0);
void View__setOnDragListener_IMPL_22847(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__setOnFocusChangeListener(View* __this, ::uObject* arg0);
void View__setOnFocusChangeListener_IMPL_22828(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__setOnGenericMotionListener(View* __this, ::uObject* arg0);
void View__setOnGenericMotionListener_IMPL_22845(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__setOnHoverListener(View* __this, ::uObject* arg0);
void View__setOnHoverListener_IMPL_22846(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__setOnKeyListener(View* __this, ::uObject* arg0);
void View__setOnKeyListener_IMPL_22843(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__setOnLongClickListener(View* __this, ::uObject* arg0);
void View__setOnLongClickListener_IMPL_22836(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__setOnSystemUiVisibilityChangeListener(View* __this, ::uObject* arg0);
void View__setOnSystemUiVisibilityChangeListener_IMPL_23239(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__setOnTouchListener(View* __this, ::uObject* arg0);
void View__setOnTouchListener_IMPL_22844(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__setOverScrollMode(View* __this, int arg0);
void View__setOverScrollMode_IMPL_23248(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__setPadding(View* __this, int arg0, int arg1, int arg2, int arg3);
void View__setPadding_IMPL_23180(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
void View__setPaddingRelative(View* __this, int arg0, int arg1, int arg2, int arg3);
void View__setPaddingRelative_IMPL_23181(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
void View__setPivotX(View* __this, float arg0);
void View__setPivotX_IMPL_23026(::uStatic* __this, bool arg0_, jobject arg1_, float arg2_);
void View__setPivotY(View* __this, float arg0);
void View__setPivotY_IMPL_23028(::uStatic* __this, bool arg0_, jobject arg1_, float arg2_);
void View__setPressed(View* __this, bool arg0);
void View__setPressed_IMPL_22915(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void View__setRight(View* __this, int arg0);
void View__setRight_IMPL_23040(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__setRotation(View* __this, float arg0);
void View__setRotation_IMPL_23016(::uStatic* __this, bool arg0_, jobject arg1_, float arg2_);
void View__setRotationX(View* __this, float arg0);
void View__setRotationX_IMPL_23020(::uStatic* __this, bool arg0_, jobject arg1_, float arg2_);
void View__setRotationY(View* __this, float arg0);
void View__setRotationY_IMPL_23018(::uStatic* __this, bool arg0_, jobject arg1_, float arg2_);
void View__setSaveEnabled(View* __this, bool arg0);
void View__setSaveEnabled_IMPL_22919(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void View__setSaveFromParentEnabled(View* __this, bool arg0);
void View__setSaveFromParentEnabled_IMPL_22923(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void View__setScaleX(View* __this, float arg0);
void View__setScaleX_IMPL_23022(::uStatic* __this, bool arg0_, jobject arg1_, float arg2_);
void View__setScaleY(View* __this, float arg0);
void View__setScaleY_IMPL_23024(::uStatic* __this, bool arg0_, jobject arg1_, float arg2_);
void View__setScrollBarDefaultDelayBeforeFade(View* __this, int arg0);
void View__setScrollBarDefaultDelayBeforeFade_IMPL_23095(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__setScrollBarFadeDuration(View* __this, int arg0);
void View__setScrollBarFadeDuration_IMPL_23097(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__setScrollbarFadingEnabled(View* __this, bool arg0);
void View__setScrollbarFadingEnabled_IMPL_23092(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void View__setScrollBarSize(View* __this, int arg0);
void View__setScrollBarSize_IMPL_23099(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__setScrollBarStyle(View* __this, int arg0);
void View__setScrollBarStyle_IMPL_23100(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__setScrollContainer(View* __this, bool arg0);
void View__setScrollContainer_IMPL_22871(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void View__setScrollX(View* __this, int arg0);
void View__setScrollX_IMPL_23000(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__setScrollY(View* __this, int arg0);
void View__setScrollY_IMPL_23001(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__setSelected(View* __this, bool arg0);
void View__setSelected_IMPL_23189(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void View__setSoundEffectsEnabled(View* __this, bool arg0);
void View__setSoundEffectsEnabled_IMPL_22897(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void View__setSystemUiVisibility(View* __this, int arg0);
void View__setSystemUiVisibility_IMPL_23234(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__setTag(View* __this, int arg0, ::app::Android::java::lang::Object* arg1);
void View__setTag_1(View* __this, ::app::Android::java::lang::Object* arg0);
void View__setTag_IMPL_23204(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__setTag_IMPL_23206(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_);
void View__setTextAlignment(View* __this, int arg0);
void View__setTextAlignment_IMPL_23253(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__setTextDirection(View* __this, int arg0);
void View__setTextDirection_IMPL_23249(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__setTop(View* __this, int arg0);
void View__setTop_IMPL_23033(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__setTouchDelegate(View* __this, ::app::Android::android::view::TouchDelegate* arg0);
void View__setTouchDelegate_IMPL_22993(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__setTranslationX(View* __this, float arg0);
void View__setTranslationX_IMPL_23046(::uStatic* __this, bool arg0_, jobject arg1_, float arg2_);
void View__setTranslationY(View* __this, float arg0);
void View__setTranslationY_IMPL_23048(::uStatic* __this, bool arg0_, jobject arg1_, float arg2_);
void View__setVerticalFadingEdgeEnabled(View* __this, bool arg0);
void View__setVerticalFadingEdgeEnabled_IMPL_23083(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void View__setVerticalScrollBarEnabled(View* __this, bool arg0);
void View__setVerticalScrollBarEnabled_IMPL_23091(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void View__setVerticalScrollbarPosition(View* __this, int arg0);
void View__setVerticalScrollbarPosition_IMPL_22826(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__setVisibility(View* __this, int arg0);
void View__setVisibility_IMPL_22892(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__setWillNotCacheDrawing(View* __this, bool arg0);
void View__setWillNotCacheDrawing_IMPL_22909(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void View__setWillNotDraw(View* __this, bool arg0);
void View__setWillNotDraw_IMPL_22907(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void View__setX(View* __this, float arg0);
void View__setX_IMPL_23042(::uStatic* __this, bool arg0_, jobject arg1_, float arg2_);
void View__setY(View* __this, float arg0);
void View__setY_IMPL_23044(::uStatic* __this, bool arg0_, jobject arg1_, float arg2_);
bool View__showContextMenu(View* __this);
bool View__showContextMenu_IMPL_22841(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::android::view::ActionMode* View__startActionMode(View* __this, ::uObject* arg0);
::uObject* View__startActionMode_IMPL_22842(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__startAnimation(View* __this, ::app::Android::android::view::animation::Animation* arg0);
void View__startAnimation_IMPL_23225(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool View__startDrag(View* __this, ::app::Android::android::content::ClipData* arg0, ::app::Android::android::view::ViewDLRDragShadowBuilder* arg1, ::app::Android::java::lang::Object* arg2, int arg3);
bool View__startDrag_IMPL_23241(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, ::uObject* arg4_, int arg5_);
::app::Android::java::lang::String* View__toString(View* __this);
::uObject* View__toString_IMPL_22818(::uStatic* __this, bool arg0_, jobject arg1_);
void View__unscheduleDrawable(View* __this, ::app::Android::android::graphics::drawable::Drawable* arg0);
void View__unscheduleDrawable_1(View* __this, ::app::Android::android::graphics::drawable::Drawable* arg0, ::uObject* arg1);
void View__unscheduleDrawable_IMPL_23166(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_);
void View__unscheduleDrawable_IMPL_23167(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool View__verifyDrawable(View* __this, ::app::Android::android::graphics::drawable::Drawable* arg0);
bool View__verifyDrawable_IMPL_23168(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool View__willNotCacheDrawing(View* __this);
bool View__willNotCacheDrawing_IMPL_22910(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__willNotDraw(View* __this);
bool View__willNotDraw_IMPL_22908(::uStatic* __this, bool arg0_, jobject arg1_);

struct View : ::app::Android::java::lang::Object
{
    void _ObjInit_4(::app::Android::android::content::Context* arg0) { View___ObjInit_4(this, arg0); }
    void _ObjInit_5(::app::Android::android::content::Context* arg0, ::uObject* arg1) { View___ObjInit_5(this, arg0, arg1); }
    void _ObjInit_6(::app::Android::android::content::Context* arg0, ::uObject* arg1, int arg2) { View___ObjInit_6(this, arg0, arg1, arg2); }
    void _ObjInit_7(jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType) { View___ObjInit_7(this, obj, utype, hasFallbackClass, resolveType); }
    void addChildrenForAccessibility(::app::Android::java::util::ArrayList* arg0) { (((View__uType*)this->__obj_type)->__fp_addChildrenForAccessibility)(this, arg0); }
    void addFocusables(::app::Android::java::util::ArrayList* arg0, int arg1) { View__addFocusables(this, arg0, arg1); }
    void addFocusables_1(::app::Android::java::util::ArrayList* arg0, int arg1, int arg2) { (((View__uType*)this->__obj_type)->__fp_addFocusables_1)(this, arg0, arg1, arg2); }
    void addOnAttachStateChangeListener(::uObject* arg0) { View__addOnAttachStateChangeListener(this, arg0); }
    void addOnLayoutChangeListener(::uObject* arg0) { View__addOnLayoutChangeListener(this, arg0); }
    void addTouchables(::app::Android::java::util::ArrayList* arg0) { (((View__uType*)this->__obj_type)->__fp_addTouchables)(this, arg0); }
    ::app::Android::android::view::ViewPropertyAnimator* animate() { return View__animate(this); }
    void announceForAccessibility(::uObject* arg0) { View__announceForAccessibility(this, arg0); }
    bool awakenScrollBars() { return View__awakenScrollBars(this); }
    bool awakenScrollBars_1(int arg0) { return View__awakenScrollBars_1(this, arg0); }
    bool awakenScrollBars_2(int arg0, bool arg1) { return View__awakenScrollBars_2(this, arg0, arg1); }
    void bringToFront() { View__bringToFront(this); }
    void buildDrawingCache() { View__buildDrawingCache(this); }
    void buildDrawingCache_1(bool arg0) { View__buildDrawingCache_1(this, arg0); }
    void buildLayer() { (((View__uType*)this->__obj_type)->__fp_buildLayer)(this); }
    bool callOnClick() { return View__callOnClick(this); }
    void cancelLongPress() { (((View__uType*)this->__obj_type)->__fp_cancelLongPress)(this); }
    void cancelPendingInputEvents() { View__cancelPendingInputEvents(this); }
    bool canResolveLayoutDirection() { return View__canResolveLayoutDirection(this); }
    bool canResolveTextAlignment() { return View__canResolveTextAlignment(this); }
    bool canResolveTextDirection() { return View__canResolveTextDirection(this); }
    bool canScrollHorizontally(int arg0) { return View__canScrollHorizontally(this, arg0); }
    bool canScrollVertically(int arg0) { return View__canScrollVertically(this, arg0); }
    bool checkInputConnectionProxy(View* arg0) { return View__checkInputConnectionProxy(this, arg0); }
    void clearAnimation() { View__clearAnimation(this); }
    void clearFocus() { (((View__uType*)this->__obj_type)->__fp_clearFocus)(this); }
    int computeHorizontalScrollExtent() { return View__computeHorizontalScrollExtent(this); }
    int computeHorizontalScrollOffset() { return (((View__uType*)this->__obj_type)->__fp_computeHorizontalScrollOffset)(this); }
    int computeHorizontalScrollRange() { return (((View__uType*)this->__obj_type)->__fp_computeHorizontalScrollRange)(this); }
    void computeScroll() { (((View__uType*)this->__obj_type)->__fp_computeScroll)(this); }
    int computeVerticalScrollExtent() { return (((View__uType*)this->__obj_type)->__fp_computeVerticalScrollExtent)(this); }
    int computeVerticalScrollOffset() { return (((View__uType*)this->__obj_type)->__fp_computeVerticalScrollOffset)(this); }
    int computeVerticalScrollRange() { return (((View__uType*)this->__obj_type)->__fp_computeVerticalScrollRange)(this); }
    ::app::Android::android::view::accessibility::AccessibilityNodeInfo* createAccessibilityNodeInfo() { return View__createAccessibilityNodeInfo(this); }
    void createContextMenu(::uObject* arg0) { View__createContextMenu(this, arg0); }
    void destroyDrawingCache() { View__destroyDrawingCache(this); }
    void dispatchConfigurationChanged(::app::Android::android::content::res::Configuration* arg0) { (((View__uType*)this->__obj_type)->__fp_dispatchConfigurationChanged)(this, arg0); }
    void dispatchDisplayHint(int arg0) { (((View__uType*)this->__obj_type)->__fp_dispatchDisplayHint)(this, arg0); }
    bool dispatchDragEvent(::app::Android::android::view::DragEvent* arg0) { return (((View__uType*)this->__obj_type)->__fp_dispatchDragEvent)(this, arg0); }
    void dispatchDraw(::app::Android::android::graphics::Canvas* arg0) { (((View__uType*)this->__obj_type)->__fp_dispatchDraw)(this, arg0); }
    bool dispatchGenericFocusedEvent(::app::Android::android::view::MotionEvent* arg0) { return (((View__uType*)this->__obj_type)->__fp_dispatchGenericFocusedEvent)(this, arg0); }
    bool dispatchGenericMotionEvent(::app::Android::android::view::MotionEvent* arg0) { return View__dispatchGenericMotionEvent(this, arg0); }
    bool dispatchGenericPointerEvent(::app::Android::android::view::MotionEvent* arg0) { return (((View__uType*)this->__obj_type)->__fp_dispatchGenericPointerEvent)(this, arg0); }
    bool dispatchHoverEvent(::app::Android::android::view::MotionEvent* arg0) { return (((View__uType*)this->__obj_type)->__fp_dispatchHoverEvent)(this, arg0); }
    bool dispatchKeyEvent(::app::Android::android::view::KeyEvent* arg0) { return (((View__uType*)this->__obj_type)->__fp_dispatchKeyEvent)(this, arg0); }
    bool dispatchKeyEventPreIme(::app::Android::android::view::KeyEvent* arg0) { return (((View__uType*)this->__obj_type)->__fp_dispatchKeyEventPreIme)(this, arg0); }
    bool dispatchKeyShortcutEvent(::app::Android::android::view::KeyEvent* arg0) { return (((View__uType*)this->__obj_type)->__fp_dispatchKeyShortcutEvent)(this, arg0); }
    bool dispatchPopulateAccessibilityEvent(::app::Android::android::view::accessibility::AccessibilityEvent* arg0) { return (((View__uType*)this->__obj_type)->__fp_dispatchPopulateAccessibilityEvent)(this, arg0); }
    void dispatchRestoreInstanceState(::app::Android::android::util::SparseArray* arg0) { (((View__uType*)this->__obj_type)->__fp_dispatchRestoreInstanceState)(this, arg0); }
    void dispatchSaveInstanceState(::app::Android::android::util::SparseArray* arg0) { (((View__uType*)this->__obj_type)->__fp_dispatchSaveInstanceState)(this, arg0); }
    void dispatchSetActivated(bool arg0) { View__dispatchSetActivated(this, arg0); }
    void dispatchSetPressed(bool arg0) { (((View__uType*)this->__obj_type)->__fp_dispatchSetPressed)(this, arg0); }
    void dispatchSetSelected(bool arg0) { View__dispatchSetSelected(this, arg0); }
    void dispatchSystemUiVisibilityChanged(int arg0) { (((View__uType*)this->__obj_type)->__fp_dispatchSystemUiVisibilityChanged)(this, arg0); }
    bool dispatchTouchEvent(::app::Android::android::view::MotionEvent* arg0) { return (((View__uType*)this->__obj_type)->__fp_dispatchTouchEvent)(this, arg0); }
    bool dispatchTrackballEvent(::app::Android::android::view::MotionEvent* arg0) { return (((View__uType*)this->__obj_type)->__fp_dispatchTrackballEvent)(this, arg0); }
    bool dispatchUnhandledMove(View* arg0, int arg1) { return (((View__uType*)this->__obj_type)->__fp_dispatchUnhandledMove)(this, arg0, arg1); }
    void dispatchVisibilityChanged(View* arg0, int arg1) { (((View__uType*)this->__obj_type)->__fp_dispatchVisibilityChanged)(this, arg0, arg1); }
    void dispatchWindowFocusChanged(bool arg0) { (((View__uType*)this->__obj_type)->__fp_dispatchWindowFocusChanged)(this, arg0); }
    void dispatchWindowSystemUiVisiblityChanged(int arg0) { (((View__uType*)this->__obj_type)->__fp_dispatchWindowSystemUiVisiblityChanged)(this, arg0); }
    void dispatchWindowVisibilityChanged(int arg0) { (((View__uType*)this->__obj_type)->__fp_dispatchWindowVisibilityChanged)(this, arg0); }
    void drawableStateChanged() { (((View__uType*)this->__obj_type)->__fp_drawableStateChanged)(this); }
    View* findFocus() { return (((View__uType*)this->__obj_type)->__fp_findFocus)(this); }
    View* findViewById(int arg0) { return View__findViewById(this, arg0); }
    void findViewsWithText(::app::Android::java::util::ArrayList* arg0, ::uObject* arg1, int arg2) { (((View__uType*)this->__obj_type)->__fp_findViewsWithText)(this, arg0, arg1, arg2); }
    View* findViewWithTag(::app::Android::java::lang::Object* arg0) { return View__findViewWithTag(this, arg0); }
    bool fitSystemWindows(::app::Android::android::graphics::Rect* arg0) { return (((View__uType*)this->__obj_type)->__fp_fitSystemWindows)(this, arg0); }
    View* focusSearch(int arg0) { return View__focusSearch(this, arg0); }
    void forceLayout() { View__forceLayout(this); }
    int getAccessibilityLiveRegion() { return View__getAccessibilityLiveRegion(this); }
    ::app::Android::android::view::accessibility::AccessibilityNodeProvider* getAccessibilityNodeProvider() { return (((View__uType*)this->__obj_type)->__fp_getAccessibilityNodeProvider)(this); }
    float getAlpha() { return View__getAlpha(this); }
    ::app::Android::android::view::animation::Animation* getAnimation() { return View__getAnimation(this); }
    ::uObject* getApplicationWindowToken() { return View__getApplicationWindowToken(this); }
    ::app::Android::android::graphics::drawable::Drawable* getBackground() { return View__getBackground(this); }
    int getBaseline() { return (((View__uType*)this->__obj_type)->__fp_getBaseline)(this); }
    int getBottom() { return View__getBottom(this); }
    float getBottomFadingEdgeStrength() { return (((View__uType*)this->__obj_type)->__fp_getBottomFadingEdgeStrength)(this); }
    int getBottomPaddingOffset() { return (((View__uType*)this->__obj_type)->__fp_getBottomPaddingOffset)(this); }
    float getCameraDistance() { return View__getCameraDistance(this); }
    ::app::Android::android::graphics::Rect* getClipBounds() { return View__getClipBounds(this); }
    ::uObject* getContentDescription() { return View__getContentDescription(this); }
    ::app::Android::android::content::Context* getContext() { return View__getContext(this); }
    ::uObject* getContextMenuInfo() { return View__getContextMenuInfo(this); }
    ::app::Android::android::view::Display* getDisplay() { return View__getDisplay(this); }
    ::app::Android::Runtime::IntArray* getDrawableState() { return View__getDrawableState(this); }
    ::app::Android::android::graphics::Bitmap* getDrawingCache() { return View__getDrawingCache(this); }
    ::app::Android::android::graphics::Bitmap* getDrawingCache_1(bool arg0) { return View__getDrawingCache_1(this, arg0); }
    int getDrawingCacheBackgroundColor() { return View__getDrawingCacheBackgroundColor(this); }
    int getDrawingCacheQuality() { return View__getDrawingCacheQuality(this); }
    void getDrawingRect(::app::Android::android::graphics::Rect* arg0) { View__getDrawingRect(this, arg0); }
    ::uLong getDrawingTime() { return View__getDrawingTime(this); }
    bool getFilterTouchesWhenObscured() { return View__getFilterTouchesWhenObscured(this); }
    bool getFitsSystemWindows() { return View__getFitsSystemWindows(this); }
    ::app::Android::java::util::ArrayList* getFocusables(int arg0) { return View__getFocusables(this, arg0); }
    void getFocusedRect(::app::Android::android::graphics::Rect* arg0) { (((View__uType*)this->__obj_type)->__fp_getFocusedRect)(this, arg0); }
    bool getGlobalVisibleRect(::app::Android::android::graphics::Rect* arg0) { return View__getGlobalVisibleRect(this, arg0); }
    bool getGlobalVisibleRect_1(::app::Android::android::graphics::Rect* arg0, ::app::Android::android::graphics::Point* arg1) { return View__getGlobalVisibleRect_1(this, arg0, arg1); }
    ::app::Android::android::os::Handler* getHandler() { return View__getHandler(this); }
    int getHeight() { return View__getHeight(this); }
    void getHitRect(::app::Android::android::graphics::Rect* arg0) { View__getHitRect(this, arg0); }
    int getHorizontalFadingEdgeLength() { return View__getHorizontalFadingEdgeLength(this); }
    int getHorizontalScrollbarHeight() { return View__getHorizontalScrollbarHeight(this); }
    int getId() { return View__getId(this); }
    int getImportantForAccessibility() { return View__getImportantForAccessibility(this); }
    bool getKeepScreenOn() { return View__getKeepScreenOn(this); }
    ::app::Android::android::view::KeyEventDLRDispatcherState* getKeyDispatcherState() { return View__getKeyDispatcherState(this); }
    int getLabelFor() { return View__getLabelFor(this); }
    int getLayerType() { return (((View__uType*)this->__obj_type)->__fp_getLayerType)(this); }
    int getLayoutDirection() { return View__getLayoutDirection(this); }
    ::app::Android::android::view::ViewGroupDLRLayoutParams* getLayoutParams() { return View__getLayoutParams(this); }
    int getLeft() { return View__getLeft(this); }
    float getLeftFadingEdgeStrength() { return (((View__uType*)this->__obj_type)->__fp_getLeftFadingEdgeStrength)(this); }
    int getLeftPaddingOffset() { return (((View__uType*)this->__obj_type)->__fp_getLeftPaddingOffset)(this); }
    bool getLocalVisibleRect(::app::Android::android::graphics::Rect* arg0) { return View__getLocalVisibleRect(this, arg0); }
    void getLocationInWindow(::app::Android::Runtime::IntArray* arg0) { View__getLocationInWindow(this, arg0); }
    void getLocationOnScreen(::app::Android::Runtime::IntArray* arg0) { View__getLocationOnScreen(this, arg0); }
    ::app::Android::android::graphics::Matrix* getMatrix() { return View__getMatrix(this); }
    int getMeasuredHeight() { return View__getMeasuredHeight(this); }
    int getMeasuredHeightAndState() { return View__getMeasuredHeightAndState(this); }
    int getMeasuredState() { return View__getMeasuredState(this); }
    int getMeasuredWidth() { return View__getMeasuredWidth(this); }
    int getMeasuredWidthAndState() { return View__getMeasuredWidthAndState(this); }
    int getMinimumHeight() { return View__getMinimumHeight(this); }
    int getMinimumWidth() { return View__getMinimumWidth(this); }
    int getNextFocusDownId() { return View__getNextFocusDownId(this); }
    int getNextFocusForwardId() { return View__getNextFocusForwardId(this); }
    int getNextFocusLeftId() { return View__getNextFocusLeftId(this); }
    int getNextFocusRightId() { return View__getNextFocusRightId(this); }
    int getNextFocusUpId() { return View__getNextFocusUpId(this); }
    ::uObject* getOnFocusChangeListener() { return View__getOnFocusChangeListener(this); }
    ::app::Android::android::view::ViewOverlay* getOverlay() { return View__getOverlay(this); }
    int getOverScrollMode() { return View__getOverScrollMode(this); }
    int getPaddingBottom() { return View__getPaddingBottom(this); }
    int getPaddingEnd() { return View__getPaddingEnd(this); }
    int getPaddingLeft() { return View__getPaddingLeft(this); }
    int getPaddingRight() { return View__getPaddingRight(this); }
    int getPaddingStart() { return View__getPaddingStart(this); }
    int getPaddingTop() { return View__getPaddingTop(this); }
    ::uObject* getParent() { return View__getParent(this); }
    ::uObject* getParentForAccessibility() { return View__getParentForAccessibility(this); }
    float getPivotX() { return View__getPivotX(this); }
    float getPivotY() { return View__getPivotY(this); }
    ::app::Android::android::content::res::Resources* getResources() { return View__getResources(this); }
    int getRight() { return View__getRight(this); }
    float getRightFadingEdgeStrength() { return (((View__uType*)this->__obj_type)->__fp_getRightFadingEdgeStrength)(this); }
    int getRightPaddingOffset() { return (((View__uType*)this->__obj_type)->__fp_getRightPaddingOffset)(this); }
    View* getRootView() { return View__getRootView(this); }
    float getRotation() { return View__getRotation(this); }
    float getRotationX() { return View__getRotationX(this); }
    float getRotationY() { return View__getRotationY(this); }
    float getScaleX() { return View__getScaleX(this); }
    float getScaleY() { return View__getScaleY(this); }
    int getScrollBarDefaultDelayBeforeFade() { return View__getScrollBarDefaultDelayBeforeFade(this); }
    int getScrollBarFadeDuration() { return View__getScrollBarFadeDuration(this); }
    int getScrollBarSize() { return View__getScrollBarSize(this); }
    int getScrollBarStyle() { return View__getScrollBarStyle(this); }
    int getScrollX() { return View__getScrollX(this); }
    int getScrollY() { return View__getScrollY(this); }
    int getSolidColor() { return View__getSolidColor(this); }
    int getSuggestedMinimumHeight() { return View__getSuggestedMinimumHeight(this); }
    int getSuggestedMinimumWidth() { return View__getSuggestedMinimumWidth(this); }
    int getSystemUiVisibility() { return View__getSystemUiVisibility(this); }
    ::app::Android::java::lang::Object* getTag() { return View__getTag(this); }
    ::app::Android::java::lang::Object* getTag_1(int arg0) { return View__getTag_1(this, arg0); }
    int getTextAlignment() { return View__getTextAlignment(this); }
    int getTextDirection() { return View__getTextDirection(this); }
    int getTop() { return View__getTop(this); }
    float getTopFadingEdgeStrength() { return (((View__uType*)this->__obj_type)->__fp_getTopFadingEdgeStrength)(this); }
    int getTopPaddingOffset() { return (((View__uType*)this->__obj_type)->__fp_getTopPaddingOffset)(this); }
    ::app::Android::java::util::ArrayList* getTouchables() { return View__getTouchables(this); }
    ::app::Android::android::view::TouchDelegate* getTouchDelegate() { return View__getTouchDelegate(this); }
    float getTranslationX() { return View__getTranslationX(this); }
    float getTranslationY() { return View__getTranslationY(this); }
    int getVerticalFadingEdgeLength() { return View__getVerticalFadingEdgeLength(this); }
    int getVerticalScrollbarPosition() { return View__getVerticalScrollbarPosition(this); }
    int getVerticalScrollbarWidth() { return View__getVerticalScrollbarWidth(this); }
    ::app::Android::android::view::ViewTreeObserver* getViewTreeObserver() { return View__getViewTreeObserver(this); }
    int getVisibility() { return View__getVisibility(this); }
    int getWidth() { return View__getWidth(this); }
    int getWindowAttachCount() { return View__getWindowAttachCount(this); }
    ::app::Android::android::view::WindowId* getWindowId() { return View__getWindowId(this); }
    int getWindowSystemUiVisibility() { return View__getWindowSystemUiVisibility(this); }
    ::uObject* getWindowToken() { return View__getWindowToken(this); }
    int getWindowVisibility() { return View__getWindowVisibility(this); }
    void getWindowVisibleDisplayFrame(::app::Android::android::graphics::Rect* arg0) { View__getWindowVisibleDisplayFrame(this, arg0); }
    float getX() { return View__getX(this); }
    float getY() { return View__getY(this); }
    bool hasFocus() { return (((View__uType*)this->__obj_type)->__fp_hasFocus)(this); }
    bool hasFocusable() { return (((View__uType*)this->__obj_type)->__fp_hasFocusable)(this); }
    bool hasOnClickListeners() { return View__hasOnClickListeners(this); }
    bool hasOverlappingRendering() { return (((View__uType*)this->__obj_type)->__fp_hasOverlappingRendering)(this); }
    bool hasTransientState() { return (((View__uType*)this->__obj_type)->__fp_hasTransientState)(this); }
    bool hasWindowFocus() { return View__hasWindowFocus(this); }
    void initializeFadingEdge(::app::Android::android::content::res::TypedArray* arg0) { View__initializeFadingEdge(this, arg0); }
    void initializeScrollbars(::app::Android::android::content::res::TypedArray* arg0) { View__initializeScrollbars(this, arg0); }
    void invalidate() { View__invalidate(this); }
    void invalidate_1(int arg0, int arg1, int arg2, int arg3) { View__invalidate_1(this, arg0, arg1, arg2, arg3); }
    void invalidate_2(::app::Android::android::graphics::Rect* arg0) { View__invalidate_2(this, arg0); }
    void invalidateDrawable(::app::Android::android::graphics::drawable::Drawable* arg0) { (((View__uType*)this->__obj_type)->__fp_invalidateDrawable)(this, arg0); }
    bool isActivated() { return View__isActivated(this); }
    bool isAttachedToWindow() { return View__isAttachedToWindow(this); }
    bool isClickable() { return View__isClickable(this); }
    bool isDirty() { return View__isDirty(this); }
    bool isDrawingCacheEnabled() { return View__isDrawingCacheEnabled(this); }
    bool isDuplicateParentStateEnabled() { return View__isDuplicateParentStateEnabled(this); }
    bool isEnabled() { return View__isEnabled(this); }
    bool isFocusable() { return View__isFocusable(this); }
    bool isFocusableInTouchMode() { return View__isFocusableInTouchMode(this); }
    bool isFocused() { return View__isFocused(this); }
    bool isHapticFeedbackEnabled() { return View__isHapticFeedbackEnabled(this); }
    bool isHardwareAccelerated() { return View__isHardwareAccelerated(this); }
    bool isHorizontalFadingEdgeEnabled() { return View__isHorizontalFadingEdgeEnabled(this); }
    bool isHorizontalScrollBarEnabled() { return View__isHorizontalScrollBarEnabled(this); }
    bool isHovered() { return View__isHovered(this); }
    bool isInEditMode() { return View__isInEditMode(this); }
    bool isInLayout() { return View__isInLayout(this); }
    bool isInTouchMode() { return View__isInTouchMode(this); }
    bool isLaidOut() { return View__isLaidOut(this); }
    bool isLayoutDirectionResolved() { return View__isLayoutDirectionResolved(this); }
    bool isLayoutRequested() { return View__isLayoutRequested(this); }
    bool isLongClickable() { return View__isLongClickable(this); }
    bool isOpaque() { return (((View__uType*)this->__obj_type)->__fp_isOpaque)(this); }
    bool isPaddingOffsetRequired() { return (((View__uType*)this->__obj_type)->__fp_isPaddingOffsetRequired)(this); }
    bool isPaddingRelative() { return View__isPaddingRelative(this); }
    bool isPressed() { return View__isPressed(this); }
    bool isSaveEnabled() { return View__isSaveEnabled(this); }
    bool isSaveFromParentEnabled() { return View__isSaveFromParentEnabled(this); }
    bool isScrollbarFadingEnabled() { return View__isScrollbarFadingEnabled(this); }
    bool isScrollContainer() { return View__isScrollContainer(this); }
    bool isSelected() { return View__isSelected(this); }
    bool isShown() { return View__isShown(this); }
    bool isSoundEffectsEnabled() { return View__isSoundEffectsEnabled(this); }
    bool isTextAlignmentResolved() { return View__isTextAlignmentResolved(this); }
    bool isTextDirectionResolved() { return View__isTextDirectionResolved(this); }
    bool isVerticalFadingEdgeEnabled() { return View__isVerticalFadingEdgeEnabled(this); }
    bool isVerticalScrollBarEnabled() { return View__isVerticalScrollBarEnabled(this); }
    void j_draw(::app::Android::android::graphics::Canvas* arg0) { (((View__uType*)this->__obj_type)->__fp_j_draw)(this, arg0); }
    void jumpDrawablesToCurrentState() { (((View__uType*)this->__obj_type)->__fp_jumpDrawablesToCurrentState)(this); }
    void layout(int arg0, int arg1, int arg2, int arg3) { (((View__uType*)this->__obj_type)->__fp_layout)(this, arg0, arg1, arg2, arg3); }
    void measure(int arg0, int arg1) { View__measure(this, arg0, arg1); }
    void offsetLeftAndRight(int arg0) { View__offsetLeftAndRight(this, arg0); }
    void offsetTopAndBottom(int arg0) { View__offsetTopAndBottom(this, arg0); }
    void onAnimationEnd() { (((View__uType*)this->__obj_type)->__fp_onAnimationEnd)(this); }
    void onAnimationStart() { (((View__uType*)this->__obj_type)->__fp_onAnimationStart)(this); }
    void onAttachedToWindow() { (((View__uType*)this->__obj_type)->__fp_onAttachedToWindow)(this); }
    void onCancelPendingInputEvents() { View__onCancelPendingInputEvents(this); }
    bool onCheckIsTextEditor() { return (((View__uType*)this->__obj_type)->__fp_onCheckIsTextEditor)(this); }
    void onConfigurationChanged(::app::Android::android::content::res::Configuration* arg0) { (((View__uType*)this->__obj_type)->__fp_onConfigurationChanged)(this, arg0); }
    void onCreateContextMenu(::uObject* arg0) { View__onCreateContextMenu(this, arg0); }
    ::app::Android::Runtime::IntArray* onCreateDrawableState(int arg0) { return (((View__uType*)this->__obj_type)->__fp_onCreateDrawableState)(this, arg0); }
    ::uObject* onCreateInputConnection(::app::Android::android::view::inputmethod::EditorInfo* arg0) { return (((View__uType*)this->__obj_type)->__fp_onCreateInputConnection)(this, arg0); }
    void onDetachedFromWindow() { (((View__uType*)this->__obj_type)->__fp_onDetachedFromWindow)(this); }
    void onDisplayHint(int arg0) { View__onDisplayHint(this, arg0); }
    bool onDragEvent(::app::Android::android::view::DragEvent* arg0) { return (((View__uType*)this->__obj_type)->__fp_onDragEvent)(this, arg0); }
    void onDraw(::app::Android::android::graphics::Canvas* arg0) { (((View__uType*)this->__obj_type)->__fp_onDraw)(this, arg0); }
    void onDrawScrollBars(::app::Android::android::graphics::Canvas* arg0) { View__onDrawScrollBars(this, arg0); }
    bool onFilterTouchEventForSecurity(::app::Android::android::view::MotionEvent* arg0) { return View__onFilterTouchEventForSecurity(this, arg0); }
    void onFinishInflate() { View__onFinishInflate(this); }
    void onFinishTemporaryDetach() { (((View__uType*)this->__obj_type)->__fp_onFinishTemporaryDetach)(this); }
    void onFocusChanged(bool arg0, int arg1, ::app::Android::android::graphics::Rect* arg2) { (((View__uType*)this->__obj_type)->__fp_onFocusChanged)(this, arg0, arg1, arg2); }
    bool onGenericMotionEvent(::app::Android::android::view::MotionEvent* arg0) { return (((View__uType*)this->__obj_type)->__fp_onGenericMotionEvent)(this, arg0); }
    void onHoverChanged(bool arg0) { View__onHoverChanged(this, arg0); }
    bool onHoverEvent(::app::Android::android::view::MotionEvent* arg0) { return (((View__uType*)this->__obj_type)->__fp_onHoverEvent)(this, arg0); }
    void onInitializeAccessibilityEvent(::app::Android::android::view::accessibility::AccessibilityEvent* arg0) { (((View__uType*)this->__obj_type)->__fp_onInitializeAccessibilityEvent)(this, arg0); }
    void onInitializeAccessibilityNodeInfo(::app::Android::android::view::accessibility::AccessibilityNodeInfo* arg0) { (((View__uType*)this->__obj_type)->__fp_onInitializeAccessibilityNodeInfo)(this, arg0); }
    bool onKeyDown(int arg0, ::app::Android::android::view::KeyEvent* arg1) { return (((View__uType*)this->__obj_type)->__fp_onKeyDown)(this, arg0, arg1); }
    bool onKeyLongPress(int arg0, ::app::Android::android::view::KeyEvent* arg1) { return View__onKeyLongPress(this, arg0, arg1); }
    bool onKeyMultiple(int arg0, int arg1, ::app::Android::android::view::KeyEvent* arg2) { return (((View__uType*)this->__obj_type)->__fp_onKeyMultiple)(this, arg0, arg1, arg2); }
    bool onKeyPreIme(int arg0, ::app::Android::android::view::KeyEvent* arg1) { return (((View__uType*)this->__obj_type)->__fp_onKeyPreIme)(this, arg0, arg1); }
    bool onKeyShortcut(int arg0, ::app::Android::android::view::KeyEvent* arg1) { return (((View__uType*)this->__obj_type)->__fp_onKeyShortcut)(this, arg0, arg1); }
    bool onKeyUp(int arg0, ::app::Android::android::view::KeyEvent* arg1) { return (((View__uType*)this->__obj_type)->__fp_onKeyUp)(this, arg0, arg1); }
    void onLayout(bool arg0, int arg1, int arg2, int arg3, int arg4) { (((View__uType*)this->__obj_type)->__fp_onLayout)(this, arg0, arg1, arg2, arg3, arg4); }
    void onMeasure(int arg0, int arg1) { (((View__uType*)this->__obj_type)->__fp_onMeasure)(this, arg0, arg1); }
    void onOverScrolled(int arg0, int arg1, bool arg2, bool arg3) { (((View__uType*)this->__obj_type)->__fp_onOverScrolled)(this, arg0, arg1, arg2, arg3); }
    void onPopulateAccessibilityEvent(::app::Android::android::view::accessibility::AccessibilityEvent* arg0) { (((View__uType*)this->__obj_type)->__fp_onPopulateAccessibilityEvent)(this, arg0); }
    void onRestoreInstanceState(::uObject* arg0) { (((View__uType*)this->__obj_type)->__fp_onRestoreInstanceState)(this, arg0); }
    void onRtlPropertiesChanged(int arg0) { (((View__uType*)this->__obj_type)->__fp_onRtlPropertiesChanged)(this, arg0); }
    ::uObject* onSaveInstanceState() { return (((View__uType*)this->__obj_type)->__fp_onSaveInstanceState)(this); }
    void onScreenStateChanged(int arg0) { (((View__uType*)this->__obj_type)->__fp_onScreenStateChanged)(this, arg0); }
    void onScrollChanged(int arg0, int arg1, int arg2, int arg3) { (((View__uType*)this->__obj_type)->__fp_onScrollChanged)(this, arg0, arg1, arg2, arg3); }
    bool onSetAlpha(int arg0) { return View__onSetAlpha(this, arg0); }
    void onSizeChanged(int arg0, int arg1, int arg2, int arg3) { (((View__uType*)this->__obj_type)->__fp_onSizeChanged)(this, arg0, arg1, arg2, arg3); }
    void onStartTemporaryDetach() { (((View__uType*)this->__obj_type)->__fp_onStartTemporaryDetach)(this); }
    bool onTouchEvent(::app::Android::android::view::MotionEvent* arg0) { return (((View__uType*)this->__obj_type)->__fp_onTouchEvent)(this, arg0); }
    bool onTrackballEvent(::app::Android::android::view::MotionEvent* arg0) { return (((View__uType*)this->__obj_type)->__fp_onTrackballEvent)(this, arg0); }
    void onVisibilityChanged(View* arg0, int arg1) { (((View__uType*)this->__obj_type)->__fp_onVisibilityChanged)(this, arg0, arg1); }
    void onWindowFocusChanged(bool arg0) { (((View__uType*)this->__obj_type)->__fp_onWindowFocusChanged)(this, arg0); }
    void onWindowSystemUiVisibilityChanged(int arg0) { View__onWindowSystemUiVisibilityChanged(this, arg0); }
    void onWindowVisibilityChanged(int arg0) { (((View__uType*)this->__obj_type)->__fp_onWindowVisibilityChanged)(this, arg0); }
    bool overScrollBy(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, bool arg8) { return View__overScrollBy(this, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8); }
    bool performAccessibilityAction(int arg0, ::app::Android::android::os::Bundle* arg1) { return (((View__uType*)this->__obj_type)->__fp_performAccessibilityAction)(this, arg0, arg1); }
    bool performClick() { return (((View__uType*)this->__obj_type)->__fp_performClick)(this); }
    bool performHapticFeedback(int arg0) { return View__performHapticFeedback(this, arg0); }
    bool performHapticFeedback_1(int arg0, int arg1) { return View__performHapticFeedback_1(this, arg0, arg1); }
    bool performLongClick() { return (((View__uType*)this->__obj_type)->__fp_performLongClick)(this); }
    void playSoundEffect(int arg0) { View__playSoundEffect(this, arg0); }
    bool post(::uObject* arg0) { return View__post(this, arg0); }
    bool postDelayed(::uObject* arg0, ::uLong arg1) { return View__postDelayed(this, arg0, arg1); }
    void postInvalidate() { (((View__uType*)this->__obj_type)->__fp_postInvalidate)(this); }
    void postInvalidate_1(int arg0, int arg1, int arg2, int arg3) { View__postInvalidate_1(this, arg0, arg1, arg2, arg3); }
    void postInvalidateDelayed(::uLong arg0) { View__postInvalidateDelayed(this, arg0); }
    void postInvalidateDelayed_1(::uLong arg0, int arg1, int arg2, int arg3, int arg4) { View__postInvalidateDelayed_1(this, arg0, arg1, arg2, arg3, arg4); }
    void postInvalidateOnAnimation() { View__postInvalidateOnAnimation(this); }
    void postInvalidateOnAnimation_1(int arg0, int arg1, int arg2, int arg3) { View__postInvalidateOnAnimation_1(this, arg0, arg1, arg2, arg3); }
    void postOnAnimation(::uObject* arg0) { View__postOnAnimation(this, arg0); }
    void postOnAnimationDelayed(::uObject* arg0, ::uLong arg1) { View__postOnAnimationDelayed(this, arg0, arg1); }
    void refreshDrawableState() { View__refreshDrawableState(this); }
    bool removeCallbacks(::uObject* arg0) { return View__removeCallbacks(this, arg0); }
    void removeOnAttachStateChangeListener(::uObject* arg0) { View__removeOnAttachStateChangeListener(this, arg0); }
    void removeOnLayoutChangeListener(::uObject* arg0) { View__removeOnLayoutChangeListener(this, arg0); }
    void requestFitSystemWindows() { View__requestFitSystemWindows(this); }
    bool requestFocus() { return View__requestFocus(this); }
    bool requestFocus_1(int arg0) { return View__requestFocus_1(this, arg0); }
    bool requestFocus_2(int arg0, ::app::Android::android::graphics::Rect* arg1) { return (((View__uType*)this->__obj_type)->__fp_requestFocus_2)(this, arg0, arg1); }
    bool requestFocusFromTouch() { return View__requestFocusFromTouch(this); }
    void requestLayout() { (((View__uType*)this->__obj_type)->__fp_requestLayout)(this); }
    bool requestRectangleOnScreen(::app::Android::android::graphics::Rect* arg0) { return View__requestRectangleOnScreen(this, arg0); }
    bool requestRectangleOnScreen_1(::app::Android::android::graphics::Rect* arg0, bool arg1) { return View__requestRectangleOnScreen_1(this, arg0, arg1); }
    void restoreHierarchyState(::app::Android::android::util::SparseArray* arg0) { View__restoreHierarchyState(this, arg0); }
    void saveHierarchyState(::app::Android::android::util::SparseArray* arg0) { View__saveHierarchyState(this, arg0); }
    void scheduleDrawable(::app::Android::android::graphics::drawable::Drawable* arg0, ::uObject* arg1, ::uLong arg2) { View__scheduleDrawable(this, arg0, arg1, arg2); }
    void scrollBy(int arg0, int arg1) { View__scrollBy(this, arg0, arg1); }
    void scrollTo(int arg0, int arg1) { (((View__uType*)this->__obj_type)->__fp_scrollTo)(this, arg0, arg1); }
    void sendAccessibilityEvent(int arg0) { (((View__uType*)this->__obj_type)->__fp_sendAccessibilityEvent)(this, arg0); }
    void sendAccessibilityEventUnchecked(::app::Android::android::view::accessibility::AccessibilityEvent* arg0) { View__sendAccessibilityEventUnchecked(this, arg0); }
    void setAccessibilityDelegate(::app::Android::android::view::ViewDLRAccessibilityDelegate* arg0) { View__setAccessibilityDelegate(this, arg0); }
    void setAccessibilityLiveRegion(int arg0) { View__setAccessibilityLiveRegion(this, arg0); }
    void setActivated(bool arg0) { View__setActivated(this, arg0); }
    void setAlpha(float arg0) { View__setAlpha(this, arg0); }
    void setAnimation(::app::Android::android::view::animation::Animation* arg0) { View__setAnimation(this, arg0); }
    void setBackground(::app::Android::android::graphics::drawable::Drawable* arg0) { View__setBackground(this, arg0); }
    void setBackgroundColor(int arg0) { (((View__uType*)this->__obj_type)->__fp_setBackgroundColor)(this, arg0); }
    void setBackgroundDrawable(::app::Android::android::graphics::drawable::Drawable* arg0) { View__setBackgroundDrawable(this, arg0); }
    void setBackgroundResource(int arg0) { View__setBackgroundResource(this, arg0); }
    void setBottom(int arg0) { View__setBottom(this, arg0); }
    void setCameraDistance(float arg0) { View__setCameraDistance(this, arg0); }
    void setClickable(bool arg0) { View__setClickable(this, arg0); }
    void setClipBounds(::app::Android::android::graphics::Rect* arg0) { View__setClipBounds(this, arg0); }
    void setContentDescription(::uObject* arg0) { View__setContentDescription(this, arg0); }
    void setDrawingCacheBackgroundColor(int arg0) { View__setDrawingCacheBackgroundColor(this, arg0); }
    void setDrawingCacheEnabled(bool arg0) { View__setDrawingCacheEnabled(this, arg0); }
    void setDrawingCacheQuality(int arg0) { View__setDrawingCacheQuality(this, arg0); }
    void setDuplicateParentStateEnabled(bool arg0) { View__setDuplicateParentStateEnabled(this, arg0); }
    void setEnabled(bool arg0) { (((View__uType*)this->__obj_type)->__fp_setEnabled)(this, arg0); }
    void setFadingEdgeLength(int arg0) { View__setFadingEdgeLength(this, arg0); }
    void setFilterTouchesWhenObscured(bool arg0) { View__setFilterTouchesWhenObscured(this, arg0); }
    void setFitsSystemWindows(bool arg0) { View__setFitsSystemWindows(this, arg0); }
    void setFocusable(bool arg0) { View__setFocusable(this, arg0); }
    void setFocusableInTouchMode(bool arg0) { View__setFocusableInTouchMode(this, arg0); }
    void setHapticFeedbackEnabled(bool arg0) { View__setHapticFeedbackEnabled(this, arg0); }
    void setHasTransientState(bool arg0) { View__setHasTransientState(this, arg0); }
    void setHorizontalFadingEdgeEnabled(bool arg0) { View__setHorizontalFadingEdgeEnabled(this, arg0); }
    void setHorizontalScrollBarEnabled(bool arg0) { View__setHorizontalScrollBarEnabled(this, arg0); }
    void setHovered(bool arg0) { View__setHovered(this, arg0); }
    void setId(int arg0) { View__setId(this, arg0); }
    void setImportantForAccessibility(int arg0) { View__setImportantForAccessibility(this, arg0); }
    void setKeepScreenOn(bool arg0) { View__setKeepScreenOn(this, arg0); }
    void setLabelFor(int arg0) { View__setLabelFor(this, arg0); }
    void setLayerPaint(::app::Android::android::graphics::Paint* arg0) { View__setLayerPaint(this, arg0); }
    void setLayerType(int arg0, ::app::Android::android::graphics::Paint* arg1) { (((View__uType*)this->__obj_type)->__fp_setLayerType)(this, arg0, arg1); }
    void setLayoutDirection(int arg0) { View__setLayoutDirection(this, arg0); }
    void setLayoutParams(::app::Android::android::view::ViewGroupDLRLayoutParams* arg0) { (((View__uType*)this->__obj_type)->__fp_setLayoutParams)(this, arg0); }
    void setLeft(int arg0) { View__setLeft(this, arg0); }
    void setLongClickable(bool arg0) { View__setLongClickable(this, arg0); }
    void setMeasuredDimension(int arg0, int arg1) { View__setMeasuredDimension(this, arg0, arg1); }
    void setMinimumHeight(int arg0) { View__setMinimumHeight(this, arg0); }
    void setMinimumWidth(int arg0) { View__setMinimumWidth(this, arg0); }
    void setNextFocusDownId(int arg0) { View__setNextFocusDownId(this, arg0); }
    void setNextFocusForwardId(int arg0) { View__setNextFocusForwardId(this, arg0); }
    void setNextFocusLeftId(int arg0) { View__setNextFocusLeftId(this, arg0); }
    void setNextFocusRightId(int arg0) { View__setNextFocusRightId(this, arg0); }
    void setNextFocusUpId(int arg0) { View__setNextFocusUpId(this, arg0); }
    void setOnClickListener(::uObject* arg0) { View__setOnClickListener(this, arg0); }
    void setOnCreateContextMenuListener(::uObject* arg0) { View__setOnCreateContextMenuListener(this, arg0); }
    void setOnDragListener(::uObject* arg0) { View__setOnDragListener(this, arg0); }
    void setOnFocusChangeListener(::uObject* arg0) { View__setOnFocusChangeListener(this, arg0); }
    void setOnGenericMotionListener(::uObject* arg0) { View__setOnGenericMotionListener(this, arg0); }
    void setOnHoverListener(::uObject* arg0) { View__setOnHoverListener(this, arg0); }
    void setOnKeyListener(::uObject* arg0) { View__setOnKeyListener(this, arg0); }
    void setOnLongClickListener(::uObject* arg0) { View__setOnLongClickListener(this, arg0); }
    void setOnSystemUiVisibilityChangeListener(::uObject* arg0) { View__setOnSystemUiVisibilityChangeListener(this, arg0); }
    void setOnTouchListener(::uObject* arg0) { View__setOnTouchListener(this, arg0); }
    void setOverScrollMode(int arg0) { (((View__uType*)this->__obj_type)->__fp_setOverScrollMode)(this, arg0); }
    void setPadding(int arg0, int arg1, int arg2, int arg3) { (((View__uType*)this->__obj_type)->__fp_setPadding)(this, arg0, arg1, arg2, arg3); }
    void setPaddingRelative(int arg0, int arg1, int arg2, int arg3) { (((View__uType*)this->__obj_type)->__fp_setPaddingRelative)(this, arg0, arg1, arg2, arg3); }
    void setPivotX(float arg0) { View__setPivotX(this, arg0); }
    void setPivotY(float arg0) { View__setPivotY(this, arg0); }
    void setPressed(bool arg0) { View__setPressed(this, arg0); }
    void setRight(int arg0) { View__setRight(this, arg0); }
    void setRotation(float arg0) { View__setRotation(this, arg0); }
    void setRotationX(float arg0) { View__setRotationX(this, arg0); }
    void setRotationY(float arg0) { View__setRotationY(this, arg0); }
    void setSaveEnabled(bool arg0) { View__setSaveEnabled(this, arg0); }
    void setSaveFromParentEnabled(bool arg0) { View__setSaveFromParentEnabled(this, arg0); }
    void setScaleX(float arg0) { View__setScaleX(this, arg0); }
    void setScaleY(float arg0) { View__setScaleY(this, arg0); }
    void setScrollBarDefaultDelayBeforeFade(int arg0) { View__setScrollBarDefaultDelayBeforeFade(this, arg0); }
    void setScrollBarFadeDuration(int arg0) { View__setScrollBarFadeDuration(this, arg0); }
    void setScrollbarFadingEnabled(bool arg0) { View__setScrollbarFadingEnabled(this, arg0); }
    void setScrollBarSize(int arg0) { View__setScrollBarSize(this, arg0); }
    void setScrollBarStyle(int arg0) { (((View__uType*)this->__obj_type)->__fp_setScrollBarStyle)(this, arg0); }
    void setScrollContainer(bool arg0) { View__setScrollContainer(this, arg0); }
    void setScrollX(int arg0) { View__setScrollX(this, arg0); }
    void setScrollY(int arg0) { View__setScrollY(this, arg0); }
    void setSelected(bool arg0) { (((View__uType*)this->__obj_type)->__fp_setSelected)(this, arg0); }
    void setSoundEffectsEnabled(bool arg0) { View__setSoundEffectsEnabled(this, arg0); }
    void setSystemUiVisibility(int arg0) { View__setSystemUiVisibility(this, arg0); }
    void setTag(int arg0, ::app::Android::java::lang::Object* arg1) { View__setTag(this, arg0, arg1); }
    void setTag_1(::app::Android::java::lang::Object* arg0) { View__setTag_1(this, arg0); }
    void setTextAlignment(int arg0) { View__setTextAlignment(this, arg0); }
    void setTextDirection(int arg0) { View__setTextDirection(this, arg0); }
    void setTop(int arg0) { View__setTop(this, arg0); }
    void setTouchDelegate(::app::Android::android::view::TouchDelegate* arg0) { View__setTouchDelegate(this, arg0); }
    void setTranslationX(float arg0) { View__setTranslationX(this, arg0); }
    void setTranslationY(float arg0) { View__setTranslationY(this, arg0); }
    void setVerticalFadingEdgeEnabled(bool arg0) { View__setVerticalFadingEdgeEnabled(this, arg0); }
    void setVerticalScrollBarEnabled(bool arg0) { View__setVerticalScrollBarEnabled(this, arg0); }
    void setVerticalScrollbarPosition(int arg0) { View__setVerticalScrollbarPosition(this, arg0); }
    void setVisibility(int arg0) { (((View__uType*)this->__obj_type)->__fp_setVisibility)(this, arg0); }
    void setWillNotCacheDrawing(bool arg0) { View__setWillNotCacheDrawing(this, arg0); }
    void setWillNotDraw(bool arg0) { View__setWillNotDraw(this, arg0); }
    void setX(float arg0) { View__setX(this, arg0); }
    void setY(float arg0) { View__setY(this, arg0); }
    bool showContextMenu() { return View__showContextMenu(this); }
    ::app::Android::android::view::ActionMode* startActionMode(::uObject* arg0) { return View__startActionMode(this, arg0); }
    void startAnimation(::app::Android::android::view::animation::Animation* arg0) { View__startAnimation(this, arg0); }
    bool startDrag(::app::Android::android::content::ClipData* arg0, ::app::Android::android::view::ViewDLRDragShadowBuilder* arg1, ::app::Android::java::lang::Object* arg2, int arg3) { return View__startDrag(this, arg0, arg1, arg2, arg3); }
    void unscheduleDrawable(::app::Android::android::graphics::drawable::Drawable* arg0) { View__unscheduleDrawable(this, arg0); }
    void unscheduleDrawable_1(::app::Android::android::graphics::drawable::Drawable* arg0, ::uObject* arg1) { View__unscheduleDrawable_1(this, arg0, arg1); }
    bool verifyDrawable(::app::Android::android::graphics::drawable::Drawable* arg0) { return (((View__uType*)this->__obj_type)->__fp_verifyDrawable)(this, arg0); }
    bool willNotCacheDrawing() { return View__willNotCacheDrawing(this); }
    bool willNotDraw() { return View__willNotDraw(this); }
};

}}}}


#endif
