#include <app/Fuse.Controls.Graphics.DefaultTextVisual.h>
#include <app/Fuse.Controls.Graphics.Visual.h>
#include <app/Fuse.Controls.Internal.DefaultTextRenderer.h>
#include <app/Fuse.Controls.Internal.WordWrapInfo.h>
#include <app/Fuse.Controls.Internal.WordWrapper.h>
#include <app/Fuse.Controls.Internal.WrappedLine.h>
#include <app/Fuse.Controls.TextControl.h>
#include <app/Fuse.Controls.TextEdit.LineCache.h>
#include <app/Fuse.Controls.TextEdit.LineCacheLine.h>
#include <app/Fuse.Controls.TextEdit.LineCachePasswordTransform.h>
#include <app/Fuse.Controls.TextEdit.LineCacheTransform.h>
#include <app/Fuse.Controls.TextEdit.TextEditVisual.h>
#include <app/Fuse.Controls.TextEdit.TextEditVisual_DegreeSpan.h>
#include <app/Fuse.Controls.TextEdit.TextEditVisual_SwipeGestureHelper.h>
#include <app/Fuse.Controls.TextEdit.TextPosition.h>
#include <app/Fuse.Controls.TextEdit.TextSpan.h>
#include <app/Fuse.Controls.TextEdit.TextWindow.h>
#include <app/Fuse.Controls.TextEdit.VisualTextTransform.h>
#include <app/Fuse.Controls.TextInput.h>
#include <app/Fuse.DrawContext.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.Primitives.Rectangle.h>
#include <app/Fuse.Drawing.SolidColor.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.Internal.ElementDraw.h>
#include <app/Fuse.Elements.TextAlignment.h>
#include <app/Fuse.Elements.TextWrapping.h>
#include <app/Fuse.Font.h>
#include <app/Fuse.HitTestContext.h>
#include <app/Fuse.Input.Focus.h>
#include <app/Fuse.Input.FocusGainedArgs.h>
#include <app/Fuse.Input.FocusGainedHandler.h>
#include <app/Fuse.Input.FocusLostArgs.h>
#include <app/Fuse.Input.FocusLostHandler.h>
#include <app/Fuse.Input.FocusNavigationDirection.h>
#include <app/Fuse.Input.Keyboard.h>
#include <app/Fuse.Input.KeyEventArgs.h>
#include <app/Fuse.Input.KeyPressedArgs.h>
#include <app/Fuse.Input.KeyPressedHandler.h>
#include <app/Fuse.Input.Pointer.h>
#include <app/Fuse.Input.PointerEventArgs.h>
#include <app/Fuse.Input.PointerMovedArgs.h>
#include <app/Fuse.Input.PointerMovedHandler.h>
#include <app/Fuse.Input.PointerPressedArgs.h>
#include <app/Fuse.Input.PointerPressedHandler.h>
#include <app/Fuse.Input.PointerReleasedArgs.h>
#include <app/Fuse.Input.PointerReleasedHandler.h>
#include <app/Fuse.Input.TextEnteredArgs.h>
#include <app/Fuse.Input.TextEnteredHandler.h>
#include <app/Fuse.Input.TextService.h>
#include <app/Fuse.Internal.RectExtensions.h>
#include <app/Fuse.InvalidateLayoutReason.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_Focus-e88b1a1.h>
#include <app/Fuse.NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs.h>
#include <app/Fuse.NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs.h>
#include <app/Fuse.NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_Poin-c465a3e6.h>
#include <app/Fuse.NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_Po-31778249.h>
#include <app/Fuse.NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_P-dde60e76.h>
#include <app/Fuse.NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextE-b5bf0cfa.h>
#include <app/Fuse.NodeEventArgs.h>
#include <app/Fuse.SizeFlags.h>
#include <app/Fuse.Time.h>
#include <app/Uno.Action.h>
#include <app/Uno.Application.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Char.h>
#include <app/Uno.Collections.EnumerableExtensions.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Controls_TextEdit_LineCacheLine.h>
#include <app/Uno.Collections.List__Fuse_Controls_TextEdit_LineCacheLine.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform.Key.h>
#include <app/Uno.Platform.Window.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.ValueChangedArgs__string.h>
#include <app/Uno.UX.ValueChangedHandler__string.h>
#include <app/Uno.Vector.h>

namespace app {
namespace Fuse {
namespace Controls {
namespace TextEdit {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\TextEdit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LineCache__uType* LineCache__typeof()
{
    static ::uStaticStrong<LineCache__uType*> type;
    if (type != NULL) return type;

    type = (LineCache__uType*)::uAllocClassType(sizeof(LineCache__uType), "Fuse.Controls.TextEdit.LineCache", false, 0, 5, 0);

    type->SetStrongRefs(
        "_invalideLayout", offsetof(LineCache, _invalideLayout),
        "_lines", offsetof(LineCache, _lines),
        "_onTextChanged", offsetof(LineCache, _onTextChanged),
        "_text", offsetof(LineCache, _text),
        "_transform", offsetof(LineCache, _transform));

    type->SetFields(7,
        ::uNewField("_invalideLayout", NULL, offsetof(LineCache, _invalideLayout), ::app::Uno::Action__typeof()),
        ::uNewField("_isMultiline", NULL, offsetof(LineCache, _isMultiline), ::app::Uno::Bool__typeof()),
        ::uNewField("_isTextValid", NULL, offsetof(LineCache, _isTextValid), ::app::Uno::Bool__typeof()),
        ::uNewField("_lines", NULL, offsetof(LineCache, _lines), ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine__typeof()),
        ::uNewField("_onTextChanged", NULL, offsetof(LineCache, _onTextChanged), ::app::Uno::Action__typeof()),
        ::uNewField("_text", NULL, offsetof(LineCache, _text), ::app::Uno::String__typeof()),
        ::uNewField("_transform", NULL, offsetof(LineCache, _transform), ::app::Fuse::Controls::TextEdit::LineCacheTransform__typeof()));

