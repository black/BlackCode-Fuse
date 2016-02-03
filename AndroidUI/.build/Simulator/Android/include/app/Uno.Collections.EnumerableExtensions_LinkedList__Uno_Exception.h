// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_ENUMERABLE_EXTENSIONS_LINKED_LIST__UNO_EXCEPTION_H__
#define __APP_UNO_COLLECTIONS_ENUMERABLE_EXTENSIONS_LINKED_LIST__UNO_EXCEPTION_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Exception; } }

namespace app {
namespace Uno {
namespace Collections {

struct EnumerableExtensions_LinkedList__Uno_Exception;

struct EnumerableExtensions_LinkedList__Uno_Exception__uType : ::uClassType
{
};

EnumerableExtensions_LinkedList__Uno_Exception__uType* EnumerableExtensions_LinkedList__Uno_Exception__typeof();

void EnumerableExtensions_LinkedList__Uno_Exception___ObjInit(EnumerableExtensions_LinkedList__Uno_Exception* __this, ::app::Uno::Exception* item, EnumerableExtensions_LinkedList__Uno_Exception* next);
EnumerableExtensions_LinkedList__Uno_Exception* EnumerableExtensions_LinkedList__Uno_Exception__New_1(::uStatic* __this, ::app::Uno::Exception* item, EnumerableExtensions_LinkedList__Uno_Exception* next);

struct EnumerableExtensions_LinkedList__Uno_Exception : ::uObject
{
    ::uStrong< ::app::Uno::Exception*> Item;
    ::uStrong< EnumerableExtensions_LinkedList__Uno_Exception*> Next;

    void _ObjInit(::app::Uno::Exception* item, EnumerableExtensions_LinkedList__Uno_Exception* next) { EnumerableExtensions_LinkedList__Uno_Exception___ObjInit(this, item, next); }
};

}}}


#endif
