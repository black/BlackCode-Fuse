// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Fonts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_FONTS_BITMAP_FONT_H__
#define __APP_UNO_CONTENT_FONTS_BITMAP_FONT_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__char__float; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float; } } }
namespace app { namespace Uno { namespace Content { namespace Fonts { struct FontFace; } } } }
namespace app { namespace Uno { namespace Graphics { struct Texture2D; } } }
namespace app { namespace Uno { struct Buffer; } }

namespace app {
namespace Uno {
namespace Content {
namespace Fonts {

struct BitmapFont;

struct BitmapFont__uType : ::uClassType
{
};

BitmapFont__uType* BitmapFont__typeof();

void BitmapFont___ObjInit(BitmapFont* __this);
BitmapFont* BitmapFont__CreateFromPbf(::uStatic* __this, ::app::Uno::Buffer* pbf, ::app::Uno::Graphics::Texture2D* tex);
BitmapFont* BitmapFont__New_1(::uStatic* __this);

struct BitmapFont : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo*> Glyphs;
    ::uStrong< ::app::Uno::Collections::Dictionary__char__float*> Advances;
    ::uStrong< ::app::Uno::Collections::Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float*> Kernings;
    ::uStrong< ::app::Uno::Graphics::Texture2D*> Texture;
    float Ascent;
    float Descent;
    float LineHeight;
    float PixelSize;
    float PixelSpread;
    ::uStrong< ::uString*> FamilyName;
    ::uStrong< ::uString*> StyleName;
    ::uStrong< ::app::Uno::Content::Fonts::FontFace*> FontFace;

    void _ObjInit() { BitmapFont___ObjInit(this); }
};

}}}}


#endif
