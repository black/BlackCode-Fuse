// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_TEXT_RENDERER_H__
#define __APP_FUSE_I_O_S_TEXT_RENDERER_H__

#include <app/Fuse.Controls.Graphics.TextVisual.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace iOS {

struct TextRenderer;

struct TextRenderer__uType : ::app::Fuse::Controls::Graphics::TextVisual__uType
{
};

TextRenderer__uType* TextRenderer__typeof();

void TextRenderer___ObjInit_4(TextRenderer* __this);
::app::Uno::Float2 TextRenderer__GetMarginSize(TextRenderer* __this, ::app::Uno::Float2 fillSize, int fillSet);
TextRenderer* TextRenderer__New_1(::uStatic* __this);
void TextRenderer__OnDraw(TextRenderer* __this, ::app::Fuse::DrawContext* dc);

struct TextRenderer : ::app::Fuse::Controls::Graphics::TextVisual
{
    void _ObjInit_4() { TextRenderer___ObjInit_4(this); }
};

}}}


#endif
