// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_NOTHING_ANIMATOR_STATE_H__
#define __APP_FUSE_ANIMATIONS_NOTHING_ANIMATOR_STATE_H__

#include <app/Fuse.Animations.TrackAnimatorState.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Fuse { namespace Animations { struct Nothing; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct NothingAnimatorState;

struct NothingAnimatorState__uType : ::app::Fuse::Animations::TrackAnimatorState__uType
{
};

NothingAnimatorState__uType* NothingAnimatorState__typeof();

void NothingAnimatorState___ObjInit_2(NothingAnimatorState* __this, ::app::Fuse::Animations::Nothing* animator, ::app::Fuse::Animations::CreateStateParams* p);
NothingAnimatorState* NothingAnimatorState__New_1(::uStatic* __this, ::app::Fuse::Animations::Nothing* animator, ::app::Fuse::Animations::CreateStateParams* p);

struct NothingAnimatorState : ::app::Fuse::Animations::TrackAnimatorState
{
    void _ObjInit_2(::app::Fuse::Animations::Nothing* animator, ::app::Fuse::Animations::CreateStateParams* p) { NothingAnimatorState___ObjInit_2(this, animator, p); }
};

}}}


#endif
