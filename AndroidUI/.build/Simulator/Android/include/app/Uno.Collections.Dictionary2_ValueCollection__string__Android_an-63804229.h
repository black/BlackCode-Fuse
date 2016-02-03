// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__STRING__ANDROID_AN_63804229_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__STRING__ANDROID_AN_63804229_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace graphics { struct Typeface; } } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Android_android_graphics_Typeface; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection_Enumerator__string__Android_android_graphics_Typeface; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection__string__Android_android_graphics_Typeface;

struct Dictionary2_ValueCollection__string__Android_android_graphics_Typeface__uType : ::uClassType
{
};

Dictionary2_ValueCollection__string__Android_android_graphics_Typeface__uType* Dictionary2_ValueCollection__string__Android_android_graphics_Typeface__typeof();

void Dictionary2_ValueCollection__string__Android_android_graphics_Typeface___ObjInit(Dictionary2_ValueCollection__string__Android_android_graphics_Typeface* __this, ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Typeface* source);
int Dictionary2_ValueCollection__string__Android_android_graphics_Typeface__get_Count(Dictionary2_ValueCollection__string__Android_android_graphics_Typeface* __this);
::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Android_android_graphics_Typeface Dictionary2_ValueCollection__string__Android_android_graphics_Typeface__GetEnumerator(Dictionary2_ValueCollection__string__Android_android_graphics_Typeface* __this);
Dictionary2_ValueCollection__string__Android_android_graphics_Typeface* Dictionary2_ValueCollection__string__Android_android_graphics_Typeface__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Typeface* source);
void Dictionary2_ValueCollection__string__Android_android_graphics_Typeface__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__string__Android_android_graphics_Typeface* __this, ::app::Android::android::graphics::Typeface* item);
void Dictionary2_ValueCollection__string__Android_android_graphics_Typeface__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__string__Android_android_graphics_Typeface* __this);
bool Dictionary2_ValueCollection__string__Android_android_graphics_Typeface__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__string__Android_android_graphics_Typeface* __this, ::app::Android::android::graphics::Typeface* item);
bool Dictionary2_ValueCollection__string__Android_android_graphics_Typeface__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__string__Android_android_graphics_Typeface* __this, ::app::Android::android::graphics::Typeface* item);

struct Dictionary2_ValueCollection__string__Android_android_graphics_Typeface : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Typeface*> _source;

    void _ObjInit(::app::Uno::Collections::Dictionary__string__Android_android_graphics_Typeface* source) { Dictionary2_ValueCollection__string__Android_android_graphics_Typeface___ObjInit(this, source); }
    int Count() { return Dictionary2_ValueCollection__string__Android_android_graphics_Typeface__get_Count(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Android_android_graphics_Typeface GetEnumerator();
};

}}}

#include <app/Uno.Collections.Dictionary2_ValueCollection_Enumerator__string_-b7714146.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Android_android_graphics_Typeface Dictionary2_ValueCollection__string__Android_android_graphics_Typeface::GetEnumerator() { return Dictionary2_ValueCollection__string__Android_android_graphics_Typeface__GetEnumerator(this); }

}}}


#endif
