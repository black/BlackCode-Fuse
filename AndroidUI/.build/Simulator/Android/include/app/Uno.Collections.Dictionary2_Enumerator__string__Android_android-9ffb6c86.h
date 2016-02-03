// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__STRING__ANDROID_ANDROID_9FFB6C86_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__STRING__ANDROID_ANDROID_9FFB6C86_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_strin-47e5efc1.h>
#include <app/Uno.Collections.KeyValuePair__string__Android_android_graphics_Bitmap.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Android_android_graphics_Bitmap; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Enumerator__string__Android_android_graphics_Bitmap;

struct Dictionary2_Enumerator__string__Android_android_graphics_Bitmap__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Collections_KeyValuePair_string_Android_android_graphics_Bitmap_ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

Dictionary2_Enumerator__string__Android_android_graphics_Bitmap__uType* Dictionary2_Enumerator__string__Android_android_graphics_Bitmap__typeof();

void Dictionary2_Enumerator__string__Android_android_graphics_Bitmap___ObjInit(Dictionary2_Enumerator__string__Android_android_graphics_Bitmap* __this, ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Bitmap* source);
void Dictionary2_Enumerator__string__Android_android_graphics_Bitmap__Dispose(Dictionary2_Enumerator__string__Android_android_graphics_Bitmap* __this);
::app::Uno::Collections::KeyValuePair__string__Android_android_graphics_Bitmap Dictionary2_Enumerator__string__Android_android_graphics_Bitmap__get_Current(Dictionary2_Enumerator__string__Android_android_graphics_Bitmap* __this);
bool Dictionary2_Enumerator__string__Android_android_graphics_Bitmap__MoveNext(Dictionary2_Enumerator__string__Android_android_graphics_Bitmap* __this);
Dictionary2_Enumerator__string__Android_android_graphics_Bitmap Dictionary2_Enumerator__string__Android_android_graphics_Bitmap__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Bitmap* source);
void Dictionary2_Enumerator__string__Android_android_graphics_Bitmap__Uno_Collections_IEnumerator_Reset(Dictionary2_Enumerator__string__Android_android_graphics_Bitmap* __this);

struct Dictionary2_Enumerator__string__Android_android_graphics_Bitmap
{
    ::uStrong< ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Bitmap*> _source;
    ::app::Uno::Collections::KeyValuePair__string__Android_android_graphics_Bitmap _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__string__Android_android_graphics_Bitmap* source) { Dictionary2_Enumerator__string__Android_android_graphics_Bitmap___ObjInit(this, source); }
    void Dispose() { Dictionary2_Enumerator__string__Android_android_graphics_Bitmap__Dispose(this); }
    ::app::Uno::Collections::KeyValuePair__string__Android_android_graphics_Bitmap Current() { return Dictionary2_Enumerator__string__Android_android_graphics_Bitmap__get_Current(this); }
    bool MoveNext() { return Dictionary2_Enumerator__string__Android_android_graphics_Bitmap__MoveNext(this); }
};

}}}


#endif
