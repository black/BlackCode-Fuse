// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_QUEUE__UNO_ACTION_BOOL__H__
#define __APP_UNO_COLLECTIONS_QUEUE__UNO_ACTION_BOOL__H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Queue1_Enumerator__Uno_Action_bool_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Queue__Uno_Action_bool_;

struct Queue__Uno_Action_bool___uType : ::uClassType
{
};

Queue__Uno_Action_bool___uType* Queue__Uno_Action_bool___typeof();

void Queue__Uno_Action_bool____ObjInit(Queue__Uno_Action_bool_* __this);
void Queue__Uno_Action_bool____ObjInit_1(Queue__Uno_Action_bool_* __this, int capacity);
void Queue__Uno_Action_bool___Clear(Queue__Uno_Action_bool_* __this);
bool Queue__Uno_Action_bool___Contains(Queue__Uno_Action_bool_* __this, ::uDelegate* item);
::uDelegate* Queue__Uno_Action_bool___Dequeue(Queue__Uno_Action_bool_* __this);
::uDelegate* Queue__Uno_Action_bool___ElementAt(Queue__Uno_Action_bool_* __this, int index);
void Queue__Uno_Action_bool___Enqueue(Queue__Uno_Action_bool_* __this, ::uDelegate* item);
void Queue__Uno_Action_bool___EnsureCapacity(Queue__Uno_Action_bool_* __this);
int Queue__Uno_Action_bool___get_Count(Queue__Uno_Action_bool_* __this);
::app::Uno::Collections::Queue1_Enumerator__Uno_Action_bool_ Queue__Uno_Action_bool___GetEnumerator(Queue__Uno_Action_bool_* __this);
Queue__Uno_Action_bool_* Queue__Uno_Action_bool___New_1(::uStatic* __this);
Queue__Uno_Action_bool_* Queue__Uno_Action_bool___New_2(::uStatic* __this, int capacity);
::uDelegate* Queue__Uno_Action_bool___Peek(Queue__Uno_Action_bool_* __this);

struct Queue__Uno_Action_bool_ : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _head;
    int _tail;
    int _size;
    int _version;

    void _ObjInit() { Queue__Uno_Action_bool____ObjInit(this); }
    void _ObjInit_1(int capacity) { Queue__Uno_Action_bool____ObjInit_1(this, capacity); }
    void Clear() { Queue__Uno_Action_bool___Clear(this); }
    bool Contains(::uDelegate* item) { return Queue__Uno_Action_bool___Contains(this, item); }
    ::uDelegate* Dequeue() { return Queue__Uno_Action_bool___Dequeue(this); }
    ::uDelegate* ElementAt(int index) { return Queue__Uno_Action_bool___ElementAt(this, index); }
    void Enqueue(::uDelegate* item) { Queue__Uno_Action_bool___Enqueue(this, item); }
    void EnsureCapacity() { Queue__Uno_Action_bool___EnsureCapacity(this); }
    int Count() { return Queue__Uno_Action_bool___get_Count(this); }
    ::app::Uno::Collections::Queue1_Enumerator__Uno_Action_bool_ GetEnumerator();
    ::uDelegate* Peek() { return Queue__Uno_Action_bool___Peek(this); }
};

}}}

#include <app/Uno.Collections.Queue1_Enumerator__Uno_Action_bool_.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Queue1_Enumerator__Uno_Action_bool_ Queue__Uno_Action_bool_::GetEnumerator() { return Queue__Uno_Action_bool___GetEnumerator(this); }

}}}


#endif
