// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_ANIMATIONS_ANIMATION_VARIANT_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_ANIMATIONS_ANIMATION_VARIANT_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Animations_AnimationVariant.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Animations_AnimationVariant; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Animations_AnimationVariant; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMasterProperty__Fuse_Animations_AnimationVariant;

struct AverageMasterProperty__Fuse_Animations_AnimationVariant__uType : ::app::Fuse::Animations::MasterProperty__Fuse_Animations_AnimationVariant__uType
{
};

AverageMasterProperty__Fuse_Animations_AnimationVariant__uType* AverageMasterProperty__Fuse_Animations_AnimationVariant__typeof();

void AverageMasterProperty__Fuse_Animations_AnimationVariant___ObjInit_2(AverageMasterProperty__Fuse_Animations_AnimationVariant* __this, ::app::Uno::UX::Property__Fuse_Animations_AnimationVariant* property, ::app::Fuse::Animations::MixerBase* mixerBase);
AverageMasterProperty__Fuse_Animations_AnimationVariant* AverageMasterProperty__Fuse_Animations_AnimationVariant__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Animations_AnimationVariant* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterProperty__Fuse_Animations_AnimationVariant__OnActive(AverageMasterProperty__Fuse_Animations_AnimationVariant* __this);
void AverageMasterProperty__Fuse_Animations_AnimationVariant__OnComplete(AverageMasterProperty__Fuse_Animations_AnimationVariant* __this);

struct AverageMasterProperty__Fuse_Animations_AnimationVariant : ::app::Fuse::Animations::MasterProperty__Fuse_Animations_AnimationVariant
{
    ::uStrong< ::app::Fuse::Internal::Blender__Fuse_Animations_AnimationVariant*> blender;

    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Animations_AnimationVariant* property, ::app::Fuse::Animations::MixerBase* mixerBase) { AverageMasterProperty__Fuse_Animations_AnimationVariant___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
