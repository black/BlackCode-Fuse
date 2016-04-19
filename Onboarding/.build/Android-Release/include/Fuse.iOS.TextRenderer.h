// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.iOS\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Graphics.TextVisual.h>
namespace g{namespace Fuse{namespace iOS{struct TextRenderer;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace iOS{

// public sealed extern class TextRenderer :1076
// {
::g::Fuse::Controls::Graphics::ControlVisual_type* TextRenderer_typeof();
void TextRenderer__GetMarginSize_fn(TextRenderer* __this, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval);
void TextRenderer__OnDraw_fn(TextRenderer* __this, ::g::Fuse::DrawContext* dc);

struct TextRenderer : ::g::Fuse::Controls::Graphics::TextVisual
{
};
// }

}}} // ::g::Fuse::iOS
