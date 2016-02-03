// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_BASE__FLOAT_H__
#define __APP_FUSE_ANIMATIONS_MASTER_BASE__FLOAT_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase1_GFWResult__float; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__float; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_float_; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterBase__float;

struct MasterBase__float__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerMaster __interface_0;
    float(*__fp_get_RestValue)(MasterBase__float*);
    void(*__fp_OnActive)(MasterBase__float*);
    void(*__fp_OnComplete)(MasterBase__float*);
    void(*__fp_OnInactive)(MasterBase__float*);
};

MasterBase__float__uType* MasterBase__float__typeof();

void MasterBase__float__Finalize(MasterBase__float* __this);
void MasterBase__float___ObjInit(MasterBase__float* __this, ::app::Fuse::Animations::MixerBase* mixerBase);
void MasterBase__float__Complete(MasterBase__float* __this);
bool MasterBase__float__get_PostLayout(MasterBase__float* __this);
::app::Fuse::Animations::MasterBase1_GFWResult__float MasterBase__float__GetFullWeight(MasterBase__float* __this);
void MasterBase__float__OnActive(MasterBase__float* __this);
void MasterBase__float__Register(MasterBase__float* __this, ::app::Fuse::Animations::MixerHandle__float* handle);
void MasterBase__float__Unregister(MasterBase__float* __this, ::app::Fuse::Animations::MixerHandle__float* handle);

struct MasterBase__float : ::uObject
{
    ::uStrong< ::app::Fuse::Animations::MixerBase*> _mixerBase;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float_*> Handles;
    bool masterAdded;
    bool _inactive;
    bool DirtyValue;

    void _ObjInit(::app::Fuse::Animations::MixerBase* mixerBase) { MasterBase__float___ObjInit(this, mixerBase); }
    void Complete() { MasterBase__float__Complete(this); }
    bool PostLayout() { return MasterBase__float__get_PostLayout(this); }
    float RestValue() { return (((MasterBase__float__uType*)this->__obj_type)->__fp_get_RestValue)(this); }
    ::app::Fuse::Animations::MasterBase1_GFWResult__float GetFullWeight();
    void OnActive() { (((MasterBase__float__uType*)this->__obj_type)->__fp_OnActive)(this); }
    void OnComplete() { (((MasterBase__float__uType*)this->__obj_type)->__fp_OnComplete)(this); }
    void OnInactive() { (((MasterBase__float__uType*)this->__obj_type)->__fp_OnInactive)(this); }
    void Register(::app::Fuse::Animations::MixerHandle__float* handle) { MasterBase__float__Register(this, handle); }
    void Unregister(::app::Fuse::Animations::MixerHandle__float* handle) { MasterBase__float__Unregister(this, handle); }
};

}}}

#include <app/Fuse.Animations.MasterBase1_GFWResult__float.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Fuse::Animations::MasterBase1_GFWResult__float MasterBase__float::GetFullWeight() { return MasterBase__float__GetFullWeight(this); }

}}}


#endif
