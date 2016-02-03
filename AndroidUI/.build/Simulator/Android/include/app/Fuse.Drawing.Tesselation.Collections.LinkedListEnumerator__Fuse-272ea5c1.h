// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_TESSELATION_COLLECTIONS_LINKED_LIST_ENUMERATOR__FUSE_272EA5C1_H__
#define __APP_FUSE_DRAWING_TESSELATION_COLLECTIONS_LINKED_LIST_ENUMERATOR__FUSE_272EA5C1_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_HalfEdge.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { namespace Collections { struct LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge; } } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct HalfEdge; } } } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {
namespace Collections {

struct LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge;

struct LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_HalfEdge __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge__uType* LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge__typeof();

void LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge___ObjInit(LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* first, ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge* enumerable);
void LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge__Dispose(LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge* __this);
::app::Fuse::Drawing::Tesselation::HalfEdge* LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge__get_Current(LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge* __this);
bool LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge__MoveNext(LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge* __this);
LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge* LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge__New_1(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* first, ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge* enumerable);
void LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge__Reset(LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge* __this);

struct LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge : ::uObject
{
    ::uStrong< ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge*> _enumerable;
    ::uStrong< ::app::Fuse::Drawing::Tesselation::HalfEdge*> _next;
    ::uStrong< ::app::Fuse::Drawing::Tesselation::HalfEdge*> _current;

    void _ObjInit(::app::Fuse::Drawing::Tesselation::HalfEdge* first, ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge* enumerable) { LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge___ObjInit(this, first, enumerable); }
    void Dispose() { LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge__Dispose(this); }
    ::app::Fuse::Drawing::Tesselation::HalfEdge* Current() { return LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge__get_Current(this); }
    bool MoveNext() { return LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge__MoveNext(this); }
    void Reset() { LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge__Reset(this); }
};

}}}}}


#endif
