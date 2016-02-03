// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DATA_XML_XML_LINKED_NODE_COLLECTION_H__
#define __APP_UNO_DATA_XML_XML_LINKED_NODE_COLLECTION_H__

#include <app/Uno.Collections.ICollection__Uno_Data_Xml_XmlLinkedNode.h>
#include <app/Uno.Collections.IEnumerable__Uno_Data_Xml_XmlLinkedNode.h>
#include <app/Uno.Collections.IList__Uno_Data_Xml_XmlLinkedNode.h>
#include <app/Uno.Data.Xml.XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Data { namespace Xml { struct XmlLinkedNode; } } } }

namespace app {
namespace Uno {
namespace Data {
namespace Xml {

struct XmlLinkedNodeCollection;

struct XmlLinkedNodeCollection__uType : ::app::Uno::Data::Xml::XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode__uType
{
};

XmlLinkedNodeCollection__uType* XmlLinkedNodeCollection__typeof();

void XmlLinkedNodeCollection___ObjInit_1(XmlLinkedNodeCollection* __this, ::app::Uno::Data::Xml::XmlLinkedNode* owner);
void XmlLinkedNodeCollection__Add(XmlLinkedNodeCollection* __this, ::app::Uno::Data::Xml::XmlLinkedNode* item);
void XmlLinkedNodeCollection__Insert(XmlLinkedNodeCollection* __this, int index, ::app::Uno::Data::Xml::XmlLinkedNode* item);
XmlLinkedNodeCollection* XmlLinkedNodeCollection__New_1(::uStatic* __this, ::app::Uno::Data::Xml::XmlLinkedNode* owner);
bool XmlLinkedNodeCollection__Remove(XmlLinkedNodeCollection* __this, ::app::Uno::Data::Xml::XmlLinkedNode* item);
void XmlLinkedNodeCollection__RemoveAt(XmlLinkedNodeCollection* __this, int index);

struct XmlLinkedNodeCollection : ::app::Uno::Data::Xml::XmlNodeCollectionBase__Uno_Data_Xml_XmlLinkedNode
{
    void _ObjInit_1(::app::Uno::Data::Xml::XmlLinkedNode* owner) { XmlLinkedNodeCollection___ObjInit_1(this, owner); }
};

}}}}


#endif
