// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Shapes\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Scripting.INameScope.h>
#include <Fuse.Shapes.PathShape.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{namespace Drawing{struct PathGeometry;}}}
namespace g{namespace Fuse{namespace Internal{struct SizingContainer;}}}
namespace g{namespace Fuse{namespace Shapes{struct Path;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{struct Float4x4;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Shapes{

// public sealed class Path :287
// {
::g::Fuse::Shapes::PathShape_type* Path_typeof();
void Path__ctor_3_fn(Path* __this);
void Path__AlignMatrix_fn(Path* __this, ::g::Uno::Float4x4* b, ::g::Uno::Float4x4* __retval);
void Path__ArrangePaddingBox_fn(Path* __this, ::g::Uno::Float2* size, int* flags);
void Path__CalcRenderBounds_fn(Path* __this, ::g::Uno::Rect* __retval);
void Path__get_ContentAlignment_fn(Path* __this, int* __retval);
void Path__set_ContentAlignment_fn(Path* __this, int* value);
void Path__get_Data_fn(Path* __this, uString** __retval);
void Path__set_Data_fn(Path* __this, uString* value);
void Path__get_FillRule_fn(Path* __this, int* __retval);
void Path__set_FillRule_fn(Path* __this, int* value);
void Path__get_FitMode_fn(Path* __this, int* __retval);
void Path__set_FitMode_fn(Path* __this, int* value);
void Path__get_Geometry_fn(Path* __this, ::g::Fuse::Drawing::PathGeometry** __retval);
void Path__set_Geometry_fn(Path* __this, ::g::Fuse::Drawing::PathGeometry* value);
void Path__GetContentSize_fn(Path* __this, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval);
void Path__GetNaturalContentSize_fn(Path* __this, ::g::Uno::Float2* __retval);
void Path__New1_fn(Path** __retval);
void Path__OnDraw_fn(Path* __this, ::g::Fuse::DrawContext* dc);
void Path__OnSizingChanged_fn(Path* __this);
void Path__get_ScaleMode_fn(Path* __this, int* __retval);
void Path__set_ScaleMode_fn(Path* __this, int* value);
void Path__get_StretchDirection_fn(Path* __this, int* __retval);
void Path__set_StretchDirection_fn(Path* __this, int* value);
void Path__get_StretchMode_fn(Path* __this, int* __retval);
void Path__set_StretchMode_fn(Path* __this, int* value);
void Path__UpdatePath_fn(Path* __this);

struct Path : ::g::Fuse::Shapes::PathShape
{
    int _fillRule;
    int _fitMode;
    ::g::Uno::Float2 _origin;
    ::g::Uno::Float2 _postScale;
    int _scaleMode;
    uStrong< ::g::Fuse::Internal::SizingContainer*> sizing;

    void ctor_3();
    ::g::Uno::Float4x4 AlignMatrix(::g::Uno::Float4x4 b);
    int ContentAlignment();
    void ContentAlignment(int value);
    uString* Data();
    void Data(uString* value);
    int FillRule();
    void FillRule(int value);
    int FitMode();
    void FitMode(int value);
    ::g::Fuse::Drawing::PathGeometry* Geometry();
    void Geometry(::g::Fuse::Drawing::PathGeometry* value);
    ::g::Uno::Float2 GetNaturalContentSize();
    void OnSizingChanged();
    int ScaleMode();
    void ScaleMode(int value);
    int StretchDirection();
    void StretchDirection(int value);
    int StretchMode();
    void StretchMode(int value);
    static Path* New1();
};
// }

}}} // ::g::Fuse::Shapes
