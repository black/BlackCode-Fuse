// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_BASE__UNO_U_X_FILE_SOURCE_H__
#define __APP_FUSE_ANIMATIONS_MASTER_BASE__UNO_U_X_FILE_SOURCE_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase1_GFWResult__Uno_UX_FileSource; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Uno_UX_FileSource; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_Uno_UX_FileSource_; } } }
namespace app { namespace Uno { namespace UX { struct FileSource; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterBase__Uno_UX_FileSource;

struct MasterBase__Uno_UX_FileSource__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerMaster __interface_0;
    ::app::Uno::UX::FileSource*(*__fp_get_RestValue)(MasterBase__Uno_UX_FileSource*);
    void(*__fp_OnActive)(MasterBase__Uno_UX_FileSource*);
    void(*__fp_OnComplete)(MasterBase__Uno_UX_FileSource*);
    void(*__fp_OnInactive)(MasterBase__Uno_UX_FileSource*);
};

MasterBase__Uno_UX_FileSource__uType* MasterBase__Uno_UX_FileSource__typeof();

void MasterBase__Uno_UX_FileSource__Finalize(MasterBase__Uno_UX_FileSource* __this);
void MasterBase__Uno_UX_FileSource___ObjInit(MasterBase__Uno_UX_FileSource* __this, ::app::Fuse::Animations::MixerBase* mixerBase);
void MasterBase__Uno_UX_FileSource__Complete(MasterBase__Uno_UX_FileSource* __this);
bool MasterBase__Uno_UX_FileSource__get_PostLayout(MasterBase__Uno_UX_FileSource* __this);
::app::Fuse::Animations::MasterBase1_GFWResult__Uno_UX_FileSource MasterBase__Uno_UX_FileSource__GetFullWeight(MasterBase__Uno_UX_FileSource* __this);
void MasterBase__Uno_UX_FileSource__OnActive(MasterBase__Uno_UX_FileSource* __this);
void MasterBase__Uno_UX_FileSource__Register(MasterBase__Uno_UX_FileSource* __this, ::app::Fuse::Animations::MixerHandle__Uno_UX_FileSource* handle);
void MasterBase__Uno_UX_FileSource__Unregister(MasterBase__Uno_UX_FileSource* __this, ::app::Fuse::Animations::MixerHandle__Uno_UX_FileSource* handle);

struct MasterBase__Uno_UX_FileSource : ::uObject
{
    ::uStrong< ::app::Fuse::Animations::MixerBase*> _mixerBase;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Uno_UX_FileSource_*> Handles;
    bool masterAdded;
    bool _inactive;
    bool DirtyValue;

    void _ObjInit(::app::Fuse::Animations::MixerBase* mixerBase) { MasterBase__Uno_UX_FileSource___ObjInit(this, mixerBase); }
    void Complete() { MasterBase__Uno_UX_FileSource__Complete(this); }
    bool PostLayout() { return MasterBase__Uno_UX_FileSource__get_PostLayout(this); }
    ::app::Uno::UX::FileSource* RestValue() { return (((MasterBase__Uno_UX_FileSource__uType*)this->__obj_type)->__fp_get_RestValue)(this); }
    ::app::Fuse::Animations::MasterBase1_GFWResult__Uno_UX_FileSource GetFullWeight();
    void OnActive() { (((MasterBase__Uno_UX_FileSource__uType*)this->__obj_type)->__fp_OnActive)(this); }
    void OnComplete() { (((MasterBase__Uno_UX_FileSource__uType*)this->__obj_type)->__fp_OnComplete)(this); }
    void OnInactive() { (((MasterBase__Uno_UX_FileSource__uType*)this->__obj_type)->__fp_OnInactive)(this); }
    void Register(::app::Fuse::Animations::MixerHandle__Uno_UX_FileSource* handle) { MasterBase__Uno_UX_FileSource__Register(this, handle); }
    void Unregister(::app::Fuse::Animations::MixerHandle__Uno_UX_FileSource* handle) { MasterBase__Uno_UX_FileSource__Unregister(this, handle); }
};

}}}

#include <app/Fuse.Animations.MasterBase1_GFWResult__Uno_UX_FileSource.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Fuse::Animations::MasterBase1_GFWResult__Uno_UX_FileSource MasterBase__Uno_UX_FileSource::GetFullWeight() { return MasterBase__Uno_UX_FileSource__GetFullWeight(this); }

}}}


#endif
