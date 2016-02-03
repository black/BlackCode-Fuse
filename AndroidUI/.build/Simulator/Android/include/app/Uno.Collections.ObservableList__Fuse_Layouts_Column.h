// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__FUSE_LAYOUTS_COLUMN_H__
#define __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__FUSE_LAYOUTS_COLUMN_H__

#include <app/Uno.Collections.ICollection__Fuse_Layouts_Column.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Layouts_Column.h>
#include <app/Uno.Collections.IList__Fuse_Layouts_Column.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Layouts { struct Column; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Layouts_Column; } } }

namespace app {
namespace Uno {
namespace Collections {

struct ObservableList__Fuse_Layouts_Column;

struct ObservableList__Fuse_Layouts_Column__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Layouts_Column __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Layouts_Column __interface_1;
    ::app::Uno::Collections::IEnumerable__Fuse_Layouts_Column __interface_2;
};

ObservableList__Fuse_Layouts_Column__uType* ObservableList__Fuse_Layouts_Column__typeof();

void ObservableList__Fuse_Layouts_Column___ObjInit(ObservableList__Fuse_Layouts_Column* __this, ::uDelegate* added, ::uDelegate* removed);
void ObservableList__Fuse_Layouts_Column__Add(ObservableList__Fuse_Layouts_Column* __this, ::app::Fuse::Layouts::Column* item);
void ObservableList__Fuse_Layouts_Column__Clear(ObservableList__Fuse_Layouts_Column* __this);
bool ObservableList__Fuse_Layouts_Column__Contains(ObservableList__Fuse_Layouts_Column* __this, ::app::Fuse::Layouts::Column* item);
int ObservableList__Fuse_Layouts_Column__get_Count(ObservableList__Fuse_Layouts_Column* __this);
::app::Fuse::Layouts::Column* ObservableList__Fuse_Layouts_Column__get_Item(ObservableList__Fuse_Layouts_Column* __this, int index);
::uObject* ObservableList__Fuse_Layouts_Column__GetEnumerator(ObservableList__Fuse_Layouts_Column* __this);
void ObservableList__Fuse_Layouts_Column__Insert(ObservableList__Fuse_Layouts_Column* __this, int index, ::app::Fuse::Layouts::Column* item);
ObservableList__Fuse_Layouts_Column* ObservableList__Fuse_Layouts_Column__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed);
bool ObservableList__Fuse_Layouts_Column__Remove(ObservableList__Fuse_Layouts_Column* __this, ::app::Fuse::Layouts::Column* item);
void ObservableList__Fuse_Layouts_Column__RemoveAt(ObservableList__Fuse_Layouts_Column* __this, int index);
void ObservableList__Fuse_Layouts_Column__ReplaceAt(ObservableList__Fuse_Layouts_Column* __this, int index, ::app::Fuse::Layouts::Column* item);

struct ObservableList__Fuse_Layouts_Column : ::uObject
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Layouts_Column*> items;
    ::uStrong< ::uDelegate*> added;
    ::uStrong< ::uDelegate*> removed;

    void _ObjInit(::uDelegate* added, ::uDelegate* removed) { ObservableList__Fuse_Layouts_Column___ObjInit(this, added, removed); }
    void Add(::app::Fuse::Layouts::Column* item) { ObservableList__Fuse_Layouts_Column__Add(this, item); }
    void Clear() { ObservableList__Fuse_Layouts_Column__Clear(this); }
    bool Contains(::app::Fuse::Layouts::Column* item) { return ObservableList__Fuse_Layouts_Column__Contains(this, item); }
    int Count() { return ObservableList__Fuse_Layouts_Column__get_Count(this); }
    ::app::Fuse::Layouts::Column* Item(int index) { return ObservableList__Fuse_Layouts_Column__get_Item(this, index); }
    ::uObject* GetEnumerator() { return ObservableList__Fuse_Layouts_Column__GetEnumerator(this); }
    void Insert(int index, ::app::Fuse::Layouts::Column* item) { ObservableList__Fuse_Layouts_Column__Insert(this, index, item); }
    bool Remove(::app::Fuse::Layouts::Column* item) { return ObservableList__Fuse_Layouts_Column__Remove(this, item); }
    void RemoveAt(int index) { ObservableList__Fuse_Layouts_Column__RemoveAt(this, index); }
    void ReplaceAt(int index, ::app::Fuse::Layouts::Column* item) { ObservableList__Fuse_Layouts_Column__ReplaceAt(this, index, item); }
};

}}}


#endif
