// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_NAVIGATION_NAVIGATI_A511774F_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_NAVIGATION_NAVIGATI_A511774F_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Navigation_NavigationDirection.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Navigation_NavigationDirection; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Navigation_NavigationDirection; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMasterProperty__Fuse_Navigation_NavigationDirection;

struct AverageMasterProperty__Fuse_Navigation_NavigationDirection__uType : ::app::Fuse::Animations::MasterProperty__Fuse_Navigation_NavigationDirection__uType
{
};

AverageMasterProperty__Fuse_Navigation_NavigationDirection__uType* AverageMasterProperty__Fuse_Navigation_NavigationDirection__typeof();

void AverageMasterProperty__Fuse_Navigation_NavigationDirection___ObjInit_2(AverageMasterProperty__Fuse_Navigation_NavigationDirection* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection* property, ::app::Fuse::Animations::MixerBase* mixerBase);
AverageMasterProperty__Fuse_Navigation_NavigationDirection* AverageMasterProperty__Fuse_Navigation_NavigationDirection__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterProperty__Fuse_Navigation_NavigationDirection__OnActive(AverageMasterProperty__Fuse_Navigation_NavigationDirection* __this);
void AverageMasterProperty__Fuse_Navigation_NavigationDirection__OnComplete(AverageMasterProperty__Fuse_Navigation_NavigationDirection* __this);

struct AverageMasterProperty__Fuse_Navigation_NavigationDirection : ::app::Fuse::Animations::MasterProperty__Fuse_Navigation_NavigationDirection
{
    ::uStrong< ::app::Fuse::Internal::Blender__Fuse_Navigation_NavigationDirection*> blender;

    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Navigation_NavigationDirection* property, ::app::Fuse::Animations::MixerBase* mixerBase) { AverageMasterProperty__Fuse_Navigation_NavigationDirection___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
