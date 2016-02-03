// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DATA_XML_XML_NODE_IMPL_H__
#define __APP_UNO_DATA_XML_XML_NODE_IMPL_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Data { namespace Xml { struct XmlAttributeHandle; } } } }
namespace app { namespace Uno { namespace Data { namespace Xml { struct XmlNodeHandle; } } } }

namespace app {
namespace Uno {
namespace Data {
namespace Xml {

struct XmlNodeImpl;

struct XmlNodeImpl__uType : ::uClassType
{
};

XmlNodeImpl__uType* XmlNodeImpl__typeof();

void XmlNodeImpl___ObjInit(XmlNodeImpl* __this);
void XmlNodeImpl__AddAttribute(::uStatic* __this, ::app::Uno::Data::Xml::XmlNodeHandle* handle, ::app::Uno::Data::Xml::XmlAttributeHandle* attrib);
void XmlNodeImpl__AppendChild(::uStatic* __this, ::app::Uno::Data::Xml::XmlNodeHandle* handle, ::app::Uno::Data::Xml::XmlNodeHandle* child);
::app::Uno::Data::Xml::XmlNodeHandle* XmlNodeImpl__GenerateXMLTree(::uStatic* __this, void* obj_);
XmlNodeImpl* XmlNodeImpl__New_1(::uStatic* __this);
::app::Uno::Data::Xml::XmlNodeHandle* XmlNodeImpl__Parse(::uStatic* __this, ::uString* xmlString_);

struct XmlNodeImpl : ::uObject
{
    void _ObjInit() { XmlNodeImpl___ObjInit(this); }
};

}}}}


#endif
