// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DATA_XML_XML_NODE_COLLECTION_BASE__UNO_DATA_XML_XML_LINKED_NODE_H__
#define __APP_UNO_DATA_XML_XML_NODE_COLLECTION_BASE__UNO_DATA_XML_XML_LINKED_NODE_H__

#include <app/Uno.Collections.ICollection__Uno_Data_Xml_XmlLinkedNode.h>
#include <app/Uno.Collections.IEnumerable__Uno_Data_Xml_XmlLinkedNode.h>
#include <app/Uno.Collections.IList__Uno_Data_Xml_XmlLinkedNode.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Data { namespace Xml { struct XmlLinkedNode; } } } }

namespace app {
namespace Uno {
namespace Data {
namespace Xml {

struct XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode;

struct XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Uno_Data_Xml_XmlLinkedNode __interface_0;
    ::app::Uno::Collections::ICollection__Uno_Data_Xml_XmlLinkedNode __interface_1;
    ::app::Uno::Collections::IEnumerable__Uno_Data_Xml_XmlLinkedNode __interface_2;
    void(*__fp_Add)(XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode*, ::app::Uno::Data::Xml::XmlLinkedNode*);
    void(*__fp_Insert)(XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode*, int, ::app::Uno::Data::Xml::XmlLinkedNode*);
    bool(*__fp_Remove)(XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode*, ::app::Uno::Data::Xml::XmlLinkedNode*);
    void(*__fp_RemoveAt)(XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode*, int);
};

XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__uType* XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__typeof();

void XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode___ObjInit(XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode* __this, ::app::Uno::Data::Xml::XmlLinkedNode* owner);
void XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__Add(XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode* __this, ::app::Uno::Data::Xml::XmlLinkedNode* item);
void XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__Clear(XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode* __this);
bool XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__Contains(XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode* __this, ::app::Uno::Data::Xml::XmlLinkedNode* item);
::uObject* XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__get_Children(XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode* __this);
int XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__get_Count(XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode* __this);
::app::Uno::Data::Xml::XmlLinkedNode* XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__get_FirstChild(XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode* __this);
bool XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__get_HasChildren(XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode* __this);
::app::Uno::Data::Xml::XmlLinkedNode* XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__get_Item(XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode* __this, int index);
::app::Uno::Data::Xml::XmlLinkedNode* XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__get_LastChild(XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode* __this);
::uObject* XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__GetEnumerator(XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode* __this);
void XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__Insert(XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode* __this, int index, ::app::Uno::Data::Xml::XmlLinkedNode* item);
bool XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__Remove(XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode* __this, ::app::Uno::Data::Xml::XmlLinkedNode* item);
void XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__RemoveAt(XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode* __this, int index);

struct XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode : ::uObject
{
    ::uStrong< ::uObject*> _children;
    ::uStrong< ::app::Uno::Data::Xml::XmlLinkedNode*> _owner;

    void _ObjInit(::app::Uno::Data::Xml::XmlLinkedNode* owner) { XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode___ObjInit(this, owner); }
    void Add(::app::Uno::Data::Xml::XmlLinkedNode* item) { (((XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__uType*)this->__obj_type)->__fp_Add)(this, item); }
    void Clear() { XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__Clear(this); }
    bool Contains(::app::Uno::Data::Xml::XmlLinkedNode* item) { return XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__Contains(this, item); }
    ::uObject* Children() { return XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__get_Children(this); }
    int Count() { return XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__get_Count(this); }
    ::app::Uno::Data::Xml::XmlLinkedNode* FirstChild() { return XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__get_FirstChild(this); }
    bool HasChildren() { return XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__get_HasChildren(this); }
    ::app::Uno::Data::Xml::XmlLinkedNode* Item(int index) { return XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__get_Item(this, index); }
    ::app::Uno::Data::Xml::XmlLinkedNode* LastChild() { return XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__get_LastChild(this); }
    ::uObject* GetEnumerator() { return XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__GetEnumerator(this); }
    void Insert(int index, ::app::Uno::Data::Xml::XmlLinkedNode* item) { (((XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__uType*)this->__obj_type)->__fp_Insert)(this, index, item); }
    bool Remove(::app::Uno::Data::Xml::XmlLinkedNode* item) { return (((XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__uType*)this->__obj_type)->__fp_Remove)(this, item); }
    void RemoveAt(int index) { (((XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__uType*)this->__obj_type)->__fp_RemoveAt)(this, index); }
};

}}}}


#endif
