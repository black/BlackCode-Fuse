// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__INT__FUSE_INPUT_POINTER_POINTER_RECORD_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__INT__FUSE_INPUT_POINTER_POINTER_RECORD_H__

#include <app/Uno.Collections.Dictionary2_Bucket__int__Fuse_Input_Pointer_Poi-e3059561.h>
#include <app/Uno.Collections.IDictionary__int__Fuse_Input_Pointer_PointerRecord.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_int_F-9f259204.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct Pointer_PointerRecord; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection__int__Fuse_Input_Pointer_PointerRecord; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection__int__Fuse_Input_Pointer_PointerRecord; } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__int__Fuse_Input_Pointer_PointerRecord; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__int__Fuse_Input_Pointer_PointerRecord;

struct Dictionary__int__Fuse_Input_Pointer_PointerRecord__uType : ::uClassType
{
    ::app::Uno::Collections::IDictionary__int__Fuse_Input_Pointer_PointerRecord __interface_0;
    ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_int_Fuse_Input_Pointer_PointerRecord_ __interface_1;
};

Dictionary__int__Fuse_Input_Pointer_PointerRecord__uType* Dictionary__int__Fuse_Input_Pointer_PointerRecord__typeof();

::uObject* Dictionary__int__Fuse_Input_Pointer_PointerRecord__GetEnumerator_boxed(Dictionary__int__Fuse_Input_Pointer_PointerRecord* __this);
void Dictionary__int__Fuse_Input_Pointer_PointerRecord___ObjInit(Dictionary__int__Fuse_Input_Pointer_PointerRecord* __this);
void Dictionary__int__Fuse_Input_Pointer_PointerRecord___ObjInit_1(Dictionary__int__Fuse_Input_Pointer_PointerRecord* __this, ::uObject* dictionary);
void Dictionary__int__Fuse_Input_Pointer_PointerRecord__Add(Dictionary__int__Fuse_Input_Pointer_PointerRecord* __this, int key, ::app::Fuse::Input::Pointer_PointerRecord* value);
void Dictionary__int__Fuse_Input_Pointer_PointerRecord__Clear(Dictionary__int__Fuse_Input_Pointer_PointerRecord* __this);
bool Dictionary__int__Fuse_Input_Pointer_PointerRecord__ContainsKey(Dictionary__int__Fuse_Input_Pointer_PointerRecord* __this, int key);
int Dictionary__int__Fuse_Input_Pointer_PointerRecord__get_Count(Dictionary__int__Fuse_Input_Pointer_PointerRecord* __this);
::app::Fuse::Input::Pointer_PointerRecord* Dictionary__int__Fuse_Input_Pointer_PointerRecord__get_Item(Dictionary__int__Fuse_Input_Pointer_PointerRecord* __this, int key);
::app::Uno::Collections::Dictionary2_KeyCollection__int__Fuse_Input_Pointer_PointerRecord* Dictionary__int__Fuse_Input_Pointer_PointerRecord__get_Keys(Dictionary__int__Fuse_Input_Pointer_PointerRecord* __this);
::app::Uno::Collections::Dictionary2_ValueCollection__int__Fuse_Input_Pointer_PointerRecord* Dictionary__int__Fuse_Input_Pointer_PointerRecord__get_Values(Dictionary__int__Fuse_Input_Pointer_PointerRecord* __this);
::app::Uno::Collections::Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord Dictionary__int__Fuse_Input_Pointer_PointerRecord__GetEnumerator(Dictionary__int__Fuse_Input_Pointer_PointerRecord* __this);
Dictionary__int__Fuse_Input_Pointer_PointerRecord* Dictionary__int__Fuse_Input_Pointer_PointerRecord__New_1(::uStatic* __this);
Dictionary__int__Fuse_Input_Pointer_PointerRecord* Dictionary__int__Fuse_Input_Pointer_PointerRecord__New_2(::uStatic* __this, ::uObject* dictionary);
void Dictionary__int__Fuse_Input_Pointer_PointerRecord__Rehash(Dictionary__int__Fuse_Input_Pointer_PointerRecord* __this);
bool Dictionary__int__Fuse_Input_Pointer_PointerRecord__Remove(Dictionary__int__Fuse_Input_Pointer_PointerRecord* __this, int key);
void Dictionary__int__Fuse_Input_Pointer_PointerRecord__set_Item(Dictionary__int__Fuse_Input_Pointer_PointerRecord* __this, int key, ::app::Fuse::Input::Pointer_PointerRecord* value);
bool Dictionary__int__Fuse_Input_Pointer_PointerRecord__TryGetValue(Dictionary__int__Fuse_Input_Pointer_PointerRecord* __this, int key, ::app::Fuse::Input::Pointer_PointerRecord** value);
void Dictionary__int__Fuse_Input_Pointer_PointerRecord__Uno_Collections_ICollection_Add(Dictionary__int__Fuse_Input_Pointer_PointerRecord* __this, ::app::Uno::Collections::KeyValuePair__int__Fuse_Input_Pointer_PointerRecord item);
bool Dictionary__int__Fuse_Input_Pointer_PointerRecord__Uno_Collections_ICollection_Contains(Dictionary__int__Fuse_Input_Pointer_PointerRecord* __this, ::app::Uno::Collections::KeyValuePair__int__Fuse_Input_Pointer_PointerRecord item);
bool Dictionary__int__Fuse_Input_Pointer_PointerRecord__Uno_Collections_ICollection_Remove(Dictionary__int__Fuse_Input_Pointer_PointerRecord* __this, ::app::Uno::Collections::KeyValuePair__int__Fuse_Input_Pointer_PointerRecord item);

