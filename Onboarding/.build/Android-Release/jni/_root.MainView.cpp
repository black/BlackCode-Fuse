// This file was generated based on 'C:\Users\Kuro\Desktop\GitHub\BlackCode-Fuse\Onboarding\.cache\GeneratedCode\MainView.g.uno'.
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
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Page.h>
#include <Fuse.Controls.PageControl.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.WhilePressed.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Layouts.Orientation.h>
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
static uString* STRINGS[5];
static uType* TYPES[25];

namespace g{

// public partial sealed class MainView :1
// {
// static MainView() :22
static void MainView__cctor__fn(uType* __type)
{
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 21;
    options.ObjectSize = sizeof(MainView);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("MainView", options);
    type->SetBase(::g::Fuse::App_typeof());
    type->fp_ctor_ = (void*)MainView__New1_fn;
    type->fp_cctor_ = MainView__cctor__fn;
    ::STRINGS[0] = uString::Const("Cubeit");
    ::STRINGS[1] = uString::Const("Collect and Share");
    ::STRINGS[2] = uString::Const("LOGIN");
    ::STRINGS[3] = uString::Const("Slide");
    ::STRINGS[4] = uString::Const("logo");
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
    ::TYPES[10] = ::g::Fuse::Controls::StackPanel_typeof();
    ::TYPES[11] = ::g::Fuse::Controls::Image_typeof();
    ::TYPES[12] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[13] = ::g::Onboarding_bundle_typeof();
    ::TYPES[14] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[15] = ::g::Fuse::Controls::Rectangle_typeof();
    ::TYPES[16] = ::g::Fuse::Controls::Shape_typeof();
    ::TYPES[17] = ::g::Fuse::Behavior_typeof();
    ::TYPES[18] = ::g::Fuse::Triggers::Trigger_typeof();
    ::TYPES[19] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[20] = ::g::Fuse::Animations::TrackAnimator_typeof();
    ::TYPES[21] = ::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(::g::Fuse::Translation_typeof());
    ::TYPES[22] = ::g::Fuse::Animations::Move_typeof();
    ::TYPES[23] = ::g::Fuse::TranslationModes_typeof();
    ::TYPES[24] = ::g::Fuse::BasicTheme::BasicTheme_typeof();
    type->SetFields(16,
        ::g::Fuse::Controls::Image_typeof(), offsetof(::g::MainView, logo), 0,
        MainView__Fuse_Elements_Element_float_Opacity_Property_typeof(), offsetof(::g::MainView, logo_Opacity_inst), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, Slide), 0,
        ::g::Fuse::Triggers::Timeline_typeof(), offsetof(::g::MainView, timeline), 0,
        MainView__Fuse_Triggers_Timeline_double_TargetProgress_Property_typeof(), offsetof(::g::MainView, timeline_TargetProgress_inst), 0);
    return type;
}

// public MainView() :25
void MainView__ctor_3_fn(MainView* __this)
{
    __this->ctor_3();
}

// internal void InitializeUX() :29
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :25
void MainView__New1_fn(MainView** __retval)
{
    *__retval = MainView::New1();
}

// public MainView() [instance] :25
void MainView::ctor_3()
{
    ctor_2();
    InitializeUX();
}

