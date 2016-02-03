#include <app/Outracks.Simulator.Protocol.MessageFromClient.h>
#include <app/Outracks.Simulator.Protocol.MessageToClient.h>
#include <app/Uno.Action__bool.h>
#include <app/Uno.Action__Fuse_Camera_PictureResult.h>
#include <app/Uno.Action__string.h>
#include <app/Uno.Action__Uno_Exception.h>
#include <app/Uno.Bool.h>
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
#include <app/Uno.Collections.Queue1_Enumerator__object__.h>
#include <app/Uno.Collections.Queue1_Enumerator__Outracks_Simulator_Protocol_-4180f648.h>
#include <app/Uno.Collections.Queue1_Enumerator__Outracks_Simulator_Protocol_-b3d9bc71.h>
#include <app/Uno.Collections.Queue1_Enumerator__Uno_Action_bool_.h>
#include <app/Uno.Collections.Queue1_Enumerator__Uno_Action_Fuse_Camera_PictureResult_.h>
#include <app/Uno.Collections.Queue1_Enumerator__Uno_Action_string_.h>
#include <app/Uno.Collections.Queue1_Enumerator__Uno_Action_Uno_Exception_.h>
#include <app/Uno.Collections.Queue1_Enumerator__Uno_Exception.h>
#include <app/Uno.Collections.Queue1_Enumerator__Uno_Threading_Promise_bool_.h>
#include <app/Uno.Collections.Queue1_Enumerator__Uno_Threading_Promise_Fuse_C-5018b6b2.h>
#include <app/Uno.Collections.Queue1_Enumerator__Uno_Threading_Promise_string_.h>
#include <app/Uno.Exception.h>
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

