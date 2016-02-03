// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_ENUMERABLE_EXTENSIONS_LINKED_LIST__STRING_H__
#define __APP_UNO_COLLECTIONS_ENUMERABLE_EXTENSIONS_LINKED_LIST__STRING_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct EnumerableExtensions_LinkedList__string;

struct EnumerableExtensions_LinkedList__string__uType : ::uClassType
{
};

EnumerableExtensions_LinkedList__string__uType* EnumerableExtensions_LinkedList__string__typeof();

void EnumerableExtensions_LinkedList__string___ObjInit(EnumerableExtensions_LinkedList__string* __this, ::uString* item, EnumerableExtensions_LinkedList__string* next);
EnumerableExtensions_LinkedList__string* EnumerableExtensions_LinkedList__string__New_1(::uStatic* __this, ::uString* item, EnumerableExtensions_LinkedList__string* next);

struct EnumerableExtensions_LinkedList__string : ::uObject
{
    ::uStrong< ::uString*> Item;
    ::uStrong< EnumerableExtensions_LinkedList__string*> Next;

    void _ObjInit(::uString* item, EnumerableExtensions_LinkedList__string* next) { EnumerableExtensions_LinkedList__string___ObjInit(this, item, next); }
};

}}}


#endif
