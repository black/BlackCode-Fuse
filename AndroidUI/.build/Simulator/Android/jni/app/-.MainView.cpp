// This file was generated based on 'C:\Users\Kuro\Documents\Fuse\Android UI\.cache\GeneratedCode\MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/-.MainView.h>
#include <app/-.MainView_Factory.h>
#include <app/-.MainView_Fuse_Effects_Blur_float_Radius_Property.h>
#include <app/-.MainView_Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarS-76d400dd.h>
#include <app/-.MainView_Fuse_Triggers_WhileBool_bool_Value_Property.h>
#include <app/-.MainView_Template.h>
#include <app/-.MainView_Template1.h>
#include <app/-.MainView_Template2.h>
#include <app/Fuse.Animations.Animator.h>
#include <app/Fuse.Animations.Change__bool.h>
#include <app/Fuse.Animations.Change__float.h>
#include <app/Fuse.Animations.Change__Uno_Platform_iOS_StatusBarStyle.h>
#include <app/Fuse.Animations.Easing.h>
#include <app/Fuse.AppBase.h>
#include <app/Fuse.BasicTheme.BasicTheme.h>
#include <app/Fuse.Behavior.h>
#include <app/Fuse.Controls.BottomBarBackground.h>
#include <app/Fuse.Controls.Button.h>
#include <app/Fuse.Controls.DockPanel.h>
#include <app/Fuse.Controls.Image.h>
#include <app/Fuse.Controls.Page.h>
#include <app/Fuse.Controls.PageIndicator.h>
#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.Controls.Slider.h>
#include <app/Fuse.Controls.Switch.h>
#include <app/Fuse.Controls.Text.h>
#include <app/Fuse.Controls.TextControl.h>
#include <app/Fuse.Effects.Blur.h>
#include <app/Fuse.Effects.Effect.h>
#include <app/Fuse.Elements.Alignment.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.SizeUnit.h>
#include <app/Fuse.Gestures.Clicked.h>
#include <app/Fuse.iOS.StatusBarConfig.h>
#include <app/Fuse.Layouts.Dock.h>
#include <app/Fuse.Navigation.INavigation.h>
#include <app/Fuse.Navigation.LinearNavigation.h>
#include <app/Fuse.Navigation.StructuredNavigation.h>
#include <app/Fuse.Navigation.SwipeDirection.h>
#include <app/Fuse.Navigation.SwipeEnds.h>
#include <app/Fuse.Navigation.SwipeNavigate.h>
#include <app/Fuse.Navigation.WhileActive.h>
#include <app/Fuse.Navigation.WhileNavigationTrigger.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Style.h>
#include <app/Fuse.StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_-d8fcbdc5.h>
#include <app/Fuse.Theme.h>
#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <app/Fuse.Triggers.ProgressAnimation.h>
#include <app/Fuse.Triggers.Trigger.h>
#include <app/Fuse.Triggers.WhileBool.h>
#include <app/Fuse.Triggers.WhileTrue.h>
#include <app/Fuse.Vibration.Vibrate.h>
#include <app/Uno.Bool.h>
#include <app/Uno.BundleFile.h>
#include <app/Uno.Collections.ICollection__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.ICollection__Fuse_Behavior.h>
#include <app/Uno.Collections.ICollection__Fuse_Effects_Effect.h>
#include <app/Uno.Collections.ICollection__Fuse_Node.h>
#include <app/Uno.Collections.ICollection__Fuse_Style.h>
#include <app/Uno.Collections.ICollection__Fuse_Triggers_Actions_TriggerAction.h>
#include <app/Uno.Collections.ICollection__Uno_UX_ITemplate.h>
#include <app/Uno.Collections.IList__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.IList__Fuse_Behavior.h>
#include <app/Uno.Collections.IList__Fuse_Effects_Effect.h>
#include <app/Uno.Collections.IList__Fuse_Node.h>
#include <app/Uno.Collections.IList__Fuse_Style.h>
#include <app/Uno.Collections.IList__Fuse_Triggers_Actions_TriggerAction.h>
#include <app/Uno.Collections.IList__Uno_UX_ITemplate.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform.iOS.StatusBarStyle.h>
#include <app/Uno.Runtime.Implementation.Internal.BundleRegistry.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.BundleFileSource.h>
#include <app/Uno.UX.FileSource.h>
#include <app/Uno.UX.IFactory.h>
#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Property__bool.h>
#include <app/Uno.UX.Property__float.h>
#include <app/Uno.UX.Property__Uno_Platform_iOS_StatusBarStyle.h>
#include <app/Uno.UX.Template__Fuse_Controls_Image.h>
#include <app/Uno.UX.Template__Fuse_Controls_Page.h>
#include <app/Uno.UX.Template__Fuse_Controls_Text.h>

