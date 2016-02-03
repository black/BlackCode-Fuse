// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MIXER_HANDLE__FUSE_RESOURCES_IMAGE_SOURCE_H__
#define __APP_FUSE_ANIMATIONS_MIXER_HANDLE__FUSE_RESOURCES_IMAGE_SOURCE_H__

#include <app/Fuse.Animations.IMixerHandle__Fuse_Resources_ImageSource.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase__Fuse_Resources_ImageSource; } } }
namespace app { namespace Fuse { namespace Resources { struct ImageSource; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MixerHandle__Fuse_Resources_ImageSource;

struct MixerHandle__Fuse_Resources_ImageSource__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerHandle__Fuse_Resources_ImageSource __interface_0;
};

MixerHandle__Fuse_Resources_ImageSource__uType* MixerHandle__Fuse_Resources_ImageSource__typeof();

void MixerHandle__Fuse_Resources_ImageSource___ObjInit(MixerHandle__Fuse_Resources_ImageSource* __this, ::app::Fuse::Animations::MasterBase__Fuse_Resources_ImageSource* master, int mode, int priority);
bool MixerHandle__Fuse_Resources_ImageSource__get_HasValue(MixerHandle__Fuse_Resources_ImageSource* __this);
int MixerHandle__Fuse_Resources_ImageSource__get_MixOp(MixerHandle__Fuse_Resources_ImageSource* __this);
int MixerHandle__Fuse_Resources_ImageSource__get_Priority(MixerHandle__Fuse_Resources_ImageSource* __this);
::app::Fuse::Resources::ImageSource* MixerHandle__Fuse_Resources_ImageSource__get_RestValue(MixerHandle__Fuse_Resources_ImageSource* __this);
MixerHandle__Fuse_Resources_ImageSource* MixerHandle__Fuse_Resources_ImageSource__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Resources_ImageSource* master, int mode, int priority);
void MixerHandle__Fuse_Resources_ImageSource__Set(MixerHandle__Fuse_Resources_ImageSource* __this, ::app::Fuse::Resources::ImageSource* value, float strength);
void MixerHandle__Fuse_Resources_ImageSource__set_MixOp(MixerHandle__Fuse_Resources_ImageSource* __this, int value);
void MixerHandle__Fuse_Resources_ImageSource__set_Priority(MixerHandle__Fuse_Resources_ImageSource* __this, int value);
void MixerHandle__Fuse_Resources_ImageSource__Unregister(MixerHandle__Fuse_Resources_ImageSource* __this);

struct MixerHandle__Fuse_Resources_ImageSource : ::uObject
{
    ::uStrong< ::app::Fuse::Resources::ImageSource*> Value;
    float Strength;
    bool _hasValue;
    ::uStrong< ::app::Fuse::Animations::MasterBase__Fuse_Resources_ImageSource*> Master;
    int _MixOp;
    int _Priority;

    void _ObjInit(::app::Fuse::Animations::MasterBase__Fuse_Resources_ImageSource* master, int mode, int priority) { MixerHandle__Fuse_Resources_ImageSource___ObjInit(this, master, mode, priority); }
    bool HasValue() { return MixerHandle__Fuse_Resources_ImageSource__get_HasValue(this); }
    int MixOp() { return MixerHandle__Fuse_Resources_ImageSource__get_MixOp(this); }
    int Priority() { return MixerHandle__Fuse_Resources_ImageSource__get_Priority(this); }
    ::app::Fuse::Resources::ImageSource* RestValue() { return MixerHandle__Fuse_Resources_ImageSource__get_RestValue(this); }
    void Set(::app::Fuse::Resources::ImageSource* value, float strength) { MixerHandle__Fuse_Resources_ImageSource__Set(this, value, strength); }
    void MixOp(int value) { MixerHandle__Fuse_Resources_ImageSource__set_MixOp(this, value); }
    void Priority(int value) { MixerHandle__Fuse_Resources_ImageSource__set_Priority(this, value); }
    void Unregister() { MixerHandle__Fuse_Resources_ImageSource__Unregister(this); }
};

}}}


#endif
