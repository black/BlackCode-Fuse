// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__UNO_U_X_FILE_SOURCE_H__
#define __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__UNO_U_X_FILE_SOURCE_H__

#include <app/Uno.Collections.ICollection__Uno_UX_FileSource.h>
#include <app/Uno.Collections.IEnumerable__Uno_UX_FileSource.h>
#include <app/Uno.Collections.IList__Uno_UX_FileSource.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_UX_FileSource; } } }
namespace app { namespace Uno { namespace UX { struct FileSource; } } }

namespace app {
namespace Uno {
namespace Collections {

struct ObservableList__Uno_UX_FileSource;

struct ObservableList__Uno_UX_FileSource__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Uno_UX_FileSource __interface_0;
    ::app::Uno::Collections::ICollection__Uno_UX_FileSource __interface_1;
    ::app::Uno::Collections::IEnumerable__Uno_UX_FileSource __interface_2;
};

ObservableList__Uno_UX_FileSource__uType* ObservableList__Uno_UX_FileSource__typeof();

void ObservableList__Uno_UX_FileSource___ObjInit(ObservableList__Uno_UX_FileSource* __this, ::uDelegate* added, ::uDelegate* removed);
void ObservableList__Uno_UX_FileSource__Add(ObservableList__Uno_UX_FileSource* __this, ::app::Uno::UX::FileSource* item);
void ObservableList__Uno_UX_FileSource__Clear(ObservableList__Uno_UX_FileSource* __this);
bool ObservableList__Uno_UX_FileSource__Contains(ObservableList__Uno_UX_FileSource* __this, ::app::Uno::UX::FileSource* item);
int ObservableList__Uno_UX_FileSource__get_Count(ObservableList__Uno_UX_FileSource* __this);
::app::Uno::UX::FileSource* ObservableList__Uno_UX_FileSource__get_Item(ObservableList__Uno_UX_FileSource* __this, int index);
::uObject* ObservableList__Uno_UX_FileSource__GetEnumerator(ObservableList__Uno_UX_FileSource* __this);
void ObservableList__Uno_UX_FileSource__Insert(ObservableList__Uno_UX_FileSource* __this, int index, ::app::Uno::UX::FileSource* item);
ObservableList__Uno_UX_FileSource* ObservableList__Uno_UX_FileSource__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed);
bool ObservableList__Uno_UX_FileSource__Remove(ObservableList__Uno_UX_FileSource* __this, ::app::Uno::UX::FileSource* item);
void ObservableList__Uno_UX_FileSource__RemoveAt(ObservableList__Uno_UX_FileSource* __this, int index);
void ObservableList__Uno_UX_FileSource__ReplaceAt(ObservableList__Uno_UX_FileSource* __this, int index, ::app::Uno::UX::FileSource* item);

struct ObservableList__Uno_UX_FileSource : ::uObject
{
    ::uStrong< ::app::Uno::Collections::List__Uno_UX_FileSource*> items;
    ::uStrong< ::uDelegate*> added;
    ::uStrong< ::uDelegate*> removed;

    void _ObjInit(::uDelegate* added, ::uDelegate* removed) { ObservableList__Uno_UX_FileSource___ObjInit(this, added, removed); }
    void Add(::app::Uno::UX::FileSource* item) { ObservableList__Uno_UX_FileSource__Add(this, item); }
    void Clear() { ObservableList__Uno_UX_FileSource__Clear(this); }
    bool Contains(::app::Uno::UX::FileSource* item) { return ObservableList__Uno_UX_FileSource__Contains(this, item); }
    int Count() { return ObservableList__Uno_UX_FileSource__get_Count(this); }
    ::app::Uno::UX::FileSource* Item(int index) { return ObservableList__Uno_UX_FileSource__get_Item(this, index); }
    ::uObject* GetEnumerator() { return ObservableList__Uno_UX_FileSource__GetEnumerator(this); }
    void Insert(int index, ::app::Uno::UX::FileSource* item) { ObservableList__Uno_UX_FileSource__Insert(this, index, item); }
    bool Remove(::app::Uno::UX::FileSource* item) { return ObservableList__Uno_UX_FileSource__Remove(this, item); }
    void RemoveAt(int index) { ObservableList__Uno_UX_FileSource__RemoveAt(this, index); }
    void ReplaceAt(int index, ::app::Uno::UX::FileSource* item) { ObservableList__Uno_UX_FileSource__ReplaceAt(this, index, item); }
};

}}}


#endif
