// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__INT__STRING_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__INT__STRING_H__

#include <app/Uno.Collections.Dictionary2_Bucket__int__string.h>
#include <app/Uno.Collections.IDictionary__int__string.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_int_string_.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__int__string; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection__int__string; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection__int__string; } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__int__string; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__int__string;

struct Dictionary__int__string__uType : ::uClassType
{
    ::app::Uno::Collections::IDictionary__int__string __interface_0;
    ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_int_string_ __interface_1;
};

Dictionary__int__string__uType* Dictionary__int__string__typeof();

::uObject* Dictionary__int__string__GetEnumerator_boxed(Dictionary__int__string* __this);
void Dictionary__int__string___ObjInit(Dictionary__int__string* __this);
void Dictionary__int__string___ObjInit_1(Dictionary__int__string* __this, ::uObject* dictionary);
void Dictionary__int__string__Add(Dictionary__int__string* __this, int key, ::uString* value);
void Dictionary__int__string__Clear(Dictionary__int__string* __this);
bool Dictionary__int__string__ContainsKey(Dictionary__int__string* __this, int key);
int Dictionary__int__string__get_Count(Dictionary__int__string* __this);
::uString* Dictionary__int__string__get_Item(Dictionary__int__string* __this, int key);
::app::Uno::Collections::Dictionary2_KeyCollection__int__string* Dictionary__int__string__get_Keys(Dictionary__int__string* __this);
::app::Uno::Collections::Dictionary2_ValueCollection__int__string* Dictionary__int__string__get_Values(Dictionary__int__string* __this);
::app::Uno::Collections::Dictionary2_Enumerator__int__string Dictionary__int__string__GetEnumerator(Dictionary__int__string* __this);
Dictionary__int__string* Dictionary__int__string__New_1(::uStatic* __this);
Dictionary__int__string* Dictionary__int__string__New_2(::uStatic* __this, ::uObject* dictionary);
void Dictionary__int__string__Rehash(Dictionary__int__string* __this);
bool Dictionary__int__string__Remove(Dictionary__int__string* __this, int key);
void Dictionary__int__string__set_Item(Dictionary__int__string* __this, int key, ::uString* value);
bool Dictionary__int__string__TryGetValue(Dictionary__int__string* __this, int key, ::uString** value);
void Dictionary__int__string__Uno_Collections_ICollection_Add(Dictionary__int__string* __this, ::app::Uno::Collections::KeyValuePair__int__string item);
bool Dictionary__int__string__Uno_Collections_ICollection_Contains(Dictionary__int__string* __this, ::app::Uno::Collections::KeyValuePair__int__string item);
bool Dictionary__int__string__Uno_Collections_ICollection_Remove(Dictionary__int__string* __this, ::app::Uno::Collections::KeyValuePair__int__string item);

struct Dictionary__int__string : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::uObject* GetEnumerator_boxed() { return Dictionary__int__string__GetEnumerator_boxed(this); }
    void _ObjInit() { Dictionary__int__string___ObjInit(this); }
    void _ObjInit_1(::uObject* dictionary) { Dictionary__int__string___ObjInit_1(this, dictionary); }
    void Add(int key, ::uString* value) { Dictionary__int__string__Add(this, key, value); }
    void Clear() { Dictionary__int__string__Clear(this); }
    bool ContainsKey(int key) { return Dictionary__int__string__ContainsKey(this, key); }
    int Count() { return Dictionary__int__string__get_Count(this); }
    ::uString* Item(int key) { return Dictionary__int__string__get_Item(this, key); }
    ::app::Uno::Collections::Dictionary2_KeyCollection__int__string* Keys() { return Dictionary__int__string__get_Keys(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection__int__string* Values() { return Dictionary__int__string__get_Values(this); }
    ::app::Uno::Collections::Dictionary2_Enumerator__int__string GetEnumerator();
    void Rehash() { Dictionary__int__string__Rehash(this); }
    bool Remove(int key) { return Dictionary__int__string__Remove(this, key); }
    void Item(int key, ::uString* value) { Dictionary__int__string__set_Item(this, key, value); }
    bool TryGetValue(int key, ::uString** value) { return Dictionary__int__string__TryGetValue(this, key, value); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__int__string.h>
#include <app/Uno.Collections.KeyValuePair__int__string.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__int__string Dictionary__int__string::GetEnumerator() { return Dictionary__int__string__GetEnumerator(this); }

}}}


#endif
