// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_TESSELATION_COLLECTIONS_LINKED_LIST_ENUMERABLE__FUSE_CCC1AF34_H__
#define __APP_FUSE_DRAWING_TESSELATION_COLLECTIONS_LINKED_LIST_ENUMERABLE__FUSE_CCC1AF34_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct Face; } } } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {
namespace Collections {

struct LinkedListEnumerable__Fuse_Drawing_Tesselation_Face;

struct LinkedListEnumerable__Fuse_Drawing_Tesselation_Face__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_Face __interface_0;
    ::app::Fuse::Drawing::Tesselation::Face*(*__fp_GetNext)(LinkedListEnumerable__Fuse_Drawing_Tesselation_Face*, ::app::Fuse::Drawing::Tesselation::Face*);
};

LinkedListEnumerable__Fuse_Drawing_Tesselation_Face__uType* LinkedListEnumerable__Fuse_Drawing_Tesselation_Face__typeof();

void LinkedListEnumerable__Fuse_Drawing_Tesselation_Face___ObjInit(LinkedListEnumerable__Fuse_Drawing_Tesselation_Face* __this, ::app::Fuse::Drawing::Tesselation::Face* first);
::uObject* LinkedListEnumerable__Fuse_Drawing_Tesselation_Face__GetEnumerator(LinkedListEnumerable__Fuse_Drawing_Tesselation_Face* __this);

struct LinkedListEnumerable__Fuse_Drawing_Tesselation_Face : ::uObject
{
    ::uStrong< ::app::Fuse::Drawing::Tesselation::Face*> _first;

    void _ObjInit(::app::Fuse::Drawing::Tesselation::Face* first) { LinkedListEnumerable__Fuse_Drawing_Tesselation_Face___ObjInit(this, first); }
    ::uObject* GetEnumerator() { return LinkedListEnumerable__Fuse_Drawing_Tesselation_Face__GetEnumerator(this); }
    ::app::Fuse::Drawing::Tesselation::Face* GetNext(::app::Fuse::Drawing::Tesselation::Face* current) { return (((LinkedListEnumerable__Fuse_Drawing_Tesselation_Face__uType*)this->__obj_type)->__fp_GetNext)(this, current); }
};

}}}}}


#endif
