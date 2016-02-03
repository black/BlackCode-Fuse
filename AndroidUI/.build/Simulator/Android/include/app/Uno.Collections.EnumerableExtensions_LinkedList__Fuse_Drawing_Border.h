// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_ENUMERABLE_EXTENSIONS_LINKED_LIST__FUSE_DRAWING_BORDER_H__
#define __APP_UNO_COLLECTIONS_ENUMERABLE_EXTENSIONS_LINKED_LIST__FUSE_DRAWING_BORDER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Border; } } }

namespace app {
namespace Uno {
namespace Collections {

struct EnumerableExtensions_LinkedList__Fuse_Drawing_Border;

struct EnumerableExtensions_LinkedList__Fuse_Drawing_Border__uType : ::uClassType
{
};

EnumerableExtensions_LinkedList__Fuse_Drawing_Border__uType* EnumerableExtensions_LinkedList__Fuse_Drawing_Border__typeof();

void EnumerableExtensions_LinkedList__Fuse_Drawing_Border___ObjInit(EnumerableExtensions_LinkedList__Fuse_Drawing_Border* __this, ::app::Fuse::Drawing::Border* item, EnumerableExtensions_LinkedList__Fuse_Drawing_Border* next);
EnumerableExtensions_LinkedList__Fuse_Drawing_Border* EnumerableExtensions_LinkedList__Fuse_Drawing_Border__New_1(::uStatic* __this, ::app::Fuse::Drawing::Border* item, EnumerableExtensions_LinkedList__Fuse_Drawing_Border* next);

struct EnumerableExtensions_LinkedList__Fuse_Drawing_Border : ::uObject
{
    ::uStrong< ::app::Fuse::Drawing::Border*> Item;
    ::uStrong< EnumerableExtensions_LinkedList__Fuse_Drawing_Border*> Next;

    void _ObjInit(::app::Fuse::Drawing::Border* item, EnumerableExtensions_LinkedList__Fuse_Drawing_Border* next) { EnumerableExtensions_LinkedList__Fuse_Drawing_Border___ObjInit(this, item, next); }
};

}}}


#endif
