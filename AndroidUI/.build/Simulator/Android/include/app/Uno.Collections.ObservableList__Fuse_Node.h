// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__FUSE_NODE_H__
#define __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__FUSE_NODE_H__

#include <app/Uno.Collections.ICollection__Fuse_Node.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Node.h>
#include <app/Uno.Collections.IList__Fuse_Node.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Node; } } }

namespace app {
namespace Uno {
namespace Collections {

struct ObservableList__Fuse_Node;

struct ObservableList__Fuse_Node__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Node __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Node __interface_1;
    ::app::Uno::Collections::IEnumerable__Fuse_Node __interface_2;
};

ObservableList__Fuse_Node__uType* ObservableList__Fuse_Node__typeof();

void ObservableList__Fuse_Node___ObjInit(ObservableList__Fuse_Node* __this, ::uDelegate* added, ::uDelegate* removed);
void ObservableList__Fuse_Node__Add(ObservableList__Fuse_Node* __this, ::app::Fuse::Node* item);
void ObservableList__Fuse_Node__Clear(ObservableList__Fuse_Node* __this);
bool ObservableList__Fuse_Node__Contains(ObservableList__Fuse_Node* __this, ::app::Fuse::Node* item);
int ObservableList__Fuse_Node__get_Count(ObservableList__Fuse_Node* __this);
::app::Fuse::Node* ObservableList__Fuse_Node__get_Item(ObservableList__Fuse_Node* __this, int index);
::uObject* ObservableList__Fuse_Node__GetEnumerator(ObservableList__Fuse_Node* __this);
void ObservableList__Fuse_Node__Insert(ObservableList__Fuse_Node* __this, int index, ::app::Fuse::Node* item);
ObservableList__Fuse_Node* ObservableList__Fuse_Node__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed);
bool ObservableList__Fuse_Node__Remove(ObservableList__Fuse_Node* __this, ::app::Fuse::Node* item);
void ObservableList__Fuse_Node__RemoveAt(ObservableList__Fuse_Node* __this, int index);
void ObservableList__Fuse_Node__ReplaceAt(ObservableList__Fuse_Node* __this, int index, ::app::Fuse::Node* item);

struct ObservableList__Fuse_Node : ::uObject
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Node*> items;
    ::uStrong< ::uDelegate*> added;
    ::uStrong< ::uDelegate*> removed;

    void _ObjInit(::uDelegate* added, ::uDelegate* removed) { ObservableList__Fuse_Node___ObjInit(this, added, removed); }
    void Add(::app::Fuse::Node* item) { ObservableList__Fuse_Node__Add(this, item); }
    void Clear() { ObservableList__Fuse_Node__Clear(this); }
    bool Contains(::app::Fuse::Node* item) { return ObservableList__Fuse_Node__Contains(this, item); }
    int Count() { return ObservableList__Fuse_Node__get_Count(this); }
    ::app::Fuse::Node* Item(int index) { return ObservableList__Fuse_Node__get_Item(this, index); }
    ::uObject* GetEnumerator() { return ObservableList__Fuse_Node__GetEnumerator(this); }
    void Insert(int index, ::app::Fuse::Node* item) { ObservableList__Fuse_Node__Insert(this, index, item); }
    bool Remove(::app::Fuse::Node* item) { return ObservableList__Fuse_Node__Remove(this, item); }
    void RemoveAt(int index) { ObservableList__Fuse_Node__RemoveAt(this, index); }
    void ReplaceAt(int index, ::app::Fuse::Node* item) { ObservableList__Fuse_Node__ReplaceAt(this, index, item); }
};

}}}


#endif
