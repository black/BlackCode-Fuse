// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\TestApp\.build\Simulator\Android\Cache\GeneratedCode\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.Factory.h>
#include <_root.MainView.Fuse_Effects_Blur_float_Radius_Property.h>
#include <_root.MainView.Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_Status-5e09bf19.h>
#include <_root.MainView.Fuse_Triggers_WhileBool_bool_Value_Property.h>
#include <_root.MainView.h>
#include <_root.MainView.Template.h>
#include <_root.MainView.Template1.h>
#include <_root.MainView.Template2.h>
#include <_root.TestApp_bundle.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.AppBase.h>
#include <Fuse.BasicTheme.BasicTheme.h>
#include <Fuse.Behavior.h>
#include <Fuse.Controls.BottomBarBackground.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.ContentControl.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.GraphicsView.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Page.h>
#include <Fuse.Controls.PageIndicator.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Slider.h>
#include <Fuse.Controls.Switch.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Effects.Blur.h>
#include <Fuse.Effects.Effect.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.SizeUnit.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.iOS.StatusBarConfig.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Navigation.INavigation.h>
#include <Fuse.Navigation.LinearNavigation.h>
#include <Fuse.Navigation.StructuredNavigation.h>
#include <Fuse.Navigation.SwipeDirection.h>
#include <Fuse.Navigation.SwipeEnds.h>
#include <Fuse.Navigation.SwipeNavigate.h>
#include <Fuse.Navigation.WhileActive.h>
#include <Fuse.Navigation.WhileNavigationTrigger.h>
#include <Fuse.Node.h>
#include <Fuse.Style.h>
#include <Fuse.StylePropertyWithUnit-3.h>
#include <Fuse.Theme.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.ProgressAnimation.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.Vibration.Vibrate.h>
#include <Uno.Bool.h>
#include <Uno.BundleFile.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Platform.iOS.StatusBarStyle.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.IFactory.h>
#include <Uno.UX.ITemplate.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Template-1.h>
static uString* STRINGS[6];
static uType* TYPES[37];

namespace g{

// public partial sealed class MainView :1
// {
// static MainView() :131
static void MainView__cctor__fn(uType* __type)
{
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 26;
    options.ObjectSize = sizeof(MainView);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("MainView", options);
    type->SetBase(::g::Fuse::App_typeof());
    type->fp_ctor_ = (void*)MainView__New1_fn;
    type->fp_cctor_ = MainView__cctor__fn;
    ::STRINGS[0] = uString::Const("This button triggers the phone's vibrate function");
    ::STRINGS[1] = uString::Const("Vibrate");
    ::STRINGS[2] = uString::Const("page2");
    ::STRINGS[3] = uString::Const("This toggle switch disables your ability to swipe between pages");
    ::STRINGS[4] = uString::Const("page3");
    ::STRINGS[5] = uString::Const("This slider blurs the background image");
    ::TYPES[0] = ::g::Fuse::Triggers::WhileBool_typeof();
    ::TYPES[1] = ::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::Text_typeof());
    ::TYPES[2] = ::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::Image_typeof());
    ::TYPES[3] = ::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::Page_typeof());
    ::TYPES[4] = ::g::Fuse::Navigation::INavigation_typeof();
    ::TYPES[5] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[6] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[7] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Platform::iOS::StatusBarStyle_typeof());
    ::TYPES[8] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Platform::iOS::StatusBarStyle_typeof());
    ::TYPES[9] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[10] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[11] = ::g::Fuse::AppBase_typeof();
    ::TYPES[12] = ::g::Fuse::Controls::Panel_typeof();
    ::TYPES[13] = ::g::Fuse::Node_typeof();
    ::TYPES[14] = ::g::Fuse::Behavior_typeof();
    ::TYPES[15] = ::g::Fuse::iOS::StatusBarConfig_typeof();
    ::TYPES[16] = ::g::Fuse::Style_typeof();
    ::TYPES[17] = ::g::Uno::UX::ITemplate_typeof();
    ::TYPES[18] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[19] = ::g::Fuse::Controls::PageIndicator_typeof();
    ::TYPES[20] = ::g::Uno::UX::IFactory_typeof();
    ::TYPES[21] = ::g::Fuse::Navigation::StructuredNavigation_typeof();
    ::TYPES[22] = ::g::Fuse::Triggers::Trigger_typeof();
    ::TYPES[23] = ::g::Fuse::Navigation::SwipeNavigate_typeof();
    ::TYPES[24] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[25] = ::g::Fuse::Controls::Button_typeof();
    ::TYPES[26] = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    ::TYPES[27] = ::g::Fuse::Vibration::Vibrate_typeof();
    ::TYPES[28] = ::g::Fuse::Controls::Image_typeof();
    ::TYPES[29] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[30] = ::g::TestApp_bundle_typeof();
    ::TYPES[31] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[32] = ::g::Fuse::Navigation::WhileNavigationTrigger_typeof();
    ::TYPES[33] = ::g::Fuse::Controls::ContentControl_typeof();
    ::TYPES[34] = ::g::Fuse::Effects::Effect_typeof();
    ::TYPES[35] = ::g::Fuse::Effects::Blur_typeof();
    ::TYPES[36] = ::g::Fuse::BasicTheme::BasicTheme_typeof();
    type->SetFields(16,
        ::g::Fuse::Effects::Blur_typeof(), offsetof(::g::MainView, blur), 0,
        MainView__Fuse_Effects_Blur_float_Radius_Property_typeof(), offsetof(::g::MainView, blur_Radius_inst), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, canSwipe), 0,
        MainView__Fuse_Triggers_WhileBool_bool_Value_Property_typeof(), offsetof(::g::MainView, canSwipe_Value_inst), 0,
        ::g::Fuse::Navigation::LinearNavigation_typeof(), offsetof(::g::MainView, navigation), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, page2), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, page3), 0,
        ::g::Fuse::iOS::StatusBarConfig_typeof(), offsetof(::g::MainView, statusBarConfig), 0,
        MainView__Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property_typeof(), offsetof(::g::MainView, statusBarConfig_Style_inst), 0,
        ::g::Fuse::Navigation::SwipeNavigate_typeof(), offsetof(::g::MainView, swipeNavigate), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__New1_fn, 0, true, MainView_typeof(), 0));
    return type;
}

