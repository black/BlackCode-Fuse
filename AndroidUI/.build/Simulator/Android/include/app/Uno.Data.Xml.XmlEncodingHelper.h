// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Xml\0.13.2\Source\Helpers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DATA_XML_XML_ENCODING_HELPER_H__
#define __APP_UNO_DATA_XML_XML_ENCODING_HELPER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Uno_Data_Xml_XmlEncoding; } } }

namespace app {
namespace Uno {
namespace Data {
namespace Xml {

struct XmlEncodingHelper;

extern ::uStaticStrong< ::app::Uno::Collections::Dictionary__string__Uno_Data_Xml_XmlEncoding*> XmlEncodingHelper___encodingDictionary;

struct XmlEncodingHelper__uType : ::uClassType
{
};

XmlEncodingHelper__uType* XmlEncodingHelper__typeof();

void XmlEncodingHelper___ObjInit(XmlEncodingHelper* __this);
int XmlEncodingHelper__ConvertFromString(::uStatic* __this, ::uString* encodingStr);
::uString* XmlEncodingHelper__ConvertToString(::uStatic* __this, int encoding);
void XmlEncodingHelper__FillEncodingDictionary(::uStatic* __this);
::app::Uno::Collections::Dictionary__string__Uno_Data_Xml_XmlEncoding* XmlEncodingHelper__get_EncodingDictionary(::uStatic* __this);
XmlEncodingHelper* XmlEncodingHelper__New_1(::uStatic* __this);

struct XmlEncodingHelper : ::uObject
{
    void _ObjInit() { XmlEncodingHelper___ObjInit(this); }
};

}}}}


#endif
