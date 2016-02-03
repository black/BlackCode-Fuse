// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__STRING__BOOL_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__STRING__BOOL_H__

#include <app/Uno.Collections.Dictionary2_Bucket__string__bool.h>
#include <app/Uno.Collections.IDictionary__string__bool.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_string_bool_.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__string__bool; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection__string__bool; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection__string__bool; } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__string__bool; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__string__bool;

struct Dictionary__string__bool__uType : ::uClassType
{
    ::app::Uno::Collections::IDictionary__string__bool __interface_0;
    ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_string_bool_ __interface_1;
};

Dictionary__string__bool__uType* Dictionary__string__bool__typeof();

::uObject* Dictionary__string__bool__GetEnumerator_boxed(Dictionary__string__bool* __this);
void Dictionary__string__bool___ObjInit(Dictionary__string__bool* __this);
void Dictionary__string__bool___ObjInit_1(Dictionary__string__bool* __this, ::uObject* dictionary);
void Dictionary__string__bool__Add(Dictionary__string__bool* __this, ::uString* key, bool value);
void Dictionary__string__bool__Clear(Dictionary__string__bool* __this);
bool Dictionary__string__bool__ContainsKey(Dictionary__string__bool* __this, ::uString* key);
int Dictionary__string__bool__get_Count(Dictionary__string__bool* __this);
bool Dictionary__string__bool__get_Item(Dictionary__string__bool* __this, ::uString* key);
::app::Uno::Collections::Dictionary2_KeyCollection__string__bool* Dictionary__string__bool__get_Keys(Dictionary__string__bool* __this);
::app::Uno::Collections::Dictionary2_ValueCollection__string__bool* Dictionary__string__bool__get_Values(Dictionary__string__bool* __this);
::app::Uno::Collections::Dictionary2_Enumerator__string__bool Dictionary__string__bool__GetEnumerator(Dictionary__string__bool* __this);
Dictionary__string__bool* Dictionary__string__bool__New_1(::uStatic* __this);
Dictionary__string__bool* Dictionary__string__bool__New_2(::uStatic* __this, ::uObject* dictionary);
void Dictionary__string__bool__Rehash(Dictionary__string__bool* __this);
bool Dictionary__string__bool__Remove(Dictionary__string__bool* __this, ::uString* key);
void Dictionary__string__bool__set_Item(Dictionary__string__bool* __this, ::uString* key, bool value);
bool Dictionary__string__bool__TryGetValue(Dictionary__string__bool* __this, ::uString* key, bool* value);
void Dictionary__string__bool__Uno_Collections_ICollection_Add(Dictionary__string__bool* __this, ::app::Uno::Collections::KeyValuePair__string__bool item);
bool Dictionary__string__bool__Uno_Collections_ICollection_Contains(Dictionary__string__bool* __this, ::app::Uno::Collections::KeyValuePair__string__bool item);
bool Dictionary__string__bool__Uno_Collections_ICollection_Remove(Dictionary__string__bool* __this, ::app::Uno::Collections::KeyValuePair__string__bool item);

struct Dictionary__string__bool : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::uObject* GetEnumerator_boxed() { return Dictionary__string__bool__GetEnumerator_boxed(this); }
    void _ObjInit() { Dictionary__string__bool___ObjInit(this); }
    void _ObjInit_1(::uObject* dictionary) { Dictionary__string__bool___ObjInit_1(this, dictionary); }
    void Add(::uString* key, bool value) { Dictionary__string__bool__Add(this, key, value); }
    void Clear() { Dictionary__string__bool__Clear(this); }
    bool ContainsKey(::uString* key) { return Dictionary__string__bool__ContainsKey(this, key); }
    int Count() { return Dictionary__string__bool__get_Count(this); }
    bool Item(::uString* key) { return Dictionary__string__bool__get_Item(this, key); }
    ::app::Uno::Collections::Dictionary2_KeyCollection__string__bool* Keys() { return Dictionary__string__bool__get_Keys(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection__string__bool* Values() { return Dictionary__string__bool__get_Values(this); }
    ::app::Uno::Collections::Dictionary2_Enumerator__string__bool GetEnumerator();
    void Rehash() { Dictionary__string__bool__Rehash(this); }
    bool Remove(::uString* key) { return Dictionary__string__bool__Remove(this, key); }
    void Item(::uString* key, bool value) { Dictionary__string__bool__set_Item(this, key, value); }
    bool TryGetValue(::uString* key, bool* value) { return Dictionary__string__bool__TryGetValue(this, key, value); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__string__bool.h>
#include <app/Uno.Collections.KeyValuePair__string__bool.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__string__bool Dictionary__string__bool::GetEnumerator() { return Dictionary__string__bool__GetEnumerator(this); }

}}}


#endif
