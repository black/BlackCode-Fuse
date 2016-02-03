// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Launcher\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct LaunchMaps;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class LaunchMaps :203
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* LaunchMaps_typeof();
void LaunchMaps__ctor_1_fn(LaunchMaps* __this);
void LaunchMaps__get_Latitude_fn(LaunchMaps* __this, uString** __retval);
void LaunchMaps__set_Latitude_fn(LaunchMaps* __this, uString* value);
void LaunchMaps__get_Longitude_fn(LaunchMaps* __this, uString** __retval);
void LaunchMaps__set_Longitude_fn(LaunchMaps* __this, uString* value);
void LaunchMaps__New1_fn(LaunchMaps** __retval);
void LaunchMaps__Perform_fn(LaunchMaps* __this, ::g::Fuse::Node* target);

struct LaunchMaps : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong<uString*> _Latitude;
    uStrong<uString*> _Longitude;

    void ctor_1();
    uString* Latitude();
    void Latitude(uString* value);
    uString* Longitude();
    void Longitude(uString* value);
    static LaunchMaps* New1();
};
// }

}}}} // ::g::Fuse::Triggers::Actions
