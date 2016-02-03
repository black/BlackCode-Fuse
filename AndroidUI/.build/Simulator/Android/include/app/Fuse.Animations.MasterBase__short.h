// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_BASE__SHORT_H__
#define __APP_FUSE_ANIMATIONS_MASTER_BASE__SHORT_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase1_GFWResult__short; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__short; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_short_; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterBase__short;

struct MasterBase__short__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerMaster __interface_0;
    ::uShort(*__fp_get_RestValue)(MasterBase__short*);
    void(*__fp_OnActive)(MasterBase__short*);
    void(*__fp_OnComplete)(MasterBase__short*);
    void(*__fp_OnInactive)(MasterBase__short*);
};

MasterBase__short__uType* MasterBase__short__typeof();

void MasterBase__short__Finalize(MasterBase__short* __this);
void MasterBase__short___ObjInit(MasterBase__short* __this, ::app::Fuse::Animations::MixerBase* mixerBase);
void MasterBase__short__Complete(MasterBase__short* __this);
bool MasterBase__short__get_PostLayout(MasterBase__short* __this);
::app::Fuse::Animations::MasterBase1_GFWResult__short MasterBase__short__GetFullWeight(MasterBase__short* __this);
void MasterBase__short__OnActive(MasterBase__short* __this);
void MasterBase__short__Register(MasterBase__short* __this, ::app::Fuse::Animations::MixerHandle__short* handle);
void MasterBase__short__Unregister(MasterBase__short* __this, ::app::Fuse::Animations::MixerHandle__short* handle);

struct MasterBase__short : ::uObject
{
    ::uStrong< ::app::Fuse::Animations::MixerBase*> _mixerBase;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_short_*> Handles;
    bool masterAdded;
    bool _inactive;
    bool DirtyValue;

    void _ObjInit(::app::Fuse::Animations::MixerBase* mixerBase) { MasterBase__short___ObjInit(this, mixerBase); }
    void Complete() { MasterBase__short__Complete(this); }
    bool PostLayout() { return MasterBase__short__get_PostLayout(this); }
    ::uShort RestValue() { return (((MasterBase__short__uType*)this->__obj_type)->__fp_get_RestValue)(this); }
    ::app::Fuse::Animations::MasterBase1_GFWResult__short GetFullWeight();
    void OnActive() { (((MasterBase__short__uType*)this->__obj_type)->__fp_OnActive)(this); }
    void OnComplete() { (((MasterBase__short__uType*)this->__obj_type)->__fp_OnComplete)(this); }
    void OnInactive() { (((MasterBase__short__uType*)this->__obj_type)->__fp_OnInactive)(this); }
    void Register(::app::Fuse::Animations::MixerHandle__short* handle) { MasterBase__short__Register(this, handle); }
    void Unregister(::app::Fuse::Animations::MixerHandle__short* handle) { MasterBase__short__Unregister(this, handle); }
};

}}}

#include <app/Fuse.Animations.MasterBase1_GFWResult__short.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Fuse::Animations::MasterBase1_GFWResult__short MasterBase__short::GetFullWeight() { return MasterBase__short__GetFullWeight(this); }

}}}


#endif
