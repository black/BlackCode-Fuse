// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_VIEW_PARENT_H__
#define __APP_ANDROID_ANDROID_VIEW_VIEW_PARENT_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace graphics { struct Point; } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct Rect; } } } }
namespace app { namespace Android { namespace android { namespace view { namespace accessibility { struct AccessibilityEvent; } } } } }
namespace app { namespace Android { namespace android { namespace view { struct ActionMode; } } } }
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }
namespace app { namespace Android { namespace Runtime { struct IntArray; } } }

namespace app {
namespace Android {
namespace android {
namespace view {

::uInterfaceType* ViewParent__typeof();

struct ViewParent
{
    void(*__fp_bringChildToFront)(void*, ::app::Android::android::view::View*);
    bool(*__fp_canResolveLayoutDirection)(void*);
    bool(*__fp_canResolveTextAlignment)(void*);
    bool(*__fp_canResolveTextDirection)(void*);
    void(*__fp_childDrawableStateChanged)(void*, ::app::Android::android::view::View*);
    void(*__fp_childHasTransientStateChanged)(void*, ::app::Android::android::view::View*, bool);
    void(*__fp_clearChildFocus)(void*, ::app::Android::android::view::View*);
    void(*__fp_createContextMenu)(void*, ::uObject*);
    void(*__fp_focusableViewAvailable)(void*, ::app::Android::android::view::View*);
    ::app::Android::android::view::View*(*__fp_focusSearch)(void*, ::app::Android::android::view::View*, int);
    bool(*__fp_getChildVisibleRect)(void*, ::app::Android::android::view::View*, ::app::Android::android::graphics::Rect*, ::app::Android::android::graphics::Point*);
    int(*__fp_getLayoutDirection)(void*);
    ::uObject*(*__fp_getParent)(void*);
    ::uObject*(*__fp_getParentForAccessibility)(void*);
    int(*__fp_getTextAlignment)(void*);
    int(*__fp_getTextDirection)(void*);
    void(*__fp_invalidateChild)(void*, ::app::Android::android::view::View*, ::app::Android::android::graphics::Rect*);
    ::uObject*(*__fp_invalidateChildInParent)(void*, ::app::Android::Runtime::IntArray*, ::app::Android::android::graphics::Rect*);
    bool(*__fp_isLayoutDirectionResolved)(void*);
    bool(*__fp_isLayoutRequested)(void*);
    bool(*__fp_isTextAlignmentResolved)(void*);
    bool(*__fp_isTextDirectionResolved)(void*);
    void(*__fp_notifySubtreeAccessibilityStateChanged)(void*, ::app::Android::android::view::View*, ::app::Android::android::view::View*, int);
    void(*__fp_recomputeViewAttributes)(void*, ::app::Android::android::view::View*);
    void(*__fp_requestChildFocus)(void*, ::app::Android::android::view::View*, ::app::Android::android::view::View*);
    bool(*__fp_requestChildRectangleOnScreen)(void*, ::app::Android::android::view::View*, ::app::Android::android::graphics::Rect*, bool);
    void(*__fp_requestDisallowInterceptTouchEvent)(void*, bool);
    void(*__fp_requestFitSystemWindows)(void*);
    void(*__fp_requestLayout)(void*);
    bool(*__fp_requestSendAccessibilityEvent)(void*, ::app::Android::android::view::View*, ::app::Android::android::view::accessibility::AccessibilityEvent*);
    void(*__fp_requestTransparentRegion)(void*, ::app::Android::android::view::View*);
    bool(*__fp_showContextMenuForChild)(void*, ::app::Android::android::view::View*);
    ::app::Android::android::view::ActionMode*(*__fp_startActionModeForChild)(void*, ::app::Android::android::view::View*, ::uObject*);

