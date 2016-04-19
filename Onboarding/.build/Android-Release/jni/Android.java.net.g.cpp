// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.java.lang.Object.h>
#include <Android.java.lang.String.h>
#include <Android.java.net.URL.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Type.h>
static uType* TYPES[3];

namespace g{
namespace Android{
namespace java{
namespace net{

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\java\net\$.uno(6868)
// -----------------------------------------------------------------------

// public sealed extern class URL :6868
// {
::g::Android::java::lang::Object_type* URL_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(URL);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.java.net.URL", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_hashCode1 = (void(*)(::g::Android::java::lang::Object*, int*))URL__hashCode1_fn;
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))URL__toString_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::java::lang::Object_typeof();
    ::TYPES[2] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::java::net::URL::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::net::URL::getContent_32569_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::net::URL::hashCode_32568_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::net::URL::toString_32575_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::net::URL::URL_32558_ID_c_, uFieldFlagsStatic);
    return type;
}

// public URL(Android.java.lang.String arg0) :6875
void URL__ctor_5_fn(URL* __this, ::g::Android::java::lang::String* arg0)
{
    __this->ctor_5(arg0);
}

// public static extern new void _Init() :6872
void URL___Init2_fn()
{
    URL::_Init2();
}

// public Android.java.lang.Object getContent() :7011
void URL__getContent_fn(URL* __this, ::g::Android::java::lang::Object** __retval)
{
    *__retval = __this->getContent();
}

// public static extern Android.Base.Wrappers.IJWrapper getContent_IMPL_32569(bool arg0, Android.Base.Primitives.ujobject arg1) :7147
void URL__getContent_IMPL_32569_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = URL::getContent_IMPL_32569(*arg0_, *arg1_);
}

// public override sealed int hashCode() :7005
void URL__hashCode1_fn(URL* __this, int* __retval)
{
    return *__retval = URL::hashCode_IMPL_32568(__this->_subclassed, __this->_javaObject), void();
}

// public static extern int hashCode_IMPL_32568(bool arg0, Android.Base.Primitives.ujobject arg1) :7144
void URL__hashCode_IMPL_32568_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = URL::hashCode_IMPL_32568(*arg0_, *arg1_);
}

// public URL New(Android.java.lang.String arg0) :6875
void URL__New6_fn(::g::Android::java::lang::String* arg0, URL** __retval)
{
    *__retval = URL::New6(arg0);
}

// public override sealed Android.java.lang.String toString() :7047
void URL__toString_fn(URL* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(URL::toString_IMPL_32575(__this->_subclassed, __this->_javaObject), ::TYPES[2/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_32575(bool arg0, Android.Base.Primitives.ujobject arg1) :7165
void URL__toString_IMPL_32575_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = URL::toString_IMPL_32575(*arg0_, *arg1_);
}

jclass URL::_javaClass2_;
jmethodID URL::getContent_32569_ID_;
jmethodID URL::hashCode_32568_ID_;
jmethodID URL::toString_32575_ID_;
jmethodID URL::URL_32558_ID_c_;

// public URL(Android.java.lang.String arg0) [instance] :6875
void URL::ctor_5(::g::Android::java::lang::String* arg0)
{
    ctor_3(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(URL::_javaClass2(),URL::_Init2());;
    CACHE_METHOD(URL::URL_32558_ID_c(),URL::_javaClass2(),"<init>","(Ljava/lang/String;)V",GetMethodID,"Id for fallback method java.net.URL.<init> could not be cached",62);;
    jobject _obArg0 = ((!arg0) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(URL::_javaClass2(), URL::URL_32558_ID_c(), _obArg0);;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public Android.java.lang.Object getContent() [instance] :7011
::g::Android::java::lang::Object* URL::getContent()
{
    return uCast< ::g::Android::java::lang::Object*>(URL::getContent_IMPL_32569(_subclassed, _javaObject), ::TYPES[1/*Android.java.lang.Object*/]);
}

// public static extern new void _Init() [static] :6872
void URL::_Init2()
{
    if (URL::_javaClass2()) { return; }
    INIT_JNI;
    URL::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("java/net/URL"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!URL::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'java.net.URL'", 36);; }
}

// public static extern Android.Base.Wrappers.IJWrapper getContent_IMPL_32569(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :7147
uObject* URL::getContent_IMPL_32569(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(URL::_javaClass2(),URL::_Init2());
    
    uObject* result;
    CACHE_METHOD(URL::getContent_32569_ID(),URL::_javaClass2(),"getContent","()Ljava/lang/Object;",GetMethodID,"Id for fallback method java.net.URL.getContent could not be cached",66);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, URL::_javaClass2(), URL::getContent_32569_ID()),result,::g::Android::java::lang::Object_typeof(),::g::Android::java::lang::Object*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, URL::getContent_32569_ID()),result,::g::Android::java::lang::Object_typeof(),::g::Android::java::lang::Object*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int hashCode_IMPL_32568(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :7144
int URL::hashCode_IMPL_32568(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(URL::_javaClass2(),URL::_Init2());
    
    int result;
    CACHE_METHOD(URL::hashCode_32568_ID(),URL::_javaClass2(),"hashCode","()I",GetMethodID,"Id for fallback method java.net.URL.hashCode could not be cached",64);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, URL::_javaClass2(), URL::hashCode_32568_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, URL::hashCode_32568_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public URL New(Android.java.lang.String arg0) [static] :6875
URL* URL::New6(::g::Android::java::lang::String* arg0)
{
    URL* obj2 = (URL*)uNew(URL_typeof());
    obj2->ctor_5(arg0);
    return obj2;
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_32575(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :7165
uObject* URL::toString_IMPL_32575(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(URL::_javaClass2(),URL::_Init2());
    
    uObject* result;
    CACHE_METHOD(URL::toString_32575_ID(),URL::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method java.net.URL.toString could not be cached",64);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, URL::_javaClass2(), URL::toString_32575_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, URL::toString_32575_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

}}}} // ::g::Android::java::net
