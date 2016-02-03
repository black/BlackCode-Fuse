// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_NAVIGATION_SWIPE_DIRECTION_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_NAVIGATION_SWIPE_DIRECTION_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Navigation_SwipeDirection.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Navigation_SwipeDirection; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Navigation_SwipeDirection; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMasterProperty__Fuse_Navigation_SwipeDirection;

struct AverageMasterProperty__Fuse_Navigation_SwipeDirection__uType : ::app::Fuse::Animations::MasterProperty__Fuse_Navigation_SwipeDirection__uType
{
};

AverageMasterProperty__Fuse_Navigation_SwipeDirection__uType* AverageMasterProperty__Fuse_Navigation_SwipeDirection__typeof();

void AverageMasterProperty__Fuse_Navigation_SwipeDirection___ObjInit_2(AverageMasterProperty__Fuse_Navigation_SwipeDirection* __this, ::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection* property, ::app::Fuse::Animations::MixerBase* mixerBase);
AverageMasterProperty__Fuse_Navigation_SwipeDirection* AverageMasterProperty__Fuse_Navigation_SwipeDirection__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterProperty__Fuse_Navigation_SwipeDirection__OnActive(AverageMasterProperty__Fuse_Navigation_SwipeDirection* __this);
void AverageMasterProperty__Fuse_Navigation_SwipeDirection__OnComplete(AverageMasterProperty__Fuse_Navigation_SwipeDirection* __this);

struct AverageMasterProperty__Fuse_Navigation_SwipeDirection : ::app::Fuse::Animations::MasterProperty__Fuse_Navigation_SwipeDirection
{
    ::uStrong< ::app::Fuse::Internal::Blender__Fuse_Navigation_SwipeDirection*> blender;

    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Navigation_SwipeDirection* property, ::app::Fuse::Animations::MixerBase* mixerBase) { AverageMasterProperty__Fuse_Navigation_SwipeDirection___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
