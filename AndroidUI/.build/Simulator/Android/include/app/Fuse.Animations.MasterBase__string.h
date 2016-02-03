// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_BASE__STRING_H__
#define __APP_FUSE_ANIMATIONS_MASTER_BASE__STRING_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase1_GFWResult__string; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__string; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_string_; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterBase__string;

struct MasterBase__string__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerMaster __interface_0;
    ::uString*(*__fp_get_RestValue)(MasterBase__string*);
    void(*__fp_OnActive)(MasterBase__string*);
    void(*__fp_OnComplete)(MasterBase__string*);
    void(*__fp_OnInactive)(MasterBase__string*);
};

MasterBase__string__uType* MasterBase__string__typeof();

void MasterBase__string__Finalize(MasterBase__string* __this);
void MasterBase__string___ObjInit(MasterBase__string* __this, ::app::Fuse::Animations::MixerBase* mixerBase);
void MasterBase__string__Complete(MasterBase__string* __this);
bool MasterBase__string__get_PostLayout(MasterBase__string* __this);
::app::Fuse::Animations::MasterBase1_GFWResult__string MasterBase__string__GetFullWeight(MasterBase__string* __this);
void MasterBase__string__OnActive(MasterBase__string* __this);
void MasterBase__string__Register(MasterBase__string* __this, ::app::Fuse::Animations::MixerHandle__string* handle);
void MasterBase__string__Unregister(MasterBase__string* __this, ::app::Fuse::Animations::MixerHandle__string* handle);

struct MasterBase__string : ::uObject
{
    ::uStrong< ::app::Fuse::Animations::MixerBase*> _mixerBase;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_string_*> Handles;
    bool masterAdded;
    bool _inactive;
    bool DirtyValue;

    void _ObjInit(::app::Fuse::Animations::MixerBase* mixerBase) { MasterBase__string___ObjInit(this, mixerBase); }
    void Complete() { MasterBase__string__Complete(this); }
    bool PostLayout() { return MasterBase__string__get_PostLayout(this); }
    ::uString* RestValue() { return (((MasterBase__string__uType*)this->__obj_type)->__fp_get_RestValue)(this); }
    ::app::Fuse::Animations::MasterBase1_GFWResult__string GetFullWeight();
    void OnActive() { (((MasterBase__string__uType*)this->__obj_type)->__fp_OnActive)(this); }
    void OnComplete() { (((MasterBase__string__uType*)this->__obj_type)->__fp_OnComplete)(this); }
    void OnInactive() { (((MasterBase__string__uType*)this->__obj_type)->__fp_OnInactive)(this); }
    void Register(::app::Fuse::Animations::MixerHandle__string* handle) { MasterBase__string__Register(this, handle); }
    void Unregister(::app::Fuse::Animations::MixerHandle__string* handle) { MasterBase__string__Unregister(this, handle); }
};

}}}

#include <app/Fuse.Animations.MasterBase1_GFWResult__string.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Fuse::Animations::MasterBase1_GFWResult__string MasterBase__string::GetFullWeight() { return MasterBase__string__GetFullWeight(this); }

}}}


#endif
