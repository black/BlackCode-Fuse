// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Welcome\.build\Simulator\Android\Cache\GeneratedCode\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Camera.h>
#include <_root.MainView.Fuse_Elements_Element_float_Opacity_Property.h>
#include <_root.MainView.Fuse_Rotation_float_Degrees_Property.h>
#include <_root.MainView.Fuse_Scaling_float_Factor_Property.h>
#include <_root.MainView.Fuse_Translation_float_X_Property.h>
#include <_root.MainView.Fuse_Triggers_Timeline_double_TargetProgress_Property.h>
#include <_root.MainView.h>
#include <_root.Notes.h>
#include <_root.Payment.h>
#include <_root.T.h>
#include <_root.WelcomeAnimation_bundle.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.AppBase.h>
#include <Fuse.BasicTheme.BasicTheme.h>
#include <Fuse.Behavior.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Page.h>
#include <Fuse.Controls.PageControl.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.Viewbox.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.SizeUnit.h>
#include <Fuse.iOS.StatusBarConfig.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Navigation.WhileActive.h>
#include <Fuse.Node.h>
#include <Fuse.Rotation.h>
#include <Fuse.Scaling.h>
#include <Fuse.StylePropertyWithUnit-3.h>
#include <Fuse.Theme.h>
#include <Fuse.Transform.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Timeline.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Bool.h>
#include <Uno.BundleFile.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.Platform.iOS.StatusBarStyle.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property-1.h>
static uString* STRINGS[17];
static uType* TYPES[30];

