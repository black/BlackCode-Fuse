// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.os.BuildDLRVERSION.h>
#include <Android.android.os.Bundle.h>
#include <Android.android.os.IBinder.h>
#include <Android.android.os.IBinderDLRDeathRecipient.h>
#include <Android.android.os.IInterface.h>
#include <Android.android.os.Parcel.h>
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
#include <Android.Fallbacks.Android_android_os_Vibrator.h>
#include <Android.java.io.FileDescriptor.h>
#include <Android.java.lang.String.h>
#include <Android.Runtime.ObjectArray-1.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
static uType* TYPES[2];

namespace g{
namespace Android{
namespace android{
namespace os{

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
::g::Android::java::lang::Object_type* Bundle_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Bundle);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.os.Bundle", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))Bundle__toString_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[0] = ::g::Android::java::lang::String_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::os::Bundle::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::os::Bundle::toString_13587_ID_, uFieldFlagsStatic);
    return type;
}

// public static extern new void _Init() :3057
void Bundle___Init2_fn()
{
    Bundle::_Init2();
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

jclass Bundle::_javaClass2_;
jmethodID Bundle::toString_13587_ID_;

// public static extern new void _Init() [static] :3057
void Bundle::_Init2()
{
    if (Bundle::_javaClass2()) { return; }
    INIT_JNI;
    Bundle::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/os/Bundle"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Bundle::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.os.Bundle'", 41);; }
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
    return type;
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
    return type;
}
// }

}}}} // ::g::Android::android::os
