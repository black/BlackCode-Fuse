// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_BASE__OBJECT_H__
#define __APP_FUSE_ANIMATIONS_MASTER_BASE__OBJECT_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase1_GFWResult__object; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__object; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_object_; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterBase__object;

struct MasterBase__object__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerMaster __interface_0;
    ::uObject*(*__fp_get_RestValue)(MasterBase__object*);
    void(*__fp_OnActive)(MasterBase__object*);
    void(*__fp_OnComplete)(MasterBase__object*);
    void(*__fp_OnInactive)(MasterBase__object*);
};

MasterBase__object__uType* MasterBase__object__typeof();

void MasterBase__object__Finalize(MasterBase__object* __this);
void MasterBase__object___ObjInit(MasterBase__object* __this, ::app::Fuse::Animations::MixerBase* mixerBase);
void MasterBase__object__Complete(MasterBase__object* __this);
bool MasterBase__object__get_PostLayout(MasterBase__object* __this);
::app::Fuse::Animations::MasterBase1_GFWResult__object MasterBase__object__GetFullWeight(MasterBase__object* __this);
void MasterBase__object__OnActive(MasterBase__object* __this);
void MasterBase__object__Register(MasterBase__object* __this, ::app::Fuse::Animations::MixerHandle__object* handle);
void MasterBase__object__Unregister(MasterBase__object* __this, ::app::Fuse::Animations::MixerHandle__object* handle);

struct MasterBase__object : ::uObject
{
    ::uStrong< ::app::Fuse::Animations::MixerBase*> _mixerBase;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_object_*> Handles;
    bool masterAdded;
    bool _inactive;
    bool DirtyValue;

    void _ObjInit(::app::Fuse::Animations::MixerBase* mixerBase) { MasterBase__object___ObjInit(this, mixerBase); }
    void Complete() { MasterBase__object__Complete(this); }
    bool PostLayout() { return MasterBase__object__get_PostLayout(this); }
    ::uObject* RestValue() { return (((MasterBase__object__uType*)this->__obj_type)->__fp_get_RestValue)(this); }
    ::app::Fuse::Animations::MasterBase1_GFWResult__object GetFullWeight();
    void OnActive() { (((MasterBase__object__uType*)this->__obj_type)->__fp_OnActive)(this); }
    void OnComplete() { (((MasterBase__object__uType*)this->__obj_type)->__fp_OnComplete)(this); }
    void OnInactive() { (((MasterBase__object__uType*)this->__obj_type)->__fp_OnInactive)(this); }
    void Register(::app::Fuse::Animations::MixerHandle__object* handle) { MasterBase__object__Register(this, handle); }
    void Unregister(::app::Fuse::Animations::MixerHandle__object* handle) { MasterBase__object__Unregister(this, handle); }
};

}}}

#include <app/Fuse.Animations.MasterBase1_GFWResult__object.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Fuse::Animations::MasterBase1_GFWResult__object MasterBase__object::GetFullWeight() { return MasterBase__object__GetFullWeight(this); }

}}}


#endif