namespace g{

// public partial sealed class MainView :102
// {
// static MainView() :180
static void MainView__cctor__fn(uType* __type)
{
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 50;
    options.ObjectSize = sizeof(MainView);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("MainView", options);
    type->SetBase(::g::Fuse::App_typeof());
    type->fp_ctor_ = (void*)MainView__New1_fn;
    type->fp_cctor_ = MainView__cctor__fn;
    ::STRINGS[0] = uString::Const("Swipe left");
    ::STRINGS[1] = uString::Const("panel2");
    ::STRINGS[2] = uString::Const("camera");
    ::STRINGS[3] = uString::Const("arrow1");
    ::STRINGS[4] = uString::Const("payment");
    ::STRINGS[5] = uString::Const("notes");
    ::STRINGS[6] = uString::Const("arrow2");
    ::STRINGS[7] = uString::Const("Send");
    ::STRINGS[8] = uString::Const("sendImage");
    ::STRINGS[9] = uString::Const("Take a photo.");
    ::STRINGS[10] = uString::Const("text1");
    ::STRINGS[11] = uString::Const("Add price and a license.");
    ::STRINGS[12] = uString::Const("text2");
    ::STRINGS[13] = uString::Const("Share.");
    ::STRINGS[14] = uString::Const("text3");
    ::STRINGS[15] = uString::Const("Done!");
    ::STRINGS[16] = uString::Const("text4");
    ::TYPES[0] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Double_typeof());
    ::TYPES[2] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Double_typeof());
    ::TYPES[3] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[4] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[5] = ::g::Fuse::Controls::Panel_typeof();
    ::TYPES[6] = ::g::Fuse::Node_typeof();
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    ::TYPES[8] = ::g::Fuse::iOS::StatusBarConfig_typeof();
    ::TYPES[9] = ::g::Fuse::Controls::Control_typeof();
    ::TYPES[10] = ::g::Fuse::Drawing::Brush_typeof();
    ::TYPES[11] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[12] = ::g::Fuse::Controls::Viewbox_typeof();
    ::TYPES[13] = ::g::Fuse::Controls::Image_typeof();
    ::TYPES[14] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[15] = ::g::WelcomeAnimation_bundle_typeof();
    ::TYPES[16] = ::g::Fuse::Transform_typeof();
    ::TYPES[17] = ::g::Fuse::Rotation_typeof();
    ::TYPES[18] = ::g::Fuse::Scaling_typeof();
    ::TYPES[19] = ::g::Fuse::Translation_typeof();
    ::TYPES[20] = ::g::Fuse::Controls::Shape_typeof();
    ::TYPES[21] = ::g::Fuse::Drawing::Stroke_typeof();
    ::TYPES[22] = ::g::Fuse::Triggers::Trigger_typeof();
    ::TYPES[23] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[24] = ::g::Fuse::Animations::TrackAnimator_typeof();
    ::TYPES[25] = ::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(::g::Fuse::Translation_typeof());
    ::TYPES[26] = ::g::Fuse::Animations::Move_typeof();
    ::TYPES[27] = ::g::Fuse::TranslationModes_typeof();
    ::TYPES[28] = ::g::Fuse::AppBase_typeof();
    ::TYPES[29] = ::g::Fuse::BasicTheme::BasicTheme_typeof();
    type->SetFields(16,
        ::g::Fuse::Controls::Image_typeof(), offsetof(::g::MainView, arrow1), 0,
        MainView__Fuse_Elements_Element_float_Opacity_Property_typeof(), offsetof(::g::MainView, arrow1_Opacity_inst), 0,
        ::g::Fuse::Controls::Image_typeof(), offsetof(::g::MainView, arrow2), 0,
        MainView__Fuse_Elements_Element_float_Opacity_Property_typeof(), offsetof(::g::MainView, arrow2_Opacity_inst), 0,
        ::g::Camera_typeof(), offsetof(::g::MainView, camera), 0,
        MainView__Fuse_Elements_Element_float_Opacity_Property_typeof(), offsetof(::g::MainView, camera_Opacity_inst), 0,
        ::g::Notes_typeof(), offsetof(::g::MainView, notes), 0,
        MainView__Fuse_Elements_Element_float_Opacity_Property_typeof(), offsetof(::g::MainView, notes_Opacity_inst), 0,
        ::g::Fuse::Rotation_typeof(), offsetof(::g::MainView, notesRot), 0,
        MainView__Fuse_Rotation_float_Degrees_Property_typeof(), offsetof(::g::MainView, notesRot_Degrees_inst), 0,
        ::g::Fuse::Translation_typeof(), offsetof(::g::MainView, notesTrans), 0,
        MainView__Fuse_Translation_float_X_Property_typeof(), offsetof(::g::MainView, notesTrans_X_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, panel2), 0,
        ::g::Payment_typeof(), offsetof(::g::MainView, payment), 0,
        MainView__Fuse_Elements_Element_float_Opacity_Property_typeof(), offsetof(::g::MainView, payment_Opacity_inst), 0,
        ::g::Fuse::Rotation_typeof(), offsetof(::g::MainView, paymentRot), 0,
        MainView__Fuse_Rotation_float_Degrees_Property_typeof(), offsetof(::g::MainView, paymentRot_Degrees_inst), 0,
        ::g::Fuse::Translation_typeof(), offsetof(::g::MainView, paymentTrans), 0,
        MainView__Fuse_Translation_float_X_Property_typeof(), offsetof(::g::MainView, paymentTrans_X_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, Send), 0,
        MainView__Fuse_Elements_Element_float_Opacity_Property_typeof(), offsetof(::g::MainView, Send_Opacity_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, sendImage), 0,
        ::g::Fuse::Scaling_typeof(), offsetof(::g::MainView, sendScaling), 0,
        MainView__Fuse_Scaling_float_Factor_Property_typeof(), offsetof(::g::MainView, sendScaling_Factor_inst), 0,
        ::g::T_typeof(), offsetof(::g::MainView, text1), 0,
        MainView__Fuse_Elements_Element_float_Opacity_Property_typeof(), offsetof(::g::MainView, text1_Opacity_inst), 0,
        ::g::T_typeof(), offsetof(::g::MainView, text2), 0,
        MainView__Fuse_Elements_Element_float_Opacity_Property_typeof(), offsetof(::g::MainView, text2_Opacity_inst), 0,
        ::g::T_typeof(), offsetof(::g::MainView, text3), 0,
        MainView__Fuse_Elements_Element_float_Opacity_Property_typeof(), offsetof(::g::MainView, text3_Opacity_inst), 0,
        ::g::T_typeof(), offsetof(::g::MainView, text4), 0,
        MainView__Fuse_Elements_Element_float_Opacity_Property_typeof(), offsetof(::g::MainView, text4_Opacity_inst), 0,
        ::g::Fuse::Triggers::Timeline_typeof(), offsetof(::g::MainView, timeline), 0,
        MainView__Fuse_Triggers_Timeline_double_TargetProgress_Property_typeof(), offsetof(::g::MainView, timeline_TargetProgress_inst), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__New1_fn, 0, true, MainView_typeof(), 0));
    return type;
}

