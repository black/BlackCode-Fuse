// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.os.Build.h>
#include <Android.android.os.BuildDLRVERSION.h>
#include <Android.android.os.Bundle.h>
#include <Android.android.os.Handler.h>
#include <Android.android.os.IBinder.h>
#include <Android.android.os.IBinderDLRDeathRecipient.h>
#include <Android.android.os.IInterface.h>
#include <Android.android.os.Looper.h>
#include <Android.android.os.Message.h>
#include <Android.android.os.Parcel.h>
#include <Android.android.os.Parcelable.h>
#include <Android.android.os.Vibrator.h>
#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jfieldID.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Fallbacks.Android_android_os_IBinder.h>
#include <Android.Fallbacks.Android_android_os_IBinderDLRDeathRecipient.h>
#include <Android.Fallbacks.Android_android_os_IInterface.h>
#include <Android.Fallbacks.Android_android_os_Parcelable.h>
#include <Android.Fallbacks.Android_android_os_Vibrator.h>
#include <Android.java.io.FileDescriptor.h>
#include <Android.java.lang.Runnable.h>
#include <Android.java.lang.String.h>
#include <Android.Runtime.ObjectArray-1.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.Type.h>
static uType* TYPES[3];

namespace g{
namespace Android{
namespace android{
namespace os{

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\os\$.uno(2651)
// -------------------------------------------------------------------------

// public sealed extern class Build :2651
// {
::g::Android::java::lang::Object_type* Build_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Build);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.os.Build", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[0] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::os::Build::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::os::Build::MODEL_13483_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::os::Build::SERIAL_13487_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction("_Init", NULL, (void*)Build___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("get_MODEL", NULL, (void*)Build__get_MODEL_fn, 0, true, ::g::Android::java::lang::String_typeof(), 0),
        new uFunction("get_SERIAL", NULL, (void*)Build__get_SERIAL_fn, 0, true, ::g::Android::java::lang::String_typeof(), 0));
    return type;
}

// public static extern new void _Init() :2655
void Build___Init2_fn()
{
    Build::_Init2();
}

// public static Android.java.lang.String get_MODEL() :2830
void Build__get_MODEL_fn(::g::Android::java::lang::String** __retval)
{
    *__retval = Build::MODEL();
}

// public static Android.java.lang.String get_SERIAL() :2898
void Build__get_SERIAL_fn(::g::Android::java::lang::String** __retval)
{
    *__retval = Build::SERIAL();
}

jclass Build::_javaClass2_;
jfieldID Build::MODEL_13483_ID_;
jfieldID Build::SERIAL_13487_ID_;

// public static extern new void _Init() [static] :2655
void Build::_Init2()
{
    if (Build::_javaClass2()) { return; }
    INIT_JNI;
    Build::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/os/Build"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Build::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.os.Build'", 40);; }
}

// public static Android.java.lang.String get_MODEL() [static] :2830
::g::Android::java::lang::String* Build::MODEL()
{
    INIT_JNI;
    CLASS_INIT(Build::_javaClass2(),Build::_Init2());
    if (::uEnterCriticalIfNull(&Build::MODEL_13483_ID())) {;
    CACHE_FIELD(Build::MODEL_13483_ID(),Build::_javaClass2(),"MODEL","Ljava/lang/String;",GetStaticFieldID,"Id for field Build.MODEL could not be cached",44);
    ::uExitCritical();;
    };
    ::g::Android::java::lang::String* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(Build::_javaClass2(), Build::MODEL_13483_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);;
    return uCast< ::g::Android::java::lang::String*>(result, ::TYPES[0/*Android.java.lang.String*/]);
}