struct Dictionary__int__Fuse_Input_Pointer_PointerRecord : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::uObject* GetEnumerator_boxed() { return Dictionary__int__Fuse_Input_Pointer_PointerRecord__GetEnumerator_boxed(this); }
    void _ObjInit() { Dictionary__int__Fuse_Input_Pointer_PointerRecord___ObjInit(this); }
    void _ObjInit_1(::uObject* dictionary) { Dictionary__int__Fuse_Input_Pointer_PointerRecord___ObjInit_1(this, dictionary); }
    void Add(int key, ::app::Fuse::Input::Pointer_PointerRecord* value) { Dictionary__int__Fuse_Input_Pointer_PointerRecord__Add(this, key, value); }
    void Clear() { Dictionary__int__Fuse_Input_Pointer_PointerRecord__Clear(this); }
    bool ContainsKey(int key) { return Dictionary__int__Fuse_Input_Pointer_PointerRecord__ContainsKey(this, key); }
    int Count() { return Dictionary__int__Fuse_Input_Pointer_PointerRecord__get_Count(this); }
    ::app::Fuse::Input::Pointer_PointerRecord* Item(int key) { return Dictionary__int__Fuse_Input_Pointer_PointerRecord__get_Item(this, key); }
    ::app::Uno::Collections::Dictionary2_KeyCollection__int__Fuse_Input_Pointer_PointerRecord* Keys() { return Dictionary__int__Fuse_Input_Pointer_PointerRecord__get_Keys(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection__int__Fuse_Input_Pointer_PointerRecord* Values() { return Dictionary__int__Fuse_Input_Pointer_PointerRecord__get_Values(this); }
    ::app::Uno::Collections::Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord GetEnumerator();
    void Rehash() { Dictionary__int__Fuse_Input_Pointer_PointerRecord__Rehash(this); }
    bool Remove(int key) { return Dictionary__int__Fuse_Input_Pointer_PointerRecord__Remove(this, key); }
    void Item(int key, ::app::Fuse::Input::Pointer_PointerRecord* value) { Dictionary__int__Fuse_Input_Pointer_PointerRecord__set_Item(this, key, value); }
    bool TryGetValue(int key, ::app::Fuse::Input::Pointer_PointerRecord** value) { return Dictionary__int__Fuse_Input_Pointer_PointerRecord__TryGetValue(this, key, value); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__int__Fuse_Input_Pointer-83583531.h>
#include <app/Uno.Collections.KeyValuePair__int__Fuse_Input_Pointer_PointerRecord.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord Dictionary__int__Fuse_Input_Pointer_PointerRecord::GetEnumerator() { return Dictionary__int__Fuse_Input_Pointer_PointerRecord__GetEnumerator(this); }

}}}


#endif
