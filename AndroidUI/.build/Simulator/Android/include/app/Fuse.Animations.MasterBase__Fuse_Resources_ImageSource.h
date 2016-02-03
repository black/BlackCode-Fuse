// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_BASE__FUSE_RESOURCES_IMAGE_SOURCE_H__
#define __APP_FUSE_ANIMATIONS_MASTER_BASE__FUSE_RESOURCES_IMAGE_SOURCE_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase1_GFWResult__Fuse_Resources_ImageSource; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Resources_ImageSource; } } }
namespace app { namespace Fuse { namespace Resources { struct ImageSource; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource_; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterBase__Fuse_Resources_ImageSource;

struct MasterBase__Fuse_Resources_ImageSource__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerMaster __interface_0;
    ::app::Fuse::Resources::ImageSource*(*__fp_get_RestValue)(MasterBase__Fuse_Resources_ImageSource*);
    void(*__fp_OnActive)(MasterBase__Fuse_Resources_ImageSource*);
    void(*__fp_OnComplete)(MasterBase__Fuse_Resources_ImageSource*);
    void(*__fp_OnInactive)(MasterBase__Fuse_Resources_ImageSource*);
};

MasterBase__Fuse_Resources_ImageSource__uType* MasterBase__Fuse_Resources_ImageSource__typeof();

void MasterBase__Fuse_Resources_ImageSource__Finalize(MasterBase__Fuse_Resources_ImageSource* __this);
void MasterBase__Fuse_Resources_ImageSource___ObjInit(MasterBase__Fuse_Resources_ImageSource* __this, ::app::Fuse::Animations::MixerBase* mixerBase);
void MasterBase__Fuse_Resources_ImageSource__Complete(MasterBase__Fuse_Resources_ImageSource* __this);
bool MasterBase__Fuse_Resources_ImageSource__get_PostLayout(MasterBase__Fuse_Resources_ImageSource* __this);
::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Resources_ImageSource MasterBase__Fuse_Resources_ImageSource__GetFullWeight(MasterBase__Fuse_Resources_ImageSource* __this);
void MasterBase__Fuse_Resources_ImageSource__OnActive(MasterBase__Fuse_Resources_ImageSource* __this);
void MasterBase__Fuse_Resources_ImageSource__Register(MasterBase__Fuse_Resources_ImageSource* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Resources_ImageSource* handle);
void MasterBase__Fuse_Resources_ImageSource__Unregister(MasterBase__Fuse_Resources_ImageSource* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Resources_ImageSource* handle);

struct MasterBase__Fuse_Resources_ImageSource : ::uObject
{
    ::uStrong< ::app::Fuse::Animations::MixerBase*> _mixerBase;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Resources_ImageSource_*> Handles;
    bool masterAdded;
    bool _inactive;
    bool DirtyValue;

    void _ObjInit(::app::Fuse::Animations::MixerBase* mixerBase) { MasterBase__Fuse_Resources_ImageSource___ObjInit(this, mixerBase); }
    void Complete() { MasterBase__Fuse_Resources_ImageSource__Complete(this); }
    bool PostLayout() { return MasterBase__Fuse_Resources_ImageSource__get_PostLayout(this); }
    ::app::Fuse::Resources::ImageSource* RestValue() { return (((MasterBase__Fuse_Resources_ImageSource__uType*)this->__obj_type)->__fp_get_RestValue)(this); }
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Resources_ImageSource GetFullWeight();
    void OnActive() { (((MasterBase__Fuse_Resources_ImageSource__uType*)this->__obj_type)->__fp_OnActive)(this); }
    void OnComplete() { (((MasterBase__Fuse_Resources_ImageSource__uType*)this->__obj_type)->__fp_OnComplete)(this); }
    void OnInactive() { (((MasterBase__Fuse_Resources_ImageSource__uType*)this->__obj_type)->__fp_OnInactive)(this); }
    void Register(::app::Fuse::Animations::MixerHandle__Fuse_Resources_ImageSource* handle) { MasterBase__Fuse_Resources_ImageSource__Register(this, handle); }
    void Unregister(::app::Fuse::Animations::MixerHandle__Fuse_Resources_ImageSource* handle) { MasterBase__Fuse_Resources_ImageSource__Unregister(this, handle); }
};

}}}

#include <app/Fuse.Animations.MasterBase1_GFWResult__Fuse_Resources_ImageSource.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Resources_ImageSource MasterBase__Fuse_Resources_ImageSource::GetFullWeight() { return MasterBase__Fuse_Resources_ImageSource__GetFullWeight(this); }

}}}


#endif
