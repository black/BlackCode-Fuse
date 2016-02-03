// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Add from App\.build\Simulator\Android\Cache\GeneratedCode\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.h>
#include <Fuse.AppBase.h>
#include <Fuse.BasicTheme.BasicTheme.h>
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
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.SizeUnit.h>
#include <Fuse.Elements.TextWrapping.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Layouts.Orientation.h>
#include <Fuse.Node.h>
#include <Fuse.StylePropertyWithUnit-3.h>
#include <Fuse.Theme.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.String.h>
static uString* STRINGS[4];
static uType* TYPES[11];

namespace g{

// public partial sealed class MainView :1
// {
// static MainView() :3
static void MainView__cctor__fn(uType* __type)
{
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.ObjectSize = sizeof(MainView);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("MainView", options);
    type->SetBase(::g::Fuse::App_typeof());
    type->fp_ctor_ = (void*)MainView__New1_fn;
    type->fp_cctor_ = MainView__cctor__fn;
    ::STRINGS[0] = uString::Const("www.medium.com");
    ::STRINGS[1] = uString::Const("Technology Trends in 2015");
    ::STRINGS[2] = uString::Const("by Mark");
    ::STRINGS[3] = uString::Const("Menu");
    ::TYPES[0] = ::g::Fuse::AppBase_typeof();
    ::TYPES[1] = ::g::Fuse::Controls::Panel_typeof();
    ::TYPES[2] = ::g::Fuse::Node_typeof();
    ::TYPES[3] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[4] = ::g::Fuse::Controls::Shape_typeof();
    ::TYPES[5] = ::g::Fuse::Drawing::Brush_typeof();
    ::TYPES[6] = ::g::Fuse::Controls::Rectangle_typeof();
    ::TYPES[7] = ::g::Fuse::Controls::StackPanel_typeof();
    ::TYPES[8] = ::g::Fuse::Drawing::Stroke_typeof();
    ::TYPES[9] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[10] = ::g::Fuse::BasicTheme::BasicTheme_typeof();
    type->SetFields(16);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__New1_fn, 0, true, MainView_typeof(), 0));
    return type;
}

// public MainView() :6
void MainView__ctor_3_fn(MainView* __this)
{
    __this->ctor_3();
}

// internal void InitializeUX() :10
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :6
void MainView__New1_fn(MainView** __retval)
{
    *__retval = MainView::New1();
}

// public MainView() [instance] :6
void MainView::ctor_3()
{
    ctor_2();
    InitializeUX();
}

