// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_DISCRETE_TRACK_CHANGE_STATE__UNO_PLATFORM_I_O_S_STAT_4805B628_H__
#define __APP_FUSE_ANIMATIONS_DISCRETE_TRACK_CHANGE_STATE__UNO_PLATFORM_I_O_S_STAT_4805B628_H__

#include <app/Fuse.Animations.TrackAnimatorState.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct Change__Uno_Platform_iOS_StatusBarStyle; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct DiscreteTrackChangeState__Uno_Platform_iOS_StatusBarStyle;

struct DiscreteTrackChangeState__Uno_Platform_iOS_StatusBarStyle__uType : ::app::Fuse::Animations::TrackAnimatorState__uType
{
};

DiscreteTrackChangeState__Uno_Platform_iOS_StatusBarStyle__uType* DiscreteTrackChangeState__Uno_Platform_iOS_StatusBarStyle__typeof();

void DiscreteTrackChangeState__Uno_Platform_iOS_StatusBarStyle___ObjInit_2(DiscreteTrackChangeState__Uno_Platform_iOS_StatusBarStyle* __this, ::app::Fuse::Animations::Change__Uno_Platform_iOS_StatusBarStyle* animator, ::app::Fuse::Animations::CreateStateParams* p);
void DiscreteTrackChangeState__Uno_Platform_iOS_StatusBarStyle__Disable(DiscreteTrackChangeState__Uno_Platform_iOS_StatusBarStyle* __this);
DiscreteTrackChangeState__Uno_Platform_iOS_StatusBarStyle* DiscreteTrackChangeState__Uno_Platform_iOS_StatusBarStyle__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Uno_Platform_iOS_StatusBarStyle* animator, ::app::Fuse::Animations::CreateStateParams* p);
void DiscreteTrackChangeState__Uno_Platform_iOS_StatusBarStyle__SeekObjectValue(DiscreteTrackChangeState__Uno_Platform_iOS_StatusBarStyle* __this, ::uObject* value, float strength);

struct DiscreteTrackChangeState__Uno_Platform_iOS_StatusBarStyle : ::app::Fuse::Animations::TrackAnimatorState
{
    ::uStrong< ::uObject*> mixHandle;
    ::uStrong< ::app::Fuse::Animations::Change__Uno_Platform_iOS_StatusBarStyle*> Animator_1;

    void _ObjInit_2(::app::Fuse::Animations::Change__Uno_Platform_iOS_StatusBarStyle* animator, ::app::Fuse::Animations::CreateStateParams* p) { DiscreteTrackChangeState__Uno_Platform_iOS_StatusBarStyle___ObjInit_2(this, animator, p); }
};

}}}


#endif
