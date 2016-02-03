// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__UNO_TYPE__UNO_REFLECTION_CPP_FIELD___H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__UNO_TYPE__UNO_REFLECTION_CPP_FIELD___H__

#include <app/Uno.Collections.Dictionary2_Bucket__Uno_Type__Uno_Reflection_CppField__.h>
#include <app/Uno.Collections.IDictionary__Uno_Type__Uno_Reflection_CppField__.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_Uno_T-7ef8391e.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__Uno_Type__Uno_Reflection_CppField__; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection__Uno_Type__Uno_Reflection_CppField__; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppField__; } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__Uno_Type__Uno_Reflection_CppField__; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__Uno_Type__Uno_Reflection_CppField__;

struct Dictionary__Uno_Type__Uno_Reflection_CppField____uType : ::uClassType
{
    ::app::Uno::Collections::IDictionary__Uno_Type__Uno_Reflection_CppField__ __interface_0;
    ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_Uno_Type_Uno_Reflection_CppField___ __interface_1;
};

Dictionary__Uno_Type__Uno_Reflection_CppField____uType* Dictionary__Uno_Type__Uno_Reflection_CppField____typeof();

::uObject* Dictionary__Uno_Type__Uno_Reflection_CppField____GetEnumerator_boxed(Dictionary__Uno_Type__Uno_Reflection_CppField__* __this);
void Dictionary__Uno_Type__Uno_Reflection_CppField_____ObjInit(Dictionary__Uno_Type__Uno_Reflection_CppField__* __this);
void Dictionary__Uno_Type__Uno_Reflection_CppField_____ObjInit_1(Dictionary__Uno_Type__Uno_Reflection_CppField__* __this, ::uObject* dictionary);
void Dictionary__Uno_Type__Uno_Reflection_CppField____Add(Dictionary__Uno_Type__Uno_Reflection_CppField__* __this, ::uType* key, ::uArray* value);
void Dictionary__Uno_Type__Uno_Reflection_CppField____Clear(Dictionary__Uno_Type__Uno_Reflection_CppField__* __this);
bool Dictionary__Uno_Type__Uno_Reflection_CppField____ContainsKey(Dictionary__Uno_Type__Uno_Reflection_CppField__* __this, ::uType* key);
int Dictionary__Uno_Type__Uno_Reflection_CppField____get_Count(Dictionary__Uno_Type__Uno_Reflection_CppField__* __this);
::uArray* Dictionary__Uno_Type__Uno_Reflection_CppField____get_Item(Dictionary__Uno_Type__Uno_Reflection_CppField__* __this, ::uType* key);
::app::Uno::Collections::Dictionary2_KeyCollection__Uno_Type__Uno_Reflection_CppField__* Dictionary__Uno_Type__Uno_Reflection_CppField____get_Keys(Dictionary__Uno_Type__Uno_Reflection_CppField__* __this);
::app::Uno::Collections::Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppField__* Dictionary__Uno_Type__Uno_Reflection_CppField____get_Values(Dictionary__Uno_Type__Uno_Reflection_CppField__* __this);
::app::Uno::Collections::Dictionary2_Enumerator__Uno_Type__Uno_Reflection_CppField__ Dictionary__Uno_Type__Uno_Reflection_CppField____GetEnumerator(Dictionary__Uno_Type__Uno_Reflection_CppField__* __this);
Dictionary__Uno_Type__Uno_Reflection_CppField__* Dictionary__Uno_Type__Uno_Reflection_CppField____New_1(::uStatic* __this);
Dictionary__Uno_Type__Uno_Reflection_CppField__* Dictionary__Uno_Type__Uno_Reflection_CppField____New_2(::uStatic* __this, ::uObject* dictionary);
void Dictionary__Uno_Type__Uno_Reflection_CppField____Rehash(Dictionary__Uno_Type__Uno_Reflection_CppField__* __this);
bool Dictionary__Uno_Type__Uno_Reflection_CppField____Remove(Dictionary__Uno_Type__Uno_Reflection_CppField__* __this, ::uType* key);
void Dictionary__Uno_Type__Uno_Reflection_CppField____set_Item(Dictionary__Uno_Type__Uno_Reflection_CppField__* __this, ::uType* key, ::uArray* value);
bool Dictionary__Uno_Type__Uno_Reflection_CppField____TryGetValue(Dictionary__Uno_Type__Uno_Reflection_CppField__* __this, ::uType* key, ::uArray** value);
void Dictionary__Uno_Type__Uno_Reflection_CppField____Uno_Collections_ICollection_Add(Dictionary__Uno_Type__Uno_Reflection_CppField__* __this, ::app::Uno::Collections::KeyValuePair__Uno_Type__Uno_Reflection_CppField__ item);
bool Dictionary__Uno_Type__Uno_Reflection_CppField____Uno_Collections_ICollection_Contains(Dictionary__Uno_Type__Uno_Reflection_CppField__* __this, ::app::Uno::Collections::KeyValuePair__Uno_Type__Uno_Reflection_CppField__ item);
bool Dictionary__Uno_Type__Uno_Reflection_CppField____Uno_Collections_ICollection_Remove(Dictionary__Uno_Type__Uno_Reflection_CppField__* __this, ::app::Uno::Collections::KeyValuePair__Uno_Type__Uno_Reflection_CppField__ item);

