// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.19.3\Sweep\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{struct Geom;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{struct Vertex;}}}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Tesselation{

// internal static class Geom :125
// {
uClassType* Geom_typeof();
void Geom__EdgeEval_fn(::g::Fuse::Drawing::Tesselation::Vertex* u, ::g::Fuse::Drawing::Tesselation::Vertex* v, ::g::Fuse::Drawing::Tesselation::Vertex* w, float* __retval);
void Geom__EdgeSign_fn(::g::Fuse::Drawing::Tesselation::Vertex* u, ::g::Fuse::Drawing::Tesselation::Vertex* v, ::g::Fuse::Drawing::Tesselation::Vertex* w, float* __retval);
void Geom__Interpolate_fn(double* ai, double* x, double* bi, double* y, double* __retval);
void Geom__Intersect_fn(::g::Fuse::Drawing::Tesselation::Vertex* o1p, ::g::Fuse::Drawing::Tesselation::Vertex* d1p, ::g::Fuse::Drawing::Tesselation::Vertex* o2p, ::g::Fuse::Drawing::Tesselation::Vertex* d2p, ::g::Fuse::Drawing::Tesselation::Vertex** __retval);
void Geom__Swap_fn(::g::Fuse::Drawing::Tesselation::Vertex** a, ::g::Fuse::Drawing::Tesselation::Vertex** b);
void Geom__TransEval_fn(::g::Fuse::Drawing::Tesselation::Vertex* u, ::g::Fuse::Drawing::Tesselation::Vertex* v, ::g::Fuse::Drawing::Tesselation::Vertex* w, float* __retval);
void Geom__TransLeq_fn(::g::Fuse::Drawing::Tesselation::Vertex* u, ::g::Fuse::Drawing::Tesselation::Vertex* v, bool* __retval);
void Geom__TransSign_fn(::g::Fuse::Drawing::Tesselation::Vertex* u, ::g::Fuse::Drawing::Tesselation::Vertex* v, ::g::Fuse::Drawing::Tesselation::Vertex* w, float* __retval);

struct Geom : uObject
{
    static float EdgeEval(::g::Fuse::Drawing::Tesselation::Vertex* u, ::g::Fuse::Drawing::Tesselation::Vertex* v, ::g::Fuse::Drawing::Tesselation::Vertex* w);
    static float EdgeSign(::g::Fuse::Drawing::Tesselation::Vertex* u, ::g::Fuse::Drawing::Tesselation::Vertex* v, ::g::Fuse::Drawing::Tesselation::Vertex* w);
    static double Interpolate(double ai, double x, double bi, double y);
    static ::g::Fuse::Drawing::Tesselation::Vertex* Intersect(::g::Fuse::Drawing::Tesselation::Vertex* o1p, ::g::Fuse::Drawing::Tesselation::Vertex* d1p, ::g::Fuse::Drawing::Tesselation::Vertex* o2p, ::g::Fuse::Drawing::Tesselation::Vertex* d2p);
    static void Swap(::g::Fuse::Drawing::Tesselation::Vertex** a, ::g::Fuse::Drawing::Tesselation::Vertex** b);
    static float TransEval(::g::Fuse::Drawing::Tesselation::Vertex* u, ::g::Fuse::Drawing::Tesselation::Vertex* v, ::g::Fuse::Drawing::Tesselation::Vertex* w);
    static bool TransLeq(::g::Fuse::Drawing::Tesselation::Vertex* u, ::g::Fuse::Drawing::Tesselation::Vertex* v);
    static float TransSign(::g::Fuse::Drawing::Tesselation::Vertex* u, ::g::Fuse::Drawing::Tesselation::Vertex* v, ::g::Fuse::Drawing::Tesselation::Vertex* w);
};
// }

}}}} // ::g::Fuse::Drawing::Tesselation
