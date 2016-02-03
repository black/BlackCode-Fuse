// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__STRING__FUSE_SHAPES_GEOMETRY_CACHE_ENTRY_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__STRING__FUSE_SHAPES_GEOMETRY_CACHE_ENTRY_H__

#include <app/Uno.Collections.Dictionary2_Bucket__string__Fuse_Shapes_Geometr-185180f5.h>
#include <app/Uno.Collections.IDictionary__string__Fuse_Shapes_GeometryCacheEntry.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_strin-b1ad0eb2.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Shapes { struct GeometryCacheEntry; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__string__Fuse_Shapes_GeometryCacheEntry; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection__string__Fuse_Shapes_GeometryCacheEntry; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry; } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__string__Fuse_Shapes_GeometryCacheEntry;

struct Dictionary__string__Fuse_Shapes_GeometryCacheEntry__uType : ::uClassType
{
    ::app::Uno::Collections::IDictionary__string__Fuse_Shapes_GeometryCacheEntry __interface_0;
    ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_string_Fuse_Shapes_GeometryCacheEntry_ __interface_1;
};

Dictionary__string__Fuse_Shapes_GeometryCacheEntry__uType* Dictionary__string__Fuse_Shapes_GeometryCacheEntry__typeof();

::uObject* Dictionary__string__Fuse_Shapes_GeometryCacheEntry__GetEnumerator_boxed(Dictionary__string__Fuse_Shapes_GeometryCacheEntry* __this);
void Dictionary__string__Fuse_Shapes_GeometryCacheEntry___ObjInit(Dictionary__string__Fuse_Shapes_GeometryCacheEntry* __this);
void Dictionary__string__Fuse_Shapes_GeometryCacheEntry___ObjInit_1(Dictionary__string__Fuse_Shapes_GeometryCacheEntry* __this, ::uObject* dictionary);
void Dictionary__string__Fuse_Shapes_GeometryCacheEntry__Add(Dictionary__string__Fuse_Shapes_GeometryCacheEntry* __this, ::uString* key, ::app::Fuse::Shapes::GeometryCacheEntry* value);
void Dictionary__string__Fuse_Shapes_GeometryCacheEntry__Clear(Dictionary__string__Fuse_Shapes_GeometryCacheEntry* __this);
bool Dictionary__string__Fuse_Shapes_GeometryCacheEntry__ContainsKey(Dictionary__string__Fuse_Shapes_GeometryCacheEntry* __this, ::uString* key);
int Dictionary__string__Fuse_Shapes_GeometryCacheEntry__get_Count(Dictionary__string__Fuse_Shapes_GeometryCacheEntry* __this);
::app::Fuse::Shapes::GeometryCacheEntry* Dictionary__string__Fuse_Shapes_GeometryCacheEntry__get_Item(Dictionary__string__Fuse_Shapes_GeometryCacheEntry* __this, ::uString* key);
::app::Uno::Collections::Dictionary2_KeyCollection__string__Fuse_Shapes_GeometryCacheEntry* Dictionary__string__Fuse_Shapes_GeometryCacheEntry__get_Keys(Dictionary__string__Fuse_Shapes_GeometryCacheEntry* __this);
::app::Uno::Collections::Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry* Dictionary__string__Fuse_Shapes_GeometryCacheEntry__get_Values(Dictionary__string__Fuse_Shapes_GeometryCacheEntry* __this);
::app::Uno::Collections::Dictionary2_Enumerator__string__Fuse_Shapes_GeometryCacheEntry Dictionary__string__Fuse_Shapes_GeometryCacheEntry__GetEnumerator(Dictionary__string__Fuse_Shapes_GeometryCacheEntry* __this);
Dictionary__string__Fuse_Shapes_GeometryCacheEntry* Dictionary__string__Fuse_Shapes_GeometryCacheEntry__New_1(::uStatic* __this);
Dictionary__string__Fuse_Shapes_GeometryCacheEntry* Dictionary__string__Fuse_Shapes_GeometryCacheEntry__New_2(::uStatic* __this, ::uObject* dictionary);
void Dictionary__string__Fuse_Shapes_GeometryCacheEntry__Rehash(Dictionary__string__Fuse_Shapes_GeometryCacheEntry* __this);
bool Dictionary__string__Fuse_Shapes_GeometryCacheEntry__Remove(Dictionary__string__Fuse_Shapes_GeometryCacheEntry* __this, ::uString* key);
void Dictionary__string__Fuse_Shapes_GeometryCacheEntry__set_Item(Dictionary__string__Fuse_Shapes_GeometryCacheEntry* __this, ::uString* key, ::app::Fuse::Shapes::GeometryCacheEntry* value);
bool Dictionary__string__Fuse_Shapes_GeometryCacheEntry__TryGetValue(Dictionary__string__Fuse_Shapes_GeometryCacheEntry* __this, ::uString* key, ::app::Fuse::Shapes::GeometryCacheEntry** value);
void Dictionary__string__Fuse_Shapes_GeometryCacheEntry__Uno_Collections_ICollection_Add(Dictionary__string__Fuse_Shapes_GeometryCacheEntry* __this, ::app::Uno::Collections::KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry item);
bool Dictionary__string__Fuse_Shapes_GeometryCacheEntry__Uno_Collections_ICollection_Contains(Dictionary__string__Fuse_Shapes_GeometryCacheEntry* __this, ::app::Uno::Collections::KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry item);
bool Dictionary__string__Fuse_Shapes_GeometryCacheEntry__Uno_Collections_ICollection_Remove(Dictionary__string__Fuse_Shapes_GeometryCacheEntry* __this, ::app::Uno::Collections::KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry item);