namespace app {

MainView__uType* MainView__typeof()
{
    static ::uStaticStrong<MainView__uType*> type;
    if (type != NULL) return type;

    type = (MainView__uType*)::uAllocClassType(sizeof(MainView__uType), "MainView", false, 0, 10, 0);

    type->SetBaseType(::app::Fuse::App__typeof());

    type->SetStrongRefs(
        "blur", offsetof(MainView, blur),
        "blur_Radius_inst", offsetof(MainView, blur_Radius_inst),
        "canSwipe", offsetof(MainView, canSwipe),
        "canSwipe_Value_inst", offsetof(MainView, canSwipe_Value_inst),
        "navigation", offsetof(MainView, navigation),
        "page2", offsetof(MainView, page2),
        "page3", offsetof(MainView, page3),
        "statusBarConfig", offsetof(MainView, statusBarConfig),
        "statusBarConfig_Style_inst", offsetof(MainView, statusBarConfig_Style_inst),
        "swipeNavigate", offsetof(MainView, swipeNavigate));

    type->SetFields(10,
        ::uNewField("blur", NULL, offsetof(MainView, blur), ::app::Fuse::Effects::Blur__typeof()),
        ::uNewField("blur_Radius_inst", NULL, offsetof(MainView, blur_Radius_inst), ::app::MainView_Fuse_Effects_Blur_float_Radius_Property__typeof()),
        ::uNewField("canSwipe", NULL, offsetof(MainView, canSwipe), ::app::Fuse::Triggers::WhileTrue__typeof()),
        ::uNewField("canSwipe_Value_inst", NULL, offsetof(MainView, canSwipe_Value_inst), ::app::MainView_Fuse_Triggers_WhileBool_bool_Value_Property__typeof()),
        ::uNewField("navigation", NULL, offsetof(MainView, navigation), ::app::Fuse::Navigation::LinearNavigation__typeof()),
        ::uNewField("page2", NULL, offsetof(MainView, page2), ::app::Fuse::Controls::Page__typeof()),
        ::uNewField("page3", NULL, offsetof(MainView, page3), ::app::Fuse::Controls::Page__typeof()),
        ::uNewField("statusBarConfig", NULL, offsetof(MainView, statusBarConfig), ::app::Fuse::iOS::StatusBarConfig__typeof()),
        ::uNewField("statusBarConfig_Style_inst", NULL, offsetof(MainView, statusBarConfig_Style_inst), ::app::MainView_Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property__typeof()),
        ::uNewField("swipeNavigate", NULL, offsetof(MainView, swipeNavigate), ::app::Fuse::Navigation::SwipeNavigate__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("InitializeUX", MainView__InitializeUX, 0, false),
        ::uNewFunction(".ctor", MainView__New_1, 0, true, MainView__typeof()));

    ::uRegisterType(type);
    return type;
}

void MainView___ObjInit_3(MainView* __this)
{
    ::app::Fuse::App___ObjInit_2(__this);
    __this->InitializeUX();
}

void MainView__InitializeUX(MainView* __this)
{
    ::app::MainView_Template* collection_123;
    ::app::MainView_Template1* collection_124;
    ::app::MainView_Template2* collection_125;
    __this->navigation = ::app::Fuse::Navigation::LinearNavigation__New_1(NULL);
    __this->canSwipe = ::app::Fuse::Triggers::WhileTrue__New_1(NULL);
    __this->canSwipe_Value_inst = ::app::MainView_Fuse_Triggers_WhileBool_bool_Value_Property__New_1(NULL, (::app::Fuse::Triggers::WhileBool*)__this->canSwipe);
    __this->statusBarConfig = ::app::Fuse::iOS::StatusBarConfig__New_1(NULL);
    __this->statusBarConfig_Style_inst = ::app::MainView_Fuse_iOS_StatusBarConfig_Uno_Platform_iOS_StatusBarStyle_Style_Property__New_1(NULL, __this->statusBarConfig);
    __this->blur = ::app::Fuse::Effects::Blur__New_1(NULL);
    __this->blur_Radius_inst = ::app::MainView_Fuse_Effects_Blur_float_Radius_Property__New_1(NULL, __this->blur);
    ::app::Fuse::Controls::DockPanel* temp = ::app::Fuse::Controls::DockPanel__New_2(NULL);
    ::app::Fuse::Controls::Panel* temp1 = ::app::Fuse::Controls::Panel__New_1(NULL);
    ::app::Fuse::Style* temp2 = ::app::Fuse::Style__New_1(NULL);
    collection_123 = ::app::MainView_Template__New_1(NULL, __this);
    ::uPtr< ::app::MainView_Template*>(collection_123)->Cascade(true);
    collection_123->AffectSubtypes(true);
    ::app::MainView_Template* temp3 = collection_123;
    collection_124 = ::app::MainView_Template1__New_1(NULL, __this);
    ::uPtr< ::app::MainView_Template1*>(collection_124)->Cascade(true);
    collection_124->AffectSubtypes(true);
    ::app::MainView_Template1* temp4 = collection_124;
    collection_125 = ::app::MainView_Template2__New_1(NULL, __this);
    ::uPtr< ::app::MainView_Template2*>(collection_125)->Cascade(true);
    collection_125->AffectSubtypes(true);
    ::app::MainView_Template2* temp5 = collection_125;
    ::app::Fuse::Controls::PageIndicator* temp6 = ::app::Fuse::Controls::PageIndicator__New_3(NULL, (::uObject*)__this->navigation);
    ::app::MainView_Factory* temp7 = ::app::MainView_Factory__New_2(NULL, __this);
    ::app::Fuse::Controls::Panel* temp8 = ::app::Fuse::Controls::Panel__New_1(NULL);
    __this->swipeNavigate = ::app::Fuse::Navigation::SwipeNavigate__New_1(NULL);
    ::app::Fuse::Controls::Page* temp9 = ::app::Fuse::Controls::Page__New_2(NULL);
    ::app::Fuse::Controls::Text* temp10 = ::app::Fuse::Controls::Text__New_2(NULL);
    ::app::Fuse::Controls::Button* temp11 = ::app::Fuse::Controls::Button__New_2(NULL);
    ::app::Fuse::Gestures::Clicked* temp12 = ::app::Fuse::Gestures::Clicked__New_1(NULL);
    ::app::Fuse::Vibration::Vibrate* temp13 = ::app::Fuse::Vibration::Vibrate__New_1(NULL);
    ::app::Fuse::Controls::Image* temp14 = ::app::Fuse::Controls::Image__New_2(NULL);
    __this->page2 = ::app::Fuse::Controls::Page__New_2(NULL);
    ::app::Fuse::Controls::Text* temp15 = ::app::Fuse::Controls::Text__New_2(NULL);
    ::app::Fuse::Controls::Switch* temp16 = ::app::Fuse::Controls::Switch__New_2(NULL);
    ::app::Fuse::Triggers::WhileTrue* temp17 = ::app::Fuse::Triggers::WhileTrue__New_1(NULL);
    ::app::Fuse::Animations::Change__bool* temp18 = ::app::Fuse::Animations::Change__bool__New_1(NULL, (::app::Uno::UX::Property__bool*)__this->canSwipe_Value_inst);
    ::app::Fuse::Controls::Image* temp19 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Navigation::WhileActive* temp20 = ::app::Fuse::Navigation::WhileActive__New_1(NULL);
    ::app::Fuse::Animations::Change__Uno_Platform_iOS_StatusBarStyle* temp21 = ::app::Fuse::Animations::Change__Uno_Platform_iOS_StatusBarStyle__New_1(NULL, (::app::Uno::UX::Property__Uno_Platform_iOS_StatusBarStyle*)__this->statusBarConfig_Style_inst);
    __this->page3 = ::app::Fuse::Controls::Page__New_2(NULL);
    ::app::Fuse::Controls::Text* temp22 = ::app::Fuse::Controls::Text__New_2(NULL);
    ::app::Fuse::Controls::Slider* temp23 = ::app::Fuse::Controls::Slider__New_2(NULL);
    ::app::Fuse::Triggers::ProgressAnimation* temp24 = ::app::Fuse::Triggers::ProgressAnimation__New_1(NULL);
    ::app::Fuse::Animations::Change__float* temp25 = ::app::Fuse::Animations::Change__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->blur_Radius_inst);
    ::app::Fuse::Controls::Image* temp26 = ::app::Fuse::Controls::Image__New_2(NULL);
    ::app::Fuse::Controls::BottomBarBackground* temp27 = ::app::Fuse::Controls::BottomBarBackground__New_2(NULL);
    __this->Background(::app::Uno::Float4__New_2(NULL, 0.9333333f, 0.9333333f, 0.9333333f, 1.0f));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::DockPanel*>(temp)->Children()), (::app::Fuse::Node*)temp1);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp->Children()), (::app::Fuse::Node*)temp27);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp->Behaviors()), (::app::Fuse::Behavior*)__this->statusBarConfig);
    ::uPtr< ::app::Fuse::iOS::StatusBarConfig*>(__this->statusBarConfig)->IsVisible(true);
    ::uPtr< ::app::Fuse::iOS::StatusBarConfig*>(__this->statusBarConfig)->Style(1);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Panel*>(temp1)->Children()), (::app::Fuse::Node*)temp6);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp1->Children()), (::app::Fuse::Node*)temp8);
    ::app::Uno::Collections::ICollection__Fuse_Style::Add(::uPtr< ::uObject*>(temp1->Styles()), temp2);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Style*>(temp2)->Templates()), (::uObject*)temp3);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(temp2->Templates()), (::uObject*)temp4);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(temp2->Templates()), (::uObject*)temp5);
    ::uPtr< ::app::Fuse::Controls::PageIndicator*>(temp6)->Alignment(14);
    temp6->Margin(::app::Uno::Float4__New_2(NULL, 30.0f, 30.0f, 30.0f, 30.0f));
    temp6->DotFactory((::uObject*)temp7);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Panel*>(temp8)->Children()), (::app::Fuse::Node*)temp9);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp8->Children()), (::app::Fuse::Node*)__this->page2);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp8->Children()), (::app::Fuse::Node*)__this->page3);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp8->Behaviors()), (::app::Fuse::Behavior*)__this->navigation);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp8->Behaviors()), (::app::Fuse::Behavior*)__this->canSwipe);
    ::uPtr< ::app::Fuse::Navigation::LinearNavigation*>(__this->navigation)->Easing(20);
    ::uPtr< ::app::Fuse::Triggers::WhileTrue*>(__this->canSwipe)->Value_1(true);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Triggers::WhileTrue*>(__this->canSwipe)->Behaviors()), (::app::Fuse::Behavior*)__this->swipeNavigate);
    ::uPtr< ::app::Fuse::Navigation::SwipeNavigate*>(__this->swipeNavigate)->SwipeEnds(0);
    ::uPtr< ::app::Fuse::Navigation::SwipeNavigate*>(__this->swipeNavigate)->SwipeDirection(1);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Page*>(temp9)->Children()), (::app::Fuse::Node*)temp10);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp9->Children()), (::app::Fuse::Node*)temp11);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(temp9->Children()), (::app::Fuse::Node*)temp14);
    ::uPtr< ::app::Fuse::Controls::Text*>(temp10)->Value(::uGetConstString("This button triggers the phone's vibrate function"));
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__WidthProperty)->Set_1((::app::Fuse::Elements::Element*)temp10, 60.0f, 1);
    ::uPtr< ::app::Fuse::Controls::Button*>(temp11)->Text(::uGetConstString("Vibrate"));
    temp11->Height(45.0f);
    temp11->Alignment(12);
    temp11->Margin(::app::Uno::Float4__New_2(NULL, 20.0f, 80.0f, 20.0f, 80.0f));
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp11->Behaviors()), (::app::Fuse::Behavior*)temp12);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::Clicked*>(temp12)->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp13);
    ::uPtr< ::app::Fuse::Vibration::Vibrate*>(temp13)->Duration(0.2);
    ::uPtr< ::app::Fuse::Controls::Image*>(temp14)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 0), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Controls::Page*>(__this->page2)->Name(::uGetConstString("page2"));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Page*>(__this->page2)->Children()), (::app::Fuse::Node*)temp15);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Page*>(__this->page2)->Children()), (::app::Fuse::Node*)temp16);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Page*>(__this->page2)->Children()), (::app::Fuse::Node*)temp19);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Page*>(__this->page2)->Behaviors()), (::app::Fuse::Behavior*)temp20);
    ::uPtr< ::app::Fuse::Controls::Text*>(temp15)->Value(::uGetConstString("This toggle switch disables your ability to swipe between pages"));
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__WidthProperty)->Set_1((::app::Fuse::Elements::Element*)temp15, 70.0f, 1);
    ::uPtr< ::app::Fuse::Controls::Switch*>(temp16)->Alignment(14);
    temp16->Margin(::app::Uno::Float4__New_2(NULL, 0.0f, 80.0f, 0.0f, 80.0f));
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp16->Behaviors()), (::app::Fuse::Behavior*)temp17);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Triggers::WhileTrue*>(temp17)->Animators()), (::app::Fuse::Animations::Animator*)temp18);
    ::uPtr< ::app::Fuse::Animations::Change__bool*>(temp18)->Value(false);
    ::uPtr< ::app::Fuse::Controls::Image*>(temp19)->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 1), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::Navigation::WhileActive*>(temp20)->Threshold(0.5f);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(temp20->Animators()), (::app::Fuse::Animations::Animator*)temp21);
    ::uPtr< ::app::Fuse::Animations::Change__Uno_Platform_iOS_StatusBarStyle*>(temp21)->Value(0);
    ::uPtr< ::app::Fuse::Controls::Page*>(__this->page3)->Name(::uGetConstString("page3"));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Page*>(__this->page3)->Children()), (::app::Fuse::Node*)temp22);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Page*>(__this->page3)->Children()), (::app::Fuse::Node*)temp23);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Page*>(__this->page3)->Children()), (::app::Fuse::Node*)temp26);
    ::uPtr< ::app::Fuse::Controls::Text*>(temp22)->Value(::uGetConstString("This slider blurs the background image"));
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__WidthProperty)->Set_1((::app::Fuse::Elements::Element*)temp22, 70.0f, 1);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__WidthProperty)->Set_1((::app::Fuse::Elements::Element*)temp23, 50.0f, 1);
    ::uPtr< ::app::Fuse::Controls::Slider*>(temp23)->Alignment(12);
    temp23->Margin(::app::Uno::Float4__New_2(NULL, 0.0f, 80.0f, 0.0f, 80.0f));
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(temp23->Behaviors()), (::app::Fuse::Behavior*)temp24);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Triggers::ProgressAnimation*>(temp24)->Animators()), (::app::Fuse::Animations::Animator*)temp25);
    ::uPtr< ::app::Fuse::Animations::Change__float*>(temp25)->Value(5.0f);
    ::uPtr< ::app::Fuse::Controls::Image*>(temp26)->Margin(::app::Uno::Float4__New_2(NULL, -10.0f, -10.0f, -10.0f, -10.0f));
    temp26->File((::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 2), ::app::Uno::BundleFile__typeof())));
    ::app::Uno::Collections::ICollection__Fuse_Effects_Effect::Add(::uPtr< ::uObject*>(temp26->Effects()), (::app::Fuse::Effects::Effect*)__this->blur);
    ::uPtr< ::app::Fuse::Effects::Blur*>(__this->blur)->Radius(0.0f);
    ::app::Fuse::Controls::DockPanel__SetDock(NULL, (::app::Fuse::Elements::Element*)temp27, 3);
    __this->RootNode((::app::Fuse::Node*)temp);
    __this->Theme(::app::Fuse::BasicTheme::BasicTheme__get_Singleton_1(NULL));
}

MainView* MainView__New_1(::uStatic* __this)
{
    MainView* inst = (MainView*)::uAllocObject(sizeof(MainView), MainView__typeof());
    inst->_ObjInit_3();
    return inst;
}

}
