// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_BASE__UNO_EVENT_ARGS_H__
#define __APP_FUSE_ANIMATIONS_MASTER_BASE__UNO_EVENT_ARGS_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase1_GFWResult__Uno_EventArgs; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Uno_EventArgs; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_Uno_EventArgs_; } } }
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterBase__Uno_EventArgs;

struct MasterBase__Uno_EventArgs__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerMaster __interface_0;
    ::app::Uno::EventArgs*(*__fp_get_RestValue)(MasterBase__Uno_EventArgs*);
    void(*__fp_OnActive)(MasterBase__Uno_EventArgs*);
    void(*__fp_OnComplete)(MasterBase__Uno_EventArgs*);
    void(*__fp_OnInactive)(MasterBase__Uno_EventArgs*);
};

MasterBase__Uno_EventArgs__uType* MasterBase__Uno_EventArgs__typeof();

void MasterBase__Uno_EventArgs__Finalize(MasterBase__Uno_EventArgs* __this);
void MasterBase__Uno_EventArgs___ObjInit(MasterBase__Uno_EventArgs* __this, ::app::Fuse::Animations::MixerBase* mixerBase);
void MasterBase__Uno_EventArgs__Complete(MasterBase__Uno_EventArgs* __this);
bool MasterBase__Uno_EventArgs__get_PostLayout(MasterBase__Uno_EventArgs* __this);
::app::Fuse::Animations::MasterBase1_GFWResult__Uno_EventArgs MasterBase__Uno_EventArgs__GetFullWeight(MasterBase__Uno_EventArgs* __this);
void MasterBase__Uno_EventArgs__OnActive(MasterBase__Uno_EventArgs* __this);
void MasterBase__Uno_EventArgs__Register(MasterBase__Uno_EventArgs* __this, ::app::Fuse::Animations::MixerHandle__Uno_EventArgs* handle);
void MasterBase__Uno_EventArgs__Unregister(MasterBase__Uno_EventArgs* __this, ::app::Fuse::Animations::MixerHandle__Uno_EventArgs* handle);

struct MasterBase__Uno_EventArgs : ::uObject
{
    ::uStrong< ::app::Fuse::Animations::MixerBase*> _mixerBase;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Uno_EventArgs_*> Handles;
    bool masterAdded;
    bool _inactive;
    bool DirtyValue;

    void _ObjInit(::app::Fuse::Animations::MixerBase* mixerBase) { MasterBase__Uno_EventArgs___ObjInit(this, mixerBase); }
    void Complete() { MasterBase__Uno_EventArgs__Complete(this); }
    bool PostLayout() { return MasterBase__Uno_EventArgs__get_PostLayout(this); }
    ::app::Uno::EventArgs* RestValue() { return (((MasterBase__Uno_EventArgs__uType*)this->__obj_type)->__fp_get_RestValue)(this); }
    ::app::Fuse::Animations::MasterBase1_GFWResult__Uno_EventArgs GetFullWeight();
    void OnActive() { (((MasterBase__Uno_EventArgs__uType*)this->__obj_type)->__fp_OnActive)(this); }
    void OnComplete() { (((MasterBase__Uno_EventArgs__uType*)this->__obj_type)->__fp_OnComplete)(this); }
    void OnInactive() { (((MasterBase__Uno_EventArgs__uType*)this->__obj_type)->__fp_OnInactive)(this); }
    void Register(::app::Fuse::Animations::MixerHandle__Uno_EventArgs* handle) { MasterBase__Uno_EventArgs__Register(this, handle); }
    void Unregister(::app::Fuse::Animations::MixerHandle__Uno_EventArgs* handle) { MasterBase__Uno_EventArgs__Unregister(this, handle); }
};

}}}

#include <app/Fuse.Animations.MasterBase1_GFWResult__Uno_EventArgs.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Fuse::Animations::MasterBase1_GFWResult__Uno_EventArgs MasterBase__Uno_EventArgs::GetFullWeight() { return MasterBase__Uno_EventArgs__GetFullWeight(this); }

}}}


#endif
