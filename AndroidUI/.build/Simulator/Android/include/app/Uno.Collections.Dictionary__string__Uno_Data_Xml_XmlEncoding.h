// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__STRING__UNO_DATA_XML_XML_ENCODING_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__STRING__UNO_DATA_XML_XML_ENCODING_H__

#include <app/Uno.Collections.Dictionary2_Bucket__string__Uno_Data_Xml_XmlEncoding.h>
#include <app/Uno.Collections.IDictionary__string__Uno_Data_Xml_XmlEncoding.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_strin-21b43275.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__string__Uno_Data_Xml_XmlEncoding; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection__string__Uno_Data_Xml_XmlEncoding; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding; } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__string__Uno_Data_Xml_XmlEncoding; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__string__Uno_Data_Xml_XmlEncoding;

struct Dictionary__string__Uno_Data_Xml_XmlEncoding__uType : ::uClassType
{
    ::app::Uno::Collections::IDictionary__string__Uno_Data_Xml_XmlEncoding __interface_0;
    ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_string_Uno_Data_Xml_XmlEncoding_ __interface_1;
};

Dictionary__string__Uno_Data_Xml_XmlEncoding__uType* Dictionary__string__Uno_Data_Xml_XmlEncoding__typeof();

::uObject* Dictionary__string__Uno_Data_Xml_XmlEncoding__GetEnumerator_boxed(Dictionary__string__Uno_Data_Xml_XmlEncoding* __this);
void Dictionary__string__Uno_Data_Xml_XmlEncoding___ObjInit(Dictionary__string__Uno_Data_Xml_XmlEncoding* __this);
void Dictionary__string__Uno_Data_Xml_XmlEncoding___ObjInit_1(Dictionary__string__Uno_Data_Xml_XmlEncoding* __this, ::uObject* dictionary);
void Dictionary__string__Uno_Data_Xml_XmlEncoding__Add(Dictionary__string__Uno_Data_Xml_XmlEncoding* __this, ::uString* key, int value);
void Dictionary__string__Uno_Data_Xml_XmlEncoding__Clear(Dictionary__string__Uno_Data_Xml_XmlEncoding* __this);
bool Dictionary__string__Uno_Data_Xml_XmlEncoding__ContainsKey(Dictionary__string__Uno_Data_Xml_XmlEncoding* __this, ::uString* key);
int Dictionary__string__Uno_Data_Xml_XmlEncoding__get_Count(Dictionary__string__Uno_Data_Xml_XmlEncoding* __this);
int Dictionary__string__Uno_Data_Xml_XmlEncoding__get_Item(Dictionary__string__Uno_Data_Xml_XmlEncoding* __this, ::uString* key);
::app::Uno::Collections::Dictionary2_KeyCollection__string__Uno_Data_Xml_XmlEncoding* Dictionary__string__Uno_Data_Xml_XmlEncoding__get_Keys(Dictionary__string__Uno_Data_Xml_XmlEncoding* __this);
::app::Uno::Collections::Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding* Dictionary__string__Uno_Data_Xml_XmlEncoding__get_Values(Dictionary__string__Uno_Data_Xml_XmlEncoding* __this);
::app::Uno::Collections::Dictionary2_Enumerator__string__Uno_Data_Xml_XmlEncoding Dictionary__string__Uno_Data_Xml_XmlEncoding__GetEnumerator(Dictionary__string__Uno_Data_Xml_XmlEncoding* __this);
Dictionary__string__Uno_Data_Xml_XmlEncoding* Dictionary__string__Uno_Data_Xml_XmlEncoding__New_1(::uStatic* __this);
Dictionary__string__Uno_Data_Xml_XmlEncoding* Dictionary__string__Uno_Data_Xml_XmlEncoding__New_2(::uStatic* __this, ::uObject* dictionary);
void Dictionary__string__Uno_Data_Xml_XmlEncoding__Rehash(Dictionary__string__Uno_Data_Xml_XmlEncoding* __this);
bool Dictionary__string__Uno_Data_Xml_XmlEncoding__Remove(Dictionary__string__Uno_Data_Xml_XmlEncoding* __this, ::uString* key);
void Dictionary__string__Uno_Data_Xml_XmlEncoding__set_Item(Dictionary__string__Uno_Data_Xml_XmlEncoding* __this, ::uString* key, int value);
bool Dictionary__string__Uno_Data_Xml_XmlEncoding__TryGetValue(Dictionary__string__Uno_Data_Xml_XmlEncoding* __this, ::uString* key, int* value);
void Dictionary__string__Uno_Data_Xml_XmlEncoding__Uno_Collections_ICollection_Add(Dictionary__string__Uno_Data_Xml_XmlEncoding* __this, ::app::Uno::Collections::KeyValuePair__string__Uno_Data_Xml_XmlEncoding item);
bool Dictionary__string__Uno_Data_Xml_XmlEncoding__Uno_Collections_ICollection_Contains(Dictionary__string__Uno_Data_Xml_XmlEncoding* __this, ::app::Uno::Collections::KeyValuePair__string__Uno_Data_Xml_XmlEncoding item);
bool Dictionary__string__Uno_Data_Xml_XmlEncoding__Uno_Collections_ICollection_Remove(Dictionary__string__Uno_Data_Xml_XmlEncoding* __this, ::app::Uno::Collections::KeyValuePair__string__Uno_Data_Xml_XmlEncoding item);

