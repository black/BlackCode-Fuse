// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.app.Activity.h>
#include <Android.android.content.Context.h>
#include <Android.android.location.Location.h>
#include <Android.android.location.LocationManager.h>
#include <Android.android.os.Bundle.h>
#include <Android.android.os.Handler.h>
#include <Android.android.os.Looper.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Permissions.h>
#include <Android.Base.PlatPermission.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujlong.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Primitives.ujvalue.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.java.lang.Object.h>
#include <Android.java.lang.Runnable.h>
#include <Android.java.lang.String.h>
#include <Android.java.util.List.h>
#include <Android.Runtime.UnoHelper.h>
#include <Fuse.GeoLocation.AndroidLocationProvider.h>
#include <Fuse.GeoLocation.GeoCoordinates.h>
#include <Fuse.GeoLocation.GeoLocationAuthorizationType.h>
#include <Fuse.GeoLocation.ILocationTracker.h>
#include <Fuse.GeoLocation.Location.h>
#include <Fuse.GeoLocation.LocationListenerBase.h>
#include <Fuse.GeoLocation.LocationTracker.h>
#include <Fuse.GeoLocation.PromiseListener.h>
#include <Fuse.GeoLocation.TimeoutListener.h>
#include <Fuse.UpdateManager.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.DateTime.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.String.h>
#include <Uno.Threading.Future.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.Threading.FutureState.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno.Time.CalendarSystem.h>
#include <Uno.Time.Duration.h>
#include <Uno.Time.Instant.h>
#include <Uno.Time.LocalDateTime.h>
#include <Uno.Time.ZonedDateTime.h>
#include <Uno.Type.h>
//~
JNFUN(void,Binding_Fuse_GeoLocation_LocationListenerBase__onLocationChanged8298,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,uObject*);
    JARG_TO_UNO(arg1,::g::Android::android::location::Location*,((::g::Android::android::location::Location*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::android::location::Location_typeof(), false, true, true)));
    JTRY
    ::g::Android::android::location::LocationListener::onLocationChanged(uInterface(uPtr, ::g::Android::android::location::LocationListener_typeof()), tmparg1);
    JCATCH
}
JNFUN(void,Binding_Fuse_GeoLocation_LocationListenerBase__onProviderDisabled8301,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,uObject*);
    JARG_TO_UNO(arg1,::g::Android::java::lang::String*,((::g::Android::java::lang::String*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::java::lang::String_typeof(), false, true, true)));
    JTRY
    ::g::Android::android::location::LocationListener::onProviderDisabled(uInterface(uPtr, ::g::Android::android::location::LocationListener_typeof()), tmparg1);
    JCATCH
}
JNFUN(void,Binding_Fuse_GeoLocation_LocationListenerBase__onProviderEnabled8300,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,uObject*);
    JARG_TO_UNO(arg1,::g::Android::java::lang::String*,((::g::Android::java::lang::String*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::java::lang::String_typeof(), false, true, true)));
    JTRY
    ::g::Android::android::location::LocationListener::onProviderEnabled(uInterface(uPtr, ::g::Android::android::location::LocationListener_typeof()), tmparg1);
    JCATCH
}
JNFUN(void,Binding_Fuse_GeoLocation_LocationListenerBase__onStatusChanged8299,jlong ujPtr, jobject arg0, jint arg1, jobject arg2, jlong arg3, jlong arg4, jlong arg5) {
    INITCALLBACK(uPtr,uObject*);
    JARG_TO_UNO(arg3,::g::Android::java::lang::String*,((::g::Android::java::lang::String*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::java::lang::String_typeof(), false, true, true)));
    JARG_TO_UNO(arg5,::g::Android::android::os::Bundle*,((::g::Android::android::os::Bundle*)::g::Android::Base::Wrappers::JWrapper::New2(arg2, (uType*)::g::Android::android::os::Bundle_typeof(), false, true, true)));
    JTRY
    ::g::Android::android::location::LocationListener::onStatusChanged(uInterface(uPtr, ::g::Android::android::location::LocationListener_typeof()), tmparg3, ((int)arg1), tmparg5);
    JCATCH
}
static uString* STRINGS[10];
static uType* TYPES[32];

namespace g{
namespace Fuse{
namespace GeoLocation{

// C:\ProgramData\Uno\Packages\Fuse.GeoLocation\0.19.3\Android\$.uno(19)
// ---------------------------------------------------------------------

// internal sealed extern class AndroidLocationProvider :19
// {
AndroidLocationProvider_type* AndroidLocationProvider_typeof()
{
    static uSStrong<AndroidLocationProvider_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(AndroidLocationProvider);
    options.TypeSize = sizeof(AndroidLocationProvider_type);
    type = (AndroidLocationProvider_type*)uClassType::New("Fuse.GeoLocation.AndroidLocationProvider", options);
    type->SetBase(::g::Fuse::GeoLocation::LocationListenerBase_typeof());
    type->fp_ctor_ = (void*)AndroidLocationProvider__New5_fn;
    type->fp_OnLocationChanged = (void(*)(::g::Fuse::GeoLocation::LocationListenerBase*, ::g::Fuse::GeoLocation::Location*))AndroidLocationProvider__OnLocationChanged_fn;
    type->interface3.fp_GetLastKnownPosition = (void(*)(uObject*, ::g::Fuse::GeoLocation::Location**))AndroidLocationProvider__GetLastKnownPosition_fn;
    type->interface3.fp_GetLocation = (void(*)(uObject*, ::g::Uno::Threading::Promise*, double*))AndroidLocationProvider__GetLocation_fn;
    type->interface3.fp_StartListening = (void(*)(uObject*, uDelegate*, uDelegate*, int*, double*))AndroidLocationProvider__StartListening_fn;
    type->interface3.fp_StopListening = (void(*)(uObject*))AndroidLocationProvider__StopListening_fn;
    type->interface3.fp_RequestAuthorization = (void(*)(uObject*, int*))AndroidLocationProvider__RequestAuthorization_fn;
    type->interface2.fp_onLocationChanged = (void(*)(uObject*, ::g::Android::android::location::Location*))::g::Fuse::GeoLocation::LocationListenerBase__Android_android_location_LocationListener_onLocationChanged_fn;
    type->interface2.fp_onProviderDisabled = (void(*)(uObject*, ::g::Android::java::lang::String*))::g::Fuse::GeoLocation::LocationListenerBase__Android_android_location_LocationListener_onProviderDisabled_fn;
    type->interface2.fp_onProviderEnabled = (void(*)(uObject*, ::g::Android::java::lang::String*))::g::Fuse::GeoLocation::LocationListenerBase__Android_android_location_LocationListener_onProviderEnabled_fn;
    type->interface2.fp_onStatusChanged = (void(*)(uObject*, ::g::Android::java::lang::String*, int*, ::g::Android::android::os::Bundle*))::g::Fuse::GeoLocation::LocationListenerBase__Android_android_location_LocationListener_onStatusChanged_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[0] = ::g::Android::Base::Permissions_typeof();
    ::TYPES[1] = ::g::Android::android::location::LocationManager_typeof();
    ::TYPES[2] = ::g::Android::android::content::Context_typeof();
    ::TYPES[3] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof());
    ::TYPES[4] = ::g::Fuse::GeoLocation::Location_typeof();
    ::TYPES[5] = ::g::Uno::Time::CalendarSystem_typeof();
    ::TYPES[6] = ::g::Uno::Double_typeof();
    ::TYPES[7] = ::g::Android::java::lang::Object_typeof();
    ::TYPES[8] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof());
    ::TYPES[9] = ::g::Android::java::lang::String_typeof();
    ::TYPES[10] = ::g::Uno::DateTime_typeof();
    ::TYPES[11] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof());
    ::TYPES[12] = ::g::Uno::Delegate_typeof();
    ::TYPES[13] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof());
    ::TYPES[14] = ::g::Uno::Bool_typeof();
    ::TYPES[15] = ::g::Uno::Long_typeof();
    ::TYPES[16] = ::g::Uno::Float_typeof();
    ::TYPES[17] = ::g::Android::android::location::LocationListener_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(AndroidLocationProvider_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(AndroidLocationProvider_type, interface1),
        ::g::Android::android::location::LocationListener_typeof(), offsetof(AndroidLocationProvider_type, interface2),
        ::g::Fuse::GeoLocation::ILocationTracker_typeof(), offsetof(AndroidLocationProvider_type, interface3));
    type->SetFields(5,
        ::g::Android::android::location::LocationManager_typeof(), offsetof(::g::Fuse::GeoLocation::AndroidLocationProvider, _lm), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof()), offsetof(::g::Fuse::GeoLocation::AndroidLocationProvider, _onLocationChanged), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::GeoLocation::AndroidLocationProvider, _started), 0);
    return type;
}

