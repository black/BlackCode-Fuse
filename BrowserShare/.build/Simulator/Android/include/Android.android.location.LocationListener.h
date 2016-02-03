// This file was generated based on 'C:\ProgramData\Uno\Packages\Android\0.20.2\Android\android\location\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>
namespace g{namespace Android{namespace android{namespace location{struct Location;}}}}
namespace g{namespace Android{namespace android{namespace os{struct Bundle;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace location{

// public abstract extern interface LocationListener :2474
// {
uInterfaceType* LocationListener_typeof();

struct LocationListener
{
    void(*fp_onLocationChanged)(uObject*, ::g::Android::android::location::Location*);
    void(*fp_onProviderDisabled)(uObject*, ::g::Android::java::lang::String*);
    void(*fp_onProviderEnabled)(uObject*, ::g::Android::java::lang::String*);
    void(*fp_onStatusChanged)(uObject*, ::g::Android::java::lang::String*, int*, ::g::Android::android::os::Bundle*);
    static void onLocationChanged(const uInterface& __this, ::g::Android::android::location::Location* arg0) { __this.VTable<LocationListener>()->fp_onLocationChanged(__this, arg0); }
    static void onProviderDisabled(const uInterface& __this, ::g::Android::java::lang::String* arg0) { __this.VTable<LocationListener>()->fp_onProviderDisabled(__this, arg0); }
    static void onProviderEnabled(const uInterface& __this, ::g::Android::java::lang::String* arg0) { __this.VTable<LocationListener>()->fp_onProviderEnabled(__this, arg0); }
    static void onStatusChanged(const uInterface& __this, ::g::Android::java::lang::String* arg0, int arg1, ::g::Android::android::os::Bundle* arg2) { __this.VTable<LocationListener>()->fp_onStatusChanged(__this, arg0, &arg1, arg2); }
};
// }

}}}} // ::g::Android::android::location
