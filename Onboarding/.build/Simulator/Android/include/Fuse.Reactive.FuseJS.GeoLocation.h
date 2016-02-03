// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.19.3\FuseJS\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModule.h>
#include <Fuse.Scripting.NativeModule.h>
namespace g{namespace Fuse{namespace GeoLocation{struct Location;}}}
namespace g{namespace Fuse{namespace GeoLocation{struct LocationTracker;}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct GeoLocation;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeEvent;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// internal sealed class GeoLocation :544
// {
::g::Fuse::Scripting::NativeModule_type* GeoLocation_typeof();
void GeoLocation__ctor_1_fn(GeoLocation* __this);
void GeoLocation__AuthorizationRequestConverter_fn(::g::Fuse::Scripting::Context* context, int* type, int* __retval);
void GeoLocation__Converter_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::GeoLocation::Location* location, ::g::Fuse::Scripting::Object** __retval);
void GeoLocation__GetAuhtorizationRequest_fn(GeoLocation* __this, int* __retval);
void GeoLocation__GetLocation_fn(GeoLocation* __this, ::g::Fuse::GeoLocation::Location** __retval);
void GeoLocation__GetLocationAsync_fn(GeoLocation* __this, uArray* args, ::g::Uno::Threading::Future1** __retval);
void GeoLocation__LocationChanged_fn(GeoLocation* __this, ::g::Fuse::GeoLocation::Location* location);
void GeoLocation__New2_fn(GeoLocation** __retval);
void GeoLocation__SetAuhtorizationRequest_fn(GeoLocation* __this, int* value);
void GeoLocation__StartListening_fn(GeoLocation* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);
void GeoLocation__StopListening_fn(GeoLocation* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);

struct GeoLocation : ::g::Fuse::Scripting::NativeModule
{
    uStrong< ::g::Fuse::GeoLocation::LocationTracker*> _locationTracker;
    uStrong< ::g::Fuse::Scripting::NativeEvent*> _onChangedEvent;

    void ctor_1();
    int GetAuhtorizationRequest();
    ::g::Fuse::GeoLocation::Location* GetLocation();
    ::g::Uno::Threading::Future1* GetLocationAsync(uArray* args);
    void LocationChanged(::g::Fuse::GeoLocation::Location* location);
    void SetAuhtorizationRequest(int value);
    uObject* StartListening(::g::Fuse::Scripting::Context* c, uArray* args);
    uObject* StopListening(::g::Fuse::Scripting::Context* c, uArray* args);
    static int AuthorizationRequestConverter(::g::Fuse::Scripting::Context* context, int type);
    static ::g::Fuse::Scripting::Object* Converter(::g::Fuse::Scripting::Context* context, ::g::Fuse::GeoLocation::Location* location);
    static GeoLocation* New2();
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