// public AndroidLocationProvider() :23
void AndroidLocationProvider__ctor_5_fn(AndroidLocationProvider* __this)
{
    __this->ctor_5();
}

// private Fuse.GeoLocation.Location ChooseBestLocation(Uno.Collections.IList<Fuse.GeoLocation.Location> locations, int minDistance, Uno.Time.Instant minTime) :112
void AndroidLocationProvider__ChooseBestLocation_fn(AndroidLocationProvider* __this, uObject* locations, int* minDistance, ::g::Uno::Time::Instant* minTime, ::g::Fuse::GeoLocation::Location** __retval)
{
    *__retval = __this->ChooseBestLocation(locations, *minDistance, *minTime);
}

// internal static Fuse.GeoLocation.Location ConvertLocation(Android.android.location.Location location) :139
void AndroidLocationProvider__ConvertLocation_fn(::g::Android::android::location::Location* location, ::g::Fuse::GeoLocation::Location** __retval)
{
    *__retval = AndroidLocationProvider::ConvertLocation(location);
}

// public Fuse.GeoLocation.Location GetLastKnownPosition() :94
void AndroidLocationProvider__GetLastKnownPosition_fn(AndroidLocationProvider* __this, ::g::Fuse::GeoLocation::Location** __retval)
{
    *__retval = __this->GetLastKnownPosition();
}

// public void GetLocation(Uno.Threading.Promise<Fuse.GeoLocation.Location> promise, double timeout) :87
void AndroidLocationProvider__GetLocation_fn(AndroidLocationProvider* __this, ::g::Uno::Threading::Promise* promise, double* timeout)
{
    __this->GetLocation(promise, *timeout);
}

// private bool get_IsGPSEnabled() :72
void AndroidLocationProvider__get_IsGPSEnabled_fn(AndroidLocationProvider* __this, bool* __retval)
{
    *__retval = __this->IsGPSEnabled();
}

// private bool get_IsNetworkEnabled() :61
void AndroidLocationProvider__get_IsNetworkEnabled_fn(AndroidLocationProvider* __this, bool* __retval)
{
    *__retval = __this->IsNetworkEnabled();
}

// public AndroidLocationProvider New() :23
void AndroidLocationProvider__New5_fn(AndroidLocationProvider** __retval)
{
    *__retval = AndroidLocationProvider::New5();
}

// protected override sealed void OnLocationChanged(Fuse.GeoLocation.Location location) :81
void AndroidLocationProvider__OnLocationChanged_fn(AndroidLocationProvider* __this, ::g::Fuse::GeoLocation::Location* location)
{
    if (::g::Uno::Delegate::op_Inequality(__this->_onLocationChanged, NULL))
        uPtr(__this->_onLocationChanged)->InvokeVoid(location);
}

// public void RequestAuthorization(Fuse.GeoLocation.GeoLocationAuthorizationType type) :35
void AndroidLocationProvider__RequestAuthorization_fn(AndroidLocationProvider* __this, int* type)
{
    __this->RequestAuthorization(*type);
}

// public void StartListening(Uno.Action<Fuse.GeoLocation.Location> onLocationChanged, Uno.Action<Uno.Exception> onLocationError, int minimumReportInterval, double desiredAccuracyInMeters) :39
void AndroidLocationProvider__StartListening_fn(AndroidLocationProvider* __this, uDelegate* onLocationChanged, uDelegate* onLocationError, int* minimumReportInterval, double* desiredAccuracyInMeters)
{
    __this->StartListening(onLocationChanged, onLocationError, *minimumReportInterval, *desiredAccuracyInMeters);
}

// public void StopListening() :53
void AndroidLocationProvider__StopListening_fn(AndroidLocationProvider* __this)
{
    __this->StopListening();
}

// public AndroidLocationProvider() [instance] :23
void AndroidLocationProvider::ctor_5()
{
    ctor_4();
    ::g::Android::Base::Permissions::RequestPermission(::g::Android::Base::Permissions::ACCESS_FINE_LOCATION());
    ::g::Android::Base::Permissions::RequestPermission(::g::Android::Base::Permissions::INTERNET());
    ::g::Android::android::app::Activity* activity = ::g::Android::android::app::Activity::GetAppActivity();
    _lm = uCast< ::g::Android::android::location::LocationManager*>(uPtr(activity)->getSystemService(::g::Android::android::content::Context::LOCATION_SERVICE()), ::TYPES[1/*Android.android.location.LocationManager*/]);
}

// private Fuse.GeoLocation.Location ChooseBestLocation(Uno.Collections.IList<Fuse.GeoLocation.Location> locations, int minDistance, Uno.Time.Instant minTime) [instance] :112
::g::Fuse::GeoLocation::Location* AndroidLocationProvider::ChooseBestLocation(uObject* locations, int minDistance, ::g::Uno::Time::Instant minTime)
{
    ::g::Fuse::GeoLocation::Location* ret3;
    ::g::Fuse::GeoLocation::Location* bestResult = NULL;
    double bestAccuracy = 1.7976931348623157e+308;
    ::g::Uno::Time::Instant bestTime = uDefault< ::g::Uno::Time::Instant>();

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(locations), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[4/*Fuse.GeoLocation.Location*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Fuse::GeoLocation::Location* location = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[3/*Uno.Collections.IEnumerator<Fuse.GeoLocation.Location>*/]), &ret3), ret3);
        double accuracy = uPtr(location)->Accuracy();
        ::g::Uno::Time::Instant time = uPtr(uPtr(location->DateTime())->InUtc())->ToInstant();

        if (::g::Uno::Time::Instant::op_GreaterThan(time, minTime) && (accuracy < bestAccuracy))
        {
            bestResult = location;
            bestAccuracy = accuracy;
            bestTime = time;
        }
        else if ((::g::Uno::Time::Instant::op_LessThan(time, minTime) && (bestAccuracy == 1.7976931348623157e+308)) && ::g::Uno::Time::Instant::op_GreaterThan(time, bestTime))
        {
            bestResult = location;
            bestTime = time;
        }
    }

    return bestResult;
}

