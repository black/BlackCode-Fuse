// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\FallbackTextEdit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Graphics.ControlVisual-1.h>
#include <Fuse.Controls.TextEdit.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{struct LineCache;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{struct LineCachePasswordTransform;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{struct TextEditVisual;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{struct TextEditVisual__SwipeGestureHelper;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{struct TextPosition;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{struct TextSpan;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{struct TextWindow;}}}}
namespace g{namespace Fuse{namespace Controls{namespace Internal{struct WordWrapInfo;}}}}
namespace g{namespace Fuse{namespace Drawing{struct SolidColor;}}}
namespace g{namespace Fuse{namespace Input{struct TextEnteredArgs;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct Font;}}
namespace g{namespace Fuse{struct HitTestContext;}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace UX{struct ValueChangedArgs;}}}
namespace g{namespace Uno{struct EventArgs;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace FallbackTextEdit{

// public sealed class TextEditVisual :699
// {
::g::Fuse::Controls::Graphics::ControlVisual_type* TextEditVisual_typeof();
void TextEditVisual__Attach_fn(TextEditVisual* __this);
void TextEditVisual__BringCaretIntoView_fn(TextEditVisual* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, float* textBoundsWidth);
void TextEditVisual__CreateWrapInfo_fn(TextEditVisual* __this, float* wrapWidth, bool* haveWidth, ::g::Fuse::Controls::Internal::WordWrapInfo** __retval);
void TextEditVisual__DeleteSelection_fn(TextEditVisual* __this);
void TextEditVisual__Detach_fn(TextEditVisual* __this);
void TextEditVisual__DrawCaret_fn(TextEditVisual* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, float* textBoundsWidth, ::g::Fuse::DrawContext* dc);
void TextEditVisual__GetCaretRect_fn(TextEditVisual* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, float* textBoundsWidth, ::g::Uno::Rect* __retval);
void TextEditVisual__GetClampedTextBoundsRect_fn(TextEditVisual* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::g::Uno::Rect* __retval);
void TextEditVisual__GetClampedTextBoundsSize_fn(TextEditVisual* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::g::Uno::Float2* __retval);
void TextEditVisual__GetFontOrThrow_fn(TextEditVisual* __this, ::g::Fuse::Font** __retval);
void TextEditVisual__GetMarginSize_fn(TextEditVisual* __this, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval);
void TextEditVisual__GetSubNode_fn(TextEditVisual* __this, int* index, ::g::Fuse::Node** __retval);
void TextEditVisual__GetTextBoundsSize_fn(TextEditVisual* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::g::Uno::Float2* __retval);
void TextEditVisual__get_IsWordWrapEnabled_fn(TextEditVisual* __this, bool* __retval);
void TextEditVisual__OnArrangeMarginBox_fn(TextEditVisual* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* availableSize, int* availSet, ::g::Uno::Float2* __retval);
void TextEditVisual__OnDraw_fn(TextEditVisual* __this, ::g::Fuse::DrawContext* dc);
void TextEditVisual__OnHitTest_fn(TextEditVisual* __this, ::g::Fuse::HitTestContext* htc);
void TextEditVisual__OnTextEntered_fn(TextEditVisual* __this, uObject* sender, ::g::Fuse::Input::TextEnteredArgs* args);
void TextEditVisual__OnTextLayoutPropertyChanged_fn(TextEditVisual* __this, uObject* sender, ::g::Uno::EventArgs* args);
void TextEditVisual__OnTextRenderPropertyChanged_fn(TextEditVisual* __this, uObject* sender, ::g::Uno::EventArgs* args);
void TextEditVisual__OnValueChanged_fn(TextEditVisual* __this, uObject* sender, ::g::Uno::UX::ValueChangedArgs* args);
void TextEditVisual__ResetCaretBlink_fn(TextEditVisual* __this);
void TextEditVisual__SetWindowPos_fn(TextEditVisual* __this, ::g::Uno::Float2* p);
void TextEditVisual__get_SubNodeCount_fn(TextEditVisual* __this, int* __retval);
void TextEditVisual__TextBoundsToControl_fn(TextEditVisual* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval);
void TextEditVisual__TextBoundsToWindow_fn(TextEditVisual* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval);
void TextEditVisual__TransformUpdate_fn(TextEditVisual* __this, uObject* s, uObject* a);
void TextEditVisual__UpdateValue_fn(TextEditVisual* __this, uString* value);
void TextEditVisual__get_VisualTextTransform_fn(TextEditVisual* __this, int* __retval);
void TextEditVisual__set_VisualTextTransform_fn(TextEditVisual* __this, int* value);
void TextEditVisual__WindowToControl_fn(TextEditVisual* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval);

struct TextEditVisual : ::g::Fuse::Controls::Graphics::ControlVisual
{
    double _caretBlinkTime;
    uStrong< ::g::Fuse::Drawing::SolidColor*> _caretBrush;
    uStrong< ::g::Fuse::Controls::FallbackTextEdit::TextPosition*> _caretPosition;
    static uSStrong<TextEditVisual__SwipeGestureHelper*> _horizontalGesture_;
    static uSStrong<TextEditVisual__SwipeGestureHelper*>& _horizontalGesture() { return TextEditVisual_typeof()->Init(), _horizontalGesture_; }
    uStrong< ::g::Fuse::Controls::FallbackTextEdit::TextPosition*> _interactionSelectionStartPos;
    bool _isReadOnly;
    uStrong< ::g::Fuse::Controls::FallbackTextEdit::LineCache*> _lineCache;
    uStrong< ::g::Fuse::Controls::FallbackTextEdit::LineCachePasswordTransform*> _passwordTransform;
    double _revealEnd;
    uStrong< ::g::Fuse::Controls::FallbackTextEdit::TextSpan*> _selection;
    uStrong< ::g::Fuse::Controls::FallbackTextEdit::TextWindow*> _textWindow;
    static uSStrong<TextEditVisual__SwipeGestureHelper*> _verticalGesture_;
    static uSStrong<TextEditVisual__SwipeGestureHelper*>& _verticalGesture() { return TextEditVisual_typeof()->Init(), _verticalGesture_; }
    int _visualTextTransform;
    ::g::Uno::Float2 _windowPos;
    uStrong< ::g::Fuse::Controls::Internal::WordWrapInfo*> _wrapInfo;
    double RevealTime;

