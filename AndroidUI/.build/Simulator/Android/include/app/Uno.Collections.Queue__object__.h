// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_QUEUE__OBJECT___H__
#define __APP_UNO_COLLECTIONS_QUEUE__OBJECT___H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Queue1_Enumerator__object__; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Queue__object__;

struct Queue__object____uType : ::uClassType
{
};

Queue__object____uType* Queue__object____typeof();

void Queue__object_____ObjInit(Queue__object__* __this);
void Queue__object_____ObjInit_1(Queue__object__* __this, int capacity);
void Queue__object____Clear(Queue__object__* __this);
bool Queue__object____Contains(Queue__object__* __this, ::uArray* item);
::uArray* Queue__object____Dequeue(Queue__object__* __this);
::uArray* Queue__object____ElementAt(Queue__object__* __this, int index);
void Queue__object____Enqueue(Queue__object__* __this, ::uArray* item);
void Queue__object____EnsureCapacity(Queue__object__* __this);
int Queue__object____get_Count(Queue__object__* __this);
::app::Uno::Collections::Queue1_Enumerator__object__ Queue__object____GetEnumerator(Queue__object__* __this);
Queue__object__* Queue__object____New_1(::uStatic* __this);
Queue__object__* Queue__object____New_2(::uStatic* __this, int capacity);
::uArray* Queue__object____Peek(Queue__object__* __this);

struct Queue__object__ : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _head;
    int _tail;
    int _size;
    int _version;

    void _ObjInit() { Queue__object_____ObjInit(this); }
    void _ObjInit_1(int capacity) { Queue__object_____ObjInit_1(this, capacity); }
    void Clear() { Queue__object____Clear(this); }
    bool Contains(::uArray* item) { return Queue__object____Contains(this, item); }
    ::uArray* Dequeue() { return Queue__object____Dequeue(this); }
    ::uArray* ElementAt(int index) { return Queue__object____ElementAt(this, index); }
    void Enqueue(::uArray* item) { Queue__object____Enqueue(this, item); }
    void EnsureCapacity() { Queue__object____EnsureCapacity(this); }
    int Count() { return Queue__object____get_Count(this); }
    ::app::Uno::Collections::Queue1_Enumerator__object__ GetEnumerator();
    ::uArray* Peek() { return Queue__object____Peek(this); }
};

}}}

#include <app/Uno.Collections.Queue1_Enumerator__object__.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Queue1_Enumerator__object__ Queue__object__::GetEnumerator() { return Queue__object____GetEnumerator(this); }

}}}


#endif
