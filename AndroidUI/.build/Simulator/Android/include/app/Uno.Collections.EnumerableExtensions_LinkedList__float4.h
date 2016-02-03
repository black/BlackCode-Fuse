// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_ENUMERABLE_EXTENSIONS_LINKED_LIST__FLOAT4_H__
#define __APP_UNO_COLLECTIONS_ENUMERABLE_EXTENSIONS_LINKED_LIST__FLOAT4_H__

#include <app/Uno.Float4.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct EnumerableExtensions_LinkedList__float4;

struct EnumerableExtensions_LinkedList__float4__uType : ::uClassType
{
};

EnumerableExtensions_LinkedList__float4__uType* EnumerableExtensions_LinkedList__float4__typeof();

void EnumerableExtensions_LinkedList__float4___ObjInit(EnumerableExtensions_LinkedList__float4* __this, ::app::Uno::Float4 item, EnumerableExtensions_LinkedList__float4* next);
EnumerableExtensions_LinkedList__float4* EnumerableExtensions_LinkedList__float4__New_1(::uStatic* __this, ::app::Uno::Float4 item, EnumerableExtensions_LinkedList__float4* next);

struct EnumerableExtensions_LinkedList__float4 : ::uObject
{
    ::app::Uno::Float4 Item;
    ::uStrong< EnumerableExtensions_LinkedList__float4*> Next;

    void _ObjInit(::app::Uno::Float4 item, EnumerableExtensions_LinkedList__float4* next) { EnumerableExtensions_LinkedList__float4___ObjInit(this, item, next); }
};

}}}


#endif
