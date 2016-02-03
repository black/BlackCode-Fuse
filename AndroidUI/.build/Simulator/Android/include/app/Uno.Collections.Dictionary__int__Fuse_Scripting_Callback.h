// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__INT__FUSE_SCRIPTING_CALLBACK_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__INT__FUSE_SCRIPTING_CALLBACK_H__

#include <app/Uno.Collections.Dictionary2_Bucket__int__Fuse_Scripting_Callback.h>
#include <app/Uno.Collections.IDictionary__int__Fuse_Scripting_Callback.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_int_F-715d2050.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__int__Fuse_Scripting_Callback; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection__int__Fuse_Scripting_Callback; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection__int__Fuse_Scripting_Callback; } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__int__Fuse_Scripting_Callback; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__int__Fuse_Scripting_Callback;

struct Dictionary__int__Fuse_Scripting_Callback__uType : ::uClassType
{
    ::app::Uno::Collections::IDictionary__int__Fuse_Scripting_Callback __interface_0;
    ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_int_Fuse_Scripting_Callback_ __interface_1;
};

Dictionary__int__Fuse_Scripting_Callback__uType* Dictionary__int__Fuse_Scripting_Callback__typeof();

::uObject* Dictionary__int__Fuse_Scripting_Callback__GetEnumerator_boxed(Dictionary__int__Fuse_Scripting_Callback* __this);
void Dictionary__int__Fuse_Scripting_Callback___ObjInit(Dictionary__int__Fuse_Scripting_Callback* __this);
void Dictionary__int__Fuse_Scripting_Callback___ObjInit_1(Dictionary__int__Fuse_Scripting_Callback* __this, ::uObject* dictionary);
void Dictionary__int__Fuse_Scripting_Callback__Add(Dictionary__int__Fuse_Scripting_Callback* __this, int key, ::uDelegate* value);
void Dictionary__int__Fuse_Scripting_Callback__Clear(Dictionary__int__Fuse_Scripting_Callback* __this);
bool Dictionary__int__Fuse_Scripting_Callback__ContainsKey(Dictionary__int__Fuse_Scripting_Callback* __this, int key);
int Dictionary__int__Fuse_Scripting_Callback__get_Count(Dictionary__int__Fuse_Scripting_Callback* __this);
::uDelegate* Dictionary__int__Fuse_Scripting_Callback__get_Item(Dictionary__int__Fuse_Scripting_Callback* __this, int key);
::app::Uno::Collections::Dictionary2_KeyCollection__int__Fuse_Scripting_Callback* Dictionary__int__Fuse_Scripting_Callback__get_Keys(Dictionary__int__Fuse_Scripting_Callback* __this);
::app::Uno::Collections::Dictionary2_ValueCollection__int__Fuse_Scripting_Callback* Dictionary__int__Fuse_Scripting_Callback__get_Values(Dictionary__int__Fuse_Scripting_Callback* __this);
::app::Uno::Collections::Dictionary2_Enumerator__int__Fuse_Scripting_Callback Dictionary__int__Fuse_Scripting_Callback__GetEnumerator(Dictionary__int__Fuse_Scripting_Callback* __this);
Dictionary__int__Fuse_Scripting_Callback* Dictionary__int__Fuse_Scripting_Callback__New_1(::uStatic* __this);
Dictionary__int__Fuse_Scripting_Callback* Dictionary__int__Fuse_Scripting_Callback__New_2(::uStatic* __this, ::uObject* dictionary);
void Dictionary__int__Fuse_Scripting_Callback__Rehash(Dictionary__int__Fuse_Scripting_Callback* __this);
bool Dictionary__int__Fuse_Scripting_Callback__Remove(Dictionary__int__Fuse_Scripting_Callback* __this, int key);
void Dictionary__int__Fuse_Scripting_Callback__set_Item(Dictionary__int__Fuse_Scripting_Callback* __this, int key, ::uDelegate* value);
bool Dictionary__int__Fuse_Scripting_Callback__TryGetValue(Dictionary__int__Fuse_Scripting_Callback* __this, int key, ::uDelegate** value);
void Dictionary__int__Fuse_Scripting_Callback__Uno_Collections_ICollection_Add(Dictionary__int__Fuse_Scripting_Callback* __this, ::app::Uno::Collections::KeyValuePair__int__Fuse_Scripting_Callback item);
bool Dictionary__int__Fuse_Scripting_Callback__Uno_Collections_ICollection_Contains(Dictionary__int__Fuse_Scripting_Callback* __this, ::app::Uno::Collections::KeyValuePair__int__Fuse_Scripting_Callback item);
bool Dictionary__int__Fuse_Scripting_Callback__Uno_Collections_ICollection_Remove(Dictionary__int__Fuse_Scripting_Callback* __this, ::app::Uno::Collections::KeyValuePair__int__Fuse_Scripting_Callback item);

struct Dictionary__int__Fuse_Scripting_Callback : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::uObject* GetEnumerator_boxed() { return Dictionary__int__Fuse_Scripting_Callback__GetEnumerator_boxed(this); }
    void _ObjInit() { Dictionary__int__Fuse_Scripting_Callback___ObjInit(this); }
    void _ObjInit_1(::uObject* dictionary) { Dictionary__int__Fuse_Scripting_Callback___ObjInit_1(this, dictionary); }
    void Add(int key, ::uDelegate* value) { Dictionary__int__Fuse_Scripting_Callback__Add(this, key, value); }
    void Clear() { Dictionary__int__Fuse_Scripting_Callback__Clear(this); }
    bool ContainsKey(int key) { return Dictionary__int__Fuse_Scripting_Callback__ContainsKey(this, key); }
    int Count() { return Dictionary__int__Fuse_Scripting_Callback__get_Count(this); }
    ::uDelegate* Item(int key) { return Dictionary__int__Fuse_Scripting_Callback__get_Item(this, key); }
    ::app::Uno::Collections::Dictionary2_KeyCollection__int__Fuse_Scripting_Callback* Keys() { return Dictionary__int__Fuse_Scripting_Callback__get_Keys(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection__int__Fuse_Scripting_Callback* Values() { return Dictionary__int__Fuse_Scripting_Callback__get_Values(this); }
    ::app::Uno::Collections::Dictionary2_Enumerator__int__Fuse_Scripting_Callback GetEnumerator();
    void Rehash() { Dictionary__int__Fuse_Scripting_Callback__Rehash(this); }
    bool Remove(int key) { return Dictionary__int__Fuse_Scripting_Callback__Remove(this, key); }
    void Item(int key, ::uDelegate* value) { Dictionary__int__Fuse_Scripting_Callback__set_Item(this, key, value); }
    bool TryGetValue(int key, ::uDelegate** value) { return Dictionary__int__Fuse_Scripting_Callback__TryGetValue(this, key, value); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__int__Fuse_Scripting_Callback.h>
#include <app/Uno.Collections.KeyValuePair__int__Fuse_Scripting_Callback.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__int__Fuse_Scripting_Callback Dictionary__int__Fuse_Scripting_Callback::GetEnumerator() { return Dictionary__int__Fuse_Scripting_Callback__GetEnumerator(this); }

}}}


#endif
