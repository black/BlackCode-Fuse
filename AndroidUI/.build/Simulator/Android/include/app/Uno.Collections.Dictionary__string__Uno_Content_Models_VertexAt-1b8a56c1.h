// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__STRING__UNO_CONTENT_MODELS_VERTEX_AT_1B8A56C1_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__STRING__UNO_CONTENT_MODELS_VERTEX_AT_1B8A56C1_H__

#include <app/Uno.Collections.Dictionary2_Bucket__string__Uno_Content_Models_-e4b196f7.h>
#include <app/Uno.Collections.IDictionary__string__Uno_Content_Models_VertexA-8feeb01.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_strin-d9fcbc62.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection__string__Uno_Content_Models_VertexAttributeArray; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray; } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__string__Uno_Content_Models_VertexAttributeArray; } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct VertexAttributeArray; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__string__Uno_Content_Models_VertexAttributeArray;

struct Dictionary__string__Uno_Content_Models_VertexAttributeArray__uType : ::uClassType
{
    ::app::Uno::Collections::IDictionary__string__Uno_Content_Models_VertexAttributeArray __interface_0;
    ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_string_Uno_Content_Models_VertexAttributeArray_ __interface_1;
};

Dictionary__string__Uno_Content_Models_VertexAttributeArray__uType* Dictionary__string__Uno_Content_Models_VertexAttributeArray__typeof();

::uObject* Dictionary__string__Uno_Content_Models_VertexAttributeArray__GetEnumerator_boxed(Dictionary__string__Uno_Content_Models_VertexAttributeArray* __this);
void Dictionary__string__Uno_Content_Models_VertexAttributeArray___ObjInit(Dictionary__string__Uno_Content_Models_VertexAttributeArray* __this);
void Dictionary__string__Uno_Content_Models_VertexAttributeArray___ObjInit_1(Dictionary__string__Uno_Content_Models_VertexAttributeArray* __this, ::uObject* dictionary);
void Dictionary__string__Uno_Content_Models_VertexAttributeArray__Add(Dictionary__string__Uno_Content_Models_VertexAttributeArray* __this, ::uString* key, ::app::Uno::Content::Models::VertexAttributeArray* value);
void Dictionary__string__Uno_Content_Models_VertexAttributeArray__Clear(Dictionary__string__Uno_Content_Models_VertexAttributeArray* __this);
bool Dictionary__string__Uno_Content_Models_VertexAttributeArray__ContainsKey(Dictionary__string__Uno_Content_Models_VertexAttributeArray* __this, ::uString* key);
int Dictionary__string__Uno_Content_Models_VertexAttributeArray__get_Count(Dictionary__string__Uno_Content_Models_VertexAttributeArray* __this);
::app::Uno::Content::Models::VertexAttributeArray* Dictionary__string__Uno_Content_Models_VertexAttributeArray__get_Item(Dictionary__string__Uno_Content_Models_VertexAttributeArray* __this, ::uString* key);
::app::Uno::Collections::Dictionary2_KeyCollection__string__Uno_Content_Models_VertexAttributeArray* Dictionary__string__Uno_Content_Models_VertexAttributeArray__get_Keys(Dictionary__string__Uno_Content_Models_VertexAttributeArray* __this);
::app::Uno::Collections::Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray* Dictionary__string__Uno_Content_Models_VertexAttributeArray__get_Values(Dictionary__string__Uno_Content_Models_VertexAttributeArray* __this);
::app::Uno::Collections::Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray Dictionary__string__Uno_Content_Models_VertexAttributeArray__GetEnumerator(Dictionary__string__Uno_Content_Models_VertexAttributeArray* __this);
Dictionary__string__Uno_Content_Models_VertexAttributeArray* Dictionary__string__Uno_Content_Models_VertexAttributeArray__New_1(::uStatic* __this);
Dictionary__string__Uno_Content_Models_VertexAttributeArray* Dictionary__string__Uno_Content_Models_VertexAttributeArray__New_2(::uStatic* __this, ::uObject* dictionary);
void Dictionary__string__Uno_Content_Models_VertexAttributeArray__Rehash(Dictionary__string__Uno_Content_Models_VertexAttributeArray* __this);
bool Dictionary__string__Uno_Content_Models_VertexAttributeArray__Remove(Dictionary__string__Uno_Content_Models_VertexAttributeArray* __this, ::uString* key);
void Dictionary__string__Uno_Content_Models_VertexAttributeArray__set_Item(Dictionary__string__Uno_Content_Models_VertexAttributeArray* __this, ::uString* key, ::app::Uno::Content::Models::VertexAttributeArray* value);
bool Dictionary__string__Uno_Content_Models_VertexAttributeArray__TryGetValue(Dictionary__string__Uno_Content_Models_VertexAttributeArray* __this, ::uString* key, ::app::Uno::Content::Models::VertexAttributeArray** value);
void Dictionary__string__Uno_Content_Models_VertexAttributeArray__Uno_Collections_ICollection_Add(Dictionary__string__Uno_Content_Models_VertexAttributeArray* __this, ::app::Uno::Collections::KeyValuePair__string__Uno_Content_Models_VertexAttributeArray item);
bool Dictionary__string__Uno_Content_Models_VertexAttributeArray__Uno_Collections_ICollection_Contains(Dictionary__string__Uno_Content_Models_VertexAttributeArray* __this, ::app::Uno::Collections::KeyValuePair__string__Uno_Content_Models_VertexAttributeArray item);
bool Dictionary__string__Uno_Content_Models_VertexAttributeArray__Uno_Collections_ICollection_Remove(Dictionary__string__Uno_Content_Models_VertexAttributeArray* __this, ::app::Uno::Collections::KeyValuePair__string__Uno_Content_Models_VertexAttributeArray item);

