// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_STYLE_PROPERTY_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_STYLE_PROPERTY_H__

#include <app/Uno.Collections.IEnumerable__Fuse_StyleProperty.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct StyleProperty; } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_StyleProperty; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_StyleProperty;

struct List__Fuse_StyleProperty__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_StyleProperty __interface_0;
};

List__Fuse_StyleProperty__uType* List__Fuse_StyleProperty__typeof();

::uObject* List__Fuse_StyleProperty__GetEnumerator_boxed(List__Fuse_StyleProperty* __this);
void List__Fuse_StyleProperty___ObjInit(List__Fuse_StyleProperty* __this);
void List__Fuse_StyleProperty___ObjInit_1(List__Fuse_StyleProperty* __this, int capacity);
void List__Fuse_StyleProperty__Add(List__Fuse_StyleProperty* __this, ::app::Fuse::StyleProperty* item);
void List__Fuse_StyleProperty__AddRange(List__Fuse_StyleProperty* __this, ::uObject* items);
void List__Fuse_StyleProperty__BoundsCheck(List__Fuse_StyleProperty* __this, int index);
void List__Fuse_StyleProperty__Clear(List__Fuse_StyleProperty* __this);
bool List__Fuse_StyleProperty__Contains(List__Fuse_StyleProperty* __this, ::app::Fuse::StyleProperty* item);
void List__Fuse_StyleProperty__EnsureCapacity(List__Fuse_StyleProperty* __this);
int List__Fuse_StyleProperty__get_Count(List__Fuse_StyleProperty* __this);
::app::Fuse::StyleProperty* List__Fuse_StyleProperty__get_Item(List__Fuse_StyleProperty* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_StyleProperty List__Fuse_StyleProperty__GetEnumerator(List__Fuse_StyleProperty* __this);
int List__Fuse_StyleProperty__IndexOf(List__Fuse_StyleProperty* __this, ::app::Fuse::StyleProperty* item);
void List__Fuse_StyleProperty__Insert(List__Fuse_StyleProperty* __this, int index, ::app::Fuse::StyleProperty* item);
List__Fuse_StyleProperty* List__Fuse_StyleProperty__New_1(::uStatic* __this);
List__Fuse_StyleProperty* List__Fuse_StyleProperty__New_2(::uStatic* __this, int capacity);
bool List__Fuse_StyleProperty__Remove(List__Fuse_StyleProperty* __this, ::app::Fuse::StyleProperty* item);
void List__Fuse_StyleProperty__RemoveAt(List__Fuse_StyleProperty* __this, int index);
void List__Fuse_StyleProperty__set_Item(List__Fuse_StyleProperty* __this, int index, ::app::Fuse::StyleProperty* value);
void List__Fuse_StyleProperty__Sort(List__Fuse_StyleProperty* __this, ::uDelegate* comparer);
::uArray* List__Fuse_StyleProperty__ToArray(List__Fuse_StyleProperty* __this);

struct List__Fuse_StyleProperty : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_StyleProperty__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_StyleProperty___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_StyleProperty___ObjInit_1(this, capacity); }
    void Add(::app::Fuse::StyleProperty* item) { List__Fuse_StyleProperty__Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_StyleProperty__AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_StyleProperty__BoundsCheck(this, index); }
    void Clear() { List__Fuse_StyleProperty__Clear(this); }
    bool Contains(::app::Fuse::StyleProperty* item) { return List__Fuse_StyleProperty__Contains(this, item); }
    void EnsureCapacity() { List__Fuse_StyleProperty__EnsureCapacity(this); }
    int Count() { return List__Fuse_StyleProperty__get_Count(this); }
    ::app::Fuse::StyleProperty* Item(int index) { return List__Fuse_StyleProperty__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_StyleProperty GetEnumerator();
    int IndexOf(::app::Fuse::StyleProperty* item) { return List__Fuse_StyleProperty__IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::StyleProperty* item) { List__Fuse_StyleProperty__Insert(this, index, item); }
    bool Remove(::app::Fuse::StyleProperty* item) { return List__Fuse_StyleProperty__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_StyleProperty__RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::StyleProperty* value) { List__Fuse_StyleProperty__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_StyleProperty__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_StyleProperty__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_StyleProperty.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_StyleProperty List__Fuse_StyleProperty::GetEnumerator() { return List__Fuse_StyleProperty__GetEnumerator(this); }

}}}


#endif
