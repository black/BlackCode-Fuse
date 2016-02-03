// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MIXER_HANDLE__FUSE_DRAWING_DYNAMIC_BRUSH_H__
#define __APP_FUSE_ANIMATIONS_MIXER_HANDLE__FUSE_DRAWING_DYNAMIC_BRUSH_H__

#include <app/Fuse.Animations.IMixerHandle__Fuse_Drawing_DynamicBrush.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase__Fuse_Drawing_DynamicBrush; } } }
namespace app { namespace Fuse { namespace Drawing { struct DynamicBrush; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MixerHandle__Fuse_Drawing_DynamicBrush;

struct MixerHandle__Fuse_Drawing_DynamicBrush__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerHandle__Fuse_Drawing_DynamicBrush __interface_0;
};

MixerHandle__Fuse_Drawing_DynamicBrush__uType* MixerHandle__Fuse_Drawing_DynamicBrush__typeof();

void MixerHandle__Fuse_Drawing_DynamicBrush___ObjInit(MixerHandle__Fuse_Drawing_DynamicBrush* __this, ::app::Fuse::Animations::MasterBase__Fuse_Drawing_DynamicBrush* master, int mode, int priority);
bool MixerHandle__Fuse_Drawing_DynamicBrush__get_HasValue(MixerHandle__Fuse_Drawing_DynamicBrush* __this);
int MixerHandle__Fuse_Drawing_DynamicBrush__get_MixOp(MixerHandle__Fuse_Drawing_DynamicBrush* __this);
int MixerHandle__Fuse_Drawing_DynamicBrush__get_Priority(MixerHandle__Fuse_Drawing_DynamicBrush* __this);
::app::Fuse::Drawing::DynamicBrush* MixerHandle__Fuse_Drawing_DynamicBrush__get_RestValue(MixerHandle__Fuse_Drawing_DynamicBrush* __this);
MixerHandle__Fuse_Drawing_DynamicBrush* MixerHandle__Fuse_Drawing_DynamicBrush__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Drawing_DynamicBrush* master, int mode, int priority);
void MixerHandle__Fuse_Drawing_DynamicBrush__Set(MixerHandle__Fuse_Drawing_DynamicBrush* __this, ::app::Fuse::Drawing::DynamicBrush* value, float strength);
void MixerHandle__Fuse_Drawing_DynamicBrush__set_MixOp(MixerHandle__Fuse_Drawing_DynamicBrush* __this, int value);
void MixerHandle__Fuse_Drawing_DynamicBrush__set_Priority(MixerHandle__Fuse_Drawing_DynamicBrush* __this, int value);
void MixerHandle__Fuse_Drawing_DynamicBrush__Unregister(MixerHandle__Fuse_Drawing_DynamicBrush* __this);

struct MixerHandle__Fuse_Drawing_DynamicBrush : ::uObject
{
    ::uStrong< ::app::Fuse::Drawing::DynamicBrush*> Value;
    float Strength;
    bool _hasValue;
    ::uStrong< ::app::Fuse::Animations::MasterBase__Fuse_Drawing_DynamicBrush*> Master;
    int _MixOp;
    int _Priority;

    void _ObjInit(::app::Fuse::Animations::MasterBase__Fuse_Drawing_DynamicBrush* master, int mode, int priority) { MixerHandle__Fuse_Drawing_DynamicBrush___ObjInit(this, master, mode, priority); }
    bool HasValue() { return MixerHandle__Fuse_Drawing_DynamicBrush__get_HasValue(this); }
    int MixOp() { return MixerHandle__Fuse_Drawing_DynamicBrush__get_MixOp(this); }
    int Priority() { return MixerHandle__Fuse_Drawing_DynamicBrush__get_Priority(this); }
    ::app::Fuse::Drawing::DynamicBrush* RestValue() { return MixerHandle__Fuse_Drawing_DynamicBrush__get_RestValue(this); }
    void Set(::app::Fuse::Drawing::DynamicBrush* value, float strength) { MixerHandle__Fuse_Drawing_DynamicBrush__Set(this, value, strength); }
    void MixOp(int value) { MixerHandle__Fuse_Drawing_DynamicBrush__set_MixOp(this, value); }
    void Priority(int value) { MixerHandle__Fuse_Drawing_DynamicBrush__set_Priority(this, value); }
    void Unregister() { MixerHandle__Fuse_Drawing_DynamicBrush__Unregister(this); }
};

}}}


#endif
