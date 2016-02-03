// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_INTERNAL_DEFAULT_TEXT_RENDERER_FONT_KEY_H__
#define __APP_FUSE_CONTROLS_INTERNAL_DEFAULT_TEXT_RENDERER_FONT_KEY_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Content { namespace Fonts { struct FontFace; } } } }

namespace app {
namespace Fuse {
namespace Controls {
namespace Internal {

struct DefaultTextRenderer_FontKey;

struct DefaultTextRenderer_FontKey__uType : ::uClassType
{
};

DefaultTextRenderer_FontKey__uType* DefaultTextRenderer_FontKey__typeof();

void DefaultTextRenderer_FontKey___ObjInit(DefaultTextRenderer_FontKey* __this, ::app::Uno::Content::Fonts::FontFace* fontFace, int size);
bool DefaultTextRenderer_FontKey__Equals(DefaultTextRenderer_FontKey* __this, ::uObject* obj);
int DefaultTextRenderer_FontKey__GetHashCode(DefaultTextRenderer_FontKey* __this);
DefaultTextRenderer_FontKey* DefaultTextRenderer_FontKey__New_1(::uStatic* __this, ::app::Uno::Content::Fonts::FontFace* fontFace, int size);

struct DefaultTextRenderer_FontKey : ::uObject
{
    ::uStrong< ::app::Uno::Content::Fonts::FontFace*> FontFace;
    int Size;

    void _ObjInit(::app::Uno::Content::Fonts::FontFace* fontFace, int size) { DefaultTextRenderer_FontKey___ObjInit(this, fontFace, size); }
};

}}}}


#endif
