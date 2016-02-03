// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MIXER_HANDLE__UNO_U_X_FILE_SOURCE_H__
#define __APP_FUSE_ANIMATIONS_MIXER_HANDLE__UNO_U_X_FILE_SOURCE_H__

#include <app/Fuse.Animations.IMixerHandle__Uno_UX_FileSource.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase__Uno_UX_FileSource; } } }
namespace app { namespace Uno { namespace UX { struct FileSource; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MixerHandle__Uno_UX_FileSource;

struct MixerHandle__Uno_UX_FileSource__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerHandle__Uno_UX_FileSource __interface_0;
};

MixerHandle__Uno_UX_FileSource__uType* MixerHandle__Uno_UX_FileSource__typeof();

void MixerHandle__Uno_UX_FileSource___ObjInit(MixerHandle__Uno_UX_FileSource* __this, ::app::Fuse::Animations::MasterBase__Uno_UX_FileSource* master, int mode, int priority);
bool MixerHandle__Uno_UX_FileSource__get_HasValue(MixerHandle__Uno_UX_FileSource* __this);
int MixerHandle__Uno_UX_FileSource__get_MixOp(MixerHandle__Uno_UX_FileSource* __this);
int MixerHandle__Uno_UX_FileSource__get_Priority(MixerHandle__Uno_UX_FileSource* __this);
::app::Uno::UX::FileSource* MixerHandle__Uno_UX_FileSource__get_RestValue(MixerHandle__Uno_UX_FileSource* __this);
MixerHandle__Uno_UX_FileSource* MixerHandle__Uno_UX_FileSource__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Uno_UX_FileSource* master, int mode, int priority);
void MixerHandle__Uno_UX_FileSource__Set(MixerHandle__Uno_UX_FileSource* __this, ::app::Uno::UX::FileSource* value, float strength);
void MixerHandle__Uno_UX_FileSource__set_MixOp(MixerHandle__Uno_UX_FileSource* __this, int value);
void MixerHandle__Uno_UX_FileSource__set_Priority(MixerHandle__Uno_UX_FileSource* __this, int value);
void MixerHandle__Uno_UX_FileSource__Unregister(MixerHandle__Uno_UX_FileSource* __this);

struct MixerHandle__Uno_UX_FileSource : ::uObject
{
    ::uStrong< ::app::Uno::UX::FileSource*> Value;
    float Strength;
    bool _hasValue;
    ::uStrong< ::app::Fuse::Animations::MasterBase__Uno_UX_FileSource*> Master;
    int _MixOp;
    int _Priority;

    void _ObjInit(::app::Fuse::Animations::MasterBase__Uno_UX_FileSource* master, int mode, int priority) { MixerHandle__Uno_UX_FileSource___ObjInit(this, master, mode, priority); }
    bool HasValue() { return MixerHandle__Uno_UX_FileSource__get_HasValue(this); }
    int MixOp() { return MixerHandle__Uno_UX_FileSource__get_MixOp(this); }
    int Priority() { return MixerHandle__Uno_UX_FileSource__get_Priority(this); }
    ::app::Uno::UX::FileSource* RestValue() { return MixerHandle__Uno_UX_FileSource__get_RestValue(this); }
    void Set(::app::Uno::UX::FileSource* value, float strength) { MixerHandle__Uno_UX_FileSource__Set(this, value, strength); }
    void MixOp(int value) { MixerHandle__Uno_UX_FileSource__set_MixOp(this, value); }
    void Priority(int value) { MixerHandle__Uno_UX_FileSource__set_Priority(this, value); }
    void Unregister() { MixerHandle__Uno_UX_FileSource__Unregister(this); }
};

}}}


#endif