// public static Android.java.lang.String get_SERIAL() [static] :2898
::g::Android::java::lang::String* Build::SERIAL()
{
    INIT_JNI;
    CLASS_INIT(Build::_javaClass2(),Build::_Init2());
    if (::uEnterCriticalIfNull(&Build::SERIAL_13487_ID())) {;
    CACHE_FIELD(Build::SERIAL_13487_ID(),Build::_javaClass2(),"SERIAL","Ljava/lang/String;",GetStaticFieldID,"Id for field Build.SERIAL could not be cached",45);
    ::uExitCritical();;
    };
    ::g::Android::java::lang::String* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(Build::_javaClass2(), Build::SERIAL_13487_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);;
    return uCast< ::g::Android::java::lang::String*>(result, ::TYPES[0/*Android.java.lang.String*/]);
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\os\$.uno(2154)
// -------------------------------------------------------------------------

// public sealed extern class BuildDLRVERSION :2154
// {
::g::Android::java::lang::Object_type* BuildDLRVERSION_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(BuildDLRVERSION);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.os.BuildDLRVERSION", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::os::BuildDLRVERSION::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::os::BuildDLRVERSION::SDK_INT_13449_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction("_Init", NULL, (void*)BuildDLRVERSION___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("get_SDK_INT", NULL, (void*)BuildDLRVERSION__get_SDK_INT_fn, 0, true, ::g::Uno::Int_typeof(), 0));
    return type;
}

// public static extern new void _Init() :2158
void BuildDLRVERSION___Init2_fn()
{
    BuildDLRVERSION::_Init2();
}

// public static int get_SDK_INT() :2214
void BuildDLRVERSION__get_SDK_INT_fn(int* __retval)
{
    *__retval = BuildDLRVERSION::SDK_INT();
}

jclass BuildDLRVERSION::_javaClass2_;
jfieldID BuildDLRVERSION::SDK_INT_13449_ID_;

// public static extern new void _Init() [static] :2158
void BuildDLRVERSION::_Init2()
{
    if (BuildDLRVERSION::_javaClass2()) { return; }
    INIT_JNI;
    BuildDLRVERSION::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/os/Build$VERSION"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!BuildDLRVERSION::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.os.Build$VERSION'", 48);; }
}