struct Dictionary__Uno_Type__Uno_Reflection_CppField__ : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::uObject* GetEnumerator_boxed() { return Dictionary__Uno_Type__Uno_Reflection_CppField____GetEnumerator_boxed(this); }
    void _ObjInit() { Dictionary__Uno_Type__Uno_Reflection_CppField_____ObjInit(this); }
    void _ObjInit_1(::uObject* dictionary) { Dictionary__Uno_Type__Uno_Reflection_CppField_____ObjInit_1(this, dictionary); }
    void Add(::uType* key, ::uArray* value) { Dictionary__Uno_Type__Uno_Reflection_CppField____Add(this, key, value); }
    void Clear() { Dictionary__Uno_Type__Uno_Reflection_CppField____Clear(this); }
    bool ContainsKey(::uType* key) { return Dictionary__Uno_Type__Uno_Reflection_CppField____ContainsKey(this, key); }
    int Count() { return Dictionary__Uno_Type__Uno_Reflection_CppField____get_Count(this); }
    ::uArray* Item(::uType* key) { return Dictionary__Uno_Type__Uno_Reflection_CppField____get_Item(this, key); }
    ::app::Uno::Collections::Dictionary2_KeyCollection__Uno_Type__Uno_Reflection_CppField__* Keys() { return Dictionary__Uno_Type__Uno_Reflection_CppField____get_Keys(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppField__* Values() { return Dictionary__Uno_Type__Uno_Reflection_CppField____get_Values(this); }
    ::app::Uno::Collections::Dictionary2_Enumerator__Uno_Type__Uno_Reflection_CppField__ GetEnumerator();
    void Rehash() { Dictionary__Uno_Type__Uno_Reflection_CppField____Rehash(this); }
    bool Remove(::uType* key) { return Dictionary__Uno_Type__Uno_Reflection_CppField____Remove(this, key); }
    void Item(::uType* key, ::uArray* value) { Dictionary__Uno_Type__Uno_Reflection_CppField____set_Item(this, key, value); }
    bool TryGetValue(::uType* key, ::uArray** value) { return Dictionary__Uno_Type__Uno_Reflection_CppField____TryGetValue(this, key, value); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__Uno_Type__Uno_Reflectio-4512f240.h>
#include <app/Uno.Collections.KeyValuePair__Uno_Type__Uno_Reflection_CppField__.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__Uno_Type__Uno_Reflection_CppField__ Dictionary__Uno_Type__Uno_Reflection_CppField__::GetEnumerator() { return Dictionary__Uno_Type__Uno_Reflection_CppField____GetEnumerator(this); }

}}}


#endif
