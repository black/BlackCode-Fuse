// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.GeoLocation\0.18.8\Android\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.location.LocationListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Fuse.GeoLocation.ILocationTracker.h>
#include <Fuse.GeoLocation.LocationListenerBase.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace location{struct Location;}}}}
namespace g{namespace Android{namespace android{namespace location{struct LocationManager;}}}}
namespace g{namespace Fuse{namespace GeoLocation{struct AndroidLocationProvider;}}}
namespace g{namespace Fuse{namespace GeoLocation{struct Location;}}}
namespace g{namespace Uno{namespace Threading{struct Promise;}}}
namespace g{namespace Uno{namespace Time{struct Instant;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace GeoLocation{

// internal sealed extern class AndroidLocationProvider :19
// {
struct AndroidLocationProvider_type : ::g::Fuse::GeoLocation::LocationListenerBase_type
{
    ::g::Fuse::GeoLocation::ILocationTracker interface3;
};

AndroidLocationProvider_type* AndroidLocationProvider_typeof();
void AndroidLocationProvider__ctor_5_fn(AndroidLocationProvider* __this);
void AndroidLocationProvider__ChooseBestLocation_fn(AndroidLocationProvider* __this, uObject* locations, int* minDistance, ::g::Uno::Time::Instant* minTime, ::g::Fuse::GeoLocation::Location** __retval);
void AndroidLocationProvider__ConvertLocation_fn(::g::Android::android::location::Location* location, ::g::Fuse::GeoLocation::Location** __retval);
void AndroidLocationProvider__GetLastKnownPosition_fn(AndroidLocationProvider* __this, ::g::Fuse::GeoLocation::Location** __retval);
void AndroidLocationProvider__GetLocation_fn(AndroidLocationProvider* __this, ::g::Uno::Threading::Promise* promise, double* timeout);
void AndroidLocationProvider__get_IsGPSEnabled_fn(AndroidLocationProvider* __this, bool* __retval);
void AndroidLocationProvider__get_IsNetworkEnabled_fn(AndroidLocationProvider* __this, bool* __retval);
void AndroidLocationProvider__New5_fn(AndroidLocationProvider** __retval);
void AndroidLocationProvider__OnLocationChanged_fn(AndroidLocationProvider* __this, ::g::Fuse::GeoLocation::Location* location);
void AndroidLocationProvider__RequestAuthorization_fn(AndroidLocationProvider* __this, int* type);
void AndroidLocationProvider__StartListening_fn(AndroidLocationProvider* __this, uDelegate* onLocationChanged, uDelegate* onLocationError, int* minimumReportInterval, double* desiredAccuracyInMeters);
void AndroidLocationProvider__StopListening_fn(AndroidLocationProvider* __this);

struct AndroidLocationProvider : ::g::Fuse::GeoLocation::LocationListenerBase
{
    uStrong< ::g::Android::android::location::LocationManager*> _lm;
    uStrong<uDelegate*> _onLocationChanged;
    bool _started;

    void ctor_5();
    ::g::Fuse::GeoLocation::Location* ChooseBestLocation(uObject* locations, int minDistance, ::g::Uno::Time::Instant minTime);
    ::g::Fuse::GeoLocation::Location* GetLastKnownPosition();
    void GetLocation(::g::Uno::Threading::Promise* promise, double timeout);
    bool IsGPSEnabled();
    bool IsNetworkEnabled();
    void RequestAuthorization(int type);
    void StartListening(uDelegate* onLocationChanged, uDelegate* onLocationError, int minimumReportInterval, double desiredAccuracyInMeters);
    void StopListening();
    static ::g::Fuse::GeoLocation::Location* ConvertLocation(::g::Android::android::location::Location* location);
    static AndroidLocationProvider* New5();
};
// }

}}} // ::g::Fuse::GeoLocation
