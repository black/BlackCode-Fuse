// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION_ENUMERATOR__CHAR__UNO_EF5FAFE7_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION_ENUMERATOR__CHAR__UNO_EF5FAFE7_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__char.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__char__Uno_Content_Fonts_RenderedGlyph; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph;

struct Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__char __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__uType* Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__typeof();

void Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph___ObjInit(Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph* __this, ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_RenderedGlyph* source);
void Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__Dispose(Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph* __this);
::uChar Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__get_Current(Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph* __this);
bool Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__MoveNext(Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph* __this);
Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_RenderedGlyph* source);
void Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph* __this);

struct Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph
{
    ::uStrong< ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_RenderedGlyph*> _source;
    ::uChar _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_RenderedGlyph* source) { Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph___ObjInit(this, source); }
    void Dispose() { Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__Dispose(this); }
    ::uChar Current() { return Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__get_Current(this); }
    bool MoveNext() { return Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__MoveNext(this); }
};

}}}


#endif
