// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_TRIGGERS_TRIGGER_BYPASS_MODE_H__
#define __APP_FUSE_ANIMATIONS_AVERAGE_MASTER_PROPERTY__FUSE_TRIGGERS_TRIGGER_BYPASS_MODE_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Triggers_TriggerBypassMode.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Triggers_TriggerBypassMode; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Triggers_TriggerBypassMode; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct AverageMasterProperty__Fuse_Triggers_TriggerBypassMode;

struct AverageMasterProperty__Fuse_Triggers_TriggerBypassMode__uType : ::app::Fuse::Animations::MasterProperty__Fuse_Triggers_TriggerBypassMode__uType
{
};

AverageMasterProperty__Fuse_Triggers_TriggerBypassMode__uType* AverageMasterProperty__Fuse_Triggers_TriggerBypassMode__typeof();

void AverageMasterProperty__Fuse_Triggers_TriggerBypassMode___ObjInit_2(AverageMasterProperty__Fuse_Triggers_TriggerBypassMode* __this, ::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode* property, ::app::Fuse::Animations::MixerBase* mixerBase);
AverageMasterProperty__Fuse_Triggers_TriggerBypassMode* AverageMasterProperty__Fuse_Triggers_TriggerBypassMode__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void AverageMasterProperty__Fuse_Triggers_TriggerBypassMode__OnActive(AverageMasterProperty__Fuse_Triggers_TriggerBypassMode* __this);
void AverageMasterProperty__Fuse_Triggers_TriggerBypassMode__OnComplete(AverageMasterProperty__Fuse_Triggers_TriggerBypassMode* __this);

struct AverageMasterProperty__Fuse_Triggers_TriggerBypassMode : ::app::Fuse::Animations::MasterProperty__Fuse_Triggers_TriggerBypassMode
{
    ::uStrong< ::app::Fuse::Internal::Blender__Fuse_Triggers_TriggerBypassMode*> blender;

    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Triggers_TriggerBypassMode* property, ::app::Fuse::Animations::MixerBase* mixerBase) { AverageMasterProperty__Fuse_Triggers_TriggerBypassMode___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
