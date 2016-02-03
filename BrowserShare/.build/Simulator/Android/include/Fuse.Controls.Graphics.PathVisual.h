// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Graphics.PathShapeVisual-1.h>
#include <Fuse.Controls.Path.h>
#include <Fuse.Scripting.INameScope.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{namespace Controls{namespace Graphics{struct PathVisual;}}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometryRenderer;}}}
namespace g{namespace Uno{struct Float4x4;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Graphics{

// public sealed class PathVisual :506
// {
::g::Fuse::Controls::Graphics::PathShapeVisual_type* PathVisual_typeof();
void PathVisual__ctor_5_fn(PathVisual* __this);
void PathVisual__AlignMatrix_fn(PathVisual* __this, ::g::Uno::Float4x4* b, ::g::Uno::Float4x4* __retval);
void PathVisual__GetMarginSize_fn(PathVisual* __this, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval);
void PathVisual__GetNaturalContentSize_fn(PathVisual* __this, ::g::Uno::Float2* __retval);
void PathVisual__get_LocalRenderBounds_fn(PathVisual* __this, ::g::Uno::Rect* __retval);
void PathVisual__New1_fn(PathVisual** __retval);
void PathVisual__OnArrangeMarginBox_fn(PathVisual* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval);
void PathVisual__get_Path_fn(PathVisual* __this, ::g::Fuse::Controls::Path** __retval);
void PathVisual__UpdatePath_fn(PathVisual* __this, ::g::Fuse::Drawing::PathGeometryRenderer* renderer);

struct PathVisual : ::g::Fuse::Controls::Graphics::PathShapeVisual
{
    ::g::Uno::Float2 _origin;
    ::g::Uno::Float2 _postScale;

    void ctor_5();
    ::g::Uno::Float2 GetNaturalContentSize();
    ::g::Fuse::Controls::Path* Path();
    static PathVisual* New1();
};
// }

}}}} // ::g::Fuse::Controls::Graphics
