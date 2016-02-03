// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\view\inputmethod\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_INPUTMETHOD_INPUT_METHOD_MANAGER_H__
#define __APP_ANDROID_ANDROID_VIEW_INPUTMETHOD_INPUT_METHOD_MANAGER_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }

namespace app {
namespace Android {
namespace android {
namespace view {
namespace inputmethod {

struct InputMethodManager;

extern jclass InputMethodManager___javaClass_2;
extern jmethodID InputMethodManager__hideSoftInputFromWindow_21465_ID;
extern jfieldID InputMethodManager__SHOW_IMPLICIT_21443_ID;
extern jmethodID InputMethodManager__showSoftInput_21463_ID;

struct InputMethodManager__uType : ::app::Android::java::lang::Object__uType
{
};

InputMethodManager__uType* InputMethodManager__typeof();

void InputMethodManager___Init_2(::uStatic* __this);
int InputMethodManager__get_SHOW_IMPLICIT(::uStatic* __this);
bool InputMethodManager__hideSoftInputFromWindow(InputMethodManager* __this, ::uObject* arg0, int arg1);
bool InputMethodManager__hideSoftInputFromWindow_IMPL_21465(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);
bool InputMethodManager__showSoftInput(InputMethodManager* __this, ::app::Android::android::view::View* arg0, int arg1);
bool InputMethodManager__showSoftInput_IMPL_21463(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);

struct InputMethodManager : ::app::Android::java::lang::Object
{
    bool hideSoftInputFromWindow(::uObject* arg0, int arg1) { return InputMethodManager__hideSoftInputFromWindow(this, arg0, arg1); }
    bool showSoftInput(::app::Android::android::view::View* arg0, int arg1) { return InputMethodManager__showSoftInput(this, arg0, arg1); }
};

}}}}}


#endif
