// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__UNO_TYPE__UNO_REFLECTION_CPP_FUNCTION___H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__UNO_TYPE__UNO_REFLECTION_CPP_FUNCTION___H__

#include <app/Uno.Collections.Dictionary2_Bucket__Uno_Type__Uno_Reflection_Cp-e1a02d8d.h>
#include <app/Uno.Collections.IDictionary__Uno_Type__Uno_Reflection_CppFunction__.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_Uno_T-8dfc36f8.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__Uno_Type__Uno_Reflection_CppFunction__; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection__Uno_Type__Uno_Reflection_CppFunction__; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction__; } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__Uno_Type__Uno_Reflection_CppFunction__; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__Uno_Type__Uno_Reflection_CppFunction__;

struct Dictionary__Uno_Type__Uno_Reflection_CppFunction____uType : ::uClassType
{
    ::app::Uno::Collections::IDictionary__Uno_Type__Uno_Reflection_CppFunction__ __interface_0;
    ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_Uno_Type_Uno_Reflection_CppFunction___ __interface_1;
};

Dictionary__Uno_Type__Uno_Reflection_CppFunction____uType* Dictionary__Uno_Type__Uno_Reflection_CppFunction____typeof();

::uObject* Dictionary__Uno_Type__Uno_Reflection_CppFunction____GetEnumerator_boxed(Dictionary__Uno_Type__Uno_Reflection_CppFunction__* __this);
void Dictionary__Uno_Type__Uno_Reflection_CppFunction_____ObjInit(Dictionary__Uno_Type__Uno_Reflection_CppFunction__* __this);
void Dictionary__Uno_Type__Uno_Reflection_CppFunction_____ObjInit_1(Dictionary__Uno_Type__Uno_Reflection_CppFunction__* __this, ::uObject* dictionary);
void Dictionary__Uno_Type__Uno_Reflection_CppFunction____Add(Dictionary__Uno_Type__Uno_Reflection_CppFunction__* __this, ::uType* key, ::uArray* value);
void Dictionary__Uno_Type__Uno_Reflection_CppFunction____Clear(Dictionary__Uno_Type__Uno_Reflection_CppFunction__* __this);
bool Dictionary__Uno_Type__Uno_Reflection_CppFunction____ContainsKey(Dictionary__Uno_Type__Uno_Reflection_CppFunction__* __this, ::uType* key);
int Dictionary__Uno_Type__Uno_Reflection_CppFunction____get_Count(Dictionary__Uno_Type__Uno_Reflection_CppFunction__* __this);
::uArray* Dictionary__Uno_Type__Uno_Reflection_CppFunction____get_Item(Dictionary__Uno_Type__Uno_Reflection_CppFunction__* __this, ::uType* key);
::app::Uno::Collections::Dictionary2_KeyCollection__Uno_Type__Uno_Reflection_CppFunction__* Dictionary__Uno_Type__Uno_Reflection_CppFunction____get_Keys(Dictionary__Uno_Type__Uno_Reflection_CppFunction__* __this);
::app::Uno::Collections::Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction__* Dictionary__Uno_Type__Uno_Reflection_CppFunction____get_Values(Dictionary__Uno_Type__Uno_Reflection_CppFunction__* __this);
::app::Uno::Collections::Dictionary2_Enumerator__Uno_Type__Uno_Reflection_CppFunction__ Dictionary__Uno_Type__Uno_Reflection_CppFunction____GetEnumerator(Dictionary__Uno_Type__Uno_Reflection_CppFunction__* __this);
Dictionary__Uno_Type__Uno_Reflection_CppFunction__* Dictionary__Uno_Type__Uno_Reflection_CppFunction____New_1(::uStatic* __this);
Dictionary__Uno_Type__Uno_Reflection_CppFunction__* Dictionary__Uno_Type__Uno_Reflection_CppFunction____New_2(::uStatic* __this, ::uObject* dictionary);
void Dictionary__Uno_Type__Uno_Reflection_CppFunction____Rehash(Dictionary__Uno_Type__Uno_Reflection_CppFunction__* __this);
bool Dictionary__Uno_Type__Uno_Reflection_CppFunction____Remove(Dictionary__Uno_Type__Uno_Reflection_CppFunction__* __this, ::uType* key);
void Dictionary__Uno_Type__Uno_Reflection_CppFunction____set_Item(Dictionary__Uno_Type__Uno_Reflection_CppFunction__* __this, ::uType* key, ::uArray* value);
bool Dictionary__Uno_Type__Uno_Reflection_CppFunction____TryGetValue(Dictionary__Uno_Type__Uno_Reflection_CppFunction__* __this, ::uType* key, ::uArray** value);
void Dictionary__Uno_Type__Uno_Reflection_CppFunction____Uno_Collections_ICollection_Add(Dictionary__Uno_Type__Uno_Reflection_CppFunction__* __this, ::app::Uno::Collections::KeyValuePair__Uno_Type__Uno_Reflection_CppFunction__ item);
bool Dictionary__Uno_Type__Uno_Reflection_CppFunction____Uno_Collections_ICollection_Contains(Dictionary__Uno_Type__Uno_Reflection_CppFunction__* __this, ::app::Uno::Collections::KeyValuePair__Uno_Type__Uno_Reflection_CppFunction__ item);
bool Dictionary__Uno_Type__Uno_Reflection_CppFunction____Uno_Collections_ICollection_Remove(Dictionary__Uno_Type__Uno_Reflection_CppFunction__* __this, ::app::Uno::Collections::KeyValuePair__Uno_Type__Uno_Reflection_CppFunction__ item);

