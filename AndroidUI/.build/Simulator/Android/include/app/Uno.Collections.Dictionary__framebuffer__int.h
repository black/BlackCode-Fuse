// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__FRAMEBUFFER__INT_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__FRAMEBUFFER__INT_H__

#include <app/Uno.Collections.Dictionary2_Bucket__framebuffer__int.h>
#include <app/Uno.Collections.IDictionary__framebuffer__int.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_frame-629de1f5.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__framebuffer__int; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection__framebuffer__int; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection__framebuffer__int; } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__framebuffer__int; } } }
namespace app { namespace Uno { namespace Graphics { struct Framebuffer; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__framebuffer__int;

struct Dictionary__framebuffer__int__uType : ::uClassType
{
    ::app::Uno::Collections::IDictionary__framebuffer__int __interface_0;
    ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_framebuffer_int_ __interface_1;
};

Dictionary__framebuffer__int__uType* Dictionary__framebuffer__int__typeof();

::uObject* Dictionary__framebuffer__int__GetEnumerator_boxed(Dictionary__framebuffer__int* __this);
void Dictionary__framebuffer__int___ObjInit(Dictionary__framebuffer__int* __this);
void Dictionary__framebuffer__int___ObjInit_1(Dictionary__framebuffer__int* __this, ::uObject* dictionary);
void Dictionary__framebuffer__int__Add(Dictionary__framebuffer__int* __this, ::app::Uno::Graphics::Framebuffer* key, int value);
void Dictionary__framebuffer__int__Clear(Dictionary__framebuffer__int* __this);
bool Dictionary__framebuffer__int__ContainsKey(Dictionary__framebuffer__int* __this, ::app::Uno::Graphics::Framebuffer* key);
int Dictionary__framebuffer__int__get_Count(Dictionary__framebuffer__int* __this);
int Dictionary__framebuffer__int__get_Item(Dictionary__framebuffer__int* __this, ::app::Uno::Graphics::Framebuffer* key);
::app::Uno::Collections::Dictionary2_KeyCollection__framebuffer__int* Dictionary__framebuffer__int__get_Keys(Dictionary__framebuffer__int* __this);
::app::Uno::Collections::Dictionary2_ValueCollection__framebuffer__int* Dictionary__framebuffer__int__get_Values(Dictionary__framebuffer__int* __this);
::app::Uno::Collections::Dictionary2_Enumerator__framebuffer__int Dictionary__framebuffer__int__GetEnumerator(Dictionary__framebuffer__int* __this);
Dictionary__framebuffer__int* Dictionary__framebuffer__int__New_1(::uStatic* __this);
Dictionary__framebuffer__int* Dictionary__framebuffer__int__New_2(::uStatic* __this, ::uObject* dictionary);
void Dictionary__framebuffer__int__Rehash(Dictionary__framebuffer__int* __this);
bool Dictionary__framebuffer__int__Remove(Dictionary__framebuffer__int* __this, ::app::Uno::Graphics::Framebuffer* key);
void Dictionary__framebuffer__int__set_Item(Dictionary__framebuffer__int* __this, ::app::Uno::Graphics::Framebuffer* key, int value);
bool Dictionary__framebuffer__int__TryGetValue(Dictionary__framebuffer__int* __this, ::app::Uno::Graphics::Framebuffer* key, int* value);
void Dictionary__framebuffer__int__Uno_Collections_ICollection_Add(Dictionary__framebuffer__int* __this, ::app::Uno::Collections::KeyValuePair__framebuffer__int item);
bool Dictionary__framebuffer__int__Uno_Collections_ICollection_Contains(Dictionary__framebuffer__int* __this, ::app::Uno::Collections::KeyValuePair__framebuffer__int item);
bool Dictionary__framebuffer__int__Uno_Collections_ICollection_Remove(Dictionary__framebuffer__int* __this, ::app::Uno::Collections::KeyValuePair__framebuffer__int item);

struct Dictionary__framebuffer__int : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::uObject* GetEnumerator_boxed() { return Dictionary__framebuffer__int__GetEnumerator_boxed(this); }
    void _ObjInit() { Dictionary__framebuffer__int___ObjInit(this); }
    void _ObjInit_1(::uObject* dictionary) { Dictionary__framebuffer__int___ObjInit_1(this, dictionary); }
    void Add(::app::Uno::Graphics::Framebuffer* key, int value) { Dictionary__framebuffer__int__Add(this, key, value); }
    void Clear() { Dictionary__framebuffer__int__Clear(this); }
    bool ContainsKey(::app::Uno::Graphics::Framebuffer* key) { return Dictionary__framebuffer__int__ContainsKey(this, key); }
    int Count() { return Dictionary__framebuffer__int__get_Count(this); }
    int Item(::app::Uno::Graphics::Framebuffer* key) { return Dictionary__framebuffer__int__get_Item(this, key); }
    ::app::Uno::Collections::Dictionary2_KeyCollection__framebuffer__int* Keys() { return Dictionary__framebuffer__int__get_Keys(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection__framebuffer__int* Values() { return Dictionary__framebuffer__int__get_Values(this); }
    ::app::Uno::Collections::Dictionary2_Enumerator__framebuffer__int GetEnumerator();
    void Rehash() { Dictionary__framebuffer__int__Rehash(this); }
    bool Remove(::app::Uno::Graphics::Framebuffer* key) { return Dictionary__framebuffer__int__Remove(this, key); }
    void Item(::app::Uno::Graphics::Framebuffer* key, int value) { Dictionary__framebuffer__int__set_Item(this, key, value); }
    bool TryGetValue(::app::Uno::Graphics::Framebuffer* key, int* value) { return Dictionary__framebuffer__int__TryGetValue(this, key, value); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__framebuffer__int.h>
#include <app/Uno.Collections.KeyValuePair__framebuffer__int.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__framebuffer__int Dictionary__framebuffer__int::GetEnumerator() { return Dictionary__framebuffer__int__GetEnumerator(this); }

}}}


#endif
