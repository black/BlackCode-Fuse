// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_ENUMERABLE_EXTENSIONS_LINKED_LIST__FUSE_DRAWING_CONTOUR_H__
#define __APP_UNO_COLLECTIONS_ENUMERABLE_EXTENSIONS_LINKED_LIST__FUSE_DRAWING_CONTOUR_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Contour; } } }

namespace app {
namespace Uno {
namespace Collections {

struct EnumerableExtensions_LinkedList__Fuse_Drawing_Contour;

struct EnumerableExtensions_LinkedList__Fuse_Drawing_Contour__uType : ::uClassType
{
};

EnumerableExtensions_LinkedList__Fuse_Drawing_Contour__uType* EnumerableExtensions_LinkedList__Fuse_Drawing_Contour__typeof();

void EnumerableExtensions_LinkedList__Fuse_Drawing_Contour___ObjInit(EnumerableExtensions_LinkedList__Fuse_Drawing_Contour* __this, ::app::Fuse::Drawing::Contour* item, EnumerableExtensions_LinkedList__Fuse_Drawing_Contour* next);
EnumerableExtensions_LinkedList__Fuse_Drawing_Contour* EnumerableExtensions_LinkedList__Fuse_Drawing_Contour__New_1(::uStatic* __this, ::app::Fuse::Drawing::Contour* item, EnumerableExtensions_LinkedList__Fuse_Drawing_Contour* next);

struct EnumerableExtensions_LinkedList__Fuse_Drawing_Contour : ::uObject
{
    ::uStrong< ::app::Fuse::Drawing::Contour*> Item;
    ::uStrong< EnumerableExtensions_LinkedList__Fuse_Drawing_Contour*> Next;

    void _ObjInit(::app::Fuse::Drawing::Contour* item, EnumerableExtensions_LinkedList__Fuse_Drawing_Contour* next) { EnumerableExtensions_LinkedList__Fuse_Drawing_Contour___ObjInit(this, item, next); }
};

}}}


#endif
