// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Onboarding\.build\Simulator\Android\Cache\GeneratedCode\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.Fuse_Elements_Element_float_Opacity_Property.h>
#include <_root.MainView.Fuse_Triggers_Timeline_double_TargetProgress_Property.h>
#include <_root.MainView.h>
#include <_root.Onboarding_bundle.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.AppBase.h>
#include <Fuse.BasicTheme.BasicTheme.h>
#include <Fuse.Behavior.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Page.h>
#include <Fuse.Controls.PageControl.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Navigation.WhileActive.h>
#include <Fuse.Node.h>
#include <Fuse.Theme.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Timeline.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.BundleFile.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property-1.h>
static uString* STRINGS[2];
static uType* TYPES[22];

namespace g{

// public partial sealed class MainView :1
// {
// static MainView() :21
static void MainView__cctor__fn(uType* __type)
{
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 20;
    options.ObjectSize = sizeof(MainView);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("MainView", options);
    type->SetBase(::g::Fuse::App_typeof());
    type->fp_ctor_ = (void*)MainView__New1_fn;
    type->fp_cctor_ = MainView__cctor__fn;
    ::STRINGS[0] = uString::Const("SWIPE LEFT");
    ::STRINGS[1] = uString::Const("logo");
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Double_typeof());
    ::TYPES[2] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Double_typeof());
    ::TYPES[3] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[4] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[5] = ::g::Fuse::AppBase_typeof();
    ::TYPES[6] = ::g::Fuse::Controls::Panel_typeof();
    ::TYPES[7] = ::g::Fuse::Node_typeof();
    ::TYPES[8] = ::g::Fuse::Controls::Control_typeof();
    ::TYPES[9] = ::g::Fuse::Drawing::Brush_typeof();
    ::TYPES[10] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[11] = ::g::Fuse::Behavior_typeof();
    ::TYPES[12] = ::g::Fuse::Controls::Image_typeof();
    ::TYPES[13] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[14] = ::g::Onboarding_bundle_typeof();
    ::TYPES[15] = ::g::Fuse::Triggers::Trigger_typeof();
    ::TYPES[16] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[17] = ::g::Fuse::Animations::TrackAnimator_typeof();
    ::TYPES[18] = ::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(::g::Fuse::Translation_typeof());
    ::TYPES[19] = ::g::Fuse::Animations::Move_typeof();
    ::TYPES[20] = ::g::Fuse::TranslationModes_typeof();
    ::TYPES[21] = ::g::Fuse::BasicTheme::BasicTheme_typeof();
    type->SetFields(16,
        ::g::Fuse::Controls::Image_typeof(), offsetof(::g::MainView, logo), 0,
        MainView__Fuse_Elements_Element_float_Opacity_Property_typeof(), offsetof(::g::MainView, logo_Opacity_inst), 0,
        ::g::Fuse::Triggers::Timeline_typeof(), offsetof(::g::MainView, timeline), 0,
        MainView__Fuse_Triggers_Timeline_double_TargetProgress_Property_typeof(), offsetof(::g::MainView, timeline_TargetProgress_inst), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__New1_fn, 0, true, MainView_typeof(), 0));
    return type;
}

// public MainView() :24
void MainView__ctor_3_fn(MainView* __this)
{
    __this->ctor_3();
}

// internal void InitializeUX() :28
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :24
void MainView__New1_fn(MainView** __retval)
{
    *__retval = MainView::New1();
}

// public MainView() [instance] :24
void MainView::ctor_3()
{
    ctor_2();
    InitializeUX();
}

// internal void InitializeUX() [instance] :28
void MainView::InitializeUX()
{
    timeline = ::g::Fuse::Triggers::Timeline::New1();
    timeline_TargetProgress_inst = MainView__Fuse_Triggers_Timeline_double_TargetProgress_Property::New1(timeline);
    logo = ::g::Fuse::Controls::Image::New2();
    logo_Opacity_inst = MainView__Fuse_Elements_Element_float_Opacity_Property::New1(logo);
    ::g::Fuse::Controls::PageControl* temp = ::g::Fuse::Controls::PageControl::New2();
    ::g::Fuse::Controls::Page* temp1 = ::g::Fuse::Controls::Page::New2();
    ::g::Fuse::Controls::Text* temp2 = ::g::Fuse::Controls::Text::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp3 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(0.9254902f, 0.2862745f, 0.7294118f, 1.0f));
    ::g::Fuse::Controls::Page* temp4 = ::g::Fuse::Controls::Page::New2();
    ::g::Fuse::Navigation::WhileActive* temp5 = ::g::Fuse::Navigation::WhileActive::New1();
    ::g::Fuse::Animations::Change* temp6 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[1/*Fuse.Animations.Change<double>*/], timeline_TargetProgress_inst);
    ::g::Fuse::Animations::Change* temp7 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[3/*Fuse.Animations.Change<float>*/], logo_Opacity_inst);
    ::g::Fuse::Animations::Move* temp8 = ::g::Fuse::Animations::Move::New1();
    ::g::Fuse::Drawing::StaticSolidColor* temp9 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(1.0f, 0.2862745f, 0.7294118f, 1.0f));
    Background(::g::Uno::Float4__New2(0.9333333f, 0.9333333f, 0.9333333f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Node*/])), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Node*/])), temp4);
    temp1->Background(temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Node*/])), temp2);
    temp2->Value(::STRINGS[0/*"SWIPE LEFT"*/]);
    temp2->FontSize(24.0f);
    temp2->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp2->Alignment(10);
    temp4->Background(temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Node*/])), logo);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[11/*Fuse.Behavior*/])), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[11/*Fuse.Behavior*/])), timeline);
    uPtr(logo)->Name(::STRINGS[1/*"logo"*/]);
    uPtr(logo)->File(::g::Uno::UX::BundleFileSource::New1(::g::Onboarding_bundle::logo8694d147()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[16/*Fuse.Animations.Animator*/])), temp6);
    ::g::Fuse::Animations::Change__set_Value_fn(temp6, uCRef(1.0));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(timeline)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[16/*Fuse.Animations.Animator*/])), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(timeline)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[16/*Fuse.Animations.Animator*/])), temp8);
    ::g::Fuse::Animations::Change__set_Value_fn(temp7, uCRef(1.0f));
    temp7->Duration(1.0);
    temp8->Y(-2.0f);
    temp8->Easing(26);
    temp8->Duration(1.0);
    temp8->Delay(1.0);
    temp8->RelativeTo(::g::Fuse::TranslationModes::Size());
    temp8->Target(logo);
    RootNode(temp);
    Theme(::g::Fuse::BasicTheme::BasicTheme::Singleton1());
}

// public MainView New() [static] :24
MainView* MainView::New1()
{
    MainView* obj1 = (MainView*)uNew(MainView_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

} // ::g
