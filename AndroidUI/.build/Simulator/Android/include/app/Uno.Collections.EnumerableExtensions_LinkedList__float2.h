// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_ENUMERABLE_EXTENSIONS_LINKED_LIST__FLOAT2_H__
#define __APP_UNO_COLLECTIONS_ENUMERABLE_EXTENSIONS_LINKED_LIST__FLOAT2_H__

#include <app/Uno.Float2.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct EnumerableExtensions_LinkedList__float2;

struct EnumerableExtensions_LinkedList__float2__uType : ::uClassType
{
};

EnumerableExtensions_LinkedList__float2__uType* EnumerableExtensions_LinkedList__float2__typeof();

void EnumerableExtensions_LinkedList__float2___ObjInit(EnumerableExtensions_LinkedList__float2* __this, ::app::Uno::Float2 item, EnumerableExtensions_LinkedList__float2* next);
EnumerableExtensions_LinkedList__float2* EnumerableExtensions_LinkedList__float2__New_1(::uStatic* __this, ::app::Uno::Float2 item, EnumerableExtensions_LinkedList__float2* next);

struct EnumerableExtensions_LinkedList__float2 : ::uObject
{
    ::app::Uno::Float2 Item;
    ::uStrong< EnumerableExtensions_LinkedList__float2*> Next;

    void _ObjInit(::app::Uno::Float2 item, EnumerableExtensions_LinkedList__float2* next) { EnumerableExtensions_LinkedList__float2___ObjInit(this, item, next); }
};

}}}


#endif
