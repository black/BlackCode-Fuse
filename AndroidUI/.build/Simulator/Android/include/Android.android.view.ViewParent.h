// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>
namespace g{namespace Android{namespace android{namespace graphics{struct Point;}}}}
namespace g{namespace Android{namespace android{namespace graphics{struct Rect;}}}}
namespace g{namespace Android{namespace android{namespace view{namespace accessibility{struct AccessibilityEvent;}}}}}
namespace g{namespace Android{namespace android{namespace view{struct ActionMode;}}}}
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Android{namespace Runtime{struct IntArray;}}}

namespace g{
namespace Android{
namespace android{
namespace view{

// public abstract extern interface ViewParent :26404
// {
uInterfaceType* ViewParent_typeof();

struct ViewParent
{
    void(*fp_bringChildToFront)(uObject*, ::g::Android::android::view::View*);
    void(*fp_canResolveLayoutDirection)(uObject*, bool*);
    void(*fp_canResolveTextAlignment)(uObject*, bool*);
    void(*fp_canResolveTextDirection)(uObject*, bool*);
    void(*fp_childDrawableStateChanged)(uObject*, ::g::Android::android::view::View*);
    void(*fp_childHasTransientStateChanged)(uObject*, ::g::Android::android::view::View*, bool*);
    void(*fp_clearChildFocus)(uObject*, ::g::Android::android::view::View*);
    void(*fp_createContextMenu)(uObject*, uObject*);
    void(*fp_focusableViewAvailable)(uObject*, ::g::Android::android::view::View*);
    void(*fp_focusSearch)(uObject*, ::g::Android::android::view::View*, int*, ::g::Android::android::view::View**);
    void(*fp_getChildVisibleRect)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::graphics::Rect*, ::g::Android::android::graphics::Point*, bool*);
    void(*fp_getLayoutDirection)(uObject*, int*);
    void(*fp_getParent)(uObject*, uObject**);
    void(*fp_getParentForAccessibility)(uObject*, uObject**);
    void(*fp_getTextAlignment)(uObject*, int*);
    void(*fp_getTextDirection)(uObject*, int*);
    void(*fp_invalidateChild)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::graphics::Rect*);
    void(*fp_invalidateChildInParent)(uObject*, ::g::Android::Runtime::IntArray*, ::g::Android::android::graphics::Rect*, uObject**);
    void(*fp_isLayoutDirectionResolved)(uObject*, bool*);
    void(*fp_isLayoutRequested)(uObject*, bool*);
    void(*fp_isTextAlignmentResolved)(uObject*, bool*);
    void(*fp_isTextDirectionResolved)(uObject*, bool*);
    void(*fp_notifySubtreeAccessibilityStateChanged)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::view::View*, int*);
    void(*fp_recomputeViewAttributes)(uObject*, ::g::Android::android::view::View*);
    void(*fp_requestChildFocus)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::view::View*);
    void(*fp_requestChildRectangleOnScreen)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::graphics::Rect*, bool*, bool*);
    void(*fp_requestDisallowInterceptTouchEvent)(uObject*, bool*);
    void(*fp_requestFitSystemWindows)(uObject*);
    void(*fp_requestLayout)(uObject*);
    void(*fp_requestSendAccessibilityEvent)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::view::accessibility::AccessibilityEvent*, bool*);
    void(*fp_requestTransparentRegion)(uObject*, ::g::Android::android::view::View*);
    void(*fp_showContextMenuForChild)(uObject*, ::g::Android::android::view::View*, bool*);
    void(*fp_startActionModeForChild)(uObject*, ::g::Android::android::view::View*, uObject*, ::g::Android::android::view::ActionMode**);
    static void bringChildToFront(const uInterface& __this, ::g::Android::android::view::View* arg0) { __this.VTable<ViewParent>()->fp_bringChildToFront(__this, arg0); }
    static bool canResolveLayoutDirection(const uInterface& __this) { bool __retval; return __this.VTable<ViewParent>()->fp_canResolveLayoutDirection(__this, &__retval), __retval; }
    static bool canResolveTextAlignment(const uInterface& __this) { bool __retval; return __this.VTable<ViewParent>()->fp_canResolveTextAlignment(__this, &__retval), __retval; }
    static bool canResolveTextDirection(const uInterface& __this) { bool __retval; return __this.VTable<ViewParent>()->fp_canResolveTextDirection(__this, &__retval), __retval; }
    static void childDrawableStateChanged(const uInterface& __this, ::g::Android::android::view::View* arg0) { __this.VTable<ViewParent>()->fp_childDrawableStateChanged(__this, arg0); }
    static void childHasTransientStateChanged(const uInterface& __this, ::g::Android::android::view::View* arg0, bool arg1) { __this.VTable<ViewParent>()->fp_childHasTransientStateChanged(__this, arg0, &arg1); }
    static void clearChildFocus(const uInterface& __this, ::g::Android::android::view::View* arg0) { __this.VTable<ViewParent>()->fp_clearChildFocus(__this, arg0); }
    static void createContextMenu(const uInterface& __this, uObject* arg0) { __this.VTable<ViewParent>()->fp_createContextMenu(__this, arg0); }
    static void focusableViewAvailable(const uInterface& __this, ::g::Android::android::view::View* arg0) { __this.VTable<ViewParent>()->fp_focusableViewAvailable(__this, arg0); }
    static ::g::Android::android::view::View* focusSearch(const uInterface& __this, ::g::Android::android::view::View* arg0, int arg1) { ::g::Android::android::view::View* __retval; return __this.VTable<ViewParent>()->fp_focusSearch(__this, arg0, &arg1, &__retval), __retval; }
    static bool getChildVisibleRect(const uInterface& __this, ::g::Android::android::view::View* arg0, ::g::Android::android::graphics::Rect* arg1, ::g::Android::android::graphics::Point* arg2) { bool __retval; return __this.VTable<ViewParent>()->fp_getChildVisibleRect(__this, arg0, arg1, arg2, &__retval), __retval; }
    static int getLayoutDirection(const uInterface& __this) { int __retval; return __this.VTable<ViewParent>()->fp_getLayoutDirection(__this, &__retval), __retval; }
    static uObject* getParent(const uInterface& __this) { uObject* __retval; return __this.VTable<ViewParent>()->fp_getParent(__this, &__retval), __retval; }
    static uObject* getParentForAccessibility(const uInterface& __this) { uObject* __retval; return __this.VTable<ViewParent>()->fp_getParentForAccessibility(__this, &__retval), __retval; }
    static int getTextAlignment(const uInterface& __this) { int __retval; return __this.VTable<ViewParent>()->fp_getTextAlignment(__this, &__retval), __retval; }
    static int getTextDirection(const uInterface& __this) { int __retval; return __this.VTable<ViewParent>()->fp_getTextDirection(__this, &__retval), __retval; }
    static void invalidateChild(const uInterface& __this, ::g::Android::android::view::View* arg0, ::g::Android::android::graphics::Rect* arg1) { __this.VTable<ViewParent>()->fp_invalidateChild(__this, arg0, arg1); }
    static uObject* invalidateChildInParent(const uInterface& __this, ::g::Android::Runtime::IntArray* arg0, ::g::Android::android::graphics::Rect* arg1) { uObject* __retval; return __this.VTable<ViewParent>()->fp_invalidateChildInParent(__this, arg0, arg1, &__retval), __retval; }
    static bool isLayoutDirectionResolved(const uInterface& __this) { bool __retval; return __this.VTable<ViewParent>()->fp_isLayoutDirectionResolved(__this, &__retval), __retval; }
    static bool isLayoutRequested(const uInterface& __this) { bool __retval; return __this.VTable<ViewParent>()->fp_isLayoutRequested(__this, &__retval), __retval; }
    static bool isTextAlignmentResolved(const uInterface& __this) { bool __retval; return __this.VTable<ViewParent>()->fp_isTextAlignmentResolved(__this, &__retval), __retval; }
    static bool isTextDirectionResolved(const uInterface& __this) { bool __retval; return __this.VTable<ViewParent>()->fp_isTextDirectionResolved(__this, &__retval), __retval; }
    static void notifySubtreeAccessibilityStateChanged(const uInterface& __this, ::g::Android::android::view::View* arg0, ::g::Android::android::view::View* arg1, int arg2) { __this.VTable<ViewParent>()->fp_notifySubtreeAccessibilityStateChanged(__this, arg0, arg1, &arg2); }
    static void recomputeViewAttributes(const uInterface& __this, ::g::Android::android::view::View* arg0) { __this.VTable<ViewParent>()->fp_recomputeViewAttributes(__this, arg0); }
    static void requestChildFocus(const uInterface& __this, ::g::Android::android::view::View* arg0, ::g::Android::android::view::View* arg1) { __this.VTable<ViewParent>()->fp_requestChildFocus(__this, arg0, arg1); }
    static bool requestChildRectangleOnScreen(const uInterface& __this, ::g::Android::android::view::View* arg0, ::g::Android::android::graphics::Rect* arg1, bool arg2) { bool __retval; return __this.VTable<ViewParent>()->fp_requestChildRectangleOnScreen(__this, arg0, arg1, &arg2, &__retval), __retval; }
    static void requestDisallowInterceptTouchEvent(const uInterface& __this, bool arg0) { __this.VTable<ViewParent>()->fp_requestDisallowInterceptTouchEvent(__this, &arg0); }
    static void requestFitSystemWindows(const uInterface& __this) { __this.VTable<ViewParent>()->fp_requestFitSystemWindows(__this); }
    static void requestLayout(const uInterface& __this) { __this.VTable<ViewParent>()->fp_requestLayout(__this); }
    static bool requestSendAccessibilityEvent(const uInterface& __this, ::g::Android::android::view::View* arg0, ::g::Android::android::view::accessibility::AccessibilityEvent* arg1) { bool __retval; return __this.VTable<ViewParent>()->fp_requestSendAccessibilityEvent(__this, arg0, arg1, &__retval), __retval; }
    static void requestTransparentRegion(const uInterface& __this, ::g::Android::android::view::View* arg0) { __this.VTable<ViewParent>()->fp_requestTransparentRegion(__this, arg0); }
    static bool showContextMenuForChild(const uInterface& __this, ::g::Android::android::view::View* arg0) { bool __retval; return __this.VTable<ViewParent>()->fp_showContextMenuForChild(__this, arg0, &__retval), __retval; }
    static ::g::Android::android::view::ActionMode* startActionModeForChild(const uInterface& __this, ::g::Android::android::view::View* arg0, uObject* arg1) { ::g::Android::android::view::ActionMode* __retval; return __this.VTable<ViewParent>()->fp_startActionModeForChild(__this, arg0, arg1, &__retval), __retval; }
};
// }

}}}} // ::g::Android::android::view
