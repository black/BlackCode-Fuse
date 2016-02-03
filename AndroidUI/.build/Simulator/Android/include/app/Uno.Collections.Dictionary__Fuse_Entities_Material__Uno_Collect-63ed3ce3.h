// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__FUSE_ENTITIES_MATERIAL__UNO_COLLECT_63ED3CE3_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__FUSE_ENTITIES_MATERIAL__UNO_COLLECT_63ED3CE3_H__

#include <app/Uno.Collections.Dictionary2_Bucket__Fuse_Entities_Material__Uno-a4bda65a.h>
#include <app/Uno.Collections.IDictionary__Fuse_Entities_Material__Uno_Collec-c8cab545.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_Fuse_-9a42b027.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Entities { struct Material; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_; } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Entities_Entry; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_;

struct Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___uType : ::uClassType
{
    ::app::Uno::Collections::IDictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_ __interface_0;
    ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_Fuse_Entities_Material_Uno_Collections_List_Fuse_Entities_Entry__ __interface_1;
};

Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___uType* Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___typeof();

::uObject* Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___GetEnumerator_boxed(Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this);
void Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry____ObjInit(Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this);
void Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry____ObjInit_1(Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this, ::uObject* dictionary);
void Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___Add(Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this, ::app::Fuse::Entities::Material* key, ::app::Uno::Collections::List__Fuse_Entities_Entry* value);
void Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___Clear(Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this);
bool Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___ContainsKey(Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this, ::app::Fuse::Entities::Material* key);
int Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___get_Count(Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this);
::app::Uno::Collections::List__Fuse_Entities_Entry* Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___get_Item(Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this, ::app::Fuse::Entities::Material* key);
::app::Uno::Collections::Dictionary2_KeyCollection__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___get_Keys(Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this);
::app::Uno::Collections::Dictionary2_ValueCollection__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___get_Values(Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this);
::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_ Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___GetEnumerator(Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this);
Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___New_1(::uStatic* __this);
Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___New_2(::uStatic* __this, ::uObject* dictionary);
void Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___Rehash(Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this);
bool Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___Remove(Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this, ::app::Fuse::Entities::Material* key);
void Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___set_Item(Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this, ::app::Fuse::Entities::Material* key, ::app::Uno::Collections::List__Fuse_Entities_Entry* value);
bool Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___TryGetValue(Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this, ::app::Fuse::Entities::Material* key, ::app::Uno::Collections::List__Fuse_Entities_Entry** value);
void Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___Uno_Collections_ICollection_Add(Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this, ::app::Uno::Collections::KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_ item);
bool Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___Uno_Collections_ICollection_Contains(Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this, ::app::Uno::Collections::KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_ item);
bool Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___Uno_Collections_ICollection_Remove(Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this, ::app::Uno::Collections::KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_ item);

struct Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_ : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::uObject* GetEnumerator_boxed() { return Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___GetEnumerator_boxed(this); }
    void _ObjInit() { Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry____ObjInit(this); }
    void _ObjInit_1(::uObject* dictionary) { Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry____ObjInit_1(this, dictionary); }
    void Add(::app::Fuse::Entities::Material* key, ::app::Uno::Collections::List__Fuse_Entities_Entry* value) { Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___Add(this, key, value); }
    void Clear() { Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___Clear(this); }
    bool ContainsKey(::app::Fuse::Entities::Material* key) { return Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___ContainsKey(this, key); }
    int Count() { return Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___get_Count(this); }
    ::app::Uno::Collections::List__Fuse_Entities_Entry* Item(::app::Fuse::Entities::Material* key) { return Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___get_Item(this, key); }
    ::app::Uno::Collections::Dictionary2_KeyCollection__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* Keys() { return Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___get_Keys(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* Values() { return Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___get_Values(this); }
    ::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_ GetEnumerator();
    void Rehash() { Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___Rehash(this); }
    bool Remove(::app::Fuse::Entities::Material* key) { return Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___Remove(this, key); }
    void Item(::app::Fuse::Entities::Material* key, ::app::Uno::Collections::List__Fuse_Entities_Entry* value) { Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___set_Item(this, key, value); }
    bool TryGetValue(::app::Fuse::Entities::Material* key, ::app::Uno::Collections::List__Fuse_Entities_Entry** value) { return Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___TryGetValue(this, key, value); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__Fuse_Entities_Material_-dc457606.h>
#include <app/Uno.Collections.KeyValuePair__Fuse_Entities_Material__Uno_Colle-c68f1aae.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_ Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_::GetEnumerator() { return Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___GetEnumerator(this); }

}}}


#endif
