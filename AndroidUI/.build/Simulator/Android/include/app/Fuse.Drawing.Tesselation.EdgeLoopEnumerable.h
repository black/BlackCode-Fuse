// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Meshes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_TESSELATION_EDGE_LOOP_ENUMERABLE_H__
#define __APP_FUSE_DRAWING_TESSELATION_EDGE_LOOP_ENUMERABLE_H__

#include <app/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable__Fuse-21c83365.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Tesselation_HalfEdge.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct HalfEdge; } } } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {

struct EdgeLoopEnumerable;

struct EdgeLoopEnumerable__uType : ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge__uType
{
};

EdgeLoopEnumerable__uType* EdgeLoopEnumerable__typeof();

void EdgeLoopEnumerable___ObjInit_1(EdgeLoopEnumerable* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* anEdge);
::app::Fuse::Drawing::Tesselation::HalfEdge* EdgeLoopEnumerable__GetNext(EdgeLoopEnumerable* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* e);
EdgeLoopEnumerable* EdgeLoopEnumerable__New_1(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* anEdge);

struct EdgeLoopEnumerable : ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge
{
    void _ObjInit_1(::app::Fuse::Drawing::Tesselation::HalfEdge* anEdge) { EdgeLoopEnumerable___ObjInit_1(this, anEdge); }
};

}}}}


#endif
