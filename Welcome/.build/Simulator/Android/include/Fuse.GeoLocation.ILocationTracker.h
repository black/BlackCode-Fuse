// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.GeoLocation\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace GeoLocation{struct Location;}}}
namespace g{namespace Uno{namespace Threading{struct Promise;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace GeoLocation{

// public abstract interface ILocationTracker :67
// {
uInterfaceType* ILocationTracker_typeof();

struct ILocationTracker
{
    void(*fp_GetLastKnownPosition)(uObject*, ::g::Fuse::GeoLocation::Location**);
    void(*fp_GetLocation)(uObject*, ::g::Uno::Threading::Promise*, double*);
    void(*fp_RequestAuthorization)(uObject*, int*);
    void(*fp_StartListening)(uObject*, uDelegate*, uDelegate*, int*, double*);
    void(*fp_StopListening)(uObject*);
    static ::g::Fuse::GeoLocation::Location* GetLastKnownPosition(const uInterface& __this) { ::g::Fuse::GeoLocation::Location* __retval; return __this.VTable<ILocationTracker>()->fp_GetLastKnownPosition(__this, &__retval), __retval; }
    static void GetLocation(const uInterface& __this, ::g::Uno::Threading::Promise* promise, double timeout) { __this.VTable<ILocationTracker>()->fp_GetLocation(__this, promise, &timeout); }
    static void RequestAuthorization(const uInterface& __this, int type) { __this.VTable<ILocationTracker>()->fp_RequestAuthorization(__this, &type); }
    static void StartListening(const uInterface& __this, uDelegate* onLocationChanged, uDelegate* onLocationError, int minimumReportInterval, double desiredAccuracyInMeters) { __this.VTable<ILocationTracker>()->fp_StartListening(__this, onLocationChanged, onLocationError, &minimumReportInterval, &desiredAccuracyInMeters); }
    static void StopListening(const uInterface& __this) { __this.VTable<ILocationTracker>()->fp_StopListening(__this); }
};
// }

}}} // ::g::Fuse::GeoLocation
