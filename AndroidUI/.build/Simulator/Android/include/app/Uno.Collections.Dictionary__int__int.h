// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__INT__INT_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__INT__INT_H__

#include <app/Uno.Collections.Dictionary2_Bucket__int__int.h>
#include <app/Uno.Collections.IDictionary__int__int.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_int_int_.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__int__int; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection__int__int; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection__int__int; } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__int__int; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__int__int;

struct Dictionary__int__int__uType : ::uClassType
{
    ::app::Uno::Collections::IDictionary__int__int __interface_0;
    ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_int_int_ __interface_1;
};

Dictionary__int__int__uType* Dictionary__int__int__typeof();

::uObject* Dictionary__int__int__GetEnumerator_boxed(Dictionary__int__int* __this);
void Dictionary__int__int___ObjInit(Dictionary__int__int* __this);
void Dictionary__int__int___ObjInit_1(Dictionary__int__int* __this, ::uObject* dictionary);
void Dictionary__int__int__Add(Dictionary__int__int* __this, int key, int value);
void Dictionary__int__int__Clear(Dictionary__int__int* __this);
bool Dictionary__int__int__ContainsKey(Dictionary__int__int* __this, int key);
int Dictionary__int__int__get_Count(Dictionary__int__int* __this);
int Dictionary__int__int__get_Item(Dictionary__int__int* __this, int key);
::app::Uno::Collections::Dictionary2_KeyCollection__int__int* Dictionary__int__int__get_Keys(Dictionary__int__int* __this);
::app::Uno::Collections::Dictionary2_ValueCollection__int__int* Dictionary__int__int__get_Values(Dictionary__int__int* __this);
::app::Uno::Collections::Dictionary2_Enumerator__int__int Dictionary__int__int__GetEnumerator(Dictionary__int__int* __this);
Dictionary__int__int* Dictionary__int__int__New_1(::uStatic* __this);
Dictionary__int__int* Dictionary__int__int__New_2(::uStatic* __this, ::uObject* dictionary);
void Dictionary__int__int__Rehash(Dictionary__int__int* __this);
bool Dictionary__int__int__Remove(Dictionary__int__int* __this, int key);
void Dictionary__int__int__set_Item(Dictionary__int__int* __this, int key, int value);
bool Dictionary__int__int__TryGetValue(Dictionary__int__int* __this, int key, int* value);
void Dictionary__int__int__Uno_Collections_ICollection_Add(Dictionary__int__int* __this, ::app::Uno::Collections::KeyValuePair__int__int item);
bool Dictionary__int__int__Uno_Collections_ICollection_Contains(Dictionary__int__int* __this, ::app::Uno::Collections::KeyValuePair__int__int item);
bool Dictionary__int__int__Uno_Collections_ICollection_Remove(Dictionary__int__int* __this, ::app::Uno::Collections::KeyValuePair__int__int item);

struct Dictionary__int__int : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::uObject* GetEnumerator_boxed() { return Dictionary__int__int__GetEnumerator_boxed(this); }
    void _ObjInit() { Dictionary__int__int___ObjInit(this); }
    void _ObjInit_1(::uObject* dictionary) { Dictionary__int__int___ObjInit_1(this, dictionary); }
    void Add(int key, int value) { Dictionary__int__int__Add(this, key, value); }
    void Clear() { Dictionary__int__int__Clear(this); }
    bool ContainsKey(int key) { return Dictionary__int__int__ContainsKey(this, key); }
    int Count() { return Dictionary__int__int__get_Count(this); }
    int Item(int key) { return Dictionary__int__int__get_Item(this, key); }
    ::app::Uno::Collections::Dictionary2_KeyCollection__int__int* Keys() { return Dictionary__int__int__get_Keys(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection__int__int* Values() { return Dictionary__int__int__get_Values(this); }
    ::app::Uno::Collections::Dictionary2_Enumerator__int__int GetEnumerator();
    void Rehash() { Dictionary__int__int__Rehash(this); }
    bool Remove(int key) { return Dictionary__int__int__Remove(this, key); }
    void Item(int key, int value) { Dictionary__int__int__set_Item(this, key, value); }
    bool TryGetValue(int key, int* value) { return Dictionary__int__int__TryGetValue(this, key, value); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__int__int.h>
#include <app/Uno.Collections.KeyValuePair__int__int.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__int__int Dictionary__int__int::GetEnumerator() { return Dictionary__int__int__GetEnumerator(this); }

}}}


#endif
