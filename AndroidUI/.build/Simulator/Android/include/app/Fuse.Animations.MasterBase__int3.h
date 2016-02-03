// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_BASE__INT3_H__
#define __APP_FUSE_ANIMATIONS_MASTER_BASE__INT3_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase1_GFWResult__int3; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__int3; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_int3_; } } }
namespace app { namespace Uno { struct Int3; } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterBase__int3;

struct MasterBase__int3__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerMaster __interface_0;
    ::app::Uno::Int3(*__fp_get_RestValue)(MasterBase__int3*);
    void(*__fp_OnActive)(MasterBase__int3*);
    void(*__fp_OnComplete)(MasterBase__int3*);
    void(*__fp_OnInactive)(MasterBase__int3*);
};

MasterBase__int3__uType* MasterBase__int3__typeof();

void MasterBase__int3__Finalize(MasterBase__int3* __this);
void MasterBase__int3___ObjInit(MasterBase__int3* __this, ::app::Fuse::Animations::MixerBase* mixerBase);
void MasterBase__int3__Complete(MasterBase__int3* __this);
bool MasterBase__int3__get_PostLayout(MasterBase__int3* __this);
::app::Fuse::Animations::MasterBase1_GFWResult__int3 MasterBase__int3__GetFullWeight(MasterBase__int3* __this);
void MasterBase__int3__OnActive(MasterBase__int3* __this);
void MasterBase__int3__Register(MasterBase__int3* __this, ::app::Fuse::Animations::MixerHandle__int3* handle);
void MasterBase__int3__Unregister(MasterBase__int3* __this, ::app::Fuse::Animations::MixerHandle__int3* handle);

struct MasterBase__int3 : ::uObject
{
    ::uStrong< ::app::Fuse::Animations::MixerBase*> _mixerBase;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_int3_*> Handles;
    bool masterAdded;
    bool _inactive;
    bool DirtyValue;

    void _ObjInit(::app::Fuse::Animations::MixerBase* mixerBase) { MasterBase__int3___ObjInit(this, mixerBase); }
    void Complete() { MasterBase__int3__Complete(this); }
    bool PostLayout() { return MasterBase__int3__get_PostLayout(this); }
    ::app::Uno::Int3 RestValue();
    ::app::Fuse::Animations::MasterBase1_GFWResult__int3 GetFullWeight();
    void OnActive() { (((MasterBase__int3__uType*)this->__obj_type)->__fp_OnActive)(this); }
    void OnComplete() { (((MasterBase__int3__uType*)this->__obj_type)->__fp_OnComplete)(this); }
    void OnInactive() { (((MasterBase__int3__uType*)this->__obj_type)->__fp_OnInactive)(this); }
    void Register(::app::Fuse::Animations::MixerHandle__int3* handle) { MasterBase__int3__Register(this, handle); }
    void Unregister(::app::Fuse::Animations::MixerHandle__int3* handle) { MasterBase__int3__Unregister(this, handle); }
};

}}}

#include <app/Fuse.Animations.MasterBase1_GFWResult__int3.h>
#include <app/Uno.Int3.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Int3 MasterBase__int3::RestValue() { return (((MasterBase__int3__uType*)this->__obj_type)->__fp_get_RestValue)(this); }
inline ::app::Fuse::Animations::MasterBase1_GFWResult__int3 MasterBase__int3::GetFullWeight() { return MasterBase__int3__GetFullWeight(this); }

}}}


#endif
