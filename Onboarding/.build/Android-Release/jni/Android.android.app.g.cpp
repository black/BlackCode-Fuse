// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.app.Activity.h>
#include <Android.android.app.Fragment.h>
#include <Android.android.app.TaskStackBuilder.h>
#include <Android.android.content.Intent.h>
#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.java.lang.Object.h>
#include <Android.java.lang.Runnable.h>
#include <Android.java.lang.String.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Type.h>
static uType* TYPES[4];

namespace g{
namespace Android{
namespace android{
namespace app{

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\app\$.uno(1260)
// --------------------------------------------------------------------------

// public sealed extern class Activity :1260
// {
::g::Android::android::content::Context_type* Activity_typeof()
{
    static uSStrong< ::g::Android::android::content::Context_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Activity);
    options.TypeSize = sizeof(::g::Android::android::content::Context_type);
    type = (::g::Android::android::content::Context_type*)uClassType::New("Android.android.app.Activity", options);
    type->SetBase(::g::Android::android::view::ContextThemeWrapper_typeof());
    type->fp_getSystemService = (void(*)(::g::Android::android::content::Context*, ::g::Android::java::lang::String*, ::g::Android::java::lang::Object**))Activity__getSystemService_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[0] = ::g::Android::java::lang::Object_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[2] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::content::Context_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::content::Context_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::app::Activity::_javaClass5_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::app::Activity::getSystemService_847_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::app::Activity::runOnUiThread_862_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::app::Activity::startActivity_806_ID_, uFieldFlagsStatic);
    return type;
}

// public Activity(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :1265
void Activity__ctor_12_fn(Activity* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType)
{
    __this->ctor_12(*obj, utype, *hasFallbackClass, *resolveType);
}

// public static extern new void _Init() :1264
void Activity___Init5_fn()
{
    Activity::_Init5();
}

// public static Android.android.app.Activity GetAppActivity() :1402
void Activity__GetAppActivity_fn(Activity** __retval)
{
    *__retval = Activity::GetAppActivity();
}

// public override sealed Android.java.lang.Object getSystemService(Android.java.lang.String arg0) :2356
void Activity__getSystemService_fn(Activity* __this, ::g::Android::java::lang::String* arg0, ::g::Android::java::lang::Object** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::Object*>(Activity::getSystemService_IMPL_847(__this->_subclassed, __this->_javaObject, (uObject*)arg0), ::TYPES[0/*Android.java.lang.Object*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper getSystemService_IMPL_847(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :3000
void Activity__getSystemService_IMPL_847_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = Activity::getSystemService_IMPL_847(*arg0_, *arg1_, arg2_);
}

// public Activity New(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :1265
void Activity__New11_fn(jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType, Activity** __retval)
{
    *__retval = Activity::New11(*obj, utype, *hasFallbackClass, *resolveType);
}

// public void runOnUiThread(Android.java.lang.Runnable arg0) :2446
void Activity__runOnUiThread_fn(Activity* __this, uObject* arg0)
{
    __this->runOnUiThread(arg0);
}

// public static extern void runOnUiThread_IMPL_862(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :3045
void Activity__runOnUiThread_IMPL_862_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    Activity::runOnUiThread_IMPL_862(*arg0_, *arg1_, arg2_);
}

// public void startActivity(Android.android.content.Intent arg0) :2110
void Activity__startActivity_fn(Activity* __this, ::g::Android::android::content::Intent* arg0)
{
    __this->startActivity(arg0);
}

// public static extern void startActivity_IMPL_806(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :2877
void Activity__startActivity_IMPL_806_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    Activity::startActivity_IMPL_806(*arg0_, *arg1_, arg2_);
}

jclass Activity::_javaClass5_;
jmethodID Activity::getSystemService_847_ID_;
jmethodID Activity::runOnUiThread_862_ID_;
jmethodID Activity::startActivity_806_ID_;

// public Activity(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [instance] :1265
void Activity::ctor_12(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    ctor_10(obj, utype, hasFallbackClass, resolveType);
}

// public void runOnUiThread(Android.java.lang.Runnable arg0) [instance] :2446
void Activity::runOnUiThread(uObject* arg0)
{
    Activity::runOnUiThread_IMPL_862(_subclassed, _javaObject, arg0);
}

// public void startActivity(Android.android.content.Intent arg0) [instance] :2110
void Activity::startActivity(::g::Android::android::content::Intent* arg0)
{
    Activity::startActivity_IMPL_806(_subclassed, _javaObject, (uObject*)arg0);
}

// public static extern new void _Init() [static] :1264
void Activity::_Init5()
{
    if (Activity::_javaClass5()) { return; }
    INIT_JNI;
    Activity::_javaClass5() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/app/Activity"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Activity::_javaClass5()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.app.Activity'", 44);; }
}

// public static Android.android.app.Activity GetAppActivity() [static] :1402
Activity* Activity::GetAppActivity()
{
    return Activity::New11(::g::Android::Base::JNI::GetActivityObject(), ::g::Android::Base::JNI::GetDefaultType(), false, true);
}

// public static extern Android.Base.Wrappers.IJWrapper getSystemService_IMPL_847(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :3000
uObject* Activity::getSystemService_IMPL_847(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(Activity::_javaClass5(),Activity::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    CACHE_METHOD(Activity::getSystemService_847_ID(),Activity::_javaClass5(),"getSystemService","(Ljava/lang/String;)Ljava/lang/Object;",GetMethodID,"Id for fallback method android.app.Activity.getSystemService could not be cached",80);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Activity::_javaClass5(), Activity::getSystemService_847_ID(), _obArg2),result,::g::Android::java::lang::Object_typeof(),::g::Android::java::lang::Object*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Activity::getSystemService_847_ID(), _obArg2),result,::g::Android::java::lang::Object_typeof(),::g::Android::java::lang::Object*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public Activity New(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [static] :1265
Activity* Activity::New11(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    Activity* obj1 = (Activity*)uNew(Activity_typeof());
    obj1->ctor_12(obj, utype, hasFallbackClass, resolveType);
    return obj1;
}

// public static extern void runOnUiThread_IMPL_862(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :3045
void Activity::runOnUiThread_IMPL_862(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(Activity::_javaClass5(),Activity::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(Activity::runOnUiThread_862_ID(),Activity::_javaClass5(),"runOnUiThread","(Ljava/lang/Runnable;)V",GetMethodID,"Id for fallback method android.app.Activity.runOnUiThread could not be cached",77);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, Activity::_javaClass5(), Activity::runOnUiThread_862_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, Activity::runOnUiThread_862_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void startActivity_IMPL_806(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :2877
void Activity::startActivity_IMPL_806(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(Activity::_javaClass5(),Activity::_Init5());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(Activity::startActivity_806_ID(),Activity::_javaClass5(),"startActivity","(Landroid/content/Intent;)V",GetMethodID,"Id for fallback method android.app.Activity.startActivity could not be cached",77);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, Activity::_javaClass5(), Activity::startActivity_806_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, Activity::startActivity_806_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\app\$.uno(3501)
// --------------------------------------------------------------------------

// public sealed extern class Fragment :3501
// {
::g::Android::java::lang::Object_type* Fragment_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Fragment);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.app.Fragment", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_hashCode1 = (void(*)(::g::Android::java::lang::Object*, int*))Fragment__hashCode1_fn;
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))Fragment__toString_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[3] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::app::Fragment::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::app::Fragment::hashCode_1416_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::app::Fragment::toString_1417_ID_, uFieldFlagsStatic);
    return type;
}

// public static extern new void _Init() :3505
void Fragment___Init2_fn()
{
    Fragment::_Init2();
}

// public override sealed int hashCode() :3541
void Fragment__hashCode1_fn(Fragment* __this, int* __retval)
{
    return *__retval = Fragment::hashCode_IMPL_1416(__this->_subclassed, __this->_javaObject), void();
}

// public static extern int hashCode_IMPL_1416(bool arg0, Android.Base.Primitives.ujobject arg1) :3966
void Fragment__hashCode_IMPL_1416_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Fragment::hashCode_IMPL_1416(*arg0_, *arg1_);
}

// public override sealed Android.java.lang.String toString() :3547
void Fragment__toString_fn(Fragment* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(Fragment::toString_IMPL_1417(__this->_subclassed, __this->_javaObject), ::TYPES[3/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_1417(bool arg0, Android.Base.Primitives.ujobject arg1) :3969
void Fragment__toString_IMPL_1417_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Fragment::toString_IMPL_1417(*arg0_, *arg1_);
}

jclass Fragment::_javaClass2_;
jmethodID Fragment::hashCode_1416_ID_;
jmethodID Fragment::toString_1417_ID_;

// public static extern new void _Init() [static] :3505
void Fragment::_Init2()
{
    if (Fragment::_javaClass2()) { return; }
    INIT_JNI;
    Fragment::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/app/Fragment"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Fragment::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.app.Fragment'", 44);; }
}

// public static extern int hashCode_IMPL_1416(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :3966
int Fragment::hashCode_IMPL_1416(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Fragment::_javaClass2(),Fragment::_Init2());
    
    int result;
    CACHE_METHOD(Fragment::hashCode_1416_ID(),Fragment::_javaClass2(),"hashCode","()I",GetMethodID,"Id for fallback method android.app.Fragment.hashCode could not be cached",72);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, Fragment::_javaClass2(), Fragment::hashCode_1416_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, Fragment::hashCode_1416_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_1417(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :3969
uObject* Fragment::toString_IMPL_1417(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Fragment::_javaClass2(),Fragment::_Init2());
    
    uObject* result;
    CACHE_METHOD(Fragment::toString_1417_ID(),Fragment::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.app.Fragment.toString could not be cached",72);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Fragment::_javaClass2(), Fragment::toString_1417_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Fragment::toString_1417_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\app\$.uno(18066)
// ---------------------------------------------------------------------------

// public sealed extern class TaskStackBuilder :18066
// {
::g::Android::java::lang::Object_type* TaskStackBuilder_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TaskStackBuilder);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.app.TaskStackBuilder", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5);
    return type;
}
// }

}}}} // ::g::Android::android::app