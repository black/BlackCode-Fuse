// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_DISCRETE_MASTER_PROPERTY__FUSE_TRIGGERS_STATE_TRANSITION_H__
#define __APP_FUSE_ANIMATIONS_DISCRETE_MASTER_PROPERTY__FUSE_TRIGGERS_STATE_TRANSITION_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Triggers_StateTransition.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Triggers_StateTransition; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct DiscreteMasterProperty__Fuse_Triggers_StateTransition;

struct DiscreteMasterProperty__Fuse_Triggers_StateTransition__uType : ::app::Fuse::Animations::MasterProperty__Fuse_Triggers_StateTransition__uType
{
};

DiscreteMasterProperty__Fuse_Triggers_StateTransition__uType* DiscreteMasterProperty__Fuse_Triggers_StateTransition__typeof();

void DiscreteMasterProperty__Fuse_Triggers_StateTransition___ObjInit_2(DiscreteMasterProperty__Fuse_Triggers_StateTransition* __this, ::app::Uno::UX::Property__Fuse_Triggers_StateTransition* property, ::app::Fuse::Animations::MixerBase* mixerBase);
DiscreteMasterProperty__Fuse_Triggers_StateTransition* DiscreteMasterProperty__Fuse_Triggers_StateTransition__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Triggers_StateTransition* property, ::app::Fuse::Animations::MixerBase* mixerBase);
void DiscreteMasterProperty__Fuse_Triggers_StateTransition__OnComplete(DiscreteMasterProperty__Fuse_Triggers_StateTransition* __this);

struct DiscreteMasterProperty__Fuse_Triggers_StateTransition : ::app::Fuse::Animations::MasterProperty__Fuse_Triggers_StateTransition
{
    void _ObjInit_2(::app::Uno::UX::Property__Fuse_Triggers_StateTransition* property, ::app::Fuse::Animations::MixerBase* mixerBase) { DiscreteMasterProperty__Fuse_Triggers_StateTransition___ObjInit_2(this, property, mixerBase); }
};

}}}


#endif
