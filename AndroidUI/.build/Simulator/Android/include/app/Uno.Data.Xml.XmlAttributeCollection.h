// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DATA_XML_XML_ATTRIBUTE_COLLECTION_H__
#define __APP_UNO_DATA_XML_XML_ATTRIBUTE_COLLECTION_H__

#include <app/Uno.Collections.ICollection__Uno_Data_Xml_XmlAttribute.h>
#include <app/Uno.Collections.IEnumerable__Uno_Data_Xml_XmlAttribute.h>
#include <app/Uno.Collections.IList__Uno_Data_Xml_XmlAttribute.h>
#include <app/Uno.Data.Xml.XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Data { namespace Xml { struct XmlAttribute; } } } }
namespace app { namespace Uno { namespace Data { namespace Xml { struct XmlLinkedNode; } } } }

namespace app {
namespace Uno {
namespace Data {
namespace Xml {

struct XmlAttributeCollection;

struct XmlAttributeCollection__uType : ::app::Uno::Data::Xml::XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute__uType
{
};

XmlAttributeCollection__uType* XmlAttributeCollection__typeof();

void XmlAttributeCollection___ObjInit_1(XmlAttributeCollection* __this, ::app::Uno::Data::Xml::XmlLinkedNode* owner);
void XmlAttributeCollection__Add(XmlAttributeCollection* __this, ::app::Uno::Data::Xml::XmlAttribute* item);
::app::Uno::Data::Xml::XmlAttribute* XmlAttributeCollection__get_Item_1(XmlAttributeCollection* __this, ::uString* name);
void XmlAttributeCollection__Insert(XmlAttributeCollection* __this, int index, ::app::Uno::Data::Xml::XmlAttribute* item);
XmlAttributeCollection* XmlAttributeCollection__New_1(::uStatic* __this, ::app::Uno::Data::Xml::XmlLinkedNode* owner);
bool XmlAttributeCollection__Remove(XmlAttributeCollection* __this, ::app::Uno::Data::Xml::XmlAttribute* item);
void XmlAttributeCollection__RemoveAt(XmlAttributeCollection* __this, int index);

struct XmlAttributeCollection : ::app::Uno::Data::Xml::XmlNodeCollectionBase__Uno_Data_Xml_XmlAttribute
{
    void _ObjInit_1(::app::Uno::Data::Xml::XmlLinkedNode* owner) { XmlAttributeCollection___ObjInit_1(this, owner); }
    ::app::Uno::Data::Xml::XmlAttribute* Item_1(::uString* name) { return XmlAttributeCollection__get_Item_1(this, name); }
};

}}}}


#endif
