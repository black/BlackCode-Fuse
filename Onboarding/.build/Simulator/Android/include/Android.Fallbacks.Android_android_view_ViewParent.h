// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.ViewParent.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace graphics{struct Point;}}}}
namespace g{namespace Android{namespace android{namespace graphics{struct Rect;}}}}
namespace g{namespace Android{namespace android{namespace view{namespace accessibility{struct AccessibilityEvent;}}}}}
namespace g{namespace Android{namespace android{namespace view{struct ActionMode;}}}}
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Android{namespace Fallbacks{struct Android_android_view_ViewParent;}}}
namespace g{namespace Android{namespace Runtime{struct IntArray;}}}

namespace g{
namespace Android{
namespace Fallbacks{

// public sealed extern class Android_android_view_ViewParent :20459
// {
struct Android_android_view_ViewParent_type : ::g::Android::java::lang::Object_type
{
    ::g::Android::android::view::ViewParent interface2;
};

Android_android_view_ViewParent_type* Android_android_view_ViewParent_typeof();
void Android_android_view_ViewParent__bringChildToFront_fn(Android_android_view_ViewParent* __this, ::g::Android::android::view::View* arg0);
void Android_android_view_ViewParent__bringChildToFront_IMPL_23532_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void Android_android_view_ViewParent__canResolveLayoutDirection_fn(Android_android_view_ViewParent* __this, bool* __retval);
void Android_android_view_ViewParent__canResolveLayoutDirection_IMPL_23545_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void Android_android_view_ViewParent__canResolveTextAlignment_fn(Android_android_view_ViewParent* __this, bool* __retval);
void Android_android_view_ViewParent__canResolveTextAlignment_IMPL_23551_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void Android_android_view_ViewParent__canResolveTextDirection_fn(Android_android_view_ViewParent* __this, bool* __retval);
void Android_android_view_ViewParent__canResolveTextDirection_IMPL_23548_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void Android_android_view_ViewParent__childDrawableStateChanged_fn(Android_android_view_ViewParent* __this, ::g::Android::android::view::View* arg0);
void Android_android_view_ViewParent__childDrawableStateChanged_IMPL_23537_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void Android_android_view_ViewParent__childHasTransientStateChanged_fn(Android_android_view_ViewParent* __this, ::g::Android::android::view::View* arg0, bool* arg1);
void Android_android_view_ViewParent__childHasTransientStateChanged_IMPL_23541_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* arg3_);
void Android_android_view_ViewParent__clearChildFocus_fn(Android_android_view_ViewParent* __this, ::g::Android::android::view::View* arg0);
void Android_android_view_ViewParent__clearChildFocus_IMPL_23529_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void Android_android_view_ViewParent__createContextMenu_fn(Android_android_view_ViewParent* __this, uObject* arg0);
void Android_android_view_ViewParent__createContextMenu_IMPL_23535_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void Android_android_view_ViewParent__focusableViewAvailable_fn(Android_android_view_ViewParent* __this, ::g::Android::android::view::View* arg0);
void Android_android_view_ViewParent__focusableViewAvailable_IMPL_23533_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void Android_android_view_ViewParent__focusSearch_fn(Android_android_view_ViewParent* __this, ::g::Android::android::view::View* arg0, int* arg1, ::g::Android::android::view::View** __retval);
void Android_android_view_ViewParent__focusSearch_IMPL_23531_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, uObject** __retval);
void Android_android_view_ViewParent__getChildVisibleRect_fn(Android_android_view_ViewParent* __this, ::g::Android::android::view::View* arg0, ::g::Android::android::graphics::Rect* arg1, ::g::Android::android::graphics::Point* arg2, bool* __retval);
void Android_android_view_ViewParent__getChildVisibleRect_IMPL_23530_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_, bool* __retval);
void Android_android_view_ViewParent__getLayoutDirection_fn(Android_android_view_ViewParent* __this, int* __retval);
void Android_android_view_ViewParent__getLayoutDirection_IMPL_23547_fn(bool* arg0_, jobject* arg1_, int* __retval);
void Android_android_view_ViewParent__getParent_fn(Android_android_view_ViewParent* __this, uObject** __retval);
void Android_android_view_ViewParent__getParent_IMPL_23526_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void Android_android_view_ViewParent__getParentForAccessibility_fn(Android_android_view_ViewParent* __this, uObject** __retval);
void Android_android_view_ViewParent__getParentForAccessibility_IMPL_23543_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void Android_android_view_ViewParent__getTextAlignment_fn(Android_android_view_ViewParent* __this, int* __retval);
void Android_android_view_ViewParent__getTextAlignment_IMPL_23553_fn(bool* arg0_, jobject* arg1_, int* __retval);
void Android_android_view_ViewParent__getTextDirection_fn(Android_android_view_ViewParent* __this, int* __retval);
void Android_android_view_ViewParent__getTextDirection_IMPL_23550_fn(bool* arg0_, jobject* arg1_, int* __retval);
void Android_android_view_ViewParent__invalidateChild_fn(Android_android_view_ViewParent* __this, ::g::Android::android::view::View* arg0, ::g::Android::android::graphics::Rect* arg1);
void Android_android_view_ViewParent__invalidateChild_IMPL_23524_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_);
void Android_android_view_ViewParent__invalidateChildInParent_fn(Android_android_view_ViewParent* __this, ::g::Android::Runtime::IntArray* arg0, ::g::Android::android::graphics::Rect* arg1, uObject** __retval);
void Android_android_view_ViewParent__invalidateChildInParent_IMPL_23525_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, uObject** __retval);
void Android_android_view_ViewParent__isLayoutDirectionResolved_fn(Android_android_view_ViewParent* __this, bool* __retval);
void Android_android_view_ViewParent__isLayoutDirectionResolved_IMPL_23546_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void Android_android_view_ViewParent__isLayoutRequested_fn(Android_android_view_ViewParent* __this, bool* __retval);
void Android_android_view_ViewParent__isLayoutRequested_IMPL_23522_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void Android_android_view_ViewParent__isTextAlignmentResolved_fn(Android_android_view_ViewParent* __this, bool* __retval);
void Android_android_view_ViewParent__isTextAlignmentResolved_IMPL_23552_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void Android_android_view_ViewParent__isTextDirectionResolved_fn(Android_android_view_ViewParent* __this, bool* __retval);
void Android_android_view_ViewParent__isTextDirectionResolved_IMPL_23549_fn(bool* arg0_, jobject* arg1_, bool* __retval);
void Android_android_view_ViewParent__notifySubtreeAccessibilityStateChanged_fn(Android_android_view_ViewParent* __this, ::g::Android::android::view::View* arg0, ::g::Android::android::view::View* arg1, int* arg2);
void Android_android_view_ViewParent__notifySubtreeAccessibilityStateChanged_IMPL_23544_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, int* arg4_);
void Android_android_view_ViewParent__recomputeViewAttributes_fn(Android_android_view_ViewParent* __this, ::g::Android::android::view::View* arg0);
void Android_android_view_ViewParent__recomputeViewAttributes_IMPL_23528_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void Android_android_view_ViewParent__requestChildFocus_fn(Android_android_view_ViewParent* __this, ::g::Android::android::view::View* arg0, ::g::Android::android::view::View* arg1);
void Android_android_view_ViewParent__requestChildFocus_IMPL_23527_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_);
void Android_android_view_ViewParent__requestChildRectangleOnScreen_fn(Android_android_view_ViewParent* __this, ::g::Android::android::view::View* arg0, ::g::Android::android::graphics::Rect* arg1, bool* arg2, bool* __retval);
void Android_android_view_ViewParent__requestChildRectangleOnScreen_IMPL_23539_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, bool* arg4_, bool* __retval);
void Android_android_view_ViewParent__requestDisallowInterceptTouchEvent_fn(Android_android_view_ViewParent* __this, bool* arg0);
void Android_android_view_ViewParent__requestDisallowInterceptTouchEvent_IMPL_23538_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void Android_android_view_ViewParent__requestFitSystemWindows_fn(Android_android_view_ViewParent* __this);
void Android_android_view_ViewParent__requestFitSystemWindows_IMPL_23542_fn(bool* arg0_, jobject* arg1_);
void Android_android_view_ViewParent__requestLayout_fn(Android_android_view_ViewParent* __this);
void Android_android_view_ViewParent__requestLayout_IMPL_23521_fn(bool* arg0_, jobject* arg1_);
void Android_android_view_ViewParent__requestSendAccessibilityEvent_fn(Android_android_view_ViewParent* __this, ::g::Android::android::view::View* arg0, ::g::Android::android::view::accessibility::AccessibilityEvent* arg1, bool* __retval);
void Android_android_view_ViewParent__requestSendAccessibilityEvent_IMPL_23540_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, bool* __retval);
void Android_android_view_ViewParent__requestTransparentRegion_fn(Android_android_view_ViewParent* __this, ::g::Android::android::view::View* arg0);
void Android_android_view_ViewParent__requestTransparentRegion_IMPL_23523_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void Android_android_view_ViewParent__showContextMenuForChild_fn(Android_android_view_ViewParent* __this, ::g::Android::android::view::View* arg0, bool* __retval);
void Android_android_view_ViewParent__showContextMenuForChild_IMPL_23534_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval);
void Android_android_view_ViewParent__startActionModeForChild_fn(Android_android_view_ViewParent* __this, ::g::Android::android::view::View* arg0, uObject* arg1, ::g::Android::android::view::ActionMode** __retval);
void Android_android_view_ViewParent__startActionModeForChild_IMPL_23536_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, uObject** __retval);