struct Dictionary__string__Uno_Data_Xml_XmlEncoding : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::uObject* GetEnumerator_boxed() { return Dictionary__string__Uno_Data_Xml_XmlEncoding__GetEnumerator_boxed(this); }
    void _ObjInit() { Dictionary__string__Uno_Data_Xml_XmlEncoding___ObjInit(this); }
    void _ObjInit_1(::uObject* dictionary) { Dictionary__string__Uno_Data_Xml_XmlEncoding___ObjInit_1(this, dictionary); }
    void Add(::uString* key, int value) { Dictionary__string__Uno_Data_Xml_XmlEncoding__Add(this, key, value); }
    void Clear() { Dictionary__string__Uno_Data_Xml_XmlEncoding__Clear(this); }
    bool ContainsKey(::uString* key) { return Dictionary__string__Uno_Data_Xml_XmlEncoding__ContainsKey(this, key); }
    int Count() { return Dictionary__string__Uno_Data_Xml_XmlEncoding__get_Count(this); }
    int Item(::uString* key) { return Dictionary__string__Uno_Data_Xml_XmlEncoding__get_Item(this, key); }
    ::app::Uno::Collections::Dictionary2_KeyCollection__string__Uno_Data_Xml_XmlEncoding* Keys() { return Dictionary__string__Uno_Data_Xml_XmlEncoding__get_Keys(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection__string__Uno_Data_Xml_XmlEncoding* Values() { return Dictionary__string__Uno_Data_Xml_XmlEncoding__get_Values(this); }
    ::app::Uno::Collections::Dictionary2_Enumerator__string__Uno_Data_Xml_XmlEncoding GetEnumerator();
    void Rehash() { Dictionary__string__Uno_Data_Xml_XmlEncoding__Rehash(this); }
    bool Remove(::uString* key) { return Dictionary__string__Uno_Data_Xml_XmlEncoding__Remove(this, key); }
    void Item(::uString* key, int value) { Dictionary__string__Uno_Data_Xml_XmlEncoding__set_Item(this, key, value); }
    bool TryGetValue(::uString* key, int* value) { return Dictionary__string__Uno_Data_Xml_XmlEncoding__TryGetValue(this, key, value); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__string__Uno_Data_Xml_XmlEncoding.h>
#include <app/Uno.Collections.KeyValuePair__string__Uno_Data_Xml_XmlEncoding.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__string__Uno_Data_Xml_XmlEncoding Dictionary__string__Uno_Data_Xml_XmlEncoding::GetEnumerator() { return Dictionary__string__Uno_Data_Xml_XmlEncoding__GetEnumerator(this); }

}}}


#endif
