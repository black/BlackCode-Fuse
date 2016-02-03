// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_BASE__FUSE_DRAWING_SOLID_COLOR_H__
#define __APP_FUSE_ANIMATIONS_MASTER_BASE__FUSE_DRAWING_SOLID_COLOR_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase1_GFWResult__Fuse_Drawing_SolidColor; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Drawing_SolidColor; } } }
namespace app { namespace Fuse { namespace Drawing { struct SolidColor; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_Fuse_Drawing_SolidColor_; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterBase__Fuse_Drawing_SolidColor;

struct MasterBase__Fuse_Drawing_SolidColor__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerMaster __interface_0;
    ::app::Fuse::Drawing::SolidColor*(*__fp_get_RestValue)(MasterBase__Fuse_Drawing_SolidColor*);
    void(*__fp_OnActive)(MasterBase__Fuse_Drawing_SolidColor*);
    void(*__fp_OnComplete)(MasterBase__Fuse_Drawing_SolidColor*);
    void(*__fp_OnInactive)(MasterBase__Fuse_Drawing_SolidColor*);
};

MasterBase__Fuse_Drawing_SolidColor__uType* MasterBase__Fuse_Drawing_SolidColor__typeof();

void MasterBase__Fuse_Drawing_SolidColor__Finalize(MasterBase__Fuse_Drawing_SolidColor* __this);
void MasterBase__Fuse_Drawing_SolidColor___ObjInit(MasterBase__Fuse_Drawing_SolidColor* __this, ::app::Fuse::Animations::MixerBase* mixerBase);
void MasterBase__Fuse_Drawing_SolidColor__Complete(MasterBase__Fuse_Drawing_SolidColor* __this);
bool MasterBase__Fuse_Drawing_SolidColor__get_PostLayout(MasterBase__Fuse_Drawing_SolidColor* __this);
::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Drawing_SolidColor MasterBase__Fuse_Drawing_SolidColor__GetFullWeight(MasterBase__Fuse_Drawing_SolidColor* __this);
void MasterBase__Fuse_Drawing_SolidColor__OnActive(MasterBase__Fuse_Drawing_SolidColor* __this);
void MasterBase__Fuse_Drawing_SolidColor__Register(MasterBase__Fuse_Drawing_SolidColor* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_SolidColor* handle);
void MasterBase__Fuse_Drawing_SolidColor__Unregister(MasterBase__Fuse_Drawing_SolidColor* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_SolidColor* handle);

struct MasterBase__Fuse_Drawing_SolidColor : ::uObject
{
    ::uStrong< ::app::Fuse::Animations::MixerBase*> _mixerBase;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_SolidColor_*> Handles;
    bool masterAdded;
    bool _inactive;
    bool DirtyValue;

    void _ObjInit(::app::Fuse::Animations::MixerBase* mixerBase) { MasterBase__Fuse_Drawing_SolidColor___ObjInit(this, mixerBase); }
    void Complete() { MasterBase__Fuse_Drawing_SolidColor__Complete(this); }
    bool PostLayout() { return MasterBase__Fuse_Drawing_SolidColor__get_PostLayout(this); }
    ::app::Fuse::Drawing::SolidColor* RestValue() { return (((MasterBase__Fuse_Drawing_SolidColor__uType*)this->__obj_type)->__fp_get_RestValue)(this); }
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Drawing_SolidColor GetFullWeight();
    void OnActive() { (((MasterBase__Fuse_Drawing_SolidColor__uType*)this->__obj_type)->__fp_OnActive)(this); }
    void OnComplete() { (((MasterBase__Fuse_Drawing_SolidColor__uType*)this->__obj_type)->__fp_OnComplete)(this); }
    void OnInactive() { (((MasterBase__Fuse_Drawing_SolidColor__uType*)this->__obj_type)->__fp_OnInactive)(this); }
    void Register(::app::Fuse::Animations::MixerHandle__Fuse_Drawing_SolidColor* handle) { MasterBase__Fuse_Drawing_SolidColor__Register(this, handle); }
    void Unregister(::app::Fuse::Animations::MixerHandle__Fuse_Drawing_SolidColor* handle) { MasterBase__Fuse_Drawing_SolidColor__Unregister(this, handle); }
};

}}}

#include <app/Fuse.Animations.MasterBase1_GFWResult__Fuse_Drawing_SolidColor.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Drawing_SolidColor MasterBase__Fuse_Drawing_SolidColor::GetFullWeight() { return MasterBase__Fuse_Drawing_SolidColor__GetFullWeight(this); }

}}}


#endif
