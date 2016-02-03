#include <app/Fuse.Elements.ElementAtlasFramebufferPoolEntry.h>
#include <app/Uno.ArgumentNullException.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Elements_ElementAtlasFramebuf-4dfd1081.h>
#include <app/Uno.Collections.LinkedList__Fuse_Elements_ElementAtlasFramebuff-c58bc108.h>
#include <app/Uno.Collections.LinkedList1_Enumerator__Fuse_Elements_ElementAt-2fa61100.h>
#include <app/Uno.Collections.LinkedListNode__Fuse_Elements_ElementAtlasFrame-441f83fc.h>
#include <app/Uno.Int.h>
#include <app/Uno.InvalidOperationException.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Collections {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__uType* LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__typeof()
{
    static ::uStaticStrong<LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__uType*> type;
    if (type != NULL) return type;

    type = (LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__uType*)::uAllocClassType(sizeof(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__uType), "Uno.Collections.LinkedList<Fuse.Elements.ElementAtlasFramebufferPoolEntry>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_First", offsetof(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry, _First),
        "_Last", offsetof(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry, _Last));

    type->SetFunctions(18,
        ::uNewFunction("AddFirst", LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__AddFirst, 0, false, ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__typeof(), ::app::Fuse::Elements::ElementAtlasFramebufferPoolEntry__typeof()),
        ::uNewFunctionVoid("AddFirst", LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__AddFirst_1, 0, false, ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__typeof()),
        ::uNewFunction("AddLast", LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__AddLast, 0, false, ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__typeof(), ::app::Fuse::Elements::ElementAtlasFramebufferPoolEntry__typeof()),
        ::uNewFunctionVoid("AddLast", LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__AddLast_1, 0, false, ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__typeof()),
        ::uNewFunctionVoid("Clear", LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__Clear, 0, false),
        ::uNewFunction("Contains", LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__Contains, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::ElementAtlasFramebufferPoolEntry__typeof()),
        ::uNewFunction("Find", LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__Find, 0, false, ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__typeof(), ::app::Fuse::Elements::ElementAtlasFramebufferPoolEntry__typeof()),
        ::uNewFunction("get_Count", LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_First", LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__get_First, 0, false, ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__typeof()),
        ::uNewFunction("get_Last", LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__get_Last, 0, false, ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__typeof()),
        ::uNewFunction("GetEnumerator", LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry__typeof()),
        ::uNewFunction(".ctor", LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__New_1, 0, true, LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__typeof()),
        ::uNewFunction("Remove", LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__Remove, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Elements::ElementAtlasFramebufferPoolEntry__typeof()),
        ::uNewFunctionVoid("Remove", LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__Remove_1, 0, false, ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__typeof()),
        ::uNewFunctionVoid("set_Count", LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__set_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("set_First", LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__set_First, 0, false, ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__typeof()),
        ::uNewFunctionVoid("set_Last", LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__set_Last, 0, false, ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__typeof()),
        ::uNewFunctionVoid("Uno.Collections.ICollection<Fuse.Elements.ElementAtlasFramebufferPoolEntry>.Add", LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__Uno_Collections_ICollection_Add, 0, false, ::app::Fuse::Elements::ElementAtlasFramebufferPoolEntry__typeof()));

    ::uRegisterType(type);
    return type;
}

void LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry___ObjInit(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this)
{
}

::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__AddFirst(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this, ::app::Fuse::Elements::ElementAtlasFramebufferPoolEntry* value)
{
    ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* node = ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__New_1(NULL, value);
    __this->AddFirst_1(node);
    return node;
}

void LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__AddFirst_1(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this, ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* node)
{
    if (node == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("node")));
    }

    if (::uPtr< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(node)->List() != NULL)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("The LinkedList node already belongs to a LinkedList.")));
    }

    if (__this->Last() == NULL)
    {
        __this->First((__this->Last(node), node));
    }
    else
    {
        ::uPtr< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(__this->First())->Previous(node);
        ::uPtr< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(node)->Next(__this->First());
        node->Previous(NULL);
        __this->First(node);
    }

    if (::uPtr< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(node)->List() != __this)
    {
        ::uPtr< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(node)->List(__this);
        __this->Count(__this->Count() + 1);
    }
}

