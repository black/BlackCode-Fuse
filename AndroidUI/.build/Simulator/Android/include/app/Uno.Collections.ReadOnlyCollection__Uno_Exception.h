// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_READ_ONLY_COLLECTION__UNO_EXCEPTION_H__
#define __APP_UNO_COLLECTIONS_READ_ONLY_COLLECTION__UNO_EXCEPTION_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Exception; } }

namespace app {
namespace Uno {
namespace Collections {

struct ReadOnlyCollection__Uno_Exception;

struct ReadOnlyCollection__Uno_Exception__uType : ::uClassType
{
};

ReadOnlyCollection__Uno_Exception__uType* ReadOnlyCollection__Uno_Exception__typeof();

void ReadOnlyCollection__Uno_Exception___ObjInit(ReadOnlyCollection__Uno_Exception* __this, ::uObject* list);
int ReadOnlyCollection__Uno_Exception__get_Count(ReadOnlyCollection__Uno_Exception* __this);
::app::Uno::Exception* ReadOnlyCollection__Uno_Exception__get_Item(ReadOnlyCollection__Uno_Exception* __this, int index);
ReadOnlyCollection__Uno_Exception* ReadOnlyCollection__Uno_Exception__New_1(::uStatic* __this, ::uObject* list);

struct ReadOnlyCollection__Uno_Exception : ::uObject
{
    ::uStrong< ::uObject*> _list;

    void _ObjInit(::uObject* list) { ReadOnlyCollection__Uno_Exception___ObjInit(this, list); }
    int Count() { return ReadOnlyCollection__Uno_Exception__get_Count(this); }
    ::app::Uno::Exception* Item(int index) { return ReadOnlyCollection__Uno_Exception__get_Item(this, index); }
};

}}}


#endif
