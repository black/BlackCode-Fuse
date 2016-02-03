// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\Triggers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IScalingMode.h>
#include <Fuse.ITransformMode.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Triggers{struct LayoutTransition__ScaleChangeMode;}}}
namespace g{namespace Fuse{struct Scaling;}}
namespace g{namespace Uno{struct Float3;}}

namespace g{
namespace Fuse{
namespace Triggers{

// private sealed class LayoutTransition.ScaleChangeMode :105
// {
struct LayoutTransition__ScaleChangeMode_type : uType
{
    ::g::Fuse::IScalingMode interface0;
    ::g::Fuse::ITransformMode interface1;
};

LayoutTransition__ScaleChangeMode_type* LayoutTransition__ScaleChangeMode_typeof();
void LayoutTransition__ScaleChangeMode__ctor__fn(LayoutTransition__ScaleChangeMode* __this);
void LayoutTransition__ScaleChangeMode__get_Flags_fn(LayoutTransition__ScaleChangeMode* __this, int* __retval);
void LayoutTransition__ScaleChangeMode__GetScaleVector_fn(LayoutTransition__ScaleChangeMode* __this, ::g::Fuse::Scaling* v, ::g::Uno::Float3* __retval);
void LayoutTransition__ScaleChangeMode__New1_fn(LayoutTransition__ScaleChangeMode** __retval);

struct LayoutTransition__ScaleChangeMode : uObject
{
    void ctor_();
    int Flags();
    ::g::Uno::Float3 GetScaleVector(::g::Fuse::Scaling* v);
    static LayoutTransition__ScaleChangeMode* New1();
};
// }

}}} // ::g::Fuse::Triggers