    static void bringChildToFront(::uObject* __this, ::app::Android::android::view::View* arg0) { ((ViewParent*)uGetInterfacePtr(__this, ViewParent__typeof()))->__fp_bringChildToFront((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static bool canResolveLayoutDirection(::uObject* __this) { return ((ViewParent*)uGetInterfacePtr(__this, ViewParent__typeof()))->__fp_canResolveLayoutDirection((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static bool canResolveTextAlignment(::uObject* __this) { return ((ViewParent*)uGetInterfacePtr(__this, ViewParent__typeof()))->__fp_canResolveTextAlignment((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static bool canResolveTextDirection(::uObject* __this) { return ((ViewParent*)uGetInterfacePtr(__this, ViewParent__typeof()))->__fp_canResolveTextDirection((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static void childDrawableStateChanged(::uObject* __this, ::app::Android::android::view::View* arg0) { ((ViewParent*)uGetInterfacePtr(__this, ViewParent__typeof()))->__fp_childDrawableStateChanged((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static void childHasTransientStateChanged(::uObject* __this, ::app::Android::android::view::View* arg0, bool arg1) { ((ViewParent*)uGetInterfacePtr(__this, ViewParent__typeof()))->__fp_childHasTransientStateChanged((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1); }
    static void clearChildFocus(::uObject* __this, ::app::Android::android::view::View* arg0) { ((ViewParent*)uGetInterfacePtr(__this, ViewParent__typeof()))->__fp_clearChildFocus((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static void createContextMenu(::uObject* __this, ::uObject* arg0) { ((ViewParent*)uGetInterfacePtr(__this, ViewParent__typeof()))->__fp_createContextMenu((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static void focusableViewAvailable(::uObject* __this, ::app::Android::android::view::View* arg0) { ((ViewParent*)uGetInterfacePtr(__this, ViewParent__typeof()))->__fp_focusableViewAvailable((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static ::app::Android::android::view::View* focusSearch(::uObject* __this, ::app::Android::android::view::View* arg0, int arg1) { return ((ViewParent*)uGetInterfacePtr(__this, ViewParent__typeof()))->__fp_focusSearch((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1); }
    static bool getChildVisibleRect(::uObject* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::graphics::Rect* arg1, ::app::Android::android::graphics::Point* arg2) { return ((ViewParent*)uGetInterfacePtr(__this, ViewParent__typeof()))->__fp_getChildVisibleRect((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1, arg2); }
    static int getLayoutDirection(::uObject* __this) { return ((ViewParent*)uGetInterfacePtr(__this, ViewParent__typeof()))->__fp_getLayoutDirection((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::uObject* getParent(::uObject* __this) { return ((ViewParent*)uGetInterfacePtr(__this, ViewParent__typeof()))->__fp_getParent((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static ::uObject* getParentForAccessibility(::uObject* __this) { return ((ViewParent*)uGetInterfacePtr(__this, ViewParent__typeof()))->__fp_getParentForAccessibility((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static int getTextAlignment(::uObject* __this) { return ((ViewParent*)uGetInterfacePtr(__this, ViewParent__typeof()))->__fp_getTextAlignment((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static int getTextDirection(::uObject* __this) { return ((ViewParent*)uGetInterfacePtr(__this, ViewParent__typeof()))->__fp_getTextDirection((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static void invalidateChild(::uObject* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::graphics::Rect* arg1) { ((ViewParent*)uGetInterfacePtr(__this, ViewParent__typeof()))->__fp_invalidateChild((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1); }
    static ::uObject* invalidateChildInParent(::uObject* __this, ::app::Android::Runtime::IntArray* arg0, ::app::Android::android::graphics::Rect* arg1) { return ((ViewParent*)uGetInterfacePtr(__this, ViewParent__typeof()))->__fp_invalidateChildInParent((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1); }
    static bool isLayoutDirectionResolved(::uObject* __this) { return ((ViewParent*)uGetInterfacePtr(__this, ViewParent__typeof()))->__fp_isLayoutDirectionResolved((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static bool isLayoutRequested(::uObject* __this) { return ((ViewParent*)uGetInterfacePtr(__this, ViewParent__typeof()))->__fp_isLayoutRequested((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static bool isTextAlignmentResolved(::uObject* __this) { return ((ViewParent*)uGetInterfacePtr(__this, ViewParent__typeof()))->__fp_isTextAlignmentResolved((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static bool isTextDirectionResolved(::uObject* __this) { return ((ViewParent*)uGetInterfacePtr(__this, ViewParent__typeof()))->__fp_isTextDirectionResolved((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static void notifySubtreeAccessibilityStateChanged(::uObject* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::view::View* arg1, int arg2) { ((ViewParent*)uGetInterfacePtr(__this, ViewParent__typeof()))->__fp_notifySubtreeAccessibilityStateChanged((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1, arg2); }
    static void recomputeViewAttributes(::uObject* __this, ::app::Android::android::view::View* arg0) { ((ViewParent*)uGetInterfacePtr(__this, ViewParent__typeof()))->__fp_recomputeViewAttributes((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static void requestChildFocus(::uObject* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::view::View* arg1) { ((ViewParent*)uGetInterfacePtr(__this, ViewParent__typeof()))->__fp_requestChildFocus((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1); }
    static bool requestChildRectangleOnScreen(::uObject* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::graphics::Rect* arg1, bool arg2) { return ((ViewParent*)uGetInterfacePtr(__this, ViewParent__typeof()))->__fp_requestChildRectangleOnScreen((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1, arg2); }
    static void requestDisallowInterceptTouchEvent(::uObject* __this, bool arg0) { ((ViewParent*)uGetInterfacePtr(__this, ViewParent__typeof()))->__fp_requestDisallowInterceptTouchEvent((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static void requestFitSystemWindows(::uObject* __this) { ((ViewParent*)uGetInterfacePtr(__this, ViewParent__typeof()))->__fp_requestFitSystemWindows((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static void requestLayout(::uObject* __this) { ((ViewParent*)uGetInterfacePtr(__this, ViewParent__typeof()))->__fp_requestLayout((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static bool requestSendAccessibilityEvent(::uObject* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::view::accessibility::AccessibilityEvent* arg1) { return ((ViewParent*)uGetInterfacePtr(__this, ViewParent__typeof()))->__fp_requestSendAccessibilityEvent((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1); }
    static void requestTransparentRegion(::uObject* __this, ::app::Android::android::view::View* arg0) { ((ViewParent*)uGetInterfacePtr(__this, ViewParent__typeof()))->__fp_requestTransparentRegion((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static bool showContextMenuForChild(::uObject* __this, ::app::Android::android::view::View* arg0) { return ((ViewParent*)uGetInterfacePtr(__this, ViewParent__typeof()))->__fp_showContextMenuForChild((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0); }
    static ::app::Android::android::view::ActionMode* startActionModeForChild(::uObject* __this, ::app::Android::android::view::View* arg0, ::uObject* arg1) { return ((ViewParent*)uGetInterfacePtr(__this, ViewParent__typeof()))->__fp_startActionModeForChild((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), arg0, arg1); }
};

}}}}


#endif
