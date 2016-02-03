#include <app/Android.android.content.res.ColorStateList.h>
#include <app/Android.android.graphics.Typeface.h>
#include <app/Android.android.text.TextUtilsDLRTruncateAt.h>
#include <app/Android.android.util.TypedValue.h>
#include <app/Android.android.view.Gravity.h>
#include <app/Android.android.view.View.h>
#include <app/Android.android.widget.TextView.h>
#include <app/Android.java.lang.CharSequence.h>
#include <app/Android.java.lang.Object.h>
#include <app/Android.java.lang.String.h>
#include <app/Fuse.Android.EditorActionArgs.h>
#include <app/Fuse.Android.EditorActionHandler.h>
#include <app/Fuse.Android.EditorActionListener.h>
#include <app/Fuse.Android.Helpers.h>
#include <app/Fuse.Android.TextChangedHandler.h>
#include <app/Fuse.Android.TextChangedListener.h>
#include <app/Fuse.Android.TextViewBase__Fuse_Controls_TextControl.h>
#include <app/Fuse.Android.TextViewBase__Fuse_Controls_TextInput.h>
#include <app/Fuse.Android.TypefaceCache.h>
#include <app/Fuse.Controls.TextControl.h>
#include <app/Fuse.Controls.TextInput.h>
#include <app/Fuse.Elements.TextAlignment.h>
#include <app/Fuse.Elements.TextWrapping.h>
#include <app/Fuse.Font.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_TextControl__Fuse_Font.h>
#include <app/Uno.Bool.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float4.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.ValueChangedArgs__string.h>
#include <app/Uno.UX.ValueChangedHandler__string.h>

namespace app {
namespace Fuse {
namespace Android {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TextViewBase__Fuse_Controls_TextControl__uType* TextViewBase__Fuse_Controls_TextControl__typeof()
{
    static ::uStaticStrong<TextViewBase__Fuse_Controls_TextControl__uType*> type;
    if (type != NULL) return type;

    type = (TextViewBase__Fuse_Controls_TextControl__uType*)::uAllocClassType(sizeof(TextViewBase__Fuse_Controls_TextControl__uType), "Fuse.Android.TextViewBase<Fuse.Controls.TextControl>", false, 1, 3, 0);

    type->SetBaseType(::app::Fuse::Android::ControlView__Fuse_Controls_TextControl__typeof());
    type->__fp_Attach = (void(*)(::app::Fuse::Android::ControlView__Fuse_Controls_TextControl*))TextViewBase__Fuse_Controls_TextControl__Attach;
    type->__fp_CreateInternal = (::app::Android::android::view::View*(*)(::app::Fuse::Android::View*))TextViewBase__Fuse_Controls_TextControl__CreateInternal;
    type->__fp_Detach = (void(*)(::app::Fuse::Android::ControlView__Fuse_Controls_TextControl*))TextViewBase__Fuse_Controls_TextControl__Detach;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(TextViewBase__Fuse_Controls_TextControl__uType, __interface_0));

    type->SetStrongRefs(
        "_editorActionEvent", offsetof(TextViewBase__Fuse_Controls_TextControl, _editorActionEvent),
        "_textChangedEvent", offsetof(TextViewBase__Fuse_Controls_TextControl, _textChangedEvent),
        "_textView", offsetof(TextViewBase__Fuse_Controls_TextControl, _textView));

    type->SetFields(4,
        ::uNewField("_defaultTextColor", NULL, offsetof(TextViewBase__Fuse_Controls_TextControl, _defaultTextColor), ::app::Uno::Int__typeof()),
        ::uNewField("_editorActionEvent", NULL, offsetof(TextViewBase__Fuse_Controls_TextControl, _editorActionEvent), ::app::Uno::IDisposable__typeof()),
        ::uNewField("_textChangedEvent", NULL, offsetof(TextViewBase__Fuse_Controls_TextControl, _textChangedEvent), ::app::Uno::IDisposable__typeof()),
        ::uNewField("_textView", NULL, offsetof(TextViewBase__Fuse_Controls_TextControl, _textView), ::app::Android::android::widget::TextView__typeof()));

