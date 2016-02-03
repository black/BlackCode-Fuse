// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_RESIZE_ANIMATOR_STATE_H__
#define __APP_FUSE_ANIMATIONS_RESIZE_ANIMATOR_STATE_H__

#include <app/Fuse.Animations.TrackAnimatorState.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Fuse { namespace Animations { struct Resize; } } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct ResizeAnimatorState;

struct ResizeAnimatorState__uType : ::app::Fuse::Animations::TrackAnimatorState__uType
{
};

ResizeAnimatorState__uType* ResizeAnimatorState__typeof();

void ResizeAnimatorState___ObjInit_2(ResizeAnimatorState* __this, ::app::Fuse::Animations::Resize* r, ::app::Fuse::Animations::CreateStateParams* p);
ResizeAnimatorState* ResizeAnimatorState__New_1(::uStatic* __this, ::app::Fuse::Animations::Resize* r, ::app::Fuse::Animations::CreateStateParams* p);
void ResizeAnimatorState__SeekValue(ResizeAnimatorState* __this, ::app::Uno::Float4 value, float strength);

struct ResizeAnimatorState : ::app::Fuse::Animations::TrackAnimatorState
{
    ::uStrong< ::app::Fuse::Animations::Resize*> _resize;

    void _ObjInit_2(::app::Fuse::Animations::Resize* r, ::app::Fuse::Animations::CreateStateParams* p) { ResizeAnimatorState___ObjInit_2(this, r, p); }
};

}}}


#endif
