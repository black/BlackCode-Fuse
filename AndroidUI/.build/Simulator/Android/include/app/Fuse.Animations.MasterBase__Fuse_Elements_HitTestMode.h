// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_BASE__FUSE_ELEMENTS_HIT_TEST_MODE_H__
#define __APP_FUSE_ANIMATIONS_MASTER_BASE__FUSE_ELEMENTS_HIT_TEST_MODE_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase1_GFWResult__Fuse_Elements_HitTestMode; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Elements_HitTestMode; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_Fuse_Elements_HitTestMode_; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterBase__Fuse_Elements_HitTestMode;

struct MasterBase__Fuse_Elements_HitTestMode__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerMaster __interface_0;
    int(*__fp_get_RestValue)(MasterBase__Fuse_Elements_HitTestMode*);
    void(*__fp_OnActive)(MasterBase__Fuse_Elements_HitTestMode*);
    void(*__fp_OnComplete)(MasterBase__Fuse_Elements_HitTestMode*);
    void(*__fp_OnInactive)(MasterBase__Fuse_Elements_HitTestMode*);
};

MasterBase__Fuse_Elements_HitTestMode__uType* MasterBase__Fuse_Elements_HitTestMode__typeof();

void MasterBase__Fuse_Elements_HitTestMode__Finalize(MasterBase__Fuse_Elements_HitTestMode* __this);
void MasterBase__Fuse_Elements_HitTestMode___ObjInit(MasterBase__Fuse_Elements_HitTestMode* __this, ::app::Fuse::Animations::MixerBase* mixerBase);
void MasterBase__Fuse_Elements_HitTestMode__Complete(MasterBase__Fuse_Elements_HitTestMode* __this);
bool MasterBase__Fuse_Elements_HitTestMode__get_PostLayout(MasterBase__Fuse_Elements_HitTestMode* __this);
::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_HitTestMode MasterBase__Fuse_Elements_HitTestMode__GetFullWeight(MasterBase__Fuse_Elements_HitTestMode* __this);
void MasterBase__Fuse_Elements_HitTestMode__OnActive(MasterBase__Fuse_Elements_HitTestMode* __this);
void MasterBase__Fuse_Elements_HitTestMode__Register(MasterBase__Fuse_Elements_HitTestMode* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_HitTestMode* handle);
void MasterBase__Fuse_Elements_HitTestMode__Unregister(MasterBase__Fuse_Elements_HitTestMode* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_HitTestMode* handle);

struct MasterBase__Fuse_Elements_HitTestMode : ::uObject
{
    ::uStrong< ::app::Fuse::Animations::MixerBase*> _mixerBase;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_HitTestMode_*> Handles;
    bool masterAdded;
    bool _inactive;
    bool DirtyValue;

    void _ObjInit(::app::Fuse::Animations::MixerBase* mixerBase) { MasterBase__Fuse_Elements_HitTestMode___ObjInit(this, mixerBase); }
    void Complete() { MasterBase__Fuse_Elements_HitTestMode__Complete(this); }
    bool PostLayout() { return MasterBase__Fuse_Elements_HitTestMode__get_PostLayout(this); }
    int RestValue() { return (((MasterBase__Fuse_Elements_HitTestMode__uType*)this->__obj_type)->__fp_get_RestValue)(this); }
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_HitTestMode GetFullWeight();
    void OnActive() { (((MasterBase__Fuse_Elements_HitTestMode__uType*)this->__obj_type)->__fp_OnActive)(this); }
    void OnComplete() { (((MasterBase__Fuse_Elements_HitTestMode__uType*)this->__obj_type)->__fp_OnComplete)(this); }
    void OnInactive() { (((MasterBase__Fuse_Elements_HitTestMode__uType*)this->__obj_type)->__fp_OnInactive)(this); }
    void Register(::app::Fuse::Animations::MixerHandle__Fuse_Elements_HitTestMode* handle) { MasterBase__Fuse_Elements_HitTestMode__Register(this, handle); }
    void Unregister(::app::Fuse::Animations::MixerHandle__Fuse_Elements_HitTestMode* handle) { MasterBase__Fuse_Elements_HitTestMode__Unregister(this, handle); }
};

}}}

#include <app/Fuse.Animations.MasterBase1_GFWResult__Fuse_Elements_HitTestMode.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_HitTestMode MasterBase__Fuse_Elements_HitTestMode::GetFullWeight() { return MasterBase__Fuse_Elements_HitTestMode__GetFullWeight(this); }

}}}


#endif
