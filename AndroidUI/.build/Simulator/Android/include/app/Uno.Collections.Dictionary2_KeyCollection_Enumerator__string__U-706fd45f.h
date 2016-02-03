// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION_ENUMERATOR__STRING__U_706FD45F_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION_ENUMERATOR__STRING__U_706FD45F_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__string.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Uno_Data_Xml_XmlEncoding; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding;

struct Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__string __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding__uType* Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding__typeof();

void Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding___ObjInit(Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding* __this, ::app::Uno::Collections::Dictionary__string__Uno_Data_Xml_XmlEncoding* source);
void Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding__Dispose(Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding* __this);
::uString* Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding__get_Current(Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding* __this);
bool Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding__MoveNext(Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding* __this);
Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Uno_Data_Xml_XmlEncoding* source);
void Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding* __this);

struct Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding
{
    ::uStrong< ::app::Uno::Collections::Dictionary__string__Uno_Data_Xml_XmlEncoding*> _source;
    ::uStrong< ::uString*> _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__string__Uno_Data_Xml_XmlEncoding* source) { Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding___ObjInit(this, source); }
    void Dispose() { Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding__Dispose(this); }
    ::uString* Current() { return Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding__get_Current(this); }
    bool MoveNext() { return Dictionary2_KeyCollection_Enumerator__string__Uno_Data_Xml_XmlEncoding__MoveNext(this); }
};

}}}


#endif
