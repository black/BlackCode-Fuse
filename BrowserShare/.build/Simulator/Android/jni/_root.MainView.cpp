// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\BrowserShare\.build\Simulator\Android\Cache\GeneratedCode\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.BrowserShare_bundle.h>
#include <_root.MainView.Fuse_Elements_Element_Fuse_Elements_Visibility_V-2e4a2461.h>
#include <_root.MainView.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.AppBase.h>
#include <Fuse.BasicTheme.BasicTheme.h>
#include <Fuse.Behavior.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Effects.DropShadow.h>
#include <Fuse.Effects.Effect.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.SizeUnit.h>
#include <Fuse.Elements.TextWrapping.h>
#include <Fuse.Elements.Visibility.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Layouts.Orientation.h>
#include <Fuse.Node.h>
#include <Fuse.StylePropertyWithUnit-3.h>
#include <Fuse.Theme.h>
#include <Fuse.Translation.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Uno.Bool.h>
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
static uString* STRINGS[10];
static uType* TYPES[23];

namespace g{

// public partial sealed class MainView :1
// {
// static MainView() :12
static void MainView__cctor__fn(uType* __type)
{
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 18;
    options.ObjectSize = sizeof(MainView);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("MainView", options);
    type->SetBase(::g::Fuse::App_typeof());
    type->fp_ctor_ = (void*)MainView__New1_fn;
    type->fp_cctor_ = MainView__cctor__fn;
    ::STRINGS[0] = uString::Const("Menu");
    ::STRINGS[1] = uString::Const("New Tab");
    ::STRINGS[2] = uString::Const("Bookmarks");
    ::STRINGS[3] = uString::Const("History");
    ::STRINGS[4] = uString::Const("Share");
    ::STRINGS[5] = uString::Const("Print");
    ::STRINGS[6] = uString::Const("www.medium.com");
    ::STRINGS[7] = uString::Const("4");
    ::STRINGS[8] = uString::Const("Technology Trends in 2015");
    ::STRINGS[9] = uString::Const("by Mark");
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof());
    ::TYPES[2] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof());
    ::TYPES[3] = ::g::Fuse::AppBase_typeof();
    ::TYPES[4] = ::g::Fuse::Controls::Panel_typeof();
    ::TYPES[5] = ::g::Fuse::Node_typeof();
    ::TYPES[6] = ::g::Fuse::Controls::Shape_typeof();
    ::TYPES[7] = ::g::Fuse::Drawing::Brush_typeof();
    ::TYPES[8] = ::g::Fuse::Controls::Rectangle_typeof();
    ::TYPES[9] = ::g::Fuse::Controls::StackPanel_typeof();
    ::TYPES[10] = ::g::Fuse::Effects::Effect_typeof();
    ::TYPES[11] = ::g::Fuse::Behavior_typeof();
    ::TYPES[12] = ::g::Fuse::Triggers::Trigger_typeof();
    ::TYPES[13] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[14] = ::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(::g::Fuse::Translation_typeof());
    ::TYPES[15] = ::g::Fuse::Animations::TrackAnimator_typeof();
    ::TYPES[16] = ::g::Fuse::Effects::DropShadow_typeof();
    ::TYPES[17] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[18] = ::g::Fuse::Drawing::Stroke_typeof();
    ::TYPES[19] = ::g::Fuse::Controls::Image_typeof();
    ::TYPES[20] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[21] = ::g::BrowserShare_bundle_typeof();
    ::TYPES[22] = ::g::Fuse::BasicTheme::BasicTheme_typeof();
    type->SetFields(16,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::MainView, Menu), 0,
        MainView__Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property_typeof(), offsetof(::g::MainView, Menu_Visibility_inst), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__New1_fn, 0, true, MainView_typeof(), 0));
    return type;
}

// public MainView() :15
void MainView__ctor_3_fn(MainView* __this)
{
    __this->ctor_3();
}

