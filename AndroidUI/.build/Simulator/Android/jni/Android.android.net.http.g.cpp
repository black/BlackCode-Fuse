// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.net.http.SslError.h>
#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.java.lang.String.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
static uType* TYPES[2];

namespace g{
namespace Android{
namespace android{
namespace net{
namespace http{

// C:\ProgramData\Uno\Packages\Android\0.19.1\Android\android\net\http\$.uno(607)
// ------------------------------------------------------------------------------

// public sealed extern class SslError :607
// {
::g::Android::java::lang::Object_type* SslError_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(SslError);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.net.http.SslError", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))SslError__toString_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[0] = ::g::Android::java::lang::String_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::net::http::SslError::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::net::http::SslError::toString_10162_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction("_Init", NULL, (void*)SslError___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("toString_IMPL_10162", NULL, (void*)SslError__toString_IMPL_10162_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()));
    return type;
}

// public static extern new void _Init() :611
void SslError___Init2_fn()
{
    SslError::_Init2();
}

// public override sealed Android.java.lang.String toString() :829
void SslError__toString_fn(SslError* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(SslError::toString_IMPL_10162(__this->_subclassed, __this->_javaObject), ::TYPES[0/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_10162(bool arg0, Android.Base.Primitives.ujobject arg1) :855
void SslError__toString_IMPL_10162_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = SslError::toString_IMPL_10162(*arg0_, *arg1_);
}

jclass SslError::_javaClass2_;
jmethodID SslError::toString_10162_ID_;

// public static extern new void _Init() [static] :611
void SslError::_Init2()
{
    if (SslError::_javaClass2()) { return; }
    INIT_JNI;
    SslError::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/net/http/SslError"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!SslError::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.net.http.SslError'", 49);; }
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_10162(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :855
uObject* SslError::toString_IMPL_10162(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(SslError::_javaClass2(),SslError::_Init2());
    
    uObject* result;
    CACHE_METHOD(SslError::toString_10162_ID(),SslError::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.net.http.SslError.toString could not be cached",77);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, SslError::_javaClass2(), SslError::toString_10162_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, SslError::toString_10162_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

}}}}} // ::g::Android::android::net::http
