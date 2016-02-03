// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\TextEdit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_TEXT_EDIT_TEXT_EDIT_VISUAL_H__
#define __APP_FUSE_CONTROLS_TEXT_EDIT_TEXT_EDIT_VISUAL_H__

#include <app/Fuse.Controls.Graphics.ControlVisual__Fuse_Controls_TextInput.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Uno.Float2.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { namespace Internal { struct WordWrapInfo; } } } }
namespace app { namespace Fuse { namespace Controls { namespace TextEdit { struct LineCache; } } } }
namespace app { namespace Fuse { namespace Controls { namespace TextEdit { struct LineCachePasswordTransform; } } } }
namespace app { namespace Fuse { namespace Controls { namespace TextEdit { struct TextEditVisual_SwipeGestureHelper; } } } }
namespace app { namespace Fuse { namespace Controls { namespace TextEdit { struct TextPosition; } } } }
namespace app { namespace Fuse { namespace Controls { namespace TextEdit { struct TextSpan; } } } }
namespace app { namespace Fuse { namespace Controls { namespace TextEdit { struct TextWindow; } } } }
namespace app { namespace Fuse { namespace Drawing { struct SolidColor; } } }
namespace app { namespace Fuse { namespace Input { struct FocusGainedArgs; } } }
namespace app { namespace Fuse { namespace Input { struct FocusLostArgs; } } }
namespace app { namespace Fuse { namespace Input { struct KeyPressedArgs; } } }
namespace app { namespace Fuse { namespace Input { struct PointerMovedArgs; } } }
namespace app { namespace Fuse { namespace Input { struct PointerPressedArgs; } } }
namespace app { namespace Fuse { namespace Input { struct PointerReleasedArgs; } } }
namespace app { namespace Fuse { namespace Input { struct TextEnteredArgs; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Fuse { struct Font; } }
namespace app { namespace Fuse { struct HitTestContext; } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct ValueChangedArgs__string; } } }
namespace app { namespace Uno { struct EventArgs; } }
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Fuse {
namespace Controls {
namespace TextEdit {

struct TextEditVisual;

extern ::uStaticStrong< ::app::Fuse::Controls::TextEdit::TextEditVisual_SwipeGestureHelper*> TextEditVisual___horizontalGesture;
extern ::uStaticStrong< ::app::Fuse::Controls::TextEdit::TextEditVisual_SwipeGestureHelper*> TextEditVisual___verticalGesture;

struct TextEditVisual__uType : ::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_TextInput__uType
{
};

TextEditVisual__uType* TextEditVisual__typeof();

void TextEditVisual___ObjInit_3(TextEditVisual* __this);
void TextEditVisual___TypeInit_1(::uStatic* __this);
void TextEditVisual__Attach(TextEditVisual* __this);
void TextEditVisual__BringCaretIntoView(TextEditVisual* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, float textBoundsWidth);
void TextEditVisual__ClearPasswordReveal(TextEditVisual* __this);
::app::Uno::Float2 TextEditVisual__ControlToTextBounds(TextEditVisual* __this, ::app::Uno::Float2 p);
::app::Uno::Float2 TextEditVisual__ControlToWindow(TextEditVisual* __this, ::app::Uno::Float2 p);
::app::Fuse::Controls::Internal::WordWrapInfo* TextEditVisual__CreateWrapInfo(TextEditVisual* __this, float wrapWidth, bool haveWidth);
void TextEditVisual__DeleteSelection(TextEditVisual* __this);
void TextEditVisual__Detach(TextEditVisual* __this);
void TextEditVisual__DrawCaret(TextEditVisual* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, float textBoundsWidth, ::app::Fuse::DrawContext* dc);
bool TextEditVisual__get_IsWordWrapEnabled(TextEditVisual* __this);
::uString* TextEditVisual__get_SelectedText(TextEditVisual* __this);
int TextEditVisual__get_SubNodeCount(TextEditVisual* __this);
int TextEditVisual__get_VisualTextTransform(TextEditVisual* __this);
::app::Uno::Rect TextEditVisual__GetCaretRect(TextEditVisual* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, float textBoundsWidth);
::app::Uno::Rect TextEditVisual__GetClampedTextBoundsRect(TextEditVisual* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo);
::app::Uno::Float2 TextEditVisual__GetClampedTextBoundsSize(TextEditVisual* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo);
::app::Fuse::Font* TextEditVisual__GetFontOrThrow(TextEditVisual* __this);
::app::Uno::Float2 TextEditVisual__GetMarginSize(TextEditVisual* __this, ::app::Uno::Float2 fillSize, int fillSet);
::app::Fuse::Node* TextEditVisual__GetSubNode(TextEditVisual* __this, int index);
::app::Uno::Float2 TextEditVisual__GetTextBoundsSize(TextEditVisual* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo);
void TextEditVisual__HandleLeftArrow(TextEditVisual* __this, ::app::Fuse::Input::KeyPressedArgs* args);
void TextEditVisual__HandleRightArrow(TextEditVisual* __this, ::app::Fuse::Input::KeyPressedArgs* args);
void TextEditVisual__InvalidateLineCacheLayout(TextEditVisual* __this);
void TextEditVisual__MoveSelection(TextEditVisual* __this, ::app::Uno::Float2 windowPoint);
TextEditVisual* TextEditVisual__New_1(::uStatic* __this);
::app::Uno::Float2 TextEditVisual__OnArrangeMarginBox(TextEditVisual* __this, ::app::Uno::Float2 position, ::app::Uno::Float2 availableSize, int availSet);
void TextEditVisual__OnDraw(TextEditVisual* __this, ::app::Fuse::DrawContext* dc);
void TextEditVisual__OnGotFocus(TextEditVisual* __this, ::uObject* sender, ::app::Fuse::Input::FocusGainedArgs* args);
void TextEditVisual__OnHitTest(TextEditVisual* __this, ::app::Fuse::HitTestContext* htc);
void TextEditVisual__OnKeyPressed(TextEditVisual* __this, ::uObject* sender, ::app::Fuse::Input::KeyPressedArgs* args);
void TextEditVisual__OnLostCapture(TextEditVisual* __this);
void TextEditVisual__OnLostFocus(TextEditVisual* __this, ::uObject* sender, ::app::Fuse::Input::FocusLostArgs* args);
void TextEditVisual__OnPointerMoved(TextEditVisual* __this, ::uObject* sender, ::app::Fuse::Input::PointerMovedArgs* c);
void TextEditVisual__OnPointerPressed(TextEditVisual* __this, ::uObject* sender, ::app::Fuse::Input::PointerPressedArgs* c);
void TextEditVisual__OnPointerReleased(TextEditVisual* __this, ::uObject* sender, ::app::Fuse::Input::PointerReleasedArgs* c);
void TextEditVisual__OnTextEdited(TextEditVisual* __this);
void TextEditVisual__OnTextEntered(TextEditVisual* __this, ::uObject* sender, ::app::Fuse::Input::TextEnteredArgs* args);
void TextEditVisual__OnTextLayoutPropertyChanged(TextEditVisual* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void TextEditVisual__OnTextRenderPropertyChanged(TextEditVisual* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void TextEditVisual__OnUpdate(TextEditVisual* __this, ::uObject* s, ::uObject* a);
void TextEditVisual__OnValueChanged(TextEditVisual* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__string* args);
void TextEditVisual__ResetCaretBlink(TextEditVisual* __this);
void TextEditVisual__ResetWindowPosition(TextEditVisual* __this);
void TextEditVisual__Select(TextEditVisual* __this, ::app::Fuse::Controls::TextEdit::TextPosition* oldCaretPos, ::app::Fuse::Controls::TextEdit::TextPosition* newCaretPos, bool shouldSelect);
void TextEditVisual__SelectAll(TextEditVisual* __this);
void TextEditVisual__SelectFunc(TextEditVisual* __this, ::app::Fuse::Controls::TextEdit::TextPosition* oldCaretPos, ::app::Fuse::Controls::TextEdit::TextPosition* newCaretPos);
void TextEditVisual__set_VisualTextTransform(TextEditVisual* __this, int value);
void TextEditVisual__SetCaretPos(TextEditVisual* __this, ::app::Uno::Float2 p);
void TextEditVisual__SetWindowPos(TextEditVisual* __this, ::app::Uno::Float2 p);
void TextEditVisual__StartSelection(TextEditVisual* __this, ::app::Uno::Float2 windowPoint);
::app::Uno::Float2 TextEditVisual__TextBoundsToControl(TextEditVisual* __this, ::app::Uno::Float2 p);
::app::Uno::Float2 TextEditVisual__TextBoundsToWindow(TextEditVisual* __this, ::app::Uno::Float2 p);
void TextEditVisual__TransformUpdate(TextEditVisual* __this, ::uObject* s, ::uObject* a);
void TextEditVisual__UpdateValue(TextEditVisual* __this, ::uString* value);
::app::Uno::Float2 TextEditVisual__WindowToControl(TextEditVisual* __this, ::app::Uno::Float2 p);
::app::Uno::Float2 TextEditVisual__WindowToTextBounds(TextEditVisual* __this, ::app::Uno::Float2 p);

struct TextEditVisual : ::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_TextInput
{
    bool _isReadOnly;
    int _visualTextTransform;
    ::uStrong< ::app::Fuse::Controls::TextEdit::LineCachePasswordTransform*> _passwordTransform;
    double RevealTime;
    double _revealEnd;
    ::uStrong< ::app::Fuse::Controls::Internal::WordWrapInfo*> _wrapInfo;
    ::uStrong< ::app::Fuse::Drawing::SolidColor*> _caretBrush;
    ::uStrong< ::app::Fuse::Controls::TextEdit::LineCache*> _lineCache;
    ::uStrong< ::app::Fuse::Controls::TextEdit::TextWindow*> _textWindow;
    ::app::Uno::Float2 _windowPos;
    ::uStrong< ::app::Fuse::Controls::TextEdit::TextPosition*> _caretPosition;
    ::uStrong< ::app::Fuse::Controls::TextEdit::TextPosition*> _interactionSelectionStartPos;
    ::uStrong< ::app::Fuse::Controls::TextEdit::TextSpan*> _selection;
    double _caretBlinkTime;
    ::app::Uno::Float2 _startCoord;
    int _down;

    void _ObjInit_3() { TextEditVisual___ObjInit_3(this); }
    void BringCaretIntoView(::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, float textBoundsWidth) { TextEditVisual__BringCaretIntoView(this, wrapInfo, textBoundsWidth); }
    void ClearPasswordReveal() { TextEditVisual__ClearPasswordReveal(this); }
    ::app::Uno::Float2 ControlToTextBounds(::app::Uno::Float2 p);
    ::app::Uno::Float2 ControlToWindow(::app::Uno::Float2 p);
    ::app::Fuse::Controls::Internal::WordWrapInfo* CreateWrapInfo(float wrapWidth, bool haveWidth) { return TextEditVisual__CreateWrapInfo(this, wrapWidth, haveWidth); }
    void DeleteSelection() { TextEditVisual__DeleteSelection(this); }
    void DrawCaret(::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, float textBoundsWidth, ::app::Fuse::DrawContext* dc) { TextEditVisual__DrawCaret(this, wrapInfo, textBoundsWidth, dc); }
    bool IsWordWrapEnabled() { return TextEditVisual__get_IsWordWrapEnabled(this); }
    ::uString* SelectedText() { return TextEditVisual__get_SelectedText(this); }
    int VisualTextTransform() { return TextEditVisual__get_VisualTextTransform(this); }
    ::app::Uno::Rect GetCaretRect(::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, float textBoundsWidth);
    ::app::Uno::Rect GetClampedTextBoundsRect(::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo);
    ::app::Uno::Float2 GetClampedTextBoundsSize(::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo);
    ::app::Fuse::Font* GetFontOrThrow() { return TextEditVisual__GetFontOrThrow(this); }
    ::app::Uno::Float2 GetTextBoundsSize(::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo);
    void HandleLeftArrow(::app::Fuse::Input::KeyPressedArgs* args) { TextEditVisual__HandleLeftArrow(this, args); }
    void HandleRightArrow(::app::Fuse::Input::KeyPressedArgs* args) { TextEditVisual__HandleRightArrow(this, args); }
    void InvalidateLineCacheLayout() { TextEditVisual__InvalidateLineCacheLayout(this); }
    void MoveSelection(::app::Uno::Float2 windowPoint);
    void OnGotFocus(::uObject* sender, ::app::Fuse::Input::FocusGainedArgs* args) { TextEditVisual__OnGotFocus(this, sender, args); }
    void OnKeyPressed(::uObject* sender, ::app::Fuse::Input::KeyPressedArgs* args) { TextEditVisual__OnKeyPressed(this, sender, args); }
    void OnLostCapture() { TextEditVisual__OnLostCapture(this); }
    void OnLostFocus(::uObject* sender, ::app::Fuse::Input::FocusLostArgs* args) { TextEditVisual__OnLostFocus(this, sender, args); }
    void OnPointerMoved(::uObject* sender, ::app::Fuse::Input::PointerMovedArgs* c) { TextEditVisual__OnPointerMoved(this, sender, c); }
    void OnPointerPressed(::uObject* sender, ::app::Fuse::Input::PointerPressedArgs* c) { TextEditVisual__OnPointerPressed(this, sender, c); }
    void OnPointerReleased(::uObject* sender, ::app::Fuse::Input::PointerReleasedArgs* c) { TextEditVisual__OnPointerReleased(this, sender, c); }
    void OnTextEdited() { TextEditVisual__OnTextEdited(this); }
    void OnTextEntered(::uObject* sender, ::app::Fuse::Input::TextEnteredArgs* args) { TextEditVisual__OnTextEntered(this, sender, args); }
    void OnTextLayoutPropertyChanged(::uObject* sender, ::app::Uno::EventArgs* args) { TextEditVisual__OnTextLayoutPropertyChanged(this, sender, args); }
    void OnTextRenderPropertyChanged(::uObject* sender, ::app::Uno::EventArgs* args) { TextEditVisual__OnTextRenderPropertyChanged(this, sender, args); }
    void OnUpdate(::uObject* s, ::uObject* a) { TextEditVisual__OnUpdate(this, s, a); }
    void OnValueChanged(::uObject* sender, ::app::Uno::UX::ValueChangedArgs__string* args) { TextEditVisual__OnValueChanged(this, sender, args); }
    void ResetCaretBlink() { TextEditVisual__ResetCaretBlink(this); }
    void ResetWindowPosition() { TextEditVisual__ResetWindowPosition(this); }
    void Select(::app::Fuse::Controls::TextEdit::TextPosition* oldCaretPos, ::app::Fuse::Controls::TextEdit::TextPosition* newCaretPos, bool shouldSelect) { TextEditVisual__Select(this, oldCaretPos, newCaretPos, shouldSelect); }
    void SelectAll() { TextEditVisual__SelectAll(this); }
    void SelectFunc(::app::Fuse::Controls::TextEdit::TextPosition* oldCaretPos, ::app::Fuse::Controls::TextEdit::TextPosition* newCaretPos) { TextEditVisual__SelectFunc(this, oldCaretPos, newCaretPos); }
    void VisualTextTransform(int value) { TextEditVisual__set_VisualTextTransform(this, value); }
    void SetCaretPos(::app::Uno::Float2 p);
    void SetWindowPos(::app::Uno::Float2 p);
    void StartSelection(::app::Uno::Float2 windowPoint);
    ::app::Uno::Float2 TextBoundsToControl(::app::Uno::Float2 p);
    ::app::Uno::Float2 TextBoundsToWindow(::app::Uno::Float2 p);
    void TransformUpdate(::uObject* s, ::uObject* a) { TextEditVisual__TransformUpdate(this, s, a); }
    void UpdateValue(::uString* value) { TextEditVisual__UpdateValue(this, value); }
    ::app::Uno::Float2 WindowToControl(::app::Uno::Float2 p);
    ::app::Uno::Float2 WindowToTextBounds(::app::Uno::Float2 p);
};

}}}}

#include <app/Uno.Rect.h>

namespace app {
namespace Fuse {
namespace Controls {
namespace TextEdit {

inline ::app::Uno::Float2 TextEditVisual::ControlToTextBounds(::app::Uno::Float2 p) { return TextEditVisual__ControlToTextBounds(this, p); }
inline ::app::Uno::Float2 TextEditVisual::ControlToWindow(::app::Uno::Float2 p) { return TextEditVisual__ControlToWindow(this, p); }
inline ::app::Uno::Rect TextEditVisual::GetCaretRect(::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, float textBoundsWidth) { return TextEditVisual__GetCaretRect(this, wrapInfo, textBoundsWidth); }
inline ::app::Uno::Rect TextEditVisual::GetClampedTextBoundsRect(::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo) { return TextEditVisual__GetClampedTextBoundsRect(this, wrapInfo); }
inline ::app::Uno::Float2 TextEditVisual::GetClampedTextBoundsSize(::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo) { return TextEditVisual__GetClampedTextBoundsSize(this, wrapInfo); }
inline ::app::Uno::Float2 TextEditVisual::GetTextBoundsSize(::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo) { return TextEditVisual__GetTextBoundsSize(this, wrapInfo); }
inline void TextEditVisual::MoveSelection(::app::Uno::Float2 windowPoint) { TextEditVisual__MoveSelection(this, windowPoint); }
inline void TextEditVisual::SetCaretPos(::app::Uno::Float2 p) { TextEditVisual__SetCaretPos(this, p); }
inline void TextEditVisual::SetWindowPos(::app::Uno::Float2 p) { TextEditVisual__SetWindowPos(this, p); }
inline void TextEditVisual::StartSelection(::app::Uno::Float2 windowPoint) { TextEditVisual__StartSelection(this, windowPoint); }
inline ::app::Uno::Float2 TextEditVisual::TextBoundsToControl(::app::Uno::Float2 p) { return TextEditVisual__TextBoundsToControl(this, p); }
inline ::app::Uno::Float2 TextEditVisual::TextBoundsToWindow(::app::Uno::Float2 p) { return TextEditVisual__TextBoundsToWindow(this, p); }
inline ::app::Uno::Float2 TextEditVisual::WindowToControl(::app::Uno::Float2 p) { return TextEditVisual__WindowToControl(this, p); }
inline ::app::Uno::Float2 TextEditVisual::WindowToTextBounds(::app::Uno::Float2 p) { return TextEditVisual__WindowToTextBounds(this, p); }

}}}}


#endif
