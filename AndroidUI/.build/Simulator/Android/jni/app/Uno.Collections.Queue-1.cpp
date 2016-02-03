#include <app/Outracks.Simulator.Protocol.MessageFromClient.h>
#include <app/Outracks.Simulator.Protocol.MessageToClient.h>
#include <app/Uno.Action__bool.h>
#include <app/Uno.Action__Fuse_Camera_PictureResult.h>
#include <app/Uno.Action__string.h>
#include <app/Uno.Action__Uno_Exception.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.IEnumerator__Uno_Exception.h>
#include <app/Uno.Collections.Queue__object__.h>
#include <app/Uno.Collections.Queue__Outracks_Simulator_Protocol_MessageFromClient.h>
#include <app/Uno.Collections.Queue__Outracks_Simulator_Protocol_MessageToClient.h>
#include <app/Uno.Collections.Queue__Uno_Action_bool_.h>
#include <app/Uno.Collections.Queue__Uno_Action_Fuse_Camera_PictureResult_.h>
#include <app/Uno.Collections.Queue__Uno_Action_string_.h>
#include <app/Uno.Collections.Queue__Uno_Action_Uno_Exception_.h>
#include <app/Uno.Collections.Queue__Uno_Exception.h>
#include <app/Uno.Collections.Queue__Uno_Threading_Promise_bool_.h>
#include <app/Uno.Collections.Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_.h>
#include <app/Uno.Collections.Queue__Uno_Threading_Promise_string_.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Generic.h>
#include <app/Uno.Int.h>
#include <app/Uno.InvalidOperationException.h>
#include <app/Uno.String.h>
#include <app/Uno.Threading.Promise__bool.h>
#include <app/Uno.Threading.Promise__Fuse_Camera_PictureResult.h>
#include <app/Uno.Threading.Promise__string.h>

namespace app {
namespace Uno {
namespace Collections {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Queue__object____uType* Queue__object____typeof()
{
    static ::uStaticStrong<Queue__object____uType*> type;
    if (type != NULL) return type;