// internal void InitializeUX() [instance] :29
void MainView::InitializeUX()
{
    timeline = ::g::Fuse::Triggers::Timeline::New1();
    timeline_TargetProgress_inst = MainView__Fuse_Triggers_Timeline_double_TargetProgress_Property::New1(timeline);
    logo = ::g::Fuse::Controls::Image::New2();
    logo_Opacity_inst = MainView__Fuse_Elements_Element_float_Opacity_Property::New1(logo);
    ::g::Fuse::Controls::PageControl* temp = ::g::Fuse::Controls::PageControl::New2();
    ::g::Fuse::Controls::Page* temp1 = ::g::Fuse::Controls::Page::New2();
    ::g::Fuse::Controls::DockPanel* temp2 = ::g::Fuse::Controls::DockPanel::New2();
    ::g::Fuse::Controls::StackPanel* temp3 = ::g::Fuse::Controls::StackPanel::New2();
    ::g::Fuse::Controls::Image* temp4 = ::g::Fuse::Controls::Image::New2();
    ::g::Fuse::Controls::Text* temp5 = ::g::Fuse::Controls::Text::New2();
    ::g::Fuse::Controls::Text* temp6 = ::g::Fuse::Controls::Text::New2();
    ::g::Fuse::Controls::Rectangle* temp7 = ::g::Fuse::Controls::Rectangle::New2();
    ::g::Fuse::Controls::Text* temp8 = ::g::Fuse::Controls::Text::New2();
    ::g::Fuse::Gestures::WhilePressed* temp9 = ::g::Fuse::Gestures::WhilePressed::New1();
    ::g::Fuse::Drawing::StaticSolidColor* temp10 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Drawing::StaticSolidColor* temp11 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(0.9058824f, 0.2980392f, 0.2352941f, 1.0f));
    Slide = ::g::Fuse::Controls::Page::New2();
    ::g::Fuse::Navigation::WhileActive* temp12 = ::g::Fuse::Navigation::WhileActive::New1();
    ::g::Fuse::Animations::Change* temp13 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[1/*Fuse.Animations.Change<double>*/], timeline_TargetProgress_inst);
    ::g::Fuse::Animations::Change* temp14 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[3/*Fuse.Animations.Change<float>*/], logo_Opacity_inst);
    ::g::Fuse::Animations::Move* temp15 = ::g::Fuse::Animations::Move::New1();
    ::g::Fuse::Drawing::StaticSolidColor* temp16 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(0.5137255f, 0.5137255f, 0.5137255f, 1.0f));
    Background(::g::Uno::Float4__New2(0.9333333f, 0.9333333f, 0.9333333f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Node*/])), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Node*/])), Slide);
    temp1->Background(temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Node*/])), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Node*/])), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Node*/])), temp7);
    temp3->Orientation(1);
    temp3->Padding(::g::Uno::Float4__New2(0.0f, 150.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp3, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Node*/])), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Node*/])), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Node*/])), temp6);
    temp4->Width(100.0f);
    temp4->Height(100.0f);
    temp4->File(::g::Uno::UX::BundleFileSource::New1(::g::Onboarding_bundle::logo31b50f77()));
    temp5->Value(::STRINGS[0/*"Cubeit"*/]);
    temp5->FontSize(32.0f);
    temp5->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp5->Alignment(10);
    temp5->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 0.0f));
    temp6->Value(::STRINGS[1/*"Collect and...*/]);
    temp6->FontSize(20.0f);
    temp6->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp6->Alignment(10);
    temp6->Margin(::g::Uno::Float4__New2(0.0f, 8.0f, 0.0f, 0.0f));
    temp7->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp7->Width(200.0f);
    temp7->Height(48.0f);
    temp7->Margin(::g::Uno::Float4__New2(0.0f, 40.0f, 0.0f, 150.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp7, 3);
    temp7->Fill(temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Node*/])), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[17/*Fuse.Behavior*/])), temp9);
    temp8->Value(::STRINGS[2/*"LOGIN"*/]);
    temp8->FontSize(16.0f);
    temp8->TextColor(::g::Uno::Float4__New2(0.9058824f, 0.2980392f, 0.2352941f, 1.0f));
    temp8->Alignment(10);
    uPtr(Slide)->Name(::STRINGS[3/*"Slide"*/]);
    uPtr(Slide)->Background(temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Slide)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Node*/])), logo);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Slide)->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[17/*Fuse.Behavior*/])), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Slide)->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[17/*Fuse.Behavior*/])), timeline);
    uPtr(logo)->Width(100.0f);
    uPtr(logo)->Height(100.0f);
    uPtr(logo)->Name(::STRINGS[4/*"logo"*/]);
    uPtr(logo)->File(::g::Uno::UX::BundleFileSource::New1(::g::Onboarding_bundle::logo31b50f77()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[19/*Fuse.Animations.Animator*/])), temp13);
    ::g::Fuse::Animations::Change__set_Value_fn(temp13, uCRef(1.0));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(timeline)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[19/*Fuse.Animations.Animator*/])), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(timeline)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[19/*Fuse.Animations.Animator*/])), temp15);
    ::g::Fuse::Animations::Change__set_Value_fn(temp14, uCRef(0.5f));
    temp14->Easing(25);
    temp14->Duration(1.0);
    temp15->Y(-1.0f);
    temp15->Easing(26);
    temp15->Duration(1.0);
    temp15->Delay(1.0);
    temp15->RelativeTo(::g::Fuse::TranslationModes::Size());
    temp15->Target(logo);
    RootNode(temp);
    Theme(::g::Fuse::BasicTheme::BasicTheme::Singleton1());
}

// public MainView New() [static] :25
MainView* MainView::New1()
{
    MainView* obj1 = (MainView*)uNew(MainView_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

} // ::g
