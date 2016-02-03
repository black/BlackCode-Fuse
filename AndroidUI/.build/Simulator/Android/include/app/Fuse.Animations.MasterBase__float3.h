// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_BASE__FLOAT3_H__
#define __APP_FUSE_ANIMATIONS_MASTER_BASE__FLOAT3_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase1_GFWResult__float3; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__float3; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_float3_; } } }
namespace app { namespace Uno { struct Float3; } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterBase__float3;

struct MasterBase__float3__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerMaster __interface_0;
    ::app::Uno::Float3(*__fp_get_RestValue)(MasterBase__float3*);
    void(*__fp_OnActive)(MasterBase__float3*);
    void(*__fp_OnComplete)(MasterBase__float3*);
    void(*__fp_OnInactive)(MasterBase__float3*);
};

MasterBase__float3__uType* MasterBase__float3__typeof();

void MasterBase__float3__Finalize(MasterBase__float3* __this);
void MasterBase__float3___ObjInit(MasterBase__float3* __this, ::app::Fuse::Animations::MixerBase* mixerBase);
void MasterBase__float3__Complete(MasterBase__float3* __this);
bool MasterBase__float3__get_PostLayout(MasterBase__float3* __this);
::app::Fuse::Animations::MasterBase1_GFWResult__float3 MasterBase__float3__GetFullWeight(MasterBase__float3* __this);
void MasterBase__float3__OnActive(MasterBase__float3* __this);
void MasterBase__float3__Register(MasterBase__float3* __this, ::app::Fuse::Animations::MixerHandle__float3* handle);
void MasterBase__float3__Unregister(MasterBase__float3* __this, ::app::Fuse::Animations::MixerHandle__float3* handle);

struct MasterBase__float3 : ::uObject
{
    ::uStrong< ::app::Fuse::Animations::MixerBase*> _mixerBase;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float3_*> Handles;
    bool masterAdded;
    bool _inactive;
    bool DirtyValue;

    void _ObjInit(::app::Fuse::Animations::MixerBase* mixerBase) { MasterBase__float3___ObjInit(this, mixerBase); }
    void Complete() { MasterBase__float3__Complete(this); }
    bool PostLayout() { return MasterBase__float3__get_PostLayout(this); }
    ::app::Uno::Float3 RestValue();
    ::app::Fuse::Animations::MasterBase1_GFWResult__float3 GetFullWeight();
    void OnActive() { (((MasterBase__float3__uType*)this->__obj_type)->__fp_OnActive)(this); }
    void OnComplete() { (((MasterBase__float3__uType*)this->__obj_type)->__fp_OnComplete)(this); }
    void OnInactive() { (((MasterBase__float3__uType*)this->__obj_type)->__fp_OnInactive)(this); }
    void Register(::app::Fuse::Animations::MixerHandle__float3* handle) { MasterBase__float3__Register(this, handle); }
    void Unregister(::app::Fuse::Animations::MixerHandle__float3* handle) { MasterBase__float3__Unregister(this, handle); }
};

}}}

#include <app/Fuse.Animations.MasterBase1_GFWResult__float3.h>
#include <app/Uno.Float3.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float3 MasterBase__float3::RestValue() { return (((MasterBase__float3__uType*)this->__obj_type)->__fp_get_RestValue)(this); }
inline ::app::Fuse::Animations::MasterBase1_GFWResult__float3 MasterBase__float3::GetFullWeight() { return MasterBase__float3__GetFullWeight(this); }

}}}


#endif
