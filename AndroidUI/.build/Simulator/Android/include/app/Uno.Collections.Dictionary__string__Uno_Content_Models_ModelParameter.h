// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__STRING__UNO_CONTENT_MODELS_MODEL_PARAMETER_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__STRING__UNO_CONTENT_MODELS_MODEL_PARAMETER_H__

#include <app/Uno.Collections.Dictionary2_Bucket__string__Uno_Content_Models_-20bd6136.h>
#include <app/Uno.Collections.IDictionary__string__Uno_Content_Models_ModelParameter.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_strin-c01ed8cf.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__string__Uno_Content_Models_ModelParameter; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection__string__Uno_Content_Models_ModelParameter; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter; } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__string__Uno_Content_Models_ModelParameter; } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelParameter; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__string__Uno_Content_Models_ModelParameter;

struct Dictionary__string__Uno_Content_Models_ModelParameter__uType : ::uClassType
{
    ::app::Uno::Collections::IDictionary__string__Uno_Content_Models_ModelParameter __interface_0;
    ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_string_Uno_Content_Models_ModelParameter_ __interface_1;
};

Dictionary__string__Uno_Content_Models_ModelParameter__uType* Dictionary__string__Uno_Content_Models_ModelParameter__typeof();

::uObject* Dictionary__string__Uno_Content_Models_ModelParameter__GetEnumerator_boxed(Dictionary__string__Uno_Content_Models_ModelParameter* __this);
void Dictionary__string__Uno_Content_Models_ModelParameter___ObjInit(Dictionary__string__Uno_Content_Models_ModelParameter* __this);
void Dictionary__string__Uno_Content_Models_ModelParameter___ObjInit_1(Dictionary__string__Uno_Content_Models_ModelParameter* __this, ::uObject* dictionary);
void Dictionary__string__Uno_Content_Models_ModelParameter__Add(Dictionary__string__Uno_Content_Models_ModelParameter* __this, ::uString* key, ::app::Uno::Content::Models::ModelParameter* value);
void Dictionary__string__Uno_Content_Models_ModelParameter__Clear(Dictionary__string__Uno_Content_Models_ModelParameter* __this);
bool Dictionary__string__Uno_Content_Models_ModelParameter__ContainsKey(Dictionary__string__Uno_Content_Models_ModelParameter* __this, ::uString* key);
int Dictionary__string__Uno_Content_Models_ModelParameter__get_Count(Dictionary__string__Uno_Content_Models_ModelParameter* __this);
::app::Uno::Content::Models::ModelParameter* Dictionary__string__Uno_Content_Models_ModelParameter__get_Item(Dictionary__string__Uno_Content_Models_ModelParameter* __this, ::uString* key);
::app::Uno::Collections::Dictionary2_KeyCollection__string__Uno_Content_Models_ModelParameter* Dictionary__string__Uno_Content_Models_ModelParameter__get_Keys(Dictionary__string__Uno_Content_Models_ModelParameter* __this);
::app::Uno::Collections::Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter* Dictionary__string__Uno_Content_Models_ModelParameter__get_Values(Dictionary__string__Uno_Content_Models_ModelParameter* __this);
::app::Uno::Collections::Dictionary2_Enumerator__string__Uno_Content_Models_ModelParameter Dictionary__string__Uno_Content_Models_ModelParameter__GetEnumerator(Dictionary__string__Uno_Content_Models_ModelParameter* __this);
Dictionary__string__Uno_Content_Models_ModelParameter* Dictionary__string__Uno_Content_Models_ModelParameter__New_1(::uStatic* __this);
Dictionary__string__Uno_Content_Models_ModelParameter* Dictionary__string__Uno_Content_Models_ModelParameter__New_2(::uStatic* __this, ::uObject* dictionary);
void Dictionary__string__Uno_Content_Models_ModelParameter__Rehash(Dictionary__string__Uno_Content_Models_ModelParameter* __this);
bool Dictionary__string__Uno_Content_Models_ModelParameter__Remove(Dictionary__string__Uno_Content_Models_ModelParameter* __this, ::uString* key);
void Dictionary__string__Uno_Content_Models_ModelParameter__set_Item(Dictionary__string__Uno_Content_Models_ModelParameter* __this, ::uString* key, ::app::Uno::Content::Models::ModelParameter* value);
bool Dictionary__string__Uno_Content_Models_ModelParameter__TryGetValue(Dictionary__string__Uno_Content_Models_ModelParameter* __this, ::uString* key, ::app::Uno::Content::Models::ModelParameter** value);
void Dictionary__string__Uno_Content_Models_ModelParameter__Uno_Collections_ICollection_Add(Dictionary__string__Uno_Content_Models_ModelParameter* __this, ::app::Uno::Collections::KeyValuePair__string__Uno_Content_Models_ModelParameter item);
bool Dictionary__string__Uno_Content_Models_ModelParameter__Uno_Collections_ICollection_Contains(Dictionary__string__Uno_Content_Models_ModelParameter* __this, ::app::Uno::Collections::KeyValuePair__string__Uno_Content_Models_ModelParameter item);
bool Dictionary__string__Uno_Content_Models_ModelParameter__Uno_Collections_ICollection_Remove(Dictionary__string__Uno_Content_Models_ModelParameter* __this, ::app::Uno::Collections::KeyValuePair__string__Uno_Content_Models_ModelParameter item);

