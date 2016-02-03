// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_FOCUS_CHANGED_LISTENER_H__
#define __APP_FUSE_ANDROID_FOCUS_CHANGED_LISTENER_H__

#include <app/Android.android.view.ViewDLROnFocusChangeListener.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }

namespace app {
namespace Fuse {
namespace Android {

struct FocusChangedListener;

extern jclass FocusChangedListener___javaClass_2;

struct FocusChangedListener__uType : ::app::Android::java::lang::Object__uType
{
    ::app::Android::android::view::ViewDLROnFocusChangeListener __interface_2;
};

FocusChangedListener__uType* FocusChangedListener__typeof();

void FocusChangedListener___ObjInit_4(FocusChangedListener* __this, ::app::Android::android::view::View* view, ::uDelegate* handler);
::uObject* FocusChangedListener__AddHandler(::uStatic* __this, ::app::Android::android::view::View* view, ::uDelegate* handler);
void FocusChangedListener__Android_android_view_ViewDLROnFocusChangeListener_onFocusChange(FocusChangedListener* __this, ::app::Android::android::view::View* v, bool hasFocus);
FocusChangedListener* FocusChangedListener__New_5(::uStatic* __this, ::app::Android::android::view::View* view, ::uDelegate* handler);
void FocusChangedListener__Uno_IDisposable_Dispose_1(FocusChangedListener* __this);

struct FocusChangedListener : ::app::Android::java::lang::Object
{
    ::uStrong< ::app::Android::android::view::View*> _view;
    ::uStrong< ::uDelegate*> _handler;

    void _ObjInit_4(::app::Android::android::view::View* view, ::uDelegate* handler) { FocusChangedListener___ObjInit_4(this, view, handler); }
};

}}}


#endif
