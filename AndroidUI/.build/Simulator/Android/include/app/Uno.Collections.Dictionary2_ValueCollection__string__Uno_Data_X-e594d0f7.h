// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__STRING__UNO_DATA_X_E594D0F7_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__STRING__UNO_DATA_X_E594D0F7_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Uno_Data_Xml_XmlEncoding; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding;

struct Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding__uType : ::uClassType
{
};

Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding__uType* Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding__typeof();

void Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding___ObjInit(Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding* __this, ::app::Uno::Collections::Dictionary__string__Uno_Data_Xml_XmlEncoding* source);
int Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding__get_Count(Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding* __this);
::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding__GetEnumerator(Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding* __this);
Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding* Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Uno_Data_Xml_XmlEncoding* source);
void Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding* __this, int item);
void Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding* __this);
bool Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding* __this, int item);
bool Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding* __this, int item);

struct Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__string__Uno_Data_Xml_XmlEncoding*> _source;

    void _ObjInit(::app::Uno::Collections::Dictionary__string__Uno_Data_Xml_XmlEncoding* source) { Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding___ObjInit(this, source); }
    int Count() { return Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding__get_Count(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding GetEnumerator();
};

}}}

#include <app/Uno.Collections.Dictionary2_ValueCollection_Enumerator__string_-47f869b6.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding::GetEnumerator() { return Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding__GetEnumerator(this); }

}}}


#endif