// public MainView() :183
void MainView__ctor_3_fn(MainView* __this)
{
    __this->ctor_3();
}

// internal void InitializeUX() :187
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :183
void MainView__New1_fn(MainView** __retval)
{
    *__retval = MainView::New1();
}

// public MainView() [instance] :183
void MainView::ctor_3()
{
    ctor_2();
    InitializeUX();
}

// internal void InitializeUX() [instance] :187
void MainView::InitializeUX()
{
    bool ret2;
    bool ret3;
    bool ret4;
    bool ret5;
    bool ret6;
    bool ret7;
    timeline = ::g::Fuse::Triggers::Timeline::New1();
    timeline_TargetProgress_inst = MainView__Fuse_Triggers_Timeline_double_TargetProgress_Property::New1(timeline);
    camera = ::g::Camera::New3();
    camera_Opacity_inst = MainView__Fuse_Elements_Element_float_Opacity_Property::New1(camera);
    text1 = ::g::T::New3();
    text1_Opacity_inst = MainView__Fuse_Elements_Element_float_Opacity_Property::New1(text1);
    paymentTrans = ::g::Fuse::Translation::New1();
    paymentTrans_X_inst = MainView__Fuse_Translation_float_X_Property::New1(paymentTrans);
    notesTrans = ::g::Fuse::Translation::New1();
    notesTrans_X_inst = MainView__Fuse_Translation_float_X_Property::New1(notesTrans);
    payment = ::g::Payment::New3();
    payment_Opacity_inst = MainView__Fuse_Elements_Element_float_Opacity_Property::New1(payment);
    notes = ::g::Notes::New3();
    notes_Opacity_inst = MainView__Fuse_Elements_Element_float_Opacity_Property::New1(notes);
    paymentRot = ::g::Fuse::Rotation::New1();
    paymentRot_Degrees_inst = MainView__Fuse_Rotation_float_Degrees_Property::New1(paymentRot);
    notesRot = ::g::Fuse::Rotation::New1();
    notesRot_Degrees_inst = MainView__Fuse_Rotation_float_Degrees_Property::New1(notesRot);
    text2 = ::g::T::New3();
    text2_Opacity_inst = MainView__Fuse_Elements_Element_float_Opacity_Property::New1(text2);
    arrow1 = ::g::Fuse::Controls::Image::New2();
    arrow1_Opacity_inst = MainView__Fuse_Elements_Element_float_Opacity_Property::New1(arrow1);
    text3 = ::g::T::New3();
    text3_Opacity_inst = MainView__Fuse_Elements_Element_float_Opacity_Property::New1(text3);
    Send = ::g::Fuse::Controls::Panel::New1();
    Send_Opacity_inst = MainView__Fuse_Elements_Element_float_Opacity_Property::New1(Send);
    arrow2 = ::g::Fuse::Controls::Image::New2();
    arrow2_Opacity_inst = MainView__Fuse_Elements_Element_float_Opacity_Property::New1(arrow2);
    sendScaling = ::g::Fuse::Scaling::New1();
    sendScaling_Factor_inst = MainView__Fuse_Scaling_float_Factor_Property::New1(sendScaling);
    text4 = ::g::T::New3();
    text4_Opacity_inst = MainView__Fuse_Elements_Element_float_Opacity_Property::New1(text4);
    ::g::Fuse::Controls::PageControl* temp = ::g::Fuse::Controls::PageControl::New2();
    ::g::Fuse::iOS::StatusBarConfig* temp1 = ::g::Fuse::iOS::StatusBarConfig::New1();
    ::g::Fuse::Controls::Page* temp2 = ::g::Fuse::Controls::Page::New2();
    ::g::Fuse::Controls::Text* temp3 = ::g::Fuse::Controls::Text::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp4 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(0.9254902f, 0.2862745f, 0.5411765f, 1.0f));
    ::g::Fuse::Controls::Page* temp5 = ::g::Fuse::Controls::Page::New2();
    ::g::Fuse::Controls::Panel* temp6 = ::g::Fuse::Controls::Panel::New1();
    ::g::Fuse::Controls::Viewbox* temp7 = ::g::Fuse::Controls::Viewbox::New2();
    ::g::Fuse::Controls::Panel* temp8 = ::g::Fuse::Controls::Panel::New1();
    ::g::Fuse::Controls::Panel* temp9 = ::g::Fuse::Controls::Panel::New1();
    panel2 = ::g::Fuse::Controls::Panel::New1();
    sendImage = ::g::Fuse::Controls::Panel::New1();
    ::g::Fuse::Controls::Image* temp10 = ::g::Fuse::Controls::Image::New2();
    ::g::Fuse::Controls::Image* temp11 = ::g::Fuse::Controls::Image::New2();
    ::g::Fuse::Translation* temp12 = ::g::Fuse::Translation::New1();
    ::g::Fuse::Rotation* temp13 = ::g::Fuse::Rotation::New1();
    ::g::Fuse::Controls::Circle* temp14 = ::g::Fuse::Controls::Circle::New2();
    ::g::Fuse::Drawing::Stroke* temp15 = ::g::Fuse::Drawing::Stroke::New1();
    ::g::Fuse::Drawing::StaticSolidColor* temp16 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Drawing::StaticSolidColor* temp17 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(0.3882353f, 0.2039216f, 0.6431373f, 1.0f));
    ::g::Fuse::Controls::Panel* temp18 = ::g::Fuse::Controls::Panel::New1();
    ::g::Fuse::Controls::StackPanel* temp19 = ::g::Fuse::Controls::StackPanel::New2();
    ::g::Fuse::Navigation::WhileActive* temp20 = ::g::Fuse::Navigation::WhileActive::New1();
    ::g::Fuse::Animations::Change* temp21 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[1/*Fuse.Animations.Change<double>*/], timeline_TargetProgress_inst);
    ::g::Fuse::Animations::Change* temp22 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[3/*Fuse.Animations.Change<float>*/], camera_Opacity_inst);
    ::g::Fuse::Animations::Change* temp23 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[3/*Fuse.Animations.Change<float>*/], text1_Opacity_inst);
    ::g::Fuse::Animations::Move* temp24 = ::g::Fuse::Animations::Move::New1();
    ::g::Fuse::Animations::Change* temp25 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[3/*Fuse.Animations.Change<float>*/], paymentTrans_X_inst);
    ::g::Fuse::Animations::Change* temp26 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[3/*Fuse.Animations.Change<float>*/], notesTrans_X_inst);
    ::g::Fuse::Animations::Change* temp27 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[3/*Fuse.Animations.Change<float>*/], payment_Opacity_inst);
    ::g::Fuse::Animations::Change* temp28 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[3/*Fuse.Animations.Change<float>*/], notes_Opacity_inst);
    ::g::Fuse::Animations::Change* temp29 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[3/*Fuse.Animations.Change<float>*/], paymentRot_Degrees_inst);
    ::g::Fuse::Animations::Change* temp30 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[3/*Fuse.Animations.Change<float>*/], notesRot_Degrees_inst);
    ::g::Fuse::Animations::Change* temp31 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[3/*Fuse.Animations.Change<float>*/], text2_Opacity_inst);
    ::g::Fuse::Animations::Change* temp32 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[3/*Fuse.Animations.Change<float>*/], arrow1_Opacity_inst);
    ::g::Fuse::Animations::Change* temp33 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[3/*Fuse.Animations.Change<float>*/], text3_Opacity_inst);
    ::g::Fuse::Animations::Move* temp34 = ::g::Fuse::Animations::Move::New1();
    ::g::Fuse::Animations::Change* temp35 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[3/*Fuse.Animations.Change<float>*/], Send_Opacity_inst);
    ::g::Fuse::Animations::Change* temp36 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[3/*Fuse.Animations.Change<float>*/], text3_Opacity_inst);
    ::g::Fuse::Animations::Change* temp37 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[3/*Fuse.Animations.Change<float>*/], arrow2_Opacity_inst);
    ::g::Fuse::Animations::Move* temp38 = ::g::Fuse::Animations::Move::New1();
    ::g::Fuse::Animations::Change* temp39 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[3/*Fuse.Animations.Change<float>*/], sendScaling_Factor_inst);
    ::g::Fuse::Animations::Change* temp40 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[3/*Fuse.Animations.Change<float>*/], text4_Opacity_inst);
    ::g::Fuse::Drawing::StaticSolidColor* temp41 = ::g::Fuse::Drawing::StaticSolidColor::New1(::g::Uno::Float4__New2(0.3882353f, 0.2039216f, 0.6431373f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[6/*Fuse.Node*/])), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[6/*Fuse.Node*/])), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Behavior*/])), temp1);
    temp1->Style(1);
    temp2->Background(temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[6/*Fuse.Node*/])), temp3);
    temp3->Value(::STRINGS[0/*"Swipe left"*/]);
    temp3->FontSize(20.0f);
    temp3->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp3->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[6/*Fuse.Node*/])), temp6);
    temp6->Background(temp41);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[6/*Fuse.Node*/])), temp7);
    temp7->Alignment(10);
    temp7->Content1(temp8);
    temp8->Width(500.0f);
    temp8->Height(800.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[6/*Fuse.Node*/])), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[6/*Fuse.Node*/])), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Behavior*/])), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Behavior*/])), timeline);
    ::g::Fuse::StylePropertyWithUnit__Set1_fn(uPtr(::g::Fuse::Elements::Element::HeightProperty()), temp9, uCRef(80.0f), uCRef<int>(1), &ret2);
    temp9->Alignment(12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[6/*Fuse.Node*/])), panel2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[6/*Fuse.Node*/])), Send);
    uPtr(panel2)->Name(::STRINGS[1/*"panel2"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(panel2)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[6/*Fuse.Node*/])), camera);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(panel2)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[6/*Fuse.Node*/])), payment);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(panel2)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[6/*Fuse.Node*/])), notes);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(panel2)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[6/*Fuse.Node*/])), arrow2);
    uPtr(camera)->Opacity(0.0f);
    uPtr(camera)->Name(::STRINGS[2/*"camera"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(camera)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[6/*Fuse.Node*/])), arrow1);
    uPtr(arrow1)->Width(50.0f);
    uPtr(arrow1)->Height(50.0f);
    uPtr(arrow1)->Offset(::g::Uno::Float2__New2(0.0f, 80.0f));
    uPtr(arrow1)->Opacity(0.0f);
    uPtr(arrow1)->Name(::STRINGS[3/*"arrow1"*/]);
    uPtr(arrow1)->File(::g::Uno::UX::BundleFileSource::New1(::g::WelcomeAnimation_bundle::Arrow8e409a4c()));
    uPtr(payment)->Opacity(0.0f);
    uPtr(payment)->Name(::STRINGS[4/*"payment"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(payment)->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[16/*Fuse.Transform*/])), paymentTrans);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(payment)->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[16/*Fuse.Transform*/])), paymentRot);
    uPtr(paymentRot)->Degrees(45.0f);
    uPtr(notes)->Opacity(0.0f);
    uPtr(notes)->Name(::STRINGS[5/*"notes"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(notes)->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[16/*Fuse.Transform*/])), notesTrans);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(notes)->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[16/*Fuse.Transform*/])), notesRot);
    uPtr(notesRot)->Degrees(-45.0f);
    uPtr(arrow2)->Width(50.0f);
    uPtr(arrow2)->Height(50.0f);
    uPtr(arrow2)->Offset(::g::Uno::Float2__New2(0.0f, 80.0f));
    uPtr(arrow2)->Opacity(0.0f);
    uPtr(arrow2)->Name(::STRINGS[6/*"arrow2"*/]);
    uPtr(arrow2)->File(::g::Uno::UX::BundleFileSource::New1(::g::WelcomeAnimation_bundle::Arrow8e409a4c()));
    uPtr(Send)->Width(80.0f);
    uPtr(Send)->Height(80.0f);
    uPtr(Send)->Opacity(0.0f);
    uPtr(Send)->Name(::STRINGS[7/*"Send"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Send)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[6/*Fuse.Node*/])), sendImage);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Send)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[6/*Fuse.Node*/])), temp14);
    uPtr(sendImage)->Name(::STRINGS[8/*"sendImage"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sendImage)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[6/*Fuse.Node*/])), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sendImage)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[6/*Fuse.Node*/])), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sendImage)->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[16/*Fuse.Transform*/])), sendScaling);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sendImage)->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[16/*Fuse.Transform*/])), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sendImage)->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[16/*Fuse.Transform*/])), temp13);
    ::g::Fuse::StylePropertyWithUnit__Set1_fn(uPtr(::g::Fuse::Elements::Element::WidthProperty()), temp10, uCRef(60.0f), uCRef<int>(1), &ret3);
    ::g::Fuse::StylePropertyWithUnit__Set1_fn(uPtr(::g::Fuse::Elements::Element::HeightProperty()), temp10, uCRef(60.0f), uCRef<int>(1), &ret4);
    temp10->File(::g::Uno::UX::BundleFileSource::New1(::g::WelcomeAnimation_bundle::sendaf605e11()));
    temp11->Color(::g::Uno::Float4__New2(0.3882353f, 0.2039216f, 0.6431373f, 1.0f));
    ::g::Fuse::StylePropertyWithUnit__Set1_fn(uPtr(::g::Fuse::Elements::Element::WidthProperty()), temp11, uCRef(90.0f), uCRef<int>(1), &ret5);
    ::g::Fuse::StylePropertyWithUnit__Set1_fn(uPtr(::g::Fuse::Elements::Element::HeightProperty()), temp11, uCRef(90.0f), uCRef<int>(1), &ret6);
    temp11->File(::g::Uno::UX::BundleFileSource::New1(::g::WelcomeAnimation_bundle::sendaf605e11()));
    uPtr(sendScaling)->Factor(0.7f);
    temp12->X(5.0f);
    temp13->Degrees(-45.0f);
    temp14->Fill(temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Strokes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[21/*Fuse.Drawing.Stroke*/])), temp15);
    temp15->Width(3.0f);
    temp15->Brush(temp16);
    ::g::Fuse::StylePropertyWithUnit__Set1_fn(uPtr(::g::Fuse::Elements::Element::HeightProperty()), temp18, uCRef(90.0f), uCRef<int>(1), &ret7);
    temp18->Alignment(4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[6/*Fuse.Node*/])), temp19);
    temp19->Alignment(14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[6/*Fuse.Node*/])), text1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[6/*Fuse.Node*/])), text2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[6/*Fuse.Node*/])), text3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[6/*Fuse.Node*/])), text4);
    uPtr(text1)->Value(::STRINGS[9/*"Take a photo."*/]);
    uPtr(text1)->Name(::STRINGS[10/*"text1"*/]);
    uPtr(text2)->Value(::STRINGS[11/*"Add price a...*/]);
    uPtr(text2)->Name(::STRINGS[12/*"text2"*/]);
    uPtr(text3)->Value(::STRINGS[13/*"Share."*/]);
    uPtr(text3)->Name(::STRINGS[14/*"text3"*/]);
    uPtr(text4)->Value(::STRINGS[15/*"Done!"*/]);
    uPtr(text4)->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(text4)->Margin(::g::Uno::Float4__New2(0.0f, 15.0f, 0.0f, 15.0f));
    uPtr(text4)->Name(::STRINGS[16/*"text4"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[23/*Fuse.Animations.Animator*/])), temp21);
    ::g::Fuse::Animations::Change__set_Value_fn(temp21, uCRef(1.0));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(timeline)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[23/*Fuse.Animations.Animator*/])), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(timeline)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[23/*Fuse.Animations.Animator*/])), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(timeline)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[23/*Fuse.Animations.Animator*/])), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(timeline)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[23/*Fuse.Animations.Animator*/])), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(timeline)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[23/*Fuse.Animations.Animator*/])), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(timeline)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[23/*Fuse.Animations.Animator*/])), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(timeline)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[23/*Fuse.Animations.Animator*/])), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(timeline)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[23/*Fuse.Animations.Animator*/])), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(timeline)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[23/*Fuse.Animations.Animator*/])), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(timeline)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[23/*Fuse.Animations.Animator*/])), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(timeline)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[23/*Fuse.Animations.Animator*/])), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(timeline)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[23/*Fuse.Animations.Animator*/])), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(timeline)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[23/*Fuse.Animations.Animator*/])), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(timeline)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[23/*Fuse.Animations.Animator*/])), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(timeline)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[23/*Fuse.Animations.Animator*/])), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(timeline)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[23/*Fuse.Animations.Animator*/])), temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(timeline)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[23/*Fuse.Animations.Animator*/])), temp38);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(timeline)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[23/*Fuse.Animations.Animator*/])), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(timeline)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[23/*Fuse.Animations.Animator*/])), temp40);
    ::g::Fuse::Animations::Change__set_Value_fn(temp22, uCRef(1.0f));
    temp22->Duration(1.0);
    ::g::Fuse::Animations::Change__set_Value_fn(temp23, uCRef(1.0f));
    temp23->Duration(1.0);
    temp24->Y(-2.0f);
    temp24->Easing(26);
    temp24->Duration(1.0);
    temp24->Delay(1.0);
    temp24->RelativeTo(::g::Fuse::TranslationModes::Size());
    temp24->Target(camera);
    ::g::Fuse::Animations::Change__set_Value_fn(temp25, uCRef(-30.0f));
    temp25->Easing(26);
    temp25->Duration(1.0);
    temp25->Delay(1.0);
    ::g::Fuse::Animations::Change__set_Value_fn(temp26, uCRef(30.0f));
    temp26->Easing(26);
    temp26->Duration(1.0);
    temp26->Delay(1.0);
    ::g::Fuse::Animations::Change__set_Value_fn(temp27, uCRef(1.0f));
    temp27->Easing(26);
    temp27->Duration(1.0);
    temp27->Delay(1.0);
    ::g::Fuse::Animations::Change__set_Value_fn(temp28, uCRef(1.0f));
    temp28->Easing(26);
    temp28->Duration(1.0);
    temp28->Delay(1.0);
    ::g::Fuse::Animations::Change__set_Value_fn(temp29, uCRef(0.0f));
    temp29->Easing(26);
    temp29->Duration(1.0);
    temp29->Delay(1.0);
    ::g::Fuse::Animations::Change__set_Value_fn(temp30, uCRef(0.0f));
    temp30->Easing(26);
    temp30->Duration(1.0);
    temp30->Delay(1.0);
    ::g::Fuse::Animations::Change__set_Value_fn(temp31, uCRef(1.0f));
    temp31->Duration(1.0);
    temp31->Delay(1.0);
    ::g::Fuse::Animations::Change__set_Value_fn(temp32, uCRef(1.0f));
    temp32->Duration(0.6);
    temp32->Delay(1.5);
    ::g::Fuse::Animations::Change__set_Value_fn(temp33, uCRef(1.0f));
    temp33->Duration(1.0);
    temp33->Delay(2.0);
    temp34->Y(-0.25f);
    temp34->Easing(26);
    temp34->Duration(1.0);
    temp34->Delay(3.0);
    temp34->RelativeTo(::g::Fuse::TranslationModes::Size());
    temp34->Target(panel2);
    ::g::Fuse::Animations::Change__set_Value_fn(temp35, uCRef(1.0f));
    temp35->Duration(1.0);
    temp35->Delay(3.0);
    ::g::Fuse::Animations::Change__set_Value_fn(temp36, uCRef(1.0f));
    temp36->Duration(1.0);
    temp36->Delay(3.0);
    ::g::Fuse::Animations::Change__set_Value_fn(temp37, uCRef(1.0f));
    temp37->Duration(0.6);
    temp37->Delay(3.5);
    temp38->X(25.0f);
    temp38->Easing(26);
    temp38->Duration(0.8);
    temp38->Delay(3.5);
    temp38->Target(sendImage);
    ::g::Fuse::Animations::Change__set_Value_fn(temp39, uCRef(1.0f));
    temp39->Easing(26);
    temp39->Duration(0.8);
    temp39->Delay(3.5);
    ::g::Fuse::Animations::Change__set_Value_fn(temp40, uCRef(1.0f));
    temp40->Duration(1.0);
    temp40->Delay(4.7);
    RootNode(temp);
    Theme(::g::Fuse::BasicTheme::BasicTheme::Singleton1());
}

// public MainView New() [static] :183
MainView* MainView::New1()
{
    MainView* obj1 = (MainView*)uNew(MainView_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

} // ::g
