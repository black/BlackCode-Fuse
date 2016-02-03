// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_IMMUTABLE_LIST__UNO_EXCEPTION_H__
#define __APP_OUTRACKS_SIMULATOR_IMMUTABLE_LIST__UNO_EXCEPTION_H__

#include <app/Uno.Collections.IEnumerable__Uno_Exception.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Exception; } }

namespace app {
namespace Outracks {
namespace Simulator {

struct ImmutableList__Uno_Exception;

struct ImmutableList__Uno_Exception__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Uno_Exception __interface_0;
};

ImmutableList__Uno_Exception__uType* ImmutableList__Uno_Exception__typeof();

void ImmutableList__Uno_Exception___ObjInit(ImmutableList__Uno_Exception* __this, ::uArray* array);
ImmutableList__Uno_Exception* ImmutableList__Uno_Exception__Add(ImmutableList__Uno_Exception* __this, ::app::Uno::Exception* element);
::app::Uno::Exception* ImmutableList__Uno_Exception__Get(ImmutableList__Uno_Exception* __this, int i);
int ImmutableList__Uno_Exception__get_Count(ImmutableList__Uno_Exception* __this);
ImmutableList__Uno_Exception* ImmutableList__Uno_Exception__get_Empty(::uStatic* __this);
::app::Uno::Exception* ImmutableList__Uno_Exception__get_Item(ImmutableList__Uno_Exception* __this, int i);
::uObject* ImmutableList__Uno_Exception__GetEnumerator(ImmutableList__Uno_Exception* __this);
ImmutableList__Uno_Exception* ImmutableList__Uno_Exception__InsertRange(ImmutableList__Uno_Exception* __this, int index, ::uObject* items);
ImmutableList__Uno_Exception* ImmutableList__Uno_Exception__New_1(::uStatic* __this, ::uArray* array);
ImmutableList__Uno_Exception* ImmutableList__Uno_Exception__Replace(ImmutableList__Uno_Exception* __this, ::app::Uno::Exception* element, ::app::Uno::Exception* replacement);

struct ImmutableList__Uno_Exception : ::uObject
{
    ::uStrong< ::uArray*> _array;

    void _ObjInit(::uArray* array) { ImmutableList__Uno_Exception___ObjInit(this, array); }
    ImmutableList__Uno_Exception* Add(::app::Uno::Exception* element) { return ImmutableList__Uno_Exception__Add(this, element); }
    ::app::Uno::Exception* Get(int i) { return ImmutableList__Uno_Exception__Get(this, i); }
    int Count() { return ImmutableList__Uno_Exception__get_Count(this); }
    ::app::Uno::Exception* Item(int i) { return ImmutableList__Uno_Exception__get_Item(this, i); }
    ::uObject* GetEnumerator() { return ImmutableList__Uno_Exception__GetEnumerator(this); }
    ImmutableList__Uno_Exception* InsertRange(int index, ::uObject* items) { return ImmutableList__Uno_Exception__InsertRange(this, index, items); }
    ImmutableList__Uno_Exception* Replace(::app::Uno::Exception* element, ::app::Uno::Exception* replacement) { return ImmutableList__Uno_Exception__Replace(this, element, replacement); }
};

}}}


#endif
