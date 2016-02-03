// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IScalingMode.h>
#include <Fuse.ITransformMode.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Scaling;}}
namespace g{namespace Fuse{struct ScalingModes__IdentityMode;}}
namespace g{namespace Uno{struct Float3;}}

namespace g{
namespace Fuse{

// private sealed class ScalingModes.IdentityMode :5266
// {
struct ScalingModes__IdentityMode_type : uType
{
    ::g::Fuse::IScalingMode interface0;
    ::g::Fuse::ITransformMode interface1;
};

ScalingModes__IdentityMode_type* ScalingModes__IdentityMode_typeof();
void ScalingModes__IdentityMode__ctor__fn(ScalingModes__IdentityMode* __this);
void ScalingModes__IdentityMode__get_Flags_fn(ScalingModes__IdentityMode* __this, int* __retval);
void ScalingModes__IdentityMode__GetScaleVector_fn(ScalingModes__IdentityMode* __this, ::g::Fuse::Scaling* t, ::g::Uno::Float3* __retval);
void ScalingModes__IdentityMode__New1_fn(ScalingModes__IdentityMode** __retval);

struct ScalingModes__IdentityMode : uObject
{
    void ctor_();
    int Flags();
    ::g::Uno::Float3 GetScaleVector(::g::Fuse::Scaling* t);
    static ScalingModes__IdentityMode* New1();
};
// }

}} // ::g::Fuse
