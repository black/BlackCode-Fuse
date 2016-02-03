// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__UNO_U_X_RESOURCE_H__
#define __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__UNO_U_X_RESOURCE_H__

#include <app/Uno.Collections.ICollection__Uno_UX_Resource.h>
#include <app/Uno.Collections.IEnumerable__Uno_UX_Resource.h>
#include <app/Uno.Collections.IList__Uno_UX_Resource.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_UX_Resource; } } }
namespace app { namespace Uno { namespace UX { struct Resource; } } }

namespace app {
namespace Uno {
namespace Collections {

struct ObservableList__Uno_UX_Resource;

struct ObservableList__Uno_UX_Resource__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Uno_UX_Resource __interface_0;
    ::app::Uno::Collections::ICollection__Uno_UX_Resource __interface_1;
    ::app::Uno::Collections::IEnumerable__Uno_UX_Resource __interface_2;
};

ObservableList__Uno_UX_Resource__uType* ObservableList__Uno_UX_Resource__typeof();

void ObservableList__Uno_UX_Resource___ObjInit(ObservableList__Uno_UX_Resource* __this, ::uDelegate* added, ::uDelegate* removed);
void ObservableList__Uno_UX_Resource__Add(ObservableList__Uno_UX_Resource* __this, ::app::Uno::UX::Resource* item);
void ObservableList__Uno_UX_Resource__Clear(ObservableList__Uno_UX_Resource* __this);
bool ObservableList__Uno_UX_Resource__Contains(ObservableList__Uno_UX_Resource* __this, ::app::Uno::UX::Resource* item);
int ObservableList__Uno_UX_Resource__get_Count(ObservableList__Uno_UX_Resource* __this);
::app::Uno::UX::Resource* ObservableList__Uno_UX_Resource__get_Item(ObservableList__Uno_UX_Resource* __this, int index);
::uObject* ObservableList__Uno_UX_Resource__GetEnumerator(ObservableList__Uno_UX_Resource* __this);
void ObservableList__Uno_UX_Resource__Insert(ObservableList__Uno_UX_Resource* __this, int index, ::app::Uno::UX::Resource* item);
ObservableList__Uno_UX_Resource* ObservableList__Uno_UX_Resource__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed);
bool ObservableList__Uno_UX_Resource__Remove(ObservableList__Uno_UX_Resource* __this, ::app::Uno::UX::Resource* item);
void ObservableList__Uno_UX_Resource__RemoveAt(ObservableList__Uno_UX_Resource* __this, int index);
void ObservableList__Uno_UX_Resource__ReplaceAt(ObservableList__Uno_UX_Resource* __this, int index, ::app::Uno::UX::Resource* item);

struct ObservableList__Uno_UX_Resource : ::uObject
{
    ::uStrong< ::app::Uno::Collections::List__Uno_UX_Resource*> items;
    ::uStrong< ::uDelegate*> added;
    ::uStrong< ::uDelegate*> removed;

    void _ObjInit(::uDelegate* added, ::uDelegate* removed) { ObservableList__Uno_UX_Resource___ObjInit(this, added, removed); }
    void Add(::app::Uno::UX::Resource* item) { ObservableList__Uno_UX_Resource__Add(this, item); }
    void Clear() { ObservableList__Uno_UX_Resource__Clear(this); }
    bool Contains(::app::Uno::UX::Resource* item) { return ObservableList__Uno_UX_Resource__Contains(this, item); }
    int Count() { return ObservableList__Uno_UX_Resource__get_Count(this); }
    ::app::Uno::UX::Resource* Item(int index) { return ObservableList__Uno_UX_Resource__get_Item(this, index); }
    ::uObject* GetEnumerator() { return ObservableList__Uno_UX_Resource__GetEnumerator(this); }
    void Insert(int index, ::app::Uno::UX::Resource* item) { ObservableList__Uno_UX_Resource__Insert(this, index, item); }
    bool Remove(::app::Uno::UX::Resource* item) { return ObservableList__Uno_UX_Resource__Remove(this, item); }
    void RemoveAt(int index) { ObservableList__Uno_UX_Resource__RemoveAt(this, index); }
    void ReplaceAt(int index, ::app::Uno::UX::Resource* item) { ObservableList__Uno_UX_Resource__ReplaceAt(this, index, item); }
};

}}}


#endif
