// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Meshes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_TESSELATION_EDGES_ENUMERABLE_H__
#define __APP_FUSE_DRAWING_TESSELATION_EDGES_ENUMERABLE_H__

#include <app/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable__Fuse-21c83365.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Tesselation_HalfEdge.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct HalfEdge; } } } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {

struct EdgesEnumerable;

struct EdgesEnumerable__uType : ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge__uType
{
};

EdgesEnumerable__uType* EdgesEnumerable__typeof();

void EdgesEnumerable___ObjInit_1(EdgesEnumerable* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* head);
::app::Fuse::Drawing::Tesselation::HalfEdge* EdgesEnumerable__GetNext(EdgesEnumerable* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* v);
EdgesEnumerable* EdgesEnumerable__New_1(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* head);

struct EdgesEnumerable : ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge
{
    ::uStrong< ::app::Fuse::Drawing::Tesselation::HalfEdge*> _head;

    void _ObjInit_1(::app::Fuse::Drawing::Tesselation::HalfEdge* head) { EdgesEnumerable___ObjInit_1(this, head); }
};

}}}}


#endif
