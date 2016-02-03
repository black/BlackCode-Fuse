// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.FallbackTextEdit.LineCache.h>
#include <Fuse.Controls.FallbackTextEdit.LineCacheLine.h>
#include <Fuse.Controls.FallbackTextEdit.LineCachePasswordTransform.h>
#include <Fuse.Controls.FallbackTextEdit.LineCacheTransform.h>
#include <Fuse.Controls.FallbackTextEdit.TextEditVisual.DegreeSpan.h>
#include <Fuse.Controls.FallbackTextEdit.TextEditVisual.h>
#include <Fuse.Controls.FallbackTextEdit.TextEditVisual.SwipeGestureHelper.h>
#include <Fuse.Controls.FallbackTextEdit.TextPosition.h>
#include <Fuse.Controls.FallbackTextEdit.TextSpan.h>
#include <Fuse.Controls.FallbackTextEdit.TextWindow.h>
#include <Fuse.Controls.FallbackTextEdit.VisualTextTransform.h>
#include <Fuse.Controls.Graphics.DefaultTextVisual.h>
#include <Fuse.Controls.Graphics.Visual.h>
#include <Fuse.Controls.Internal.DefaultTextRenderer.h>
#include <Fuse.Controls.Internal.WordWrapInfo.h>
#include <Fuse.Controls.Internal.WordWrapper.h>
#include <Fuse.Controls.Internal.WrappedLine.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.Primitives.Rectangle.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.Internal.ElementDraw.h>
#include <Fuse.Elements.TextAlignment.h>
#include <Fuse.Elements.TextWrapping.h>
#include <Fuse.Font.h>
#include <Fuse.HitTestContext.h>
#include <Fuse.Input.Focus.h>
#include <Fuse.Input.FocusGainedArgs.h>
#include <Fuse.Input.FocusGainedHandler.h>
#include <Fuse.Input.FocusLostArgs.h>
#include <Fuse.Input.FocusLostHandler.h>
#include <Fuse.Input.Keyboard.h>
#include <Fuse.Input.KeyEventArgs.h>
#include <Fuse.Input.KeyPressedArgs.h>
#include <Fuse.Input.KeyPressedHandler.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEventArgs.h>
#include <Fuse.Input.PointerMovedArgs.h>
#include <Fuse.Input.PointerMovedHandler.h>
#include <Fuse.Input.PointerPressedArgs.h>
#include <Fuse.Input.PointerPressedHandler.h>
#include <Fuse.Input.PointerReleasedArgs.h>
#include <Fuse.Input.PointerReleasedHandler.h>
#include <Fuse.Input.TextEnteredArgs.h>
#include <Fuse.Input.TextEnteredHandler.h>
#include <Fuse.Input.TextService.h>
#include <Fuse.Internal.RectExtensions.h>
#include <Fuse.InvalidateLayoutReason.h>
#include <Fuse.Node.h>
#include <Fuse.NodeEvent-2.h>
#include <Fuse.NodeEventArgs.h>
#include <Fuse.SizeFlags.h>
#include <Fuse.Time.h>
#include <Uno.Action.h>
#include <Uno.Application.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Platform.Key.h>
#include <Uno.Platform.Window.h>
#include <Uno.Rect.h>
#include <Uno.String.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
#include <Uno.Vector.h>
static uString* STRINGS[3];
static uType* TYPES[57];

namespace g{
namespace Fuse{
namespace Controls{
namespace FallbackTextEdit{

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\FallbackTextEdit\$.uno(707)
// ----------------------------------------------------------------------------

// private sealed class TextEditVisual.DegreeSpan :707
// {
uType* TextEditVisual__DegreeSpan_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(TextEditVisual__DegreeSpan);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.FallbackTextEdit.TextEditVisual.DegreeSpan", options);
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextEditVisual__DegreeSpan, _a), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextEditVisual__DegreeSpan, _b), 0);
    return type;
}

// public DegreeSpan(float a, float b) :711
void TextEditVisual__DegreeSpan__ctor__fn(TextEditVisual__DegreeSpan* __this, float* a, float* b)
{
    __this->ctor_(*a, *b);
}

// public bool IsWithinBounds(float x) :716
void TextEditVisual__DegreeSpan__IsWithinBounds_fn(TextEditVisual__DegreeSpan* __this, float* x, bool* __retval)
{
    *__retval = __this->IsWithinBounds(*x);
}

// public DegreeSpan New(float a, float b) :711
void TextEditVisual__DegreeSpan__New1_fn(float* a, float* b, TextEditVisual__DegreeSpan** __retval)
{
    *__retval = TextEditVisual__DegreeSpan::New1(*a, *b);
}

// public DegreeSpan(float a, float b) [instance] :711
void TextEditVisual__DegreeSpan::ctor_(float a, float b)
{
    _a = a;
    _b = b;
}

// public bool IsWithinBounds(float x) [instance] :716
bool TextEditVisual__DegreeSpan::IsWithinBounds(float x)
{
    float angle1 = _a;
    float angle2 = _b;
    float rAngle = ::g::Uno::Math::Mod1(::g::Uno::Math::Mod1(angle2 - angle1, 360.0f) + 360.0f, 360.0f);

    if (rAngle >= 180.0f)
    {
        float a = angle1;
        angle1 = angle2;
        angle2 = a;
    }

    if (angle1 <= angle2)
        return (x >= angle1) && (x <= angle2);
    else
        return (x >= angle2) || (x <= angle2);
}

// public DegreeSpan New(float a, float b) [static] :711
TextEditVisual__DegreeSpan* TextEditVisual__DegreeSpan::New1(float a, float b)
{
    TextEditVisual__DegreeSpan* obj1 = (TextEditVisual__DegreeSpan*)uNew(TextEditVisual__DegreeSpan_typeof());
    obj1->ctor_(a, b);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\FallbackTextEdit\$.uno(220)
// ----------------------------------------------------------------------------

// internal sealed class LineCache :220
// {
uType* LineCache_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(LineCache);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.FallbackTextEdit.LineCache", options);
    ::STRINGS[0] = uString::Const("");
    ::STRINGS[1] = uString::Const("\n"
        "");
    ::TYPES[0] = ::g::Uno::Float2_typeof();
    ::TYPES[1] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Controls::FallbackTextEdit::LineCacheLine_typeof());
    ::TYPES[2] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[3] = ::g::Uno::String_typeof()->Array();
    ::TYPES[4] = ::g::Uno::String_typeof();
    ::TYPES[5] = ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine_typeof();
    ::TYPES[6] = ::g::Fuse::Controls::FallbackTextEdit::TextPosition_typeof();
    ::TYPES[7] = ::g::Fuse::Controls::FallbackTextEdit::TextSpan_typeof();
    ::TYPES[8] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Controls::FallbackTextEdit::LineCacheLine_typeof());
    ::TYPES[9] = ::g::Fuse::Controls::Internal::WrappedLine_typeof()->Array();
    ::TYPES[10] = ::g::Fuse::Controls::Internal::WrappedLine_typeof();
    ::TYPES[11] = ::g::Fuse::Controls::Internal::WordWrapInfo_typeof();
    ::TYPES[12] = ::g::Uno::Delegate_typeof();
    ::TYPES[13] = ::g::Uno::Action_typeof();
    ::TYPES[14] = ::g::Uno::Bool_typeof();
    ::TYPES[15] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine_typeof());
    ::TYPES[16] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Controls::FallbackTextEdit::LineCacheLine_typeof());
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::LineCache, _invalideLayout), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::LineCache, _isMultiline), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::LineCache, _isTextValid), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Controls::FallbackTextEdit::LineCacheLine_typeof()), offsetof(::g::Fuse::Controls::FallbackTextEdit::LineCache, _lines), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::LineCache, _onTextChanged), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::LineCache, _text), 0,
        ::g::Fuse::Controls::FallbackTextEdit::LineCacheTransform_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::LineCache, _transform), 0);
    return type;
}

// public LineCache(Uno.Action onTextChanged, Uno.Action invalideLayout) :294
void LineCache__ctor__fn(LineCache* __this, uDelegate* onTextChanged, uDelegate* invalideLayout)
{
    __this->ctor_(onTextChanged, invalideLayout);
}

// public Fuse.Controls.FallbackTextEdit.TextPosition BoundsToTextPos(Fuse.Controls.Internal.WordWrapInfo wrapInfo, Fuse.Elements.TextAlignment textAlignment, float boundsWidth, float2 p) :572
void LineCache__BoundsToTextPos_fn(LineCache* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int* textAlignment, float* boundsWidth, ::g::Uno::Float2* p, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval)
{
    *__retval = __this->BoundsToTextPos(wrapInfo, *textAlignment, *boundsWidth, *p);
}

// private Uno.Collections.List<Fuse.Controls.FallbackTextEdit.LineCacheLine> DecomposeLines(string text) :654
void LineCache__DecomposeLines_fn(LineCache* __this, uString* text, ::g::Uno::Collections::List** __retval)
{
    *__retval = __this->DecomposeLines(text);
}

// public Fuse.Controls.FallbackTextEdit.TextPosition DeleteSpan(Fuse.Controls.FallbackTextEdit.TextSpan s) :362
void LineCache__DeleteSpan_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextEdit::TextSpan* s, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval)
{
    *__retval = __this->DeleteSpan(s);
}

// public Fuse.Controls.FallbackTextEdit.TextPosition End(Fuse.Controls.Internal.WordWrapInfo wrapInfo, Fuse.Controls.FallbackTextEdit.TextPosition p) :552
void LineCache__End_fn(LineCache* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval)
{
    *__retval = __this->End(wrapInfo, p);
}

// public float2 GetBoundsSize(Fuse.Controls.Internal.WordWrapInfo wrapInfo) :557
void LineCache__GetBoundsSize_fn(LineCache* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetBoundsSize(wrapInfo);
}

// public Fuse.Controls.FallbackTextEdit.TextSpan GetFullTextSpan() :609
void LineCache__GetFullTextSpan_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextEdit::TextSpan** __retval)
{
    *__retval = __this->GetFullTextSpan();
}

// public Fuse.Controls.FallbackTextEdit.TextPosition GetLastTextPos() :604
void LineCache__GetLastTextPos_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval)
{
    *__retval = __this->GetLastTextPos();
}

// public string GetString(Fuse.Controls.FallbackTextEdit.TextSpan s) :614
void LineCache__GetString_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextEdit::TextSpan* s, uString** __retval)
{
    *__retval = __this->GetString(s);
}

// public Fuse.Controls.FallbackTextEdit.TextPosition Home(Fuse.Controls.Internal.WordWrapInfo wrapInfo, Fuse.Controls.FallbackTextEdit.TextPosition p) :547
void LineCache__Home_fn(LineCache* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval)
{
    *__retval = __this->Home(wrapInfo, p);
}

// public Fuse.Controls.FallbackTextEdit.TextPosition InsertChar(Fuse.Controls.FallbackTextEdit.TextPosition p, char c) :302
void LineCache__InsertChar_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, uChar* c, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval)
{
    *__retval = __this->InsertChar(p, *c);
}

// public Fuse.Controls.FallbackTextEdit.TextPosition InsertNewline(Fuse.Controls.FallbackTextEdit.TextPosition p) :309
void LineCache__InsertNewline_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval)
{
    *__retval = __this->InsertNewline(p);
}

// private void InvalidateLayout() :648
void LineCache__InvalidateLayout_fn(LineCache* __this)
{
    __this->InvalidateLayout();
}

// private void InvalidateText([bool noChange]) :639
void LineCache__InvalidateText_fn(LineCache* __this, bool* noChange)
{
    __this->InvalidateText(*noChange);
}

// public void InvalidateVisual() :633
void LineCache__InvalidateVisual_fn(LineCache* __this)
{
    __this->InvalidateVisual();
}

// public bool get_IsMultiline() :266
void LineCache__get_IsMultiline_fn(LineCache* __this, bool* __retval)
{
    *__retval = __this->IsMultiline();
}

// public void set_IsMultiline(bool value) :267
void LineCache__set_IsMultiline_fn(LineCache* __this, bool* value)
{
    __this->IsMultiline(*value);
}

// private bool IsWordBreaker(char c) :517
void LineCache__IsWordBreaker_fn(LineCache* __this, uChar* c, bool* __retval)
{
    *__retval = __this->IsWordBreaker(*c);
}

// public Uno.Collections.List<Fuse.Controls.FallbackTextEdit.LineCacheLine> get_Lines() :225
void LineCache__get_Lines_fn(LineCache* __this, ::g::Uno::Collections::List** __retval)
{
    *__retval = __this->Lines();
}

// public LineCache New(Uno.Action onTextChanged, Uno.Action invalideLayout) :294
void LineCache__New1_fn(uDelegate* onTextChanged, uDelegate* invalideLayout, LineCache** __retval)
{
    *__retval = LineCache::New1(onTextChanged, invalideLayout);
}

// private int NextWordLeft(string str, int startIdx) :437
void LineCache__NextWordLeft_fn(LineCache* __this, uString* str, int* startIdx, int* __retval)
{
    *__retval = __this->NextWordLeft(str, *startIdx);
}

// private int NextWordRight(string str, int startIdx) :484
void LineCache__NextWordRight_fn(LineCache* __this, uString* str, int* startIdx, int* __retval)
{
    *__retval = __this->NextWordRight(str, *startIdx);
}

// public string get_Text() :238
void LineCache__get_Text_fn(LineCache* __this, uString** __retval)
{
    *__retval = __this->Text();
}

// public void set_Text(string value) :251
void LineCache__set_Text_fn(LineCache* __this, uString* value)
{
    __this->Text(value);
}

// public float2 TextPosToBounds(Fuse.Controls.Internal.WordWrapInfo wrapInfo, Fuse.Elements.TextAlignment textAlignment, float boundsWidth, Fuse.Controls.FallbackTextEdit.TextPosition p) :593
void LineCache__TextPosToBounds_fn(LineCache* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int* textAlignment, float* boundsWidth, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->TextPosToBounds(wrapInfo, *textAlignment, *boundsWidth, p);
}

// public Fuse.Controls.FallbackTextEdit.LineCacheTransform get_Transform() :281
void LineCache__get_Transform_fn(LineCache* __this, uObject** __retval)
{
    *__retval = __this->Transform();
}

// public void set_Transform(Fuse.Controls.FallbackTextEdit.LineCacheTransform value) :282
void LineCache__set_Transform_fn(LineCache* __this, uObject* value)
{
    __this->Transform(value);
}

// public Fuse.Controls.FallbackTextEdit.TextPosition TryBackspace(Fuse.Controls.FallbackTextEdit.TextPosition p) :341
void LineCache__TryBackspace_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval)
{
    *__retval = __this->TryBackspace(p);
}

// public Fuse.Controls.FallbackTextEdit.TextPosition TryDelete(Fuse.Controls.FallbackTextEdit.TextPosition p) :319
void LineCache__TryDelete_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval)
{
    *__retval = __this->TryDelete(p);
}

// public Fuse.Controls.FallbackTextEdit.TextPosition TryMoveDown(Fuse.Controls.Internal.WordWrapInfo wrapInfo, Fuse.Elements.TextAlignment textAlignment, float boundsWidth, Fuse.Controls.FallbackTextEdit.TextPosition p) :538
void LineCache__TryMoveDown_fn(LineCache* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int* textAlignment, float* boundsWidth, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval)
{
    *__retval = __this->TryMoveDown(wrapInfo, *textAlignment, *boundsWidth, p);
}

// public Fuse.Controls.FallbackTextEdit.TextPosition TryMoveLeft(Fuse.Controls.FallbackTextEdit.TextPosition p) :397
void LineCache__TryMoveLeft_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval)
{
    *__retval = __this->TryMoveLeft(p);
}

// public Fuse.Controls.FallbackTextEdit.TextPosition TryMoveOneWordLeft(Fuse.Controls.FallbackTextEdit.TextPosition p) :423
void LineCache__TryMoveOneWordLeft_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval)
{
    *__retval = __this->TryMoveOneWordLeft(p);
}

// public Fuse.Controls.FallbackTextEdit.TextPosition TryMoveOneWordRight(Fuse.Controls.FallbackTextEdit.TextPosition p) :470
void LineCache__TryMoveOneWordRight_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval)
{
    *__retval = __this->TryMoveOneWordRight(p);
}

// public Fuse.Controls.FallbackTextEdit.TextPosition TryMoveRight(Fuse.Controls.FallbackTextEdit.TextPosition p) :410
void LineCache__TryMoveRight_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval)
{
    *__retval = __this->TryMoveRight(p);
}

// public Fuse.Controls.FallbackTextEdit.TextPosition TryMoveUp(Fuse.Controls.Internal.WordWrapInfo wrapInfo, Fuse.Elements.TextAlignment textAlignment, float boundsWidth, Fuse.Controls.FallbackTextEdit.TextPosition p) :529
void LineCache__TryMoveUp_fn(LineCache* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int* textAlignment, float* boundsWidth, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval)
{
    *__retval = __this->TryMoveUp(wrapInfo, *textAlignment, *boundsWidth, p);
}

// public LineCache(Uno.Action onTextChanged, Uno.Action invalideLayout) [instance] :294
void LineCache::ctor_(uDelegate* onTextChanged, uDelegate* invalideLayout)
{
    _isTextValid = true;
    _onTextChanged = onTextChanged;
    _invalideLayout = invalideLayout;
    _lines = NULL;
}

// public Fuse.Controls.FallbackTextEdit.TextPosition BoundsToTextPos(Fuse.Controls.Internal.WordWrapInfo wrapInfo, Fuse.Elements.TextAlignment textAlignment, float boundsWidth, float2 p) [instance] :572
::g::Fuse::Controls::FallbackTextEdit::TextPosition* LineCache::BoundsToTextPos(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, ::g::Uno::Float2 p)
{
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret11;
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret12;
    int l = 0;
    float startY = 0.0f;

    if (p.Y > 0.0f)

        for (; l < (uPtr(Lines())->Count() - 1); l++)
        {
            float lineHeight = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(l), &ret11), ret11))->GetTotalHeight(wrapInfo);
            float endY = startY + lineHeight;

            if ((p.Y >= startY) && (p.Y < endY))
                break;

            startY = endY;
        }

    int c = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(l), &ret12), ret12))->BoundsToPos(wrapInfo, textAlignment, boundsWidth, ::g::Uno::Float2__New2(p.X, p.Y - startY));
    return ::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(l, c);
}

