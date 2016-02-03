// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__STRING__ANDROID_ANDROID_GRAPHICS_BITMAP_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__STRING__ANDROID_ANDROID_GRAPHICS_BITMAP_H__

#include <app/Uno.Collections.Dictionary2_Bucket__string__Android_android_gra-9134a41a.h>
#include <app/Uno.Collections.IDictionary__string__Android_android_graphics_Bitmap.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_strin-3ef50b5a.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace graphics { struct Bitmap; } } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__string__Android_android_graphics_Bitmap; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection__string__Android_android_graphics_Bitmap; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap; } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__string__Android_android_graphics_Bitmap; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__string__Android_android_graphics_Bitmap;

struct Dictionary__string__Android_android_graphics_Bitmap__uType : ::uClassType
{
    ::app::Uno::Collections::IDictionary__string__Android_android_graphics_Bitmap __interface_0;
    ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_string_Android_android_graphics_Bitmap_ __interface_1;
};

Dictionary__string__Android_android_graphics_Bitmap__uType* Dictionary__string__Android_android_graphics_Bitmap__typeof();

::uObject* Dictionary__string__Android_android_graphics_Bitmap__GetEnumerator_boxed(Dictionary__string__Android_android_graphics_Bitmap* __this);
void Dictionary__string__Android_android_graphics_Bitmap___ObjInit(Dictionary__string__Android_android_graphics_Bitmap* __this);
void Dictionary__string__Android_android_graphics_Bitmap___ObjInit_1(Dictionary__string__Android_android_graphics_Bitmap* __this, ::uObject* dictionary);
void Dictionary__string__Android_android_graphics_Bitmap__Add(Dictionary__string__Android_android_graphics_Bitmap* __this, ::uString* key, ::app::Android::android::graphics::Bitmap* value);
void Dictionary__string__Android_android_graphics_Bitmap__Clear(Dictionary__string__Android_android_graphics_Bitmap* __this);
bool Dictionary__string__Android_android_graphics_Bitmap__ContainsKey(Dictionary__string__Android_android_graphics_Bitmap* __this, ::uString* key);
int Dictionary__string__Android_android_graphics_Bitmap__get_Count(Dictionary__string__Android_android_graphics_Bitmap* __this);
::app::Android::android::graphics::Bitmap* Dictionary__string__Android_android_graphics_Bitmap__get_Item(Dictionary__string__Android_android_graphics_Bitmap* __this, ::uString* key);
::app::Uno::Collections::Dictionary2_KeyCollection__string__Android_android_graphics_Bitmap* Dictionary__string__Android_android_graphics_Bitmap__get_Keys(Dictionary__string__Android_android_graphics_Bitmap* __this);
::app::Uno::Collections::Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap* Dictionary__string__Android_android_graphics_Bitmap__get_Values(Dictionary__string__Android_android_graphics_Bitmap* __this);
::app::Uno::Collections::Dictionary2_Enumerator__string__Android_android_graphics_Bitmap Dictionary__string__Android_android_graphics_Bitmap__GetEnumerator(Dictionary__string__Android_android_graphics_Bitmap* __this);
Dictionary__string__Android_android_graphics_Bitmap* Dictionary__string__Android_android_graphics_Bitmap__New_1(::uStatic* __this);
Dictionary__string__Android_android_graphics_Bitmap* Dictionary__string__Android_android_graphics_Bitmap__New_2(::uStatic* __this, ::uObject* dictionary);
void Dictionary__string__Android_android_graphics_Bitmap__Rehash(Dictionary__string__Android_android_graphics_Bitmap* __this);
bool Dictionary__string__Android_android_graphics_Bitmap__Remove(Dictionary__string__Android_android_graphics_Bitmap* __this, ::uString* key);
void Dictionary__string__Android_android_graphics_Bitmap__set_Item(Dictionary__string__Android_android_graphics_Bitmap* __this, ::uString* key, ::app::Android::android::graphics::Bitmap* value);
bool Dictionary__string__Android_android_graphics_Bitmap__TryGetValue(Dictionary__string__Android_android_graphics_Bitmap* __this, ::uString* key, ::app::Android::android::graphics::Bitmap** value);
void Dictionary__string__Android_android_graphics_Bitmap__Uno_Collections_ICollection_Add(Dictionary__string__Android_android_graphics_Bitmap* __this, ::app::Uno::Collections::KeyValuePair__string__Android_android_graphics_Bitmap item);
bool Dictionary__string__Android_android_graphics_Bitmap__Uno_Collections_ICollection_Contains(Dictionary__string__Android_android_graphics_Bitmap* __this, ::app::Uno::Collections::KeyValuePair__string__Android_android_graphics_Bitmap item);
bool Dictionary__string__Android_android_graphics_Bitmap__Uno_Collections_ICollection_Remove(Dictionary__string__Android_android_graphics_Bitmap* __this, ::app::Uno::Collections::KeyValuePair__string__Android_android_graphics_Bitmap item);

struct Dictionary__string__Android_android_graphics_Bitmap : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::uObject* GetEnumerator_boxed() { return Dictionary__string__Android_android_graphics_Bitmap__GetEnumerator_boxed(this); }
    void _ObjInit() { Dictionary__string__Android_android_graphics_Bitmap___ObjInit(this); }
    void _ObjInit_1(::uObject* dictionary) { Dictionary__string__Android_android_graphics_Bitmap___ObjInit_1(this, dictionary); }
    void Add(::uString* key, ::app::Android::android::graphics::Bitmap* value) { Dictionary__string__Android_android_graphics_Bitmap__Add(this, key, value); }
    void Clear() { Dictionary__string__Android_android_graphics_Bitmap__Clear(this); }
    bool ContainsKey(::uString* key) { return Dictionary__string__Android_android_graphics_Bitmap__ContainsKey(this, key); }
    int Count() { return Dictionary__string__Android_android_graphics_Bitmap__get_Count(this); }
    ::app::Android::android::graphics::Bitmap* Item(::uString* key) { return Dictionary__string__Android_android_graphics_Bitmap__get_Item(this, key); }
    ::app::Uno::Collections::Dictionary2_KeyCollection__string__Android_android_graphics_Bitmap* Keys() { return Dictionary__string__Android_android_graphics_Bitmap__get_Keys(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap* Values() { return Dictionary__string__Android_android_graphics_Bitmap__get_Values(this); }
    ::app::Uno::Collections::Dictionary2_Enumerator__string__Android_android_graphics_Bitmap GetEnumerator();
    void Rehash() { Dictionary__string__Android_android_graphics_Bitmap__Rehash(this); }
    bool Remove(::uString* key) { return Dictionary__string__Android_android_graphics_Bitmap__Remove(this, key); }
    void Item(::uString* key, ::app::Android::android::graphics::Bitmap* value) { Dictionary__string__Android_android_graphics_Bitmap__set_Item(this, key, value); }
    bool TryGetValue(::uString* key, ::app::Android::android::graphics::Bitmap** value) { return Dictionary__string__Android_android_graphics_Bitmap__TryGetValue(this, key, value); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__string__Android_android-9ffb6c86.h>
#include <app/Uno.Collections.KeyValuePair__string__Android_android_graphics_Bitmap.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__string__Android_android_graphics_Bitmap Dictionary__string__Android_android_graphics_Bitmap::GetEnumerator() { return Dictionary__string__Android_android_graphics_Bitmap__GetEnumerator(this); }

}}}


#endif
