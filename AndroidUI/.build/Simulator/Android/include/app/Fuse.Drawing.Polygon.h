// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_POLYGON_H__
#define __APP_FUSE_DRAWING_POLYGON_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct Face; } } } }
namespace app { namespace Fuse { namespace Drawing { struct Cache__Fuse_Drawing_Contour; } } }
namespace app { namespace Fuse { namespace Drawing { struct Contour; } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelMesh; } } } }
namespace app { namespace Uno { namespace Geometry { struct Triangle2D; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Drawing {

struct Polygon;

struct Polygon__uType : ::uClassType
{
};

Polygon__uType* Polygon__typeof();

void Polygon___ObjInit(Polygon* __this, ::uArray* contours);
void Polygon___ObjInit_1(Polygon* __this, ::uObject* contours);
void Polygon___ObjInit_2(Polygon* __this, ::uDelegate* windingRule, ::uArray* contours);
void Polygon___ObjInit_3(Polygon* __this, ::uDelegate* windingRule, ::uObject* contours);
::app::Uno::Geometry::Triangle2D* Polygon__CreateTriangle(Polygon* __this, ::app::Fuse::Drawing::Tesselation::Face* face);
::app::Uno::Content::Models::ModelMesh* Polygon__Extrude(Polygon* __this, float depth, float smoothingThreshold);
::uObject* Polygon__get_Contours(Polygon* __this);
bool Polygon__get_IsDegenerate(Polygon* __this);
::uDelegate* Polygon__get_WindingRule(Polygon* __this);
::uObject* Polygon__GetBoundaryContours(Polygon* __this);
::uObject* Polygon__GetFillTriangles(Polygon* __this);
::uArray* Polygon__GetTriangleVertices(Polygon* __this);
Polygon* Polygon__Intersect(Polygon* __this, Polygon* polygon);
Polygon* Polygon__New_1(::uStatic* __this, ::uArray* contours);
Polygon* Polygon__New_2(::uStatic* __this, ::uObject* contours);
Polygon* Polygon__New_3(::uStatic* __this, ::uDelegate* windingRule, ::uArray* contours);
Polygon* Polygon__New_4(::uStatic* __this, ::uDelegate* windingRule, ::uObject* contours);
Polygon* Polygon__Stroke(Polygon* __this, float Width, float Offset, int StartCap, int EndCap);
Polygon* Polygon__Subtract(Polygon* __this, Polygon* polygon);
::uObject* Polygon__Triangulate(Polygon* __this);
Polygon* Polygon__Union(Polygon* __this, Polygon* polygon);

struct Polygon : ::uObject
{
    ::uStrong< ::uDelegate*> _windingRule;
    ::uStrong< ::app::Fuse::Drawing::Cache__Fuse_Drawing_Contour*> _contours;
    ::uStrong< ::uArray*> _boundaryContours;

    void _ObjInit(::uArray* contours) { Polygon___ObjInit(this, contours); }
    void _ObjInit_1(::uObject* contours) { Polygon___ObjInit_1(this, contours); }
    void _ObjInit_2(::uDelegate* windingRule, ::uArray* contours) { Polygon___ObjInit_2(this, windingRule, contours); }
    void _ObjInit_3(::uDelegate* windingRule, ::uObject* contours) { Polygon___ObjInit_3(this, windingRule, contours); }
    ::app::Uno::Geometry::Triangle2D* CreateTriangle(::app::Fuse::Drawing::Tesselation::Face* face) { return Polygon__CreateTriangle(this, face); }
    ::app::Uno::Content::Models::ModelMesh* Extrude(float depth, float smoothingThreshold) { return Polygon__Extrude(this, depth, smoothingThreshold); }
    ::uObject* Contours() { return Polygon__get_Contours(this); }
    bool IsDegenerate() { return Polygon__get_IsDegenerate(this); }
    ::uDelegate* WindingRule() { return Polygon__get_WindingRule(this); }
    ::uObject* GetBoundaryContours() { return Polygon__GetBoundaryContours(this); }
    ::uObject* GetFillTriangles() { return Polygon__GetFillTriangles(this); }
    ::uArray* GetTriangleVertices() { return Polygon__GetTriangleVertices(this); }
    Polygon* Intersect(Polygon* polygon) { return Polygon__Intersect(this, polygon); }
    Polygon* Stroke(float Width, float Offset, int StartCap, int EndCap) { return Polygon__Stroke(this, Width, Offset, StartCap, EndCap); }
    Polygon* Subtract(Polygon* polygon) { return Polygon__Subtract(this, polygon); }
    ::uObject* Triangulate() { return Polygon__Triangulate(this); }
    Polygon* Union(Polygon* polygon) { return Polygon__Union(this, polygon); }
};

}}}


#endif