    ::uRegisterType(type);
    return type;
}

void TextViewBase__Fuse_Controls_TextControl___ObjInit_3(TextViewBase__Fuse_Controls_TextControl* __this)
{
    ::app::Fuse::Android::ControlView__Fuse_Controls_TextControl___ObjInit_2(__this);
}

void TextViewBase__Fuse_Controls_TextControl__Attach(TextViewBase__Fuse_Controls_TextControl* __this)
{
    __this->Create();
    __this->OnTextLayoutPropertyChanged((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    __this->OnTextRenderPropertyChanged((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    __this->SetText();
    ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->add_TextLayoutPropertyChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)TextViewBase__Fuse_Controls_TextControl__OnTextLayoutPropertyChanged, __this));
    ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->add_TextRenderPropertyChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)TextViewBase__Fuse_Controls_TextControl__OnTextRenderPropertyChanged, __this));
    ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__string__typeof(), (const void*)TextViewBase__Fuse_Controls_TextControl__OnValueChanged, __this));
    __this->_textChangedEvent = ::app::Fuse::Android::TextChangedListener__AddHandler(NULL, __this->_textView, ::uNewDelegateNonVirt(::app::Fuse::Android::TextChangedHandler__typeof(), (const void*)TextViewBase__Fuse_Controls_TextControl__OnTextChanged, __this));
    __this->_editorActionEvent = ::app::Fuse::Android::EditorActionListener__AddHandler(NULL, __this->_textView, ::uNewDelegateNonVirt(::app::Fuse::Android::EditorActionHandler__typeof(), (const void*)TextViewBase__Fuse_Controls_TextControl__OnEditorAciton, __this));
}

::app::Android::android::view::View* TextViewBase__Fuse_Controls_TextControl__CreateInternal(TextViewBase__Fuse_Controls_TextControl* __this)
{
    if (::app::Android::java::lang::Object__op_Equality_1(NULL, (::app::Android::java::lang::Object*)__this->_textView, NULL))
    {
        __this->_textView = __this->CreateTextView();
        __this->_defaultTextColor = ::uPtr< ::app::Android::android::content::res::ColorStateList*>(::uPtr< ::app::Android::android::widget::TextView*>(__this->_textView)->getTextColors())->getDefaultColor();
        ::uPtr< ::app::Android::android::widget::TextView*>(__this->_textView)->setHorizontallyScrolling(false);
        ::uPtr< ::app::Android::android::widget::TextView*>(__this->_textView)->setEllipsize(NULL);
    }

    return (::app::Android::android::view::View*)__this->_textView;
}

void TextViewBase__Fuse_Controls_TextControl__Detach(TextViewBase__Fuse_Controls_TextControl* __this)
{
    ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->remove_TextLayoutPropertyChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)TextViewBase__Fuse_Controls_TextControl__OnTextLayoutPropertyChanged, __this));
    ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->remove_TextRenderPropertyChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)TextViewBase__Fuse_Controls_TextControl__OnTextRenderPropertyChanged, __this));
    ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__string__typeof(), (const void*)TextViewBase__Fuse_Controls_TextControl__OnValueChanged, __this));
    ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_textChangedEvent));
    ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_editorActionEvent));
}

bool TextViewBase__Fuse_Controls_TextControl__OnEditorAciton(TextViewBase__Fuse_Controls_TextControl* __this, ::uObject* sender, ::app::Fuse::Android::EditorActionArgs* args)
{
    return false;
}

void TextViewBase__Fuse_Controls_TextControl__OnTextChanged(TextViewBase__Fuse_Controls_TextControl* __this, ::uObject* sender, ::uString* text)
{
    ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->SetValue(text, (::uObject*)__this);
}

