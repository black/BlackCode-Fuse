// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_QUEUE__UNO_EXCEPTION_H__
#define __APP_UNO_COLLECTIONS_QUEUE__UNO_EXCEPTION_H__

#include <app/Uno.Collections.IEnumerable__Uno_Exception.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Queue1_Enumerator__Uno_Exception; } } }
namespace app { namespace Uno { struct Exception; } }

namespace app {
namespace Uno {
namespace Collections {

struct Queue__Uno_Exception;

struct Queue__Uno_Exception__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Uno_Exception __interface_0;
};

Queue__Uno_Exception__uType* Queue__Uno_Exception__typeof();

::uObject* Queue__Uno_Exception__GetEnumerator_boxed(Queue__Uno_Exception* __this);
void Queue__Uno_Exception___ObjInit(Queue__Uno_Exception* __this);
void Queue__Uno_Exception___ObjInit_1(Queue__Uno_Exception* __this, int capacity);
void Queue__Uno_Exception__Clear(Queue__Uno_Exception* __this);
bool Queue__Uno_Exception__Contains(Queue__Uno_Exception* __this, ::app::Uno::Exception* item);
::app::Uno::Exception* Queue__Uno_Exception__Dequeue(Queue__Uno_Exception* __this);
::app::Uno::Exception* Queue__Uno_Exception__ElementAt(Queue__Uno_Exception* __this, int index);
void Queue__Uno_Exception__Enqueue(Queue__Uno_Exception* __this, ::app::Uno::Exception* item);
void Queue__Uno_Exception__EnsureCapacity(Queue__Uno_Exception* __this);
int Queue__Uno_Exception__get_Count(Queue__Uno_Exception* __this);
::app::Uno::Collections::Queue1_Enumerator__Uno_Exception Queue__Uno_Exception__GetEnumerator(Queue__Uno_Exception* __this);
Queue__Uno_Exception* Queue__Uno_Exception__New_1(::uStatic* __this);
Queue__Uno_Exception* Queue__Uno_Exception__New_2(::uStatic* __this, int capacity);
::app::Uno::Exception* Queue__Uno_Exception__Peek(Queue__Uno_Exception* __this);

struct Queue__Uno_Exception : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _head;
    int _tail;
    int _size;
    int _version;

    ::uObject* GetEnumerator_boxed() { return Queue__Uno_Exception__GetEnumerator_boxed(this); }
    void _ObjInit() { Queue__Uno_Exception___ObjInit(this); }
    void _ObjInit_1(int capacity) { Queue__Uno_Exception___ObjInit_1(this, capacity); }
    void Clear() { Queue__Uno_Exception__Clear(this); }
    bool Contains(::app::Uno::Exception* item) { return Queue__Uno_Exception__Contains(this, item); }
    ::app::Uno::Exception* Dequeue() { return Queue__Uno_Exception__Dequeue(this); }
    ::app::Uno::Exception* ElementAt(int index) { return Queue__Uno_Exception__ElementAt(this, index); }
    void Enqueue(::app::Uno::Exception* item) { Queue__Uno_Exception__Enqueue(this, item); }
    void EnsureCapacity() { Queue__Uno_Exception__EnsureCapacity(this); }
    int Count() { return Queue__Uno_Exception__get_Count(this); }
    ::app::Uno::Collections::Queue1_Enumerator__Uno_Exception GetEnumerator();
    ::app::Uno::Exception* Peek() { return Queue__Uno_Exception__Peek(this); }
};

}}}

#include <app/Uno.Collections.Queue1_Enumerator__Uno_Exception.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Queue1_Enumerator__Uno_Exception Queue__Uno_Exception::GetEnumerator() { return Queue__Uno_Exception__GetEnumerator(this); }

}}}


#endif
