// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_BASE__INT2_H__
#define __APP_FUSE_ANIMATIONS_MASTER_BASE__INT2_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase1_GFWResult__int2; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__int2; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_int2_; } } }
namespace app { namespace Uno { struct Int2; } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterBase__int2;

struct MasterBase__int2__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerMaster __interface_0;
    ::app::Uno::Int2(*__fp_get_RestValue)(MasterBase__int2*);
    void(*__fp_OnActive)(MasterBase__int2*);
    void(*__fp_OnComplete)(MasterBase__int2*);
    void(*__fp_OnInactive)(MasterBase__int2*);
};

MasterBase__int2__uType* MasterBase__int2__typeof();

void MasterBase__int2__Finalize(MasterBase__int2* __this);
void MasterBase__int2___ObjInit(MasterBase__int2* __this, ::app::Fuse::Animations::MixerBase* mixerBase);
void MasterBase__int2__Complete(MasterBase__int2* __this);
bool MasterBase__int2__get_PostLayout(MasterBase__int2* __this);
::app::Fuse::Animations::MasterBase1_GFWResult__int2 MasterBase__int2__GetFullWeight(MasterBase__int2* __this);
void MasterBase__int2__OnActive(MasterBase__int2* __this);
void MasterBase__int2__Register(MasterBase__int2* __this, ::app::Fuse::Animations::MixerHandle__int2* handle);
void MasterBase__int2__Unregister(MasterBase__int2* __this, ::app::Fuse::Animations::MixerHandle__int2* handle);

struct MasterBase__int2 : ::uObject
{
    ::uStrong< ::app::Fuse::Animations::MixerBase*> _mixerBase;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_int2_*> Handles;
    bool masterAdded;
    bool _inactive;
    bool DirtyValue;

    void _ObjInit(::app::Fuse::Animations::MixerBase* mixerBase) { MasterBase__int2___ObjInit(this, mixerBase); }
    void Complete() { MasterBase__int2__Complete(this); }
    bool PostLayout() { return MasterBase__int2__get_PostLayout(this); }
    ::app::Uno::Int2 RestValue();
    ::app::Fuse::Animations::MasterBase1_GFWResult__int2 GetFullWeight();
    void OnActive() { (((MasterBase__int2__uType*)this->__obj_type)->__fp_OnActive)(this); }
    void OnComplete() { (((MasterBase__int2__uType*)this->__obj_type)->__fp_OnComplete)(this); }
    void OnInactive() { (((MasterBase__int2__uType*)this->__obj_type)->__fp_OnInactive)(this); }
    void Register(::app::Fuse::Animations::MixerHandle__int2* handle) { MasterBase__int2__Register(this, handle); }
    void Unregister(::app::Fuse::Animations::MixerHandle__int2* handle) { MasterBase__int2__Unregister(this, handle); }
};

}}}

#include <app/Fuse.Animations.MasterBase1_GFWResult__int2.h>
#include <app/Uno.Int2.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Uno::Int2 MasterBase__int2::RestValue() { return (((MasterBase__int2__uType*)this->__obj_type)->__fp_get_RestValue)(this); }
inline ::app::Fuse::Animations::MasterBase1_GFWResult__int2 MasterBase__int2::GetFullWeight() { return MasterBase__int2__GetFullWeight(this); }

}}}


#endif
