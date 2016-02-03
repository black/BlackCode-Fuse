// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Geometry\0.13.2\Curves\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_GEOMETRY_CUBIC_BEZIER_H__
#define __APP_UNO_GEOMETRY_CUBIC_BEZIER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Geometry { struct Vertex; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Uno {
namespace Geometry {

struct CubicBezier;

struct CubicBezier__uType : ::uClassType
{
};

CubicBezier__uType* CubicBezier__typeof();

void CubicBezier___ObjInit(CubicBezier* __this, float maxError);
void CubicBezier__AddPoint(CubicBezier* __this, float x, float y);
bool CubicBezier__get_HasLength(CubicBezier* __this);
CubicBezier* CubicBezier__New_1(::uStatic* __this, float maxError);
::uObject* CubicBezier__Subdivide(::uStatic* __this, ::app::Uno::Float2 p1, ::app::Uno::Float2 p2, ::app::Uno::Float2 p3, ::app::Uno::Float2 p4, float maxError);
void CubicBezier__SubdivideRecursive(CubicBezier* __this, float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, int level);

struct CubicBezier : ::uObject
{
    ::uStrong< ::app::Uno::Geometry::Vertex*> _head;
    ::uStrong< ::app::Uno::Geometry::Vertex*> _last;
    float _maxErrorSquared;

    void _ObjInit(float maxError) { CubicBezier___ObjInit(this, maxError); }
    void AddPoint(float x, float y) { CubicBezier__AddPoint(this, x, y); }
    bool HasLength() { return CubicBezier__get_HasLength(this); }
    void SubdivideRecursive(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, int level) { CubicBezier__SubdivideRecursive(this, x1, y1, x2, y2, x3, y3, x4, y4, level); }
};

}}}


#endif
