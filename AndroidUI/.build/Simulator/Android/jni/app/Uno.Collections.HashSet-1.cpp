#include <app/Fuse.IFlush.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.Dictionary__framebuffer__bool.h>
#include <app/Uno.Collections.Dictionary__Fuse_IFlush__bool.h>
#include <app/Uno.Collections.Dictionary__Fuse_Node__bool.h>
#include <app/Uno.Collections.Dictionary__int__bool.h>
#include <app/Uno.Collections.Dictionary__string__bool.h>
#include <app/Uno.Collections.HashSet__framebuffer.h>
#include <app/Uno.Collections.HashSet__Fuse_IFlush.h>
#include <app/Uno.Collections.HashSet__Fuse_Node.h>
#include <app/Uno.Collections.HashSet__int.h>
#include <app/Uno.Collections.HashSet__string.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__framebuffer.h>
#include <app/Uno.Collections.IEnumerator__Fuse_IFlush.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Node.h>
#include <app/Uno.Collections.IEnumerator__int.h>
#include <app/Uno.Collections.IEnumerator__string.h>
#include <app/Uno.Graphics.Framebuffer.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Collections {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HashSet__framebuffer__uType* HashSet__framebuffer__typeof()
{
    static ::uStaticStrong<HashSet__framebuffer__uType*> type;
    if (type != NULL) return type;

    type = (HashSet__framebuffer__uType*)::uAllocClassType(sizeof(HashSet__framebuffer__uType), "Uno.Collections.HashSet<framebuffer>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))HashSet__framebuffer__GetEnumerator_boxed;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__framebuffer__typeof(), offsetof(HashSet__framebuffer__uType, __interface_0));

    type->SetStrongRefs(
        "_map", offsetof(HashSet__framebuffer, _map));

    type->SetFields(1,
        ::uNewField("_map", NULL, offsetof(HashSet__framebuffer, _map), ::app::Uno::Collections::Dictionary__framebuffer__bool__typeof()));

    type->SetFunctions(9,
        ::uNewFunction("Add", HashSet__framebuffer__Add, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Graphics::Framebuffer__typeof()),
        ::uNewFunctionVoid("Clear", HashSet__framebuffer__Clear, 0, false),
        ::uNewFunction("Contains", HashSet__framebuffer__Contains, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Graphics::Framebuffer__typeof()),
        ::uNewFunction("get_Count", HashSet__framebuffer__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", HashSet__framebuffer__GetEnumerator, 0, false, ::app::Uno::Collections::HashSet1_Enumerator__framebuffer__typeof()),
        ::uNewFunction(".ctor", HashSet__framebuffer__New_1, 0, true, HashSet__framebuffer__typeof()),
        ::uNewFunction(".ctor", HashSet__framebuffer__New_2, 0, true, HashSet__framebuffer__typeof(), ::app::Uno::Collections::IEnumerable__framebuffer__typeof()),
        ::uNewFunction("Remove", HashSet__framebuffer__Remove, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Graphics::Framebuffer__typeof()),
        ::uNewFunction("SetEquals", HashSet__framebuffer__SetEquals, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Collections::IEnumerable__framebuffer__typeof()));

    ::uRegisterType(type);
    return type;
}

::uObject* HashSet__framebuffer__GetEnumerator_boxed(HashSet__framebuffer* __this)
{
    return ::uBox(::app::Uno::Collections::HashSet1_Enumerator__framebuffer__typeof(), __this->GetEnumerator());
}

void HashSet__framebuffer___ObjInit(HashSet__framebuffer* __this)
{
    __this->_map = ::app::Uno::Collections::Dictionary__framebuffer__bool__New_1(NULL);
}

void HashSet__framebuffer___ObjInit_1(HashSet__framebuffer* __this, ::uObject* items)
{
    __this->_map = ::app::Uno::Collections::Dictionary__framebuffer__bool__New_1(NULL);

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__framebuffer::GetEnumerator(::uPtr< ::uObject*>(items)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Uno::Graphics::Framebuffer* item = ::app::Uno::Collections::IEnumerator__framebuffer::Current(::uPtr< ::uObject*>(enum_123));
        __this->Add(item);
    }
}

bool HashSet__framebuffer__Add(HashSet__framebuffer* __this, ::app::Uno::Graphics::Framebuffer* item)
{
    bool result = ::uPtr< ::app::Uno::Collections::Dictionary__framebuffer__bool*>(__this->_map)->ContainsKey(item);
    ::uPtr< ::app::Uno::Collections::Dictionary__framebuffer__bool*>(__this->_map)->Item(item, true);
    return result;
}

void HashSet__framebuffer__Clear(HashSet__framebuffer* __this)
{
    ::uPtr< ::app::Uno::Collections::Dictionary__framebuffer__bool*>(__this->_map)->Clear();
}

bool HashSet__framebuffer__Contains(HashSet__framebuffer* __this, ::app::Uno::Graphics::Framebuffer* item)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__framebuffer__bool*>(__this->_map)->ContainsKey(item);
}

int HashSet__framebuffer__get_Count(HashSet__framebuffer* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__framebuffer__bool*>(__this->_map)->Count();
}

::app::Uno::Collections::HashSet1_Enumerator__framebuffer HashSet__framebuffer__GetEnumerator(HashSet__framebuffer* __this)
{
    return ::app::Uno::Collections::HashSet1_Enumerator__framebuffer__New_1(NULL, __this->_map);
}

HashSet__framebuffer* HashSet__framebuffer__New_1(::uStatic* __this)
{
    HashSet__framebuffer* inst = (HashSet__framebuffer*)::uAllocObject(sizeof(HashSet__framebuffer), HashSet__framebuffer__typeof());
    inst->_ObjInit();
    return inst;
}

HashSet__framebuffer* HashSet__framebuffer__New_2(::uStatic* __this, ::uObject* items)
{
    HashSet__framebuffer* inst = (HashSet__framebuffer*)::uAllocObject(sizeof(HashSet__framebuffer), HashSet__framebuffer__typeof());
    inst->_ObjInit_1(items);
    return inst;
}

bool HashSet__framebuffer__Remove(HashSet__framebuffer* __this, ::app::Uno::Graphics::Framebuffer* item)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__framebuffer__bool*>(__this->_map)->Remove(item);
}

