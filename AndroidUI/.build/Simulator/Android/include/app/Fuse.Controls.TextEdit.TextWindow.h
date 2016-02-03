// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\TextEdit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_TEXT_EDIT_TEXT_WINDOW_H__
#define __APP_FUSE_CONTROLS_TEXT_EDIT_TEXT_WINDOW_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { namespace Internal { struct WordWrapInfo; } } } }
namespace app { namespace Fuse { namespace Controls { namespace TextEdit { struct LineCache; } } } }
namespace app { namespace Fuse { namespace Controls { namespace TextEdit { struct TextSpan; } } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Fuse {
namespace Controls {
namespace TextEdit {

struct TextWindow;

struct TextWindow__uType : ::app::Fuse::Elements::Element__uType
{
};

TextWindow__uType* TextWindow__typeof();

void TextWindow___ObjInit_2(TextWindow* __this, ::app::Fuse::Node* parent, ::app::Fuse::Controls::TextEdit::LineCache* lineCache);
::app::Uno::Rect TextWindow__CalcRenderBounds(TextWindow* __this);
void TextWindow__Draw_1(TextWindow* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::app::Fuse::Controls::TextEdit::TextSpan* selection, ::app::Uno::Float4 textColor, ::app::Uno::Float4 selectionColor, int maxTextLength, int textAlignment, ::app::Uno::Float2 textBoundsSize, ::app::Uno::Float2 offset, ::app::Fuse::DrawContext* dc);
TextWindow* TextWindow__New_1(::uStatic* __this, ::app::Fuse::Node* parent, ::app::Fuse::Controls::TextEdit::LineCache* lineCache);
void TextWindow__OnDraw(TextWindow* __this, ::app::Fuse::DrawContext* dc);

struct TextWindow : ::app::Fuse::Elements::Element
{
    ::uStrong< ::app::Fuse::Controls::TextEdit::LineCache*> _lineCache;
    ::uStrong< ::app::Fuse::Controls::Internal::WordWrapInfo*> _wrapInfo;
    ::uStrong< ::app::Fuse::Controls::TextEdit::TextSpan*> _selection;
    ::app::Uno::Float4 _textColor;
    ::app::Uno::Float4 _selectionColor;
    int _maxTextLength;
    int _textAlignment;
    ::app::Uno::Float2 _textBoundsSize;
    ::app::Uno::Float2 _offset;

    void _ObjInit_2(::app::Fuse::Node* parent, ::app::Fuse::Controls::TextEdit::LineCache* lineCache) { TextWindow___ObjInit_2(this, parent, lineCache); }
    void Draw_1(::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::app::Fuse::Controls::TextEdit::TextSpan* selection, ::app::Uno::Float4 textColor, ::app::Uno::Float4 selectionColor, int maxTextLength, int textAlignment, ::app::Uno::Float2 textBoundsSize, ::app::Uno::Float2 offset, ::app::Fuse::DrawContext* dc);
};

}}}}

#include <app/Uno.Rect.h>

namespace app {
namespace Fuse {
namespace Controls {
namespace TextEdit {

inline void TextWindow::Draw_1(::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::app::Fuse::Controls::TextEdit::TextSpan* selection, ::app::Uno::Float4 textColor, ::app::Uno::Float4 selectionColor, int maxTextLength, int textAlignment, ::app::Uno::Float2 textBoundsSize, ::app::Uno::Float2 offset, ::app::Fuse::DrawContext* dc) { TextWindow__Draw_1(this, wrapInfo, selection, textColor, selectionColor, maxTextLength, textAlignment, textBoundsSize, offset, dc); }

}}}}


#endif