// private Uno.Collections.List<Fuse.Controls.FallbackTextEdit.LineCacheLine> DecomposeLines(string text) [instance] :654
::g::Uno::Collections::List* LineCache::DecomposeLines(uString* text)
{
    uArray* array7;
    int index8;
    int length9;
    ::g::Uno::Collections::List* lines = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[1/*Uno.Collections.List<Fuse.Controls.FallbackTextEdit.LineCacheLine>*/]);

    if (::g::Uno::String::op_Inequality(text, NULL))
    {
        if (IsMultiline())

            for (array7 = ::g::Uno::String::Split(uPtr(text), uArray::Init<int>(::TYPES[2/*char[]*/], 1, 10)), index8 = 0, length9 = uPtr(array7)->Length(); index8 < length9; ++index8)
            {
                uString* line = uPtr(array7)->Strong<uString*>(index8);
                ::g::Uno::Collections::List__Add_fn(uPtr(lines), ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine::New1(line, _transform));
            }
        else
            ::g::Uno::Collections::List__Add_fn(uPtr(lines), ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine::New1(text, _transform));
    }

    if (lines->Count() == 0)
        ::g::Uno::Collections::List__Add_fn(lines, ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine::New1(::g::Uno::String::Empty(), _transform));

    return lines;
}

// public Fuse.Controls.FallbackTextEdit.TextPosition DeleteSpan(Fuse.Controls.FallbackTextEdit.TextSpan s) [instance] :362
::g::Fuse::Controls::FallbackTextEdit::TextPosition* LineCache::DeleteSpan(::g::Fuse::Controls::FallbackTextEdit::TextSpan* s)
{
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret13;
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret14;
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret15;

    if (::g::Fuse::Controls::FallbackTextEdit::TextSpan::op_Equality(s, GetFullTextSpan()))
        Text(::STRINGS[0/*""*/]);
    else

        for (int i = uPtr(Lines())->Count() - 1; i >= 0; i--)
        {
            ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* line = (::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(i), &ret13), ret13);
            ::g::Fuse::Controls::FallbackTextEdit::TextSpan* lineSpan = ::g::Fuse::Controls::FallbackTextEdit::TextSpan::New1(::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(i, 0), ::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(i, uPtr(uPtr(line)->Text())->Length()));
            ::g::Fuse::Controls::FallbackTextEdit::TextSpan* intersection = ::g::Fuse::Controls::FallbackTextEdit::TextSpan::Intersection(lineSpan, s);

            if (::g::Fuse::Controls::FallbackTextEdit::TextSpan::op_Equality(intersection, NULL))
                continue;

            if (::g::Fuse::Controls::FallbackTextEdit::TextSpan::op_Equality(intersection, lineSpan))
                uPtr(Lines())->RemoveAt(i);
            else
            {
                uString* text = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(i), &ret14), ret14))->Text();
                uString* start = ::g::Uno::String::Substring1(uPtr(text), 0, uPtr(uPtr(intersection)->Start)->Char);
                uString* end = ::g::Uno::String::Substring1(text, uPtr(intersection->End)->Char, text->Length() - uPtr(intersection->End)->Char);
                uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(i), &ret15), ret15))->Text(::g::Uno::String::op_Addition2(start, end));
            }
        }

    InvalidateText(false);
    return ::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(::g::Uno::Math::Min8(uPtr(uPtr(s)->Start)->Line, uPtr(Lines())->Count() - 1), uPtr(uPtr(s)->Start)->Char);
}

// public Fuse.Controls.FallbackTextEdit.TextPosition End(Fuse.Controls.Internal.WordWrapInfo wrapInfo, Fuse.Controls.FallbackTextEdit.TextPosition p) [instance] :552
::g::Fuse::Controls::FallbackTextEdit::TextPosition* LineCache::End(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p)
{
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret16;
    return ::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(uPtr(p)->Line, uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(uPtr(p)->Line), &ret16), ret16))->End(wrapInfo, uPtr(p)->Char));
}

// public float2 GetBoundsSize(Fuse.Controls.Internal.WordWrapInfo wrapInfo) [instance] :557
::g::Uno::Float2 LineCache::GetBoundsSize(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo)
{
    uArray* array3;
    int index4;
    int length5;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine*> > ret17;
    float maxWidth = 0.0f;
    float height = 0.0f;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine*> > enum2 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(Lines()), &ret17), ret17); enum2.MoveNext(::TYPES[8/*Uno.Collections.List<Fuse.Controls.FallbackTextEdit.LineCacheLine>.Enumerator*/]); )
    {
        ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* line = enum2.Current(::TYPES[8/*Uno.Collections.List<Fuse.Controls.FallbackTextEdit.LineCacheLine>.Enumerator*/]);

        for (array3 = uPtr(line)->GetWrappedLines(wrapInfo), index4 = 0, length5 = uPtr(array3)->Length(); index4 < length5; ++index4)
        {
            ::g::Fuse::Controls::Internal::WrappedLine* wrappedLine = uPtr(array3)->Strong< ::g::Fuse::Controls::Internal::WrappedLine*>(index4);
            maxWidth = ::g::Uno::Math::Max1(maxWidth, uPtr(wrappedLine)->LineWidth);
            height = height + uPtr(wrapInfo)->LineHeight;
        }
    }

    return ::g::Uno::Float2__New2(maxWidth, height);
}

// public Fuse.Controls.FallbackTextEdit.TextSpan GetFullTextSpan() [instance] :609
::g::Fuse::Controls::FallbackTextEdit::TextSpan* LineCache::GetFullTextSpan()
{
    return ::g::Fuse::Controls::FallbackTextEdit::TextSpan::New1(::g::Fuse::Controls::FallbackTextEdit::TextPosition::Default(), GetLastTextPos());
}

// public Fuse.Controls.FallbackTextEdit.TextPosition GetLastTextPos() [instance] :604
::g::Fuse::Controls::FallbackTextEdit::TextPosition* LineCache::GetLastTextPos()
{
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret18;
    return ::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(uPtr(Lines())->Count() - 1, uPtr(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(uPtr(Lines())->Count() - 1), &ret18), ret18))->Text())->Length());
}

// public string GetString(Fuse.Controls.FallbackTextEdit.TextSpan s) [instance] :614
uString* LineCache::GetString(::g::Fuse::Controls::FallbackTextEdit::TextSpan* s)
{
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret19;
    uString* ret = ::STRINGS[0/*""*/];

    for (int i = uPtr(uPtr(s)->Start)->Line; i <= uPtr(s->End)->Line; i++)
    {
        ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* line = (::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(i), &ret19), ret19);
        ::g::Fuse::Controls::FallbackTextEdit::TextSpan* lineSpan = ::g::Fuse::Controls::FallbackTextEdit::TextSpan::New1(::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(i, 0), ::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(i, uPtr(uPtr(line)->Text())->Length()));
        ::g::Fuse::Controls::FallbackTextEdit::TextSpan* intersection = ::g::Fuse::Controls::FallbackTextEdit::TextSpan::Intersection(lineSpan, s);

        if (::g::Fuse::Controls::FallbackTextEdit::TextSpan::op_Equality(intersection, NULL))
            continue;

        ret = ::g::Uno::String::op_Addition2(ret, ::g::Uno::String::Substring1(uPtr(line->Text()), uPtr(uPtr(intersection)->Start)->Char, uPtr(uPtr(intersection)->End)->Char - uPtr(uPtr(intersection)->Start)->Char));
    }

    return ret;
}

// public Fuse.Controls.FallbackTextEdit.TextPosition Home(Fuse.Controls.Internal.WordWrapInfo wrapInfo, Fuse.Controls.FallbackTextEdit.TextPosition p) [instance] :547
::g::Fuse::Controls::FallbackTextEdit::TextPosition* LineCache::Home(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p)
{
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret20;
    return ::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(uPtr(p)->Line, uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(uPtr(p)->Line), &ret20), ret20))->Home(wrapInfo, uPtr(p)->Char));
}

// public Fuse.Controls.FallbackTextEdit.TextPosition InsertChar(Fuse.Controls.FallbackTextEdit.TextPosition p, char c) [instance] :302
::g::Fuse::Controls::FallbackTextEdit::TextPosition* LineCache::InsertChar(::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, uChar c)
{
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret21;
    uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(uPtr(p)->Line), &ret21), ret21))->InsertChar(uPtr(p)->Char, c);
    InvalidateText(false);
    return ::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(p->Line, p->Char + 1);
}

// public Fuse.Controls.FallbackTextEdit.TextPosition InsertNewline(Fuse.Controls.FallbackTextEdit.TextPosition p) [instance] :309
::g::Fuse::Controls::FallbackTextEdit::TextPosition* LineCache::InsertNewline(::g::Fuse::Controls::FallbackTextEdit::TextPosition* p)
{
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret22;
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* currentLine = (::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(uPtr(p)->Line), &ret22), ret22);
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* newLine = ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine::New1(::g::Uno::String::Substring(uPtr(uPtr(currentLine)->Text()), p->Char), _transform);
    currentLine->Text(::g::Uno::String::Substring1(uPtr(currentLine->Text()), 0, p->Char));
    ::g::Uno::Collections::List__Insert_fn(uPtr(Lines()), uCRef<int>(p->Line + 1), newLine);
    InvalidateText(false);
    return ::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(p->Line + 1, 0);
}

// private void InvalidateLayout() [instance] :648
void LineCache::InvalidateLayout()
{
    if (::g::Uno::Delegate::op_Inequality(_invalideLayout, NULL))
        uPtr(_invalideLayout)->InvokeVoid();
}

// private void InvalidateText([bool noChange]) [instance] :639
void LineCache::InvalidateText(bool noChange)
{
    _text = NULL;
    _isTextValid = false;

    if (!noChange && ::g::Uno::Delegate::op_Inequality(_onTextChanged, NULL))
        uPtr(_onTextChanged)->InvokeVoid();

    InvalidateLayout();
}

// public void InvalidateVisual() [instance] :633
void LineCache::InvalidateVisual()
{
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine*> > ret23;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine*> > enum6 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(Lines()), &ret23), ret23); enum6.MoveNext(::TYPES[8/*Uno.Collections.List<Fuse.Controls.FallbackTextEdit.LineCacheLine>.Enumerator*/]); )
    {
        ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* line = enum6.Current(::TYPES[8/*Uno.Collections.List<Fuse.Controls.FallbackTextEdit.LineCacheLine>.Enumerator*/]);
        uPtr(line)->Invalidate();
    }

    InvalidateLayout();
}

// public bool get_IsMultiline() [instance] :266
bool LineCache::IsMultiline()
{
    return _isMultiline;
}

// public void set_IsMultiline(bool value) [instance] :267
void LineCache::IsMultiline(bool value)
{
    if (value == _isMultiline)
        return;

    _isMultiline = value;
    _lines = NULL;
}

// private bool IsWordBreaker(char c) [instance] :517
bool LineCache::IsWordBreaker(uChar c)
{
    return (((((c == ' ') || (c == 9)) || (c == 10)) || (c == '.')) || (c == ',')) || (c == ';');
}

// public Uno.Collections.List<Fuse.Controls.FallbackTextEdit.LineCacheLine> get_Lines() [instance] :225
::g::Uno::Collections::List* LineCache::Lines()
{
    if (_lines == NULL)
        _lines = DecomposeLines(_text);

    return _lines;
}

// private int NextWordLeft(string str, int startIdx) [instance] :437
int LineCache::NextWordLeft(uString* str, int startIdx)
{
    bool hitWordBreak = false;
    int nextRealChar = -1;
    int i = startIdx - 1;
    bool startsWithRealChar = !IsWordBreaker(uPtr(str)->Item(i));

    for (; i >= 0; --i)
    {
        uChar c = uPtr(str)->Item(i);

        if (IsWordBreaker(c))
        {
            hitWordBreak = true;

            if (startsWithRealChar)
            {
                nextRealChar = i;
                break;
            }
        }
        else if (hitWordBreak)
        {
            startsWithRealChar = true;
            hitWordBreak = false;
        }
    }

    if (i == -1)
        return 0;

    return nextRealChar + 1;
}

// private int NextWordRight(string str, int startIdx) [instance] :484
int LineCache::NextWordRight(uString* str, int startIdx)
{
    bool hitWordBreak = false;
    int nextRealChar = -1;
    int i = startIdx;
    bool startsWithRealChar = !IsWordBreaker(uPtr(str)->Item(i));

    for (; i < str->Length(); ++i)
    {
        uChar c = uPtr(str)->Item(i);

        if (IsWordBreaker(c))
        {
            hitWordBreak = true;

            if (startsWithRealChar)
            {
                nextRealChar = i;
                break;
            }
        }
        else if (hitWordBreak)
        {
            startsWithRealChar = true;
            hitWordBreak = false;
        }
    }

    if (i == str->Length())
        return i;

    return nextRealChar;
}

// public string get_Text() [instance] :238
uString* LineCache::Text()
{
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret37;
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret38;

    if (!_isTextValid)
    {
        _text = uPtr((::g::Uno::Collections::EnumerableExtensions__First_fn(::TYPES[15/*Uno.Collections.EnumerableExtensions.First<Fuse.Controls.FallbackTextEdit.LineCacheLine>*/], (uObject*)Lines(), &ret37), ret37))->Text();

        for (int i = 1; i < uPtr(Lines())->Count(); i++)
            _text = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(_text, ::STRINGS[1/*"\n"*/]), uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(i), &ret38), ret38))->Text());

        _isTextValid = true;
    }

    return _text;
}

// public void set_Text(string value) [instance] :251
void LineCache::Text(uString* value)
{
    if (::g::Uno::String::op_Equality(value, Text()))
        return;

    _text = value;
    _isTextValid = true;
    _lines = NULL;
}

// public float2 TextPosToBounds(Fuse.Controls.Internal.WordWrapInfo wrapInfo, Fuse.Elements.TextAlignment textAlignment, float boundsWidth, Fuse.Controls.FallbackTextEdit.TextPosition p) [instance] :593
::g::Uno::Float2 LineCache::TextPosToBounds(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p)
{
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret24;
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret25;
    float startY = 0.0f;

    for (int i = 0; i < uPtr(p)->Line; i++)
        startY = startY + uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(i), &ret24), ret24))->GetTotalHeight(wrapInfo);

    ::g::Uno::Float2 linePos = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(uPtr(p)->Line), &ret25), ret25))->PosToBounds(wrapInfo, textAlignment, boundsWidth, uPtr(p)->Char);
    return ::g::Uno::Float2__New2(linePos.X, startY + linePos.Y);
}

// public Fuse.Controls.FallbackTextEdit.LineCacheTransform get_Transform() [instance] :281
uObject* LineCache::Transform()
{
    return _transform;
}

// public void set_Transform(Fuse.Controls.FallbackTextEdit.LineCacheTransform value) [instance] :282
void LineCache::Transform(uObject* value)
{
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine*> > ret39;
    _transform = value;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(Lines()), &ret39), ret39); enum1.MoveNext(::TYPES[8/*Uno.Collections.List<Fuse.Controls.FallbackTextEdit.LineCacheLine>.Enumerator*/]); )
    {
        ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* line = enum1.Current(::TYPES[8/*Uno.Collections.List<Fuse.Controls.FallbackTextEdit.LineCacheLine>.Enumerator*/]);
        uPtr(line)->Transform(_transform);
    }

    InvalidateText(true);
}

// public Fuse.Controls.FallbackTextEdit.TextPosition TryBackspace(Fuse.Controls.FallbackTextEdit.TextPosition p) [instance] :341
::g::Fuse::Controls::FallbackTextEdit::TextPosition* LineCache::TryBackspace(::g::Fuse::Controls::FallbackTextEdit::TextPosition* p)
{
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret26;
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret27;
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret28;

    if (uPtr(p)->Char == 0)
    {
        if (uPtr(p)->Line == 0)
            return p;

        ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* prevLine = (::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(uPtr(p)->Line - 1), &ret26), ret26);
        ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* currentLine = (::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(p->Line), &ret27), ret27);
        int newChar = uPtr(uPtr(prevLine)->Text())->Length();
        prevLine->Text(::g::Uno::String::op_Addition2(prevLine->Text(), uPtr(currentLine)->Text()));
        uPtr(Lines())->RemoveAt(p->Line);
        InvalidateText(false);
        return ::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(p->Line - 1, newChar);
    }

    ::g::Fuse::Controls::FallbackTextEdit::TextPosition* ret = ::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(uPtr(p)->Line, uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(uPtr(p)->Line), &ret28), ret28))->Backspace(uPtr(p)->Char));
    InvalidateText(false);
    return ret;
}

// public Fuse.Controls.FallbackTextEdit.TextPosition TryDelete(Fuse.Controls.FallbackTextEdit.TextPosition p) [instance] :319
::g::Fuse::Controls::FallbackTextEdit::TextPosition* LineCache::TryDelete(::g::Fuse::Controls::FallbackTextEdit::TextPosition* p)
{
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret29;
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret30;
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret31;
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* line = (::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(uPtr(p)->Line), &ret29), ret29);

    if (p->Char == uPtr(uPtr(line)->Text())->Length())
    {
        if (uPtr(p)->Line == (uPtr(Lines())->Count() - 1))
            return p;

        ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* nextLine = (::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(uPtr(p)->Line + 1), &ret30), ret30);
        uPtr(line)->Text(::g::Uno::String::op_Addition2(uPtr(line)->Text(), uPtr(nextLine)->Text()));
        uPtr(Lines())->RemoveAt(p->Line + 1);
        InvalidateText(false);
    }
    else
    {
        uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(uPtr(p)->Line), &ret31), ret31))->Delete(uPtr(p)->Char);
        InvalidateText(false);
    }

    return p;
}

// public Fuse.Controls.FallbackTextEdit.TextPosition TryMoveDown(Fuse.Controls.Internal.WordWrapInfo wrapInfo, Fuse.Elements.TextAlignment textAlignment, float boundsWidth, Fuse.Controls.FallbackTextEdit.TextPosition p) [instance] :538
::g::Fuse::Controls::FallbackTextEdit::TextPosition* LineCache::TryMoveDown(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p)
{
    ::g::Uno::Float2 lineBounds = TextPosToBounds(wrapInfo, textAlignment, boundsWidth, p);
    ::g::Uno::Float2 nextLineBounds = ::g::Uno::Float2__New2(lineBounds.X, lineBounds.Y + (uPtr(wrapInfo)->LineHeight * 1.5f));
    ::g::Fuse::Controls::FallbackTextEdit::TextPosition* nextLineTextPos = BoundsToTextPos(wrapInfo, textAlignment, boundsWidth, nextLineBounds);
    return nextLineTextPos;
}

