// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__FUSE_TRIGGERS_STATE_H__
#define __APP_FUSE_ANIMATIONS_MASTER_PROPERTY__FUSE_TRIGGERS_STATE_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Triggers_State.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Triggers { struct State; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Triggers_State; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterProperty__Fuse_Triggers_State;

struct MasterProperty__Fuse_Triggers_State__uType : ::app::Fuse::Animations::MasterBase__Fuse_Triggers_State__uType
{
    ::app::Fuse::Animations::MasterPropertyGet __interface_1;
};

MasterProperty__Fuse_Triggers_State__uType* MasterProperty__Fuse_Triggers_State__typeof();

void MasterProperty__Fuse_Triggers_State___ObjInit_1(MasterProperty__Fuse_Triggers_State* __this, ::app::Uno::UX::Property__Fuse_Triggers_State* property, ::app::Fuse::Animations::MixerBase* mixerBase);
::app::Fuse::Triggers::State* MasterProperty__Fuse_Triggers_State__get_RestValue(MasterProperty__Fuse_Triggers_State* __this);
::uObject* MasterProperty__Fuse_Triggers_State__GetPropertyObject(MasterProperty__Fuse_Triggers_State* __this);
void MasterProperty__Fuse_Triggers_State__OnInactive(MasterProperty__Fuse_Triggers_State* __this);

struct MasterProperty__Fuse_Triggers_State : ::app::Fuse::Animations::MasterBase__Fuse_Triggers_State
{
    ::uStrong< ::app::Uno::UX::Property__Fuse_Triggers_State*> Property;

    void _ObjInit_1(::app::Uno::UX::Property__Fuse_Triggers_State* property, ::app::Fuse::Animations::MixerBase* mixerBase) { MasterProperty__Fuse_Triggers_State___ObjInit_1(this, property, mixerBase); }
    ::uObject* GetPropertyObject() { return MasterProperty__Fuse_Triggers_State__GetPropertyObject(this); }
};

}}}


#endif
