// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_DRAWING_INTERNAL_MULTI_BUFFER_FIELD_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_DRAWING_INTERNAL_MULTI_BUFFER_FIELD_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Internal_MultiBuffer_Field.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Internal { struct MultiBuffer_Field; } } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Drawing_Internal_MultiBuffer_Field; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Drawing_Internal_MultiBuffer_Field;

struct List__Fuse_Drawing_Internal_MultiBuffer_Field__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Internal_MultiBuffer_Field __interface_0;
};

List__Fuse_Drawing_Internal_MultiBuffer_Field__uType* List__Fuse_Drawing_Internal_MultiBuffer_Field__typeof();

::uObject* List__Fuse_Drawing_Internal_MultiBuffer_Field__GetEnumerator_boxed(List__Fuse_Drawing_Internal_MultiBuffer_Field* __this);
void List__Fuse_Drawing_Internal_MultiBuffer_Field___ObjInit(List__Fuse_Drawing_Internal_MultiBuffer_Field* __this);
void List__Fuse_Drawing_Internal_MultiBuffer_Field___ObjInit_1(List__Fuse_Drawing_Internal_MultiBuffer_Field* __this, int capacity);
void List__Fuse_Drawing_Internal_MultiBuffer_Field__Add(List__Fuse_Drawing_Internal_MultiBuffer_Field* __this, ::app::Fuse::Drawing::Internal::MultiBuffer_Field* item);
void List__Fuse_Drawing_Internal_MultiBuffer_Field__AddRange(List__Fuse_Drawing_Internal_MultiBuffer_Field* __this, ::uObject* items);
void List__Fuse_Drawing_Internal_MultiBuffer_Field__BoundsCheck(List__Fuse_Drawing_Internal_MultiBuffer_Field* __this, int index);
void List__Fuse_Drawing_Internal_MultiBuffer_Field__Clear(List__Fuse_Drawing_Internal_MultiBuffer_Field* __this);
bool List__Fuse_Drawing_Internal_MultiBuffer_Field__Contains(List__Fuse_Drawing_Internal_MultiBuffer_Field* __this, ::app::Fuse::Drawing::Internal::MultiBuffer_Field* item);
void List__Fuse_Drawing_Internal_MultiBuffer_Field__EnsureCapacity(List__Fuse_Drawing_Internal_MultiBuffer_Field* __this);
int List__Fuse_Drawing_Internal_MultiBuffer_Field__get_Count(List__Fuse_Drawing_Internal_MultiBuffer_Field* __this);
::app::Fuse::Drawing::Internal::MultiBuffer_Field* List__Fuse_Drawing_Internal_MultiBuffer_Field__get_Item(List__Fuse_Drawing_Internal_MultiBuffer_Field* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Internal_MultiBuffer_Field List__Fuse_Drawing_Internal_MultiBuffer_Field__GetEnumerator(List__Fuse_Drawing_Internal_MultiBuffer_Field* __this);
int List__Fuse_Drawing_Internal_MultiBuffer_Field__IndexOf(List__Fuse_Drawing_Internal_MultiBuffer_Field* __this, ::app::Fuse::Drawing::Internal::MultiBuffer_Field* item);
void List__Fuse_Drawing_Internal_MultiBuffer_Field__Insert(List__Fuse_Drawing_Internal_MultiBuffer_Field* __this, int index, ::app::Fuse::Drawing::Internal::MultiBuffer_Field* item);
List__Fuse_Drawing_Internal_MultiBuffer_Field* List__Fuse_Drawing_Internal_MultiBuffer_Field__New_1(::uStatic* __this);
List__Fuse_Drawing_Internal_MultiBuffer_Field* List__Fuse_Drawing_Internal_MultiBuffer_Field__New_2(::uStatic* __this, int capacity);
bool List__Fuse_Drawing_Internal_MultiBuffer_Field__Remove(List__Fuse_Drawing_Internal_MultiBuffer_Field* __this, ::app::Fuse::Drawing::Internal::MultiBuffer_Field* item);
void List__Fuse_Drawing_Internal_MultiBuffer_Field__RemoveAt(List__Fuse_Drawing_Internal_MultiBuffer_Field* __this, int index);
void List__Fuse_Drawing_Internal_MultiBuffer_Field__set_Item(List__Fuse_Drawing_Internal_MultiBuffer_Field* __this, int index, ::app::Fuse::Drawing::Internal::MultiBuffer_Field* value);
void List__Fuse_Drawing_Internal_MultiBuffer_Field__Sort(List__Fuse_Drawing_Internal_MultiBuffer_Field* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Drawing_Internal_MultiBuffer_Field__ToArray(List__Fuse_Drawing_Internal_MultiBuffer_Field* __this);

struct List__Fuse_Drawing_Internal_MultiBuffer_Field : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Drawing_Internal_MultiBuffer_Field__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Drawing_Internal_MultiBuffer_Field___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Drawing_Internal_MultiBuffer_Field___ObjInit_1(this, capacity); }
    void Add(::app::Fuse::Drawing::Internal::MultiBuffer_Field* item) { List__Fuse_Drawing_Internal_MultiBuffer_Field__Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Drawing_Internal_MultiBuffer_Field__AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Drawing_Internal_MultiBuffer_Field__BoundsCheck(this, index); }
    void Clear() { List__Fuse_Drawing_Internal_MultiBuffer_Field__Clear(this); }
    bool Contains(::app::Fuse::Drawing::Internal::MultiBuffer_Field* item) { return List__Fuse_Drawing_Internal_MultiBuffer_Field__Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Drawing_Internal_MultiBuffer_Field__EnsureCapacity(this); }
    int Count() { return List__Fuse_Drawing_Internal_MultiBuffer_Field__get_Count(this); }
    ::app::Fuse::Drawing::Internal::MultiBuffer_Field* Item(int index) { return List__Fuse_Drawing_Internal_MultiBuffer_Field__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Internal_MultiBuffer_Field GetEnumerator();
    int IndexOf(::app::Fuse::Drawing::Internal::MultiBuffer_Field* item) { return List__Fuse_Drawing_Internal_MultiBuffer_Field__IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::Drawing::Internal::MultiBuffer_Field* item) { List__Fuse_Drawing_Internal_MultiBuffer_Field__Insert(this, index, item); }
    bool Remove(::app::Fuse::Drawing::Internal::MultiBuffer_Field* item) { return List__Fuse_Drawing_Internal_MultiBuffer_Field__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Drawing_Internal_MultiBuffer_Field__RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Drawing::Internal::MultiBuffer_Field* value) { List__Fuse_Drawing_Internal_MultiBuffer_Field__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Drawing_Internal_MultiBuffer_Field__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Drawing_Internal_MultiBuffer_Field__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Drawing_Internal_MultiBu-545aca11.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Internal_MultiBuffer_Field List__Fuse_Drawing_Internal_MultiBuffer_Field::GetEnumerator() { return List__Fuse_Drawing_Internal_MultiBuffer_Field__GetEnumerator(this); }

}}}


#endif