    type->SetFunctions(34,
        ::uNewFunction("BoundsToTextPos", LineCache__BoundsToTextPos, 0, false, ::app::Fuse::Controls::TextEdit::TextPosition__typeof(), ::app::Fuse::Controls::Internal::WordWrapInfo__typeof(), ::app::Fuse::Elements::TextAlignment__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction("DecomposeLines", LineCache__DecomposeLines, 0, false, ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("DeleteSpan", LineCache__DeleteSpan, 0, false, ::app::Fuse::Controls::TextEdit::TextPosition__typeof(), ::app::Fuse::Controls::TextEdit::TextSpan__typeof()),
        ::uNewFunction("End", LineCache__End, 0, false, ::app::Fuse::Controls::TextEdit::TextPosition__typeof(), ::app::Fuse::Controls::Internal::WordWrapInfo__typeof(), ::app::Fuse::Controls::TextEdit::TextPosition__typeof()),
        ::uNewFunction("get_IsMultiline", LineCache__get_IsMultiline, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Lines", LineCache__get_Lines, 0, false, ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine__typeof()),
        ::uNewFunction("get_Text", LineCache__get_Text, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Transform", LineCache__get_Transform, 0, false, ::app::Fuse::Controls::TextEdit::LineCacheTransform__typeof()),
        ::uNewFunction("GetBoundsSize", LineCache__GetBoundsSize, 0, false, ::app::Uno::Float2__typeof(), ::app::Fuse::Controls::Internal::WordWrapInfo__typeof()),
        ::uNewFunction("GetFullTextSpan", LineCache__GetFullTextSpan, 0, false, ::app::Fuse::Controls::TextEdit::TextSpan__typeof()),
        ::uNewFunction("GetLastTextPos", LineCache__GetLastTextPos, 0, false, ::app::Fuse::Controls::TextEdit::TextPosition__typeof()),
        ::uNewFunction("GetString", LineCache__GetString, 0, false, ::app::Uno::String__typeof(), ::app::Fuse::Controls::TextEdit::TextSpan__typeof()),
        ::uNewFunction("Home", LineCache__Home, 0, false, ::app::Fuse::Controls::TextEdit::TextPosition__typeof(), ::app::Fuse::Controls::Internal::WordWrapInfo__typeof(), ::app::Fuse::Controls::TextEdit::TextPosition__typeof()),
        ::uNewFunction("InsertChar", LineCache__InsertChar, 0, false, ::app::Fuse::Controls::TextEdit::TextPosition__typeof(), ::app::Fuse::Controls::TextEdit::TextPosition__typeof(), ::app::Uno::Char__typeof()),
        ::uNewFunction("InsertNewline", LineCache__InsertNewline, 0, false, ::app::Fuse::Controls::TextEdit::TextPosition__typeof(), ::app::Fuse::Controls::TextEdit::TextPosition__typeof()),
        ::uNewFunctionVoid("InvalidateLayout", LineCache__InvalidateLayout, 0, false),
        ::uNewFunctionVoid("InvalidateText", LineCache__InvalidateText, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("InvalidateVisual", LineCache__InvalidateVisual, 0, false),
        ::uNewFunction("IsWordBreaker", LineCache__IsWordBreaker, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Char__typeof()),
        ::uNewFunction(".ctor", LineCache__New_1, 0, true, LineCache__typeof(), ::app::Uno::Action__typeof(), ::app::Uno::Action__typeof()),
        ::uNewFunction("NextWordLeft", LineCache__NextWordLeft, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("NextWordRight", LineCache__NextWordRight, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("set_IsMultiline", LineCache__set_IsMultiline, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Text", LineCache__set_Text, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Transform", LineCache__set_Transform, 0, false, ::app::Fuse::Controls::TextEdit::LineCacheTransform__typeof()),
        ::uNewFunction("TextPosToBounds", LineCache__TextPosToBounds, 0, false, ::app::Uno::Float2__typeof(), ::app::Fuse::Controls::Internal::WordWrapInfo__typeof(), ::app::Fuse::Elements::TextAlignment__typeof(), ::app::Uno::Float__typeof(), ::app::Fuse::Controls::TextEdit::TextPosition__typeof()),
        ::uNewFunction("TryBackspace", LineCache__TryBackspace, 0, false, ::app::Fuse::Controls::TextEdit::TextPosition__typeof(), ::app::Fuse::Controls::TextEdit::TextPosition__typeof()),
        ::uNewFunction("TryDelete", LineCache__TryDelete, 0, false, ::app::Fuse::Controls::TextEdit::TextPosition__typeof(), ::app::Fuse::Controls::TextEdit::TextPosition__typeof()),
        ::uNewFunction("TryMoveDown", LineCache__TryMoveDown, 0, false, ::app::Fuse::Controls::TextEdit::TextPosition__typeof(), ::app::Fuse::Controls::Internal::WordWrapInfo__typeof(), ::app::Fuse::Elements::TextAlignment__typeof(), ::app::Uno::Float__typeof(), ::app::Fuse::Controls::TextEdit::TextPosition__typeof()),
        ::uNewFunction("TryMoveLeft", LineCache__TryMoveLeft, 0, false, ::app::Fuse::Controls::TextEdit::TextPosition__typeof(), ::app::Fuse::Controls::TextEdit::TextPosition__typeof()),
        ::uNewFunction("TryMoveOneWordLeft", LineCache__TryMoveOneWordLeft, 0, false, ::app::Fuse::Controls::TextEdit::TextPosition__typeof(), ::app::Fuse::Controls::TextEdit::TextPosition__typeof()),
        ::uNewFunction("TryMoveOneWordRight", LineCache__TryMoveOneWordRight, 0, false, ::app::Fuse::Controls::TextEdit::TextPosition__typeof(), ::app::Fuse::Controls::TextEdit::TextPosition__typeof()),
        ::uNewFunction("TryMoveRight", LineCache__TryMoveRight, 0, false, ::app::Fuse::Controls::TextEdit::TextPosition__typeof(), ::app::Fuse::Controls::TextEdit::TextPosition__typeof()),
        ::uNewFunction("TryMoveUp", LineCache__TryMoveUp, 0, false, ::app::Fuse::Controls::TextEdit::TextPosition__typeof(), ::app::Fuse::Controls::Internal::WordWrapInfo__typeof(), ::app::Fuse::Elements::TextAlignment__typeof(), ::app::Uno::Float__typeof(), ::app::Fuse::Controls::TextEdit::TextPosition__typeof()));

    ::uRegisterType(type);
    return type;
}

void LineCache___ObjInit(LineCache* __this, ::uDelegate* onTextChanged, ::uDelegate* invalideLayout)
{
    __this->_isTextValid = true;
    __this->_onTextChanged = onTextChanged;
    __this->_invalideLayout = invalideLayout;
    __this->_lines = NULL;
}

::app::Fuse::Controls::TextEdit::TextPosition* LineCache__BoundsToTextPos(LineCache* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, ::app::Uno::Float2 p)
{
    int l = 0;
    float startY = 0.0f;

    if (p.Y > 0.0f)
    {
        for (; l < (::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(__this->Lines())->Count() - 1); l++)
        {
            float lineHeight = ::uPtr< ::app::Fuse::Controls::TextEdit::LineCacheLine*>(::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(__this->Lines())->Item(l))->GetTotalHeight(wrapInfo);
            float endY = startY + lineHeight;

            if ((p.Y >= startY) && (p.Y < endY))
            {
                break;
            }

            startY = endY;
        }
    }

    int c = ::uPtr< ::app::Fuse::Controls::TextEdit::LineCacheLine*>(::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(__this->Lines())->Item(l))->BoundsToPos(wrapInfo, textAlignment, boundsWidth, ::app::Uno::Float2__New_2(NULL, p.X, p.Y - startY));
    return ::app::Fuse::Controls::TextEdit::TextPosition__New_1(NULL, l, c);
}

::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine* LineCache__DecomposeLines(LineCache* __this, ::uString* text)
{
    ::uArray* array_132;
    ::uArray* array_129;
    int index_130 = int();
    int length_131 = int();
    ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine* lines = ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine__New_1(NULL);

    if (::app::Uno::String__op_Inequality(NULL, text, NULL))
    {
        if (__this->IsMultiline())
        {
            for (array_129 = ::app::Uno::String::Split(::uPtr< ::uString*>(text), (array_132 = ::uNewArray(::app::Uno::Char__typeof(), 1), ::uPtr< ::uArray*>(array_132)->Item< ::uChar>(0) = 10, array_132)), index_130 = 0, length_131 = ::uPtr< ::uArray*>(array_129)->Length(); index_130 < length_131; ++index_130)
            {
                ::uString* line = ::uPtr< ::uArray*>(array_129)->Item< ::uString*>(index_130);
                ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(lines)->Add(::app::Fuse::Controls::TextEdit::LineCacheLine__New_1(NULL, line, __this->_transform));
            }
        }
        else
        {
            ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(lines)->Add(::app::Fuse::Controls::TextEdit::LineCacheLine__New_1(NULL, text, __this->_transform));
        }
    }

    if (::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(lines)->Count() == 0)
    {
        ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(lines)->Add(::app::Fuse::Controls::TextEdit::LineCacheLine__New_1(NULL, ::app::Uno::String__Empty, __this->_transform));
    }

    return lines;
}

::app::Fuse::Controls::TextEdit::TextPosition* LineCache__DeleteSpan(LineCache* __this, ::app::Fuse::Controls::TextEdit::TextSpan* s)
{
    if (::app::Fuse::Controls::TextEdit::TextSpan__op_Equality(NULL, s, __this->GetFullTextSpan()))
    {
        __this->Text(::uGetConstString(""));
    }
    else
    {
        for (int i = ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(__this->Lines())->Count() - 1; i >= 0; i--)
        {
            ::app::Fuse::Controls::TextEdit::LineCacheLine* line = ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(__this->Lines())->Item(i);
            ::app::Fuse::Controls::TextEdit::TextSpan* lineSpan = ::app::Fuse::Controls::TextEdit::TextSpan__New_1(NULL, ::app::Fuse::Controls::TextEdit::TextPosition__New_1(NULL, i, 0), ::app::Fuse::Controls::TextEdit::TextPosition__New_1(NULL, i, ::uPtr< ::uString*>(::uPtr< ::app::Fuse::Controls::TextEdit::LineCacheLine*>(line)->Text())->Length()));
            ::app::Fuse::Controls::TextEdit::TextSpan* intersection = ::app::Fuse::Controls::TextEdit::TextSpan__Intersection(NULL, lineSpan, s);

            if (::app::Fuse::Controls::TextEdit::TextSpan__op_Equality(NULL, intersection, NULL))
            {
                continue;
            }

            if (::app::Fuse::Controls::TextEdit::TextSpan__op_Equality(NULL, intersection, lineSpan))
            {
                ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(__this->Lines())->RemoveAt(i);
            }
            else
            {
                ::uString* text = ::uPtr< ::app::Fuse::Controls::TextEdit::LineCacheLine*>(::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(__this->Lines())->Item(i))->Text();
                ::uString* start = ::app::Uno::String::Substring_1(::uPtr< ::uString*>(text), 0, ::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(::uPtr< ::app::Fuse::Controls::TextEdit::TextSpan*>(intersection)->Start)->Char);
                ::uString* end = ::app::Uno::String::Substring_1(text, ::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(intersection->End)->Char, text->Length() - ::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(intersection->End)->Char);
                ::uPtr< ::app::Fuse::Controls::TextEdit::LineCacheLine*>(::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(__this->Lines())->Item(i))->Text(::app::Uno::String__op_Addition_2(NULL, start, end));
            }
        }
    }

    __this->InvalidateText(false);
    return ::app::Fuse::Controls::TextEdit::TextPosition__New_1(NULL, ::app::Uno::Math__Min_8(NULL, ::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(::uPtr< ::app::Fuse::Controls::TextEdit::TextSpan*>(s)->Start)->Line, ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(__this->Lines())->Count() - 1), ::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(::uPtr< ::app::Fuse::Controls::TextEdit::TextSpan*>(s)->Start)->Char);
}

::app::Fuse::Controls::TextEdit::TextPosition* LineCache__End(LineCache* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::app::Fuse::Controls::TextEdit::TextPosition* p)
{
    return ::app::Fuse::Controls::TextEdit::TextPosition__New_1(NULL, ::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(p)->Line, ::uPtr< ::app::Fuse::Controls::TextEdit::LineCacheLine*>(::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(__this->Lines())->Item(::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(p)->Line))->End(wrapInfo, ::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(p)->Char));
}

bool LineCache__get_IsMultiline(LineCache* __this)
{
    return __this->_isMultiline;
}

::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine* LineCache__get_Lines(LineCache* __this)
{
    if (__this->_lines == NULL)
    {
        __this->_lines = __this->DecomposeLines(__this->_text);
    }

    return __this->_lines;
}

::uString* LineCache__get_Text(LineCache* __this)
{
    if (!__this->_isTextValid)
    {
        __this->_text = ::uPtr< ::app::Fuse::Controls::TextEdit::LineCacheLine*>(::app::Uno::Collections::EnumerableExtensions__First__Fuse_Controls_TextEdit_LineCacheLine(NULL, (::uObject*)__this->Lines()))->Text();

        for (int i = 1; i < ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(__this->Lines())->Count(); i++)
        {
            __this->_text = ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, __this->_text, ::uGetConstString("\n")), ::uPtr< ::app::Fuse::Controls::TextEdit::LineCacheLine*>(::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(__this->Lines())->Item(i))->Text());
        }

        __this->_isTextValid = true;
    }

    return __this->_text;
}

::uObject* LineCache__get_Transform(LineCache* __this)
{
    return __this->_transform;
}

::app::Uno::Float2 LineCache__GetBoundsSize(LineCache* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo)
{
    ::uArray* array_125;
    int index_126 = int();
    int length_127 = int();
    float maxWidth = 0.0f;
    float height = 0.0f;

    for (::app::Uno::Collections::List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine enum_124 = ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(__this->Lines())->GetEnumerator(); enum_124.MoveNext(); )
    {
        ::app::Fuse::Controls::TextEdit::LineCacheLine* line = enum_124.Current();

        for (array_125 = ::uPtr< ::app::Fuse::Controls::TextEdit::LineCacheLine*>(line)->GetWrappedLines(wrapInfo), index_126 = 0, length_127 = ::uPtr< ::uArray*>(array_125)->Length(); index_126 < length_127; ++index_126)
        {
            ::app::Fuse::Controls::Internal::WrappedLine* wrappedLine = ::uPtr< ::uArray*>(array_125)->Item< ::app::Fuse::Controls::Internal::WrappedLine*>(index_126);
            maxWidth = ::app::Uno::Math__Max_1(NULL, maxWidth, ::uPtr< ::app::Fuse::Controls::Internal::WrappedLine*>(wrappedLine)->LineWidth);
            height = height + ::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(wrapInfo)->LineHeight;
        }
    }

    return ::app::Uno::Float2__New_2(NULL, maxWidth, height);
}

::app::Fuse::Controls::TextEdit::TextSpan* LineCache__GetFullTextSpan(LineCache* __this)
{
    return ::app::Fuse::Controls::TextEdit::TextSpan__New_1(NULL, ::app::Fuse::Controls::TextEdit::TextPosition__Default, __this->GetLastTextPos());
}

::app::Fuse::Controls::TextEdit::TextPosition* LineCache__GetLastTextPos(LineCache* __this)
{
    return ::app::Fuse::Controls::TextEdit::TextPosition__New_1(NULL, ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(__this->Lines())->Count() - 1, ::uPtr< ::uString*>(::uPtr< ::app::Fuse::Controls::TextEdit::LineCacheLine*>(::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(__this->Lines())->Item(::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(__this->Lines())->Count() - 1))->Text())->Length());
}

::uString* LineCache__GetString(LineCache* __this, ::app::Fuse::Controls::TextEdit::TextSpan* s)
{
    ::uString* ret = ::uGetConstString("");

    for (int i = ::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(::uPtr< ::app::Fuse::Controls::TextEdit::TextSpan*>(s)->Start)->Line; i <= ::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(s->End)->Line; i++)
    {
        ::app::Fuse::Controls::TextEdit::LineCacheLine* line = ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(__this->Lines())->Item(i);
        ::app::Fuse::Controls::TextEdit::TextSpan* lineSpan = ::app::Fuse::Controls::TextEdit::TextSpan__New_1(NULL, ::app::Fuse::Controls::TextEdit::TextPosition__New_1(NULL, i, 0), ::app::Fuse::Controls::TextEdit::TextPosition__New_1(NULL, i, ::uPtr< ::uString*>(::uPtr< ::app::Fuse::Controls::TextEdit::LineCacheLine*>(line)->Text())->Length()));
        ::app::Fuse::Controls::TextEdit::TextSpan* intersection = ::app::Fuse::Controls::TextEdit::TextSpan__Intersection(NULL, lineSpan, s);

        if (::app::Fuse::Controls::TextEdit::TextSpan__op_Equality(NULL, intersection, NULL))
        {
            continue;
        }

        ret = ::app::Uno::String__op_Addition_2(NULL, ret, ::app::Uno::String::Substring_1(::uPtr< ::uString*>(line->Text()), ::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(::uPtr< ::app::Fuse::Controls::TextEdit::TextSpan*>(intersection)->Start)->Char, ::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(::uPtr< ::app::Fuse::Controls::TextEdit::TextSpan*>(intersection)->End)->Char - ::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(::uPtr< ::app::Fuse::Controls::TextEdit::TextSpan*>(intersection)->Start)->Char));
    }

    return ret;
}

::app::Fuse::Controls::TextEdit::TextPosition* LineCache__Home(LineCache* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::app::Fuse::Controls::TextEdit::TextPosition* p)
{
    return ::app::Fuse::Controls::TextEdit::TextPosition__New_1(NULL, ::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(p)->Line, ::uPtr< ::app::Fuse::Controls::TextEdit::LineCacheLine*>(::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(__this->Lines())->Item(::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(p)->Line))->Home(wrapInfo, ::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(p)->Char));
}

::app::Fuse::Controls::TextEdit::TextPosition* LineCache__InsertChar(LineCache* __this, ::app::Fuse::Controls::TextEdit::TextPosition* p, ::uChar c)
{
    ::uPtr< ::app::Fuse::Controls::TextEdit::LineCacheLine*>(::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(__this->Lines())->Item(::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(p)->Line))->InsertChar(::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(p)->Char, c);
    __this->InvalidateText(false);
    return ::app::Fuse::Controls::TextEdit::TextPosition__New_1(NULL, p->Line, p->Char + 1);
}

::app::Fuse::Controls::TextEdit::TextPosition* LineCache__InsertNewline(LineCache* __this, ::app::Fuse::Controls::TextEdit::TextPosition* p)
{
    ::app::Fuse::Controls::TextEdit::LineCacheLine* currentLine = ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(__this->Lines())->Item(::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(p)->Line);
    ::app::Fuse::Controls::TextEdit::LineCacheLine* newLine = ::app::Fuse::Controls::TextEdit::LineCacheLine__New_1(NULL, ::app::Uno::String::Substring(::uPtr< ::uString*>(::uPtr< ::app::Fuse::Controls::TextEdit::LineCacheLine*>(currentLine)->Text()), p->Char), __this->_transform);
    currentLine->Text(::app::Uno::String::Substring_1(::uPtr< ::uString*>(currentLine->Text()), 0, p->Char));
    ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(__this->Lines())->Insert(p->Line + 1, newLine);
    __this->InvalidateText(false);
    return ::app::Fuse::Controls::TextEdit::TextPosition__New_1(NULL, p->Line + 1, 0);
}

void LineCache__InvalidateLayout(LineCache* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_invalideLayout, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_invalideLayout)->InvokeVoid();
    }
}

void LineCache__InvalidateText(LineCache* __this, bool noChange)
{
    __this->_text = NULL;
    __this->_isTextValid = false;

    if (!noChange && ::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_onTextChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_onTextChanged)->InvokeVoid();
    }

    __this->InvalidateLayout();
}

void LineCache__InvalidateVisual(LineCache* __this)
{
    for (::app::Uno::Collections::List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine enum_128 = ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(__this->Lines())->GetEnumerator(); enum_128.MoveNext(); )
    {
        ::app::Fuse::Controls::TextEdit::LineCacheLine* line = enum_128.Current();
        ::uPtr< ::app::Fuse::Controls::TextEdit::LineCacheLine*>(line)->Invalidate();
    }

    __this->InvalidateLayout();
}

bool LineCache__IsWordBreaker(LineCache* __this, ::uChar c)
{
    return (((((c == ' ') || (c == 9)) || (c == 10)) || (c == '.')) || (c == ',')) || (c == ';');
}

LineCache* LineCache__New_1(::uStatic* __this, ::uDelegate* onTextChanged, ::uDelegate* invalideLayout)
{
    LineCache* inst = (LineCache*)::uAllocObject(sizeof(LineCache), LineCache__typeof());
    inst->_ObjInit(onTextChanged, invalideLayout);
    return inst;
}

int LineCache__NextWordLeft(LineCache* __this, ::uString* str, int startIdx)
{
    bool hitWordBreak = false;
    int nextRealChar = -1;
    int i = startIdx - 1;
    bool startsWithRealChar = !__this->IsWordBreaker(::uPtr< ::uString*>(str)->Item(i));

    for (; i >= 0; --i)
    {
        ::uChar c = ::uPtr< ::uString*>(str)->Item(i);

        if (__this->IsWordBreaker(c))
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
    {
        return 0;
    }

    return nextRealChar + 1;
}

int LineCache__NextWordRight(LineCache* __this, ::uString* str, int startIdx)
{
    bool hitWordBreak = false;
    int nextRealChar = -1;
    int i = startIdx;
    bool startsWithRealChar = !__this->IsWordBreaker(::uPtr< ::uString*>(str)->Item(i));

    for (; i < str->Length(); ++i)
    {
        ::uChar c = ::uPtr< ::uString*>(str)->Item(i);

        if (__this->IsWordBreaker(c))
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
    {
        return i;
    }

    return nextRealChar;
}

void LineCache__set_IsMultiline(LineCache* __this, bool value)
{
    if (value == __this->_isMultiline)
    {
        return;
    }

    __this->_isMultiline = value;
    __this->_lines = NULL;
}

void LineCache__set_Text(LineCache* __this, ::uString* value)
{
    if (::app::Uno::String__op_Equality(NULL, value, __this->Text()))
    {
        return;
    }

    __this->_text = value;
    __this->_isTextValid = true;
    __this->_lines = NULL;
}

void LineCache__set_Transform(LineCache* __this, ::uObject* value)
{
    __this->_transform = value;

    for (::app::Uno::Collections::List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(__this->Lines())->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::app::Fuse::Controls::TextEdit::LineCacheLine* line = enum_123.Current();
        ::uPtr< ::app::Fuse::Controls::TextEdit::LineCacheLine*>(line)->Transform(__this->_transform);
    }

    __this->InvalidateText(true);
}

::app::Uno::Float2 LineCache__TextPosToBounds(LineCache* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, ::app::Fuse::Controls::TextEdit::TextPosition* p)
{
    float startY = 0.0f;

    for (int i = 0; i < ::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(p)->Line; i++)
    {
        startY = startY + ::uPtr< ::app::Fuse::Controls::TextEdit::LineCacheLine*>(::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(__this->Lines())->Item(i))->GetTotalHeight(wrapInfo);
    }

    ::app::Uno::Float2 linePos = ::uPtr< ::app::Fuse::Controls::TextEdit::LineCacheLine*>(::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(__this->Lines())->Item(::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(p)->Line))->PosToBounds(wrapInfo, textAlignment, boundsWidth, ::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(p)->Char);
    return ::app::Uno::Float2__New_2(NULL, linePos.X, startY + linePos.Y);
}

::app::Fuse::Controls::TextEdit::TextPosition* LineCache__TryBackspace(LineCache* __this, ::app::Fuse::Controls::TextEdit::TextPosition* p)
{
    if (::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(p)->Char == 0)
    {
        if (::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(p)->Line == 0)
        {
            return p;
        }

        ::app::Fuse::Controls::TextEdit::LineCacheLine* prevLine = ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(__this->Lines())->Item(::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(p)->Line - 1);
        ::app::Fuse::Controls::TextEdit::LineCacheLine* currentLine = ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(__this->Lines())->Item(p->Line);
        int newChar = ::uPtr< ::uString*>(::uPtr< ::app::Fuse::Controls::TextEdit::LineCacheLine*>(prevLine)->Text())->Length();
        prevLine->Text(::app::Uno::String__op_Addition_2(NULL, prevLine->Text(), ::uPtr< ::app::Fuse::Controls::TextEdit::LineCacheLine*>(currentLine)->Text()));
        ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(__this->Lines())->RemoveAt(p->Line);
        __this->InvalidateText(false);
        return ::app::Fuse::Controls::TextEdit::TextPosition__New_1(NULL, p->Line - 1, newChar);
    }

    ::app::Fuse::Controls::TextEdit::TextPosition* ret = ::app::Fuse::Controls::TextEdit::TextPosition__New_1(NULL, ::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(p)->Line, ::uPtr< ::app::Fuse::Controls::TextEdit::LineCacheLine*>(::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(__this->Lines())->Item(::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(p)->Line))->Backspace(::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(p)->Char));
    __this->InvalidateText(false);
    return ret;
}

::app::Fuse::Controls::TextEdit::TextPosition* LineCache__TryDelete(LineCache* __this, ::app::Fuse::Controls::TextEdit::TextPosition* p)
{
    ::app::Fuse::Controls::TextEdit::LineCacheLine* line = ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(__this->Lines())->Item(::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(p)->Line);

    if (p->Char == ::uPtr< ::uString*>(::uPtr< ::app::Fuse::Controls::TextEdit::LineCacheLine*>(line)->Text())->Length())
    {
        if (::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(p)->Line == (::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(__this->Lines())->Count() - 1))
        {
            return p;
        }

        ::app::Fuse::Controls::TextEdit::LineCacheLine* nextLine = ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(__this->Lines())->Item(::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(p)->Line + 1);
        ::uPtr< ::app::Fuse::Controls::TextEdit::LineCacheLine*>(line)->Text(::app::Uno::String__op_Addition_2(NULL, ::uPtr< ::app::Fuse::Controls::TextEdit::LineCacheLine*>(line)->Text(), ::uPtr< ::app::Fuse::Controls::TextEdit::LineCacheLine*>(nextLine)->Text()));
        ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(__this->Lines())->RemoveAt(p->Line + 1);
        __this->InvalidateText(false);
    }
    else
    {
        ::uPtr< ::app::Fuse::Controls::TextEdit::LineCacheLine*>(::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(__this->Lines())->Item(::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(p)->Line))->Delete(::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(p)->Char);
        __this->InvalidateText(false);
    }

    return p;
}

::app::Fuse::Controls::TextEdit::TextPosition* LineCache__TryMoveDown(LineCache* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, ::app::Fuse::Controls::TextEdit::TextPosition* p)
{
    ::app::Uno::Float2 lineBounds = __this->TextPosToBounds(wrapInfo, textAlignment, boundsWidth, p);
    ::app::Uno::Float2 nextLineBounds = ::app::Uno::Float2__New_2(NULL, lineBounds.X, lineBounds.Y + (::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(wrapInfo)->LineHeight * 1.5f));
    ::app::Fuse::Controls::TextEdit::TextPosition* nextLineTextPos = __this->BoundsToTextPos(wrapInfo, textAlignment, boundsWidth, nextLineBounds);
    return nextLineTextPos;
}

::app::Fuse::Controls::TextEdit::TextPosition* LineCache__TryMoveLeft(LineCache* __this, ::app::Fuse::Controls::TextEdit::TextPosition* p)
{
    if (::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(p)->Char == 0)
    {
        if (::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(p)->Line == 0)
        {
            return p;
        }

        ::app::Fuse::Controls::TextEdit::LineCacheLine* prevLine = ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(__this->Lines())->Item(::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(p)->Line - 1);
        return ::app::Fuse::Controls::TextEdit::TextPosition__New_1(NULL, p->Line - 1, ::uPtr< ::uString*>(::uPtr< ::app::Fuse::Controls::TextEdit::LineCacheLine*>(prevLine)->Text())->Length());
    }

    return ::app::Fuse::Controls::TextEdit::TextPosition__New_1(NULL, ::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(p)->Line, ::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(p)->Char - 1);
}

::app::Fuse::Controls::TextEdit::TextPosition* LineCache__TryMoveOneWordLeft(LineCache* __this, ::app::Fuse::Controls::TextEdit::TextPosition* p)
{
    if (::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(p)->Char == 0)
    {
        if (::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(p)->Line == 0)
        {
            return p;
        }

        ::app::Fuse::Controls::TextEdit::LineCacheLine* prevLine = ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(__this->Lines())->Item(::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(p)->Line - 1);
        return ::app::Fuse::Controls::TextEdit::TextPosition__New_1(NULL, p->Line - 1, ::uPtr< ::uString*>(::uPtr< ::app::Fuse::Controls::TextEdit::LineCacheLine*>(prevLine)->Text())->Length());
    }

    return ::app::Fuse::Controls::TextEdit::TextPosition__New_1(NULL, ::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(p)->Line, __this->NextWordLeft(::uPtr< ::app::Fuse::Controls::TextEdit::LineCacheLine*>(::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(__this->Lines())->Item(::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(p)->Line))->Text(), ::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(p)->Char));
}

::app::Fuse::Controls::TextEdit::TextPosition* LineCache__TryMoveOneWordRight(LineCache* __this, ::app::Fuse::Controls::TextEdit::TextPosition* p)
{
    ::app::Fuse::Controls::TextEdit::LineCacheLine* line = ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(__this->Lines())->Item(::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(p)->Line);

    if (p->Char >= ::uPtr< ::uString*>(::uPtr< ::app::Fuse::Controls::TextEdit::LineCacheLine*>(line)->Text())->Length())
    {
        if (::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(p)->Line == (::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(__this->Lines())->Count() - 1))
        {
            return p;
        }

        return ::app::Fuse::Controls::TextEdit::TextPosition__New_1(NULL, ::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(p)->Line + 1, 0);
    }

    return ::app::Fuse::Controls::TextEdit::TextPosition__New_1(NULL, p->Line, __this->NextWordRight(::uPtr< ::app::Fuse::Controls::TextEdit::LineCacheLine*>(line)->Text(), p->Char));
}

::app::Fuse::Controls::TextEdit::TextPosition* LineCache__TryMoveRight(LineCache* __this, ::app::Fuse::Controls::TextEdit::TextPosition* p)
{
    ::app::Fuse::Controls::TextEdit::LineCacheLine* line = ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(__this->Lines())->Item(::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(p)->Line);

    if (p->Char >= ::uPtr< ::uString*>(::uPtr< ::app::Fuse::Controls::TextEdit::LineCacheLine*>(line)->Text())->Length())
    {
        if (::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(p)->Line == (::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(__this->Lines())->Count() - 1))
        {
            return p;
        }

        return ::app::Fuse::Controls::TextEdit::TextPosition__New_1(NULL, ::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(p)->Line + 1, 0);
    }

    return ::app::Fuse::Controls::TextEdit::TextPosition__New_1(NULL, p->Line, p->Char + 1);
}

::app::Fuse::Controls::TextEdit::TextPosition* LineCache__TryMoveUp(LineCache* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, ::app::Fuse::Controls::TextEdit::TextPosition* p)
{
    ::app::Uno::Float2 lineBounds = __this->TextPosToBounds(wrapInfo, textAlignment, boundsWidth, p);
    ::app::Uno::Float2 prevLineBounds = ::app::Uno::Float2__New_2(NULL, lineBounds.X, lineBounds.Y - (::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(wrapInfo)->LineHeight * 0.5f));
    ::app::Fuse::Controls::TextEdit::TextPosition* prevLineTextPos = __this->BoundsToTextPos(wrapInfo, textAlignment, boundsWidth, prevLineBounds);
    return prevLineTextPos;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\TextEdit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LineCacheLine__uType* LineCacheLine__typeof()
{
    static ::uStaticStrong<LineCacheLine__uType*> type;
    if (type != NULL) return type;

    type = (LineCacheLine__uType*)::uAllocClassType(sizeof(LineCacheLine__uType), "Fuse.Controls.TextEdit.LineCacheLine", false, 0, 4, 0);

    type->SetStrongRefs(
        "_text", offsetof(LineCacheLine, _text),
        "_transform", offsetof(LineCacheLine, _transform),
        "_wordWrapInfoCache", offsetof(LineCacheLine, _wordWrapInfoCache),
        "_wrappedLinesCache", offsetof(LineCacheLine, _wrappedLinesCache));

    type->SetFields(4,
        ::uNewField("_text", NULL, offsetof(LineCacheLine, _text), ::app::Uno::String__typeof()),
        ::uNewField("_transform", NULL, offsetof(LineCacheLine, _transform), ::app::Fuse::Controls::TextEdit::LineCacheTransform__typeof()),
        ::uNewField("_wordWrapInfoCache", NULL, offsetof(LineCacheLine, _wordWrapInfoCache), ::app::Fuse::Controls::Internal::WordWrapInfo__typeof()),
        ::uNewField("_wrappedLinesCache", NULL, offsetof(LineCacheLine, _wrappedLinesCache), ::uGetArrayType(::app::Fuse::Controls::Internal::WrappedLine__typeof())));

    type->SetFunctions(18,
        ::uNewFunction("Backspace", LineCacheLine__Backspace, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("BoundsToPos", LineCacheLine__BoundsToPos, 0, false, ::app::Uno::Int__typeof(), ::app::Fuse::Controls::Internal::WordWrapInfo__typeof(), ::app::Fuse::Elements::TextAlignment__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction("BoundsToWrappedLine", LineCacheLine__BoundsToWrappedLine, 0, false, ::app::Fuse::Controls::Internal::WrappedLine__typeof(), ::app::Fuse::Controls::Internal::WordWrapInfo__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("Delete", LineCacheLine__Delete, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("End", LineCacheLine__End, 0, false, ::app::Uno::Int__typeof(), ::app::Fuse::Controls::Internal::WordWrapInfo__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Text", LineCacheLine__get_Text, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Transform", LineCacheLine__get_Transform, 0, false, ::app::Fuse::Controls::TextEdit::LineCacheTransform__typeof()),
        ::uNewFunction("get_VisualText", LineCacheLine__get_VisualText, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("GetTotalHeight", LineCacheLine__GetTotalHeight, 0, false, ::app::Uno::Float__typeof(), ::app::Fuse::Controls::Internal::WordWrapInfo__typeof()),
        ::uNewFunction("GetWrappedLines", LineCacheLine__GetWrappedLines, 0, false, ::uGetArrayType(::app::Fuse::Controls::Internal::WrappedLine__typeof()), ::app::Fuse::Controls::Internal::WordWrapInfo__typeof()),
        ::uNewFunction("Home", LineCacheLine__Home, 0, false, ::app::Uno::Int__typeof(), ::app::Fuse::Controls::Internal::WordWrapInfo__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("InsertChar", LineCacheLine__InsertChar, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Char__typeof()),
        ::uNewFunctionVoid("Invalidate", LineCacheLine__Invalidate, 0, false),
        ::uNewFunction(".ctor", LineCacheLine__New_1, 0, true, LineCacheLine__typeof(), ::app::Uno::String__typeof(), ::app::Fuse::Controls::TextEdit::LineCacheTransform__typeof()),
        ::uNewFunction("PosToBounds", LineCacheLine__PosToBounds, 0, false, ::app::Uno::Float2__typeof(), ::app::Fuse::Controls::Internal::WordWrapInfo__typeof(), ::app::Fuse::Elements::TextAlignment__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("PosToWrappedLine", LineCacheLine__PosToWrappedLine, 0, false, ::app::Fuse::Controls::Internal::WrappedLine__typeof(), ::app::Fuse::Controls::Internal::WordWrapInfo__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("set_Text", LineCacheLine__set_Text, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Transform", LineCacheLine__set_Transform, 0, false, ::app::Fuse::Controls::TextEdit::LineCacheTransform__typeof()));

    ::uRegisterType(type);
    return type;
}

void LineCacheLine___ObjInit(LineCacheLine* __this, ::uString* text, ::uObject* transform)
{
    __this->_text = text;
    __this->_transform = transform;
}

int LineCacheLine__Backspace(LineCacheLine* __this, int p)
{
    __this->Text(::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String::Substring_1(::uPtr< ::uString*>(__this->Text()), 0, p - 1), ::app::Uno::String::Substring(::uPtr< ::uString*>(__this->Text()), p)));
    return p - 1;
}

int LineCacheLine__BoundsToPos(LineCacheLine* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, ::app::Uno::Float2 p)
{
    ::app::Fuse::Controls::Internal::WrappedLine* wrappedLine = __this->BoundsToWrappedLine(wrapInfo, p);
    float xOffset = ::uPtr< ::app::Fuse::Controls::Internal::WrappedLine*>(wrappedLine)->GetXOffset(textAlignment, boundsWidth, ::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(wrapInfo)->AbsoluteZoom);
    return wrappedLine->BoundsToPos(wrapInfo, p.X - xOffset) + wrappedLine->LineTextStartOffset;
}

::app::Fuse::Controls::Internal::WrappedLine* LineCacheLine__BoundsToWrappedLine(LineCacheLine* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::app::Uno::Float2 p)
{
    ::uArray* wrappedLines = __this->GetWrappedLines(wrapInfo);
    int l = 0;
    float startY = 0.0f;

    if (p.Y > 0.0f)
    {
        for (; l < (::uPtr< ::uArray*>(wrappedLines)->Length() - 1); l++)
        {
            float endY = startY + ::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(wrapInfo)->LineHeight;

            if ((p.Y >= startY) && (p.Y < endY))
            {
                break;
            }

            startY = endY;
        }
    }

    return ::uPtr< ::uArray*>(wrappedLines)->Item< ::app::Fuse::Controls::Internal::WrappedLine*>(l);
}

void LineCacheLine__Delete(LineCacheLine* __this, int p)
{
    __this->Text(::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String::Substring_1(::uPtr< ::uString*>(__this->Text()), 0, p), ::app::Uno::String::Substring(::uPtr< ::uString*>(__this->Text()), p + 1)));
}

int LineCacheLine__End(LineCacheLine* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int p)
{
    return ::uPtr< ::app::Fuse::Controls::Internal::WrappedLine*>(__this->PosToWrappedLine(wrapInfo, p))->LineTextEndOffset();
}

::uString* LineCacheLine__get_Text(LineCacheLine* __this)
{
    return __this->_text;
}

::uObject* LineCacheLine__get_Transform(LineCacheLine* __this)
{
    return __this->_transform;
}

::uString* LineCacheLine__get_VisualText(LineCacheLine* __this)
{
    if (__this->_transform != NULL)
    {
        return ::app::Fuse::Controls::TextEdit::LineCacheTransform::Transform(::uPtr< ::uObject*>(__this->_transform), __this->_text);
    }

    return __this->_text;
}

float LineCacheLine__GetTotalHeight(LineCacheLine* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo)
{
    ::uArray* wrappedLines = __this->GetWrappedLines(wrapInfo);
    return (float)::uPtr< ::uArray*>(wrappedLines)->Length() * ::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(wrapInfo)->LineHeight;
}

::uArray* LineCacheLine__GetWrappedLines(LineCacheLine* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo)
{
    ::uArray* array_123;

    if (((__this->_wrappedLinesCache == NULL) || (__this->_wordWrapInfoCache == NULL)) || !::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(__this->_wordWrapInfoCache)->Equals((::uObject*)wrapInfo))
    {
        __this->_wrappedLinesCache = (::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(wrapInfo)->IsEnabled && (::uPtr< ::uString*>(__this->Text())->Length() > 0)) ? ::app::Fuse::Controls::Internal::WordWrapper__WrapLine(NULL, wrapInfo, __this->VisualText()) : (array_123 = ::uNewArray(::app::Fuse::Controls::Internal::WrappedLine__typeof(), 1), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::app::Fuse::Controls::Internal::WrappedLine*>(0) = ::app::Fuse::Controls::Internal::WrappedLine__New_1(NULL, __this->VisualText(), 0, 0.0f, ::uPtr< ::app::Fuse::Controls::Internal::DefaultTextRenderer*>(::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(wrapInfo)->TextRenderer)->MeasureStringVirtual(::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(wrapInfo)->FontSize, ::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(wrapInfo)->AbsoluteZoom, __this->VisualText()).X), array_123);
        __this->_wordWrapInfoCache = wrapInfo;
    }

    return __this->_wrappedLinesCache;
}

int LineCacheLine__Home(LineCacheLine* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int p)
{
    return ::uPtr< ::app::Fuse::Controls::Internal::WrappedLine*>(__this->PosToWrappedLine(wrapInfo, p))->LineTextStartOffset;
}

void LineCacheLine__InsertChar(LineCacheLine* __this, int p, ::uChar c)
{
    __this->Text((p < ::uPtr< ::uString*>(__this->Text())->Length()) ? ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String::Substring_1(::uPtr< ::uString*>(__this->Text()), 0, p), ::uBox< ::uChar>(::app::Uno::Char__typeof(), c)), ::app::Uno::String::Substring(::uPtr< ::uString*>(__this->Text()), p)) : ::app::Uno::String__op_Addition_1(NULL, __this->Text(), ::uBox< ::uChar>(::app::Uno::Char__typeof(), c)));
}

void LineCacheLine__Invalidate(LineCacheLine* __this)
{
    __this->_wrappedLinesCache = NULL;
}

LineCacheLine* LineCacheLine__New_1(::uStatic* __this, ::uString* text, ::uObject* transform)
{
    LineCacheLine* inst = (LineCacheLine*)::uAllocObject(sizeof(LineCacheLine), LineCacheLine__typeof());
    inst->_ObjInit(text, transform);
    return inst;
}

::app::Uno::Float2 LineCacheLine__PosToBounds(LineCacheLine* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, int p)
{
    ::app::Fuse::Controls::Internal::WrappedLine* wrappedLine = __this->PosToWrappedLine(wrapInfo, p);
    float xOffset = ::uPtr< ::app::Fuse::Controls::Internal::WrappedLine*>(wrappedLine)->GetXOffset(textAlignment, boundsWidth, ::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(wrapInfo)->AbsoluteZoom);
    float yOffset = wrappedLine->YOffset;
    return ::app::Uno::Float2__New_2(NULL, xOffset + wrappedLine->PosToBounds(wrapInfo, p - wrappedLine->LineTextStartOffset), yOffset);
}

::app::Fuse::Controls::Internal::WrappedLine* LineCacheLine__PosToWrappedLine(LineCacheLine* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int p)
{
    ::uArray* wrappedLines = __this->GetWrappedLines(wrapInfo);

    for (int i = 0; i < (::uPtr< ::uArray*>(wrappedLines)->Length() - 1); i++)
    {
        ::app::Fuse::Controls::Internal::WrappedLine* wrappedLine = ::uPtr< ::uArray*>(wrappedLines)->Item< ::app::Fuse::Controls::Internal::WrappedLine*>(i);

        if ((p >= ::uPtr< ::app::Fuse::Controls::Internal::WrappedLine*>(wrappedLine)->LineTextStartOffset) && (p < ::uPtr< ::app::Fuse::Controls::Internal::WrappedLine*>(wrappedLine)->LineTextEndOffset()))
        {
            return wrappedLine;
        }
    }

    return ::uPtr< ::uArray*>(wrappedLines)->Item< ::app::Fuse::Controls::Internal::WrappedLine*>(::uPtr< ::uArray*>(wrappedLines)->Length() - 1);
}

void LineCacheLine__set_Text(LineCacheLine* __this, ::uString* value)
{
    if (::app::Uno::String__op_Equality(NULL, value, __this->_text))
    {
        return;
    }

    __this->_text = value;
    __this->Invalidate();
}

void LineCacheLine__set_Transform(LineCacheLine* __this, ::uObject* value)
{
    __this->_transform = value;
    __this->Invalidate();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\TextEdit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LineCachePasswordTransform__uType* LineCachePasswordTransform__typeof()
{
    static ::uStaticStrong<LineCachePasswordTransform__uType*> type;
    if (type != NULL) return type;

    type = (LineCachePasswordTransform__uType*)::uAllocClassType(sizeof(LineCachePasswordTransform__uType), "Fuse.Controls.TextEdit.LineCachePasswordTransform", false, 1, 0, 0);

    type->__interface_0.__fp_Transform = (::uString*(*)(void*, ::uString*))LineCachePasswordTransform__Transform;

    type->SetInterfaces(
        ::app::Fuse::Controls::TextEdit::LineCacheTransform__typeof(), offsetof(LineCachePasswordTransform__uType, __interface_0));

    type->SetFields(1,
        ::uNewField("_reveal", NULL, offsetof(LineCachePasswordTransform, _reveal), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunction(".ctor", LineCachePasswordTransform__New_1, 0, true, LineCachePasswordTransform__typeof()),
        ::uNewFunction("SetReveal", LineCachePasswordTransform__SetReveal, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("Transform", LineCachePasswordTransform__Transform, 0, false, ::app::Uno::String__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void LineCachePasswordTransform___ObjInit(LineCachePasswordTransform* __this)
{
    __this->_reveal = -1;
}

LineCachePasswordTransform* LineCachePasswordTransform__New_1(::uStatic* __this)
{
    LineCachePasswordTransform* inst = (LineCachePasswordTransform*)::uAllocObject(sizeof(LineCachePasswordTransform), LineCachePasswordTransform__typeof());
    inst->_ObjInit();
    return inst;
}

bool LineCachePasswordTransform__SetReveal(LineCachePasswordTransform* __this, int r)
{
    bool b = r != __this->_reveal;
    __this->_reveal = r;
    return b;
}

::uString* LineCachePasswordTransform__Transform(LineCachePasswordTransform* __this, ::uString* text)
{
    if (::app::Uno::String__IsNullOrEmpty(NULL, text))
    {
        return text;
    }

    ::uChar replacement = 8226;
    ::uArray* buffer = ::uNewArray(::app::Uno::Char__typeof(), ::uPtr< ::uString*>(text)->Length());

    for (int i = 0; i < buffer->Length(); ++i)
    {
        buffer->Item< ::uChar>(i) = replacement;
    }

    if (__this->_reveal != -1)
    {
        buffer->Item< ::uChar>(__this->_reveal) = text->Item(__this->_reveal);
    }

    return ::uNewStringFromArray(buffer);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\TextEdit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* LineCacheTransform__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Controls.TextEdit.LineCacheTransform");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\TextEdit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::Controls::TextEdit::TextEditVisual_SwipeGestureHelper*> TextEditVisual___horizontalGesture;
::uStaticStrong< ::app::Fuse::Controls::TextEdit::TextEditVisual_SwipeGestureHelper*> TextEditVisual___verticalGesture;

TextEditVisual__uType* TextEditVisual__typeof()
{
    static ::uStaticStrong<TextEditVisual__uType*> type;
    if (type != NULL) return type;

    type = (TextEditVisual__uType*)::uAllocClassType(sizeof(TextEditVisual__uType), "Fuse.Controls.TextEdit.TextEditVisual", false, 1, 8, 0);

    type->SetBaseType(::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_TextInput__typeof());
    type->__fp_Attach = (void(*)(::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_TextInput*))TextEditVisual__Attach;
    type->__fp_Detach = (void(*)(::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_TextInput*))TextEditVisual__Detach;
    type->__fp_get_SubNodeCount = (int(*)(::app::Fuse::Node*))TextEditVisual__get_SubNodeCount;
    type->__fp_GetMarginSize = (::app::Uno::Float2(*)(::app::Fuse::Node*, ::app::Uno::Float2, int))TextEditVisual__GetMarginSize;
    type->__fp_GetSubNode = (::app::Fuse::Node*(*)(::app::Fuse::Node*, int))TextEditVisual__GetSubNode;
    type->__fp_OnArrangeMarginBox = (::app::Uno::Float2(*)(::app::Fuse::Node*, ::app::Uno::Float2, ::app::Uno::Float2, int))TextEditVisual__OnArrangeMarginBox;
    type->__fp_OnDraw = (void(*)(::app::Fuse::Controls::Graphics::Visual*, ::app::Fuse::DrawContext*))TextEditVisual__OnDraw;
    type->__fp_OnHitTest = (void(*)(::app::Fuse::Node*, ::app::Fuse::HitTestContext*))TextEditVisual__OnHitTest;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(TextEditVisual__uType, __interface_0));

    type->SetStrongRefs(
        "_caretBrush", offsetof(TextEditVisual, _caretBrush),
        "_caretPosition", offsetof(TextEditVisual, _caretPosition),
        "_interactionSelectionStartPos", offsetof(TextEditVisual, _interactionSelectionStartPos),
        "_lineCache", offsetof(TextEditVisual, _lineCache),
        "_passwordTransform", offsetof(TextEditVisual, _passwordTransform),
        "_selection", offsetof(TextEditVisual, _selection),
        "_textWindow", offsetof(TextEditVisual, _textWindow),
        "_wrapInfo", offsetof(TextEditVisual, _wrapInfo));

    type->SetFields(18,
        ::uNewField("_caretBlinkTime", NULL, offsetof(TextEditVisual, _caretBlinkTime), ::app::Uno::Double__typeof()),
        ::uNewField("_caretBrush", NULL, offsetof(TextEditVisual, _caretBrush), ::app::Fuse::Drawing::SolidColor__typeof()),
        ::uNewField("_caretPosition", NULL, offsetof(TextEditVisual, _caretPosition), ::app::Fuse::Controls::TextEdit::TextPosition__typeof()),
        ::uNewField("_down", NULL, offsetof(TextEditVisual, _down), ::app::Uno::Int__typeof()),
        ::uNewField("_horizontalGesture", &TextEditVisual___horizontalGesture, 0, ::app::Fuse::Controls::TextEdit::TextEditVisual_SwipeGestureHelper__typeof()),
        ::uNewField("_interactionSelectionStartPos", NULL, offsetof(TextEditVisual, _interactionSelectionStartPos), ::app::Fuse::Controls::TextEdit::TextPosition__typeof()),
        ::uNewField("_isReadOnly", NULL, offsetof(TextEditVisual, _isReadOnly), ::app::Uno::Bool__typeof()),
        ::uNewField("_lineCache", NULL, offsetof(TextEditVisual, _lineCache), ::app::Fuse::Controls::TextEdit::LineCache__typeof()),
        ::uNewField("_passwordTransform", NULL, offsetof(TextEditVisual, _passwordTransform), ::app::Fuse::Controls::TextEdit::LineCachePasswordTransform__typeof()),
        ::uNewField("_revealEnd", NULL, offsetof(TextEditVisual, _revealEnd), ::app::Uno::Double__typeof()),
        ::uNewField("_selection", NULL, offsetof(TextEditVisual, _selection), ::app::Fuse::Controls::TextEdit::TextSpan__typeof()),
        ::uNewField("_startCoord", NULL, offsetof(TextEditVisual, _startCoord), ::app::Uno::Float2__typeof()),
        ::uNewField("_textWindow", NULL, offsetof(TextEditVisual, _textWindow), ::app::Fuse::Controls::TextEdit::TextWindow__typeof()),
        ::uNewField("_verticalGesture", &TextEditVisual___verticalGesture, 0, ::app::Fuse::Controls::TextEdit::TextEditVisual_SwipeGestureHelper__typeof()),
        ::uNewField("_visualTextTransform", NULL, offsetof(TextEditVisual, _visualTextTransform), ::app::Fuse::Controls::TextEdit::VisualTextTransform__typeof()),
        ::uNewField("_windowPos", NULL, offsetof(TextEditVisual, _windowPos), ::app::Uno::Float2__typeof()),
        ::uNewField("_wrapInfo", NULL, offsetof(TextEditVisual, _wrapInfo), ::app::Fuse::Controls::Internal::WordWrapInfo__typeof()),
        ::uNewField("RevealTime", NULL, offsetof(TextEditVisual, RevealTime), ::app::Uno::Double__typeof()));

    type->SetFunctions(48,
        ::uNewFunctionVoid("BringCaretIntoView", TextEditVisual__BringCaretIntoView, 0, false, ::app::Fuse::Controls::Internal::WordWrapInfo__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("ClearPasswordReveal", TextEditVisual__ClearPasswordReveal, 0, false),
        ::uNewFunction("ControlToTextBounds", TextEditVisual__ControlToTextBounds, 0, false, ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction("ControlToWindow", TextEditVisual__ControlToWindow, 0, false, ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction("CreateWrapInfo", TextEditVisual__CreateWrapInfo, 0, false, ::app::Fuse::Controls::Internal::WordWrapInfo__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("DeleteSelection", TextEditVisual__DeleteSelection, 0, false),
        ::uNewFunctionVoid("DrawCaret", TextEditVisual__DrawCaret, 0, false, ::app::Fuse::Controls::Internal::WordWrapInfo__typeof(), ::app::Uno::Float__typeof(), ::app::Fuse::DrawContext__typeof()),
        ::uNewFunction("get_IsWordWrapEnabled", TextEditVisual__get_IsWordWrapEnabled, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_SelectedText", TextEditVisual__get_SelectedText, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_VisualTextTransform", TextEditVisual__get_VisualTextTransform, 0, false, ::app::Fuse::Controls::TextEdit::VisualTextTransform__typeof()),
        ::uNewFunction("GetCaretRect", TextEditVisual__GetCaretRect, 0, false, ::app::Uno::Rect__typeof(), ::app::Fuse::Controls::Internal::WordWrapInfo__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("GetClampedTextBoundsRect", TextEditVisual__GetClampedTextBoundsRect, 0, false, ::app::Uno::Rect__typeof(), ::app::Fuse::Controls::Internal::WordWrapInfo__typeof()),
        ::uNewFunction("GetClampedTextBoundsSize", TextEditVisual__GetClampedTextBoundsSize, 0, false, ::app::Uno::Float2__typeof(), ::app::Fuse::Controls::Internal::WordWrapInfo__typeof()),
        ::uNewFunction("GetFontOrThrow", TextEditVisual__GetFontOrThrow, 0, false, ::app::Fuse::Font__typeof()),
        ::uNewFunction("GetTextBoundsSize", TextEditVisual__GetTextBoundsSize, 0, false, ::app::Uno::Float2__typeof(), ::app::Fuse::Controls::Internal::WordWrapInfo__typeof()),
        ::uNewFunctionVoid("HandleLeftArrow", TextEditVisual__HandleLeftArrow, 0, false, ::app::Fuse::Input::KeyPressedArgs__typeof()),
        ::uNewFunctionVoid("HandleRightArrow", TextEditVisual__HandleRightArrow, 0, false, ::app::Fuse::Input::KeyPressedArgs__typeof()),
        ::uNewFunctionVoid("InvalidateLineCacheLayout", TextEditVisual__InvalidateLineCacheLayout, 0, false),
        ::uNewFunctionVoid("MoveSelection", TextEditVisual__MoveSelection, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction(".ctor", TextEditVisual__New_1, 0, true, TextEditVisual__typeof()),
        ::uNewFunctionVoid("OnGotFocus", TextEditVisual__OnGotFocus, 0, false, ::uObject__typeof(), ::app::Fuse::Input::FocusGainedArgs__typeof()),
        ::uNewFunctionVoid("OnKeyPressed", TextEditVisual__OnKeyPressed, 0, false, ::uObject__typeof(), ::app::Fuse::Input::KeyPressedArgs__typeof()),
        ::uNewFunctionVoid("OnLostCapture", TextEditVisual__OnLostCapture, 0, false),
        ::uNewFunctionVoid("OnLostFocus", TextEditVisual__OnLostFocus, 0, false, ::uObject__typeof(), ::app::Fuse::Input::FocusLostArgs__typeof()),
        ::uNewFunctionVoid("OnPointerMoved", TextEditVisual__OnPointerMoved, 0, false, ::uObject__typeof(), ::app::Fuse::Input::PointerMovedArgs__typeof()),
        ::uNewFunctionVoid("OnPointerPressed", TextEditVisual__OnPointerPressed, 0, false, ::uObject__typeof(), ::app::Fuse::Input::PointerPressedArgs__typeof()),
        ::uNewFunctionVoid("OnPointerReleased", TextEditVisual__OnPointerReleased, 0, false, ::uObject__typeof(), ::app::Fuse::Input::PointerReleasedArgs__typeof()),
        ::uNewFunctionVoid("OnTextEdited", TextEditVisual__OnTextEdited, 0, false),
        ::uNewFunctionVoid("OnTextEntered", TextEditVisual__OnTextEntered, 0, false, ::uObject__typeof(), ::app::Fuse::Input::TextEnteredArgs__typeof()),
        ::uNewFunctionVoid("OnTextLayoutPropertyChanged", TextEditVisual__OnTextLayoutPropertyChanged, 0, false, ::uObject__typeof(), ::app::Uno::EventArgs__typeof()),
        ::uNewFunctionVoid("OnTextRenderPropertyChanged", TextEditVisual__OnTextRenderPropertyChanged, 0, false, ::uObject__typeof(), ::app::Uno::EventArgs__typeof()),
        ::uNewFunctionVoid("OnUpdate", TextEditVisual__OnUpdate, 0, false, ::uObject__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("OnValueChanged", TextEditVisual__OnValueChanged, 0, false, ::uObject__typeof(), ::app::Uno::UX::ValueChangedArgs__string__typeof()),
        ::uNewFunctionVoid("ResetCaretBlink", TextEditVisual__ResetCaretBlink, 0, false),
        ::uNewFunctionVoid("ResetWindowPosition", TextEditVisual__ResetWindowPosition, 0, false),
        ::uNewFunctionVoid("Select", TextEditVisual__Select, 0, false, ::app::Fuse::Controls::TextEdit::TextPosition__typeof(), ::app::Fuse::Controls::TextEdit::TextPosition__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("SelectAll", TextEditVisual__SelectAll, 0, false),
        ::uNewFunctionVoid("SelectFunc", TextEditVisual__SelectFunc, 0, false, ::app::Fuse::Controls::TextEdit::TextPosition__typeof(), ::app::Fuse::Controls::TextEdit::TextPosition__typeof()),
        ::uNewFunctionVoid("set_VisualTextTransform", TextEditVisual__set_VisualTextTransform, 0, false, ::app::Fuse::Controls::TextEdit::VisualTextTransform__typeof()),
        ::uNewFunctionVoid("SetCaretPos", TextEditVisual__SetCaretPos, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("SetWindowPos", TextEditVisual__SetWindowPos, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("StartSelection", TextEditVisual__StartSelection, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("TextBoundsToControl", TextEditVisual__TextBoundsToControl, 0, false, ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction("TextBoundsToWindow", TextEditVisual__TextBoundsToWindow, 0, false, ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("TransformUpdate", TextEditVisual__TransformUpdate, 0, false, ::uObject__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("UpdateValue", TextEditVisual__UpdateValue, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("WindowToControl", TextEditVisual__WindowToControl, 0, false, ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction("WindowToTextBounds", TextEditVisual__WindowToTextBounds, 0, false, ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof()));

    ::uRegisterType(type);
    return type;
}

void TextEditVisual___ObjInit_3(TextEditVisual* __this)
{
    __this->RevealTime = 2.0;
    __this->_caretBrush = ::app::Fuse::Drawing::SolidColor__New_1(NULL);
    __this->_caretPosition = ::app::Fuse::Controls::TextEdit::TextPosition__Default;
    __this->_startCoord = ::app::Uno::Float2__New_1(NULL, 0.0f);
    __this->_down = -1;
    ::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_TextInput___ObjInit_2(__this);
    __this->_lineCache = ::app::Fuse::Controls::TextEdit::LineCache__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)TextEditVisual__OnTextEdited, __this), ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)TextEditVisual__InvalidateLineCacheLayout, __this));
    __this->_textWindow = ::app::Fuse::Controls::TextEdit::TextWindow__New_1(NULL, (::app::Fuse::Node*)__this, __this->_lineCache);
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)TextEditVisual__OnGotFocus, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)TextEditVisual__OnLostFocus, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs*>(::app::Fuse::Input::TextService__get_TextEntered(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::TextEnteredHandler__typeof(), (const void*)TextEditVisual__OnTextEntered, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*>(::app::Fuse::Input::Pointer__get_Pressed(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerPressedHandler__typeof(), (const void*)TextEditVisual__OnPointerPressed, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs*>(::app::Fuse::Input::Pointer__get_Moved(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerMovedHandler__typeof(), (const void*)TextEditVisual__OnPointerMoved, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*>(::app::Fuse::Input::Pointer__get_Released(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerReleasedHandler__typeof(), (const void*)TextEditVisual__OnPointerReleased, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs*>(::app::Fuse::Input::Keyboard__get_KeyPressed(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::KeyPressedHandler__typeof(), (const void*)TextEditVisual__OnKeyPressed, __this));
    ::app::Fuse::Input::Focus__SetIsFocusable(NULL, (::app::Fuse::Node*)__this, true);
}

void TextEditVisual___TypeInit_1(::uStatic* __this)
{
    ::uArray* array_126;
    ::uArray* array_127;
    TextEditVisual___horizontalGesture = ::app::Fuse::Controls::TextEdit::TextEditVisual_SwipeGestureHelper__New_1(NULL, 15.0f, (array_126 = ::uNewArray(::app::Fuse::Controls::TextEdit::TextEditVisual_DegreeSpan__typeof(), 2), ::uPtr< ::uArray*>(array_126)->ItemStrong< ::app::Fuse::Controls::TextEdit::TextEditVisual_DegreeSpan*>(0) = ::app::Fuse::Controls::TextEdit::TextEditVisual_DegreeSpan__New_1(NULL, 45.0f, 135.0f), ::uPtr< ::uArray*>(array_126)->ItemStrong< ::app::Fuse::Controls::TextEdit::TextEditVisual_DegreeSpan*>(1) = ::app::Fuse::Controls::TextEdit::TextEditVisual_DegreeSpan__New_1(NULL, -45.0f, -135.0f), array_126));
    TextEditVisual___verticalGesture = ::app::Fuse::Controls::TextEdit::TextEditVisual_SwipeGestureHelper__New_1(NULL, 15.0f, (array_127 = ::uNewArray(::app::Fuse::Controls::TextEdit::TextEditVisual_DegreeSpan__typeof(), 3), ::uPtr< ::uArray*>(array_127)->ItemStrong< ::app::Fuse::Controls::TextEdit::TextEditVisual_DegreeSpan*>(0) = ::app::Fuse::Controls::TextEdit::TextEditVisual_DegreeSpan__New_1(NULL, -45.0f, 45.0f), ::uPtr< ::uArray*>(array_127)->ItemStrong< ::app::Fuse::Controls::TextEdit::TextEditVisual_DegreeSpan*>(1) = ::app::Fuse::Controls::TextEdit::TextEditVisual_DegreeSpan__New_1(NULL, -135.0f, -180.0f), ::uPtr< ::uArray*>(array_127)->ItemStrong< ::app::Fuse::Controls::TextEdit::TextEditVisual_DegreeSpan*>(2) = ::app::Fuse::Controls::TextEdit::TextEditVisual_DegreeSpan__New_1(NULL, 135.0f, 180.0f), array_127));
}

void TextEditVisual__Attach(TextEditVisual* __this)
{
    ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->add_TextLayoutPropertyChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)TextEditVisual__OnTextLayoutPropertyChanged, __this));
    ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->add_TextRenderPropertyChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)TextEditVisual__OnTextRenderPropertyChanged, __this));
    ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__string__typeof(), (const void*)TextEditVisual__OnValueChanged, __this));
    __this->OnTextLayoutPropertyChanged(NULL, NULL);
    __this->OnTextRenderPropertyChanged(NULL, NULL);
    __this->UpdateValue(::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->Value());
    ::uPtr< ::app::Fuse::Drawing::SolidColor*>(__this->_caretBrush)->Pin();
}

void TextEditVisual__BringCaretIntoView(TextEditVisual* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, float textBoundsWidth)
{
    ::app::Uno::Rect windowRect = ::app::Uno::Rect__New_2(NULL, __this->_windowPos, __this->ActualSize());
    ::app::Uno::Rect caretRect = __this->GetCaretRect(wrapInfo, textBoundsWidth);
    ::app::Uno::Rect textRect = __this->GetClampedTextBoundsRect(wrapInfo);
    ::app::Uno::Rect caretVisibleRect = ::app::Fuse::Internal::RectExtensions__MoveRectToContainRect(NULL, windowRect, caretRect);
    ::app::Uno::Rect clampedRect = ::app::Fuse::Internal::RectExtensions__MoveRectInsideRect(NULL, caretVisibleRect, textRect);
    __this->SetWindowPos(clampedRect.Position());
}

void TextEditVisual__ClearPasswordReveal(TextEditVisual* __this)
{
    if (__this->_passwordTransform != NULL)
    {
        if (::uPtr< ::app::Fuse::Controls::TextEdit::LineCachePasswordTransform*>(__this->_passwordTransform)->SetReveal(-1))
        {
            ::uPtr< ::app::Fuse::Controls::TextEdit::LineCache*>(__this->_lineCache)->InvalidateVisual();
        }
    }
}

::app::Uno::Float2 TextEditVisual__ControlToTextBounds(TextEditVisual* __this, ::app::Uno::Float2 p)
{
    return __this->WindowToTextBounds(__this->ControlToWindow(p));
}

::app::Uno::Float2 TextEditVisual__ControlToWindow(TextEditVisual* __this, ::app::Uno::Float2 p)
{
    return p;
}

::app::Fuse::Controls::Internal::WordWrapInfo* TextEditVisual__CreateWrapInfo(TextEditVisual* __this, float wrapWidth, bool haveWidth)
{
    ::app::Fuse::Controls::Internal::DefaultTextRenderer* renderer = ::app::Fuse::Controls::Graphics::DefaultTextVisual__GetTextRenderer(NULL, __this->GetFontOrThrow());
    float fontSize = ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->FontSize();
    return ::app::Fuse::Controls::Internal::WordWrapInfo__New_1(NULL, renderer, haveWidth && __this->IsWordWrapEnabled(), wrapWidth, fontSize, ::uPtr< ::app::Fuse::Controls::Internal::DefaultTextRenderer*>(renderer)->GetLineHeight(fontSize), ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->LineSpacing(), __this->AbsoluteZoom());
}

void TextEditVisual__DeleteSelection(TextEditVisual* __this)
{
    if (::app::Fuse::Controls::TextEdit::TextSpan__op_Equality(NULL, __this->_selection, NULL))
    {
        return;
    }

    __this->_caretPosition = ::uPtr< ::app::Fuse::Controls::TextEdit::LineCache*>(__this->_lineCache)->DeleteSpan(__this->_selection);
    __this->_selection = NULL;
    __this->_interactionSelectionStartPos = NULL;
}

void TextEditVisual__Detach(TextEditVisual* __this)
{
    ::uPtr< ::app::Fuse::Drawing::SolidColor*>(__this->_caretBrush)->Unpin();
    ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->remove_TextLayoutPropertyChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)TextEditVisual__OnTextLayoutPropertyChanged, __this));
    ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->remove_TextRenderPropertyChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)TextEditVisual__OnTextRenderPropertyChanged, __this));
    ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__string__typeof(), (const void*)TextEditVisual__OnValueChanged, __this));
}

void TextEditVisual__DrawCaret(TextEditVisual* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, float textBoundsWidth, ::app::Fuse::DrawContext* dc)
{
    ::app::Uno::Float4 ind_128 = ::app::Uno::Float4();
    ::app::Uno::Rect caretRect = __this->GetCaretRect(wrapInfo, textBoundsWidth);
    ::app::Uno::Float2 pos = __this->TextBoundsToControl(caretRect.Position());
    float blink = (::app::Uno::Math__Cos_1(NULL, ((float)(::app::Fuse::Time__get_FrameTime(NULL) - __this->_caretBlinkTime) * 2.0f) * 3.14159274f) * 0.5f) + 0.5f;
    blink = 1.0f - ::app::Uno::Math__Pow_1(NULL, 1.0f - blink, 4.3f);
    ::app::Uno::Float2 caretSize = ::app::Uno::Float2__New_2(NULL, 1.0f, caretRect.Size().Y);
    ::uPtr< ::app::Fuse::Drawing::SolidColor*>(__this->_caretBrush)->Color(::app::Uno::Float4__New_8(NULL, (ind_128 = ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->CaretColor(), ::app::Uno::Float3__New_2(NULL, ind_128.X, ind_128.Y, ind_128.Z)), ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->CaretColor().W * blink));
    ::uPtr< ::app::Fuse::Drawing::SolidColor*>(__this->_caretBrush)->Prepare(dc, caretSize);
    ::uPtr< ::app::Fuse::Drawing::Primitives::Rectangle*>(::app::Fuse::Drawing::Primitives::Rectangle__Singleton)->Fill(dc, (::app::Fuse::Node*)__this, caretSize, ::app::Uno::Float4__New_1(NULL, 0.0f), (::app::Fuse::Drawing::Brush*)__this->_caretBrush, pos, 1.0f);
}

bool TextEditVisual__get_IsWordWrapEnabled(TextEditVisual* __this)
{
    return ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->TextWrapping() == 1;
}

::uString* TextEditVisual__get_SelectedText(TextEditVisual* __this)
{
    return ::app::Fuse::Controls::TextEdit::TextSpan__op_Inequality(NULL, __this->_selection, NULL) ? ::uPtr< ::app::Fuse::Controls::TextEdit::LineCache*>(__this->_lineCache)->GetString(__this->_selection) : ::uGetConstString("");
}

int TextEditVisual__get_SubNodeCount(TextEditVisual* __this)
{
    return 1 + ::app::Fuse::Node__get_SubNodeCount(__this);
}

int TextEditVisual__get_VisualTextTransform(TextEditVisual* __this)
{
    return __this->_visualTextTransform;
}

::app::Uno::Rect TextEditVisual__GetCaretRect(TextEditVisual* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, float textBoundsWidth)
{
    ::app::Uno::Float2 pos = ::uPtr< ::app::Fuse::Controls::TextEdit::LineCache*>(__this->_lineCache)->TextPosToBounds(wrapInfo, ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->TextAlignment(), textBoundsWidth, __this->_caretPosition);
    float width = 2.0f;
    return ::app::Uno::Rect__New_2(NULL, pos, ::app::Uno::Float2__New_2(NULL, width, ::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(wrapInfo)->LineHeight));
}

::app::Uno::Rect TextEditVisual__GetClampedTextBoundsRect(TextEditVisual* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo)
{
    return ::app::Uno::Rect__New_2(NULL, ::app::Uno::Float2__New_1(NULL, 0.0f), __this->GetClampedTextBoundsSize(wrapInfo));
}

::app::Uno::Float2 TextEditVisual__GetClampedTextBoundsSize(TextEditVisual* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo)
{
    return ::app::Uno::Math__Max_3(NULL, __this->GetTextBoundsSize(wrapInfo), __this->ActualSize());
}

::app::Fuse::Font* TextEditVisual__GetFontOrThrow(TextEditVisual* __this)
{
    if (::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->Font() == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Font property was not set. Did you provide a custom style with no font?")));
    }

    return ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->Font();
}

::app::Uno::Float2 TextEditVisual__GetMarginSize(TextEditVisual* __this, ::app::Uno::Float2 fillSize, int fillSet)
{
    if (::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->Font() == NULL)
    {
        return ::app::Uno::Float2__New_1(NULL, 0.0f);
    }

    float wrapWidth = ::app::Uno::Math__Max_1(NULL, fillSize.X, 0.0f);
    __this->_wrapInfo = __this->CreateWrapInfo(wrapWidth, (fillSet & 1) == 1);
    ::app::Uno::Float2 r = ::app::Uno::Float2__op_Addition_1(NULL, ::app::Uno::Math__Ceil_2(NULL, __this->GetTextBoundsSize(__this->_wrapInfo)), 1.0f);

    if ((fillSet & 1) == 1)
    {
        r.X = ::app::Uno::Math__Min_1(NULL, r.X, fillSize.X);
    }

    return r;
}

::app::Fuse::Node* TextEditVisual__GetSubNode(TextEditVisual* __this, int index)
{
    int sc = ::app::Fuse::Node__get_SubNodeCount(__this);

    if (index < sc)
    {
        return ::app::Fuse::Node__GetSubNode(__this, index);
    }

    return (::app::Fuse::Node*)__this->_textWindow;
}

::app::Uno::Float2 TextEditVisual__GetTextBoundsSize(TextEditVisual* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo)
{
    return ::uPtr< ::app::Fuse::Controls::TextEdit::LineCache*>(__this->_lineCache)->GetBoundsSize(wrapInfo);
}

void TextEditVisual__HandleLeftArrow(TextEditVisual* __this, ::app::Fuse::Input::KeyPressedArgs* args)
{
    if (::uPtr< ::app::Fuse::Input::KeyPressedArgs*>(args)->IsMetaKeyPressed())
    {
        ::app::Fuse::Controls::TextEdit::TextPosition* oldCaretPosition = __this->_caretPosition;
        __this->_caretPosition = ::uPtr< ::app::Fuse::Controls::TextEdit::LineCache*>(__this->_lineCache)->TryMoveOneWordLeft(__this->_caretPosition);
        __this->Select(oldCaretPosition, __this->_caretPosition, ::uPtr< ::app::Fuse::Input::KeyPressedArgs*>(args)->IsShiftKeyPressed());
    }
    else
    {
        if (::uPtr< ::app::Fuse::Input::KeyPressedArgs*>(args)->IsShiftKeyPressed())
        {
            ::app::Fuse::Controls::TextEdit::TextPosition* oldCaretPosition = __this->_caretPosition;
            __this->_caretPosition = ::uPtr< ::app::Fuse::Controls::TextEdit::LineCache*>(__this->_lineCache)->TryMoveLeft(__this->_caretPosition);
            __this->SelectFunc(oldCaretPosition, __this->_caretPosition);
        }
        else
        {
            if (::app::Fuse::Controls::TextEdit::TextSpan__op_Inequality(NULL, __this->_selection, NULL))
            {
                __this->_caretPosition = ::uPtr< ::app::Fuse::Controls::TextEdit::TextSpan*>(__this->_selection)->Start;
                __this->_selection = NULL;
            }
            else
            {
                __this->_selection = NULL;
                __this->_caretPosition = ::uPtr< ::app::Fuse::Controls::TextEdit::LineCache*>(__this->_lineCache)->TryMoveLeft(__this->_caretPosition);
            }
        }
    }
}

void TextEditVisual__HandleRightArrow(TextEditVisual* __this, ::app::Fuse::Input::KeyPressedArgs* args)
{
    if (::uPtr< ::app::Fuse::Input::KeyPressedArgs*>(args)->IsMetaKeyPressed())
    {
        ::app::Fuse::Controls::TextEdit::TextPosition* oldCaretPosition = __this->_caretPosition;
        __this->_caretPosition = ::uPtr< ::app::Fuse::Controls::TextEdit::LineCache*>(__this->_lineCache)->TryMoveOneWordRight(__this->_caretPosition);
        __this->Select(oldCaretPosition, __this->_caretPosition, ::uPtr< ::app::Fuse::Input::KeyPressedArgs*>(args)->IsShiftKeyPressed());
    }
    else
    {
        if (::uPtr< ::app::Fuse::Input::KeyPressedArgs*>(args)->IsShiftKeyPressed())
        {
            ::app::Fuse::Controls::TextEdit::TextPosition* oldCaretPosition = __this->_caretPosition;
            __this->_caretPosition = ::uPtr< ::app::Fuse::Controls::TextEdit::LineCache*>(__this->_lineCache)->TryMoveRight(__this->_caretPosition);
            __this->SelectFunc(oldCaretPosition, __this->_caretPosition);
        }
        else
        {
            if (::app::Fuse::Controls::TextEdit::TextSpan__op_Inequality(NULL, __this->_selection, NULL))
            {
                __this->_caretPosition = ::uPtr< ::app::Fuse::Controls::TextEdit::TextSpan*>(__this->_selection)->End;
                __this->_selection = NULL;
            }
            else
            {
                __this->_selection = NULL;
                __this->_caretPosition = ::uPtr< ::app::Fuse::Controls::TextEdit::LineCache*>(__this->_lineCache)->TryMoveRight(__this->_caretPosition);
            }
        }
    }
}

void TextEditVisual__InvalidateLineCacheLayout(TextEditVisual* __this)
{
    __this->InvalidateLayout(2);
}

void TextEditVisual__MoveSelection(TextEditVisual* __this, ::app::Uno::Float2 windowPoint)
{
    __this->SetCaretPos(__this->WindowToLocal(windowPoint));

    if (::app::Fuse::Controls::TextEdit::TextPosition__op_Equality(NULL, __this->_interactionSelectionStartPos, NULL))
    {
        __this->_interactionSelectionStartPos = __this->_caretPosition;
    }

    __this->_selection = ::app::Fuse::Controls::TextEdit::TextPosition__op_Inequality(NULL, __this->_interactionSelectionStartPos, __this->_caretPosition) ? ::app::Fuse::Controls::TextEdit::TextSpan__New_1(NULL, __this->_interactionSelectionStartPos, __this->_caretPosition) : NULL;
}

TextEditVisual* TextEditVisual__New_1(::uStatic* __this)
{
    TextEditVisual* inst = (TextEditVisual*)::uAllocObject(sizeof(TextEditVisual), TextEditVisual__typeof());
    inst->_ObjInit_3();
    return inst;
}

::app::Uno::Float2 TextEditVisual__OnArrangeMarginBox(TextEditVisual* __this, ::app::Uno::Float2 position, ::app::Uno::Float2 availableSize, int availSet)
{
    ::app::Uno::Float2 sz = ::app::Fuse::Controls::Graphics::Visual__OnArrangeMarginBox(__this, position, availableSize, availSet);
    ::uPtr< ::app::Fuse::Controls::TextEdit::TextWindow*>(__this->_textWindow)->ArrangeMarginBox(::app::Uno::Float2__New_1(NULL, 0.0f), sz, 3);
    return sz;
}

void TextEditVisual__OnDraw(TextEditVisual* __this, ::app::Fuse::DrawContext* dc)
{
    __this->GetFontOrThrow();

    if (__this->_wrapInfo == NULL)
    {
        __this->_wrapInfo = __this->CreateWrapInfo(__this->ActualSize().X, true);
    }

    ::app::Uno::Float2 textBoundsSize = __this->GetClampedTextBoundsSize(__this->_wrapInfo);
    float textBoundsWidth = textBoundsSize.X;
    __this->BringCaretIntoView(__this->_wrapInfo, textBoundsWidth);

    if (!::app::Uno::String__IsNullOrEmpty(NULL, ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->Value()))
    {
        ::uPtr< ::app::Fuse::Controls::TextEdit::TextWindow*>(__this->_textWindow)->Draw_1(__this->_wrapInfo, __this->_selection, ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->TextColor(), ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->SelectionColor(), ::uPtr< ::uString*>(::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->Value())->Length(), ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->TextAlignment(), textBoundsSize, ::app::Uno::Float2__op_UnaryNegation(NULL, __this->_windowPos), dc);
    }

    if (::app::Fuse::Input::Focus__IsWithin(NULL, (::app::Fuse::Node*)__this))
    {
        __this->DrawCaret(__this->_wrapInfo, textBoundsWidth, dc);
        __this->InvalidateVisual();
    }
}

void TextEditVisual__OnGotFocus(TextEditVisual* __this, ::uObject* sender, ::app::Fuse::Input::FocusGainedArgs* args)
{
    __this->InvalidateLayout(2);
    __this->InvalidateVisual();
    __this->_selection = NULL;
    __this->add_Update(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)TextEditVisual__OnUpdate, __this));
}

void TextEditVisual__OnHitTest(TextEditVisual* __this, ::app::Fuse::HitTestContext* htc)
{
    if (__this->IsPointInside(::uPtr< ::app::Fuse::HitTestContext*>(htc)->LocalPoint()))
    {
        ::uPtr< ::app::Fuse::HitTestContext*>(htc)->Hit((::app::Fuse::Node*)__this);
    }

    ::app::Fuse::Node__OnHitTest(__this, htc);
}

void TextEditVisual__OnKeyPressed(TextEditVisual* __this, ::uObject* sender, ::app::Fuse::Input::KeyPressedArgs* args)
{
    bool recognizedKey = false;
    float wrapWidth = __this->ActualSize().X;
    ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo = __this->CreateWrapInfo(wrapWidth, true);
    float textBoundsWidth = __this->GetClampedTextBoundsSize(wrapInfo).X;
    __this->ClearPasswordReveal();

    if (!::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->IsReadOnly())
    {
        switch (::uPtr< ::app::Fuse::Input::KeyPressedArgs*>(args)->Key())
        {
            case 13:
            {
                if (::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->IsMultiline())
                {
                    __this->DeleteSelection();
                    __this->_caretPosition = ::uPtr< ::app::Fuse::Controls::TextEdit::LineCache*>(__this->_lineCache)->InsertNewline(__this->_caretPosition);
                }
                else if (::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(::app::Uno::Application__get_Current(NULL))->Window())->IsTextInputActive())
                {
                    ::app::Fuse::Input::Focus__Move(NULL, 1);
                }

                recognizedKey = true;
                break;
            }
            case 46:
            {
                if (::app::Fuse::Controls::TextEdit::TextSpan__op_Equality(NULL, __this->_selection, NULL))
                {
                    __this->_caretPosition = ::uPtr< ::app::Fuse::Controls::TextEdit::LineCache*>(__this->_lineCache)->TryDelete(__this->_caretPosition);
                }
                else
                {
                    __this->DeleteSelection();
                }

                recognizedKey = true;
                break;
            }
            case 8:
            {
                if (::app::Fuse::Controls::TextEdit::TextSpan__op_Equality(NULL, __this->_selection, NULL))
                {
                    __this->_caretPosition = ::uPtr< ::app::Fuse::Controls::TextEdit::LineCache*>(__this->_lineCache)->TryBackspace(__this->_caretPosition);
                }
                else
                {
                    __this->DeleteSelection();
                }

                recognizedKey = true;
                break;
            }
            default:
            {
                break;
            }
        }
    }

    switch (::uPtr< ::app::Fuse::Input::KeyPressedArgs*>(args)->Key())
    {
        case 65:
        {
            if (!::uPtr< ::app::Fuse::Input::KeyPressedArgs*>(args)->IsMetaKeyPressed())
            {
                break;
            }

            __this->SelectAll();
            recognizedKey = true;
            break;
        }
        case 37:
        {
            __this->HandleLeftArrow(args);
            recognizedKey = true;
            break;
        }
        case 39:
        {
            __this->HandleRightArrow(args);
            recognizedKey = true;
            break;
        }
        case 38:
        {
            ::app::Fuse::Controls::TextEdit::TextPosition* oldCaretPos = __this->_caretPosition;
            __this->_caretPosition = ::uPtr< ::app::Fuse::Controls::TextEdit::LineCache*>(__this->_lineCache)->TryMoveUp(wrapInfo, ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->TextAlignment(), textBoundsWidth, __this->_caretPosition);

            if (::uPtr< ::app::Fuse::Input::KeyPressedArgs*>(args)->IsShiftKeyPressed() && (::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(__this->_caretPosition)->Line == ::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(oldCaretPos)->Line))
            {
                __this->_caretPosition = ::uPtr< ::app::Fuse::Controls::TextEdit::LineCache*>(__this->_lineCache)->Home(wrapInfo, oldCaretPos);
            }

            __this->Select(oldCaretPos, __this->_caretPosition, ::uPtr< ::app::Fuse::Input::KeyPressedArgs*>(args)->IsShiftKeyPressed());
            recognizedKey = true;
            break;
        }
        case 40:
        {
            ::app::Fuse::Controls::TextEdit::TextPosition* oldCaretPos = __this->_caretPosition;
            __this->_caretPosition = ::uPtr< ::app::Fuse::Controls::TextEdit::LineCache*>(__this->_lineCache)->TryMoveDown(wrapInfo, ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->TextAlignment(), textBoundsWidth, __this->_caretPosition);

            if (::uPtr< ::app::Fuse::Input::KeyPressedArgs*>(args)->IsShiftKeyPressed() && (::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(__this->_caretPosition)->Line == ::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(oldCaretPos)->Line))
            {
                __this->_caretPosition = ::uPtr< ::app::Fuse::Controls::TextEdit::LineCache*>(__this->_lineCache)->End(wrapInfo, oldCaretPos);
            }

            __this->Select(oldCaretPos, __this->_caretPosition, ::uPtr< ::app::Fuse::Input::KeyPressedArgs*>(args)->IsShiftKeyPressed());
            recognizedKey = true;
            break;
        }
        case 36:
        {
            ::app::Fuse::Controls::TextEdit::TextPosition* oldCaretPos = __this->_caretPosition;
            __this->_caretPosition = ::uPtr< ::app::Fuse::Controls::TextEdit::LineCache*>(__this->_lineCache)->Home(wrapInfo, __this->_caretPosition);
            __this->Select(oldCaretPos, __this->_caretPosition, ::uPtr< ::app::Fuse::Input::KeyPressedArgs*>(args)->IsShiftKeyPressed());
            recognizedKey = true;
            break;
        }
        case 35:
        {
            ::app::Fuse::Controls::TextEdit::TextPosition* oldCaretPos = __this->_caretPosition;
            __this->_caretPosition = ::uPtr< ::app::Fuse::Controls::TextEdit::LineCache*>(__this->_lineCache)->End(wrapInfo, __this->_caretPosition);
            __this->Select(oldCaretPos, __this->_caretPosition, ::uPtr< ::app::Fuse::Input::KeyPressedArgs*>(args)->IsShiftKeyPressed());
            recognizedKey = true;
            break;
        }
        default:
        {
            break;
        }
    }

    if (recognizedKey)
    {
        __this->ResetCaretBlink();
        ::uPtr< ::app::Fuse::Input::KeyPressedArgs*>(args)->IsHandled(true);
    }
}

void TextEditVisual__OnLostCapture(TextEditVisual* __this)
{
    ::app::Fuse::Input::Focus__ReleaseFrom(NULL, (::app::Fuse::Node*)__this);
    __this->_selection = NULL;
    __this->_down = -1;
}

void TextEditVisual__OnLostFocus(TextEditVisual* __this, ::uObject* sender, ::app::Fuse::Input::FocusLostArgs* args)
{
    __this->remove_Update(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)TextEditVisual__OnUpdate, __this));
    __this->ResetWindowPosition();
    __this->InvalidateVisual();
    __this->InvalidateLayout(2);
    __this->_selection = NULL;
}

void TextEditVisual__OnPointerMoved(TextEditVisual* __this, ::uObject* sender, ::app::Fuse::Input::PointerMovedArgs* c)
{
    if (__this->_down != ::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(c)->PointIndex())
    {
        return;
    }

    __this->MoveSelection(::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(c)->WindowPoint());

    if (c->IsHardCapturedTo((::uObject*)__this))
    {
        ::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(c)->IsHandled(true);
    }
    else if (c->IsSoftCapturedTo((::uObject*)__this))
    {
        ::app::Uno::Float2 diff = ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(c)->WindowPoint(), __this->_startCoord);
        bool withinBounds = ::uPtr< ::app::Fuse::Controls::TextEdit::TextEditVisual_SwipeGestureHelper*>(TextEditVisual___horizontalGesture)->IsWithinBounds(diff);

        if (withinBounds)
        {
            ::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(c)->TryHardCapture((::uObject*)__this, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)TextEditVisual__OnLostCapture, __this), NULL);
            ::app::Fuse::Input::Focus__GiveTo(NULL, (::app::Fuse::Node*)__this);
        }
    }
}

void TextEditVisual__OnPointerPressed(TextEditVisual* __this, ::uObject* sender, ::app::Fuse::Input::PointerPressedArgs* c)
{
    if (__this->_down == -1)
    {
        __this->_startCoord = ::uPtr< ::app::Fuse::Input::PointerPressedArgs*>(c)->WindowPoint();
        __this->_down = c->PointIndex();

        if (::app::Fuse::Input::Focus__IsWithin(NULL, (::app::Fuse::Node*)__this))
        {
            ::uPtr< ::app::Fuse::Input::PointerPressedArgs*>(c)->TryHardCapture((::uObject*)__this, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)TextEditVisual__OnLostCapture, __this), NULL);
        }
        else
        {
            ::uPtr< ::app::Fuse::Input::PointerPressedArgs*>(c)->TrySoftCapture((::uObject*)__this, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)TextEditVisual__OnLostCapture, __this), NULL);
        }

        __this->StartSelection(c->WindowPoint());
    }
}

void TextEditVisual__OnPointerReleased(TextEditVisual* __this, ::uObject* sender, ::app::Fuse::Input::PointerReleasedArgs* c)
{
    if (__this->_down != ::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(c)->PointIndex())
    {
        return;
    }

    if (::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(c)->IsHardCapturedTo((::uObject*)__this))
    {
        ::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(c)->ReleaseHardCapture((::uObject*)__this);
        c->IsHandled(true);
    }

    if (::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(c)->IsSoftCapturedTo((::uObject*)__this))
    {
        ::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(c)->ReleaseSoftCapture((::uObject*)__this);
    }

    __this->_down = -1;
}

void TextEditVisual__OnTextEdited(TextEditVisual* __this)
{
    ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->SetValue(::uPtr< ::app::Fuse::Controls::TextEdit::LineCache*>(__this->_lineCache)->Text(), (::uObject*)__this);
}

void TextEditVisual__OnTextEntered(TextEditVisual* __this, ::uObject* sender, ::app::Fuse::Input::TextEnteredArgs* args)
{
    ::uString* array_123;
    int index_124 = int();
    int length_125 = int();
    __this->DeleteSelection();

    for (array_123 = ::uPtr< ::app::Fuse::Input::TextEnteredArgs*>(args)->Text(), index_124 = 0, length_125 = ::uPtr< ::uString*>(array_123)->Length(); index_124 < length_125; ++index_124)
    {
        ::uChar character = ::uPtr< ::uString*>(array_123)->Item(index_124);

        if (((character == 10) || (character == 13)) || ((int)character < 32))
        {
            continue;
        }

        __this->_caretPosition = ::uPtr< ::app::Fuse::Controls::TextEdit::LineCache*>(__this->_lineCache)->InsertChar(__this->_caretPosition, character);

        if (__this->_passwordTransform != NULL)
        {
            ::uPtr< ::app::Fuse::Controls::TextEdit::LineCachePasswordTransform*>(__this->_passwordTransform)->SetReveal(::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(__this->_caretPosition)->Char - 1);
            __this->_revealEnd = ::app::Fuse::Time__get_FrameTime(NULL) + __this->RevealTime;
        }

        float wrapWidth = __this->ActualSize().X;
        ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo = __this->CreateWrapInfo(wrapWidth, true);
        float textBoundsWidth = __this->GetClampedTextBoundsSize(wrapInfo).X;
        __this->BringCaretIntoView(wrapInfo, textBoundsWidth);
        __this->ResetCaretBlink();
        ::uPtr< ::app::Fuse::Input::TextEnteredArgs*>(args)->IsHandled(true);
    }
}

void TextEditVisual__OnTextLayoutPropertyChanged(TextEditVisual* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    if (::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->IsPassword())
    {
        __this->VisualTextTransform(1);
    }
    else
    {
        __this->VisualTextTransform(0);
    }

    ::uPtr< ::app::Fuse::Controls::TextEdit::LineCache*>(__this->_lineCache)->IsMultiline(::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->IsMultiline());

    if (::app::Fuse::Input::Focus__IsWithin(NULL, (::app::Fuse::Node*)__this))
    {
    }

    __this->InvalidateLayout(2);
}

void TextEditVisual__OnTextRenderPropertyChanged(TextEditVisual* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    if (::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->IsReadOnly() != __this->_isReadOnly)
    {
        if (!__this->_isReadOnly)
        {
            ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs*>(::app::Fuse::Input::TextService__get_TextEntered(NULL))->RemoveHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::TextEnteredHandler__typeof(), (const void*)TextEditVisual__OnTextEntered, __this));
        }

        __this->_isReadOnly = ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->IsReadOnly();

        if (!__this->_isReadOnly)
        {
            ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs*>(::app::Fuse::Input::TextService__get_TextEntered(NULL))->AddHandler((::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::TextEnteredHandler__typeof(), (const void*)TextEditVisual__OnTextEntered, __this));
        }
    }

    __this->InvalidateVisual();
    ::uPtr< ::app::Fuse::Controls::TextEdit::TextWindow*>(__this->_textWindow)->InvalidateVisual();
}

void TextEditVisual__OnUpdate(TextEditVisual* __this, ::uObject* s, ::uObject* a)
{
    __this->InvalidateVisual();
}

void TextEditVisual__OnValueChanged(TextEditVisual* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__string* args)
{
    if (sender == __this)
    {
        return;
    }

    __this->UpdateValue(::uPtr< ::app::Uno::UX::ValueChangedArgs__string*>(args)->Value());
}

void TextEditVisual__ResetCaretBlink(TextEditVisual* __this)
{
    __this->_caretBlinkTime = ::app::Fuse::Time__get_FrameTime(NULL);
}

void TextEditVisual__ResetWindowPosition(TextEditVisual* __this)
{
    __this->SetWindowPos(::app::Uno::Float2__New_1(NULL, 0.0f));
}

void TextEditVisual__Select(TextEditVisual* __this, ::app::Fuse::Controls::TextEdit::TextPosition* oldCaretPos, ::app::Fuse::Controls::TextEdit::TextPosition* newCaretPos, bool shouldSelect)
{
    if (shouldSelect)
    {
        __this->SelectFunc(oldCaretPos, newCaretPos);
    }
    else
    {
        __this->_selection = NULL;
    }
}

void TextEditVisual__SelectAll(TextEditVisual* __this)
{
    __this->_selection = ::uPtr< ::app::Fuse::Controls::TextEdit::LineCache*>(__this->_lineCache)->GetFullTextSpan();
    __this->_caretPosition = ::uPtr< ::app::Fuse::Controls::TextEdit::LineCache*>(__this->_lineCache)->GetLastTextPos();
    __this->InvalidateVisual();
}

void TextEditVisual__SelectFunc(TextEditVisual* __this, ::app::Fuse::Controls::TextEdit::TextPosition* oldCaretPos, ::app::Fuse::Controls::TextEdit::TextPosition* newCaretPos)
{
    bool movesLeft = ::app::Fuse::Controls::TextEdit::TextPosition__op_GreaterThan(NULL, oldCaretPos, newCaretPos);

    if (::app::Fuse::Controls::TextEdit::TextSpan__op_Equality(NULL, __this->_selection, NULL))
    {
        if (movesLeft)
        {
            __this->_selection = ::app::Fuse::Controls::TextEdit::TextSpan__New_1(NULL, newCaretPos, oldCaretPos);
        }
        else
        {
            __this->_selection = ::app::Fuse::Controls::TextEdit::TextSpan__New_1(NULL, oldCaretPos, newCaretPos);
        }
    }
    else if (::app::Fuse::Controls::TextEdit::TextPosition__op_GreaterThan(NULL, ::uPtr< ::app::Fuse::Controls::TextEdit::TextSpan*>(__this->_selection)->End, oldCaretPos))
    {
        if (movesLeft)
        {
            __this->_selection = ::app::Fuse::Controls::TextEdit::TextSpan__New_1(NULL, newCaretPos, ::uPtr< ::app::Fuse::Controls::TextEdit::TextSpan*>(__this->_selection)->End);
        }
        else
        {
            __this->_selection = ::app::Fuse::Controls::TextEdit::TextSpan__New_1(NULL, ::uPtr< ::app::Fuse::Controls::TextEdit::TextSpan*>(__this->_selection)->End, newCaretPos);
        }
    }
    else if (::app::Fuse::Controls::TextEdit::TextPosition__op_LessThanOrEqual(NULL, ::uPtr< ::app::Fuse::Controls::TextEdit::TextSpan*>(__this->_selection)->Start, oldCaretPos))
    {
        if (movesLeft)
        {
            __this->_selection = ::app::Fuse::Controls::TextEdit::TextSpan__New_1(NULL, newCaretPos, ::uPtr< ::app::Fuse::Controls::TextEdit::TextSpan*>(__this->_selection)->Start);
        }
        else
        {
            __this->_selection = ::app::Fuse::Controls::TextEdit::TextSpan__New_1(NULL, ::uPtr< ::app::Fuse::Controls::TextEdit::TextSpan*>(__this->_selection)->Start, newCaretPos);
        }
    }
}

void TextEditVisual__set_VisualTextTransform(TextEditVisual* __this, int value)
{
    if (value != __this->_visualTextTransform)
    {
        __this->_visualTextTransform = value;

        if (__this->_passwordTransform != NULL)
        {
            __this->_passwordTransform = NULL;
            __this->remove_Update(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)TextEditVisual__TransformUpdate, __this));
        }

        if (value == 1)
        {
            __this->_passwordTransform = ::app::Fuse::Controls::TextEdit::LineCachePasswordTransform__New_1(NULL);
            ::uPtr< ::app::Fuse::Controls::TextEdit::LineCache*>(__this->_lineCache)->Transform((::uObject*)__this->_passwordTransform);
            __this->add_Update(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)TextEditVisual__TransformUpdate, __this));
        }

        __this->InvalidateVisual();
    }
}

void TextEditVisual__SetCaretPos(TextEditVisual* __this, ::app::Uno::Float2 p)
{
    float wrapWidth = __this->ActualSize().X;
    ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo = __this->CreateWrapInfo(wrapWidth, true);
    float textBoundsWidth = __this->GetClampedTextBoundsSize(wrapInfo).X;
    __this->_caretPosition = ::uPtr< ::app::Fuse::Controls::TextEdit::LineCache*>(__this->_lineCache)->BoundsToTextPos(wrapInfo, ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->TextAlignment(), textBoundsWidth, __this->ControlToTextBounds(p));
    __this->BringCaretIntoView(wrapInfo, textBoundsWidth);
    __this->ResetCaretBlink();
}

void TextEditVisual__SetWindowPos(TextEditVisual* __this, ::app::Uno::Float2 p)
{
    if (::app::Uno::Float2__op_Inequality(NULL, p, __this->_windowPos))
    {
        ::uPtr< ::app::Fuse::Controls::TextEdit::TextWindow*>(__this->_textWindow)->InvalidateVisual();
    }

    __this->_windowPos = p;
}

void TextEditVisual__StartSelection(TextEditVisual* __this, ::app::Uno::Float2 windowPoint)
{
    __this->SetCaretPos(__this->WindowToLocal(windowPoint));
    __this->ResetCaretBlink();
    __this->_selection = NULL;
    __this->_interactionSelectionStartPos = __this->_caretPosition;
    __this->ClearPasswordReveal();
}

::app::Uno::Float2 TextEditVisual__TextBoundsToControl(TextEditVisual* __this, ::app::Uno::Float2 p)
{
    return __this->WindowToControl(__this->TextBoundsToWindow(p));
}

::app::Uno::Float2 TextEditVisual__TextBoundsToWindow(TextEditVisual* __this, ::app::Uno::Float2 p)
{
    return ::app::Uno::Float2__op_Subtraction_2(NULL, p, __this->_windowPos);
}

void TextEditVisual__TransformUpdate(TextEditVisual* __this, ::uObject* s, ::uObject* a)
{
    if ((__this->_passwordTransform == NULL) || (::app::Fuse::Time__get_FrameTime(NULL) < __this->_revealEnd))
    {
        return;
    }

    if (::uPtr< ::app::Fuse::Controls::TextEdit::LineCachePasswordTransform*>(__this->_passwordTransform)->SetReveal(-1))
    {
        ::uPtr< ::app::Fuse::Controls::TextEdit::LineCache*>(__this->_lineCache)->InvalidateVisual();
    }
}

void TextEditVisual__UpdateValue(TextEditVisual* __this, ::uString* value)
{
    ::uPtr< ::app::Fuse::Controls::TextEdit::LineCache*>(__this->_lineCache)->Text(value);
    ::uPtr< ::app::Fuse::Controls::TextEdit::TextWindow*>(__this->_textWindow)->InvalidateVisual();
    __this->_caretPosition = ::app::Fuse::Input::Focus__IsWithin(NULL, (::app::Fuse::Node*)__this) ? ::uPtr< ::app::Fuse::Controls::TextEdit::LineCache*>(__this->_lineCache)->GetLastTextPos() : ::app::Fuse::Controls::TextEdit::TextPosition__New_1(NULL, 0, 0);
    __this->_selection = NULL;
    __this->InvalidateLayout(2);
    __this->InvalidateVisual();
}

::app::Uno::Float2 TextEditVisual__WindowToControl(TextEditVisual* __this, ::app::Uno::Float2 p)
{
    return p;
}

::app::Uno::Float2 TextEditVisual__WindowToTextBounds(TextEditVisual* __this, ::app::Uno::Float2 p)
{
    return ::app::Uno::Float2__op_Addition_2(NULL, p, __this->_windowPos);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\TextEdit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TextEditVisual_DegreeSpan__uType* TextEditVisual_DegreeSpan__typeof()
{
    static ::uStaticStrong<TextEditVisual_DegreeSpan__uType*> type;
    if (type != NULL) return type;

    type = (TextEditVisual_DegreeSpan__uType*)::uAllocClassType(sizeof(TextEditVisual_DegreeSpan__uType), "Fuse.Controls.TextEdit.TextEditVisual.DegreeSpan", false, 0, 0, 0);

    return type;
}

void TextEditVisual_DegreeSpan___ObjInit(TextEditVisual_DegreeSpan* __this, float a, float b)
{
    __this->_a = a;
    __this->_b = b;
}

bool TextEditVisual_DegreeSpan__IsWithinBounds(TextEditVisual_DegreeSpan* __this, float x)
{
    float angle1 = __this->_a;
    float angle2 = __this->_b;
    float rAngle = ::app::Uno::Math__Mod_1(NULL, ::app::Uno::Math__Mod_1(NULL, angle2 - angle1, 360.0f) + 360.0f, 360.0f);

    if (rAngle >= 180.0f)
    {
        float a = angle1;
        angle1 = angle2;
        angle2 = a;
    }

    if (angle1 <= angle2)
    {
        return (x >= angle1) && (x <= angle2);
    }
    else
    {
        return (x >= angle2) || (x <= angle2);
    }
}

TextEditVisual_DegreeSpan* TextEditVisual_DegreeSpan__New_1(::uStatic* __this, float a, float b)
{
    TextEditVisual_DegreeSpan* inst = (TextEditVisual_DegreeSpan*)::uAllocObject(sizeof(TextEditVisual_DegreeSpan), TextEditVisual_DegreeSpan__typeof());
    inst->_ObjInit(a, b);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\TextEdit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TextEditVisual_SwipeGestureHelper__uType* TextEditVisual_SwipeGestureHelper__typeof()
{
    static ::uStaticStrong<TextEditVisual_SwipeGestureHelper__uType*> type;
    if (type != NULL) return type;

    type = (TextEditVisual_SwipeGestureHelper__uType*)::uAllocClassType(sizeof(TextEditVisual_SwipeGestureHelper__uType), "Fuse.Controls.TextEdit.TextEditVisual.SwipeGestureHelper", false, 0, 1, 0);

    type->SetStrongRefs(
        "_spans", offsetof(TextEditVisual_SwipeGestureHelper, _spans));

    return type;
}

void TextEditVisual_SwipeGestureHelper___ObjInit(TextEditVisual_SwipeGestureHelper* __this, float lengthThreshold, ::uArray* spans)
{
    __this->_spans = spans;
    __this->_lengthThreshold = lengthThreshold;
}

bool TextEditVisual_SwipeGestureHelper__IsWithinBounds(TextEditVisual_SwipeGestureHelper* __this, ::app::Uno::Float2 vector)
{
    float length = ::app::Uno::Vector__Length(NULL, vector);

    if (length < __this->_lengthThreshold)
    {
        return false;
    }

    float angle = ::app::Uno::Math__RadiansToDegrees_1(NULL, ::app::Uno::Math__Atan2_1(NULL, vector.X, vector.Y));

    for (int i = 0; i < ::uPtr< ::uArray*>(__this->_spans)->Length(); i++)
    {
        if (::uPtr< ::app::Fuse::Controls::TextEdit::TextEditVisual_DegreeSpan*>(::uPtr< ::uArray*>(__this->_spans)->Item< ::app::Fuse::Controls::TextEdit::TextEditVisual_DegreeSpan*>(i))->IsWithinBounds(angle))
        {
            return true;
        }
    }

    return false;
}

TextEditVisual_SwipeGestureHelper* TextEditVisual_SwipeGestureHelper__New_1(::uStatic* __this, float lengthThreshold, ::uArray* spans)
{
    TextEditVisual_SwipeGestureHelper* inst = (TextEditVisual_SwipeGestureHelper*)::uAllocObject(sizeof(TextEditVisual_SwipeGestureHelper), TextEditVisual_SwipeGestureHelper__typeof());
    inst->_ObjInit(lengthThreshold, spans);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\TextEdit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< TextPosition*> TextPosition__Default;

TextPosition__uType* TextPosition__typeof()
{
    static ::uStaticStrong<TextPosition__uType*> type;
    if (type != NULL) return type;

    type = (TextPosition__uType*)::uAllocClassType(sizeof(TextPosition__uType), "Fuse.Controls.TextEdit.TextPosition", false, 0, 0, 0);

    type->__fp_Equals = (bool(*)(::uObject*, ::uObject*))TextPosition__Equals;
    type->__fp_GetHashCode = (int(*)(::uObject*))TextPosition__GetHashCode;

    type->SetFields(3,
        ::uNewField("Char", NULL, offsetof(TextPosition, Char), ::app::Uno::Int__typeof()),
        ::uNewField("Default", &TextPosition__Default, 0, TextPosition__typeof()),
        ::uNewField("Line", NULL, offsetof(TextPosition, Line), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("Max", TextPosition__Max, 0, true, TextPosition__typeof(), TextPosition__typeof(), TextPosition__typeof()),
        ::uNewFunction("Min", TextPosition__Min, 0, true, TextPosition__typeof(), TextPosition__typeof(), TextPosition__typeof()),
        ::uNewFunction(".ctor", TextPosition__New_1, 0, true, TextPosition__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void TextPosition___ObjInit(TextPosition* __this, int l, int c)
{
    __this->Line = l;
    __this->Char = c;
}

void TextPosition___TypeInit(::uStatic* __this)
{
    TextPosition__Default = TextPosition__New_1(NULL, 0, 0);
}

bool TextPosition__Equals(TextPosition* __this, ::uObject* obj)
{
    if (!::uIs(obj, TextPosition__typeof()))
    {
        return false;
    }

    TextPosition* other = ::uCast< TextPosition*>(obj, TextPosition__typeof());
    return (__this->Line == ::uPtr< TextPosition*>(other)->Line) && (__this->Char == ::uPtr< TextPosition*>(other)->Char);
}

int TextPosition__GetHashCode(TextPosition* __this)
{
    return __this->Line ^ __this->Char;
}

TextPosition* TextPosition__Max(::uStatic* __this, TextPosition* a, TextPosition* b)
{
    return TextPosition__op_GreaterThanOrEqual(NULL, a, b) ? a : b;
}

TextPosition* TextPosition__Min(::uStatic* __this, TextPosition* a, TextPosition* b)
{
    return TextPosition__op_LessThanOrEqual(NULL, a, b) ? a : b;
}

TextPosition* TextPosition__New_1(::uStatic* __this, int l, int c)
{
    TextPosition* inst = (TextPosition*)::uAllocObject(sizeof(TextPosition), TextPosition__typeof());
    inst->_ObjInit(l, c);
    return inst;
}

bool TextPosition__op_Equality(::uStatic* __this, TextPosition* a, TextPosition* b)
{
    bool aNull = ::app::Uno::Object__ReferenceEquals(NULL, (::uObject*)a, NULL);
    bool bNull = ::app::Uno::Object__ReferenceEquals(NULL, (::uObject*)b, NULL);

    if (aNull && bNull)
    {
        return true;
    }

    if ((aNull && !bNull) || (!aNull && bNull))
    {
        return false;
    }

    return ::uPtr< TextPosition*>(a)->Equals((::uObject*)b);
}

bool TextPosition__op_GreaterThan(::uStatic* __this, TextPosition* a, TextPosition* b)
{
    if (::uPtr< TextPosition*>(a)->Line > ::uPtr< TextPosition*>(b)->Line)
    {
        return true;
    }

    if (::uPtr< TextPosition*>(a)->Line < ::uPtr< TextPosition*>(b)->Line)
    {
        return false;
    }

    return ::uPtr< TextPosition*>(a)->Char > ::uPtr< TextPosition*>(b)->Char;
}

bool TextPosition__op_GreaterThanOrEqual(::uStatic* __this, TextPosition* a, TextPosition* b)
{
    if (::uPtr< TextPosition*>(a)->Line > ::uPtr< TextPosition*>(b)->Line)
    {
        return true;
    }

    if (::uPtr< TextPosition*>(a)->Line < ::uPtr< TextPosition*>(b)->Line)
    {
        return false;
    }

    return ::uPtr< TextPosition*>(a)->Char >= ::uPtr< TextPosition*>(b)->Char;
}

bool TextPosition__op_Inequality(::uStatic* __this, TextPosition* a, TextPosition* b)
{
    return !TextPosition__op_Equality(NULL, a, b);
}

bool TextPosition__op_LessThan(::uStatic* __this, TextPosition* a, TextPosition* b)
{
    if (::uPtr< TextPosition*>(a)->Line < ::uPtr< TextPosition*>(b)->Line)
    {
        return true;
    }

    if (::uPtr< TextPosition*>(a)->Line > ::uPtr< TextPosition*>(b)->Line)
    {
        return false;
    }

    return ::uPtr< TextPosition*>(a)->Char < ::uPtr< TextPosition*>(b)->Char;
}

bool TextPosition__op_LessThanOrEqual(::uStatic* __this, TextPosition* a, TextPosition* b)
{
    if (::uPtr< TextPosition*>(a)->Line < ::uPtr< TextPosition*>(b)->Line)
    {
        return true;
    }

    if (::uPtr< TextPosition*>(a)->Line > ::uPtr< TextPosition*>(b)->Line)
    {
        return false;
    }

    return ::uPtr< TextPosition*>(a)->Char <= ::uPtr< TextPosition*>(b)->Char;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\TextEdit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TextSpan__uType* TextSpan__typeof()
{
    static ::uStaticStrong<TextSpan__uType*> type;
    if (type != NULL) return type;

    type = (TextSpan__uType*)::uAllocClassType(sizeof(TextSpan__uType), "Fuse.Controls.TextEdit.TextSpan", false, 0, 2, 0);

    type->__fp_Equals = (bool(*)(::uObject*, ::uObject*))TextSpan__Equals;
    type->__fp_GetHashCode = (int(*)(::uObject*))TextSpan__GetHashCode;

    type->SetStrongRefs(
        "End", offsetof(TextSpan, End),
        "Start", offsetof(TextSpan, Start));

    type->SetFields(2,
        ::uNewField("End", NULL, offsetof(TextSpan, End), ::app::Fuse::Controls::TextEdit::TextPosition__typeof()),
        ::uNewField("Start", NULL, offsetof(TextSpan, Start), ::app::Fuse::Controls::TextEdit::TextPosition__typeof()));

    type->SetFunctions(4,
        ::uNewFunction("Contains", TextSpan__Contains, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Controls::TextEdit::TextPosition__typeof()),
        ::uNewFunction("Intersection", TextSpan__Intersection, 0, true, TextSpan__typeof(), TextSpan__typeof(), TextSpan__typeof()),
        ::uNewFunction("Intersects", TextSpan__Intersects, 0, true, ::app::Uno::Bool__typeof(), TextSpan__typeof(), TextSpan__typeof()),
        ::uNewFunction(".ctor", TextSpan__New_1, 0, true, TextSpan__typeof(), ::app::Fuse::Controls::TextEdit::TextPosition__typeof(), ::app::Fuse::Controls::TextEdit::TextPosition__typeof()));

    ::uRegisterType(type);
    return type;
}

void TextSpan___ObjInit(TextSpan* __this, ::app::Fuse::Controls::TextEdit::TextPosition* start, ::app::Fuse::Controls::TextEdit::TextPosition* end)
{
    bool isValid = ::app::Fuse::Controls::TextEdit::TextPosition__op_LessThanOrEqual(NULL, start, end);
    __this->Start = isValid ? start : end;
    __this->End = isValid ? end : start;
}

bool TextSpan__Contains(TextSpan* __this, ::app::Fuse::Controls::TextEdit::TextPosition* p)
{
    return ::app::Fuse::Controls::TextEdit::TextPosition__op_GreaterThanOrEqual(NULL, p, __this->Start) && ::app::Fuse::Controls::TextEdit::TextPosition__op_LessThan(NULL, p, __this->End);
}

bool TextSpan__Equals(TextSpan* __this, ::uObject* obj)
{
    if (!::uIs(obj, TextSpan__typeof()))
    {
        return false;
    }

    TextSpan* other = ::uCast< TextSpan*>(obj, TextSpan__typeof());
    return ::app::Fuse::Controls::TextEdit::TextPosition__op_Equality(NULL, __this->Start, ::uPtr< TextSpan*>(other)->Start) && ::app::Fuse::Controls::TextEdit::TextPosition__op_Equality(NULL, __this->End, ::uPtr< TextSpan*>(other)->End);
}

int TextSpan__GetHashCode(TextSpan* __this)
{
    return ::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(__this->Start)->GetHashCode() ^ ::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(__this->End)->GetHashCode();
}

TextSpan* TextSpan__Intersection(::uStatic* __this, TextSpan* a, TextSpan* b)
{
    return TextSpan__Intersects(NULL, a, b) ? TextSpan__New_1(NULL, ::app::Fuse::Controls::TextEdit::TextPosition__Max(NULL, ::uPtr< TextSpan*>(a)->Start, ::uPtr< TextSpan*>(b)->Start), ::app::Fuse::Controls::TextEdit::TextPosition__Min(NULL, ::uPtr< TextSpan*>(a)->End, ::uPtr< TextSpan*>(b)->End)) : NULL;
}

bool TextSpan__Intersects(::uStatic* __this, TextSpan* a, TextSpan* b)
{
    return !(::app::Fuse::Controls::TextEdit::TextPosition__op_LessThanOrEqual(NULL, ::uPtr< TextSpan*>(a)->End, ::uPtr< TextSpan*>(b)->Start) || ::app::Fuse::Controls::TextEdit::TextPosition__op_GreaterThanOrEqual(NULL, ::uPtr< TextSpan*>(a)->Start, ::uPtr< TextSpan*>(b)->End));
}

TextSpan* TextSpan__New_1(::uStatic* __this, ::app::Fuse::Controls::TextEdit::TextPosition* start, ::app::Fuse::Controls::TextEdit::TextPosition* end)
{
    TextSpan* inst = (TextSpan*)::uAllocObject(sizeof(TextSpan), TextSpan__typeof());
    inst->_ObjInit(start, end);
    return inst;
}

bool TextSpan__op_Equality(::uStatic* __this, TextSpan* a, TextSpan* b)
{
    bool aNull = ::app::Uno::Object__ReferenceEquals(NULL, (::uObject*)a, NULL);
    bool bNull = ::app::Uno::Object__ReferenceEquals(NULL, (::uObject*)b, NULL);

    if (aNull && bNull)
    {
        return true;
    }

    if ((aNull && !bNull) || (!aNull && bNull))
    {
        return false;
    }

    return ::uPtr< TextSpan*>(a)->Equals((::uObject*)b);
}

bool TextSpan__op_Inequality(::uStatic* __this, TextSpan* a, TextSpan* b)
{
    return !TextSpan__op_Equality(NULL, a, b);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\TextEdit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TextWindow__uType* TextWindow__typeof()
{
    static ::uStaticStrong<TextWindow__uType*> type;
    if (type != NULL) return type;

    type = (TextWindow__uType*)::uAllocClassType(sizeof(TextWindow__uType), "Fuse.Controls.TextEdit.TextWindow", false, 6, 3, 0);

    type->SetBaseType(::app::Fuse::Elements::Element__typeof());
    type->__fp_CalcRenderBounds = (::app::Uno::Rect(*)(::app::Fuse::Elements::Element*))TextWindow__CalcRenderBounds;
    type->__fp_OnDraw = (void(*)(::app::Fuse::Elements::Element*, ::app::Fuse::DrawContext*))TextWindow__OnDraw;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(TextWindow__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(TextWindow__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(TextWindow__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(TextWindow__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(TextWindow__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(TextWindow__uType, __interface_5));

    type->SetStrongRefs(
        "_lineCache", offsetof(TextWindow, _lineCache),
        "_selection", offsetof(TextWindow, _selection),
        "_wrapInfo", offsetof(TextWindow, _wrapInfo));

    type->SetFields(9,
        ::uNewField("_lineCache", NULL, offsetof(TextWindow, _lineCache), ::app::Fuse::Controls::TextEdit::LineCache__typeof()),
        ::uNewField("_maxTextLength", NULL, offsetof(TextWindow, _maxTextLength), ::app::Uno::Int__typeof()),
        ::uNewField("_offset", NULL, offsetof(TextWindow, _offset), ::app::Uno::Float2__typeof()),
        ::uNewField("_selection", NULL, offsetof(TextWindow, _selection), ::app::Fuse::Controls::TextEdit::TextSpan__typeof()),
        ::uNewField("_selectionColor", NULL, offsetof(TextWindow, _selectionColor), ::app::Uno::Float4__typeof()),
        ::uNewField("_textAlignment", NULL, offsetof(TextWindow, _textAlignment), ::app::Fuse::Elements::TextAlignment__typeof()),
        ::uNewField("_textBoundsSize", NULL, offsetof(TextWindow, _textBoundsSize), ::app::Uno::Float2__typeof()),
        ::uNewField("_textColor", NULL, offsetof(TextWindow, _textColor), ::app::Uno::Float4__typeof()),
        ::uNewField("_wrapInfo", NULL, offsetof(TextWindow, _wrapInfo), ::app::Fuse::Controls::Internal::WordWrapInfo__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("Draw", TextWindow__Draw_1, 0, false, ::app::Fuse::Controls::Internal::WordWrapInfo__typeof(), ::app::Fuse::Controls::TextEdit::TextSpan__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Float4__typeof(), ::app::Uno::Int__typeof(), ::app::Fuse::Elements::TextAlignment__typeof(), ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof(), ::app::Fuse::DrawContext__typeof()),
        ::uNewFunction(".ctor", TextWindow__New_1, 0, true, TextWindow__typeof(), ::app::Fuse::Node__typeof(), ::app::Fuse::Controls::TextEdit::LineCache__typeof()));

    ::uRegisterType(type);
    return type;
}

void TextWindow___ObjInit_2(TextWindow* __this, ::app::Fuse::Node* parent, ::app::Fuse::Controls::TextEdit::LineCache* lineCache)
{
    ::app::Fuse::Elements::Element___ObjInit_1(__this);
    __this->_lineCache = lineCache;
    __this->ClipToBounds(true);
    __this->OnAdded(parent);
}

::app::Uno::Rect TextWindow__CalcRenderBounds(TextWindow* __this)
{
    return ::app::Uno::Rect__New_2(NULL, ::app::Uno::Float2__New_1(NULL, 0.0f), __this->_textBoundsSize);
}

void TextWindow__Draw_1(TextWindow* __this, ::app::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, ::app::Fuse::Controls::TextEdit::TextSpan* selection, ::app::Uno::Float4 textColor, ::app::Uno::Float4 selectionColor, int maxTextLength, int textAlignment, ::app::Uno::Float2 textBoundsSize, ::app::Uno::Float2 offset, ::app::Fuse::DrawContext* dc)
{
    if (::app::Uno::Float2__op_Inequality(NULL, __this->_textBoundsSize, textBoundsSize))
    {
        __this->InvalidateRenderBounds();
    }

    __this->_wrapInfo = wrapInfo;
    __this->_selection = selection;
    __this->_textColor = textColor;
    __this->_selectionColor = selectionColor;
    __this->_maxTextLength = maxTextLength;
    __this->_textAlignment = textAlignment;
    __this->_textBoundsSize = textBoundsSize;
    __this->_offset = offset;
    __this->OnDraw(dc);
}

TextWindow* TextWindow__New_1(::uStatic* __this, ::app::Fuse::Node* parent, ::app::Fuse::Controls::TextEdit::LineCache* lineCache)
{
    TextWindow* inst = (TextWindow*)::uAllocObject(sizeof(TextWindow), TextWindow__typeof());
    inst->_ObjInit_2(parent, lineCache);
    return inst;
}

void TextWindow__OnDraw(TextWindow* __this, ::app::Fuse::DrawContext* dc)
{
    ::uPtr< ::app::Fuse::Controls::Internal::DefaultTextRenderer*>(::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(__this->_wrapInfo)->TextRenderer)->BeginRendering(::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(__this->_wrapInfo)->FontSize, ::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(__this->_wrapInfo)->AbsoluteZoom, __this->WorldTransform(), __this->ActualSize(), __this->_textColor, __this->_maxTextLength);
    float lineHeight = ::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(__this->_wrapInfo)->LineHeight * ::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(__this->_wrapInfo)->AbsoluteZoom;
    ::app::Uno::Float2 scaledOffset = ::app::Uno::Float2__op_Multiply_1(NULL, __this->_offset, ::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(__this->_wrapInfo)->AbsoluteZoom);
    float y = 0.0f;
    float selectionY = 0.0f;

    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(::uPtr< ::app::Fuse::Controls::TextEdit::LineCache*>(__this->_lineCache)->Lines())->Count(); i++)
    {
        ::uArray* lines = ::uPtr< ::app::Fuse::Controls::TextEdit::LineCacheLine*>(::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(::uPtr< ::app::Fuse::Controls::TextEdit::LineCache*>(__this->_lineCache)->Lines())->Item(i))->GetWrappedLines(__this->_wrapInfo);

        for (int j = 0; j < ::uPtr< ::uArray*>(lines)->Length(); ++j)
        {
            ::app::Fuse::Controls::Internal::WrappedLine* wrappedLine = ::uPtr< ::uArray*>(lines)->Item< ::app::Fuse::Controls::Internal::WrappedLine*>(j);
            float drawY = scaledOffset.Y + y;

            if (drawY >= (__this->ActualSize().Y * ::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(__this->_wrapInfo)->AbsoluteZoom))
            {
                break;
            }
            else if (drawY >= -lineHeight)
            {
                float x = ::uPtr< ::app::Fuse::Controls::Internal::WrappedLine*>(wrappedLine)->GetXOffset(__this->_textAlignment, __this->_textBoundsSize.X, __this->AbsoluteZoom());

                if (::app::Fuse::Controls::TextEdit::TextSpan__op_Inequality(NULL, __this->_selection, NULL))
                {
                    ::app::Fuse::Controls::TextEdit::TextPosition* start = ::app::Fuse::Controls::TextEdit::TextPosition__New_1(NULL, i, ::uPtr< ::app::Fuse::Controls::Internal::WrappedLine*>(wrappedLine)->LineTextStartOffset);
                    ::app::Fuse::Controls::TextEdit::TextPosition* end = ::app::Fuse::Controls::TextEdit::TextPosition__New_1(NULL, i, wrappedLine->LineTextEndOffset());
                    ::app::Fuse::Controls::TextEdit::TextSpan* span = ::app::Fuse::Controls::TextEdit::TextSpan__New_1(NULL, start, end);
                    ::app::Fuse::Controls::TextEdit::TextSpan* intersection = ::app::Fuse::Controls::TextEdit::TextSpan__Intersection(NULL, span, __this->_selection);

                    if (::app::Fuse::Controls::TextEdit::TextSpan__op_Inequality(NULL, intersection, NULL))
                    {
                        float startPos = ::uPtr< ::app::Fuse::Controls::Internal::WrappedLine*>(wrappedLine)->PosToBounds(__this->_wrapInfo, ::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(::uPtr< ::app::Fuse::Controls::TextEdit::TextSpan*>(intersection)->Start)->Char - ::uPtr< ::app::Fuse::Controls::Internal::WrappedLine*>(wrappedLine)->LineTextStartOffset);
                        float endPos = (::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(intersection->End)->Char < wrappedLine->LineTextEndOffset()) ? wrappedLine->PosToBounds(__this->_wrapInfo, ::uPtr< ::app::Fuse::Controls::TextEdit::TextPosition*>(intersection->End)->Char - wrappedLine->LineTextStartOffset) : wrappedLine->LineWidth;
                        ::uPtr< ::app::Fuse::Elements::Internal::ElementDraw*>(::app::Fuse::Elements::Internal::ElementDraw__Impl)->Rectangle(dc, (::app::Fuse::Elements::Element*)__this, ::app::Uno::Math__Floor_2(NULL, ::app::Uno::Float2__New_2(NULL, (__this->_offset.X + x) + startPos, __this->_offset.Y + selectionY)), ::app::Uno::Float2__New_2(NULL, endPos - startPos, ::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(__this->_wrapInfo)->LineHeight), __this->_selectionColor);
                    }
                }

                ::uPtr< ::app::Fuse::Controls::Internal::DefaultTextRenderer*>(::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(__this->_wrapInfo)->TextRenderer)->DrawLine(dc, scaledOffset.X + (x * ::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(__this->_wrapInfo)->AbsoluteZoom), drawY, wrappedLine->Text);
            }

            y = y + lineHeight;
            selectionY = selectionY + (lineHeight / ::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(__this->_wrapInfo)->AbsoluteZoom);
        }
    }

    ::uPtr< ::app::Fuse::Controls::Internal::DefaultTextRenderer*>(::uPtr< ::app::Fuse::Controls::Internal::WordWrapInfo*>(__this->_wrapInfo)->TextRenderer)->EndRendering(dc);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\TextEdit\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* VisualTextTransform__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Controls.TextEdit.VisualTextTransform", ::app::Uno::Int__typeof(), 2);

    type->SetLiterals(
        "None", 0LL,
        "Password", 1LL);

    ::uRegisterType(type);
    return type;
}

}}}}
