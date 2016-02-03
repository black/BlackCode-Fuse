// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION__STRING__ANDROID_ANDR_57A869D_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION__STRING__ANDROID_ANDR_57A869D_H__

#include <app/Uno.Collections.IEnumerable__string.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Android_android_graphics_Typeface; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Typeface; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_KeyCollection__string__Android_android_graphics_Typeface;

struct Dictionary2_KeyCollection__string__Android_android_graphics_Typeface__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__string __interface_0;
};

Dictionary2_KeyCollection__string__Android_android_graphics_Typeface__uType* Dictionary2_KeyCollection__string__Android_android_graphics_Typeface__typeof();

::uObject* Dictionary2_KeyCollection__string__Android_android_graphics_Typeface__GetEnumerator_boxed(Dictionary2_KeyCollection__string__Android_android_graphics_Typeface* __this);
void Dictionary2_KeyCollection__string__Android_android_graphics_Typeface___ObjInit(Dictionary2_KeyCollection__string__Android_android_graphics_Typeface* __this, ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Typeface* source);
int Dictionary2_KeyCollection__string__Android_android_graphics_Typeface__get_Count(Dictionary2_KeyCollection__string__Android_android_graphics_Typeface* __this);
::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Typeface Dictionary2_KeyCollection__string__Android_android_graphics_Typeface__GetEnumerator(Dictionary2_KeyCollection__string__Android_android_graphics_Typeface* __this);
Dictionary2_KeyCollection__string__Android_android_graphics_Typeface* Dictionary2_KeyCollection__string__Android_android_graphics_Typeface__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Typeface* source);
void Dictionary2_KeyCollection__string__Android_android_graphics_Typeface__Uno_Collections_ICollection_Add(Dictionary2_KeyCollection__string__Android_android_graphics_Typeface* __this, ::uString* item);
void Dictionary2_KeyCollection__string__Android_android_graphics_Typeface__Uno_Collections_ICollection_Clear(Dictionary2_KeyCollection__string__Android_android_graphics_Typeface* __this);
bool Dictionary2_KeyCollection__string__Android_android_graphics_Typeface__Uno_Collections_ICollection_Contains(Dictionary2_KeyCollection__string__Android_android_graphics_Typeface* __this, ::uString* item);
bool Dictionary2_KeyCollection__string__Android_android_graphics_Typeface__Uno_Collections_ICollection_Remove(Dictionary2_KeyCollection__string__Android_android_graphics_Typeface* __this, ::uString* item);

struct Dictionary2_KeyCollection__string__Android_android_graphics_Typeface : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Typeface*> _source;

    ::uObject* GetEnumerator_boxed() { return Dictionary2_KeyCollection__string__Android_android_graphics_Typeface__GetEnumerator_boxed(this); }
    void _ObjInit(::app::Uno::Collections::Dictionary__string__Android_android_graphics_Typeface* source) { Dictionary2_KeyCollection__string__Android_android_graphics_Typeface___ObjInit(this, source); }
    int Count() { return Dictionary2_KeyCollection__string__Android_android_graphics_Typeface__get_Count(this); }
    ::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Typeface GetEnumerator();
};

}}}

#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__string__A-3ff13523.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__string__Android_android_graphics_Typeface Dictionary2_KeyCollection__string__Android_android_graphics_Typeface::GetEnumerator() { return Dictionary2_KeyCollection__string__Android_android_graphics_Typeface__GetEnumerator(this); }

}}}


#endif
