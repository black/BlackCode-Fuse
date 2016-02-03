// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__CHAR__UNO_CONTENT__31E5337A_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__CHAR__UNO_CONTENT__31E5337A_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo; } } }
namespace app { namespace Uno { namespace Content { namespace Fonts { struct BitmapFont_GlyphInfo; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo;

struct Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__uType : ::uClassType
{
};

Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__uType* Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__typeof();

void Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo___ObjInit(Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this, ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* source);
int Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__get_Count(Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this);
::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__GetEnumerator(Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this);
Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* source);
void Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this, ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo item);
void Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this);
bool Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this, ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo item);
bool Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* __this, ::app::Uno::Content::Fonts::BitmapFont_GlyphInfo item);

struct Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo*> _source;

    void _ObjInit(::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo* source) { Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo___ObjInit(this, source); }
    int Count() { return Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__get_Count(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo GetEnumerator();
};

}}}

#include <app/Uno.Collections.Dictionary2_ValueCollection_Enumerator__char__U-8d22080b.h>
#include <app/Uno.Content.Fonts.BitmapFont_GlyphInfo.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__char__Uno_Content_Fonts_BitmapFont_GlyphInfo Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo::GetEnumerator() { return Dictionary2_ValueCollection__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__GetEnumerator(this); }

}}}


#endif
