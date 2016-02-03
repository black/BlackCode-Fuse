// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\TextEdit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_TEXT_EDIT_LINE_CACHE_H__
#define __APP_FUSE_CONTROLS_TEXT_EDIT_LINE_CACHE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { namespace Internal { struct WordWrapInfo; } } } }
namespace app { namespace Fuse { namespace Controls { namespace TextEdit { struct TextPosition; } } } }
namespace app { namespace Fuse { namespace Controls { namespace TextEdit { struct TextSpan; } } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Controls_TextEdit_LineCacheLine; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Controls {
namespace TextEdit {

struct LineCache;

struct LineCache__uType : ::uClassType
{
};

LineCache__uType* LineCache__typeof();

void LineCache___ObjInit(LineCache* __this, ::uDelegate* onTextChanged, ::uDelegate* invalideLayout);
::app::Fuse::Controls::TextEdit::TextPosition* LineCache__BoundsToTextPos(LineCache* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, ::app::Uno::Float2 p);
::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine* LineCache__DecomposeLines(LineCache* __this, ::uString* text);
::app::Fuse::Controls::TextEdit::TextPosition* LineCache__DeleteSpan(LineCache* __this, ::app::Fuse::Controls::TextEdit::TextSpan* s);
::app::Fuse::Controls::TextEdit::TextPosition* LineCache__End(LineCache* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::app::Fuse::Controls::TextEdit::TextPosition* p);
bool LineCache__get_IsMultiline(LineCache* __this);
::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine* LineCache__get_Lines(LineCache* __this);
::uString* LineCache__get_Text(LineCache* __this);
::uObject* LineCache__get_Transform(LineCache* __this);
::app::Uno::Float2 LineCache__GetBoundsSize(LineCache* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo);
::app::Fuse::Controls::TextEdit::TextSpan* LineCache__GetFullTextSpan(LineCache* __this);
::app::Fuse::Controls::TextEdit::TextPosition* LineCache__GetLastTextPos(LineCache* __this);
::uString* LineCache__GetString(LineCache* __this, ::app::Fuse::Controls::TextEdit::TextSpan* s);
::app::Fuse::Controls::TextEdit::TextPosition* LineCache__Home(LineCache* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::app::Fuse::Controls::TextEdit::TextPosition* p);
::app::Fuse::Controls::TextEdit::TextPosition* LineCache__InsertChar(LineCache* __this, ::app::Fuse::Controls::TextEdit::TextPosition* p, ::uChar c);
::app::Fuse::Controls::TextEdit::TextPosition* LineCache__InsertNewline(LineCache* __this, ::app::Fuse::Controls::TextEdit::TextPosition* p);
void LineCache__InvalidateLayout(LineCache* __this);
void LineCache__InvalidateText(LineCache* __this, bool noChange);
void LineCache__InvalidateVisual(LineCache* __this);
bool LineCache__IsWordBreaker(LineCache* __this, ::uChar c);
LineCache* LineCache__New_1(::uStatic* __this, ::uDelegate* onTextChanged, ::uDelegate* invalideLayout);
int LineCache__NextWordLeft(LineCache* __this, ::uString* str, int startIdx);
int LineCache__NextWordRight(LineCache* __this, ::uString* str, int startIdx);
void LineCache__set_IsMultiline(LineCache* __this, bool value);
void LineCache__set_Text(LineCache* __this, ::uString* value);
void LineCache__set_Transform(LineCache* __this, ::uObject* value);
::app::Uno::Float2 LineCache__TextPosToBounds(LineCache* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, ::app::Fuse::Controls::TextEdit::TextPosition* p);
::app::Fuse::Controls::TextEdit::TextPosition* LineCache__TryBackspace(LineCache* __this, ::app::Fuse::Controls::TextEdit::TextPosition* p);
::app::Fuse::Controls::TextEdit::TextPosition* LineCache__TryDelete(LineCache* __this, ::app::Fuse::Controls::TextEdit::TextPosition* p);
::app::Fuse::Controls::TextEdit::TextPosition* LineCache__TryMoveDown(LineCache* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, ::app::Fuse::Controls::TextEdit::TextPosition* p);
::app::Fuse::Controls::TextEdit::TextPosition* LineCache__TryMoveLeft(LineCache* __this, ::app::Fuse::Controls::TextEdit::TextPosition* p);
::app::Fuse::Controls::TextEdit::TextPosition* LineCache__TryMoveOneWordLeft(LineCache* __this, ::app::Fuse::Controls::TextEdit::TextPosition* p);
::app::Fuse::Controls::TextEdit::TextPosition* LineCache__TryMoveOneWordRight(LineCache* __this, ::app::Fuse::Controls::TextEdit::TextPosition* p);
::app::Fuse::Controls::TextEdit::TextPosition* LineCache__TryMoveRight(LineCache* __this, ::app::Fuse::Controls::TextEdit::TextPosition* p);
::app::Fuse::Controls::TextEdit::TextPosition* LineCache__TryMoveUp(LineCache* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, ::app::Fuse::Controls::TextEdit::TextPosition* p);

struct LineCache : ::uObject
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*> _lines;
    ::uStrong< ::uString*> _text;
    bool _isTextValid;
    bool _isMultiline;
    ::uStrong< ::uObject*> _transform;
    ::uStrong< ::uDelegate*> _onTextChanged;
    ::uStrong< ::uDelegate*> _invalideLayout;

