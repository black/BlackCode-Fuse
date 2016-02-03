// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__UNO_U_X_I_TEMPLATE_H__
#define __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__UNO_U_X_I_TEMPLATE_H__

#include <app/Uno.Collections.ICollection__Uno_UX_ITemplate.h>
#include <app/Uno.Collections.IEnumerable__Uno_UX_ITemplate.h>
#include <app/Uno.Collections.IList__Uno_UX_ITemplate.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_UX_ITemplate; } } }

namespace app {
namespace Uno {
namespace Collections {

struct ObservableList__Uno_UX_ITemplate;

struct ObservableList__Uno_UX_ITemplate__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Uno_UX_ITemplate __interface_0;
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate __interface_1;
    ::app::Uno::Collections::IEnumerable__Uno_UX_ITemplate __interface_2;
};

ObservableList__Uno_UX_ITemplate__uType* ObservableList__Uno_UX_ITemplate__typeof();

void ObservableList__Uno_UX_ITemplate___ObjInit(ObservableList__Uno_UX_ITemplate* __this, ::uDelegate* added, ::uDelegate* removed);
void ObservableList__Uno_UX_ITemplate__Add(ObservableList__Uno_UX_ITemplate* __this, ::uObject* item);
void ObservableList__Uno_UX_ITemplate__Clear(ObservableList__Uno_UX_ITemplate* __this);
bool ObservableList__Uno_UX_ITemplate__Contains(ObservableList__Uno_UX_ITemplate* __this, ::uObject* item);
int ObservableList__Uno_UX_ITemplate__get_Count(ObservableList__Uno_UX_ITemplate* __this);
::uObject* ObservableList__Uno_UX_ITemplate__get_Item(ObservableList__Uno_UX_ITemplate* __this, int index);
::uObject* ObservableList__Uno_UX_ITemplate__GetEnumerator(ObservableList__Uno_UX_ITemplate* __this);
void ObservableList__Uno_UX_ITemplate__Insert(ObservableList__Uno_UX_ITemplate* __this, int index, ::uObject* item);
ObservableList__Uno_UX_ITemplate* ObservableList__Uno_UX_ITemplate__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed);
bool ObservableList__Uno_UX_ITemplate__Remove(ObservableList__Uno_UX_ITemplate* __this, ::uObject* item);
void ObservableList__Uno_UX_ITemplate__RemoveAt(ObservableList__Uno_UX_ITemplate* __this, int index);
void ObservableList__Uno_UX_ITemplate__ReplaceAt(ObservableList__Uno_UX_ITemplate* __this, int index, ::uObject* item);

struct ObservableList__Uno_UX_ITemplate : ::uObject
{
    ::uStrong< ::app::Uno::Collections::List__Uno_UX_ITemplate*> items;
    ::uStrong< ::uDelegate*> added;
    ::uStrong< ::uDelegate*> removed;

    void _ObjInit(::uDelegate* added, ::uDelegate* removed) { ObservableList__Uno_UX_ITemplate___ObjInit(this, added, removed); }
    void Add(::uObject* item) { ObservableList__Uno_UX_ITemplate__Add(this, item); }
    void Clear() { ObservableList__Uno_UX_ITemplate__Clear(this); }
    bool Contains(::uObject* item) { return ObservableList__Uno_UX_ITemplate__Contains(this, item); }
    int Count() { return ObservableList__Uno_UX_ITemplate__get_Count(this); }
    ::uObject* Item(int index) { return ObservableList__Uno_UX_ITemplate__get_Item(this, index); }
    ::uObject* GetEnumerator() { return ObservableList__Uno_UX_ITemplate__GetEnumerator(this); }
    void Insert(int index, ::uObject* item) { ObservableList__Uno_UX_ITemplate__Insert(this, index, item); }
    bool Remove(::uObject* item) { return ObservableList__Uno_UX_ITemplate__Remove(this, item); }
    void RemoveAt(int index) { ObservableList__Uno_UX_ITemplate__RemoveAt(this, index); }
    void ReplaceAt(int index, ::uObject* item) { ObservableList__Uno_UX_ITemplate__ReplaceAt(this, index, item); }
};

}}}


#endif
