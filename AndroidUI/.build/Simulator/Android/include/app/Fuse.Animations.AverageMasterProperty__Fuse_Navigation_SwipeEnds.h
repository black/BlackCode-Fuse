// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_NAVIGATION_SWIPE_ENDS_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_NAVIGATION_SWIPE_ENDS_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Navigation_SwipeEnds.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Navigation_SwipeEnds; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Navigation_SwipeEnds; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMasterProperty__Fuse_Navigation_SwipeEnds;

struct AverageMasterProperty__Fuse_Navigation_SwipeEnds__uType : ::app::Fuse::Animations::MasterProperty__Fuse_Navigation_SwipeEnds__uType
{
};

AverageMasterProperty__Fuse_Navigation_SwipeEnds__uType* AverageMasterProperty__Fuse_Navigation_SwipeEnds__typeof();

void AverageMasterProperty__Fuse_Navigation_SwipeEnds___ObjInit_2(AverageMasterProperty__Fuse_Navigation_SwipeEnds* __this, ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds* property, ::app::Fuse::Animations::MixerBase* mixerBase);
AverageMasterProperty__Fuse_Navigation_SwipeEnds* AverageMasterProperty__Fuse_Navigation_SwipeEnds__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterProperty__Fuse_Navigation_SwipeEnds__OnActive(AverageMasterProperty__Fuse_Navigation_SwipeEnds* __this);
void AverageMasterProperty__Fuse_Navigation_SwipeEnds__OnComplete(AverageMasterProperty__Fuse_Navigation_SwipeEnds* __this);

struct AverageMasterProperty__Fuse_Navigation_SwipeEnds : ::app::Fuse::Animations::MasterProperty__Fuse_Navigation_SwipeEnds
{
    ::uStrong< ::app::Fuse::Internal::Blender__Fuse_Navigation_SwipeEnds*> blender;

    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Navigation_SwipeEnds* property, ::app::Fuse::Animations::MixerBase* mixerBase) { AverageMasterProperty__Fuse_Navigation_SwipeEnds___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif