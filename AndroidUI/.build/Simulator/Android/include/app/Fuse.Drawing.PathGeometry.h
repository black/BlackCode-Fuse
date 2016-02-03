// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Paths\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_PATH_GEOMETRY_H__
#define __APP_FUSE_DRAWING_PATH_GEOMETRY_H__

#include <app/Uno.Float2.h>
#include <app/Uno.Object.h>
#include <app/Uno.Rect.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Polygon; } } }

namespace app {
namespace Fuse {
namespace Drawing {

struct PathGeometry;

struct PathGeometry__uType : ::uClassType
{
    ::uObject*(*__fp_EvaluateLast)(PathGeometry*);
    ::app::Uno::Float2(*__fp_FindStartOfLastContour)(PathGeometry*);
    bool(*__fp_get_EndsContour)(PathGeometry*);
    ::app::Uno::Float2(*__fp_get_EndTangent)(PathGeometry*);
    bool(*__fp_get_HasLastBounds)(PathGeometry*);
    ::app::Uno::Rect(*__fp_get_LastBounds)(PathGeometry*);
    ::uString*(*__fp_Serialize)(PathGeometry*);
};

PathGeometry__uType* PathGeometry__typeof();

void PathGeometry___ObjInit(PathGeometry* __this);
::app::Uno::Rect PathGeometry__CalculateBounds(PathGeometry* __this);
PathGeometry* PathGeometry__ClosePath(PathGeometry* __this);
PathGeometry* PathGeometry__CurveTo(PathGeometry* __this, ::app::Uno::Float2 controlPointStart, ::app::Uno::Float2 controlPointEnd, ::app::Uno::Float2 position);
::uObject* PathGeometry__EvaluateLast(PathGeometry* __this);
::app::Uno::Float2 PathGeometry__FindStartOfLastContour(PathGeometry* __this);
::app::Uno::Rect PathGeometry__get_Bounds(PathGeometry* __this);
::app::Uno::Float2 PathGeometry__get_EndPosition(PathGeometry* __this);
bool PathGeometry__get_EndsContour(PathGeometry* __this);
::app::Uno::Float2 PathGeometry__get_EndTangent(PathGeometry* __this);
bool PathGeometry__get_HasLastBounds(PathGeometry* __this);
::app::Uno::Rect PathGeometry__get_LastBounds(PathGeometry* __this);
PathGeometry* PathGeometry__HorizontalLineTo(PathGeometry* __this, float x);
PathGeometry* PathGeometry__LineTo(PathGeometry* __this, float x, float y);
PathGeometry* PathGeometry__LineTo_1(PathGeometry* __this, ::app::Uno::Float2 position);
PathGeometry* PathGeometry__MoveTo(PathGeometry* __this, float x, float y);
PathGeometry* PathGeometry__MoveTo_1(PathGeometry* __this, ::app::Uno::Float2 position);
PathGeometry* PathGeometry__New_1(::uStatic* __this);
PathGeometry* PathGeometry__Parse(::uStatic* __this, ::uString* pathDescription);
void PathGeometry__PathGeometryCtor(PathGeometry* __this, PathGeometry* previous, ::app::Uno::Float2 position);
PathGeometry* PathGeometry__RemoveLast(PathGeometry* __this);
::uString* PathGeometry__Serialize(PathGeometry* __this);
PathGeometry* PathGeometry__SmoothCurveTo(PathGeometry* __this, ::app::Uno::Float2 controlPointEnd, ::app::Uno::Float2 position);
::app::Fuse::Drawing::Polygon* PathGeometry__ToPolygon(PathGeometry* __this, ::uDelegate* WindingRule, ::app::Uno::Float2 scale);
::uString* PathGeometry__ToString(PathGeometry* __this);
PathGeometry* PathGeometry__VerticalLineTo(PathGeometry* __this, float y);

struct PathGeometry : ::uObject
{
    ::uStrong< PathGeometry*> _previous;
    ::app::Uno::Float2 _position;
    ::app::Uno::Rect _boundsCache;
    bool _hasBoundsCache;

    void _ObjInit() { PathGeometry___ObjInit(this); }
    ::app::Uno::Rect CalculateBounds() { return PathGeometry__CalculateBounds(this); }
    PathGeometry* ClosePath() { return PathGeometry__ClosePath(this); }
    PathGeometry* CurveTo(::app::Uno::Float2 controlPointStart, ::app::Uno::Float2 controlPointEnd, ::app::Uno::Float2 position) { return PathGeometry__CurveTo(this, controlPointStart, controlPointEnd, position); }
    ::uObject* EvaluateLast() { return (((PathGeometry__uType*)this->__obj_type)->__fp_EvaluateLast)(this); }
    ::app::Uno::Float2 FindStartOfLastContour() { return (((PathGeometry__uType*)this->__obj_type)->__fp_FindStartOfLastContour)(this); }
    ::app::Uno::Rect Bounds() { return PathGeometry__get_Bounds(this); }
    ::app::Uno::Float2 EndPosition() { return PathGeometry__get_EndPosition(this); }
    bool EndsContour() { return (((PathGeometry__uType*)this->__obj_type)->__fp_get_EndsContour)(this); }
    ::app::Uno::Float2 EndTangent() { return (((PathGeometry__uType*)this->__obj_type)->__fp_get_EndTangent)(this); }
    bool HasLastBounds() { return (((PathGeometry__uType*)this->__obj_type)->__fp_get_HasLastBounds)(this); }
    ::app::Uno::Rect LastBounds() { return (((PathGeometry__uType*)this->__obj_type)->__fp_get_LastBounds)(this); }
    PathGeometry* HorizontalLineTo(float x) { return PathGeometry__HorizontalLineTo(this, x); }
    PathGeometry* LineTo(float x, float y) { return PathGeometry__LineTo(this, x, y); }
    PathGeometry* LineTo_1(::app::Uno::Float2 position) { return PathGeometry__LineTo_1(this, position); }
    PathGeometry* MoveTo(float x, float y) { return PathGeometry__MoveTo(this, x, y); }
    PathGeometry* MoveTo_1(::app::Uno::Float2 position) { return PathGeometry__MoveTo_1(this, position); }
    void PathGeometryCtor(PathGeometry* previous, ::app::Uno::Float2 position) { PathGeometry__PathGeometryCtor(this, previous, position); }
    PathGeometry* RemoveLast() { return PathGeometry__RemoveLast(this); }
    ::uString* Serialize() { return (((PathGeometry__uType*)this->__obj_type)->__fp_Serialize)(this); }
    PathGeometry* SmoothCurveTo(::app::Uno::Float2 controlPointEnd, ::app::Uno::Float2 position) { return PathGeometry__SmoothCurveTo(this, controlPointEnd, position); }
    ::app::Fuse::Drawing::Polygon* ToPolygon(::uDelegate* WindingRule, ::app::Uno::Float2 scale) { return PathGeometry__ToPolygon(this, WindingRule, scale); }
    PathGeometry* VerticalLineTo(float y) { return PathGeometry__VerticalLineTo(this, y); }
};

}}}


#endif