// internal void InitializeUX() [instance] :10
void MainView::InitializeUX()
{
    bool ret2;
    bool ret3;
    bool ret4;
    bool ret5;
    bool ret6;
    ::g::Fuse::Controls::DockPanel* temp = ::g::Fuse::Controls::DockPanel::New2();
    ::g::Fuse::Controls::Rectangle* temp1 = ::g::Fuse::Controls::Rectangle::New2();
    ::g::Fuse::Controls::Rectangle* temp2 = ::g::Fuse::Controls::Rectangle::New2();
    ::g::Fuse::Controls::StackPanel* temp3 = ::g::Fuse::Controls::StackPanel::New2();
    ::g::Fuse::Controls::Rectangle* temp4 = ::g::Fuse::Controls::Rectangle::New2();
    ::g::Fuse::Controls::Rectangle* temp5 = ::g::Fuse::Controls::Rectangle::New2();
    ::g::Fuse::Drawing::Stroke* temp6 = ::g::Fuse::Drawing::Stroke::New1();
    ::g::Fuse::Drawing::StaticSolidColor* temp7 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(0.6666667f, 0.6666667f, 0.6666667f, 1.0f));
    ::g::Fuse::Controls::Text* temp8 = ::g::Fuse::Controls::Text::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp9 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Drawing::StaticSolidColor* temp10 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(0.9333333f, 0.9333333f, 0.9333333f, 1.0f));
    ::g::Fuse::Controls::StackPanel* temp11 = ::g::Fuse::Controls::StackPanel::New2();
    ::g::Fuse::Controls::Text* temp12 = ::g::Fuse::Controls::Text::New2();
    ::g::Fuse::Controls::Text* temp13 = ::g::Fuse::Controls::Text::New2();
    ::g::Fuse::Controls::Image* temp14 = ::g::Fuse::Controls::Image::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp15 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Drawing::StaticSolidColor* temp16 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(0.9058824f, 0.2980392f, 0.2352941f, 1.0f));
    ::g::Fuse::Controls::Rectangle* temp17 = ::g::Fuse::Controls::Rectangle::New2();
    ::g::Fuse::Controls::StackPanel* temp18 = ::g::Fuse::Controls::StackPanel::New2();
    ::g::Fuse::Controls::Text* temp19 = ::g::Fuse::Controls::Text::New2();
    ::g::Fuse::Controls::Text* temp20 = ::g::Fuse::Controls::Text::New2();
    ::g::Fuse::Controls::Text* temp21 = ::g::Fuse::Controls::Text::New2();
    ::g::Fuse::Controls::Text* temp22 = ::g::Fuse::Controls::Text::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp23 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(0.172549f, 0.2431373f, 0.3137255f, 1.0f));
    Background(::g::Uno::Float4__New2(0.4666667f, 0.4666667f, 0.4666667f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[2/*Fuse.Node*/])), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[2/*Fuse.Node*/])), temp17);
    ::g::Fuse::StylePropertyWithUnit__Set1_fn(uPtr(::g::Fuse::Elements::Element::WidthProperty()), temp1, uCRef(100.0f), uCRef<int>(1), &ret2);
    temp1->Height(390.0f);
    ::g::Fuse::Controls::DockPanel::SetDock(temp1, 2);
    temp1->Fill(temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[2/*Fuse.Node*/])), temp2);
    temp2->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    ::g::Fuse::StylePropertyWithUnit__Set1_fn(uPtr(::g::Fuse::Elements::Element::WidthProperty()), temp2, uCRef(100.0f), uCRef<int>(1), &ret3);
    temp2->Height(200.0f);
    temp2->Alignment(12);
    temp2->Margin(::g::Uno::Float4__New2(32.0f, 32.0f, 32.0f, 0.0f));
    temp2->Fill(temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[2/*Fuse.Node*/])), temp3);
    temp3->Orientation(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[2/*Fuse.Node*/])), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[2/*Fuse.Node*/])), temp11);
    temp4->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 0.0f, 0.0f));
    ::g::Fuse::StylePropertyWithUnit__Set1_fn(uPtr(::g::Fuse::Elements::Element::WidthProperty()), temp4, uCRef(100.0f), uCRef<int>(1), &ret4);
    temp4->Height(56.0f);
    temp4->Alignment(4);
    temp4->Fill(temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[2/*Fuse.Node*/])), temp5);
    temp5->CornerRadius(::g::Uno::Float4__New2(3.0f, 3.0f, 3.0f, 3.0f));
    ::g::Fuse::StylePropertyWithUnit__Set1_fn(uPtr(::g::Fuse::Elements::Element::WidthProperty()), temp5, uCRef(100.0f), uCRef<int>(1), &ret5);
    temp5->Height(40.0f);
    temp5->Alignment(4);
    temp5->Margin(::g::Uno::Float4__New2(8.0f, 8.0f, 64.0f, 8.0f));
    temp5->Fill(temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[8/*Fuse.Drawing.Stroke*/])), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[2/*Fuse.Node*/])), temp8);
    temp6->Width(1.0f);
    temp6->Brush(temp7);
    temp8->Value(::STRINGS[0/*"www.medium....*/]);
    temp8->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.5019608f));
    temp8->Alignment(8);
    temp8->Margin(::g::Uno::Float4__New2(8.0f, 0.0f, 0.0f, 0.0f));
    temp11->Orientation(1);
    temp11->Margin(::g::Uno::Float4__New2(8.0f, 8.0f, 8.0f, 8.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[2/*Fuse.Node*/])), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[2/*Fuse.Node*/])), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[2/*Fuse.Node*/])), temp14);
    temp12->Value(::STRINGS[1/*"Technology ...*/]);
    temp12->TextWrapping(1);
    temp12->FontSize(24.0f);
    temp12->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp13->Value(::STRINGS[2/*"by Mark"*/]);
    temp13->TextColor(::g::Uno::Float4__New2(1.0f, 0.0f, 0.0f, 1.0f));
    ::g::Fuse::StylePropertyWithUnit__Set1_fn(uPtr(::g::Fuse::Elements::Element::WidthProperty()), temp17, uCRef(100.0f), uCRef<int>(1), &ret6);
    temp17->Height(250.0f);
    ::g::Fuse::Controls::DockPanel::SetDock(temp17, 3);
    temp17->Fill(temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[2/*Fuse.Node*/])), temp18);
    temp18->Orientation(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[2/*Fuse.Node*/])), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[2/*Fuse.Node*/])), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[2/*Fuse.Node*/])), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[2/*Fuse.Node*/])), temp22);
    temp19->Value(::STRINGS[3/*"Menu"*/]);
    temp19->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp20->Value(::STRINGS[3/*"Menu"*/]);
    temp20->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp21->Value(::STRINGS[3/*"Menu"*/]);
    temp21->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp22->Value(::STRINGS[3/*"Menu"*/]);
    temp22->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    RootNode(temp);
    Theme(::g::Fuse::BasicTheme::BasicTheme::Singleton1());
}

// public MainView New() [static] :6
MainView* MainView::New1()
{
    MainView* obj1 = (MainView*)uNew(MainView_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

} // ::g
