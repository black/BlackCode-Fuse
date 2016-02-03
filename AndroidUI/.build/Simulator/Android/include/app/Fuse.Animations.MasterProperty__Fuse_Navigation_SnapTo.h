// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__FUSE_NAVIGATION_SNAP_TO_H__
#define __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__FUSE_NAVIGATION_SNAP_TO_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Navigation_SnapTo.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Navigation_SnapTo; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterProperty__Fuse_Navigation_SnapTo;

struct MasterProperty__Fuse_Navigation_SnapTo__uType : ::app::Fuse::Animations::MasterBase__Fuse_Navigation_SnapTo__uType
{
    ::app::Fuse::Animations::MasterPropertyGet __interface_1;
};

MasterProperty__Fuse_Navigation_SnapTo__uType* MasterProperty__Fuse_Navigation_SnapTo__typeof();

void MasterProperty__Fuse_Navigation_SnapTo___ObjInit_1(MasterProperty__Fuse_Navigation_SnapTo* __this, ::app::Uno::UX::Property__Fuse_Navigation_SnapTo* property, ::app::Fuse::Animations::MixerBase* mixerBase);
int MasterProperty__Fuse_Navigation_SnapTo__get_RestValue(MasterProperty__Fuse_Navigation_SnapTo* __this);
::uObject* MasterProperty__Fuse_Navigation_SnapTo__GetPropertyObject(MasterProperty__Fuse_Navigation_SnapTo* __this);
void MasterProperty__Fuse_Navigation_SnapTo__OnInactive(MasterProperty__Fuse_Navigation_SnapTo* __this);

struct MasterProperty__Fuse_Navigation_SnapTo : ::app::Fuse::Animations::MasterBase__Fuse_Navigation_SnapTo
{
    ::uStrong< ::app::Uno::UX::Property__Fuse_Navigation_SnapTo*> Property;

    void _ObjInit_1(::app::Uno::UX::Property__Fuse_Navigation_SnapTo* property, ::app::Fuse::Animations::MixerBase* mixerBase) { MasterProperty__Fuse_Navigation_SnapTo___ObjInit_1(this, property, mixerBase); }
    ::uObject* GetPropertyObject() { return MasterProperty__Fuse_Navigation_SnapTo__GetPropertyObject(this); }
};

}}}


#endif