    void BringCaretIntoView(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, float textBoundsWidth);
    ::g::Fuse::Controls::Internal::WordWrapInfo* CreateWrapInfo(float wrapWidth, bool haveWidth);
    void DeleteSelection();
    void DrawCaret(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, float textBoundsWidth, ::g::Fuse::DrawContext* dc);
    ::g::Uno::Rect GetCaretRect(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, float textBoundsWidth);
    ::g::Uno::Rect GetClampedTextBoundsRect(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo);
    ::g::Uno::Float2 GetClampedTextBoundsSize(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo);
    ::g::Fuse::Font* GetFontOrThrow();
    ::g::Uno::Float2 GetTextBoundsSize(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo);
    bool IsWordWrapEnabled();
    void OnTextEntered(uObject* sender, ::g::Fuse::Input::TextEnteredArgs* args);
    void OnTextLayoutPropertyChanged(uObject* sender, ::g::Uno::EventArgs* args);
    void OnTextRenderPropertyChanged(uObject* sender, ::g::Uno::EventArgs* args);
    void OnValueChanged(uObject* sender, ::g::Uno::UX::ValueChangedArgs* args);
    void ResetCaretBlink();
    void SetWindowPos(::g::Uno::Float2 p);
    ::g::Uno::Float2 TextBoundsToControl(::g::Uno::Float2 p);
    ::g::Uno::Float2 TextBoundsToWindow(::g::Uno::Float2 p);
    void TransformUpdate(uObject* s, uObject* a);
    void UpdateValue(uString* value);
    int VisualTextTransform();
    void VisualTextTransform(int value);
    ::g::Uno::Float2 WindowToControl(::g::Uno::Float2 p);
};
// }

}}}} // ::g::Fuse::Controls::FallbackTextEdit
