// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\Helpers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DATA_XML_ATTRIBUTE_HANDLE_CONVERTER_H__
#define __APP_UNO_DATA_XML_ATTRIBUTE_HANDLE_CONVERTER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Data { namespace Xml { struct XmlAttribute; } } } }
namespace app { namespace Uno { namespace Data { namespace Xml { struct XmlAttributeHandle; } } } }

namespace app {
namespace Uno {
namespace Data {
namespace Xml {

struct AttributeHandleConverter;

struct AttributeHandleConverter__uType : ::uClassType
{
};

AttributeHandleConverter__uType* AttributeHandleConverter__typeof();

void AttributeHandleConverter___ObjInit(AttributeHandleConverter* __this);
::app::Uno::Data::Xml::XmlAttribute* AttributeHandleConverter__ConvertToXmlAttribute(::uStatic* __this, ::app::Uno::Data::Xml::XmlAttributeHandle* handle);
AttributeHandleConverter* AttributeHandleConverter__New_1(::uStatic* __this);

struct AttributeHandleConverter : ::uObject
{
    void _ObjInit() { AttributeHandleConverter___ObjInit(this); }
};

}}}}


#endif
