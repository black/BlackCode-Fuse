// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__STRING__ANDROID_ANDROID_GRAPHICS_TYPEFACE_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__STRING__ANDROID_ANDROID_GRAPHICS_TYPEFACE_H__

#include <app/Uno.Collections.Dictionary2_Bucket__string__Android_android_gra-e9aa1960.h>
#include <app/Uno.Collections.IDictionary__string__Android_android_graphics_Typeface.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_strin-dfb71e23.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace graphics { struct Typeface; } } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__string__Android_android_graphics_Typeface; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection__string__Android_android_graphics_Typeface; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection__string__Android_android_graphics_Typeface; } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__string__Android_android_graphics_Typeface; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__string__Android_android_graphics_Typeface;

struct Dictionary__string__Android_android_graphics_Typeface__uType : ::uClassType
{
    ::app::Uno::Collections::IDictionary__string__Android_android_graphics_Typeface __interface_0;
    ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_string_Android_android_graphics_Typeface_ __interface_1;
};

Dictionary__string__Android_android_graphics_Typeface__uType* Dictionary__string__Android_android_graphics_Typeface__typeof();

::uObject* Dictionary__string__Android_android_graphics_Typeface__GetEnumerator_boxed(Dictionary__string__Android_android_graphics_Typeface* __this);
void Dictionary__string__Android_android_graphics_Typeface___ObjInit(Dictionary__string__Android_android_graphics_Typeface* __this);
void Dictionary__string__Android_android_graphics_Typeface___ObjInit_1(Dictionary__string__Android_android_graphics_Typeface* __this, ::uObject* dictionary);
void Dictionary__string__Android_android_graphics_Typeface__Add(Dictionary__string__Android_android_graphics_Typeface* __this, ::uString* key, ::app::Android::android::graphics::Typeface* value);
void Dictionary__string__Android_android_graphics_Typeface__Clear(Dictionary__string__Android_android_graphics_Typeface* __this);
bool Dictionary__string__Android_android_graphics_Typeface__ContainsKey(Dictionary__string__Android_android_graphics_Typeface* __this, ::uString* key);
int Dictionary__string__Android_android_graphics_Typeface__get_Count(Dictionary__string__Android_android_graphics_Typeface* __this);
::app::Android::android::graphics::Typeface* Dictionary__string__Android_android_graphics_Typeface__get_Item(Dictionary__string__Android_android_graphics_Typeface* __this, ::uString* key);
::app::Uno::Collections::Dictionary2_KeyCollection__string__Android_android_graphics_Typeface* Dictionary__string__Android_android_graphics_Typeface__get_Keys(Dictionary__string__Android_android_graphics_Typeface* __this);
::app::Uno::Collections::Dictionary2_ValueCollection__string__Android_android_graphics_Typeface* Dictionary__string__Android_android_graphics_Typeface__get_Values(Dictionary__string__Android_android_graphics_Typeface* __this);
::app::Uno::Collections::Dictionary2_Enumerator__string__Android_android_graphics_Typeface Dictionary__string__Android_android_graphics_Typeface__GetEnumerator(Dictionary__string__Android_android_graphics_Typeface* __this);
Dictionary__string__Android_android_graphics_Typeface* Dictionary__string__Android_android_graphics_Typeface__New_1(::uStatic* __this);
Dictionary__string__Android_android_graphics_Typeface* Dictionary__string__Android_android_graphics_Typeface__New_2(::uStatic* __this, ::uObject* dictionary);
void Dictionary__string__Android_android_graphics_Typeface__Rehash(Dictionary__string__Android_android_graphics_Typeface* __this);
bool Dictionary__string__Android_android_graphics_Typeface__Remove(Dictionary__string__Android_android_graphics_Typeface* __this, ::uString* key);
void Dictionary__string__Android_android_graphics_Typeface__set_Item(Dictionary__string__Android_android_graphics_Typeface* __this, ::uString* key, ::app::Android::android::graphics::Typeface* value);
bool Dictionary__string__Android_android_graphics_Typeface__TryGetValue(Dictionary__string__Android_android_graphics_Typeface* __this, ::uString* key, ::app::Android::android::graphics::Typeface** value);
void Dictionary__string__Android_android_graphics_Typeface__Uno_Collections_ICollection_Add(Dictionary__string__Android_android_graphics_Typeface* __this, ::app::Uno::Collections::KeyValuePair__string__Android_android_graphics_Typeface item);
bool Dictionary__string__Android_android_graphics_Typeface__Uno_Collections_ICollection_Contains(Dictionary__string__Android_android_graphics_Typeface* __this, ::app::Uno::Collections::KeyValuePair__string__Android_android_graphics_Typeface item);
bool Dictionary__string__Android_android_graphics_Typeface__Uno_Collections_ICollection_Remove(Dictionary__string__Android_android_graphics_Typeface* __this, ::app::Uno::Collections::KeyValuePair__string__Android_android_graphics_Typeface item);

struct Dictionary__string__Android_android_graphics_Typeface : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::uObject* GetEnumerator_boxed() { return Dictionary__string__Android_android_graphics_Typeface__GetEnumerator_boxed(this); }
    void _ObjInit() { Dictionary__string__Android_android_graphics_Typeface___ObjInit(this); }
    void _ObjInit_1(::uObject* dictionary) { Dictionary__string__Android_android_graphics_Typeface___ObjInit_1(this, dictionary); }
    void Add(::uString* key, ::app::Android::android::graphics::Typeface* value) { Dictionary__string__Android_android_graphics_Typeface__Add(this, key, value); }
    void Clear() { Dictionary__string__Android_android_graphics_Typeface__Clear(this); }
    bool ContainsKey(::uString* key) { return Dictionary__string__Android_android_graphics_Typeface__ContainsKey(this, key); }
    int Count() { return Dictionary__string__Android_android_graphics_Typeface__get_Count(this); }
    ::app::Android::android::graphics::Typeface* Item(::uString* key) { return Dictionary__string__Android_android_graphics_Typeface__get_Item(this, key); }
    ::app::Uno::Collections::Dictionary2_KeyCollection__string__Android_android_graphics_Typeface* Keys() { return Dictionary__string__Android_android_graphics_Typeface__get_Keys(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection__string__Android_android_graphics_Typeface* Values() { return Dictionary__string__Android_android_graphics_Typeface__get_Values(this); }
    ::app::Uno::Collections::Dictionary2_Enumerator__string__Android_android_graphics_Typeface GetEnumerator();
    void Rehash() { Dictionary__string__Android_android_graphics_Typeface__Rehash(this); }
    bool Remove(::uString* key) { return Dictionary__string__Android_android_graphics_Typeface__Remove(this, key); }
    void Item(::uString* key, ::app::Android::android::graphics::Typeface* value) { Dictionary__string__Android_android_graphics_Typeface__set_Item(this, key, value); }
    bool TryGetValue(::uString* key, ::app::Android::android::graphics::Typeface** value) { return Dictionary__string__Android_android_graphics_Typeface__TryGetValue(this, key, value); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__string__Android_android-aa2856b9.h>
#include <app/Uno.Collections.KeyValuePair__string__Android_android_graphics_Typeface.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__string__Android_android_graphics_Typeface Dictionary__string__Android_android_graphics_Typeface::GetEnumerator() { return Dictionary__string__Android_android_graphics_Typeface__GetEnumerator(this); }

}}}


#endif
