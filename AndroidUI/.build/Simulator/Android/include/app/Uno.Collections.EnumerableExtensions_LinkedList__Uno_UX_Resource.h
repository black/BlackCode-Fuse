// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_ENUMERABLE_EXTENSIONS_LINKED_LIST__UNO_U_X_RESOURCE_H__
#define __APP_UNO_COLLECTIONS_ENUMERABLE_EXTENSIONS_LINKED_LIST__UNO_U_X_RESOURCE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace UX { struct Resource; } } }

namespace app {
namespace Uno {
namespace Collections {

struct EnumerableExtensions_LinkedList__Uno_UX_Resource;

struct EnumerableExtensions_LinkedList__Uno_UX_Resource__uType : ::uClassType
{
};

EnumerableExtensions_LinkedList__Uno_UX_Resource__uType* EnumerableExtensions_LinkedList__Uno_UX_Resource__typeof();

void EnumerableExtensions_LinkedList__Uno_UX_Resource___ObjInit(EnumerableExtensions_LinkedList__Uno_UX_Resource* __this, ::app::Uno::UX::Resource* item, EnumerableExtensions_LinkedList__Uno_UX_Resource* next);
EnumerableExtensions_LinkedList__Uno_UX_Resource* EnumerableExtensions_LinkedList__Uno_UX_Resource__New_1(::uStatic* __this, ::app::Uno::UX::Resource* item, EnumerableExtensions_LinkedList__Uno_UX_Resource* next);

struct EnumerableExtensions_LinkedList__Uno_UX_Resource : ::uObject
{
    ::uStrong< ::app::Uno::UX::Resource*> Item;
    ::uStrong< EnumerableExtensions_LinkedList__Uno_UX_Resource*> Next;

    void _ObjInit(::app::Uno::UX::Resource* item, EnumerableExtensions_LinkedList__Uno_UX_Resource* next) { EnumerableExtensions_LinkedList__Uno_UX_Resource___ObjInit(this, item, next); }
};

}}}


#endif