// public Fuse.GeoLocation.Location GetLastKnownPosition() [instance] :94
::g::Fuse::GeoLocation::Location* AndroidLocationProvider::GetLastKnownPosition()
{
    if (::g::Android::java::lang::Object::op_Inequality1(_lm, NULL))
    {
        ::g::Uno::Collections::List* locations = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[8/*Uno.Collections.List<Fuse.GeoLocation.Location>*/]);
        uObject* providers = uPtr(_lm)->getAllProviders();

        for (int i = 0; i < ::g::Android::java::util::List::size(uInterface(uPtr(providers), ::g::Android::java::util::List_typeof())); i++)
        {
            ::g::Android::android::location::Location* lo = uPtr(_lm)->getLastKnownLocation(uCast< ::g::Android::java::lang::String*>(::g::Android::java::util::List::get(uInterface(uPtr(providers), ::g::Android::java::util::List_typeof()), i), ::TYPES[9/*Android.java.lang.String*/]));

            if (::g::Android::java::lang::Object::op_Inequality1(lo, NULL))
                ::g::Uno::Collections::List__Add_fn(uPtr(locations), AndroidLocationProvider::ConvertLocation(lo));
        }

        ::g::Uno::Time::Instant minTime = uPtr(uPtr(::g::Uno::DateTime::UtcNow())->Minus(::g::Uno::Time::Duration__FromHours(1LL)))->ToInstant();
        return ChooseBestLocation((uObject*)locations, 50, minTime);
    }

    return NULL;
}

// public void GetLocation(Uno.Threading.Promise<Fuse.GeoLocation.Location> promise, double timeout) [instance] :87
void AndroidLocationProvider::GetLocation(::g::Uno::Threading::Promise* promise, double timeout)
{
    if (::g::Android::java::lang::Object::op_Equality1(_lm, NULL))
        return;

    ::g::Fuse::GeoLocation::PromiseListener* listener = ::g::Fuse::GeoLocation::PromiseListener::New5(_lm, timeout, promise);
}

// private bool get_IsGPSEnabled() [instance] :72
bool AndroidLocationProvider::IsGPSEnabled()
{
    if (::g::Android::java::lang::Object::op_Equality1(_lm, NULL))
        return false;

    bool isGpsEnabled = false;

    try
    {
        isGpsEnabled = uPtr(_lm)->isProviderEnabled(::g::Android::android::location::LocationManager::GPS_PROVIDER());
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
    }

    return isGpsEnabled;
}

// private bool get_IsNetworkEnabled() [instance] :61
bool AndroidLocationProvider::IsNetworkEnabled()
{
    if (::g::Android::java::lang::Object::op_Equality1(_lm, NULL))
        return false;

    bool isNetworkEnabled = false;

    try
    {
        isNetworkEnabled = uPtr(_lm)->isProviderEnabled(::g::Android::android::location::LocationManager::NETWORK_PROVIDER());
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
    }

    return isNetworkEnabled;
}

// public void RequestAuthorization(Fuse.GeoLocation.GeoLocationAuthorizationType type) [instance] :35
void AndroidLocationProvider::RequestAuthorization(int type)
{
}

// public void StartListening(Uno.Action<Fuse.GeoLocation.Location> onLocationChanged, Uno.Action<Uno.Exception> onLocationError, int minimumReportInterval, double desiredAccuracyInMeters) [instance] :39
void AndroidLocationProvider::StartListening(uDelegate* onLocationChanged, uDelegate* onLocationError, int minimumReportInterval, double desiredAccuracyInMeters)
{
    if (::g::Android::java::lang::Object::op_Inequality1(_lm, NULL) && !_started)
    {
        _onLocationChanged = onLocationChanged;

        if (IsNetworkEnabled())
            uPtr(_lm)->requestLocationUpdates2(::g::Android::android::location::LocationManager::NETWORK_PROVIDER(), (int64_t)minimumReportInterval, (float)desiredAccuracyInMeters, (uObject*)this, ::g::Android::android::os::Looper::getMainLooper());

        if (IsGPSEnabled())
            uPtr(_lm)->requestLocationUpdates2(::g::Android::android::location::LocationManager::GPS_PROVIDER(), (int64_t)minimumReportInterval, (float)desiredAccuracyInMeters, (uObject*)this, ::g::Android::android::os::Looper::getMainLooper());

        _started = true;
    }
}

// public void StopListening() [instance] :53
void AndroidLocationProvider::StopListening()
{
    uPtr(_lm)->removeUpdates1((uObject*)this);
    _started = false;
}

// internal static Fuse.GeoLocation.Location ConvertLocation(Android.android.location.Location location) [static] :139
::g::Fuse::GeoLocation::Location* AndroidLocationProvider::ConvertLocation(::g::Android::android::location::Location* location)
{
    ::g::Uno::Time::Instant instant = ::g::Uno::Time::Instant__FromMillisecondsSinceUnixEpoch(uPtr(location)->getTime());
    ::g::Uno::Time::LocalDateTime* dateTime = ::g::Uno::Time::LocalDateTime::New10(instant, ::g::Uno::Time::CalendarSystem::Iso());
    return ::g::Fuse::GeoLocation::Location::New1(::g::Fuse::GeoLocation::GeoCoordinates::New1(location->getLatitude(), location->getLongitude()), (double)location->getAccuracy(), dateTime);
}

// public AndroidLocationProvider New() [static] :23
AndroidLocationProvider* AndroidLocationProvider::New5()
{
    AndroidLocationProvider* obj2 = (AndroidLocationProvider*)uNew(AndroidLocationProvider_typeof());
    obj2->ctor_5();
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.GeoLocation\0.19.3\$.uno(7)
// ------------------------------------------------------------

// public sealed class GeoCoordinates :7
// {
uType* GeoCoordinates_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(GeoCoordinates);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.GeoLocation.GeoCoordinates", options);
    type->fp_ToString = (void(*)(uObject*, uString**))GeoCoordinates__ToString_fn;
    ::STRINGS[0] = uString::Const(" - ");
    ::TYPES[18] = uObject_typeof();
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::GeoLocation::GeoCoordinates, _lat), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::GeoLocation::GeoCoordinates, _long), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Latitude", NULL, (void*)GeoCoordinates__get_Latitude_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("get_Longitude", NULL, (void*)GeoCoordinates__get_Longitude_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)GeoCoordinates__New1_fn, 0, true, GeoCoordinates_typeof(), 2, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()));
    return type;
}

// public GeoCoordinates(double latitude, double longitude) :15
void GeoCoordinates__ctor__fn(GeoCoordinates* __this, double* latitude, double* longitude)
{
    __this->ctor_(*latitude, *longitude);
}

// public double get_Latitude() :12
void GeoCoordinates__get_Latitude_fn(GeoCoordinates* __this, double* __retval)
{
    *__retval = __this->Latitude();
}

// public double get_Longitude() :13
void GeoCoordinates__get_Longitude_fn(GeoCoordinates* __this, double* __retval)
{
    *__retval = __this->Longitude();
}

