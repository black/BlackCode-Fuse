// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_IMMUTABLE_LIST__STRING_H__
#define __APP_OUTRACKS_SIMULATOR_IMMUTABLE_LIST__STRING_H__

#include <app/Uno.Collections.IEnumerable__string.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Outracks {
namespace Simulator {

struct ImmutableList__string;

struct ImmutableList__string__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__string __interface_0;
};

ImmutableList__string__uType* ImmutableList__string__typeof();

void ImmutableList__string___ObjInit(ImmutableList__string* __this, ::uArray* array);
ImmutableList__string* ImmutableList__string__Add(ImmutableList__string* __this, ::uString* element);
::uString* ImmutableList__string__Get(ImmutableList__string* __this, int i);
int ImmutableList__string__get_Count(ImmutableList__string* __this);
ImmutableList__string* ImmutableList__string__get_Empty(::uStatic* __this);
::uString* ImmutableList__string__get_Item(ImmutableList__string* __this, int i);
::uObject* ImmutableList__string__GetEnumerator(ImmutableList__string* __this);
ImmutableList__string* ImmutableList__string__InsertRange(ImmutableList__string* __this, int index, ::uObject* items);
ImmutableList__string* ImmutableList__string__New_1(::uStatic* __this, ::uArray* array);
ImmutableList__string* ImmutableList__string__Replace(ImmutableList__string* __this, ::uString* element, ::uString* replacement);

struct ImmutableList__string : ::uObject
{
    ::uStrong< ::uArray*> _array;

    void _ObjInit(::uArray* array) { ImmutableList__string___ObjInit(this, array); }
    ImmutableList__string* Add(::uString* element) { return ImmutableList__string__Add(this, element); }
    ::uString* Get(int i) { return ImmutableList__string__Get(this, i); }
    int Count() { return ImmutableList__string__get_Count(this); }
    ::uString* Item(int i) { return ImmutableList__string__get_Item(this, i); }
    ::uObject* GetEnumerator() { return ImmutableList__string__GetEnumerator(this); }
    ImmutableList__string* InsertRange(int index, ::uObject* items) { return ImmutableList__string__InsertRange(this, index, items); }
    ImmutableList__string* Replace(::uString* element, ::uString* replacement) { return ImmutableList__string__Replace(this, element, replacement); }
};

}}}


#endif
