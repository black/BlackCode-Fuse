// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_BASE__LONG_H__
#define __APP_FUSE_ANIMATIONS_MASTER_BASE__LONG_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase1_GFWResult__long; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__long; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_long_; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterBase__long;

struct MasterBase__long__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerMaster __interface_0;
    ::uLong(*__fp_get_RestValue)(MasterBase__long*);
    void(*__fp_OnActive)(MasterBase__long*);
    void(*__fp_OnComplete)(MasterBase__long*);
    void(*__fp_OnInactive)(MasterBase__long*);
};

MasterBase__long__uType* MasterBase__long__typeof();

void MasterBase__long__Finalize(MasterBase__long* __this);
void MasterBase__long___ObjInit(MasterBase__long* __this, ::app::Fuse::Animations::MixerBase* mixerBase);
void MasterBase__long__Complete(MasterBase__long* __this);
bool MasterBase__long__get_PostLayout(MasterBase__long* __this);
::app::Fuse::Animations::MasterBase1_GFWResult__long MasterBase__long__GetFullWeight(MasterBase__long* __this);
void MasterBase__long__OnActive(MasterBase__long* __this);
void MasterBase__long__Register(MasterBase__long* __this, ::app::Fuse::Animations::MixerHandle__long* handle);
void MasterBase__long__Unregister(MasterBase__long* __this, ::app::Fuse::Animations::MixerHandle__long* handle);

struct MasterBase__long : ::uObject
{
    ::uStrong< ::app::Fuse::Animations::MixerBase*> _mixerBase;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_long_*> Handles;
    bool masterAdded;
    bool _inactive;
    bool DirtyValue;

    void _ObjInit(::app::Fuse::Animations::MixerBase* mixerBase) { MasterBase__long___ObjInit(this, mixerBase); }
    void Complete() { MasterBase__long__Complete(this); }
    bool PostLayout() { return MasterBase__long__get_PostLayout(this); }
    ::uLong RestValue() { return (((MasterBase__long__uType*)this->__obj_type)->__fp_get_RestValue)(this); }
    ::app::Fuse::Animations::MasterBase1_GFWResult__long GetFullWeight();
    void OnActive() { (((MasterBase__long__uType*)this->__obj_type)->__fp_OnActive)(this); }
    void OnComplete() { (((MasterBase__long__uType*)this->__obj_type)->__fp_OnComplete)(this); }
    void OnInactive() { (((MasterBase__long__uType*)this->__obj_type)->__fp_OnInactive)(this); }
    void Register(::app::Fuse::Animations::MixerHandle__long* handle) { MasterBase__long__Register(this, handle); }
    void Unregister(::app::Fuse::Animations::MixerHandle__long* handle) { MasterBase__long__Unregister(this, handle); }
};

}}}

#include <app/Fuse.Animations.MasterBase1_GFWResult__long.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Fuse::Animations::MasterBase1_GFWResult__long MasterBase__long::GetFullWeight() { return MasterBase__long__GetFullWeight(this); }

}}}


#endif
