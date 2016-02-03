// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__FUSE_LAYOUTS_ROW_H__
#define __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__FUSE_LAYOUTS_ROW_H__

#include <app/Uno.Collections.ICollection__Fuse_Layouts_Row.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Layouts_Row.h>
#include <app/Uno.Collections.IList__Fuse_Layouts_Row.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Layouts { struct Row; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Layouts_Row; } } }

namespace app {
namespace Uno {
namespace Collections {

struct ObservableList__Fuse_Layouts_Row;

struct ObservableList__Fuse_Layouts_Row__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Layouts_Row __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Layouts_Row __interface_1;
    ::app::Uno::Collections::IEnumerable__Fuse_Layouts_Row __interface_2;
};

ObservableList__Fuse_Layouts_Row__uType* ObservableList__Fuse_Layouts_Row__typeof();

void ObservableList__Fuse_Layouts_Row___ObjInit(ObservableList__Fuse_Layouts_Row* __this, ::uDelegate* added, ::uDelegate* removed);
void ObservableList__Fuse_Layouts_Row__Add(ObservableList__Fuse_Layouts_Row* __this, ::app::Fuse::Layouts::Row* item);
void ObservableList__Fuse_Layouts_Row__Clear(ObservableList__Fuse_Layouts_Row* __this);
bool ObservableList__Fuse_Layouts_Row__Contains(ObservableList__Fuse_Layouts_Row* __this, ::app::Fuse::Layouts::Row* item);
int ObservableList__Fuse_Layouts_Row__get_Count(ObservableList__Fuse_Layouts_Row* __this);
::app::Fuse::Layouts::Row* ObservableList__Fuse_Layouts_Row__get_Item(ObservableList__Fuse_Layouts_Row* __this, int index);
::uObject* ObservableList__Fuse_Layouts_Row__GetEnumerator(ObservableList__Fuse_Layouts_Row* __this);
void ObservableList__Fuse_Layouts_Row__Insert(ObservableList__Fuse_Layouts_Row* __this, int index, ::app::Fuse::Layouts::Row* item);
ObservableList__Fuse_Layouts_Row* ObservableList__Fuse_Layouts_Row__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed);
bool ObservableList__Fuse_Layouts_Row__Remove(ObservableList__Fuse_Layouts_Row* __this, ::app::Fuse::Layouts::Row* item);
void ObservableList__Fuse_Layouts_Row__RemoveAt(ObservableList__Fuse_Layouts_Row* __this, int index);
void ObservableList__Fuse_Layouts_Row__ReplaceAt(ObservableList__Fuse_Layouts_Row* __this, int index, ::app::Fuse::Layouts::Row* item);

struct ObservableList__Fuse_Layouts_Row : ::uObject
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Layouts_Row*> items;
    ::uStrong< ::uDelegate*> added;
    ::uStrong< ::uDelegate*> removed;

    void _ObjInit(::uDelegate* added, ::uDelegate* removed) { ObservableList__Fuse_Layouts_Row___ObjInit(this, added, removed); }
    void Add(::app::Fuse::Layouts::Row* item) { ObservableList__Fuse_Layouts_Row__Add(this, item); }
    void Clear() { ObservableList__Fuse_Layouts_Row__Clear(this); }
    bool Contains(::app::Fuse::Layouts::Row* item) { return ObservableList__Fuse_Layouts_Row__Contains(this, item); }
    int Count() { return ObservableList__Fuse_Layouts_Row__get_Count(this); }
    ::app::Fuse::Layouts::Row* Item(int index) { return ObservableList__Fuse_Layouts_Row__get_Item(this, index); }
    ::uObject* GetEnumerator() { return ObservableList__Fuse_Layouts_Row__GetEnumerator(this); }
    void Insert(int index, ::app::Fuse::Layouts::Row* item) { ObservableList__Fuse_Layouts_Row__Insert(this, index, item); }
    bool Remove(::app::Fuse::Layouts::Row* item) { return ObservableList__Fuse_Layouts_Row__Remove(this, item); }
    void RemoveAt(int index) { ObservableList__Fuse_Layouts_Row__RemoveAt(this, index); }
    void ReplaceAt(int index, ::app::Fuse::Layouts::Row* item) { ObservableList__Fuse_Layouts_Row__ReplaceAt(this, index, item); }
};

}}}


#endif
