// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_BASE__FUSE_ELEMENTS_TEXT_ALIGNMENT_H__
#define __APP_FUSE_ANIMATIONS_MASTER_BASE__FUSE_ELEMENTS_TEXT_ALIGNMENT_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase1_GFWResult__Fuse_Elements_TextAlignment; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Elements_TextAlignment; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_Fuse_Elements_TextAlignment_; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterBase__Fuse_Elements_TextAlignment;

struct MasterBase__Fuse_Elements_TextAlignment__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerMaster __interface_0;
    int(*__fp_get_RestValue)(MasterBase__Fuse_Elements_TextAlignment*);
    void(*__fp_OnActive)(MasterBase__Fuse_Elements_TextAlignment*);
    void(*__fp_OnComplete)(MasterBase__Fuse_Elements_TextAlignment*);
    void(*__fp_OnInactive)(MasterBase__Fuse_Elements_TextAlignment*);
};

MasterBase__Fuse_Elements_TextAlignment__uType* MasterBase__Fuse_Elements_TextAlignment__typeof();

void MasterBase__Fuse_Elements_TextAlignment__Finalize(MasterBase__Fuse_Elements_TextAlignment* __this);
void MasterBase__Fuse_Elements_TextAlignment___ObjInit(MasterBase__Fuse_Elements_TextAlignment* __this, ::app::Fuse::Animations::MixerBase* mixerBase);
void MasterBase__Fuse_Elements_TextAlignment__Complete(MasterBase__Fuse_Elements_TextAlignment* __this);
bool MasterBase__Fuse_Elements_TextAlignment__get_PostLayout(MasterBase__Fuse_Elements_TextAlignment* __this);
::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_TextAlignment MasterBase__Fuse_Elements_TextAlignment__GetFullWeight(MasterBase__Fuse_Elements_TextAlignment* __this);
void MasterBase__Fuse_Elements_TextAlignment__OnActive(MasterBase__Fuse_Elements_TextAlignment* __this);
void MasterBase__Fuse_Elements_TextAlignment__Register(MasterBase__Fuse_Elements_TextAlignment* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_TextAlignment* handle);
void MasterBase__Fuse_Elements_TextAlignment__Unregister(MasterBase__Fuse_Elements_TextAlignment* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_TextAlignment* handle);

struct MasterBase__Fuse_Elements_TextAlignment : ::uObject
{
    ::uStrong< ::app::Fuse::Animations::MixerBase*> _mixerBase;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_TextAlignment_*> Handles;
    bool masterAdded;
    bool _inactive;
    bool DirtyValue;

    void _ObjInit(::app::Fuse::Animations::MixerBase* mixerBase) { MasterBase__Fuse_Elements_TextAlignment___ObjInit(this, mixerBase); }
    void Complete() { MasterBase__Fuse_Elements_TextAlignment__Complete(this); }
    bool PostLayout() { return MasterBase__Fuse_Elements_TextAlignment__get_PostLayout(this); }
    int RestValue() { return (((MasterBase__Fuse_Elements_TextAlignment__uType*)this->__obj_type)->__fp_get_RestValue)(this); }
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_TextAlignment GetFullWeight();
    void OnActive() { (((MasterBase__Fuse_Elements_TextAlignment__uType*)this->__obj_type)->__fp_OnActive)(this); }
    void OnComplete() { (((MasterBase__Fuse_Elements_TextAlignment__uType*)this->__obj_type)->__fp_OnComplete)(this); }
    void OnInactive() { (((MasterBase__Fuse_Elements_TextAlignment__uType*)this->__obj_type)->__fp_OnInactive)(this); }
    void Register(::app::Fuse::Animations::MixerHandle__Fuse_Elements_TextAlignment* handle) { MasterBase__Fuse_Elements_TextAlignment__Register(this, handle); }
    void Unregister(::app::Fuse::Animations::MixerHandle__Fuse_Elements_TextAlignment* handle) { MasterBase__Fuse_Elements_TextAlignment__Unregister(this, handle); }
};

}}}

#include <app/Fuse.Animations.MasterBase1_GFWResult__Fuse_Elements_TextAlignment.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_TextAlignment MasterBase__Fuse_Elements_TextAlignment::GetFullWeight() { return MasterBase__Fuse_Elements_TextAlignment__GetFullWeight(this); }

}}}


#endif
