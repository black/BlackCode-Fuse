// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_TESSELATION_COLLECTIONS_LINKED_LIST_ENUMERABLE__FUSE_B3E18C4E_H__
#define __APP_FUSE_DRAWING_TESSELATION_COLLECTIONS_LINKED_LIST_ENUMERABLE__FUSE_B3E18C4E_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Tesselation_Vertex.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct Vertex; } } } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {
namespace Collections {

struct LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex;

struct LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_Vertex __interface_0;
    ::app::Fuse::Drawing::Tesselation::Vertex*(*__fp_GetNext)(LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex*, ::app::Fuse::Drawing::Tesselation::Vertex*);
};

LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex__uType* LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex__typeof();

void LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex___ObjInit(LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex* __this, ::app::Fuse::Drawing::Tesselation::Vertex* first);
::uObject* LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex__GetEnumerator(LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex* __this);

struct LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex : ::uObject
{
    ::uStrong< ::app::Fuse::Drawing::Tesselation::Vertex*> _first;

    void _ObjInit(::app::Fuse::Drawing::Tesselation::Vertex* first) { LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex___ObjInit(this, first); }
    ::uObject* GetEnumerator() { return LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex__GetEnumerator(this); }
    ::app::Fuse::Drawing::Tesselation::Vertex* GetNext(::app::Fuse::Drawing::Tesselation::Vertex* current) { return (((LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex__uType*)this->__obj_type)->__fp_GetNext)(this, current); }
};

}}}}}


#endif
