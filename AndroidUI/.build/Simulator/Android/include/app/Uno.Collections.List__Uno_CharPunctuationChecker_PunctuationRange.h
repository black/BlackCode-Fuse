// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__UNO_CHAR_PUNCTUATION_CHECKER_PUNCTUATION_RANGE_H__
#define __APP_UNO_COLLECTIONS_LIST__UNO_CHAR_PUNCTUATION_CHECKER_PUNCTUATION_RANGE_H__

#include <app/Uno.Collections.IEnumerable__Uno_CharPunctuationChecker_PunctuationRange.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Uno_CharPunctuationChecker_PunctuationRange; } } }
namespace app { namespace Uno { struct CharPunctuationChecker_PunctuationRange; } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Uno_CharPunctuationChecker_PunctuationRange;

struct List__Uno_CharPunctuationChecker_PunctuationRange__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Uno_CharPunctuationChecker_PunctuationRange __interface_0;
};

List__Uno_CharPunctuationChecker_PunctuationRange__uType* List__Uno_CharPunctuationChecker_PunctuationRange__typeof();

::uObject* List__Uno_CharPunctuationChecker_PunctuationRange__GetEnumerator_boxed(List__Uno_CharPunctuationChecker_PunctuationRange* __this);
void List__Uno_CharPunctuationChecker_PunctuationRange___ObjInit(List__Uno_CharPunctuationChecker_PunctuationRange* __this);
void List__Uno_CharPunctuationChecker_PunctuationRange___ObjInit_1(List__Uno_CharPunctuationChecker_PunctuationRange* __this, int capacity);
void List__Uno_CharPunctuationChecker_PunctuationRange__Add(List__Uno_CharPunctuationChecker_PunctuationRange* __this, ::app::Uno::CharPunctuationChecker_PunctuationRange* item);
void List__Uno_CharPunctuationChecker_PunctuationRange__AddRange(List__Uno_CharPunctuationChecker_PunctuationRange* __this, ::uObject* items);
void List__Uno_CharPunctuationChecker_PunctuationRange__BoundsCheck(List__Uno_CharPunctuationChecker_PunctuationRange* __this, int index);
void List__Uno_CharPunctuationChecker_PunctuationRange__Clear(List__Uno_CharPunctuationChecker_PunctuationRange* __this);
bool List__Uno_CharPunctuationChecker_PunctuationRange__Contains(List__Uno_CharPunctuationChecker_PunctuationRange* __this, ::app::Uno::CharPunctuationChecker_PunctuationRange* item);
void List__Uno_CharPunctuationChecker_PunctuationRange__EnsureCapacity(List__Uno_CharPunctuationChecker_PunctuationRange* __this);
int List__Uno_CharPunctuationChecker_PunctuationRange__get_Count(List__Uno_CharPunctuationChecker_PunctuationRange* __this);
::app::Uno::CharPunctuationChecker_PunctuationRange* List__Uno_CharPunctuationChecker_PunctuationRange__get_Item(List__Uno_CharPunctuationChecker_PunctuationRange* __this, int index);
::app::Uno::Collections::List1_Enumerator__Uno_CharPunctuationChecker_PunctuationRange List__Uno_CharPunctuationChecker_PunctuationRange__GetEnumerator(List__Uno_CharPunctuationChecker_PunctuationRange* __this);
int List__Uno_CharPunctuationChecker_PunctuationRange__IndexOf(List__Uno_CharPunctuationChecker_PunctuationRange* __this, ::app::Uno::CharPunctuationChecker_PunctuationRange* item);
void List__Uno_CharPunctuationChecker_PunctuationRange__Insert(List__Uno_CharPunctuationChecker_PunctuationRange* __this, int index, ::app::Uno::CharPunctuationChecker_PunctuationRange* item);
List__Uno_CharPunctuationChecker_PunctuationRange* List__Uno_CharPunctuationChecker_PunctuationRange__New_1(::uStatic* __this);
List__Uno_CharPunctuationChecker_PunctuationRange* List__Uno_CharPunctuationChecker_PunctuationRange__New_2(::uStatic* __this, int capacity);
bool List__Uno_CharPunctuationChecker_PunctuationRange__Remove(List__Uno_CharPunctuationChecker_PunctuationRange* __this, ::app::Uno::CharPunctuationChecker_PunctuationRange* item);
void List__Uno_CharPunctuationChecker_PunctuationRange__RemoveAt(List__Uno_CharPunctuationChecker_PunctuationRange* __this, int index);
void List__Uno_CharPunctuationChecker_PunctuationRange__set_Item(List__Uno_CharPunctuationChecker_PunctuationRange* __this, int index, ::app::Uno::CharPunctuationChecker_PunctuationRange* value);
void List__Uno_CharPunctuationChecker_PunctuationRange__Sort(List__Uno_CharPunctuationChecker_PunctuationRange* __this, ::uDelegate* comparer);
::uArray* List__Uno_CharPunctuationChecker_PunctuationRange__ToArray(List__Uno_CharPunctuationChecker_PunctuationRange* __this);

