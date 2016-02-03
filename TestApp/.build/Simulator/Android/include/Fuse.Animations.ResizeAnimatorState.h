// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.TrackAnimatorState.h>
namespace g{namespace Fuse{namespace Animations{struct CreateStateParams;}}}
namespace g{namespace Fuse{namespace Animations{struct Resize;}}}
namespace g{namespace Fuse{namespace Animations{struct ResizeAnimatorState;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Animations{

// internal sealed class ResizeAnimatorState :2440
// {
::g::Fuse::Animations::TrackAnimatorState_type* ResizeAnimatorState_typeof();
void ResizeAnimatorState__ctor_2_fn(ResizeAnimatorState* __this, ::g::Fuse::Animations::Resize* r, ::g::Fuse::Animations::CreateStateParams* p);
void ResizeAnimatorState__New1_fn(::g::Fuse::Animations::Resize* r, ::g::Fuse::Animations::CreateStateParams* p, ResizeAnimatorState** __retval);
void ResizeAnimatorState__SeekValue_fn(ResizeAnimatorState* __this, ::g::Uno::Float4* value, float* strength);

struct ResizeAnimatorState : ::g::Fuse::Animations::TrackAnimatorState
{
    uStrong< ::g::Fuse::Animations::Resize*> _resize;

    void ctor_2(::g::Fuse::Animations::Resize* r, ::g::Fuse::Animations::CreateStateParams* p);
    static ResizeAnimatorState* New1(::g::Fuse::Animations::Resize* r, ::g::Fuse::Animations::CreateStateParams* p);
};
// }

}}} // ::g::Fuse::Animations
