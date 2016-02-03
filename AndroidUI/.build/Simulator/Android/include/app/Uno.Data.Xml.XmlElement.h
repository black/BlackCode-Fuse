// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\Elements\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DATA_XML_XML_ELEMENT_H__
#define __APP_UNO_DATA_XML_XML_ELEMENT_H__

#include <app/Uno.Data.Xml.XmlLinkedNode.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Data { namespace Xml { struct XmlValue; } } } }

namespace app {
namespace Uno {
namespace Data {
namespace Xml {

struct XmlElement;

struct XmlElement__uType : ::app::Uno::Data::Xml::XmlLinkedNode__uType
{
};

XmlElement__uType* XmlElement__typeof();

void XmlElement___ObjInit_3(XmlElement* __this);
::uString* XmlElement__ChildrenToString(XmlElement* __this);
::app::Uno::Data::Xml::XmlLinkedNode* XmlElement__CreateNewInstance(XmlElement* __this);
::app::Uno::Data::Xml::XmlValue* XmlElement__get_Value(XmlElement* __this);
::uString* XmlElement__GetTextContent(XmlElement* __this);
XmlElement* XmlElement__New_1(::uStatic* __this);
void XmlElement__set_Value(XmlElement* __this, ::app::Uno::Data::Xml::XmlValue* value);
::uString* XmlElement__ToString(XmlElement* __this);

struct XmlElement : ::app::Uno::Data::Xml::XmlLinkedNode
{
    void _ObjInit_3() { XmlElement___ObjInit_3(this); }
    ::uString* ChildrenToString() { return XmlElement__ChildrenToString(this); }
};

}}}}


#endif
