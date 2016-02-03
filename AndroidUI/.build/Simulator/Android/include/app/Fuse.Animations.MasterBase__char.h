// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_BASE__CHAR_H__
#define __APP_FUSE_ANIMATIONS_MASTER_BASE__CHAR_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase1_GFWResult__char; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__char; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_char_; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterBase__char;

struct MasterBase__char__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerMaster __interface_0;
    ::uChar(*__fp_get_RestValue)(MasterBase__char*);
    void(*__fp_OnActive)(MasterBase__char*);
    void(*__fp_OnComplete)(MasterBase__char*);
    void(*__fp_OnInactive)(MasterBase__char*);
};

MasterBase__char__uType* MasterBase__char__typeof();

void MasterBase__char__Finalize(MasterBase__char* __this);
void MasterBase__char___ObjInit(MasterBase__char* __this, ::app::Fuse::Animations::MixerBase* mixerBase);
void MasterBase__char__Complete(MasterBase__char* __this);
bool MasterBase__char__get_PostLayout(MasterBase__char* __this);
::app::Fuse::Animations::MasterBase1_GFWResult__char MasterBase__char__GetFullWeight(MasterBase__char* __this);
void MasterBase__char__OnActive(MasterBase__char* __this);
void MasterBase__char__Register(MasterBase__char* __this, ::app::Fuse::Animations::MixerHandle__char* handle);
void MasterBase__char__Unregister(MasterBase__char* __this, ::app::Fuse::Animations::MixerHandle__char* handle);

struct MasterBase__char : ::uObject
{
    ::uStrong< ::app::Fuse::Animations::MixerBase*> _mixerBase;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_char_*> Handles;
    bool masterAdded;
    bool _inactive;
    bool DirtyValue;

    void _ObjInit(::app::Fuse::Animations::MixerBase* mixerBase) { MasterBase__char___ObjInit(this, mixerBase); }
    void Complete() { MasterBase__char__Complete(this); }
    bool PostLayout() { return MasterBase__char__get_PostLayout(this); }
    ::uChar RestValue() { return (((MasterBase__char__uType*)this->__obj_type)->__fp_get_RestValue)(this); }
    ::app::Fuse::Animations::MasterBase1_GFWResult__char GetFullWeight();
    void OnActive() { (((MasterBase__char__uType*)this->__obj_type)->__fp_OnActive)(this); }
    void OnComplete() { (((MasterBase__char__uType*)this->__obj_type)->__fp_OnComplete)(this); }
    void OnInactive() { (((MasterBase__char__uType*)this->__obj_type)->__fp_OnInactive)(this); }
    void Register(::app::Fuse::Animations::MixerHandle__char* handle) { MasterBase__char__Register(this, handle); }
    void Unregister(::app::Fuse::Animations::MixerHandle__char* handle) { MasterBase__char__Unregister(this, handle); }
};

}}}

#include <app/Fuse.Animations.MasterBase1_GFWResult__char.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Fuse::Animations::MasterBase1_GFWResult__char MasterBase__char::GetFullWeight() { return MasterBase__char__GetFullWeight(this); }

}}}


#endif
