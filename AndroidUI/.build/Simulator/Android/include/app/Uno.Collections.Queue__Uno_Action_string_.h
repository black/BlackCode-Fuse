// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_QUEUE__UNO_ACTION_STRING__H__
#define __APP_UNO_COLLECTIONS_QUEUE__UNO_ACTION_STRING__H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Queue1_Enumerator__Uno_Action_string_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Queue__Uno_Action_string_;

struct Queue__Uno_Action_string___uType : ::uClassType
{
};

Queue__Uno_Action_string___uType* Queue__Uno_Action_string___typeof();

void Queue__Uno_Action_string____ObjInit(Queue__Uno_Action_string_* __this);
void Queue__Uno_Action_string____ObjInit_1(Queue__Uno_Action_string_* __this, int capacity);
void Queue__Uno_Action_string___Clear(Queue__Uno_Action_string_* __this);
bool Queue__Uno_Action_string___Contains(Queue__Uno_Action_string_* __this, ::uDelegate* item);
::uDelegate* Queue__Uno_Action_string___Dequeue(Queue__Uno_Action_string_* __this);
::uDelegate* Queue__Uno_Action_string___ElementAt(Queue__Uno_Action_string_* __this, int index);
void Queue__Uno_Action_string___Enqueue(Queue__Uno_Action_string_* __this, ::uDelegate* item);
void Queue__Uno_Action_string___EnsureCapacity(Queue__Uno_Action_string_* __this);
int Queue__Uno_Action_string___get_Count(Queue__Uno_Action_string_* __this);
::app::Uno::Collections::Queue1_Enumerator__Uno_Action_string_ Queue__Uno_Action_string___GetEnumerator(Queue__Uno_Action_string_* __this);
Queue__Uno_Action_string_* Queue__Uno_Action_string___New_1(::uStatic* __this);
Queue__Uno_Action_string_* Queue__Uno_Action_string___New_2(::uStatic* __this, int capacity);
::uDelegate* Queue__Uno_Action_string___Peek(Queue__Uno_Action_string_* __this);

struct Queue__Uno_Action_string_ : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _head;
    int _tail;
    int _size;
    int _version;

    void _ObjInit() { Queue__Uno_Action_string____ObjInit(this); }
    void _ObjInit_1(int capacity) { Queue__Uno_Action_string____ObjInit_1(this, capacity); }
    void Clear() { Queue__Uno_Action_string___Clear(this); }
    bool Contains(::uDelegate* item) { return Queue__Uno_Action_string___Contains(this, item); }
    ::uDelegate* Dequeue() { return Queue__Uno_Action_string___Dequeue(this); }
    ::uDelegate* ElementAt(int index) { return Queue__Uno_Action_string___ElementAt(this, index); }
    void Enqueue(::uDelegate* item) { Queue__Uno_Action_string___Enqueue(this, item); }
    void EnsureCapacity() { Queue__Uno_Action_string___EnsureCapacity(this); }
    int Count() { return Queue__Uno_Action_string___get_Count(this); }
    ::app::Uno::Collections::Queue1_Enumerator__Uno_Action_string_ GetEnumerator();
    ::uDelegate* Peek() { return Queue__Uno_Action_string___Peek(this); }
};

}}}

#include <app/Uno.Collections.Queue1_Enumerator__Uno_Action_string_.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Queue1_Enumerator__Uno_Action_string_ Queue__Uno_Action_string_::GetEnumerator() { return Queue__Uno_Action_string___GetEnumerator(this); }

}}}


#endif
