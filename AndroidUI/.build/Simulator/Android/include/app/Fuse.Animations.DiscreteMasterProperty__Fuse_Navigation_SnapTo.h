// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_DISCRETE_MASTER_PROPERTY__FUSE_NAVIGATION_SNAP_TO_H__
#define __APP_FUSE_ANIMATIONS_DISCRETE_MASTER_PROPERTY__FUSE_NAVIGATION_SNAP_TO_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Navigation_SnapTo.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Navigation_SnapTo; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct DiscreteMasterProperty__Fuse_Navigation_SnapTo;

struct DiscreteMasterProperty__Fuse_Navigation_SnapTo__uType : ::app::Fuse::Animations::MasterProperty__Fuse_Navigation_SnapTo__uType
{
};

DiscreteMasterProperty__Fuse_Navigation_SnapTo__uType* DiscreteMasterProperty__Fuse_Navigation_SnapTo__typeof();

void DiscreteMasterProperty__Fuse_Navigation_SnapTo___ObjInit_2(DiscreteMasterProperty__Fuse_Navigation_SnapTo* __this, ::app::Uno::UX::Property__Fuse_Navigation_SnapTo* property, ::app::Fuse::Animations::MixerBase* mixerBase);
DiscreteMasterProperty__Fuse_Navigation_SnapTo* DiscreteMasterProperty__Fuse_Navigation_SnapTo__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Navigation_SnapTo* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void DiscreteMasterProperty__Fuse_Navigation_SnapTo__OnComplete(DiscreteMasterProperty__Fuse_Navigation_SnapTo* __this);

struct DiscreteMasterProperty__Fuse_Navigation_SnapTo : ::app::Fuse::Animations::MasterProperty__Fuse_Navigation_SnapTo
{
    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Navigation_SnapTo* property, ::app::Fuse::Animations::MixerBase* mixerBase) { DiscreteMasterProperty__Fuse_Navigation_SnapTo___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
