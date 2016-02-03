// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__INT__FUSE_INPUT_CAPTURER_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__INT__FUSE_INPUT_CAPTURER_H__

#include <app/Uno.Collections.Dictionary2_Bucket__int__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.IDictionary__int__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_int_F-7c4d2954.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct Capturer; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__int__Fuse_Input_Capturer; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection__int__Fuse_Input_Capturer; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection__int__Fuse_Input_Capturer; } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__int__Fuse_Input_Capturer; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__int__Fuse_Input_Capturer;

struct Dictionary__int__Fuse_Input_Capturer__uType : ::uClassType
{
    ::app::Uno::Collections::IDictionary__int__Fuse_Input_Capturer __interface_0;
    ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_int_Fuse_Input_Capturer_ __interface_1;
};

Dictionary__int__Fuse_Input_Capturer__uType* Dictionary__int__Fuse_Input_Capturer__typeof();

::uObject* Dictionary__int__Fuse_Input_Capturer__GetEnumerator_boxed(Dictionary__int__Fuse_Input_Capturer* __this);
void Dictionary__int__Fuse_Input_Capturer___ObjInit(Dictionary__int__Fuse_Input_Capturer* __this);
void Dictionary__int__Fuse_Input_Capturer___ObjInit_1(Dictionary__int__Fuse_Input_Capturer* __this, ::uObject* dictionary);
void Dictionary__int__Fuse_Input_Capturer__Add(Dictionary__int__Fuse_Input_Capturer* __this, int key, ::app::Fuse::Input::Capturer* value);
void Dictionary__int__Fuse_Input_Capturer__Clear(Dictionary__int__Fuse_Input_Capturer* __this);
bool Dictionary__int__Fuse_Input_Capturer__ContainsKey(Dictionary__int__Fuse_Input_Capturer* __this, int key);
int Dictionary__int__Fuse_Input_Capturer__get_Count(Dictionary__int__Fuse_Input_Capturer* __this);
::app::Fuse::Input::Capturer* Dictionary__int__Fuse_Input_Capturer__get_Item(Dictionary__int__Fuse_Input_Capturer* __this, int key);
::app::Uno::Collections::Dictionary2_KeyCollection__int__Fuse_Input_Capturer* Dictionary__int__Fuse_Input_Capturer__get_Keys(Dictionary__int__Fuse_Input_Capturer* __this);
::app::Uno::Collections::Dictionary2_ValueCollection__int__Fuse_Input_Capturer* Dictionary__int__Fuse_Input_Capturer__get_Values(Dictionary__int__Fuse_Input_Capturer* __this);
::app::Uno::Collections::Dictionary2_Enumerator__int__Fuse_Input_Capturer Dictionary__int__Fuse_Input_Capturer__GetEnumerator(Dictionary__int__Fuse_Input_Capturer* __this);
Dictionary__int__Fuse_Input_Capturer* Dictionary__int__Fuse_Input_Capturer__New_1(::uStatic* __this);
Dictionary__int__Fuse_Input_Capturer* Dictionary__int__Fuse_Input_Capturer__New_2(::uStatic* __this, ::uObject* dictionary);
void Dictionary__int__Fuse_Input_Capturer__Rehash(Dictionary__int__Fuse_Input_Capturer* __this);
bool Dictionary__int__Fuse_Input_Capturer__Remove(Dictionary__int__Fuse_Input_Capturer* __this, int key);
void Dictionary__int__Fuse_Input_Capturer__set_Item(Dictionary__int__Fuse_Input_Capturer* __this, int key, ::app::Fuse::Input::Capturer* value);
bool Dictionary__int__Fuse_Input_Capturer__TryGetValue(Dictionary__int__Fuse_Input_Capturer* __this, int key, ::app::Fuse::Input::Capturer** value);
void Dictionary__int__Fuse_Input_Capturer__Uno_Collections_ICollection_Add(Dictionary__int__Fuse_Input_Capturer* __this, ::app::Uno::Collections::KeyValuePair__int__Fuse_Input_Capturer item);
bool Dictionary__int__Fuse_Input_Capturer__Uno_Collections_ICollection_Contains(Dictionary__int__Fuse_Input_Capturer* __this, ::app::Uno::Collections::KeyValuePair__int__Fuse_Input_Capturer item);
bool Dictionary__int__Fuse_Input_Capturer__Uno_Collections_ICollection_Remove(Dictionary__int__Fuse_Input_Capturer* __this, ::app::Uno::Collections::KeyValuePair__int__Fuse_Input_Capturer item);

struct Dictionary__int__Fuse_Input_Capturer : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::uObject* GetEnumerator_boxed() { return Dictionary__int__Fuse_Input_Capturer__GetEnumerator_boxed(this); }
    void _ObjInit() { Dictionary__int__Fuse_Input_Capturer___ObjInit(this); }
    void _ObjInit_1(::uObject* dictionary) { Dictionary__int__Fuse_Input_Capturer___ObjInit_1(this, dictionary); }
    void Add(int key, ::app::Fuse::Input::Capturer* value) { Dictionary__int__Fuse_Input_Capturer__Add(this, key, value); }
    void Clear() { Dictionary__int__Fuse_Input_Capturer__Clear(this); }
    bool ContainsKey(int key) { return Dictionary__int__Fuse_Input_Capturer__ContainsKey(this, key); }
    int Count() { return Dictionary__int__Fuse_Input_Capturer__get_Count(this); }
    ::app::Fuse::Input::Capturer* Item(int key) { return Dictionary__int__Fuse_Input_Capturer__get_Item(this, key); }
    ::app::Uno::Collections::Dictionary2_KeyCollection__int__Fuse_Input_Capturer* Keys() { return Dictionary__int__Fuse_Input_Capturer__get_Keys(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection__int__Fuse_Input_Capturer* Values() { return Dictionary__int__Fuse_Input_Capturer__get_Values(this); }
    ::app::Uno::Collections::Dictionary2_Enumerator__int__Fuse_Input_Capturer GetEnumerator();
    void Rehash() { Dictionary__int__Fuse_Input_Capturer__Rehash(this); }
    bool Remove(int key) { return Dictionary__int__Fuse_Input_Capturer__Remove(this, key); }
    void Item(int key, ::app::Fuse::Input::Capturer* value) { Dictionary__int__Fuse_Input_Capturer__set_Item(this, key, value); }
    bool TryGetValue(int key, ::app::Fuse::Input::Capturer** value) { return Dictionary__int__Fuse_Input_Capturer__TryGetValue(this, key, value); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__int__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.KeyValuePair__int__Fuse_Input_Capturer.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__int__Fuse_Input_Capturer Dictionary__int__Fuse_Input_Capturer::GetEnumerator() { return Dictionary__int__Fuse_Input_Capturer__GetEnumerator(this); }

}}}


#endif
