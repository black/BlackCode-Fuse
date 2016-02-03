// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__UNO_DATA_XML_XML_ATTRIBUTE_HANDLE_H__
#define __APP_UNO_COLLECTIONS_LIST__UNO_DATA_XML_XML_ATTRIBUTE_HANDLE_H__

#include <app/Uno.Collections.IEnumerable__Uno_Data_Xml_XmlAttributeHandle.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle; } } }
namespace app { namespace Uno { namespace Data { namespace Xml { struct XmlAttributeHandle; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Uno_Data_Xml_XmlAttributeHandle;

struct List__Uno_Data_Xml_XmlAttributeHandle__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Uno_Data_Xml_XmlAttributeHandle __interface_0;
};

List__Uno_Data_Xml_XmlAttributeHandle__uType* List__Uno_Data_Xml_XmlAttributeHandle__typeof();

::uObject* List__Uno_Data_Xml_XmlAttributeHandle__GetEnumerator_boxed(List__Uno_Data_Xml_XmlAttributeHandle* __this);
void List__Uno_Data_Xml_XmlAttributeHandle___ObjInit(List__Uno_Data_Xml_XmlAttributeHandle* __this);
void List__Uno_Data_Xml_XmlAttributeHandle___ObjInit_1(List__Uno_Data_Xml_XmlAttributeHandle* __this, int capacity);
void List__Uno_Data_Xml_XmlAttributeHandle__Add(List__Uno_Data_Xml_XmlAttributeHandle* __this, ::app::Uno::Data::Xml::XmlAttributeHandle* item);
void List__Uno_Data_Xml_XmlAttributeHandle__AddRange(List__Uno_Data_Xml_XmlAttributeHandle* __this, ::uObject* items);
void List__Uno_Data_Xml_XmlAttributeHandle__BoundsCheck(List__Uno_Data_Xml_XmlAttributeHandle* __this, int index);
void List__Uno_Data_Xml_XmlAttributeHandle__Clear(List__Uno_Data_Xml_XmlAttributeHandle* __this);
bool List__Uno_Data_Xml_XmlAttributeHandle__Contains(List__Uno_Data_Xml_XmlAttributeHandle* __this, ::app::Uno::Data::Xml::XmlAttributeHandle* item);
void List__Uno_Data_Xml_XmlAttributeHandle__EnsureCapacity(List__Uno_Data_Xml_XmlAttributeHandle* __this);
int List__Uno_Data_Xml_XmlAttributeHandle__get_Count(List__Uno_Data_Xml_XmlAttributeHandle* __this);
::app::Uno::Data::Xml::XmlAttributeHandle* List__Uno_Data_Xml_XmlAttributeHandle__get_Item(List__Uno_Data_Xml_XmlAttributeHandle* __this, int index);
::app::Uno::Collections::List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle List__Uno_Data_Xml_XmlAttributeHandle__GetEnumerator(List__Uno_Data_Xml_XmlAttributeHandle* __this);
int List__Uno_Data_Xml_XmlAttributeHandle__IndexOf(List__Uno_Data_Xml_XmlAttributeHandle* __this, ::app::Uno::Data::Xml::XmlAttributeHandle* item);
void List__Uno_Data_Xml_XmlAttributeHandle__Insert(List__Uno_Data_Xml_XmlAttributeHandle* __this, int index, ::app::Uno::Data::Xml::XmlAttributeHandle* item);
List__Uno_Data_Xml_XmlAttributeHandle* List__Uno_Data_Xml_XmlAttributeHandle__New_1(::uStatic* __this);
List__Uno_Data_Xml_XmlAttributeHandle* List__Uno_Data_Xml_XmlAttributeHandle__New_2(::uStatic* __this, int capacity);
bool List__Uno_Data_Xml_XmlAttributeHandle__Remove(List__Uno_Data_Xml_XmlAttributeHandle* __this, ::app::Uno::Data::Xml::XmlAttributeHandle* item);
void List__Uno_Data_Xml_XmlAttributeHandle__RemoveAt(List__Uno_Data_Xml_XmlAttributeHandle* __this, int index);
void List__Uno_Data_Xml_XmlAttributeHandle__set_Item(List__Uno_Data_Xml_XmlAttributeHandle* __this, int index, ::app::Uno::Data::Xml::XmlAttributeHandle* value);
void List__Uno_Data_Xml_XmlAttributeHandle__Sort(List__Uno_Data_Xml_XmlAttributeHandle* __this, ::uDelegate* comparer);
::uArray* List__Uno_Data_Xml_XmlAttributeHandle__ToArray(List__Uno_Data_Xml_XmlAttributeHandle* __this);

struct List__Uno_Data_Xml_XmlAttributeHandle : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Uno_Data_Xml_XmlAttributeHandle__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Uno_Data_Xml_XmlAttributeHandle___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Uno_Data_Xml_XmlAttributeHandle___ObjInit_1(this, capacity); }
    void Add(::app::Uno::Data::Xml::XmlAttributeHandle* item) { List__Uno_Data_Xml_XmlAttributeHandle__Add(this, item); }
    void AddRange(::uObject* items) { List__Uno_Data_Xml_XmlAttributeHandle__AddRange(this, items); }
    void BoundsCheck(int index) { List__Uno_Data_Xml_XmlAttributeHandle__BoundsCheck(this, index); }
    void Clear() { List__Uno_Data_Xml_XmlAttributeHandle__Clear(this); }
    bool Contains(::app::Uno::Data::Xml::XmlAttributeHandle* item) { return List__Uno_Data_Xml_XmlAttributeHandle__Contains(this, item); }
    void EnsureCapacity() { List__Uno_Data_Xml_XmlAttributeHandle__EnsureCapacity(this); }
    int Count() { return List__Uno_Data_Xml_XmlAttributeHandle__get_Count(this); }
    ::app::Uno::Data::Xml::XmlAttributeHandle* Item(int index) { return List__Uno_Data_Xml_XmlAttributeHandle__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle GetEnumerator();
    int IndexOf(::app::Uno::Data::Xml::XmlAttributeHandle* item) { return List__Uno_Data_Xml_XmlAttributeHandle__IndexOf(this, item); }
    void Insert(int index, ::app::Uno::Data::Xml::XmlAttributeHandle* item) { List__Uno_Data_Xml_XmlAttributeHandle__Insert(this, index, item); }
    bool Remove(::app::Uno::Data::Xml::XmlAttributeHandle* item) { return List__Uno_Data_Xml_XmlAttributeHandle__Remove(this, item); }
    void RemoveAt(int index) { List__Uno_Data_Xml_XmlAttributeHandle__RemoveAt(this, index); }
    void Item(int index, ::app::Uno::Data::Xml::XmlAttributeHandle* value) { List__Uno_Data_Xml_XmlAttributeHandle__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Uno_Data_Xml_XmlAttributeHandle__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Uno_Data_Xml_XmlAttributeHandle__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Uno_Data_Xml_XmlAttributeHandle List__Uno_Data_Xml_XmlAttributeHandle::GetEnumerator() { return List__Uno_Data_Xml_XmlAttributeHandle__GetEnumerator(this); }

}}}


#endif
