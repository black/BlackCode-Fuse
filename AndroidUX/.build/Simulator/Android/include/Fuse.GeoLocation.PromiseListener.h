// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.GeoLocation\0.18.8\Android\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.location.LocationListener.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Fuse.GeoLocation.TimeoutListener.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace location{struct LocationManager;}}}}
namespace g{namespace Fuse{namespace GeoLocation{struct Location;}}}
namespace g{namespace Fuse{namespace GeoLocation{struct PromiseListener;}}}
namespace g{namespace Uno{namespace Threading{struct Promise;}}}

namespace g{
namespace Fuse{
namespace GeoLocation{

// internal sealed extern class PromiseListener :182
// {
::g::Fuse::GeoLocation::TimeoutListener_type* PromiseListener_typeof();
void PromiseListener__ctor_6_fn(PromiseListener* __this, ::g::Android::android::location::LocationManager* lm, double* timeout, ::g::Uno::Threading::Promise* promise);
void PromiseListener__New5_fn(::g::Android::android::location::LocationManager* lm, double* timeout, ::g::Uno::Threading::Promise* promise, PromiseListener** __retval);
void PromiseListener__OnLocationChanged_fn(PromiseListener* __this, ::g::Fuse::GeoLocation::Location* location);
void PromiseListener__OnTimeout_fn(PromiseListener* __this);

struct PromiseListener : ::g::Fuse::GeoLocation::TimeoutListener
{
    uStrong< ::g::Uno::Threading::Promise*> _promise;

    void ctor_6(::g::Android::android::location::LocationManager* lm, double timeout, ::g::Uno::Threading::Promise* promise);
    static PromiseListener* New5(::g::Android::android::location::LocationManager* lm, double timeout, ::g::Uno::Threading::Promise* promise);
};
// }

}}} // ::g::Fuse::GeoLocation
