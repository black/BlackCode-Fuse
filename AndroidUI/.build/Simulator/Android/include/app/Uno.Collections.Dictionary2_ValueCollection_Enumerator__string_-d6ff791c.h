// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION_ENUMERATOR__STRING__D6FF791C_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION_ENUMERATOR__STRING__D6FF791C_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace graphics { struct Bitmap; } } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Android_android_graphics_Bitmap; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection_Enumerator__string__Android_android_graphics_Bitmap;

struct Dictionary2_ValueCollection_Enumerator__string__Android_android_graphics_Bitmap__uType : ::uStructType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

Dictionary2_ValueCollection_Enumerator__string__Android_android_graphics_Bitmap__uType* Dictionary2_ValueCollection_Enumerator__string__Android_android_graphics_Bitmap__typeof();

void Dictionary2_ValueCollection_Enumerator__string__Android_android_graphics_Bitmap___ObjInit(Dictionary2_ValueCollection_Enumerator__string__Android_android_graphics_Bitmap* __this, ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Bitmap* source);
void Dictionary2_ValueCollection_Enumerator__string__Android_android_graphics_Bitmap__Dispose(Dictionary2_ValueCollection_Enumerator__string__Android_android_graphics_Bitmap* __this);
bool Dictionary2_ValueCollection_Enumerator__string__Android_android_graphics_Bitmap__MoveNext(Dictionary2_ValueCollection_Enumerator__string__Android_android_graphics_Bitmap* __this);
Dictionary2_ValueCollection_Enumerator__string__Android_android_graphics_Bitmap Dictionary2_ValueCollection_Enumerator__string__Android_android_graphics_Bitmap__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Bitmap* source);
void Dictionary2_ValueCollection_Enumerator__string__Android_android_graphics_Bitmap__Uno_Collections_IEnumerator_Reset(Dictionary2_ValueCollection_Enumerator__string__Android_android_graphics_Bitmap* __this);

struct Dictionary2_ValueCollection_Enumerator__string__Android_android_graphics_Bitmap
{
    ::uStrong< ::app::Uno::Collections::Dictionary__string__Android_android_graphics_Bitmap*> _source;
    ::uStrong< ::app::Android::android::graphics::Bitmap*> _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__string__Android_android_graphics_Bitmap* source) { Dictionary2_ValueCollection_Enumerator__string__Android_android_graphics_Bitmap___ObjInit(this, source); }
    void Dispose() { Dictionary2_ValueCollection_Enumerator__string__Android_android_graphics_Bitmap__Dispose(this); }
    bool MoveNext() { return Dictionary2_ValueCollection_Enumerator__string__Android_android_graphics_Bitmap__MoveNext(this); }
};

}}}


#endif