    type = (Queue__object____uType*)::uAllocClassType(sizeof(Queue__object____uType), "Uno.Collections.Queue<object[]>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(Queue__object__, _data));

    type->SetFields(5,
        ::uNewField("_data", NULL, offsetof(Queue__object__, _data), ::uGetArrayType(::uGetArrayType(::uObject__typeof()))),
        ::uNewField("_head", NULL, offsetof(Queue__object__, _head), ::app::Uno::Int__typeof()),
        ::uNewField("_size", NULL, offsetof(Queue__object__, _size), ::app::Uno::Int__typeof()),
        ::uNewField("_tail", NULL, offsetof(Queue__object__, _tail), ::app::Uno::Int__typeof()),
        ::uNewField("_version", NULL, offsetof(Queue__object__, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(9,
        ::uNewFunctionVoid("Clear", Queue__object____Clear, 0, false),
        ::uNewFunction("Contains", Queue__object____Contains, 0, false, ::app::Uno::Bool__typeof(), ::uGetArrayType(::uObject__typeof())),
        ::uNewFunction("Dequeue", Queue__object____Dequeue, 0, false, ::uGetArrayType(::uObject__typeof())),
        ::uNewFunctionVoid("Enqueue", Queue__object____Enqueue, 0, false, ::uGetArrayType(::uObject__typeof())),
        ::uNewFunction("get_Count", Queue__object____get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Queue__object____GetEnumerator, 0, false, ::app::Uno::Collections::Queue1_Enumerator__object____typeof()),
        ::uNewFunction(".ctor", Queue__object____New_1, 0, true, Queue__object____typeof()),
        ::uNewFunction(".ctor", Queue__object____New_2, 0, true, Queue__object____typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("Peek", Queue__object____Peek, 0, false, ::uGetArrayType(::uObject__typeof())));

    ::uRegisterType(type);
    return type;
}

void Queue__object_____ObjInit(Queue__object__* __this)
{
    __this->_data = NULL;
    __this->_head = 0;
    __this->_tail = 0;
    __this->_size = 0;
}

void Queue__object_____ObjInit_1(Queue__object__* __this, int capacity)
{
    __this->_data = ::uNewArray(::uGetArrayType(::uObject__typeof()), capacity);
    __this->_head = 0;
    __this->_tail = 0;
    __this->_size = 0;
}

void Queue__object____Clear(Queue__object__* __this)
{
    __this->_data = NULL;
    __this->_head = 0;
    __this->_tail = 0;
    __this->_size = 0;
    __this->_version++;
}

bool Queue__object____Contains(Queue__object__* __this, ::uArray* item)
{
    for (int i = __this->_head; i < __this->_tail; i++)
    {
        if (::app::Uno::Generic__Equals__object__(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::uArray*>(i), item))
        {
            return true;
        }
    }

    return false;
}

::uArray* Queue__object____Dequeue(Queue__object__* __this)
{
    if (__this->_size == 0)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Queue is empty")));
    }

    ::uArray* result = ::uPtr< ::uArray*>(__this->_data)->Item< ::uArray*>(__this->_head);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uArray*>(__this->_head) = NULL;
    __this->_head++;
    __this->_size--;
    __this->_version++;
    return result;
}

::uArray* Queue__object____ElementAt(Queue__object__* __this, int index)
{
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::uArray*>(__this->_head + index);
}

void Queue__object____Enqueue(Queue__object__* __this, ::uArray* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uArray*>(__this->_tail) = item;
    __this->_tail++;
    __this->_size++;
    __this->_version++;
}

void Queue__object____EnsureCapacity(Queue__object__* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::uGetArrayType(::uObject__typeof()), 2);
    }

    if (__this->_tail == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        int newSize = (__this->_size != 0) ? (__this->_size * 2) : ::uPtr< ::uArray*>(__this->_data)->Length();
        ::uArray* newData = ::uNewArray(::uGetArrayType(::uObject__typeof()), newSize);

        for (int i = 0; i < __this->_size; i++)
        {
            newData->ItemStrong< ::uArray*>(i) = __this->ElementAt(i);
        }

        __this->_data = newData;
        __this->_head = 0;
        __this->_tail = __this->_size;
    }
}

int Queue__object____get_Count(Queue__object__* __this)
{
    return __this->_size;
}

::app::Uno::Collections::Queue1_Enumerator__object__ Queue__object____GetEnumerator(Queue__object__* __this)
{
    return ::app::Uno::Collections::Queue1_Enumerator__object____New_1(NULL, __this);
}

Queue__object__* Queue__object____New_1(::uStatic* __this)
{
    Queue__object__* inst = (Queue__object__*)::uAllocObject(sizeof(Queue__object__), Queue__object____typeof());
    inst->_ObjInit();
    return inst;
}

Queue__object__* Queue__object____New_2(::uStatic* __this, int capacity)
{
    Queue__object__* inst = (Queue__object__*)::uAllocObject(sizeof(Queue__object__), Queue__object____typeof());
    inst->_ObjInit_1(capacity);
    return inst;
}

::uArray* Queue__object____Peek(Queue__object__* __this)
{
    if (__this->_size == 0)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Queue is empty")));
    }

    return ::uPtr< ::uArray*>(__this->_data)->Item< ::uArray*>(__this->_head);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Queue__Outracks_Simulator_Protocol_MessageFromClient__uType* Queue__Outracks_Simulator_Protocol_MessageFromClient__typeof()
{
    static ::uStaticStrong<Queue__Outracks_Simulator_Protocol_MessageFromClient__uType*> type;
    if (type != NULL) return type;

    type = (Queue__Outracks_Simulator_Protocol_MessageFromClient__uType*)::uAllocClassType(sizeof(Queue__Outracks_Simulator_Protocol_MessageFromClient__uType), "Uno.Collections.Queue<Outracks.Simulator.Protocol.MessageFromClient>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(Queue__Outracks_Simulator_Protocol_MessageFromClient, _data));

    type->SetFields(5,
        ::uNewField("_data", NULL, offsetof(Queue__Outracks_Simulator_Protocol_MessageFromClient, _data), ::uGetArrayType(::app::Outracks::Simulator::Protocol::MessageFromClient__typeof())),
        ::uNewField("_head", NULL, offsetof(Queue__Outracks_Simulator_Protocol_MessageFromClient, _head), ::app::Uno::Int__typeof()),
        ::uNewField("_size", NULL, offsetof(Queue__Outracks_Simulator_Protocol_MessageFromClient, _size), ::app::Uno::Int__typeof()),
        ::uNewField("_tail", NULL, offsetof(Queue__Outracks_Simulator_Protocol_MessageFromClient, _tail), ::app::Uno::Int__typeof()),
        ::uNewField("_version", NULL, offsetof(Queue__Outracks_Simulator_Protocol_MessageFromClient, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(9,
        ::uNewFunctionVoid("Clear", Queue__Outracks_Simulator_Protocol_MessageFromClient__Clear, 0, false),
        ::uNewFunction("Contains", Queue__Outracks_Simulator_Protocol_MessageFromClient__Contains, 0, false, ::app::Uno::Bool__typeof(), ::app::Outracks::Simulator::Protocol::MessageFromClient__typeof()),
        ::uNewFunction("Dequeue", Queue__Outracks_Simulator_Protocol_MessageFromClient__Dequeue, 0, false, ::app::Outracks::Simulator::Protocol::MessageFromClient__typeof()),
        ::uNewFunctionVoid("Enqueue", Queue__Outracks_Simulator_Protocol_MessageFromClient__Enqueue, 0, false, ::app::Outracks::Simulator::Protocol::MessageFromClient__typeof()),
        ::uNewFunction("get_Count", Queue__Outracks_Simulator_Protocol_MessageFromClient__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Queue__Outracks_Simulator_Protocol_MessageFromClient__GetEnumerator, 0, false, ::app::Uno::Collections::Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient__typeof()),
        ::uNewFunction(".ctor", Queue__Outracks_Simulator_Protocol_MessageFromClient__New_1, 0, true, Queue__Outracks_Simulator_Protocol_MessageFromClient__typeof()),
        ::uNewFunction(".ctor", Queue__Outracks_Simulator_Protocol_MessageFromClient__New_2, 0, true, Queue__Outracks_Simulator_Protocol_MessageFromClient__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("Peek", Queue__Outracks_Simulator_Protocol_MessageFromClient__Peek, 0, false, ::app::Outracks::Simulator::Protocol::MessageFromClient__typeof()));

    ::uRegisterType(type);
    return type;
}

void Queue__Outracks_Simulator_Protocol_MessageFromClient___ObjInit(Queue__Outracks_Simulator_Protocol_MessageFromClient* __this)
{
    __this->_data = NULL;
    __this->_head = 0;
    __this->_tail = 0;
    __this->_size = 0;
}

void Queue__Outracks_Simulator_Protocol_MessageFromClient___ObjInit_1(Queue__Outracks_Simulator_Protocol_MessageFromClient* __this, int capacity)
{
    __this->_data = ::uNewArray(::app::Outracks::Simulator::Protocol::MessageFromClient__typeof(), capacity);
    __this->_head = 0;
    __this->_tail = 0;
    __this->_size = 0;
}

void Queue__Outracks_Simulator_Protocol_MessageFromClient__Clear(Queue__Outracks_Simulator_Protocol_MessageFromClient* __this)
{
    __this->_data = NULL;
    __this->_head = 0;
    __this->_tail = 0;
    __this->_size = 0;
    __this->_version++;
}

bool Queue__Outracks_Simulator_Protocol_MessageFromClient__Contains(Queue__Outracks_Simulator_Protocol_MessageFromClient* __this, ::app::Outracks::Simulator::Protocol::MessageFromClient* item)
{
    for (int i = __this->_head; i < __this->_tail; i++)
    {
        if (::app::Uno::Generic__Equals__Outracks_Simulator_Protocol_MessageFromClient(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Outracks::Simulator::Protocol::MessageFromClient*>(i), item))
        {
            return true;
        }
    }

    return false;
}

::app::Outracks::Simulator::Protocol::MessageFromClient* Queue__Outracks_Simulator_Protocol_MessageFromClient__Dequeue(Queue__Outracks_Simulator_Protocol_MessageFromClient* __this)
{
    if (__this->_size == 0)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Queue is empty")));
    }

    ::app::Outracks::Simulator::Protocol::MessageFromClient* result = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Outracks::Simulator::Protocol::MessageFromClient*>(__this->_head);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Outracks::Simulator::Protocol::MessageFromClient*>(__this->_head) = NULL;
    __this->_head++;
    __this->_size--;
    __this->_version++;
    return result;
}

::app::Outracks::Simulator::Protocol::MessageFromClient* Queue__Outracks_Simulator_Protocol_MessageFromClient__ElementAt(Queue__Outracks_Simulator_Protocol_MessageFromClient* __this, int index)
{
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Outracks::Simulator::Protocol::MessageFromClient*>(__this->_head + index);
}

void Queue__Outracks_Simulator_Protocol_MessageFromClient__Enqueue(Queue__Outracks_Simulator_Protocol_MessageFromClient* __this, ::app::Outracks::Simulator::Protocol::MessageFromClient* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Outracks::Simulator::Protocol::MessageFromClient*>(__this->_tail) = item;
    __this->_tail++;
    __this->_size++;
    __this->_version++;
}

void Queue__Outracks_Simulator_Protocol_MessageFromClient__EnsureCapacity(Queue__Outracks_Simulator_Protocol_MessageFromClient* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Outracks::Simulator::Protocol::MessageFromClient__typeof(), 2);
    }

    if (__this->_tail == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        int newSize = (__this->_size != 0) ? (__this->_size * 2) : ::uPtr< ::uArray*>(__this->_data)->Length();
        ::uArray* newData = ::uNewArray(::app::Outracks::Simulator::Protocol::MessageFromClient__typeof(), newSize);

        for (int i = 0; i < __this->_size; i++)
        {
            newData->ItemStrong< ::app::Outracks::Simulator::Protocol::MessageFromClient*>(i) = __this->ElementAt(i);
        }

        __this->_data = newData;
        __this->_head = 0;
        __this->_tail = __this->_size;
    }
}

int Queue__Outracks_Simulator_Protocol_MessageFromClient__get_Count(Queue__Outracks_Simulator_Protocol_MessageFromClient* __this)
{
    return __this->_size;
}

::app::Uno::Collections::Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient Queue__Outracks_Simulator_Protocol_MessageFromClient__GetEnumerator(Queue__Outracks_Simulator_Protocol_MessageFromClient* __this)
{
    return ::app::Uno::Collections::Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient__New_1(NULL, __this);
}

Queue__Outracks_Simulator_Protocol_MessageFromClient* Queue__Outracks_Simulator_Protocol_MessageFromClient__New_1(::uStatic* __this)
{
    Queue__Outracks_Simulator_Protocol_MessageFromClient* inst = (Queue__Outracks_Simulator_Protocol_MessageFromClient*)::uAllocObject(sizeof(Queue__Outracks_Simulator_Protocol_MessageFromClient), Queue__Outracks_Simulator_Protocol_MessageFromClient__typeof());
    inst->_ObjInit();
    return inst;
}

Queue__Outracks_Simulator_Protocol_MessageFromClient* Queue__Outracks_Simulator_Protocol_MessageFromClient__New_2(::uStatic* __this, int capacity)
{
    Queue__Outracks_Simulator_Protocol_MessageFromClient* inst = (Queue__Outracks_Simulator_Protocol_MessageFromClient*)::uAllocObject(sizeof(Queue__Outracks_Simulator_Protocol_MessageFromClient), Queue__Outracks_Simulator_Protocol_MessageFromClient__typeof());
    inst->_ObjInit_1(capacity);
    return inst;
}

::app::Outracks::Simulator::Protocol::MessageFromClient* Queue__Outracks_Simulator_Protocol_MessageFromClient__Peek(Queue__Outracks_Simulator_Protocol_MessageFromClient* __this)
{
    if (__this->_size == 0)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Queue is empty")));
    }

    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Outracks::Simulator::Protocol::MessageFromClient*>(__this->_head);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Queue__Outracks_Simulator_Protocol_MessageToClient__uType* Queue__Outracks_Simulator_Protocol_MessageToClient__typeof()
{
    static ::uStaticStrong<Queue__Outracks_Simulator_Protocol_MessageToClient__uType*> type;
    if (type != NULL) return type;

    type = (Queue__Outracks_Simulator_Protocol_MessageToClient__uType*)::uAllocClassType(sizeof(Queue__Outracks_Simulator_Protocol_MessageToClient__uType), "Uno.Collections.Queue<Outracks.Simulator.Protocol.MessageToClient>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(Queue__Outracks_Simulator_Protocol_MessageToClient, _data));

    type->SetFields(5,
        ::uNewField("_data", NULL, offsetof(Queue__Outracks_Simulator_Protocol_MessageToClient, _data), ::uGetArrayType(::app::Outracks::Simulator::Protocol::MessageToClient__typeof())),
        ::uNewField("_head", NULL, offsetof(Queue__Outracks_Simulator_Protocol_MessageToClient, _head), ::app::Uno::Int__typeof()),
        ::uNewField("_size", NULL, offsetof(Queue__Outracks_Simulator_Protocol_MessageToClient, _size), ::app::Uno::Int__typeof()),
        ::uNewField("_tail", NULL, offsetof(Queue__Outracks_Simulator_Protocol_MessageToClient, _tail), ::app::Uno::Int__typeof()),
        ::uNewField("_version", NULL, offsetof(Queue__Outracks_Simulator_Protocol_MessageToClient, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(9,
        ::uNewFunctionVoid("Clear", Queue__Outracks_Simulator_Protocol_MessageToClient__Clear, 0, false),
        ::uNewFunction("Contains", Queue__Outracks_Simulator_Protocol_MessageToClient__Contains, 0, false, ::app::Uno::Bool__typeof(), ::app::Outracks::Simulator::Protocol::MessageToClient__typeof()),
        ::uNewFunction("Dequeue", Queue__Outracks_Simulator_Protocol_MessageToClient__Dequeue, 0, false, ::app::Outracks::Simulator::Protocol::MessageToClient__typeof()),
        ::uNewFunctionVoid("Enqueue", Queue__Outracks_Simulator_Protocol_MessageToClient__Enqueue, 0, false, ::app::Outracks::Simulator::Protocol::MessageToClient__typeof()),
        ::uNewFunction("get_Count", Queue__Outracks_Simulator_Protocol_MessageToClient__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Queue__Outracks_Simulator_Protocol_MessageToClient__GetEnumerator, 0, false, ::app::Uno::Collections::Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient__typeof()),
        ::uNewFunction(".ctor", Queue__Outracks_Simulator_Protocol_MessageToClient__New_1, 0, true, Queue__Outracks_Simulator_Protocol_MessageToClient__typeof()),
        ::uNewFunction(".ctor", Queue__Outracks_Simulator_Protocol_MessageToClient__New_2, 0, true, Queue__Outracks_Simulator_Protocol_MessageToClient__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("Peek", Queue__Outracks_Simulator_Protocol_MessageToClient__Peek, 0, false, ::app::Outracks::Simulator::Protocol::MessageToClient__typeof()));

    ::uRegisterType(type);
    return type;
}

void Queue__Outracks_Simulator_Protocol_MessageToClient___ObjInit(Queue__Outracks_Simulator_Protocol_MessageToClient* __this)
{
    __this->_data = NULL;
    __this->_head = 0;
    __this->_tail = 0;
    __this->_size = 0;
}

void Queue__Outracks_Simulator_Protocol_MessageToClient___ObjInit_1(Queue__Outracks_Simulator_Protocol_MessageToClient* __this, int capacity)
{
    __this->_data = ::uNewArray(::app::Outracks::Simulator::Protocol::MessageToClient__typeof(), capacity);
    __this->_head = 0;
    __this->_tail = 0;
    __this->_size = 0;
}

void Queue__Outracks_Simulator_Protocol_MessageToClient__Clear(Queue__Outracks_Simulator_Protocol_MessageToClient* __this)
{
    __this->_data = NULL;
    __this->_head = 0;
    __this->_tail = 0;
    __this->_size = 0;
    __this->_version++;
}

bool Queue__Outracks_Simulator_Protocol_MessageToClient__Contains(Queue__Outracks_Simulator_Protocol_MessageToClient* __this, ::app::Outracks::Simulator::Protocol::MessageToClient* item)
{
    for (int i = __this->_head; i < __this->_tail; i++)
    {
        if (::app::Uno::Generic__Equals__Outracks_Simulator_Protocol_MessageToClient(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Outracks::Simulator::Protocol::MessageToClient*>(i), item))
        {
            return true;
        }
    }

    return false;
}

::app::Outracks::Simulator::Protocol::MessageToClient* Queue__Outracks_Simulator_Protocol_MessageToClient__Dequeue(Queue__Outracks_Simulator_Protocol_MessageToClient* __this)
{
    if (__this->_size == 0)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Queue is empty")));
    }

    ::app::Outracks::Simulator::Protocol::MessageToClient* result = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Outracks::Simulator::Protocol::MessageToClient*>(__this->_head);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Outracks::Simulator::Protocol::MessageToClient*>(__this->_head) = NULL;
    __this->_head++;
    __this->_size--;
    __this->_version++;
    return result;
}

::app::Outracks::Simulator::Protocol::MessageToClient* Queue__Outracks_Simulator_Protocol_MessageToClient__ElementAt(Queue__Outracks_Simulator_Protocol_MessageToClient* __this, int index)
{
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Outracks::Simulator::Protocol::MessageToClient*>(__this->_head + index);
}

void Queue__Outracks_Simulator_Protocol_MessageToClient__Enqueue(Queue__Outracks_Simulator_Protocol_MessageToClient* __this, ::app::Outracks::Simulator::Protocol::MessageToClient* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Outracks::Simulator::Protocol::MessageToClient*>(__this->_tail) = item;
    __this->_tail++;
    __this->_size++;
    __this->_version++;
}

void Queue__Outracks_Simulator_Protocol_MessageToClient__EnsureCapacity(Queue__Outracks_Simulator_Protocol_MessageToClient* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Outracks::Simulator::Protocol::MessageToClient__typeof(), 2);
    }

    if (__this->_tail == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        int newSize = (__this->_size != 0) ? (__this->_size * 2) : ::uPtr< ::uArray*>(__this->_data)->Length();
        ::uArray* newData = ::uNewArray(::app::Outracks::Simulator::Protocol::MessageToClient__typeof(), newSize);

        for (int i = 0; i < __this->_size; i++)
        {
            newData->ItemStrong< ::app::Outracks::Simulator::Protocol::MessageToClient*>(i) = __this->ElementAt(i);
        }

        __this->_data = newData;
        __this->_head = 0;
        __this->_tail = __this->_size;
    }
}

int Queue__Outracks_Simulator_Protocol_MessageToClient__get_Count(Queue__Outracks_Simulator_Protocol_MessageToClient* __this)
{
    return __this->_size;
}

::app::Uno::Collections::Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient Queue__Outracks_Simulator_Protocol_MessageToClient__GetEnumerator(Queue__Outracks_Simulator_Protocol_MessageToClient* __this)
{
    return ::app::Uno::Collections::Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient__New_1(NULL, __this);
}

Queue__Outracks_Simulator_Protocol_MessageToClient* Queue__Outracks_Simulator_Protocol_MessageToClient__New_1(::uStatic* __this)
{
    Queue__Outracks_Simulator_Protocol_MessageToClient* inst = (Queue__Outracks_Simulator_Protocol_MessageToClient*)::uAllocObject(sizeof(Queue__Outracks_Simulator_Protocol_MessageToClient), Queue__Outracks_Simulator_Protocol_MessageToClient__typeof());
    inst->_ObjInit();
    return inst;
}

Queue__Outracks_Simulator_Protocol_MessageToClient* Queue__Outracks_Simulator_Protocol_MessageToClient__New_2(::uStatic* __this, int capacity)
{
    Queue__Outracks_Simulator_Protocol_MessageToClient* inst = (Queue__Outracks_Simulator_Protocol_MessageToClient*)::uAllocObject(sizeof(Queue__Outracks_Simulator_Protocol_MessageToClient), Queue__Outracks_Simulator_Protocol_MessageToClient__typeof());
    inst->_ObjInit_1(capacity);
    return inst;
}

::app::Outracks::Simulator::Protocol::MessageToClient* Queue__Outracks_Simulator_Protocol_MessageToClient__Peek(Queue__Outracks_Simulator_Protocol_MessageToClient* __this)
{
    if (__this->_size == 0)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Queue is empty")));
    }

    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Outracks::Simulator::Protocol::MessageToClient*>(__this->_head);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Queue__Uno_Action_bool___uType* Queue__Uno_Action_bool___typeof()
{
    static ::uStaticStrong<Queue__Uno_Action_bool___uType*> type;
    if (type != NULL) return type;

    type = (Queue__Uno_Action_bool___uType*)::uAllocClassType(sizeof(Queue__Uno_Action_bool___uType), "Uno.Collections.Queue<Uno.Action<bool>>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(Queue__Uno_Action_bool_, _data));

    type->SetFields(5,
        ::uNewField("_data", NULL, offsetof(Queue__Uno_Action_bool_, _data), ::uGetArrayType(::app::Uno::Action__bool__typeof())),
        ::uNewField("_head", NULL, offsetof(Queue__Uno_Action_bool_, _head), ::app::Uno::Int__typeof()),
        ::uNewField("_size", NULL, offsetof(Queue__Uno_Action_bool_, _size), ::app::Uno::Int__typeof()),
        ::uNewField("_tail", NULL, offsetof(Queue__Uno_Action_bool_, _tail), ::app::Uno::Int__typeof()),
        ::uNewField("_version", NULL, offsetof(Queue__Uno_Action_bool_, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(9,
        ::uNewFunctionVoid("Clear", Queue__Uno_Action_bool___Clear, 0, false),
        ::uNewFunction("Contains", Queue__Uno_Action_bool___Contains, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Action__bool__typeof()),
        ::uNewFunction("Dequeue", Queue__Uno_Action_bool___Dequeue, 0, false, ::app::Uno::Action__bool__typeof()),
        ::uNewFunctionVoid("Enqueue", Queue__Uno_Action_bool___Enqueue, 0, false, ::app::Uno::Action__bool__typeof()),
        ::uNewFunction("get_Count", Queue__Uno_Action_bool___get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Queue__Uno_Action_bool___GetEnumerator, 0, false, ::app::Uno::Collections::Queue1_Enumerator__Uno_Action_bool___typeof()),
        ::uNewFunction(".ctor", Queue__Uno_Action_bool___New_1, 0, true, Queue__Uno_Action_bool___typeof()),
        ::uNewFunction(".ctor", Queue__Uno_Action_bool___New_2, 0, true, Queue__Uno_Action_bool___typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("Peek", Queue__Uno_Action_bool___Peek, 0, false, ::app::Uno::Action__bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Queue__Uno_Action_bool____ObjInit(Queue__Uno_Action_bool_* __this)
{
    __this->_data = NULL;
    __this->_head = 0;
    __this->_tail = 0;
    __this->_size = 0;
}

void Queue__Uno_Action_bool____ObjInit_1(Queue__Uno_Action_bool_* __this, int capacity)
{
    __this->_data = ::uNewArray(::app::Uno::Action__bool__typeof(), capacity);
    __this->_head = 0;
    __this->_tail = 0;
    __this->_size = 0;
}

void Queue__Uno_Action_bool___Clear(Queue__Uno_Action_bool_* __this)
{
    __this->_data = NULL;
    __this->_head = 0;
    __this->_tail = 0;
    __this->_size = 0;
    __this->_version++;
}

bool Queue__Uno_Action_bool___Contains(Queue__Uno_Action_bool_* __this, ::uDelegate* item)
{
    for (int i = __this->_head; i < __this->_tail; i++)
    {
        if (::app::Uno::Generic__Equals__Uno_Action_bool_(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(i), item))
        {
            return true;
        }
    }

    return false;
}

::uDelegate* Queue__Uno_Action_bool___Dequeue(Queue__Uno_Action_bool_* __this)
{
    if (__this->_size == 0)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Queue is empty")));
    }

    ::uDelegate* result = ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(__this->_head);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uDelegate*>(__this->_head) = NULL;
    __this->_head++;
    __this->_size--;
    __this->_version++;
    return result;
}

::uDelegate* Queue__Uno_Action_bool___ElementAt(Queue__Uno_Action_bool_* __this, int index)
{
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(__this->_head + index);
}

void Queue__Uno_Action_bool___Enqueue(Queue__Uno_Action_bool_* __this, ::uDelegate* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uDelegate*>(__this->_tail) = item;
    __this->_tail++;
    __this->_size++;
    __this->_version++;
}

void Queue__Uno_Action_bool___EnsureCapacity(Queue__Uno_Action_bool_* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Uno::Action__bool__typeof(), 2);
    }

    if (__this->_tail == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        int newSize = (__this->_size != 0) ? (__this->_size * 2) : ::uPtr< ::uArray*>(__this->_data)->Length();
        ::uArray* newData = ::uNewArray(::app::Uno::Action__bool__typeof(), newSize);

        for (int i = 0; i < __this->_size; i++)
        {
            newData->ItemStrong< ::uDelegate*>(i) = __this->ElementAt(i);
        }

        __this->_data = newData;
        __this->_head = 0;
        __this->_tail = __this->_size;
    }
}

int Queue__Uno_Action_bool___get_Count(Queue__Uno_Action_bool_* __this)
{
    return __this->_size;
}

::app::Uno::Collections::Queue1_Enumerator__Uno_Action_bool_ Queue__Uno_Action_bool___GetEnumerator(Queue__Uno_Action_bool_* __this)
{
    return ::app::Uno::Collections::Queue1_Enumerator__Uno_Action_bool___New_1(NULL, __this);
}

Queue__Uno_Action_bool_* Queue__Uno_Action_bool___New_1(::uStatic* __this)
{
    Queue__Uno_Action_bool_* inst = (Queue__Uno_Action_bool_*)::uAllocObject(sizeof(Queue__Uno_Action_bool_), Queue__Uno_Action_bool___typeof());
    inst->_ObjInit();
    return inst;
}

Queue__Uno_Action_bool_* Queue__Uno_Action_bool___New_2(::uStatic* __this, int capacity)
{
    Queue__Uno_Action_bool_* inst = (Queue__Uno_Action_bool_*)::uAllocObject(sizeof(Queue__Uno_Action_bool_), Queue__Uno_Action_bool___typeof());
    inst->_ObjInit_1(capacity);
    return inst;
}

::uDelegate* Queue__Uno_Action_bool___Peek(Queue__Uno_Action_bool_* __this)
{
    if (__this->_size == 0)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Queue is empty")));
    }

    return ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(__this->_head);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Queue__Uno_Action_Fuse_Camera_PictureResult___uType* Queue__Uno_Action_Fuse_Camera_PictureResult___typeof()
{
    static ::uStaticStrong<Queue__Uno_Action_Fuse_Camera_PictureResult___uType*> type;
    if (type != NULL) return type;

    type = (Queue__Uno_Action_Fuse_Camera_PictureResult___uType*)::uAllocClassType(sizeof(Queue__Uno_Action_Fuse_Camera_PictureResult___uType), "Uno.Collections.Queue<Uno.Action<Fuse.Camera.PictureResult>>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(Queue__Uno_Action_Fuse_Camera_PictureResult_, _data));

    type->SetFields(5,
        ::uNewField("_data", NULL, offsetof(Queue__Uno_Action_Fuse_Camera_PictureResult_, _data), ::uGetArrayType(::app::Uno::Action__Fuse_Camera_PictureResult__typeof())),
        ::uNewField("_head", NULL, offsetof(Queue__Uno_Action_Fuse_Camera_PictureResult_, _head), ::app::Uno::Int__typeof()),
        ::uNewField("_size", NULL, offsetof(Queue__Uno_Action_Fuse_Camera_PictureResult_, _size), ::app::Uno::Int__typeof()),
        ::uNewField("_tail", NULL, offsetof(Queue__Uno_Action_Fuse_Camera_PictureResult_, _tail), ::app::Uno::Int__typeof()),
        ::uNewField("_version", NULL, offsetof(Queue__Uno_Action_Fuse_Camera_PictureResult_, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(9,
        ::uNewFunctionVoid("Clear", Queue__Uno_Action_Fuse_Camera_PictureResult___Clear, 0, false),
        ::uNewFunction("Contains", Queue__Uno_Action_Fuse_Camera_PictureResult___Contains, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Action__Fuse_Camera_PictureResult__typeof()),
        ::uNewFunction("Dequeue", Queue__Uno_Action_Fuse_Camera_PictureResult___Dequeue, 0, false, ::app::Uno::Action__Fuse_Camera_PictureResult__typeof()),
        ::uNewFunctionVoid("Enqueue", Queue__Uno_Action_Fuse_Camera_PictureResult___Enqueue, 0, false, ::app::Uno::Action__Fuse_Camera_PictureResult__typeof()),
        ::uNewFunction("get_Count", Queue__Uno_Action_Fuse_Camera_PictureResult___get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Queue__Uno_Action_Fuse_Camera_PictureResult___GetEnumerator, 0, false, ::app::Uno::Collections::Queue1_Enumerator__Uno_Action_Fuse_Camera_PictureResult___typeof()),
        ::uNewFunction(".ctor", Queue__Uno_Action_Fuse_Camera_PictureResult___New_1, 0, true, Queue__Uno_Action_Fuse_Camera_PictureResult___typeof()),
        ::uNewFunction(".ctor", Queue__Uno_Action_Fuse_Camera_PictureResult___New_2, 0, true, Queue__Uno_Action_Fuse_Camera_PictureResult___typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("Peek", Queue__Uno_Action_Fuse_Camera_PictureResult___Peek, 0, false, ::app::Uno::Action__Fuse_Camera_PictureResult__typeof()));

    ::uRegisterType(type);
    return type;
}

void Queue__Uno_Action_Fuse_Camera_PictureResult____ObjInit(Queue__Uno_Action_Fuse_Camera_PictureResult_* __this)
{
    __this->_data = NULL;
    __this->_head = 0;
    __this->_tail = 0;
    __this->_size = 0;
}

void Queue__Uno_Action_Fuse_Camera_PictureResult____ObjInit_1(Queue__Uno_Action_Fuse_Camera_PictureResult_* __this, int capacity)
{
    __this->_data = ::uNewArray(::app::Uno::Action__Fuse_Camera_PictureResult__typeof(), capacity);
    __this->_head = 0;
    __this->_tail = 0;
    __this->_size = 0;
}

void Queue__Uno_Action_Fuse_Camera_PictureResult___Clear(Queue__Uno_Action_Fuse_Camera_PictureResult_* __this)
{
    __this->_data = NULL;
    __this->_head = 0;
    __this->_tail = 0;
    __this->_size = 0;
    __this->_version++;
}

bool Queue__Uno_Action_Fuse_Camera_PictureResult___Contains(Queue__Uno_Action_Fuse_Camera_PictureResult_* __this, ::uDelegate* item)
{
    for (int i = __this->_head; i < __this->_tail; i++)
    {
        if (::app::Uno::Generic__Equals__Uno_Action_Fuse_Camera_PictureResult_(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(i), item))
        {
            return true;
        }
    }

    return false;
}

::uDelegate* Queue__Uno_Action_Fuse_Camera_PictureResult___Dequeue(Queue__Uno_Action_Fuse_Camera_PictureResult_* __this)
{
    if (__this->_size == 0)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Queue is empty")));
    }

    ::uDelegate* result = ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(__this->_head);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uDelegate*>(__this->_head) = NULL;
    __this->_head++;
    __this->_size--;
    __this->_version++;
    return result;
}

::uDelegate* Queue__Uno_Action_Fuse_Camera_PictureResult___ElementAt(Queue__Uno_Action_Fuse_Camera_PictureResult_* __this, int index)
{
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(__this->_head + index);
}

void Queue__Uno_Action_Fuse_Camera_PictureResult___Enqueue(Queue__Uno_Action_Fuse_Camera_PictureResult_* __this, ::uDelegate* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uDelegate*>(__this->_tail) = item;
    __this->_tail++;
    __this->_size++;
    __this->_version++;
}

void Queue__Uno_Action_Fuse_Camera_PictureResult___EnsureCapacity(Queue__Uno_Action_Fuse_Camera_PictureResult_* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Uno::Action__Fuse_Camera_PictureResult__typeof(), 2);
    }

    if (__this->_tail == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        int newSize = (__this->_size != 0) ? (__this->_size * 2) : ::uPtr< ::uArray*>(__this->_data)->Length();
        ::uArray* newData = ::uNewArray(::app::Uno::Action__Fuse_Camera_PictureResult__typeof(), newSize);

        for (int i = 0; i < __this->_size; i++)
        {
            newData->ItemStrong< ::uDelegate*>(i) = __this->ElementAt(i);
        }

        __this->_data = newData;
        __this->_head = 0;
        __this->_tail = __this->_size;
    }
}

int Queue__Uno_Action_Fuse_Camera_PictureResult___get_Count(Queue__Uno_Action_Fuse_Camera_PictureResult_* __this)
{
    return __this->_size;
}

::app::Uno::Collections::Queue1_Enumerator__Uno_Action_Fuse_Camera_PictureResult_ Queue__Uno_Action_Fuse_Camera_PictureResult___GetEnumerator(Queue__Uno_Action_Fuse_Camera_PictureResult_* __this)
{
    return ::app::Uno::Collections::Queue1_Enumerator__Uno_Action_Fuse_Camera_PictureResult___New_1(NULL, __this);
}

Queue__Uno_Action_Fuse_Camera_PictureResult_* Queue__Uno_Action_Fuse_Camera_PictureResult___New_1(::uStatic* __this)
{
    Queue__Uno_Action_Fuse_Camera_PictureResult_* inst = (Queue__Uno_Action_Fuse_Camera_PictureResult_*)::uAllocObject(sizeof(Queue__Uno_Action_Fuse_Camera_PictureResult_), Queue__Uno_Action_Fuse_Camera_PictureResult___typeof());
    inst->_ObjInit();
    return inst;
}

Queue__Uno_Action_Fuse_Camera_PictureResult_* Queue__Uno_Action_Fuse_Camera_PictureResult___New_2(::uStatic* __this, int capacity)
{
    Queue__Uno_Action_Fuse_Camera_PictureResult_* inst = (Queue__Uno_Action_Fuse_Camera_PictureResult_*)::uAllocObject(sizeof(Queue__Uno_Action_Fuse_Camera_PictureResult_), Queue__Uno_Action_Fuse_Camera_PictureResult___typeof());
    inst->_ObjInit_1(capacity);
    return inst;
}

::uDelegate* Queue__Uno_Action_Fuse_Camera_PictureResult___Peek(Queue__Uno_Action_Fuse_Camera_PictureResult_* __this)
{
    if (__this->_size == 0)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Queue is empty")));
    }

    return ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(__this->_head);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Queue__Uno_Action_string___uType* Queue__Uno_Action_string___typeof()
{
    static ::uStaticStrong<Queue__Uno_Action_string___uType*> type;
    if (type != NULL) return type;

    type = (Queue__Uno_Action_string___uType*)::uAllocClassType(sizeof(Queue__Uno_Action_string___uType), "Uno.Collections.Queue<Uno.Action<string>>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(Queue__Uno_Action_string_, _data));

    type->SetFields(5,
        ::uNewField("_data", NULL, offsetof(Queue__Uno_Action_string_, _data), ::uGetArrayType(::app::Uno::Action__string__typeof())),
        ::uNewField("_head", NULL, offsetof(Queue__Uno_Action_string_, _head), ::app::Uno::Int__typeof()),
        ::uNewField("_size", NULL, offsetof(Queue__Uno_Action_string_, _size), ::app::Uno::Int__typeof()),
        ::uNewField("_tail", NULL, offsetof(Queue__Uno_Action_string_, _tail), ::app::Uno::Int__typeof()),
        ::uNewField("_version", NULL, offsetof(Queue__Uno_Action_string_, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(9,
        ::uNewFunctionVoid("Clear", Queue__Uno_Action_string___Clear, 0, false),
        ::uNewFunction("Contains", Queue__Uno_Action_string___Contains, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Action__string__typeof()),
        ::uNewFunction("Dequeue", Queue__Uno_Action_string___Dequeue, 0, false, ::app::Uno::Action__string__typeof()),
        ::uNewFunctionVoid("Enqueue", Queue__Uno_Action_string___Enqueue, 0, false, ::app::Uno::Action__string__typeof()),
        ::uNewFunction("get_Count", Queue__Uno_Action_string___get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Queue__Uno_Action_string___GetEnumerator, 0, false, ::app::Uno::Collections::Queue1_Enumerator__Uno_Action_string___typeof()),
        ::uNewFunction(".ctor", Queue__Uno_Action_string___New_1, 0, true, Queue__Uno_Action_string___typeof()),
        ::uNewFunction(".ctor", Queue__Uno_Action_string___New_2, 0, true, Queue__Uno_Action_string___typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("Peek", Queue__Uno_Action_string___Peek, 0, false, ::app::Uno::Action__string__typeof()));

    ::uRegisterType(type);
    return type;
}

void Queue__Uno_Action_string____ObjInit(Queue__Uno_Action_string_* __this)
{
    __this->_data = NULL;
    __this->_head = 0;
    __this->_tail = 0;
    __this->_size = 0;
}

void Queue__Uno_Action_string____ObjInit_1(Queue__Uno_Action_string_* __this, int capacity)
{
    __this->_data = ::uNewArray(::app::Uno::Action__string__typeof(), capacity);
    __this->_head = 0;
    __this->_tail = 0;
    __this->_size = 0;
}

void Queue__Uno_Action_string___Clear(Queue__Uno_Action_string_* __this)
{
    __this->_data = NULL;
    __this->_head = 0;
    __this->_tail = 0;
    __this->_size = 0;
    __this->_version++;
}

bool Queue__Uno_Action_string___Contains(Queue__Uno_Action_string_* __this, ::uDelegate* item)
{
    for (int i = __this->_head; i < __this->_tail; i++)
    {
        if (::app::Uno::Generic__Equals__Uno_Action_string_(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(i), item))
        {
            return true;
        }
    }

    return false;
}

::uDelegate* Queue__Uno_Action_string___Dequeue(Queue__Uno_Action_string_* __this)
{
    if (__this->_size == 0)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Queue is empty")));
    }

    ::uDelegate* result = ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(__this->_head);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uDelegate*>(__this->_head) = NULL;
    __this->_head++;
    __this->_size--;
    __this->_version++;
    return result;
}

::uDelegate* Queue__Uno_Action_string___ElementAt(Queue__Uno_Action_string_* __this, int index)
{
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(__this->_head + index);
}

void Queue__Uno_Action_string___Enqueue(Queue__Uno_Action_string_* __this, ::uDelegate* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uDelegate*>(__this->_tail) = item;
    __this->_tail++;
    __this->_size++;
    __this->_version++;
}

void Queue__Uno_Action_string___EnsureCapacity(Queue__Uno_Action_string_* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Uno::Action__string__typeof(), 2);
    }

    if (__this->_tail == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        int newSize = (__this->_size != 0) ? (__this->_size * 2) : ::uPtr< ::uArray*>(__this->_data)->Length();
        ::uArray* newData = ::uNewArray(::app::Uno::Action__string__typeof(), newSize);

        for (int i = 0; i < __this->_size; i++)
        {
            newData->ItemStrong< ::uDelegate*>(i) = __this->ElementAt(i);
        }

        __this->_data = newData;
        __this->_head = 0;
        __this->_tail = __this->_size;
    }
}

int Queue__Uno_Action_string___get_Count(Queue__Uno_Action_string_* __this)
{
    return __this->_size;
}

::app::Uno::Collections::Queue1_Enumerator__Uno_Action_string_ Queue__Uno_Action_string___GetEnumerator(Queue__Uno_Action_string_* __this)
{
    return ::app::Uno::Collections::Queue1_Enumerator__Uno_Action_string___New_1(NULL, __this);
}

Queue__Uno_Action_string_* Queue__Uno_Action_string___New_1(::uStatic* __this)
{
    Queue__Uno_Action_string_* inst = (Queue__Uno_Action_string_*)::uAllocObject(sizeof(Queue__Uno_Action_string_), Queue__Uno_Action_string___typeof());
    inst->_ObjInit();
    return inst;
}

Queue__Uno_Action_string_* Queue__Uno_Action_string___New_2(::uStatic* __this, int capacity)
{
    Queue__Uno_Action_string_* inst = (Queue__Uno_Action_string_*)::uAllocObject(sizeof(Queue__Uno_Action_string_), Queue__Uno_Action_string___typeof());
    inst->_ObjInit_1(capacity);
    return inst;
}

::uDelegate* Queue__Uno_Action_string___Peek(Queue__Uno_Action_string_* __this)
{
    if (__this->_size == 0)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Queue is empty")));
    }

    return ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(__this->_head);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Queue__Uno_Action_Uno_Exception___uType* Queue__Uno_Action_Uno_Exception___typeof()
{
    static ::uStaticStrong<Queue__Uno_Action_Uno_Exception___uType*> type;
    if (type != NULL) return type;

    type = (Queue__Uno_Action_Uno_Exception___uType*)::uAllocClassType(sizeof(Queue__Uno_Action_Uno_Exception___uType), "Uno.Collections.Queue<Uno.Action<Uno.Exception>>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(Queue__Uno_Action_Uno_Exception_, _data));

    type->SetFields(5,
        ::uNewField("_data", NULL, offsetof(Queue__Uno_Action_Uno_Exception_, _data), ::uGetArrayType(::app::Uno::Action__Uno_Exception__typeof())),
        ::uNewField("_head", NULL, offsetof(Queue__Uno_Action_Uno_Exception_, _head), ::app::Uno::Int__typeof()),
        ::uNewField("_size", NULL, offsetof(Queue__Uno_Action_Uno_Exception_, _size), ::app::Uno::Int__typeof()),
        ::uNewField("_tail", NULL, offsetof(Queue__Uno_Action_Uno_Exception_, _tail), ::app::Uno::Int__typeof()),
        ::uNewField("_version", NULL, offsetof(Queue__Uno_Action_Uno_Exception_, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(9,
        ::uNewFunctionVoid("Clear", Queue__Uno_Action_Uno_Exception___Clear, 0, false),
        ::uNewFunction("Contains", Queue__Uno_Action_Uno_Exception___Contains, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Action__Uno_Exception__typeof()),
        ::uNewFunction("Dequeue", Queue__Uno_Action_Uno_Exception___Dequeue, 0, false, ::app::Uno::Action__Uno_Exception__typeof()),
        ::uNewFunctionVoid("Enqueue", Queue__Uno_Action_Uno_Exception___Enqueue, 0, false, ::app::Uno::Action__Uno_Exception__typeof()),
        ::uNewFunction("get_Count", Queue__Uno_Action_Uno_Exception___get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Queue__Uno_Action_Uno_Exception___GetEnumerator, 0, false, ::app::Uno::Collections::Queue1_Enumerator__Uno_Action_Uno_Exception___typeof()),
        ::uNewFunction(".ctor", Queue__Uno_Action_Uno_Exception___New_1, 0, true, Queue__Uno_Action_Uno_Exception___typeof()),
        ::uNewFunction(".ctor", Queue__Uno_Action_Uno_Exception___New_2, 0, true, Queue__Uno_Action_Uno_Exception___typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("Peek", Queue__Uno_Action_Uno_Exception___Peek, 0, false, ::app::Uno::Action__Uno_Exception__typeof()));

    ::uRegisterType(type);
    return type;
}

void Queue__Uno_Action_Uno_Exception____ObjInit(Queue__Uno_Action_Uno_Exception_* __this)
{
    __this->_data = NULL;
    __this->_head = 0;
    __this->_tail = 0;
    __this->_size = 0;
}

void Queue__Uno_Action_Uno_Exception____ObjInit_1(Queue__Uno_Action_Uno_Exception_* __this, int capacity)
{
    __this->_data = ::uNewArray(::app::Uno::Action__Uno_Exception__typeof(), capacity);
    __this->_head = 0;
    __this->_tail = 0;
    __this->_size = 0;
}

void Queue__Uno_Action_Uno_Exception___Clear(Queue__Uno_Action_Uno_Exception_* __this)
{
    __this->_data = NULL;
    __this->_head = 0;
    __this->_tail = 0;
    __this->_size = 0;
    __this->_version++;
}

bool Queue__Uno_Action_Uno_Exception___Contains(Queue__Uno_Action_Uno_Exception_* __this, ::uDelegate* item)
{
    for (int i = __this->_head; i < __this->_tail; i++)
    {
        if (::app::Uno::Generic__Equals__Uno_Action_Uno_Exception_(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(i), item))
        {
            return true;
        }
    }

    return false;
}

::uDelegate* Queue__Uno_Action_Uno_Exception___Dequeue(Queue__Uno_Action_Uno_Exception_* __this)
{
    if (__this->_size == 0)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Queue is empty")));
    }

    ::uDelegate* result = ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(__this->_head);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uDelegate*>(__this->_head) = NULL;
    __this->_head++;
    __this->_size--;
    __this->_version++;
    return result;
}

::uDelegate* Queue__Uno_Action_Uno_Exception___ElementAt(Queue__Uno_Action_Uno_Exception_* __this, int index)
{
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(__this->_head + index);
}

void Queue__Uno_Action_Uno_Exception___Enqueue(Queue__Uno_Action_Uno_Exception_* __this, ::uDelegate* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uDelegate*>(__this->_tail) = item;
    __this->_tail++;
    __this->_size++;
    __this->_version++;
}

void Queue__Uno_Action_Uno_Exception___EnsureCapacity(Queue__Uno_Action_Uno_Exception_* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Uno::Action__Uno_Exception__typeof(), 2);
    }

    if (__this->_tail == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        int newSize = (__this->_size != 0) ? (__this->_size * 2) : ::uPtr< ::uArray*>(__this->_data)->Length();
        ::uArray* newData = ::uNewArray(::app::Uno::Action__Uno_Exception__typeof(), newSize);

        for (int i = 0; i < __this->_size; i++)
        {
            newData->ItemStrong< ::uDelegate*>(i) = __this->ElementAt(i);
        }

        __this->_data = newData;
        __this->_head = 0;
        __this->_tail = __this->_size;
    }
}

int Queue__Uno_Action_Uno_Exception___get_Count(Queue__Uno_Action_Uno_Exception_* __this)
{
    return __this->_size;
}

::app::Uno::Collections::Queue1_Enumerator__Uno_Action_Uno_Exception_ Queue__Uno_Action_Uno_Exception___GetEnumerator(Queue__Uno_Action_Uno_Exception_* __this)
{
    return ::app::Uno::Collections::Queue1_Enumerator__Uno_Action_Uno_Exception___New_1(NULL, __this);
}

Queue__Uno_Action_Uno_Exception_* Queue__Uno_Action_Uno_Exception___New_1(::uStatic* __this)
{
    Queue__Uno_Action_Uno_Exception_* inst = (Queue__Uno_Action_Uno_Exception_*)::uAllocObject(sizeof(Queue__Uno_Action_Uno_Exception_), Queue__Uno_Action_Uno_Exception___typeof());
    inst->_ObjInit();
    return inst;
}

Queue__Uno_Action_Uno_Exception_* Queue__Uno_Action_Uno_Exception___New_2(::uStatic* __this, int capacity)
{
    Queue__Uno_Action_Uno_Exception_* inst = (Queue__Uno_Action_Uno_Exception_*)::uAllocObject(sizeof(Queue__Uno_Action_Uno_Exception_), Queue__Uno_Action_Uno_Exception___typeof());
    inst->_ObjInit_1(capacity);
    return inst;
}

::uDelegate* Queue__Uno_Action_Uno_Exception___Peek(Queue__Uno_Action_Uno_Exception_* __this)
{
    if (__this->_size == 0)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Queue is empty")));
    }

    return ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(__this->_head);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Queue__Uno_Exception__uType* Queue__Uno_Exception__typeof()
{
    static ::uStaticStrong<Queue__Uno_Exception__uType*> type;
    if (type != NULL) return type;

    type = (Queue__Uno_Exception__uType*)::uAllocClassType(sizeof(Queue__Uno_Exception__uType), "Uno.Collections.Queue<Uno.Exception>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))Queue__Uno_Exception__GetEnumerator_boxed;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Uno_Exception__typeof(), offsetof(Queue__Uno_Exception__uType, __interface_0));

    type->SetStrongRefs(
        "_data", offsetof(Queue__Uno_Exception, _data));

    type->SetFields(5,
        ::uNewField("_data", NULL, offsetof(Queue__Uno_Exception, _data), ::uGetArrayType(::app::Uno::Exception__typeof())),
        ::uNewField("_head", NULL, offsetof(Queue__Uno_Exception, _head), ::app::Uno::Int__typeof()),
        ::uNewField("_size", NULL, offsetof(Queue__Uno_Exception, _size), ::app::Uno::Int__typeof()),
        ::uNewField("_tail", NULL, offsetof(Queue__Uno_Exception, _tail), ::app::Uno::Int__typeof()),
        ::uNewField("_version", NULL, offsetof(Queue__Uno_Exception, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(9,
        ::uNewFunctionVoid("Clear", Queue__Uno_Exception__Clear, 0, false),
        ::uNewFunction("Contains", Queue__Uno_Exception__Contains, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Exception__typeof()),
        ::uNewFunction("Dequeue", Queue__Uno_Exception__Dequeue, 0, false, ::app::Uno::Exception__typeof()),
        ::uNewFunctionVoid("Enqueue", Queue__Uno_Exception__Enqueue, 0, false, ::app::Uno::Exception__typeof()),
        ::uNewFunction("get_Count", Queue__Uno_Exception__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Queue__Uno_Exception__GetEnumerator, 0, false, ::app::Uno::Collections::Queue1_Enumerator__Uno_Exception__typeof()),
        ::uNewFunction(".ctor", Queue__Uno_Exception__New_1, 0, true, Queue__Uno_Exception__typeof()),
        ::uNewFunction(".ctor", Queue__Uno_Exception__New_2, 0, true, Queue__Uno_Exception__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("Peek", Queue__Uno_Exception__Peek, 0, false, ::app::Uno::Exception__typeof()));

    ::uRegisterType(type);
    return type;
}

::uObject* Queue__Uno_Exception__GetEnumerator_boxed(Queue__Uno_Exception* __this)
{
    return ::uBox(::app::Uno::Collections::Queue1_Enumerator__Uno_Exception__typeof(), __this->GetEnumerator());
}

void Queue__Uno_Exception___ObjInit(Queue__Uno_Exception* __this)
{
    __this->_data = NULL;
    __this->_head = 0;
    __this->_tail = 0;
    __this->_size = 0;
}

void Queue__Uno_Exception___ObjInit_1(Queue__Uno_Exception* __this, int capacity)
{
    __this->_data = ::uNewArray(::app::Uno::Exception__typeof(), capacity);
    __this->_head = 0;
    __this->_tail = 0;
    __this->_size = 0;
}

void Queue__Uno_Exception__Clear(Queue__Uno_Exception* __this)
{
    __this->_data = NULL;
    __this->_head = 0;
    __this->_tail = 0;
    __this->_size = 0;
    __this->_version++;
}

bool Queue__Uno_Exception__Contains(Queue__Uno_Exception* __this, ::app::Uno::Exception* item)
{
    for (int i = __this->_head; i < __this->_tail; i++)
    {
        if (::app::Uno::Generic__Equals__Uno_Exception(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Exception*>(i), item))
        {
            return true;
        }
    }

    return false;
}

::app::Uno::Exception* Queue__Uno_Exception__Dequeue(Queue__Uno_Exception* __this)
{
    if (__this->_size == 0)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Queue is empty")));
    }

    ::app::Uno::Exception* result = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Exception*>(__this->_head);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Uno::Exception*>(__this->_head) = NULL;
    __this->_head++;
    __this->_size--;
    __this->_version++;
    return result;
}

::app::Uno::Exception* Queue__Uno_Exception__ElementAt(Queue__Uno_Exception* __this, int index)
{
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Exception*>(__this->_head + index);
}

void Queue__Uno_Exception__Enqueue(Queue__Uno_Exception* __this, ::app::Uno::Exception* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Uno::Exception*>(__this->_tail) = item;
    __this->_tail++;
    __this->_size++;
    __this->_version++;
}

void Queue__Uno_Exception__EnsureCapacity(Queue__Uno_Exception* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Uno::Exception__typeof(), 2);
    }

    if (__this->_tail == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        int newSize = (__this->_size != 0) ? (__this->_size * 2) : ::uPtr< ::uArray*>(__this->_data)->Length();
        ::uArray* newData = ::uNewArray(::app::Uno::Exception__typeof(), newSize);

        for (int i = 0; i < __this->_size; i++)
        {
            newData->ItemStrong< ::app::Uno::Exception*>(i) = __this->ElementAt(i);
        }

        __this->_data = newData;
        __this->_head = 0;
        __this->_tail = __this->_size;
    }
}

int Queue__Uno_Exception__get_Count(Queue__Uno_Exception* __this)
{
    return __this->_size;
}

::app::Uno::Collections::Queue1_Enumerator__Uno_Exception Queue__Uno_Exception__GetEnumerator(Queue__Uno_Exception* __this)
{
    return ::app::Uno::Collections::Queue1_Enumerator__Uno_Exception__New_1(NULL, __this);
}

Queue__Uno_Exception* Queue__Uno_Exception__New_1(::uStatic* __this)
{
    Queue__Uno_Exception* inst = (Queue__Uno_Exception*)::uAllocObject(sizeof(Queue__Uno_Exception), Queue__Uno_Exception__typeof());
    inst->_ObjInit();
    return inst;
}

Queue__Uno_Exception* Queue__Uno_Exception__New_2(::uStatic* __this, int capacity)
{
    Queue__Uno_Exception* inst = (Queue__Uno_Exception*)::uAllocObject(sizeof(Queue__Uno_Exception), Queue__Uno_Exception__typeof());
    inst->_ObjInit_1(capacity);
    return inst;
}

::app::Uno::Exception* Queue__Uno_Exception__Peek(Queue__Uno_Exception* __this)
{
    if (__this->_size == 0)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Queue is empty")));
    }

    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Exception*>(__this->_head);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Queue__Uno_Threading_Promise_bool___uType* Queue__Uno_Threading_Promise_bool___typeof()
{
    static ::uStaticStrong<Queue__Uno_Threading_Promise_bool___uType*> type;
    if (type != NULL) return type;

    type = (Queue__Uno_Threading_Promise_bool___uType*)::uAllocClassType(sizeof(Queue__Uno_Threading_Promise_bool___uType), "Uno.Collections.Queue<Uno.Threading.Promise<bool>>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(Queue__Uno_Threading_Promise_bool_, _data));

    type->SetFields(5,
        ::uNewField("_data", NULL, offsetof(Queue__Uno_Threading_Promise_bool_, _data), ::uGetArrayType(::app::Uno::Threading::Promise__bool__typeof())),
        ::uNewField("_head", NULL, offsetof(Queue__Uno_Threading_Promise_bool_, _head), ::app::Uno::Int__typeof()),
        ::uNewField("_size", NULL, offsetof(Queue__Uno_Threading_Promise_bool_, _size), ::app::Uno::Int__typeof()),
        ::uNewField("_tail", NULL, offsetof(Queue__Uno_Threading_Promise_bool_, _tail), ::app::Uno::Int__typeof()),
        ::uNewField("_version", NULL, offsetof(Queue__Uno_Threading_Promise_bool_, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(9,
        ::uNewFunctionVoid("Clear", Queue__Uno_Threading_Promise_bool___Clear, 0, false),
        ::uNewFunction("Contains", Queue__Uno_Threading_Promise_bool___Contains, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Threading::Promise__bool__typeof()),
        ::uNewFunction("Dequeue", Queue__Uno_Threading_Promise_bool___Dequeue, 0, false, ::app::Uno::Threading::Promise__bool__typeof()),
        ::uNewFunctionVoid("Enqueue", Queue__Uno_Threading_Promise_bool___Enqueue, 0, false, ::app::Uno::Threading::Promise__bool__typeof()),
        ::uNewFunction("get_Count", Queue__Uno_Threading_Promise_bool___get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Queue__Uno_Threading_Promise_bool___GetEnumerator, 0, false, ::app::Uno::Collections::Queue1_Enumerator__Uno_Threading_Promise_bool___typeof()),
        ::uNewFunction(".ctor", Queue__Uno_Threading_Promise_bool___New_1, 0, true, Queue__Uno_Threading_Promise_bool___typeof()),
        ::uNewFunction(".ctor", Queue__Uno_Threading_Promise_bool___New_2, 0, true, Queue__Uno_Threading_Promise_bool___typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("Peek", Queue__Uno_Threading_Promise_bool___Peek, 0, false, ::app::Uno::Threading::Promise__bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Queue__Uno_Threading_Promise_bool____ObjInit(Queue__Uno_Threading_Promise_bool_* __this)
{
    __this->_data = NULL;
    __this->_head = 0;
    __this->_tail = 0;
    __this->_size = 0;
}

void Queue__Uno_Threading_Promise_bool____ObjInit_1(Queue__Uno_Threading_Promise_bool_* __this, int capacity)
{
    __this->_data = ::uNewArray(::app::Uno::Threading::Promise__bool__typeof(), capacity);
    __this->_head = 0;
    __this->_tail = 0;
    __this->_size = 0;
}

void Queue__Uno_Threading_Promise_bool___Clear(Queue__Uno_Threading_Promise_bool_* __this)
{
    __this->_data = NULL;
    __this->_head = 0;
    __this->_tail = 0;
    __this->_size = 0;
    __this->_version++;
}

bool Queue__Uno_Threading_Promise_bool___Contains(Queue__Uno_Threading_Promise_bool_* __this, ::app::Uno::Threading::Promise__bool* item)
{
    for (int i = __this->_head; i < __this->_tail; i++)
    {
        if (::app::Uno::Generic__Equals__Uno_Threading_Promise_bool_(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Threading::Promise__bool*>(i), item))
        {
            return true;
        }
    }

    return false;
}

::app::Uno::Threading::Promise__bool* Queue__Uno_Threading_Promise_bool___Dequeue(Queue__Uno_Threading_Promise_bool_* __this)
{
    if (__this->_size == 0)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Queue is empty")));
    }

    ::app::Uno::Threading::Promise__bool* result = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Threading::Promise__bool*>(__this->_head);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Uno::Threading::Promise__bool*>(__this->_head) = NULL;
    __this->_head++;
    __this->_size--;
    __this->_version++;
    return result;
}

::app::Uno::Threading::Promise__bool* Queue__Uno_Threading_Promise_bool___ElementAt(Queue__Uno_Threading_Promise_bool_* __this, int index)
{
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Threading::Promise__bool*>(__this->_head + index);
}

void Queue__Uno_Threading_Promise_bool___Enqueue(Queue__Uno_Threading_Promise_bool_* __this, ::app::Uno::Threading::Promise__bool* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Uno::Threading::Promise__bool*>(__this->_tail) = item;
    __this->_tail++;
    __this->_size++;
    __this->_version++;
}

void Queue__Uno_Threading_Promise_bool___EnsureCapacity(Queue__Uno_Threading_Promise_bool_* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Uno::Threading::Promise__bool__typeof(), 2);
    }

    if (__this->_tail == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        int newSize = (__this->_size != 0) ? (__this->_size * 2) : ::uPtr< ::uArray*>(__this->_data)->Length();
        ::uArray* newData = ::uNewArray(::app::Uno::Threading::Promise__bool__typeof(), newSize);

        for (int i = 0; i < __this->_size; i++)
        {
            newData->ItemStrong< ::app::Uno::Threading::Promise__bool*>(i) = __this->ElementAt(i);
        }

        __this->_data = newData;
        __this->_head = 0;
        __this->_tail = __this->_size;
    }
}

int Queue__Uno_Threading_Promise_bool___get_Count(Queue__Uno_Threading_Promise_bool_* __this)
{
    return __this->_size;
}

::app::Uno::Collections::Queue1_Enumerator__Uno_Threading_Promise_bool_ Queue__Uno_Threading_Promise_bool___GetEnumerator(Queue__Uno_Threading_Promise_bool_* __this)
{
    return ::app::Uno::Collections::Queue1_Enumerator__Uno_Threading_Promise_bool___New_1(NULL, __this);
}

Queue__Uno_Threading_Promise_bool_* Queue__Uno_Threading_Promise_bool___New_1(::uStatic* __this)
{
    Queue__Uno_Threading_Promise_bool_* inst = (Queue__Uno_Threading_Promise_bool_*)::uAllocObject(sizeof(Queue__Uno_Threading_Promise_bool_), Queue__Uno_Threading_Promise_bool___typeof());
    inst->_ObjInit();
    return inst;
}

Queue__Uno_Threading_Promise_bool_* Queue__Uno_Threading_Promise_bool___New_2(::uStatic* __this, int capacity)
{
    Queue__Uno_Threading_Promise_bool_* inst = (Queue__Uno_Threading_Promise_bool_*)::uAllocObject(sizeof(Queue__Uno_Threading_Promise_bool_), Queue__Uno_Threading_Promise_bool___typeof());
    inst->_ObjInit_1(capacity);
    return inst;
}

::app::Uno::Threading::Promise__bool* Queue__Uno_Threading_Promise_bool___Peek(Queue__Uno_Threading_Promise_bool_* __this)
{
    if (__this->_size == 0)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Queue is empty")));
    }

    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Threading::Promise__bool*>(__this->_head);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult___uType* Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult___typeof()
{
    static ::uStaticStrong<Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult___uType*> type;
    if (type != NULL) return type;

    type = (Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult___uType*)::uAllocClassType(sizeof(Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult___uType), "Uno.Collections.Queue<Uno.Threading.Promise<Fuse.Camera.PictureResult>>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_, _data));

    type->SetFields(5,
        ::uNewField("_data", NULL, offsetof(Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_, _data), ::uGetArrayType(::app::Uno::Threading::Promise__Fuse_Camera_PictureResult__typeof())),
        ::uNewField("_head", NULL, offsetof(Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_, _head), ::app::Uno::Int__typeof()),
        ::uNewField("_size", NULL, offsetof(Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_, _size), ::app::Uno::Int__typeof()),
        ::uNewField("_tail", NULL, offsetof(Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_, _tail), ::app::Uno::Int__typeof()),
        ::uNewField("_version", NULL, offsetof(Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(9,
        ::uNewFunctionVoid("Clear", Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult___Clear, 0, false),
        ::uNewFunction("Contains", Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult___Contains, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult__typeof()),
        ::uNewFunction("Dequeue", Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult___Dequeue, 0, false, ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult__typeof()),
        ::uNewFunctionVoid("Enqueue", Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult___Enqueue, 0, false, ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult__typeof()),
        ::uNewFunction("get_Count", Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult___get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult___GetEnumerator, 0, false, ::app::Uno::Collections::Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult___typeof()),
        ::uNewFunction(".ctor", Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult___New_1, 0, true, Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult___typeof()),
        ::uNewFunction(".ctor", Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult___New_2, 0, true, Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult___typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("Peek", Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult___Peek, 0, false, ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult__typeof()));

    ::uRegisterType(type);
    return type;
}

void Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult____ObjInit(Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_* __this)
{
    __this->_data = NULL;
    __this->_head = 0;
    __this->_tail = 0;
    __this->_size = 0;
}

void Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult____ObjInit_1(Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_* __this, int capacity)
{
    __this->_data = ::uNewArray(::app::Uno::Threading::Promise__Fuse_Camera_PictureResult__typeof(), capacity);
    __this->_head = 0;
    __this->_tail = 0;
    __this->_size = 0;
}

void Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult___Clear(Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_* __this)
{
    __this->_data = NULL;
    __this->_head = 0;
    __this->_tail = 0;
    __this->_size = 0;
    __this->_version++;
}

bool Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult___Contains(Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_* __this, ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult* item)
{
    for (int i = __this->_head; i < __this->_tail; i++)
    {
        if (::app::Uno::Generic__Equals__Uno_Threading_Promise_Fuse_Camera_PictureResult_(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult*>(i), item))
        {
            return true;
        }
    }

    return false;
}

::app::Uno::Threading::Promise__Fuse_Camera_PictureResult* Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult___Dequeue(Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_* __this)
{
    if (__this->_size == 0)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Queue is empty")));
    }

    ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult* result = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult*>(__this->_head);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult*>(__this->_head) = NULL;
    __this->_head++;
    __this->_size--;
    __this->_version++;
    return result;
}

::app::Uno::Threading::Promise__Fuse_Camera_PictureResult* Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult___ElementAt(Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_* __this, int index)
{
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult*>(__this->_head + index);
}

void Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult___Enqueue(Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_* __this, ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult*>(__this->_tail) = item;
    __this->_tail++;
    __this->_size++;
    __this->_version++;
}

void Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult___EnsureCapacity(Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Uno::Threading::Promise__Fuse_Camera_PictureResult__typeof(), 2);
    }

    if (__this->_tail == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        int newSize = (__this->_size != 0) ? (__this->_size * 2) : ::uPtr< ::uArray*>(__this->_data)->Length();
        ::uArray* newData = ::uNewArray(::app::Uno::Threading::Promise__Fuse_Camera_PictureResult__typeof(), newSize);

        for (int i = 0; i < __this->_size; i++)
        {
            newData->ItemStrong< ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult*>(i) = __this->ElementAt(i);
        }

        __this->_data = newData;
        __this->_head = 0;
        __this->_tail = __this->_size;
    }
}

int Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult___get_Count(Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_* __this)
{
    return __this->_size;
}

::app::Uno::Collections::Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult_ Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult___GetEnumerator(Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_* __this)
{
    return ::app::Uno::Collections::Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult___New_1(NULL, __this);
}

Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_* Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult___New_1(::uStatic* __this)
{
    Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_* inst = (Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_*)::uAllocObject(sizeof(Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_), Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult___typeof());
    inst->_ObjInit();
    return inst;
}

Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_* Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult___New_2(::uStatic* __this, int capacity)
{
    Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_* inst = (Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_*)::uAllocObject(sizeof(Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_), Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult___typeof());
    inst->_ObjInit_1(capacity);
    return inst;
}

::app::Uno::Threading::Promise__Fuse_Camera_PictureResult* Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult___Peek(Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_* __this)
{
    if (__this->_size == 0)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Queue is empty")));
    }

    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult*>(__this->_head);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Queue__Uno_Threading_Promise_string___uType* Queue__Uno_Threading_Promise_string___typeof()
{
    static ::uStaticStrong<Queue__Uno_Threading_Promise_string___uType*> type;
    if (type != NULL) return type;

    type = (Queue__Uno_Threading_Promise_string___uType*)::uAllocClassType(sizeof(Queue__Uno_Threading_Promise_string___uType), "Uno.Collections.Queue<Uno.Threading.Promise<string>>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(Queue__Uno_Threading_Promise_string_, _data));

    type->SetFields(5,
        ::uNewField("_data", NULL, offsetof(Queue__Uno_Threading_Promise_string_, _data), ::uGetArrayType(::app::Uno::Threading::Promise__string__typeof())),
        ::uNewField("_head", NULL, offsetof(Queue__Uno_Threading_Promise_string_, _head), ::app::Uno::Int__typeof()),
        ::uNewField("_size", NULL, offsetof(Queue__Uno_Threading_Promise_string_, _size), ::app::Uno::Int__typeof()),
        ::uNewField("_tail", NULL, offsetof(Queue__Uno_Threading_Promise_string_, _tail), ::app::Uno::Int__typeof()),
        ::uNewField("_version", NULL, offsetof(Queue__Uno_Threading_Promise_string_, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(9,
        ::uNewFunctionVoid("Clear", Queue__Uno_Threading_Promise_string___Clear, 0, false),
        ::uNewFunction("Contains", Queue__Uno_Threading_Promise_string___Contains, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Threading::Promise__string__typeof()),
        ::uNewFunction("Dequeue", Queue__Uno_Threading_Promise_string___Dequeue, 0, false, ::app::Uno::Threading::Promise__string__typeof()),
        ::uNewFunctionVoid("Enqueue", Queue__Uno_Threading_Promise_string___Enqueue, 0, false, ::app::Uno::Threading::Promise__string__typeof()),
        ::uNewFunction("get_Count", Queue__Uno_Threading_Promise_string___get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", Queue__Uno_Threading_Promise_string___GetEnumerator, 0, false, ::app::Uno::Collections::Queue1_Enumerator__Uno_Threading_Promise_string___typeof()),
        ::uNewFunction(".ctor", Queue__Uno_Threading_Promise_string___New_1, 0, true, Queue__Uno_Threading_Promise_string___typeof()),
        ::uNewFunction(".ctor", Queue__Uno_Threading_Promise_string___New_2, 0, true, Queue__Uno_Threading_Promise_string___typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("Peek", Queue__Uno_Threading_Promise_string___Peek, 0, false, ::app::Uno::Threading::Promise__string__typeof()));

    ::uRegisterType(type);
    return type;
}

void Queue__Uno_Threading_Promise_string____ObjInit(Queue__Uno_Threading_Promise_string_* __this)
{
    __this->_data = NULL;
    __this->_head = 0;
    __this->_tail = 0;
    __this->_size = 0;
}

void Queue__Uno_Threading_Promise_string____ObjInit_1(Queue__Uno_Threading_Promise_string_* __this, int capacity)
{
    __this->_data = ::uNewArray(::app::Uno::Threading::Promise__string__typeof(), capacity);
    __this->_head = 0;
    __this->_tail = 0;
    __this->_size = 0;
}

void Queue__Uno_Threading_Promise_string___Clear(Queue__Uno_Threading_Promise_string_* __this)
{
    __this->_data = NULL;
    __this->_head = 0;
    __this->_tail = 0;
    __this->_size = 0;
    __this->_version++;
}

bool Queue__Uno_Threading_Promise_string___Contains(Queue__Uno_Threading_Promise_string_* __this, ::app::Uno::Threading::Promise__string* item)
{
    for (int i = __this->_head; i < __this->_tail; i++)
    {
        if (::app::Uno::Generic__Equals__Uno_Threading_Promise_string_(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Threading::Promise__string*>(i), item))
        {
            return true;
        }
    }

    return false;
}

::app::Uno::Threading::Promise__string* Queue__Uno_Threading_Promise_string___Dequeue(Queue__Uno_Threading_Promise_string_* __this)
{
    if (__this->_size == 0)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Queue is empty")));
    }

    ::app::Uno::Threading::Promise__string* result = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Threading::Promise__string*>(__this->_head);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Uno::Threading::Promise__string*>(__this->_head) = NULL;
    __this->_head++;
    __this->_size--;
    __this->_version++;
    return result;
}

::app::Uno::Threading::Promise__string* Queue__Uno_Threading_Promise_string___ElementAt(Queue__Uno_Threading_Promise_string_* __this, int index)
{
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Threading::Promise__string*>(__this->_head + index);
}

void Queue__Uno_Threading_Promise_string___Enqueue(Queue__Uno_Threading_Promise_string_* __this, ::app::Uno::Threading::Promise__string* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Uno::Threading::Promise__string*>(__this->_tail) = item;
    __this->_tail++;
    __this->_size++;
    __this->_version++;
}

void Queue__Uno_Threading_Promise_string___EnsureCapacity(Queue__Uno_Threading_Promise_string_* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Uno::Threading::Promise__string__typeof(), 2);
    }

    if (__this->_tail == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        int newSize = (__this->_size != 0) ? (__this->_size * 2) : ::uPtr< ::uArray*>(__this->_data)->Length();
        ::uArray* newData = ::uNewArray(::app::Uno::Threading::Promise__string__typeof(), newSize);

        for (int i = 0; i < __this->_size; i++)
        {
            newData->ItemStrong< ::app::Uno::Threading::Promise__string*>(i) = __this->ElementAt(i);
        }

        __this->_data = newData;
        __this->_head = 0;
        __this->_tail = __this->_size;
    }
}

int Queue__Uno_Threading_Promise_string___get_Count(Queue__Uno_Threading_Promise_string_* __this)
{
    return __this->_size;
}

::app::Uno::Collections::Queue1_Enumerator__Uno_Threading_Promise_string_ Queue__Uno_Threading_Promise_string___GetEnumerator(Queue__Uno_Threading_Promise_string_* __this)
{
    return ::app::Uno::Collections::Queue1_Enumerator__Uno_Threading_Promise_string___New_1(NULL, __this);
}

Queue__Uno_Threading_Promise_string_* Queue__Uno_Threading_Promise_string___New_1(::uStatic* __this)
{
    Queue__Uno_Threading_Promise_string_* inst = (Queue__Uno_Threading_Promise_string_*)::uAllocObject(sizeof(Queue__Uno_Threading_Promise_string_), Queue__Uno_Threading_Promise_string___typeof());
    inst->_ObjInit();
    return inst;
}

Queue__Uno_Threading_Promise_string_* Queue__Uno_Threading_Promise_string___New_2(::uStatic* __this, int capacity)
{
    Queue__Uno_Threading_Promise_string_* inst = (Queue__Uno_Threading_Promise_string_*)::uAllocObject(sizeof(Queue__Uno_Threading_Promise_string_), Queue__Uno_Threading_Promise_string___typeof());
    inst->_ObjInit_1(capacity);
    return inst;
}

::app::Uno::Threading::Promise__string* Queue__Uno_Threading_Promise_string___Peek(Queue__Uno_Threading_Promise_string_* __this)
{
    if (__this->_size == 0)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Queue is empty")));
    }

    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Threading::Promise__string*>(__this->_head);
}

}}}