bool HashSet__framebuffer__SetEquals(HashSet__framebuffer* __this, ::uObject* that)
{
    HashSet__framebuffer* thatSet = HashSet__framebuffer__New_1(NULL);

    for (::uObject* enum_124 = ::app::Uno::Collections::IEnumerable__framebuffer::GetEnumerator(::uPtr< ::uObject*>(that)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_124)); )
    {
        ::app::Uno::Graphics::Framebuffer* item = ::app::Uno::Collections::IEnumerator__framebuffer::Current(::uPtr< ::uObject*>(enum_124));

        if (!__this->Contains(item))
        {
            return false;
        }

        ::uPtr< HashSet__framebuffer*>(thatSet)->Add(item);
    }

    for (::app::Uno::Collections::HashSet1_Enumerator__framebuffer enum_125 = __this->GetEnumerator(); enum_125.MoveNext(); )
    {
        ::app::Uno::Graphics::Framebuffer* item = enum_125.Current();

        if (!::uPtr< HashSet__framebuffer*>(thatSet)->Contains(item))
        {
            return false;
        }
    }

    return true;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HashSet__Fuse_IFlush__uType* HashSet__Fuse_IFlush__typeof()
{
    static ::uStaticStrong<HashSet__Fuse_IFlush__uType*> type;
    if (type != NULL) return type;

    type = (HashSet__Fuse_IFlush__uType*)::uAllocClassType(sizeof(HashSet__Fuse_IFlush__uType), "Uno.Collections.HashSet<Fuse.IFlush>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))HashSet__Fuse_IFlush__GetEnumerator_boxed;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Fuse_IFlush__typeof(), offsetof(HashSet__Fuse_IFlush__uType, __interface_0));

    type->SetStrongRefs(
        "_map", offsetof(HashSet__Fuse_IFlush, _map));

    type->SetFields(1,
        ::uNewField("_map", NULL, offsetof(HashSet__Fuse_IFlush, _map), ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool__typeof()));

    type->SetFunctions(9,
        ::uNewFunction("Add", HashSet__Fuse_IFlush__Add, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::IFlush__typeof()),
        ::uNewFunctionVoid("Clear", HashSet__Fuse_IFlush__Clear, 0, false),
        ::uNewFunction("Contains", HashSet__Fuse_IFlush__Contains, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::IFlush__typeof()),
        ::uNewFunction("get_Count", HashSet__Fuse_IFlush__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", HashSet__Fuse_IFlush__GetEnumerator, 0, false, ::app::Uno::Collections::HashSet1_Enumerator__Fuse_IFlush__typeof()),
        ::uNewFunction(".ctor", HashSet__Fuse_IFlush__New_1, 0, true, HashSet__Fuse_IFlush__typeof()),
        ::uNewFunction(".ctor", HashSet__Fuse_IFlush__New_2, 0, true, HashSet__Fuse_IFlush__typeof(), ::app::Uno::Collections::IEnumerable__Fuse_IFlush__typeof()),
        ::uNewFunction("Remove", HashSet__Fuse_IFlush__Remove, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::IFlush__typeof()),
        ::uNewFunction("SetEquals", HashSet__Fuse_IFlush__SetEquals, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Collections::IEnumerable__Fuse_IFlush__typeof()));

    ::uRegisterType(type);
    return type;
}

::uObject* HashSet__Fuse_IFlush__GetEnumerator_boxed(HashSet__Fuse_IFlush* __this)
{
    return ::uBox(::app::Uno::Collections::HashSet1_Enumerator__Fuse_IFlush__typeof(), __this->GetEnumerator());
}

void HashSet__Fuse_IFlush___ObjInit(HashSet__Fuse_IFlush* __this)
{
    __this->_map = ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool__New_1(NULL);
}

void HashSet__Fuse_IFlush___ObjInit_1(HashSet__Fuse_IFlush* __this, ::uObject* items)
{
    __this->_map = ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool__New_1(NULL);

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_IFlush::GetEnumerator(::uPtr< ::uObject*>(items)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::uObject* item = ::app::Uno::Collections::IEnumerator__Fuse_IFlush::Current(::uPtr< ::uObject*>(enum_123));
        __this->Add(item);
    }
}

bool HashSet__Fuse_IFlush__Add(HashSet__Fuse_IFlush* __this, ::uObject* item)
{
    bool result = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool*>(__this->_map)->ContainsKey(item);
    ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool*>(__this->_map)->Item(item, true);
    return result;
}

void HashSet__Fuse_IFlush__Clear(HashSet__Fuse_IFlush* __this)
{
    ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool*>(__this->_map)->Clear();
}

bool HashSet__Fuse_IFlush__Contains(HashSet__Fuse_IFlush* __this, ::uObject* item)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool*>(__this->_map)->ContainsKey(item);
}

int HashSet__Fuse_IFlush__get_Count(HashSet__Fuse_IFlush* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool*>(__this->_map)->Count();
}

::app::Uno::Collections::HashSet1_Enumerator__Fuse_IFlush HashSet__Fuse_IFlush__GetEnumerator(HashSet__Fuse_IFlush* __this)
{
    return ::app::Uno::Collections::HashSet1_Enumerator__Fuse_IFlush__New_1(NULL, __this->_map);
}

HashSet__Fuse_IFlush* HashSet__Fuse_IFlush__New_1(::uStatic* __this)
{
    HashSet__Fuse_IFlush* inst = (HashSet__Fuse_IFlush*)::uAllocObject(sizeof(HashSet__Fuse_IFlush), HashSet__Fuse_IFlush__typeof());
    inst->_ObjInit();
    return inst;
}

HashSet__Fuse_IFlush* HashSet__Fuse_IFlush__New_2(::uStatic* __this, ::uObject* items)
{
    HashSet__Fuse_IFlush* inst = (HashSet__Fuse_IFlush*)::uAllocObject(sizeof(HashSet__Fuse_IFlush), HashSet__Fuse_IFlush__typeof());
    inst->_ObjInit_1(items);
    return inst;
}

bool HashSet__Fuse_IFlush__Remove(HashSet__Fuse_IFlush* __this, ::uObject* item)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool*>(__this->_map)->Remove(item);
}

