// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\Elements\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DATA_XML_XML_DECLARATION_H__
#define __APP_UNO_DATA_XML_XML_DECLARATION_H__

#include <app/Uno.Data.Xml.XmlLinkedNode.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Data {
namespace Xml {

struct XmlDeclaration;

struct XmlDeclaration__uType : ::app::Uno::Data::Xml::XmlLinkedNode__uType
{
};

XmlDeclaration__uType* XmlDeclaration__typeof();

void XmlDeclaration___ObjInit_3(XmlDeclaration* __this);
void XmlDeclaration___ObjInit_4(XmlDeclaration* __this, ::uString* version, int encoding);
::app::Uno::Data::Xml::XmlLinkedNode* XmlDeclaration__CreateNewInstance(XmlDeclaration* __this);
int XmlDeclaration__get_Encoding(XmlDeclaration* __this);
::uString* XmlDeclaration__get_Version(XmlDeclaration* __this);
XmlDeclaration* XmlDeclaration__New_1(::uStatic* __this);
XmlDeclaration* XmlDeclaration__New_2(::uStatic* __this, ::uString* version, int encoding);
void XmlDeclaration__set_Encoding(XmlDeclaration* __this, int value);
void XmlDeclaration__set_Version(XmlDeclaration* __this, ::uString* value);
::uString* XmlDeclaration__ToString(XmlDeclaration* __this);

struct XmlDeclaration : ::app::Uno::Data::Xml::XmlLinkedNode
{
    int _Encoding;
    ::uStrong< ::uString*> _Version;

    void _ObjInit_3() { XmlDeclaration___ObjInit_3(this); }
    void _ObjInit_4(::uString* version, int encoding) { XmlDeclaration___ObjInit_4(this, version, encoding); }
    int Encoding() { return XmlDeclaration__get_Encoding(this); }
    ::uString* Version() { return XmlDeclaration__get_Version(this); }
    void Encoding(int value) { XmlDeclaration__set_Encoding(this, value); }
    void Version(::uString* value) { XmlDeclaration__set_Version(this, value); }
};

}}}}


#endif
