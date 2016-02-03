// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__CHAR__FLOAT_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__CHAR__FLOAT_H__

#include <app/Uno.Collections.Dictionary2_Bucket__char__float.h>
#include <app/Uno.Collections.IDictionary__char__float.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_char_float_.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__char__float; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection__char__float; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection__char__float; } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__char__float; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__char__float;

struct Dictionary__char__float__uType : ::uClassType
{
    ::app::Uno::Collections::IDictionary__char__float __interface_0;
    ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_char_float_ __interface_1;
};

Dictionary__char__float__uType* Dictionary__char__float__typeof();

::uObject* Dictionary__char__float__GetEnumerator_boxed(Dictionary__char__float* __this);
void Dictionary__char__float___ObjInit(Dictionary__char__float* __this);
void Dictionary__char__float___ObjInit_1(Dictionary__char__float* __this, ::uObject* dictionary);
void Dictionary__char__float__Add(Dictionary__char__float* __this, ::uChar key, float value);
void Dictionary__char__float__Clear(Dictionary__char__float* __this);
bool Dictionary__char__float__ContainsKey(Dictionary__char__float* __this, ::uChar key);
int Dictionary__char__float__get_Count(Dictionary__char__float* __this);
float Dictionary__char__float__get_Item(Dictionary__char__float* __this, ::uChar key);
::app::Uno::Collections::Dictionary2_KeyCollection__char__float* Dictionary__char__float__get_Keys(Dictionary__char__float* __this);
::app::Uno::Collections::Dictionary2_ValueCollection__char__float* Dictionary__char__float__get_Values(Dictionary__char__float* __this);
::app::Uno::Collections::Dictionary2_Enumerator__char__float Dictionary__char__float__GetEnumerator(Dictionary__char__float* __this);
Dictionary__char__float* Dictionary__char__float__New_1(::uStatic* __this);
Dictionary__char__float* Dictionary__char__float__New_2(::uStatic* __this, ::uObject* dictionary);
void Dictionary__char__float__Rehash(Dictionary__char__float* __this);
bool Dictionary__char__float__Remove(Dictionary__char__float* __this, ::uChar key);
void Dictionary__char__float__set_Item(Dictionary__char__float* __this, ::uChar key, float value);
bool Dictionary__char__float__TryGetValue(Dictionary__char__float* __this, ::uChar key, float* value);
void Dictionary__char__float__Uno_Collections_ICollection_Add(Dictionary__char__float* __this, ::app::Uno::Collections::KeyValuePair__char__float item);
bool Dictionary__char__float__Uno_Collections_ICollection_Contains(Dictionary__char__float* __this, ::app::Uno::Collections::KeyValuePair__char__float item);
bool Dictionary__char__float__Uno_Collections_ICollection_Remove(Dictionary__char__float* __this, ::app::Uno::Collections::KeyValuePair__char__float item);

struct Dictionary__char__float : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::uObject* GetEnumerator_boxed() { return Dictionary__char__float__GetEnumerator_boxed(this); }
    void _ObjInit() { Dictionary__char__float___ObjInit(this); }
    void _ObjInit_1(::uObject* dictionary) { Dictionary__char__float___ObjInit_1(this, dictionary); }
    void Add(::uChar key, float value) { Dictionary__char__float__Add(this, key, value); }
    void Clear() { Dictionary__char__float__Clear(this); }
    bool ContainsKey(::uChar key) { return Dictionary__char__float__ContainsKey(this, key); }
    int Count() { return Dictionary__char__float__get_Count(this); }
    float Item(::uChar key) { return Dictionary__char__float__get_Item(this, key); }
    ::app::Uno::Collections::Dictionary2_KeyCollection__char__float* Keys() { return Dictionary__char__float__get_Keys(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection__char__float* Values() { return Dictionary__char__float__get_Values(this); }
    ::app::Uno::Collections::Dictionary2_Enumerator__char__float GetEnumerator();
    void Rehash() { Dictionary__char__float__Rehash(this); }
    bool Remove(::uChar key) { return Dictionary__char__float__Remove(this, key); }
    void Item(::uChar key, float value) { Dictionary__char__float__set_Item(this, key, value); }
    bool TryGetValue(::uChar key, float* value) { return Dictionary__char__float__TryGetValue(this, key, value); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__char__float.h>
#include <app/Uno.Collections.KeyValuePair__char__float.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__char__float Dictionary__char__float::GetEnumerator() { return Dictionary__char__float__GetEnumerator(this); }

}}}


#endif