// public Fuse.Controls.FallbackTextEdit.TextPosition TryMoveLeft(Fuse.Controls.FallbackTextEdit.TextPosition p) [instance] :397
::g::Fuse::Controls::FallbackTextEdit::TextPosition* LineCache::TryMoveLeft(::g::Fuse::Controls::FallbackTextEdit::TextPosition* p)
{
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret32;

    if (uPtr(p)->Char == 0)
    {
        if (uPtr(p)->Line == 0)
            return p;

        ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* prevLine = (::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(uPtr(p)->Line - 1), &ret32), ret32);
        return ::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(p->Line - 1, uPtr(uPtr(prevLine)->Text())->Length());
    }

    return ::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(uPtr(p)->Line, uPtr(p)->Char - 1);
}

// public Fuse.Controls.FallbackTextEdit.TextPosition TryMoveOneWordLeft(Fuse.Controls.FallbackTextEdit.TextPosition p) [instance] :423
::g::Fuse::Controls::FallbackTextEdit::TextPosition* LineCache::TryMoveOneWordLeft(::g::Fuse::Controls::FallbackTextEdit::TextPosition* p)
{
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret33;
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret34;

    if (uPtr(p)->Char == 0)
    {
        if (uPtr(p)->Line == 0)
            return p;

        ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* prevLine = (::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(uPtr(p)->Line - 1), &ret33), ret33);
        return ::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(p->Line - 1, uPtr(uPtr(prevLine)->Text())->Length());
    }

    return ::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(uPtr(p)->Line, NextWordLeft(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(uPtr(p)->Line), &ret34), ret34))->Text(), uPtr(p)->Char));
}

// public Fuse.Controls.FallbackTextEdit.TextPosition TryMoveOneWordRight(Fuse.Controls.FallbackTextEdit.TextPosition p) [instance] :470
::g::Fuse::Controls::FallbackTextEdit::TextPosition* LineCache::TryMoveOneWordRight(::g::Fuse::Controls::FallbackTextEdit::TextPosition* p)
{
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret35;
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* line = (::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(uPtr(p)->Line), &ret35), ret35);

    if (p->Char >= uPtr(uPtr(line)->Text())->Length())
    {
        if (uPtr(p)->Line == (uPtr(Lines())->Count() - 1))
            return p;

        return ::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(uPtr(p)->Line + 1, 0);
    }

    return ::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(p->Line, NextWordRight(uPtr(line)->Text(), p->Char));
}

// public Fuse.Controls.FallbackTextEdit.TextPosition TryMoveRight(Fuse.Controls.FallbackTextEdit.TextPosition p) [instance] :410
::g::Fuse::Controls::FallbackTextEdit::TextPosition* LineCache::TryMoveRight(::g::Fuse::Controls::FallbackTextEdit::TextPosition* p)
{
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret36;
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* line = (::g::Uno::Collections::List__get_Item_fn(uPtr(Lines()), uCRef<int>(uPtr(p)->Line), &ret36), ret36);

    if (p->Char >= uPtr(uPtr(line)->Text())->Length())
    {
        if (uPtr(p)->Line == (uPtr(Lines())->Count() - 1))
            return p;

        return ::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(uPtr(p)->Line + 1, 0);
    }

    return ::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(p->Line, p->Char + 1);
}

// public Fuse.Controls.FallbackTextEdit.TextPosition TryMoveUp(Fuse.Controls.Internal.WordWrapInfo wrapInfo, Fuse.Elements.TextAlignment textAlignment, float boundsWidth, Fuse.Controls.FallbackTextEdit.TextPosition p) [instance] :529
::g::Fuse::Controls::FallbackTextEdit::TextPosition* LineCache::TryMoveUp(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p)
{
    ::g::Uno::Float2 lineBounds = TextPosToBounds(wrapInfo, textAlignment, boundsWidth, p);
    ::g::Uno::Float2 prevLineBounds = ::g::Uno::Float2__New2(lineBounds.X, lineBounds.Y - (uPtr(wrapInfo)->LineHeight * 0.5f));
    ::g::Fuse::Controls::FallbackTextEdit::TextPosition* prevLineTextPos = BoundsToTextPos(wrapInfo, textAlignment, boundsWidth, prevLineBounds);
    return prevLineTextPos;
}

// public LineCache New(Uno.Action onTextChanged, Uno.Action invalideLayout) [static] :294
LineCache* LineCache::New1(uDelegate* onTextChanged, uDelegate* invalideLayout)
{
    LineCache* obj10 = (LineCache*)uNew(LineCache_typeof());
    obj10->ctor_(onTextChanged, invalideLayout);
    return obj10;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\FallbackTextEdit\$.uno(12)
// ---------------------------------------------------------------------------

// internal sealed class LineCacheLine :12
// {
uType* LineCacheLine_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(LineCacheLine);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.FallbackTextEdit.LineCacheLine", options);
    ::TYPES[11] = ::g::Fuse::Controls::Internal::WordWrapInfo_typeof();
    ::TYPES[0] = ::g::Uno::Float2_typeof();
    ::TYPES[10] = ::g::Fuse::Controls::Internal::WrappedLine_typeof();
    ::TYPES[9] = ::g::Fuse::Controls::Internal::WrappedLine_typeof()->Array();
    ::TYPES[17] = ::g::Uno::Float_typeof();
    ::TYPES[14] = ::g::Uno::Bool_typeof();
    ::TYPES[18] = uObject_typeof();
    ::TYPES[4] = ::g::Uno::String_typeof();
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::LineCacheLine, _text), 0,
        ::g::Fuse::Controls::FallbackTextEdit::LineCacheTransform_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::LineCacheLine, _transform), 0,
        ::g::Fuse::Controls::Internal::WordWrapInfo_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::LineCacheLine, _wordWrapInfoCache), 0,
        ::g::Fuse::Controls::Internal::WrappedLine_typeof()->Array(), offsetof(::g::Fuse::Controls::FallbackTextEdit::LineCacheLine, _wrappedLinesCache), 0);
    return type;
}

// public LineCacheLine(string text, Fuse.Controls.FallbackTextEdit.LineCacheTransform transform) :68
void LineCacheLine__ctor__fn(LineCacheLine* __this, uString* text, uObject* transform)
{
    __this->ctor_(text, transform);
}

// public int Backspace(int p) :86
void LineCacheLine__Backspace_fn(LineCacheLine* __this, int* p, int* __retval)
{
    *__retval = __this->Backspace(*p);
}

// public int BoundsToPos(Fuse.Controls.Internal.WordWrapInfo wrapInfo, Fuse.Elements.TextAlignment textAlignment, float boundsWidth, float2 p) :102
void LineCacheLine__BoundsToPos_fn(LineCacheLine* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int* textAlignment, float* boundsWidth, ::g::Uno::Float2* p, int* __retval)
{
    *__retval = __this->BoundsToPos(wrapInfo, *textAlignment, *boundsWidth, *p);
}

// private Fuse.Controls.Internal.WrappedLine BoundsToWrappedLine(Fuse.Controls.Internal.WordWrapInfo wrapInfo, float2 p) :125
void LineCacheLine__BoundsToWrappedLine_fn(LineCacheLine* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::g::Uno::Float2* p, ::g::Fuse::Controls::Internal::WrappedLine** __retval)
{
    *__retval = __this->BoundsToWrappedLine(wrapInfo, *p);
}

// public void Delete(int p) :81
void LineCacheLine__Delete_fn(LineCacheLine* __this, int* p)
{
    __this->Delete(*p);
}

// public int End(Fuse.Controls.Internal.WordWrapInfo wrapInfo, int p) :97
void LineCacheLine__End_fn(LineCacheLine* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int* p, int* __retval)
{
    *__retval = __this->End(wrapInfo, *p);
}

// public float GetTotalHeight(Fuse.Controls.Internal.WordWrapInfo wrapInfo) :119
void LineCacheLine__GetTotalHeight_fn(LineCacheLine* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, float* __retval)
{
    *__retval = __this->GetTotalHeight(wrapInfo);
}

// public Fuse.Controls.Internal.WrappedLine[] GetWrappedLines(Fuse.Controls.Internal.WordWrapInfo wrapInfo) :52
void LineCacheLine__GetWrappedLines_fn(LineCacheLine* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, uArray** __retval)
{
    *__retval = __this->GetWrappedLines(wrapInfo);
}

// public int Home(Fuse.Controls.Internal.WordWrapInfo wrapInfo, int p) :92
void LineCacheLine__Home_fn(LineCacheLine* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int* p, int* __retval)
{
    *__retval = __this->Home(wrapInfo, *p);
}

// public void InsertChar(int p, char c) :74
void LineCacheLine__InsertChar_fn(LineCacheLine* __this, int* p, uChar* c)
{
    __this->InsertChar(*p, *c);
}

// public void Invalidate() :159
void LineCacheLine__Invalidate_fn(LineCacheLine* __this)
{
    __this->Invalidate();
}

// public LineCacheLine New(string text, Fuse.Controls.FallbackTextEdit.LineCacheTransform transform) :68
void LineCacheLine__New1_fn(uString* text, uObject* transform, LineCacheLine** __retval)
{
    *__retval = LineCacheLine::New1(text, transform);
}

// public float2 PosToBounds(Fuse.Controls.Internal.WordWrapInfo wrapInfo, Fuse.Elements.TextAlignment textAlignment, float boundsWidth, int p) :110
void LineCacheLine__PosToBounds_fn(LineCacheLine* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int* textAlignment, float* boundsWidth, int* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PosToBounds(wrapInfo, *textAlignment, *boundsWidth, *p);
}

// private Fuse.Controls.Internal.WrappedLine PosToWrappedLine(Fuse.Controls.Internal.WordWrapInfo wrapInfo, int p) :145
void LineCacheLine__PosToWrappedLine_fn(LineCacheLine* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int* p, ::g::Fuse::Controls::Internal::WrappedLine** __retval)
{
    *__retval = __this->PosToWrappedLine(wrapInfo, *p);
}

// public string get_Text() :17
void LineCacheLine__get_Text_fn(LineCacheLine* __this, uString** __retval)
{
    *__retval = __this->Text();
}

// public void set_Text(string value) :18
void LineCacheLine__set_Text_fn(LineCacheLine* __this, uString* value)
{
    __this->Text(value);
}

// public Fuse.Controls.FallbackTextEdit.LineCacheTransform get_Transform() :31
void LineCacheLine__get_Transform_fn(LineCacheLine* __this, uObject** __retval)
{
    *__retval = __this->Transform();
}

// public void set_Transform(Fuse.Controls.FallbackTextEdit.LineCacheTransform value) :32
void LineCacheLine__set_Transform_fn(LineCacheLine* __this, uObject* value)
{
    __this->Transform(value);
}

// public string get_VisualText() :41
void LineCacheLine__get_VisualText_fn(LineCacheLine* __this, uString** __retval)
{
    *__retval = __this->VisualText();
}

// public LineCacheLine(string text, Fuse.Controls.FallbackTextEdit.LineCacheTransform transform) [instance] :68
void LineCacheLine::ctor_(uString* text, uObject* transform)
{
    _text = text;
    _transform = transform;
}

// public int Backspace(int p) [instance] :86
int LineCacheLine::Backspace(int p)
{
    Text(::g::Uno::String::op_Addition2(::g::Uno::String::Substring1(uPtr(Text()), 0, p - 1), ::g::Uno::String::Substring(uPtr(Text()), p)));
    return p - 1;
}

// public int BoundsToPos(Fuse.Controls.Internal.WordWrapInfo wrapInfo, Fuse.Elements.TextAlignment textAlignment, float boundsWidth, float2 p) [instance] :102
int LineCacheLine::BoundsToPos(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, ::g::Uno::Float2 p)
{
    ::g::Fuse::Controls::Internal::WrappedLine* wrappedLine = BoundsToWrappedLine(wrapInfo, p);
    float xOffset = uPtr(wrappedLine)->GetXOffset(textAlignment, boundsWidth, uPtr(wrapInfo)->AbsoluteZoom);
    return wrappedLine->BoundsToPos(wrapInfo, p.X - xOffset) + wrappedLine->LineTextStartOffset;
}

// private Fuse.Controls.Internal.WrappedLine BoundsToWrappedLine(Fuse.Controls.Internal.WordWrapInfo wrapInfo, float2 p) [instance] :125
::g::Fuse::Controls::Internal::WrappedLine* LineCacheLine::BoundsToWrappedLine(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::g::Uno::Float2 p)
{
    uArray* wrappedLines = GetWrappedLines(wrapInfo);
    int l = 0;
    float startY = 0.0f;

    if (p.Y > 0.0f)

        for (; l < (uPtr(wrappedLines)->Length() - 1); l++)
        {
            float endY = startY + uPtr(wrapInfo)->LineHeight;

            if ((p.Y >= startY) && (p.Y < endY))
                break;

            startY = endY;
        }

    return uPtr(wrappedLines)->Strong< ::g::Fuse::Controls::Internal::WrappedLine*>(l);
}

// public void Delete(int p) [instance] :81
void LineCacheLine::Delete(int p)
{
    Text(::g::Uno::String::op_Addition2(::g::Uno::String::Substring1(uPtr(Text()), 0, p), ::g::Uno::String::Substring(uPtr(Text()), p + 1)));
}

// public int End(Fuse.Controls.Internal.WordWrapInfo wrapInfo, int p) [instance] :97
int LineCacheLine::End(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int p)
{
    return uPtr(PosToWrappedLine(wrapInfo, p))->LineTextEndOffset();
}

// public float GetTotalHeight(Fuse.Controls.Internal.WordWrapInfo wrapInfo) [instance] :119
float LineCacheLine::GetTotalHeight(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo)
{
    uArray* wrappedLines = GetWrappedLines(wrapInfo);
    return (float)uPtr(wrappedLines)->Length() * uPtr(wrapInfo)->LineHeight;
}

// public Fuse.Controls.Internal.WrappedLine[] GetWrappedLines(Fuse.Controls.Internal.WordWrapInfo wrapInfo) [instance] :52
uArray* LineCacheLine::GetWrappedLines(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo)
{
    if (((_wrappedLinesCache == NULL) || (_wordWrapInfoCache == NULL)) || !uPtr(_wordWrapInfoCache)->Equals(wrapInfo))
    {
        _wrappedLinesCache = ((uPtr(wrapInfo)->IsEnabled && (uPtr(Text())->Length() > 0)) ? (uArray*)::g::Fuse::Controls::Internal::WordWrapper::WrapLine(wrapInfo, VisualText()) : uArray::Init< ::g::Fuse::Controls::Internal::WrappedLine*>(::TYPES[9/*Fuse.Controls.Internal.WrappedLine[]*/], 1, (::g::Fuse::Controls::Internal::WrappedLine*)::g::Fuse::Controls::Internal::WrappedLine::New1(VisualText(), 0, 0.0f, uPtr(uPtr(wrapInfo)->TextRenderer)->MeasureStringVirtual(uPtr(wrapInfo)->FontSize, uPtr(wrapInfo)->AbsoluteZoom, VisualText()).X)));
        _wordWrapInfoCache = wrapInfo;
    }

    return _wrappedLinesCache;
}

// public int Home(Fuse.Controls.Internal.WordWrapInfo wrapInfo, int p) [instance] :92
int LineCacheLine::Home(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int p)
{
    return uPtr(PosToWrappedLine(wrapInfo, p))->LineTextStartOffset;
}

// public void InsertChar(int p, char c) [instance] :74
void LineCacheLine::InsertChar(int p, uChar c)
{
    Text((p < uPtr(Text())->Length()) ? (uString*)::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::Substring1(uPtr(Text()), 0, p), uBox<uChar>(::g::Uno::Char_typeof(), c)), ::g::Uno::String::Substring(uPtr(Text()), p)) : (uString*)::g::Uno::String::op_Addition1(Text(), uBox<uChar>(::g::Uno::Char_typeof(), c)));
}

// public void Invalidate() [instance] :159
void LineCacheLine::Invalidate()
{
    _wrappedLinesCache = NULL;
}

// public float2 PosToBounds(Fuse.Controls.Internal.WordWrapInfo wrapInfo, Fuse.Elements.TextAlignment textAlignment, float boundsWidth, int p) [instance] :110
::g::Uno::Float2 LineCacheLine::PosToBounds(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, int p)
{
    ::g::Fuse::Controls::Internal::WrappedLine* wrappedLine = PosToWrappedLine(wrapInfo, p);
    float xOffset = uPtr(wrappedLine)->GetXOffset(textAlignment, boundsWidth, uPtr(wrapInfo)->AbsoluteZoom);
    float yOffset = wrappedLine->YOffset;
    return ::g::Uno::Float2__New2(xOffset + wrappedLine->PosToBounds(wrapInfo, p - wrappedLine->LineTextStartOffset), yOffset);
}

// private Fuse.Controls.Internal.WrappedLine PosToWrappedLine(Fuse.Controls.Internal.WordWrapInfo wrapInfo, int p) [instance] :145
::g::Fuse::Controls::Internal::WrappedLine* LineCacheLine::PosToWrappedLine(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int p)
{
    uArray* wrappedLines = GetWrappedLines(wrapInfo);

    for (int i = 0; i < (uPtr(wrappedLines)->Length() - 1); i++)
    {
        ::g::Fuse::Controls::Internal::WrappedLine* wrappedLine = uPtr(wrappedLines)->Strong< ::g::Fuse::Controls::Internal::WrappedLine*>(i);

        if ((p >= uPtr(wrappedLine)->LineTextStartOffset) && (p < uPtr(wrappedLine)->LineTextEndOffset()))
            return wrappedLine;
    }

    return uPtr(wrappedLines)->Strong< ::g::Fuse::Controls::Internal::WrappedLine*>(uPtr(wrappedLines)->Length() - 1);
}

// public string get_Text() [instance] :17
uString* LineCacheLine::Text()
{
    return _text;
}

// public void set_Text(string value) [instance] :18
void LineCacheLine::Text(uString* value)
{
    if (::g::Uno::String::op_Equality(value, _text))
        return;

    _text = value;
    Invalidate();
}

// public Fuse.Controls.FallbackTextEdit.LineCacheTransform get_Transform() [instance] :31
uObject* LineCacheLine::Transform()
{
    return _transform;
}

// public void set_Transform(Fuse.Controls.FallbackTextEdit.LineCacheTransform value) [instance] :32
void LineCacheLine::Transform(uObject* value)
{
    _transform = value;
    Invalidate();
}

// public string get_VisualText() [instance] :41
uString* LineCacheLine::VisualText()
{
    if (_transform != NULL)
        return ::g::Fuse::Controls::FallbackTextEdit::LineCacheTransform::Transform(uInterface(uPtr(_transform), ::TYPES[54/*Fuse.Controls.FallbackTextEdit.LineCacheTransform*/]), _text);

    return _text;
}

