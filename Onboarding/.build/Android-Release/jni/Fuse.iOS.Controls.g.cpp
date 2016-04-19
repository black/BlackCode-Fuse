// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.iOS.Controls.Button.h>
#include <Fuse.StyleProperty-2.h>
#include <Uno.Action-1.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
static uType* TYPES[2];

namespace g{
namespace Fuse{
namespace iOS{
namespace Controls{

// C:\ProgramData\Uno\Packages\Fuse.iOS\0.19.3\Controls\$.uno(18)
// --------------------------------------------------------------

// public sealed extern class Button :18
// {
// static Button() :18
static void Button__cctor_1_fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret2;
    ::g::Fuse::StyleProperty1* ret3;
    ::g::Fuse::StyleProperty1* ret4;
    ::g::Fuse::StyleProperty1* ret5;
    Button::NormalColorProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[0/*Fuse.StyleProperty<Fuse.iOS.Controls.Button, float4>*/], uCRef(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f)), uDelegate::New(::TYPES[1/*Uno.Action<Fuse.iOS.Controls.Button>*/], (void*)Button__OnButtonPropertyChanged_fn), &ret2), ret2);
    Button::HighlightedColorProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[0/*Fuse.StyleProperty<Fuse.iOS.Controls.Button, float4>*/], uCRef(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f)), uDelegate::New(::TYPES[1/*Uno.Action<Fuse.iOS.Controls.Button>*/], (void*)Button__OnButtonPropertyChanged_fn), &ret3), ret3);
    Button::DisabledColorProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[0/*Fuse.StyleProperty<Fuse.iOS.Controls.Button, float4>*/], uCRef(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f)), uDelegate::New(::TYPES[1/*Uno.Action<Fuse.iOS.Controls.Button>*/], (void*)Button__OnButtonPropertyChanged_fn), &ret4), ret4);
    Button::SelectedColorProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[0/*Fuse.StyleProperty<Fuse.iOS.Controls.Button, float4>*/], uCRef(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f)), uDelegate::New(::TYPES[1/*Uno.Action<Fuse.iOS.Controls.Button>*/], (void*)Button__OnButtonPropertyChanged_fn), &ret5), ret5);
}

::g::Fuse::Node_type* Button_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 55;
    options.ObjectSize = sizeof(Button);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.iOS.Controls.Button", options);
    type->SetBase(::g::Fuse::Node_typeof());
    type->fp_cctor_ = Button__cctor_1_fn;
    ::TYPES[0] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Button_typeof(), ::g::Uno::Float4_typeof());
    ::TYPES[1] = ::g::Uno::Action1_typeof()->MakeType(Button_typeof());
    type->SetFields(51,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Button_typeof(), ::g::Uno::Float4_typeof()), (uintptr_t)&::g::Fuse::iOS::Controls::Button::DisabledColorProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Button_typeof(), ::g::Uno::Float4_typeof()), (uintptr_t)&::g::Fuse::iOS::Controls::Button::HighlightedColorProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Button_typeof(), ::g::Uno::Float4_typeof()), (uintptr_t)&::g::Fuse::iOS::Controls::Button::NormalColorProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Button_typeof(), ::g::Uno::Float4_typeof()), (uintptr_t)&::g::Fuse::iOS::Controls::Button::SelectedColorProperty_, uFieldFlagsStatic);
    return type;
}

// protected static void OnButtonPropertyChanged(Fuse.iOS.Controls.Button t) :56
void Button__OnButtonPropertyChanged_fn(Button* t)
{
    Button::OnButtonPropertyChanged(t);
}

uSStrong< ::g::Fuse::StyleProperty1*> Button::DisabledColorProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Button::HighlightedColorProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Button::NormalColorProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Button::SelectedColorProperty_;

// protected static void OnButtonPropertyChanged(Fuse.iOS.Controls.Button t) [static] :56
void Button::OnButtonPropertyChanged(Button* t)
{
    Button_typeof()->Init();
}
// }

}}}} // ::g::Fuse::iOS::Controls
