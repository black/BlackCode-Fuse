// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\FallbackTextEdit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{struct LineCache;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{struct LineCacheLine;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{struct TextPosition;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{struct TextSpan;}}}}
namespace g{namespace Fuse{namespace Controls{namespace Internal{struct WordWrapInfo;}}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace FallbackTextEdit{

// internal sealed class LineCache :220
// {
uType* LineCache_typeof();
void LineCache__DecomposeLines_fn(LineCache* __this, uString* text, ::g::Uno::Collections::List** __retval);
void LineCache__DeleteSpan_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextEdit::TextSpan* s, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval);
void LineCache__GetBoundsSize_fn(LineCache* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::g::Uno::Float2* __retval);
void LineCache__GetFullTextSpan_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextEdit::TextSpan** __retval);
void LineCache__GetLastTextPos_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval);
void LineCache__InsertChar_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, uChar* c, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval);
void LineCache__InvalidateLayout_fn(LineCache* __this);
void LineCache__InvalidateText_fn(LineCache* __this, bool* noChange);
void LineCache__InvalidateVisual_fn(LineCache* __this);
void LineCache__get_IsMultiline_fn(LineCache* __this, bool* __retval);
void LineCache__set_IsMultiline_fn(LineCache* __this, bool* value);
void LineCache__get_Lines_fn(LineCache* __this, ::g::Uno::Collections::List** __retval);
void LineCache__get_Text_fn(LineCache* __this, uString** __retval);
void LineCache__set_Text_fn(LineCache* __this, uString* value);
void LineCache__TextPosToBounds_fn(LineCache* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int* textAlignment, float* boundsWidth, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, ::g::Uno::Float2* __retval);
void LineCache__get_Transform_fn(LineCache* __this, uObject** __retval);
void LineCache__set_Transform_fn(LineCache* __this, uObject* value);

struct LineCache : uObject
{
    uStrong<uDelegate*> _invalideLayout;
    bool _isMultiline;
    bool _isTextValid;
    uStrong< ::g::Uno::Collections::List*> _lines;
    uStrong<uDelegate*> _onTextChanged;
    uStrong<uString*> _text;
    uStrong<uObject*> _transform;

    ::g::Uno::Collections::List* DecomposeLines(uString* text);
    ::g::Fuse::Controls::FallbackTextEdit::TextPosition* DeleteSpan(::g::Fuse::Controls::FallbackTextEdit::TextSpan* s);
    ::g::Uno::Float2 GetBoundsSize(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo);
    ::g::Fuse::Controls::FallbackTextEdit::TextSpan* GetFullTextSpan();
    ::g::Fuse::Controls::FallbackTextEdit::TextPosition* GetLastTextPos();
    ::g::Fuse::Controls::FallbackTextEdit::TextPosition* InsertChar(::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, uChar c);
    void InvalidateLayout();
    void InvalidateText(bool noChange);
    void InvalidateVisual();
    bool IsMultiline();
    void IsMultiline(bool value);
    ::g::Uno::Collections::List* Lines();
    uString* Text();
    void Text(uString* value);
    ::g::Uno::Float2 TextPosToBounds(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p);
    uObject* Transform();
    void Transform(uObject* value);
};
// }

}}}} // ::g::Fuse::Controls::FallbackTextEdit