// public LineCacheLine New(string text, Fuse.Controls.FallbackTextEdit.LineCacheTransform transform) [static] :68
LineCacheLine* LineCacheLine::New1(uString* text, uObject* transform)
{
    LineCacheLine* obj1 = (LineCacheLine*)uNew(LineCacheLine_typeof());
    obj1->ctor_(text, transform);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\FallbackTextEdit\$.uno(182)
// ----------------------------------------------------------------------------

// internal sealed class LineCachePasswordTransform :182
// {
LineCachePasswordTransform_type* LineCachePasswordTransform_typeof()
{
    static uSStrong<LineCachePasswordTransform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LineCachePasswordTransform);
    options.TypeSize = sizeof(LineCachePasswordTransform_type);
    type = (LineCachePasswordTransform_type*)uClassType::New("Fuse.Controls.FallbackTextEdit.LineCachePasswordTransform", options);
    type->fp_ctor_ = (void*)LineCachePasswordTransform__New1_fn;
    type->interface0.fp_Transform = (void(*)(uObject*, uString*, uString**))LineCachePasswordTransform__Transform_fn;
    ::TYPES[2] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[4] = ::g::Uno::String_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::FallbackTextEdit::LineCacheTransform_typeof(), offsetof(LineCachePasswordTransform_type, interface0));
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::LineCachePasswordTransform, _reveal), 0);
    return type;
}

// public generated LineCachePasswordTransform() :182
void LineCachePasswordTransform__ctor__fn(LineCachePasswordTransform* __this)
{
    __this->ctor_();
}

// public generated LineCachePasswordTransform New() :182
void LineCachePasswordTransform__New1_fn(LineCachePasswordTransform** __retval)
{
    *__retval = LineCachePasswordTransform::New1();
}

// public bool SetReveal(int r) :185
void LineCachePasswordTransform__SetReveal_fn(LineCachePasswordTransform* __this, int* r, bool* __retval)
{
    *__retval = __this->SetReveal(*r);
}

// public string Transform(string text) :192
void LineCachePasswordTransform__Transform_fn(LineCachePasswordTransform* __this, uString* text, uString** __retval)
{
    *__retval = __this->Transform(text);
}

// public generated LineCachePasswordTransform() [instance] :182
void LineCachePasswordTransform::ctor_()
{
    _reveal = -1;
}

// public bool SetReveal(int r) [instance] :185
bool LineCachePasswordTransform::SetReveal(int r)
{
    bool b = r != _reveal;
    _reveal = r;
    return b;
}

// public string Transform(string text) [instance] :192
uString* LineCachePasswordTransform::Transform(uString* text)
{
    if (::g::Uno::String::IsNullOrEmpty(text))
        return text;

    uChar replacement = 8226;
    uArray* buffer = uArray::New(::TYPES[2/*char[]*/], uPtr(text)->Length());

    for (int i = 0; i < buffer->Length(); ++i)
        buffer->Item<uChar>(i) = replacement;

    if (_reveal != -1)
        buffer->Item<uChar>(_reveal) = text->Item(_reveal);

    return uString::CharArray(buffer);
}

// public generated LineCachePasswordTransform New() [static] :182
LineCachePasswordTransform* LineCachePasswordTransform::New1()
{
    LineCachePasswordTransform* obj1 = (LineCachePasswordTransform*)uNew(LineCachePasswordTransform_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\FallbackTextEdit\$.uno(177)
// ----------------------------------------------------------------------------

// internal abstract interface LineCacheTransform :177
// {
uInterfaceType* LineCacheTransform_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.FallbackTextEdit.LineCacheTransform", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\FallbackTextEdit\$.uno(731)
// ----------------------------------------------------------------------------

// private sealed class TextEditVisual.SwipeGestureHelper :731
// {
uType* TextEditVisual__SwipeGestureHelper_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(TextEditVisual__SwipeGestureHelper);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.FallbackTextEdit.TextEditVisual.SwipeGestureHelper", options);
    ::TYPES[0] = ::g::Uno::Float2_typeof();
    ::TYPES[19] = ::g::Fuse::Controls::FallbackTextEdit::TextEditVisual__DegreeSpan_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextEditVisual__SwipeGestureHelper, _lengthThreshold), 0,
        ::g::Fuse::Controls::FallbackTextEdit::TextEditVisual__DegreeSpan_typeof()->Array(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextEditVisual__SwipeGestureHelper, _spans), 0);
    return type;
}

// public SwipeGestureHelper(float lengthThreshold, Fuse.Controls.FallbackTextEdit.TextEditVisual.DegreeSpan[] spans) :735
void TextEditVisual__SwipeGestureHelper__ctor__fn(TextEditVisual__SwipeGestureHelper* __this, float* lengthThreshold, uArray* spans)
{
    __this->ctor_(*lengthThreshold, spans);
}

// public bool IsWithinBounds(float2 vector) :740
void TextEditVisual__SwipeGestureHelper__IsWithinBounds_fn(TextEditVisual__SwipeGestureHelper* __this, ::g::Uno::Float2* vector, bool* __retval)
{
    *__retval = __this->IsWithinBounds(*vector);
}

// public SwipeGestureHelper New(float lengthThreshold, Fuse.Controls.FallbackTextEdit.TextEditVisual.DegreeSpan[] spans) :735
void TextEditVisual__SwipeGestureHelper__New1_fn(float* lengthThreshold, uArray* spans, TextEditVisual__SwipeGestureHelper** __retval)
{
    *__retval = TextEditVisual__SwipeGestureHelper::New1(*lengthThreshold, spans);
}

// public SwipeGestureHelper(float lengthThreshold, Fuse.Controls.FallbackTextEdit.TextEditVisual.DegreeSpan[] spans) [instance] :735
void TextEditVisual__SwipeGestureHelper::ctor_(float lengthThreshold, uArray* spans)
{
    _spans = spans;
    _lengthThreshold = lengthThreshold;
}

// public bool IsWithinBounds(float2 vector) [instance] :740
bool TextEditVisual__SwipeGestureHelper::IsWithinBounds(::g::Uno::Float2 vector)
{
    float length = ::g::Uno::Vector::Length(vector);

    if (length < _lengthThreshold)
        return false;

    float angle = ::g::Uno::Math::RadiansToDegrees1(::g::Uno::Math::Atan22(vector.X, vector.Y));

    for (int i = 0; i < uPtr(_spans)->Length(); i++)
        if (uPtr(uPtr(_spans)->Strong< ::g::Fuse::Controls::FallbackTextEdit::TextEditVisual__DegreeSpan*>(i))->IsWithinBounds(angle))
            return true;

    return false;
}

// public SwipeGestureHelper New(float lengthThreshold, Fuse.Controls.FallbackTextEdit.TextEditVisual.DegreeSpan[] spans) [static] :735
TextEditVisual__SwipeGestureHelper* TextEditVisual__SwipeGestureHelper::New1(float lengthThreshold, uArray* spans)
{
    TextEditVisual__SwipeGestureHelper* obj1 = (TextEditVisual__SwipeGestureHelper*)uNew(TextEditVisual__SwipeGestureHelper_typeof());
    obj1->ctor_(lengthThreshold, spans);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\FallbackTextEdit\$.uno(699)
// ----------------------------------------------------------------------------

// public sealed class TextEditVisual :699
// {
// static TextEditVisual() :699
static void TextEditVisual__cctor_1_fn(uType* __type)
{
    TextEditVisual::_horizontalGesture_ = TextEditVisual__SwipeGestureHelper::New1(15.0f, uArray::Init<TextEditVisual__DegreeSpan*>(::TYPES[19/*Fuse.Controls.FallbackTextEdit.TextEditVisual.DegreeSpan[]*/], 2, (TextEditVisual__DegreeSpan*)TextEditVisual__DegreeSpan::New1(45.0f, 135.0f), (TextEditVisual__DegreeSpan*)TextEditVisual__DegreeSpan::New1(-45.0f, -135.0f)));
    TextEditVisual::_verticalGesture_ = TextEditVisual__SwipeGestureHelper::New1(15.0f, uArray::Init<TextEditVisual__DegreeSpan*>(::TYPES[19/*Fuse.Controls.FallbackTextEdit.TextEditVisual.DegreeSpan[]*/], 3, (TextEditVisual__DegreeSpan*)TextEditVisual__DegreeSpan::New1(-45.0f, 45.0f), (TextEditVisual__DegreeSpan*)TextEditVisual__DegreeSpan::New1(-135.0f, -180.0f), (TextEditVisual__DegreeSpan*)TextEditVisual__DegreeSpan::New1(135.0f, 180.0f)));
}

::g::Fuse::Controls::Graphics::ControlVisual_type* TextEditVisual_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Graphics::ControlVisual_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 74;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TextEditVisual);
    options.TypeSize = sizeof(::g::Fuse::Controls::Graphics::ControlVisual_type);
    type = (::g::Fuse::Controls::Graphics::ControlVisual_type*)uClassType::New("Fuse.Controls.FallbackTextEdit.TextEditVisual", options);
    type->SetBase(::g::Fuse::Controls::Graphics::ControlVisual_typeof()->MakeType(::g::Fuse::Controls::TextEdit_typeof()));
    type->fp_ctor_ = (void*)TextEditVisual__New1_fn;
    type->fp_cctor_ = TextEditVisual__cctor_1_fn;
    type->fp_Attach = (void(*)(::g::Fuse::Controls::Graphics::ControlVisual*))TextEditVisual__Attach_fn;
    type->fp_Detach = (void(*)(::g::Fuse::Controls::Graphics::ControlVisual*))TextEditVisual__Detach_fn;
    type->fp_GetMarginSize = (void(*)(::g::Fuse::Node*, ::g::Uno::Float2*, int*, ::g::Uno::Float2*))TextEditVisual__GetMarginSize_fn;
    type->fp_GetSubNode = (void(*)(::g::Fuse::Node*, int*, ::g::Fuse::Node**))TextEditVisual__GetSubNode_fn;
    type->fp_OnArrangeMarginBox = (void(*)(::g::Fuse::Node*, ::g::Uno::Float2*, ::g::Uno::Float2*, int*, ::g::Uno::Float2*))TextEditVisual__OnArrangeMarginBox_fn;
    type->fp_OnDraw = (void(*)(::g::Fuse::Controls::Graphics::Visual*, ::g::Fuse::DrawContext*))TextEditVisual__OnDraw_fn;
    type->fp_OnHitTest = (void(*)(::g::Fuse::Node*, ::g::Fuse::HitTestContext*))TextEditVisual__OnHitTest_fn;
    type->fp_get_SubNodeCount = (void(*)(::g::Fuse::Node*, int*))TextEditVisual__get_SubNodeCount_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::STRINGS[2] = uString::Const("Font property was not set. Did you provide a custom style with no font?");
    ::STRINGS[0] = uString::Const("");
    ::TYPES[19] = TextEditVisual__DegreeSpan_typeof()->Array();
    ::TYPES[6] = ::g::Fuse::Controls::FallbackTextEdit::TextPosition_typeof();
    ::TYPES[13] = ::g::Uno::Action_typeof();
    ::TYPES[20] = ::g::Fuse::Node_typeof();
    ::TYPES[21] = ::g::Fuse::Input::Focus_typeof();
    ::TYPES[22] = ::g::Fuse::Input::FocusGainedHandler_typeof();
    ::TYPES[23] = ::g::Fuse::Input::FocusLostHandler_typeof();
    ::TYPES[24] = ::g::Fuse::Input::TextService_typeof();
    ::TYPES[25] = ::g::Fuse::Input::TextEnteredHandler_typeof();
    ::TYPES[26] = ::g::Fuse::Input::Pointer_typeof();
    ::TYPES[27] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[28] = ::g::Fuse::Input::PointerMovedHandler_typeof();
    ::TYPES[29] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    ::TYPES[30] = ::g::Fuse::Input::Keyboard_typeof();
    ::TYPES[31] = ::g::Fuse::Input::KeyPressedHandler_typeof();
    ::TYPES[32] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[33] = ::g::Fuse::Controls::Graphics::ControlVisual_typeof()->MakeType(::g::Fuse::Controls::TextEdit_typeof());
    ::TYPES[34] = ::g::Uno::EventHandler_typeof();
    ::TYPES[35] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[36] = ::g::Fuse::Controls::Graphics::Visual_typeof();
    ::TYPES[37] = ::g::Uno::Rect_typeof();
    ::TYPES[17] = ::g::Uno::Float_typeof();
    ::TYPES[38] = ::g::Fuse::Time_typeof();
    ::TYPES[0] = ::g::Uno::Float2_typeof();
    ::TYPES[39] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[40] = ::g::Fuse::Controls::TextEdit_typeof();
    ::TYPES[41] = ::g::Uno::Float4_typeof();
    ::TYPES[42] = ::g::Fuse::Drawing::Primitives::Rectangle_typeof();
    ::TYPES[43] = ::g::Fuse::Drawing::Brush_typeof();
    ::TYPES[11] = ::g::Fuse::Controls::Internal::WordWrapInfo_typeof();
    ::TYPES[44] = ::g::Uno::Int_typeof();
    ::TYPES[45] = ::g::Fuse::Input::KeyEventArgs_typeof();
    ::TYPES[7] = ::g::Fuse::Controls::FallbackTextEdit::TextSpan_typeof();
    ::TYPES[14] = ::g::Uno::Bool_typeof();
    ::TYPES[4] = ::g::Uno::String_typeof();
    ::TYPES[46] = ::g::Fuse::HitTestContext_typeof();
    ::TYPES[47] = ::g::Uno::Platform::Window_typeof();
    ::TYPES[48] = ::g::Uno::Application_typeof();
    ::TYPES[49] = ::g::Fuse::NodeEventArgs_typeof();
    ::TYPES[50] = ::g::Fuse::Input::PointerEventArgs_typeof();
    ::TYPES[18] = uObject_typeof();
    ::TYPES[51] = ::g::Fuse::Controls::FallbackTextEdit::LineCache_typeof();
    ::TYPES[52] = ::g::Fuse::Input::TextEnteredArgs_typeof();
    ::TYPES[53] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[54] = ::g::Fuse::Controls::FallbackTextEdit::LineCacheTransform_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Graphics::ControlVisual_type, interface0));
    type->SetFields(56,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextEditVisual, _caretBlinkTime), 0,
        ::g::Fuse::Drawing::SolidColor_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextEditVisual, _caretBrush), 0,
        ::g::Fuse::Controls::FallbackTextEdit::TextPosition_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextEditVisual, _caretPosition), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextEditVisual, _down), 0,
        ::g::Fuse::Controls::FallbackTextEdit::TextPosition_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextEditVisual, _interactionSelectionStartPos), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextEditVisual, _isReadOnly), 0,
        ::g::Fuse::Controls::FallbackTextEdit::LineCache_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextEditVisual, _lineCache), 0,
        ::g::Fuse::Controls::FallbackTextEdit::LineCachePasswordTransform_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextEditVisual, _passwordTransform), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextEditVisual, _revealEnd), 0,
        ::g::Fuse::Controls::FallbackTextEdit::TextSpan_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextEditVisual, _selection), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextEditVisual, _startCoord), 0,
        ::g::Fuse::Controls::FallbackTextEdit::TextWindow_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextEditVisual, _textWindow), 0,
        ::g::Fuse::Controls::FallbackTextEdit::VisualTextTransform_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextEditVisual, _visualTextTransform), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextEditVisual, _windowPos), 0,
        ::g::Fuse::Controls::Internal::WordWrapInfo_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextEditVisual, _wrapInfo), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextEditVisual, RevealTime), 0,
        TextEditVisual__SwipeGestureHelper_typeof(), (uintptr_t)&::g::Fuse::Controls::FallbackTextEdit::TextEditVisual::_horizontalGesture_, uFieldFlagsStatic,
        TextEditVisual__SwipeGestureHelper_typeof(), (uintptr_t)&::g::Fuse::Controls::FallbackTextEdit::TextEditVisual::_verticalGesture_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)TextEditVisual__New1_fn, 0, true, TextEditVisual_typeof(), 0),
        new uFunction("SelectAll", NULL, (void*)TextEditVisual__SelectAll_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_SelectedText", NULL, (void*)TextEditVisual__get_SelectedText_fn, 0, false, ::g::Uno::String_typeof(), 0));
    return type;
}

// public TextEditVisual() :855
void TextEditVisual__ctor_3_fn(TextEditVisual* __this)
{
    __this->ctor_3();
}

// protected override sealed void Attach() :751
void TextEditVisual__Attach_fn(TextEditVisual* __this)
{
    ::g::Fuse::Controls::TextEdit* ret6;
    ::g::Fuse::Controls::TextEdit* ret7;
    ::g::Fuse::Controls::TextEdit* ret8;
    ::g::Fuse::Controls::TextEdit* ret9;
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret6), ret6))->add_TextLayoutPropertyChanged(uDelegate::New(::TYPES[34/*Uno.EventHandler*/], (void*)TextEditVisual__OnTextLayoutPropertyChanged_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret7), ret7))->add_TextRenderPropertyChanged(uDelegate::New(::TYPES[34/*Uno.EventHandler*/], (void*)TextEditVisual__OnTextRenderPropertyChanged_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret8), ret8))->add_ValueChanged(uDelegate::New(::TYPES[35/*Uno.UX.ValueChangedHandler<string>*/], (void*)TextEditVisual__OnValueChanged_fn, __this));
    __this->OnTextLayoutPropertyChanged(NULL, NULL);
    __this->OnTextRenderPropertyChanged(NULL, NULL);
    __this->UpdateValue(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret9), ret9))->Value());
    uPtr(__this->_caretBrush)->Pin();
}

// private void BringCaretIntoView(Fuse.Controls.Internal.WordWrapInfo wrapInfo, float textBoundsWidth) :1047
void TextEditVisual__BringCaretIntoView_fn(TextEditVisual* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, float* textBoundsWidth)
{
    __this->BringCaretIntoView(wrapInfo, *textBoundsWidth);
}

// private void ClearPasswordReveal() :1271
void TextEditVisual__ClearPasswordReveal_fn(TextEditVisual* __this)
{
    __this->ClearPasswordReveal();
}

// private float2 ControlToTextBounds(float2 p) :1098
void TextEditVisual__ControlToTextBounds_fn(TextEditVisual* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ControlToTextBounds(*p);
}

// private float2 ControlToWindow(float2 p) :1078
void TextEditVisual__ControlToWindow_fn(TextEditVisual* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ControlToWindow(*p);
}

// private Fuse.Controls.Internal.WordWrapInfo CreateWrapInfo(float wrapWidth, bool haveWidth) :928
void TextEditVisual__CreateWrapInfo_fn(TextEditVisual* __this, float* wrapWidth, bool* haveWidth, ::g::Fuse::Controls::Internal::WordWrapInfo** __retval)
{
    *__retval = __this->CreateWrapInfo(*wrapWidth, *haveWidth);
}

