// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_BASE__INT4_H__
#define __APP_FUSE_ANIMATIONS_MASTER_BASE__INT4_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase1_GFWResult__int4; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__int4; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_int4_; } } }
namespace app { namespace Uno { struct Int4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterBase__int4;

struct MasterBase__int4__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerMaster __interface_0;
    ::app::Uno::Int4(*__fp_get_RestValue)(MasterBase__int4*);
    void(*__fp_OnActive)(MasterBase__int4*);
    void(*__fp_OnComplete)(MasterBase__int4*);
    void(*__fp_OnInactive)(MasterBase__int4*);
};

MasterBase__int4__uType* MasterBase__int4__typeof();

void MasterBase__int4__Finalize(MasterBase__int4* __this);
void MasterBase__int4___ObjInit(MasterBase__int4* __this, ::app::Fuse::Animations::MixerBase* mixerBase);
void MasterBase__int4__Complete(MasterBase__int4* __this);
bool MasterBase__int4__get_PostLayout(MasterBase__int4* __this);
::app::Fuse::Animations::MasterBase1_GFWResult__int4 MasterBase__int4__GetFullWeight(MasterBase__int4* __this);
void MasterBase__int4__OnActive(MasterBase__int4* __this);
void MasterBase__int4__Register(MasterBase__int4* __this, ::app::Fuse::Animations::MixerHandle__int4* handle);
void MasterBase__int4__Unregister(MasterBase__int4* __this, ::app::Fuse::Animations::MixerHandle__int4* handle);

struct MasterBase__int4 : ::uObject
{
    ::uStrong< ::app::Fuse::Animations::MixerBase*> _mixerBase;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_int4_*> Handles;
    bool masterAdded;
    bool _inactive;
    bool DirtyValue;

    void _ObjInit(::app::Fuse::Animations::MixerBase* mixerBase) { MasterBase__int4___ObjInit(this, mixerBase); }
    void Complete() { MasterBase__int4__Complete(this); }
    bool PostLayout() { return MasterBase__int4__get_PostLayout(this); }
    ::app::Uno::Int4 RestValue();
    ::app::Fuse::Animations::MasterBase1_GFWResult__int4 GetFullWeight();
    void OnActive() { (((MasterBase__int4__uType*)this->__obj_type)->__fp_OnActive)(this); }
    void OnComplete() { (((MasterBase__int4__uType*)this->__obj_type)->__fp_OnComplete)(this); }
    void OnInactive() { (((MasterBase__int4__uType*)this->__obj_type)->__fp_OnInactive)(this); }
    void Register(::app::Fuse::Animations::MixerHandle__int4* handle) { MasterBase__int4__Register(this, handle); }
    void Unregister(::app::Fuse::Animations::MixerHandle__int4* handle) { MasterBase__int4__Unregister(this, handle); }
};

}}}

#include <app/Fuse.Animations.MasterBase1_GFWResult__int4.h>
#include <app/Uno.Int4.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Int4 MasterBase__int4::RestValue() { return (((MasterBase__int4__uType*)this->__obj_type)->__fp_get_RestValue)(this); }
inline ::app::Fuse::Animations::MasterBase1_GFWResult__int4 MasterBase__int4::GetFullWeight() { return MasterBase__int4__GetFullWeight(this); }

}}}


#endif
