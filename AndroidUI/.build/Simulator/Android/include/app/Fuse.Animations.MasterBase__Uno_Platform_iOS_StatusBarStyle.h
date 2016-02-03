// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_BASE__UNO_PLATFORM_I_O_S_STATUS_BAR_STYLE_H__
#define __APP_FUSE_ANIMATIONS_MASTER_BASE__UNO_PLATFORM_I_O_S_STATUS_BAR_STYLE_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase1_GFWResult__Uno_Platform_iOS_StatusBarStyle; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Uno_Platform_iOS_StatusBarStyle; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_Uno_Platform_iOS_StatusBarStyle_; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterBase__Uno_Platform_iOS_StatusBarStyle;

struct MasterBase__Uno_Platform_iOS_StatusBarStyle__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerMaster __interface_0;
    int(*__fp_get_RestValue)(MasterBase__Uno_Platform_iOS_StatusBarStyle*);
    void(*__fp_OnActive)(MasterBase__Uno_Platform_iOS_StatusBarStyle*);
    void(*__fp_OnComplete)(MasterBase__Uno_Platform_iOS_StatusBarStyle*);
    void(*__fp_OnInactive)(MasterBase__Uno_Platform_iOS_StatusBarStyle*);
};

MasterBase__Uno_Platform_iOS_StatusBarStyle__uType* MasterBase__Uno_Platform_iOS_StatusBarStyle__typeof();

void MasterBase__Uno_Platform_iOS_StatusBarStyle__Finalize(MasterBase__Uno_Platform_iOS_StatusBarStyle* __this);
void MasterBase__Uno_Platform_iOS_StatusBarStyle___ObjInit(MasterBase__Uno_Platform_iOS_StatusBarStyle* __this, ::app::Fuse::Animations::MixerBase* mixerBase);
void MasterBase__Uno_Platform_iOS_StatusBarStyle__Complete(MasterBase__Uno_Platform_iOS_StatusBarStyle* __this);
bool MasterBase__Uno_Platform_iOS_StatusBarStyle__get_PostLayout(MasterBase__Uno_Platform_iOS_StatusBarStyle* __this);
::app::Fuse::Animations::MasterBase1_GFWResult__Uno_Platform_iOS_StatusBarStyle MasterBase__Uno_Platform_iOS_StatusBarStyle__GetFullWeight(MasterBase__Uno_Platform_iOS_StatusBarStyle* __this);
void MasterBase__Uno_Platform_iOS_StatusBarStyle__OnActive(MasterBase__Uno_Platform_iOS_StatusBarStyle* __this);
void MasterBase__Uno_Platform_iOS_StatusBarStyle__Register(MasterBase__Uno_Platform_iOS_StatusBarStyle* __this, ::app::Fuse::Animations::MixerHandle__Uno_Platform_iOS_StatusBarStyle* handle);
void MasterBase__Uno_Platform_iOS_StatusBarStyle__Unregister(MasterBase__Uno_Platform_iOS_StatusBarStyle* __this, ::app::Fuse::Animations::MixerHandle__Uno_Platform_iOS_StatusBarStyle* handle);

struct MasterBase__Uno_Platform_iOS_StatusBarStyle : ::uObject
{
    ::uStrong< ::app::Fuse::Animations::MixerBase*> _mixerBase;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Uno_Platform_iOS_StatusBarStyle_*> Handles;
    bool masterAdded;
    bool _inactive;
    bool DirtyValue;

    void _ObjInit(::app::Fuse::Animations::MixerBase* mixerBase) { MasterBase__Uno_Platform_iOS_StatusBarStyle___ObjInit(this, mixerBase); }
    void Complete() { MasterBase__Uno_Platform_iOS_StatusBarStyle__Complete(this); }
    bool PostLayout() { return MasterBase__Uno_Platform_iOS_StatusBarStyle__get_PostLayout(this); }
    int RestValue() { return (((MasterBase__Uno_Platform_iOS_StatusBarStyle__uType*)this->__obj_type)->__fp_get_RestValue)(this); }
    ::app::Fuse::Animations::MasterBase1_GFWResult__Uno_Platform_iOS_StatusBarStyle GetFullWeight();
    void OnActive() { (((MasterBase__Uno_Platform_iOS_StatusBarStyle__uType*)this->__obj_type)->__fp_OnActive)(this); }
    void OnComplete() { (((MasterBase__Uno_Platform_iOS_StatusBarStyle__uType*)this->__obj_type)->__fp_OnComplete)(this); }
    void OnInactive() { (((MasterBase__Uno_Platform_iOS_StatusBarStyle__uType*)this->__obj_type)->__fp_OnInactive)(this); }
    void Register(::app::Fuse::Animations::MixerHandle__Uno_Platform_iOS_StatusBarStyle* handle) { MasterBase__Uno_Platform_iOS_StatusBarStyle__Register(this, handle); }
    void Unregister(::app::Fuse::Animations::MixerHandle__Uno_Platform_iOS_StatusBarStyle* handle) { MasterBase__Uno_Platform_iOS_StatusBarStyle__Unregister(this, handle); }
};

}}}

#include <app/Fuse.Animations.MasterBase1_GFWResult__Uno_Platform_iOS_StatusBarStyle.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Fuse::Animations::MasterBase1_GFWResult__Uno_Platform_iOS_StatusBarStyle MasterBase__Uno_Platform_iOS_StatusBarStyle::GetFullWeight() { return MasterBase__Uno_Platform_iOS_StatusBarStyle__GetFullWeight(this); }

}}}


#endif
