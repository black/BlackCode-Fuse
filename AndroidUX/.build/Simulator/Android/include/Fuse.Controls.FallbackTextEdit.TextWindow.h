// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.18.8\FallbackTextEdit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Scripting.INameScope.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{struct LineCache;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{struct TextSpan;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{struct TextWindow;}}}}
namespace g{namespace Fuse{namespace Controls{namespace Internal{struct WordWrapInfo;}}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace FallbackTextEdit{

// internal sealed class TextWindow :1726
// {
::g::Fuse::Elements::Element_type* TextWindow_typeof();
void TextWindow__ctor_2_fn(TextWindow* __this, ::g::Fuse::Node* parent, ::g::Fuse::Controls::FallbackTextEdit::LineCache* lineCache);
void TextWindow__CalcRenderBounds_fn(TextWindow* __this, ::g::Uno::Rect* __retval);
void TextWindow__Draw1_fn(TextWindow* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::g::Fuse::Controls::FallbackTextEdit::TextSpan* selection, ::g::Uno::Float4* textColor, ::g::Uno::Float4* selectionColor, int* maxTextLength, int* textAlignment, ::g::Uno::Float2* textBoundsSize, ::g::Uno::Float2* offset, ::g::Fuse::DrawContext* dc);
void TextWindow__New1_fn(::g::Fuse::Node* parent, ::g::Fuse::Controls::FallbackTextEdit::LineCache* lineCache, TextWindow** __retval);
void TextWindow__OnDraw_fn(TextWindow* __this, ::g::Fuse::DrawContext* dc);

struct TextWindow : ::g::Fuse::Elements::Element
{
    uStrong< ::g::Fuse::Controls::FallbackTextEdit::LineCache*> _lineCache;
    int _maxTextLength;
    ::g::Uno::Float2 _offset;
    uStrong< ::g::Fuse::Controls::FallbackTextEdit::TextSpan*> _selection;
    ::g::Uno::Float4 _selectionColor;
    int _textAlignment;
    ::g::Uno::Float2 _textBoundsSize;
    ::g::Uno::Float4 _textColor;
    uStrong< ::g::Fuse::Controls::Internal::WordWrapInfo*> _wrapInfo;

    void ctor_2(::g::Fuse::Node* parent, ::g::Fuse::Controls::FallbackTextEdit::LineCache* lineCache);
    void Draw1(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::g::Fuse::Controls::FallbackTextEdit::TextSpan* selection, ::g::Uno::Float4 textColor, ::g::Uno::Float4 selectionColor, int maxTextLength, int textAlignment, ::g::Uno::Float2 textBoundsSize, ::g::Uno::Float2 offset, ::g::Fuse::DrawContext* dc);
    static TextWindow* New1(::g::Fuse::Node* parent, ::g::Fuse::Controls::FallbackTextEdit::LineCache* lineCache);
};
// }

}}}} // ::g::Fuse::Controls::FallbackTextEdit