// public GeoCoordinates New(double latitude, double longitude) :15
void GeoCoordinates__New1_fn(double* latitude, double* longitude, GeoCoordinates** __retval)
{
    *__retval = GeoCoordinates::New1(*latitude, *longitude);
}

// public override sealed string ToString() :21
void GeoCoordinates__ToString_fn(GeoCoordinates* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition(uBox(::TYPES[6/*double*/], __this->Latitude()), ::STRINGS[0/*" - "*/]), uBox(::TYPES[6/*double*/], __this->Longitude())), void();
}

// public GeoCoordinates(double latitude, double longitude) [instance] :15
void GeoCoordinates::ctor_(double latitude, double longitude)
{
    _lat = latitude;
    _long = longitude;
}

// public double get_Latitude() [instance] :12
double GeoCoordinates::Latitude()
{
    return _lat;
}

// public double get_Longitude() [instance] :13
double GeoCoordinates::Longitude()
{
    return _long;
}

// public GeoCoordinates New(double latitude, double longitude) [static] :15
GeoCoordinates* GeoCoordinates::New1(double latitude, double longitude)
{
    GeoCoordinates* obj1 = (GeoCoordinates*)uNew(GeoCoordinates_typeof());
    obj1->ctor_(latitude, longitude);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.GeoLocation\0.19.3\$.uno(80)
// -------------------------------------------------------------

// public enum GeoLocationAuthorizationType :80
uEnumType* GeoLocationAuthorizationType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.GeoLocation.GeoLocationAuthorizationType", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Never", 0LL,
        "WhenInUse", 1LL,
        "Always", 2LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.GeoLocation\0.19.3\$.uno(67)
// -------------------------------------------------------------

// public abstract interface ILocationTracker :67
// {
uInterfaceType* ILocationTracker_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.GeoLocation.ILocationTracker", 0, 0);
    type->Reflection.SetFunctions(5,
        new uFunction("GetLastKnownPosition", NULL, NULL, offsetof(ILocationTracker, fp_GetLastKnownPosition), false, ::g::Fuse::GeoLocation::Location_typeof(), 0),
        new uFunction("GetLocation", NULL, NULL, offsetof(ILocationTracker, fp_GetLocation), false, uVoid_typeof(), 2, ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof()), ::g::Uno::Double_typeof()),
        new uFunction("RequestAuthorization", NULL, NULL, offsetof(ILocationTracker, fp_RequestAuthorization), false, uVoid_typeof(), 1, ::g::Fuse::GeoLocation::GeoLocationAuthorizationType_typeof()),
        new uFunction("StartListening", NULL, NULL, offsetof(ILocationTracker, fp_StartListening), false, uVoid_typeof(), 4, ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof()), ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof()), ::g::Uno::Int_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("StopListening", NULL, NULL, offsetof(ILocationTracker, fp_StopListening), false, uVoid_typeof(), 0));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.GeoLocation\0.19.3\$.uno(33)
// -------------------------------------------------------------

// public sealed class Location :33
// {
uType* Location_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Location);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.GeoLocation.Location", options);
    type->fp_ToString = (void(*)(uObject*, uString**))Location__ToString_fn;
    ::STRINGS[1] = uString::Const(" ");
    ::STRINGS[2] = uString::Const(" (");
    ::STRINGS[3] = uString::Const("/");
    ::STRINGS[4] = uString::Const(":");
    ::STRINGS[5] = uString::Const(")");
    ::TYPES[18] = uObject_typeof();
    ::TYPES[19] = ::g::Uno::Time::LocalDateTime_typeof();
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::GeoLocation::Location, _accuracy), 0,
        ::g::Fuse::GeoLocation::GeoCoordinates_typeof(), offsetof(::g::Fuse::GeoLocation::Location, _coordinates), 0,
        ::g::Uno::Time::LocalDateTime_typeof(), offsetof(::g::Fuse::GeoLocation::Location, _dateTime), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_Accuracy", NULL, (void*)Location__get_Accuracy_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("get_Coordinates", NULL, (void*)Location__get_Coordinates_fn, 0, false, ::g::Fuse::GeoLocation::GeoCoordinates_typeof(), 0),
        new uFunction("get_DateTime", NULL, (void*)Location__get_DateTime_fn, 0, false, ::g::Uno::Time::LocalDateTime_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Location__New1_fn, 0, true, Location_typeof(), 3, ::g::Fuse::GeoLocation::GeoCoordinates_typeof(), ::g::Uno::Double_typeof(), ::g::Uno::Time::LocalDateTime_typeof()));
    return type;
}

// public Location(Fuse.GeoLocation.GeoCoordinates coordinates, double accuracy, Uno.Time.LocalDateTime dateTime) :47
void Location__ctor__fn(Location* __this, ::g::Fuse::GeoLocation::GeoCoordinates* coordinates, double* accuracy, ::g::Uno::Time::LocalDateTime* dateTime)
{
    __this->ctor_(coordinates, *accuracy, dateTime);
}

// public double get_Accuracy() :45
void Location__get_Accuracy_fn(Location* __this, double* __retval)
{
    *__retval = __this->Accuracy();
}

// public Fuse.GeoLocation.GeoCoordinates get_Coordinates() :39
void Location__get_Coordinates_fn(Location* __this, ::g::Fuse::GeoLocation::GeoCoordinates** __retval)
{
    *__retval = __this->Coordinates();
}

// public Uno.Time.LocalDateTime get_DateTime() :40
void Location__get_DateTime_fn(Location* __this, ::g::Uno::Time::LocalDateTime** __retval)
{
    *__retval = __this->DateTime();
}

// public Location New(Fuse.GeoLocation.GeoCoordinates coordinates, double accuracy, Uno.Time.LocalDateTime dateTime) :47
void Location__New1_fn(::g::Fuse::GeoLocation::GeoCoordinates* coordinates, double* accuracy, ::g::Uno::Time::LocalDateTime* dateTime, Location** __retval)
{
    *__retval = Location::New1(coordinates, *accuracy, dateTime);
}

// public override sealed string ToString() :54
void Location__ToString_fn(Location* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition(__this->Coordinates(), ::STRINGS[1/*" "*/]), uBox(::TYPES[6/*double*/], __this->Accuracy())), ::STRINGS[2/*" ("*/]), uBox<int>(::TYPES[30/*int*/], uPtr(__this->DateTime())->Month())), ::STRINGS[3/*"/"*/]), uBox<int>(::TYPES[30/*int*/], uPtr(__this->DateTime())->Day())), ::STRINGS[1/*" "*/]), uBox<int>(::TYPES[30/*int*/], uPtr(__this->DateTime())->Hour())), ::STRINGS[4/*":"*/]), uBox<int>(::TYPES[30/*int*/], uPtr(__this->DateTime())->Minute())), ::STRINGS[5/*")"*/]), void();
}

// public Location(Fuse.GeoLocation.GeoCoordinates coordinates, double accuracy, Uno.Time.LocalDateTime dateTime) [instance] :47
void Location::ctor_(::g::Fuse::GeoLocation::GeoCoordinates* coordinates, double accuracy, ::g::Uno::Time::LocalDateTime* dateTime)
{
    _coordinates = coordinates;
    _accuracy = accuracy;
    _dateTime = dateTime;
}

// public double get_Accuracy() [instance] :45
double Location::Accuracy()
{
    return _accuracy;
}

