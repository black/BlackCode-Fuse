// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LINKED_LIST_NODE__FUSE_ELEMENTS_ELEMENT_ATLAS_FRAME_441F83FC_H__
#define __APP_UNO_COLLECTIONS_LINKED_LIST_NODE__FUSE_ELEMENTS_ELEMENT_ATLAS_FRAME_441F83FC_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct ElementAtlasFramebufferPoolEntry; } } }
namespace app { namespace Uno { namespace Collections { struct LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry; } } }

namespace app {
namespace Uno {
namespace Collections {

struct LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry;

struct LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__uType : ::uClassType
{
};

LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__uType* LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__typeof();

void LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry___ObjInit(LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this, ::app::Fuse::Elements::ElementAtlasFramebufferPoolEntry* value);
::app::Uno::Collections::LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__get_List(LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this);
LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__get_Next(LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this);
LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__get_Previous(LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this);
::app::Fuse::Elements::ElementAtlasFramebufferPoolEntry* LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__get_Value(LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this);
LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__New_1(::uStatic* __this, ::app::Fuse::Elements::ElementAtlasFramebufferPoolEntry* value);
void LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__set_List(LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this, ::app::Uno::Collections::LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* value);
void LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__set_Next(LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this, LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* value);
void LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__set_Previous(LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this, LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* value);
void LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__set_Value(LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* __this, ::app::Fuse::Elements::ElementAtlasFramebufferPoolEntry* value);

struct LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry : ::uObject
{
    ::uStrong< ::app::Uno::Collections::LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry*> _List;
    ::uStrong< LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*> _Next;
    ::uStrong< LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*> _Previous;
    ::uStrong< ::app::Fuse::Elements::ElementAtlasFramebufferPoolEntry*> _Value;

    void _ObjInit(::app::Fuse::Elements::ElementAtlasFramebufferPoolEntry* value) { LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry___ObjInit(this, value); }
    ::app::Uno::Collections::LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* List() { return LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__get_List(this); }
    LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* Next() { return LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__get_Next(this); }
    LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* Previous() { return LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__get_Previous(this); }
    ::app::Fuse::Elements::ElementAtlasFramebufferPoolEntry* Value() { return LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__get_Value(this); }
    void List(::app::Uno::Collections::LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* value) { LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__set_List(this, value); }
    void Next(LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* value) { LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__set_Next(this, value); }
    void Previous(LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* value) { LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__set_Previous(this, value); }
    void Value(::app::Fuse::Elements::ElementAtlasFramebufferPoolEntry* value) { LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__set_Value(this, value); }
};

}}}


#endif
