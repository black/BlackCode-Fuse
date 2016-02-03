// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.18.8\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Internal.Blender-1.h>
#include <Uno.Float.h>
namespace g{namespace Fuse{namespace Internal{struct FloatBlender;}}}

namespace g{
namespace Fuse{
namespace Internal{

// internal sealed class FloatBlender :58
// {
::g::Fuse::Internal::Blender_type* FloatBlender_typeof();
void FloatBlender__ctor_1_fn(FloatBlender* __this);
void FloatBlender__Add_fn(FloatBlender* __this, float* a, float* b, float* __retval);
void FloatBlender__Length_fn(FloatBlender* __this, float* a, double* __retval);
void FloatBlender__Lerp_fn(FloatBlender* __this, float* a, float* b, double* d, float* __retval);
void FloatBlender__New1_fn(FloatBlender** __retval);
void FloatBlender__get_One_fn(FloatBlender* __this, float* __retval);
void FloatBlender__Sub_fn(FloatBlender* __this, float* a, float* b, float* __retval);
void FloatBlender__ToUnit_fn(FloatBlender* __this, float* a, double* length, float* __retval);
void FloatBlender__Weight_fn(FloatBlender* __this, float* v, double* w, float* __retval);
void FloatBlender__get_Zero_fn(FloatBlender* __this, float* __retval);

struct FloatBlender : ::g::Fuse::Internal::Blender
{
    void ctor_1();
    static FloatBlender* New1();
};
// }

}}} // ::g::Fuse::Internal
