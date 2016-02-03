// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_BASE__FLOAT4_H__
#define __APP_FUSE_ANIMATIONS_MASTER_BASE__FLOAT4_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase1_GFWResult__float4; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__float4; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_float4_; } } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterBase__float4;

struct MasterBase__float4__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerMaster __interface_0;
    ::app::Uno::Float4(*__fp_get_RestValue)(MasterBase__float4*);
    void(*__fp_OnActive)(MasterBase__float4*);
    void(*__fp_OnComplete)(MasterBase__float4*);
    void(*__fp_OnInactive)(MasterBase__float4*);
};

MasterBase__float4__uType* MasterBase__float4__typeof();

void MasterBase__float4__Finalize(MasterBase__float4* __this);
void MasterBase__float4___ObjInit(MasterBase__float4* __this, ::app::Fuse::Animations::MixerBase* mixerBase);
void MasterBase__float4__Complete(MasterBase__float4* __this);
bool MasterBase__float4__get_PostLayout(MasterBase__float4* __this);
::app::Fuse::Animations::MasterBase1_GFWResult__float4 MasterBase__float4__GetFullWeight(MasterBase__float4* __this);
void MasterBase__float4__OnActive(MasterBase__float4* __this);
void MasterBase__float4__Register(MasterBase__float4* __this, ::app::Fuse::Animations::MixerHandle__float4* handle);
void MasterBase__float4__Unregister(MasterBase__float4* __this, ::app::Fuse::Animations::MixerHandle__float4* handle);

struct MasterBase__float4 : ::uObject
{
    ::uStrong< ::app::Fuse::Animations::MixerBase*> _mixerBase;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float4_*> Handles;
    bool masterAdded;
    bool _inactive;
    bool DirtyValue;

    void _ObjInit(::app::Fuse::Animations::MixerBase* mixerBase) { MasterBase__float4___ObjInit(this, mixerBase); }
    void Complete() { MasterBase__float4__Complete(this); }
    bool PostLayout() { return MasterBase__float4__get_PostLayout(this); }
    ::app::Uno::Float4 RestValue();
    ::app::Fuse::Animations::MasterBase1_GFWResult__float4 GetFullWeight();
    void OnActive() { (((MasterBase__float4__uType*)this->__obj_type)->__fp_OnActive)(this); }
    void OnComplete() { (((MasterBase__float4__uType*)this->__obj_type)->__fp_OnComplete)(this); }
    void OnInactive() { (((MasterBase__float4__uType*)this->__obj_type)->__fp_OnInactive)(this); }
    void Register(::app::Fuse::Animations::MixerHandle__float4* handle) { MasterBase__float4__Register(this, handle); }
    void Unregister(::app::Fuse::Animations::MixerHandle__float4* handle) { MasterBase__float4__Unregister(this, handle); }
};

}}}

#include <app/Fuse.Animations.MasterBase1_GFWResult__float4.h>
#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float4 MasterBase__float4::RestValue() { return (((MasterBase__float4__uType*)this->__obj_type)->__fp_get_RestValue)(this); }
inline ::app::Fuse::Animations::MasterBase1_GFWResult__float4 MasterBase__float4::GetFullWeight() { return MasterBase__float4__GetFullWeight(this); }

}}}


#endif
