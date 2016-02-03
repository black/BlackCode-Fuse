// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__UNO_CONTENT_FONTS_BITMA_E71BCAEC_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__UNO_CONTENT_FONTS_BITMA_E71BCAEC_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_Uno_C-f02f9125.h>
#include <app/Uno.Collections.KeyValuePair__Uno_Content_Fonts_BitmapFont_Char-b8da209b.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float;

struct Dictionary2_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Collections_KeyValuePair_Uno_Content_Fonts_BitmapFont_CharPair_float_ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

Dictionary2_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float__uType* Dictionary2_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float__typeof();

void Dictionary2_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float___ObjInit(Dictionary2_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float* __this, ::app::Uno::Collections::Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float* source);
void Dictionary2_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float__Dispose(Dictionary2_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float* __this);
::app::Uno::Collections::KeyValuePair__Uno_Content_Fonts_BitmapFont_CharPair__float Dictionary2_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float__get_Current(Dictionary2_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float* __this);
bool Dictionary2_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float__MoveNext(Dictionary2_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float* __this);
Dictionary2_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float Dictionary2_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float* source);
void Dictionary2_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float__Uno_Collections_IEnumerator_Reset(Dictionary2_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float* __this);

struct Dictionary2_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float*> _source;
    ::app::Uno::Collections::KeyValuePair__Uno_Content_Fonts_BitmapFont_CharPair__float _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float* source) { Dictionary2_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float___ObjInit(this, source); }
    void Dispose() { Dictionary2_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float__Dispose(this); }
    ::app::Uno::Collections::KeyValuePair__Uno_Content_Fonts_BitmapFont_CharPair__float Current() { return Dictionary2_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float__get_Current(this); }
    bool MoveNext() { return Dictionary2_Enumerator__Uno_Content_Fonts_BitmapFont_CharPair__float__MoveNext(this); }
};

}}}


#endif
