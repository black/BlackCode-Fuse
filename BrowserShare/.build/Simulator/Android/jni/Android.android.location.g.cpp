// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.location.Location.h>
#include <Android.android.location.LocationListener.h>
#include <Android.android.location.LocationManager.h>
#include <Android.android.os.Bundle.h>
#include <Android.android.os.Looper.h>
#include <Android.android.os.Parcel.h>
#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jfieldID.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Fallbacks.Android_android_location_LocationListener.h>
#include <Android.Fallbacks.Android_java_util_List.h>
#include <Android.java.lang.String.h>
#include <Android.java.util.List.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
static uType* TYPES[5];

namespace g{
namespace Android{
namespace android{
namespace location{

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\location\$.uno(1311)
// -------------------------------------------------------------------------------

// public sealed extern class Location :1311
// {
Location_type* Location_typeof()
{
    static uSStrong<Location_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 13;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Location);
    options.TypeSize = sizeof(Location_type);
    type = (Location_type*)uClassType::New("Android.android.location.Location", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))Location__toString_fn;
    type->interface2.fp_describeContents = (void(*)(uObject*, int*))Location__describeContents_fn;
    type->interface2.fp_writeToParcel = (void(*)(uObject*, ::g::Android::android::os::Parcel*, int*))Location__writeToParcel_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::java::lang::String_typeof();
    ::TYPES[2] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Location_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Location_type, interface1),
        ::g::Android::android::os::Parcelable_typeof(), offsetof(Location_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::location::Location::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::location::Location::describeContents_8295_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::location::Location::getAccuracy_8288_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::location::Location::getLatitude_8271_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::location::Location::getLongitude_8273_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::location::Location::getTime_8267_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::location::Location::toString_8293_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::location::Location::writeToParcel_8296_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(14,
        new uFunction("_Init", NULL, (void*)Location___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("describeContents", NULL, (void*)Location__describeContents_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("describeContents_IMPL_8295", NULL, (void*)Location__describeContents_IMPL_8295_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("getAccuracy", NULL, (void*)Location__getAccuracy_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("getAccuracy_IMPL_8288", NULL, (void*)Location__getAccuracy_IMPL_8288_fn, 0, true, ::g::Uno::Float_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("getLatitude", NULL, (void*)Location__getLatitude_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("getLatitude_IMPL_8271", NULL, (void*)Location__getLatitude_IMPL_8271_fn, 0, true, ::g::Uno::Double_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("getLongitude", NULL, (void*)Location__getLongitude_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("getLongitude_IMPL_8273", NULL, (void*)Location__getLongitude_IMPL_8273_fn, 0, true, ::g::Uno::Double_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("getTime", NULL, (void*)Location__getTime_fn, 0, false, ::g::Uno::Long_typeof(), 0),
        new uFunction("getTime_IMPL_8267", NULL, (void*)Location__getTime_IMPL_8267_fn, 0, true, ::g::Uno::Long_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("toString_IMPL_8293", NULL, (void*)Location__toString_IMPL_8293_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("writeToParcel", NULL, (void*)Location__writeToParcel_fn, 0, false, uVoid_typeof(), 2, ::g::Android::android::os::Parcel_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("writeToParcel_IMPL_8296", NULL, (void*)Location__writeToParcel_IMPL_8296_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Int_typeof()));
    return type;
}

// public static extern new void _Init() :1315
void Location___Init2_fn()
{
    Location::_Init2();
}

// public int describeContents() :1641
void Location__describeContents_fn(Location* __this, int* __retval)
{
    *__retval = __this->describeContents();
}

// public static extern int describeContents_IMPL_8295(bool arg0, Android.Base.Primitives.ujobject arg1) :1773
void Location__describeContents_IMPL_8295_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Location::describeContents_IMPL_8295(*arg0_, *arg1_);
}

// public float getAccuracy() :1599
void Location__getAccuracy_fn(Location* __this, float* __retval)
{
    *__retval = __this->getAccuracy();
}

// public static extern float getAccuracy_IMPL_8288(bool arg0, Android.Base.Primitives.ujobject arg1) :1752
void Location__getAccuracy_IMPL_8288_fn(bool* arg0_, jobject* arg1_, float* __retval)
{
    *__retval = Location::getAccuracy_IMPL_8288(*arg0_, *arg1_);
}

// public double getLatitude() :1497
void Location__getLatitude_fn(Location* __this, double* __retval)
{
    *__retval = __this->getLatitude();
}

// public static extern double getLatitude_IMPL_8271(bool arg0, Android.Base.Primitives.ujobject arg1) :1701
void Location__getLatitude_IMPL_8271_fn(bool* arg0_, jobject* arg1_, double* __retval)
{
    *__retval = Location::getLatitude_IMPL_8271(*arg0_, *arg1_);
}

// public double getLongitude() :1509
void Location__getLongitude_fn(Location* __this, double* __retval)
{
    *__retval = __this->getLongitude();
}

// public static extern double getLongitude_IMPL_8273(bool arg0, Android.Base.Primitives.ujobject arg1) :1707
void Location__getLongitude_IMPL_8273_fn(bool* arg0_, jobject* arg1_, double* __retval)
{
    *__retval = Location::getLongitude_IMPL_8273(*arg0_, *arg1_);
}

// public long getTime() :1473
void Location__getTime_fn(Location* __this, int64_t* __retval)
{
    *__retval = __this->getTime();
}

// public static extern long getTime_IMPL_8267(bool arg0, Android.Base.Primitives.ujobject arg1) :1689
void Location__getTime_IMPL_8267_fn(bool* arg0_, jobject* arg1_, int64_t* __retval)
{
    *__retval = Location::getTime_IMPL_8267(*arg0_, *arg1_);
}

// public override sealed Android.java.lang.String toString() :1629
void Location__toString_fn(Location* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(Location::toString_IMPL_8293(__this->_subclassed, __this->_javaObject), ::TYPES[1/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_8293(bool arg0, Android.Base.Primitives.ujobject arg1) :1767
void Location__toString_IMPL_8293_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Location::toString_IMPL_8293(*arg0_, *arg1_);
}

// public void writeToParcel(Android.android.os.Parcel arg0, int arg1) :1647
void Location__writeToParcel_fn(Location* __this, ::g::Android::android::os::Parcel* arg0, int* arg1)
{
    __this->writeToParcel(arg0, *arg1);
}

// public static extern void writeToParcel_IMPL_8296(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) :1776
void Location__writeToParcel_IMPL_8296_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_)
{
    Location::writeToParcel_IMPL_8296(*arg0_, *arg1_, arg2_, *arg3_);
}

jclass Location::_javaClass2_;
jmethodID Location::describeContents_8295_ID_;
jmethodID Location::getAccuracy_8288_ID_;
jmethodID Location::getLatitude_8271_ID_;
jmethodID Location::getLongitude_8273_ID_;
jmethodID Location::getTime_8267_ID_;
jmethodID Location::toString_8293_ID_;
jmethodID Location::writeToParcel_8296_ID_;

// public int describeContents() [instance] :1641
int Location::describeContents()
{
    return Location::describeContents_IMPL_8295(_subclassed, _javaObject);
}

// public float getAccuracy() [instance] :1599
float Location::getAccuracy()
{
    return Location::getAccuracy_IMPL_8288(_subclassed, _javaObject);
}

// public double getLatitude() [instance] :1497
double Location::getLatitude()
{
    return Location::getLatitude_IMPL_8271(_subclassed, _javaObject);
}

// public double getLongitude() [instance] :1509
double Location::getLongitude()
{
    return Location::getLongitude_IMPL_8273(_subclassed, _javaObject);
}

// public long getTime() [instance] :1473
int64_t Location::getTime()
{
    return Location::getTime_IMPL_8267(_subclassed, _javaObject);
}

// public void writeToParcel(Android.android.os.Parcel arg0, int arg1) [instance] :1647
void Location::writeToParcel(::g::Android::android::os::Parcel* arg0, int arg1)
{
    int arg1_ = arg1;
    Location::writeToParcel_IMPL_8296(_subclassed, _javaObject, (uObject*)arg0, arg1_);
}

// public static extern new void _Init() [static] :1315
void Location::_Init2()
{
    if (Location::_javaClass2()) { return; }
    INIT_JNI;
    Location::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/location/Location"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Location::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.location.Location'", 49);; }
}

// public static extern int describeContents_IMPL_8295(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :1773
int Location::describeContents_IMPL_8295(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Location::_javaClass2(),Location::_Init2());
    
    int result;
    CACHE_METHOD(Location::describeContents_8295_ID(),Location::_javaClass2(),"describeContents","()I",GetMethodID,"Id for fallback method android.location.Location.describeContents could not be cached",85);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, Location::_javaClass2(), Location::describeContents_8295_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, Location::describeContents_8295_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern float getAccuracy_IMPL_8288(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :1752
float Location::getAccuracy_IMPL_8288(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Location::_javaClass2(),Location::_Init2());
    
    float result;
    CACHE_METHOD(Location::getAccuracy_8288_ID(),Location::_javaClass2(),"getAccuracy","()F",GetMethodID,"Id for fallback method android.location.Location.getAccuracy could not be cached",80);
    if (arg0_) {
        result = ((float)U_JNIVAR->CallNonvirtualFloatMethod(arg1_, Location::_javaClass2(), Location::getAccuracy_8288_ID()));
    }
    else
    {
        result = ((float)U_JNIVAR->CallFloatMethod(arg1_, Location::getAccuracy_8288_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern double getLatitude_IMPL_8271(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :1701
double Location::getLatitude_IMPL_8271(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Location::_javaClass2(),Location::_Init2());
    
    double result;
    CACHE_METHOD(Location::getLatitude_8271_ID(),Location::_javaClass2(),"getLatitude","()D",GetMethodID,"Id for fallback method android.location.Location.getLatitude could not be cached",80);
    if (arg0_) {
        result = ((double)U_JNIVAR->CallNonvirtualDoubleMethod(arg1_, Location::_javaClass2(), Location::getLatitude_8271_ID()));
    }
    else
    {
        result = ((double)U_JNIVAR->CallDoubleMethod(arg1_, Location::getLatitude_8271_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern double getLongitude_IMPL_8273(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :1707
double Location::getLongitude_IMPL_8273(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Location::_javaClass2(),Location::_Init2());
    
    double result;
    CACHE_METHOD(Location::getLongitude_8273_ID(),Location::_javaClass2(),"getLongitude","()D",GetMethodID,"Id for fallback method android.location.Location.getLongitude could not be cached",81);
    if (arg0_) {
        result = ((double)U_JNIVAR->CallNonvirtualDoubleMethod(arg1_, Location::_javaClass2(), Location::getLongitude_8273_ID()));
    }
    else
    {
        result = ((double)U_JNIVAR->CallDoubleMethod(arg1_, Location::getLongitude_8273_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern long getTime_IMPL_8267(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :1689
int64_t Location::getTime_IMPL_8267(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Location::_javaClass2(),Location::_Init2());
    
    int64_t result;
    CACHE_METHOD(Location::getTime_8267_ID(),Location::_javaClass2(),"getTime","()J",GetMethodID,"Id for fallback method android.location.Location.getTime could not be cached",76);
    if (arg0_) {
        result = ((int64_t)U_JNIVAR->CallNonvirtualLongMethod(arg1_, Location::_javaClass2(), Location::getTime_8267_ID()));
    }
    else
    {
        result = ((int64_t)U_JNIVAR->CallLongMethod(arg1_, Location::getTime_8267_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_8293(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :1767
uObject* Location::toString_IMPL_8293(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Location::_javaClass2(),Location::_Init2());
    
    uObject* result;
    CACHE_METHOD(Location::toString_8293_ID(),Location::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.location.Location.toString could not be cached",77);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Location::_javaClass2(), Location::toString_8293_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Location::toString_8293_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void writeToParcel_IMPL_8296(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3) [static] :1776
void Location::writeToParcel_IMPL_8296(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(Location::_javaClass2(),Location::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(Location::writeToParcel_8296_ID(),Location::_javaClass2(),"writeToParcel","(Landroid/os/Parcel;I)V",GetMethodID,"Id for fallback method android.location.Location.writeToParcel could not be cached",82);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, Location::_javaClass2(), Location::writeToParcel_8296_ID(), _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, Location::writeToParcel_8296_ID(), _obArg2, ((jint)arg3_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\location\$.uno(2474)
// -------------------------------------------------------------------------------

// public abstract extern interface LocationListener :2474
// {
uInterfaceType* LocationListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.location.LocationListener", 0, 0);
    type->Reflection.SetFunctions(4,
        new uFunction("onLocationChanged", NULL, NULL, offsetof(LocationListener, fp_onLocationChanged), false, uVoid_typeof(), 1, ::g::Android::android::location::Location_typeof()),
        new uFunction("onProviderDisabled", NULL, NULL, offsetof(LocationListener, fp_onProviderDisabled), false, uVoid_typeof(), 1, ::g::Android::java::lang::String_typeof()),
        new uFunction("onProviderEnabled", NULL, NULL, offsetof(LocationListener, fp_onProviderEnabled), false, uVoid_typeof(), 1, ::g::Android::java::lang::String_typeof()),
        new uFunction("onStatusChanged", NULL, NULL, offsetof(LocationListener, fp_onStatusChanged), false, uVoid_typeof(), 3, ::g::Android::java::lang::String_typeof(), ::g::Uno::Int_typeof(), ::g::Android::android::os::Bundle_typeof()));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\location\$.uno(1794)
// -------------------------------------------------------------------------------

// public sealed extern class LocationManager :1794
// {
::g::Android::java::lang::Object_type* LocationManager_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(LocationManager);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.location.LocationManager", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[3] = ::g::Android::java::util::List_typeof();
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[4] = ::g::Android::android::location::Location_typeof();
    ::TYPES[2] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[1] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::location::LocationManager::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::location::LocationManager::getAllProviders_8312_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::location::LocationManager::getLastKnownLocation_8331_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::location::LocationManager::GPS_PROVIDER_8303_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::location::LocationManager::isProviderEnabled_8330_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::location::LocationManager::NETWORK_PROVIDER_8302_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::location::LocationManager::removeUpdates_8326_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::location::LocationManager::requestLocationUpdates_8318_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::location::LocationManager::requestSingleUpdate_8322_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(15,
        new uFunction("_Init", NULL, (void*)LocationManager___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("getAllProviders", NULL, (void*)LocationManager__getAllProviders_fn, 0, false, ::g::Android::java::util::List_typeof(), 0),
        new uFunction("getAllProviders_IMPL_8312", NULL, (void*)LocationManager__getAllProviders_IMPL_8312_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("getLastKnownLocation", NULL, (void*)LocationManager__getLastKnownLocation_fn, 0, false, ::g::Android::android::location::Location_typeof(), 1, ::g::Android::java::lang::String_typeof()),
        new uFunction("getLastKnownLocation_IMPL_8331", NULL, (void*)LocationManager__getLastKnownLocation_IMPL_8331_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("get_GPS_PROVIDER", NULL, (void*)LocationManager__get_GPS_PROVIDER_fn, 0, true, ::g::Android::java::lang::String_typeof(), 0),
        new uFunction("isProviderEnabled", NULL, (void*)LocationManager__isProviderEnabled_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::Android::java::lang::String_typeof()),
        new uFunction("isProviderEnabled_IMPL_8330", NULL, (void*)LocationManager__isProviderEnabled_IMPL_8330_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("get_NETWORK_PROVIDER", NULL, (void*)LocationManager__get_NETWORK_PROVIDER_fn, 0, true, ::g::Android::java::lang::String_typeof(), 0),
        new uFunction("removeUpdates", NULL, (void*)LocationManager__removeUpdates1_fn, 0, false, uVoid_typeof(), 1, ::g::Android::android::location::LocationListener_typeof()),
        new uFunction("removeUpdates_IMPL_8326", NULL, (void*)LocationManager__removeUpdates_IMPL_8326_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("requestLocationUpdates", NULL, (void*)LocationManager__requestLocationUpdates2_fn, 0, false, uVoid_typeof(), 5, ::g::Android::java::lang::String_typeof(), ::g::Uno::Long_typeof(), ::g::Uno::Float_typeof(), ::g::Android::android::location::LocationListener_typeof(), ::g::Android::android::os::Looper_typeof()),
        new uFunction("requestLocationUpdates_IMPL_8318", NULL, (void*)LocationManager__requestLocationUpdates_IMPL_8318_fn, 0, true, uVoid_typeof(), 7, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Long_typeof(), ::g::Uno::Float_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("requestSingleUpdate", NULL, (void*)LocationManager__requestSingleUpdate3_fn, 0, false, uVoid_typeof(), 3, ::g::Android::java::lang::String_typeof(), ::g::Android::android::location::LocationListener_typeof(), ::g::Android::android::os::Looper_typeof()),
        new uFunction("requestSingleUpdate_IMPL_8322", NULL, (void*)LocationManager__requestSingleUpdate_IMPL_8322_fn, 0, true, uVoid_typeof(), 5, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()));
    return type;
}

// public static extern new void _Init() :1798
void LocationManager___Init2_fn()
{
    LocationManager::_Init2();
}

// public Android.java.util.List getAllProviders() :1954
void LocationManager__getAllProviders_fn(LocationManager* __this, uObject** __retval)
{
    *__retval = __this->getAllProviders();
}

// public static extern Android.Base.Wrappers.IJWrapper getAllProviders_IMPL_8312(bool arg0, Android.Base.Primitives.ujobject arg1) :2159
void LocationManager__getAllProviders_IMPL_8312_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = LocationManager::getAllProviders_IMPL_8312(*arg0_, *arg1_);
}

// public Android.android.location.Location getLastKnownLocation(Android.java.lang.String arg0) :2068
void LocationManager__getLastKnownLocation_fn(LocationManager* __this, ::g::Android::java::lang::String* arg0, ::g::Android::android::location::Location** __retval)
{
    *__retval = __this->getLastKnownLocation(arg0);
}

// public static extern Android.Base.Wrappers.IJWrapper getLastKnownLocation_IMPL_8331(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :2216
void LocationManager__getLastKnownLocation_IMPL_8331_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval)
{
    *__retval = LocationManager::getLastKnownLocation_IMPL_8331(*arg0_, *arg1_, arg2_);
}

// public static Android.java.lang.String get_GPS_PROVIDER() :1820
void LocationManager__get_GPS_PROVIDER_fn(::g::Android::java::lang::String** __retval)
{
    *__retval = LocationManager::GPS_PROVIDER();
}

// public bool isProviderEnabled(Android.java.lang.String arg0) :2062
void LocationManager__isProviderEnabled_fn(LocationManager* __this, ::g::Android::java::lang::String* arg0, bool* __retval)
{
    *__retval = __this->isProviderEnabled(arg0);
}

// public static extern bool isProviderEnabled_IMPL_8330(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :2213
void LocationManager__isProviderEnabled_IMPL_8330_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, bool* __retval)
{
    *__retval = LocationManager::isProviderEnabled_IMPL_8330(*arg0_, *arg1_, arg2_);
}

// public static Android.java.lang.String get_NETWORK_PROVIDER() :1803
void LocationManager__get_NETWORK_PROVIDER_fn(::g::Android::java::lang::String** __retval)
{
    *__retval = LocationManager::NETWORK_PROVIDER();
}

// public void removeUpdates(Android.android.location.LocationListener arg0) :2038
void LocationManager__removeUpdates1_fn(LocationManager* __this, uObject* arg0)
{
    __this->removeUpdates1(arg0);
}

// public static extern void removeUpdates_IMPL_8326(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :2201
void LocationManager__removeUpdates_IMPL_8326_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    LocationManager::removeUpdates_IMPL_8326(*arg0_, *arg1_, arg2_);
}

// public void requestLocationUpdates(Android.java.lang.String arg0, long arg1, float arg2, Android.android.location.LocationListener arg3, Android.android.os.Looper arg4) :1990
void LocationManager__requestLocationUpdates2_fn(LocationManager* __this, ::g::Android::java::lang::String* arg0, int64_t* arg1, float* arg2, uObject* arg3, ::g::Android::android::os::Looper* arg4)
{
    __this->requestLocationUpdates2(arg0, *arg1, *arg2, arg3, arg4);
}

// public static extern void requestLocationUpdates_IMPL_8318(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, long arg3, float arg4, Android.Base.Wrappers.IJWrapper arg5, Android.Base.Wrappers.IJWrapper arg6) :2177
void LocationManager__requestLocationUpdates_IMPL_8318_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int64_t* arg3_, float* arg4_, uObject* arg5_, uObject* arg6_)
{
    LocationManager::requestLocationUpdates_IMPL_8318(*arg0_, *arg1_, arg2_, *arg3_, *arg4_, arg5_, arg6_);
}

// public void requestSingleUpdate(Android.java.lang.String arg0, Android.android.location.LocationListener arg1, Android.android.os.Looper arg2) :2014
void LocationManager__requestSingleUpdate3_fn(LocationManager* __this, ::g::Android::java::lang::String* arg0, uObject* arg1, ::g::Android::android::os::Looper* arg2)
{
    __this->requestSingleUpdate3(arg0, arg1, arg2);
}

// public static extern void requestSingleUpdate_IMPL_8322(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, Android.Base.Wrappers.IJWrapper arg4) :2189
void LocationManager__requestSingleUpdate_IMPL_8322_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_)
{
    LocationManager::requestSingleUpdate_IMPL_8322(*arg0_, *arg1_, arg2_, arg3_, arg4_);
}

jclass LocationManager::_javaClass2_;
jmethodID LocationManager::getAllProviders_8312_ID_;
jmethodID LocationManager::getLastKnownLocation_8331_ID_;
jfieldID LocationManager::GPS_PROVIDER_8303_ID_;
jmethodID LocationManager::isProviderEnabled_8330_ID_;
jfieldID LocationManager::NETWORK_PROVIDER_8302_ID_;
jmethodID LocationManager::removeUpdates_8326_ID_;
jmethodID LocationManager::requestLocationUpdates_8318_ID_;
jmethodID LocationManager::requestSingleUpdate_8322_ID_;

// public Android.java.util.List getAllProviders() [instance] :1954
uObject* LocationManager::getAllProviders()
{
    return LocationManager::getAllProviders_IMPL_8312(_subclassed, _javaObject);
}

// public Android.android.location.Location getLastKnownLocation(Android.java.lang.String arg0) [instance] :2068
::g::Android::android::location::Location* LocationManager::getLastKnownLocation(::g::Android::java::lang::String* arg0)
{
    return uCast< ::g::Android::android::location::Location*>(LocationManager::getLastKnownLocation_IMPL_8331(_subclassed, _javaObject, (uObject*)arg0), ::TYPES[4/*Android.android.location.Location*/]);
}

// public bool isProviderEnabled(Android.java.lang.String arg0) [instance] :2062
bool LocationManager::isProviderEnabled(::g::Android::java::lang::String* arg0)
{
    return LocationManager::isProviderEnabled_IMPL_8330(_subclassed, _javaObject, (uObject*)arg0);
}

// public void removeUpdates(Android.android.location.LocationListener arg0) [instance] :2038
void LocationManager::removeUpdates1(uObject* arg0)
{
    LocationManager::removeUpdates_IMPL_8326(_subclassed, _javaObject, arg0);
}

// public void requestLocationUpdates(Android.java.lang.String arg0, long arg1, float arg2, Android.android.location.LocationListener arg3, Android.android.os.Looper arg4) [instance] :1990
void LocationManager::requestLocationUpdates2(::g::Android::java::lang::String* arg0, int64_t arg1, float arg2, uObject* arg3, ::g::Android::android::os::Looper* arg4)
{
    int64_t arg1_ = arg1;
    float arg2_ = arg2;
    LocationManager::requestLocationUpdates_IMPL_8318(_subclassed, _javaObject, (uObject*)arg0, arg1_, arg2_, arg3, (uObject*)arg4);
}

// public void requestSingleUpdate(Android.java.lang.String arg0, Android.android.location.LocationListener arg1, Android.android.os.Looper arg2) [instance] :2014
void LocationManager::requestSingleUpdate3(::g::Android::java::lang::String* arg0, uObject* arg1, ::g::Android::android::os::Looper* arg2)
{
    LocationManager::requestSingleUpdate_IMPL_8322(_subclassed, _javaObject, (uObject*)arg0, arg1, (uObject*)arg2);
}

// public static extern new void _Init() [static] :1798
void LocationManager::_Init2()
{
    if (LocationManager::_javaClass2()) { return; }
    INIT_JNI;
    LocationManager::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/location/LocationManager"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!LocationManager::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.location.LocationManager'", 56);; }
}

// public static extern Android.Base.Wrappers.IJWrapper getAllProviders_IMPL_8312(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :2159
uObject* LocationManager::getAllProviders_IMPL_8312(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(LocationManager::_javaClass2(),LocationManager::_Init2());
    
    uObject* result;
    CACHE_METHOD(LocationManager::getAllProviders_8312_ID(),LocationManager::_javaClass2(),"getAllProviders","()Ljava/util/List;",GetMethodID,"Id for fallback method android.location.LocationManager.getAllProviders could not be cached",91);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, LocationManager::_javaClass2(), LocationManager::getAllProviders_8312_ID()),result,::g::Android::Fallbacks::Android_java_util_List_typeof(),uObject*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, LocationManager::getAllProviders_8312_ID()),result,::g::Android::Fallbacks::Android_java_util_List_typeof(),uObject*,true,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper getLastKnownLocation_IMPL_8331(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :2216
uObject* LocationManager::getLastKnownLocation_IMPL_8331(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(LocationManager::_javaClass2(),LocationManager::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    uObject* result;
    CACHE_METHOD(LocationManager::getLastKnownLocation_8331_ID(),LocationManager::_javaClass2(),"getLastKnownLocation","(Ljava/lang/String;)Landroid/location/Location;",GetMethodID,"Id for fallback method android.location.LocationManager.getLastKnownLocation could not be cached",96);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, LocationManager::_javaClass2(), LocationManager::getLastKnownLocation_8331_ID(), _obArg2),result,::g::Android::android::location::Location_typeof(),::g::Android::android::location::Location*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, LocationManager::getLastKnownLocation_8331_ID(), _obArg2),result,::g::Android::android::location::Location_typeof(),::g::Android::android::location::Location*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool isProviderEnabled_IMPL_8330(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :2213
bool LocationManager::isProviderEnabled_IMPL_8330(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(LocationManager::_javaClass2(),LocationManager::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    bool result;
    CACHE_METHOD(LocationManager::isProviderEnabled_8330_ID(),LocationManager::_javaClass2(),"isProviderEnabled","(Ljava/lang/String;)Z",GetMethodID,"Id for fallback method android.location.LocationManager.isProviderEnabled could not be cached",93);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, LocationManager::_javaClass2(), LocationManager::isProviderEnabled_8330_ID(), _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, LocationManager::isProviderEnabled_8330_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern void removeUpdates_IMPL_8326(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :2201
void LocationManager::removeUpdates_IMPL_8326(bool arg0_, jobject arg1_, uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(LocationManager::_javaClass2(),LocationManager::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(LocationManager::removeUpdates_8326_ID(),LocationManager::_javaClass2(),"removeUpdates","(Landroid/location/LocationListener;)V",GetMethodID,"Id for fallback method android.location.LocationManager.removeUpdates could not be cached",89);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, LocationManager::_javaClass2(), LocationManager::removeUpdates_8326_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, LocationManager::removeUpdates_8326_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void requestLocationUpdates_IMPL_8318(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, long arg3, float arg4, Android.Base.Wrappers.IJWrapper arg5, Android.Base.Wrappers.IJWrapper arg6) [static] :2177
void LocationManager::requestLocationUpdates_IMPL_8318(bool arg0_, jobject arg1_, uObject* arg2_, int64_t arg3_, float arg4_, uObject* arg5_, uObject* arg6_)
{
    INIT_JNI;
    CLASS_INIT(LocationManager::_javaClass2(),LocationManager::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg5 = ((!arg5_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg5_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg6 = ((!arg6_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg6_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(LocationManager::requestLocationUpdates_8318_ID(),LocationManager::_javaClass2(),"requestLocationUpdates","(Ljava/lang/String;JFLandroid/location/LocationListener;Landroid/os/Looper;)V",GetMethodID,"Id for fallback method android.location.LocationManager.requestLocationUpdates could not be cached",98);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, LocationManager::_javaClass2(), LocationManager::requestLocationUpdates_8318_ID(), _obArg2, ((jlong)arg3_), ((jfloat)arg4_), _obArg5, _obArg6);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, LocationManager::requestLocationUpdates_8318_ID(), _obArg2, ((jlong)arg3_), ((jfloat)arg4_), _obArg5, _obArg6);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void requestSingleUpdate_IMPL_8322(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, Android.Base.Wrappers.IJWrapper arg3, Android.Base.Wrappers.IJWrapper arg4) [static] :2189
void LocationManager::requestSingleUpdate_IMPL_8322(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_, uObject* arg4_)
{
    INIT_JNI;
    CLASS_INIT(LocationManager::_javaClass2(),LocationManager::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg3 = ((!arg3_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg3_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    jobject _obArg4 = ((!arg4_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg4_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(LocationManager::requestSingleUpdate_8322_ID(),LocationManager::_javaClass2(),"requestSingleUpdate","(Ljava/lang/String;Landroid/location/LocationListener;Landroid/os/Looper;)V",GetMethodID,"Id for fallback method android.location.LocationManager.requestSingleUpdate could not be cached",95);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, LocationManager::_javaClass2(), LocationManager::requestSingleUpdate_8322_ID(), _obArg2, _obArg3, _obArg4);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, LocationManager::requestSingleUpdate_8322_ID(), _obArg2, _obArg3, _obArg4);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static Android.java.lang.String get_GPS_PROVIDER() [static] :1820
::g::Android::java::lang::String* LocationManager::GPS_PROVIDER()
{
    INIT_JNI;
    CLASS_INIT(LocationManager::_javaClass2(),LocationManager::_Init2());
    if (::uEnterCriticalIfNull(&LocationManager::GPS_PROVIDER_8303_ID())) {;
    CACHE_FIELD(LocationManager::GPS_PROVIDER_8303_ID(),LocationManager::_javaClass2(),"GPS_PROVIDER","Ljava/lang/String;",GetStaticFieldID,"Id for field LocationManager.GPS_PROVIDER could not be cached",61);
    ::uExitCritical();;
    };
    ::g::Android::java::lang::String* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(LocationManager::_javaClass2(), LocationManager::GPS_PROVIDER_8303_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);;
    return uCast< ::g::Android::java::lang::String*>(result, ::TYPES[1/*Android.java.lang.String*/]);
}

// public static Android.java.lang.String get_NETWORK_PROVIDER() [static] :1803
::g::Android::java::lang::String* LocationManager::NETWORK_PROVIDER()
{
    INIT_JNI;
    CLASS_INIT(LocationManager::_javaClass2(),LocationManager::_Init2());
    if (::uEnterCriticalIfNull(&LocationManager::NETWORK_PROVIDER_8302_ID())) {;
    CACHE_FIELD(LocationManager::NETWORK_PROVIDER_8302_ID(),LocationManager::_javaClass2(),"NETWORK_PROVIDER","Ljava/lang/String;",GetStaticFieldID,"Id for field LocationManager.NETWORK_PROVIDER could not be cached",65);
    ::uExitCritical();;
    };
    ::g::Android::java::lang::String* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(LocationManager::_javaClass2(), LocationManager::NETWORK_PROVIDER_8302_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);;
    return uCast< ::g::Android::java::lang::String*>(result, ::TYPES[1/*Android.java.lang.String*/]);
}
// }

}}}} // ::g::Android::android::location
