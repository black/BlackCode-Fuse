// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_TRIGGERS_ACTIONS_TR_B73057A2_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_TRIGGERS_ACTIONS_TR_B73057A2_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Triggers_Actions_TriggerDirection.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Triggers_Actions_TriggerDirection; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Triggers_Actions_TriggerDirection; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMasterProperty__Fuse_Triggers_Actions_TriggerDirection;

struct AverageMasterProperty__Fuse_Triggers_Actions_TriggerDirection__uType : ::app::Fuse::Animations::MasterProperty__Fuse_Triggers_Actions_TriggerDirection__uType
{
};

AverageMasterProperty__Fuse_Triggers_Actions_TriggerDirection__uType* AverageMasterProperty__Fuse_Triggers_Actions_TriggerDirection__typeof();

void AverageMasterProperty__Fuse_Triggers_Actions_TriggerDirection___ObjInit_2(AverageMasterProperty__Fuse_Triggers_Actions_TriggerDirection* __this, ::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection* property, ::app::Fuse::Animations::MixerBase* mixerBase);
AverageMasterProperty__Fuse_Triggers_Actions_TriggerDirection* AverageMasterProperty__Fuse_Triggers_Actions_TriggerDirection__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterProperty__Fuse_Triggers_Actions_TriggerDirection__OnActive(AverageMasterProperty__Fuse_Triggers_Actions_TriggerDirection* __this);
void AverageMasterProperty__Fuse_Triggers_Actions_TriggerDirection__OnComplete(AverageMasterProperty__Fuse_Triggers_Actions_TriggerDirection* __this);

struct AverageMasterProperty__Fuse_Triggers_Actions_TriggerDirection : ::app::Fuse::Animations::MasterProperty__Fuse_Triggers_Actions_TriggerDirection
{
    ::uStrong< ::app::Fuse::Internal::Blender__Fuse_Triggers_Actions_TriggerDirection*> blender;

    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Triggers_Actions_TriggerDirection* property, ::app::Fuse::Animations::MixerBase* mixerBase) { AverageMasterProperty__Fuse_Triggers_Actions_TriggerDirection___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
