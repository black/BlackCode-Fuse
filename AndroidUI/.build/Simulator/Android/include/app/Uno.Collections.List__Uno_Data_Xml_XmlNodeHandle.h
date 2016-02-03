// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__UNO_DATA_XML_XML_NODE_HANDLE_H__
#define __APP_UNO_COLLECTIONS_LIST__UNO_DATA_XML_XML_NODE_HANDLE_H__

#include <app/Uno.Collections.ICollection__Uno_Data_Xml_XmlNodeHandle.h>
#include <app/Uno.Collections.IEnumerable__Uno_Data_Xml_XmlNodeHandle.h>
#include <app/Uno.Collections.IList__Uno_Data_Xml_XmlNodeHandle.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Uno_Data_Xml_XmlNodeHandle; } } }
namespace app { namespace Uno { namespace Data { namespace Xml { struct XmlNodeHandle; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Uno_Data_Xml_XmlNodeHandle;

struct List__Uno_Data_Xml_XmlNodeHandle__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Uno_Data_Xml_XmlNodeHandle __interface_0;
    ::app::Uno::Collections::ICollection__Uno_Data_Xml_XmlNodeHandle __interface_1;
    ::app::Uno::Collections::IEnumerable__Uno_Data_Xml_XmlNodeHandle __interface_2;
};

List__Uno_Data_Xml_XmlNodeHandle__uType* List__Uno_Data_Xml_XmlNodeHandle__typeof();

::uObject* List__Uno_Data_Xml_XmlNodeHandle__GetEnumerator_boxed(List__Uno_Data_Xml_XmlNodeHandle* __this);
void List__Uno_Data_Xml_XmlNodeHandle___ObjInit(List__Uno_Data_Xml_XmlNodeHandle* __this);
void List__Uno_Data_Xml_XmlNodeHandle___ObjInit_1(List__Uno_Data_Xml_XmlNodeHandle* __this, int capacity);
void List__Uno_Data_Xml_XmlNodeHandle__Add(List__Uno_Data_Xml_XmlNodeHandle* __this, ::app::Uno::Data::Xml::XmlNodeHandle* item);
void List__Uno_Data_Xml_XmlNodeHandle__AddRange(List__Uno_Data_Xml_XmlNodeHandle* __this, ::uObject* items);
void List__Uno_Data_Xml_XmlNodeHandle__BoundsCheck(List__Uno_Data_Xml_XmlNodeHandle* __this, int index);
void List__Uno_Data_Xml_XmlNodeHandle__Clear(List__Uno_Data_Xml_XmlNodeHandle* __this);
bool List__Uno_Data_Xml_XmlNodeHandle__Contains(List__Uno_Data_Xml_XmlNodeHandle* __this, ::app::Uno::Data::Xml::XmlNodeHandle* item);
void List__Uno_Data_Xml_XmlNodeHandle__EnsureCapacity(List__Uno_Data_Xml_XmlNodeHandle* __this);
int List__Uno_Data_Xml_XmlNodeHandle__get_Count(List__Uno_Data_Xml_XmlNodeHandle* __this);
::app::Uno::Data::Xml::XmlNodeHandle* List__Uno_Data_Xml_XmlNodeHandle__get_Item(List__Uno_Data_Xml_XmlNodeHandle* __this, int index);
::app::Uno::Collections::List1_Enumerator__Uno_Data_Xml_XmlNodeHandle List__Uno_Data_Xml_XmlNodeHandle__GetEnumerator(List__Uno_Data_Xml_XmlNodeHandle* __this);
int List__Uno_Data_Xml_XmlNodeHandle__IndexOf(List__Uno_Data_Xml_XmlNodeHandle* __this, ::app::Uno::Data::Xml::XmlNodeHandle* item);
void List__Uno_Data_Xml_XmlNodeHandle__Insert(List__Uno_Data_Xml_XmlNodeHandle* __this, int index, ::app::Uno::Data::Xml::XmlNodeHandle* item);
List__Uno_Data_Xml_XmlNodeHandle* List__Uno_Data_Xml_XmlNodeHandle__New_1(::uStatic* __this);
List__Uno_Data_Xml_XmlNodeHandle* List__Uno_Data_Xml_XmlNodeHandle__New_2(::uStatic* __this, int capacity);
bool List__Uno_Data_Xml_XmlNodeHandle__Remove(List__Uno_Data_Xml_XmlNodeHandle* __this, ::app::Uno::Data::Xml::XmlNodeHandle* item);
void List__Uno_Data_Xml_XmlNodeHandle__RemoveAt(List__Uno_Data_Xml_XmlNodeHandle* __this, int index);
void List__Uno_Data_Xml_XmlNodeHandle__set_Item(List__Uno_Data_Xml_XmlNodeHandle* __this, int index, ::app::Uno::Data::Xml::XmlNodeHandle* value);
void List__Uno_Data_Xml_XmlNodeHandle__Sort(List__Uno_Data_Xml_XmlNodeHandle* __this, ::uDelegate* comparer);
::uArray* List__Uno_Data_Xml_XmlNodeHandle__ToArray(List__Uno_Data_Xml_XmlNodeHandle* __this);

struct List__Uno_Data_Xml_XmlNodeHandle : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Uno_Data_Xml_XmlNodeHandle__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Uno_Data_Xml_XmlNodeHandle___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Uno_Data_Xml_XmlNodeHandle___ObjInit_1(this, capacity); }
    void Add(::app::Uno::Data::Xml::XmlNodeHandle* item) { List__Uno_Data_Xml_XmlNodeHandle__Add(this, item); }
    void AddRange(::uObject* items) { List__Uno_Data_Xml_XmlNodeHandle__AddRange(this, items); }
    void BoundsCheck(int index) { List__Uno_Data_Xml_XmlNodeHandle__BoundsCheck(this, index); }
    void Clear() { List__Uno_Data_Xml_XmlNodeHandle__Clear(this); }
    bool Contains(::app::Uno::Data::Xml::XmlNodeHandle* item) { return List__Uno_Data_Xml_XmlNodeHandle__Contains(this, item); }
    void EnsureCapacity() { List__Uno_Data_Xml_XmlNodeHandle__EnsureCapacity(this); }
    int Count() { return List__Uno_Data_Xml_XmlNodeHandle__get_Count(this); }
    ::app::Uno::Data::Xml::XmlNodeHandle* Item(int index) { return List__Uno_Data_Xml_XmlNodeHandle__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Uno_Data_Xml_XmlNodeHandle GetEnumerator();
    int IndexOf(::app::Uno::Data::Xml::XmlNodeHandle* item) { return List__Uno_Data_Xml_XmlNodeHandle__IndexOf(this, item); }
    void Insert(int index, ::app::Uno::Data::Xml::XmlNodeHandle* item) { List__Uno_Data_Xml_XmlNodeHandle__Insert(this, index, item); }
    bool Remove(::app::Uno::Data::Xml::XmlNodeHandle* item) { return List__Uno_Data_Xml_XmlNodeHandle__Remove(this, item); }
    void RemoveAt(int index) { List__Uno_Data_Xml_XmlNodeHandle__RemoveAt(this, index); }
    void Item(int index, ::app::Uno::Data::Xml::XmlNodeHandle* value) { List__Uno_Data_Xml_XmlNodeHandle__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Uno_Data_Xml_XmlNodeHandle__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Uno_Data_Xml_XmlNodeHandle__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Uno_Data_Xml_XmlNodeHandle.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Uno_Data_Xml_XmlNodeHandle List__Uno_Data_Xml_XmlNodeHandle::GetEnumerator() { return List__Uno_Data_Xml_XmlNodeHandle__GetEnumerator(this); }

}}}


#endif
