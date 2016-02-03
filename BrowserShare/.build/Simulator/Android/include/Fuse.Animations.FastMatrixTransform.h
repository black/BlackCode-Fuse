// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Transform.h>
namespace g{namespace Fuse{namespace Animations{struct FastMatrixTransform;}}}
namespace g{namespace Fuse{struct FastMatrix;}}

namespace g{
namespace Fuse{
namespace Animations{

// internal sealed class FastMatrixTransform :1737
// {
::g::Fuse::Transform_type* FastMatrixTransform_typeof();
void FastMatrixTransform__ctor_1_fn(FastMatrixTransform* __this);
void FastMatrixTransform__AppendTo_fn(FastMatrixTransform* __this, ::g::Fuse::FastMatrix* m, float* weight);
void FastMatrixTransform__Changed_fn(FastMatrixTransform* __this);
void FastMatrixTransform__get_IsFlat_fn(FastMatrixTransform* __this, bool* __retval);
void FastMatrixTransform__New1_fn(FastMatrixTransform** __retval);
void FastMatrixTransform__PrependTo_fn(FastMatrixTransform* __this, ::g::Fuse::FastMatrix* m);

struct FastMatrixTransform : ::g::Fuse::Transform
{
    uStrong< ::g::Fuse::FastMatrix*> Matrix;

    void ctor_1();
    void Changed();
    static FastMatrixTransform* New1();
};
// }

}}} // ::g::Fuse::Animations
