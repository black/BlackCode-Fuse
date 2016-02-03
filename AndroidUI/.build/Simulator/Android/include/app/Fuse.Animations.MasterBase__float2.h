// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_BASE__FLOAT2_H__
#define __APP_FUSE_ANIMATIONS_MASTER_BASE__FLOAT2_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase1_GFWResult__float2; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__float2; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_float2_; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterBase__float2;

struct MasterBase__float2__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerMaster __interface_0;
    ::app::Uno::Float2(*__fp_get_RestValue)(MasterBase__float2*);
    void(*__fp_OnActive)(MasterBase__float2*);
    void(*__fp_OnComplete)(MasterBase__float2*);
    void(*__fp_OnInactive)(MasterBase__float2*);
};

MasterBase__float2__uType* MasterBase__float2__typeof();

void MasterBase__float2__Finalize(MasterBase__float2* __this);
void MasterBase__float2___ObjInit(MasterBase__float2* __this, ::app::Fuse::Animations::MixerBase* mixerBase);
void MasterBase__float2__Complete(MasterBase__float2* __this);
bool MasterBase__float2__get_PostLayout(MasterBase__float2* __this);
::app::Fuse::Animations::MasterBase1_GFWResult__float2 MasterBase__float2__GetFullWeight(MasterBase__float2* __this);
void MasterBase__float2__OnActive(MasterBase__float2* __this);
void MasterBase__float2__Register(MasterBase__float2* __this, ::app::Fuse::Animations::MixerHandle__float2* handle);
void MasterBase__float2__Unregister(MasterBase__float2* __this, ::app::Fuse::Animations::MixerHandle__float2* handle);

struct MasterBase__float2 : ::uObject
{
    ::uStrong< ::app::Fuse::Animations::MixerBase*> _mixerBase;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float2_*> Handles;
    bool masterAdded;
    bool _inactive;
    bool DirtyValue;

    void _ObjInit(::app::Fuse::Animations::MixerBase* mixerBase) { MasterBase__float2___ObjInit(this, mixerBase); }
    void Complete() { MasterBase__float2__Complete(this); }
    bool PostLayout() { return MasterBase__float2__get_PostLayout(this); }
    ::app::Uno::Float2 RestValue();
    ::app::Fuse::Animations::MasterBase1_GFWResult__float2 GetFullWeight();
    void OnActive() { (((MasterBase__float2__uType*)this->__obj_type)->__fp_OnActive)(this); }
    void OnComplete() { (((MasterBase__float2__uType*)this->__obj_type)->__fp_OnComplete)(this); }
    void OnInactive() { (((MasterBase__float2__uType*)this->__obj_type)->__fp_OnInactive)(this); }
    void Register(::app::Fuse::Animations::MixerHandle__float2* handle) { MasterBase__float2__Register(this, handle); }
    void Unregister(::app::Fuse::Animations::MixerHandle__float2* handle) { MasterBase__float2__Unregister(this, handle); }
};

}}}

#include <app/Fuse.Animations.MasterBase1_GFWResult__float2.h>
#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Float2 MasterBase__float2::RestValue() { return (((MasterBase__float2__uType*)this->__obj_type)->__fp_get_RestValue)(this); }
inline ::app::Fuse::Animations::MasterBase1_GFWResult__float2 MasterBase__float2::GetFullWeight() { return MasterBase__float2__GetFullWeight(this); }

}}}


#endif