struct Android_android_view_ViewParent : ::g::Android::java::lang::Object
{
    static jmethodID bringChildToFront_23532_ID_;
    static jmethodID& bringChildToFront_23532_ID() { return bringChildToFront_23532_ID_; }
    static jmethodID canResolveLayoutDirection_23545_ID_;
    static jmethodID& canResolveLayoutDirection_23545_ID() { return canResolveLayoutDirection_23545_ID_; }
    static jmethodID canResolveTextAlignment_23551_ID_;
    static jmethodID& canResolveTextAlignment_23551_ID() { return canResolveTextAlignment_23551_ID_; }
    static jmethodID canResolveTextDirection_23548_ID_;
    static jmethodID& canResolveTextDirection_23548_ID() { return canResolveTextDirection_23548_ID_; }
    static jmethodID childDrawableStateChanged_23537_ID_;
    static jmethodID& childDrawableStateChanged_23537_ID() { return childDrawableStateChanged_23537_ID_; }
    static jmethodID childHasTransientStateChanged_23541_ID_;
    static jmethodID& childHasTransientStateChanged_23541_ID() { return childHasTransientStateChanged_23541_ID_; }
    static jmethodID clearChildFocus_23529_ID_;
    static jmethodID& clearChildFocus_23529_ID() { return clearChildFocus_23529_ID_; }
    static jmethodID createContextMenu_23535_ID_;
    static jmethodID& createContextMenu_23535_ID() { return createContextMenu_23535_ID_; }
    static jmethodID focusableViewAvailable_23533_ID_;
    static jmethodID& focusableViewAvailable_23533_ID() { return focusableViewAvailable_23533_ID_; }
    static jmethodID focusSearch_23531_ID_;
    static jmethodID& focusSearch_23531_ID() { return focusSearch_23531_ID_; }
    static jmethodID getChildVisibleRect_23530_ID_;
    static jmethodID& getChildVisibleRect_23530_ID() { return getChildVisibleRect_23530_ID_; }
    static jmethodID getLayoutDirection_23547_ID_;
    static jmethodID& getLayoutDirection_23547_ID() { return getLayoutDirection_23547_ID_; }
    static jmethodID getParent_23526_ID_;
    static jmethodID& getParent_23526_ID() { return getParent_23526_ID_; }
    static jmethodID getParentForAccessibility_23543_ID_;
    static jmethodID& getParentForAccessibility_23543_ID() { return getParentForAccessibility_23543_ID_; }
    static jmethodID getTextAlignment_23553_ID_;
    static jmethodID& getTextAlignment_23553_ID() { return getTextAlignment_23553_ID_; }
    static jmethodID getTextDirection_23550_ID_;
    static jmethodID& getTextDirection_23550_ID() { return getTextDirection_23550_ID_; }
    static jmethodID invalidateChild_23524_ID_;
    static jmethodID& invalidateChild_23524_ID() { return invalidateChild_23524_ID_; }
    static jmethodID invalidateChildInParent_23525_ID_;
    static jmethodID& invalidateChildInParent_23525_ID() { return invalidateChildInParent_23525_ID_; }
    static jmethodID isLayoutDirectionResolved_23546_ID_;
    static jmethodID& isLayoutDirectionResolved_23546_ID() { return isLayoutDirectionResolved_23546_ID_; }
    static jmethodID isLayoutRequested_23522_ID_;
    static jmethodID& isLayoutRequested_23522_ID() { return isLayoutRequested_23522_ID_; }
    static jmethodID isTextAlignmentResolved_23552_ID_;
    static jmethodID& isTextAlignmentResolved_23552_ID() { return isTextAlignmentResolved_23552_ID_; }
    static jmethodID isTextDirectionResolved_23549_ID_;
    static jmethodID& isTextDirectionResolved_23549_ID() { return isTextDirectionResolved_23549_ID_; }
    static jmethodID notifySubtreeAccessibilityStateChanged_23544_ID_;
    static jmethodID& notifySubtreeAccessibilityStateChanged_23544_ID() { return notifySubtreeAccessibilityStateChanged_23544_ID_; }
    static jmethodID recomputeViewAttributes_23528_ID_;
    static jmethodID& recomputeViewAttributes_23528_ID() { return recomputeViewAttributes_23528_ID_; }
    static jmethodID requestChildFocus_23527_ID_;
    static jmethodID& requestChildFocus_23527_ID() { return requestChildFocus_23527_ID_; }
    static jmethodID requestChildRectangleOnScreen_23539_ID_;
    static jmethodID& requestChildRectangleOnScreen_23539_ID() { return requestChildRectangleOnScreen_23539_ID_; }
    static jmethodID requestDisallowInterceptTouchEvent_23538_ID_;
    static jmethodID& requestDisallowInterceptTouchEvent_23538_ID() { return requestDisallowInterceptTouchEvent_23538_ID_; }
    static jmethodID requestFitSystemWindows_23542_ID_;
    static jmethodID& requestFitSystemWindows_23542_ID() { return requestFitSystemWindows_23542_ID_; }
    static jmethodID requestLayout_23521_ID_;
    static jmethodID& requestLayout_23521_ID() { return requestLayout_23521_ID_; }
    static jmethodID requestSendAccessibilityEvent_23540_ID_;
    static jmethodID& requestSendAccessibilityEvent_23540_ID() { return requestSendAccessibilityEvent_23540_ID_; }
    static jmethodID requestTransparentRegion_23523_ID_;
    static jmethodID& requestTransparentRegion_23523_ID() { return requestTransparentRegion_23523_ID_; }
    static jmethodID showContextMenuForChild_23534_ID_;
    static jmethodID& showContextMenuForChild_23534_ID() { return showContextMenuForChild_23534_ID_; }
    static jmethodID startActionModeForChild_23536_ID_;
    static jmethodID& startActionModeForChild_23536_ID() { return startActionModeForChild_23536_ID_; }

