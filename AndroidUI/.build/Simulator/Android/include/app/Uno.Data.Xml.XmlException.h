// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DATA_XML_XML_EXCEPTION_H__
#define __APP_UNO_DATA_XML_XML_EXCEPTION_H__

#include <app/Uno.Exception.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Data {
namespace Xml {

struct XmlException;

struct XmlException__uType : ::app::Uno::Exception__uType
{
};

XmlException__uType* XmlException__typeof();

void XmlException___ObjInit_2(XmlException* __this, ::uString* message);
void XmlException___ObjInit_3(XmlException* __this, ::uString* message, ::uString* paramName);
XmlException* XmlException__New_3(::uStatic* __this, ::uString* message);
XmlException* XmlException__New_4(::uStatic* __this, ::uString* message, ::uString* paramName);

struct XmlException : ::app::Uno::Exception
{
    void _ObjInit_2(::uString* message) { XmlException___ObjInit_2(this, message); }
    void _ObjInit_3(::uString* message, ::uString* paramName) { XmlException___ObjInit_3(this, message, paramName); }
};

}}}}


#endif
