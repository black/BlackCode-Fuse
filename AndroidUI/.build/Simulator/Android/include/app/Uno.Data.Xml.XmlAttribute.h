// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\Elements\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DATA_XML_XML_ATTRIBUTE_H__
#define __APP_UNO_DATA_XML_XML_ATTRIBUTE_H__

#include <app/Uno.Data.Xml.XmlNode.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Data {
namespace Xml {

struct XmlAttribute;

struct XmlAttribute__uType : ::app::Uno::Data::Xml::XmlNode__uType
{
};

XmlAttribute__uType* XmlAttribute__typeof();

void XmlAttribute___ObjInit_2(XmlAttribute* __this);
void XmlAttribute___ObjInit_3(XmlAttribute* __this, ::uString* name, ::uString* value);
XmlAttribute* XmlAttribute__Clone(XmlAttribute* __this);
XmlAttribute* XmlAttribute__get_NextSibling(XmlAttribute* __this);
XmlAttribute* XmlAttribute__get_PreviousSibling(XmlAttribute* __this);
XmlAttribute* XmlAttribute__New_1(::uStatic* __this);
XmlAttribute* XmlAttribute__New_2(::uStatic* __this, ::uString* name, ::uString* value);
void XmlAttribute__set_NextSibling(XmlAttribute* __this, XmlAttribute* value);
void XmlAttribute__set_PreviousSibling(XmlAttribute* __this, XmlAttribute* value);
::uString* XmlAttribute__ToString(XmlAttribute* __this);

struct XmlAttribute : ::app::Uno::Data::Xml::XmlNode
{
    ::uStrong< XmlAttribute*> _NextSibling;
    ::uStrong< XmlAttribute*> _PreviousSibling;

    void _ObjInit_2() { XmlAttribute___ObjInit_2(this); }
    void _ObjInit_3(::uString* name, ::uString* value) { XmlAttribute___ObjInit_3(this, name, value); }
    XmlAttribute* Clone() { return XmlAttribute__Clone(this); }
    XmlAttribute* NextSibling() { return XmlAttribute__get_NextSibling(this); }
    XmlAttribute* PreviousSibling() { return XmlAttribute__get_PreviousSibling(this); }
    void NextSibling(XmlAttribute* value) { XmlAttribute__set_NextSibling(this, value); }
    void PreviousSibling(XmlAttribute* value) { XmlAttribute__set_PreviousSibling(this, value); }
};

}}}}


#endif
