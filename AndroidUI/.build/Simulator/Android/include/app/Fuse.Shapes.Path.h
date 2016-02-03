// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Shapes\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SHAPES_PATH_H__
#define __APP_FUSE_SHAPES_PATH_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Shapes.PathShape.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Uno.Float2.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct PathGeometry; } } }
namespace app { namespace Fuse { namespace Internal { struct SizingContainer; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { struct Float4x4; } }
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Fuse {
namespace Shapes {

struct Path;

struct Path__uType : ::app::Fuse::Shapes::PathShape__uType
{
};

Path__uType* Path__typeof();

void Path___ObjInit_3(Path* __this);
::app::Uno::Float4x4 Path__AlignMatrix(Path* __this, ::app::Uno::Float4x4 b);
void Path__ArrangePaddingBox(Path* __this, ::app::Uno::Float2 size);
::app::Uno::Rect Path__CalcRenderBounds(Path* __this);
int Path__get_ContentAlignment(Path* __this);
::uString* Path__get_Data(Path* __this);
int Path__get_FillRule(Path* __this);
int Path__get_FitMode(Path* __this);
::app::Fuse::Drawing::PathGeometry* Path__get_Geometry(Path* __this);
int Path__get_ScaleMode(Path* __this);
int Path__get_StretchDirection(Path* __this);
int Path__get_StretchMode(Path* __this);
::app::Uno::Float2 Path__GetContentSize(Path* __this, ::app::Uno::Float2 fillSize, int fillSet);
::app::Uno::Float2 Path__GetNaturalContentSize(Path* __this);
Path* Path__New_1(::uStatic* __this);
void Path__OnDraw(Path* __this, ::app::Fuse::DrawContext* dc);
void Path__OnSizingChanged(Path* __this);
void Path__set_ContentAlignment(Path* __this, int value);
void Path__set_Data(Path* __this, ::uString* value);
void Path__set_FillRule(Path* __this, int value);
void Path__set_FitMode(Path* __this, int value);
void Path__set_Geometry(Path* __this, ::app::Fuse::Drawing::PathGeometry* value);
void Path__set_ScaleMode(Path* __this, int value);
void Path__set_StretchDirection(Path* __this, int value);
void Path__set_StretchMode(Path* __this, int value);
void Path__UpdatePath(Path* __this);

struct Path : ::app::Fuse::Shapes::PathShape
{
    ::uStrong< ::app::Fuse::Internal::SizingContainer*> sizing;
    int _fitMode;
    int _scaleMode;
    int _fillRule;
    ::app::Uno::Float2 _postScale;
    ::app::Uno::Float2 _origin;

    void _ObjInit_3() { Path___ObjInit_3(this); }
    ::app::Uno::Float4x4 AlignMatrix(::app::Uno::Float4x4 b);
    int ContentAlignment() { return Path__get_ContentAlignment(this); }
    ::uString* Data() { return Path__get_Data(this); }
    int FillRule() { return Path__get_FillRule(this); }
    int FitMode() { return Path__get_FitMode(this); }
    ::app::Fuse::Drawing::PathGeometry* Geometry() { return Path__get_Geometry(this); }
    int ScaleMode() { return Path__get_ScaleMode(this); }
    int StretchDirection() { return Path__get_StretchDirection(this); }
    int StretchMode() { return Path__get_StretchMode(this); }
    ::app::Uno::Float2 GetNaturalContentSize();
    void OnSizingChanged() { Path__OnSizingChanged(this); }
    void ContentAlignment(int value) { Path__set_ContentAlignment(this, value); }
    void Data(::uString* value) { Path__set_Data(this, value); }
    void FillRule(int value) { Path__set_FillRule(this, value); }
    void FitMode(int value) { Path__set_FitMode(this, value); }
    void Geometry(::app::Fuse::Drawing::PathGeometry* value) { Path__set_Geometry(this, value); }
    void ScaleMode(int value) { Path__set_ScaleMode(this, value); }
    void StretchDirection(int value) { Path__set_StretchDirection(this, value); }
    void StretchMode(int value) { Path__set_StretchMode(this, value); }
};

}}}

#include <app/Uno.Float4x4.h>
#include <app/Uno.Rect.h>

namespace app {
namespace Fuse {
namespace Shapes {

inline ::app::Uno::Float4x4 Path::AlignMatrix(::app::Uno::Float4x4 b) { return Path__AlignMatrix(this, b); }
inline ::app::Uno::Float2 Path::GetNaturalContentSize() { return Path__GetNaturalContentSize(this); }

}}}


#endif
