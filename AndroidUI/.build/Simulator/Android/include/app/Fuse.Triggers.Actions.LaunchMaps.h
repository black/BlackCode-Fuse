// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Launcher\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_LAUNCH_MAPS_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_LAUNCH_MAPS_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct LaunchMaps;

struct LaunchMaps__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

LaunchMaps__uType* LaunchMaps__typeof();

void LaunchMaps___ObjInit_1(LaunchMaps* __this);
::uString* LaunchMaps__get_Latitude(LaunchMaps* __this);
::uString* LaunchMaps__get_Longitude(LaunchMaps* __this);
LaunchMaps* LaunchMaps__New_1(::uStatic* __this);
void LaunchMaps__Perform(LaunchMaps* __this, ::app::Fuse::Node* target);
void LaunchMaps__set_Latitude(LaunchMaps* __this, ::uString* value);
void LaunchMaps__set_Longitude(LaunchMaps* __this, ::uString* value);

struct LaunchMaps : ::app::Fuse::Triggers::Actions::TriggerAction
{
    ::uStrong< ::uString*> _Latitude;
    ::uStrong< ::uString*> _Longitude;

    void _ObjInit_1() { LaunchMaps___ObjInit_1(this); }
    ::uString* Latitude() { return LaunchMaps__get_Latitude(this); }
    ::uString* Longitude() { return LaunchMaps__get_Longitude(this); }
    void Latitude(::uString* value) { LaunchMaps__set_Latitude(this, value); }
    void Longitude(::uString* value) { LaunchMaps__set_Longitude(this, value); }
};

}}}}


#endif