void TextViewBase__Fuse_Controls_TextControl__OnTextLayoutPropertyChanged(TextViewBase__Fuse_Controls_TextControl* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    if (::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__Fuse_Font*>(::app::Fuse::Controls::TextControl__FontProperty)->HasValue(__this->Control()))
    {
        ::uPtr< ::app::Android::android::widget::TextView*>(__this->_textView)->setTypeface(::app::Fuse::Android::TypefaceCache__GetTypeface(NULL, ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->Font()));
    }
    else
    {
        ::uPtr< ::app::Android::android::widget::TextView*>(__this->_textView)->setTypeface(::app::Android::android::graphics::Typeface__get_DEFAULT(NULL));
    }

    ::uPtr< ::app::Android::android::widget::TextView*>(__this->_textView)->setTextSize_1(::app::Android::android::util::TypedValue__get_COMPLEX_UNIT_DIP(NULL), ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->FontSize());
    ::uPtr< ::app::Android::android::widget::TextView*>(__this->_textView)->setTextAlignment(::app::Android::android::view::View__get_TEXT_ALIGNMENT_GRAVITY(NULL));

    switch (::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->TextAlignment())
    {
        case 0:
        {
            ::uPtr< ::app::Android::android::widget::TextView*>(__this->_textView)->setGravity(::app::Android::android::view::Gravity__get_LEFT(NULL));
            break;
        }
        case 1:
        {
            ::uPtr< ::app::Android::android::widget::TextView*>(__this->_textView)->setGravity(::app::Android::android::view::Gravity__get_CENTER_HORIZONTAL(NULL));
            break;
        }
        case 2:
        {
            ::uPtr< ::app::Android::android::widget::TextView*>(__this->_textView)->setGravity(::app::Android::android::view::Gravity__get_RIGHT(NULL));
            break;
        }
    }

    switch (::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->TextWrapping())
    {
        case 1:
        {
            ::uPtr< ::app::Android::android::widget::TextView*>(__this->_textView)->setMaxLines(2147483647);
            break;
        }
        case 0:
        {
            ::uPtr< ::app::Android::android::widget::TextView*>(__this->_textView)->setMaxLines(1);
            break;
        }
    }
}

void TextViewBase__Fuse_Controls_TextControl__OnTextRenderPropertyChanged(TextViewBase__Fuse_Controls_TextControl* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    ::uPtr< ::app::Android::android::widget::TextView*>(__this->_textView)->setTextColor_1(::app::Fuse::Android::Helpers__EncodeColor(NULL, ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->TextColor()));
}

void TextViewBase__Fuse_Controls_TextControl__OnValueChanged(TextViewBase__Fuse_Controls_TextControl* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__string* args)
{
    if (::uPtr< ::app::Uno::UX::ValueChangedArgs__string*>(args)->Origin() == __this)
    {
        return;
    }

    __this->SetText();
}

void TextViewBase__Fuse_Controls_TextControl__SetText(TextViewBase__Fuse_Controls_TextControl* __this)
{
    if (::app::Uno::String__op_Inequality(NULL, ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->Value(), NULL))
    {
        ::uObject* charSequence = (::uObject*)::app::Android::java::lang::String__op_Implicit(NULL, ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->Control())->Value());
        ::uPtr< ::app::Android::android::widget::TextView*>(__this->_textView)->setText_1(charSequence);
    }
    else
    {
        ::uObject* charSequence = (::uObject*)::app::Android::java::lang::String__op_Implicit(NULL, ::uGetConstString(""));
        ::uPtr< ::app::Android::android::widget::TextView*>(__this->_textView)->setText_1(charSequence);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TextViewBase__Fuse_Controls_TextInput__uType* TextViewBase__Fuse_Controls_TextInput__typeof()
{
    static ::uStaticStrong<TextViewBase__Fuse_Controls_TextInput__uType*> type;
    if (type != NULL) return type;

    type = (TextViewBase__Fuse_Controls_TextInput__uType*)::uAllocClassType(sizeof(TextViewBase__Fuse_Controls_TextInput__uType), "Fuse.Android.TextViewBase<Fuse.Controls.TextInput>", false, 1, 3, 0);

    type->SetBaseType(::app::Fuse::Android::ControlView__Fuse_Controls_TextInput__typeof());
    type->__fp_Attach = (void(*)(::app::Fuse::Android::ControlView__Fuse_Controls_TextInput*))TextViewBase__Fuse_Controls_TextInput__Attach;
    type->__fp_CreateInternal = (::app::Android::android::view::View*(*)(::app::Fuse::Android::View*))TextViewBase__Fuse_Controls_TextInput__CreateInternal;
    type->__fp_Detach = (void(*)(::app::Fuse::Android::ControlView__Fuse_Controls_TextInput*))TextViewBase__Fuse_Controls_TextInput__Detach;
    type->__fp_OnTextChanged = TextViewBase__Fuse_Controls_TextInput__OnTextChanged;
    type->__fp_OnTextLayoutPropertyChanged = TextViewBase__Fuse_Controls_TextInput__OnTextLayoutPropertyChanged;
    type->__fp_OnTextRenderPropertyChanged = TextViewBase__Fuse_Controls_TextInput__OnTextRenderPropertyChanged;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(TextViewBase__Fuse_Controls_TextInput__uType, __interface_0));

    type->SetStrongRefs(
        "_editorActionEvent", offsetof(TextViewBase__Fuse_Controls_TextInput, _editorActionEvent),
        "_textChangedEvent", offsetof(TextViewBase__Fuse_Controls_TextInput, _textChangedEvent),
        "_textView", offsetof(TextViewBase__Fuse_Controls_TextInput, _textView));

    type->SetFields(4,
        ::uNewField("_defaultTextColor", NULL, offsetof(TextViewBase__Fuse_Controls_TextInput, _defaultTextColor), ::app::Uno::Int__typeof()),
        ::uNewField("_editorActionEvent", NULL, offsetof(TextViewBase__Fuse_Controls_TextInput, _editorActionEvent), ::app::Uno::IDisposable__typeof()),
        ::uNewField("_textChangedEvent", NULL, offsetof(TextViewBase__Fuse_Controls_TextInput, _textChangedEvent), ::app::Uno::IDisposable__typeof()),
        ::uNewField("_textView", NULL, offsetof(TextViewBase__Fuse_Controls_TextInput, _textView), ::app::Android::android::widget::TextView__typeof()));

    ::uRegisterType(type);
    return type;
}

