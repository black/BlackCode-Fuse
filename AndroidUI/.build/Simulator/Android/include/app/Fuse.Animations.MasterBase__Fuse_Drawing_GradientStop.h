// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_BASE__FUSE_DRAWING_GRADIENT_STOP_H__
#define __APP_FUSE_ANIMATIONS_MASTER_BASE__FUSE_DRAWING_GRADIENT_STOP_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase1_GFWResult__Fuse_Drawing_GradientStop; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Drawing_GradientStop; } } }
namespace app { namespace Fuse { namespace Drawing { struct GradientStop; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop_; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterBase__Fuse_Drawing_GradientStop;

struct MasterBase__Fuse_Drawing_GradientStop__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerMaster __interface_0;
    ::app::Fuse::Drawing::GradientStop*(*__fp_get_RestValue)(MasterBase__Fuse_Drawing_GradientStop*);
    void(*__fp_OnActive)(MasterBase__Fuse_Drawing_GradientStop*);
    void(*__fp_OnComplete)(MasterBase__Fuse_Drawing_GradientStop*);
    void(*__fp_OnInactive)(MasterBase__Fuse_Drawing_GradientStop*);
};

MasterBase__Fuse_Drawing_GradientStop__uType* MasterBase__Fuse_Drawing_GradientStop__typeof();

void MasterBase__Fuse_Drawing_GradientStop__Finalize(MasterBase__Fuse_Drawing_GradientStop* __this);
void MasterBase__Fuse_Drawing_GradientStop___ObjInit(MasterBase__Fuse_Drawing_GradientStop* __this, ::app::Fuse::Animations::MixerBase* mixerBase);
void MasterBase__Fuse_Drawing_GradientStop__Complete(MasterBase__Fuse_Drawing_GradientStop* __this);
bool MasterBase__Fuse_Drawing_GradientStop__get_PostLayout(MasterBase__Fuse_Drawing_GradientStop* __this);
::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Drawing_GradientStop MasterBase__Fuse_Drawing_GradientStop__GetFullWeight(MasterBase__Fuse_Drawing_GradientStop* __this);
void MasterBase__Fuse_Drawing_GradientStop__OnActive(MasterBase__Fuse_Drawing_GradientStop* __this);
void MasterBase__Fuse_Drawing_GradientStop__Register(MasterBase__Fuse_Drawing_GradientStop* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_GradientStop* handle);
void MasterBase__Fuse_Drawing_GradientStop__Unregister(MasterBase__Fuse_Drawing_GradientStop* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_GradientStop* handle);

struct MasterBase__Fuse_Drawing_GradientStop : ::uObject
{
    ::uStrong< ::app::Fuse::Animations::MixerBase*> _mixerBase;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_GradientStop_*> Handles;
    bool masterAdded;
    bool _inactive;
    bool DirtyValue;

    void _ObjInit(::app::Fuse::Animations::MixerBase* mixerBase) { MasterBase__Fuse_Drawing_GradientStop___ObjInit(this, mixerBase); }
    void Complete() { MasterBase__Fuse_Drawing_GradientStop__Complete(this); }
    bool PostLayout() { return MasterBase__Fuse_Drawing_GradientStop__get_PostLayout(this); }
    ::app::Fuse::Drawing::GradientStop* RestValue() { return (((MasterBase__Fuse_Drawing_GradientStop__uType*)this->__obj_type)->__fp_get_RestValue)(this); }
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Drawing_GradientStop GetFullWeight();
    void OnActive() { (((MasterBase__Fuse_Drawing_GradientStop__uType*)this->__obj_type)->__fp_OnActive)(this); }
    void OnComplete() { (((MasterBase__Fuse_Drawing_GradientStop__uType*)this->__obj_type)->__fp_OnComplete)(this); }
    void OnInactive() { (((MasterBase__Fuse_Drawing_GradientStop__uType*)this->__obj_type)->__fp_OnInactive)(this); }
    void Register(::app::Fuse::Animations::MixerHandle__Fuse_Drawing_GradientStop* handle) { MasterBase__Fuse_Drawing_GradientStop__Register(this, handle); }
    void Unregister(::app::Fuse::Animations::MixerHandle__Fuse_Drawing_GradientStop* handle) { MasterBase__Fuse_Drawing_GradientStop__Unregister(this, handle); }
};

}}}

#include <app/Fuse.Animations.MasterBase1_GFWResult__Fuse_Drawing_GradientStop.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Drawing_GradientStop MasterBase__Fuse_Drawing_GradientStop::GetFullWeight() { return MasterBase__Fuse_Drawing_GradientStop__GetFullWeight(this); }

}}}


#endif