::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__AddLast(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this, ::app::Fuse::Elements::ElementAtlasFramebufferPoolEntry* value)
{
    ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* node = ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__New_1(NULL, value);
    __this->AddLast_1(node);
    return node;
}

void LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__AddLast_1(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this, ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* node)
{
    if (node == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("node")));
    }

    if (::uPtr< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(node)->List() != NULL)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("The LinkedList node already belongs to a LinkedList.")));
    }

    if (__this->Last() == NULL)
    {
        __this->First((__this->Last(node), node));
    }
    else
    {
        ::uPtr< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(__this->Last())->Next(node);
        ::uPtr< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(node)->Next(NULL);
        node->Previous(__this->Last());
        __this->Last(node);
    }

    if (::uPtr< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(node)->List() != __this)
    {
        ::uPtr< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(node)->List(__this);
        __this->Count(__this->Count() + 1);
    }
}

void LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__Clear(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this)
{
    ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* curr = __this->First();

    while (curr != NULL)
    {
        ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* next = ::uPtr< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(curr)->Next();
        curr->Previous(NULL);
        curr->Next(NULL);
        curr->List(NULL);
        curr = next;
    }

    __this->First((__this->Last(NULL), (::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*)NULL));
    __this->Count(0);
}

bool LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__Contains(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this, ::app::Fuse::Elements::ElementAtlasFramebufferPoolEntry* value)
{
    return __this->Find(value) != NULL;
}

::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__Find(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this, ::app::Fuse::Elements::ElementAtlasFramebufferPoolEntry* value)
{
    ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* curr = __this->First();

    while (curr != NULL)
    {
        if (::app::Uno::Object::Equals(::uPtr< ::app::Fuse::Elements::ElementAtlasFramebufferPoolEntry*>(::uPtr< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(curr)->Value()), (::uObject*)value))
        {
            return curr;
        }

        curr = ::uPtr< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(curr)->Next();
    }

    return NULL;
}

int LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__get_Count(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this)
{
    return __this->_Count;
}

::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__get_First(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this)
{
    return __this->_First;
}

::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__get_Last(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this)
{
    return __this->_Last;
}

::uObject* LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__GetEnumerator(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this)
{
    return ::uBox(::app::Uno::Collections::LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry__typeof(), ::app::Uno::Collections::LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry__New_1(NULL, __this));
}

LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__New_1(::uStatic* __this)
{
    LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* inst = (LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry*)::uAllocObject(sizeof(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry), LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__typeof());
    inst->_ObjInit();
    return inst;
}

bool LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__Remove(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this, ::app::Fuse::Elements::ElementAtlasFramebufferPoolEntry* value)
{
    ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* node = __this->Find(value);

    if (node != NULL)
    {
        __this->Remove_1(node);
        return true;
    }

    return false;
}

void LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__Remove_1(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this, ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* node)
{
    if (node == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("node")));
    }

    if (::uPtr< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(node)->List() != __this)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("The LinkedList node does not belong to current LinkedList.")));
    }

    if (::uPtr< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(node)->Previous() != NULL)
    {
        ::uPtr< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(::uPtr< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(node)->Previous())->Next(::uPtr< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(node)->Next());
    }

    if (node->Next() != NULL)
    {
        ::uPtr< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(node->Next())->Previous(node->Previous());
    }

    if (node == __this->First())
    {
        __this->First(node->Next());
    }

    if (node == __this->Last())
    {
        __this->Last(node->Previous());
    }

    node->List(NULL);
    __this->Count(__this->Count() - 1);
}

void LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__set_Count(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this, int value)
{
    __this->_Count = value;
}

void LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__set_First(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this, ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* value)
{
    __this->_First = value;
}

void LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__set_Last(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this, ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* value)
{
    __this->_Last = value;
}

void LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__Uno_Collections_ICollection_Add(LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this, ::app::Fuse::Elements::ElementAtlasFramebufferPoolEntry* value)
{
    __this->AddLast(value);
}

}}}
