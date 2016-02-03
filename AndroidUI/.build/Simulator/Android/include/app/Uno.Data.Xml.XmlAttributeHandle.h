// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DATA_XML_XML_ATTRIBUTE_HANDLE_H__
#define __APP_UNO_DATA_XML_XML_ATTRIBUTE_HANDLE_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Data {
namespace Xml {

struct XmlAttributeHandle;

struct XmlAttributeHandle__uType : ::uClassType
{
};

XmlAttributeHandle__uType* XmlAttributeHandle__typeof();

void XmlAttributeHandle___ObjInit(XmlAttributeHandle* __this, ::uString* name, ::uString* value);
::uString* XmlAttributeHandle__get_Name(XmlAttributeHandle* __this);
::uString* XmlAttributeHandle__get_Value(XmlAttributeHandle* __this);
XmlAttributeHandle* XmlAttributeHandle__New_1(::uStatic* __this, ::uString* name, ::uString* value);
void XmlAttributeHandle__set_Name(XmlAttributeHandle* __this, ::uString* value);
void XmlAttributeHandle__set_Value(XmlAttributeHandle* __this, ::uString* value);

struct XmlAttributeHandle : ::uObject
{
    ::uStrong< ::uString*> _Name;
    ::uStrong< ::uString*> _Value;

    void _ObjInit(::uString* name, ::uString* value) { XmlAttributeHandle___ObjInit(this, name, value); }
    ::uString* Name() { return XmlAttributeHandle__get_Name(this); }
    ::uString* Value() { return XmlAttributeHandle__get_Value(this); }
    void Name(::uString* value) { XmlAttributeHandle__set_Name(this, value); }
    void Value(::uString* value) { XmlAttributeHandle__set_Value(this, value); }
};

}}}}


#endif
