// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Graphics.TextVisual.h>
#include <Fuse.Scripting.INameScope.h>
namespace g{namespace Fuse{namespace iOS{struct TextRenderer;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace iOS{

// public sealed extern class TextRenderer :1076
// {
::g::Fuse::Controls::Graphics::ControlVisual_type* TextRenderer_typeof();
void TextRenderer__ctor_4_fn(TextRenderer* __this);
void TextRenderer__GetMarginSize_fn(TextRenderer* __this, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval);
void TextRenderer__New1_fn(TextRenderer** __retval);
void TextRenderer__OnDraw_fn(TextRenderer* __this, ::g::Fuse::DrawContext* dc);

struct TextRenderer : ::g::Fuse::Controls::Graphics::TextVisual
{
    void ctor_4();
    static TextRenderer* New1();
};
// }

}}} // ::g::Fuse::iOS
