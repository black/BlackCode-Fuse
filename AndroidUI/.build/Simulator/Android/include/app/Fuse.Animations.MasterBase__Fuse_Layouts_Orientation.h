// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_BASE__FUSE_LAYOUTS_ORIENTATION_H__
#define __APP_FUSE_ANIMATIONS_MASTER_BASE__FUSE_LAYOUTS_ORIENTATION_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase1_GFWResult__Fuse_Layouts_Orientation; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Layouts_Orientation; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterBase__Fuse_Layouts_Orientation;

struct MasterBase__Fuse_Layouts_Orientation__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerMaster __interface_0;
    int(*__fp_get_RestValue)(MasterBase__Fuse_Layouts_Orientation*);
    void(*__fp_OnActive)(MasterBase__Fuse_Layouts_Orientation*);
    void(*__fp_OnComplete)(MasterBase__Fuse_Layouts_Orientation*);
    void(*__fp_OnInactive)(MasterBase__Fuse_Layouts_Orientation*);
};

MasterBase__Fuse_Layouts_Orientation__uType* MasterBase__Fuse_Layouts_Orientation__typeof();

void MasterBase__Fuse_Layouts_Orientation__Finalize(MasterBase__Fuse_Layouts_Orientation* __this);
void MasterBase__Fuse_Layouts_Orientation___ObjInit(MasterBase__Fuse_Layouts_Orientation* __this, ::app::Fuse::Animations::MixerBase* mixerBase);
void MasterBase__Fuse_Layouts_Orientation__Complete(MasterBase__Fuse_Layouts_Orientation* __this);
bool MasterBase__Fuse_Layouts_Orientation__get_PostLayout(MasterBase__Fuse_Layouts_Orientation* __this);
::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Layouts_Orientation MasterBase__Fuse_Layouts_Orientation__GetFullWeight(MasterBase__Fuse_Layouts_Orientation* __this);
void MasterBase__Fuse_Layouts_Orientation__OnActive(MasterBase__Fuse_Layouts_Orientation* __this);
void MasterBase__Fuse_Layouts_Orientation__Register(MasterBase__Fuse_Layouts_Orientation* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Orientation* handle);
void MasterBase__Fuse_Layouts_Orientation__Unregister(MasterBase__Fuse_Layouts_Orientation* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Orientation* handle);

struct MasterBase__Fuse_Layouts_Orientation : ::uObject
{
    ::uStrong< ::app::Fuse::Animations::MixerBase*> _mixerBase;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Layouts_Orientation_*> Handles;
    bool masterAdded;
    bool _inactive;
    bool DirtyValue;

    void _ObjInit(::app::Fuse::Animations::MixerBase* mixerBase) { MasterBase__Fuse_Layouts_Orientation___ObjInit(this, mixerBase); }
    void Complete() { MasterBase__Fuse_Layouts_Orientation__Complete(this); }
    bool PostLayout() { return MasterBase__Fuse_Layouts_Orientation__get_PostLayout(this); }
    int RestValue() { return (((MasterBase__Fuse_Layouts_Orientation__uType*)this->__obj_type)->__fp_get_RestValue)(this); }
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Layouts_Orientation GetFullWeight();
    void OnActive() { (((MasterBase__Fuse_Layouts_Orientation__uType*)this->__obj_type)->__fp_OnActive)(this); }
    void OnComplete() { (((MasterBase__Fuse_Layouts_Orientation__uType*)this->__obj_type)->__fp_OnComplete)(this); }
    void OnInactive() { (((MasterBase__Fuse_Layouts_Orientation__uType*)this->__obj_type)->__fp_OnInactive)(this); }
    void Register(::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Orientation* handle) { MasterBase__Fuse_Layouts_Orientation__Register(this, handle); }
    void Unregister(::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Orientation* handle) { MasterBase__Fuse_Layouts_Orientation__Unregister(this, handle); }
};

}}}

#include <app/Fuse.Animations.MasterBase1_GFWResult__Fuse_Layouts_Orientation.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Layouts_Orientation MasterBase__Fuse_Layouts_Orientation::GetFullWeight() { return MasterBase__Fuse_Layouts_Orientation__GetFullWeight(this); }

}}}


#endif