struct Dictionary__Uno_Type__Uno_Reflection_CppFunction__ : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::uObject* GetEnumerator_boxed() { return Dictionary__Uno_Type__Uno_Reflection_CppFunction____GetEnumerator_boxed(this); }
    void _ObjInit() { Dictionary__Uno_Type__Uno_Reflection_CppFunction_____ObjInit(this); }
    void _ObjInit_1(::uObject* dictionary) { Dictionary__Uno_Type__Uno_Reflection_CppFunction_____ObjInit_1(this, dictionary); }
    void Add(::uType* key, ::uArray* value) { Dictionary__Uno_Type__Uno_Reflection_CppFunction____Add(this, key, value); }
    void Clear() { Dictionary__Uno_Type__Uno_Reflection_CppFunction____Clear(this); }
    bool ContainsKey(::uType* key) { return Dictionary__Uno_Type__Uno_Reflection_CppFunction____ContainsKey(this, key); }
    int Count() { return Dictionary__Uno_Type__Uno_Reflection_CppFunction____get_Count(this); }
    ::uArray* Item(::uType* key) { return Dictionary__Uno_Type__Uno_Reflection_CppFunction____get_Item(this, key); }
    ::app::Uno::Collections::Dictionary2_KeyCollection__Uno_Type__Uno_Reflection_CppFunction__* Keys() { return Dictionary__Uno_Type__Uno_Reflection_CppFunction____get_Keys(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction__* Values() { return Dictionary__Uno_Type__Uno_Reflection_CppFunction____get_Values(this); }
    ::app::Uno::Collections::Dictionary2_Enumerator__Uno_Type__Uno_Reflection_CppFunction__ GetEnumerator();
    void Rehash() { Dictionary__Uno_Type__Uno_Reflection_CppFunction____Rehash(this); }
    bool Remove(::uType* key) { return Dictionary__Uno_Type__Uno_Reflection_CppFunction____Remove(this, key); }
    void Item(::uType* key, ::uArray* value) { Dictionary__Uno_Type__Uno_Reflection_CppFunction____set_Item(this, key, value); }
    bool TryGetValue(::uType* key, ::uArray** value) { return Dictionary__Uno_Type__Uno_Reflection_CppFunction____TryGetValue(this, key, value); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__Uno_Type__Uno_Reflectio-6dbba2f4.h>
#include <app/Uno.Collections.KeyValuePair__Uno_Type__Uno_Reflection_CppFunction__.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__Uno_Type__Uno_Reflection_CppFunction__ Dictionary__Uno_Type__Uno_Reflection_CppFunction__::GetEnumerator() { return Dictionary__Uno_Type__Uno_Reflection_CppFunction____GetEnumerator(this); }

}}}


#endif
