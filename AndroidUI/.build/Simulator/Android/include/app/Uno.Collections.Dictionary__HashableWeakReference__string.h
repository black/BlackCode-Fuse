// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__HASHABLE_WEAK_REFERENCE__STRING_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__HASHABLE_WEAK_REFERENCE__STRING_H__

#include <app/Uno.Collections.Dictionary2_Bucket__HashableWeakReference__string.h>
#include <app/Uno.Collections.IDictionary__HashableWeakReference__string.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_Hasha-2efcb1d.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__HashableWeakReference__string; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection__HashableWeakReference__string; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection__HashableWeakReference__string; } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__HashableWeakReference__string; } } }
namespace app { struct HashableWeakReference; }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__HashableWeakReference__string;

struct Dictionary__HashableWeakReference__string__uType : ::uClassType
{
    ::app::Uno::Collections::IDictionary__HashableWeakReference__string __interface_0;
    ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_HashableWeakReference_string_ __interface_1;
};

Dictionary__HashableWeakReference__string__uType* Dictionary__HashableWeakReference__string__typeof();

::uObject* Dictionary__HashableWeakReference__string__GetEnumerator_boxed(Dictionary__HashableWeakReference__string* __this);
void Dictionary__HashableWeakReference__string___ObjInit(Dictionary__HashableWeakReference__string* __this);
void Dictionary__HashableWeakReference__string___ObjInit_1(Dictionary__HashableWeakReference__string* __this, ::uObject* dictionary);
void Dictionary__HashableWeakReference__string__Add(Dictionary__HashableWeakReference__string* __this, ::app::HashableWeakReference* key, ::uString* value);
void Dictionary__HashableWeakReference__string__Clear(Dictionary__HashableWeakReference__string* __this);
bool Dictionary__HashableWeakReference__string__ContainsKey(Dictionary__HashableWeakReference__string* __this, ::app::HashableWeakReference* key);
int Dictionary__HashableWeakReference__string__get_Count(Dictionary__HashableWeakReference__string* __this);
::uString* Dictionary__HashableWeakReference__string__get_Item(Dictionary__HashableWeakReference__string* __this, ::app::HashableWeakReference* key);
::app::Uno::Collections::Dictionary2_KeyCollection__HashableWeakReference__string* Dictionary__HashableWeakReference__string__get_Keys(Dictionary__HashableWeakReference__string* __this);
::app::Uno::Collections::Dictionary2_ValueCollection__HashableWeakReference__string* Dictionary__HashableWeakReference__string__get_Values(Dictionary__HashableWeakReference__string* __this);
::app::Uno::Collections::Dictionary2_Enumerator__HashableWeakReference__string Dictionary__HashableWeakReference__string__GetEnumerator(Dictionary__HashableWeakReference__string* __this);
Dictionary__HashableWeakReference__string* Dictionary__HashableWeakReference__string__New_1(::uStatic* __this);
Dictionary__HashableWeakReference__string* Dictionary__HashableWeakReference__string__New_2(::uStatic* __this, ::uObject* dictionary);
void Dictionary__HashableWeakReference__string__Rehash(Dictionary__HashableWeakReference__string* __this);
bool Dictionary__HashableWeakReference__string__Remove(Dictionary__HashableWeakReference__string* __this, ::app::HashableWeakReference* key);
void Dictionary__HashableWeakReference__string__set_Item(Dictionary__HashableWeakReference__string* __this, ::app::HashableWeakReference* key, ::uString* value);
bool Dictionary__HashableWeakReference__string__TryGetValue(Dictionary__HashableWeakReference__string* __this, ::app::HashableWeakReference* key, ::uString** value);
void Dictionary__HashableWeakReference__string__Uno_Collections_ICollection_Add(Dictionary__HashableWeakReference__string* __this, ::app::Uno::Collections::KeyValuePair__HashableWeakReference__string item);
bool Dictionary__HashableWeakReference__string__Uno_Collections_ICollection_Contains(Dictionary__HashableWeakReference__string* __this, ::app::Uno::Collections::KeyValuePair__HashableWeakReference__string item);
bool Dictionary__HashableWeakReference__string__Uno_Collections_ICollection_Remove(Dictionary__HashableWeakReference__string* __this, ::app::Uno::Collections::KeyValuePair__HashableWeakReference__string item);

struct Dictionary__HashableWeakReference__string : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::uObject* GetEnumerator_boxed() { return Dictionary__HashableWeakReference__string__GetEnumerator_boxed(this); }
    void _ObjInit() { Dictionary__HashableWeakReference__string___ObjInit(this); }
    void _ObjInit_1(::uObject* dictionary) { Dictionary__HashableWeakReference__string___ObjInit_1(this, dictionary); }
    void Add(::app::HashableWeakReference* key, ::uString* value) { Dictionary__HashableWeakReference__string__Add(this, key, value); }
    void Clear() { Dictionary__HashableWeakReference__string__Clear(this); }
    bool ContainsKey(::app::HashableWeakReference* key) { return Dictionary__HashableWeakReference__string__ContainsKey(this, key); }
    int Count() { return Dictionary__HashableWeakReference__string__get_Count(this); }
    ::uString* Item(::app::HashableWeakReference* key) { return Dictionary__HashableWeakReference__string__get_Item(this, key); }
    ::app::Uno::Collections::Dictionary2_KeyCollection__HashableWeakReference__string* Keys() { return Dictionary__HashableWeakReference__string__get_Keys(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection__HashableWeakReference__string* Values() { return Dictionary__HashableWeakReference__string__get_Values(this); }
    ::app::Uno::Collections::Dictionary2_Enumerator__HashableWeakReference__string GetEnumerator();
    void Rehash() { Dictionary__HashableWeakReference__string__Rehash(this); }
    bool Remove(::app::HashableWeakReference* key) { return Dictionary__HashableWeakReference__string__Remove(this, key); }
    void Item(::app::HashableWeakReference* key, ::uString* value) { Dictionary__HashableWeakReference__string__set_Item(this, key, value); }
    bool TryGetValue(::app::HashableWeakReference* key, ::uString** value) { return Dictionary__HashableWeakReference__string__TryGetValue(this, key, value); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__HashableWeakReference__string.h>
#include <app/Uno.Collections.KeyValuePair__HashableWeakReference__string.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__HashableWeakReference__string Dictionary__HashableWeakReference__string::GetEnumerator() { return Dictionary__HashableWeakReference__string__GetEnumerator(this); }

}}}


#endif
