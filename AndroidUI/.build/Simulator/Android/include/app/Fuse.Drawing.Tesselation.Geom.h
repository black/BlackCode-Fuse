// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Sweep\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_TESSELATION_GEOM_H__
#define __APP_FUSE_DRAWING_TESSELATION_GEOM_H__

#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct Vertex; } } } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {

struct Geom__uType : ::uClassType
{
};

Geom__uType* Geom__typeof();

float Geom__EdgeEval(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Vertex* u, ::app::Fuse::Drawing::Tesselation::Vertex* v, ::app::Fuse::Drawing::Tesselation::Vertex* w);
float Geom__EdgeSign(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Vertex* u, ::app::Fuse::Drawing::Tesselation::Vertex* v, ::app::Fuse::Drawing::Tesselation::Vertex* w);
double Geom__Interpolate(::uStatic* __this, double ai, double x, double bi, double y);
::app::Fuse::Drawing::Tesselation::Vertex* Geom__Intersect(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Vertex* o1p, ::app::Fuse::Drawing::Tesselation::Vertex* d1p, ::app::Fuse::Drawing::Tesselation::Vertex* o2p, ::app::Fuse::Drawing::Tesselation::Vertex* d2p);
void Geom__Swap(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Vertex** a, ::app::Fuse::Drawing::Tesselation::Vertex** b);
float Geom__TransEval(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Vertex* u, ::app::Fuse::Drawing::Tesselation::Vertex* v, ::app::Fuse::Drawing::Tesselation::Vertex* w);
bool Geom__TransLeq(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Vertex* u, ::app::Fuse::Drawing::Tesselation::Vertex* v);
float Geom__TransSign(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Vertex* u, ::app::Fuse::Drawing::Tesselation::Vertex* v, ::app::Fuse::Drawing::Tesselation::Vertex* w);
bool Geom__VertCCW(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Vertex* u, ::app::Fuse::Drawing::Tesselation::Vertex* v, ::app::Fuse::Drawing::Tesselation::Vertex* w);
double Geom__VertL1dist(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Vertex* u, ::app::Fuse::Drawing::Tesselation::Vertex* v);

}}}}


#endif
