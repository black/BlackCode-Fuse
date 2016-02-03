// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__UNO_DATA_XML_XML_ATTRIBUTE_H__
#define __APP_UNO_COLLECTIONS_LIST__UNO_DATA_XML_XML_ATTRIBUTE_H__

#include <app/Uno.Collections.ICollection__Uno_Data_Xml_XmlAttribute.h>
#include <app/Uno.Collections.IEnumerable__Uno_Data_Xml_XmlAttribute.h>
#include <app/Uno.Collections.IList__Uno_Data_Xml_XmlAttribute.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Uno_Data_Xml_XmlAttribute; } } }
namespace app { namespace Uno { namespace Data { namespace Xml { struct XmlAttribute; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Uno_Data_Xml_XmlAttribute;

struct List__Uno_Data_Xml_XmlAttribute__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Uno_Data_Xml_XmlAttribute __interface_0;
    ::app::Uno::Collections::ICollection__Uno_Data_Xml_XmlAttribute __interface_1;
    ::app::Uno::Collections::IEnumerable__Uno_Data_Xml_XmlAttribute __interface_2;
};

List__Uno_Data_Xml_XmlAttribute__uType* List__Uno_Data_Xml_XmlAttribute__typeof();

::uObject* List__Uno_Data_Xml_XmlAttribute__GetEnumerator_boxed(List__Uno_Data_Xml_XmlAttribute* __this);
void List__Uno_Data_Xml_XmlAttribute___ObjInit(List__Uno_Data_Xml_XmlAttribute* __this);
void List__Uno_Data_Xml_XmlAttribute___ObjInit_1(List__Uno_Data_Xml_XmlAttribute* __this, int capacity);
void List__Uno_Data_Xml_XmlAttribute__Add(List__Uno_Data_Xml_XmlAttribute* __this, ::app::Uno::Data::Xml::XmlAttribute* item);
void List__Uno_Data_Xml_XmlAttribute__AddRange(List__Uno_Data_Xml_XmlAttribute* __this, ::uObject* items);
void List__Uno_Data_Xml_XmlAttribute__BoundsCheck(List__Uno_Data_Xml_XmlAttribute* __this, int index);
void List__Uno_Data_Xml_XmlAttribute__Clear(List__Uno_Data_Xml_XmlAttribute* __this);
bool List__Uno_Data_Xml_XmlAttribute__Contains(List__Uno_Data_Xml_XmlAttribute* __this, ::app::Uno::Data::Xml::XmlAttribute* item);
void List__Uno_Data_Xml_XmlAttribute__EnsureCapacity(List__Uno_Data_Xml_XmlAttribute* __this);
int List__Uno_Data_Xml_XmlAttribute__get_Count(List__Uno_Data_Xml_XmlAttribute* __this);
::app::Uno::Data::Xml::XmlAttribute* List__Uno_Data_Xml_XmlAttribute__get_Item(List__Uno_Data_Xml_XmlAttribute* __this, int index);
::app::Uno::Collections::List1_Enumerator__Uno_Data_Xml_XmlAttribute List__Uno_Data_Xml_XmlAttribute__GetEnumerator(List__Uno_Data_Xml_XmlAttribute* __this);
int List__Uno_Data_Xml_XmlAttribute__IndexOf(List__Uno_Data_Xml_XmlAttribute* __this, ::app::Uno::Data::Xml::XmlAttribute* item);
void List__Uno_Data_Xml_XmlAttribute__Insert(List__Uno_Data_Xml_XmlAttribute* __this, int index, ::app::Uno::Data::Xml::XmlAttribute* item);
List__Uno_Data_Xml_XmlAttribute* List__Uno_Data_Xml_XmlAttribute__New_1(::uStatic* __this);
List__Uno_Data_Xml_XmlAttribute* List__Uno_Data_Xml_XmlAttribute__New_2(::uStatic* __this, int capacity);
bool List__Uno_Data_Xml_XmlAttribute__Remove(List__Uno_Data_Xml_XmlAttribute* __this, ::app::Uno::Data::Xml::XmlAttribute* item);
void List__Uno_Data_Xml_XmlAttribute__RemoveAt(List__Uno_Data_Xml_XmlAttribute* __this, int index);
void List__Uno_Data_Xml_XmlAttribute__set_Item(List__Uno_Data_Xml_XmlAttribute* __this, int index, ::app::Uno::Data::Xml::XmlAttribute* value);
void List__Uno_Data_Xml_XmlAttribute__Sort(List__Uno_Data_Xml_XmlAttribute* __this, ::uDelegate* comparer);
::uArray* List__Uno_Data_Xml_XmlAttribute__ToArray(List__Uno_Data_Xml_XmlAttribute* __this);

struct List__Uno_Data_Xml_XmlAttribute : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Uno_Data_Xml_XmlAttribute__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Uno_Data_Xml_XmlAttribute___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Uno_Data_Xml_XmlAttribute___ObjInit_1(this, capacity); }
    void Add(::app::Uno::Data::Xml::XmlAttribute* item) { List__Uno_Data_Xml_XmlAttribute__Add(this, item); }
    void AddRange(::uObject* items) { List__Uno_Data_Xml_XmlAttribute__AddRange(this, items); }
    void BoundsCheck(int index) { List__Uno_Data_Xml_XmlAttribute__BoundsCheck(this, index); }
    void Clear() { List__Uno_Data_Xml_XmlAttribute__Clear(this); }
    bool Contains(::app::Uno::Data::Xml::XmlAttribute* item) { return List__Uno_Data_Xml_XmlAttribute__Contains(this, item); }
    void EnsureCapacity() { List__Uno_Data_Xml_XmlAttribute__EnsureCapacity(this); }
    int Count() { return List__Uno_Data_Xml_XmlAttribute__get_Count(this); }
    ::app::Uno::Data::Xml::XmlAttribute* Item(int index) { return List__Uno_Data_Xml_XmlAttribute__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Uno_Data_Xml_XmlAttribute GetEnumerator();
    int IndexOf(::app::Uno::Data::Xml::XmlAttribute* item) { return List__Uno_Data_Xml_XmlAttribute__IndexOf(this, item); }
    void Insert(int index, ::app::Uno::Data::Xml::XmlAttribute* item) { List__Uno_Data_Xml_XmlAttribute__Insert(this, index, item); }
    bool Remove(::app::Uno::Data::Xml::XmlAttribute* item) { return List__Uno_Data_Xml_XmlAttribute__Remove(this, item); }
    void RemoveAt(int index) { List__Uno_Data_Xml_XmlAttribute__RemoveAt(this, index); }
    void Item(int index, ::app::Uno::Data::Xml::XmlAttribute* value) { List__Uno_Data_Xml_XmlAttribute__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Uno_Data_Xml_XmlAttribute__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Uno_Data_Xml_XmlAttribute__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Uno_Data_Xml_XmlAttribute.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Uno_Data_Xml_XmlAttribute List__Uno_Data_Xml_XmlAttribute::GetEnumerator() { return List__Uno_Data_Xml_XmlAttribute__GetEnumerator(this); }

}}}


#endif
