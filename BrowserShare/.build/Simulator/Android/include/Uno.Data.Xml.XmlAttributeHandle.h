// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.20.1\Source\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlAttributeHandle;}}}}

namespace g{
namespace Uno{
namespace Data{
namespace Xml{

// internal sealed class XmlAttributeHandle :179
// {
uType* XmlAttributeHandle_typeof();
void XmlAttributeHandle__ctor__fn(XmlAttributeHandle* __this, uString* name, uString* value);
void XmlAttributeHandle__get_Name_fn(XmlAttributeHandle* __this, uString** __retval);
void XmlAttributeHandle__set_Name_fn(XmlAttributeHandle* __this, uString* value);
void XmlAttributeHandle__New1_fn(uString* name, uString* value, XmlAttributeHandle** __retval);
void XmlAttributeHandle__get_Value_fn(XmlAttributeHandle* __this, uString** __retval);
void XmlAttributeHandle__set_Value_fn(XmlAttributeHandle* __this, uString* value);

struct XmlAttributeHandle : uObject
{
    uStrong<uString*> _Name;
    uStrong<uString*> _Value;

    void ctor_(uString* name, uString* value);
    uString* Name();
    void Name(uString* value);
    uString* Value();
    void Value(uString* value);
    static XmlAttributeHandle* New1(uString* name, uString* value);
};
// }

}}}} // ::g::Uno::Data::Xml
