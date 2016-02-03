// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION__CHAR__UNO_CONTENT_FO_AE4173ED_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION__CHAR__UNO_CONTENT_FO_AE4173ED_H__

#include <app/Uno.Collections.IEnumerable__char.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__char__Uno_Content_Fonts_RenderedGlyph; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_KeyCollection__char__Uno_Content_Fonts_RenderedGlyph;

struct Dictionary2_KeyCollection__char__Uno_Content_Fonts_RenderedGlyph__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__char __interface_0;
};

Dictionary2_KeyCollection__char__Uno_Content_Fonts_RenderedGlyph__uType* Dictionary2_KeyCollection__char__Uno_Content_Fonts_RenderedGlyph__typeof();

::uObject* Dictionary2_KeyCollection__char__Uno_Content_Fonts_RenderedGlyph__GetEnumerator_boxed(Dictionary2_KeyCollection__char__Uno_Content_Fonts_RenderedGlyph* __this);
void Dictionary2_KeyCollection__char__Uno_Content_Fonts_RenderedGlyph___ObjInit(Dictionary2_KeyCollection__char__Uno_Content_Fonts_RenderedGlyph* __this, ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_RenderedGlyph* source);
int Dictionary2_KeyCollection__char__Uno_Content_Fonts_RenderedGlyph__get_Count(Dictionary2_KeyCollection__char__Uno_Content_Fonts_RenderedGlyph* __this);
::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph Dictionary2_KeyCollection__char__Uno_Content_Fonts_RenderedGlyph__GetEnumerator(Dictionary2_KeyCollection__char__Uno_Content_Fonts_RenderedGlyph* __this);
Dictionary2_KeyCollection__char__Uno_Content_Fonts_RenderedGlyph* Dictionary2_KeyCollection__char__Uno_Content_Fonts_RenderedGlyph__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_RenderedGlyph* source);
void Dictionary2_KeyCollection__char__Uno_Content_Fonts_RenderedGlyph__Uno_Collections_ICollection_Add(Dictionary2_KeyCollection__char__Uno_Content_Fonts_RenderedGlyph* __this, ::uChar item);
void Dictionary2_KeyCollection__char__Uno_Content_Fonts_RenderedGlyph__Uno_Collections_ICollection_Clear(Dictionary2_KeyCollection__char__Uno_Content_Fonts_RenderedGlyph* __this);
bool Dictionary2_KeyCollection__char__Uno_Content_Fonts_RenderedGlyph__Uno_Collections_ICollection_Contains(Dictionary2_KeyCollection__char__Uno_Content_Fonts_RenderedGlyph* __this, ::uChar item);
bool Dictionary2_KeyCollection__char__Uno_Content_Fonts_RenderedGlyph__Uno_Collections_ICollection_Remove(Dictionary2_KeyCollection__char__Uno_Content_Fonts_RenderedGlyph* __this, ::uChar item);

struct Dictionary2_KeyCollection__char__Uno_Content_Fonts_RenderedGlyph : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_RenderedGlyph*> _source;

    ::uObject* GetEnumerator_boxed() { return Dictionary2_KeyCollection__char__Uno_Content_Fonts_RenderedGlyph__GetEnumerator_boxed(this); }
    void _ObjInit(::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_RenderedGlyph* source) { Dictionary2_KeyCollection__char__Uno_Content_Fonts_RenderedGlyph___ObjInit(this, source); }
    int Count() { return Dictionary2_KeyCollection__char__Uno_Content_Fonts_RenderedGlyph__get_Count(this); }
    ::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph GetEnumerator();
};

}}}

#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__char__Uno-ef5fafe7.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__char__Uno_Content_Fonts_RenderedGlyph Dictionary2_KeyCollection__char__Uno_Content_Fonts_RenderedGlyph::GetEnumerator() { return Dictionary2_KeyCollection__char__Uno_Content_Fonts_RenderedGlyph__GetEnumerator(this); }

}}}


#endif
