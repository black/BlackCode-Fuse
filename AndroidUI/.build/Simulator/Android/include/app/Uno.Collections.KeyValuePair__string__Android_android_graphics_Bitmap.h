// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__STRING__ANDROID_ANDROID_GRAPHICS_BITMAP_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__STRING__ANDROID_ANDROID_GRAPHICS_BITMAP_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace graphics { struct Bitmap; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__string__Android_android_graphics_Bitmap;

struct KeyValuePair__string__Android_android_graphics_Bitmap__uType : ::uStructType
{
};

KeyValuePair__string__Android_android_graphics_Bitmap__uType* KeyValuePair__string__Android_android_graphics_Bitmap__typeof();

void KeyValuePair__string__Android_android_graphics_Bitmap___ObjInit(KeyValuePair__string__Android_android_graphics_Bitmap* __this, ::uString* key, ::app::Android::android::graphics::Bitmap* value);
::uString* KeyValuePair__string__Android_android_graphics_Bitmap__get_Key(KeyValuePair__string__Android_android_graphics_Bitmap* __this);
::app::Android::android::graphics::Bitmap* KeyValuePair__string__Android_android_graphics_Bitmap__get_Value(KeyValuePair__string__Android_android_graphics_Bitmap* __this);
KeyValuePair__string__Android_android_graphics_Bitmap KeyValuePair__string__Android_android_graphics_Bitmap__New_1(::uStatic* __this, ::uString* key, ::app::Android::android::graphics::Bitmap* value);

struct KeyValuePair__string__Android_android_graphics_Bitmap
{
    ::uStrong< ::uString*> _key;
    ::uStrong< ::app::Android::android::graphics::Bitmap*> _value;

    void _ObjInit(::uString* key, ::app::Android::android::graphics::Bitmap* value) { KeyValuePair__string__Android_android_graphics_Bitmap___ObjInit(this, key, value); }
    ::uString* Key() { return KeyValuePair__string__Android_android_graphics_Bitmap__get_Key(this); }
    ::app::Android::android::graphics::Bitmap* Value() { return KeyValuePair__string__Android_android_graphics_Bitmap__get_Value(this); }
};

}}}


#endif
