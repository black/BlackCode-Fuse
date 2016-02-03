// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_HASH_SET__FUSE_NODE_H__
#define __APP_UNO_COLLECTIONS_HASH_SET__FUSE_NODE_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Node.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Fuse_Node__bool; } } }
namespace app { namespace Uno { namespace Collections { struct HashSet1_Enumerator__Fuse_Node; } } }

namespace app {
namespace Uno {
namespace Collections {

struct HashSet__Fuse_Node;

struct HashSet__Fuse_Node__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Node __interface_0;
};

HashSet__Fuse_Node__uType* HashSet__Fuse_Node__typeof();

::uObject* HashSet__Fuse_Node__GetEnumerator_boxed(HashSet__Fuse_Node* __this);
void HashSet__Fuse_Node___ObjInit(HashSet__Fuse_Node* __this);
void HashSet__Fuse_Node___ObjInit_1(HashSet__Fuse_Node* __this, ::uObject* items);
bool HashSet__Fuse_Node__Add(HashSet__Fuse_Node* __this, ::app::Fuse::Node* item);
void HashSet__Fuse_Node__Clear(HashSet__Fuse_Node* __this);
bool HashSet__Fuse_Node__Contains(HashSet__Fuse_Node* __this, ::app::Fuse::Node* item);
int HashSet__Fuse_Node__get_Count(HashSet__Fuse_Node* __this);
::app::Uno::Collections::HashSet1_Enumerator__Fuse_Node HashSet__Fuse_Node__GetEnumerator(HashSet__Fuse_Node* __this);
HashSet__Fuse_Node* HashSet__Fuse_Node__New_1(::uStatic* __this);
HashSet__Fuse_Node* HashSet__Fuse_Node__New_2(::uStatic* __this, ::uObject* items);
bool HashSet__Fuse_Node__Remove(HashSet__Fuse_Node* __this, ::app::Fuse::Node* item);
bool HashSet__Fuse_Node__SetEquals(HashSet__Fuse_Node* __this, ::uObject* that);

struct HashSet__Fuse_Node : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Fuse_Node__bool*> _map;

    ::uObject* GetEnumerator_boxed() { return HashSet__Fuse_Node__GetEnumerator_boxed(this); }
    void _ObjInit() { HashSet__Fuse_Node___ObjInit(this); }
    void _ObjInit_1(::uObject* items) { HashSet__Fuse_Node___ObjInit_1(this, items); }
    bool Add(::app::Fuse::Node* item) { return HashSet__Fuse_Node__Add(this, item); }
    void Clear() { HashSet__Fuse_Node__Clear(this); }
    bool Contains(::app::Fuse::Node* item) { return HashSet__Fuse_Node__Contains(this, item); }
    int Count() { return HashSet__Fuse_Node__get_Count(this); }
    ::app::Uno::Collections::HashSet1_Enumerator__Fuse_Node GetEnumerator();
    bool Remove(::app::Fuse::Node* item) { return HashSet__Fuse_Node__Remove(this, item); }
    bool SetEquals(::uObject* that) { return HashSet__Fuse_Node__SetEquals(this, that); }
};

}}}

#include <app/Uno.Collections.HashSet1_Enumerator__Fuse_Node.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::HashSet1_Enumerator__Fuse_Node HashSet__Fuse_Node::GetEnumerator() { return HashSet__Fuse_Node__GetEnumerator(this); }

}}}


#endif