// internal void InitializeUX() :19
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :15
void MainView__New1_fn(MainView** __retval)
{
    *__retval = MainView::New1();
}

// public MainView() [instance] :15
void MainView::ctor_3()
{
    ctor_2();
    InitializeUX();
}

// internal void InitializeUX() [instance] :19
void MainView::InitializeUX()
{
    bool ret2;
    bool ret3;
    bool ret4;
    bool ret5;
    bool ret6;
    bool ret7;
    bool ret8;
    Menu = ::g::Fuse::Controls::Rectangle::New2();
    Menu_Visibility_inst = MainView__Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property::New1(Menu);
    ::g::Fuse::Controls::DockPanel* temp = ::g::Fuse::Controls::DockPanel::New2();
    ::g::Fuse::Controls::Rectangle* temp1 = ::g::Fuse::Controls::Rectangle::New2();
    ::g::Fuse::Controls::Rectangle* temp2 = ::g::Fuse::Controls::Rectangle::New2();
    ::g::Fuse::Controls::StackPanel* temp3 = ::g::Fuse::Controls::StackPanel::New2();
    ::g::Fuse::Controls::Panel* temp4 = ::g::Fuse::Controls::Panel::New1();
    ::g::Fuse::Triggers::WhileTrue* temp5 = ::g::Fuse::Triggers::WhileTrue::New1();
    ::g::Fuse::Animations::Move* temp6 = ::g::Fuse::Animations::Move::New1();
    ::g::Fuse::Animations::Change* temp7 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[1/*Fuse.Animations.Change<Fuse.Elements.Visibility>*/], Menu_Visibility_inst);
    ::g::Fuse::Effects::DropShadow* temp8 = ::g::Fuse::Effects::DropShadow::New1();
    ::g::Fuse::Controls::StackPanel* temp9 = ::g::Fuse::Controls::StackPanel::New2();
    ::g::Fuse::Controls::Text* temp10 = ::g::Fuse::Controls::Text::New2();
    ::g::Fuse::Controls::Text* temp11 = ::g::Fuse::Controls::Text::New2();
    ::g::Fuse::Controls::Text* temp12 = ::g::Fuse::Controls::Text::New2();
    ::g::Fuse::Controls::Text* temp13 = ::g::Fuse::Controls::Text::New2();
    ::g::Fuse::Controls::Text* temp14 = ::g::Fuse::Controls::Text::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp15 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Controls::Rectangle* temp16 = ::g::Fuse::Controls::Rectangle::New2();
    ::g::Fuse::Controls::Rectangle* temp17 = ::g::Fuse::Controls::Rectangle::New2();
    ::g::Fuse::Drawing::Stroke* temp18 = ::g::Fuse::Drawing::Stroke::New1();
    ::g::Fuse::Drawing::StaticSolidColor* temp19 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(0.6666667f, 0.6666667f, 0.6666667f, 1.0f));
    ::g::Fuse::Controls::Text* temp20 = ::g::Fuse::Controls::Text::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp21 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Controls::Rectangle* temp22 = ::g::Fuse::Controls::Rectangle::New2();
    ::g::Fuse::Drawing::Stroke* temp23 = ::g::Fuse::Drawing::Stroke::New1();
    ::g::Fuse::Drawing::StaticSolidColor* temp24 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(0.6666667f, 0.6666667f, 0.6666667f, 1.0f));
    ::g::Fuse::Controls::Text* temp25 = ::g::Fuse::Controls::Text::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp26 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Controls::Image* temp27 = ::g::Fuse::Controls::Image::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp28 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(0.9333333f, 0.9333333f, 0.9333333f, 1.0f));
    ::g::Fuse::Controls::StackPanel* temp29 = ::g::Fuse::Controls::StackPanel::New2();
    ::g::Fuse::Controls::Text* temp30 = ::g::Fuse::Controls::Text::New2();
    ::g::Fuse::Controls::Text* temp31 = ::g::Fuse::Controls::Text::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp32 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Drawing::StaticSolidColor* temp33 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(0.9058824f, 0.2980392f, 0.2352941f, 1.0f));
    ::g::Fuse::Controls::Rectangle* temp34 = ::g::Fuse::Controls::Rectangle::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp35 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(0.1843137f, 0.2039216f, 0.2313726f, 1.0f));
    Background(::g::Uno::Float4__New2(0.4666667f, 0.4666667f, 0.4666667f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Node*/])), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Node*/])), temp34);
    ::g::Fuse::StylePropertyWithUnit__Set1_fn(uPtr(::g::Fuse::Elements::Element::WidthProperty()), temp1, uCRef(100.0f), uCRef<int>(1), &ret2);
    temp1->Height(390.0f);
    ::g::Fuse::Controls::DockPanel::SetDock(temp1, 2);
    temp1->Fill(temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Node*/])), temp2);
    temp2->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    ::g::Fuse::StylePropertyWithUnit__Set1_fn(uPtr(::g::Fuse::Elements::Element::WidthProperty()), temp2, uCRef(100.0f), uCRef<int>(1), &ret3);
    temp2->Height(200.0f);
    temp2->Alignment(12);
    temp2->Margin(::g::Uno::Float4__New2(32.0f, 32.0f, 32.0f, 0.0f));
    temp2->Fill(temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Node*/])), temp3);
    temp3->Orientation(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Node*/])), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Node*/])), Menu);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Node*/])), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Node*/])), temp29);
    uPtr(Menu)->CornerRadius(::g::Uno::Float4__New2(3.0f, 3.0f, 3.0f, 3.0f));
    ::g::Fuse::StylePropertyWithUnit__Set1_fn(uPtr(::g::Fuse::Elements::Element::WidthProperty()), Menu, uCRef(40.0f), uCRef<int>(1), &ret4);
    uPtr(Menu)->Height(140.0f);
    uPtr(Menu)->Alignment(7);
    uPtr(Menu)->Margin(::g::Uno::Float4__New2(8.0f, 8.0f, 40.0f, 8.0f));
    uPtr(Menu)->Name(::STRINGS[0/*"Menu"*/]);
    uPtr(Menu)->Fill(temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Menu)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Node*/])), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Menu)->Effects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[10/*Fuse.Effects.Effect*/])), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Menu)->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[11/*Fuse.Behavior*/])), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[13/*Fuse.Animations.Animator*/])), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[13/*Fuse.Animations.Animator*/])), temp7);
    temp6->X(10.0f);
    temp6->Duration(2.0);
    ::g::Fuse::Animations::Change__set_Value_fn(temp7, uCRef<int>(0));
    temp7->Delay(2.0);
    temp8->Size(4.0f);
    temp8->Angle(90.0f);
    temp8->Distance(2.0f);
    temp8->Spread(0.05f);
    temp9->Orientation(1);
    temp9->ItemSpacing(8.0f);
    temp9->Padding(::g::Uno::Float4__New2(8.0f, 8.0f, 8.0f, 8.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Node*/])), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Node*/])), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Node*/])), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Node*/])), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Node*/])), temp14);
    temp10->Value(::STRINGS[1/*"New Tab"*/]);
    temp10->FontSize(14.0f);
    temp10->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.5019608f));
    temp11->Value(::STRINGS[2/*"Bookmarks"*/]);
    temp11->FontSize(14.0f);
    temp11->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.5019608f));
    temp12->Value(::STRINGS[3/*"History"*/]);
    temp12->FontSize(14.0f);
    temp12->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.5019608f));
    temp13->Value(::STRINGS[4/*"Share"*/]);
    temp13->FontSize(14.0f);
    temp13->TextColor(::g::Uno::Float4__New2(1.0f, 0.0f, 0.0f, 1.0f));
    temp14->Value(::STRINGS[5/*"Print"*/]);
    temp14->FontSize(14.0f);
    temp14->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.5019608f));
    temp16->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    ::g::Fuse::StylePropertyWithUnit__Set1_fn(uPtr(::g::Fuse::Elements::Element::WidthProperty()), temp16, uCRef(100.0f), uCRef<int>(1), &ret5);
    temp16->Height(56.0f);
    temp16->Alignment(4);
    temp16->Fill(temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Node*/])), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Node*/])), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Node*/])), temp27);
    temp17->CornerRadius(::g::Uno::Float4__New2(3.0f, 3.0f, 3.0f, 3.0f));
    ::g::Fuse::StylePropertyWithUnit__Set1_fn(uPtr(::g::Fuse::Elements::Element::WidthProperty()), temp17, uCRef(100.0f), uCRef<int>(1), &ret6);
    temp17->Height(40.0f);
    temp17->Alignment(4);
    temp17->Margin(::g::Uno::Float4__New2(8.0f, 8.0f, 72.0f, 8.0f));
    temp17->Fill(temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Drawing.Stroke*/])), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Node*/])), temp20);
    temp18->Width(1.0f);
    temp18->Brush(temp19);
    temp20->Value(::STRINGS[6/*"www.medium....*/]);
    temp20->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.5019608f));
    temp20->Alignment(8);
    temp20->Margin(::g::Uno::Float4__New2(8.0f, 0.0f, 0.0f, 0.0f));
    temp22->CornerRadius(::g::Uno::Float4__New2(2.0f, 2.0f, 2.0f, 2.0f));
    temp22->Width(24.0f);
    temp22->Height(24.0f);
    temp22->Alignment(7);
    temp22->Margin(::g::Uno::Float4__New2(16.0f, 16.0f, 40.0f, 8.0f));
    temp22->Fill(temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[18/*Fuse.Drawing.Stroke*/])), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Node*/])), temp25);
    temp23->Width(1.0f);
    temp23->Brush(temp24);
    temp25->Value(::STRINGS[7/*"4"*/]);
    temp25->FontSize(12.0f);
    temp25->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp25->Margin(::g::Uno::Float4__New2(8.0f, 6.0f, 8.0f, 6.0f));
    temp27->Width(40.0f);
    ::g::Fuse::StylePropertyWithUnit__Set1_fn(uPtr(::g::Fuse::Elements::Element::HeightProperty()), temp27, uCRef(100.0f), uCRef<int>(1), &ret7);
    temp27->Alignment(7);
    temp27->Padding(::g::Uno::Float4__New2(8.0f, 16.0f, 8.0f, 16.0f));
    temp27->Opacity(0.54f);
    temp27->File(::g::Uno::UX::BundleFileSource::New1(::g::BrowserShare_bundle::_1b19f03b6()));
    temp29->Orientation(1);
    temp29->Margin(::g::Uno::Float4__New2(8.0f, 72.0f, 64.0f, 8.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Node*/])), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Node*/])), temp31);
    temp30->Value(::STRINGS[8/*"Technology ...*/]);
    temp30->TextWrapping(1);
    temp30->FontSize(21.0f);
    temp30->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp31->Value(::STRINGS[9/*"by Mark"*/]);
    temp31->FontSize(16.0f);
    temp31->TextColor(::g::Uno::Float4__New2(1.0f, 0.0f, 0.0f, 1.0f));
    ::g::Fuse::StylePropertyWithUnit__Set1_fn(uPtr(::g::Fuse::Elements::Element::WidthProperty()), temp34, uCRef(100.0f), uCRef<int>(1), &ret8);
    temp34->Height(250.0f);
    ::g::Fuse::Controls::DockPanel::SetDock(temp34, 3);
    temp34->Fill(temp35);
    RootNode(temp);
    Theme(::g::Fuse::BasicTheme::BasicTheme::Singleton1());
}

// public MainView New() [static] :15
MainView* MainView::New1()
{
    MainView* obj1 = (MainView*)uNew(MainView_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

} // ::g
