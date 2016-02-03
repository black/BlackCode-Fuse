// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__UNO_U_X_I_FACTORY_H__
#define __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__UNO_U_X_I_FACTORY_H__

#include <app/Uno.Collections.IEnumerable__Uno_UX_IFactory.h>
#include <app/Uno.Collections.IList__Uno_UX_IFactory.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_UX_IFactory; } } }

namespace app {
namespace Uno {
namespace Collections {

struct ObservableList__Uno_UX_IFactory;

struct ObservableList__Uno_UX_IFactory__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Uno_UX_IFactory __interface_0;
    ::app::Uno::Collections::IEnumerable__Uno_UX_IFactory __interface_1;
};

ObservableList__Uno_UX_IFactory__uType* ObservableList__Uno_UX_IFactory__typeof();

void ObservableList__Uno_UX_IFactory___ObjInit(ObservableList__Uno_UX_IFactory* __this, ::uDelegate* added, ::uDelegate* removed);
void ObservableList__Uno_UX_IFactory__Add(ObservableList__Uno_UX_IFactory* __this, ::uObject* item);
void ObservableList__Uno_UX_IFactory__Clear(ObservableList__Uno_UX_IFactory* __this);
bool ObservableList__Uno_UX_IFactory__Contains(ObservableList__Uno_UX_IFactory* __this, ::uObject* item);
int ObservableList__Uno_UX_IFactory__get_Count(ObservableList__Uno_UX_IFactory* __this);
::uObject* ObservableList__Uno_UX_IFactory__get_Item(ObservableList__Uno_UX_IFactory* __this, int index);
::uObject* ObservableList__Uno_UX_IFactory__GetEnumerator(ObservableList__Uno_UX_IFactory* __this);
void ObservableList__Uno_UX_IFactory__Insert(ObservableList__Uno_UX_IFactory* __this, int index, ::uObject* item);
ObservableList__Uno_UX_IFactory* ObservableList__Uno_UX_IFactory__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed);
bool ObservableList__Uno_UX_IFactory__Remove(ObservableList__Uno_UX_IFactory* __this, ::uObject* item);
void ObservableList__Uno_UX_IFactory__RemoveAt(ObservableList__Uno_UX_IFactory* __this, int index);
void ObservableList__Uno_UX_IFactory__ReplaceAt(ObservableList__Uno_UX_IFactory* __this, int index, ::uObject* item);

struct ObservableList__Uno_UX_IFactory : ::uObject
{
    ::uStrong< ::app::Uno::Collections::List__Uno_UX_IFactory*> items;
    ::uStrong< ::uDelegate*> added;
    ::uStrong< ::uDelegate*> removed;

    void _ObjInit(::uDelegate* added, ::uDelegate* removed) { ObservableList__Uno_UX_IFactory___ObjInit(this, added, removed); }
    void Add(::uObject* item) { ObservableList__Uno_UX_IFactory__Add(this, item); }
    void Clear() { ObservableList__Uno_UX_IFactory__Clear(this); }
    bool Contains(::uObject* item) { return ObservableList__Uno_UX_IFactory__Contains(this, item); }
    int Count() { return ObservableList__Uno_UX_IFactory__get_Count(this); }
    ::uObject* Item(int index) { return ObservableList__Uno_UX_IFactory__get_Item(this, index); }
    ::uObject* GetEnumerator() { return ObservableList__Uno_UX_IFactory__GetEnumerator(this); }
    void Insert(int index, ::uObject* item) { ObservableList__Uno_UX_IFactory__Insert(this, index, item); }
    bool Remove(::uObject* item) { return ObservableList__Uno_UX_IFactory__Remove(this, item); }
    void RemoveAt(int index) { ObservableList__Uno_UX_IFactory__RemoveAt(this, index); }
    void ReplaceAt(int index, ::uObject* item) { ObservableList__Uno_UX_IFactory__ReplaceAt(this, index, item); }
};

}}}


#endif
