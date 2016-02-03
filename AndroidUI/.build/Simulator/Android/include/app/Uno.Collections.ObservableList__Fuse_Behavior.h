// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__FUSE_BEHAVIOR_H__
#define __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__FUSE_BEHAVIOR_H__

#include <app/Uno.Collections.ICollection__Fuse_Behavior.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Behavior.h>
#include <app/Uno.Collections.IList__Fuse_Behavior.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Behavior; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Behavior; } } }

namespace app {
namespace Uno {
namespace Collections {

struct ObservableList__Fuse_Behavior;

struct ObservableList__Fuse_Behavior__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Behavior __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Behavior __interface_1;
    ::app::Uno::Collections::IEnumerable__Fuse_Behavior __interface_2;
};

ObservableList__Fuse_Behavior__uType* ObservableList__Fuse_Behavior__typeof();

void ObservableList__Fuse_Behavior___ObjInit(ObservableList__Fuse_Behavior* __this, ::uDelegate* added, ::uDelegate* removed);
void ObservableList__Fuse_Behavior__Add(ObservableList__Fuse_Behavior* __this, ::app::Fuse::Behavior* item);
void ObservableList__Fuse_Behavior__Clear(ObservableList__Fuse_Behavior* __this);
bool ObservableList__Fuse_Behavior__Contains(ObservableList__Fuse_Behavior* __this, ::app::Fuse::Behavior* item);
int ObservableList__Fuse_Behavior__get_Count(ObservableList__Fuse_Behavior* __this);
::app::Fuse::Behavior* ObservableList__Fuse_Behavior__get_Item(ObservableList__Fuse_Behavior* __this, int index);
::uObject* ObservableList__Fuse_Behavior__GetEnumerator(ObservableList__Fuse_Behavior* __this);
void ObservableList__Fuse_Behavior__Insert(ObservableList__Fuse_Behavior* __this, int index, ::app::Fuse::Behavior* item);
ObservableList__Fuse_Behavior* ObservableList__Fuse_Behavior__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed);
bool ObservableList__Fuse_Behavior__Remove(ObservableList__Fuse_Behavior* __this, ::app::Fuse::Behavior* item);
void ObservableList__Fuse_Behavior__RemoveAt(ObservableList__Fuse_Behavior* __this, int index);
void ObservableList__Fuse_Behavior__ReplaceAt(ObservableList__Fuse_Behavior* __this, int index, ::app::Fuse::Behavior* item);

struct ObservableList__Fuse_Behavior : ::uObject
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Behavior*> items;
    ::uStrong< ::uDelegate*> added;
    ::uStrong< ::uDelegate*> removed;

    void _ObjInit(::uDelegate* added, ::uDelegate* removed) { ObservableList__Fuse_Behavior___ObjInit(this, added, removed); }
    void Add(::app::Fuse::Behavior* item) { ObservableList__Fuse_Behavior__Add(this, item); }
    void Clear() { ObservableList__Fuse_Behavior__Clear(this); }
    bool Contains(::app::Fuse::Behavior* item) { return ObservableList__Fuse_Behavior__Contains(this, item); }
    int Count() { return ObservableList__Fuse_Behavior__get_Count(this); }
    ::app::Fuse::Behavior* Item(int index) { return ObservableList__Fuse_Behavior__get_Item(this, index); }
    ::uObject* GetEnumerator() { return ObservableList__Fuse_Behavior__GetEnumerator(this); }
    void Insert(int index, ::app::Fuse::Behavior* item) { ObservableList__Fuse_Behavior__Insert(this, index, item); }
    bool Remove(::app::Fuse::Behavior* item) { return ObservableList__Fuse_Behavior__Remove(this, item); }
    void RemoveAt(int index) { ObservableList__Fuse_Behavior__RemoveAt(this, index); }
    void ReplaceAt(int index, ::app::Fuse::Behavior* item) { ObservableList__Fuse_Behavior__ReplaceAt(this, index, item); }
};

}}}


#endif
