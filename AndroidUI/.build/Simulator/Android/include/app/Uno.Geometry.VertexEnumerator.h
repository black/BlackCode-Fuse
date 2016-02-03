// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Geometry\0.13.2\Curves\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_GEOMETRY_VERTEX_ENUMERATOR_H__
#define __APP_UNO_GEOMETRY_VERTEX_ENUMERATOR_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__float2.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Geometry { struct Vertex; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Uno {
namespace Geometry {

struct VertexEnumerator;

struct VertexEnumerator__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerator__float2 __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

VertexEnumerator__uType* VertexEnumerator__typeof();

void VertexEnumerator___ObjInit(VertexEnumerator* __this, ::app::Uno::Geometry::Vertex* head);
void VertexEnumerator__Dispose(VertexEnumerator* __this);
::app::Uno::Float2 VertexEnumerator__get_Current(VertexEnumerator* __this);
bool VertexEnumerator__MoveNext(VertexEnumerator* __this);
VertexEnumerator* VertexEnumerator__New_1(::uStatic* __this, ::app::Uno::Geometry::Vertex* head);
void VertexEnumerator__Reset(VertexEnumerator* __this);

struct VertexEnumerator : ::uObject
{
    ::uStrong< ::app::Uno::Geometry::Vertex*> _head;
    ::uStrong< ::app::Uno::Geometry::Vertex*> _current;

    void _ObjInit(::app::Uno::Geometry::Vertex* head) { VertexEnumerator___ObjInit(this, head); }
    void Dispose() { VertexEnumerator__Dispose(this); }
    ::app::Uno::Float2 Current();
    bool MoveNext() { return VertexEnumerator__MoveNext(this); }
    void Reset() { VertexEnumerator__Reset(this); }
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Uno {
namespace Geometry {

inline ::app::Uno::Float2 VertexEnumerator::Current() { return VertexEnumerator__get_Current(this); }

}}}


#endif
