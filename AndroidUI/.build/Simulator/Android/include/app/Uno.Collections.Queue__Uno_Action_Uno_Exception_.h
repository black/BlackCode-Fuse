// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_QUEUE__UNO_ACTION_UNO_EXCEPTION__H__
#define __APP_UNO_COLLECTIONS_QUEUE__UNO_ACTION_UNO_EXCEPTION__H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Queue1_Enumerator__Uno_Action_Uno_Exception_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Queue__Uno_Action_Uno_Exception_;

struct Queue__Uno_Action_Uno_Exception___uType : ::uClassType
{
};

Queue__Uno_Action_Uno_Exception___uType* Queue__Uno_Action_Uno_Exception___typeof();

void Queue__Uno_Action_Uno_Exception____ObjInit(Queue__Uno_Action_Uno_Exception_* __this);
void Queue__Uno_Action_Uno_Exception____ObjInit_1(Queue__Uno_Action_Uno_Exception_* __this, int capacity);
void Queue__Uno_Action_Uno_Exception___Clear(Queue__Uno_Action_Uno_Exception_* __this);
bool Queue__Uno_Action_Uno_Exception___Contains(Queue__Uno_Action_Uno_Exception_* __this, ::uDelegate* item);
::uDelegate* Queue__Uno_Action_Uno_Exception___Dequeue(Queue__Uno_Action_Uno_Exception_* __this);
::uDelegate* Queue__Uno_Action_Uno_Exception___ElementAt(Queue__Uno_Action_Uno_Exception_* __this, int index);
void Queue__Uno_Action_Uno_Exception___Enqueue(Queue__Uno_Action_Uno_Exception_* __this, ::uDelegate* item);
void Queue__Uno_Action_Uno_Exception___EnsureCapacity(Queue__Uno_Action_Uno_Exception_* __this);
int Queue__Uno_Action_Uno_Exception___get_Count(Queue__Uno_Action_Uno_Exception_* __this);
::app::Uno::Collections::Queue1_Enumerator__Uno_Action_Uno_Exception_ Queue__Uno_Action_Uno_Exception___GetEnumerator(Queue__Uno_Action_Uno_Exception_* __this);
Queue__Uno_Action_Uno_Exception_* Queue__Uno_Action_Uno_Exception___New_1(::uStatic* __this);
Queue__Uno_Action_Uno_Exception_* Queue__Uno_Action_Uno_Exception___New_2(::uStatic* __this, int capacity);
::uDelegate* Queue__Uno_Action_Uno_Exception___Peek(Queue__Uno_Action_Uno_Exception_* __this);

struct Queue__Uno_Action_Uno_Exception_ : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _head;
    int _tail;
    int _size;
    int _version;

    void _ObjInit() { Queue__Uno_Action_Uno_Exception____ObjInit(this); }
    void _ObjInit_1(int capacity) { Queue__Uno_Action_Uno_Exception____ObjInit_1(this, capacity); }
    void Clear() { Queue__Uno_Action_Uno_Exception___Clear(this); }
    bool Contains(::uDelegate* item) { return Queue__Uno_Action_Uno_Exception___Contains(this, item); }
    ::uDelegate* Dequeue() { return Queue__Uno_Action_Uno_Exception___Dequeue(this); }
    ::uDelegate* ElementAt(int index) { return Queue__Uno_Action_Uno_Exception___ElementAt(this, index); }
    void Enqueue(::uDelegate* item) { Queue__Uno_Action_Uno_Exception___Enqueue(this, item); }
    void EnsureCapacity() { Queue__Uno_Action_Uno_Exception___EnsureCapacity(this); }
    int Count() { return Queue__Uno_Action_Uno_Exception___get_Count(this); }
    ::app::Uno::Collections::Queue1_Enumerator__Uno_Action_Uno_Exception_ GetEnumerator();
    ::uDelegate* Peek() { return Queue__Uno_Action_Uno_Exception___Peek(this); }
};

}}}

#include <app/Uno.Collections.Queue1_Enumerator__Uno_Action_Uno_Exception_.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Queue1_Enumerator__Uno_Action_Uno_Exception_ Queue__Uno_Action_Uno_Exception_::GetEnumerator() { return Queue__Uno_Action_Uno_Exception___GetEnumerator(this); }

}}}


#endif
