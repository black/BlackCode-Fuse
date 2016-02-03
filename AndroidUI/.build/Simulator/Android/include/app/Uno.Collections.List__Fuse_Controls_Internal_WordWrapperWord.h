// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_CONTROLS_INTERNAL_WORD_WRAPPER_WORD_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_CONTROLS_INTERNAL_WORD_WRAPPER_WORD_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Controls_Internal_WordWrapperWord.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { namespace Internal { struct WordWrapperWord; } } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Controls_Internal_WordWrapperWord;

struct List__Fuse_Controls_Internal_WordWrapperWord__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Controls_Internal_WordWrapperWord __interface_0;
};

List__Fuse_Controls_Internal_WordWrapperWord__uType* List__Fuse_Controls_Internal_WordWrapperWord__typeof();

::uObject* List__Fuse_Controls_Internal_WordWrapperWord__GetEnumerator_boxed(List__Fuse_Controls_Internal_WordWrapperWord* __this);
void List__Fuse_Controls_Internal_WordWrapperWord___ObjInit(List__Fuse_Controls_Internal_WordWrapperWord* __this);
void List__Fuse_Controls_Internal_WordWrapperWord___ObjInit_1(List__Fuse_Controls_Internal_WordWrapperWord* __this, int capacity);
void List__Fuse_Controls_Internal_WordWrapperWord__Add(List__Fuse_Controls_Internal_WordWrapperWord* __this, ::app::Fuse::Controls::Internal::WordWrapperWord* item);
void List__Fuse_Controls_Internal_WordWrapperWord__AddRange(List__Fuse_Controls_Internal_WordWrapperWord* __this, ::uObject* items);
void List__Fuse_Controls_Internal_WordWrapperWord__BoundsCheck(List__Fuse_Controls_Internal_WordWrapperWord* __this, int index);
void List__Fuse_Controls_Internal_WordWrapperWord__Clear(List__Fuse_Controls_Internal_WordWrapperWord* __this);
bool List__Fuse_Controls_Internal_WordWrapperWord__Contains(List__Fuse_Controls_Internal_WordWrapperWord* __this, ::app::Fuse::Controls::Internal::WordWrapperWord* item);
void List__Fuse_Controls_Internal_WordWrapperWord__EnsureCapacity(List__Fuse_Controls_Internal_WordWrapperWord* __this);
int List__Fuse_Controls_Internal_WordWrapperWord__get_Count(List__Fuse_Controls_Internal_WordWrapperWord* __this);
::app::Fuse::Controls::Internal::WordWrapperWord* List__Fuse_Controls_Internal_WordWrapperWord__get_Item(List__Fuse_Controls_Internal_WordWrapperWord* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord List__Fuse_Controls_Internal_WordWrapperWord__GetEnumerator(List__Fuse_Controls_Internal_WordWrapperWord* __this);
int List__Fuse_Controls_Internal_WordWrapperWord__IndexOf(List__Fuse_Controls_Internal_WordWrapperWord* __this, ::app::Fuse::Controls::Internal::WordWrapperWord* item);
void List__Fuse_Controls_Internal_WordWrapperWord__Insert(List__Fuse_Controls_Internal_WordWrapperWord* __this, int index, ::app::Fuse::Controls::Internal::WordWrapperWord* item);
List__Fuse_Controls_Internal_WordWrapperWord* List__Fuse_Controls_Internal_WordWrapperWord__New_1(::uStatic* __this);
List__Fuse_Controls_Internal_WordWrapperWord* List__Fuse_Controls_Internal_WordWrapperWord__New_2(::uStatic* __this, int capacity);
bool List__Fuse_Controls_Internal_WordWrapperWord__Remove(List__Fuse_Controls_Internal_WordWrapperWord* __this, ::app::Fuse::Controls::Internal::WordWrapperWord* item);
void List__Fuse_Controls_Internal_WordWrapperWord__RemoveAt(List__Fuse_Controls_Internal_WordWrapperWord* __this, int index);
void List__Fuse_Controls_Internal_WordWrapperWord__set_Item(List__Fuse_Controls_Internal_WordWrapperWord* __this, int index, ::app::Fuse::Controls::Internal::WordWrapperWord* value);
void List__Fuse_Controls_Internal_WordWrapperWord__Sort(List__Fuse_Controls_Internal_WordWrapperWord* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Controls_Internal_WordWrapperWord__ToArray(List__Fuse_Controls_Internal_WordWrapperWord* __this);

struct List__Fuse_Controls_Internal_WordWrapperWord : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Controls_Internal_WordWrapperWord__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Controls_Internal_WordWrapperWord___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Controls_Internal_WordWrapperWord___ObjInit_1(this, capacity); }
    void Add(::app::Fuse::Controls::Internal::WordWrapperWord* item) { List__Fuse_Controls_Internal_WordWrapperWord__Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Controls_Internal_WordWrapperWord__AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Controls_Internal_WordWrapperWord__BoundsCheck(this, index); }
    void Clear() { List__Fuse_Controls_Internal_WordWrapperWord__Clear(this); }
    bool Contains(::app::Fuse::Controls::Internal::WordWrapperWord* item) { return List__Fuse_Controls_Internal_WordWrapperWord__Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Controls_Internal_WordWrapperWord__EnsureCapacity(this); }
    int Count() { return List__Fuse_Controls_Internal_WordWrapperWord__get_Count(this); }
    ::app::Fuse::Controls::Internal::WordWrapperWord* Item(int index) { return List__Fuse_Controls_Internal_WordWrapperWord__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord GetEnumerator();
    int IndexOf(::app::Fuse::Controls::Internal::WordWrapperWord* item) { return List__Fuse_Controls_Internal_WordWrapperWord__IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::Controls::Internal::WordWrapperWord* item) { List__Fuse_Controls_Internal_WordWrapperWord__Insert(this, index, item); }
    bool Remove(::app::Fuse::Controls::Internal::WordWrapperWord* item) { return List__Fuse_Controls_Internal_WordWrapperWord__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Controls_Internal_WordWrapperWord__RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Controls::Internal::WordWrapperWord* value) { List__Fuse_Controls_Internal_WordWrapperWord__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Controls_Internal_WordWrapperWord__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Controls_Internal_WordWrapperWord__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Controls_Internal_WordWrapperWord List__Fuse_Controls_Internal_WordWrapperWord::GetEnumerator() { return List__Fuse_Controls_Internal_WordWrapperWord__GetEnumerator(this); }

}}}


#endif
