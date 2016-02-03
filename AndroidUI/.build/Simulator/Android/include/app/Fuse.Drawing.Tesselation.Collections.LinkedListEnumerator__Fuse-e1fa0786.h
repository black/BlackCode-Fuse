// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_TESSELATION_COLLECTIONS_LINKED_LIST_ENUMERATOR__FUSE_E1FA0786_H__
#define __APP_FUSE_DRAWING_TESSELATION_COLLECTIONS_LINKED_LIST_ENUMERATOR__FUSE_E1FA0786_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_Collectio-2ec48932.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { namespace Collections { struct DictNode__Fuse_Drawing_Tesselation_ActiveRegion; } } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { namespace Collections { struct LinkedListEnumerable__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion_; } } } } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {
namespace Collections {

struct LinkedListEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion_;

struct LinkedListEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion_ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

LinkedListEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___uType* LinkedListEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___typeof();

void LinkedListEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion____ObjInit(LinkedListEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion_* __this, ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* first, ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion_* enumerable);
void LinkedListEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Dispose(LinkedListEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion_* __this);
::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* LinkedListEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___get_Current(LinkedListEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion_* __this);
bool LinkedListEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___MoveNext(LinkedListEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion_* __this);
LinkedListEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion_* LinkedListEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___New_1(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* first, ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion_* enumerable);
void LinkedListEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Reset(LinkedListEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion_* __this);

struct LinkedListEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion_ : ::uObject
{
    ::uStrong< ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion_*> _enumerable;
    ::uStrong< ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion*> _next;
    ::uStrong< ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion*> _current;

    void _ObjInit(::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* first, ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion_* enumerable) { LinkedListEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion____ObjInit(this, first, enumerable); }
    void Dispose() { LinkedListEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Dispose(this); }
    ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* Current() { return LinkedListEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___get_Current(this); }
    bool MoveNext() { return LinkedListEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___MoveNext(this); }
    void Reset() { LinkedListEnumerator__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___Reset(this); }
};

}}}}}


#endif
