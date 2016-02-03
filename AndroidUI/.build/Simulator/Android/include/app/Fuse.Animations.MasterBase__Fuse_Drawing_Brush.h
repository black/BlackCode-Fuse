// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MASTER_BASE__FUSE_DRAWING_BRUSH_H__
#define __APP_FUSE_ANIMATIONS_MASTER_BASE__FUSE_DRAWING_BRUSH_H__

#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase1_GFWResult__Fuse_Drawing_Brush; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerBase; } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Drawing_Brush; } } }
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_Fuse_Drawing_Brush_; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MasterBase__Fuse_Drawing_Brush;

struct MasterBase__Fuse_Drawing_Brush__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerMaster __interface_0;
    ::app::Fuse::Drawing::Brush*(*__fp_get_RestValue)(MasterBase__Fuse_Drawing_Brush*);
    void(*__fp_OnActive)(MasterBase__Fuse_Drawing_Brush*);
    void(*__fp_OnComplete)(MasterBase__Fuse_Drawing_Brush*);
    void(*__fp_OnInactive)(MasterBase__Fuse_Drawing_Brush*);
};

MasterBase__Fuse_Drawing_Brush__uType* MasterBase__Fuse_Drawing_Brush__typeof();

void MasterBase__Fuse_Drawing_Brush__Finalize(MasterBase__Fuse_Drawing_Brush* __this);
void MasterBase__Fuse_Drawing_Brush___ObjInit(MasterBase__Fuse_Drawing_Brush* __this, ::app::Fuse::Animations::MixerBase* mixerBase);
void MasterBase__Fuse_Drawing_Brush__Complete(MasterBase__Fuse_Drawing_Brush* __this);
bool MasterBase__Fuse_Drawing_Brush__get_PostLayout(MasterBase__Fuse_Drawing_Brush* __this);
::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Drawing_Brush MasterBase__Fuse_Drawing_Brush__GetFullWeight(MasterBase__Fuse_Drawing_Brush* __this);
void MasterBase__Fuse_Drawing_Brush__OnActive(MasterBase__Fuse_Drawing_Brush* __this);
void MasterBase__Fuse_Drawing_Brush__Register(MasterBase__Fuse_Drawing_Brush* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_Brush* handle);
void MasterBase__Fuse_Drawing_Brush__Unregister(MasterBase__Fuse_Drawing_Brush* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Drawing_Brush* handle);

struct MasterBase__Fuse_Drawing_Brush : ::uObject
{
    ::uStrong< ::app::Fuse::Animations::MixerBase*> _mixerBase;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Drawing_Brush_*> Handles;
    bool masterAdded;
    bool _inactive;
    bool DirtyValue;

    void _ObjInit(::app::Fuse::Animations::MixerBase* mixerBase) { MasterBase__Fuse_Drawing_Brush___ObjInit(this, mixerBase); }
    void Complete() { MasterBase__Fuse_Drawing_Brush__Complete(this); }
    bool PostLayout() { return MasterBase__Fuse_Drawing_Brush__get_PostLayout(this); }
    ::app::Fuse::Drawing::Brush* RestValue() { return (((MasterBase__Fuse_Drawing_Brush__uType*)this->__obj_type)->__fp_get_RestValue)(this); }
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Drawing_Brush GetFullWeight();
    void OnActive() { (((MasterBase__Fuse_Drawing_Brush__uType*)this->__obj_type)->__fp_OnActive)(this); }
    void OnComplete() { (((MasterBase__Fuse_Drawing_Brush__uType*)this->__obj_type)->__fp_OnComplete)(this); }
    void OnInactive() { (((MasterBase__Fuse_Drawing_Brush__uType*)this->__obj_type)->__fp_OnInactive)(this); }
    void Register(::app::Fuse::Animations::MixerHandle__Fuse_Drawing_Brush* handle) { MasterBase__Fuse_Drawing_Brush__Register(this, handle); }
    void Unregister(::app::Fuse::Animations::MixerHandle__Fuse_Drawing_Brush* handle) { MasterBase__Fuse_Drawing_Brush__Unregister(this, handle); }
};

}}}

#include <app/Fuse.Animations.MasterBase1_GFWResult__Fuse_Drawing_Brush.h>

namespace app {
namespace Fuse {
namespace Animations {

inline ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Drawing_Brush MasterBase__Fuse_Drawing_Brush::GetFullWeight() { return MasterBase__Fuse_Drawing_Brush__GetFullWeight(this); }

}}}


#endif