// private void DeleteSelection() :1066
void TextEditVisual__DeleteSelection_fn(TextEditVisual* __this)
{
    __this->DeleteSelection();
}

// protected override sealed void Detach() :762
void TextEditVisual__Detach_fn(TextEditVisual* __this)
{
    ::g::Fuse::Controls::TextEdit* ret12;
    ::g::Fuse::Controls::TextEdit* ret13;
    ::g::Fuse::Controls::TextEdit* ret14;
    uPtr(__this->_caretBrush)->Unpin();
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret12), ret12))->remove_TextLayoutPropertyChanged(uDelegate::New(::TYPES[34/*Uno.EventHandler*/], (void*)TextEditVisual__OnTextLayoutPropertyChanged_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret13), ret13))->remove_TextRenderPropertyChanged(uDelegate::New(::TYPES[34/*Uno.EventHandler*/], (void*)TextEditVisual__OnTextRenderPropertyChanged_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret14), ret14))->remove_ValueChanged(uDelegate::New(::TYPES[35/*Uno.UX.ValueChangedHandler<string>*/], (void*)TextEditVisual__OnValueChanged_fn, __this));
}

// private void DrawCaret(Fuse.Controls.Internal.WordWrapInfo wrapInfo, float textBoundsWidth, Fuse.DrawContext dc) :977
void TextEditVisual__DrawCaret_fn(TextEditVisual* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, float* textBoundsWidth, ::g::Fuse::DrawContext* dc)
{
    __this->DrawCaret(wrapInfo, *textBoundsWidth, dc);
}

// private Uno.Rect GetCaretRect(Fuse.Controls.Internal.WordWrapInfo wrapInfo, float textBoundsWidth) :1058
void TextEditVisual__GetCaretRect_fn(TextEditVisual* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, float* textBoundsWidth, ::g::Uno::Rect* __retval)
{
    *__retval = __this->GetCaretRect(wrapInfo, *textBoundsWidth);
}

// private Uno.Rect GetClampedTextBoundsRect(Fuse.Controls.Internal.WordWrapInfo wrapInfo) :994
void TextEditVisual__GetClampedTextBoundsRect_fn(TextEditVisual* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::g::Uno::Rect* __retval)
{
    *__retval = __this->GetClampedTextBoundsRect(wrapInfo);
}

// private float2 GetClampedTextBoundsSize(Fuse.Controls.Internal.WordWrapInfo wrapInfo) :999
void TextEditVisual__GetClampedTextBoundsSize_fn(TextEditVisual* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetClampedTextBoundsSize(wrapInfo);
}

// private Fuse.Font GetFontOrThrow() :945
void TextEditVisual__GetFontOrThrow_fn(TextEditVisual* __this, ::g::Fuse::Font** __retval)
{
    *__retval = __this->GetFontOrThrow();
}

// public override sealed float2 GetMarginSize(float2 fillSize, Fuse.SizeFlags fillSet) :912
void TextEditVisual__GetMarginSize_fn(TextEditVisual* __this, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval)
{
    ::g::Fuse::Controls::TextEdit* ret20;
    ::g::Uno::Float2 fillSize_ = *fillSize;
    int fillSet_ = *fillSet;

    if (uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret20), ret20))->Font() == NULL)
        return *__retval = ::g::Uno::Float2__New1(0.0f), void();

    float wrapWidth = ::g::Uno::Math::Max1(fillSize_.X, 0.0f);
    __this->_wrapInfo = __this->CreateWrapInfo(wrapWidth, (fillSet_ & 1) == 1);
    ::g::Uno::Float2 r = ::g::Uno::Float2__op_Addition1(::g::Uno::Math::Ceil2(__this->GetTextBoundsSize(__this->_wrapInfo)), 1.0f);

    if ((fillSet_ & 1) == 1)
        r.X = ::g::Uno::Math::Min1(r.X, fillSize_.X);

    return *__retval = r, void();
}

// public override sealed Fuse.Node GetSubNode(int index) :902
void TextEditVisual__GetSubNode_fn(TextEditVisual* __this, int* index, ::g::Fuse::Node** __retval)
{
    int ret21;
    int index_ = *index;
    ::g::Fuse::Node* ret22;
    int sc = (::g::Fuse::Node__get_SubNodeCount_fn(__this, &ret21), ret21);

    if (index_ < sc)
        return *__retval = (::g::Fuse::Node__GetSubNode_fn(__this, uCRef<int>(index_), &ret22), ret22), void();

    return *__retval = __this->_textWindow, void();
}

// private float2 GetTextBoundsSize(Fuse.Controls.Internal.WordWrapInfo wrapInfo) :1004
void TextEditVisual__GetTextBoundsSize_fn(TextEditVisual* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetTextBoundsSize(wrapInfo);
}

// private void HandleLeftArrow(Fuse.Input.KeyPressedArgs args) :1407
void TextEditVisual__HandleLeftArrow_fn(TextEditVisual* __this, ::g::Fuse::Input::KeyPressedArgs* args)
{
    __this->HandleLeftArrow(args);
}

// private void HandleRightArrow(Fuse.Input.KeyPressedArgs args) :1440
void TextEditVisual__HandleRightArrow_fn(TextEditVisual* __this, ::g::Fuse::Input::KeyPressedArgs* args)
{
    __this->HandleRightArrow(args);
}

// private void InvalidateLineCacheLayout() :874
void TextEditVisual__InvalidateLineCacheLayout_fn(TextEditVisual* __this)
{
    __this->InvalidateLineCacheLayout();
}

// private bool get_IsWordWrapEnabled() :888
void TextEditVisual__get_IsWordWrapEnabled_fn(TextEditVisual* __this, bool* __retval)
{
    *__retval = __this->IsWordWrapEnabled();
}

// private void MoveSelection(float2 windowPoint) :1238
void TextEditVisual__MoveSelection_fn(TextEditVisual* __this, ::g::Uno::Float2* windowPoint)
{
    __this->MoveSelection(*windowPoint);
}

// public TextEditVisual New() :855
void TextEditVisual__New1_fn(TextEditVisual** __retval)
{
    *__retval = TextEditVisual::New1();
}

// protected override sealed float2 OnArrangeMarginBox(float2 position, float2 availableSize, Fuse.SizeFlags availSet) :938
void TextEditVisual__OnArrangeMarginBox_fn(TextEditVisual* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* availableSize, int* availSet, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 ret23;
    ::g::Uno::Float2 position_ = *position;
    ::g::Uno::Float2 availableSize_ = *availableSize;
    int availSet_ = *availSet;
    ::g::Uno::Float2 sz = (::g::Fuse::Controls::Graphics::Visual__OnArrangeMarginBox_fn(__this, uCRef(position_), uCRef(availableSize_), uCRef<int>(availSet_), &ret23), ret23);
    uPtr(__this->_textWindow)->ArrangeMarginBox(::g::Uno::Float2__New1(0.0f), sz, 3);
    return *__retval = sz, void();
}

// protected override sealed void OnDraw(Fuse.DrawContext dc) :952
void TextEditVisual__OnDraw_fn(TextEditVisual* __this, ::g::Fuse::DrawContext* dc)
{
    ::g::Fuse::Controls::TextEdit* ret24;
    ::g::Fuse::Controls::TextEdit* ret25;
    ::g::Fuse::Controls::TextEdit* ret26;
    ::g::Fuse::Controls::TextEdit* ret27;
    ::g::Fuse::Controls::TextEdit* ret28;
    __this->GetFontOrThrow();

    if (__this->_wrapInfo == NULL)
        __this->_wrapInfo = __this->CreateWrapInfo(__this->ActualSize().X, true);

    ::g::Uno::Float2 textBoundsSize = __this->GetClampedTextBoundsSize(__this->_wrapInfo);
    float textBoundsWidth = textBoundsSize.X;
    __this->BringCaretIntoView(__this->_wrapInfo, textBoundsWidth);

    if (!::g::Uno::String::IsNullOrEmpty(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret24), ret24))->Value()))
        uPtr(__this->_textWindow)->Draw1(__this->_wrapInfo, __this->_selection, uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret25), ret25))->TextColor(), uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret26), ret26))->SelectionColor(), uPtr(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret27), ret27))->Value())->Length(), uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret28), ret28))->TextAlignment(), textBoundsSize, ::g::Uno::Float2__op_UnaryNegation(__this->_windowPos), dc);

    if (::g::Fuse::Input::Focus::IsWithin(__this))
    {
        __this->DrawCaret(__this->_wrapInfo, textBoundsWidth, dc);
        __this->InvalidateVisual();
    }
}

// private void OnGotFocus(object sender, Fuse.Input.FocusGainedArgs args) :1108
void TextEditVisual__OnGotFocus_fn(TextEditVisual* __this, uObject* sender, ::g::Fuse::Input::FocusGainedArgs* args)
{
    __this->OnGotFocus(sender, args);
}

// protected override sealed void OnHitTest(Fuse.HitTestContext htc) :1524
void TextEditVisual__OnHitTest_fn(TextEditVisual* __this, ::g::Fuse::HitTestContext* htc)
{
    if (__this->IsPointInside(uPtr(htc)->LocalPoint()))
        uPtr(htc)->Hit(__this);

    ::g::Fuse::Node__OnHitTest_fn(__this, htc);
}

// private void OnKeyPressed(object sender, Fuse.Input.KeyPressedArgs args) :1278
void TextEditVisual__OnKeyPressed_fn(TextEditVisual* __this, uObject* sender, ::g::Fuse::Input::KeyPressedArgs* args)
{
    __this->OnKeyPressed(sender, args);
}

// private void OnLostCapture() :1153
void TextEditVisual__OnLostCapture_fn(TextEditVisual* __this)
{
    __this->OnLostCapture();
}

// private void OnLostFocus(object sender, Fuse.Input.FocusLostArgs args) :1128
void TextEditVisual__OnLostFocus_fn(TextEditVisual* __this, uObject* sender, ::g::Fuse::Input::FocusLostArgs* args)
{
    __this->OnLostFocus(sender, args);
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs c) :1182
void TextEditVisual__OnPointerMoved_fn(TextEditVisual* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* c)
{
    __this->OnPointerMoved(sender, c);
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs c) :1163
void TextEditVisual__OnPointerPressed_fn(TextEditVisual* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* c)
{
    __this->OnPointerPressed(sender, c);
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs c) :1211
void TextEditVisual__OnPointerReleased_fn(TextEditVisual* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* c)
{
    __this->OnPointerReleased(sender, c);
}

// private void OnTextEdited() :879
void TextEditVisual__OnTextEdited_fn(TextEditVisual* __this)
{
    __this->OnTextEdited();
}

// private void OnTextEntered(object sender, Fuse.Input.TextEnteredArgs args) :1246
void TextEditVisual__OnTextEntered_fn(TextEditVisual* __this, uObject* sender, ::g::Fuse::Input::TextEnteredArgs* args)
{
    __this->OnTextEntered(sender, args);
}

// protected void OnTextLayoutPropertyChanged(object sender, Uno.EventArgs args) :771
void TextEditVisual__OnTextLayoutPropertyChanged_fn(TextEditVisual* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnTextLayoutPropertyChanged(sender, args);
}

// protected void OnTextRenderPropertyChanged(object sender, Uno.EventArgs args) :791
void TextEditVisual__OnTextRenderPropertyChanged_fn(TextEditVisual* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnTextRenderPropertyChanged(sender, args);
}

// private void OnUpdate(object s, object a) :1123
void TextEditVisual__OnUpdate_fn(TextEditVisual* __this, uObject* s, uObject* a)
{
    __this->OnUpdate(s, a);
}

// private void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<string> args) :834
void TextEditVisual__OnValueChanged_fn(TextEditVisual* __this, uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    __this->OnValueChanged(sender, args);
}

// private void ResetCaretBlink() :1031
void TextEditVisual__ResetCaretBlink_fn(TextEditVisual* __this)
{
    __this->ResetCaretBlink();
}

// private void ResetWindowPosition() :1020
void TextEditVisual__ResetWindowPosition_fn(TextEditVisual* __this)
{
    __this->ResetWindowPosition();
}

// private void Select(Fuse.Controls.FallbackTextEdit.TextPosition oldCaretPos, Fuse.Controls.FallbackTextEdit.TextPosition newCaretPos, bool shouldSelect) :1473
void TextEditVisual__Select_fn(TextEditVisual* __this, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* oldCaretPos, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* newCaretPos, bool* shouldSelect)
{
    __this->Select(oldCaretPos, newCaretPos, *shouldSelect);
}

// public void SelectAll() :890
void TextEditVisual__SelectAll_fn(TextEditVisual* __this)
{
    __this->SelectAll();
}

// public string get_SelectedText() :853
void TextEditVisual__get_SelectedText_fn(TextEditVisual* __this, uString** __retval)
{
    *__retval = __this->SelectedText();
}

// private void SelectFunc(Fuse.Controls.FallbackTextEdit.TextPosition oldCaretPos, Fuse.Controls.FallbackTextEdit.TextPosition newCaretPos) :1485
void TextEditVisual__SelectFunc_fn(TextEditVisual* __this, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* oldCaretPos, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* newCaretPos)
{
    __this->SelectFunc(oldCaretPos, newCaretPos);
}

// private void SetCaretPos(float2 p) :1036
void TextEditVisual__SetCaretPos_fn(TextEditVisual* __this, ::g::Uno::Float2* p)
{
    __this->SetCaretPos(*p);
}

// private void SetWindowPos(float2 p) :1013
void TextEditVisual__SetWindowPos_fn(TextEditVisual* __this, ::g::Uno::Float2* p)
{
    __this->SetWindowPos(*p);
}

// private void StartSelection(float2 windowPoint) :1229
void TextEditVisual__StartSelection_fn(TextEditVisual* __this, ::g::Uno::Float2* windowPoint)
{
    __this->StartSelection(*windowPoint);
}

// public override sealed int get_SubNodeCount() :899
void TextEditVisual__get_SubNodeCount_fn(TextEditVisual* __this, int* __retval)
{
    int ret42;
    return *__retval = 1 + (::g::Fuse::Node__get_SubNodeCount_fn(__this, &ret42), ret42), void();
}

// private float2 TextBoundsToControl(float2 p) :1103
void TextEditVisual__TextBoundsToControl_fn(TextEditVisual* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->TextBoundsToControl(*p);
}

// private float2 TextBoundsToWindow(float2 p) :1093
void TextEditVisual__TextBoundsToWindow_fn(TextEditVisual* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->TextBoundsToWindow(*p);
}

// private void TransformUpdate(object s, object a) :1531
void TextEditVisual__TransformUpdate_fn(TextEditVisual* __this, uObject* s, uObject* a)
{
    __this->TransformUpdate(s, a);
}

// private void UpdateValue(string value) :841
void TextEditVisual__UpdateValue_fn(TextEditVisual* __this, uString* value)
{
    __this->UpdateValue(value);
}

// private Fuse.Controls.FallbackTextEdit.VisualTextTransform get_VisualTextTransform() :810
void TextEditVisual__get_VisualTextTransform_fn(TextEditVisual* __this, int* __retval)
{
    *__retval = __this->VisualTextTransform();
}

// private void set_VisualTextTransform(Fuse.Controls.FallbackTextEdit.VisualTextTransform value) :811
void TextEditVisual__set_VisualTextTransform_fn(TextEditVisual* __this, int* value)
{
    __this->VisualTextTransform(*value);
}

// private float2 WindowToControl(float2 p) :1083
void TextEditVisual__WindowToControl_fn(TextEditVisual* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->WindowToControl(*p);
}

// private float2 WindowToTextBounds(float2 p) :1088
void TextEditVisual__WindowToTextBounds_fn(TextEditVisual* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->WindowToTextBounds(*p);
}

uSStrong<TextEditVisual__SwipeGestureHelper*> TextEditVisual::_horizontalGesture_;
uSStrong<TextEditVisual__SwipeGestureHelper*> TextEditVisual::_verticalGesture_;

// public TextEditVisual() [instance] :855
void TextEditVisual::ctor_3()
{
    RevealTime = 2.0;
    _caretBrush = ::g::Fuse::Drawing::SolidColor::New1();
    _caretPosition = ::g::Fuse::Controls::FallbackTextEdit::TextPosition::Default();
    _startCoord = ::g::Uno::Float2__New1(0.0f);
    _down = -1;
    ctor_2();
    _lineCache = ::g::Fuse::Controls::FallbackTextEdit::LineCache::New1(uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)TextEditVisual__OnTextEdited_fn, this), uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)TextEditVisual__InvalidateLineCacheLayout_fn, this));
    _textWindow = ::g::Fuse::Controls::FallbackTextEdit::TextWindow::New1(this, _lineCache);
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), this, uDelegate::New(::TYPES[22/*Fuse.Input.FocusGainedHandler*/], (void*)TextEditVisual__OnGotFocus_fn, this));
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), this, uDelegate::New(::TYPES[23/*Fuse.Input.FocusLostHandler*/], (void*)TextEditVisual__OnLostFocus_fn, this));
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::TextService::TextEntered()), this, uDelegate::New(::TYPES[25/*Fuse.Input.TextEnteredHandler*/], (void*)TextEditVisual__OnTextEntered_fn, this));
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), this, uDelegate::New(::TYPES[27/*Fuse.Input.PointerPressedHandler*/], (void*)TextEditVisual__OnPointerPressed_fn, this));
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), this, uDelegate::New(::TYPES[28/*Fuse.Input.PointerMovedHandler*/], (void*)TextEditVisual__OnPointerMoved_fn, this));
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), this, uDelegate::New(::TYPES[29/*Fuse.Input.PointerReleasedHandler*/], (void*)TextEditVisual__OnPointerReleased_fn, this));
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Keyboard::KeyPressed()), this, uDelegate::New(::TYPES[31/*Fuse.Input.KeyPressedHandler*/], (void*)TextEditVisual__OnKeyPressed_fn, this));
    ::g::Fuse::Input::Focus::SetIsFocusable(this, true);
}

// private void BringCaretIntoView(Fuse.Controls.Internal.WordWrapInfo wrapInfo, float textBoundsWidth) [instance] :1047
void TextEditVisual::BringCaretIntoView(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, float textBoundsWidth)
{
    ::g::Uno::Rect windowRect = ::g::Uno::Rect__New2(_windowPos, ActualSize());
    ::g::Uno::Rect caretRect = GetCaretRect(wrapInfo, textBoundsWidth);
    ::g::Uno::Rect textRect = GetClampedTextBoundsRect(wrapInfo);
    ::g::Uno::Rect caretVisibleRect = ::g::Fuse::Internal::RectExtensions::MoveRectToContainRect(windowRect, caretRect);
    ::g::Uno::Rect clampedRect = ::g::Fuse::Internal::RectExtensions::MoveRectInsideRect(caretVisibleRect, textRect);
    SetWindowPos(clampedRect.Position());
}

