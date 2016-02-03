// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__UNO_DATA_XML_XML_LINKED_NODE_H__
#define __APP_UNO_COLLECTIONS_LIST__UNO_DATA_XML_XML_LINKED_NODE_H__

#include <app/Uno.Collections.ICollection__Uno_Data_Xml_XmlLinkedNode.h>
#include <app/Uno.Collections.IEnumerable__Uno_Data_Xml_XmlLinkedNode.h>
#include <app/Uno.Collections.IList__Uno_Data_Xml_XmlLinkedNode.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Uno_Data_Xml_XmlLinkedNode; } } }
namespace app { namespace Uno { namespace Data { namespace Xml { struct XmlLinkedNode; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Uno_Data_Xml_XmlLinkedNode;

struct List__Uno_Data_Xml_XmlLinkedNode__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Uno_Data_Xml_XmlLinkedNode __interface_0;
    ::app::Uno::Collections::ICollection__Uno_Data_Xml_XmlLinkedNode __interface_1;
    ::app::Uno::Collections::IEnumerable__Uno_Data_Xml_XmlLinkedNode __interface_2;
};

List__Uno_Data_Xml_XmlLinkedNode__uType* List__Uno_Data_Xml_XmlLinkedNode__typeof();

::uObject* List__Uno_Data_Xml_XmlLinkedNode__GetEnumerator_boxed(List__Uno_Data_Xml_XmlLinkedNode* __this);
void List__Uno_Data_Xml_XmlLinkedNode___ObjInit(List__Uno_Data_Xml_XmlLinkedNode* __this);
void List__Uno_Data_Xml_XmlLinkedNode___ObjInit_1(List__Uno_Data_Xml_XmlLinkedNode* __this, int capacity);
void List__Uno_Data_Xml_XmlLinkedNode__Add(List__Uno_Data_Xml_XmlLinkedNode* __this, ::app::Uno::Data::Xml::XmlLinkedNode* item);
void List__Uno_Data_Xml_XmlLinkedNode__AddRange(List__Uno_Data_Xml_XmlLinkedNode* __this, ::uObject* items);
void List__Uno_Data_Xml_XmlLinkedNode__BoundsCheck(List__Uno_Data_Xml_XmlLinkedNode* __this, int index);
void List__Uno_Data_Xml_XmlLinkedNode__Clear(List__Uno_Data_Xml_XmlLinkedNode* __this);
bool List__Uno_Data_Xml_XmlLinkedNode__Contains(List__Uno_Data_Xml_XmlLinkedNode* __this, ::app::Uno::Data::Xml::XmlLinkedNode* item);
void List__Uno_Data_Xml_XmlLinkedNode__EnsureCapacity(List__Uno_Data_Xml_XmlLinkedNode* __this);
int List__Uno_Data_Xml_XmlLinkedNode__get_Count(List__Uno_Data_Xml_XmlLinkedNode* __this);
::app::Uno::Data::Xml::XmlLinkedNode* List__Uno_Data_Xml_XmlLinkedNode__get_Item(List__Uno_Data_Xml_XmlLinkedNode* __this, int index);
::app::Uno::Collections::List1_Enumerator__Uno_Data_Xml_XmlLinkedNode List__Uno_Data_Xml_XmlLinkedNode__GetEnumerator(List__Uno_Data_Xml_XmlLinkedNode* __this);
int List__Uno_Data_Xml_XmlLinkedNode__IndexOf(List__Uno_Data_Xml_XmlLinkedNode* __this, ::app::Uno::Data::Xml::XmlLinkedNode* item);
void List__Uno_Data_Xml_XmlLinkedNode__Insert(List__Uno_Data_Xml_XmlLinkedNode* __this, int index, ::app::Uno::Data::Xml::XmlLinkedNode* item);
List__Uno_Data_Xml_XmlLinkedNode* List__Uno_Data_Xml_XmlLinkedNode__New_1(::uStatic* __this);
List__Uno_Data_Xml_XmlLinkedNode* List__Uno_Data_Xml_XmlLinkedNode__New_2(::uStatic* __this, int capacity);
bool List__Uno_Data_Xml_XmlLinkedNode__Remove(List__Uno_Data_Xml_XmlLinkedNode* __this, ::app::Uno::Data::Xml::XmlLinkedNode* item);
void List__Uno_Data_Xml_XmlLinkedNode__RemoveAt(List__Uno_Data_Xml_XmlLinkedNode* __this, int index);
void List__Uno_Data_Xml_XmlLinkedNode__set_Item(List__Uno_Data_Xml_XmlLinkedNode* __this, int index, ::app::Uno::Data::Xml::XmlLinkedNode* value);
void List__Uno_Data_Xml_XmlLinkedNode__Sort(List__Uno_Data_Xml_XmlLinkedNode* __this, ::uDelegate* comparer);
::uArray* List__Uno_Data_Xml_XmlLinkedNode__ToArray(List__Uno_Data_Xml_XmlLinkedNode* __this);

struct List__Uno_Data_Xml_XmlLinkedNode : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Uno_Data_Xml_XmlLinkedNode__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Uno_Data_Xml_XmlLinkedNode___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Uno_Data_Xml_XmlLinkedNode___ObjInit_1(this, capacity); }
    void Add(::app::Uno::Data::Xml::XmlLinkedNode* item) { List__Uno_Data_Xml_XmlLinkedNode__Add(this, item); }
    void AddRange(::uObject* items) { List__Uno_Data_Xml_XmlLinkedNode__AddRange(this, items); }
    void BoundsCheck(int index) { List__Uno_Data_Xml_XmlLinkedNode__BoundsCheck(this, index); }
    void Clear() { List__Uno_Data_Xml_XmlLinkedNode__Clear(this); }
    bool Contains(::app::Uno::Data::Xml::XmlLinkedNode* item) { return List__Uno_Data_Xml_XmlLinkedNode__Contains(this, item); }
    void EnsureCapacity() { List__Uno_Data_Xml_XmlLinkedNode__EnsureCapacity(this); }
    int Count() { return List__Uno_Data_Xml_XmlLinkedNode__get_Count(this); }
    ::app::Uno::Data::Xml::XmlLinkedNode* Item(int index) { return List__Uno_Data_Xml_XmlLinkedNode__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Uno_Data_Xml_XmlLinkedNode GetEnumerator();
    int IndexOf(::app::Uno::Data::Xml::XmlLinkedNode* item) { return List__Uno_Data_Xml_XmlLinkedNode__IndexOf(this, item); }
    void Insert(int index, ::app::Uno::Data::Xml::XmlLinkedNode* item) { List__Uno_Data_Xml_XmlLinkedNode__Insert(this, index, item); }
    bool Remove(::app::Uno::Data::Xml::XmlLinkedNode* item) { return List__Uno_Data_Xml_XmlLinkedNode__Remove(this, item); }
    void RemoveAt(int index) { List__Uno_Data_Xml_XmlLinkedNode__RemoveAt(this, index); }
    void Item(int index, ::app::Uno::Data::Xml::XmlLinkedNode* value) { List__Uno_Data_Xml_XmlLinkedNode__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Uno_Data_Xml_XmlLinkedNode__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Uno_Data_Xml_XmlLinkedNode__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Uno_Data_Xml_XmlLinkedNode.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Uno_Data_Xml_XmlLinkedNode List__Uno_Data_Xml_XmlLinkedNode::GetEnumerator() { return List__Uno_Data_Xml_XmlLinkedNode__GetEnumerator(this); }

}}}


#endif
