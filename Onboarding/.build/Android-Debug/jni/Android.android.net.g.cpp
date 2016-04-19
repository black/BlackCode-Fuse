// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.net.Uri.h>
#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Fallbacks.Android_android_net_Uri.h>
#include <Android.java.lang.String.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
static uType* TYPES[2];

namespace g{
namespace Android{
namespace android{
namespace net{

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\net\$.uno(11)
// ------------------------------------------------------------------------

// public abstract extern class Uri :11
// {
::g::Android::java::lang::Object_type* Uri_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Uri);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.net.Uri", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_hashCode1 = (void(*)(::g::Android::java::lang::Object*, int*))Uri__hashCode1_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::net::Uri::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::net::Uri::hashCode_10992_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::net::Uri::parse_10996_ID_, uFieldFlagsStatic);
    return type;
}

// public static extern new void _Init() :15
void Uri___Init2_fn()
{
    Uri::_Init2();
}

// public override sealed int hashCode() :129
void Uri__hashCode1_fn(Uri* __this, int* __retval)
{
    return *__retval = Uri::hashCode_IMPL_10992(__this->_subclassed, __this->_javaObject), void();
}

// public static extern int hashCode_IMPL_10992(bool arg0, Android.Base.Primitives.ujobject arg1) :247
void Uri__hashCode_IMPL_10992_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Uri::hashCode_IMPL_10992(*arg0_, *arg1_);
}

// public static Android.android.net.Uri parse(Android.java.lang.String arg0) :144
void Uri__parse_fn(::g::Android::java::lang::String* arg0, Uri** __retval)
{
    *__retval = Uri::parse(arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper parse_IMPL_10996(Android.Base.Wrappers.IJWrapper arg0) :253
void Uri__parse_IMPL_10996_fn(uObject* arg0_, uObject** __retval)
{
    *__retval = Uri::parse_IMPL_10996(arg0_);
}

jclass Uri::_javaClass2_;
jmethodID Uri::hashCode_10992_ID_;
jmethodID Uri::parse_10996_ID_;

// public static extern new void _Init() [static] :15
void Uri::_Init2()
{
    if (Uri::_javaClass2()) { return; }
    INIT_JNI;
    Uri::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/net/Uri"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Uri::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.net.Uri'", 39);; }
}

// public static extern int hashCode_IMPL_10992(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :247
int Uri::hashCode_IMPL_10992(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Uri::_javaClass2(),Uri::_Init2());
    
    int result;
    CACHE_METHOD(Uri::hashCode_10992_ID(),Uri::_javaClass2(),"hashCode","()I",GetMethodID,"Id for fallback method android.net.Uri.hashCode could not be cached",67);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, Uri::_javaClass2(), Uri::hashCode_10992_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, Uri::hashCode_10992_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static Android.android.net.Uri parse(Android.java.lang.String arg0) [static] :144
Uri* Uri::parse(::g::Android::java::lang::String* arg0)
{
    return uCast<Uri*>(Uri::parse_IMPL_10996((uObject*)arg0), Uri_typeof());
}

// public static extern Android.Base.Wrappers.IJWrapper parse_IMPL_10996(Android.Base.Wrappers.IJWrapper arg0) [static] :253
uObject* Uri::parse_IMPL_10996(uObject* arg0_)
{
    INIT_JNI;
    CLASS_INIT(Uri::_javaClass2(),Uri::_Init2());
    jobject _obArg0 = ((!arg0_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    CACHE_METHOD(Uri::parse_10996_ID(),Uri::_javaClass2(),"parse","(Ljava/lang/String;)Landroid/net/Uri;",GetStaticMethodID,"Id for fallback method android.net.Uri.parse could not be cached",64);
    NEW_UNO(U_JNIVAR->CallStaticObjectMethod(Uri::_javaClass2(), Uri::parse_10996_ID(), _obArg0),result,::g::Android::Fallbacks::Android_android_net_Uri_typeof(),Uri*,true,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

}}}} // ::g::Android::android::net
