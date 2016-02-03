// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_BASE__FUSE_TRIGGERS_STATE_H__
#define __APP_FUSE_ANIMATIONS_MASTER_BASE__FUSE_TRIGGERS_STATE_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase1_GFWResult__Fuse_Triggers_State; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Triggers_State; } } }
namespace app { namespace Fuse { namespace Triggers { struct State; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_Fuse_Triggers_State_; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterBase__Fuse_Triggers_State;

struct MasterBase__Fuse_Triggers_State__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerMaster __interface_0;
    ::app::Fuse::Triggers::State*(*__fp_get_RestValue)(MasterBase__Fuse_Triggers_State*);
    void(*__fp_OnActive)(MasterBase__Fuse_Triggers_State*);
    void(*__fp_OnComplete)(MasterBase__Fuse_Triggers_State*);
    void(*__fp_OnInactive)(MasterBase__Fuse_Triggers_State*);
};

MasterBase__Fuse_Triggers_State__uType* MasterBase__Fuse_Triggers_State__typeof();

void MasterBase__Fuse_Triggers_State__Finalize(MasterBase__Fuse_Triggers_State* __this);
void MasterBase__Fuse_Triggers_State___ObjInit(MasterBase__Fuse_Triggers_State* __this, ::app::Fuse::Animations::MixerBase* mixerBase);
void MasterBase__Fuse_Triggers_State__Complete(MasterBase__Fuse_Triggers_State* __this);
bool MasterBase__Fuse_Triggers_State__get_PostLayout(MasterBase__Fuse_Triggers_State* __this);
::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Triggers_State MasterBase__Fuse_Triggers_State__GetFullWeight(MasterBase__Fuse_Triggers_State* __this);
void MasterBase__Fuse_Triggers_State__OnActive(MasterBase__Fuse_Triggers_State* __this);
void MasterBase__Fuse_Triggers_State__Register(MasterBase__Fuse_Triggers_State* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_State* handle);
void MasterBase__Fuse_Triggers_State__Unregister(MasterBase__Fuse_Triggers_State* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Triggers_State* handle);

struct MasterBase__Fuse_Triggers_State : ::uObject
{
    ::uStrong< ::app::Fuse::Animations::MixerBase*> _mixerBase;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Triggers_State_*> Handles;
    bool masterAdded;
    bool _inactive;
    bool DirtyValue;

    void _ObjInit(::app::Fuse::Animations::MixerBase* mixerBase) { MasterBase__Fuse_Triggers_State___ObjInit(this, mixerBase); }
    void Complete() { MasterBase__Fuse_Triggers_State__Complete(this); }
    bool PostLayout() { return MasterBase__Fuse_Triggers_State__get_PostLayout(this); }
    ::app::Fuse::Triggers::State* RestValue() { return (((MasterBase__Fuse_Triggers_State__uType*)this->__obj_type)->__fp_get_RestValue)(this); }
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Triggers_State GetFullWeight();
    void OnActive() { (((MasterBase__Fuse_Triggers_State__uType*)this->__obj_type)->__fp_OnActive)(this); }
    void OnComplete() { (((MasterBase__Fuse_Triggers_State__uType*)this->__obj_type)->__fp_OnComplete)(this); }
    void OnInactive() { (((MasterBase__Fuse_Triggers_State__uType*)this->__obj_type)->__fp_OnInactive)(this); }
    void Register(::app::Fuse::Animations::MixerHandle__Fuse_Triggers_State* handle) { MasterBase__Fuse_Triggers_State__Register(this, handle); }
    void Unregister(::app::Fuse::Animations::MixerHandle__Fuse_Triggers_State* handle) { MasterBase__Fuse_Triggers_State__Unregister(this, handle); }
};

}}}

#include <app/Fuse.Animations.MasterBase1_GFWResult__Fuse_Triggers_State.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Triggers_State MasterBase__Fuse_Triggers_State::GetFullWeight() { return MasterBase__Fuse_Triggers_State__GetFullWeight(this); }

}}}


#endif
