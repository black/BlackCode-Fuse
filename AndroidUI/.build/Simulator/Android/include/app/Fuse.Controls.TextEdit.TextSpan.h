// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\TextEdit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_TEXT_EDIT_TEXT_SPAN_H__
#define __APP_FUSE_CONTROLS_TEXT_EDIT_TEXT_SPAN_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { namespace TextEdit { struct TextPosition; } } } }

namespace app {
namespace Fuse {
namespace Controls {
namespace TextEdit {

struct TextSpan;

struct TextSpan__uType : ::uClassType
{
};

TextSpan__uType* TextSpan__typeof();

void TextSpan___ObjInit(TextSpan* __this, ::app::Fuse::Controls::TextEdit::TextPosition* start, ::app::Fuse::Controls::TextEdit::TextPosition* end);
bool TextSpan__Contains(TextSpan* __this, ::app::Fuse::Controls::TextEdit::TextPosition* p);
bool TextSpan__Equals(TextSpan* __this, ::uObject* obj);
int TextSpan__GetHashCode(TextSpan* __this);
TextSpan* TextSpan__Intersection(::uStatic* __this, TextSpan* a, TextSpan* b);
bool TextSpan__Intersects(::uStatic* __this, TextSpan* a, TextSpan* b);
TextSpan* TextSpan__New_1(::uStatic* __this, ::app::Fuse::Controls::TextEdit::TextPosition* start, ::app::Fuse::Controls::TextEdit::TextPosition* end);
bool TextSpan__op_Equality(::uStatic* __this, TextSpan* a, TextSpan* b);
bool TextSpan__op_Inequality(::uStatic* __this, TextSpan* a, TextSpan* b);

struct TextSpan : ::uObject
{
    ::uStrong< ::app::Fuse::Controls::TextEdit::TextPosition*> Start;
    ::uStrong< ::app::Fuse::Controls::TextEdit::TextPosition*> End;

    void _ObjInit(::app::Fuse::Controls::TextEdit::TextPosition* start, ::app::Fuse::Controls::TextEdit::TextPosition* end) { TextSpan___ObjInit(this, start, end); }
    bool Contains(::app::Fuse::Controls::TextEdit::TextPosition* p) { return TextSpan__Contains(this, p); }
};

}}}}


#endif
