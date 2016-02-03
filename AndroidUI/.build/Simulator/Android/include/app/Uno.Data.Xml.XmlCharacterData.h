// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\Elements\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DATA_XML_XML_CHARACTER_DATA_H__
#define __APP_UNO_DATA_XML_XML_CHARACTER_DATA_H__

#include <app/Uno.Data.Xml.XmlLinkedNode.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Data {
namespace Xml {

struct XmlCharacterData;

struct XmlCharacterData__uType : ::app::Uno::Data::Xml::XmlLinkedNode__uType
{
};

XmlCharacterData__uType* XmlCharacterData__typeof();

void XmlCharacterData___ObjInit_3(XmlCharacterData* __this);
void XmlCharacterData___ObjInit_4(XmlCharacterData* __this, ::uString* data);
::app::Uno::Data::Xml::XmlLinkedNode* XmlCharacterData__CreateNewInstance(XmlCharacterData* __this);
::uString* XmlCharacterData__get_Data(XmlCharacterData* __this);
int XmlCharacterData__get_Length(XmlCharacterData* __this);
XmlCharacterData* XmlCharacterData__New_1(::uStatic* __this);
XmlCharacterData* XmlCharacterData__New_2(::uStatic* __this, ::uString* data);
void XmlCharacterData__set_Data(XmlCharacterData* __this, ::uString* value);
::uString* XmlCharacterData__ToString(XmlCharacterData* __this);

struct XmlCharacterData : ::app::Uno::Data::Xml::XmlLinkedNode
{
    ::uStrong< ::uString*> _Data;

    void _ObjInit_3() { XmlCharacterData___ObjInit_3(this); }
    void _ObjInit_4(::uString* data) { XmlCharacterData___ObjInit_4(this, data); }
    ::uString* Data() { return XmlCharacterData__get_Data(this); }
    int Length() { return XmlCharacterData__get_Length(this); }
    void Data(::uString* value) { XmlCharacterData__set_Data(this, value); }
};

}}}}


#endif
