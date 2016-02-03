// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_ENUMERABLE_EXTENSIONS_LINKED_LIST__FUSE_BEHAVIOR_H__
#define __APP_UNO_COLLECTIONS_ENUMERABLE_EXTENSIONS_LINKED_LIST__FUSE_BEHAVIOR_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Behavior; } }

namespace app {
namespace Uno {
namespace Collections {

struct EnumerableExtensions_LinkedList__Fuse_Behavior;

struct EnumerableExtensions_LinkedList__Fuse_Behavior__uType : ::uClassType
{
};

EnumerableExtensions_LinkedList__Fuse_Behavior__uType* EnumerableExtensions_LinkedList__Fuse_Behavior__typeof();

void EnumerableExtensions_LinkedList__Fuse_Behavior___ObjInit(EnumerableExtensions_LinkedList__Fuse_Behavior* __this, ::app::Fuse::Behavior* item, EnumerableExtensions_LinkedList__Fuse_Behavior* next);
EnumerableExtensions_LinkedList__Fuse_Behavior* EnumerableExtensions_LinkedList__Fuse_Behavior__New_1(::uStatic* __this, ::app::Fuse::Behavior* item, EnumerableExtensions_LinkedList__Fuse_Behavior* next);

struct EnumerableExtensions_LinkedList__Fuse_Behavior : ::uObject
{
    ::uStrong< ::app::Fuse::Behavior*> Item;
    ::uStrong< EnumerableExtensions_LinkedList__Fuse_Behavior*> Next;

    void _ObjInit(::app::Fuse::Behavior* item, EnumerableExtensions_LinkedList__Fuse_Behavior* next) { EnumerableExtensions_LinkedList__Fuse_Behavior___ObjInit(this, item, next); }
};

}}}


#endif
