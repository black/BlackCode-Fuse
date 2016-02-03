#include <app/Uno.Bool.h>
#include <app/Uno.Collections.LinkedList__Fuse_Elements_ElementAtlasFramebuff-c58bc108.h>
#include <app/Uno.Collections.LinkedList1_Enumerator__Fuse_Elements_ElementAt-2fa61100.h>
#include <app/Uno.Collections.LinkedListNode__Fuse_Elements_ElementAtlasFrame-441f83fc.h>

namespace app {
namespace Uno {
namespace Collections {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry__uType* LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry__typeof()
{
    static ::uStaticStrong<LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry__uType*> type;
    if (type != NULL) return type;

    type = (LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry__uType*)::uAllocStructType(sizeof(LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry__uType), "Uno.Collections.LinkedList<Fuse.Elements.ElementAtlasFramebufferPoolEntry>.Enumerator", sizeof(LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry), 3, 3, 0);

    type->__interface_1.__fp_Dispose = (void(*)(void*))LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry__Dispose;
    type->__interface_2.__fp_Reset = (void(*)(void*))LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry__Reset;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry__typeof(), offsetof(LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry, _current),
        "_list", offsetof(LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry, _list),
        "_next", offsetof(LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry, _next));

    type->SetFields(3,
        ::uNewField("_current", NULL, offsetof(LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry, _current), ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__typeof()),
        ::uNewField("_list", NULL, offsetof(LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry, _list), ::app::Uno::Collections::LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__typeof()),
        ::uNewField("_next", NULL, offsetof(LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry, _next), ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Dispose", LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry__Dispose, 0, false),
        ::uNewFunction("MoveNext", LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry__MoveNext, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("Reset", LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry__Reset, 0, false));

    ::uRegisterType(type);
    return type;
}

void LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry___ObjInit(LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this, ::app::Uno::Collections::LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* list)
{
    __this->_list = list;
    __this->_next = ::uPtr< ::app::Uno::Collections::LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(__this->_list)->First();
}

void LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry__Dispose(LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this)
{
}

bool LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry__MoveNext(LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this)
{
    if (__this->_next == NULL)
    {
        return false;
    }

    __this->_current = __this->_next;
    __this->_next = ::uPtr< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(__this->_next)->Next();
    return true;
}

LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry__New_1(::uStatic* __this, ::app::Uno::Collections::LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* list)
{
    LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry inst = ::uDefault< LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry>();
    inst._ObjInit(list);
    return inst;
}

void LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry__Reset(LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this)
{
    __this->_next = ::uPtr< ::app::Uno::Collections::LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(__this->_list)->First();
}

}}}
