// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONTINUOUS_TRACK_CHANGE_STATE__UNO_PLATFORM_I_O_S_ST_DDBE149_H__
#define __APP_FUSE_ANIMATIONS_CONTINUOUS_TRACK_CHANGE_STATE__UNO_PLATFORM_I_O_S_ST_DDBE149_H__

#include <app/Fuse.Animations.TrackAnimatorState.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct Change__Uno_Platform_iOS_StatusBarStyle; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct ContinuousTrackChangeState__Uno_Platform_iOS_StatusBarStyle;

struct ContinuousTrackChangeState__Uno_Platform_iOS_StatusBarStyle__uType : ::app::Fuse::Animations::TrackAnimatorState__uType
{
};

ContinuousTrackChangeState__Uno_Platform_iOS_StatusBarStyle__uType* ContinuousTrackChangeState__Uno_Platform_iOS_StatusBarStyle__typeof();

void ContinuousTrackChangeState__Uno_Platform_iOS_StatusBarStyle___ObjInit_2(ContinuousTrackChangeState__Uno_Platform_iOS_StatusBarStyle* __this, ::app::Fuse::Animations::Change__Uno_Platform_iOS_StatusBarStyle* animator, ::app::Fuse::Animations::CreateStateParams* p);
void ContinuousTrackChangeState__Uno_Platform_iOS_StatusBarStyle__Disable(ContinuousTrackChangeState__Uno_Platform_iOS_StatusBarStyle* __this);
ContinuousTrackChangeState__Uno_Platform_iOS_StatusBarStyle* ContinuousTrackChangeState__Uno_Platform_iOS_StatusBarStyle__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Uno_Platform_iOS_StatusBarStyle* animator, ::app::Fuse::Animations::CreateStateParams* p);
void ContinuousTrackChangeState__Uno_Platform_iOS_StatusBarStyle__SeekValue(ContinuousTrackChangeState__Uno_Platform_iOS_StatusBarStyle* __this, ::app::Uno::Float4 value, float strength);

struct ContinuousTrackChangeState__Uno_Platform_iOS_StatusBarStyle : ::app::Fuse::Animations::TrackAnimatorState
{
    ::uStrong< ::uObject*> mixHandle;
    ::uStrong< ::app::Fuse::Animations::Change__Uno_Platform_iOS_StatusBarStyle*> Animator_1;

    void _ObjInit_2(::app::Fuse::Animations::Change__Uno_Platform_iOS_StatusBarStyle* animator, ::app::Fuse::Animations::CreateStateParams* p) { ContinuousTrackChangeState__Uno_Platform_iOS_StatusBarStyle___ObjInit_2(this, animator, p); }
};

}}}


#endif
