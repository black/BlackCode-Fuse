// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_BASE__FUSE_ANIMATIONS_ANIMATION_VARIANT_H__
#define __APP_FUSE_ANIMATIONS_MASTER_BASE__FUSE_ANIMATIONS_ANIMATION_VARIANT_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase1_GFWResult__Fuse_Animations_AnimationVariant; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Animations_AnimationVariant; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_Fuse_Animations_AnimationVariant_; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterBase__Fuse_Animations_AnimationVariant;

struct MasterBase__Fuse_Animations_AnimationVariant__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerMaster __interface_0;
    int(*__fp_get_RestValue)(MasterBase__Fuse_Animations_AnimationVariant*);
    void(*__fp_OnActive)(MasterBase__Fuse_Animations_AnimationVariant*);
    void(*__fp_OnComplete)(MasterBase__Fuse_Animations_AnimationVariant*);
    void(*__fp_OnInactive)(MasterBase__Fuse_Animations_AnimationVariant*);
};

MasterBase__Fuse_Animations_AnimationVariant__uType* MasterBase__Fuse_Animations_AnimationVariant__typeof();

void MasterBase__Fuse_Animations_AnimationVariant__Finalize(MasterBase__Fuse_Animations_AnimationVariant* __this);
void MasterBase__Fuse_Animations_AnimationVariant___ObjInit(MasterBase__Fuse_Animations_AnimationVariant* __this, ::app::Fuse::Animations::MixerBase* mixerBase);
void MasterBase__Fuse_Animations_AnimationVariant__Complete(MasterBase__Fuse_Animations_AnimationVariant* __this);
bool MasterBase__Fuse_Animations_AnimationVariant__get_PostLayout(MasterBase__Fuse_Animations_AnimationVariant* __this);
::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Animations_AnimationVariant MasterBase__Fuse_Animations_AnimationVariant__GetFullWeight(MasterBase__Fuse_Animations_AnimationVariant* __this);
void MasterBase__Fuse_Animations_AnimationVariant__OnActive(MasterBase__Fuse_Animations_AnimationVariant* __this);
void MasterBase__Fuse_Animations_AnimationVariant__Register(MasterBase__Fuse_Animations_AnimationVariant* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Animations_AnimationVariant* handle);
void MasterBase__Fuse_Animations_AnimationVariant__Unregister(MasterBase__Fuse_Animations_AnimationVariant* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Animations_AnimationVariant* handle);

struct MasterBase__Fuse_Animations_AnimationVariant : ::uObject
{
    ::uStrong< ::app::Fuse::Animations::MixerBase*> _mixerBase;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Animations_AnimationVariant_*> Handles;
    bool masterAdded;
    bool _inactive;
    bool DirtyValue;

    void _ObjInit(::app::Fuse::Animations::MixerBase* mixerBase) { MasterBase__Fuse_Animations_AnimationVariant___ObjInit(this, mixerBase); }
    void Complete() { MasterBase__Fuse_Animations_AnimationVariant__Complete(this); }
    bool PostLayout() { return MasterBase__Fuse_Animations_AnimationVariant__get_PostLayout(this); }
    int RestValue() { return (((MasterBase__Fuse_Animations_AnimationVariant__uType*)this->__obj_type)->__fp_get_RestValue)(this); }
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Animations_AnimationVariant GetFullWeight();
    void OnActive() { (((MasterBase__Fuse_Animations_AnimationVariant__uType*)this->__obj_type)->__fp_OnActive)(this); }
    void OnComplete() { (((MasterBase__Fuse_Animations_AnimationVariant__uType*)this->__obj_type)->__fp_OnComplete)(this); }
    void OnInactive() { (((MasterBase__Fuse_Animations_AnimationVariant__uType*)this->__obj_type)->__fp_OnInactive)(this); }
    void Register(::app::Fuse::Animations::MixerHandle__Fuse_Animations_AnimationVariant* handle) { MasterBase__Fuse_Animations_AnimationVariant__Register(this, handle); }
    void Unregister(::app::Fuse::Animations::MixerHandle__Fuse_Animations_AnimationVariant* handle) { MasterBase__Fuse_Animations_AnimationVariant__Unregister(this, handle); }
};

}}}

#include <app/Fuse.Animations.MasterBase1_GFWResult__Fuse_Animations_AnimationVariant.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Animations_AnimationVariant MasterBase__Fuse_Animations_AnimationVariant::GetFullWeight() { return MasterBase__Fuse_Animations_AnimationVariant__GetFullWeight(this); }

}}}


#endif
