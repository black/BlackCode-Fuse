// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__FRAMEBUFFER__BOOL_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__FRAMEBUFFER__BOOL_H__

#include <app/Uno.Collections.Dictionary2_Bucket__framebuffer__bool.h>
#include <app/Uno.Collections.IDictionary__framebuffer__bool.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_frame-a40889f8.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__framebuffer__bool; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection__framebuffer__bool; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection__framebuffer__bool; } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__framebuffer__bool; } } }
namespace app { namespace Uno { namespace Graphics { struct Framebuffer; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__framebuffer__bool;

struct Dictionary__framebuffer__bool__uType : ::uClassType
{
    ::app::Uno::Collections::IDictionary__framebuffer__bool __interface_0;
    ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_framebuffer_bool_ __interface_1;
};

Dictionary__framebuffer__bool__uType* Dictionary__framebuffer__bool__typeof();

::uObject* Dictionary__framebuffer__bool__GetEnumerator_boxed(Dictionary__framebuffer__bool* __this);
void Dictionary__framebuffer__bool___ObjInit(Dictionary__framebuffer__bool* __this);
void Dictionary__framebuffer__bool___ObjInit_1(Dictionary__framebuffer__bool* __this, ::uObject* dictionary);
void Dictionary__framebuffer__bool__Add(Dictionary__framebuffer__bool* __this, ::app::Uno::Graphics::Framebuffer* key, bool value);
void Dictionary__framebuffer__bool__Clear(Dictionary__framebuffer__bool* __this);
bool Dictionary__framebuffer__bool__ContainsKey(Dictionary__framebuffer__bool* __this, ::app::Uno::Graphics::Framebuffer* key);
int Dictionary__framebuffer__bool__get_Count(Dictionary__framebuffer__bool* __this);
bool Dictionary__framebuffer__bool__get_Item(Dictionary__framebuffer__bool* __this, ::app::Uno::Graphics::Framebuffer* key);
::app::Uno::Collections::Dictionary2_KeyCollection__framebuffer__bool* Dictionary__framebuffer__bool__get_Keys(Dictionary__framebuffer__bool* __this);
::app::Uno::Collections::Dictionary2_ValueCollection__framebuffer__bool* Dictionary__framebuffer__bool__get_Values(Dictionary__framebuffer__bool* __this);
::app::Uno::Collections::Dictionary2_Enumerator__framebuffer__bool Dictionary__framebuffer__bool__GetEnumerator(Dictionary__framebuffer__bool* __this);
Dictionary__framebuffer__bool* Dictionary__framebuffer__bool__New_1(::uStatic* __this);
Dictionary__framebuffer__bool* Dictionary__framebuffer__bool__New_2(::uStatic* __this, ::uObject* dictionary);
void Dictionary__framebuffer__bool__Rehash(Dictionary__framebuffer__bool* __this);
bool Dictionary__framebuffer__bool__Remove(Dictionary__framebuffer__bool* __this, ::app::Uno::Graphics::Framebuffer* key);
void Dictionary__framebuffer__bool__set_Item(Dictionary__framebuffer__bool* __this, ::app::Uno::Graphics::Framebuffer* key, bool value);
bool Dictionary__framebuffer__bool__TryGetValue(Dictionary__framebuffer__bool* __this, ::app::Uno::Graphics::Framebuffer* key, bool* value);
void Dictionary__framebuffer__bool__Uno_Collections_ICollection_Add(Dictionary__framebuffer__bool* __this, ::app::Uno::Collections::KeyValuePair__framebuffer__bool item);
bool Dictionary__framebuffer__bool__Uno_Collections_ICollection_Contains(Dictionary__framebuffer__bool* __this, ::app::Uno::Collections::KeyValuePair__framebuffer__bool item);
bool Dictionary__framebuffer__bool__Uno_Collections_ICollection_Remove(Dictionary__framebuffer__bool* __this, ::app::Uno::Collections::KeyValuePair__framebuffer__bool item);

struct Dictionary__framebuffer__bool : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::uObject* GetEnumerator_boxed() { return Dictionary__framebuffer__bool__GetEnumerator_boxed(this); }
    void _ObjInit() { Dictionary__framebuffer__bool___ObjInit(this); }
    void _ObjInit_1(::uObject* dictionary) { Dictionary__framebuffer__bool___ObjInit_1(this, dictionary); }
    void Add(::app::Uno::Graphics::Framebuffer* key, bool value) { Dictionary__framebuffer__bool__Add(this, key, value); }
    void Clear() { Dictionary__framebuffer__bool__Clear(this); }
    bool ContainsKey(::app::Uno::Graphics::Framebuffer* key) { return Dictionary__framebuffer__bool__ContainsKey(this, key); }
    int Count() { return Dictionary__framebuffer__bool__get_Count(this); }
    bool Item(::app::Uno::Graphics::Framebuffer* key) { return Dictionary__framebuffer__bool__get_Item(this, key); }
    ::app::Uno::Collections::Dictionary2_KeyCollection__framebuffer__bool* Keys() { return Dictionary__framebuffer__bool__get_Keys(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection__framebuffer__bool* Values() { return Dictionary__framebuffer__bool__get_Values(this); }
    ::app::Uno::Collections::Dictionary2_Enumerator__framebuffer__bool GetEnumerator();
    void Rehash() { Dictionary__framebuffer__bool__Rehash(this); }
    bool Remove(::app::Uno::Graphics::Framebuffer* key) { return Dictionary__framebuffer__bool__Remove(this, key); }
    void Item(::app::Uno::Graphics::Framebuffer* key, bool value) { Dictionary__framebuffer__bool__set_Item(this, key, value); }
    bool TryGetValue(::app::Uno::Graphics::Framebuffer* key, bool* value) { return Dictionary__framebuffer__bool__TryGetValue(this, key, value); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__framebuffer__bool.h>
#include <app/Uno.Collections.KeyValuePair__framebuffer__bool.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__framebuffer__bool Dictionary__framebuffer__bool::GetEnumerator() { return Dictionary__framebuffer__bool__GetEnumerator(this); }

}}}


#endif