// public MainView() :134
void MainView__ctor_3_fn(MainView* __this)
{
    __this->ctor_3();
}

// internal void InitializeUX() :138
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :134
void MainView__New1_fn(MainView** __retval)
{
    *__retval = MainView::New1();
}

// public MainView() [instance] :134
void MainView::ctor_3()
{
    ctor_2();
    InitializeUX();
}

// internal void InitializeUX() [instance] :138
void MainView::InitializeUX()
{
    MainView__Template* collection1;
    MainView__Template1* collection2;
    MainView__Template2* collection3;
    bool ret5;
    bool ret6;
    bool ret7;
    bool ret8;
    navigation = ::g::Fuse::Navigation::LinearNavigation::New1();
    canSwipe = ::g::Fuse::Triggers::WhileTrue::New1();
    canSwipe_Value_inst = MainView__Fuse_Triggers_WhileBool_bool_Value_Property::New1(canSwipe);
    statusBarConfig = ::g::Fuse::iOS::StatusBarConfig::New1();
    statusBarConfig_Style_inst = MainView__Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property::New1(statusBarConfig);
    blur = ::g::Fuse::Effects::Blur::New1();
    blur_Radius_inst = MainView__Fuse_Effects_Blur_float_Radius_Property::New1(blur);
    ::g::Fuse::Controls::DockPanel* temp = ::g::Fuse::Controls::DockPanel::New2();
    ::g::Fuse::Controls::Panel* temp1 = ::g::Fuse::Controls::Panel::New1();
    ::g::Fuse::Style* temp2 = ::g::Fuse::Style::New1();
    collection1 = MainView__Template::New1(this);
    uPtr(collection1)->Cascade(true);
    true;
    uPtr(collection1)->AffectSubtypes(true);
    true;
    MainView__Template* temp3 = collection1;
    collection2 = MainView__Template1::New1(this);
    uPtr(collection2)->Cascade(true);
    true;
    uPtr(collection2)->AffectSubtypes(true);
    true;
    MainView__Template1* temp4 = collection2;
    collection3 = MainView__Template2::New1(this);
    uPtr(collection3)->Cascade(true);
    true;
    uPtr(collection3)->AffectSubtypes(true);
    true;
    MainView__Template2* temp5 = collection3;
    ::g::Fuse::Controls::PageIndicator* temp6 = ::g::Fuse::Controls::PageIndicator::New3((uObject*)navigation);
    MainView__Factory* temp7 = MainView__Factory::New2(this);
    ::g::Fuse::Controls::Panel* temp8 = ::g::Fuse::Controls::Panel::New1();
    swipeNavigate = ::g::Fuse::Navigation::SwipeNavigate::New1();
    ::g::Fuse::Controls::Page* temp9 = ::g::Fuse::Controls::Page::New2();
    ::g::Fuse::Controls::Text* temp10 = ::g::Fuse::Controls::Text::New2();
    ::g::Fuse::Controls::Button* temp11 = ::g::Fuse::Controls::Button::New2();
    ::g::Fuse::Gestures::Clicked* temp12 = ::g::Fuse::Gestures::Clicked::New1();
    ::g::Fuse::Vibration::Vibrate* temp13 = ::g::Fuse::Vibration::Vibrate::New1();
    ::g::Fuse::Controls::Image* temp14 = ::g::Fuse::Controls::Image::New2();
    page2 = ::g::Fuse::Controls::Page::New2();
    ::g::Fuse::Controls::Text* temp15 = ::g::Fuse::Controls::Text::New2();
    ::g::Fuse::Controls::Switch* temp16 = ::g::Fuse::Controls::Switch::New3();
    ::g::Fuse::Triggers::WhileTrue* temp17 = ::g::Fuse::Triggers::WhileTrue::New1();
    ::g::Fuse::Animations::Change* temp18 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[5/*Fuse.Animations.Change<bool>*/], canSwipe_Value_inst);
    ::g::Fuse::Controls::Image* temp19 = ::g::Fuse::Controls::Image::New2();
    ::g::Fuse::Navigation::WhileActive* temp20 = ::g::Fuse::Navigation::WhileActive::New1();
    ::g::Fuse::Animations::Change* temp21 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[7/*Fuse.Animations.Change<Uno.Platform.iOS.StatusBarStyle>*/], statusBarConfig_Style_inst);
    page3 = ::g::Fuse::Controls::Page::New2();
    ::g::Fuse::Controls::Text* temp22 = ::g::Fuse::Controls::Text::New2();
    ::g::Fuse::Controls::Slider* temp23 = ::g::Fuse::Controls::Slider::New2();
    ::g::Fuse::Triggers::ProgressAnimation* temp24 = ::g::Fuse::Triggers::ProgressAnimation::New1();
    ::g::Fuse::Animations::Change* temp25 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[9/*Fuse.Animations.Change<float>*/], blur_Radius_inst);
    ::g::Fuse::Controls::GraphicsView* temp26 = ::g::Fuse::Controls::GraphicsView::New2();
    ::g::Fuse::Controls::Image* temp27 = ::g::Fuse::Controls::Image::New2();
    ::g::Fuse::Controls::BottomBarBackground* temp28 = ::g::Fuse::Controls::BottomBarBackground::New2();
    Background(::g::Uno::Float4__New2(0.9333333f, 0.9333333f, 0.9333333f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[13/*Fuse.Node*/])), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[13/*Fuse.Node*/])), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Behavior*/])), statusBarConfig);
    uPtr(statusBarConfig)->IsVisible(true);
    uPtr(statusBarConfig)->Style(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[13/*Fuse.Node*/])), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[13/*Fuse.Node*/])), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Styles()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[16/*Fuse.Style*/])), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[17/*Uno.UX.ITemplate*/])), (uObject*)temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[17/*Uno.UX.ITemplate*/])), (uObject*)temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[17/*Uno.UX.ITemplate*/])), (uObject*)temp5);
    temp6->Alignment(14);
    temp6->Margin(::g::Uno::Float4__New2(30.0f, 30.0f, 30.0f, 30.0f));
    temp6->DotFactory((uObject*)temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[13/*Fuse.Node*/])), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[13/*Fuse.Node*/])), page2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[13/*Fuse.Node*/])), page3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Behavior*/])), navigation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Behavior*/])), canSwipe);
    uPtr(navigation)->Easing(20);
    uPtr(canSwipe)->Value1(true);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(canSwipe)->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Behavior*/])), swipeNavigate);
    uPtr(swipeNavigate)->SwipeEnds(0);
    uPtr(swipeNavigate)->SwipeDirection(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[13/*Fuse.Node*/])), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[13/*Fuse.Node*/])), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[13/*Fuse.Node*/])), temp14);
    temp10->Value(::STRINGS[0/*"This button...*/]);
    ::g::Fuse::StylePropertyWithUnit__Set1_fn(uPtr(::g::Fuse::Elements::Element::WidthProperty()), temp10, uCRef(60.0f), uCRef<int>(1), &ret5);
    temp11->Text(::STRINGS[1/*"Vibrate"*/]);
    temp11->Height(45.0f);
    temp11->Alignment(12);
    temp11->Margin(::g::Uno::Float4__New2(20.0f, 80.0f, 20.0f, 80.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Behavior*/])), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[26/*Fuse.Triggers.Actions.TriggerAction*/])), temp13);
    temp13->Duration(0.2);
    temp14->File(::g::Uno::UX::BundleFileSource::New1(::g::TestApp_bundle::background1544780b1()));
    uPtr(page2)->Name(::STRINGS[2/*"page2"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page2)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[13/*Fuse.Node*/])), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page2)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[13/*Fuse.Node*/])), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page2)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[13/*Fuse.Node*/])), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page2)->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Behavior*/])), temp20);
    temp15->Value(::STRINGS[3/*"This toggle...*/]);
    ::g::Fuse::StylePropertyWithUnit__Set1_fn(uPtr(::g::Fuse::Elements::Element::WidthProperty()), temp15, uCRef(70.0f), uCRef<int>(1), &ret6);
    temp16->Alignment(14);
    temp16->Margin(::g::Uno::Float4__New2(0.0f, 80.0f, 0.0f, 80.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Behavior*/])), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[31/*Fuse.Animations.Animator*/])), temp18);
    ::g::Fuse::Animations::Change__set_Value_fn(temp18, uCRef(false));
    temp19->File(::g::Uno::UX::BundleFileSource::New1(::g::TestApp_bundle::background25cb178b6()));
    temp20->Threshold(0.5f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[31/*Fuse.Animations.Animator*/])), temp21);
    ::g::Fuse::Animations::Change__set_Value_fn(temp21, uCRef<int>(0));
    uPtr(page3)->Name(::STRINGS[4/*"page3"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page3)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[13/*Fuse.Node*/])), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page3)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[13/*Fuse.Node*/])), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page3)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[13/*Fuse.Node*/])), temp26);
    temp22->Value(::STRINGS[5/*"This slider...*/]);
    ::g::Fuse::StylePropertyWithUnit__Set1_fn(uPtr(::g::Fuse::Elements::Element::WidthProperty()), temp22, uCRef(70.0f), uCRef<int>(1), &ret7);
    ::g::Fuse::StylePropertyWithUnit__Set1_fn(uPtr(::g::Fuse::Elements::Element::WidthProperty()), temp23, uCRef(50.0f), uCRef<int>(1), &ret8);
    temp23->Alignment(12);
    temp23->Margin(::g::Uno::Float4__New2(0.0f, 80.0f, 0.0f, 80.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[14/*Fuse.Behavior*/])), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[31/*Fuse.Animations.Animator*/])), temp25);
    ::g::Fuse::Animations::Change__set_Value_fn(temp25, uCRef(5.0f));
    temp26->Content(temp27);
    temp27->Margin(::g::Uno::Float4__New2(-10.0f, -10.0f, -10.0f, -10.0f));
    temp27->File(::g::Uno::UX::BundleFileSource::New1(::g::TestApp_bundle::background30c900bbb()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Effects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[34/*Fuse.Effects.Effect*/])), blur);
    uPtr(blur)->Radius(0.0f);
    ::g::Fuse::Controls::DockPanel::SetDock(temp28, 3);
    RootNode(temp);
    Theme(::g::Fuse::BasicTheme::BasicTheme::Singleton1());
}

// public MainView New() [static] :134
MainView* MainView::New1()
{
    MainView* obj4 = (MainView*)uNew(MainView_typeof());
    obj4->ctor_3();
    return obj4;
}
// }

} // ::g
