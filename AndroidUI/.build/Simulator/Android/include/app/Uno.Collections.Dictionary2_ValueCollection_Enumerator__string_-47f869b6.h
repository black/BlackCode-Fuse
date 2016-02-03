// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION_ENUMERATOR__STRING__47F869B6_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION_ENUMERATOR__STRING__47F869B6_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Uno_Data_Xml_XmlEncoding; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding;

struct Dictionary2_ValueCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding__uType : ::uStructType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

Dictionary2_ValueCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding__uType* Dictionary2_ValueCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding__typeof();

void Dictionary2_ValueCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding___ObjInit(Dictionary2_ValueCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding* __this, ::app::Uno::Collections::Dictionary__string__Uno_Data_Xml_XmlEncoding* source);
void Dictionary2_ValueCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding__Dispose(Dictionary2_ValueCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding* __this);
bool Dictionary2_ValueCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding__MoveNext(Dictionary2_ValueCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding* __this);
Dictionary2_ValueCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding Dictionary2_ValueCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Uno_Data_Xml_XmlEncoding* source);
void Dictionary2_ValueCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding__Uno_Collections_IEnumerator_Reset(Dictionary2_ValueCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding* __this);

struct Dictionary2_ValueCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding
{
    ::uStrong< ::app::Uno::Collections::Dictionary__string__Uno_Data_Xml_XmlEncoding*> _source;
    int _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__string__Uno_Data_Xml_XmlEncoding* source) { Dictionary2_ValueCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding___ObjInit(this, source); }
    void Dispose() { Dictionary2_ValueCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding__Dispose(this); }
    bool MoveNext() { return Dictionary2_ValueCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding__MoveNext(this); }
};

}}}


#endif
