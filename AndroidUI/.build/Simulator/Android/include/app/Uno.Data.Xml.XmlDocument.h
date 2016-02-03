// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\Elements\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DATA_XML_XML_DOCUMENT_H__
#define __APP_UNO_DATA_XML_XML_DOCUMENT_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Data { namespace Xml { struct XmlDocumentElement; } } } }
namespace app { namespace Uno { namespace Data { namespace Xml { struct XmlLinkedNode; } } } }

namespace app {
namespace Uno {
namespace Data {
namespace Xml {

struct XmlDocument;

struct XmlDocument__uType : ::uClassType
{
};

XmlDocument__uType* XmlDocument__typeof();

void XmlDocument___ObjInit(XmlDocument* __this);
void XmlDocument__ApplyParseOptions(::uStatic* __this, ::app::Uno::Data::Xml::XmlLinkedNode* node, ::uUInt parseOptions);
::app::Uno::Data::Xml::XmlDocumentElement* XmlDocument__get_DocumentElement(XmlDocument* __this);
XmlDocument* XmlDocument__Load(::uStatic* __this, ::uString* xmlString);
XmlDocument* XmlDocument__Load_1(::uStatic* __this, ::uString* xmlString, ::uUInt parseOptions);
XmlDocument* XmlDocument__New_1(::uStatic* __this);
void XmlDocument__Save(XmlDocument* __this, ::uString** xmlString);
void XmlDocument__set_DocumentElement(XmlDocument* __this, ::app::Uno::Data::Xml::XmlDocumentElement* value);
::uString* XmlDocument__ToString(XmlDocument* __this);

struct XmlDocument : ::uObject
{
    ::uStrong< ::app::Uno::Data::Xml::XmlDocumentElement*> _DocumentElement;

    void _ObjInit() { XmlDocument___ObjInit(this); }
    ::app::Uno::Data::Xml::XmlDocumentElement* DocumentElement() { return XmlDocument__get_DocumentElement(this); }
    void Save(::uString** xmlString) { XmlDocument__Save(this, xmlString); }
    void DocumentElement(::app::Uno::Data::Xml::XmlDocumentElement* value) { XmlDocument__set_DocumentElement(this, value); }
};

}}}}


#endif
