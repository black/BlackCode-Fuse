// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__FUSE_REACTIVE_CASE_H__
#define __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__FUSE_REACTIVE_CASE_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Reactive_Case.h>
#include <app/Uno.Collections.IList__Fuse_Reactive_Case.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Reactive { struct Case; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Reactive_Case; } } }

namespace app {
namespace Uno {
namespace Collections {

struct ObservableList__Fuse_Reactive_Case;

struct ObservableList__Fuse_Reactive_Case__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Reactive_Case __interface_0;
    ::app::Uno::Collections::IEnumerable__Fuse_Reactive_Case __interface_1;
};

ObservableList__Fuse_Reactive_Case__uType* ObservableList__Fuse_Reactive_Case__typeof();

void ObservableList__Fuse_Reactive_Case___ObjInit(ObservableList__Fuse_Reactive_Case* __this, ::uDelegate* added, ::uDelegate* removed);
void ObservableList__Fuse_Reactive_Case__Add(ObservableList__Fuse_Reactive_Case* __this, ::app::Fuse::Reactive::Case* item);
void ObservableList__Fuse_Reactive_Case__Clear(ObservableList__Fuse_Reactive_Case* __this);
bool ObservableList__Fuse_Reactive_Case__Contains(ObservableList__Fuse_Reactive_Case* __this, ::app::Fuse::Reactive::Case* item);
int ObservableList__Fuse_Reactive_Case__get_Count(ObservableList__Fuse_Reactive_Case* __this);
::app::Fuse::Reactive::Case* ObservableList__Fuse_Reactive_Case__get_Item(ObservableList__Fuse_Reactive_Case* __this, int index);
::uObject* ObservableList__Fuse_Reactive_Case__GetEnumerator(ObservableList__Fuse_Reactive_Case* __this);
void ObservableList__Fuse_Reactive_Case__Insert(ObservableList__Fuse_Reactive_Case* __this, int index, ::app::Fuse::Reactive::Case* item);
ObservableList__Fuse_Reactive_Case* ObservableList__Fuse_Reactive_Case__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed);
bool ObservableList__Fuse_Reactive_Case__Remove(ObservableList__Fuse_Reactive_Case* __this, ::app::Fuse::Reactive::Case* item);
void ObservableList__Fuse_Reactive_Case__RemoveAt(ObservableList__Fuse_Reactive_Case* __this, int index);
void ObservableList__Fuse_Reactive_Case__ReplaceAt(ObservableList__Fuse_Reactive_Case* __this, int index, ::app::Fuse::Reactive::Case* item);

struct ObservableList__Fuse_Reactive_Case : ::uObject
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Reactive_Case*> items;
    ::uStrong< ::uDelegate*> added;
    ::uStrong< ::uDelegate*> removed;

    void _ObjInit(::uDelegate* added, ::uDelegate* removed) { ObservableList__Fuse_Reactive_Case___ObjInit(this, added, removed); }
    void Add(::app::Fuse::Reactive::Case* item) { ObservableList__Fuse_Reactive_Case__Add(this, item); }
    void Clear() { ObservableList__Fuse_Reactive_Case__Clear(this); }
    bool Contains(::app::Fuse::Reactive::Case* item) { return ObservableList__Fuse_Reactive_Case__Contains(this, item); }
    int Count() { return ObservableList__Fuse_Reactive_Case__get_Count(this); }
    ::app::Fuse::Reactive::Case* Item(int index) { return ObservableList__Fuse_Reactive_Case__get_Item(this, index); }
    ::uObject* GetEnumerator() { return ObservableList__Fuse_Reactive_Case__GetEnumerator(this); }
    void Insert(int index, ::app::Fuse::Reactive::Case* item) { ObservableList__Fuse_Reactive_Case__Insert(this, index, item); }
    bool Remove(::app::Fuse::Reactive::Case* item) { return ObservableList__Fuse_Reactive_Case__Remove(this, item); }
    void RemoveAt(int index) { ObservableList__Fuse_Reactive_Case__RemoveAt(this, index); }
    void ReplaceAt(int index, ::app::Fuse::Reactive::Case* item) { ObservableList__Fuse_Reactive_Case__ReplaceAt(this, index, item); }
};

}}}


#endif
