// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__STRING__STRING_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__STRING__STRING_H__

#include <app/Uno.Collections.Dictionary2_Bucket__string__string.h>
#include <app/Uno.Collections.IDictionary__string__string.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_string_string_.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__string__string; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection__string__string; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection__string__string; } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__string__string; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__string__string;

struct Dictionary__string__string__uType : ::uClassType
{
    ::app::Uno::Collections::IDictionary__string__string __interface_0;
    ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_string_string_ __interface_1;
};

Dictionary__string__string__uType* Dictionary__string__string__typeof();

::uObject* Dictionary__string__string__GetEnumerator_boxed(Dictionary__string__string* __this);
void Dictionary__string__string___ObjInit(Dictionary__string__string* __this);
void Dictionary__string__string___ObjInit_1(Dictionary__string__string* __this, ::uObject* dictionary);
void Dictionary__string__string__Add(Dictionary__string__string* __this, ::uString* key, ::uString* value);
void Dictionary__string__string__Clear(Dictionary__string__string* __this);
bool Dictionary__string__string__ContainsKey(Dictionary__string__string* __this, ::uString* key);
int Dictionary__string__string__get_Count(Dictionary__string__string* __this);
::uString* Dictionary__string__string__get_Item(Dictionary__string__string* __this, ::uString* key);
::app::Uno::Collections::Dictionary2_KeyCollection__string__string* Dictionary__string__string__get_Keys(Dictionary__string__string* __this);
::app::Uno::Collections::Dictionary2_ValueCollection__string__string* Dictionary__string__string__get_Values(Dictionary__string__string* __this);
::app::Uno::Collections::Dictionary2_Enumerator__string__string Dictionary__string__string__GetEnumerator(Dictionary__string__string* __this);
Dictionary__string__string* Dictionary__string__string__New_1(::uStatic* __this);
Dictionary__string__string* Dictionary__string__string__New_2(::uStatic* __this, ::uObject* dictionary);
void Dictionary__string__string__Rehash(Dictionary__string__string* __this);
bool Dictionary__string__string__Remove(Dictionary__string__string* __this, ::uString* key);
void Dictionary__string__string__set_Item(Dictionary__string__string* __this, ::uString* key, ::uString* value);
bool Dictionary__string__string__TryGetValue(Dictionary__string__string* __this, ::uString* key, ::uString** value);
void Dictionary__string__string__Uno_Collections_ICollection_Add(Dictionary__string__string* __this, ::app::Uno::Collections::KeyValuePair__string__string item);
bool Dictionary__string__string__Uno_Collections_ICollection_Contains(Dictionary__string__string* __this, ::app::Uno::Collections::KeyValuePair__string__string item);
bool Dictionary__string__string__Uno_Collections_ICollection_Remove(Dictionary__string__string* __this, ::app::Uno::Collections::KeyValuePair__string__string item);

struct Dictionary__string__string : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::uObject* GetEnumerator_boxed() { return Dictionary__string__string__GetEnumerator_boxed(this); }
    void _ObjInit() { Dictionary__string__string___ObjInit(this); }
    void _ObjInit_1(::uObject* dictionary) { Dictionary__string__string___ObjInit_1(this, dictionary); }
    void Add(::uString* key, ::uString* value) { Dictionary__string__string__Add(this, key, value); }
    void Clear() { Dictionary__string__string__Clear(this); }
    bool ContainsKey(::uString* key) { return Dictionary__string__string__ContainsKey(this, key); }
    int Count() { return Dictionary__string__string__get_Count(this); }
    ::uString* Item(::uString* key) { return Dictionary__string__string__get_Item(this, key); }
    ::app::Uno::Collections::Dictionary2_KeyCollection__string__string* Keys() { return Dictionary__string__string__get_Keys(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection__string__string* Values() { return Dictionary__string__string__get_Values(this); }
    ::app::Uno::Collections::Dictionary2_Enumerator__string__string GetEnumerator();
    void Rehash() { Dictionary__string__string__Rehash(this); }
    bool Remove(::uString* key) { return Dictionary__string__string__Remove(this, key); }
    void Item(::uString* key, ::uString* value) { Dictionary__string__string__set_Item(this, key, value); }
    bool TryGetValue(::uString* key, ::uString** value) { return Dictionary__string__string__TryGetValue(this, key, value); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__string__string.h>
#include <app/Uno.Collections.KeyValuePair__string__string.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__string__string Dictionary__string__string::GetEnumerator() { return Dictionary__string__string__GetEnumerator(this); }

}}}


#endif
