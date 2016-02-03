// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_BASE__FUSE_LAYOUTS_DOCK_H__
#define __APP_FUSE_ANIMATIONS_MASTER_BASE__FUSE_LAYOUTS_DOCK_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase1_GFWResult__Fuse_Layouts_Dock; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Layouts_Dock; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock_; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterBase__Fuse_Layouts_Dock;

struct MasterBase__Fuse_Layouts_Dock__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerMaster __interface_0;
    int(*__fp_get_RestValue)(MasterBase__Fuse_Layouts_Dock*);
    void(*__fp_OnActive)(MasterBase__Fuse_Layouts_Dock*);
    void(*__fp_OnComplete)(MasterBase__Fuse_Layouts_Dock*);
    void(*__fp_OnInactive)(MasterBase__Fuse_Layouts_Dock*);
};

MasterBase__Fuse_Layouts_Dock__uType* MasterBase__Fuse_Layouts_Dock__typeof();

void MasterBase__Fuse_Layouts_Dock__Finalize(MasterBase__Fuse_Layouts_Dock* __this);
void MasterBase__Fuse_Layouts_Dock___ObjInit(MasterBase__Fuse_Layouts_Dock* __this, ::app::Fuse::Animations::MixerBase* mixerBase);
void MasterBase__Fuse_Layouts_Dock__Complete(MasterBase__Fuse_Layouts_Dock* __this);
bool MasterBase__Fuse_Layouts_Dock__get_PostLayout(MasterBase__Fuse_Layouts_Dock* __this);
::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Layouts_Dock MasterBase__Fuse_Layouts_Dock__GetFullWeight(MasterBase__Fuse_Layouts_Dock* __this);
void MasterBase__Fuse_Layouts_Dock__OnActive(MasterBase__Fuse_Layouts_Dock* __this);
void MasterBase__Fuse_Layouts_Dock__Register(MasterBase__Fuse_Layouts_Dock* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Dock* handle);
void MasterBase__Fuse_Layouts_Dock__Unregister(MasterBase__Fuse_Layouts_Dock* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Dock* handle);

struct MasterBase__Fuse_Layouts_Dock : ::uObject
{
    ::uStrong< ::app::Fuse::Animations::MixerBase*> _mixerBase;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Layouts_Dock_*> Handles;
    bool masterAdded;
    bool _inactive;
    bool DirtyValue;

    void _ObjInit(::app::Fuse::Animations::MixerBase* mixerBase) { MasterBase__Fuse_Layouts_Dock___ObjInit(this, mixerBase); }
    void Complete() { MasterBase__Fuse_Layouts_Dock__Complete(this); }
    bool PostLayout() { return MasterBase__Fuse_Layouts_Dock__get_PostLayout(this); }
    int RestValue() { return (((MasterBase__Fuse_Layouts_Dock__uType*)this->__obj_type)->__fp_get_RestValue)(this); }
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Layouts_Dock GetFullWeight();
    void OnActive() { (((MasterBase__Fuse_Layouts_Dock__uType*)this->__obj_type)->__fp_OnActive)(this); }
    void OnComplete() { (((MasterBase__Fuse_Layouts_Dock__uType*)this->__obj_type)->__fp_OnComplete)(this); }
    void OnInactive() { (((MasterBase__Fuse_Layouts_Dock__uType*)this->__obj_type)->__fp_OnInactive)(this); }
    void Register(::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Dock* handle) { MasterBase__Fuse_Layouts_Dock__Register(this, handle); }
    void Unregister(::app::Fuse::Animations::MixerHandle__Fuse_Layouts_Dock* handle) { MasterBase__Fuse_Layouts_Dock__Unregister(this, handle); }
};

}}}

#include <app/Fuse.Animations.MasterBase1_GFWResult__Fuse_Layouts_Dock.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Layouts_Dock MasterBase__Fuse_Layouts_Dock::GetFullWeight() { return MasterBase__Fuse_Layouts_Dock__GetFullWeight(this); }

}}}


#endif
