// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_TRIGGERS_STATE_TRANSITION_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_TRIGGERS_STATE_TRANSITION_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Triggers_StateTransition.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Triggers_StateTransition; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Triggers_StateTransition; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMasterProperty__Fuse_Triggers_StateTransition;

struct AverageMasterProperty__Fuse_Triggers_StateTransition__uType : ::app::Fuse::Animations::MasterProperty__Fuse_Triggers_StateTransition__uType
{
};

AverageMasterProperty__Fuse_Triggers_StateTransition__uType* AverageMasterProperty__Fuse_Triggers_StateTransition__typeof();

void AverageMasterProperty__Fuse_Triggers_StateTransition___ObjInit_2(AverageMasterProperty__Fuse_Triggers_StateTransition* __this, ::app::Uno::UX::Property__Fuse_Triggers_StateTransition* property, ::app::Fuse::Animations::MixerBase* mixerBase);
AverageMasterProperty__Fuse_Triggers_StateTransition* AverageMasterProperty__Fuse_Triggers_StateTransition__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Triggers_StateTransition* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterProperty__Fuse_Triggers_StateTransition__OnActive(AverageMasterProperty__Fuse_Triggers_StateTransition* __this);
void AverageMasterProperty__Fuse_Triggers_StateTransition__OnComplete(AverageMasterProperty__Fuse_Triggers_StateTransition* __this);

struct AverageMasterProperty__Fuse_Triggers_StateTransition : ::app::Fuse::Animations::MasterProperty__Fuse_Triggers_StateTransition
{
    ::uStrong< ::app::Fuse::Internal::Blender__Fuse_Triggers_StateTransition*> blender;

    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Triggers_StateTransition* property, ::app::Fuse::Animations::MixerBase* mixerBase) { AverageMasterProperty__Fuse_Triggers_StateTransition___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
