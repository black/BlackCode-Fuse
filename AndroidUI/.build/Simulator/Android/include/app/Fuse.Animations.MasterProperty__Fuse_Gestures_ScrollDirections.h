// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__FUSE_GESTURES_SCROLL_DIRECTIONS_H__
#define __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__FUSE_GESTURES_SCROLL_DIRECTIONS_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Gestures_ScrollDirections.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Gestures_ScrollDirections; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterProperty__Fuse_Gestures_ScrollDirections;

struct MasterProperty__Fuse_Gestures_ScrollDirections__uType : ::app::Fuse::Animations::MasterBase__Fuse_Gestures_ScrollDirections__uType
{
    ::app::Fuse::Animations::MasterPropertyGet __interface_1;
};

MasterProperty__Fuse_Gestures_ScrollDirections__uType* MasterProperty__Fuse_Gestures_ScrollDirections__typeof();

void MasterProperty__Fuse_Gestures_ScrollDirections___ObjInit_1(MasterProperty__Fuse_Gestures_ScrollDirections* __this, ::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections* property, ::app::Fuse::Animations::MixerBase* mixerBase);
int MasterProperty__Fuse_Gestures_ScrollDirections__get_RestValue(MasterProperty__Fuse_Gestures_ScrollDirections* __this);
::uObject* MasterProperty__Fuse_Gestures_ScrollDirections__GetPropertyObject(MasterProperty__Fuse_Gestures_ScrollDirections* __this);
void MasterProperty__Fuse_Gestures_ScrollDirections__OnInactive(MasterProperty__Fuse_Gestures_ScrollDirections* __this);

struct MasterProperty__Fuse_Gestures_ScrollDirections : ::app::Fuse::Animations::MasterBase__Fuse_Gestures_ScrollDirections
{
    ::uStrong< ::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections*> Property;

    void _ObjInit_1(::app::Uno::UX::Property__Fuse_Gestures_ScrollDirections* property, ::app::Fuse::Animations::MixerBase* mixerBase) { MasterProperty__Fuse_Gestures_ScrollDirections___ObjInit_1(this, property, mixerBase); }
    ::uObject* GetPropertyObject() { return MasterProperty__Fuse_Gestures_ScrollDirections__GetPropertyObject(this); }
};

}}}


#endif
