// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION_ENUMERATOR__CHAR__U_8D22080B_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION_ENUMERATOR__CHAR__U_8D22080B_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Content.Fonts.BitmapFont_GlyphInfo.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo;

struct Dictionary2_ValueCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__uType : ::uStructType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

Dictionary2_ValueCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__uType* Dictionary2_ValueCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__typeof();

void Dictionary2_ValueCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo___ObjInit(Dictionary2_ValueCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this, ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* source);
void Dictionary2_ValueCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__Dispose(Dictionary2_ValueCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this);
bool Dictionary2_ValueCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__MoveNext(Dictionary2_ValueCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this);
Dictionary2_ValueCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo Dictionary2_ValueCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* source);
void Dictionary2_ValueCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__Uno_Collections_IEnumerator_Reset(Dictionary2_ValueCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this);

struct Dictionary2_ValueCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo
{
    ::uStrong< ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo*> _source;
    ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* source) { Dictionary2_ValueCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo___ObjInit(this, source); }
    void Dispose() { Dictionary2_ValueCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__Dispose(this); }
    bool MoveNext() { return Dictionary2_ValueCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__MoveNext(this); }
};

}}}


#endif
