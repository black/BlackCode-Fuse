// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.build\Simulator\Android\Cache\GeneratedCode\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.h>
#include <_root.MainView.Template.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.SizeUnit.h>
#include <Fuse.Elements.TextAlignment.h>
#include <Fuse.Elements.TextWrapping.h>
#include <Fuse.StyleProperty-2.h>
#include <Fuse.StylePropertyWithUnit-3.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
static uType* TYPES[2];

namespace g{

// public partial sealed class MainView.Template :31
// {
// static Template() :38
static void MainView__Template__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Template_type* MainView__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(MainView__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template", options);
    type->SetBase(::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::Text_typeof()));
    type->fp_cctor_ = MainView__Template__cctor__fn;
    type->fp_OnApply = (void(*)(::g::Uno::UX::Template*, void*))MainView__Template__OnApply_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Uno::UX::Template__Apply_fn;
    ::TYPES[0] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[1] = ::g::Fuse::Elements::Element_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Uno::UX::Template_type, interface0));
    type->SetFields(2,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template, __parent1), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__Template__New1_fn, 0, true, MainView__Template_typeof(), 1, ::g::MainView_typeof()));
    return type;
}

// public Template(MainView parent) :34
void MainView__Template__ctor_1_fn(MainView__Template* __this, ::g::MainView* parent)
{
    __this->ctor_1(parent);
}

// public Template New(MainView parent) :34
void MainView__Template__New1_fn(::g::MainView* parent, MainView__Template** __retval)
{
    *__retval = MainView__Template::New1(parent);
}

// protected override sealed void OnApply(Fuse.Controls.Text self) :41
void MainView__Template__OnApply_fn(MainView__Template* __this, ::g::Fuse::Controls::Text* self)
{
    bool ret2;
    bool ret3;
    bool ret4;
    bool ret5;
    bool ret6;
    ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(::g::Fuse::Controls::TextControl::TextWrappingProperty()), self, uCRef<int>(1), &ret2);
    ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(::g::Fuse::Controls::TextControl::FontSizeProperty()), self, uCRef(16.0f), &ret3);
    ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(::g::Fuse::Controls::TextControl::TextAlignmentProperty()), self, uCRef<int>(1), &ret4);
    ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(::g::Fuse::Controls::TextControl::TextColorProperty()), self, uCRef(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f)), &ret5);
    ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(::g::Fuse::Elements::Element::YProperty()), self, uCRef(100.0f), &ret6);
}

// public Template(MainView parent) [instance] :34
void MainView__Template::ctor_1(::g::MainView* parent)
{
    ctor_();
    __parent1 = parent;
}

// public Template New(MainView parent) [static] :34
MainView__Template* MainView__Template::New1(::g::MainView* parent)
{
    MainView__Template* obj1 = (MainView__Template*)uNew(MainView__Template_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

} // ::g
