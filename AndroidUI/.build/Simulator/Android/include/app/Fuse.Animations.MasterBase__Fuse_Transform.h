// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_BASE__FUSE_TRANSFORM_H__
#define __APP_FUSE_ANIMATIONS_MASTER_BASE__FUSE_TRANSFORM_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase1_GFWResult__Fuse_Transform; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Transform; } } }
namespace app { namespace Fuse { struct Transform; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_Fuse_Transform_; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterBase__Fuse_Transform;

struct MasterBase__Fuse_Transform__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerMaster __interface_0;
    bool(*__fp_get_PostLayout)(MasterBase__Fuse_Transform*);
    ::app::Fuse::Transform*(*__fp_get_RestValue)(MasterBase__Fuse_Transform*);
    void(*__fp_OnActive)(MasterBase__Fuse_Transform*);
    void(*__fp_OnComplete)(MasterBase__Fuse_Transform*);
    void(*__fp_OnInactive)(MasterBase__Fuse_Transform*);
};

MasterBase__Fuse_Transform__uType* MasterBase__Fuse_Transform__typeof();

void MasterBase__Fuse_Transform__Finalize(MasterBase__Fuse_Transform* __this);
void MasterBase__Fuse_Transform___ObjInit(MasterBase__Fuse_Transform* __this, ::app::Fuse::Animations::MixerBase* mixerBase);
void MasterBase__Fuse_Transform__Complete(MasterBase__Fuse_Transform* __this);
bool MasterBase__Fuse_Transform__get_PostLayout(MasterBase__Fuse_Transform* __this);
::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Transform MasterBase__Fuse_Transform__GetFullWeight(MasterBase__Fuse_Transform* __this);
void MasterBase__Fuse_Transform__OnActive(MasterBase__Fuse_Transform* __this);
void MasterBase__Fuse_Transform__Register(MasterBase__Fuse_Transform* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Transform* handle);
void MasterBase__Fuse_Transform__Unregister(MasterBase__Fuse_Transform* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Transform* handle);

struct MasterBase__Fuse_Transform : ::uObject
{
    ::uStrong< ::app::Fuse::Animations::MixerBase*> _mixerBase;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Transform_*> Handles;
    bool masterAdded;
    bool _inactive;
    bool DirtyValue;

    void _ObjInit(::app::Fuse::Animations::MixerBase* mixerBase) { MasterBase__Fuse_Transform___ObjInit(this, mixerBase); }
    void Complete() { MasterBase__Fuse_Transform__Complete(this); }
    bool PostLayout() { return (((MasterBase__Fuse_Transform__uType*)this->__obj_type)->__fp_get_PostLayout)(this); }
    ::app::Fuse::Transform* RestValue() { return (((MasterBase__Fuse_Transform__uType*)this->__obj_type)->__fp_get_RestValue)(this); }
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Transform GetFullWeight();
    void OnActive() { (((MasterBase__Fuse_Transform__uType*)this->__obj_type)->__fp_OnActive)(this); }
    void OnComplete() { (((MasterBase__Fuse_Transform__uType*)this->__obj_type)->__fp_OnComplete)(this); }
    void OnInactive() { (((MasterBase__Fuse_Transform__uType*)this->__obj_type)->__fp_OnInactive)(this); }
    void Register(::app::Fuse::Animations::MixerHandle__Fuse_Transform* handle) { MasterBase__Fuse_Transform__Register(this, handle); }
    void Unregister(::app::Fuse::Animations::MixerHandle__Fuse_Transform* handle) { MasterBase__Fuse_Transform__Unregister(this, handle); }
};

}}}

#include <app/Fuse.Animations.MasterBase1_GFWResult__Fuse_Transform.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Transform MasterBase__Fuse_Transform::GetFullWeight() { return MasterBase__Fuse_Transform__GetFullWeight(this); }

}}}


#endif