    void bringChildToFront(::g::Android::android::view::View* arg0);
    bool canResolveLayoutDirection();
    bool canResolveTextAlignment();
    bool canResolveTextDirection();
    void childDrawableStateChanged(::g::Android::android::view::View* arg0);
    void childHasTransientStateChanged(::g::Android::android::view::View* arg0, bool arg1);
    void clearChildFocus(::g::Android::android::view::View* arg0);
    void createContextMenu(uObject* arg0);
    void focusableViewAvailable(::g::Android::android::view::View* arg0);
    ::g::Android::android::view::View* focusSearch(::g::Android::android::view::View* arg0, int arg1);
    bool getChildVisibleRect(::g::Android::android::view::View* arg0, ::g::Android::android::graphics::Rect* arg1, ::g::Android::android::graphics::Point* arg2);
    int getLayoutDirection();
    uObject* getParent();
    uObject* getParentForAccessibility();
    int getTextAlignment();
    int getTextDirection();
    void invalidateChild(::g::Android::android::view::View* arg0, ::g::Android::android::graphics::Rect* arg1);
    uObject* invalidateChildInParent(::g::Android::Runtime::IntArray* arg0, ::g::Android::android::graphics::Rect* arg1);
    bool isLayoutDirectionResolved();
    bool isLayoutRequested();
    bool isTextAlignmentResolved();
    bool isTextDirectionResolved();
    void notifySubtreeAccessibilityStateChanged(::g::Android::android::view::View* arg0, ::g::Android::android::view::View* arg1, int arg2);
    void recomputeViewAttributes(::g::Android::android::view::View* arg0);
    void requestChildFocus(::g::Android::android::view::View* arg0, ::g::Android::android::view::View* arg1);
    bool requestChildRectangleOnScreen(::g::Android::android::view::View* arg0, ::g::Android::android::graphics::Rect* arg1, bool arg2);
    void requestDisallowInterceptTouchEvent(bool arg0);
    void requestFitSystemWindows();
    void requestLayout();
    bool requestSendAccessibilityEvent(::g::Android::android::view::View* arg0, ::g::Android::android::view::accessibility::AccessibilityEvent* arg1);
    void requestTransparentRegion(::g::Android::android::view::View* arg0);
    bool showContextMenuForChild(::g::Android::android::view::View* arg0);
    ::g::Android::android::view::ActionMode* startActionModeForChild(::g::Android::android::view::View* arg0, uObject* arg1);
    static void bringChildToFront_IMPL_23532(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool canResolveLayoutDirection_IMPL_23545(bool arg0_, jobject arg1_);
    static bool canResolveTextAlignment_IMPL_23551(bool arg0_, jobject arg1_);
    static bool canResolveTextDirection_IMPL_23548(bool arg0_, jobject arg1_);
    static void childDrawableStateChanged_IMPL_23537(bool arg0_, jobject arg1_, uObject* arg2_);
    static void childHasTransientStateChanged_IMPL_23541(bool arg0_, jobject arg1_, uObject* arg2_, bool arg3_);
    static void clearChildFocus_IMPL_23529(bool arg0_, jobject arg1_, uObject* arg2_);
    static void createContextMenu_IMPL_23535(bool arg0_, jobject arg1_, uObject* arg2_);
    static void focusableViewAvailable_IMPL_23533(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* focusSearch_IMPL_23531(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
    static bool getChildVisibleRect_IMPL_23530(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_);
    static int getLayoutDirection_IMPL_23547(bool arg0_, jobject arg1_);
    static uObject* getParent_IMPL_23526(bool arg0_, jobject arg1_);
    static uObject* getParentForAccessibility_IMPL_23543(bool arg0_, jobject arg1_);
    static int getTextAlignment_IMPL_23553(bool arg0_, jobject arg1_);
    static int getTextDirection_IMPL_23550(bool arg0_, jobject arg1_);
    static void invalidateChild_IMPL_23524(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
    static uObject* invalidateChildInParent_IMPL_23525(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
    static bool isLayoutDirectionResolved_IMPL_23546(bool arg0_, jobject arg1_);
    static bool isLayoutRequested_IMPL_23522(bool arg0_, jobject arg1_);
    static bool isTextAlignmentResolved_IMPL_23552(bool arg0_, jobject arg1_);
    static bool isTextDirectionResolved_IMPL_23549(bool arg0_, jobject arg1_);
    static void notifySubtreeAccessibilityStateChanged_IMPL_23544(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, int arg4_);
    static void recomputeViewAttributes_IMPL_23528(bool arg0_, jobject arg1_, uObject* arg2_);
    static void requestChildFocus_IMPL_23527(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
    static bool requestChildRectangleOnScreen_IMPL_23539(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, bool arg4_);
    static void requestDisallowInterceptTouchEvent_IMPL_23538(bool arg0_, jobject arg1_, bool arg2_);
    static void requestFitSystemWindows_IMPL_23542(bool arg0_, jobject arg1_);
    static void requestLayout_IMPL_23521(bool arg0_, jobject arg1_);
    static bool requestSendAccessibilityEvent_IMPL_23540(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
    static void requestTransparentRegion_IMPL_23523(bool arg0_, jobject arg1_, uObject* arg2_);
    static bool showContextMenuForChild_IMPL_23534(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* startActionModeForChild_IMPL_23536(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
};
// }

}}} // ::g::Android::Fallbacks
