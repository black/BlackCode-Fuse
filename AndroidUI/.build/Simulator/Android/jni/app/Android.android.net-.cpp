#include <app/Android.android.net.Uri.h>
#include <app/Android.android.os.Parcel.h>
#include <app/Android.Base.AndroidBindingMacros.h>
#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.jmethodID.h>
#include <app/Android.Base.Primitives.ujclass.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Android.Fallbacks.Android_android_net_Uri.h>
#include <app/Android.java.lang.Object.h>
#include <app/Android.java.lang.String.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>

namespace app {
namespace Android {
namespace android {
namespace net {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\net\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Uri___javaClass_2;
jmethodID Uri__equals_10991_ID;
jmethodID Uri__hashCode_10992_ID;
jmethodID Uri__parse_10996_ID;

Uri__uType* Uri__typeof()
{
    static ::uStaticStrong<Uri__uType*> type;
    if (type != NULL) return type;

    type = (Uri__uType*)::uAllocClassType(sizeof(Uri__uType), "Android.android.net.Uri", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_equals_1 = (bool(*)(::app::Android::java::lang::Object*, ::app::Android::java::lang::Object*))Uri__equals_1;
    type->__fp_hashCode_1 = (int(*)(::app::Android::java::lang::Object*))Uri__hashCode_1;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Uri__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Uri__uType, __interface_1),
        ::app::Android::android::os::Parcelable__typeof(), offsetof(Uri__uType, __interface_2));

    type->SetFields(4,
        ::uNewField("_javaClass", &Uri___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("equals_10991_ID", &Uri__equals_10991_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("hashCode_10992_ID", &Uri__hashCode_10992_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("parse_10996_ID", &Uri__parse_10996_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(7,
        ::uNewFunctionVoid("_Init", Uri___Init_2, 0, true),
        ::uNewFunction("describeContents", type->__fp_describeContents, offsetof(Uri__uType, __fp_describeContents), false, ::app::Uno::Int__typeof()),
        ::uNewFunction("equals_IMPL_10991", Uri__equals_IMPL_10991, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunction("hashCode_IMPL_10992", Uri__hashCode_IMPL_10992, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("parse", Uri__parse, 0, true, Uri__typeof(), ::app::Android::java::lang::String__typeof()),
        ::uNewFunction("parse_IMPL_10996", Uri__parse_IMPL_10996, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof()),
        ::uNewFunctionVoid("writeToParcel", type->__fp_writeToParcel, offsetof(Uri__uType, __fp_writeToParcel), false, ::app::Android::android::os::Parcel__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void Uri___Init_2(::uStatic* __this)
{
    if (::app::Android::android::net::Uri___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::net::Uri___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/net/Uri"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::net::Uri___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.net.Uri'", 39);; }
}

bool Uri__equals_1(Uri* __this, ::app::Android::java::lang::Object* arg0)
{
    return Uri__equals_IMPL_10991(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool Uri__equals_IMPL_10991(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::net::Uri___javaClass_2,::app::Android::android::net::Uri___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::net::Uri__equals_10991_ID,::app::Android::android::net::Uri___javaClass_2,"equals","(Ljava/lang/Object;)Z",GetMethodID,"Id for fallback method android.net.Uri.equals could not be cached",65);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::net::Uri___javaClass_2, ::app::Android::android::net::Uri__equals_10991_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::net::Uri__equals_10991_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

int Uri__hashCode_1(Uri* __this)
{
    return Uri__hashCode_IMPL_10992(NULL, __this->_subclassed, __this->_javaObject);
}

int Uri__hashCode_IMPL_10992(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::net::Uri___javaClass_2,::app::Android::android::net::Uri___Init_2(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::net::Uri__hashCode_10992_ID,::app::Android::android::net::Uri___javaClass_2,"hashCode","()I",GetMethodID,"Id for fallback method android.net.Uri.hashCode could not be cached",67);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::net::Uri___javaClass_2, ::app::Android::android::net::Uri__hashCode_10992_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::net::Uri__hashCode_10992_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

Uri* Uri__parse(::uStatic* __this, ::app::Android::java::lang::String* arg0)
{
    return ::uCast< Uri*>(Uri__parse_IMPL_10996(NULL, (::uObject*)arg0), Uri__typeof());
}

::uObject* Uri__parse_IMPL_10996(::uStatic* __this, ::uObject* arg0_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::net::Uri___javaClass_2,::app::Android::android::net::Uri___Init_2(NULL));
    jobject _obArg0 = ((!arg0_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0_));
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::net::Uri__parse_10996_ID,::app::Android::android::net::Uri___javaClass_2,"parse","(Ljava/lang/String;)Landroid/net/Uri;",GetStaticMethodID,"Id for fallback method android.net.Uri.parse could not be cached",64);
    NEW_UNO(U_JNIVAR->CallStaticObjectMethod(::app::Android::android::net::Uri___javaClass_2, ::app::Android::android::net::Uri__parse_10996_ID, _obArg0),result,::app::Android::Fallbacks::Android_android_net_Uri__typeof(),Uri*,true,true);
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

}}}}