struct List__Uno_CharPunctuationChecker_PunctuationRange : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Uno_CharPunctuationChecker_PunctuationRange__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Uno_CharPunctuationChecker_PunctuationRange___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Uno_CharPunctuationChecker_PunctuationRange___ObjInit_1(this, capacity); }
    void Add(::app::Uno::CharPunctuationChecker_PunctuationRange* item) { List__Uno_CharPunctuationChecker_PunctuationRange__Add(this, item); }
    void AddRange(::uObject* items) { List__Uno_CharPunctuationChecker_PunctuationRange__AddRange(this, items); }
    void BoundsCheck(int index) { List__Uno_CharPunctuationChecker_PunctuationRange__BoundsCheck(this, index); }
    void Clear() { List__Uno_CharPunctuationChecker_PunctuationRange__Clear(this); }
    bool Contains(::app::Uno::CharPunctuationChecker_PunctuationRange* item) { return List__Uno_CharPunctuationChecker_PunctuationRange__Contains(this, item); }
    void EnsureCapacity() { List__Uno_CharPunctuationChecker_PunctuationRange__EnsureCapacity(this); }
    int Count() { return List__Uno_CharPunctuationChecker_PunctuationRange__get_Count(this); }
    ::app::Uno::CharPunctuationChecker_PunctuationRange* Item(int index) { return List__Uno_CharPunctuationChecker_PunctuationRange__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Uno_CharPunctuationChecker_PunctuationRange GetEnumerator();
    int IndexOf(::app::Uno::CharPunctuationChecker_PunctuationRange* item) { return List__Uno_CharPunctuationChecker_PunctuationRange__IndexOf(this, item); }
    void Insert(int index, ::app::Uno::CharPunctuationChecker_PunctuationRange* item) { List__Uno_CharPunctuationChecker_PunctuationRange__Insert(this, index, item); }
    bool Remove(::app::Uno::CharPunctuationChecker_PunctuationRange* item) { return List__Uno_CharPunctuationChecker_PunctuationRange__Remove(this, item); }
    void RemoveAt(int index) { List__Uno_CharPunctuationChecker_PunctuationRange__RemoveAt(this, index); }
    void Item(int index, ::app::Uno::CharPunctuationChecker_PunctuationRange* value) { List__Uno_CharPunctuationChecker_PunctuationRange__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Uno_CharPunctuationChecker_PunctuationRange__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Uno_CharPunctuationChecker_PunctuationRange__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Uno_CharPunctuationChecker_Pu-aff09c2b.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Uno_CharPunctuationChecker_PunctuationRange List__Uno_CharPunctuationChecker_PunctuationRange::GetEnumerator() { return List__Uno_CharPunctuationChecker_PunctuationRange__GetEnumerator(this); }

}}}


#endif