// public Fuse.GeoLocation.GeoCoordinates get_Coordinates() [instance] :39
::g::Fuse::GeoLocation::GeoCoordinates* Location::Coordinates()
{
    return _coordinates;
}

// public Uno.Time.LocalDateTime get_DateTime() [instance] :40
::g::Uno::Time::LocalDateTime* Location::DateTime()
{
    return _dateTime;
}

// public Location New(Fuse.GeoLocation.GeoCoordinates coordinates, double accuracy, Uno.Time.LocalDateTime dateTime) [static] :47
Location* Location::New1(::g::Fuse::GeoLocation::GeoCoordinates* coordinates, double accuracy, ::g::Uno::Time::LocalDateTime* dateTime)
{
    Location* obj1 = (Location*)uNew(Location_typeof());
    obj1->ctor_(coordinates, accuracy, dateTime);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.GeoLocation\0.19.3\Android\$.uno(160)
// ----------------------------------------------------------------------

// internal abstract extern class LocationListenerBase :160
// {
LocationListenerBase_type* LocationListenerBase_typeof()
{
    static uSStrong<LocationListenerBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(LocationListenerBase);
    options.TypeSize = sizeof(LocationListenerBase_type);
    type = (LocationListenerBase_type*)uClassType::New("Fuse.GeoLocation.LocationListenerBase", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_onLocationChanged = (void(*)(uObject*, ::g::Android::android::location::Location*))LocationListenerBase__Android_android_location_LocationListener_onLocationChanged_fn;
    type->interface2.fp_onProviderDisabled = (void(*)(uObject*, ::g::Android::java::lang::String*))LocationListenerBase__Android_android_location_LocationListener_onProviderDisabled_fn;
    type->interface2.fp_onProviderEnabled = (void(*)(uObject*, ::g::Android::java::lang::String*))LocationListenerBase__Android_android_location_LocationListener_onProviderEnabled_fn;
    type->interface2.fp_onStatusChanged = (void(*)(uObject*, ::g::Android::java::lang::String*, int*, ::g::Android::android::os::Bundle*))LocationListenerBase__Android_android_location_LocationListener_onStatusChanged_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::STRINGS[6] = uString::Const("com.Bindings.Binding_Fuse_GeoLocation_LocationListenerBase");
    ::STRINGS[7] = uString::Const("<init>");
    ::STRINGS[8] = uString::Const("(J)V");
    ::TYPES[14] = ::g::Uno::Bool_typeof();
    ::TYPES[20] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[21] = ::g::Android::Base::Primitives::ujclass_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(LocationListenerBase_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(LocationListenerBase_type, interface1),
        ::g::Android::android::location::LocationListener_typeof(), offsetof(LocationListenerBase_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Fuse::GeoLocation::LocationListenerBase::_javaClass2_, uFieldFlagsStatic);
    return type;
}

// protected generated LocationListenerBase() :160
void LocationListenerBase__ctor_4_fn(LocationListenerBase* __this)
{
    __this->ctor_4();
}

// private void Android.android.location.LocationListener.onLocationChanged(Android.android.location.Location location) :164
void LocationListenerBase__Android_android_location_LocationListener_onLocationChanged_fn(LocationListenerBase* __this, ::g::Android::android::location::Location* location)
{
    __this->OnLocationChanged(::g::Fuse::GeoLocation::AndroidLocationProvider::ConvertLocation(location));
}

// private void Android.android.location.LocationListener.onProviderDisabled(Android.java.lang.String provider) :169
void LocationListenerBase__Android_android_location_LocationListener_onProviderDisabled_fn(LocationListenerBase* __this, ::g::Android::java::lang::String* provider)
{
}

// private void Android.android.location.LocationListener.onProviderEnabled(Android.java.lang.String provider) :173
void LocationListenerBase__Android_android_location_LocationListener_onProviderEnabled_fn(LocationListenerBase* __this, ::g::Android::java::lang::String* provider)
{
}

// private void Android.android.location.LocationListener.onStatusChanged(Android.java.lang.String provider, int status, Android.android.os.Bundle extras) :177
void LocationListenerBase__Android_android_location_LocationListener_onStatusChanged_fn(LocationListenerBase* __this, ::g::Android::java::lang::String* provider, int* status, ::g::Android::android::os::Bundle* extras)
{
}

jclass LocationListenerBase::_javaClass2_;

// protected generated LocationListenerBase() [instance] :160
void LocationListenerBase::ctor_4()
{
    if (!_subclassed)
    {
        _subclassed = true;
        _javaClassName = ::STRINGS[6/*"com.Binding...*/];
    }

    ctor_3(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);

    if (::g::Android::Base::Primitives::ujclass::op_Equality(LocationListenerBase::_javaClass2(), ::g::Android::Base::Primitives::ujclass::Null()))
    {
        LocationListenerBase::_javaClass2() = ::g::Android::Base::JNI::LocalToGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[6/*"com.Binding...*/], false));
        JniHelper jni;
        BEGIN_REG_MTD(4);
        REG_MTD(0,"__n_onLocationChanged","(JLandroid/location/Location;J)V",Binding_Fuse_GeoLocation_LocationListenerBase__onLocationChanged8298);
        REG_MTD(1,"__n_onProviderDisabled","(JLjava/lang/String;J)V",Binding_Fuse_GeoLocation_LocationListenerBase__onProviderDisabled8301);
        REG_MTD(2,"__n_onProviderEnabled","(JLjava/lang/String;J)V",Binding_Fuse_GeoLocation_LocationListenerBase__onProviderEnabled8300);
        REG_MTD(3,"__n_onStatusChanged","(JLjava/lang/String;ILandroid/os/Bundle;JJJ)V",Binding_Fuse_GeoLocation_LocationListenerBase__onStatusChanged8299);
        COMMIT_REG_MTD(LocationListenerBase::_javaClass2());
    }

    jclass tmpCls = ::g::Android::Base::JNI::LoadClass3(_javaClassName, false);
    jmethodID mtd = ::g::Android::Base::JNI::GetMethodID(tmpCls, ::STRINGS[7/*"<init>"*/], ::STRINGS[8/*"(J)V"*/]);
    jobject tmp = ::g::Android::Base::JNI::NewObject1(tmpCls, mtd, ::g::Android::Base::Primitives::ujvalue::op_Implicit7((jlong)this->__obj_weak));
    ::g::Android::Base::JNI::CheckException();
    _javaObject = ::g::Android::Base::JNI::LocalToGlobalRef1(tmp);
    ::g::Android::Base::JNI::DeleteLocalRef(tmpCls);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.GeoLocation\0.19.3\$.uno(87)
// -------------------------------------------------------------

// public sealed class LocationTracker :87
// {
uType* LocationTracker_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(LocationTracker);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.GeoLocation.LocationTracker", options);
    type->fp_ctor_ = (void*)LocationTracker__New1_fn;
    ::TYPES[22] = ::g::Fuse::UpdateManager_typeof();
    ::TYPES[23] = ::g::Uno::Action_typeof();
    ::TYPES[24] = ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof());
    ::TYPES[25] = ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof());
    ::TYPES[26] = ::g::Fuse::GeoLocation::ILocationTracker_typeof();
    ::TYPES[12] = ::g::Uno::Delegate_typeof();
    ::TYPES[13] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof());
    ::TYPES[27] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[28] = ::g::Uno::Exception_typeof();
    ::TYPES[29] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof());
    type->SetFields(0,
        ::g::Fuse::GeoLocation::Location_typeof(), offsetof(::g::Fuse::GeoLocation::LocationTracker, _lastLocation), 0,
        ::g::Fuse::GeoLocation::GeoLocationAuthorizationType_typeof(), offsetof(::g::Fuse::GeoLocation::LocationTracker, _AuthorizationType), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof()), offsetof(::g::Fuse::GeoLocation::LocationTracker, LocationChanged1), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Fuse::GeoLocation::LocationTracker, LocationError1), 0,
        ::g::Fuse::GeoLocation::ILocationTracker_typeof(), (uintptr_t)&::g::Fuse::GeoLocation::LocationTracker::_locationTracker_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(11,
        new uFunction("get_AuthorizationType", NULL, (void*)LocationTracker__get_AuthorizationType_fn, 0, false, ::g::Fuse::GeoLocation::GeoLocationAuthorizationType_typeof(), 0),
        new uFunction("set_AuthorizationType", NULL, (void*)LocationTracker__set_AuthorizationType_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::GeoLocation::GeoLocationAuthorizationType_typeof()),
        new uFunction("GetLocationAsync", NULL, (void*)LocationTracker__GetLocationAsync_fn, 0, false, ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof()), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_Location", NULL, (void*)LocationTracker__get_Location_fn, 0, false, ::g::Fuse::GeoLocation::Location_typeof(), 0),
        new uFunction("add_LocationChanged", NULL, (void*)LocationTracker__add_LocationChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof())),
        new uFunction("remove_LocationChanged", NULL, (void*)LocationTracker__remove_LocationChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof())),
        new uFunction("add_LocationError", NULL, (void*)LocationTracker__add_LocationError_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof())),
        new uFunction("remove_LocationError", NULL, (void*)LocationTracker__remove_LocationError_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof())),
        new uFunction(".ctor", NULL, (void*)LocationTracker__New1_fn, 0, true, LocationTracker_typeof(), 0),
        new uFunction("StartListening", NULL, (void*)LocationTracker__StartListening_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("StopListening", NULL, (void*)LocationTracker__StopListening_fn, 0, false, uVoid_typeof(), 0));
    return type;
}

