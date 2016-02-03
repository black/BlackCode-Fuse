// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_FONT_H__
#define __APP_FUSE_FONT_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace; } } }
namespace app { namespace Uno { namespace Content { namespace Fonts { struct FontFace; } } } }
namespace app { namespace Uno { namespace UX { struct FileSource; } } }

namespace app {
namespace Fuse {

struct Font;

extern ::uStaticStrong< ::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace*> Font___fontFaces;

struct Font__uType : ::uClassType
{
};

Font__uType* Font__typeof();

void Font___ObjInit(Font* __this, ::app::Uno::UX::FileSource* file);
void Font___TypeInit(::uStatic* __this);
::app::Uno::UX::FileSource* Font__get_File(Font* __this);
::app::Uno::Content::Fonts::FontFace* Font__get_FontFace(Font* __this);
::app::Uno::Content::Fonts::FontFace* Font__Load(Font* __this);
Font* Font__New_1(::uStatic* __this, ::app::Uno::UX::FileSource* file);

struct Font : ::uObject
{
    ::uStrong< ::app::Uno::UX::FileSource*> _file;
    ::uStrong< ::app::Uno::Content::Fonts::FontFace*> _fontFace;

    void _ObjInit(::app::Uno::UX::FileSource* file) { Font___ObjInit(this, file); }
    ::app::Uno::UX::FileSource* File() { return Font__get_File(this); }
    ::app::Uno::Content::Fonts::FontFace* FontFace() { return Font__get_FontFace(this); }
    ::app::Uno::Content::Fonts::FontFace* Load() { return Font__Load(this); }
};

}}


#endif
