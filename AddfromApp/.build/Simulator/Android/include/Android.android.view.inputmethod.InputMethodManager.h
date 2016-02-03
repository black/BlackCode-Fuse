// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\view\inputmethod\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace view{namespace inputmethod{struct InputMethodManager;}}}}}
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}

namespace g{
namespace Android{
namespace android{
namespace view{
namespace inputmethod{

// public sealed extern class InputMethodManager :2315
// {
::g::Android::java::lang::Object_type* InputMethodManager_typeof();
void InputMethodManager___Init2_fn();
void InputMethodManager__hideSoftInputFromWindow_fn(InputMethodManager* __this, uObject* arg0, int* arg1, bool* __retval);
void InputMethodManager__hideSoftInputFromWindow_IMPL_21465_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, bool* __retval);
void InputMethodManager__get_SHOW_IMPLICIT_fn(int* __retval);
void InputMethodManager__showSoftInput_fn(InputMethodManager* __this, ::g::Android::android::view::View* arg0, int* arg1, bool* __retval);
void InputMethodManager__showSoftInput_IMPL_21463_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, bool* __retval);

struct InputMethodManager : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID hideSoftInputFromWindow_21465_ID_;
    static jmethodID& hideSoftInputFromWindow_21465_ID() { return hideSoftInputFromWindow_21465_ID_; }
    static jfieldID SHOW_IMPLICIT_21443_ID_;
    static jfieldID& SHOW_IMPLICIT_21443_ID() { return SHOW_IMPLICIT_21443_ID_; }
    static jmethodID showSoftInput_21463_ID_;
    static jmethodID& showSoftInput_21463_ID() { return showSoftInput_21463_ID_; }

    bool hideSoftInputFromWindow(uObject* arg0, int arg1);
    bool showSoftInput(::g::Android::android::view::View* arg0, int arg1);
    static void _Init2();
    static bool hideSoftInputFromWindow_IMPL_21465(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
    static bool showSoftInput_IMPL_21463(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_);
    static int SHOW_IMPLICIT();
};
// }

}}}}} // ::g::Android::android::view::inputmethod