// public LocationTracker() :91
void LocationTracker__ctor__fn(LocationTracker* __this)
{
    __this->ctor_();
}

// public generated Fuse.GeoLocation.GeoLocationAuthorizationType get_AuthorizationType() :113
void LocationTracker__get_AuthorizationType_fn(LocationTracker* __this, int* __retval)
{
    *__retval = __this->AuthorizationType();
}

// public generated void set_AuthorizationType(Fuse.GeoLocation.GeoLocationAuthorizationType value) :113
void LocationTracker__set_AuthorizationType_fn(LocationTracker* __this, int* value)
{
    __this->AuthorizationType(*value);
}

// public Uno.Threading.Future<Fuse.GeoLocation.Location> GetLocationAsync([double timeout]) :154
void LocationTracker__GetLocationAsync_fn(LocationTracker* __this, double* timeout, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->GetLocationAsync(*timeout);
}

// private void Init() :97
void LocationTracker__Init_fn(LocationTracker* __this)
{
    __this->Init();
}

// public Fuse.GeoLocation.Location get_Location() :117
void LocationTracker__get_Location_fn(LocationTracker* __this, ::g::Fuse::GeoLocation::Location** __retval)
{
    *__retval = __this->Location();
}

// public generated void add_LocationChanged(Uno.Action<Fuse.GeoLocation.Location> value) :107
void LocationTracker__add_LocationChanged_fn(LocationTracker* __this, uDelegate* value)
{
    __this->add_LocationChanged(value);
}

// public generated void remove_LocationChanged(Uno.Action<Fuse.GeoLocation.Location> value) :107
void LocationTracker__remove_LocationChanged_fn(LocationTracker* __this, uDelegate* value)
{
    __this->remove_LocationChanged(value);
}

// public generated void add_LocationError(Uno.Action<string> value) :109
void LocationTracker__add_LocationError_fn(LocationTracker* __this, uDelegate* value)
{
    __this->add_LocationError(value);
}

// public generated void remove_LocationError(Uno.Action<string> value) :109
void LocationTracker__remove_LocationError_fn(LocationTracker* __this, uDelegate* value)
{
    __this->remove_LocationError(value);
}

// public LocationTracker New() :91
void LocationTracker__New1_fn(LocationTracker** __retval)
{
    *__retval = LocationTracker::New1();
}

// private void OnLocationChanged(Fuse.GeoLocation.Location newLocation) :127
void LocationTracker__OnLocationChanged_fn(LocationTracker* __this, ::g::Fuse::GeoLocation::Location* newLocation)
{
    __this->OnLocationChanged(newLocation);
}

// private void OnLocationError(Uno.Exception error) :133
void LocationTracker__OnLocationError_fn(LocationTracker* __this, ::g::Uno::Exception* error)
{
    __this->OnLocationError(error);
}

// public void StartListening([int minimumReportInterval], [double desiredAccuracyInMeters]) :139
void LocationTracker__StartListening_fn(LocationTracker* __this, int* minimumReportInterval, double* desiredAccuracyInMeters)
{
    __this->StartListening(*minimumReportInterval, *desiredAccuracyInMeters);
}

// public void StopListening() :147
void LocationTracker__StopListening_fn(LocationTracker* __this)
{
    __this->StopListening();
}

uSStrong<uObject*> LocationTracker::_locationTracker_;

// public LocationTracker() [instance] :91
void LocationTracker::ctor_()
{
    AuthorizationType(1);
    ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(::g::Fuse::UpdateManager::Dispatcher()), ::g::Uno::Threading::IDispatcher_typeof()), uDelegate::New(::TYPES[23/*Uno.Action*/], (void*)LocationTracker__Init_fn, this));
}

// public generated Fuse.GeoLocation.GeoLocationAuthorizationType get_AuthorizationType() [instance] :113
int LocationTracker::AuthorizationType()
{
    return _AuthorizationType;
}

// public generated void set_AuthorizationType(Fuse.GeoLocation.GeoLocationAuthorizationType value) [instance] :113
void LocationTracker::AuthorizationType(int value)
{
    _AuthorizationType = value;
}

// public Uno.Threading.Future<Fuse.GeoLocation.Location> GetLocationAsync([double timeout]) [instance] :154
::g::Uno::Threading::Future1* LocationTracker::GetLocationAsync(double timeout)
{
    ::g::Fuse::GeoLocation::ILocationTracker::RequestAuthorization(uInterface(uPtr(LocationTracker::_locationTracker()), ::TYPES[26/*Fuse.GeoLocation.ILocationTracker*/]), AuthorizationType());
    ::g::Uno::Threading::Promise* promise = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::TYPES[24/*Uno.Threading.Promise<Fuse.GeoLocation.Location>*/]);
    ::g::Fuse::GeoLocation::ILocationTracker::GetLocation(uInterface(uPtr(LocationTracker::_locationTracker()), ::TYPES[26/*Fuse.GeoLocation.ILocationTracker*/]), promise, timeout);
    return promise;
}