Queue1_Enumerator__object____uType* Queue1_Enumerator__object____typeof()
{
    static ::uStaticStrong<Queue1_Enumerator__object____uType*> type;
    if (type != NULL) return type;

    type = (Queue1_Enumerator__object____uType*)::uAllocStructType(sizeof(Queue1_Enumerator__object____uType), "Uno.Collections.Queue<object[]>.Enumerator", sizeof(Queue1_Enumerator__object__), 2, 2, 0);

    type->__interface_1.__fp_Reset = (void(*)(void*))Queue1_Enumerator__object____Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_Dispose = (void(*)(void*))Queue1_Enumerator__object____Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))Queue1_Enumerator__object____MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Queue1_Enumerator__object____uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Queue1_Enumerator__object____uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(Queue1_Enumerator__object__, _current),
        "_source", offsetof(Queue1_Enumerator__object__, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Queue1_Enumerator__object__, _current), ::uGetArrayType(::uObject__typeof())),
        ::uNewField("_index", NULL, offsetof(Queue1_Enumerator__object__, _index), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Queue1_Enumerator__object__, _source), ::app::Uno::Collections::Queue__object____typeof()),
        ::uNewField("_version", NULL, offsetof(Queue1_Enumerator__object__, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("Dispose", Queue1_Enumerator__object____Dispose, 0, false),
        ::uNewFunction("MoveNext", Queue1_Enumerator__object____MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Queue1_Enumerator__object_____ObjInit(Queue1_Enumerator__object__* __this, ::app::Uno::Collections::Queue__object__* source)
{
    __this->_source = source;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::Queue__object__*>(source)->_version;
    __this->_index = -1;
}

void Queue1_Enumerator__object____Dispose(Queue1_Enumerator__object__* __this)
{
}

bool Queue1_Enumerator__object____MoveNext(Queue1_Enumerator__object__* __this)
{
    if (::uPtr< ::app::Uno::Collections::Queue__object__*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_index++;

    if (__this->_index < ::uPtr< ::app::Uno::Collections::Queue__object__*>(__this->_source)->_size)
    {
        __this->_current = ::uPtr< ::app::Uno::Collections::Queue__object__*>(__this->_source)->ElementAt(__this->_index);
        return true;
    }

    return false;
}

Queue1_Enumerator__object__ Queue1_Enumerator__object____New_1(::uStatic* __this, ::app::Uno::Collections::Queue__object__* source)
{
    Queue1_Enumerator__object__ inst = ::uDefault< Queue1_Enumerator__object__>();
    inst._ObjInit(source);
    return inst;
}

void Queue1_Enumerator__object____Uno_Collections_IEnumerator_Reset(Queue1_Enumerator__object__* __this)
{
    __this->_index = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::Queue__object__*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient__uType* Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient__typeof()
{
    static ::uStaticStrong<Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient__uType*> type;
    if (type != NULL) return type;

    type = (Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient__uType*)::uAllocStructType(sizeof(Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient__uType), "Uno.Collections.Queue<Outracks.Simulator.Protocol.MessageFromClient>.Enumerator", sizeof(Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient), 2, 2, 0);

    type->__interface_1.__fp_Reset = (void(*)(void*))Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_Dispose = (void(*)(void*))Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient__Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient__MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient__uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient__uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient, _current),
        "_source", offsetof(Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient, _current), ::app::Outracks::Simulator::Protocol::MessageFromClient__typeof()),
        ::uNewField("_index", NULL, offsetof(Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient, _index), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient, _source), ::app::Uno::Collections::Queue__Outracks_Simulator_Protocol_MessageFromClient__typeof()),
        ::uNewField("_version", NULL, offsetof(Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("Dispose", Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient__Dispose, 0, false),
        ::uNewFunction("MoveNext", Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient___ObjInit(Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient* __this, ::app::Uno::Collections::Queue__Outracks_Simulator_Protocol_MessageFromClient* source)
{
    __this->_source = source;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::Queue__Outracks_Simulator_Protocol_MessageFromClient*>(source)->_version;
    __this->_index = -1;
}

void Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient__Dispose(Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient* __this)
{
}

bool Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient__MoveNext(Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient* __this)
{
    if (::uPtr< ::app::Uno::Collections::Queue__Outracks_Simulator_Protocol_MessageFromClient*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_index++;

    if (__this->_index < ::uPtr< ::app::Uno::Collections::Queue__Outracks_Simulator_Protocol_MessageFromClient*>(__this->_source)->_size)
    {
        __this->_current = ::uPtr< ::app::Uno::Collections::Queue__Outracks_Simulator_Protocol_MessageFromClient*>(__this->_source)->ElementAt(__this->_index);
        return true;
    }

    return false;
}

Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient__New_1(::uStatic* __this, ::app::Uno::Collections::Queue__Outracks_Simulator_Protocol_MessageFromClient* source)
{
    Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient inst = ::uDefault< Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient>();
    inst._ObjInit(source);
    return inst;
}

void Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient__Uno_Collections_IEnumerator_Reset(Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient* __this)
{
    __this->_index = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::Queue__Outracks_Simulator_Protocol_MessageFromClient*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient__uType* Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient__typeof()
{
    static ::uStaticStrong<Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient__uType*> type;
    if (type != NULL) return type;

    type = (Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient__uType*)::uAllocStructType(sizeof(Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient__uType), "Uno.Collections.Queue<Outracks.Simulator.Protocol.MessageToClient>.Enumerator", sizeof(Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient), 2, 2, 0);

    type->__interface_1.__fp_Reset = (void(*)(void*))Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_Dispose = (void(*)(void*))Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient__Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient__MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient__uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient__uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient, _current),
        "_source", offsetof(Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient, _current), ::app::Outracks::Simulator::Protocol::MessageToClient__typeof()),
        ::uNewField("_index", NULL, offsetof(Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient, _index), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient, _source), ::app::Uno::Collections::Queue__Outracks_Simulator_Protocol_MessageToClient__typeof()),
        ::uNewField("_version", NULL, offsetof(Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("Dispose", Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient__Dispose, 0, false),
        ::uNewFunction("MoveNext", Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient___ObjInit(Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient* __this, ::app::Uno::Collections::Queue__Outracks_Simulator_Protocol_MessageToClient* source)
{
    __this->_source = source;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::Queue__Outracks_Simulator_Protocol_MessageToClient*>(source)->_version;
    __this->_index = -1;
}

void Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient__Dispose(Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient* __this)
{
}

bool Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient__MoveNext(Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient* __this)
{
    if (::uPtr< ::app::Uno::Collections::Queue__Outracks_Simulator_Protocol_MessageToClient*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_index++;

    if (__this->_index < ::uPtr< ::app::Uno::Collections::Queue__Outracks_Simulator_Protocol_MessageToClient*>(__this->_source)->_size)
    {
        __this->_current = ::uPtr< ::app::Uno::Collections::Queue__Outracks_Simulator_Protocol_MessageToClient*>(__this->_source)->ElementAt(__this->_index);
        return true;
    }

    return false;
}

Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient__New_1(::uStatic* __this, ::app::Uno::Collections::Queue__Outracks_Simulator_Protocol_MessageToClient* source)
{
    Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient inst = ::uDefault< Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient>();
    inst._ObjInit(source);
    return inst;
}

void Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient__Uno_Collections_IEnumerator_Reset(Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient* __this)
{
    __this->_index = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::Queue__Outracks_Simulator_Protocol_MessageToClient*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Queue1_Enumerator__Uno_Action_bool___uType* Queue1_Enumerator__Uno_Action_bool___typeof()
{
    static ::uStaticStrong<Queue1_Enumerator__Uno_Action_bool___uType*> type;
    if (type != NULL) return type;

    type = (Queue1_Enumerator__Uno_Action_bool___uType*)::uAllocStructType(sizeof(Queue1_Enumerator__Uno_Action_bool___uType), "Uno.Collections.Queue<Uno.Action<bool>>.Enumerator", sizeof(Queue1_Enumerator__Uno_Action_bool_), 2, 2, 0);

    type->__interface_1.__fp_Reset = (void(*)(void*))Queue1_Enumerator__Uno_Action_bool___Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_Dispose = (void(*)(void*))Queue1_Enumerator__Uno_Action_bool___Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))Queue1_Enumerator__Uno_Action_bool___MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Queue1_Enumerator__Uno_Action_bool___uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Queue1_Enumerator__Uno_Action_bool___uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(Queue1_Enumerator__Uno_Action_bool_, _current),
        "_source", offsetof(Queue1_Enumerator__Uno_Action_bool_, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Queue1_Enumerator__Uno_Action_bool_, _current), ::app::Uno::Action__bool__typeof()),
        ::uNewField("_index", NULL, offsetof(Queue1_Enumerator__Uno_Action_bool_, _index), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Queue1_Enumerator__Uno_Action_bool_, _source), ::app::Uno::Collections::Queue__Uno_Action_bool___typeof()),
        ::uNewField("_version", NULL, offsetof(Queue1_Enumerator__Uno_Action_bool_, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("Dispose", Queue1_Enumerator__Uno_Action_bool___Dispose, 0, false),
        ::uNewFunction("MoveNext", Queue1_Enumerator__Uno_Action_bool___MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Queue1_Enumerator__Uno_Action_bool____ObjInit(Queue1_Enumerator__Uno_Action_bool_* __this, ::app::Uno::Collections::Queue__Uno_Action_bool_* source)
{
    __this->_source = source;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::Queue__Uno_Action_bool_*>(source)->_version;
    __this->_index = -1;
}

void Queue1_Enumerator__Uno_Action_bool___Dispose(Queue1_Enumerator__Uno_Action_bool_* __this)
{
}

bool Queue1_Enumerator__Uno_Action_bool___MoveNext(Queue1_Enumerator__Uno_Action_bool_* __this)
{
    if (::uPtr< ::app::Uno::Collections::Queue__Uno_Action_bool_*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_index++;

    if (__this->_index < ::uPtr< ::app::Uno::Collections::Queue__Uno_Action_bool_*>(__this->_source)->_size)
    {
        __this->_current = ::uPtr< ::app::Uno::Collections::Queue__Uno_Action_bool_*>(__this->_source)->ElementAt(__this->_index);
        return true;
    }

    return false;
}

Queue1_Enumerator__Uno_Action_bool_ Queue1_Enumerator__Uno_Action_bool___New_1(::uStatic* __this, ::app::Uno::Collections::Queue__Uno_Action_bool_* source)
{
    Queue1_Enumerator__Uno_Action_bool_ inst = ::uDefault< Queue1_Enumerator__Uno_Action_bool_>();
    inst._ObjInit(source);
    return inst;
}

void Queue1_Enumerator__Uno_Action_bool___Uno_Collections_IEnumerator_Reset(Queue1_Enumerator__Uno_Action_bool_* __this)
{
    __this->_index = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::Queue__Uno_Action_bool_*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Queue1_Enumerator__Uno_Action_Fuse_Camera_PictureResult___uType* Queue1_Enumerator__Uno_Action_Fuse_Camera_PictureResult___typeof()
{
    static ::uStaticStrong<Queue1_Enumerator__Uno_Action_Fuse_Camera_PictureResult___uType*> type;
    if (type != NULL) return type;

    type = (Queue1_Enumerator__Uno_Action_Fuse_Camera_PictureResult___uType*)::uAllocStructType(sizeof(Queue1_Enumerator__Uno_Action_Fuse_Camera_PictureResult___uType), "Uno.Collections.Queue<Uno.Action<Fuse.Camera.PictureResult>>.Enumerator", sizeof(Queue1_Enumerator__Uno_Action_Fuse_Camera_PictureResult_), 2, 2, 0);

    type->__interface_1.__fp_Reset = (void(*)(void*))Queue1_Enumerator__Uno_Action_Fuse_Camera_PictureResult___Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_Dispose = (void(*)(void*))Queue1_Enumerator__Uno_Action_Fuse_Camera_PictureResult___Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))Queue1_Enumerator__Uno_Action_Fuse_Camera_PictureResult___MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Queue1_Enumerator__Uno_Action_Fuse_Camera_PictureResult___uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Queue1_Enumerator__Uno_Action_Fuse_Camera_PictureResult___uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(Queue1_Enumerator__Uno_Action_Fuse_Camera_PictureResult_, _current),
        "_source", offsetof(Queue1_Enumerator__Uno_Action_Fuse_Camera_PictureResult_, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Queue1_Enumerator__Uno_Action_Fuse_Camera_PictureResult_, _current), ::app::Uno::Action__Fuse_Camera_PictureResult__typeof()),
        ::uNewField("_index", NULL, offsetof(Queue1_Enumerator__Uno_Action_Fuse_Camera_PictureResult_, _index), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Queue1_Enumerator__Uno_Action_Fuse_Camera_PictureResult_, _source), ::app::Uno::Collections::Queue__Uno_Action_Fuse_Camera_PictureResult___typeof()),
        ::uNewField("_version", NULL, offsetof(Queue1_Enumerator__Uno_Action_Fuse_Camera_PictureResult_, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("Dispose", Queue1_Enumerator__Uno_Action_Fuse_Camera_PictureResult___Dispose, 0, false),
        ::uNewFunction("MoveNext", Queue1_Enumerator__Uno_Action_Fuse_Camera_PictureResult___MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Queue1_Enumerator__Uno_Action_Fuse_Camera_PictureResult____ObjInit(Queue1_Enumerator__Uno_Action_Fuse_Camera_PictureResult_* __this, ::app::Uno::Collections::Queue__Uno_Action_Fuse_Camera_PictureResult_* source)
{
    __this->_source = source;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::Queue__Uno_Action_Fuse_Camera_PictureResult_*>(source)->_version;
    __this->_index = -1;
}

void Queue1_Enumerator__Uno_Action_Fuse_Camera_PictureResult___Dispose(Queue1_Enumerator__Uno_Action_Fuse_Camera_PictureResult_* __this)
{
}

bool Queue1_Enumerator__Uno_Action_Fuse_Camera_PictureResult___MoveNext(Queue1_Enumerator__Uno_Action_Fuse_Camera_PictureResult_* __this)
{
    if (::uPtr< ::app::Uno::Collections::Queue__Uno_Action_Fuse_Camera_PictureResult_*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_index++;

    if (__this->_index < ::uPtr< ::app::Uno::Collections::Queue__Uno_Action_Fuse_Camera_PictureResult_*>(__this->_source)->_size)
    {
        __this->_current = ::uPtr< ::app::Uno::Collections::Queue__Uno_Action_Fuse_Camera_PictureResult_*>(__this->_source)->ElementAt(__this->_index);
        return true;
    }

    return false;
}

Queue1_Enumerator__Uno_Action_Fuse_Camera_PictureResult_ Queue1_Enumerator__Uno_Action_Fuse_Camera_PictureResult___New_1(::uStatic* __this, ::app::Uno::Collections::Queue__Uno_Action_Fuse_Camera_PictureResult_* source)
{
    Queue1_Enumerator__Uno_Action_Fuse_Camera_PictureResult_ inst = ::uDefault< Queue1_Enumerator__Uno_Action_Fuse_Camera_PictureResult_>();
    inst._ObjInit(source);
    return inst;
}

void Queue1_Enumerator__Uno_Action_Fuse_Camera_PictureResult___Uno_Collections_IEnumerator_Reset(Queue1_Enumerator__Uno_Action_Fuse_Camera_PictureResult_* __this)
{
    __this->_index = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::Queue__Uno_Action_Fuse_Camera_PictureResult_*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Queue1_Enumerator__Uno_Action_string___uType* Queue1_Enumerator__Uno_Action_string___typeof()
{
    static ::uStaticStrong<Queue1_Enumerator__Uno_Action_string___uType*> type;
    if (type != NULL) return type;

    type = (Queue1_Enumerator__Uno_Action_string___uType*)::uAllocStructType(sizeof(Queue1_Enumerator__Uno_Action_string___uType), "Uno.Collections.Queue<Uno.Action<string>>.Enumerator", sizeof(Queue1_Enumerator__Uno_Action_string_), 2, 2, 0);

    type->__interface_1.__fp_Reset = (void(*)(void*))Queue1_Enumerator__Uno_Action_string___Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_Dispose = (void(*)(void*))Queue1_Enumerator__Uno_Action_string___Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))Queue1_Enumerator__Uno_Action_string___MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Queue1_Enumerator__Uno_Action_string___uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Queue1_Enumerator__Uno_Action_string___uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(Queue1_Enumerator__Uno_Action_string_, _current),
        "_source", offsetof(Queue1_Enumerator__Uno_Action_string_, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Queue1_Enumerator__Uno_Action_string_, _current), ::app::Uno::Action__string__typeof()),
        ::uNewField("_index", NULL, offsetof(Queue1_Enumerator__Uno_Action_string_, _index), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Queue1_Enumerator__Uno_Action_string_, _source), ::app::Uno::Collections::Queue__Uno_Action_string___typeof()),
        ::uNewField("_version", NULL, offsetof(Queue1_Enumerator__Uno_Action_string_, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("Dispose", Queue1_Enumerator__Uno_Action_string___Dispose, 0, false),
        ::uNewFunction("MoveNext", Queue1_Enumerator__Uno_Action_string___MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Queue1_Enumerator__Uno_Action_string____ObjInit(Queue1_Enumerator__Uno_Action_string_* __this, ::app::Uno::Collections::Queue__Uno_Action_string_* source)
{
    __this->_source = source;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::Queue__Uno_Action_string_*>(source)->_version;
    __this->_index = -1;
}

void Queue1_Enumerator__Uno_Action_string___Dispose(Queue1_Enumerator__Uno_Action_string_* __this)
{
}

bool Queue1_Enumerator__Uno_Action_string___MoveNext(Queue1_Enumerator__Uno_Action_string_* __this)
{
    if (::uPtr< ::app::Uno::Collections::Queue__Uno_Action_string_*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_index++;

    if (__this->_index < ::uPtr< ::app::Uno::Collections::Queue__Uno_Action_string_*>(__this->_source)->_size)
    {
        __this->_current = ::uPtr< ::app::Uno::Collections::Queue__Uno_Action_string_*>(__this->_source)->ElementAt(__this->_index);
        return true;
    }

    return false;
}

Queue1_Enumerator__Uno_Action_string_ Queue1_Enumerator__Uno_Action_string___New_1(::uStatic* __this, ::app::Uno::Collections::Queue__Uno_Action_string_* source)
{
    Queue1_Enumerator__Uno_Action_string_ inst = ::uDefault< Queue1_Enumerator__Uno_Action_string_>();
    inst._ObjInit(source);
    return inst;
}

void Queue1_Enumerator__Uno_Action_string___Uno_Collections_IEnumerator_Reset(Queue1_Enumerator__Uno_Action_string_* __this)
{
    __this->_index = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::Queue__Uno_Action_string_*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Queue1_Enumerator__Uno_Action_Uno_Exception___uType* Queue1_Enumerator__Uno_Action_Uno_Exception___typeof()
{
    static ::uStaticStrong<Queue1_Enumerator__Uno_Action_Uno_Exception___uType*> type;
    if (type != NULL) return type;

    type = (Queue1_Enumerator__Uno_Action_Uno_Exception___uType*)::uAllocStructType(sizeof(Queue1_Enumerator__Uno_Action_Uno_Exception___uType), "Uno.Collections.Queue<Uno.Action<Uno.Exception>>.Enumerator", sizeof(Queue1_Enumerator__Uno_Action_Uno_Exception_), 2, 2, 0);

    type->__interface_1.__fp_Reset = (void(*)(void*))Queue1_Enumerator__Uno_Action_Uno_Exception___Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_Dispose = (void(*)(void*))Queue1_Enumerator__Uno_Action_Uno_Exception___Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))Queue1_Enumerator__Uno_Action_Uno_Exception___MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Queue1_Enumerator__Uno_Action_Uno_Exception___uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Queue1_Enumerator__Uno_Action_Uno_Exception___uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(Queue1_Enumerator__Uno_Action_Uno_Exception_, _current),
        "_source", offsetof(Queue1_Enumerator__Uno_Action_Uno_Exception_, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Queue1_Enumerator__Uno_Action_Uno_Exception_, _current), ::app::Uno::Action__Uno_Exception__typeof()),
        ::uNewField("_index", NULL, offsetof(Queue1_Enumerator__Uno_Action_Uno_Exception_, _index), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Queue1_Enumerator__Uno_Action_Uno_Exception_, _source), ::app::Uno::Collections::Queue__Uno_Action_Uno_Exception___typeof()),
        ::uNewField("_version", NULL, offsetof(Queue1_Enumerator__Uno_Action_Uno_Exception_, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("Dispose", Queue1_Enumerator__Uno_Action_Uno_Exception___Dispose, 0, false),
        ::uNewFunction("MoveNext", Queue1_Enumerator__Uno_Action_Uno_Exception___MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Queue1_Enumerator__Uno_Action_Uno_Exception____ObjInit(Queue1_Enumerator__Uno_Action_Uno_Exception_* __this, ::app::Uno::Collections::Queue__Uno_Action_Uno_Exception_* source)
{
    __this->_source = source;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::Queue__Uno_Action_Uno_Exception_*>(source)->_version;
    __this->_index = -1;
}

void Queue1_Enumerator__Uno_Action_Uno_Exception___Dispose(Queue1_Enumerator__Uno_Action_Uno_Exception_* __this)
{
}

bool Queue1_Enumerator__Uno_Action_Uno_Exception___MoveNext(Queue1_Enumerator__Uno_Action_Uno_Exception_* __this)
{
    if (::uPtr< ::app::Uno::Collections::Queue__Uno_Action_Uno_Exception_*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_index++;

    if (__this->_index < ::uPtr< ::app::Uno::Collections::Queue__Uno_Action_Uno_Exception_*>(__this->_source)->_size)
    {
        __this->_current = ::uPtr< ::app::Uno::Collections::Queue__Uno_Action_Uno_Exception_*>(__this->_source)->ElementAt(__this->_index);
        return true;
    }

    return false;
}

Queue1_Enumerator__Uno_Action_Uno_Exception_ Queue1_Enumerator__Uno_Action_Uno_Exception___New_1(::uStatic* __this, ::app::Uno::Collections::Queue__Uno_Action_Uno_Exception_* source)
{
    Queue1_Enumerator__Uno_Action_Uno_Exception_ inst = ::uDefault< Queue1_Enumerator__Uno_Action_Uno_Exception_>();
    inst._ObjInit(source);
    return inst;
}

void Queue1_Enumerator__Uno_Action_Uno_Exception___Uno_Collections_IEnumerator_Reset(Queue1_Enumerator__Uno_Action_Uno_Exception_* __this)
{
    __this->_index = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::Queue__Uno_Action_Uno_Exception_*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Queue1_Enumerator__Uno_Exception__uType* Queue1_Enumerator__Uno_Exception__typeof()
{
    static ::uStaticStrong<Queue1_Enumerator__Uno_Exception__uType*> type;
    if (type != NULL) return type;

    type = (Queue1_Enumerator__Uno_Exception__uType*)::uAllocStructType(sizeof(Queue1_Enumerator__Uno_Exception__uType), "Uno.Collections.Queue<Uno.Exception>.Enumerator", sizeof(Queue1_Enumerator__Uno_Exception), 3, 2, 0);

    type->__interface_2.__fp_Reset = (void(*)(void*))Queue1_Enumerator__Uno_Exception__Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_get_Current = (::app::Uno::Exception*(*)(void*))Queue1_Enumerator__Uno_Exception__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))Queue1_Enumerator__Uno_Exception__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))Queue1_Enumerator__Uno_Exception__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Uno_Exception__typeof(), offsetof(Queue1_Enumerator__Uno_Exception__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Queue1_Enumerator__Uno_Exception__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Queue1_Enumerator__Uno_Exception__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(Queue1_Enumerator__Uno_Exception, _current),
        "_source", offsetof(Queue1_Enumerator__Uno_Exception, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Queue1_Enumerator__Uno_Exception, _current), ::app::Uno::Exception__typeof()),
        ::uNewField("_index", NULL, offsetof(Queue1_Enumerator__Uno_Exception, _index), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Queue1_Enumerator__Uno_Exception, _source), ::app::Uno::Collections::Queue__Uno_Exception__typeof()),
        ::uNewField("_version", NULL, offsetof(Queue1_Enumerator__Uno_Exception, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", Queue1_Enumerator__Uno_Exception__Dispose, 0, false),
        ::uNewFunction("get_Current", Queue1_Enumerator__Uno_Exception__get_Current, 0, false, ::app::Uno::Exception__typeof()),
        ::uNewFunction("MoveNext", Queue1_Enumerator__Uno_Exception__MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Queue1_Enumerator__Uno_Exception___ObjInit(Queue1_Enumerator__Uno_Exception* __this, ::app::Uno::Collections::Queue__Uno_Exception* source)
{
    __this->_source = source;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::Queue__Uno_Exception*>(source)->_version;
    __this->_index = -1;
}

void Queue1_Enumerator__Uno_Exception__Dispose(Queue1_Enumerator__Uno_Exception* __this)
{
}

::app::Uno::Exception* Queue1_Enumerator__Uno_Exception__get_Current(Queue1_Enumerator__Uno_Exception* __this)
{
    if (__this->_index < 0)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Enumerator is invalid")));
    }

    return __this->_current;
}

bool Queue1_Enumerator__Uno_Exception__MoveNext(Queue1_Enumerator__Uno_Exception* __this)
{
    if (::uPtr< ::app::Uno::Collections::Queue__Uno_Exception*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_index++;

    if (__this->_index < ::uPtr< ::app::Uno::Collections::Queue__Uno_Exception*>(__this->_source)->_size)
    {
        __this->_current = ::uPtr< ::app::Uno::Collections::Queue__Uno_Exception*>(__this->_source)->ElementAt(__this->_index);
        return true;
    }

    return false;
}

Queue1_Enumerator__Uno_Exception Queue1_Enumerator__Uno_Exception__New_1(::uStatic* __this, ::app::Uno::Collections::Queue__Uno_Exception* source)
{
    Queue1_Enumerator__Uno_Exception inst = ::uDefault< Queue1_Enumerator__Uno_Exception>();
    inst._ObjInit(source);
    return inst;
}

void Queue1_Enumerator__Uno_Exception__Uno_Collections_IEnumerator_Reset(Queue1_Enumerator__Uno_Exception* __this)
{
    __this->_index = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::Queue__Uno_Exception*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Queue1_Enumerator__Uno_Threading_Promise_bool___uType* Queue1_Enumerator__Uno_Threading_Promise_bool___typeof()
{
    static ::uStaticStrong<Queue1_Enumerator__Uno_Threading_Promise_bool___uType*> type;
    if (type != NULL) return type;

    type = (Queue1_Enumerator__Uno_Threading_Promise_bool___uType*)::uAllocStructType(sizeof(Queue1_Enumerator__Uno_Threading_Promise_bool___uType), "Uno.Collections.Queue<Uno.Threading.Promise<bool>>.Enumerator", sizeof(Queue1_Enumerator__Uno_Threading_Promise_bool_), 2, 2, 0);

    type->__interface_1.__fp_Reset = (void(*)(void*))Queue1_Enumerator__Uno_Threading_Promise_bool___Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_Dispose = (void(*)(void*))Queue1_Enumerator__Uno_Threading_Promise_bool___Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))Queue1_Enumerator__Uno_Threading_Promise_bool___MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Queue1_Enumerator__Uno_Threading_Promise_bool___uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Queue1_Enumerator__Uno_Threading_Promise_bool___uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(Queue1_Enumerator__Uno_Threading_Promise_bool_, _current),
        "_source", offsetof(Queue1_Enumerator__Uno_Threading_Promise_bool_, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Queue1_Enumerator__Uno_Threading_Promise_bool_, _current), ::app::Uno::Threading::Promise__bool__typeof()),
        ::uNewField("_index", NULL, offsetof(Queue1_Enumerator__Uno_Threading_Promise_bool_, _index), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Queue1_Enumerator__Uno_Threading_Promise_bool_, _source), ::app::Uno::Collections::Queue__Uno_Threading_Promise_bool___typeof()),
        ::uNewField("_version", NULL, offsetof(Queue1_Enumerator__Uno_Threading_Promise_bool_, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("Dispose", Queue1_Enumerator__Uno_Threading_Promise_bool___Dispose, 0, false),
        ::uNewFunction("MoveNext", Queue1_Enumerator__Uno_Threading_Promise_bool___MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Queue1_Enumerator__Uno_Threading_Promise_bool____ObjInit(Queue1_Enumerator__Uno_Threading_Promise_bool_* __this, ::app::Uno::Collections::Queue__Uno_Threading_Promise_bool_* source)
{
    __this->_source = source;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::Queue__Uno_Threading_Promise_bool_*>(source)->_version;
    __this->_index = -1;
}

void Queue1_Enumerator__Uno_Threading_Promise_bool___Dispose(Queue1_Enumerator__Uno_Threading_Promise_bool_* __this)
{
}

bool Queue1_Enumerator__Uno_Threading_Promise_bool___MoveNext(Queue1_Enumerator__Uno_Threading_Promise_bool_* __this)
{
    if (::uPtr< ::app::Uno::Collections::Queue__Uno_Threading_Promise_bool_*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_index++;

    if (__this->_index < ::uPtr< ::app::Uno::Collections::Queue__Uno_Threading_Promise_bool_*>(__this->_source)->_size)
    {
        __this->_current = ::uPtr< ::app::Uno::Collections::Queue__Uno_Threading_Promise_bool_*>(__this->_source)->ElementAt(__this->_index);
        return true;
    }

    return false;
}

Queue1_Enumerator__Uno_Threading_Promise_bool_ Queue1_Enumerator__Uno_Threading_Promise_bool___New_1(::uStatic* __this, ::app::Uno::Collections::Queue__Uno_Threading_Promise_bool_* source)
{
    Queue1_Enumerator__Uno_Threading_Promise_bool_ inst = ::uDefault< Queue1_Enumerator__Uno_Threading_Promise_bool_>();
    inst._ObjInit(source);
    return inst;
}

void Queue1_Enumerator__Uno_Threading_Promise_bool___Uno_Collections_IEnumerator_Reset(Queue1_Enumerator__Uno_Threading_Promise_bool_* __this)
{
    __this->_index = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::Queue__Uno_Threading_Promise_bool_*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult___uType* Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult___typeof()
{
    static ::uStaticStrong<Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult___uType*> type;
    if (type != NULL) return type;

    type = (Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult___uType*)::uAllocStructType(sizeof(Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult___uType), "Uno.Collections.Queue<Uno.Threading.Promise<Fuse.Camera.PictureResult>>.Enumerator", sizeof(Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult_), 2, 2, 0);

    type->__interface_1.__fp_Reset = (void(*)(void*))Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult___Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_Dispose = (void(*)(void*))Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult___Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult___MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult___uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult___uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult_, _current),
        "_source", offsetof(Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult_, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult_, _current), ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult__typeof()),
        ::uNewField("_index", NULL, offsetof(Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult_, _index), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult_, _source), ::app::Uno::Collections::Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult___typeof()),
        ::uNewField("_version", NULL, offsetof(Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult_, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("Dispose", Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult___Dispose, 0, false),
        ::uNewFunction("MoveNext", Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult___MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult____ObjInit(Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult_* __this, ::app::Uno::Collections::Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_* source)
{
    __this->_source = source;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_*>(source)->_version;
    __this->_index = -1;
}

void Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult___Dispose(Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult_* __this)
{
}

bool Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult___MoveNext(Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult_* __this)
{
    if (::uPtr< ::app::Uno::Collections::Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_index++;

    if (__this->_index < ::uPtr< ::app::Uno::Collections::Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_*>(__this->_source)->_size)
    {
        __this->_current = ::uPtr< ::app::Uno::Collections::Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_*>(__this->_source)->ElementAt(__this->_index);
        return true;
    }

    return false;
}

Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult_ Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult___New_1(::uStatic* __this, ::app::Uno::Collections::Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_* source)
{
    Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult_ inst = ::uDefault< Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult_>();
    inst._ObjInit(source);
    return inst;
}

void Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult___Uno_Collections_IEnumerator_Reset(Queue1_Enumerator__Uno_Threading_Promise_Fuse_Camera_PictureResult_* __this)
{
    __this->_index = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_*>(__this->_source)->_version;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Queue1_Enumerator__Uno_Threading_Promise_string___uType* Queue1_Enumerator__Uno_Threading_Promise_string___typeof()
{
    static ::uStaticStrong<Queue1_Enumerator__Uno_Threading_Promise_string___uType*> type;
    if (type != NULL) return type;

    type = (Queue1_Enumerator__Uno_Threading_Promise_string___uType*)::uAllocStructType(sizeof(Queue1_Enumerator__Uno_Threading_Promise_string___uType), "Uno.Collections.Queue<Uno.Threading.Promise<string>>.Enumerator", sizeof(Queue1_Enumerator__Uno_Threading_Promise_string_), 2, 2, 0);

    type->__interface_1.__fp_Reset = (void(*)(void*))Queue1_Enumerator__Uno_Threading_Promise_string___Uno_Collections_IEnumerator_Reset;
    type->__interface_0.__fp_Dispose = (void(*)(void*))Queue1_Enumerator__Uno_Threading_Promise_string___Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))Queue1_Enumerator__Uno_Threading_Promise_string___MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Queue1_Enumerator__Uno_Threading_Promise_string___uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(Queue1_Enumerator__Uno_Threading_Promise_string___uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(Queue1_Enumerator__Uno_Threading_Promise_string_, _current),
        "_source", offsetof(Queue1_Enumerator__Uno_Threading_Promise_string_, _source));

    type->SetFields(4,
        ::uNewField("_current", NULL, offsetof(Queue1_Enumerator__Uno_Threading_Promise_string_, _current), ::app::Uno::Threading::Promise__string__typeof()),
        ::uNewField("_index", NULL, offsetof(Queue1_Enumerator__Uno_Threading_Promise_string_, _index), ::app::Uno::Int__typeof()),
        ::uNewField("_source", NULL, offsetof(Queue1_Enumerator__Uno_Threading_Promise_string_, _source), ::app::Uno::Collections::Queue__Uno_Threading_Promise_string___typeof()),
        ::uNewField("_version", NULL, offsetof(Queue1_Enumerator__Uno_Threading_Promise_string_, _version), ::app::Uno::Int__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("Dispose", Queue1_Enumerator__Uno_Threading_Promise_string___Dispose, 0, false),
        ::uNewFunction("MoveNext", Queue1_Enumerator__Uno_Threading_Promise_string___MoveNext, 0, false, ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Queue1_Enumerator__Uno_Threading_Promise_string____ObjInit(Queue1_Enumerator__Uno_Threading_Promise_string_* __this, ::app::Uno::Collections::Queue__Uno_Threading_Promise_string_* source)
{
    __this->_source = source;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::Queue__Uno_Threading_Promise_string_*>(source)->_version;
    __this->_index = -1;
}

void Queue1_Enumerator__Uno_Threading_Promise_string___Dispose(Queue1_Enumerator__Uno_Threading_Promise_string_* __this)
{
}

bool Queue1_Enumerator__Uno_Threading_Promise_string___MoveNext(Queue1_Enumerator__Uno_Threading_Promise_string_* __this)
{
    if (::uPtr< ::app::Uno::Collections::Queue__Uno_Threading_Promise_string_*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_index++;

    if (__this->_index < ::uPtr< ::app::Uno::Collections::Queue__Uno_Threading_Promise_string_*>(__this->_source)->_size)
    {
        __this->_current = ::uPtr< ::app::Uno::Collections::Queue__Uno_Threading_Promise_string_*>(__this->_source)->ElementAt(__this->_index);
        return true;
    }

    return false;
}

Queue1_Enumerator__Uno_Threading_Promise_string_ Queue1_Enumerator__Uno_Threading_Promise_string___New_1(::uStatic* __this, ::app::Uno::Collections::Queue__Uno_Threading_Promise_string_* source)
{
    Queue1_Enumerator__Uno_Threading_Promise_string_ inst = ::uDefault< Queue1_Enumerator__Uno_Threading_Promise_string_>();
    inst._ObjInit(source);
    return inst;
}

void Queue1_Enumerator__Uno_Threading_Promise_string___Uno_Collections_IEnumerator_Reset(Queue1_Enumerator__Uno_Threading_Promise_string_* __this)
{
    __this->_index = -1;
    __this->_current = NULL;
    __this->_version = ::uPtr< ::app::Uno::Collections::Queue__Uno_Threading_Promise_string_*>(__this->_source)->_version;
}

}}}