struct Dictionary__string__Uno_Content_Models_ModelParameter : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::uObject* GetEnumerator_boxed() { return Dictionary__string__Uno_Content_Models_ModelParameter__GetEnumerator_boxed(this); }
    void _ObjInit() { Dictionary__string__Uno_Content_Models_ModelParameter___ObjInit(this); }
    void _ObjInit_1(::uObject* dictionary) { Dictionary__string__Uno_Content_Models_ModelParameter___ObjInit_1(this, dictionary); }
    void Add(::uString* key, ::app::Uno::Content::Models::ModelParameter* value) { Dictionary__string__Uno_Content_Models_ModelParameter__Add(this, key, value); }
    void Clear() { Dictionary__string__Uno_Content_Models_ModelParameter__Clear(this); }
    bool ContainsKey(::uString* key) { return Dictionary__string__Uno_Content_Models_ModelParameter__ContainsKey(this, key); }
    int Count() { return Dictionary__string__Uno_Content_Models_ModelParameter__get_Count(this); }
    ::app::Uno::Content::Models::ModelParameter* Item(::uString* key) { return Dictionary__string__Uno_Content_Models_ModelParameter__get_Item(this, key); }
    ::app::Uno::Collections::Dictionary2_KeyCollection__string__Uno_Content_Models_ModelParameter* Keys() { return Dictionary__string__Uno_Content_Models_ModelParameter__get_Keys(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection__string__Uno_Content_Models_ModelParameter* Values() { return Dictionary__string__Uno_Content_Models_ModelParameter__get_Values(this); }
    ::app::Uno::Collections::Dictionary2_Enumerator__string__Uno_Content_Models_ModelParameter GetEnumerator();
    void Rehash() { Dictionary__string__Uno_Content_Models_ModelParameter__Rehash(this); }
    bool Remove(::uString* key) { return Dictionary__string__Uno_Content_Models_ModelParameter__Remove(this, key); }
    void Item(::uString* key, ::app::Uno::Content::Models::ModelParameter* value) { Dictionary__string__Uno_Content_Models_ModelParameter__set_Item(this, key, value); }
    bool TryGetValue(::uString* key, ::app::Uno::Content::Models::ModelParameter** value) { return Dictionary__string__Uno_Content_Models_ModelParameter__TryGetValue(this, key, value); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__string__Uno_Content_Mod-cc626e23.h>
#include <app/Uno.Collections.KeyValuePair__string__Uno_Content_Models_ModelParameter.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__string__Uno_Content_Models_ModelParameter Dictionary__string__Uno_Content_Models_ModelParameter::GetEnumerator() { return Dictionary__string__Uno_Content_Models_ModelParameter__GetEnumerator(this); }

}}}


#endif