struct Dictionary__string__Fuse_Shapes_GeometryCacheEntry : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::uObject* GetEnumerator_boxed() { return Dictionary__string__Fuse_Shapes_GeometryCacheEntry__GetEnumerator_boxed(this); }
    void _ObjInit() { Dictionary__string__Fuse_Shapes_GeometryCacheEntry___ObjInit(this); }
    void _ObjInit_1(::uObject* dictionary) { Dictionary__string__Fuse_Shapes_GeometryCacheEntry___ObjInit_1(this, dictionary); }
    void Add(::uString* key, ::app::Fuse::Shapes::GeometryCacheEntry* value) { Dictionary__string__Fuse_Shapes_GeometryCacheEntry__Add(this, key, value); }
    void Clear() { Dictionary__string__Fuse_Shapes_GeometryCacheEntry__Clear(this); }
    bool ContainsKey(::uString* key) { return Dictionary__string__Fuse_Shapes_GeometryCacheEntry__ContainsKey(this, key); }
    int Count() { return Dictionary__string__Fuse_Shapes_GeometryCacheEntry__get_Count(this); }
    ::app::Fuse::Shapes::GeometryCacheEntry* Item(::uString* key) { return Dictionary__string__Fuse_Shapes_GeometryCacheEntry__get_Item(this, key); }
    ::app::Uno::Collections::Dictionary2_KeyCollection__string__Fuse_Shapes_GeometryCacheEntry* Keys() { return Dictionary__string__Fuse_Shapes_GeometryCacheEntry__get_Keys(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry* Values() { return Dictionary__string__Fuse_Shapes_GeometryCacheEntry__get_Values(this); }
    ::app::Uno::Collections::Dictionary2_Enumerator__string__Fuse_Shapes_GeometryCacheEntry GetEnumerator();
    void Rehash() { Dictionary__string__Fuse_Shapes_GeometryCacheEntry__Rehash(this); }
    bool Remove(::uString* key) { return Dictionary__string__Fuse_Shapes_GeometryCacheEntry__Remove(this, key); }
    void Item(::uString* key, ::app::Fuse::Shapes::GeometryCacheEntry* value) { Dictionary__string__Fuse_Shapes_GeometryCacheEntry__set_Item(this, key, value); }
    bool TryGetValue(::uString* key, ::app::Fuse::Shapes::GeometryCacheEntry** value) { return Dictionary__string__Fuse_Shapes_GeometryCacheEntry__TryGetValue(this, key, value); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__string__Fuse_Shapes_Geo-d3e04f9e.h>
#include <app/Uno.Collections.KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__string__Fuse_Shapes_GeometryCacheEntry Dictionary__string__Fuse_Shapes_GeometryCacheEntry::GetEnumerator() { return Dictionary__string__Fuse_Shapes_GeometryCacheEntry__GetEnumerator(this); }

}}}


#endif
