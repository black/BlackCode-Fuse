#include <app/Android.android.os.Build.h>
#include <app/Android.android.os.BuildDLRVERSION.h>
#include <app/Android.android.os.Bundle.h>
#include <app/Android.android.os.Handler.h>
#include <app/Android.android.os.IBinder.h>
#include <app/Android.android.os.IBinderDLRDeathRecipient.h>
#include <app/Android.android.os.IInterface.h>
#include <app/Android.android.os.Message.h>
#include <app/Android.android.os.Parcel.h>
#include <app/Android.android.os.Parcelable.h>
#include <app/Android.android.os.Vibrator.h>
#include <app/Android.Base.AndroidBindingMacros.h>
#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.jfieldID.h>
#include <app/Android.Base.Primitives.jmethodID.h>
#include <app/Android.Base.Primitives.ujclass.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Android.Fallbacks.Android_android_os_IBinder.h>
#include <app/Android.Fallbacks.Android_android_os_IBinderDLRDeathRecipient.h>
#include <app/Android.Fallbacks.Android_android_os_IInterface.h>
#include <app/Android.Fallbacks.Android_android_os_Parcelable.h>
#include <app/Android.Fallbacks.Android_android_os_Vibrator.h>
#include <app/Android.java.io.FileDescriptor.h>
#include <app/Android.java.lang.String.h>
#include <app/Android.Runtime.ObjectArray__Android_java_lang_String.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.Long.h>

namespace app {
namespace Android {
namespace android {
namespace os {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\os\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Build___javaClass_2;
jfieldID Build__MODEL_13483_ID;
jfieldID Build__SERIAL_13487_ID;

Build__uType* Build__typeof()
{
    static ::uStaticStrong<Build__uType*> type;
    if (type != NULL) return type;

    type = (Build__uType*)::uAllocClassType(sizeof(Build__uType), "Android.android.os.Build", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Build__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Build__uType, __interface_1));