struct Dictionary__string__Uno_Content_Models_VertexAttributeArray : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::uObject* GetEnumerator_boxed() { return Dictionary__string__Uno_Content_Models_VertexAttributeArray__GetEnumerator_boxed(this); }
    void _ObjInit() { Dictionary__string__Uno_Content_Models_VertexAttributeArray___ObjInit(this); }
    void _ObjInit_1(::uObject* dictionary) { Dictionary__string__Uno_Content_Models_VertexAttributeArray___ObjInit_1(this, dictionary); }
    void Add(::uString* key, ::app::Uno::Content::Models::VertexAttributeArray* value) { Dictionary__string__Uno_Content_Models_VertexAttributeArray__Add(this, key, value); }
    void Clear() { Dictionary__string__Uno_Content_Models_VertexAttributeArray__Clear(this); }
    bool ContainsKey(::uString* key) { return Dictionary__string__Uno_Content_Models_VertexAttributeArray__ContainsKey(this, key); }
    int Count() { return Dictionary__string__Uno_Content_Models_VertexAttributeArray__get_Count(this); }
    ::app::Uno::Content::Models::VertexAttributeArray* Item(::uString* key) { return Dictionary__string__Uno_Content_Models_VertexAttributeArray__get_Item(this, key); }
    ::app::Uno::Collections::Dictionary2_KeyCollection__string__Uno_Content_Models_VertexAttributeArray* Keys() { return Dictionary__string__Uno_Content_Models_VertexAttributeArray__get_Keys(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection__string__Uno_Content_Models_VertexAttributeArray* Values() { return Dictionary__string__Uno_Content_Models_VertexAttributeArray__get_Values(this); }
    ::app::Uno::Collections::Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray GetEnumerator();
    void Rehash() { Dictionary__string__Uno_Content_Models_VertexAttributeArray__Rehash(this); }
    bool Remove(::uString* key) { return Dictionary__string__Uno_Content_Models_VertexAttributeArray__Remove(this, key); }
    void Item(::uString* key, ::app::Uno::Content::Models::VertexAttributeArray* value) { Dictionary__string__Uno_Content_Models_VertexAttributeArray__set_Item(this, key, value); }
    bool TryGetValue(::uString* key, ::app::Uno::Content::Models::VertexAttributeArray** value) { return Dictionary__string__Uno_Content_Models_VertexAttributeArray__TryGetValue(this, key, value); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__string__Uno_Content_Mod-ed89bebc.h>
#include <app/Uno.Collections.KeyValuePair__string__Uno_Content_Models_Vertex-7e6c5d3f.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__string__Uno_Content_Models_VertexAttributeArray Dictionary__string__Uno_Content_Models_VertexAttributeArray::GetEnumerator() { return Dictionary__string__Uno_Content_Models_VertexAttributeArray__GetEnumerator(this); }

}}}


#endif
