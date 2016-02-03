// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_TESSELATION_COLLECTIONS_VERTEX_QUEUE_H__
#define __APP_FUSE_DRAWING_TESSELATION_COLLECTIONS_VERTEX_QUEUE_H__

#include <app/Fuse.Drawing.Tesselation.Collections.PriorityQueue__Fuse_Drawin-b60a1789.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct Vertex; } } } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {
namespace Collections {

struct VertexQueue;

struct VertexQueue__uType : ::app::Fuse::Drawing::Tesselation::Collections::PriorityQueue__Fuse_Drawing_Tesselation_Vertex__uType
{
};

VertexQueue__uType* VertexQueue__typeof();

void VertexQueue___ObjInit_1(VertexQueue* __this);
bool VertexQueue__Leq_1(VertexQueue* __this, ::app::Fuse::Drawing::Tesselation::Vertex* a, ::app::Fuse::Drawing::Tesselation::Vertex* b);
VertexQueue* VertexQueue__New_1(::uStatic* __this);

struct VertexQueue : ::app::Fuse::Drawing::Tesselation::Collections::PriorityQueue__Fuse_Drawing_Tesselation_Vertex
{
    void _ObjInit_1() { VertexQueue___ObjInit_1(this); }
};

}}}}}


#endif