    type->SetFields(3,
        ::uNewField("_javaClass", &Build___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("MODEL_13483_ID", &Build__MODEL_13483_ID, 0, ::app::Android::Base::Primitives::jfieldID__typeof()),
        ::uNewField("SERIAL_13487_ID", &Build__SERIAL_13487_ID, 0, ::app::Android::Base::Primitives::jfieldID__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("_Init", Build___Init_2, 0, true),
        ::uNewFunction("get_MODEL", Build__get_MODEL, 0, true, ::app::Android::java::lang::String__typeof()),
        ::uNewFunction("get_SERIAL", Build__get_SERIAL, 0, true, ::app::Android::java::lang::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void Build___Init_2(::uStatic* __this)
{
    if (::app::Android::android::os::Build___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::os::Build___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/os/Build"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::os::Build___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.os.Build'", 40);; }
}

::app::Android::java::lang::String* Build__get_MODEL(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::os::Build___javaClass_2,::app::Android::android::os::Build___Init_2(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::os::Build__MODEL_13483_ID)) {;
    CACHE_FIELD(::app::Android::android::os::Build__MODEL_13483_ID,::app::Android::android::os::Build___javaClass_2,"MODEL","Ljava/lang/String;",GetStaticFieldID,"Id for field Build.MODEL could not be cached",44);
    ::uExitCritical();;
    };
    ::app::Android::java::lang::String* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(::app::Android::android::os::Build___javaClass_2, ::app::Android::android::os::Build__MODEL_13483_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);;
    return ::uCast< ::app::Android::java::lang::String*>(result, ::app::Android::java::lang::String__typeof());
}

::app::Android::java::lang::String* Build__get_SERIAL(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::os::Build___javaClass_2,::app::Android::android::os::Build___Init_2(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::os::Build__SERIAL_13487_ID)) {;
    CACHE_FIELD(::app::Android::android::os::Build__SERIAL_13487_ID,::app::Android::android::os::Build___javaClass_2,"SERIAL","Ljava/lang/String;",GetStaticFieldID,"Id for field Build.SERIAL could not be cached",45);
    ::uExitCritical();;
    };
    ::app::Android::java::lang::String* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(::app::Android::android::os::Build___javaClass_2, ::app::Android::android::os::Build__SERIAL_13487_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);;
    return ::uCast< ::app::Android::java::lang::String*>(result, ::app::Android::java::lang::String__typeof());
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\os\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass BuildDLRVERSION___javaClass_2;
jfieldID BuildDLRVERSION__SDK_INT_13449_ID;

BuildDLRVERSION__uType* BuildDLRVERSION__typeof()
{
    static ::uStaticStrong<BuildDLRVERSION__uType*> type;
    if (type != NULL) return type;

    type = (BuildDLRVERSION__uType*)::uAllocClassType(sizeof(BuildDLRVERSION__uType), "Android.android.os.BuildDLRVERSION", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(BuildDLRVERSION__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(BuildDLRVERSION__uType, __interface_1));

    type->SetFields(2,
        ::uNewField("_javaClass", &BuildDLRVERSION___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("SDK_INT_13449_ID", &BuildDLRVERSION__SDK_INT_13449_ID, 0, ::app::Android::Base::Primitives::jfieldID__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("_Init", BuildDLRVERSION___Init_2, 0, true),
        ::uNewFunction("get_SDK_INT", BuildDLRVERSION__get_SDK_INT, 0, true, ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void BuildDLRVERSION___Init_2(::uStatic* __this)
{
    if (::app::Android::android::os::BuildDLRVERSION___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::os::BuildDLRVERSION___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/os/Build$VERSION"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::os::BuildDLRVERSION___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.os.Build$VERSION'", 48);; }
}

int BuildDLRVERSION__get_SDK_INT(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::os::BuildDLRVERSION___javaClass_2,::app::Android::android::os::BuildDLRVERSION___Init_2(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::os::BuildDLRVERSION__SDK_INT_13449_ID)) {;
    CACHE_FIELD(::app::Android::android::os::BuildDLRVERSION__SDK_INT_13449_ID,::app::Android::android::os::BuildDLRVERSION___javaClass_2,"SDK_INT","I",GetStaticFieldID,"Id for field BuildDLRVERSION.SDK_INT could not be cached",56);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(::app::Android::android::os::BuildDLRVERSION___javaClass_2, ::app::Android::android::os::BuildDLRVERSION__SDK_INT_13449_ID));;
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\os\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Bundle___javaClass_2;
jmethodID Bundle__describeContents_13584_ID;
jmethodID Bundle__toString_13587_ID;
jmethodID Bundle__writeToParcel_13585_ID;

Bundle__uType* Bundle__typeof()
{
    static ::uStaticStrong<Bundle__uType*> type;
    if (type != NULL) return type;

    type = (Bundle__uType*)::uAllocClassType(sizeof(Bundle__uType), "Android.android.os.Bundle", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))Bundle__toString;
    type->__interface_2.__fp_describeContents = (int(*)(void*))Bundle__describeContents;
    type->__interface_2.__fp_writeToParcel = (void(*)(void*, ::app::Android::android::os::Parcel*, int))Bundle__writeToParcel;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Bundle__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Bundle__uType, __interface_1),
        ::app::Android::android::os::Parcelable__typeof(), offsetof(Bundle__uType, __interface_2));

    type->SetFields(4,
        ::uNewField("_javaClass", &Bundle___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("describeContents_13584_ID", &Bundle__describeContents_13584_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("toString_13587_ID", &Bundle__toString_13587_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("writeToParcel_13585_ID", &Bundle__writeToParcel_13585_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("_Init", Bundle___Init_2, 0, true),
        ::uNewFunction("describeContents", Bundle__describeContents, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("describeContents_IMPL_13584", Bundle__describeContents_IMPL_13584, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("toString_IMPL_13587", Bundle__toString_IMPL_13587, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("writeToParcel", Bundle__writeToParcel, 0, false, ::app::Android::android::os::Parcel__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("writeToParcel_IMPL_13585", Bundle__writeToParcel_IMPL_13585, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void Bundle___Init_2(::uStatic* __this)
{
    if (::app::Android::android::os::Bundle___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::os::Bundle___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/os/Bundle"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::os::Bundle___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.os.Bundle'", 41);; }
}

int Bundle__describeContents(Bundle* __this)
{
    return Bundle__describeContents_IMPL_13584(NULL, __this->_subclassed, __this->_javaObject);
}

int Bundle__describeContents_IMPL_13584(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::os::Bundle___javaClass_2,::app::Android::android::os::Bundle___Init_2(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::os::Bundle__describeContents_13584_ID,::app::Android::android::os::Bundle___javaClass_2,"describeContents","()I",GetMethodID,"Id for fallback method android.os.Bundle.describeContents could not be cached",77);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::os::Bundle___javaClass_2, ::app::Android::android::os::Bundle__describeContents_13584_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::os::Bundle__describeContents_13584_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::String* Bundle__toString(Bundle* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(Bundle__toString_IMPL_13587(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* Bundle__toString_IMPL_13587(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::os::Bundle___javaClass_2,::app::Android::android::os::Bundle___Init_2(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::os::Bundle__toString_13587_ID,::app::Android::android::os::Bundle___javaClass_2,"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.os.Bundle.toString could not be cached",69);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::os::Bundle___javaClass_2, ::app::Android::android::os::Bundle__toString_13587_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::os::Bundle__toString_13587_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void Bundle__writeToParcel(Bundle* __this, ::app::Android::android::os::Parcel* arg0, int arg1)
{
    Bundle__writeToParcel_IMPL_13585(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1);
}

void Bundle__writeToParcel_IMPL_13585(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::os::Bundle___javaClass_2,::app::Android::android::os::Bundle___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::os::Bundle__writeToParcel_13585_ID,::app::Android::android::os::Bundle___javaClass_2,"writeToParcel","(Landroid/os/Parcel;I)V",GetMethodID,"Id for fallback method android.os.Bundle.writeToParcel could not be cached",74);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::os::Bundle___javaClass_2, ::app::Android::android::os::Bundle__writeToParcel_13585_ID, _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::os::Bundle__writeToParcel_13585_ID, _obArg2, ((jint)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\os\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Handler___javaClass_2;
jmethodID Handler__toString_13809_ID;

Handler__uType* Handler__typeof()
{
    static ::uStaticStrong<Handler__uType*> type;
    if (type != NULL) return type;

    type = (Handler__uType*)::uAllocClassType(sizeof(Handler__uType), "Android.android.os.Handler", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))Handler__toString;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Handler__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Handler__uType, __interface_1));

    type->SetFields(2,
        ::uNewField("_javaClass", &Handler___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("toString_13809_ID", &Handler__toString_13809_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("_Init", Handler___Init_2, 0, true),
        ::uNewFunction("toString_IMPL_13809", Handler__toString_IMPL_13809, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Handler___Init_2(::uStatic* __this)
{
    if (::app::Android::android::os::Handler___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::os::Handler___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/os/Handler"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::os::Handler___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.os.Handler'", 42);; }
}

::app::Android::java::lang::String* Handler__toString(Handler* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(Handler__toString_IMPL_13809(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* Handler__toString_IMPL_13809(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::os::Handler___javaClass_2,::app::Android::android::os::Handler___Init_2(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::os::Handler__toString_13809_ID,::app::Android::android::os::Handler___javaClass_2,"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.os.Handler.toString could not be cached",70);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::os::Handler___javaClass_2, ::app::Android::android::os::Handler__toString_13809_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::os::Handler__toString_13809_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\os\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IBinder__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Android.android.os.IBinder");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\os\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IBinderDLRDeathRecipient__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Android.android.os.IBinderDLRDeathRecipient");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\os\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IInterface__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Android.android.os.IInterface");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\os\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Message___javaClass_2;
jmethodID Message__describeContents_13886_ID;
jmethodID Message__toString_13885_ID;
jmethodID Message__writeToParcel_13887_ID;

Message__uType* Message__typeof()
{
    static ::uStaticStrong<Message__uType*> type;
    if (type != NULL) return type;

    type = (Message__uType*)::uAllocClassType(sizeof(Message__uType), "Android.android.os.Message", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))Message__toString;
    type->__interface_2.__fp_describeContents = (int(*)(void*))Message__describeContents;
    type->__interface_2.__fp_writeToParcel = (void(*)(void*, ::app::Android::android::os::Parcel*, int))Message__writeToParcel;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Message__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Message__uType, __interface_1),
        ::app::Android::android::os::Parcelable__typeof(), offsetof(Message__uType, __interface_2));

    type->SetFields(4,
        ::uNewField("_javaClass", &Message___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("describeContents_13886_ID", &Message__describeContents_13886_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("toString_13885_ID", &Message__toString_13885_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()),
        ::uNewField("writeToParcel_13887_ID", &Message__writeToParcel_13887_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("_Init", Message___Init_2, 0, true),
        ::uNewFunction("describeContents", Message__describeContents, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("describeContents_IMPL_13886", Message__describeContents_IMPL_13886, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunction("toString_IMPL_13885", Message__toString_IMPL_13885, 0, true, ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()),
        ::uNewFunctionVoid("writeToParcel", Message__writeToParcel, 0, false, ::app::Android::android::os::Parcel__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("writeToParcel_IMPL_13887", Message__writeToParcel_IMPL_13887, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof(), ::app::Android::Base::Wrappers::IJWrapper__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void Message___Init_2(::uStatic* __this)
{
    if (::app::Android::android::os::Message___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::os::Message___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/os/Message"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::os::Message___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.os.Message'", 42);; }
}

int Message__describeContents(Message* __this)
{
    return Message__describeContents_IMPL_13886(NULL, __this->_subclassed, __this->_javaObject);
}

int Message__describeContents_IMPL_13886(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::os::Message___javaClass_2,::app::Android::android::os::Message___Init_2(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::os::Message__describeContents_13886_ID,::app::Android::android::os::Message___javaClass_2,"describeContents","()I",GetMethodID,"Id for fallback method android.os.Message.describeContents could not be cached",78);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::os::Message___javaClass_2, ::app::Android::android::os::Message__describeContents_13886_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::os::Message__describeContents_13886_ID));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::String* Message__toString(Message* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(Message__toString_IMPL_13885(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* Message__toString_IMPL_13885(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::os::Message___javaClass_2,::app::Android::android::os::Message___Init_2(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::os::Message__toString_13885_ID,::app::Android::android::os::Message___javaClass_2,"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.os.Message.toString could not be cached",70);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::os::Message___javaClass_2, ::app::Android::android::os::Message__toString_13885_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::os::Message__toString_13885_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    return result;
}

void Message__writeToParcel(Message* __this, ::app::Android::android::os::Parcel* arg0, int arg1)
{
    Message__writeToParcel_IMPL_13887(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1);
}

void Message__writeToParcel_IMPL_13887(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::os::Message___javaClass_2,::app::Android::android::os::Message___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::os::Message__writeToParcel_13887_ID,::app::Android::android::os::Message___javaClass_2,"writeToParcel","(Landroid/os/Parcel;I)V",GetMethodID,"Id for fallback method android.os.Message.writeToParcel could not be cached",75);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::os::Message___javaClass_2, ::app::Android::android::os::Message__writeToParcel_13887_ID, _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::os::Message__writeToParcel_13887_ID, _obArg2, ((jint)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\os\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Parcel___javaClass_2;
jmethodID Parcel__finalize_14009_ID;

Parcel__uType* Parcel__typeof()
{
    static ::uStaticStrong<Parcel__uType*> type;
    if (type != NULL) return type;

    type = (Parcel__uType*)::uAllocClassType(sizeof(Parcel__uType), "Android.android.os.Parcel", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_finalize = (void(*)(::app::Android::java::lang::Object*))Parcel__finalize;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Parcel__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Parcel__uType, __interface_1));

    type->SetFields(2,
        ::uNewField("_javaClass", &Parcel___javaClass_2, 0, ::app::Android::Base::Primitives::ujclass__typeof()),
        ::uNewField("finalize_14009_ID", &Parcel__finalize_14009_ID, 0, ::app::Android::Base::Primitives::jmethodID__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("_Init", Parcel___Init_2, 0, true),
        ::uNewFunctionVoid("finalize_IMPL_14009", Parcel__finalize_IMPL_14009, 0, true, ::app::Uno::Bool__typeof(), ::app::Android::Base::Primitives::ujobject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Parcel___Init_2(::uStatic* __this)
{
    if (::app::Android::android::os::Parcel___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::os::Parcel___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/os/Parcel"));
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
    if (!::app::Android::android::os::Parcel___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.os.Parcel'", 41);; }
}

void Parcel__finalize(Parcel* __this)
{
    Parcel__finalize_IMPL_14009(NULL, __this->_subclassed, __this->_javaObject);
}

void Parcel__finalize_IMPL_14009(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::os::Parcel___javaClass_2,::app::Android::android::os::Parcel___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::android::os::Parcel__finalize_14009_ID,::app::Android::android::os::Parcel___javaClass_2,"finalize","()V",GetMethodID,"Id for fallback method android.os.Parcel.finalize could not be cached",69);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::os::Parcel___javaClass_2, ::app::Android::android::os::Parcel__finalize_14009_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::os::Parcel__finalize_14009_ID);
    }
    ::app::Android::Base::JNI__CheckException_1(NULL, U_JNIVAR);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\os\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* Parcelable__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Android.android.os.Parcelable");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.13.2\Android\android\os\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Vibrator__uType* Vibrator__typeof()
{
    static ::uStaticStrong<Vibrator__uType*> type;
    if (type != NULL) return type;

    type = (Vibrator__uType*)::uAllocClassType(sizeof(Vibrator__uType), "Android.android.os.Vibrator", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Vibrator__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Vibrator__uType, __interface_1));

    type->SetFunctions(1,
        ::uNewFunctionVoid("vibrate", type->__fp_vibrate, offsetof(Vibrator__uType, __fp_vibrate), false, ::app::Uno::Long__typeof()));

    ::uRegisterType(type);
    return type;
}

}}}}
