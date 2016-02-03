// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_BASE__BOOL_H__
#define __APP_FUSE_ANIMATIONS_MASTER_BASE__BOOL_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase1_GFWResult__bool; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__bool; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_bool_; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterBase__bool;

struct MasterBase__bool__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerMaster __interface_0;
    bool(*__fp_get_RestValue)(MasterBase__bool*);
    void(*__fp_OnActive)(MasterBase__bool*);
    void(*__fp_OnComplete)(MasterBase__bool*);
    void(*__fp_OnInactive)(MasterBase__bool*);
};

MasterBase__bool__uType* MasterBase__bool__typeof();

void MasterBase__bool__Finalize(MasterBase__bool* __this);
void MasterBase__bool___ObjInit(MasterBase__bool* __this, ::app::Fuse::Animations::MixerBase* mixerBase);
void MasterBase__bool__Complete(MasterBase__bool* __this);
bool MasterBase__bool__get_PostLayout(MasterBase__bool* __this);
::app::Fuse::Animations::MasterBase1_GFWResult__bool MasterBase__bool__GetFullWeight(MasterBase__bool* __this);
void MasterBase__bool__OnActive(MasterBase__bool* __this);
void MasterBase__bool__Register(MasterBase__bool* __this, ::app::Fuse::Animations::MixerHandle__bool* handle);
void MasterBase__bool__Unregister(MasterBase__bool* __this, ::app::Fuse::Animations::MixerHandle__bool* handle);

struct MasterBase__bool : ::uObject
{
    ::uStrong< ::app::Fuse::Animations::MixerBase*> _mixerBase;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_bool_*> Handles;
    bool masterAdded;
    bool _inactive;
    bool DirtyValue;

    void _ObjInit(::app::Fuse::Animations::MixerBase* mixerBase) { MasterBase__bool___ObjInit(this, mixerBase); }
    void Complete() { MasterBase__bool__Complete(this); }
    bool PostLayout() { return MasterBase__bool__get_PostLayout(this); }
    bool RestValue() { return (((MasterBase__bool__uType*)this->__obj_type)->__fp_get_RestValue)(this); }
    ::app::Fuse::Animations::MasterBase1_GFWResult__bool GetFullWeight();
    void OnActive() { (((MasterBase__bool__uType*)this->__obj_type)->__fp_OnActive)(this); }
    void OnComplete() { (((MasterBase__bool__uType*)this->__obj_type)->__fp_OnComplete)(this); }
    void OnInactive() { (((MasterBase__bool__uType*)this->__obj_type)->__fp_OnInactive)(this); }
    void Register(::app::Fuse::Animations::MixerHandle__bool* handle) { MasterBase__bool__Register(this, handle); }
    void Unregister(::app::Fuse::Animations::MixerHandle__bool* handle) { MasterBase__bool__Unregister(this, handle); }
};

}}}

#include <app/Fuse.Animations.MasterBase1_GFWResult__bool.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Fuse::Animations::MasterBase1_GFWResult__bool MasterBase__bool::GetFullWeight() { return MasterBase__bool__GetFullWeight(this); }

}}}


#endif