// private void ClearPasswordReveal() [instance] :1271
void TextEditVisual::ClearPasswordReveal()
{
    if (_passwordTransform != NULL)
    {
        if (uPtr(_passwordTransform)->SetReveal(-1))
            uPtr(_lineCache)->InvalidateVisual();
    }
}

// private float2 ControlToTextBounds(float2 p) [instance] :1098
::g::Uno::Float2 TextEditVisual::ControlToTextBounds(::g::Uno::Float2 p)
{
    return WindowToTextBounds(ControlToWindow(p));
}

// private float2 ControlToWindow(float2 p) [instance] :1078
::g::Uno::Float2 TextEditVisual::ControlToWindow(::g::Uno::Float2 p)
{
    return p;
}

// private Fuse.Controls.Internal.WordWrapInfo CreateWrapInfo(float wrapWidth, bool haveWidth) [instance] :928
::g::Fuse::Controls::Internal::WordWrapInfo* TextEditVisual::CreateWrapInfo(float wrapWidth, bool haveWidth)
{
    ::g::Fuse::Controls::TextEdit* ret10;
    ::g::Fuse::Controls::TextEdit* ret11;
    ::g::Fuse::Controls::Internal::DefaultTextRenderer* renderer = ::g::Fuse::Controls::Graphics::DefaultTextVisual::GetTextRenderer(GetFontOrThrow());
    float fontSize = uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret10), ret10))->FontSize();
    return ::g::Fuse::Controls::Internal::WordWrapInfo::New1(renderer, haveWidth && IsWordWrapEnabled(), wrapWidth, fontSize, uPtr(renderer)->GetLineHeight(fontSize), uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret11), ret11))->LineSpacing(), AbsoluteZoom());
}

// private void DeleteSelection() [instance] :1066
void TextEditVisual::DeleteSelection()
{
    if (::g::Fuse::Controls::FallbackTextEdit::TextSpan::op_Equality(_selection, NULL))
        return;

    _caretPosition = uPtr(_lineCache)->DeleteSpan(_selection);
    _selection = NULL;
    _interactionSelectionStartPos = NULL;
}

// private void DrawCaret(Fuse.Controls.Internal.WordWrapInfo wrapInfo, float textBoundsWidth, Fuse.DrawContext dc) [instance] :977
void TextEditVisual::DrawCaret(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, float textBoundsWidth, ::g::Fuse::DrawContext* dc)
{
    ::g::Uno::Float4 ind4;
    ::g::Fuse::Controls::TextEdit* ret15;
    ::g::Fuse::Controls::TextEdit* ret16;
    ::g::Uno::Rect caretRect = GetCaretRect(wrapInfo, textBoundsWidth);
    ::g::Uno::Float2 pos = TextBoundsToControl(caretRect.Position());
    float blink = (::g::Uno::Math::Cos1(((float)(::g::Fuse::Time::FrameTime() - _caretBlinkTime) * 2.0f) * 3.14159274f) * 0.5f) + 0.5f;
    blink = 1.0f - ::g::Uno::Math::Pow1(1.0f - blink, 4.3f);
    ::g::Uno::Float2 caretSize = ::g::Uno::Float2__New2(1.0f, caretRect.Size().Y);
    uPtr(_caretBrush)->Color(::g::Uno::Float4__New8((ind4 = uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret15), ret15))->CaretColor(), ::g::Uno::Float3__New2(ind4.X, ind4.Y, ind4.Z)), uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret16), ret16))->CaretColor().W * blink));
    uPtr(_caretBrush)->Prepare(dc, caretSize);
    uPtr(::g::Fuse::Drawing::Primitives::Rectangle::Singleton())->Fill(dc, this, caretSize, ::g::Uno::Float4__New1(0.0f), _caretBrush, pos, 1.0f);
}

// private Uno.Rect GetCaretRect(Fuse.Controls.Internal.WordWrapInfo wrapInfo, float textBoundsWidth) [instance] :1058
::g::Uno::Rect TextEditVisual::GetCaretRect(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, float textBoundsWidth)
{
    ::g::Fuse::Controls::TextEdit* ret17;
    ::g::Uno::Float2 pos = uPtr(_lineCache)->TextPosToBounds(wrapInfo, uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret17), ret17))->TextAlignment(), textBoundsWidth, _caretPosition);
    float width = 2.0f;
    return ::g::Uno::Rect__New2(pos, ::g::Uno::Float2__New2(width, uPtr(wrapInfo)->LineHeight));
}

// private Uno.Rect GetClampedTextBoundsRect(Fuse.Controls.Internal.WordWrapInfo wrapInfo) [instance] :994
::g::Uno::Rect TextEditVisual::GetClampedTextBoundsRect(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo)
{
    return ::g::Uno::Rect__New2(::g::Uno::Float2__New1(0.0f), GetClampedTextBoundsSize(wrapInfo));
}

// private float2 GetClampedTextBoundsSize(Fuse.Controls.Internal.WordWrapInfo wrapInfo) [instance] :999
::g::Uno::Float2 TextEditVisual::GetClampedTextBoundsSize(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo)
{
    return ::g::Uno::Math::Max3(GetTextBoundsSize(wrapInfo), ActualSize());
}

// private Fuse.Font GetFontOrThrow() [instance] :945
::g::Fuse::Font* TextEditVisual::GetFontOrThrow()
{
    ::g::Fuse::Controls::TextEdit* ret18;
    ::g::Fuse::Controls::TextEdit* ret19;

    if (uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret18), ret18))->Font() == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[2/*"Font proper...*/]));

    return uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret19), ret19))->Font();
}

// private float2 GetTextBoundsSize(Fuse.Controls.Internal.WordWrapInfo wrapInfo) [instance] :1004
::g::Uno::Float2 TextEditVisual::GetTextBoundsSize(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo)
{
    return uPtr(_lineCache)->GetBoundsSize(wrapInfo);
}

// private void HandleLeftArrow(Fuse.Input.KeyPressedArgs args) [instance] :1407
void TextEditVisual::HandleLeftArrow(::g::Fuse::Input::KeyPressedArgs* args)
{
    if (uPtr(args)->IsMetaKeyPressed())
    {
        ::g::Fuse::Controls::FallbackTextEdit::TextPosition* oldCaretPosition = _caretPosition;
        _caretPosition = uPtr(_lineCache)->TryMoveOneWordLeft(_caretPosition);
        Select(oldCaretPosition, _caretPosition, uPtr(args)->IsShiftKeyPressed());
    }
    else
    {
        if (uPtr(args)->IsShiftKeyPressed())
        {
            ::g::Fuse::Controls::FallbackTextEdit::TextPosition* oldCaretPosition1 = _caretPosition;
            _caretPosition = uPtr(_lineCache)->TryMoveLeft(_caretPosition);
            SelectFunc(oldCaretPosition1, _caretPosition);
        }
        else
        {
            if (::g::Fuse::Controls::FallbackTextEdit::TextSpan::op_Inequality(_selection, NULL))
            {
                _caretPosition = uPtr(_selection)->Start;
                _selection = NULL;
            }
            else
            {
                _selection = NULL;
                _caretPosition = uPtr(_lineCache)->TryMoveLeft(_caretPosition);
            }
        }
    }
}

// private void HandleRightArrow(Fuse.Input.KeyPressedArgs args) [instance] :1440
void TextEditVisual::HandleRightArrow(::g::Fuse::Input::KeyPressedArgs* args)
{
    if (uPtr(args)->IsMetaKeyPressed())
    {
        ::g::Fuse::Controls::FallbackTextEdit::TextPosition* oldCaretPosition = _caretPosition;
        _caretPosition = uPtr(_lineCache)->TryMoveOneWordRight(_caretPosition);
        Select(oldCaretPosition, _caretPosition, uPtr(args)->IsShiftKeyPressed());
    }
    else
    {
        if (uPtr(args)->IsShiftKeyPressed())
        {
            ::g::Fuse::Controls::FallbackTextEdit::TextPosition* oldCaretPosition1 = _caretPosition;
            _caretPosition = uPtr(_lineCache)->TryMoveRight(_caretPosition);
            SelectFunc(oldCaretPosition1, _caretPosition);
        }
        else
        {
            if (::g::Fuse::Controls::FallbackTextEdit::TextSpan::op_Inequality(_selection, NULL))
            {
                _caretPosition = uPtr(_selection)->End;
                _selection = NULL;
            }
            else
            {
                _selection = NULL;
                _caretPosition = uPtr(_lineCache)->TryMoveRight(_caretPosition);
            }
        }
    }
}

// private void InvalidateLineCacheLayout() [instance] :874
void TextEditVisual::InvalidateLineCacheLayout()
{
    InvalidateLayout(2);
}

// private bool get_IsWordWrapEnabled() [instance] :888
bool TextEditVisual::IsWordWrapEnabled()
{
    ::g::Fuse::Controls::TextEdit* ret41;
    return uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret41), ret41))->TextWrapping() == 1;
}

// private void MoveSelection(float2 windowPoint) [instance] :1238
void TextEditVisual::MoveSelection(::g::Uno::Float2 windowPoint)
{
    SetCaretPos(WindowToLocal(windowPoint));

    if (::g::Fuse::Controls::FallbackTextEdit::TextPosition::op_Equality(_interactionSelectionStartPos, NULL))
        _interactionSelectionStartPos = _caretPosition;

    _selection = (::g::Fuse::Controls::FallbackTextEdit::TextPosition::op_Inequality(_interactionSelectionStartPos, _caretPosition) ? (::g::Fuse::Controls::FallbackTextEdit::TextSpan*)::g::Fuse::Controls::FallbackTextEdit::TextSpan::New1(_interactionSelectionStartPos, _caretPosition) : NULL);
}

// private void OnGotFocus(object sender, Fuse.Input.FocusGainedArgs args) [instance] :1108
void TextEditVisual::OnGotFocus(uObject* sender, ::g::Fuse::Input::FocusGainedArgs* args)
{
    InvalidateLayout(2);
    InvalidateVisual();
    _selection = NULL;
    add_Update(uDelegate::New(::TYPES[34/*Uno.EventHandler*/], (void*)TextEditVisual__OnUpdate_fn, this));
}

// private void OnKeyPressed(object sender, Fuse.Input.KeyPressedArgs args) [instance] :1278
void TextEditVisual::OnKeyPressed(uObject* sender, ::g::Fuse::Input::KeyPressedArgs* args)
{
    ::g::Fuse::Controls::TextEdit* ret29;
    ::g::Fuse::Controls::TextEdit* ret30;
    ::g::Fuse::Controls::TextEdit* ret31;
    ::g::Fuse::Controls::TextEdit* ret32;
    ::g::Fuse::Controls::TextEdit* ret33;
    bool recognizedKey = false;
    float wrapWidth = ActualSize().X;
    ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo = CreateWrapInfo(wrapWidth, true);
    float textBoundsWidth = GetClampedTextBoundsSize(wrapInfo).X;
    ClearPasswordReveal();

    if (!uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret29), ret29))->IsReadOnly())

        switch (uPtr(args)->Key())
        {
            case 13:
            {
                if (uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret30), ret30))->IsMultiline())
                {
                    DeleteSelection();
                    _caretPosition = uPtr(_lineCache)->InsertNewline(_caretPosition);
                }
                else if (uPtr(uPtr(::g::Uno::Application::Current())->Window())->IsTextInputActive())
                    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret31), ret31))->OnAction();

                recognizedKey = true;
                break;
            }
            case 46:
            {
                if (::g::Fuse::Controls::FallbackTextEdit::TextSpan::op_Equality(_selection, NULL))
                    _caretPosition = uPtr(_lineCache)->TryDelete(_caretPosition);
                else
                    DeleteSelection();

                recognizedKey = true;
                break;
            }
            case 8:
            {
                if (::g::Fuse::Controls::FallbackTextEdit::TextSpan::op_Equality(_selection, NULL))
                    _caretPosition = uPtr(_lineCache)->TryBackspace(_caretPosition);
                else
                    DeleteSelection();

                recognizedKey = true;
                break;
            }
            default:
                break;
        }

    switch (uPtr(args)->Key())
    {
        case 65:
        {
            if (!uPtr(args)->IsMetaKeyPressed())
                break;

            SelectAll();
            recognizedKey = true;
            break;
        }
        case 37:
        {
            HandleLeftArrow(args);
            recognizedKey = true;
            break;
        }
        case 39:
        {
            HandleRightArrow(args);
            recognizedKey = true;
            break;
        }
        case 38:
        {
            ::g::Fuse::Controls::FallbackTextEdit::TextPosition* oldCaretPos = _caretPosition;
            _caretPosition = uPtr(_lineCache)->TryMoveUp(wrapInfo, uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret32), ret32))->TextAlignment(), textBoundsWidth, _caretPosition);

            if (uPtr(args)->IsShiftKeyPressed() && (uPtr(_caretPosition)->Line == uPtr(oldCaretPos)->Line))
                _caretPosition = uPtr(_lineCache)->Home(wrapInfo, oldCaretPos);

            Select(oldCaretPos, _caretPosition, uPtr(args)->IsShiftKeyPressed());
            recognizedKey = true;
            break;
        }
        case 40:
        {
            ::g::Fuse::Controls::FallbackTextEdit::TextPosition* oldCaretPos1 = _caretPosition;
            _caretPosition = uPtr(_lineCache)->TryMoveDown(wrapInfo, uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret33), ret33))->TextAlignment(), textBoundsWidth, _caretPosition);

            if (uPtr(args)->IsShiftKeyPressed() && (uPtr(_caretPosition)->Line == uPtr(oldCaretPos1)->Line))
                _caretPosition = uPtr(_lineCache)->End(wrapInfo, oldCaretPos1);

            Select(oldCaretPos1, _caretPosition, uPtr(args)->IsShiftKeyPressed());
            recognizedKey = true;
            break;
        }
        case 36:
        {
            ::g::Fuse::Controls::FallbackTextEdit::TextPosition* oldCaretPos2 = _caretPosition;
            _caretPosition = uPtr(_lineCache)->Home(wrapInfo, _caretPosition);
            Select(oldCaretPos2, _caretPosition, uPtr(args)->IsShiftKeyPressed());
            recognizedKey = true;
            break;
        }
        case 35:
        {
            ::g::Fuse::Controls::FallbackTextEdit::TextPosition* oldCaretPos3 = _caretPosition;
            _caretPosition = uPtr(_lineCache)->End(wrapInfo, _caretPosition);
            Select(oldCaretPos3, _caretPosition, uPtr(args)->IsShiftKeyPressed());
            recognizedKey = true;
            break;
        }
        default:
            break;
    }

    if (recognizedKey)
    {
        ResetCaretBlink();
        uPtr(args)->IsHandled(true);
    }
}

// private void OnLostCapture() [instance] :1153
void TextEditVisual::OnLostCapture()
{
    ::g::Fuse::Input::Focus::ReleaseFrom(this);
    _selection = NULL;
    _down = -1;
}

// private void OnLostFocus(object sender, Fuse.Input.FocusLostArgs args) [instance] :1128
void TextEditVisual::OnLostFocus(uObject* sender, ::g::Fuse::Input::FocusLostArgs* args)
{
    remove_Update(uDelegate::New(::TYPES[34/*Uno.EventHandler*/], (void*)TextEditVisual__OnUpdate_fn, this));
    ResetWindowPosition();
    InvalidateVisual();
    InvalidateLayout(2);
    _selection = NULL;
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs c) [instance] :1182
void TextEditVisual::OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* c)
{
    if (_down != uPtr(c)->PointIndex())
        return;

    MoveSelection(uPtr(c)->WindowPoint());

    if (c->IsHardCapturedTo(this))
        uPtr(c)->IsHandled(true);
    else if (c->IsSoftCapturedTo(this))
    {
        ::g::Uno::Float2 diff = ::g::Uno::Float2__op_Subtraction2(uPtr(c)->WindowPoint(), _startCoord);
        bool withinBounds = uPtr(TextEditVisual::_horizontalGesture())->IsWithinBounds(diff);

        if (withinBounds)
        {
            uPtr(c)->TryHardCapture(this, uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)TextEditVisual__OnLostCapture_fn, this), NULL);
            ::g::Fuse::Input::Focus::GiveTo(this);
        }
    }
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs c) [instance] :1163
void TextEditVisual::OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* c)
{
    if (_down == -1)
    {
        _startCoord = uPtr(c)->WindowPoint();
        _down = c->PointIndex();

        if (::g::Fuse::Input::Focus::IsWithin(this))
            uPtr(c)->TryHardCapture(this, uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)TextEditVisual__OnLostCapture_fn, this), NULL);
        else
            uPtr(c)->TrySoftCapture(this, uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)TextEditVisual__OnLostCapture_fn, this), NULL);

        StartSelection(c->WindowPoint());
    }
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs c) [instance] :1211
void TextEditVisual::OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* c)
{
    if (_down != uPtr(c)->PointIndex())
        return;

    if (uPtr(c)->IsHardCapturedTo(this))
    {
        uPtr(c)->ReleaseHardCapture(this);
        c->IsHandled(true);
    }

    if (uPtr(c)->IsSoftCapturedTo(this))
        uPtr(c)->ReleaseSoftCapture(this);

    _down = -1;
}

// private void OnTextEdited() [instance] :879
void TextEditVisual::OnTextEdited()
{
    ::g::Fuse::Controls::TextEdit* ret34;
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret34), ret34))->SetValue1(uPtr(_lineCache)->Text(), this);
}

// private void OnTextEntered(object sender, Fuse.Input.TextEnteredArgs args) [instance] :1246
void TextEditVisual::OnTextEntered(uObject* sender, ::g::Fuse::Input::TextEnteredArgs* args)
{
    uString* array1;
    int index2;
    int length3;
    DeleteSelection();

    for (array1 = uPtr(args)->Text(), index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
    {
        uChar character = uPtr(array1)->Item(index2);

        if (((character == 10) || (character == 13)) || ((int)character < 32))
            continue;

        _caretPosition = uPtr(_lineCache)->InsertChar(_caretPosition, character);

        if (_passwordTransform != NULL)
        {
            uPtr(_passwordTransform)->SetReveal(uPtr(_caretPosition)->Char - 1);
            _revealEnd = (::g::Fuse::Time::FrameTime() + RevealTime);
        }

        float wrapWidth = ActualSize().X;
        ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo = CreateWrapInfo(wrapWidth, true);
        float textBoundsWidth = GetClampedTextBoundsSize(wrapInfo).X;
        BringCaretIntoView(wrapInfo, textBoundsWidth);
        ResetCaretBlink();
        uPtr(args)->IsHandled(true);
    }
}

// protected void OnTextLayoutPropertyChanged(object sender, Uno.EventArgs args) [instance] :771
void TextEditVisual::OnTextLayoutPropertyChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    ::g::Fuse::Controls::TextEdit* ret35;
    ::g::Fuse::Controls::TextEdit* ret36;

    if (uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret35), ret35))->IsPassword())
        VisualTextTransform(1);
    else
        VisualTextTransform(0);

    uPtr(_lineCache)->IsMultiline(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret36), ret36))->IsMultiline());

    if (::g::Fuse::Input::Focus::IsWithin(this))
        ;

    InvalidateLayout(2);
}

