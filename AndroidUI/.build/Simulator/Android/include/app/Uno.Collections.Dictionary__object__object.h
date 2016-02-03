// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__OBJECT__OBJECT_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__OBJECT__OBJECT_H__

#include <app/Uno.Collections.Dictionary2_Bucket__object__object.h>
#include <app/Uno.Collections.IDictionary__object__object.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_object_object_.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__object__object; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection__object__object; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection__object__object; } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__object__object; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__object__object;

struct Dictionary__object__object__uType : ::uClassType
{
    ::app::Uno::Collections::IDictionary__object__object __interface_0;
    ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_object_object_ __interface_1;
};

Dictionary__object__object__uType* Dictionary__object__object__typeof();

::uObject* Dictionary__object__object__GetEnumerator_boxed(Dictionary__object__object* __this);
void Dictionary__object__object___ObjInit(Dictionary__object__object* __this);
void Dictionary__object__object___ObjInit_1(Dictionary__object__object* __this, ::uObject* dictionary);
void Dictionary__object__object__Add(Dictionary__object__object* __this, ::uObject* key, ::uObject* value);
void Dictionary__object__object__Clear(Dictionary__object__object* __this);
bool Dictionary__object__object__ContainsKey(Dictionary__object__object* __this, ::uObject* key);
int Dictionary__object__object__get_Count(Dictionary__object__object* __this);
::uObject* Dictionary__object__object__get_Item(Dictionary__object__object* __this, ::uObject* key);
::app::Uno::Collections::Dictionary2_KeyCollection__object__object* Dictionary__object__object__get_Keys(Dictionary__object__object* __this);
::app::Uno::Collections::Dictionary2_ValueCollection__object__object* Dictionary__object__object__get_Values(Dictionary__object__object* __this);
::app::Uno::Collections::Dictionary2_Enumerator__object__object Dictionary__object__object__GetEnumerator(Dictionary__object__object* __this);
Dictionary__object__object* Dictionary__object__object__New_1(::uStatic* __this);
Dictionary__object__object* Dictionary__object__object__New_2(::uStatic* __this, ::uObject* dictionary);
void Dictionary__object__object__Rehash(Dictionary__object__object* __this);
bool Dictionary__object__object__Remove(Dictionary__object__object* __this, ::uObject* key);
void Dictionary__object__object__set_Item(Dictionary__object__object* __this, ::uObject* key, ::uObject* value);
bool Dictionary__object__object__TryGetValue(Dictionary__object__object* __this, ::uObject* key, ::uObject** value);
void Dictionary__object__object__Uno_Collections_ICollection_Add(Dictionary__object__object* __this, ::app::Uno::Collections::KeyValuePair__object__object item);
bool Dictionary__object__object__Uno_Collections_ICollection_Contains(Dictionary__object__object* __this, ::app::Uno::Collections::KeyValuePair__object__object item);
bool Dictionary__object__object__Uno_Collections_ICollection_Remove(Dictionary__object__object* __this, ::app::Uno::Collections::KeyValuePair__object__object item);

struct Dictionary__object__object : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::uObject* GetEnumerator_boxed() { return Dictionary__object__object__GetEnumerator_boxed(this); }
    void _ObjInit() { Dictionary__object__object___ObjInit(this); }
    void _ObjInit_1(::uObject* dictionary) { Dictionary__object__object___ObjInit_1(this, dictionary); }
    void Add(::uObject* key, ::uObject* value) { Dictionary__object__object__Add(this, key, value); }
    void Clear() { Dictionary__object__object__Clear(this); }
    bool ContainsKey(::uObject* key) { return Dictionary__object__object__ContainsKey(this, key); }
    int Count() { return Dictionary__object__object__get_Count(this); }
    ::uObject* Item(::uObject* key) { return Dictionary__object__object__get_Item(this, key); }
    ::app::Uno::Collections::Dictionary2_KeyCollection__object__object* Keys() { return Dictionary__object__object__get_Keys(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection__object__object* Values() { return Dictionary__object__object__get_Values(this); }
    ::app::Uno::Collections::Dictionary2_Enumerator__object__object GetEnumerator();
    void Rehash() { Dictionary__object__object__Rehash(this); }
    bool Remove(::uObject* key) { return Dictionary__object__object__Remove(this, key); }
    void Item(::uObject* key, ::uObject* value) { Dictionary__object__object__set_Item(this, key, value); }
    bool TryGetValue(::uObject* key, ::uObject** value) { return Dictionary__object__object__TryGetValue(this, key, value); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__object__object.h>
#include <app/Uno.Collections.KeyValuePair__object__object.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__object__object Dictionary__object__object::GetEnumerator() { return Dictionary__object__object__GetEnumerator(this); }

}}}


#endif