void TextViewBase__Fuse_Controls_TextInput___ObjInit_3(TextViewBase__Fuse_Controls_TextInput* __this)
{
    ::app::Fuse::Android::ControlView__Fuse_Controls_TextInput___ObjInit_2(__this);
}

void TextViewBase__Fuse_Controls_TextInput__Attach(TextViewBase__Fuse_Controls_TextInput* __this)
{
    __this->Create();
    __this->OnTextLayoutPropertyChanged((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    __this->OnTextRenderPropertyChanged((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    __this->SetText();
    ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->add_TextLayoutPropertyChanged(::uNewDelegateVirt(::app::Uno::EventHandler__typeof(), __this, offsetof(TextViewBase__Fuse_Controls_TextInput__uType, __fp_OnTextLayoutPropertyChanged)));
    ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->add_TextRenderPropertyChanged(::uNewDelegateVirt(::app::Uno::EventHandler__typeof(), __this, offsetof(TextViewBase__Fuse_Controls_TextInput__uType, __fp_OnTextRenderPropertyChanged)));
    ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__string__typeof(), (const void*)TextViewBase__Fuse_Controls_TextInput__OnValueChanged, __this));
    __this->_textChangedEvent = ::app::Fuse::Android::TextChangedListener__AddHandler(NULL, __this->_textView, ::uNewDelegateVirt(::app::Fuse::Android::TextChangedHandler__typeof(), __this, offsetof(TextViewBase__Fuse_Controls_TextInput__uType, __fp_OnTextChanged)));
    __this->_editorActionEvent = ::app::Fuse::Android::EditorActionListener__AddHandler(NULL, __this->_textView, ::uNewDelegateNonVirt(::app::Fuse::Android::EditorActionHandler__typeof(), (const void*)TextViewBase__Fuse_Controls_TextInput__OnEditorAciton, __this));
}

::app::Android::android::view::View* TextViewBase__Fuse_Controls_TextInput__CreateInternal(TextViewBase__Fuse_Controls_TextInput* __this)
{
    if (::app::Android::java::lang::Object__op_Equality_1(NULL, (::app::Android::java::lang::Object*)__this->_textView, NULL))
    {
        __this->_textView = __this->CreateTextView();
        __this->_defaultTextColor = ::uPtr< ::app::Android::android::content::res::ColorStateList*>(::uPtr< ::app::Android::android::widget::TextView*>(__this->_textView)->getTextColors())->getDefaultColor();
        ::uPtr< ::app::Android::android::widget::TextView*>(__this->_textView)->setHorizontallyScrolling(false);
        ::uPtr< ::app::Android::android::widget::TextView*>(__this->_textView)->setEllipsize(NULL);
    }

    return (::app::Android::android::view::View*)__this->_textView;
}

void TextViewBase__Fuse_Controls_TextInput__Detach(TextViewBase__Fuse_Controls_TextInput* __this)
{
    ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->remove_TextLayoutPropertyChanged(::uNewDelegateVirt(::app::Uno::EventHandler__typeof(), __this, offsetof(TextViewBase__Fuse_Controls_TextInput__uType, __fp_OnTextLayoutPropertyChanged)));
    ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->remove_TextRenderPropertyChanged(::uNewDelegateVirt(::app::Uno::EventHandler__typeof(), __this, offsetof(TextViewBase__Fuse_Controls_TextInput__uType, __fp_OnTextRenderPropertyChanged)));
    ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__string__typeof(), (const void*)TextViewBase__Fuse_Controls_TextInput__OnValueChanged, __this));
    ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_textChangedEvent));
    ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_editorActionEvent));
}

