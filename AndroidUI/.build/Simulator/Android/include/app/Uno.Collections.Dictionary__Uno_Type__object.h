// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__UNO_TYPE__OBJECT_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__UNO_TYPE__OBJECT_H__

#include <app/Uno.Collections.Dictionary2_Bucket__Uno_Type__object.h>
#include <app/Uno.Collections.IDictionary__Uno_Type__object.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_Uno_T-65ddd6bc.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__Uno_Type__object; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection__Uno_Type__object; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection__Uno_Type__object; } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__Uno_Type__object; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__Uno_Type__object;

struct Dictionary__Uno_Type__object__uType : ::uClassType
{
    ::app::Uno::Collections::IDictionary__Uno_Type__object __interface_0;
    ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_Uno_Type_object_ __interface_1;
};

Dictionary__Uno_Type__object__uType* Dictionary__Uno_Type__object__typeof();

::uObject* Dictionary__Uno_Type__object__GetEnumerator_boxed(Dictionary__Uno_Type__object* __this);
void Dictionary__Uno_Type__object___ObjInit(Dictionary__Uno_Type__object* __this);
void Dictionary__Uno_Type__object___ObjInit_1(Dictionary__Uno_Type__object* __this, ::uObject* dictionary);
void Dictionary__Uno_Type__object__Add(Dictionary__Uno_Type__object* __this, ::uType* key, ::uObject* value);
void Dictionary__Uno_Type__object__Clear(Dictionary__Uno_Type__object* __this);
bool Dictionary__Uno_Type__object__ContainsKey(Dictionary__Uno_Type__object* __this, ::uType* key);
int Dictionary__Uno_Type__object__get_Count(Dictionary__Uno_Type__object* __this);
::uObject* Dictionary__Uno_Type__object__get_Item(Dictionary__Uno_Type__object* __this, ::uType* key);
::app::Uno::Collections::Dictionary2_KeyCollection__Uno_Type__object* Dictionary__Uno_Type__object__get_Keys(Dictionary__Uno_Type__object* __this);
::app::Uno::Collections::Dictionary2_ValueCollection__Uno_Type__object* Dictionary__Uno_Type__object__get_Values(Dictionary__Uno_Type__object* __this);
::app::Uno::Collections::Dictionary2_Enumerator__Uno_Type__object Dictionary__Uno_Type__object__GetEnumerator(Dictionary__Uno_Type__object* __this);
Dictionary__Uno_Type__object* Dictionary__Uno_Type__object__New_1(::uStatic* __this);
Dictionary__Uno_Type__object* Dictionary__Uno_Type__object__New_2(::uStatic* __this, ::uObject* dictionary);
void Dictionary__Uno_Type__object__Rehash(Dictionary__Uno_Type__object* __this);
bool Dictionary__Uno_Type__object__Remove(Dictionary__Uno_Type__object* __this, ::uType* key);
void Dictionary__Uno_Type__object__set_Item(Dictionary__Uno_Type__object* __this, ::uType* key, ::uObject* value);
bool Dictionary__Uno_Type__object__TryGetValue(Dictionary__Uno_Type__object* __this, ::uType* key, ::uObject** value);
void Dictionary__Uno_Type__object__Uno_Collections_ICollection_Add(Dictionary__Uno_Type__object* __this, ::app::Uno::Collections::KeyValuePair__Uno_Type__object item);
bool Dictionary__Uno_Type__object__Uno_Collections_ICollection_Contains(Dictionary__Uno_Type__object* __this, ::app::Uno::Collections::KeyValuePair__Uno_Type__object item);
bool Dictionary__Uno_Type__object__Uno_Collections_ICollection_Remove(Dictionary__Uno_Type__object* __this, ::app::Uno::Collections::KeyValuePair__Uno_Type__object item);

struct Dictionary__Uno_Type__object : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::uObject* GetEnumerator_boxed() { return Dictionary__Uno_Type__object__GetEnumerator_boxed(this); }
    void _ObjInit() { Dictionary__Uno_Type__object___ObjInit(this); }
    void _ObjInit_1(::uObject* dictionary) { Dictionary__Uno_Type__object___ObjInit_1(this, dictionary); }
    void Add(::uType* key, ::uObject* value) { Dictionary__Uno_Type__object__Add(this, key, value); }
    void Clear() { Dictionary__Uno_Type__object__Clear(this); }
    bool ContainsKey(::uType* key) { return Dictionary__Uno_Type__object__ContainsKey(this, key); }
    int Count() { return Dictionary__Uno_Type__object__get_Count(this); }
    ::uObject* Item(::uType* key) { return Dictionary__Uno_Type__object__get_Item(this, key); }
    ::app::Uno::Collections::Dictionary2_KeyCollection__Uno_Type__object* Keys() { return Dictionary__Uno_Type__object__get_Keys(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection__Uno_Type__object* Values() { return Dictionary__Uno_Type__object__get_Values(this); }
    ::app::Uno::Collections::Dictionary2_Enumerator__Uno_Type__object GetEnumerator();
    void Rehash() { Dictionary__Uno_Type__object__Rehash(this); }
    bool Remove(::uType* key) { return Dictionary__Uno_Type__object__Remove(this, key); }
    void Item(::uType* key, ::uObject* value) { Dictionary__Uno_Type__object__set_Item(this, key, value); }
    bool TryGetValue(::uType* key, ::uObject** value) { return Dictionary__Uno_Type__object__TryGetValue(this, key, value); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__Uno_Type__object.h>
#include <app/Uno.Collections.KeyValuePair__Uno_Type__object.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__Uno_Type__object Dictionary__Uno_Type__object::GetEnumerator() { return Dictionary__Uno_Type__object__GetEnumerator(this); }

}}}


#endif
