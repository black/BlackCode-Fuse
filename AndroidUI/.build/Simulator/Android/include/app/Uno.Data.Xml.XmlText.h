// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\Elements\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DATA_XML_XML_TEXT_H__
#define __APP_UNO_DATA_XML_XML_TEXT_H__

#include <app/Uno.Data.Xml.XmlLinkedNode.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Data { namespace Xml { struct XmlValue; } } } }

namespace app {
namespace Uno {
namespace Data {
namespace Xml {

struct XmlText;

struct XmlText__uType : ::app::Uno::Data::Xml::XmlLinkedNode__uType
{
};

XmlText__uType* XmlText__typeof();

void XmlText___ObjInit_3(XmlText* __this);
void XmlText___ObjInit_4(XmlText* __this, ::app::Uno::Data::Xml::XmlValue* value);
::app::Uno::Data::Xml::XmlLinkedNode* XmlText__CreateNewInstance(XmlText* __this);
XmlText* XmlText__New_1(::uStatic* __this);
XmlText* XmlText__New_2(::uStatic* __this, ::app::Uno::Data::Xml::XmlValue* value);
::uString* XmlText__ToString(XmlText* __this);

struct XmlText : ::app::Uno::Data::Xml::XmlLinkedNode
{
    void _ObjInit_3() { XmlText___ObjInit_3(this); }
    void _ObjInit_4(::app::Uno::Data::Xml::XmlValue* value) { XmlText___ObjInit_4(this, value); }
};

}}}}


#endif