    void _ObjInit(::uDelegate* onTextChanged, ::uDelegate* invalideLayout) { LineCache___ObjInit(this, onTextChanged, invalideLayout); }
    ::app::Fuse::Controls::TextEdit::TextPosition* BoundsToTextPos(::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, ::app::Uno::Float2 p);
    ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine* DecomposeLines(::uString* text) { return LineCache__DecomposeLines(this, text); }
    ::app::Fuse::Controls::TextEdit::TextPosition* DeleteSpan(::app::Fuse::Controls::TextEdit::TextSpan* s) { return LineCache__DeleteSpan(this, s); }
    ::app::Fuse::Controls::TextEdit::TextPosition* End(::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::app::Fuse::Controls::TextEdit::TextPosition* p) { return LineCache__End(this, wrapInfo, p); }
    bool IsMultiline() { return LineCache__get_IsMultiline(this); }
    ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine* Lines() { return LineCache__get_Lines(this); }
    ::uString* Text() { return LineCache__get_Text(this); }
    ::uObject* Transform() { return LineCache__get_Transform(this); }
    ::app::Uno::Float2 GetBoundsSize(::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo);
    ::app::Fuse::Controls::TextEdit::TextSpan* GetFullTextSpan() { return LineCache__GetFullTextSpan(this); }
    ::app::Fuse::Controls::TextEdit::TextPosition* GetLastTextPos() { return LineCache__GetLastTextPos(this); }
    ::uString* GetString(::app::Fuse::Controls::TextEdit::TextSpan* s) { return LineCache__GetString(this, s); }
    ::app::Fuse::Controls::TextEdit::TextPosition* Home(::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::app::Fuse::Controls::TextEdit::TextPosition* p) { return LineCache__Home(this, wrapInfo, p); }
    ::app::Fuse::Controls::TextEdit::TextPosition* InsertChar(::app::Fuse::Controls::TextEdit::TextPosition* p, ::uChar c) { return LineCache__InsertChar(this, p, c); }
    ::app::Fuse::Controls::TextEdit::TextPosition* InsertNewline(::app::Fuse::Controls::TextEdit::TextPosition* p) { return LineCache__InsertNewline(this, p); }
    void InvalidateLayout() { LineCache__InvalidateLayout(this); }
    void InvalidateText(bool noChange) { LineCache__InvalidateText(this, noChange); }
    void InvalidateVisual() { LineCache__InvalidateVisual(this); }
    bool IsWordBreaker(::uChar c) { return LineCache__IsWordBreaker(this, c); }
    int NextWordLeft(::uString* str, int startIdx) { return LineCache__NextWordLeft(this, str, startIdx); }
    int NextWordRight(::uString* str, int startIdx) { return LineCache__NextWordRight(this, str, startIdx); }
    void IsMultiline(bool value) { LineCache__set_IsMultiline(this, value); }
    void Text(::uString* value) { LineCache__set_Text(this, value); }
    void Transform(::uObject* value) { LineCache__set_Transform(this, value); }
    ::app::Uno::Float2 TextPosToBounds(::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, ::app::Fuse::Controls::TextEdit::TextPosition* p);
    ::app::Fuse::Controls::TextEdit::TextPosition* TryBackspace(::app::Fuse::Controls::TextEdit::TextPosition* p) { return LineCache__TryBackspace(this, p); }
    ::app::Fuse::Controls::TextEdit::TextPosition* TryDelete(::app::Fuse::Controls::TextEdit::TextPosition* p) { return LineCache__TryDelete(this, p); }
    ::app::Fuse::Controls::TextEdit::TextPosition* TryMoveDown(::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, ::app::Fuse::Controls::TextEdit::TextPosition* p) { return LineCache__TryMoveDown(this, wrapInfo, textAlignment, boundsWidth, p); }
    ::app::Fuse::Controls::TextEdit::TextPosition* TryMoveLeft(::app::Fuse::Controls::TextEdit::TextPosition* p) { return LineCache__TryMoveLeft(this, p); }
    ::app::Fuse::Controls::TextEdit::TextPosition* TryMoveOneWordLeft(::app::Fuse::Controls::TextEdit::TextPosition* p) { return LineCache__TryMoveOneWordLeft(this, p); }
    ::app::Fuse::Controls::TextEdit::TextPosition* TryMoveOneWordRight(::app::Fuse::Controls::TextEdit::TextPosition* p) { return LineCache__TryMoveOneWordRight(this, p); }
    ::app::Fuse::Controls::TextEdit::TextPosition* TryMoveRight(::app::Fuse::Controls::TextEdit::TextPosition* p) { return LineCache__TryMoveRight(this, p); }
    ::app::Fuse::Controls::TextEdit::TextPosition* TryMoveUp(::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, ::app::Fuse::Controls::TextEdit::TextPosition* p) { return LineCache__TryMoveUp(this, wrapInfo, textAlignment, boundsWidth, p); }
};

}}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Controls {
namespace TextEdit {

inline ::app::Fuse::Controls::TextEdit::TextPosition* LineCache::BoundsToTextPos(::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, ::app::Uno::Float2 p) { return LineCache__BoundsToTextPos(this, wrapInfo, textAlignment, boundsWidth, p); }
inline ::app::Uno::Float2 LineCache::GetBoundsSize(::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo) { return LineCache__GetBoundsSize(this, wrapInfo); }
inline ::app::Uno::Float2 LineCache::TextPosToBounds(::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, ::app::Fuse::Controls::TextEdit::TextPosition* p) { return LineCache__TextPosToBounds(this, wrapInfo, textAlignment, boundsWidth, p); }

}}}}


#endif
