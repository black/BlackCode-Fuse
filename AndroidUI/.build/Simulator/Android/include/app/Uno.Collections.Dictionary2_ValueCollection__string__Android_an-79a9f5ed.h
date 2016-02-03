// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__STRING__ANDROID_AN_79A9F5ED_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__STRING__ANDROID_AN_79A9F5ED_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace graphics { struct Bitmap; } } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Android_android_graphics_Bitmap; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection_Enumerator__string__Android_android_graphics_Bitmap; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap;

struct Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap__uType : ::uClassType
{
};

Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap__uType* Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap__typeof();

void Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap___ObjInit(Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap* __this, ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Bitmap* source);
int Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap__get_Count(Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap* __this);
::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Android_android_graphics_Bitmap Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap__GetEnumerator(Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap* __this);
Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap* Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Bitmap* source);
void Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap* __this, ::app::Android::android::graphics::Bitmap* item);
void Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap* __this);
bool Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap* __this, ::app::Android::android::graphics::Bitmap* item);
bool Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap* __this, ::app::Android::android::graphics::Bitmap* item);

struct Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Bitmap*> _source;

    void _ObjInit(::app::Uno::Collections::Dictionary__string__Android_android_graphics_Bitmap* source) { Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap___ObjInit(this, source); }
    int Count() { return Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap__get_Count(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Android_android_graphics_Bitmap GetEnumerator();
};

}}}

#include <app/Uno.Collections.Dictionary2_ValueCollection_Enumerator__string_-d6ff791c.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Android_android_graphics_Bitmap Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap::GetEnumerator() { return Dictionary2_ValueCollection__string__Android_android_graphics_Bitmap__GetEnumerator(this); }

}}}


#endif
