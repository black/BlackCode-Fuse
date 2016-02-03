// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\Helpers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DATA_XML_XML_NODE_HANDLE_CONVERTER_H__
#define __APP_UNO_DATA_XML_XML_NODE_HANDLE_CONVERTER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Data { namespace Xml { struct XmlLinkedNode; } } } }
namespace app { namespace Uno { namespace Data { namespace Xml { struct XmlNodeHandle; } } } }

namespace app {
namespace Uno {
namespace Data {
namespace Xml {

struct XmlNodeHandleConverter;

struct XmlNodeHandleConverter__uType : ::uClassType
{
};

XmlNodeHandleConverter__uType* XmlNodeHandleConverter__typeof();

void XmlNodeHandleConverter___ObjInit(XmlNodeHandleConverter* __this);
::app::Uno::Data::Xml::XmlLinkedNode* XmlNodeHandleConverter__ConvertToXmlLinkedNode(::uStatic* __this, ::app::Uno::Data::Xml::XmlNodeHandle* handle);
void XmlNodeHandleConverter__ConvertToXmlNodeTree(::uStatic* __this, ::app::Uno::Data::Xml::XmlLinkedNode* xmlNode, ::app::Uno::Data::Xml::XmlNodeHandle* handle);
XmlNodeHandleConverter* XmlNodeHandleConverter__New_1(::uStatic* __this);

struct XmlNodeHandleConverter : ::uObject
{
    void _ObjInit() { XmlNodeHandleConverter___ObjInit(this); }
};

}}}}


#endif
