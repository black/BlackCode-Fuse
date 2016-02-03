// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LINKED_LIST1_ENUMERATOR__FUSE_ELEMENTS_ELEMENT_AT_2FA61100_H__
#define __APP_UNO_COLLECTIONS_LINKED_LIST1_ENUMERATOR__FUSE_ELEMENTS_ELEMENT_AT_2FA61100_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Elements_ElementAtlasFramebuf-4dfd1081.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry; } } }
namespace app { namespace Uno { namespace Collections { struct LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry; } } }

namespace app {
namespace Uno {
namespace Collections {

struct LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry;

struct LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry__uType* LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry__typeof();

void LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry___ObjInit(LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this, ::app::Uno::Collections::LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* list);
void LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry__Dispose(LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this);
bool LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry__MoveNext(LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this);
LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry__New_1(::uStatic* __this, ::app::Uno::Collections::LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* list);
void LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry__Reset(LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this);

struct LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry
{
    ::uStrong< ::app::Uno::Collections::LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry*> _list;
    ::uStrong< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*> _current;
    ::uStrong< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*> _next;

    void _ObjInit(::app::Uno::Collections::LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* list) { LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry___ObjInit(this, list); }
    void Dispose() { LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry__Dispose(this); }
    bool MoveNext() { return LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry__MoveNext(this); }
    void Reset() { LinkedList1_Enumerator__Fuse_Elements_ElementAtlasFramebufferPoolEntry__Reset(this); }
};

}}}


#endif
