// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONTINUOUS_TRACK_CHANGE_STATE__UNO_U_X_FILE_SOURCE_H__
#define __APP_FUSE_ANIMATIONS_CONTINUOUS_TRACK_CHANGE_STATE__UNO_U_X_FILE_SOURCE_H__

#include <app/Fuse.Animations.TrackAnimatorState.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct Change__Uno_UX_FileSource; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct ContinuousTrackChangeState__Uno_UX_FileSource;

struct ContinuousTrackChangeState__Uno_UX_FileSource__uType : ::app::Fuse::Animations::TrackAnimatorState__uType
{
};

ContinuousTrackChangeState__Uno_UX_FileSource__uType* ContinuousTrackChangeState__Uno_UX_FileSource__typeof();

void ContinuousTrackChangeState__Uno_UX_FileSource___ObjInit_2(ContinuousTrackChangeState__Uno_UX_FileSource* __this, ::app::Fuse::Animations::Change__Uno_UX_FileSource* animator, ::app::Fuse::Animations::CreateStateParams* p);
void ContinuousTrackChangeState__Uno_UX_FileSource__Disable(ContinuousTrackChangeState__Uno_UX_FileSource* __this);
ContinuousTrackChangeState__Uno_UX_FileSource* ContinuousTrackChangeState__Uno_UX_FileSource__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Uno_UX_FileSource* animator, ::app::Fuse::Animations::CreateStateParams* p);
void ContinuousTrackChangeState__Uno_UX_FileSource__SeekValue(ContinuousTrackChangeState__Uno_UX_FileSource* __this, ::app::Uno::Float4 value, float strength);

struct ContinuousTrackChangeState__Uno_UX_FileSource : ::app::Fuse::Animations::TrackAnimatorState
{
    ::uStrong< ::uObject*> mixHandle;
    ::uStrong< ::app::Fuse::Animations::Change__Uno_UX_FileSource*> Animator_1;

    void _ObjInit_2(::app::Fuse::Animations::Change__Uno_UX_FileSource* animator, ::app::Fuse::Animations::CreateStateParams* p) { ContinuousTrackChangeState__Uno_UX_FileSource___ObjInit_2(this, animator, p); }
};

}}}


#endif