// private void Init() [instance] :97
void LocationTracker::Init()
{
    if (LocationTracker::_locationTracker() != NULL)
        return;

    LocationTracker::_locationTracker() = (uObject*)::g::Fuse::GeoLocation::AndroidLocationProvider::New5();
}

// public Fuse.GeoLocation.Location get_Location() [instance] :117
::g::Fuse::GeoLocation::Location* LocationTracker::Location()
{
    ::g::Fuse::GeoLocation::ILocationTracker::RequestAuthorization(uInterface(uPtr(LocationTracker::_locationTracker()), ::TYPES[26/*Fuse.GeoLocation.ILocationTracker*/]), AuthorizationType());

    if ((_lastLocation == NULL) && (LocationTracker::_locationTracker() != NULL))
        _lastLocation = ::g::Fuse::GeoLocation::ILocationTracker::GetLastKnownPosition(uInterface(uPtr(LocationTracker::_locationTracker()), ::TYPES[26/*Fuse.GeoLocation.ILocationTracker*/]));

    return _lastLocation;
}

// public generated void add_LocationChanged(Uno.Action<Fuse.GeoLocation.Location> value) [instance] :107
void LocationTracker::add_LocationChanged(uDelegate* value)
{
    LocationChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(LocationChanged1, value), ::TYPES[13/*Uno.Action<Fuse.GeoLocation.Location>*/]);
}

// public generated void remove_LocationChanged(Uno.Action<Fuse.GeoLocation.Location> value) [instance] :107
void LocationTracker::remove_LocationChanged(uDelegate* value)
{
    LocationChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(LocationChanged1, value), ::TYPES[13/*Uno.Action<Fuse.GeoLocation.Location>*/]);
}

// public generated void add_LocationError(Uno.Action<string> value) [instance] :109
void LocationTracker::add_LocationError(uDelegate* value)
{
    LocationError1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(LocationError1, value), ::TYPES[27/*Uno.Action<string>*/]);
}

// public generated void remove_LocationError(Uno.Action<string> value) [instance] :109
void LocationTracker::remove_LocationError(uDelegate* value)
{
    LocationError1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(LocationError1, value), ::TYPES[27/*Uno.Action<string>*/]);
}

// private void OnLocationChanged(Fuse.GeoLocation.Location newLocation) [instance] :127
void LocationTracker::OnLocationChanged(::g::Fuse::GeoLocation::Location* newLocation)
{
    if (::g::Uno::Delegate::op_Inequality(LocationChanged1, NULL))
        uPtr(LocationChanged1)->InvokeVoid(newLocation);
}

// private void OnLocationError(Uno.Exception error) [instance] :133
void LocationTracker::OnLocationError(::g::Uno::Exception* error)
{
    if (::g::Uno::Delegate::op_Inequality(LocationError1, NULL))
        uPtr(LocationError1)->InvokeVoid(uPtr(error)->Message());
}

// public void StartListening([int minimumReportInterval], [double desiredAccuracyInMeters]) [instance] :139
void LocationTracker::StartListening(int minimumReportInterval, double desiredAccuracyInMeters)
{
    if (LocationTracker::_locationTracker() == NULL)
        return;

    ::g::Fuse::GeoLocation::ILocationTracker::RequestAuthorization(uInterface(uPtr(LocationTracker::_locationTracker()), ::TYPES[26/*Fuse.GeoLocation.ILocationTracker*/]), AuthorizationType());
    ::g::Fuse::GeoLocation::ILocationTracker::StartListening(uInterface(uPtr(LocationTracker::_locationTracker()), ::TYPES[26/*Fuse.GeoLocation.ILocationTracker*/]), uDelegate::New(::TYPES[13/*Uno.Action<Fuse.GeoLocation.Location>*/], (void*)LocationTracker__OnLocationChanged_fn, this), uDelegate::New(::TYPES[29/*Uno.Action<Uno.Exception>*/], (void*)LocationTracker__OnLocationError_fn, this), minimumReportInterval, desiredAccuracyInMeters);
}

// public void StopListening() [instance] :147
void LocationTracker::StopListening()
{
    if (LocationTracker::_locationTracker() == NULL)
        return;

    ::g::Fuse::GeoLocation::ILocationTracker::StopListening(uInterface(uPtr(LocationTracker::_locationTracker()), ::TYPES[26/*Fuse.GeoLocation.ILocationTracker*/]));
}

// public LocationTracker New() [static] :91
LocationTracker* LocationTracker::New1()
{
    LocationTracker* obj1 = (LocationTracker*)uNew(LocationTracker_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.GeoLocation\0.19.3\Android\$.uno(182)
// ----------------------------------------------------------------------

// internal sealed extern class PromiseListener :182
// {
::g::Fuse::GeoLocation::TimeoutListener_type* PromiseListener_typeof()
{
    static uSStrong< ::g::Fuse::GeoLocation::TimeoutListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(PromiseListener);
    options.TypeSize = sizeof(::g::Fuse::GeoLocation::TimeoutListener_type);
    type = (::g::Fuse::GeoLocation::TimeoutListener_type*)uClassType::New("Fuse.GeoLocation.PromiseListener", options);
    type->SetBase(::g::Fuse::GeoLocation::TimeoutListener_typeof());
    type->fp_OnLocationChanged = (void(*)(::g::Fuse::GeoLocation::LocationListenerBase*, ::g::Fuse::GeoLocation::Location*))PromiseListener__OnLocationChanged_fn;
    type->fp_OnTimeout = (void(*)(::g::Fuse::GeoLocation::TimeoutListener*))PromiseListener__OnTimeout_fn;
    type->interface2.fp_onLocationChanged = (void(*)(uObject*, ::g::Android::android::location::Location*))::g::Fuse::GeoLocation::LocationListenerBase__Android_android_location_LocationListener_onLocationChanged_fn;
    type->interface2.fp_onProviderDisabled = (void(*)(uObject*, ::g::Android::java::lang::String*))::g::Fuse::GeoLocation::LocationListenerBase__Android_android_location_LocationListener_onProviderDisabled_fn;
    type->interface2.fp_onProviderEnabled = (void(*)(uObject*, ::g::Android::java::lang::String*))::g::Fuse::GeoLocation::LocationListenerBase__Android_android_location_LocationListener_onProviderEnabled_fn;
    type->interface2.fp_onStatusChanged = (void(*)(uObject*, ::g::Android::java::lang::String*, int*, ::g::Android::android::os::Bundle*))::g::Fuse::GeoLocation::LocationListenerBase__Android_android_location_LocationListener_onStatusChanged_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::STRINGS[9] = uString::Const("Location request timed out");
    ::TYPES[30] = ::g::Uno::Int_typeof();
    ::TYPES[31] = ::g::Uno::Threading::Future_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Fuse::GeoLocation::TimeoutListener_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::GeoLocation::TimeoutListener_type, interface1),
        ::g::Android::android::location::LocationListener_typeof(), offsetof(::g::Fuse::GeoLocation::TimeoutListener_type, interface2));
    type->SetFields(6,
        ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::GeoLocation::Location_typeof()), offsetof(::g::Fuse::GeoLocation::PromiseListener, _promise), 0);
    return type;
}

// public PromiseListener(Android.android.location.LocationManager lm, double timeout, Uno.Threading.Promise<Fuse.GeoLocation.Location> promise) :186
void PromiseListener__ctor_6_fn(PromiseListener* __this, ::g::Android::android::location::LocationManager* lm, double* timeout, ::g::Uno::Threading::Promise* promise)
{
    __this->ctor_6(lm, *timeout, promise);
}

