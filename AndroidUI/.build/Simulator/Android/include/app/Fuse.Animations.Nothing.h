// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_NOTHING_H__
#define __APP_FUSE_ANIMATIONS_NOTHING_H__

#include <app/Fuse.Animations.TrackAnimator.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct AnimatorState; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct Nothing;

struct Nothing__uType : ::app::Fuse::Animations::TrackAnimator__uType
{
};

Nothing__uType* Nothing__typeof();

void Nothing___ObjInit_2(Nothing* __this);
::app::Fuse::Animations::AnimatorState* Nothing__CreateState(Nothing* __this, ::app::Fuse::Animations::CreateStateParams* p);
Nothing* Nothing__New_1(::uStatic* __this);

struct Nothing : ::app::Fuse::Animations::TrackAnimator
{
    void _ObjInit_2() { Nothing___ObjInit_2(this); }
};

}}}


#endif