// public static int get_SDK_INT() [static] :2214
int BuildDLRVERSION::SDK_INT()
{
    INIT_JNI;
    CLASS_INIT(BuildDLRVERSION::_javaClass2(),BuildDLRVERSION::_Init2());
    if (::uEnterCriticalIfNull(&BuildDLRVERSION::SDK_INT_13449_ID())) {;
    CACHE_FIELD(BuildDLRVERSION::SDK_INT_13449_ID(),BuildDLRVERSION::_javaClass2(),"SDK_INT","I",GetStaticFieldID,"Id for field BuildDLRVERSION.SDK_INT could not be cached",56);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(BuildDLRVERSION::_javaClass2(), BuildDLRVERSION::SDK_INT_13449_ID()));;
    return result;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\os\$.uno(3053)
// -------------------------------------------------------------------------

// public sealed extern class Bundle :3053
// {
Bundle_type* Bundle_typeof()
{
    static uSStrong<Bundle_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Bundle);
    options.TypeSize = sizeof(Bundle_type);
    type = (Bundle_type*)uClassType::New("Android.android.os.Bundle", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))Bundle__toString_fn;
    type->interface2.fp_describeContents = (void(*)(uObject*, int*))Bundle__describeContents_fn;
    type->interface2.fp_writeToParcel = (void(*)(uObject*, ::g::Android::android::os::Parcel*, int*))Bundle__writeToParcel_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[0] = ::g::Android::java::lang::String_typeof();
    ::TYPES[2] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Bundle_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Bundle_type, interface1),
        ::g::Android::android::os::Parcelable_typeof(), offsetof(Bundle_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::os::Bundle::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::os::Bundle::describeContents_13584_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::os::Bundle::toString_13587_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::os::Bundle::writeToParcel_13585_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(6,
        new uFunction("_Init", NULL, (void*)Bundle___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("describeContents", NULL, (void*)Bundle__describeContents_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("describeContents_IMPL_13584", NULL, (void*)Bundle__describeContents_IMPL_13584_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("toString_IMPL_13587", NULL, (void*)Bundle__toString_IMPL_13587_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("writeToParcel", NULL, (void*)Bundle__writeToParcel_fn, 0, false, uVoid_typeof(), 2, ::g::Android::android::os::Parcel_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("writeToParcel_IMPL_13585", NULL, (void*)Bundle__writeToParcel_IMPL_13585_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Int_typeof()));
    return type;
}

// public static extern new void _Init() :3057
void Bundle___Init2_fn()
{
    Bundle::_Init2();
}

// public int describeContents() :3649
void Bundle__describeContents_fn(Bundle* __this, int* __retval)
{
    *__retval = __this->describeContents();
}

// public static extern int describeContents_IMPL_13584(bool arg0, Android.Base.Primitives.ujobject arg1) :3924
void Bundle__describeContents_IMPL_13584_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Bundle::describeContents_IMPL_13584(*arg0_, *arg1_);
}

// public override sealed Android.java.lang.String toString() :3667
void Bundle__toString_fn(Bundle* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(Bundle::toString_IMPL_13587(__this->_subclassed, __this->_javaObject), ::TYPES[0/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_13587(bool arg0, Android.Base.Primitives.ujobject arg1) :3933
void Bundle__toString_IMPL_13587_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Bundle::toString_IMPL_13587(*arg0_, *arg1_);
}

// public void writeToParcel(Android.android.os.Parcel arg0, int arg1) :3655
void Bundle__writeToParcel_fn(Bundle* __this, ::g::Android::android::os::Parcel* arg0, int* arg1)
{
    __this->writeToParcel(arg0, *arg1);
}

// public static extern void writeToParcel_IMPL_13585(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) :3927
void Bundle__writeToParcel_IMPL_13585_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_)
{
    Bundle::writeToParcel_IMPL_13585(*arg0_, *arg1_, arg2_, *arg3_);
}

jclass Bundle::_javaClass2_;
jmethodID Bundle::describeContents_13584_ID_;
jmethodID Bundle::toString_13587_ID_;
jmethodID Bundle::writeToParcel_13585_ID_;

// public int describeContents() [instance] :3649
int Bundle::describeContents()
{
    return Bundle::describeContents_IMPL_13584(_subclassed, _javaObject);
}

// public void writeToParcel(Android.android.os.Parcel arg0, int arg1) [instance] :3655
void Bundle::writeToParcel(::g::Android::android::os::Parcel* arg0, int arg1)
{
    int arg1_ = arg1;
    Bundle::writeToParcel_IMPL_13585(_subclassed, _javaObject, (uObject*)arg0, arg1_);
}

// public static extern new void _Init() [static] :3057
void Bundle::_Init2()
{
    if (Bundle::_javaClass2()) { return; }
    INIT_JNI;
    Bundle::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/os/Bundle"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Bundle::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.os.Bundle'", 41);; }
}

// public static extern int describeContents_IMPL_13584(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :3924
int Bundle::describeContents_IMPL_13584(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Bundle::_javaClass2(),Bundle::_Init2());
    
    int result;
    CACHE_METHOD(Bundle::describeContents_13584_ID(),Bundle::_javaClass2(),"describeContents","()I",GetMethodID,"Id for fallback method android.os.Bundle.describeContents could not be cached",77);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, Bundle::_javaClass2(), Bundle::describeContents_13584_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, Bundle::describeContents_13584_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_13587(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :3933
uObject* Bundle::toString_IMPL_13587(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Bundle::_javaClass2(),Bundle::_Init2());
    
    uObject* result;
    CACHE_METHOD(Bundle::toString_13587_ID(),Bundle::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.os.Bundle.toString could not be cached",69);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Bundle::_javaClass2(), Bundle::toString_13587_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Bundle::toString_13587_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void writeToParcel_IMPL_13585(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) [static] :3927
void Bundle::writeToParcel_IMPL_13585(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(Bundle::_javaClass2(),Bundle::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(Bundle::writeToParcel_13585_ID(),Bundle::_javaClass2(),"writeToParcel","(Landroid/os/Parcel;I)V",GetMethodID,"Id for fallback method android.os.Bundle.writeToParcel could not be cached",74);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, Bundle::_javaClass2(), Bundle::writeToParcel_13585_ID(), _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, Bundle::writeToParcel_13585_ID(), _obArg2, ((jint)arg3_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\os\$.uno(11)
// -----------------------------------------------------------------------

// public extern class Handler :11
// {
::g::Android::java::lang::Object_type* Handler_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Handler);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.os.Handler", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))Handler__toString_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[2] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[0] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::os::Handler::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::os::Handler::Handler_13778_ID_c_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::os::Handler::post_13788_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::os::Handler::postDelayed_13791_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::os::Handler::toString_13809_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(7,
        new uFunction("_Init", NULL, (void*)Handler___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Handler__New7_fn, 0, true, Handler_typeof(), 1, ::g::Android::android::os::Looper_typeof()),
        new uFunction("post", NULL, (void*)Handler__post_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::Android::java::lang::Runnable_typeof()),
        new uFunction("post_IMPL_13788", NULL, (void*)Handler__post_IMPL_13788_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("postDelayed", NULL, (void*)Handler__postDelayed_fn, 0, false, ::g::Uno::Bool_typeof(), 2, ::g::Android::java::lang::Runnable_typeof(), ::g::Uno::Long_typeof()),
        new uFunction("postDelayed_IMPL_13791", NULL, (void*)Handler__postDelayed_IMPL_13791_fn, 0, true, ::g::Uno::Bool_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Long_typeof()),
        new uFunction("toString_IMPL_13809", NULL, (void*)Handler__toString_IMPL_13809_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()));
    return type;
}

// public Handler(Android.android.os.Looper arg0) :49
void Handler__ctor_6_fn(Handler* __this, ::g::Android::android::os::Looper* arg0)
{
    __this->ctor_6(arg0);
}

// public static extern new void _Init() :15
void Handler___Init2_fn()
{
    Handler::_Init2();
}

// public Handler New(Android.android.os.Looper arg0) :49
void Handler__New7_fn(::g::Android::android::os::Looper* arg0, Handler** __retval)
{
    *__retval = Handler::New7(arg0);
}

// public bool post(Android.java.lang.Runnable arg0) :130
void Handler__post_fn(Handler* __this, uObject* arg0, bool* __retval)
{
    *__retval = __this->post(arg0);
}

// public static extern bool post_IMPL_13788(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :291
void Handler__post_IMPL_13788_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = Handler::post_IMPL_13788(*arg0_, *arg1_, arg2_);
}

// public bool postDelayed(Android.java.lang.Runnable arg0, long arg1) :148
void Handler__postDelayed_fn(Handler* __this, uObject* arg0, int64_t* arg1, bool* __retval)
{
    *__retval = __this->postDelayed(arg0, *arg1);
}

// public static extern bool postDelayed_IMPL_13791(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, long arg3) :300
void Handler__postDelayed_IMPL_13791_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int64_t* arg3_, bool* __retval)
{
    *__retval = Handler::postDelayed_IMPL_13791(*arg0_, *arg1_, arg2_, *arg3_);
}

// public override sealed Android.java.lang.String toString() :256
void Handler__toString_fn(Handler* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(Handler::toString_IMPL_13809(__this->_subclassed, __this->_javaObject), ::TYPES[0/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_13809(bool arg0, Android.Base.Primitives.ujobject arg1) :354
void Handler__toString_IMPL_13809_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Handler::toString_IMPL_13809(*arg0_, *arg1_);
}

jclass Handler::_javaClass2_;
jmethodID Handler::Handler_13778_ID_c_;
jmethodID Handler::post_13788_ID_;
jmethodID Handler::postDelayed_13791_ID_;
jmethodID Handler::toString_13809_ID_;

// public Handler(Android.android.os.Looper arg0) [instance] :49
void Handler::ctor_6(::g::Android::android::os::Looper* arg0)
{
    ctor_3(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(Handler::_javaClass2(),Handler::_Init2());;
    CACHE_METHOD(Handler::Handler_13778_ID_c(),Handler::_javaClass2(),"<init>","(Landroid/os/Looper;)V",GetMethodID,"Id for fallback method android.os.Handler.<init> could not be cached",68);;
    jobject _obArg0 = ((!arg0) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg0, ::g::Android::Base::Wrappers::IJWrapper_typeof())));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(Handler::_javaClass2(), Handler::Handler_13778_ID_c(), _obArg0);;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public bool post(Android.java.lang.Runnable arg0) [instance] :130
bool Handler::post(uObject* arg0)
{
    return Handler::post_IMPL_13788(_subclassed, _javaObject, arg0);
}

// public bool postDelayed(Android.java.lang.Runnable arg0, long arg1) [instance] :148
bool Handler::postDelayed(uObject* arg0, int64_t arg1)
{
    int64_t arg1_ = arg1;
    return Handler::postDelayed_IMPL_13791(_subclassed, _javaObject, arg0, arg1_);
}

// public static extern new void _Init() [static] :15
void Handler::_Init2()
{
    if (Handler::_javaClass2()) { return; }
    INIT_JNI;
    Handler::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/os/Handler"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Handler::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.os.Handler'", 42);; }
}

// public Handler New(Android.android.os.Looper arg0) [static] :49
Handler* Handler::New7(::g::Android::android::os::Looper* arg0)
{
    Handler* obj4 = (Handler*)uNew(Handler_typeof());
    obj4->ctor_6(arg0);
    return obj4;
}

// public static extern bool post_IMPL_13788(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :291
bool Handler::post_IMPL_13788(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(Handler::_javaClass2(),Handler::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(Handler::post_13788_ID(),Handler::_javaClass2(),"post","(Ljava/lang/Runnable;)Z",GetMethodID,"Id for fallback method android.os.Handler.post could not be cached",66);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, Handler::_javaClass2(), Handler::post_13788_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Handler::post_13788_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool postDelayed_IMPL_13791(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, long arg3) [static] :300
bool Handler::postDelayed_IMPL_13791(bool arg0_, jobject arg1_, uObject* arg2_, int64_t arg3_)
{
    INIT_JNI;
    CLASS_INIT(Handler::_javaClass2(),Handler::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(Handler::postDelayed_13791_ID(),Handler::_javaClass2(),"postDelayed","(Ljava/lang/Runnable;J)Z",GetMethodID,"Id for fallback method android.os.Handler.postDelayed could not be cached",73);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, Handler::_javaClass2(), Handler::postDelayed_13791_ID(), _obArg2, ((jlong)arg3_)));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, Handler::postDelayed_13791_ID(), _obArg2, ((jlong)arg3_)));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_13809(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :354
uObject* Handler::toString_IMPL_13809(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Handler::_javaClass2(),Handler::_Init2());
    
    uObject* result;
    CACHE_METHOD(Handler::toString_13809_ID(),Handler::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.os.Handler.toString could not be cached",70);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Handler::_javaClass2(), Handler::toString_13809_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Handler::toString_13809_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\os\$.uno(11317)
// --------------------------------------------------------------------------

// public abstract extern interface IBinder :11317
// {
uInterfaceType* IBinder_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.os.IBinder", 0, 0);
    type->Reflection.SetFunctions(9,
        new uFunction("dump", NULL, NULL, offsetof(IBinder, fp_dump), false, uVoid_typeof(), 2, ::g::Android::java::io::FileDescriptor_typeof(), ::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::String_typeof())),
        new uFunction("dumpAsync", NULL, NULL, offsetof(IBinder, fp_dumpAsync), false, uVoid_typeof(), 2, ::g::Android::java::io::FileDescriptor_typeof(), ::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::java::lang::String_typeof())),
        new uFunction("getInterfaceDescriptor", NULL, NULL, offsetof(IBinder, fp_getInterfaceDescriptor), false, ::g::Android::java::lang::String_typeof(), 0),
        new uFunction("isBinderAlive", NULL, NULL, offsetof(IBinder, fp_isBinderAlive), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("linkToDeath", NULL, NULL, offsetof(IBinder, fp_linkToDeath), false, uVoid_typeof(), 2, ::g::Android::android::os::IBinderDLRDeathRecipient_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("pingBinder", NULL, NULL, offsetof(IBinder, fp_pingBinder), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("queryLocalInterface", NULL, NULL, offsetof(IBinder, fp_queryLocalInterface), false, ::g::Android::android::os::IInterface_typeof(), 1, ::g::Android::java::lang::String_typeof()),
        new uFunction("transact", NULL, NULL, offsetof(IBinder, fp_transact), false, ::g::Uno::Bool_typeof(), 4, ::g::Uno::Int_typeof(), ::g::Android::android::os::Parcel_typeof(), ::g::Android::android::os::Parcel_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("unlinkToDeath", NULL, NULL, offsetof(IBinder, fp_unlinkToDeath), false, ::g::Uno::Bool_typeof(), 2, ::g::Android::android::os::IBinderDLRDeathRecipient_typeof(), ::g::Uno::Int_typeof()));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\os\$.uno(11301)
// --------------------------------------------------------------------------

// public abstract extern interface IBinderDLRDeathRecipient :11301
// {
uInterfaceType* IBinderDLRDeathRecipient_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.os.IBinderDLRDeathRecipient", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("binderDied", NULL, NULL, offsetof(IBinderDLRDeathRecipient, fp_binderDied), false, uVoid_typeof(), 0));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\os\$.uno(11377)
// --------------------------------------------------------------------------

// public abstract extern interface IInterface :11377
// {
uInterfaceType* IInterface_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.os.IInterface", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("asBinder", NULL, NULL, offsetof(IInterface, fp_asBinder), false, ::g::Android::android::os::IBinder_typeof(), 0));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\os\$.uno(6340)
// -------------------------------------------------------------------------

// public sealed extern class Looper :6340
// {
::g::Android::java::lang::Object_type* Looper_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Looper);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.os.Looper", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))Looper__toString_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[0] = ::g::Android::java::lang::String_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::os::Looper::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::os::Looper::getMainLooper_13840_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::os::Looper::toString_13849_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(4,
        new uFunction("_Init", NULL, (void*)Looper___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("getMainLooper", NULL, (void*)Looper__getMainLooper_fn, 0, true, Looper_typeof(), 0),
        new uFunction("getMainLooper_IMPL_13840", NULL, (void*)Looper__getMainLooper_IMPL_13840_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 0),
        new uFunction("toString_IMPL_13849", NULL, (void*)Looper__toString_IMPL_13849_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()));
    return type;
}

// public static extern new void _Init() :6344
void Looper___Init2_fn()
{
    Looper::_Init2();
}

// public static Android.android.os.Looper getMainLooper() :6359
void Looper__getMainLooper_fn(Looper** __retval)
{
    *__retval = Looper::getMainLooper();
}

// public static extern Android.Base.Wrappers.IJWrapper getMainLooper_IMPL_13840() :6426
void Looper__getMainLooper_IMPL_13840_fn(uObject** __retval)
{
    *__retval = Looper::getMainLooper_IMPL_13840();
}

// public override sealed Android.java.lang.String toString() :6413
void Looper__toString_fn(Looper* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(Looper::toString_IMPL_13849(__this->_subclassed, __this->_javaObject), ::TYPES[0/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_13849(bool arg0, Android.Base.Primitives.ujobject arg1) :6453
void Looper__toString_IMPL_13849_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Looper::toString_IMPL_13849(*arg0_, *arg1_);
}

jclass Looper::_javaClass2_;
jmethodID Looper::getMainLooper_13840_ID_;
jmethodID Looper::toString_13849_ID_;

// public static extern new void _Init() [static] :6344
void Looper::_Init2()
{
    if (Looper::_javaClass2()) { return; }
    INIT_JNI;
    Looper::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/os/Looper"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Looper::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.os.Looper'", 41);; }
}

// public static Android.android.os.Looper getMainLooper() [static] :6359
Looper* Looper::getMainLooper()
{
    return uCast<Looper*>(Looper::getMainLooper_IMPL_13840(), Looper_typeof());
}

// public static extern Android.Base.Wrappers.IJWrapper getMainLooper_IMPL_13840() [static] :6426
uObject* Looper::getMainLooper_IMPL_13840()
{
    INIT_JNI;
    CLASS_INIT(Looper::_javaClass2(),Looper::_Init2());
    
    uObject* result;
    CACHE_METHOD(Looper::getMainLooper_13840_ID(),Looper::_javaClass2(),"getMainLooper","()Landroid/os/Looper;",GetStaticMethodID,"Id for fallback method android.os.Looper.getMainLooper could not be cached",74);
    NEW_UNO(U_JNIVAR->CallStaticObjectMethod(Looper::_javaClass2(), Looper::getMainLooper_13840_ID()),result,Looper_typeof(),Looper*,false,true);
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_13849(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :6453
uObject* Looper::toString_IMPL_13849(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Looper::_javaClass2(),Looper::_Init2());
    
    uObject* result;
    CACHE_METHOD(Looper::toString_13849_ID(),Looper::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.os.Looper.toString could not be cached",69);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Looper::_javaClass2(), Looper::toString_13849_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Looper::toString_13849_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\os\$.uno(6586)
// -------------------------------------------------------------------------

// public sealed extern class Message :6586
// {
Message_type* Message_typeof()
{
    static uSStrong<Message_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Message);
    options.TypeSize = sizeof(Message_type);
    type = (Message_type*)uClassType::New("Android.android.os.Message", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))Message__toString_fn;
    type->interface2.fp_describeContents = (void(*)(uObject*, int*))Message__describeContents_fn;
    type->interface2.fp_writeToParcel = (void(*)(uObject*, ::g::Android::android::os::Parcel*, int*))Message__writeToParcel_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[0] = ::g::Android::java::lang::String_typeof();
    ::TYPES[2] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Message_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Message_type, interface1),
        ::g::Android::android::os::Parcelable_typeof(), offsetof(Message_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::os::Message::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::os::Message::describeContents_13886_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::os::Message::toString_13885_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::os::Message::writeToParcel_13887_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(6,
        new uFunction("_Init", NULL, (void*)Message___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("describeContents", NULL, (void*)Message__describeContents_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("describeContents_IMPL_13886", NULL, (void*)Message__describeContents_IMPL_13886_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("toString_IMPL_13885", NULL, (void*)Message__toString_IMPL_13885_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("writeToParcel", NULL, (void*)Message__writeToParcel_fn, 0, false, uVoid_typeof(), 2, ::g::Android::android::os::Parcel_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("writeToParcel_IMPL_13887", NULL, (void*)Message__writeToParcel_IMPL_13887_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Int_typeof()));
    return type;
}

// public static extern new void _Init() :6590
void Message___Init2_fn()
{
    Message::_Init2();
}

// public int describeContents() :6865
void Message__describeContents_fn(Message* __this, int* __retval)
{
    *__retval = __this->describeContents();
}

// public static extern int describeContents_IMPL_13886(bool arg0, Android.Base.Primitives.ujobject arg1) :6936
void Message__describeContents_IMPL_13886_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Message::describeContents_IMPL_13886(*arg0_, *arg1_);
}

// public override sealed Android.java.lang.String toString() :6859
void Message__toString_fn(Message* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(Message::toString_IMPL_13885(__this->_subclassed, __this->_javaObject), ::TYPES[0/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_13885(bool arg0, Android.Base.Primitives.ujobject arg1) :6933
void Message__toString_IMPL_13885_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Message::toString_IMPL_13885(*arg0_, *arg1_);
}

// public void writeToParcel(Android.android.os.Parcel arg0, int arg1) :6871
void Message__writeToParcel_fn(Message* __this, ::g::Android::android::os::Parcel* arg0, int* arg11)
{
    __this->writeToParcel(arg0, *arg11);
}

// public static extern void writeToParcel_IMPL_13887(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) :6939
void Message__writeToParcel_IMPL_13887_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_)
{
    Message::writeToParcel_IMPL_13887(*arg0_, *arg1_, arg2_, *arg3_);
}

jclass Message::_javaClass2_;
jmethodID Message::describeContents_13886_ID_;
jmethodID Message::toString_13885_ID_;
jmethodID Message::writeToParcel_13887_ID_;

// public int describeContents() [instance] :6865
int Message::describeContents()
{
    return Message::describeContents_IMPL_13886(_subclassed, _javaObject);
}

// public void writeToParcel(Android.android.os.Parcel arg0, int arg1) [instance] :6871
void Message::writeToParcel(::g::Android::android::os::Parcel* arg0, int arg11)
{
    int arg11_ = arg11;
    Message::writeToParcel_IMPL_13887(_subclassed, _javaObject, (uObject*)arg0, arg11_);
}

// public static extern new void _Init() [static] :6590
void Message::_Init2()
{
    if (Message::_javaClass2()) { return; }
    INIT_JNI;
    Message::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/os/Message"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Message::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.os.Message'", 42);; }
}

// public static extern int describeContents_IMPL_13886(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :6936
int Message::describeContents_IMPL_13886(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Message::_javaClass2(),Message::_Init2());
    
    int result;
    CACHE_METHOD(Message::describeContents_13886_ID(),Message::_javaClass2(),"describeContents","()I",GetMethodID,"Id for fallback method android.os.Message.describeContents could not be cached",78);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, Message::_javaClass2(), Message::describeContents_13886_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, Message::describeContents_13886_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_13885(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :6933
uObject* Message::toString_IMPL_13885(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Message::_javaClass2(),Message::_Init2());
    
    uObject* result;
    CACHE_METHOD(Message::toString_13885_ID(),Message::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.os.Message.toString could not be cached",70);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Message::_javaClass2(), Message::toString_13885_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Message::toString_13885_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void writeToParcel_IMPL_13887(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) [static] :6939
void Message::writeToParcel_IMPL_13887(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(Message::_javaClass2(),Message::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(Message::writeToParcel_13887_ID(),Message::_javaClass2(),"writeToParcel","(Landroid/os/Parcel;I)V",GetMethodID,"Id for fallback method android.os.Message.writeToParcel could not be cached",75);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, Message::_javaClass2(), Message::writeToParcel_13887_ID(), _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, Message::writeToParcel_13887_ID(), _obArg2, ((jint)arg3_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\os\$.uno(7234)
// -------------------------------------------------------------------------

// public sealed extern class Parcel :7234
// {
::g::Android::java::lang::Object_type* Parcel_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Parcel);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.os.Parcel", options);
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

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\os\$.uno(11241)
// --------------------------------------------------------------------------

// public abstract extern interface Parcelable :11241
// {
uInterfaceType* Parcelable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.os.Parcelable", 0, 0);
    type->Reflection.SetFunctions(2,
        new uFunction("describeContents", NULL, NULL, offsetof(Parcelable, fp_describeContents), false, ::g::Uno::Int_typeof(), 0),
        new uFunction("writeToParcel", NULL, NULL, offsetof(Parcelable, fp_writeToParcel), false, uVoid_typeof(), 2, ::g::Android::android::os::Parcel_typeof(), ::g::Uno::Int_typeof()));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\os\$.uno(1033)
// -------------------------------------------------------------------------

// public abstract extern class Vibrator :1033
// {
Vibrator_type* Vibrator_typeof()
{
    static uSStrong<Vibrator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Vibrator);
    options.TypeSize = sizeof(Vibrator_type);
    type = (Vibrator_type*)uClassType::New("Android.android.os.Vibrator", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Vibrator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Vibrator_type, interface1));
    type->SetFields(5);
    type->Reflection.SetFunctions(1,
        new uFunction("vibrate", NULL, NULL, offsetof(Vibrator_type, fp_vibrate1), false, uVoid_typeof(), 1, ::g::Uno::Long_typeof()));
    return type;
}
// }

}}}} // ::g::Android::android::os
