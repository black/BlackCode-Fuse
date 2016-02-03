// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.LineTo.h>
namespace g{namespace Fuse{namespace Drawing{struct PathGeometry;}}}
namespace g{namespace Fuse{namespace Drawing{struct VerticalLineTo;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal sealed class VerticalLineTo :1244
// {
::g::Fuse::Drawing::PathGeometry_type* VerticalLineTo_typeof();
void VerticalLineTo__ctor_3_fn(VerticalLineTo* __this, ::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* lastPosition, float* y);
void VerticalLineTo__New4_fn(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2* lastPosition, float* y, VerticalLineTo** __retval);
void VerticalLineTo__Serialize_fn(VerticalLineTo* __this, uString** __retval);

struct VerticalLineTo : ::g::Fuse::Drawing::LineTo
{
    float _y;

    void ctor_3(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 lastPosition, float y);
    static VerticalLineTo* New4(::g::Fuse::Drawing::PathGeometry* prev, ::g::Uno::Float2 lastPosition, float y);
};
// }

}}} // ::g::Fuse::Drawing
