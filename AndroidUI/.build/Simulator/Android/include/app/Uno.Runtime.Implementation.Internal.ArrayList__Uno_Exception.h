// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_LIST__UNO_EXCEPTION_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_LIST__UNO_EXCEPTION_H__

#include <app/Uno.Collections.ICollection__Uno_Exception.h>
#include <app/Uno.Collections.IEnumerable__Uno_Exception.h>
#include <app/Uno.Collections.IList__Uno_Exception.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Exception; } }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct ArrayList__Uno_Exception;

struct ArrayList__Uno_Exception__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Uno_Exception __interface_0;
    ::app::Uno::Collections::ICollection__Uno_Exception __interface_1;
    ::app::Uno::Collections::IEnumerable__Uno_Exception __interface_2;
};

ArrayList__Uno_Exception__uType* ArrayList__Uno_Exception__typeof();

void ArrayList__Uno_Exception___ObjInit(ArrayList__Uno_Exception* __this, ::uArray* source);
void ArrayList__Uno_Exception__Add(ArrayList__Uno_Exception* __this, ::app::Uno::Exception* item);
void ArrayList__Uno_Exception__Clear(ArrayList__Uno_Exception* __this);
bool ArrayList__Uno_Exception__Contains(ArrayList__Uno_Exception* __this, ::app::Uno::Exception* item);
int ArrayList__Uno_Exception__get_Count(ArrayList__Uno_Exception* __this);
::app::Uno::Exception* ArrayList__Uno_Exception__get_Item(ArrayList__Uno_Exception* __this, int index);
::uObject* ArrayList__Uno_Exception__GetEnumerator(ArrayList__Uno_Exception* __this);
void ArrayList__Uno_Exception__Insert(ArrayList__Uno_Exception* __this, int index, ::app::Uno::Exception* item);
ArrayList__Uno_Exception* ArrayList__Uno_Exception__New_1(::uStatic* __this, ::uArray* source);
bool ArrayList__Uno_Exception__Remove(ArrayList__Uno_Exception* __this, ::app::Uno::Exception* item);
void ArrayList__Uno_Exception__RemoveAt(ArrayList__Uno_Exception* __this, int index);
void ArrayList__Uno_Exception__set_Item(ArrayList__Uno_Exception* __this, int index, ::app::Uno::Exception* value);

struct ArrayList__Uno_Exception : ::uObject
{
    ::uStrong< ::uArray*> _source;

    void _ObjInit(::uArray* source) { ArrayList__Uno_Exception___ObjInit(this, source); }
    void Add(::app::Uno::Exception* item) { ArrayList__Uno_Exception__Add(this, item); }
    void Clear() { ArrayList__Uno_Exception__Clear(this); }
    bool Contains(::app::Uno::Exception* item) { return ArrayList__Uno_Exception__Contains(this, item); }
    int Count() { return ArrayList__Uno_Exception__get_Count(this); }
    ::app::Uno::Exception* Item(int index) { return ArrayList__Uno_Exception__get_Item(this, index); }
    ::uObject* GetEnumerator() { return ArrayList__Uno_Exception__GetEnumerator(this); }
    void Insert(int index, ::app::Uno::Exception* item) { ArrayList__Uno_Exception__Insert(this, index, item); }
    bool Remove(::app::Uno::Exception* item) { return ArrayList__Uno_Exception__Remove(this, item); }
    void RemoveAt(int index) { ArrayList__Uno_Exception__RemoveAt(this, index); }
    void Item(int index, ::app::Uno::Exception* value) { ArrayList__Uno_Exception__set_Item(this, index, value); }
};

}}}}}


#endif
