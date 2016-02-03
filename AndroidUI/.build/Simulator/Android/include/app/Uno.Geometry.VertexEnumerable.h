// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Geometry\0.13.2\Curves\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_GEOMETRY_VERTEX_ENUMERABLE_H__
#define __APP_UNO_GEOMETRY_VERTEX_ENUMERABLE_H__

#include <app/Uno.Collections.IEnumerable__float2.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Geometry { struct Vertex; } } }

namespace app {
namespace Uno {
namespace Geometry {

struct VertexEnumerable;

struct VertexEnumerable__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__float2 __interface_0;
};

VertexEnumerable__uType* VertexEnumerable__typeof();

void VertexEnumerable___ObjInit(VertexEnumerable* __this, ::app::Uno::Geometry::Vertex* head);
::uObject* VertexEnumerable__GetEnumerator(VertexEnumerable* __this);
VertexEnumerable* VertexEnumerable__New_1(::uStatic* __this, ::app::Uno::Geometry::Vertex* head);

struct VertexEnumerable : ::uObject
{
    ::uStrong< ::app::Uno::Geometry::Vertex*> _head;

    void _ObjInit(::app::Uno::Geometry::Vertex* head) { VertexEnumerable___ObjInit(this, head); }
    ::uObject* GetEnumerator() { return VertexEnumerable__GetEnumerator(this); }
};

}}}


#endif