// protected void OnTextRenderPropertyChanged(object sender, Uno.EventArgs args) [instance] :791
void TextEditVisual::OnTextRenderPropertyChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    ::g::Fuse::Controls::TextEdit* ret37;
    ::g::Fuse::Controls::TextEdit* ret38;

    if (uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret37), ret37))->IsReadOnly() != _isReadOnly)
    {
        if (!_isReadOnly)
            ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::TextService::TextEntered()), this, uDelegate::New(::TYPES[25/*Fuse.Input.TextEnteredHandler*/], (void*)TextEditVisual__OnTextEntered_fn, this));

        _isReadOnly = uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret38), ret38))->IsReadOnly();

        if (!_isReadOnly)
            ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::TextService::TextEntered()), this, uDelegate::New(::TYPES[25/*Fuse.Input.TextEnteredHandler*/], (void*)TextEditVisual__OnTextEntered_fn, this));
    }

    InvalidateVisual();
    uPtr(_textWindow)->InvalidateVisual();
}

// private void OnUpdate(object s, object a) [instance] :1123
void TextEditVisual::OnUpdate(uObject* s, uObject* a)
{
    InvalidateVisual();
}

// private void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<string> args) [instance] :834
void TextEditVisual::OnValueChanged(uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    uString* ret39;

    if (sender == this)
        return;

    UpdateValue((::g::Uno::UX::ValueChangedArgs__get_Value_fn(uPtr(args), &ret39), ret39));
}

// private void ResetCaretBlink() [instance] :1031
void TextEditVisual::ResetCaretBlink()
{
    _caretBlinkTime = ::g::Fuse::Time::FrameTime();
}

// private void ResetWindowPosition() [instance] :1020
void TextEditVisual::ResetWindowPosition()
{
    SetWindowPos(::g::Uno::Float2__New1(0.0f));
}

// private void Select(Fuse.Controls.FallbackTextEdit.TextPosition oldCaretPos, Fuse.Controls.FallbackTextEdit.TextPosition newCaretPos, bool shouldSelect) [instance] :1473
void TextEditVisual::Select(::g::Fuse::Controls::FallbackTextEdit::TextPosition* oldCaretPos, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* newCaretPos, bool shouldSelect)
{
    if (shouldSelect)
        SelectFunc(oldCaretPos, newCaretPos);
    else
        _selection = NULL;
}

// public void SelectAll() [instance] :890
void TextEditVisual::SelectAll()
{
    _selection = uPtr(_lineCache)->GetFullTextSpan();
    _caretPosition = uPtr(_lineCache)->GetLastTextPos();
    InvalidateVisual();
}

// public string get_SelectedText() [instance] :853
uString* TextEditVisual::SelectedText()
{
    return ::g::Fuse::Controls::FallbackTextEdit::TextSpan::op_Inequality(_selection, NULL) ? (uString*)uPtr(_lineCache)->GetString(_selection) : ::STRINGS[0/*""*/];
}

// private void SelectFunc(Fuse.Controls.FallbackTextEdit.TextPosition oldCaretPos, Fuse.Controls.FallbackTextEdit.TextPosition newCaretPos) [instance] :1485
void TextEditVisual::SelectFunc(::g::Fuse::Controls::FallbackTextEdit::TextPosition* oldCaretPos, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* newCaretPos)
{
    bool movesLeft = ::g::Fuse::Controls::FallbackTextEdit::TextPosition::op_GreaterThan(oldCaretPos, newCaretPos);

    if (::g::Fuse::Controls::FallbackTextEdit::TextSpan::op_Equality(_selection, NULL))
    {
        if (movesLeft)
            _selection = ::g::Fuse::Controls::FallbackTextEdit::TextSpan::New1(newCaretPos, oldCaretPos);
        else
            _selection = ::g::Fuse::Controls::FallbackTextEdit::TextSpan::New1(oldCaretPos, newCaretPos);
    }
    else if (::g::Fuse::Controls::FallbackTextEdit::TextPosition::op_GreaterThan(uPtr(_selection)->End, oldCaretPos))
    {
        if (movesLeft)
            _selection = ::g::Fuse::Controls::FallbackTextEdit::TextSpan::New1(newCaretPos, uPtr(_selection)->End);
        else
            _selection = ::g::Fuse::Controls::FallbackTextEdit::TextSpan::New1(uPtr(_selection)->End, newCaretPos);
    }
    else if (::g::Fuse::Controls::FallbackTextEdit::TextPosition::op_LessThanOrEqual(uPtr(_selection)->Start, oldCaretPos))
    {
        if (movesLeft)
            _selection = ::g::Fuse::Controls::FallbackTextEdit::TextSpan::New1(newCaretPos, uPtr(_selection)->Start);
        else
            _selection = ::g::Fuse::Controls::FallbackTextEdit::TextSpan::New1(uPtr(_selection)->Start, newCaretPos);
    }
}

// private void SetCaretPos(float2 p) [instance] :1036
void TextEditVisual::SetCaretPos(::g::Uno::Float2 p)
{
    ::g::Fuse::Controls::TextEdit* ret40;
    float wrapWidth = ActualSize().X;
    ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo = CreateWrapInfo(wrapWidth, true);
    float textBoundsWidth = GetClampedTextBoundsSize(wrapInfo).X;
    _caretPosition = uPtr(_lineCache)->BoundsToTextPos(wrapInfo, uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret40), ret40))->TextAlignment(), textBoundsWidth, ControlToTextBounds(p));
    BringCaretIntoView(wrapInfo, textBoundsWidth);
    ResetCaretBlink();
}

// private void SetWindowPos(float2 p) [instance] :1013
void TextEditVisual::SetWindowPos(::g::Uno::Float2 p)
{
    if (::g::Uno::Float2::op_Inequality(p, _windowPos))
        uPtr(_textWindow)->InvalidateVisual();

    _windowPos = p;
}

// private void StartSelection(float2 windowPoint) [instance] :1229
void TextEditVisual::StartSelection(::g::Uno::Float2 windowPoint)
{
    SetCaretPos(WindowToLocal(windowPoint));
    ResetCaretBlink();
    _selection = NULL;
    _interactionSelectionStartPos = _caretPosition;
    ClearPasswordReveal();
}

// private float2 TextBoundsToControl(float2 p) [instance] :1103
::g::Uno::Float2 TextEditVisual::TextBoundsToControl(::g::Uno::Float2 p)
{
    return WindowToControl(TextBoundsToWindow(p));
}

// private float2 TextBoundsToWindow(float2 p) [instance] :1093
::g::Uno::Float2 TextEditVisual::TextBoundsToWindow(::g::Uno::Float2 p)
{
    return ::g::Uno::Float2__op_Subtraction2(p, _windowPos);
}

// private void TransformUpdate(object s, object a) [instance] :1531
void TextEditVisual::TransformUpdate(uObject* s, uObject* a)
{
    if ((_passwordTransform == NULL) || (::g::Fuse::Time::FrameTime() < _revealEnd))
        return;

    if (uPtr(_passwordTransform)->SetReveal(-1))
        uPtr(_lineCache)->InvalidateVisual();
}

// private void UpdateValue(string value) [instance] :841
void TextEditVisual::UpdateValue(uString* value)
{
    uPtr(_lineCache)->Text(value);
    uPtr(_textWindow)->InvalidateVisual();
    _caretPosition = (::g::Fuse::Input::Focus::IsWithin(this) ? (::g::Fuse::Controls::FallbackTextEdit::TextPosition*)uPtr(_lineCache)->GetLastTextPos() : (::g::Fuse::Controls::FallbackTextEdit::TextPosition*)::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(0, 0));
    _selection = NULL;
    InvalidateLayout(2);
    InvalidateVisual();
}

// private Fuse.Controls.FallbackTextEdit.VisualTextTransform get_VisualTextTransform() [instance] :810
int TextEditVisual::VisualTextTransform()
{
    return _visualTextTransform;
}

// private void set_VisualTextTransform(Fuse.Controls.FallbackTextEdit.VisualTextTransform value) [instance] :811
void TextEditVisual::VisualTextTransform(int value)
{
    if (value != _visualTextTransform)
    {
        _visualTextTransform = value;

        if (_passwordTransform != NULL)
        {
            _passwordTransform = NULL;
            remove_Update(uDelegate::New(::TYPES[34/*Uno.EventHandler*/], (void*)TextEditVisual__TransformUpdate_fn, this));
        }

        if (value == 1)
        {
            _passwordTransform = ::g::Fuse::Controls::FallbackTextEdit::LineCachePasswordTransform::New1();
            uPtr(_lineCache)->Transform((uObject*)_passwordTransform);
            add_Update(uDelegate::New(::TYPES[34/*Uno.EventHandler*/], (void*)TextEditVisual__TransformUpdate_fn, this));
        }

        InvalidateVisual();
    }
}

// private float2 WindowToControl(float2 p) [instance] :1083
::g::Uno::Float2 TextEditVisual::WindowToControl(::g::Uno::Float2 p)
{
    return p;
}

// private float2 WindowToTextBounds(float2 p) [instance] :1088
::g::Uno::Float2 TextEditVisual::WindowToTextBounds(::g::Uno::Float2 p)
{
    return ::g::Uno::Float2__op_Addition2(p, _windowPos);
}

// public TextEditVisual New() [static] :855
TextEditVisual* TextEditVisual::New1()
{
    TextEditVisual* obj5 = (TextEditVisual*)uNew(TextEditVisual_typeof());
    obj5->ctor_3();
    return obj5;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\FallbackTextEdit\$.uno(1549)
// -----------------------------------------------------------------------------

// internal sealed class TextPosition :1549
// {
// static TextPosition() :1549
static void TextPosition__cctor__fn(uType* __type)
{
    TextPosition::Default_ = TextPosition::New1(0, 0);
}

uType* TextPosition_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(TextPosition);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.FallbackTextEdit.TextPosition", options);
    type->fp_cctor_ = TextPosition__cctor__fn;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))TextPosition__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))TextPosition__GetHashCode_fn;
    ::TYPES[14] = ::g::Uno::Bool_typeof();
    ::TYPES[18] = uObject_typeof();
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextPosition, Char), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextPosition, Line), 0,
        TextPosition_typeof(), (uintptr_t)&::g::Fuse::Controls::FallbackTextEdit::TextPosition::Default_, uFieldFlagsStatic);
    return type;
}

// public TextPosition(int l, int c) :1628
void TextPosition__ctor__fn(TextPosition* __this, int* l, int* c)
{
    __this->ctor_(*l, *c);
}

// public override sealed bool Equals(object obj) :1634
void TextPosition__Equals_fn(TextPosition* __this, uObject* obj, bool* __retval)
{
    if (!uIs(obj, TextPosition_typeof()))
        return *__retval = false, void();

    TextPosition* other = uCast<TextPosition*>(obj, TextPosition_typeof());
    return *__retval = (__this->Line == uPtr(other)->Line) && (__this->Char == uPtr(other)->Char), void();
}

// public override sealed int GetHashCode() :1645
void TextPosition__GetHashCode_fn(TextPosition* __this, int* __retval)
{
    return *__retval = __this->Line ^ __this->Char, void();
}

// public static Fuse.Controls.FallbackTextEdit.TextPosition Max(Fuse.Controls.FallbackTextEdit.TextPosition a, Fuse.Controls.FallbackTextEdit.TextPosition b) :1621
void TextPosition__Max_fn(TextPosition* a, TextPosition* b, TextPosition** __retval)
{
    *__retval = TextPosition::Max(a, b);
}

// public static Fuse.Controls.FallbackTextEdit.TextPosition Min(Fuse.Controls.FallbackTextEdit.TextPosition a, Fuse.Controls.FallbackTextEdit.TextPosition b) :1616
void TextPosition__Min_fn(TextPosition* a, TextPosition* b, TextPosition** __retval)
{
    *__retval = TextPosition::Min(a, b);
}

// public TextPosition New(int l, int c) :1628
void TextPosition__New1_fn(int* l, int* c, TextPosition** __retval)
{
    *__retval = TextPosition::New1(*l, *c);
}

// public static operator ==(Fuse.Controls.FallbackTextEdit.TextPosition a, Fuse.Controls.FallbackTextEdit.TextPosition b) :1553
void TextPosition__op_Equality_fn(TextPosition* a, TextPosition* b, bool* __retval)
{
    *__retval = TextPosition::op_Equality(a, b);
}

// public static operator >(Fuse.Controls.FallbackTextEdit.TextPosition a, Fuse.Controls.FallbackTextEdit.TextPosition b) :1594
void TextPosition__op_GreaterThan_fn(TextPosition* a, TextPosition* b, bool* __retval)
{
    *__retval = TextPosition::op_GreaterThan(a, b);
}

// public static operator >=(Fuse.Controls.FallbackTextEdit.TextPosition a, Fuse.Controls.FallbackTextEdit.TextPosition b) :1605
void TextPosition__op_GreaterThanOrEqual_fn(TextPosition* a, TextPosition* b, bool* __retval)
{
    *__retval = TextPosition::op_GreaterThanOrEqual(a, b);
}

// public static operator !=(Fuse.Controls.FallbackTextEdit.TextPosition a, Fuse.Controls.FallbackTextEdit.TextPosition b) :1567
void TextPosition__op_Inequality_fn(TextPosition* a, TextPosition* b, bool* __retval)
{
    *__retval = TextPosition::op_Inequality(a, b);
}

// public static operator <(Fuse.Controls.FallbackTextEdit.TextPosition a, Fuse.Controls.FallbackTextEdit.TextPosition b) :1572
void TextPosition__op_LessThan_fn(TextPosition* a, TextPosition* b, bool* __retval)
{
    *__retval = TextPosition::op_LessThan(a, b);
}

// public static operator <=(Fuse.Controls.FallbackTextEdit.TextPosition a, Fuse.Controls.FallbackTextEdit.TextPosition b) :1583
void TextPosition__op_LessThanOrEqual_fn(TextPosition* a, TextPosition* b, bool* __retval)
{
    *__retval = TextPosition::op_LessThanOrEqual(a, b);
}

uSStrong<TextPosition*> TextPosition::Default_;

// public TextPosition(int l, int c) [instance] :1628
void TextPosition::ctor_(int l, int c)
{
    Line = l;
    Char = c;
}

// public static Fuse.Controls.FallbackTextEdit.TextPosition Max(Fuse.Controls.FallbackTextEdit.TextPosition a, Fuse.Controls.FallbackTextEdit.TextPosition b) [static] :1621
TextPosition* TextPosition::Max(TextPosition* a, TextPosition* b)
{
    TextPosition_typeof()->Init();
    return TextPosition::op_GreaterThanOrEqual(a, b) ? a : b;
}

// public static Fuse.Controls.FallbackTextEdit.TextPosition Min(Fuse.Controls.FallbackTextEdit.TextPosition a, Fuse.Controls.FallbackTextEdit.TextPosition b) [static] :1616
TextPosition* TextPosition::Min(TextPosition* a, TextPosition* b)
{
    TextPosition_typeof()->Init();
    return TextPosition::op_LessThanOrEqual(a, b) ? a : b;
}

// public TextPosition New(int l, int c) [static] :1628
TextPosition* TextPosition::New1(int l, int c)
{
    TextPosition* obj1 = (TextPosition*)uNew(TextPosition_typeof());
    obj1->ctor_(l, c);
    return obj1;
}

// public static operator ==(Fuse.Controls.FallbackTextEdit.TextPosition a, Fuse.Controls.FallbackTextEdit.TextPosition b) [static] :1553
bool TextPosition::op_Equality(TextPosition* a, TextPosition* b)
{
    TextPosition_typeof()->Init();
    bool aNull = ::g::Uno::Object::ReferenceEquals(a, NULL);
    bool bNull = ::g::Uno::Object::ReferenceEquals(b, NULL);

    if (aNull && bNull)
        return true;

    if ((aNull && !bNull) || (!aNull && bNull))
        return false;

    return uPtr(a)->Equals(b);
}

// public static operator >(Fuse.Controls.FallbackTextEdit.TextPosition a, Fuse.Controls.FallbackTextEdit.TextPosition b) [static] :1594
bool TextPosition::op_GreaterThan(TextPosition* a, TextPosition* b)
{
    TextPosition_typeof()->Init();

    if (uPtr(a)->Line > uPtr(b)->Line)
        return true;

    if (uPtr(a)->Line < uPtr(b)->Line)
        return false;

    return uPtr(a)->Char > uPtr(b)->Char;
}

// public static operator >=(Fuse.Controls.FallbackTextEdit.TextPosition a, Fuse.Controls.FallbackTextEdit.TextPosition b) [static] :1605
bool TextPosition::op_GreaterThanOrEqual(TextPosition* a, TextPosition* b)
{
    TextPosition_typeof()->Init();

    if (uPtr(a)->Line > uPtr(b)->Line)
        return true;

    if (uPtr(a)->Line < uPtr(b)->Line)
        return false;

    return uPtr(a)->Char >= uPtr(b)->Char;
}

// public static operator !=(Fuse.Controls.FallbackTextEdit.TextPosition a, Fuse.Controls.FallbackTextEdit.TextPosition b) [static] :1567
bool TextPosition::op_Inequality(TextPosition* a, TextPosition* b)
{
    TextPosition_typeof()->Init();
    return !TextPosition::op_Equality(a, b);
}

// public static operator <(Fuse.Controls.FallbackTextEdit.TextPosition a, Fuse.Controls.FallbackTextEdit.TextPosition b) [static] :1572
bool TextPosition::op_LessThan(TextPosition* a, TextPosition* b)
{
    TextPosition_typeof()->Init();

    if (uPtr(a)->Line < uPtr(b)->Line)
        return true;

    if (uPtr(a)->Line > uPtr(b)->Line)
        return false;

    return uPtr(a)->Char < uPtr(b)->Char;
}

