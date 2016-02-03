// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Meshes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_TESSELATION_VERTICES_ENUMERABLE_H__
#define __APP_FUSE_DRAWING_TESSELATION_VERTICES_ENUMERABLE_H__

#include <app/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable__Fuse-b3e18c4e.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Tesselation_Vertex.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct Vertex; } } } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {

struct VerticesEnumerable;

struct VerticesEnumerable__uType : ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex__uType
{
};

VerticesEnumerable__uType* VerticesEnumerable__typeof();

void VerticesEnumerable___ObjInit_1(VerticesEnumerable* __this, ::app::Fuse::Drawing::Tesselation::Vertex* head);
::app::Fuse::Drawing::Tesselation::Vertex* VerticesEnumerable__GetNext(VerticesEnumerable* __this, ::app::Fuse::Drawing::Tesselation::Vertex* v);
VerticesEnumerable* VerticesEnumerable__New_1(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Vertex* head);

struct VerticesEnumerable : ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex
{
    ::uStrong< ::app::Fuse::Drawing::Tesselation::Vertex*> _head;

    void _ObjInit_1(::app::Fuse::Drawing::Tesselation::Vertex* head) { VerticesEnumerable___ObjInit_1(this, head); }
};

}}}}


#endif
