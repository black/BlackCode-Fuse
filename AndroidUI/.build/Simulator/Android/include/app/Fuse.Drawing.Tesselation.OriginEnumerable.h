// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Meshes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_TESSELATION_ORIGIN_ENUMERABLE_H__
#define __APP_FUSE_DRAWING_TESSELATION_ORIGIN_ENUMERABLE_H__

#include <app/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable__Fuse-21c83365.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Tesselation_HalfEdge.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct HalfEdge; } } } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {

struct OriginEnumerable;

struct OriginEnumerable__uType : ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge__uType
{
};

OriginEnumerable__uType* OriginEnumerable__typeof();

void OriginEnumerable___ObjInit_1(OriginEnumerable* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* anEdge);
::app::Fuse::Drawing::Tesselation::HalfEdge* OriginEnumerable__GetNext(OriginEnumerable* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* edge);
OriginEnumerable* OriginEnumerable__New_1(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* anEdge);

struct OriginEnumerable : ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge
{
    void _ObjInit_1(::app::Fuse::Drawing::Tesselation::HalfEdge* anEdge) { OriginEnumerable___ObjInit_1(this, anEdge); }
};

}}}}


#endif