// public static operator <=(Fuse.Controls.FallbackTextEdit.TextPosition a, Fuse.Controls.FallbackTextEdit.TextPosition b) [static] :1583
bool TextPosition::op_LessThanOrEqual(TextPosition* a, TextPosition* b)
{
    TextPosition_typeof()->Init();

    if (uPtr(a)->Line < uPtr(b)->Line)
        return true;

    if (uPtr(a)->Line > uPtr(b)->Line)
        return false;

    return uPtr(a)->Char <= uPtr(b)->Char;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\FallbackTextEdit\$.uno(1651)
// -----------------------------------------------------------------------------

// internal sealed class TextSpan :1651
// {
uType* TextSpan_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(TextSpan);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.FallbackTextEdit.TextSpan", options);
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))TextSpan__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))TextSpan__GetHashCode_fn;
    ::TYPES[14] = ::g::Uno::Bool_typeof();
    ::TYPES[18] = uObject_typeof();
    type->SetFields(0,
        ::g::Fuse::Controls::FallbackTextEdit::TextPosition_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextSpan, End), 0,
        ::g::Fuse::Controls::FallbackTextEdit::TextPosition_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextSpan, Start), 0);
    return type;
}

// public TextSpan(Fuse.Controls.FallbackTextEdit.TextPosition start, Fuse.Controls.FallbackTextEdit.TextPosition end) :1686
void TextSpan__ctor__fn(TextSpan* __this, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* start, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* end)
{
    __this->ctor_(start, end);
}

// public bool Contains(Fuse.Controls.FallbackTextEdit.TextPosition p) :1709
void TextSpan__Contains_fn(TextSpan* __this, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, bool* __retval)
{
    *__retval = __this->Contains(p);
}

// public override sealed bool Equals(object obj) :1693
void TextSpan__Equals_fn(TextSpan* __this, uObject* obj, bool* __retval)
{
    if (!uIs(obj, TextSpan_typeof()))
        return *__retval = false, void();

    TextSpan* other = uCast<TextSpan*>(obj, TextSpan_typeof());
    return *__retval = ::g::Fuse::Controls::FallbackTextEdit::TextPosition::op_Equality(__this->Start, uPtr(other)->Start) && ::g::Fuse::Controls::FallbackTextEdit::TextPosition::op_Equality(__this->End, uPtr(other)->End), void();
}

// public override sealed int GetHashCode() :1704
void TextSpan__GetHashCode_fn(TextSpan* __this, int* __retval)
{
    return *__retval = uPtr(__this->Start)->GetHashCode() ^ uPtr(__this->End)->GetHashCode(), void();
}

// public static Fuse.Controls.FallbackTextEdit.TextSpan Intersection(Fuse.Controls.FallbackTextEdit.TextSpan a, Fuse.Controls.FallbackTextEdit.TextSpan b) :1677
void TextSpan__Intersection_fn(TextSpan* a, TextSpan* b, TextSpan** __retval)
{
    *__retval = TextSpan::Intersection(a, b);
}

// public static bool Intersects(Fuse.Controls.FallbackTextEdit.TextSpan a, Fuse.Controls.FallbackTextEdit.TextSpan b) :1672
void TextSpan__Intersects_fn(TextSpan* a, TextSpan* b, bool* __retval)
{
    *__retval = TextSpan::Intersects(a, b);
}

// public TextSpan New(Fuse.Controls.FallbackTextEdit.TextPosition start, Fuse.Controls.FallbackTextEdit.TextPosition end) :1686
void TextSpan__New1_fn(::g::Fuse::Controls::FallbackTextEdit::TextPosition* start, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* end, TextSpan** __retval)
{
    *__retval = TextSpan::New1(start, end);
}

// public static operator ==(Fuse.Controls.FallbackTextEdit.TextSpan a, Fuse.Controls.FallbackTextEdit.TextSpan b) :1653
void TextSpan__op_Equality_fn(TextSpan* a, TextSpan* b, bool* __retval)
{
    *__retval = TextSpan::op_Equality(a, b);
}

// public static operator !=(Fuse.Controls.FallbackTextEdit.TextSpan a, Fuse.Controls.FallbackTextEdit.TextSpan b) :1667
void TextSpan__op_Inequality_fn(TextSpan* a, TextSpan* b, bool* __retval)
{
    *__retval = TextSpan::op_Inequality(a, b);
}

// public TextSpan(Fuse.Controls.FallbackTextEdit.TextPosition start, Fuse.Controls.FallbackTextEdit.TextPosition end) [instance] :1686
void TextSpan::ctor_(::g::Fuse::Controls::FallbackTextEdit::TextPosition* start, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* end)
{
    bool isValid = ::g::Fuse::Controls::FallbackTextEdit::TextPosition::op_LessThanOrEqual(start, end);
    Start = (isValid ? start : end);
    End = (isValid ? end : start);
}

// public bool Contains(Fuse.Controls.FallbackTextEdit.TextPosition p) [instance] :1709
bool TextSpan::Contains(::g::Fuse::Controls::FallbackTextEdit::TextPosition* p)
{
    return ::g::Fuse::Controls::FallbackTextEdit::TextPosition::op_GreaterThanOrEqual(p, Start) && ::g::Fuse::Controls::FallbackTextEdit::TextPosition::op_LessThan(p, End);
}

// public static Fuse.Controls.FallbackTextEdit.TextSpan Intersection(Fuse.Controls.FallbackTextEdit.TextSpan a, Fuse.Controls.FallbackTextEdit.TextSpan b) [static] :1677
TextSpan* TextSpan::Intersection(TextSpan* a, TextSpan* b)
{
    return TextSpan::Intersects(a, b) ? (TextSpan*)TextSpan::New1(::g::Fuse::Controls::FallbackTextEdit::TextPosition::Max(uPtr(a)->Start, uPtr(b)->Start), ::g::Fuse::Controls::FallbackTextEdit::TextPosition::Min(uPtr(a)->End, uPtr(b)->End)) : NULL;
}

// public static bool Intersects(Fuse.Controls.FallbackTextEdit.TextSpan a, Fuse.Controls.FallbackTextEdit.TextSpan b) [static] :1672
bool TextSpan::Intersects(TextSpan* a, TextSpan* b)
{
    return !(::g::Fuse::Controls::FallbackTextEdit::TextPosition::op_LessThanOrEqual(uPtr(a)->End, uPtr(b)->Start) || ::g::Fuse::Controls::FallbackTextEdit::TextPosition::op_GreaterThanOrEqual(uPtr(a)->Start, uPtr(b)->End));
}

// public TextSpan New(Fuse.Controls.FallbackTextEdit.TextPosition start, Fuse.Controls.FallbackTextEdit.TextPosition end) [static] :1686
TextSpan* TextSpan::New1(::g::Fuse::Controls::FallbackTextEdit::TextPosition* start, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* end)
{
    TextSpan* obj1 = (TextSpan*)uNew(TextSpan_typeof());
    obj1->ctor_(start, end);
    return obj1;
}

// public static operator ==(Fuse.Controls.FallbackTextEdit.TextSpan a, Fuse.Controls.FallbackTextEdit.TextSpan b) [static] :1653
bool TextSpan::op_Equality(TextSpan* a, TextSpan* b)
{
    bool aNull = ::g::Uno::Object::ReferenceEquals(a, NULL);
    bool bNull = ::g::Uno::Object::ReferenceEquals(b, NULL);

    if (aNull && bNull)
        return true;

    if ((aNull && !bNull) || (!aNull && bNull))
        return false;

    return uPtr(a)->Equals(b);
}

// public static operator !=(Fuse.Controls.FallbackTextEdit.TextSpan a, Fuse.Controls.FallbackTextEdit.TextSpan b) [static] :1667
bool TextSpan::op_Inequality(TextSpan* a, TextSpan* b)
{
    return !TextSpan::op_Equality(a, b);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\FallbackTextEdit\$.uno(1726)
// -----------------------------------------------------------------------------

// internal sealed class TextWindow :1726
// {
::g::Fuse::Elements::Element_type* TextWindow_typeof()
{
    static uSStrong< ::g::Fuse::Elements::Element_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 94;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(TextWindow);
    options.TypeSize = sizeof(::g::Fuse::Elements::Element_type);
    type = (::g::Fuse::Elements::Element_type*)uClassType::New("Fuse.Controls.FallbackTextEdit.TextWindow", options);
    type->SetBase(::g::Fuse::Elements::Element_typeof());
    type->fp_CalcRenderBounds = (void(*)(::g::Fuse::Elements::Element*, ::g::Uno::Rect*))TextWindow__CalcRenderBounds_fn;
    type->fp_OnDraw = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::DrawContext*))TextWindow__OnDraw_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::TYPES[55] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[11] = ::g::Fuse::Controls::Internal::WordWrapInfo_typeof();
    ::TYPES[20] = ::g::Fuse::Node_typeof();
    ::TYPES[1] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Controls::FallbackTextEdit::LineCacheLine_typeof());
    ::TYPES[51] = ::g::Fuse::Controls::FallbackTextEdit::LineCache_typeof();
    ::TYPES[9] = ::g::Fuse::Controls::Internal::WrappedLine_typeof()->Array();
    ::TYPES[0] = ::g::Uno::Float2_typeof();
    ::TYPES[17] = ::g::Uno::Float_typeof();
    ::TYPES[10] = ::g::Fuse::Controls::Internal::WrappedLine_typeof();
    ::TYPES[6] = ::g::Fuse::Controls::FallbackTextEdit::TextPosition_typeof();
    ::TYPES[7] = ::g::Fuse::Controls::FallbackTextEdit::TextSpan_typeof();
    ::TYPES[56] = ::g::Fuse::Elements::Internal::ElementDraw_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Elements::Element_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Elements::Element_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Elements::Element_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Elements::Element_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Elements::Element_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Elements::Element_type, interface5));
    type->SetFields(85,
        ::g::Fuse::Controls::FallbackTextEdit::LineCache_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextWindow, _lineCache), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextWindow, _maxTextLength), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextWindow, _offset), 0,
        ::g::Fuse::Controls::FallbackTextEdit::TextSpan_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextWindow, _selection), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextWindow, _selectionColor), 0,
        ::g::Fuse::Elements::TextAlignment_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextWindow, _textAlignment), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextWindow, _textBoundsSize), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextWindow, _textColor), 0,
        ::g::Fuse::Controls::Internal::WordWrapInfo_typeof(), offsetof(::g::Fuse::Controls::FallbackTextEdit::TextWindow, _wrapInfo), 0);
    return type;
}

// public TextWindow(Fuse.Node parent, Fuse.Controls.FallbackTextEdit.LineCache lineCache) :1730
void TextWindow__ctor_2_fn(TextWindow* __this, ::g::Fuse::Node* parent, ::g::Fuse::Controls::FallbackTextEdit::LineCache* lineCache)
{
    __this->ctor_2(parent, lineCache);
}

// protected override sealed Uno.Rect CalcRenderBounds() :1748
void TextWindow__CalcRenderBounds_fn(TextWindow* __this, ::g::Uno::Rect* __retval)
{
    return *__retval = ::g::Uno::Rect__New2(::g::Uno::Float2__New1(0.0f), __this->_textBoundsSize), void();
}

// public void Draw(Fuse.Controls.Internal.WordWrapInfo wrapInfo, Fuse.Controls.FallbackTextEdit.TextSpan selection, float4 textColor, float4 selectionColor, int maxTextLength, Fuse.Elements.TextAlignment textAlignment, float2 textBoundsSize, float2 offset, Fuse.DrawContext dc) :1753
void TextWindow__Draw1_fn(TextWindow* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::g::Fuse::Controls::FallbackTextEdit::TextSpan* selection, ::g::Uno::Float4* textColor, ::g::Uno::Float4* selectionColor, int* maxTextLength, int* textAlignment, ::g::Uno::Float2* textBoundsSize, ::g::Uno::Float2* offset, ::g::Fuse::DrawContext* dc)
{
    __this->Draw1(wrapInfo, selection, *textColor, *selectionColor, *maxTextLength, *textAlignment, *textBoundsSize, *offset, dc);
}

// public TextWindow New(Fuse.Node parent, Fuse.Controls.FallbackTextEdit.LineCache lineCache) :1730
void TextWindow__New1_fn(::g::Fuse::Node* parent, ::g::Fuse::Controls::FallbackTextEdit::LineCache* lineCache, TextWindow** __retval)
{
    *__retval = TextWindow::New1(parent, lineCache);
}

// protected override sealed void OnDraw(Fuse.DrawContext dc) :1770
void TextWindow__OnDraw_fn(TextWindow* __this, ::g::Fuse::DrawContext* dc)
{
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheLine* ret2;
    uPtr(uPtr(__this->_wrapInfo)->TextRenderer)->BeginRendering(uPtr(__this->_wrapInfo)->FontSize, uPtr(__this->_wrapInfo)->AbsoluteZoom, __this->WorldTransform(), __this->ActualSize(), __this->_textColor, __this->_maxTextLength);
    float lineHeight = uPtr(__this->_wrapInfo)->LineHeight * uPtr(__this->_wrapInfo)->AbsoluteZoom;
    ::g::Uno::Float2 scaledOffset = ::g::Uno::Float2__op_Multiply1(__this->_offset, uPtr(__this->_wrapInfo)->AbsoluteZoom);
    float y = 0.0f;
    float selectionY = 0.0f;

    for (int i = 0; i < uPtr(uPtr(__this->_lineCache)->Lines())->Count(); i++)
    {
        uArray* lines = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(__this->_lineCache)->Lines()), uCRef<int>(i), &ret2), ret2))->GetWrappedLines(__this->_wrapInfo);

        for (int j = 0; j < uPtr(lines)->Length(); ++j)
        {
            ::g::Fuse::Controls::Internal::WrappedLine* wrappedLine = uPtr(lines)->Strong< ::g::Fuse::Controls::Internal::WrappedLine*>(j);
            float drawY = scaledOffset.Y + y;

            if (drawY >= (__this->ActualSize().Y * uPtr(__this->_wrapInfo)->AbsoluteZoom))
                break;
            else if (drawY >= -lineHeight)
            {
                float x = uPtr(wrappedLine)->GetXOffset(__this->_textAlignment, __this->_textBoundsSize.X, __this->AbsoluteZoom());

                if (::g::Fuse::Controls::FallbackTextEdit::TextSpan::op_Inequality(__this->_selection, NULL))
                {
                    ::g::Fuse::Controls::FallbackTextEdit::TextPosition* start = ::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(i, uPtr(wrappedLine)->LineTextStartOffset);
                    ::g::Fuse::Controls::FallbackTextEdit::TextPosition* end = ::g::Fuse::Controls::FallbackTextEdit::TextPosition::New1(i, wrappedLine->LineTextEndOffset());
                    ::g::Fuse::Controls::FallbackTextEdit::TextSpan* span = ::g::Fuse::Controls::FallbackTextEdit::TextSpan::New1(start, end);
                    ::g::Fuse::Controls::FallbackTextEdit::TextSpan* intersection = ::g::Fuse::Controls::FallbackTextEdit::TextSpan::Intersection(span, __this->_selection);

                    if (::g::Fuse::Controls::FallbackTextEdit::TextSpan::op_Inequality(intersection, NULL))
                    {
                        float startPos = uPtr(wrappedLine)->PosToBounds(__this->_wrapInfo, uPtr(uPtr(intersection)->Start)->Char - uPtr(wrappedLine)->LineTextStartOffset);
                        float endPos = (uPtr(intersection->End)->Char < wrappedLine->LineTextEndOffset()) ? wrappedLine->PosToBounds(__this->_wrapInfo, uPtr(intersection->End)->Char - wrappedLine->LineTextStartOffset) : wrappedLine->LineWidth;
                        uPtr(::g::Fuse::Elements::Internal::ElementDraw::Impl())->Rectangle(dc, __this, ::g::Uno::Math::Floor2(::g::Uno::Float2__New2((__this->_offset.X + x) + startPos, __this->_offset.Y + selectionY)), ::g::Uno::Float2__New2(endPos - startPos, uPtr(__this->_wrapInfo)->LineHeight), __this->_selectionColor);
                    }
                }

                uPtr(uPtr(__this->_wrapInfo)->TextRenderer)->DrawLine(dc, scaledOffset.X + (x * uPtr(__this->_wrapInfo)->AbsoluteZoom), drawY, wrappedLine->Text);
            }

            y = y + lineHeight;
            selectionY = selectionY + (lineHeight / uPtr(__this->_wrapInfo)->AbsoluteZoom);
        }
    }

    uPtr(uPtr(__this->_wrapInfo)->TextRenderer)->EndRendering(dc);
}

// public TextWindow(Fuse.Node parent, Fuse.Controls.FallbackTextEdit.LineCache lineCache) [instance] :1730
void TextWindow::ctor_2(::g::Fuse::Node* parent, ::g::Fuse::Controls::FallbackTextEdit::LineCache* lineCache)
{
    ctor_1();
    _lineCache = lineCache;
    ClipToBounds(true);
    OnAdded(parent);
}

// public void Draw(Fuse.Controls.Internal.WordWrapInfo wrapInfo, Fuse.Controls.FallbackTextEdit.TextSpan selection, float4 textColor, float4 selectionColor, int maxTextLength, Fuse.Elements.TextAlignment textAlignment, float2 textBoundsSize, float2 offset, Fuse.DrawContext dc) [instance] :1753
void TextWindow::Draw1(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::g::Fuse::Controls::FallbackTextEdit::TextSpan* selection, ::g::Uno::Float4 textColor, ::g::Uno::Float4 selectionColor, int maxTextLength, int textAlignment, ::g::Uno::Float2 textBoundsSize, ::g::Uno::Float2 offset, ::g::Fuse::DrawContext* dc)
{
    if (::g::Uno::Float2::op_Inequality(_textBoundsSize, textBoundsSize))
        InvalidateRenderBounds();

    _wrapInfo = wrapInfo;
    _selection = selection;
    _textColor = textColor;
    _selectionColor = selectionColor;
    _maxTextLength = maxTextLength;
    _textAlignment = textAlignment;
    _textBoundsSize = textBoundsSize;
    _offset = offset;
    OnDraw(dc);
}

// public TextWindow New(Fuse.Node parent, Fuse.Controls.FallbackTextEdit.LineCache lineCache) [static] :1730
TextWindow* TextWindow::New1(::g::Fuse::Node* parent, ::g::Fuse::Controls::FallbackTextEdit::LineCache* lineCache)
{
    TextWindow* obj1 = (TextWindow*)uNew(TextWindow_typeof());
    obj1->ctor_2(parent, lineCache);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\FallbackTextEdit\$.uno(693)
// ----------------------------------------------------------------------------

// internal enum VisualTextTransform :693
uEnumType* VisualTextTransform_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Controls.FallbackTextEdit.VisualTextTransform", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "None", 0LL,
        "Password", 1LL);
    return type;
}

}}}} // ::g::Fuse::Controls::FallbackTextEdit
