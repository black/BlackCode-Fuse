// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.os.IBinder.h>
#include <Android.android.view.inputmethod.InputMethodManager.h>
#include <Android.android.view.View.h>
#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jfieldID.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
static uType* TYPES[2];

namespace g{
namespace Android{
namespace android{
namespace view{
namespace inputmethod{

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\view\inputmethod\$.uno(2315)
// ---------------------------------------------------------------------------------------

// public sealed extern class InputMethodManager :2315
// {
::g::Android::java::lang::Object_type* InputMethodManager_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(InputMethodManager);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.view.inputmethod.InputMethodManager", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::view::inputmethod::InputMethodManager::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::inputmethod::InputMethodManager::hideSoftInputFromWindow_21465_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::view::inputmethod::InputMethodManager::SHOW_IMPLICIT_21443_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::inputmethod::InputMethodManager::showSoftInput_21463_ID_, uFieldFlagsStatic);
    return type;
}

// public static extern new void _Init() :2319
void InputMethodManager___Init2_fn()
{
    InputMethodManager::_Init2();
}

// public bool hideSoftInputFromWindow(Android.android.os.IBinder arg0, int arg1) :2536
void InputMethodManager__hideSoftInputFromWindow_fn(InputMethodManager* __this, uObject* arg0, int* arg1, bool* __retval)
{
    *__retval = __this->hideSoftInputFromWindow(arg0, *arg1);
}

// public static extern bool hideSoftInputFromWindow_IMPL_21465(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) :2720
void InputMethodManager__hideSoftInputFromWindow_IMPL_21465_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, bool* __retval)
{
    *__retval = InputMethodManager::hideSoftInputFromWindow_IMPL_21465(*arg0_, *arg1_, arg2_, *arg3_);
}

// public static int get_SHOW_IMPLICIT() :2324
void InputMethodManager__get_SHOW_IMPLICIT_fn(int* __retval)
{
    *__retval = InputMethodManager::SHOW_IMPLICIT();
}

// public bool showSoftInput(Android.android.view.View arg0, int arg1) :2524
void InputMethodManager__showSoftInput_fn(InputMethodManager* __this, ::g::Android::android::view::View* arg0, int* arg1, bool* __retval)
{
    *__retval = __this->showSoftInput(arg0, *arg1);
}

// public static extern bool showSoftInput_IMPL_21463(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) :2714
void InputMethodManager__showSoftInput_IMPL_21463_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, bool* __retval)
{
    *__retval = InputMethodManager::showSoftInput_IMPL_21463(*arg0_, *arg1_, arg2_, *arg3_);
}

jclass InputMethodManager::_javaClass2_;
jmethodID InputMethodManager::hideSoftInputFromWindow_21465_ID_;
jfieldID InputMethodManager::SHOW_IMPLICIT_21443_ID_;
jmethodID InputMethodManager::showSoftInput_21463_ID_;

// public bool hideSoftInputFromWindow(Android.android.os.IBinder arg0, int arg1) [instance] :2536
bool InputMethodManager::hideSoftInputFromWindow(uObject* arg0, int arg1)
{
    int arg1_ = arg1;
    return InputMethodManager::hideSoftInputFromWindow_IMPL_21465(_subclassed, _javaObject, arg0, arg1_);
}

// public bool showSoftInput(Android.android.view.View arg0, int arg1) [instance] :2524
bool InputMethodManager::showSoftInput(::g::Android::android::view::View* arg0, int arg1)
{
    int arg1_ = arg1;
    return InputMethodManager::showSoftInput_IMPL_21463(_subclassed, _javaObject, (uObject*)arg0, arg1_);
}

// public static extern new void _Init() [static] :2319
void InputMethodManager::_Init2()
{
    if (InputMethodManager::_javaClass2()) { return; }
    INIT_JNI;
    InputMethodManager::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/inputmethod/InputMethodManager"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!InputMethodManager::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.inputmethod.InputMethodManager'", 67);; }
}

// public static extern bool hideSoftInputFromWindow_IMPL_21465(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) [static] :2720
bool InputMethodManager::hideSoftInputFromWindow_IMPL_21465(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(InputMethodManager::_javaClass2(),InputMethodManager::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(InputMethodManager::hideSoftInputFromWindow_21465_ID(),InputMethodManager::_javaClass2(),"hideSoftInputFromWindow","(Landroid/os/IBinder;I)Z",GetMethodID,"Id for fallback method android.view.inputmethod.InputMethodManager.hideSoftInputFromWindow could not be cached",110);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, InputMethodManager::_javaClass2(), InputMethodManager::hideSoftInputFromWindow_21465_ID(), _obArg2, ((jint)arg3_)));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, InputMethodManager::hideSoftInputFromWindow_21465_ID(), _obArg2, ((jint)arg3_)));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool showSoftInput_IMPL_21463(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) [static] :2714
bool InputMethodManager::showSoftInput_IMPL_21463(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(InputMethodManager::_javaClass2(),InputMethodManager::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(InputMethodManager::showSoftInput_21463_ID(),InputMethodManager::_javaClass2(),"showSoftInput","(Landroid/view/View;I)Z",GetMethodID,"Id for fallback method android.view.inputmethod.InputMethodManager.showSoftInput could not be cached",100);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, InputMethodManager::_javaClass2(), InputMethodManager::showSoftInput_21463_ID(), _obArg2, ((jint)arg3_)));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, InputMethodManager::showSoftInput_21463_ID(), _obArg2, ((jint)arg3_)));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static int get_SHOW_IMPLICIT() [static] :2324
int InputMethodManager::SHOW_IMPLICIT()
{
    INIT_JNI;
    CLASS_INIT(InputMethodManager::_javaClass2(),InputMethodManager::_Init2());
    if (::uEnterCriticalIfNull(&InputMethodManager::SHOW_IMPLICIT_21443_ID())) {;
    CACHE_FIELD(InputMethodManager::SHOW_IMPLICIT_21443_ID(),InputMethodManager::_javaClass2(),"SHOW_IMPLICIT","I",GetStaticFieldID,"Id for field InputMethodManager.SHOW_IMPLICIT could not be cached",65);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(InputMethodManager::_javaClass2(), InputMethodManager::SHOW_IMPLICIT_21443_ID()));;
    return result;
}
// }

}}}}} // ::g::Android::android::view::inputmethod
