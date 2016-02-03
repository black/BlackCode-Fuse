// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__FUSE_NODE__BOOL_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__FUSE_NODE__BOOL_H__

#include <app/Uno.Collections.Dictionary2_Bucket__Fuse_Node__bool.h>
#include <app/Uno.Collections.IDictionary__Fuse_Node__bool.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_Fuse_-5eb052e2.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__Fuse_Node__bool; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection__Fuse_Node__bool; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection__Fuse_Node__bool; } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__Fuse_Node__bool; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__Fuse_Node__bool;

struct Dictionary__Fuse_Node__bool__uType : ::uClassType
{
    ::app::Uno::Collections::IDictionary__Fuse_Node__bool __interface_0;
    ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_Fuse_Node_bool_ __interface_1;
};

Dictionary__Fuse_Node__bool__uType* Dictionary__Fuse_Node__bool__typeof();

::uObject* Dictionary__Fuse_Node__bool__GetEnumerator_boxed(Dictionary__Fuse_Node__bool* __this);
void Dictionary__Fuse_Node__bool___ObjInit(Dictionary__Fuse_Node__bool* __this);
void Dictionary__Fuse_Node__bool___ObjInit_1(Dictionary__Fuse_Node__bool* __this, ::uObject* dictionary);
void Dictionary__Fuse_Node__bool__Add(Dictionary__Fuse_Node__bool* __this, ::app::Fuse::Node* key, bool value);
void Dictionary__Fuse_Node__bool__Clear(Dictionary__Fuse_Node__bool* __this);
bool Dictionary__Fuse_Node__bool__ContainsKey(Dictionary__Fuse_Node__bool* __this, ::app::Fuse::Node* key);
int Dictionary__Fuse_Node__bool__get_Count(Dictionary__Fuse_Node__bool* __this);
bool Dictionary__Fuse_Node__bool__get_Item(Dictionary__Fuse_Node__bool* __this, ::app::Fuse::Node* key);
::app::Uno::Collections::Dictionary2_KeyCollection__Fuse_Node__bool* Dictionary__Fuse_Node__bool__get_Keys(Dictionary__Fuse_Node__bool* __this);
::app::Uno::Collections::Dictionary2_ValueCollection__Fuse_Node__bool* Dictionary__Fuse_Node__bool__get_Values(Dictionary__Fuse_Node__bool* __this);
::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Node__bool Dictionary__Fuse_Node__bool__GetEnumerator(Dictionary__Fuse_Node__bool* __this);
Dictionary__Fuse_Node__bool* Dictionary__Fuse_Node__bool__New_1(::uStatic* __this);
Dictionary__Fuse_Node__bool* Dictionary__Fuse_Node__bool__New_2(::uStatic* __this, ::uObject* dictionary);
void Dictionary__Fuse_Node__bool__Rehash(Dictionary__Fuse_Node__bool* __this);
bool Dictionary__Fuse_Node__bool__Remove(Dictionary__Fuse_Node__bool* __this, ::app::Fuse::Node* key);
void Dictionary__Fuse_Node__bool__set_Item(Dictionary__Fuse_Node__bool* __this, ::app::Fuse::Node* key, bool value);
bool Dictionary__Fuse_Node__bool__TryGetValue(Dictionary__Fuse_Node__bool* __this, ::app::Fuse::Node* key, bool* value);
void Dictionary__Fuse_Node__bool__Uno_Collections_ICollection_Add(Dictionary__Fuse_Node__bool* __this, ::app::Uno::Collections::KeyValuePair__Fuse_Node__bool item);
bool Dictionary__Fuse_Node__bool__Uno_Collections_ICollection_Contains(Dictionary__Fuse_Node__bool* __this, ::app::Uno::Collections::KeyValuePair__Fuse_Node__bool item);
bool Dictionary__Fuse_Node__bool__Uno_Collections_ICollection_Remove(Dictionary__Fuse_Node__bool* __this, ::app::Uno::Collections::KeyValuePair__Fuse_Node__bool item);

struct Dictionary__Fuse_Node__bool : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::uObject* GetEnumerator_boxed() { return Dictionary__Fuse_Node__bool__GetEnumerator_boxed(this); }
    void _ObjInit() { Dictionary__Fuse_Node__bool___ObjInit(this); }
    void _ObjInit_1(::uObject* dictionary) { Dictionary__Fuse_Node__bool___ObjInit_1(this, dictionary); }
    void Add(::app::Fuse::Node* key, bool value) { Dictionary__Fuse_Node__bool__Add(this, key, value); }
    void Clear() { Dictionary__Fuse_Node__bool__Clear(this); }
    bool ContainsKey(::app::Fuse::Node* key) { return Dictionary__Fuse_Node__bool__ContainsKey(this, key); }
    int Count() { return Dictionary__Fuse_Node__bool__get_Count(this); }
    bool Item(::app::Fuse::Node* key) { return Dictionary__Fuse_Node__bool__get_Item(this, key); }
    ::app::Uno::Collections::Dictionary2_KeyCollection__Fuse_Node__bool* Keys() { return Dictionary__Fuse_Node__bool__get_Keys(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection__Fuse_Node__bool* Values() { return Dictionary__Fuse_Node__bool__get_Values(this); }
    ::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Node__bool GetEnumerator();
    void Rehash() { Dictionary__Fuse_Node__bool__Rehash(this); }
    bool Remove(::app::Fuse::Node* key) { return Dictionary__Fuse_Node__bool__Remove(this, key); }
    void Item(::app::Fuse::Node* key, bool value) { Dictionary__Fuse_Node__bool__set_Item(this, key, value); }
    bool TryGetValue(::app::Fuse::Node* key, bool* value) { return Dictionary__Fuse_Node__bool__TryGetValue(this, key, value); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__Fuse_Node__bool.h>
#include <app/Uno.Collections.KeyValuePair__Fuse_Node__bool.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Node__bool Dictionary__Fuse_Node__bool::GetEnumerator() { return Dictionary__Fuse_Node__bool__GetEnumerator(this); }

}}}


#endif
