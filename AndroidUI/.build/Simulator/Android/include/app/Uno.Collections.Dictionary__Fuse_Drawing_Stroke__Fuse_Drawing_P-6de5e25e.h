// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__FUSE_DRAWING_STROKE__FUSE_DRAWING_P_6DE5E25E_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__FUSE_DRAWING_STROKE__FUSE_DRAWING_P_6DE5E25E_H__

#include <app/Uno.Collections.Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_D-87503785.h>
#include <app/Uno.Collections.IDictionary__Fuse_Drawing_Stroke__Fuse_Drawing_-131b9175.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_Fuse_-c71160fe.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct PolygonFiller; } } }
namespace app { namespace Fuse { namespace Drawing { struct Stroke; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller; } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller;

struct Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType : ::uClassType
{
    ::app::Uno::Collections::IDictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller __interface_0;
    ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_Fuse_Drawing_Stroke_Fuse_Drawing_PolygonFiller_ __interface_1;
};

Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType* Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__typeof();

::uObject* Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__GetEnumerator_boxed(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this);
void Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller___ObjInit(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this);
void Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller___ObjInit_1(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this, ::uObject* dictionary);
void Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Add(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this, ::app::Fuse::Drawing::Stroke* key, ::app::Fuse::Drawing::PolygonFiller* value);
void Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Clear(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this);
bool Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__ContainsKey(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this, ::app::Fuse::Drawing::Stroke* key);
int Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__get_Count(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this);
::app::Fuse::Drawing::PolygonFiller* Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__get_Item(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this, ::app::Fuse::Drawing::Stroke* key);
::app::Uno::Collections::Dictionary2_KeyCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__get_Keys(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this);
::app::Uno::Collections::Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__get_Values(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this);
::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__GetEnumerator(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this);
Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__New_1(::uStatic* __this);
Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__New_2(::uStatic* __this, ::uObject* dictionary);
void Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Rehash(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this);
bool Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Remove(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this, ::app::Fuse::Drawing::Stroke* key);
void Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__set_Item(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this, ::app::Fuse::Drawing::Stroke* key, ::app::Fuse::Drawing::PolygonFiller* value);
bool Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__TryGetValue(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this, ::app::Fuse::Drawing::Stroke* key, ::app::Fuse::Drawing::PolygonFiller** value);
void Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Uno_Collections_ICollection_Add(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this, ::app::Uno::Collections::KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller item);
bool Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Uno_Collections_ICollection_Contains(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this, ::app::Uno::Collections::KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller item);
bool Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Uno_Collections_ICollection_Remove(Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this, ::app::Uno::Collections::KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller item);

struct Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::uObject* GetEnumerator_boxed() { return Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__GetEnumerator_boxed(this); }
    void _ObjInit() { Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller___ObjInit(this); }
    void _ObjInit_1(::uObject* dictionary) { Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller___ObjInit_1(this, dictionary); }
    void Add(::app::Fuse::Drawing::Stroke* key, ::app::Fuse::Drawing::PolygonFiller* value) { Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Add(this, key, value); }
    void Clear() { Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Clear(this); }
    bool ContainsKey(::app::Fuse::Drawing::Stroke* key) { return Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__ContainsKey(this, key); }
    int Count() { return Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__get_Count(this); }
    ::app::Fuse::Drawing::PolygonFiller* Item(::app::Fuse::Drawing::Stroke* key) { return Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__get_Item(this, key); }
    ::app::Uno::Collections::Dictionary2_KeyCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* Keys() { return Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__get_Keys(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* Values() { return Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__get_Values(this); }
    ::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller GetEnumerator();
    void Rehash() { Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Rehash(this); }
    bool Remove(::app::Fuse::Drawing::Stroke* key) { return Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Remove(this, key); }
    void Item(::app::Fuse::Drawing::Stroke* key, ::app::Fuse::Drawing::PolygonFiller* value) { Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__set_Item(this, key, value); }
    bool TryGetValue(::app::Fuse::Drawing::Stroke* key, ::app::Fuse::Drawing::PolygonFiller** value) { return Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__TryGetValue(this, key, value); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fu-c71ae2e8.h>
#include <app/Uno.Collections.KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing-1cd47656.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller::GetEnumerator() { return Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__GetEnumerator(this); }

}}}


#endif
