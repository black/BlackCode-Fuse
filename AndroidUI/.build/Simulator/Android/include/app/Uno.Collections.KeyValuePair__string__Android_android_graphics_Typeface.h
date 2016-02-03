// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__STRING__ANDROID_ANDROID_GRAPHICS_TYPEFACE_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__STRING__ANDROID_ANDROID_GRAPHICS_TYPEFACE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace graphics { struct Typeface; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__string__Android_android_graphics_Typeface;

struct KeyValuePair__string__Android_android_graphics_Typeface__uType : ::uStructType
{
};

KeyValuePair__string__Android_android_graphics_Typeface__uType* KeyValuePair__string__Android_android_graphics_Typeface__typeof();

void KeyValuePair__string__Android_android_graphics_Typeface___ObjInit(KeyValuePair__string__Android_android_graphics_Typeface* __this, ::uString* key, ::app::Android::android::graphics::Typeface* value);
::uString* KeyValuePair__string__Android_android_graphics_Typeface__get_Key(KeyValuePair__string__Android_android_graphics_Typeface* __this);
::app::Android::android::graphics::Typeface* KeyValuePair__string__Android_android_graphics_Typeface__get_Value(KeyValuePair__string__Android_android_graphics_Typeface* __this);
KeyValuePair__string__Android_android_graphics_Typeface KeyValuePair__string__Android_android_graphics_Typeface__New_1(::uStatic* __this, ::uString* key, ::app::Android::android::graphics::Typeface* value);

struct KeyValuePair__string__Android_android_graphics_Typeface
{
    ::uStrong< ::uString*> _key;
    ::uStrong< ::app::Android::android::graphics::Typeface*> _value;

    void _ObjInit(::uString* key, ::app::Android::android::graphics::Typeface* value) { KeyValuePair__string__Android_android_graphics_Typeface___ObjInit(this, key, value); }
    ::uString* Key() { return KeyValuePair__string__Android_android_graphics_Typeface__get_Key(this); }
    ::app::Android::android::graphics::Typeface* Value() { return KeyValuePair__string__Android_android_graphics_Typeface__get_Value(this); }
};

}}}


#endif
