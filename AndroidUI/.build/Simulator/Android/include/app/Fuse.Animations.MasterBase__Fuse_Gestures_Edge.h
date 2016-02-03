// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_BASE__FUSE_GESTURES_EDGE_H__
#define __APP_FUSE_ANIMATIONS_MASTER_BASE__FUSE_GESTURES_EDGE_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase1_GFWResult__Fuse_Gestures_Edge; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Gestures_Edge; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge_; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterBase__Fuse_Gestures_Edge;

struct MasterBase__Fuse_Gestures_Edge__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerMaster __interface_0;
    int(*__fp_get_RestValue)(MasterBase__Fuse_Gestures_Edge*);
    void(*__fp_OnActive)(MasterBase__Fuse_Gestures_Edge*);
    void(*__fp_OnComplete)(MasterBase__Fuse_Gestures_Edge*);
    void(*__fp_OnInactive)(MasterBase__Fuse_Gestures_Edge*);
};

MasterBase__Fuse_Gestures_Edge__uType* MasterBase__Fuse_Gestures_Edge__typeof();

void MasterBase__Fuse_Gestures_Edge__Finalize(MasterBase__Fuse_Gestures_Edge* __this);
void MasterBase__Fuse_Gestures_Edge___ObjInit(MasterBase__Fuse_Gestures_Edge* __this, ::app::Fuse::Animations::MixerBase* mixerBase);
void MasterBase__Fuse_Gestures_Edge__Complete(MasterBase__Fuse_Gestures_Edge* __this);
bool MasterBase__Fuse_Gestures_Edge__get_PostLayout(MasterBase__Fuse_Gestures_Edge* __this);
::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Gestures_Edge MasterBase__Fuse_Gestures_Edge__GetFullWeight(MasterBase__Fuse_Gestures_Edge* __this);
void MasterBase__Fuse_Gestures_Edge__OnActive(MasterBase__Fuse_Gestures_Edge* __this);
void MasterBase__Fuse_Gestures_Edge__Register(MasterBase__Fuse_Gestures_Edge* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Gestures_Edge* handle);
void MasterBase__Fuse_Gestures_Edge__Unregister(MasterBase__Fuse_Gestures_Edge* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Gestures_Edge* handle);

struct MasterBase__Fuse_Gestures_Edge : ::uObject
{
    ::uStrong< ::app::Fuse::Animations::MixerBase*> _mixerBase;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Gestures_Edge_*> Handles;
    bool masterAdded;
    bool _inactive;
    bool DirtyValue;

    void _ObjInit(::app::Fuse::Animations::MixerBase* mixerBase) { MasterBase__Fuse_Gestures_Edge___ObjInit(this, mixerBase); }
    void Complete() { MasterBase__Fuse_Gestures_Edge__Complete(this); }
    bool PostLayout() { return MasterBase__Fuse_Gestures_Edge__get_PostLayout(this); }
    int RestValue() { return (((MasterBase__Fuse_Gestures_Edge__uType*)this->__obj_type)->__fp_get_RestValue)(this); }
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Gestures_Edge GetFullWeight();
    void OnActive() { (((MasterBase__Fuse_Gestures_Edge__uType*)this->__obj_type)->__fp_OnActive)(this); }
    void OnComplete() { (((MasterBase__Fuse_Gestures_Edge__uType*)this->__obj_type)->__fp_OnComplete)(this); }
    void OnInactive() { (((MasterBase__Fuse_Gestures_Edge__uType*)this->__obj_type)->__fp_OnInactive)(this); }
    void Register(::app::Fuse::Animations::MixerHandle__Fuse_Gestures_Edge* handle) { MasterBase__Fuse_Gestures_Edge__Register(this, handle); }
    void Unregister(::app::Fuse::Animations::MixerHandle__Fuse_Gestures_Edge* handle) { MasterBase__Fuse_Gestures_Edge__Unregister(this, handle); }
};

}}}

#include <app/Fuse.Animations.MasterBase1_GFWResult__Fuse_Gestures_Edge.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Gestures_Edge MasterBase__Fuse_Gestures_Edge::GetFullWeight() { return MasterBase__Fuse_Gestures_Edge__GetFullWeight(this); }

}}}


#endif
