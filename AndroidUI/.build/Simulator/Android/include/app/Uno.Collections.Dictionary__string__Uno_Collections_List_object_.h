// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__STRING__UNO_COLLECTIONS_LIST_OBJECT__H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__STRING__UNO_COLLECTIONS_LIST_OBJECT__H__

#include <app/Uno.Collections.Dictionary2_Bucket__string__Uno_Collections_List_object_.h>
#include <app/Uno.Collections.IDictionary__string__Uno_Collections_List_object_.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_strin-bae64895.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__string__Uno_Collections_List_object_; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection__string__Uno_Collections_List_object_; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection__string__Uno_Collections_List_object_; } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__string__Uno_Collections_List_object_; } } }
namespace app { namespace Uno { namespace Collections { struct List__object; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__string__Uno_Collections_List_object_;

struct Dictionary__string__Uno_Collections_List_object___uType : ::uClassType
{
    ::app::Uno::Collections::IDictionary__string__Uno_Collections_List_object_ __interface_0;
    ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_string_Uno_Collections_List_object__ __interface_1;
};

Dictionary__string__Uno_Collections_List_object___uType* Dictionary__string__Uno_Collections_List_object___typeof();

::uObject* Dictionary__string__Uno_Collections_List_object___GetEnumerator_boxed(Dictionary__string__Uno_Collections_List_object_* __this);
void Dictionary__string__Uno_Collections_List_object____ObjInit(Dictionary__string__Uno_Collections_List_object_* __this);
void Dictionary__string__Uno_Collections_List_object____ObjInit_1(Dictionary__string__Uno_Collections_List_object_* __this, ::uObject* dictionary);
void Dictionary__string__Uno_Collections_List_object___Add(Dictionary__string__Uno_Collections_List_object_* __this, ::uString* key, ::app::Uno::Collections::List__object* value);
void Dictionary__string__Uno_Collections_List_object___Clear(Dictionary__string__Uno_Collections_List_object_* __this);
bool Dictionary__string__Uno_Collections_List_object___ContainsKey(Dictionary__string__Uno_Collections_List_object_* __this, ::uString* key);
int Dictionary__string__Uno_Collections_List_object___get_Count(Dictionary__string__Uno_Collections_List_object_* __this);
::app::Uno::Collections::List__object* Dictionary__string__Uno_Collections_List_object___get_Item(Dictionary__string__Uno_Collections_List_object_* __this, ::uString* key);
::app::Uno::Collections::Dictionary2_KeyCollection__string__Uno_Collections_List_object_* Dictionary__string__Uno_Collections_List_object___get_Keys(Dictionary__string__Uno_Collections_List_object_* __this);
::app::Uno::Collections::Dictionary2_ValueCollection__string__Uno_Collections_List_object_* Dictionary__string__Uno_Collections_List_object___get_Values(Dictionary__string__Uno_Collections_List_object_* __this);
::app::Uno::Collections::Dictionary2_Enumerator__string__Uno_Collections_List_object_ Dictionary__string__Uno_Collections_List_object___GetEnumerator(Dictionary__string__Uno_Collections_List_object_* __this);
Dictionary__string__Uno_Collections_List_object_* Dictionary__string__Uno_Collections_List_object___New_1(::uStatic* __this);
Dictionary__string__Uno_Collections_List_object_* Dictionary__string__Uno_Collections_List_object___New_2(::uStatic* __this, ::uObject* dictionary);
void Dictionary__string__Uno_Collections_List_object___Rehash(Dictionary__string__Uno_Collections_List_object_* __this);
bool Dictionary__string__Uno_Collections_List_object___Remove(Dictionary__string__Uno_Collections_List_object_* __this, ::uString* key);
void Dictionary__string__Uno_Collections_List_object___set_Item(Dictionary__string__Uno_Collections_List_object_* __this, ::uString* key, ::app::Uno::Collections::List__object* value);
bool Dictionary__string__Uno_Collections_List_object___TryGetValue(Dictionary__string__Uno_Collections_List_object_* __this, ::uString* key, ::app::Uno::Collections::List__object** value);
void Dictionary__string__Uno_Collections_List_object___Uno_Collections_ICollection_Add(Dictionary__string__Uno_Collections_List_object_* __this, ::app::Uno::Collections::KeyValuePair__string__Uno_Collections_List_object_ item);
bool Dictionary__string__Uno_Collections_List_object___Uno_Collections_ICollection_Contains(Dictionary__string__Uno_Collections_List_object_* __this, ::app::Uno::Collections::KeyValuePair__string__Uno_Collections_List_object_ item);
bool Dictionary__string__Uno_Collections_List_object___Uno_Collections_ICollection_Remove(Dictionary__string__Uno_Collections_List_object_* __this, ::app::Uno::Collections::KeyValuePair__string__Uno_Collections_List_object_ item);

struct Dictionary__string__Uno_Collections_List_object_ : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::uObject* GetEnumerator_boxed() { return Dictionary__string__Uno_Collections_List_object___GetEnumerator_boxed(this); }
    void _ObjInit() { Dictionary__string__Uno_Collections_List_object____ObjInit(this); }
    void _ObjInit_1(::uObject* dictionary) { Dictionary__string__Uno_Collections_List_object____ObjInit_1(this, dictionary); }
    void Add(::uString* key, ::app::Uno::Collections::List__object* value) { Dictionary__string__Uno_Collections_List_object___Add(this, key, value); }
    void Clear() { Dictionary__string__Uno_Collections_List_object___Clear(this); }
    bool ContainsKey(::uString* key) { return Dictionary__string__Uno_Collections_List_object___ContainsKey(this, key); }
    int Count() { return Dictionary__string__Uno_Collections_List_object___get_Count(this); }
    ::app::Uno::Collections::List__object* Item(::uString* key) { return Dictionary__string__Uno_Collections_List_object___get_Item(this, key); }
    ::app::Uno::Collections::Dictionary2_KeyCollection__string__Uno_Collections_List_object_* Keys() { return Dictionary__string__Uno_Collections_List_object___get_Keys(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection__string__Uno_Collections_List_object_* Values() { return Dictionary__string__Uno_Collections_List_object___get_Values(this); }
    ::app::Uno::Collections::Dictionary2_Enumerator__string__Uno_Collections_List_object_ GetEnumerator();
    void Rehash() { Dictionary__string__Uno_Collections_List_object___Rehash(this); }
    bool Remove(::uString* key) { return Dictionary__string__Uno_Collections_List_object___Remove(this, key); }
    void Item(::uString* key, ::app::Uno::Collections::List__object* value) { Dictionary__string__Uno_Collections_List_object___set_Item(this, key, value); }
    bool TryGetValue(::uString* key, ::app::Uno::Collections::List__object** value) { return Dictionary__string__Uno_Collections_List_object___TryGetValue(this, key, value); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__string__Uno_Collections-1df2e5ac.h>
#include <app/Uno.Collections.KeyValuePair__string__Uno_Collections_List_object_.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__string__Uno_Collections_List_object_ Dictionary__string__Uno_Collections_List_object_::GetEnumerator() { return Dictionary__string__Uno_Collections_List_object___GetEnumerator(this); }

}}}


#endif
