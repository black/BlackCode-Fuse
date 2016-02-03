// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MIXER_HANDLE__FUSE_FONT_H__
#define __APP_FUSE_ANIMATIONS_MIXER_HANDLE__FUSE_FONT_H__

#include <app/Fuse.Animations.IMixerHandle__Fuse_Font.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase__Fuse_Font; } } }
namespace app { namespace Fuse { struct Font; } }

namespace app {
namespace Fuse {
namespace Animations {

struct MixerHandle__Fuse_Font;

struct MixerHandle__Fuse_Font__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerHandle__Fuse_Font __interface_0;
};

MixerHandle__Fuse_Font__uType* MixerHandle__Fuse_Font__typeof();

void MixerHandle__Fuse_Font___ObjInit(MixerHandle__Fuse_Font* __this, ::app::Fuse::Animations::MasterBase__Fuse_Font* master, int mode, int priority);
bool MixerHandle__Fuse_Font__get_HasValue(MixerHandle__Fuse_Font* __this);
int MixerHandle__Fuse_Font__get_MixOp(MixerHandle__Fuse_Font* __this);
int MixerHandle__Fuse_Font__get_Priority(MixerHandle__Fuse_Font* __this);
::app::Fuse::Font* MixerHandle__Fuse_Font__get_RestValue(MixerHandle__Fuse_Font* __this);
MixerHandle__Fuse_Font* MixerHandle__Fuse_Font__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Font* master, int mode, int priority);
void MixerHandle__Fuse_Font__Set(MixerHandle__Fuse_Font* __this, ::app::Fuse::Font* value, float strength);
void MixerHandle__Fuse_Font__set_MixOp(MixerHandle__Fuse_Font* __this, int value);
void MixerHandle__Fuse_Font__set_Priority(MixerHandle__Fuse_Font* __this, int value);
void MixerHandle__Fuse_Font__Unregister(MixerHandle__Fuse_Font* __this);

struct MixerHandle__Fuse_Font : ::uObject
{
    ::uStrong< ::app::Fuse::Font*> Value;
    float Strength;
    bool _hasValue;
    ::uStrong< ::app::Fuse::Animations::MasterBase__Fuse_Font*> Master;
    int _MixOp;
    int _Priority;

    void _ObjInit(::app::Fuse::Animations::MasterBase__Fuse_Font* master, int mode, int priority) { MixerHandle__Fuse_Font___ObjInit(this, master, mode, priority); }
    bool HasValue() { return MixerHandle__Fuse_Font__get_HasValue(this); }
    int MixOp() { return MixerHandle__Fuse_Font__get_MixOp(this); }
    int Priority() { return MixerHandle__Fuse_Font__get_Priority(this); }
    ::app::Fuse::Font* RestValue() { return MixerHandle__Fuse_Font__get_RestValue(this); }
    void Set(::app::Fuse::Font* value, float strength) { MixerHandle__Fuse_Font__Set(this, value, strength); }
    void MixOp(int value) { MixerHandle__Fuse_Font__set_MixOp(this, value); }
    void Priority(int value) { MixerHandle__Fuse_Font__set_Priority(this, value); }
    void Unregister() { MixerHandle__Fuse_Font__Unregister(this); }
};

}}}


#endif
