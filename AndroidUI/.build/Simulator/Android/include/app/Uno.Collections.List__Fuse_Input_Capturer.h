// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_INPUT_CAPTURER_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_INPUT_CAPTURER_H__

#include <app/Uno.Collections.ICollection__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.IList__Fuse_Input_Capturer.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct Capturer; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Input_Capturer; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Input_Capturer;

struct List__Fuse_Input_Capturer__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Input_Capturer __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Input_Capturer __interface_1;
    ::app::Uno::Collections::IEnumerable__Fuse_Input_Capturer __interface_2;
};

List__Fuse_Input_Capturer__uType* List__Fuse_Input_Capturer__typeof();

::uObject* List__Fuse_Input_Capturer__GetEnumerator_boxed(List__Fuse_Input_Capturer* __this);
void List__Fuse_Input_Capturer___ObjInit(List__Fuse_Input_Capturer* __this);
void List__Fuse_Input_Capturer___ObjInit_1(List__Fuse_Input_Capturer* __this, int capacity);
void List__Fuse_Input_Capturer__Add(List__Fuse_Input_Capturer* __this, ::app::Fuse::Input::Capturer* item);
void List__Fuse_Input_Capturer__AddRange(List__Fuse_Input_Capturer* __this, ::uObject* items);
void List__Fuse_Input_Capturer__BoundsCheck(List__Fuse_Input_Capturer* __this, int index);
void List__Fuse_Input_Capturer__Clear(List__Fuse_Input_Capturer* __this);
bool List__Fuse_Input_Capturer__Contains(List__Fuse_Input_Capturer* __this, ::app::Fuse::Input::Capturer* item);
void List__Fuse_Input_Capturer__EnsureCapacity(List__Fuse_Input_Capturer* __this);
int List__Fuse_Input_Capturer__get_Count(List__Fuse_Input_Capturer* __this);
::app::Fuse::Input::Capturer* List__Fuse_Input_Capturer__get_Item(List__Fuse_Input_Capturer* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Input_Capturer List__Fuse_Input_Capturer__GetEnumerator(List__Fuse_Input_Capturer* __this);
int List__Fuse_Input_Capturer__IndexOf(List__Fuse_Input_Capturer* __this, ::app::Fuse::Input::Capturer* item);
void List__Fuse_Input_Capturer__Insert(List__Fuse_Input_Capturer* __this, int index, ::app::Fuse::Input::Capturer* item);
List__Fuse_Input_Capturer* List__Fuse_Input_Capturer__New_1(::uStatic* __this);
List__Fuse_Input_Capturer* List__Fuse_Input_Capturer__New_2(::uStatic* __this, int capacity);
bool List__Fuse_Input_Capturer__Remove(List__Fuse_Input_Capturer* __this, ::app::Fuse::Input::Capturer* item);
void List__Fuse_Input_Capturer__RemoveAt(List__Fuse_Input_Capturer* __this, int index);
void List__Fuse_Input_Capturer__set_Item(List__Fuse_Input_Capturer* __this, int index, ::app::Fuse::Input::Capturer* value);
void List__Fuse_Input_Capturer__Sort(List__Fuse_Input_Capturer* __this, ::uDelegate* comparer);
::uArray* List__Fuse_Input_Capturer__ToArray(List__Fuse_Input_Capturer* __this);

struct List__Fuse_Input_Capturer : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Input_Capturer__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Input_Capturer___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Fuse_Input_Capturer___ObjInit_1(this, capacity); }
    void Add(::app::Fuse::Input::Capturer* item) { List__Fuse_Input_Capturer__Add(this, item); }
    void AddRange(::uObject* items) { List__Fuse_Input_Capturer__AddRange(this, items); }
    void BoundsCheck(int index) { List__Fuse_Input_Capturer__BoundsCheck(this, index); }
    void Clear() { List__Fuse_Input_Capturer__Clear(this); }
    bool Contains(::app::Fuse::Input::Capturer* item) { return List__Fuse_Input_Capturer__Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Input_Capturer__EnsureCapacity(this); }
    int Count() { return List__Fuse_Input_Capturer__get_Count(this); }
    ::app::Fuse::Input::Capturer* Item(int index) { return List__Fuse_Input_Capturer__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Input_Capturer GetEnumerator();
    int IndexOf(::app::Fuse::Input::Capturer* item) { return List__Fuse_Input_Capturer__IndexOf(this, item); }
    void Insert(int index, ::app::Fuse::Input::Capturer* item) { List__Fuse_Input_Capturer__Insert(this, index, item); }
    bool Remove(::app::Fuse::Input::Capturer* item) { return List__Fuse_Input_Capturer__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Input_Capturer__RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Input::Capturer* value) { List__Fuse_Input_Capturer__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Input_Capturer__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Fuse_Input_Capturer__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Input_Capturer.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Input_Capturer List__Fuse_Input_Capturer::GetEnumerator() { return List__Fuse_Input_Capturer__GetEnumerator(this); }

}}}


#endif