// public PromiseListener New(Android.android.location.LocationManager lm, double timeout, Uno.Threading.Promise<Fuse.GeoLocation.Location> promise) :186
void PromiseListener__New5_fn(::g::Android::android::location::LocationManager* lm, double* timeout, ::g::Uno::Threading::Promise* promise, PromiseListener** __retval)
{
    *__retval = PromiseListener::New5(lm, *timeout, promise);
}

// protected override sealed void OnLocationChanged(Fuse.GeoLocation.Location location) :197
void PromiseListener__OnLocationChanged_fn(PromiseListener* __this, ::g::Fuse::GeoLocation::Location* location)
{
    if (uPtr(__this->_promise)->State() != 0)
        return;

    __this->StopLocationUpdateAndTimer();
    ::g::Uno::Threading::Promise__Resolve_fn(uPtr(__this->_promise), location);
}

// protected override sealed void OnTimeout() :191
void PromiseListener__OnTimeout_fn(PromiseListener* __this)
{
    if (uPtr(__this->_promise)->State() != 0)
        return;

    uPtr(__this->_promise)->Reject(::g::Uno::Exception::New2(::STRINGS[9/*"Location re...*/]));
}

// public PromiseListener(Android.android.location.LocationManager lm, double timeout, Uno.Threading.Promise<Fuse.GeoLocation.Location> promise) [instance] :186
void PromiseListener::ctor_6(::g::Android::android::location::LocationManager* lm, double timeout, ::g::Uno::Threading::Promise* promise)
{
    ctor_5(lm, timeout);
    _promise = promise;
}

// public PromiseListener New(Android.android.location.LocationManager lm, double timeout, Uno.Threading.Promise<Fuse.GeoLocation.Location> promise) [static] :186
PromiseListener* PromiseListener::New5(::g::Android::android::location::LocationManager* lm, double timeout, ::g::Uno::Threading::Promise* promise)
{
    PromiseListener* obj1 = (PromiseListener*)uNew(PromiseListener_typeof());
    obj1->ctor_6(lm, timeout, promise);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.GeoLocation\0.19.3\Android\$.uno(218)
// ----------------------------------------------------------------------

// internal abstract extern class TimeoutListener :218
// {
TimeoutListener_type* TimeoutListener_typeof()
{
    static uSStrong<TimeoutListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(TimeoutListener);
    options.TypeSize = sizeof(TimeoutListener_type);
    type = (TimeoutListener_type*)uClassType::New("Fuse.GeoLocation.TimeoutListener", options);
    type->SetBase(::g::Fuse::GeoLocation::LocationListenerBase_typeof());
    type->interface2.fp_onLocationChanged = (void(*)(uObject*, ::g::Android::android::location::Location*))::g::Fuse::GeoLocation::LocationListenerBase__Android_android_location_LocationListener_onLocationChanged_fn;
    type->interface2.fp_onProviderDisabled = (void(*)(uObject*, ::g::Android::java::lang::String*))::g::Fuse::GeoLocation::LocationListenerBase__Android_android_location_LocationListener_onProviderDisabled_fn;
    type->interface2.fp_onProviderEnabled = (void(*)(uObject*, ::g::Android::java::lang::String*))::g::Fuse::GeoLocation::LocationListenerBase__Android_android_location_LocationListener_onProviderEnabled_fn;
    type->interface2.fp_onStatusChanged = (void(*)(uObject*, ::g::Android::java::lang::String*, int*, ::g::Android::android::os::Bundle*))::g::Fuse::GeoLocation::LocationListenerBase__Android_android_location_LocationListener_onStatusChanged_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__Uno_IDisposable_Dispose_fn;
    ::TYPES[1] = ::g::Android::android::location::LocationManager_typeof();
    ::TYPES[17] = ::g::Android::android::location::LocationListener_typeof();
    ::TYPES[23] = ::g::Uno::Action_typeof();
    ::TYPES[15] = ::g::Uno::Long_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(TimeoutListener_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(TimeoutListener_type, interface1),
        ::g::Android::android::location::LocationListener_typeof(), offsetof(TimeoutListener_type, interface2));
    type->SetFields(5,
        ::g::Android::android::location::LocationManager_typeof(), offsetof(::g::Fuse::GeoLocation::TimeoutListener, _lm), 0);
    return type;
}

// public TimeoutListener(Android.android.location.LocationManager lm, double timeout) :222
void TimeoutListener__ctor_5_fn(TimeoutListener* __this, ::g::Android::android::location::LocationManager* lm, double* timeout)
{
    __this->ctor_5(lm, *timeout);
}

// private void RequestUpdate() :235
void TimeoutListener__RequestUpdate_fn(TimeoutListener* __this)
{
    __this->RequestUpdate();
}

// private void StartTimeoutAction(double timeout) :228
void TimeoutListener__StartTimeoutAction_fn(TimeoutListener* __this, double* timeout)
{
    __this->StartTimeoutAction(*timeout);
}

// protected void StopLocationUpdateAndTimer() :247
void TimeoutListener__StopLocationUpdateAndTimer_fn(TimeoutListener* __this)
{
    __this->StopLocationUpdateAndTimer();
}

// private void TimeoutAction() :241
void TimeoutListener__TimeoutAction_fn(TimeoutListener* __this)
{
    __this->TimeoutAction();
}

// public TimeoutListener(Android.android.location.LocationManager lm, double timeout) [instance] :222
void TimeoutListener::ctor_5(::g::Android::android::location::LocationManager* lm, double timeout)
{
    ctor_4();
    _lm = lm;
    StartTimeoutAction(timeout);
}

// private void RequestUpdate() [instance] :235
void TimeoutListener::RequestUpdate()
{
    uPtr(_lm)->requestSingleUpdate3(::g::Android::android::location::LocationManager::NETWORK_PROVIDER(), (uObject*)this, NULL);
    uPtr(_lm)->requestSingleUpdate3(::g::Android::android::location::LocationManager::GPS_PROVIDER(), (uObject*)this, NULL);
}

// private void StartTimeoutAction(double timeout) [instance] :228
void TimeoutListener::StartTimeoutAction(double timeout)
{
    ::g::Android::android::os::Handler* _handler = ::g::Android::android::os::Handler::New7(::g::Android::android::os::Looper::getMainLooper());
    _handler->postDelayed(::g::Android::Runtime::UnoHelper::RunnableFromAction(uDelegate::New(::TYPES[23/*Uno.Action*/], (void*)TimeoutListener__TimeoutAction_fn, this)), (int64_t)timeout);
    _handler->post(::g::Android::Runtime::UnoHelper::RunnableFromAction(uDelegate::New(::TYPES[23/*Uno.Action*/], (void*)TimeoutListener__RequestUpdate_fn, this)));
}

// protected void StopLocationUpdateAndTimer() [instance] :247
void TimeoutListener::StopLocationUpdateAndTimer()
{
    uPtr(_lm)->removeUpdates1((uObject*)this);
}

// private void TimeoutAction() [instance] :241
void TimeoutListener::TimeoutAction()
{
    StopLocationUpdateAndTimer();
    OnTimeout();
}
// }

}}} // ::g::Fuse::GeoLocation