bool HashSet__Fuse_IFlush__SetEquals(HashSet__Fuse_IFlush* __this, ::uObject* that)
{
    HashSet__Fuse_IFlush* thatSet = HashSet__Fuse_IFlush__New_1(NULL);

    for (::uObject* enum_124 = ::app::Uno::Collections::IEnumerable__Fuse_IFlush::GetEnumerator(::uPtr< ::uObject*>(that)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_124)); )
    {
        ::uObject* item = ::app::Uno::Collections::IEnumerator__Fuse_IFlush::Current(::uPtr< ::uObject*>(enum_124));

        if (!__this->Contains(item))
        {
            return false;
        }

        ::uPtr< HashSet__Fuse_IFlush*>(thatSet)->Add(item);
    }

    for (::app::Uno::Collections::HashSet1_Enumerator__Fuse_IFlush enum_125 = __this->GetEnumerator(); enum_125.MoveNext(); )
    {
        ::uObject* item = enum_125.Current();

        if (!::uPtr< HashSet__Fuse_IFlush*>(thatSet)->Contains(item))
        {
            return false;
        }
    }

    return true;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HashSet__Fuse_Node__uType* HashSet__Fuse_Node__typeof()
{
    static ::uStaticStrong<HashSet__Fuse_Node__uType*> type;
    if (type != NULL) return type;

    type = (HashSet__Fuse_Node__uType*)::uAllocClassType(sizeof(HashSet__Fuse_Node__uType), "Uno.Collections.HashSet<Fuse.Node>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))HashSet__Fuse_Node__GetEnumerator_boxed;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Fuse_Node__typeof(), offsetof(HashSet__Fuse_Node__uType, __interface_0));

    type->SetStrongRefs(
        "_map", offsetof(HashSet__Fuse_Node, _map));

    type->SetFields(1,
        ::uNewField("_map", NULL, offsetof(HashSet__Fuse_Node, _map), ::app::Uno::Collections::Dictionary__Fuse_Node__bool__typeof()));

    type->SetFunctions(9,
        ::uNewFunction("Add", HashSet__Fuse_Node__Add, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("Clear", HashSet__Fuse_Node__Clear, 0, false),
        ::uNewFunction("Contains", HashSet__Fuse_Node__Contains, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction("get_Count", HashSet__Fuse_Node__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", HashSet__Fuse_Node__GetEnumerator, 0, false, ::app::Uno::Collections::HashSet1_Enumerator__Fuse_Node__typeof()),
        ::uNewFunction(".ctor", HashSet__Fuse_Node__New_1, 0, true, HashSet__Fuse_Node__typeof()),
        ::uNewFunction(".ctor", HashSet__Fuse_Node__New_2, 0, true, HashSet__Fuse_Node__typeof(), ::app::Uno::Collections::IEnumerable__Fuse_Node__typeof()),
        ::uNewFunction("Remove", HashSet__Fuse_Node__Remove, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction("SetEquals", HashSet__Fuse_Node__SetEquals, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Collections::IEnumerable__Fuse_Node__typeof()));

    ::uRegisterType(type);
    return type;
}

::uObject* HashSet__Fuse_Node__GetEnumerator_boxed(HashSet__Fuse_Node* __this)
{
    return ::uBox(::app::Uno::Collections::HashSet1_Enumerator__Fuse_Node__typeof(), __this->GetEnumerator());
}

void HashSet__Fuse_Node___ObjInit(HashSet__Fuse_Node* __this)
{
    __this->_map = ::app::Uno::Collections::Dictionary__Fuse_Node__bool__New_1(NULL);
}

void HashSet__Fuse_Node___ObjInit_1(HashSet__Fuse_Node* __this, ::uObject* items)
{
    __this->_map = ::app::Uno::Collections::Dictionary__Fuse_Node__bool__New_1(NULL);

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Node::GetEnumerator(::uPtr< ::uObject*>(items)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Node* item = ::app::Uno::Collections::IEnumerator__Fuse_Node::Current(::uPtr< ::uObject*>(enum_123));
        __this->Add(item);
    }
}

bool HashSet__Fuse_Node__Add(HashSet__Fuse_Node* __this, ::app::Fuse::Node* item)
{
    bool result = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Node__bool*>(__this->_map)->ContainsKey(item);
    ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Node__bool*>(__this->_map)->Item(item, true);
    return result;
}

void HashSet__Fuse_Node__Clear(HashSet__Fuse_Node* __this)
{
    ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Node__bool*>(__this->_map)->Clear();
}

bool HashSet__Fuse_Node__Contains(HashSet__Fuse_Node* __this, ::app::Fuse::Node* item)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Node__bool*>(__this->_map)->ContainsKey(item);
}

int HashSet__Fuse_Node__get_Count(HashSet__Fuse_Node* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Node__bool*>(__this->_map)->Count();
}

::app::Uno::Collections::HashSet1_Enumerator__Fuse_Node HashSet__Fuse_Node__GetEnumerator(HashSet__Fuse_Node* __this)
{
    return ::app::Uno::Collections::HashSet1_Enumerator__Fuse_Node__New_1(NULL, __this->_map);
}

HashSet__Fuse_Node* HashSet__Fuse_Node__New_1(::uStatic* __this)
{
    HashSet__Fuse_Node* inst = (HashSet__Fuse_Node*)::uAllocObject(sizeof(HashSet__Fuse_Node), HashSet__Fuse_Node__typeof());
    inst->_ObjInit();
    return inst;
}

HashSet__Fuse_Node* HashSet__Fuse_Node__New_2(::uStatic* __this, ::uObject* items)
{
    HashSet__Fuse_Node* inst = (HashSet__Fuse_Node*)::uAllocObject(sizeof(HashSet__Fuse_Node), HashSet__Fuse_Node__typeof());
    inst->_ObjInit_1(items);
    return inst;
}

bool HashSet__Fuse_Node__Remove(HashSet__Fuse_Node* __this, ::app::Fuse::Node* item)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Node__bool*>(__this->_map)->Remove(item);
}

bool HashSet__Fuse_Node__SetEquals(HashSet__Fuse_Node* __this, ::uObject* that)
{
    HashSet__Fuse_Node* thatSet = HashSet__Fuse_Node__New_1(NULL);

    for (::uObject* enum_124 = ::app::Uno::Collections::IEnumerable__Fuse_Node::GetEnumerator(::uPtr< ::uObject*>(that)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_124)); )
    {
        ::app::Fuse::Node* item = ::app::Uno::Collections::IEnumerator__Fuse_Node::Current(::uPtr< ::uObject*>(enum_124));

        if (!__this->Contains(item))
        {
            return false;
        }

        ::uPtr< HashSet__Fuse_Node*>(thatSet)->Add(item);
    }

    for (::app::Uno::Collections::HashSet1_Enumerator__Fuse_Node enum_125 = __this->GetEnumerator(); enum_125.MoveNext(); )
    {
        ::app::Fuse::Node* item = enum_125.Current();

        if (!::uPtr< HashSet__Fuse_Node*>(thatSet)->Contains(item))
        {
            return false;
        }
    }

    return true;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HashSet__int__uType* HashSet__int__typeof()
{
    static ::uStaticStrong<HashSet__int__uType*> type;
    if (type != NULL) return type;

    type = (HashSet__int__uType*)::uAllocClassType(sizeof(HashSet__int__uType), "Uno.Collections.HashSet<int>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))HashSet__int__GetEnumerator_boxed;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__int__typeof(), offsetof(HashSet__int__uType, __interface_0));

    type->SetStrongRefs(
        "_map", offsetof(HashSet__int, _map));

    type->SetFields(1,
        ::uNewField("_map", NULL, offsetof(HashSet__int, _map), ::app::Uno::Collections::Dictionary__int__bool__typeof()));

    type->SetFunctions(9,
        ::uNewFunction("Add", HashSet__int__Add, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("Clear", HashSet__int__Clear, 0, false),
        ::uNewFunction("Contains", HashSet__int__Contains, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Count", HashSet__int__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", HashSet__int__GetEnumerator, 0, false, ::app::Uno::Collections::HashSet1_Enumerator__int__typeof()),
        ::uNewFunction(".ctor", HashSet__int__New_1, 0, true, HashSet__int__typeof()),
        ::uNewFunction(".ctor", HashSet__int__New_2, 0, true, HashSet__int__typeof(), ::app::Uno::Collections::IEnumerable__int__typeof()),
        ::uNewFunction("Remove", HashSet__int__Remove, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("SetEquals", HashSet__int__SetEquals, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Collections::IEnumerable__int__typeof()));

    ::uRegisterType(type);
    return type;
}

::uObject* HashSet__int__GetEnumerator_boxed(HashSet__int* __this)
{
    return ::uBox(::app::Uno::Collections::HashSet1_Enumerator__int__typeof(), __this->GetEnumerator());
}

void HashSet__int___ObjInit(HashSet__int* __this)
{
    __this->_map = ::app::Uno::Collections::Dictionary__int__bool__New_1(NULL);
}

void HashSet__int___ObjInit_1(HashSet__int* __this, ::uObject* items)
{
    __this->_map = ::app::Uno::Collections::Dictionary__int__bool__New_1(NULL);

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__int::GetEnumerator(::uPtr< ::uObject*>(items)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        int item = ::app::Uno::Collections::IEnumerator__int::Current(::uPtr< ::uObject*>(enum_123));
        __this->Add(item);
    }
}

bool HashSet__int__Add(HashSet__int* __this, int item)
{
    bool result = ::uPtr< ::app::Uno::Collections::Dictionary__int__bool*>(__this->_map)->ContainsKey(item);
    ::uPtr< ::app::Uno::Collections::Dictionary__int__bool*>(__this->_map)->Item(item, true);
    return result;
}

void HashSet__int__Clear(HashSet__int* __this)
{
    ::uPtr< ::app::Uno::Collections::Dictionary__int__bool*>(__this->_map)->Clear();
}

bool HashSet__int__Contains(HashSet__int* __this, int item)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__int__bool*>(__this->_map)->ContainsKey(item);
}

int HashSet__int__get_Count(HashSet__int* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__int__bool*>(__this->_map)->Count();
}

::app::Uno::Collections::HashSet1_Enumerator__int HashSet__int__GetEnumerator(HashSet__int* __this)
{
    return ::app::Uno::Collections::HashSet1_Enumerator__int__New_1(NULL, __this->_map);
}

HashSet__int* HashSet__int__New_1(::uStatic* __this)
{
    HashSet__int* inst = (HashSet__int*)::uAllocObject(sizeof(HashSet__int), HashSet__int__typeof());
    inst->_ObjInit();
    return inst;
}

HashSet__int* HashSet__int__New_2(::uStatic* __this, ::uObject* items)
{
    HashSet__int* inst = (HashSet__int*)::uAllocObject(sizeof(HashSet__int), HashSet__int__typeof());
    inst->_ObjInit_1(items);
    return inst;
}

bool HashSet__int__Remove(HashSet__int* __this, int item)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__int__bool*>(__this->_map)->Remove(item);
}

bool HashSet__int__SetEquals(HashSet__int* __this, ::uObject* that)
{
    HashSet__int* thatSet = HashSet__int__New_1(NULL);

    for (::uObject* enum_124 = ::app::Uno::Collections::IEnumerable__int::GetEnumerator(::uPtr< ::uObject*>(that)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_124)); )
    {
        int item = ::app::Uno::Collections::IEnumerator__int::Current(::uPtr< ::uObject*>(enum_124));

        if (!__this->Contains(item))
        {
            return false;
        }

        ::uPtr< HashSet__int*>(thatSet)->Add(item);
    }

    for (::app::Uno::Collections::HashSet1_Enumerator__int enum_125 = __this->GetEnumerator(); enum_125.MoveNext(); )
    {
        int item = enum_125.Current();

        if (!::uPtr< HashSet__int*>(thatSet)->Contains(item))
        {
            return false;
        }
    }

    return true;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HashSet__string__uType* HashSet__string__typeof()
{
    static ::uStaticStrong<HashSet__string__uType*> type;
    if (type != NULL) return type;

    type = (HashSet__string__uType*)::uAllocClassType(sizeof(HashSet__string__uType), "Uno.Collections.HashSet<string>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))HashSet__string__GetEnumerator_boxed;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__string__typeof(), offsetof(HashSet__string__uType, __interface_0));

    type->SetStrongRefs(
        "_map", offsetof(HashSet__string, _map));

    type->SetFields(1,
        ::uNewField("_map", NULL, offsetof(HashSet__string, _map), ::app::Uno::Collections::Dictionary__string__bool__typeof()));

    type->SetFunctions(9,
        ::uNewFunction("Add", HashSet__string__Add, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("Clear", HashSet__string__Clear, 0, false),
        ::uNewFunction("Contains", HashSet__string__Contains, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("get_Count", HashSet__string__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetEnumerator", HashSet__string__GetEnumerator, 0, false, ::app::Uno::Collections::HashSet1_Enumerator__string__typeof()),
        ::uNewFunction(".ctor", HashSet__string__New_1, 0, true, HashSet__string__typeof()),
        ::uNewFunction(".ctor", HashSet__string__New_2, 0, true, HashSet__string__typeof(), ::app::Uno::Collections::IEnumerable__string__typeof()),
        ::uNewFunction("Remove", HashSet__string__Remove, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("SetEquals", HashSet__string__SetEquals, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Collections::IEnumerable__string__typeof()));

    ::uRegisterType(type);
    return type;
}

::uObject* HashSet__string__GetEnumerator_boxed(HashSet__string* __this)
{
    return ::uBox(::app::Uno::Collections::HashSet1_Enumerator__string__typeof(), __this->GetEnumerator());
}

void HashSet__string___ObjInit(HashSet__string* __this)
{
    __this->_map = ::app::Uno::Collections::Dictionary__string__bool__New_1(NULL);
}

void HashSet__string___ObjInit_1(HashSet__string* __this, ::uObject* items)
{
    __this->_map = ::app::Uno::Collections::Dictionary__string__bool__New_1(NULL);

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__string::GetEnumerator(::uPtr< ::uObject*>(items)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::uString* item = ::app::Uno::Collections::IEnumerator__string::Current(::uPtr< ::uObject*>(enum_123));
        __this->Add(item);
    }
}

bool HashSet__string__Add(HashSet__string* __this, ::uString* item)
{
    bool result = ::uPtr< ::app::Uno::Collections::Dictionary__string__bool*>(__this->_map)->ContainsKey(item);
    ::uPtr< ::app::Uno::Collections::Dictionary__string__bool*>(__this->_map)->Item(item, true);
    return result;
}

void HashSet__string__Clear(HashSet__string* __this)
{
    ::uPtr< ::app::Uno::Collections::Dictionary__string__bool*>(__this->_map)->Clear();
}

bool HashSet__string__Contains(HashSet__string* __this, ::uString* item)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__string__bool*>(__this->_map)->ContainsKey(item);
}

int HashSet__string__get_Count(HashSet__string* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__string__bool*>(__this->_map)->Count();
}

::app::Uno::Collections::HashSet1_Enumerator__string HashSet__string__GetEnumerator(HashSet__string* __this)
{
    return ::app::Uno::Collections::HashSet1_Enumerator__string__New_1(NULL, __this->_map);
}

HashSet__string* HashSet__string__New_1(::uStatic* __this)
{
    HashSet__string* inst = (HashSet__string*)::uAllocObject(sizeof(HashSet__string), HashSet__string__typeof());
    inst->_ObjInit();
    return inst;
}

HashSet__string* HashSet__string__New_2(::uStatic* __this, ::uObject* items)
{
    HashSet__string* inst = (HashSet__string*)::uAllocObject(sizeof(HashSet__string), HashSet__string__typeof());
    inst->_ObjInit_1(items);
    return inst;
}

bool HashSet__string__Remove(HashSet__string* __this, ::uString* item)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__string__bool*>(__this->_map)->Remove(item);
}

bool HashSet__string__SetEquals(HashSet__string* __this, ::uObject* that)
{
    HashSet__string* thatSet = HashSet__string__New_1(NULL);

    for (::uObject* enum_124 = ::app::Uno::Collections::IEnumerable__string::GetEnumerator(::uPtr< ::uObject*>(that)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_124)); )
    {
        ::uString* item = ::app::Uno::Collections::IEnumerator__string::Current(::uPtr< ::uObject*>(enum_124));

        if (!__this->Contains(item))
        {
            return false;
        }

        ::uPtr< HashSet__string*>(thatSet)->Add(item);
    }

    for (::app::Uno::Collections::HashSet1_Enumerator__string enum_125 = __this->GetEnumerator(); enum_125.MoveNext(); )
    {
        ::uString* item = enum_125.Current();

        if (!::uPtr< HashSet__string*>(thatSet)->Contains(item))
        {
            return false;
        }
    }

    return true;
}

}}}
