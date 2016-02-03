// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\Fallbacks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_VIEW_PARENT_H__
#define __APP_ANDROID_FALLBACKS_ANDROID_ANDROID_VIEW_VIEW_PARENT_H__

#include <app/Android.android.view.ViewParent.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace graphics { struct Point; } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct Rect; } } } }
namespace app { namespace Android { namespace android { namespace view { namespace accessibility { struct AccessibilityEvent; } } } } }
namespace app { namespace Android { namespace android { namespace view { struct ActionMode; } } } }
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }
namespace app { namespace Android { namespace Runtime { struct IntArray; } } }

namespace app {
namespace Android {
namespace Fallbacks {

struct Android_android_view_ViewParent;

extern jmethodID Android_android_view_ViewParent__bringChildToFront_23532_ID;
extern jmethodID Android_android_view_ViewParent__canResolveLayoutDirection_23545_ID;
extern jmethodID Android_android_view_ViewParent__canResolveTextAlignment_23551_ID;
extern jmethodID Android_android_view_ViewParent__canResolveTextDirection_23548_ID;
extern jmethodID Android_android_view_ViewParent__childDrawableStateChanged_23537_ID;
extern jmethodID Android_android_view_ViewParent__childHasTransientStateChanged_23541_ID;
extern jmethodID Android_android_view_ViewParent__clearChildFocus_23529_ID;
extern jmethodID Android_android_view_ViewParent__createContextMenu_23535_ID;
extern jmethodID Android_android_view_ViewParent__focusableViewAvailable_23533_ID;
extern jmethodID Android_android_view_ViewParent__focusSearch_23531_ID;
extern jmethodID Android_android_view_ViewParent__getChildVisibleRect_23530_ID;
extern jmethodID Android_android_view_ViewParent__getLayoutDirection_23547_ID;
extern jmethodID Android_android_view_ViewParent__getParent_23526_ID;
extern jmethodID Android_android_view_ViewParent__getParentForAccessibility_23543_ID;
extern jmethodID Android_android_view_ViewParent__getTextAlignment_23553_ID;
extern jmethodID Android_android_view_ViewParent__getTextDirection_23550_ID;
extern jmethodID Android_android_view_ViewParent__invalidateChild_23524_ID;
extern jmethodID Android_android_view_ViewParent__invalidateChildInParent_23525_ID;
extern jmethodID Android_android_view_ViewParent__isLayoutDirectionResolved_23546_ID;
extern jmethodID Android_android_view_ViewParent__isLayoutRequested_23522_ID;
extern jmethodID Android_android_view_ViewParent__isTextAlignmentResolved_23552_ID;
extern jmethodID Android_android_view_ViewParent__isTextDirectionResolved_23549_ID;
extern jmethodID Android_android_view_ViewParent__notifySubtreeAccessibilityStateChanged_23544_ID;
extern jmethodID Android_android_view_ViewParent__recomputeViewAttributes_23528_ID;
extern jmethodID Android_android_view_ViewParent__requestChildFocus_23527_ID;
extern jmethodID Android_android_view_ViewParent__requestChildRectangleOnScreen_23539_ID;
extern jmethodID Android_android_view_ViewParent__requestDisallowInterceptTouchEvent_23538_ID;
extern jmethodID Android_android_view_ViewParent__requestFitSystemWindows_23542_ID;
extern jmethodID Android_android_view_ViewParent__requestLayout_23521_ID;
extern jmethodID Android_android_view_ViewParent__requestSendAccessibilityEvent_23540_ID;
extern jmethodID Android_android_view_ViewParent__requestTransparentRegion_23523_ID;
extern jmethodID Android_android_view_ViewParent__showContextMenuForChild_23534_ID;
extern jmethodID Android_android_view_ViewParent__startActionModeForChild_23536_ID;

struct Android_android_view_ViewParent__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::view::ViewParent __interface_2;
};

Android_android_view_ViewParent__uType* Android_android_view_ViewParent__typeof();

void Android_android_view_ViewParent__bringChildToFront(Android_android_view_ViewParent* __this, ::app::Android::android::view::View* arg0);
void Android_android_view_ViewParent__bringChildToFront_IMPL_23532(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool Android_android_view_ViewParent__canResolveLayoutDirection(Android_android_view_ViewParent* __this);
bool Android_android_view_ViewParent__canResolveLayoutDirection_IMPL_23545(::uStatic* __this, bool arg0_, jobject arg1_);
bool Android_android_view_ViewParent__canResolveTextAlignment(Android_android_view_ViewParent* __this);
bool Android_android_view_ViewParent__canResolveTextAlignment_IMPL_23551(::uStatic* __this, bool arg0_, jobject arg1_);
bool Android_android_view_ViewParent__canResolveTextDirection(Android_android_view_ViewParent* __this);
bool Android_android_view_ViewParent__canResolveTextDirection_IMPL_23548(::uStatic* __this, bool arg0_, jobject arg1_);
void Android_android_view_ViewParent__childDrawableStateChanged(Android_android_view_ViewParent* __this, ::app::Android::android::view::View* arg0);
void Android_android_view_ViewParent__childDrawableStateChanged_IMPL_23537(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void Android_android_view_ViewParent__childHasTransientStateChanged(Android_android_view_ViewParent* __this, ::app::Android::android::view::View* arg0, bool arg1);
void Android_android_view_ViewParent__childHasTransientStateChanged_IMPL_23541(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, bool arg3_);
void Android_android_view_ViewParent__clearChildFocus(Android_android_view_ViewParent* __this, ::app::Android::android::view::View* arg0);
void Android_android_view_ViewParent__clearChildFocus_IMPL_23529(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void Android_android_view_ViewParent__createContextMenu(Android_android_view_ViewParent* __this, ::uObject* arg0);
void Android_android_view_ViewParent__createContextMenu_IMPL_23535(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void Android_android_view_ViewParent__focusableViewAvailable(Android_android_view_ViewParent* __this, ::app::Android::android::view::View* arg0);
void Android_android_view_ViewParent__focusableViewAvailable_IMPL_23533(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
::app::Android::android::view::View* Android_android_view_ViewParent__focusSearch(Android_android_view_ViewParent* __this, ::app::Android::android::view::View* arg0, int arg1);
::uObject* Android_android_view_ViewParent__focusSearch_IMPL_23531(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);
bool Android_android_view_ViewParent__getChildVisibleRect(Android_android_view_ViewParent* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::graphics::Rect* arg1, ::app::Android::android::graphics::Point* arg2);
bool Android_android_view_ViewParent__getChildVisibleRect_IMPL_23530(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, ::uObject* arg4_);
int Android_android_view_ViewParent__getLayoutDirection(Android_android_view_ViewParent* __this);
int Android_android_view_ViewParent__getLayoutDirection_IMPL_23547(::uStatic* __this, bool arg0_, jobject arg1_);
::uObject* Android_android_view_ViewParent__getParent(Android_android_view_ViewParent* __this);
::uObject* Android_android_view_ViewParent__getParent_IMPL_23526(::uStatic* __this, bool arg0_, jobject arg1_);
::uObject* Android_android_view_ViewParent__getParentForAccessibility(Android_android_view_ViewParent* __this);
::uObject* Android_android_view_ViewParent__getParentForAccessibility_IMPL_23543(::uStatic* __this, bool arg0_, jobject arg1_);
int Android_android_view_ViewParent__getTextAlignment(Android_android_view_ViewParent* __this);
int Android_android_view_ViewParent__getTextAlignment_IMPL_23553(::uStatic* __this, bool arg0_, jobject arg1_);
int Android_android_view_ViewParent__getTextDirection(Android_android_view_ViewParent* __this);
int Android_android_view_ViewParent__getTextDirection_IMPL_23550(::uStatic* __this, bool arg0_, jobject arg1_);
void Android_android_view_ViewParent__invalidateChild(Android_android_view_ViewParent* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::graphics::Rect* arg1);
void Android_android_view_ViewParent__invalidateChild_IMPL_23524(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_);
::uObject* Android_android_view_ViewParent__invalidateChildInParent(Android_android_view_ViewParent* __this, ::app::Android::Runtime::IntArray* arg0, ::app::Android::android::graphics::Rect* arg1);
::uObject* Android_android_view_ViewParent__invalidateChildInParent_IMPL_23525(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_);
bool Android_android_view_ViewParent__isLayoutDirectionResolved(Android_android_view_ViewParent* __this);
bool Android_android_view_ViewParent__isLayoutDirectionResolved_IMPL_23546(::uStatic* __this, bool arg0_, jobject arg1_);
bool Android_android_view_ViewParent__isLayoutRequested(Android_android_view_ViewParent* __this);
bool Android_android_view_ViewParent__isLayoutRequested_IMPL_23522(::uStatic* __this, bool arg0_, jobject arg1_);
bool Android_android_view_ViewParent__isTextAlignmentResolved(Android_android_view_ViewParent* __this);
bool Android_android_view_ViewParent__isTextAlignmentResolved_IMPL_23552(::uStatic* __this, bool arg0_, jobject arg1_);
bool Android_android_view_ViewParent__isTextDirectionResolved(Android_android_view_ViewParent* __this);
bool Android_android_view_ViewParent__isTextDirectionResolved_IMPL_23549(::uStatic* __this, bool arg0_, jobject arg1_);
void Android_android_view_ViewParent__notifySubtreeAccessibilityStateChanged(Android_android_view_ViewParent* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::view::View* arg1, int arg2);
void Android_android_view_ViewParent__notifySubtreeAccessibilityStateChanged_IMPL_23544(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, int arg4_);
void Android_android_view_ViewParent__recomputeViewAttributes(Android_android_view_ViewParent* __this, ::app::Android::android::view::View* arg0);
void Android_android_view_ViewParent__recomputeViewAttributes_IMPL_23528(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void Android_android_view_ViewParent__requestChildFocus(Android_android_view_ViewParent* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::view::View* arg1);
void Android_android_view_ViewParent__requestChildFocus_IMPL_23527(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_);
bool Android_android_view_ViewParent__requestChildRectangleOnScreen(Android_android_view_ViewParent* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::graphics::Rect* arg1, bool arg2);
bool Android_android_view_ViewParent__requestChildRectangleOnScreen_IMPL_23539(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, bool arg4_);
void Android_android_view_ViewParent__requestDisallowInterceptTouchEvent(Android_android_view_ViewParent* __this, bool arg0);
void Android_android_view_ViewParent__requestDisallowInterceptTouchEvent_IMPL_23538(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void Android_android_view_ViewParent__requestFitSystemWindows(Android_android_view_ViewParent* __this);
void Android_android_view_ViewParent__requestFitSystemWindows_IMPL_23542(::uStatic* __this, bool arg0_, jobject arg1_);
void Android_android_view_ViewParent__requestLayout(Android_android_view_ViewParent* __this);
void Android_android_view_ViewParent__requestLayout_IMPL_23521(::uStatic* __this, bool arg0_, jobject arg1_);
bool Android_android_view_ViewParent__requestSendAccessibilityEvent(Android_android_view_ViewParent* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::view::accessibility::AccessibilityEvent* arg1);
bool Android_android_view_ViewParent__requestSendAccessibilityEvent_IMPL_23540(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_);
void Android_android_view_ViewParent__requestTransparentRegion(Android_android_view_ViewParent* __this, ::app::Android::android::view::View* arg0);
void Android_android_view_ViewParent__requestTransparentRegion_IMPL_23523(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool Android_android_view_ViewParent__showContextMenuForChild(Android_android_view_ViewParent* __this, ::app::Android::android::view::View* arg0);
bool Android_android_view_ViewParent__showContextMenuForChild_IMPL_23534(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
::app::Android::android::view::ActionMode* Android_android_view_ViewParent__startActionModeForChild(Android_android_view_ViewParent* __this, ::app::Android::android::view::View* arg0, ::uObject* arg1);
::uObject* Android_android_view_ViewParent__startActionModeForChild_IMPL_23536(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_);

struct Android_android_view_ViewParent : ::app::Android::java::lang::Object
{
    void bringChildToFront(::app::Android::android::view::View* arg0) { Android_android_view_ViewParent__bringChildToFront(this, arg0); }
    bool canResolveLayoutDirection() { return Android_android_view_ViewParent__canResolveLayoutDirection(this); }
    bool canResolveTextAlignment() { return Android_android_view_ViewParent__canResolveTextAlignment(this); }
    bool canResolveTextDirection() { return Android_android_view_ViewParent__canResolveTextDirection(this); }
    void childDrawableStateChanged(::app::Android::android::view::View* arg0) { Android_android_view_ViewParent__childDrawableStateChanged(this, arg0); }
    void childHasTransientStateChanged(::app::Android::android::view::View* arg0, bool arg1) { Android_android_view_ViewParent__childHasTransientStateChanged(this, arg0, arg1); }
    void clearChildFocus(::app::Android::android::view::View* arg0) { Android_android_view_ViewParent__clearChildFocus(this, arg0); }
    void createContextMenu(::uObject* arg0) { Android_android_view_ViewParent__createContextMenu(this, arg0); }
    void focusableViewAvailable(::app::Android::android::view::View* arg0) { Android_android_view_ViewParent__focusableViewAvailable(this, arg0); }
    ::app::Android::android::view::View* focusSearch(::app::Android::android::view::View* arg0, int arg1) { return Android_android_view_ViewParent__focusSearch(this, arg0, arg1); }
    bool getChildVisibleRect(::app::Android::android::view::View* arg0, ::app::Android::android::graphics::Rect* arg1, ::app::Android::android::graphics::Point* arg2) { return Android_android_view_ViewParent__getChildVisibleRect(this, arg0, arg1, arg2); }
    int getLayoutDirection() { return Android_android_view_ViewParent__getLayoutDirection(this); }
    ::uObject* getParent() { return Android_android_view_ViewParent__getParent(this); }
    ::uObject* getParentForAccessibility() { return Android_android_view_ViewParent__getParentForAccessibility(this); }
    int getTextAlignment() { return Android_android_view_ViewParent__getTextAlignment(this); }
    int getTextDirection() { return Android_android_view_ViewParent__getTextDirection(this); }
    void invalidateChild(::app::Android::android::view::View* arg0, ::app::Android::android::graphics::Rect* arg1) { Android_android_view_ViewParent__invalidateChild(this, arg0, arg1); }
    ::uObject* invalidateChildInParent(::app::Android::Runtime::IntArray* arg0, ::app::Android::android::graphics::Rect* arg1) { return Android_android_view_ViewParent__invalidateChildInParent(this, arg0, arg1); }
    bool isLayoutDirectionResolved() { return Android_android_view_ViewParent__isLayoutDirectionResolved(this); }
    bool isLayoutRequested() { return Android_android_view_ViewParent__isLayoutRequested(this); }
    bool isTextAlignmentResolved() { return Android_android_view_ViewParent__isTextAlignmentResolved(this); }
    bool isTextDirectionResolved() { return Android_android_view_ViewParent__isTextDirectionResolved(this); }
    void notifySubtreeAccessibilityStateChanged(::app::Android::android::view::View* arg0, ::app::Android::android::view::View* arg1, int arg2) { Android_android_view_ViewParent__notifySubtreeAccessibilityStateChanged(this, arg0, arg1, arg2); }
    void recomputeViewAttributes(::app::Android::android::view::View* arg0) { Android_android_view_ViewParent__recomputeViewAttributes(this, arg0); }
    void requestChildFocus(::app::Android::android::view::View* arg0, ::app::Android::android::view::View* arg1) { Android_android_view_ViewParent__requestChildFocus(this, arg0, arg1); }
    bool requestChildRectangleOnScreen(::app::Android::android::view::View* arg0, ::app::Android::android::graphics::Rect* arg1, bool arg2) { return Android_android_view_ViewParent__requestChildRectangleOnScreen(this, arg0, arg1, arg2); }
    void requestDisallowInterceptTouchEvent(bool arg0) { Android_android_view_ViewParent__requestDisallowInterceptTouchEvent(this, arg0); }
    void requestFitSystemWindows() { Android_android_view_ViewParent__requestFitSystemWindows(this); }
    void requestLayout() { Android_android_view_ViewParent__requestLayout(this); }
    bool requestSendAccessibilityEvent(::app::Android::android::view::View* arg0, ::app::Android::android::view::accessibility::AccessibilityEvent* arg1) { return Android_android_view_ViewParent__requestSendAccessibilityEvent(this, arg0, arg1); }
    void requestTransparentRegion(::app::Android::android::view::View* arg0) { Android_android_view_ViewParent__requestTransparentRegion(this, arg0); }
    bool showContextMenuForChild(::app::Android::android::view::View* arg0) { return Android_android_view_ViewParent__showContextMenuForChild(this, arg0); }
    ::app::Android::android::view::ActionMode* startActionModeForChild(::app::Android::android::view::View* arg0, ::uObject* arg1) { return Android_android_view_ViewParent__startActionModeForChild(this, arg0, arg1); }
};

}}}


#endif
