// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_BASE__INT_H__
#define __APP_FUSE_ANIMATIONS_MASTER_BASE__INT_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase1_GFWResult__int; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__int; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_int_; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterBase__int;

struct MasterBase__int__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerMaster __interface_0;
    int(*__fp_get_RestValue)(MasterBase__int*);
    void(*__fp_OnActive)(MasterBase__int*);
    void(*__fp_OnComplete)(MasterBase__int*);
    void(*__fp_OnInactive)(MasterBase__int*);
};

MasterBase__int__uType* MasterBase__int__typeof();

void MasterBase__int__Finalize(MasterBase__int* __this);
void MasterBase__int___ObjInit(MasterBase__int* __this, ::app::Fuse::Animations::MixerBase* mixerBase);
void MasterBase__int__Complete(MasterBase__int* __this);
bool MasterBase__int__get_PostLayout(MasterBase__int* __this);
::app::Fuse::Animations::MasterBase1_GFWResult__int MasterBase__int__GetFullWeight(MasterBase__int* __this);
void MasterBase__int__OnActive(MasterBase__int* __this);
void MasterBase__int__Register(MasterBase__int* __this, ::app::Fuse::Animations::MixerHandle__int* handle);
void MasterBase__int__Unregister(MasterBase__int* __this, ::app::Fuse::Animations::MixerHandle__int* handle);

struct MasterBase__int : ::uObject
{
    ::uStrong< ::app::Fuse::Animations::MixerBase*> _mixerBase;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_int_*> Handles;
    bool masterAdded;
    bool _inactive;
    bool DirtyValue;

    void _ObjInit(::app::Fuse::Animations::MixerBase* mixerBase) { MasterBase__int___ObjInit(this, mixerBase); }
    void Complete() { MasterBase__int__Complete(this); }
    bool PostLayout() { return MasterBase__int__get_PostLayout(this); }
    int RestValue() { return (((MasterBase__int__uType*)this->__obj_type)->__fp_get_RestValue)(this); }
    ::app::Fuse::Animations::MasterBase1_GFWResult__int GetFullWeight();
    void OnActive() { (((MasterBase__int__uType*)this->__obj_type)->__fp_OnActive)(this); }
    void OnComplete() { (((MasterBase__int__uType*)this->__obj_type)->__fp_OnComplete)(this); }
    void OnInactive() { (((MasterBase__int__uType*)this->__obj_type)->__fp_OnInactive)(this); }
    void Register(::app::Fuse::Animations::MixerHandle__int* handle) { MasterBase__int__Register(this, handle); }
    void Unregister(::app::Fuse::Animations::MixerHandle__int* handle) { MasterBase__int__Unregister(this, handle); }
};

}}}

#include <app/Fuse.Animations.MasterBase1_GFWResult__int.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Fuse::Animations::MasterBase1_GFWResult__int MasterBase__int::GetFullWeight() { return MasterBase__int__GetFullWeight(this); }

}}}


#endif
