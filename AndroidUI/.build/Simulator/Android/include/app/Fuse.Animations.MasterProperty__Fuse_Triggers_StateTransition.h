// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__FUSE_TRIGGERS_STATE_TRANSITION_H__
#define __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__FUSE_TRIGGERS_STATE_TRANSITION_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Triggers_StateTransition.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Triggers_StateTransition; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterProperty__Fuse_Triggers_StateTransition;

struct MasterProperty__Fuse_Triggers_StateTransition__uType : ::app::Fuse::Animations::MasterBase__Fuse_Triggers_StateTransition__uType
{
    ::app::Fuse::Animations::MasterPropertyGet __interface_1;
};

MasterProperty__Fuse_Triggers_StateTransition__uType* MasterProperty__Fuse_Triggers_StateTransition__typeof();

void MasterProperty__Fuse_Triggers_StateTransition___ObjInit_1(MasterProperty__Fuse_Triggers_StateTransition* __this, ::app::Uno::UX::Property__Fuse_Triggers_StateTransition* property, ::app::Fuse::Animations::MixerBase* mixerBase);
int MasterProperty__Fuse_Triggers_StateTransition__get_RestValue(MasterProperty__Fuse_Triggers_StateTransition* __this);
::uObject* MasterProperty__Fuse_Triggers_StateTransition__GetPropertyObject(MasterProperty__Fuse_Triggers_StateTransition* __this);
void MasterProperty__Fuse_Triggers_StateTransition__OnInactive(MasterProperty__Fuse_Triggers_StateTransition* __this);

struct MasterProperty__Fuse_Triggers_StateTransition : ::app::Fuse::Animations::MasterBase__Fuse_Triggers_StateTransition
{
    ::uStrong< ::app::Uno::UX::Property__Fuse_Triggers_StateTransition*> Property;

    void _ObjInit_1(::app::Uno::UX::Property__Fuse_Triggers_StateTransition* property, ::app::Fuse::Animations::MixerBase* mixerBase) { MasterProperty__Fuse_Triggers_StateTransition___ObjInit_1(this, property, mixerBase); }
    ::uObject* GetPropertyObject() { return MasterProperty__Fuse_Triggers_StateTransition__GetPropertyObject(this); }
};

}}}


#endif
