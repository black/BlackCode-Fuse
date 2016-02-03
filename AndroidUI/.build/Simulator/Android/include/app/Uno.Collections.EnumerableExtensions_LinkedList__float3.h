// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_ENUMERABLE_EXTENSIONS_LINKED_LIST__FLOAT3_H__
#define __APP_UNO_COLLECTIONS_ENUMERABLE_EXTENSIONS_LINKED_LIST__FLOAT3_H__

#include <app/Uno.Float3.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct EnumerableExtensions_LinkedList__float3;

struct EnumerableExtensions_LinkedList__float3__uType : ::uClassType
{
};

EnumerableExtensions_LinkedList__float3__uType* EnumerableExtensions_LinkedList__float3__typeof();

void EnumerableExtensions_LinkedList__float3___ObjInit(EnumerableExtensions_LinkedList__float3* __this, ::app::Uno::Float3 item, EnumerableExtensions_LinkedList__float3* next);
EnumerableExtensions_LinkedList__float3* EnumerableExtensions_LinkedList__float3__New_1(::uStatic* __this, ::app::Uno::Float3 item, EnumerableExtensions_LinkedList__float3* next);

struct EnumerableExtensions_LinkedList__float3 : ::uObject
{
    ::app::Uno::Float3 Item;
    ::uStrong< EnumerableExtensions_LinkedList__float3*> Next;

    void _ObjInit(::app::Uno::Float3 item, EnumerableExtensions_LinkedList__float3* next) { EnumerableExtensions_LinkedList__float3___ObjInit(this, item, next); }
};

}}}


#endif
