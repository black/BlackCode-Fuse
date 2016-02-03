// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FRAMEBUFFER_H__
#define __APP_UNO_COLLECTIONS_LIST__FRAMEBUFFER_H__

#include <app/Uno.Collections.IEnumerable__framebuffer.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__framebuffer; } } }
namespace app { namespace Uno { namespace Graphics { struct Framebuffer; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__framebuffer;

struct List__framebuffer__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__framebuffer __interface_0;
};

List__framebuffer__uType* List__framebuffer__typeof();

::uObject* List__framebuffer__GetEnumerator_boxed(List__framebuffer* __this);
void List__framebuffer___ObjInit(List__framebuffer* __this);
void List__framebuffer___ObjInit_1(List__framebuffer* __this, int capacity);
void List__framebuffer__Add(List__framebuffer* __this, ::app::Uno::Graphics::Framebuffer* item);
void List__framebuffer__AddRange(List__framebuffer* __this, ::uObject* items);
void List__framebuffer__BoundsCheck(List__framebuffer* __this, int index);
void List__framebuffer__Clear(List__framebuffer* __this);
bool List__framebuffer__Contains(List__framebuffer* __this, ::app::Uno::Graphics::Framebuffer* item);
void List__framebuffer__EnsureCapacity(List__framebuffer* __this);
int List__framebuffer__get_Count(List__framebuffer* __this);
::app::Uno::Graphics::Framebuffer* List__framebuffer__get_Item(List__framebuffer* __this, int index);
::app::Uno::Collections::List1_Enumerator__framebuffer List__framebuffer__GetEnumerator(List__framebuffer* __this);
int List__framebuffer__IndexOf(List__framebuffer* __this, ::app::Uno::Graphics::Framebuffer* item);
void List__framebuffer__Insert(List__framebuffer* __this, int index, ::app::Uno::Graphics::Framebuffer* item);
List__framebuffer* List__framebuffer__New_1(::uStatic* __this);
List__framebuffer* List__framebuffer__New_2(::uStatic* __this, int capacity);
bool List__framebuffer__Remove(List__framebuffer* __this, ::app::Uno::Graphics::Framebuffer* item);
void List__framebuffer__RemoveAt(List__framebuffer* __this, int index);
void List__framebuffer__set_Item(List__framebuffer* __this, int index, ::app::Uno::Graphics::Framebuffer* value);
void List__framebuffer__Sort(List__framebuffer* __this, ::uDelegate* comparer);
::uArray* List__framebuffer__ToArray(List__framebuffer* __this);

struct List__framebuffer : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__framebuffer__GetEnumerator_boxed(this); }
    void _ObjInit() { List__framebuffer___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__framebuffer___ObjInit_1(this, capacity); }
    void Add(::app::Uno::Graphics::Framebuffer* item) { List__framebuffer__Add(this, item); }
    void AddRange(::uObject* items) { List__framebuffer__AddRange(this, items); }
    void BoundsCheck(int index) { List__framebuffer__BoundsCheck(this, index); }
    void Clear() { List__framebuffer__Clear(this); }
    bool Contains(::app::Uno::Graphics::Framebuffer* item) { return List__framebuffer__Contains(this, item); }
    void EnsureCapacity() { List__framebuffer__EnsureCapacity(this); }
    int Count() { return List__framebuffer__get_Count(this); }
    ::app::Uno::Graphics::Framebuffer* Item(int index) { return List__framebuffer__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__framebuffer GetEnumerator();
    int IndexOf(::app::Uno::Graphics::Framebuffer* item) { return List__framebuffer__IndexOf(this, item); }
    void Insert(int index, ::app::Uno::Graphics::Framebuffer* item) { List__framebuffer__Insert(this, index, item); }
    bool Remove(::app::Uno::Graphics::Framebuffer* item) { return List__framebuffer__Remove(this, item); }
    void RemoveAt(int index) { List__framebuffer__RemoveAt(this, index); }
    void Item(int index, ::app::Uno::Graphics::Framebuffer* value) { List__framebuffer__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__framebuffer__Sort(this, comparer); }
    ::uArray* ToArray() { return List__framebuffer__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__framebuffer.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__framebuffer List__framebuffer::GetEnumerator() { return List__framebuffer__GetEnumerator(this); }

}}}


#endif
