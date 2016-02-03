// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__CHAR__UNO_CONTENT__67B5EA03_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__CHAR__UNO_CONTENT__67B5EA03_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__char__Uno_Content_Fonts_RenderedGlyph; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph; } } }
namespace app { namespace Uno { namespace Content { namespace Fonts { struct RenderedGlyph; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph;

struct Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph__uType : ::uClassType
{
};

Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph__uType* Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph__typeof();

void Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph___ObjInit(Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph* __this, ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_RenderedGlyph* source);
int Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph__get_Count(Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph* __this);
::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph__GetEnumerator(Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph* __this);
Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph* Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_RenderedGlyph* source);
void Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph* __this, ::app::Uno::Content::Fonts::RenderedGlyph item);
void Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph* __this);
bool Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph* __this, ::app::Uno::Content::Fonts::RenderedGlyph item);
bool Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph* __this, ::app::Uno::Content::Fonts::RenderedGlyph item);

struct Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_RenderedGlyph*> _source;

    void _ObjInit(::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_RenderedGlyph* source) { Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph___ObjInit(this, source); }
    int Count() { return Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph__get_Count(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph GetEnumerator();
};

}}}

#include <app/Uno.Collections.Dictionary2_ValueCollection_Enumerator__char__U-2283017f.h>
#include <app/Uno.Content.Fonts.RenderedGlyph.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph::GetEnumerator() { return Dictionary2_ValueCollection__char__Uno_Content_Fonts_RenderedGlyph__GetEnumerator(this); }

}}}


#endif
