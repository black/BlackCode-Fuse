// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__INT__BOOL_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__INT__BOOL_H__

#include <app/Uno.Collections.Dictionary2_Bucket__int__bool.h>
#include <app/Uno.Collections.IDictionary__int__bool.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_int_bool_.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__int__bool; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection__int__bool; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection__int__bool; } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__int__bool; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__int__bool;

struct Dictionary__int__bool__uType : ::uClassType
{
    ::app::Uno::Collections::IDictionary__int__bool __interface_0;
    ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_int_bool_ __interface_1;
};

Dictionary__int__bool__uType* Dictionary__int__bool__typeof();

::uObject* Dictionary__int__bool__GetEnumerator_boxed(Dictionary__int__bool* __this);
void Dictionary__int__bool___ObjInit(Dictionary__int__bool* __this);
void Dictionary__int__bool___ObjInit_1(Dictionary__int__bool* __this, ::uObject* dictionary);
void Dictionary__int__bool__Add(Dictionary__int__bool* __this, int key, bool value);
void Dictionary__int__bool__Clear(Dictionary__int__bool* __this);
bool Dictionary__int__bool__ContainsKey(Dictionary__int__bool* __this, int key);
int Dictionary__int__bool__get_Count(Dictionary__int__bool* __this);
bool Dictionary__int__bool__get_Item(Dictionary__int__bool* __this, int key);
::app::Uno::Collections::Dictionary2_KeyCollection__int__bool* Dictionary__int__bool__get_Keys(Dictionary__int__bool* __this);
::app::Uno::Collections::Dictionary2_ValueCollection__int__bool* Dictionary__int__bool__get_Values(Dictionary__int__bool* __this);
::app::Uno::Collections::Dictionary2_Enumerator__int__bool Dictionary__int__bool__GetEnumerator(Dictionary__int__bool* __this);
Dictionary__int__bool* Dictionary__int__bool__New_1(::uStatic* __this);
Dictionary__int__bool* Dictionary__int__bool__New_2(::uStatic* __this, ::uObject* dictionary);
void Dictionary__int__bool__Rehash(Dictionary__int__bool* __this);
bool Dictionary__int__bool__Remove(Dictionary__int__bool* __this, int key);
void Dictionary__int__bool__set_Item(Dictionary__int__bool* __this, int key, bool value);
bool Dictionary__int__bool__TryGetValue(Dictionary__int__bool* __this, int key, bool* value);
void Dictionary__int__bool__Uno_Collections_ICollection_Add(Dictionary__int__bool* __this, ::app::Uno::Collections::KeyValuePair__int__bool item);
bool Dictionary__int__bool__Uno_Collections_ICollection_Contains(Dictionary__int__bool* __this, ::app::Uno::Collections::KeyValuePair__int__bool item);
bool Dictionary__int__bool__Uno_Collections_ICollection_Remove(Dictionary__int__bool* __this, ::app::Uno::Collections::KeyValuePair__int__bool item);

struct Dictionary__int__bool : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::uObject* GetEnumerator_boxed() { return Dictionary__int__bool__GetEnumerator_boxed(this); }
    void _ObjInit() { Dictionary__int__bool___ObjInit(this); }
    void _ObjInit_1(::uObject* dictionary) { Dictionary__int__bool___ObjInit_1(this, dictionary); }
    void Add(int key, bool value) { Dictionary__int__bool__Add(this, key, value); }
    void Clear() { Dictionary__int__bool__Clear(this); }
    bool ContainsKey(int key) { return Dictionary__int__bool__ContainsKey(this, key); }
    int Count() { return Dictionary__int__bool__get_Count(this); }
    bool Item(int key) { return Dictionary__int__bool__get_Item(this, key); }
    ::app::Uno::Collections::Dictionary2_KeyCollection__int__bool* Keys() { return Dictionary__int__bool__get_Keys(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection__int__bool* Values() { return Dictionary__int__bool__get_Values(this); }
    ::app::Uno::Collections::Dictionary2_Enumerator__int__bool GetEnumerator();
    void Rehash() { Dictionary__int__bool__Rehash(this); }
    bool Remove(int key) { return Dictionary__int__bool__Remove(this, key); }
    void Item(int key, bool value) { Dictionary__int__bool__set_Item(this, key, value); }
    bool TryGetValue(int key, bool* value) { return Dictionary__int__bool__TryGetValue(this, key, value); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__int__bool.h>
#include <app/Uno.Collections.KeyValuePair__int__bool.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__int__bool Dictionary__int__bool::GetEnumerator() { return Dictionary__int__bool__GetEnumerator(this); }

}}}


#endif