bool TextViewBase__Fuse_Controls_TextInput__OnEditorAciton(TextViewBase__Fuse_Controls_TextInput* __this, ::uObject* sender, ::app::Fuse::Android::EditorActionArgs* args)
{
    return false;
}

void TextViewBase__Fuse_Controls_TextInput__OnTextChanged(TextViewBase__Fuse_Controls_TextInput* __this, ::uObject* sender, ::uString* text)
{
    ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->SetValue(text, (::uObject*)__this);
}

void TextViewBase__Fuse_Controls_TextInput__OnTextLayoutPropertyChanged(TextViewBase__Fuse_Controls_TextInput* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    if (::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__Fuse_Font*>(::app::Fuse::Controls::TextControl__FontProperty)->HasValue((::app::Fuse::Controls::TextControl*)__this->Control()))
    {
        ::uPtr< ::app::Android::android::widget::TextView*>(__this->_textView)->setTypeface(::app::Fuse::Android::TypefaceCache__GetTypeface(NULL, ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->Font()));
    }
    else
    {
        ::uPtr< ::app::Android::android::widget::TextView*>(__this->_textView)->setTypeface(::app::Android::android::graphics::Typeface__get_DEFAULT(NULL));
    }

    ::uPtr< ::app::Android::android::widget::TextView*>(__this->_textView)->setTextSize_1(::app::Android::android::util::TypedValue__get_COMPLEX_UNIT_DIP(NULL), ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->FontSize());
    ::uPtr< ::app::Android::android::widget::TextView*>(__this->_textView)->setTextAlignment(::app::Android::android::view::View__get_TEXT_ALIGNMENT_GRAVITY(NULL));

    switch (::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->TextAlignment())
    {
        case 0:
        {
            ::uPtr< ::app::Android::android::widget::TextView*>(__this->_textView)->setGravity(::app::Android::android::view::Gravity__get_LEFT(NULL));
            break;
        }
        case 1:
        {
            ::uPtr< ::app::Android::android::widget::TextView*>(__this->_textView)->setGravity(::app::Android::android::view::Gravity__get_CENTER_HORIZONTAL(NULL));
            break;
        }
        case 2:
        {
            ::uPtr< ::app::Android::android::widget::TextView*>(__this->_textView)->setGravity(::app::Android::android::view::Gravity__get_RIGHT(NULL));
            break;
        }
    }

    switch (::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->TextWrapping())
    {
        case 1:
        {
            ::uPtr< ::app::Android::android::widget::TextView*>(__this->_textView)->setMaxLines(2147483647);
            break;
        }
        case 0:
        {
            ::uPtr< ::app::Android::android::widget::TextView*>(__this->_textView)->setMaxLines(1);
            break;
        }
    }
}

void TextViewBase__Fuse_Controls_TextInput__OnTextRenderPropertyChanged(TextViewBase__Fuse_Controls_TextInput* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    ::uPtr< ::app::Android::android::widget::TextView*>(__this->_textView)->setTextColor_1(::app::Fuse::Android::Helpers__EncodeColor(NULL, ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->TextColor()));
}

void TextViewBase__Fuse_Controls_TextInput__OnValueChanged(TextViewBase__Fuse_Controls_TextInput* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__string* args)
{
    if (::uPtr< ::app::Uno::UX::ValueChangedArgs__string*>(args)->Origin() == __this)
    {
        return;
    }

    __this->SetText();
}

void TextViewBase__Fuse_Controls_TextInput__SetText(TextViewBase__Fuse_Controls_TextInput* __this)
{
    if (::app::Uno::String__op_Inequality(NULL, ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->Value(), NULL))
    {
        ::uObject* charSequence = (::uObject*)::app::Android::java::lang::String__op_Implicit(NULL, ::uPtr< ::app::Fuse::Controls::TextInput*>(__this->Control())->Value());
        ::uPtr< ::app::Android::android::widget::TextView*>(__this->_textView)->setText_1(charSequence);
    }
    else
    {
        ::uObject* charSequence = (::uObject*)::app::Android::java::lang::String__op_Implicit(NULL, ::uGetConstString(""));
        ::uPtr< ::app::Android::android::widget::TextView*>(__this->_textView)->setText_1(charSequence);
    }
}

}}}
