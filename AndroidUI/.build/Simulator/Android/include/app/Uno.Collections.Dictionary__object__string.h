// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__OBJECT__STRING_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__OBJECT__STRING_H__

#include <app/Uno.Collections.Dictionary2_Bucket__object__string.h>
#include <app/Uno.Collections.IDictionary__object__string.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_object_string_.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__object__string; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection__object__string; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection__object__string; } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__object__string; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__object__string;

struct Dictionary__object__string__uType : ::uClassType
{
    ::app::Uno::Collections::IDictionary__object__string __interface_0;
    ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_object_string_ __interface_1;
};

Dictionary__object__string__uType* Dictionary__object__string__typeof();

::uObject* Dictionary__object__string__GetEnumerator_boxed(Dictionary__object__string* __this);
void Dictionary__object__string___ObjInit(Dictionary__object__string* __this);
void Dictionary__object__string___ObjInit_1(Dictionary__object__string* __this, ::uObject* dictionary);
void Dictionary__object__string__Add(Dictionary__object__string* __this, ::uObject* key, ::uString* value);
void Dictionary__object__string__Clear(Dictionary__object__string* __this);
bool Dictionary__object__string__ContainsKey(Dictionary__object__string* __this, ::uObject* key);
int Dictionary__object__string__get_Count(Dictionary__object__string* __this);
::uString* Dictionary__object__string__get_Item(Dictionary__object__string* __this, ::uObject* key);
::app::Uno::Collections::Dictionary2_KeyCollection__object__string* Dictionary__object__string__get_Keys(Dictionary__object__string* __this);
::app::Uno::Collections::Dictionary2_ValueCollection__object__string* Dictionary__object__string__get_Values(Dictionary__object__string* __this);
::app::Uno::Collections::Dictionary2_Enumerator__object__string Dictionary__object__string__GetEnumerator(Dictionary__object__string* __this);
Dictionary__object__string* Dictionary__object__string__New_1(::uStatic* __this);
Dictionary__object__string* Dictionary__object__string__New_2(::uStatic* __this, ::uObject* dictionary);
void Dictionary__object__string__Rehash(Dictionary__object__string* __this);
bool Dictionary__object__string__Remove(Dictionary__object__string* __this, ::uObject* key);
void Dictionary__object__string__set_Item(Dictionary__object__string* __this, ::uObject* key, ::uString* value);
bool Dictionary__object__string__TryGetValue(Dictionary__object__string* __this, ::uObject* key, ::uString** value);
void Dictionary__object__string__Uno_Collections_ICollection_Add(Dictionary__object__string* __this, ::app::Uno::Collections::KeyValuePair__object__string item);
bool Dictionary__object__string__Uno_Collections_ICollection_Contains(Dictionary__object__string* __this, ::app::Uno::Collections::KeyValuePair__object__string item);
bool Dictionary__object__string__Uno_Collections_ICollection_Remove(Dictionary__object__string* __this, ::app::Uno::Collections::KeyValuePair__object__string item);

struct Dictionary__object__string : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::uObject* GetEnumerator_boxed() { return Dictionary__object__string__GetEnumerator_boxed(this); }
    void _ObjInit() { Dictionary__object__string___ObjInit(this); }
    void _ObjInit_1(::uObject* dictionary) { Dictionary__object__string___ObjInit_1(this, dictionary); }
    void Add(::uObject* key, ::uString* value) { Dictionary__object__string__Add(this, key, value); }
    void Clear() { Dictionary__object__string__Clear(this); }
    bool ContainsKey(::uObject* key) { return Dictionary__object__string__ContainsKey(this, key); }
    int Count() { return Dictionary__object__string__get_Count(this); }
    ::uString* Item(::uObject* key) { return Dictionary__object__string__get_Item(this, key); }
    ::app::Uno::Collections::Dictionary2_KeyCollection__object__string* Keys() { return Dictionary__object__string__get_Keys(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection__object__string* Values() { return Dictionary__object__string__get_Values(this); }
    ::app::Uno::Collections::Dictionary2_Enumerator__object__string GetEnumerator();
    void Rehash() { Dictionary__object__string__Rehash(this); }
    bool Remove(::uObject* key) { return Dictionary__object__string__Remove(this, key); }
    void Item(::uObject* key, ::uString* value) { Dictionary__object__string__set_Item(this, key, value); }
    bool TryGetValue(::uObject* key, ::uString** value) { return Dictionary__object__string__TryGetValue(this, key, value); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__object__string.h>
#include <app/Uno.Collections.KeyValuePair__object__string.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__object__string Dictionary__object__string::GetEnumerator() { return Dictionary__object__string__GetEnumerator(this); }

}}}


#endif
