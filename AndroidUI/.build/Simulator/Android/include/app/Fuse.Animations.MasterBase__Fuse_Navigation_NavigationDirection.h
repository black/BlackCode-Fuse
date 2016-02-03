// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_BASE__FUSE_NAVIGATION_NAVIGATION_DIRECTION_H__
#define __APP_FUSE_ANIMATIONS_MASTER_BASE__FUSE_NAVIGATION_NAVIGATION_DIRECTION_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase1_GFWResult__Fuse_Navigation_NavigationDirection; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Navigation_NavigationDirection; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationDirection_; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterBase__Fuse_Navigation_NavigationDirection;

struct MasterBase__Fuse_Navigation_NavigationDirection__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerMaster __interface_0;
    int(*__fp_get_RestValue)(MasterBase__Fuse_Navigation_NavigationDirection*);
    void(*__fp_OnActive)(MasterBase__Fuse_Navigation_NavigationDirection*);
    void(*__fp_OnComplete)(MasterBase__Fuse_Navigation_NavigationDirection*);
    void(*__fp_OnInactive)(MasterBase__Fuse_Navigation_NavigationDirection*);
};

MasterBase__Fuse_Navigation_NavigationDirection__uType* MasterBase__Fuse_Navigation_NavigationDirection__typeof();

void MasterBase__Fuse_Navigation_NavigationDirection__Finalize(MasterBase__Fuse_Navigation_NavigationDirection* __this);
void MasterBase__Fuse_Navigation_NavigationDirection___ObjInit(MasterBase__Fuse_Navigation_NavigationDirection* __this, ::app::Fuse::Animations::MixerBase* mixerBase);
void MasterBase__Fuse_Navigation_NavigationDirection__Complete(MasterBase__Fuse_Navigation_NavigationDirection* __this);
bool MasterBase__Fuse_Navigation_NavigationDirection__get_PostLayout(MasterBase__Fuse_Navigation_NavigationDirection* __this);
::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Navigation_NavigationDirection MasterBase__Fuse_Navigation_NavigationDirection__GetFullWeight(MasterBase__Fuse_Navigation_NavigationDirection* __this);
void MasterBase__Fuse_Navigation_NavigationDirection__OnActive(MasterBase__Fuse_Navigation_NavigationDirection* __this);
void MasterBase__Fuse_Navigation_NavigationDirection__Register(MasterBase__Fuse_Navigation_NavigationDirection* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationDirection* handle);
void MasterBase__Fuse_Navigation_NavigationDirection__Unregister(MasterBase__Fuse_Navigation_NavigationDirection* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationDirection* handle);

struct MasterBase__Fuse_Navigation_NavigationDirection : ::uObject
{
    ::uStrong< ::app::Fuse::Animations::MixerBase*> _mixerBase;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Navigation_NavigationDirection_*> Handles;
    bool masterAdded;
    bool _inactive;
    bool DirtyValue;

    void _ObjInit(::app::Fuse::Animations::MixerBase* mixerBase) { MasterBase__Fuse_Navigation_NavigationDirection___ObjInit(this, mixerBase); }
    void Complete() { MasterBase__Fuse_Navigation_NavigationDirection__Complete(this); }
    bool PostLayout() { return MasterBase__Fuse_Navigation_NavigationDirection__get_PostLayout(this); }
    int RestValue() { return (((MasterBase__Fuse_Navigation_NavigationDirection__uType*)this->__obj_type)->__fp_get_RestValue)(this); }
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Navigation_NavigationDirection GetFullWeight();
    void OnActive() { (((MasterBase__Fuse_Navigation_NavigationDirection__uType*)this->__obj_type)->__fp_OnActive)(this); }
    void OnComplete() { (((MasterBase__Fuse_Navigation_NavigationDirection__uType*)this->__obj_type)->__fp_OnComplete)(this); }
    void OnInactive() { (((MasterBase__Fuse_Navigation_NavigationDirection__uType*)this->__obj_type)->__fp_OnInactive)(this); }
    void Register(::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationDirection* handle) { MasterBase__Fuse_Navigation_NavigationDirection__Register(this, handle); }
    void Unregister(::app::Fuse::Animations::MixerHandle__Fuse_Navigation_NavigationDirection* handle) { MasterBase__Fuse_Navigation_NavigationDirection__Unregister(this, handle); }
};

}}}

#include <app/Fuse.Animations.MasterBase1_GFWResult__Fuse_Navigation_Navigati-65681197.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Navigation_NavigationDirection MasterBase__Fuse_Navigation_NavigationDirection::GetFullWeight() { return MasterBase__Fuse_Navigation_NavigationDirection__GetFullWeight(this); }

}}}


#endif
