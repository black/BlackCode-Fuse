// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_SCALE_H__
#define __APP_FUSE_ANIMATIONS_SCALE_H__

#include <app/Fuse.Animations.TransformAnimator__Fuse_Scaling.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct Scaling; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Scale;

struct Scale__uType : ::app::Fuse::Animations::TransformAnimator__Fuse_Scaling__uType
{
};

Scale__uType* Scale__typeof();

void Scale___ObjInit_3(Scale* __this);
float Scale__get_Factor(Scale* __this);
Scale* Scale__New_1(::uStatic* __this);
void Scale__set_Factor(Scale* __this, float value);
void Scale__Update(Scale* __this, ::app::Fuse::Node* elm, ::app::Fuse::Scaling* t, ::app::Uno::Float4 value);

struct Scale : ::app::Fuse::Animations::TransformAnimator__Fuse_Scaling
{
    void _ObjInit_3() { Scale___ObjInit_3(this); }
    float Factor() { return Scale__get_Factor(this); }
    void Factor(float value) { Scale__set_Factor(this, value); }
};

}}}


#endif
