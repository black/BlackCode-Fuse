// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__STRING__UNO_DATA_XML_XML_ENCODING_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__STRING__UNO_DATA_XML_XML_ENCODING_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__string__Uno_Data_Xml_XmlEncoding;

struct KeyValuePair__string__Uno_Data_Xml_XmlEncoding__uType : ::uStructType
{
};

KeyValuePair__string__Uno_Data_Xml_XmlEncoding__uType* KeyValuePair__string__Uno_Data_Xml_XmlEncoding__typeof();

void KeyValuePair__string__Uno_Data_Xml_XmlEncoding___ObjInit(KeyValuePair__string__Uno_Data_Xml_XmlEncoding* __this, ::uString* key, int value);
::uString* KeyValuePair__string__Uno_Data_Xml_XmlEncoding__get_Key(KeyValuePair__string__Uno_Data_Xml_XmlEncoding* __this);
int KeyValuePair__string__Uno_Data_Xml_XmlEncoding__get_Value(KeyValuePair__string__Uno_Data_Xml_XmlEncoding* __this);
KeyValuePair__string__Uno_Data_Xml_XmlEncoding KeyValuePair__string__Uno_Data_Xml_XmlEncoding__New_1(::uStatic* __this, ::uString* key, int value);

struct KeyValuePair__string__Uno_Data_Xml_XmlEncoding
{
    ::uStrong< ::uString*> _key;
    int _value;

    void _ObjInit(::uString* key, int value) { KeyValuePair__string__Uno_Data_Xml_XmlEncoding___ObjInit(this, key, value); }
    ::uString* Key() { return KeyValuePair__string__Uno_Data_Xml_XmlEncoding__get_Key(this); }
    int Value() { return KeyValuePair__string__Uno_Data_Xml_XmlEncoding__get_Value(this); }
};

}}}


#endif
