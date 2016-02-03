// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_BASE__DOUBLE_H__
#define __APP_FUSE_ANIMATIONS_MASTER_BASE__DOUBLE_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase1_GFWResult__double; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__double; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_double_; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterBase__double;

struct MasterBase__double__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerMaster __interface_0;
    double(*__fp_get_RestValue)(MasterBase__double*);
    void(*__fp_OnActive)(MasterBase__double*);
    void(*__fp_OnComplete)(MasterBase__double*);
    void(*__fp_OnInactive)(MasterBase__double*);
};

MasterBase__double__uType* MasterBase__double__typeof();

void MasterBase__double__Finalize(MasterBase__double* __this);
void MasterBase__double___ObjInit(MasterBase__double* __this, ::app::Fuse::Animations::MixerBase* mixerBase);
void MasterBase__double__Complete(MasterBase__double* __this);
bool MasterBase__double__get_PostLayout(MasterBase__double* __this);
::app::Fuse::Animations::MasterBase1_GFWResult__double MasterBase__double__GetFullWeight(MasterBase__double* __this);
void MasterBase__double__OnActive(MasterBase__double* __this);
void MasterBase__double__Register(MasterBase__double* __this, ::app::Fuse::Animations::MixerHandle__double* handle);
void MasterBase__double__Unregister(MasterBase__double* __this, ::app::Fuse::Animations::MixerHandle__double* handle);

struct MasterBase__double : ::uObject
{
    ::uStrong< ::app::Fuse::Animations::MixerBase*> _mixerBase;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_double_*> Handles;
    bool masterAdded;
    bool _inactive;
    bool DirtyValue;

    void _ObjInit(::app::Fuse::Animations::MixerBase* mixerBase) { MasterBase__double___ObjInit(this, mixerBase); }
    void Complete() { MasterBase__double__Complete(this); }
    bool PostLayout() { return MasterBase__double__get_PostLayout(this); }
    double RestValue() { return (((MasterBase__double__uType*)this->__obj_type)->__fp_get_RestValue)(this); }
    ::app::Fuse::Animations::MasterBase1_GFWResult__double GetFullWeight();
    void OnActive() { (((MasterBase__double__uType*)this->__obj_type)->__fp_OnActive)(this); }
    void OnComplete() { (((MasterBase__double__uType*)this->__obj_type)->__fp_OnComplete)(this); }
    void OnInactive() { (((MasterBase__double__uType*)this->__obj_type)->__fp_OnInactive)(this); }
    void Register(::app::Fuse::Animations::MixerHandle__double* handle) { MasterBase__double__Register(this, handle); }
    void Unregister(::app::Fuse::Animations::MixerHandle__double* handle) { MasterBase__double__Unregister(this, handle); }
};

}}}

#include <app/Fuse.Animations.MasterBase1_GFWResult__double.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Fuse::Animations::MasterBase1_GFWResult__double MasterBase__double::GetFullWeight() { return MasterBase__double__GetFullWeight(this); }

}}}


#endif
