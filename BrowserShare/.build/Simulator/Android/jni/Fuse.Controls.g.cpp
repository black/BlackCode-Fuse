// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Animations.AnimationVariant.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Keyframe.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.Scale.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.AppBase.h>
#include <Fuse.BeginRemoveArgs.h>
#include <Fuse.Behavior.h>
#include <Fuse.Controls.BackButton.Fuse_Node_bool_IsEnabled_Property.h>
#include <Fuse.Controls.BackButton.h>
#include <Fuse.Controls.BeginRemoveArgsImpl.h>
#include <Fuse.Controls.BottomBarBackground.h>
#include <Fuse.Controls.BottomFrameBackground.h>
#include <Fuse.Controls.BufferedWebViewCall.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.ClientPanel.h>
#include <Fuse.Controls.ContentControl.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DefaultSwitchBehavior.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.EdgeNavigator.h>
#include <Fuse.Controls.Ellipse.h>
#include <Fuse.Controls.FallbackWebViewClient.h>
#include <Fuse.Controls.FillRule.h>
#include <Fuse.Controls.FitMode.h>
#include <Fuse.Controls.GraphicsView.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.HTML.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.ISourceReceiver.h>
#include <Fuse.Controls.IWebView.h>
#include <Fuse.Controls.JavaScriptCall.h>
#include <Fuse.Controls.KeyframeAccessors.h>
#include <Fuse.Controls.LoadHtmlCall.h>
#include <Fuse.Controls.MapView.h>
#include <Fuse.Controls.MultiLayout.h>
#include <Fuse.Controls.MultiLayoutPanel.h>
#include <Fuse.Controls.NativeViewHost.h>
#include <Fuse.Controls.NavigationBar.h>
#include <Fuse.Controls.Number.h>
#include <Fuse.Controls.Page.h>
#include <Fuse.Controls.PageControl.h>
#include <Fuse.Controls.PageControl.Template.h>
#include <Fuse.Controls.PageIndicator.Fuse_Drawing_SolidColor_float4_Colo-39176aba.h>
#include <Fuse.Controls.PageIndicator.h>
#include <Fuse.Controls.PageIndicator.Template.h>
#include <Fuse.Controls.PageIndicatorDot.h>
#include <Fuse.Controls.PageIndicatorDotFactory.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Path.h>
#include <Fuse.Controls.PathScaleMode.h>
#include <Fuse.Controls.Placeholder.h>
#include <Fuse.Controls.PlainTextEdit.h>
#include <Fuse.Controls.PropertyBinding-1.h>
#include <Fuse.Controls.RangeControl.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.RegularPolygon.h>
#include <Fuse.Controls.ScrollPropertyChangedArgs.h>
#include <Fuse.Controls.ScrollPropertyChangedHandler.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.ScrollViewer.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.Slider.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Star.h>
#include <Fuse.Controls.StatusBarBackground.h>
#include <Fuse.Controls.Switch.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextBlock.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextEdit.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextInputActionArgs.h>
#include <Fuse.Controls.TextInputActionHandler.h>
#include <Fuse.Controls.TextInputActionStyle.h>
#include <Fuse.Controls.TextInputActionType.h>
#include <Fuse.Controls.Toggle.h>
#include <Fuse.Controls.ToggleControl.h>
#include <Fuse.Controls.TopFrameBackground.h>
#include <Fuse.Controls.Video.h>
#include <Fuse.Controls.Viewbox.h>
#include <Fuse.Controls.WebView.h>
#include <Fuse.Controls.WrapPanel.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.DynamicBrush.h>
#include <Fuse.Drawing.PathGeometry.h>
#include <Fuse.Drawing.ResampleMode.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.AlignmentHelpers.h>
#include <Fuse.Elements.BoxSizing.h>
#include <Fuse.Elements.Element.BoxSizingMode.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.ElementBatchEntry.h>
#include <Fuse.Elements.ElementBatcher.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Elements.LayoutMasterBoxSizing.h>
#include <Fuse.Elements.SizeUnit.h>
#include <Fuse.Elements.StretchDirection.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Elements.StretchSizing.h>
#include <Fuse.Elements.TextAlignment.h>
#include <Fuse.Elements.TextWrapping.h>
#include <Fuse.Elements.Visibility.h>
#include <Fuse.FastMatrix.h>
#include <Fuse.Font.h>
#include <Fuse.Fonts.h>
#include <Fuse.FrustumViewport.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.Clicker.h>
#include <Fuse.Gestures.ClickerEventHandler.h>
#include <Fuse.Gestures.ScrollDirections.h>
#include <Fuse.Gestures.Scroller.h>
#include <Fuse.Gestures.Tapped.h>
#include <Fuse.Gestures.TappedArgs.h>
#include <Fuse.Gestures.TappedHandler.h>
#include <Fuse.HitTestContext.h>
#include <Fuse.IFrustum.h>
#include <Fuse.Input.Focus.h>
#include <Fuse.Input.FocusDelegator.h>
#include <Fuse.Input.FocusLostArgs.h>
#include <Fuse.Input.FocusLostHandler.h>
#include <Fuse.Input.FocusNavigationDirection.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEventArgs.h>
#include <Fuse.Input.PointerMovedArgs.h>
#include <Fuse.Input.PointerMovedHandler.h>
#include <Fuse.Input.PointerPressedArgs.h>
#include <Fuse.Input.PointerPressedHandler.h>
#include <Fuse.Input.PointerReleasedArgs.h>
#include <Fuse.Input.PointerReleasedHandler.h>
#include <Fuse.Internal.Drawing.SolidRectangle.h>
#include <Fuse.Internal.IImageContainerOwner.h>
#include <Fuse.Internal.ImageContainer.h>
#include <Fuse.Internal.SizingContainer.h>
#include <Fuse.InvalidateLayoutReason.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Layer.h>
#include <Fuse.LayoutDependent.h>
#include <Fuse.LayoutRole.h>
#include <Fuse.Layouts.Column.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Layouts.DockLayout.h>
#include <Fuse.Layouts.FlowDirection.h>
#include <Fuse.Layouts.GridLayout.h>
#include <Fuse.Layouts.Layout.h>
#include <Fuse.Layouts.Layouts.h>
#include <Fuse.Layouts.Orientation.h>
#include <Fuse.Layouts.Row.h>
#include <Fuse.Layouts.StackLayout.h>
#include <Fuse.Layouts.WrapLayout.h>
#include <Fuse.Navigation.ActivatingAnimation.h>
#include <Fuse.Navigation.EdgeNavigation.h>
#include <Fuse.Navigation.EnteringAnimation.h>
#include <Fuse.Navigation.ExitingAnimation.h>
#include <Fuse.Navigation.GoBack.h>
#include <Fuse.Navigation.HistoryChangedHandler.h>
#include <Fuse.Navigation.INavigation.h>
#include <Fuse.Navigation.LinearNavigation.h>
#include <Fuse.Navigation.NavigatedHandler.h>
#include <Fuse.Navigation.Navigation.h>
#include <Fuse.Navigation.NavigationArgs.h>
#include <Fuse.Navigation.NavigationEdge.h>
#include <Fuse.Navigation.NavigationGotoMode.h>
#include <Fuse.Navigation.NavigationMode.h>
#include <Fuse.Navigation.NavigationPageCountHandler.h>
#include <Fuse.Navigation.NavigationPageProgressHandler.h>
#include <Fuse.Navigation.NavigationPageProperty.h>
#include <Fuse.Navigation.StructuredNavigation.h>
#include <Fuse.Navigation.SwipeDirection.h>
#include <Fuse.Navigation.SwipeEnds.h>
#include <Fuse.Navigation.SwipeNavigate.h>
#include <Fuse.Navigation.WhileCanGoBack.h>
#include <Fuse.Node.h>
#include <Fuse.NodeBounds.h>
#include <Fuse.NodeEvent-2.h>
#include <Fuse.OrthographicFrustum.h>
#include <Fuse.PlacedArgs.h>
#include <Fuse.PlacedHandler.h>
#include <Fuse.Resources.ImageSource.h>
#include <Fuse.Resources.ImageSourceErrorArgs.h>
#include <Fuse.Resources.ImageSourceErrorHandler.h>
#include <Fuse.Resources.ImageSourceState.h>
#include <Fuse.Resources.MemoryPolicy.h>
#include <Fuse.RootViewport.h>
#include <Fuse.Scripting.BoolChangedArgs.h>
#include <Fuse.Scripting.DoubleChangedArgs.h>
#include <Fuse.Scripting.StringChangedArgs.h>
#include <Fuse.SizeFlags.h>
#include <Fuse.Style.h>
#include <Fuse.StyleProperty-2.h>
#include <Fuse.StylePropertyWithUnit-3.h>
#include <Fuse.Transform.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileFailed.h>
#include <Fuse.Triggers.WhileLoading.h>
#include <Fuse.Triggers.WhileTrigger.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.ObservableList-1.h>
#include <Uno.Comparison-1.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Func-2.h>
#include <Uno.Geometry.Ray.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Platform.SystemUI.h>
#include <Uno.Platform.SystemUIWillResizeEventArgs.h>
#include <Uno.Platform.TextInputHint.h>
#include <Uno.Platform2.Display.h>
#include <Uno.Predicate-1.h>
#include <Uno.Rect.h>
#include <Uno.String.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.IFactory.h>
#include <Uno.UX.ITemplate.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Template-1.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
#include <Uno.Vector.h>
static uString* STRINGS[16];
static uType* TYPES[237];

namespace g{
namespace Fuse{
namespace Controls{

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\.cache\GeneratedCode\$.uno(5)
// ------------------------------------------------------------------------------

// public partial sealed class BackButton :5
// {
// static BackButton() :15
static void BackButton__cctor_5_fn(uType* __type)
{
}

::g::Fuse::Controls::Panel_type* BackButton_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 103;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(BackButton);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Fuse.Controls.BackButton", options);
    type->SetBase(::g::Fuse::Controls::Button_typeof());
    type->fp_ctor_ = (void*)BackButton__New3_fn;
    type->fp_cctor_ = BackButton__cctor_5_fn;
    type->interface6.fp_AddChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChild_fn;
    type->interface6.fp_AddChildAt = (void(*)(uObject*, int*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChildAt_fn;
    type->interface6.fp_RemoveChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_RemoveChild_fn;
    type->interface6.fp_GetChild = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_GetChild_fn;
    type->interface7.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Add_fn;
    type->interface7.fp_Remove = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Remove_fn;
    type->interface6.fp_get_ChildCount = (void(*)(uObject*, int*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_get_ChildCount_fn;
    type->interface6.fp_get_Children = (void(*)(uObject*, uObject**))::g::Fuse::Controls::Panel__get_Children_fn;
    type->interface6.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__get_ActualSize_fn;
    type->interface6.fp_get_HasChildren = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__get_HasChildren_fn;
    type->interface6.fp_add_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildAdded_fn;
    type->interface6.fp_remove_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildAdded_fn;
    type->interface6.fp_add_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildRemoved_fn;
    type->interface6.fp_remove_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildRemoved_fn;
    type->interface6.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface6.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_add_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__add_Update_fn;
    type->interface6.fp_remove_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__remove_Update_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::STRINGS[0] = uString::Const("Myself");
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[2] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[3] = ::g::Fuse::Triggers::WhileTrigger_typeof();
    ::TYPES[4] = ::g::Fuse::Triggers::Trigger_typeof();
    ::TYPES[5] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[6] = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Fuse::Triggers::IAddRemove_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Panel_type, interface7));
    type->SetFields(102,
        BackButton__Fuse_Node_bool_IsEnabled_Property_typeof(), offsetof(::g::Fuse::Controls::BackButton, this_IsEnabled_inst), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)BackButton__New3_fn, 0, true, BackButton_typeof(), 0));
    return type;
}

// public BackButton() :18
void BackButton__ctor_5_fn(BackButton* __this)
{
    __this->ctor_5();
}

// internal void InitializeUX() :22
void BackButton__InitializeUX_fn(BackButton* __this)
{
    __this->InitializeUX();
}

// public BackButton New() :18
void BackButton__New3_fn(BackButton** __retval)
{
    *__retval = BackButton::New3();
}

// public BackButton() [instance] :18
void BackButton::ctor_5()
{
    ctor_4();
    InitializeUX();
}

// internal void InitializeUX() [instance] :22
void BackButton::InitializeUX()
{
    this_IsEnabled_inst = BackButton__Fuse_Node_bool_IsEnabled_Property::New1(this);
    ::g::Fuse::Navigation::WhileCanGoBack* temp = ::g::Fuse::Navigation::WhileCanGoBack::New1();
    ::g::Fuse::Animations::Change* temp1 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[1/*Fuse.Animations.Change<bool>*/], this_IsEnabled_inst);
    ::g::Fuse::Gestures::Clicked* temp2 = ::g::Fuse::Gestures::Clicked::New1();
    ::g::Fuse::Navigation::GoBack* temp3 = ::g::Fuse::Navigation::GoBack::New1();
    Name(::STRINGS[0/*"Myself"*/]);
    temp->Invert(true);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Animations.Animator*/])), temp1);
    ::g::Fuse::Animations::Change__set_Value_fn(temp1, uCRef(false));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[6/*Fuse.Triggers.Actions.TriggerAction*/])), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Behavior*/])), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Behavior*/])), temp2);
}

// public BackButton New() [static] :18
BackButton* BackButton::New3()
{
    BackButton* obj1 = (BackButton*)uNew(BackButton_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(1774)
// ------------------------------------------------------------

// internal sealed class BeginRemoveArgsImpl :1774
// {
::g::Fuse::BeginRemoveArgs_type* BeginRemoveArgsImpl_typeof()
{
    static uSStrong< ::g::Fuse::BeginRemoveArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(BeginRemoveArgsImpl);
    options.TypeSize = sizeof(::g::Fuse::BeginRemoveArgs_type);
    type = (::g::Fuse::BeginRemoveArgs_type*)uClassType::New("Fuse.Controls.BeginRemoveArgsImpl", options);
    type->SetBase(::g::Fuse::BeginRemoveArgs_typeof());
    type->fp_OnRemoved = (void(*)(::g::Fuse::BeginRemoveArgs*))BeginRemoveArgsImpl__OnRemoved_fn;
    type->SetFields(2,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Controls::BeginRemoveArgsImpl, _Child), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::Fuse::Controls::BeginRemoveArgsImpl, _Parent), 0);
    return type;
}

// public BeginRemoveArgsImpl(Fuse.Node child, Fuse.Controls.Panel parent) :1778
void BeginRemoveArgsImpl__ctor_2_fn(BeginRemoveArgsImpl* __this, ::g::Fuse::Node* child, ::g::Fuse::Controls::Panel* parent)
{
    __this->ctor_2(child, parent);
}

// public generated Fuse.Node get_Child() :1777
void BeginRemoveArgsImpl__get_Child_fn(BeginRemoveArgsImpl* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Child();
}

// private generated void set_Child(Fuse.Node value) :1777
void BeginRemoveArgsImpl__set_Child_fn(BeginRemoveArgsImpl* __this, ::g::Fuse::Node* value)
{
    __this->Child(value);
}

// public BeginRemoveArgsImpl New(Fuse.Node child, Fuse.Controls.Panel parent) :1778
void BeginRemoveArgsImpl__New2_fn(::g::Fuse::Node* child, ::g::Fuse::Controls::Panel* parent, BeginRemoveArgsImpl** __retval)
{
    *__retval = BeginRemoveArgsImpl::New2(child, parent);
}

// protected internal override sealed void OnRemoved() :1783
void BeginRemoveArgsImpl__OnRemoved_fn(BeginRemoveArgsImpl* __this)
{
    uPtr(__this->Parent())->EndRemoveChild(__this->Child());
}

// public generated Fuse.Controls.Panel get_Parent() :1776
void BeginRemoveArgsImpl__get_Parent_fn(BeginRemoveArgsImpl* __this, ::g::Fuse::Controls::Panel** __retval)
{
    *__retval = __this->Parent();
}

// private generated void set_Parent(Fuse.Controls.Panel value) :1776
void BeginRemoveArgsImpl__set_Parent_fn(BeginRemoveArgsImpl* __this, ::g::Fuse::Controls::Panel* value)
{
    __this->Parent(value);
}

// public BeginRemoveArgsImpl(Fuse.Node child, Fuse.Controls.Panel parent) [instance] :1778
void BeginRemoveArgsImpl::ctor_2(::g::Fuse::Node* child, ::g::Fuse::Controls::Panel* parent)
{
    ctor_1();
    Parent(parent);
    Child(child);
}

// public generated Fuse.Node get_Child() [instance] :1777
::g::Fuse::Node* BeginRemoveArgsImpl::Child()
{
    return _Child;
}

// private generated void set_Child(Fuse.Node value) [instance] :1777
void BeginRemoveArgsImpl::Child(::g::Fuse::Node* value)
{
    _Child = value;
}

// public generated Fuse.Controls.Panel get_Parent() [instance] :1776
::g::Fuse::Controls::Panel* BeginRemoveArgsImpl::Parent()
{
    return _Parent;
}

// private generated void set_Parent(Fuse.Controls.Panel value) [instance] :1776
void BeginRemoveArgsImpl::Parent(::g::Fuse::Controls::Panel* value)
{
    _Parent = value;
}

// public BeginRemoveArgsImpl New(Fuse.Node child, Fuse.Controls.Panel parent) [static] :1778
BeginRemoveArgsImpl* BeginRemoveArgsImpl::New2(::g::Fuse::Node* child, ::g::Fuse::Controls::Panel* parent)
{
    BeginRemoveArgsImpl* obj1 = (BeginRemoveArgsImpl*)uNew(BeginRemoveArgsImpl_typeof());
    obj1->ctor_2(child, parent);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(10)
// ----------------------------------------------------------

// public sealed class BottomBarBackground :10
// {
::g::Fuse::Controls::Control_type* BottomBarBackground_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 92;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(BottomBarBackground);
    options.TypeSize = sizeof(::g::Fuse::Controls::Control_type);
    type = (::g::Fuse::Controls::Control_type*)uClassType::New("Fuse.Controls.BottomBarBackground", options);
    type->SetBase(::g::Fuse::Controls::BottomFrameBackground_typeof());
    type->fp_ctor_ = (void*)BottomBarBackground__New2_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface5));
    type->SetFields(92);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)BottomBarBackground__New2_fn, 0, true, BottomBarBackground_typeof(), 0));
    return type;
}

// public generated BottomBarBackground() :10
void BottomBarBackground__ctor_4_fn(BottomBarBackground* __this)
{
    __this->ctor_4();
}

// public generated BottomBarBackground New() :10
void BottomBarBackground__New2_fn(BottomBarBackground** __retval)
{
    *__retval = BottomBarBackground::New2();
}

// public generated BottomBarBackground() [instance] :10
void BottomBarBackground::ctor_4()
{
    ctor_3();
}

// public generated BottomBarBackground New() [static] :10
BottomBarBackground* BottomBarBackground::New2()
{
    BottomBarBackground* obj1 = (BottomBarBackground*)uNew(BottomBarBackground_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(12)
// ----------------------------------------------------------

// public class BottomFrameBackground :12
// {
::g::Fuse::Controls::Control_type* BottomFrameBackground_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 92;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(BottomFrameBackground);
    options.TypeSize = sizeof(::g::Fuse::Controls::Control_type);
    type = (::g::Fuse::Controls::Control_type*)uClassType::New("Fuse.Controls.BottomFrameBackground", options);
    type->SetBase(::g::Fuse::Controls::Control_typeof());
    type->fp_ctor_ = (void*)BottomFrameBackground__New1_fn;
    type->fp_GetContentSize = (void(*)(::g::Fuse::Elements::Element*, ::g::Uno::Float2*, int*, ::g::Uno::Float2*))BottomFrameBackground__GetContentSize_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))BottomFrameBackground__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))BottomFrameBackground__OnUnrooted_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::TYPES[8] = ::g::Uno::Platform2::Display_typeof();
    ::TYPES[9] = ::g::Uno::Float2_typeof();
    ::TYPES[10] = ::g::Uno::Rect_typeof();
    ::TYPES[11] = ::g::Uno::Platform::SystemUIWillResizeEventArgs_typeof();
    ::TYPES[12] = ::g::Uno::Platform::SystemUI_typeof();
    ::TYPES[13] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::SystemUIWillResizeEventArgs_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface5));
    type->SetFields(89,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::BottomFrameBackground, _height1), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::BottomFrameBackground, _includesKeyboard), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::BottomFrameBackground, _keyboardVisibleThreshold), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_IncludesKeyboard", NULL, (void*)BottomFrameBackground__get_IncludesKeyboard_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IncludesKeyboard", NULL, (void*)BottomFrameBackground__set_IncludesKeyboard_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_KeyboardVisibleThreshold", NULL, (void*)BottomFrameBackground__get_KeyboardVisibleThreshold_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_KeyboardVisibleThreshold", NULL, (void*)BottomFrameBackground__set_KeyboardVisibleThreshold_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)BottomFrameBackground__New1_fn, 0, true, BottomFrameBackground_typeof(), 0));
    return type;
}

// public generated BottomFrameBackground() :12
void BottomFrameBackground__ctor_3_fn(BottomFrameBackground* __this)
{
    __this->ctor_3();
}

// protected override sealed float2 GetContentSize(float2 fillSize, Fuse.SizeFlags fillSet) :82
void BottomFrameBackground__GetContentSize_fn(BottomFrameBackground* __this, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 fillSize_ = *fillSize;
    ::g::Uno::Platform2::Display* display = ::g::Uno::Platform2::Display::MainDisplay();
    return *__retval = ::g::Uno::Float2__New2(fillSize_.X, __this->_height1 / uPtr(display)->Density()), void();
    return *__retval = ::g::Uno::Float2__New2(0.0f, 0.0f), void();
}

// public bool get_IncludesKeyboard() :17
void BottomFrameBackground__get_IncludesKeyboard_fn(BottomFrameBackground* __this, bool* __retval)
{
    *__retval = __this->IncludesKeyboard();
}

// public void set_IncludesKeyboard(bool value) :18
void BottomFrameBackground__set_IncludesKeyboard_fn(BottomFrameBackground* __this, bool* value)
{
    __this->IncludesKeyboard(*value);
}

// public float get_KeyboardVisibleThreshold() :31
void BottomFrameBackground__get_KeyboardVisibleThreshold_fn(BottomFrameBackground* __this, float* __retval)
{
    *__retval = __this->KeyboardVisibleThreshold();
}

// public void set_KeyboardVisibleThreshold(float value) :32
void BottomFrameBackground__set_KeyboardVisibleThreshold_fn(BottomFrameBackground* __this, float* value)
{
    __this->KeyboardVisibleThreshold(*value);
}

// public generated BottomFrameBackground New() :12
void BottomFrameBackground__New1_fn(BottomFrameBackground** __retval)
{
    *__retval = BottomFrameBackground::New1();
}

// private extern void OnFrameResized(object sender, Uno.Platform.SystemUIWillResizeEventArgs args) :62
void BottomFrameBackground__OnFrameResized_fn(BottomFrameBackground* __this, uObject* sender, ::g::Uno::Platform::SystemUIWillResizeEventArgs* args)
{
    __this->OnFrameResized(sender, args);
}

// protected override sealed void OnRooted() :42
void BottomFrameBackground__OnRooted_fn(BottomFrameBackground* __this)
{
    ::g::Fuse::Controls::Control__OnRooted_fn(__this);
    __this->_height1 = ::g::Uno::Platform::SystemUI::BottomFrame().Size().Y;
    ::g::Uno::Platform::SystemUI::add_BottomFrameWillResize(uDelegate::New(::TYPES[13/*Uno.EventHandler<Uno.Platform.SystemUIWillResizeEventArgs>*/], (void*)BottomFrameBackground__OnFrameResized_fn, __this));
}

// protected override sealed void OnUnrooted() :52
void BottomFrameBackground__OnUnrooted_fn(BottomFrameBackground* __this)
{
    ::g::Fuse::Controls::Control__OnUnrooted_fn(__this);
    ::g::Uno::Platform::SystemUI::remove_BottomFrameWillResize(uDelegate::New(::TYPES[13/*Uno.EventHandler<Uno.Platform.SystemUIWillResizeEventArgs>*/], (void*)BottomFrameBackground__OnFrameResized_fn, __this));
}

// public generated BottomFrameBackground() [instance] :12
void BottomFrameBackground::ctor_3()
{
    _includesKeyboard = true;
    _keyboardVisibleThreshold = 150.0f;
    ctor_2();
}

// public bool get_IncludesKeyboard() [instance] :17
bool BottomFrameBackground::IncludesKeyboard()
{
    return _includesKeyboard;
}

// public void set_IncludesKeyboard(bool value) [instance] :18
void BottomFrameBackground::IncludesKeyboard(bool value)
{
    if (_includesKeyboard != value)
    {
        _includesKeyboard = value;
        InvalidateLayout(2);
    }
}

// public float get_KeyboardVisibleThreshold() [instance] :31
float BottomFrameBackground::KeyboardVisibleThreshold()
{
    return _keyboardVisibleThreshold;
}

// public void set_KeyboardVisibleThreshold(float value) [instance] :32
void BottomFrameBackground::KeyboardVisibleThreshold(float value)
{
    if (_keyboardVisibleThreshold != value)
    {
        _keyboardVisibleThreshold = value;
        InvalidateLayout(2);
    }
}

// private extern void OnFrameResized(object sender, Uno.Platform.SystemUIWillResizeEventArgs args) [instance] :62
void BottomFrameBackground::OnFrameResized(uObject* sender, ::g::Uno::Platform::SystemUIWillResizeEventArgs* args)
{
    float newHeight = uPtr(args)->EndFrame().Size().Y;

    if (IncludesKeyboard() || (newHeight < KeyboardVisibleThreshold()))
    {
        _height1 = newHeight;
        InvalidateLayout(2);
    }
}

// public generated BottomFrameBackground New() [static] :12
BottomFrameBackground* BottomFrameBackground::New1()
{
    BottomFrameBackground* obj1 = (BottomFrameBackground*)uNew(BottomFrameBackground_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\WebView\$.uno(254)
// -------------------------------------------------------------------

// internal abstract interface BufferedWebViewCall :254
// {
uInterfaceType* BufferedWebViewCall_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.BufferedWebViewCall", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(105)
// -----------------------------------------------------------

// public class Button :105
// {
// static Button() :105
static void Button__cctor_4_fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret2;
    Button::TextProperty_ = (::g::Fuse::StyleProperty1__New2_fn(::TYPES[14/*Fuse.StyleProperty<Fuse.Controls.Button, string>*/], ::STRINGS[1/*""*/], NULL, uDelegate::New(::TYPES[15/*Uno.Action<Fuse.Controls.Button, string>*/], (void*)Button__SetText_fn), uDelegate::New(::TYPES[16/*Uno.Func<Fuse.Controls.Button, string>*/], (void*)Button__GetText_fn), &ret2), ret2);
}

::g::Fuse::Controls::Panel_type* Button_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 103;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(Button);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Fuse.Controls.Button", options);
    type->SetBase(::g::Fuse::Controls::Panel_typeof());
    type->fp_ctor_ = (void*)Button__New2_fn;
    type->fp_cctor_ = Button__cctor_4_fn;
    type->interface6.fp_AddChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChild_fn;
    type->interface6.fp_AddChildAt = (void(*)(uObject*, int*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChildAt_fn;
    type->interface6.fp_RemoveChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_RemoveChild_fn;
    type->interface6.fp_GetChild = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_GetChild_fn;
    type->interface7.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Add_fn;
    type->interface7.fp_Remove = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Remove_fn;
    type->interface6.fp_get_ChildCount = (void(*)(uObject*, int*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_get_ChildCount_fn;
    type->interface6.fp_get_Children = (void(*)(uObject*, uObject**))::g::Fuse::Controls::Panel__get_Children_fn;
    type->interface6.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__get_ActualSize_fn;
    type->interface6.fp_get_HasChildren = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__get_HasChildren_fn;
    type->interface6.fp_add_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildAdded_fn;
    type->interface6.fp_remove_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildAdded_fn;
    type->interface6.fp_add_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildRemoved_fn;
    type->interface6.fp_remove_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildRemoved_fn;
    type->interface6.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface6.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_add_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__add_Update_fn;
    type->interface6.fp_remove_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__remove_Update_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::STRINGS[1] = uString::Const("");
    ::TYPES[14] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Button_typeof(), ::g::Uno::String_typeof());
    ::TYPES[15] = ::g::Uno::Action2_typeof()->MakeType(Button_typeof(), ::g::Uno::String_typeof());
    ::TYPES[16] = ::g::Uno::Func1_typeof()->MakeType(Button_typeof(), ::g::Uno::String_typeof());
    ::TYPES[17] = ::g::Uno::Delegate_typeof();
    ::TYPES[18] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[19] = uObject_typeof();
    ::TYPES[20] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::String_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Fuse::Triggers::IAddRemove_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Panel_type, interface7));
    type->SetFields(100,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Controls::Button, _text), 0,
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Fuse::Controls::Button, TextChanged1), 0,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Button_typeof(), ::g::Uno::String_typeof()), (uintptr_t)&::g::Fuse::Controls::Button::TextProperty_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("TextProperty", 102));
    type->Reflection.SetFunctions(6,
        new uFunction(".ctor", NULL, (void*)Button__New2_fn, 0, true, Button_typeof(), 0),
        new uFunction("SetText", NULL, (void*)Button__SetText1_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), uObject_typeof()),
        new uFunction("get_Text", NULL, (void*)Button__get_Text_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Text", NULL, (void*)Button__set_Text_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("add_TextChanged", NULL, (void*)Button__add_TextChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof())),
        new uFunction("remove_TextChanged", NULL, (void*)Button__remove_TextChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof())));
    return type;
}

// public generated Button() :105
void Button__ctor_4_fn(Button* __this)
{
    __this->ctor_4();
}

// private static string GetText(Fuse.Controls.Button b) :114
void Button__GetText_fn(Button* b, uString** __retval)
{
    *__retval = Button::GetText(b);
}

// public generated Button New() :105
void Button__New2_fn(Button** __retval)
{
    *__retval = Button::New2();
}

// private void OnTextChanged(string value, string orig) :140
void Button__OnTextChanged_fn(Button* __this, uString* value, uString* orig)
{
    __this->OnTextChanged(value, orig);
}

// private static void SetText(Fuse.Controls.Button b, string value) :119
void Button__SetText_fn(Button* b, uString* value)
{
    Button::SetText(b, value);
}

// public void SetText(string value, object origin) :135
void Button__SetText1_fn(Button* __this, uString* value, uObject* origin)
{
    __this->SetText1(value, origin);
}

// public string get_Text() :132
void Button__get_Text_fn(Button* __this, uString** __retval)
{
    *__retval = __this->Text();
}

// public void set_Text(string value) :133
void Button__set_Text_fn(Button* __this, uString* value)
{
    __this->Text(value);
}

// public generated void add_TextChanged(Uno.UX.ValueChangedHandler<string> value) :107
void Button__add_TextChanged_fn(Button* __this, uDelegate* value)
{
    __this->add_TextChanged(value);
}

// public generated void remove_TextChanged(Uno.UX.ValueChangedHandler<string> value) :107
void Button__remove_TextChanged_fn(Button* __this, uDelegate* value)
{
    __this->remove_TextChanged(value);
}

uSStrong< ::g::Fuse::StyleProperty1*> Button::TextProperty_;

// public generated Button() [instance] :105
void Button::ctor_4()
{
    _text = ::STRINGS[1/*""*/];
    ctor_3();
}

// private void OnTextChanged(string value, string orig) [instance] :140
void Button::OnTextChanged(uString* value, uString* orig)
{
    ::g::Uno::UX::ValueChangedArgs* ret3;

    if (::g::Uno::Delegate::op_Inequality(TextChanged1, NULL))
        uPtr(TextChanged1)->Invoke(2, this, (::g::Uno::UX::ValueChangedArgs__New2_fn(::TYPES[20/*Uno.UX.ValueChangedArgs<string>*/], value, orig, &ret3), ret3));
}

// public void SetText(string value, object origin) [instance] :135
void Button::SetText1(uString* value, uObject* origin)
{
    Text(value);
}

// public string get_Text() [instance] :132
uString* Button::Text()
{
    return Button::GetText(this);
}

// public void set_Text(string value) [instance] :133
void Button::Text(uString* value)
{
    Button::SetText(this, value);
}

// public generated void add_TextChanged(Uno.UX.ValueChangedHandler<string> value) [instance] :107
void Button::add_TextChanged(uDelegate* value)
{
    TextChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(TextChanged1, value), ::TYPES[18/*Uno.UX.ValueChangedHandler<string>*/]);
}

// public generated void remove_TextChanged(Uno.UX.ValueChangedHandler<string> value) [instance] :107
void Button::remove_TextChanged(uDelegate* value)
{
    TextChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(TextChanged1, value), ::TYPES[18/*Uno.UX.ValueChangedHandler<string>*/]);
}

// private static string GetText(Fuse.Controls.Button b) [static] :114
uString* Button::GetText(Button* b)
{
    Button_typeof()->Init();
    return uPtr(b)->_text;
}

// public generated Button New() [static] :105
Button* Button::New2()
{
    Button* obj1 = (Button*)uNew(Button_typeof());
    obj1->ctor_4();
    return obj1;
}

// private static void SetText(Fuse.Controls.Button b, string value) [static] :119
void Button::SetText(Button* b, uString* value)
{
    Button_typeof()->Init();

    if (::g::Uno::String::op_Inequality(uPtr(b)->_text, value))
    {
        uString* s = uPtr(b)->_text;
        b->_text = value;
        b->OnTextChanged(value, s);
    }
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(160)
// -----------------------------------------------------------

// public sealed class Circle :160
// {
::g::Fuse::Controls::Panel_type* Circle_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 111;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(Circle);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Fuse.Controls.Circle", options);
    type->SetBase(::g::Fuse::Controls::Shape_typeof());
    type->fp_ctor_ = (void*)Circle__New2_fn;
    type->interface6.fp_AddChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChild_fn;
    type->interface6.fp_AddChildAt = (void(*)(uObject*, int*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChildAt_fn;
    type->interface6.fp_RemoveChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_RemoveChild_fn;
    type->interface6.fp_GetChild = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_GetChild_fn;
    type->interface7.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Add_fn;
    type->interface7.fp_Remove = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Remove_fn;
    type->interface6.fp_get_ChildCount = (void(*)(uObject*, int*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_get_ChildCount_fn;
    type->interface6.fp_get_Children = (void(*)(uObject*, uObject**))::g::Fuse::Controls::Panel__get_Children_fn;
    type->interface6.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__get_ActualSize_fn;
    type->interface6.fp_get_HasChildren = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__get_HasChildren_fn;
    type->interface6.fp_add_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildAdded_fn;
    type->interface6.fp_remove_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildAdded_fn;
    type->interface6.fp_add_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildRemoved_fn;
    type->interface6.fp_remove_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildRemoved_fn;
    type->interface6.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface6.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_add_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__add_Update_fn;
    type->interface6.fp_remove_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__remove_Update_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::TYPES[21] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[9] = ::g::Uno::Float2_typeof();
    ::TYPES[22] = ::g::Uno::Bool_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Fuse::Triggers::IAddRemove_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Panel_type, interface7));
    type->SetFields(106,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Circle, _endAngle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Circle, _hasAngle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Circle, _hasLengthAngle), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Circle, _lengthAngle), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Circle, _startAngle), 0);
    type->Reflection.SetFunctions(13,
        new uFunction("get_EndAngle", NULL, (void*)Circle__get_EndAngle_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_EndAngle", NULL, (void*)Circle__set_EndAngle_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_EndAngleDegrees", NULL, (void*)Circle__get_EndAngleDegrees_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_EndAngleDegrees", NULL, (void*)Circle__set_EndAngleDegrees_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_LengthAngle", NULL, (void*)Circle__get_LengthAngle_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_LengthAngle", NULL, (void*)Circle__set_LengthAngle_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_LengthAngleDegrees", NULL, (void*)Circle__get_LengthAngleDegrees_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_LengthAngleDegrees", NULL, (void*)Circle__set_LengthAngleDegrees_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)Circle__New2_fn, 0, true, Circle_typeof(), 0),
        new uFunction("get_StartAngle", NULL, (void*)Circle__get_StartAngle_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_StartAngle", NULL, (void*)Circle__set_StartAngle_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_StartAngleDegrees", NULL, (void*)Circle__get_StartAngleDegrees_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_StartAngleDegrees", NULL, (void*)Circle__set_StartAngleDegrees_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
    return type;
}

// public generated Circle() :160
void Circle__ctor_5_fn(Circle* __this)
{
    __this->ctor_5();
}

// internal static bool AngleInRange(float angle, float start, float end) :260
void Circle__AngleInRange_fn(float* angle, float* start, float* end, bool* __retval)
{
    *__retval = Circle::AngleInRange(*angle, *start, *end);
}

// internal float2 get_Center() :164
void Circle__get_Center_fn(Circle* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Center();
}

// internal float get_EffectiveEndAngle() :249
void Circle__get_EffectiveEndAngle_fn(Circle* __this, float* __retval)
{
    *__retval = __this->EffectiveEndAngle();
}

// internal float get_EffectiveEndAngleDegrees() :257
void Circle__get_EffectiveEndAngleDegrees_fn(Circle* __this, float* __retval)
{
    *__retval = __this->EffectiveEndAngleDegrees();
}

// public float get_EndAngle() :192
void Circle__get_EndAngle_fn(Circle* __this, float* __retval)
{
    *__retval = __this->EndAngle();
}

// public void set_EndAngle(float value) :193
void Circle__set_EndAngle_fn(Circle* __this, float* value)
{
    __this->EndAngle(*value);
}

// public float get_EndAngleDegrees() :237
void Circle__get_EndAngleDegrees_fn(Circle* __this, float* __retval)
{
    *__retval = __this->EndAngleDegrees();
}

// public void set_EndAngleDegrees(float value) :238
void Circle__set_EndAngleDegrees_fn(Circle* __this, float* value)
{
    __this->EndAngleDegrees(*value);
}

// public float get_LengthAngle() :221
void Circle__get_LengthAngle_fn(Circle* __this, float* __retval)
{
    *__retval = __this->LengthAngle();
}

// public void set_LengthAngle(float value) :222
void Circle__set_LengthAngle_fn(Circle* __this, float* value)
{
    __this->LengthAngle(*value);
}

// public float get_LengthAngleDegrees() :243
void Circle__get_LengthAngleDegrees_fn(Circle* __this, float* __retval)
{
    *__retval = __this->LengthAngleDegrees();
}

// public void set_LengthAngleDegrees(float value) :244
void Circle__set_LengthAngleDegrees_fn(Circle* __this, float* value)
{
    __this->LengthAngleDegrees(*value);
}

// public generated Circle New() :160
void Circle__New2_fn(Circle** __retval)
{
    *__retval = Circle::New2();
}

// internal float get_Radius() :173
void Circle__get_Radius_fn(Circle* __this, float* __retval)
{
    *__retval = __this->Radius();
}

// public float get_StartAngle() :181
void Circle__get_StartAngle_fn(Circle* __this, float* __retval)
{
    *__retval = __this->StartAngle();
}

// public void set_StartAngle(float value) :182
void Circle__set_StartAngle_fn(Circle* __this, float* value)
{
    __this->StartAngle(*value);
}

// public float get_StartAngleDegrees() :232
void Circle__get_StartAngleDegrees_fn(Circle* __this, float* __retval)
{
    *__retval = __this->StartAngleDegrees();
}

// public void set_StartAngleDegrees(float value) :233
void Circle__set_StartAngleDegrees_fn(Circle* __this, float* value)
{
    __this->StartAngleDegrees(*value);
}

// internal bool get_UseAngle() :202
void Circle__get_UseAngle_fn(Circle* __this, bool* __retval)
{
    *__retval = __this->UseAngle();
}

// public generated Circle() [instance] :160
void Circle::ctor_5()
{
    ctor_4();
}

// internal float2 get_Center() [instance] :164
::g::Uno::Float2 Circle::Center()
{
    return ::g::Uno::Float2__op_Division1(ActualSize(), 2.0f);
}

// internal float get_EffectiveEndAngle() [instance] :249
float Circle::EffectiveEndAngle()
{
    return _hasLengthAngle ? _startAngle + _lengthAngle : _endAngle;
}

// internal float get_EffectiveEndAngleDegrees() [instance] :257
float Circle::EffectiveEndAngleDegrees()
{
    return ::g::Uno::Math::RadiansToDegrees1(EffectiveEndAngle());
}

// public float get_EndAngle() [instance] :192
float Circle::EndAngle()
{
    return _endAngle;
}

// public void set_EndAngle(float value) [instance] :193
void Circle::EndAngle(float value)
{
    _endAngle = value;
    OnShapeChanged();
}

// public float get_EndAngleDegrees() [instance] :237
float Circle::EndAngleDegrees()
{
    return ::g::Uno::Math::RadiansToDegrees1(_endAngle);
}

// public void set_EndAngleDegrees(float value) [instance] :238
void Circle::EndAngleDegrees(float value)
{
    EndAngle(::g::Uno::Math::DegreesToRadians1(value));
}

// public float get_LengthAngle() [instance] :221
float Circle::LengthAngle()
{
    return _lengthAngle;
}

// public void set_LengthAngle(float value) [instance] :222
void Circle::LengthAngle(float value)
{
    _lengthAngle = value;
    _hasLengthAngle = true;
    OnShapeChanged();
}

// public float get_LengthAngleDegrees() [instance] :243
float Circle::LengthAngleDegrees()
{
    return ::g::Uno::Math::RadiansToDegrees1(_lengthAngle);
}

// public void set_LengthAngleDegrees(float value) [instance] :244
void Circle::LengthAngleDegrees(float value)
{
    LengthAngle(::g::Uno::Math::DegreesToRadians1(value));
}

// internal float get_Radius() [instance] :173
float Circle::Radius()
{
    return ::g::Uno::Math::Min1(ActualSize().X, ActualSize().Y) * 0.5f;
}

// public float get_StartAngle() [instance] :181
float Circle::StartAngle()
{
    return _startAngle;
}

// public void set_StartAngle(float value) [instance] :182
void Circle::StartAngle(float value)
{
    _startAngle = value;
    _hasAngle = true;
    OnShapeChanged();
}

// public float get_StartAngleDegrees() [instance] :232
float Circle::StartAngleDegrees()
{
    return ::g::Uno::Math::RadiansToDegrees1(_startAngle);
}

// public void set_StartAngleDegrees(float value) [instance] :233
void Circle::StartAngleDegrees(float value)
{
    StartAngle(::g::Uno::Math::DegreesToRadians1(value));
}

// internal bool get_UseAngle() [instance] :202
bool Circle::UseAngle()
{
    if (!_hasAngle)
        return false;

    if (_hasLengthAngle && (_lengthAngle >= 6.28318548f))
        return false;

    return true;
}

// internal static bool AngleInRange(float angle, float start, float end) [static] :260
bool Circle::AngleInRange(float angle, float start, float end)
{
    angle = ::g::Uno::Math::Mod1(angle, 6.28318548f);
    float pStartAngle = ::g::Uno::Math::Mod1(start, 6.28318548f);
    float pEndAngle = ::g::Uno::Math::Mod1(end, 6.28318548f);

    if (pStartAngle > pEndAngle)
        return (angle > pStartAngle) || (angle < pEndAngle);
    else
        return (angle > pStartAngle) && (angle < pEndAngle);
}

// public generated Circle New() [static] :160
Circle* Circle::New2()
{
    Circle* obj1 = (Circle*)uNew(Circle_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\.cache\GeneratedCode\$.uno(44)
// -------------------------------------------------------------------------------

// public partial sealed class ClientPanel :44
// {
// static ClientPanel() :46
static void ClientPanel__cctor_4_fn(uType* __type)
{
}

::g::Fuse::Controls::Panel_type* ClientPanel_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 101;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(ClientPanel);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Fuse.Controls.ClientPanel", options);
    type->SetBase(::g::Fuse::Controls::DockPanel_typeof());
    type->fp_ctor_ = (void*)ClientPanel__New3_fn;
    type->fp_cctor_ = ClientPanel__cctor_4_fn;
    type->interface6.fp_AddChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChild_fn;
    type->interface6.fp_AddChildAt = (void(*)(uObject*, int*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChildAt_fn;
    type->interface6.fp_RemoveChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_RemoveChild_fn;
    type->interface6.fp_GetChild = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_GetChild_fn;
    type->interface7.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Add_fn;
    type->interface7.fp_Remove = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Remove_fn;
    type->interface6.fp_get_ChildCount = (void(*)(uObject*, int*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_get_ChildCount_fn;
    type->interface6.fp_get_Children = (void(*)(uObject*, uObject**))::g::Fuse::Controls::Panel__get_Children_fn;
    type->interface6.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__get_ActualSize_fn;
    type->interface6.fp_get_HasChildren = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__get_HasChildren_fn;
    type->interface6.fp_add_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildAdded_fn;
    type->interface6.fp_remove_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildAdded_fn;
    type->interface6.fp_add_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildRemoved_fn;
    type->interface6.fp_remove_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildRemoved_fn;
    type->interface6.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface6.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_add_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__add_Update_fn;
    type->interface6.fp_remove_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__remove_Update_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::TYPES[21] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[23] = ::g::Fuse::Controls::Panel_typeof();
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Fuse::Triggers::IAddRemove_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Panel_type, interface7));
    type->SetFields(101);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ClientPanel__New3_fn, 0, true, ClientPanel_typeof(), 0));
    return type;
}

// public ClientPanel() :49
void ClientPanel__ctor_5_fn(ClientPanel* __this)
{
    __this->ctor_5();
}

// internal void InitializeUX() :53
void ClientPanel__InitializeUX_fn(ClientPanel* __this)
{
    __this->InitializeUX();
}

// public ClientPanel New() :49
void ClientPanel__New3_fn(ClientPanel** __retval)
{
    *__retval = ClientPanel::New3();
}

// public ClientPanel() [instance] :49
void ClientPanel::ctor_5()
{
    ctor_4();
    InitializeUX();
}

// internal void InitializeUX() [instance] :53
void ClientPanel::InitializeUX()
{
    ::g::Fuse::Controls::TopFrameBackground* temp = ::g::Fuse::Controls::TopFrameBackground::New1();
    ::g::Fuse::Controls::BottomFrameBackground* temp1 = ::g::Fuse::Controls::BottomFrameBackground::New1();
    ::g::Fuse::Controls::DockPanel::SetDock(temp, 2);
    ::g::Fuse::Controls::DockPanel::SetDock(temp1, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[122/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[122/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
}

// public ClientPanel New() [static] :49
ClientPanel* ClientPanel::New3()
{
    ClientPanel* obj1 = (ClientPanel*)uNew(ClientPanel_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(288)
// -----------------------------------------------------------

// public class ContentControl :288
// {
ContentControl_type* ContentControl_typeof()
{
    static uSStrong<ContentControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 90;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(ContentControl);
    options.TypeSize = sizeof(ContentControl_type);
    type = (ContentControl_type*)uClassType::New("Fuse.Controls.ContentControl", options);
    type->SetBase(::g::Fuse::Controls::Control_typeof());
    type->fp_ctor_ = (void*)ContentControl__New1_fn;
    type->fp_ArrangePaddingBox = (void(*)(::g::Fuse::Elements::Element*, ::g::Uno::Float2*, int*))ContentControl__ArrangePaddingBox_fn;
    type->fp_CalcRenderBounds = (void(*)(::g::Fuse::Elements::Element*, ::g::Uno::Rect*))ContentControl__CalcRenderBounds_fn;
    type->fp_GetContentSize = (void(*)(::g::Fuse::Elements::Element*, ::g::Uno::Float2*, int*, ::g::Uno::Float2*))ContentControl__GetContentSize_fn;
    type->fp_GetSubNode = (void(*)(::g::Fuse::Node*, int*, ::g::Fuse::Node**))ContentControl__GetSubNode_fn;
    type->fp_OnContentChanged = ContentControl__OnContentChanged_fn;
    type->fp_OnDrawControl = (void(*)(::g::Fuse::Controls::Control*, ::g::Fuse::DrawContext*))ContentControl__OnDrawControl_fn;
    type->fp_OnHitTestChildren = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::HitTestContext*))ContentControl__OnHitTestChildren_fn;
    type->fp_get_SubNodeCount = (void(*)(::g::Fuse::Node*, int*))ContentControl__get_SubNodeCount_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::TYPES[21] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[24] = ::g::Uno::Float4_typeof();
    ::TYPES[25] = ::g::Fuse::SizeFlags_typeof();
    ::TYPES[26] = ::g::Uno::Int_typeof();
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(ContentControl_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(ContentControl_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(ContentControl_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(ContentControl_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(ContentControl_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(ContentControl_type, interface5));
    type->SetFields(89,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Controls::ContentControl, _content), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Content", NULL, (void*)ContentControl__get_Content_fn, 0, false, ::g::Fuse::Node_typeof(), 0),
        new uFunction("set_Content", NULL, (void*)ContentControl__set_Content_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction(".ctor", NULL, (void*)ContentControl__New1_fn, 0, true, ContentControl_typeof(), 0));
    return type;
}

// public generated ContentControl() :288
void ContentControl__ctor_3_fn(ContentControl* __this)
{
    __this->ctor_3();
}

// protected override void ArrangePaddingBox(float2 size, Fuse.SizeFlags flags) :338
void ContentControl__ArrangePaddingBox_fn(ContentControl* __this, ::g::Uno::Float2* size, int* flags)
{
    ::g::Uno::Float4 ind1;
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float4 ind3;
    ::g::Uno::Float2 size_ = *size;
    int flags_ = *flags;

    if (__this->Content() != NULL)
        uPtr(__this->Content())->ArrangeMarginBox((ind1 = __this->Padding(), ::g::Uno::Float2__New2(ind1.X, ind1.Y)), ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Subtraction2(size_, (ind2 = __this->Padding(), ::g::Uno::Float2__New2(ind2.X, ind2.Y))), (ind3 = __this->Padding(), ::g::Uno::Float2__New2(ind3.Z, ind3.W))), 3 | flags_);
}

// protected override sealed Uno.Rect CalcRenderBounds() :317
void ContentControl__CalcRenderBounds_fn(ContentControl* __this, ::g::Uno::Rect* __retval)
{
    ::g::Uno::Rect ret5;
    ::g::Uno::Rect baseRect = (::g::Fuse::Elements::Element__CalcRenderBounds_fn(__this, &ret5), ret5);

    if (__this->Content() != NULL)
        baseRect = ::g::Uno::Rect__Union(baseRect, uPtr(__this->Content())->CalcRenderBoundsInParentSpace());

    return *__retval = baseRect, void();
}

// public Fuse.Node get_Content() :294
void ContentControl__get_Content_fn(ContentControl* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Content();
}

// public void set_Content(Fuse.Node value) :295
void ContentControl__set_Content_fn(ContentControl* __this, ::g::Fuse::Node* value)
{
    __this->Content(value);
}

// protected override float2 GetContentSize(float2 fillSize, Fuse.SizeFlags fillSet) :331
void ContentControl__GetContentSize_fn(ContentControl* __this, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 fillSize_ = *fillSize;
    int fillSet_ = *fillSet;
    ::g::Uno::Float2 ret6;

    if (__this->Content() != NULL)
        return *__retval = uPtr(__this->Content())->GetMarginSize(fillSize_, fillSet_), void();

    return *__retval = (::g::Fuse::Elements::Element__GetContentSize_fn(__this, uCRef(fillSize_), uCRef<int>(fillSet_), &ret6), ret6), void();
}

// public override sealed Fuse.Node GetSubNode(int index) :360
void ContentControl__GetSubNode_fn(ContentControl* __this, int* index, ::g::Fuse::Node** __retval)
{
    int ret7;
    int index_ = *index;
    ::g::Fuse::Node* ret8;
    int b = (::g::Fuse::Node__get_SubNodeCount_fn(__this, &ret7), ret7);

    if (index_ >= b)
        return *__retval = __this->Content(), void();

    return *__retval = (::g::Fuse::Node__GetSubNode_fn(__this, uCRef<int>(index_), &ret8), ret8), void();
}

// public generated ContentControl New() :288
void ContentControl__New1_fn(ContentControl** __retval)
{
    *__retval = ContentControl::New1();
}

// protected virtual void OnContentChanged(Fuse.Node oldContent, Fuse.Node newContent) :312
void ContentControl__OnContentChanged_fn(ContentControl* __this, ::g::Fuse::Node* oldContent, ::g::Fuse::Node* newContent)
{
    __this->InvalidateLayout(2);
}

// protected override sealed void OnDrawControl(Fuse.DrawContext dc) :325
void ContentControl__OnDrawControl_fn(ContentControl* __this, ::g::Fuse::DrawContext* dc)
{
    if (__this->Content() != NULL)
        uPtr(__this->Content())->Draw(dc);
}

// protected override sealed void OnHitTestChildren(Fuse.HitTestContext htc) :345
void ContentControl__OnHitTestChildren_fn(ContentControl* __this, ::g::Fuse::HitTestContext* htc)
{
    if (__this->Content() != NULL)
        uPtr(__this->Content())->HitTest(htc);

    ::g::Fuse::Elements::Element__OnHitTestChildren_fn(__this, htc);
}

// public override sealed int get_SubNodeCount() :354
void ContentControl__get_SubNodeCount_fn(ContentControl* __this, int* __retval)
{
    int ret9;
    return *__retval = (::g::Fuse::Node__get_SubNodeCount_fn(__this, &ret9), ret9) + ((__this->Content() == NULL) ? 0 : 1), void();
}

// public generated ContentControl() [instance] :288
void ContentControl::ctor_3()
{
    ctor_2();
}

// public Fuse.Node get_Content() [instance] :294
::g::Fuse::Node* ContentControl::Content()
{
    return _content;
}

// public void set_Content(Fuse.Node value) [instance] :295
void ContentControl::Content(::g::Fuse::Node* value)
{
    if (_content != value)
    {
        ::g::Fuse::Node* old = _content;

        if ((_content != NULL) && (uPtr(_content)->Parent() == this))
            uPtr(_content)->OnRemoved(this);

        _content = value;

        if ((_content != NULL) && (uPtr(_content)->Parent() != this))
            uPtr(_content)->OnAdded(this);

        OnContentChanged(old, value);
    }
}

// public generated ContentControl New() [static] :288
ContentControl* ContentControl::New1()
{
    ContentControl* obj4 = (ContentControl*)uNew(ContentControl_typeof());
    obj4->ctor_3();
    return obj4;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(379)
// -----------------------------------------------------------

// public interfacemodifiers class Control :379
// {
// static Control() :379
static void Control__cctor_2_fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret1;
    Control::BackgroundProperty_ = (::g::Fuse::StyleProperty1__New2_fn(::TYPES[27/*Fuse.StyleProperty<Fuse.Controls.Control, Fuse.Drawing.Brush>*/], NULL, uDelegate::New(::TYPES[28/*Uno.Action<Fuse.Controls.Control>*/], (void*)Control__OnBackgroundChanged_fn), uDelegate::New(::TYPES[29/*Uno.Action<Fuse.Controls.Control, Fuse.Drawing.Brush>*/], (void*)Control__SetBackground_fn), uDelegate::New(::TYPES[30/*Uno.Func<Fuse.Controls.Control, Fuse.Drawing.Brush>*/], (void*)Control__GetBackground_fn), &ret1), ret1);
}

Control_type* Control_typeof()
{
    static uSStrong<Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 90;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(Control);
    options.TypeSize = sizeof(Control_type);
    type = (Control_type*)uClassType::New("Fuse.Controls.Control", options);
    type->SetBase(::g::Fuse::Elements::Element_typeof());
    type->fp_cctor_ = Control__cctor_2_fn;
    type->fp_get_HitTestLocalVisualBounds = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::NodeBounds**))Control__get_HitTestLocalVisualBounds_fn;
    type->fp_OnDraw = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::DrawContext*))Control__OnDraw_fn;
    type->fp_OnDrawControl = Control__OnDrawControl_fn;
    type->fp_OnHitTestLocalVisual = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::HitTestContext*))Control__OnHitTestLocalVisual_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Control__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Control__OnUnrooted_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::TYPES[27] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Control_typeof(), ::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[28] = ::g::Uno::Action1_typeof()->MakeType(Control_typeof());
    ::TYPES[29] = ::g::Uno::Action2_typeof()->MakeType(Control_typeof(), ::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[30] = ::g::Uno::Func1_typeof()->MakeType(Control_typeof(), ::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[22] = ::g::Uno::Bool_typeof();
    ::TYPES[31] = ::g::Fuse::Drawing::Brush_typeof();
    ::TYPES[21] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[32] = ::g::Fuse::Internal::Drawing::SolidRectangle_typeof();
    ::TYPES[17] = ::g::Uno::Delegate_typeof();
    ::TYPES[33] = ::g::Uno::EventHandler_typeof();
    ::TYPES[19] = uObject_typeof();
    ::TYPES[34] = ::g::Uno::EventArgs_typeof();
    ::TYPES[35] = ::g::Fuse::HitTestContext_typeof();
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[36] = ::g::Fuse::Drawing::DynamicBrush_typeof();
    ::TYPES[37] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(Control_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(Control_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(Control_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(Control_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(Control_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(Control_type, interface5));
    type->SetFields(85,
        ::g::Fuse::Drawing::Brush_typeof(), offsetof(::g::Fuse::Controls::Control, _background), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Control, _isInteracting), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Controls::Control, ControlRenderPropertyChanged1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Controls::Control, IsInteractingChanged1), 0,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Control_typeof(), ::g::Fuse::Drawing::Brush_typeof()), (uintptr_t)&::g::Fuse::Controls::Control::BackgroundProperty_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("BackgroundProperty", 89));
    type->Reflection.SetFunctions(7,
        new uFunction("get_Background", NULL, (void*)Control__get_Background_fn, 0, false, ::g::Fuse::Drawing::Brush_typeof(), 0),
        new uFunction("set_Background", NULL, (void*)Control__set_Background_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Brush_typeof()),
        new uFunction("add_ControlRenderPropertyChanged", NULL, (void*)Control__add_ControlRenderPropertyChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_ControlRenderPropertyChanged", NULL, (void*)Control__remove_ControlRenderPropertyChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("get_IsInteracting", NULL, (void*)Control__get_IsInteracting_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("add_IsInteractingChanged", NULL, (void*)Control__add_IsInteractingChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_IsInteractingChanged", NULL, (void*)Control__remove_IsInteractingChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()));
    return type;
}

// protected generated Control() :379
void Control__ctor_2_fn(Control* __this)
{
    __this->ctor_2();
}

// public Fuse.Drawing.Brush get_Background() :388
void Control__get_Background_fn(Control* __this, ::g::Fuse::Drawing::Brush** __retval)
{
    *__retval = __this->Background();
}

// public void set_Background(Fuse.Drawing.Brush value) :389
void Control__set_Background_fn(Control* __this, ::g::Fuse::Drawing::Brush* value)
{
    __this->Background(value);
}

// public generated void add_ControlRenderPropertyChanged(Uno.EventHandler value) :582
void Control__add_ControlRenderPropertyChanged_fn(Control* __this, uDelegate* value)
{
    __this->add_ControlRenderPropertyChanged(value);
}

// public generated void remove_ControlRenderPropertyChanged(Uno.EventHandler value) :582
void Control__remove_ControlRenderPropertyChanged_fn(Control* __this, uDelegate* value)
{
    __this->remove_ControlRenderPropertyChanged(value);
}

// protected void DrawBackground(Fuse.DrawContext dc, float opacity) :414
void Control__DrawBackground_fn(Control* __this, ::g::Fuse::DrawContext* dc, float* opacity)
{
    __this->DrawBackground(dc, *opacity);
}

// private static Fuse.Drawing.Brush GetBackground(Fuse.Controls.Control c) :405
void Control__GetBackground_fn(Control* c, ::g::Fuse::Drawing::Brush** __retval)
{
    *__retval = Control::GetBackground(c);
}

// protected override sealed Fuse.NodeBounds get_HitTestLocalVisualBounds() :541
void Control__get_HitTestLocalVisualBounds_fn(Control* __this, ::g::Fuse::NodeBounds** __retval)
{
    ::g::Fuse::NodeBounds* ret3;
    ::g::Fuse::NodeBounds* nb = (::g::Fuse::Elements::Element__get_HitTestLocalVisualBounds_fn(__this, &ret3), ret3);

    if (__this->Background() != NULL)
        nb = uPtr(nb)->AddRect(::g::Uno::Float2__New1(0.0f), __this->ActualSize());

    return *__retval = nb, void();
}

// public bool get_IsInteracting() :554
void Control__get_IsInteracting_fn(Control* __this, bool* __retval)
{
    *__retval = __this->IsInteracting();
}

// public generated void add_IsInteractingChanged(Uno.EventHandler value) :550
void Control__add_IsInteractingChanged_fn(Control* __this, uDelegate* value)
{
    __this->add_IsInteractingChanged(value);
}

// public generated void remove_IsInteractingChanged(Uno.EventHandler value) :550
void Control__remove_IsInteractingChanged_fn(Control* __this, uDelegate* value)
{
    __this->remove_IsInteractingChanged(value);
}

// private static void OnBackgroundChanged(Fuse.Controls.Control c) :409
void Control__OnBackgroundChanged_fn(Control* c)
{
    Control::OnBackgroundChanged(c);
}

// protected void OnControlRenderPropertyChanged() :583
void Control__OnControlRenderPropertyChanged_fn(Control* __this)
{
    __this->OnControlRenderPropertyChanged();
}

// protected override void OnDraw(Fuse.DrawContext dc) :523
void Control__OnDraw_fn(Control* __this, ::g::Fuse::DrawContext* dc)
{
    __this->DrawBackground(dc, 1.0f);
    __this->OnDrawControl(dc);
}

// protected virtual void OnDrawControl(Fuse.DrawContext dc) :529
void Control__OnDrawControl_fn(Control* __this, ::g::Fuse::DrawContext* dc)
{
}

// protected override sealed void OnHitTestLocalVisual(Fuse.HitTestContext htc) :531
void Control__OnHitTestLocalVisual_fn(Control* __this, ::g::Fuse::HitTestContext* htc)
{
    if ((__this->Background() != NULL) && __this->IsPointInside(uPtr(htc)->LocalPoint()))
        uPtr(htc)->Hit(__this);

    ::g::Fuse::Elements::Element__OnHitTestLocalVisual_fn(__this, htc);
}

// protected override void OnRooted() :568
void Control__OnRooted_fn(Control* __this)
{
    ::g::Fuse::Elements::Element__OnRooted_fn(__this);

    if (__this->_background != NULL)
        uPtr(__this->_background)->Pin();
}

// protected override void OnUnrooted() :575
void Control__OnUnrooted_fn(Control* __this)
{
    if (__this->_background != NULL)
        uPtr(__this->_background)->Unpin();

    ::g::Fuse::Elements::Element__OnUnrooted_fn(__this);
}

// private static void SetBackground(Fuse.Controls.Control c, Fuse.Drawing.Brush value) :391
void Control__SetBackground_fn(Control* c, ::g::Fuse::Drawing::Brush* value)
{
    Control::SetBackground(c, value);
}

// internal void SetIsInteracting(object what, bool on) :558
void Control__SetIsInteracting_fn(Control* __this, uObject* what, bool* on)
{
    __this->SetIsInteracting(what, *on);
}

uSStrong< ::g::Fuse::StyleProperty1*> Control::BackgroundProperty_;

// protected generated Control() [instance] :379
void Control::ctor_2()
{
    ctor_1();
}

// public Fuse.Drawing.Brush get_Background() [instance] :388
::g::Fuse::Drawing::Brush* Control::Background()
{
    return _background;
}

// public void set_Background(Fuse.Drawing.Brush value) [instance] :389
void Control::Background(::g::Fuse::Drawing::Brush* value)
{
    bool ret2;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Control::BackgroundProperty()), this, value, &ret2);
}

// public generated void add_ControlRenderPropertyChanged(Uno.EventHandler value) [instance] :582
void Control::add_ControlRenderPropertyChanged(uDelegate* value)
{
    ControlRenderPropertyChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ControlRenderPropertyChanged1, value), ::TYPES[33/*Uno.EventHandler*/]);
}

// public generated void remove_ControlRenderPropertyChanged(Uno.EventHandler value) [instance] :582
void Control::remove_ControlRenderPropertyChanged(uDelegate* value)
{
    ControlRenderPropertyChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ControlRenderPropertyChanged1, value), ::TYPES[33/*Uno.EventHandler*/]);
}

// protected void DrawBackground(Fuse.DrawContext dc, float opacity) [instance] :414
void Control::DrawBackground(::g::Fuse::DrawContext* dc, float opacity)
{
    if ((Background() != NULL) && !uPtr(Background())->IsCompletelyTransparent())
    {
        uPtr(Background())->Prepare(dc, ActualSize());
        uPtr(::g::Fuse::Internal::Drawing::SolidRectangle::Impl())->DrawElement(dc, this, Background(), opacity);
    }
}

// public bool get_IsInteracting() [instance] :554
bool Control::IsInteracting()
{
    return _isInteracting;
}

// public generated void add_IsInteractingChanged(Uno.EventHandler value) [instance] :550
void Control::add_IsInteractingChanged(uDelegate* value)
{
    IsInteractingChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(IsInteractingChanged1, value), ::TYPES[33/*Uno.EventHandler*/]);
}

// public generated void remove_IsInteractingChanged(Uno.EventHandler value) [instance] :550
void Control::remove_IsInteractingChanged(uDelegate* value)
{
    IsInteractingChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(IsInteractingChanged1, value), ::TYPES[33/*Uno.EventHandler*/]);
}

// protected void OnControlRenderPropertyChanged() [instance] :583
void Control::OnControlRenderPropertyChanged()
{
    InvalidateVisual();

    if (::g::Uno::Delegate::op_Inequality(ControlRenderPropertyChanged1, NULL))
        uPtr(ControlRenderPropertyChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// internal void SetIsInteracting(object what, bool on) [instance] :558
void Control::SetIsInteracting(uObject* what, bool on)
{
    if (_isInteracting == on)
        return;

    _isInteracting = on;

    if (::g::Uno::Delegate::op_Inequality(IsInteractingChanged1, NULL))
        uPtr(IsInteractingChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private static Fuse.Drawing.Brush GetBackground(Fuse.Controls.Control c) [static] :405
::g::Fuse::Drawing::Brush* Control::GetBackground(Control* c)
{
    Control_typeof()->Init();
    return uPtr(c)->_background;
}

// private static void OnBackgroundChanged(Fuse.Controls.Control c) [static] :409
void Control::OnBackgroundChanged(Control* c)
{
    Control_typeof()->Init();
    uPtr(c)->OnControlRenderPropertyChanged();
}

// private static void SetBackground(Fuse.Controls.Control c, Fuse.Drawing.Brush value) [static] :391
void Control::SetBackground(Control* c, ::g::Fuse::Drawing::Brush* value)
{
    Control_typeof()->Init();

    if (uPtr(c)->IsLocalRooted() && (uPtr(c)->_background != NULL))
        uPtr(uPtr(c)->_background)->Unpin();

    if (uIs(c->_background, ::TYPES[36/*Fuse.Drawing.DynamicBrush*/]))
        uPtr(uCast< ::g::Fuse::Drawing::DynamicBrush*>(c->_background, ::TYPES[36/*Fuse.Drawing.DynamicBrush*/]))->remove_ShadingChanged(uDelegate::New(::TYPES[37/*Uno.Action*/], (void*)Control__OnControlRenderPropertyChanged_fn, c));

    c->_background = value;

    if (uIs(c->_background, ::TYPES[36/*Fuse.Drawing.DynamicBrush*/]))
        uPtr(uCast< ::g::Fuse::Drawing::DynamicBrush*>(c->_background, ::TYPES[36/*Fuse.Drawing.DynamicBrush*/]))->add_ShadingChanged(uDelegate::New(::TYPES[37/*Uno.Action*/], (void*)Control__OnControlRenderPropertyChanged_fn, c));

    if (c->IsLocalRooted() && (c->_background != NULL))
        uPtr(c->_background)->Pin();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Graphics\$.uno(920)
// --------------------------------------------------------------------

// public sealed class DefaultSwitchBehavior :920
// {
::g::Fuse::Triggers::Trigger_type* DefaultSwitchBehavior_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 22;
    options.ObjectSize = sizeof(DefaultSwitchBehavior);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Controls.DefaultSwitchBehavior", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)DefaultSwitchBehavior__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))DefaultSwitchBehavior__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))DefaultSwitchBehavior__OnUnrooted_fn;
    ::STRINGS[2] = uString::Const("SwitchBehavior must be rooted in a Switch");
    ::TYPES[38] = ::g::Fuse::Controls::ToggleControl_typeof();
    ::TYPES[22] = ::g::Uno::Bool_typeof();
    ::TYPES[19] = uObject_typeof();
    ::TYPES[9] = ::g::Uno::Float2_typeof();
    ::TYPES[39] = ::g::Fuse::Input::PointerEventArgs_typeof();
    ::TYPES[37] = ::g::Uno::Action_typeof();
    ::TYPES[4] = ::g::Fuse::Triggers::Trigger_typeof();
    ::TYPES[40] = ::g::Uno::Double_typeof();
    ::TYPES[41] = ::g::Fuse::Controls::Switch_typeof();
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    ::TYPES[42] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[43] = ::g::Fuse::Input::Pointer_typeof();
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[44] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[45] = ::g::Fuse::Input::PointerMovedHandler_typeof();
    ::TYPES[46] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    ::TYPES[47] = ::g::Fuse::Gestures::Clicker_typeof();
    ::TYPES[48] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    ::TYPES[21] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[49] = ::g::Fuse::PlacedHandler_typeof();
    ::TYPES[50] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Bool_typeof());
    type->SetFields(14,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Controls::DefaultSwitchBehavior, _bounds), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::DefaultSwitchBehavior, _captured), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::DefaultSwitchBehavior, _capturedIndex), 0,
        ::g::Fuse::Gestures::Clicker_typeof(), offsetof(::g::Fuse::Controls::DefaultSwitchBehavior, _clicker), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::DefaultSwitchBehavior, _currentCoord), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::DefaultSwitchBehavior, _originalP), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::DefaultSwitchBehavior, _prevCoord), 0,
        ::g::Fuse::Controls::Switch_typeof(), offsetof(::g::Fuse::Controls::DefaultSwitchBehavior, _switch), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Bounds", NULL, (void*)DefaultSwitchBehavior__get_Bounds_fn, 0, false, ::g::Fuse::Elements::Element_typeof(), 0),
        new uFunction("set_Bounds", NULL, (void*)DefaultSwitchBehavior__set_Bounds_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::Element_typeof()),
        new uFunction(".ctor", NULL, (void*)DefaultSwitchBehavior__New1_fn, 0, true, DefaultSwitchBehavior_typeof(), 0));
    return type;
}

// public generated DefaultSwitchBehavior() :920
void DefaultSwitchBehavior__ctor_2_fn(DefaultSwitchBehavior* __this)
{
    __this->ctor_2();
}

// public Fuse.Elements.Element get_Bounds() :927
void DefaultSwitchBehavior__get_Bounds_fn(DefaultSwitchBehavior* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->Bounds();
}

// public void set_Bounds(Fuse.Elements.Element value) :928
void DefaultSwitchBehavior__set_Bounds_fn(DefaultSwitchBehavior* __this, ::g::Fuse::Elements::Element* value)
{
    __this->Bounds(value);
}

// public generated DefaultSwitchBehavior New() :920
void DefaultSwitchBehavior__New1_fn(DefaultSwitchBehavior** __retval)
{
    *__retval = DefaultSwitchBehavior::New1();
}

// private void OnCaptureLost() :1007
void DefaultSwitchBehavior__OnCaptureLost_fn(DefaultSwitchBehavior* __this)
{
    __this->OnCaptureLost();
}

// private void OnPlaced(object sender, Fuse.PlacedArgs args) :985
void DefaultSwitchBehavior__OnPlaced_fn(DefaultSwitchBehavior* __this, uObject* sender, ::g::Fuse::PlacedArgs* args)
{
    __this->OnPlaced(sender, args);
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) :1013
void DefaultSwitchBehavior__OnPointerMoved_fn(DefaultSwitchBehavior* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    __this->OnPointerMoved(sender, args);
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) :994
void DefaultSwitchBehavior__OnPointerPressed_fn(DefaultSwitchBehavior* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    __this->OnPointerPressed(sender, args);
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) :1045
void DefaultSwitchBehavior__OnPointerReleased_fn(DefaultSwitchBehavior* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    __this->OnPointerReleased(sender, args);
}

// private void OnPointerTapped(object a, int tapCount) :1054
void DefaultSwitchBehavior__OnPointerTapped_fn(DefaultSwitchBehavior* __this, uObject* a, int* tapCount)
{
    __this->OnPointerTapped(a, *tapCount);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :932
void DefaultSwitchBehavior__OnRooted_fn(DefaultSwitchBehavior* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    __this->_switch = uAs< ::g::Fuse::Controls::Switch*>(__this->ParentNode(), ::TYPES[41/*Fuse.Controls.Switch*/]);

    if (__this->_switch == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[2/*"SwitchBehav...*/]));

    uPtr(__this->_switch)->add_ValueChanged(uDelegate::New(::TYPES[42/*Uno.UX.ValueChangedHandler<bool>*/], (void*)DefaultSwitchBehavior__OnValueChanged_fn, __this));
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), __this->_switch, uDelegate::New(::TYPES[44/*Fuse.Input.PointerPressedHandler*/], (void*)DefaultSwitchBehavior__OnPointerPressed_fn, __this));
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), __this->_switch, uDelegate::New(::TYPES[45/*Fuse.Input.PointerMovedHandler*/], (void*)DefaultSwitchBehavior__OnPointerMoved_fn, __this));
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), __this->_switch, uDelegate::New(::TYPES[46/*Fuse.Input.PointerReleasedHandler*/], (void*)DefaultSwitchBehavior__OnPointerReleased_fn, __this));
    __this->_clicker = ::g::Fuse::Gestures::Clicker::AttachClicker(__this->_switch);
    uPtr(__this->_clicker)->add_TappedEvent(uDelegate::New(::TYPES[48/*Fuse.Gestures.ClickerEventHandler*/], (void*)DefaultSwitchBehavior__OnPointerTapped_fn, __this));

    if (__this->Bounds() == NULL)
        __this->Bounds(uAs< ::g::Fuse::Elements::Element*>(__this->_switch, ::TYPES[21/*Fuse.Elements.Element*/]));

    if (uPtr(__this->_switch)->Value())
        __this->BypassActivate();
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :955
void DefaultSwitchBehavior__OnUnrooted_fn(DefaultSwitchBehavior* __this, ::g::Fuse::Node* parentNode)
{
    uPtr(__this->_switch)->remove_ValueChanged(uDelegate::New(::TYPES[42/*Uno.UX.ValueChangedHandler<bool>*/], (void*)DefaultSwitchBehavior__OnValueChanged_fn, __this));
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), __this->_switch, uDelegate::New(::TYPES[44/*Fuse.Input.PointerPressedHandler*/], (void*)DefaultSwitchBehavior__OnPointerPressed_fn, __this));
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), __this->_switch, uDelegate::New(::TYPES[45/*Fuse.Input.PointerMovedHandler*/], (void*)DefaultSwitchBehavior__OnPointerMoved_fn, __this));
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), __this->_switch, uDelegate::New(::TYPES[46/*Fuse.Input.PointerReleasedHandler*/], (void*)DefaultSwitchBehavior__OnPointerReleased_fn, __this));
    uPtr(__this->_switch)->remove_Placed(uDelegate::New(::TYPES[49/*Fuse.PlacedHandler*/], (void*)DefaultSwitchBehavior__OnPlaced_fn, __this));
    uPtr(__this->_clicker)->remove_TappedEvent(uDelegate::New(::TYPES[48/*Fuse.Gestures.ClickerEventHandler*/], (void*)DefaultSwitchBehavior__OnPointerTapped_fn, __this));
    uPtr(__this->_clicker)->Detach();
    __this->_clicker = NULL;
    __this->_switch = NULL;
    __this->Bounds(NULL);
    ::g::Fuse::Input::Pointer::ReleaseAllCaptures(__this);
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// private void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<bool> args) :1061
void DefaultSwitchBehavior__OnValueChanged_fn(DefaultSwitchBehavior* __this, uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    __this->OnValueChanged(sender, args);
}

// private bool ReleaseCapture() :1035
void DefaultSwitchBehavior__ReleaseCapture_fn(DefaultSwitchBehavior* __this, bool* __retval)
{
    *__retval = __this->ReleaseCapture();
}

// private float2 get_Size() :979
void DefaultSwitchBehavior__get_Size_fn(DefaultSwitchBehavior* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Size();
}

// public generated DefaultSwitchBehavior() [instance] :920
void DefaultSwitchBehavior::ctor_2()
{
    ctor_1();
}

// public Fuse.Elements.Element get_Bounds() [instance] :927
::g::Fuse::Elements::Element* DefaultSwitchBehavior::Bounds()
{
    return _bounds;
}

// public void set_Bounds(Fuse.Elements.Element value) [instance] :928
void DefaultSwitchBehavior::Bounds(::g::Fuse::Elements::Element* value)
{
    _bounds = value;
}

// private void OnCaptureLost() [instance] :1007
void DefaultSwitchBehavior::OnCaptureLost()
{
    _captured = false;
    PlayEnd(uPtr(_switch)->Value(), NULL);
}

// private void OnPlaced(object sender, Fuse.PlacedArgs args) [instance] :985
void DefaultSwitchBehavior::OnPlaced(uObject* sender, ::g::Fuse::PlacedArgs* args)
{
    PlayEnd(uPtr(_switch)->Value(), NULL);
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) [instance] :1013
void DefaultSwitchBehavior::OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    if (_captured)
    {
        if (!uPtr(args)->IsHardCapturedTo(this))
        {
            if (::g::Uno::Math::Abs1(_originalP.X - uPtr(_switch)->WindowToLocal(uPtr(args)->WindowPoint()).X) > 10.0f)
                uPtr(args)->TryHardCapture(this, uDelegate::New(::TYPES[37/*Uno.Action*/], (void*)DefaultSwitchBehavior__OnCaptureLost_fn, this), NULL);
        }

        _prevCoord = _currentCoord;
        _currentCoord = uPtr(_switch)->WindowToLocal(uPtr(args)->WindowPoint());
        ::g::Uno::Float2 delta = ::g::Uno::Float2__op_Subtraction2(_currentCoord, _prevCoord);
        float p = delta.X / Size().X;
        Seek1(Progress() + (double)p, uPtr(_switch)->Value() ? 1 : 0);
    }
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) [instance] :994
void DefaultSwitchBehavior::OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    if (_captured)
        return;

    if (uPtr(args)->TrySoftCapture(this, uDelegate::New(::TYPES[37/*Uno.Action*/], (void*)DefaultSwitchBehavior__OnCaptureLost_fn, this), NULL))
    {
        _captured = true;
        _capturedIndex = uPtr(args)->PointIndex();
        _originalP = (_prevCoord = (_currentCoord = uPtr(_switch)->WindowToLocal(args->WindowPoint())));
    }
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) [instance] :1045
void DefaultSwitchBehavior::OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    if (ReleaseCapture())
    {
        uPtr(_switch)->Value(Progress() >= 0.5);
        PlayEnd(uPtr(_switch)->Value(), NULL);
    }
}

// private void OnPointerTapped(object a, int tapCount) [instance] :1054
void DefaultSwitchBehavior::OnPointerTapped(uObject* a, int tapCount)
{
    ReleaseCapture();
    uPtr(_switch)->Value(!uPtr(_switch)->Value());
    PlayEnd(uPtr(_switch)->Value(), NULL);
}

// private void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<bool> args) [instance] :1061
void DefaultSwitchBehavior::OnValueChanged(uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    bool ret2;
    PlayEnd((::g::Uno::UX::ValueChangedArgs__get_Value_fn(uPtr(args), &ret2), ret2), NULL);
}

// private bool ReleaseCapture() [instance] :1035
bool DefaultSwitchBehavior::ReleaseCapture()
{
    if (!_captured)
        return false;

    ::g::Fuse::Input::Pointer::ReleaseAllCaptures(this);
    _captured = false;
    return true;
}

// private float2 get_Size() [instance] :979
::g::Uno::Float2 DefaultSwitchBehavior::Size()
{
    return uPtr(_bounds)->ActualSize();
}

// public generated DefaultSwitchBehavior New() [static] :920
DefaultSwitchBehavior* DefaultSwitchBehavior::New1()
{
    DefaultSwitchBehavior* obj1 = (DefaultSwitchBehavior*)uNew(DefaultSwitchBehavior_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(605)
// -----------------------------------------------------------

// public class DockPanel :605
// {
::g::Fuse::Controls::Panel_type* DockPanel_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 101;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(DockPanel);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Fuse.Controls.DockPanel", options);
    type->SetBase(::g::Fuse::Controls::Panel_typeof());
    type->fp_ctor_ = (void*)DockPanel__New2_fn;
    type->interface6.fp_AddChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChild_fn;
    type->interface6.fp_AddChildAt = (void(*)(uObject*, int*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChildAt_fn;
    type->interface6.fp_RemoveChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_RemoveChild_fn;
    type->interface6.fp_GetChild = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_GetChild_fn;
    type->interface7.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Add_fn;
    type->interface7.fp_Remove = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Remove_fn;
    type->interface6.fp_get_ChildCount = (void(*)(uObject*, int*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_get_ChildCount_fn;
    type->interface6.fp_get_Children = (void(*)(uObject*, uObject**))::g::Fuse::Controls::Panel__get_Children_fn;
    type->interface6.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__get_ActualSize_fn;
    type->interface6.fp_get_HasChildren = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__get_HasChildren_fn;
    type->interface6.fp_add_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildAdded_fn;
    type->interface6.fp_remove_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildAdded_fn;
    type->interface6.fp_add_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildRemoved_fn;
    type->interface6.fp_remove_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildRemoved_fn;
    type->interface6.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface6.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_add_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__add_Update_fn;
    type->interface6.fp_remove_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__remove_Update_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::TYPES[23] = ::g::Fuse::Controls::Panel_typeof();
    ::TYPES[51] = ::g::Fuse::Layouts::Layout_typeof();
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Fuse::Triggers::IAddRemove_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Panel_type, interface7));
    type->SetFields(100,
        ::g::Fuse::Layouts::DockLayout_typeof(), offsetof(::g::Fuse::Controls::DockPanel, _dockLayout), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("GetDock", NULL, (void*)DockPanel__GetDock_fn, 0, true, ::g::Fuse::Layouts::Dock_typeof(), 1, ::g::Fuse::Elements::Element_typeof()),
        new uFunction(".ctor", NULL, (void*)DockPanel__New2_fn, 0, true, DockPanel_typeof(), 0),
        new uFunction("ResetDock", NULL, (void*)DockPanel__ResetDock_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::Elements::Element_typeof()),
        new uFunction("SetDock", NULL, (void*)DockPanel__SetDock_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Elements::Element_typeof(), ::g::Fuse::Layouts::Dock_typeof()));
    return type;
}

// public DockPanel() :628
void DockPanel__ctor_4_fn(DockPanel* __this)
{
    __this->ctor_4();
}

// public static Fuse.Layouts.Dock GetDock(Fuse.Elements.Element elm) :615
void DockPanel__GetDock_fn(::g::Fuse::Elements::Element* elm, int* __retval)
{
    *__retval = DockPanel::GetDock(elm);
}

// public DockPanel New() :628
void DockPanel__New2_fn(DockPanel** __retval)
{
    *__retval = DockPanel::New2();
}

// public static void ResetDock(Fuse.Elements.Element elm) :621
void DockPanel__ResetDock_fn(::g::Fuse::Elements::Element* elm)
{
    DockPanel::ResetDock(elm);
}

// public static void SetDock(Fuse.Elements.Element elm, Fuse.Layouts.Dock dock) :609
void DockPanel__SetDock_fn(::g::Fuse::Elements::Element* elm, int* dock)
{
    DockPanel::SetDock(elm, *dock);
}

// public DockPanel() [instance] :628
void DockPanel::ctor_4()
{
    ctor_3();
    Layout(_dockLayout = ::g::Fuse::Layouts::DockLayout::New1());
}

// public static Fuse.Layouts.Dock GetDock(Fuse.Elements.Element elm) [static] :615
int DockPanel::GetDock(::g::Fuse::Elements::Element* elm)
{
    return ::g::Fuse::Layouts::DockLayout::GetDock(elm);
}

// public DockPanel New() [static] :628
DockPanel* DockPanel::New2()
{
    DockPanel* obj1 = (DockPanel*)uNew(DockPanel_typeof());
    obj1->ctor_4();
    return obj1;
}

// public static void ResetDock(Fuse.Elements.Element elm) [static] :621
void DockPanel::ResetDock(::g::Fuse::Elements::Element* elm)
{
    ::g::Fuse::Layouts::DockLayout::ResetDock(elm);
}

// public static void SetDock(Fuse.Elements.Element elm, Fuse.Layouts.Dock dock) [static] :609
void DockPanel::SetDock(::g::Fuse::Elements::Element* elm, int dock)
{
    ::g::Fuse::Layouts::DockLayout::SetDock(elm, dock);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(647)
// -----------------------------------------------------------

// public partial sealed class EdgeNavigator :647
// {
// static EdgeNavigator() :72
static void EdgeNavigator__cctor_4_fn(uType* __type)
{
}

::g::Fuse::Controls::Panel_type* EdgeNavigator_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 101;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(EdgeNavigator);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Fuse.Controls.EdgeNavigator", options);
    type->SetBase(::g::Fuse::Controls::Panel_typeof());
    type->fp_ctor_ = (void*)EdgeNavigator__New2_fn;
    type->fp_cctor_ = EdgeNavigator__cctor_4_fn;
    type->fp_OnApplyStyle = (void(*)(::g::Fuse::Node*, uObject*))EdgeNavigator__OnApplyStyle_fn;
    type->interface6.fp_AddChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChild_fn;
    type->interface6.fp_AddChildAt = (void(*)(uObject*, int*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChildAt_fn;
    type->interface6.fp_RemoveChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_RemoveChild_fn;
    type->interface6.fp_GetChild = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_GetChild_fn;
    type->interface7.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Add_fn;
    type->interface7.fp_Remove = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Remove_fn;
    type->interface6.fp_get_ChildCount = (void(*)(uObject*, int*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_get_ChildCount_fn;
    type->interface6.fp_get_Children = (void(*)(uObject*, uObject**))::g::Fuse::Controls::Panel__get_Children_fn;
    type->interface6.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__get_ActualSize_fn;
    type->interface6.fp_get_HasChildren = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__get_HasChildren_fn;
    type->interface6.fp_add_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildAdded_fn;
    type->interface6.fp_remove_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildAdded_fn;
    type->interface6.fp_add_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildRemoved_fn;
    type->interface6.fp_remove_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildRemoved_fn;
    type->interface6.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface6.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_add_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__add_Update_fn;
    type->interface6.fp_remove_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__remove_Update_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::TYPES[21] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[52] = ::g::Fuse::Gestures::Tapped_typeof();
    ::TYPES[53] = ::g::Fuse::Gestures::TappedHandler_typeof();
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    ::TYPES[39] = ::g::Fuse::Input::PointerEventArgs_typeof();
    ::TYPES[54] = ::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(::g::Fuse::Translation_typeof());
    ::TYPES[9] = ::g::Uno::Float2_typeof();
    ::TYPES[55] = ::g::Fuse::Animations::Move_typeof();
    ::TYPES[56] = ::g::Fuse::TranslationModes_typeof();
    ::TYPES[4] = ::g::Fuse::Triggers::Trigger_typeof();
    ::TYPES[5] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[57] = ::g::Fuse::Navigation::EdgeNavigation_typeof();
    ::TYPES[58] = ::g::Fuse::Navigation::Navigation_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Fuse::Triggers::IAddRemove_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Panel_type, interface7));
    type->SetFields(100,
        ::g::Fuse::Navigation::EdgeNavigation_typeof(), offsetof(::g::Fuse::Controls::EdgeNavigator, _navigation), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_Active", NULL, (void*)EdgeNavigator__get_Active_fn, 0, false, ::g::Fuse::Node_typeof(), 0),
        new uFunction("set_Active", NULL, (void*)EdgeNavigator__set_Active_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("get_Navigation", NULL, (void*)EdgeNavigator__get_Navigation_fn, 0, false, ::g::Fuse::Navigation::Navigation_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)EdgeNavigator__New2_fn, 0, true, EdgeNavigator_typeof(), 0));
    return type;
}

// public EdgeNavigator() :75
void EdgeNavigator__ctor_4_fn(EdgeNavigator* __this)
{
    __this->ctor_4();
}

// public Fuse.Node get_Active() :656
void EdgeNavigator__get_Active_fn(EdgeNavigator* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Active();
}

// public void set_Active(Fuse.Node value) :657
void EdgeNavigator__set_Active_fn(EdgeNavigator* __this, ::g::Fuse::Node* value)
{
    __this->Active(value);
}

// internal void InitializeUX() :79
void EdgeNavigator__InitializeUX_fn(EdgeNavigator* __this)
{
    __this->InitializeUX();
}

// public Fuse.Navigation.Navigation get_Navigation() :651
void EdgeNavigator__get_Navigation_fn(EdgeNavigator* __this, ::g::Fuse::Navigation::Navigation** __retval)
{
    *__retval = __this->Navigation();
}

// public EdgeNavigator New() :75
void EdgeNavigator__New2_fn(EdgeNavigator** __retval)
{
    *__retval = EdgeNavigator::New2();
}

// protected override sealed void OnApplyStyle(object o) :660
void EdgeNavigator__OnApplyStyle_fn(EdgeNavigator* __this, uObject* o)
{
    ::g::Fuse::Elements::Element* elm = uAs< ::g::Fuse::Elements::Element*>(o, ::TYPES[21/*Fuse.Elements.Element*/]);

    if ((elm != NULL) && (uPtr(elm)->Parent() == __this))
    {
        int e = ::g::Fuse::Navigation::EdgeNavigation::GetEdge(elm);

        switch (e)
        {
            case 0:
            {
                __this->SetupEdge(elm, ::g::Uno::Float2__New2(-1.0f, 0.0f), 1);
                break;
            }
            case 1:
            {
                __this->SetupEdge(elm, ::g::Uno::Float2__New2(1.0f, 0.0f), 3);
                break;
            }
            case 2:
            {
                __this->SetupEdge(elm, ::g::Uno::Float2__New2(0.0f, -1.0f), 4);
                break;
            }
            case 3:
            {
                __this->SetupEdge(elm, ::g::Uno::Float2__New2(0.0f, 1.0f), 12);
                break;
            }
            case 4:
            {
                __this->SetupMain(elm);
                break;
            }
        }
    }

    ::g::Fuse::Node__OnApplyStyle_fn(__this, o);
}

// private void OnTapped(object s, Fuse.Gestures.TappedArgs args) :708
void EdgeNavigator__OnTapped_fn(EdgeNavigator* __this, uObject* s, ::g::Fuse::Gestures::TappedArgs* args)
{
    __this->OnTapped(s, args);
}

// private void SetupEdge(Fuse.Elements.Element elm, float2 rel, Fuse.Elements.Alignment align) :689
void EdgeNavigator__SetupEdge_fn(EdgeNavigator* __this, ::g::Fuse::Elements::Element* elm, ::g::Uno::Float2* rel, int* align)
{
    __this->SetupEdge(elm, *rel, *align);
}

// private void SetupMain(Fuse.Elements.Element elm) :703
void EdgeNavigator__SetupMain_fn(EdgeNavigator* __this, ::g::Fuse::Elements::Element* elm)
{
    __this->SetupMain(elm);
}

// public EdgeNavigator() [instance] :75
void EdgeNavigator::ctor_4()
{
    ctor_3();
    InitializeUX();
}

// public Fuse.Node get_Active() [instance] :656
::g::Fuse::Node* EdgeNavigator::Active()
{
    return uPtr(_navigation)->Active();
}

// public void set_Active(Fuse.Node value) [instance] :657
void EdgeNavigator::Active(::g::Fuse::Node* value)
{
    uPtr(_navigation)->Active(value);
}

// internal void InitializeUX() [instance] :79
void EdgeNavigator::InitializeUX()
{
    _navigation = ::g::Fuse::Navigation::EdgeNavigation::New1();
    ::g::Fuse::Gestures::Tapped* temp = ::g::Fuse::Gestures::Tapped::New1();
    ClipToBounds(true);
    temp->add_Handler(uDelegate::New(::TYPES[53/*Fuse.Gestures.TappedHandler*/], (void*)EdgeNavigator__OnTapped_fn, this));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Behavior*/])), _navigation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Behavior*/])), temp);
}

// public Fuse.Navigation.Navigation get_Navigation() [instance] :651
::g::Fuse::Navigation::Navigation* EdgeNavigator::Navigation()
{
    return _navigation;
}

// private void OnTapped(object s, Fuse.Gestures.TappedArgs args) [instance] :708
void EdgeNavigator::OnTapped(uObject* s, ::g::Fuse::Gestures::TappedArgs* args)
{
    if (uPtr(_navigation)->IsDismissPoint(uPtr(args)->WindowPoint()) && uPtr(_navigation)->IsAnyPanelActive())
        uPtr(_navigation)->Goto(NULL, 0);
}

// private void SetupEdge(Fuse.Elements.Element elm, float2 rel, Fuse.Elements.Alignment align) [instance] :689
void EdgeNavigator::SetupEdge(::g::Fuse::Elements::Element* elm, ::g::Uno::Float2 rel, int align)
{
    bool ret2;
    ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(::g::Fuse::Elements::Element::AlignmentProperty()), elm, uCRef<int>(align), &ret2);
    ::g::Fuse::Navigation::EnteringAnimation* enter = ::g::Fuse::Navigation::EnteringAnimation::New1();
    ::g::Fuse::Animations::Move* move = ::g::Fuse::Animations::Move::New1();
    move->X(rel.X);
    move->Y(rel.Y);
    move->RelativeTo(::g::Fuse::TranslationModes::Size());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(enter->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Animations.Animator*/])), move);
    uPtr(elm)->AddStyleBehavior(enter);
}

// private void SetupMain(Fuse.Elements.Element elm) [instance] :703
void EdgeNavigator::SetupMain(::g::Fuse::Elements::Element* elm)
{
}

// public EdgeNavigator New() [static] :75
EdgeNavigator* EdgeNavigator::New2()
{
    EdgeNavigator* obj1 = (EdgeNavigator*)uNew(EdgeNavigator_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(728)
// -----------------------------------------------------------

// public sealed class Ellipse :728
// {
::g::Fuse::Controls::Panel_type* Ellipse_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 106;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(Ellipse);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Fuse.Controls.Ellipse", options);
    type->SetBase(::g::Fuse::Controls::Shape_typeof());
    type->fp_ctor_ = (void*)Ellipse__New2_fn;
    type->interface6.fp_AddChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChild_fn;
    type->interface6.fp_AddChildAt = (void(*)(uObject*, int*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChildAt_fn;
    type->interface6.fp_RemoveChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_RemoveChild_fn;
    type->interface6.fp_GetChild = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_GetChild_fn;
    type->interface7.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Add_fn;
    type->interface7.fp_Remove = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Remove_fn;
    type->interface6.fp_get_ChildCount = (void(*)(uObject*, int*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_get_ChildCount_fn;
    type->interface6.fp_get_Children = (void(*)(uObject*, uObject**))::g::Fuse::Controls::Panel__get_Children_fn;
    type->interface6.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__get_ActualSize_fn;
    type->interface6.fp_get_HasChildren = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__get_HasChildren_fn;
    type->interface6.fp_add_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildAdded_fn;
    type->interface6.fp_remove_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildAdded_fn;
    type->interface6.fp_add_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildRemoved_fn;
    type->interface6.fp_remove_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildRemoved_fn;
    type->interface6.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface6.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_add_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__add_Update_fn;
    type->interface6.fp_remove_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__remove_Update_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Fuse::Triggers::IAddRemove_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Panel_type, interface7));
    type->SetFields(106);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Ellipse__New2_fn, 0, true, Ellipse_typeof(), 0));
    return type;
}

// public generated Ellipse() :728
void Ellipse__ctor_5_fn(Ellipse* __this)
{
    __this->ctor_5();
}

// public generated Ellipse New() :728
void Ellipse__New2_fn(Ellipse** __retval)
{
    *__retval = Ellipse::New2();
}

// public generated Ellipse() [instance] :728
void Ellipse::ctor_5()
{
    ctor_4();
}

// public generated Ellipse New() [static] :728
Ellipse* Ellipse::New2()
{
    Ellipse* obj1 = (Ellipse*)uNew(Ellipse_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\WebView\$.uno(299)
// -------------------------------------------------------------------

// internal sealed class FallbackWebViewClient :299
// {
FallbackWebViewClient_type* FallbackWebViewClient_typeof()
{
    static uSStrong<FallbackWebViewClient_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(FallbackWebViewClient);
    options.TypeSize = sizeof(FallbackWebViewClient_type);
    type = (FallbackWebViewClient_type*)uClassType::New("Fuse.Controls.FallbackWebViewClient", options);
    type->fp_ctor_ = (void*)FallbackWebViewClient__New1_fn;
    type->interface0.fp_Eval1 = (void(*)(uObject*, uString*, uDelegate*))FallbackWebViewClient__Eval1_fn;
    type->interface0.fp_Eval = (void(*)(uObject*, uString*))FallbackWebViewClient__Eval_fn;
    type->interface0.fp_LoadHtml = (void(*)(uObject*, uString*))FallbackWebViewClient__LoadHtml_fn;
    type->interface0.fp_LoadHtml1 = (void(*)(uObject*, uString*, uString*))FallbackWebViewClient__LoadHtml1_fn;
    type->interface0.fp_LoadUrl = (void(*)(uObject*, uString*))FallbackWebViewClient__LoadUrl_fn;
    type->interface0.fp_Stop = (void(*)(uObject*))FallbackWebViewClient__Stop_fn;
    type->interface0.fp_Reload = (void(*)(uObject*))FallbackWebViewClient__Reload_fn;
    type->interface0.fp_get_BaseUrl = (void(*)(uObject*, uString**))FallbackWebViewClient__get_BaseUrl_fn;
    type->interface0.fp_set_BaseUrl = (void(*)(uObject*, uString*))FallbackWebViewClient__set_BaseUrl_fn;
    type->interface0.fp_get_Url = (void(*)(uObject*, uString**))FallbackWebViewClient__get_Url_fn;
    type->interface0.fp_set_Url = (void(*)(uObject*, uString*))FallbackWebViewClient__set_Url_fn;
    type->interface0.fp_get_DocumentTitle = (void(*)(uObject*, uString**))FallbackWebViewClient__get_DocumentTitle_fn;
    type->interface0.fp_get_File = (void(*)(uObject*, ::g::Uno::UX::FileSource**))FallbackWebViewClient__get_File_fn;
    type->interface0.fp_set_File = (void(*)(uObject*, ::g::Uno::UX::FileSource*))FallbackWebViewClient__set_File_fn;
    type->interface0.fp_add_PageLoaded = (void(*)(uObject*, uDelegate*))FallbackWebViewClient__add_PageLoaded_fn;
    type->interface0.fp_remove_PageLoaded = (void(*)(uObject*, uDelegate*))FallbackWebViewClient__remove_PageLoaded_fn;
    type->interface0.fp_add_BeginLoading = (void(*)(uObject*, uDelegate*))FallbackWebViewClient__add_BeginLoading_fn;
    type->interface0.fp_remove_BeginLoading = (void(*)(uObject*, uDelegate*))FallbackWebViewClient__remove_BeginLoading_fn;
    type->interface1.fp_get_Progress = (void(*)(uObject*, double*))FallbackWebViewClient__get_Progress_fn;
    type->interface1.fp_add_ProgressChanged = (void(*)(uObject*, uDelegate*))FallbackWebViewClient__add_ProgressChanged_fn;
    type->interface1.fp_remove_ProgressChanged = (void(*)(uObject*, uDelegate*))FallbackWebViewClient__remove_ProgressChanged_fn;
    type->interface2.fp_GoForward = (void(*)(uObject*))FallbackWebViewClient__GoForward_fn;
    type->interface2.fp_GoBack = (void(*)(uObject*))FallbackWebViewClient__GoBack_fn;
    type->interface2.fp_get_CanGoBack = (void(*)(uObject*, bool*))FallbackWebViewClient__get_CanGoBack_fn;
    type->interface2.fp_get_CanGoForward = (void(*)(uObject*, bool*))FallbackWebViewClient__get_CanGoForward_fn;
    type->interface3.fp_get_Source = (void(*)(uObject*, uString**))FallbackWebViewClient__get_Source_fn;
    type->interface3.fp_set_Source = (void(*)(uObject*, uString*))FallbackWebViewClient__set_Source_fn;
    ::STRINGS[1] = uString::Const("");
    ::TYPES[59] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Controls::BufferedWebViewCall_typeof());
    ::TYPES[60] = ::g::Fuse::Controls::BufferedWebViewCall_typeof();
    ::TYPES[33] = ::g::Uno::EventHandler_typeof();
    ::TYPES[17] = ::g::Uno::Delegate_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::IWebView_typeof(), offsetof(FallbackWebViewClient_type, interface0),
        ::g::Fuse::Triggers::IProgress_typeof(), offsetof(FallbackWebViewClient_type, interface1),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(FallbackWebViewClient_type, interface2),
        ::g::Fuse::Controls::ISourceReceiver_typeof(), offsetof(FallbackWebViewClient_type, interface3));
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Controls::BufferedWebViewCall_typeof()), offsetof(::g::Fuse::Controls::FallbackWebViewClient, _bufferedCalls), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Controls::FallbackWebViewClient, _BaseUrl), 0,
        ::g::Uno::UX::FileSource_typeof(), offsetof(::g::Fuse::Controls::FallbackWebViewClient, _File), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Controls::FallbackWebViewClient, _Source), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Controls::FallbackWebViewClient, _Url), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Controls::FallbackWebViewClient, BeginLoading1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Controls::FallbackWebViewClient, PageLoaded1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Controls::FallbackWebViewClient, ProgressChanged1), 0);
    return type;
}

// public FallbackWebViewClient() :305
void FallbackWebViewClient__ctor__fn(FallbackWebViewClient* __this)
{
    __this->ctor_();
}

// public void ApplyBufferedCalls(Fuse.Controls.IWebView wv) :310
void FallbackWebViewClient__ApplyBufferedCalls_fn(FallbackWebViewClient* __this, uObject* wv)
{
    __this->ApplyBufferedCalls(wv);
}

// public generated string get_BaseUrl() :321
void FallbackWebViewClient__get_BaseUrl_fn(FallbackWebViewClient* __this, uString** __retval)
{
    *__retval = __this->BaseUrl();
}

// public generated void set_BaseUrl(string value) :321
void FallbackWebViewClient__set_BaseUrl_fn(FallbackWebViewClient* __this, uString* value)
{
    __this->BaseUrl(value);
}

// public generated void add_BeginLoading(Uno.EventHandler value) :349
void FallbackWebViewClient__add_BeginLoading_fn(FallbackWebViewClient* __this, uDelegate* value)
{
    __this->add_BeginLoading(value);
}

// public generated void remove_BeginLoading(Uno.EventHandler value) :349
void FallbackWebViewClient__remove_BeginLoading_fn(FallbackWebViewClient* __this, uDelegate* value)
{
    __this->remove_BeginLoading(value);
}

// public bool get_CanGoBack() :323
void FallbackWebViewClient__get_CanGoBack_fn(FallbackWebViewClient* __this, bool* __retval)
{
    *__retval = __this->CanGoBack();
}

// public bool get_CanGoForward() :324
void FallbackWebViewClient__get_CanGoForward_fn(FallbackWebViewClient* __this, bool* __retval)
{
    *__retval = __this->CanGoForward();
}

// public string get_DocumentTitle() :325
void FallbackWebViewClient__get_DocumentTitle_fn(FallbackWebViewClient* __this, uString** __retval)
{
    *__retval = __this->DocumentTitle();
}

// public void Eval(string js) :330
void FallbackWebViewClient__Eval_fn(FallbackWebViewClient* __this, uString* js)
{
    __this->Eval(js);
}

// public void Eval(string js, Uno.Action<string> resultHandler) :334
void FallbackWebViewClient__Eval1_fn(FallbackWebViewClient* __this, uString* js, uDelegate* resultHandler)
{
    __this->Eval1(js, resultHandler);
}

// public generated Uno.UX.FileSource get_File() :301
void FallbackWebViewClient__get_File_fn(FallbackWebViewClient* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public generated void set_File(Uno.UX.FileSource value) :301
void FallbackWebViewClient__set_File_fn(FallbackWebViewClient* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// public void GoBack() :326
void FallbackWebViewClient__GoBack_fn(FallbackWebViewClient* __this)
{
    __this->GoBack();
}

// public void GoForward() :327
void FallbackWebViewClient__GoForward_fn(FallbackWebViewClient* __this)
{
    __this->GoForward();
}

// public void LoadHtml(string html) :339
void FallbackWebViewClient__LoadHtml_fn(FallbackWebViewClient* __this, uString* html)
{
    __this->LoadHtml(html);
}

// public void LoadHtml(string html, string baseUrl) :343
void FallbackWebViewClient__LoadHtml1_fn(FallbackWebViewClient* __this, uString* html, uString* baseUrl)
{
    __this->LoadHtml1(html, baseUrl);
}

// public void LoadUrl(string url) :338
void FallbackWebViewClient__LoadUrl_fn(FallbackWebViewClient* __this, uString* url)
{
    __this->LoadUrl(url);
}

// public FallbackWebViewClient New() :305
void FallbackWebViewClient__New1_fn(FallbackWebViewClient** __retval)
{
    *__retval = FallbackWebViewClient::New1();
}

// public generated void add_PageLoaded(Uno.EventHandler value) :348
void FallbackWebViewClient__add_PageLoaded_fn(FallbackWebViewClient* __this, uDelegate* value)
{
    __this->add_PageLoaded(value);
}

// public generated void remove_PageLoaded(Uno.EventHandler value) :348
void FallbackWebViewClient__remove_PageLoaded_fn(FallbackWebViewClient* __this, uDelegate* value)
{
    __this->remove_PageLoaded(value);
}

// public double get_Progress() :350
void FallbackWebViewClient__get_Progress_fn(FallbackWebViewClient* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public generated void add_ProgressChanged(Uno.EventHandler value) :347
void FallbackWebViewClient__add_ProgressChanged_fn(FallbackWebViewClient* __this, uDelegate* value)
{
    __this->add_ProgressChanged(value);
}

// public generated void remove_ProgressChanged(Uno.EventHandler value) :347
void FallbackWebViewClient__remove_ProgressChanged_fn(FallbackWebViewClient* __this, uDelegate* value)
{
    __this->remove_ProgressChanged(value);
}

// public void Reload() :328
void FallbackWebViewClient__Reload_fn(FallbackWebViewClient* __this)
{
    __this->Reload();
}

// public generated string get_Source() :320
void FallbackWebViewClient__get_Source_fn(FallbackWebViewClient* __this, uString** __retval)
{
    *__retval = __this->Source();
}

// public generated void set_Source(string value) :320
void FallbackWebViewClient__set_Source_fn(FallbackWebViewClient* __this, uString* value)
{
    __this->Source(value);
}

// public void Stop() :329
void FallbackWebViewClient__Stop_fn(FallbackWebViewClient* __this)
{
    __this->Stop();
}

// public generated string get_Url() :322
void FallbackWebViewClient__get_Url_fn(FallbackWebViewClient* __this, uString** __retval)
{
    *__retval = __this->Url();
}

// public generated void set_Url(string value) :322
void FallbackWebViewClient__set_Url_fn(FallbackWebViewClient* __this, uString* value)
{
    __this->Url(value);
}

// public FallbackWebViewClient() [instance] :305
void FallbackWebViewClient::ctor_()
{
    _bufferedCalls = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[59/*Uno.Collections.List<Fuse.Controls.BufferedWebViewCall>*/]));
}

// public void ApplyBufferedCalls(Fuse.Controls.IWebView wv) [instance] :310
void FallbackWebViewClient::ApplyBufferedCalls(uObject* wv)
{
    uObject* ret2;
    bool ret3;

    while (uPtr(_bufferedCalls)->Count() > 0)
    {
        uObject* call = (::g::Uno::Collections::List__get_Item_fn(uPtr(_bufferedCalls), uCRef<int>(0), &ret2), ret2);
        ::g::Fuse::Controls::BufferedWebViewCall::Apply(uInterface(uPtr(call), ::TYPES[60/*Fuse.Controls.BufferedWebViewCall*/]), wv);
        ::g::Uno::Collections::List__Remove_fn(uPtr(_bufferedCalls), call, &ret3);
    }
}

// public generated string get_BaseUrl() [instance] :321
uString* FallbackWebViewClient::BaseUrl()
{
    return _BaseUrl;
}

// public generated void set_BaseUrl(string value) [instance] :321
void FallbackWebViewClient::BaseUrl(uString* value)
{
    _BaseUrl = value;
}

// public generated void add_BeginLoading(Uno.EventHandler value) [instance] :349
void FallbackWebViewClient::add_BeginLoading(uDelegate* value)
{
    BeginLoading1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(BeginLoading1, value), ::TYPES[33/*Uno.EventHandler*/]);
}

// public generated void remove_BeginLoading(Uno.EventHandler value) [instance] :349
void FallbackWebViewClient::remove_BeginLoading(uDelegate* value)
{
    BeginLoading1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(BeginLoading1, value), ::TYPES[33/*Uno.EventHandler*/]);
}

// public bool get_CanGoBack() [instance] :323
bool FallbackWebViewClient::CanGoBack()
{
    return false;
}

// public bool get_CanGoForward() [instance] :324
bool FallbackWebViewClient::CanGoForward()
{
    return false;
}

// public string get_DocumentTitle() [instance] :325
uString* FallbackWebViewClient::DocumentTitle()
{
    return ::STRINGS[1/*""*/];
}

// public void Eval(string js) [instance] :330
void FallbackWebViewClient::Eval(uString* js)
{
    ::g::Uno::Collections::List__Add_fn(uPtr(_bufferedCalls), (uObject*)::g::Fuse::Controls::JavaScriptCall::New1(js, NULL));
}

// public void Eval(string js, Uno.Action<string> resultHandler) [instance] :334
void FallbackWebViewClient::Eval1(uString* js, uDelegate* resultHandler)
{
    ::g::Uno::Collections::List__Add_fn(uPtr(_bufferedCalls), (uObject*)::g::Fuse::Controls::JavaScriptCall::New1(js, resultHandler));
}

// public generated Uno.UX.FileSource get_File() [instance] :301
::g::Uno::UX::FileSource* FallbackWebViewClient::File()
{
    return _File;
}

// public generated void set_File(Uno.UX.FileSource value) [instance] :301
void FallbackWebViewClient::File(::g::Uno::UX::FileSource* value)
{
    _File = value;
}

// public void GoBack() [instance] :326
void FallbackWebViewClient::GoBack()
{
}

// public void GoForward() [instance] :327
void FallbackWebViewClient::GoForward()
{
}

// public void LoadHtml(string html) [instance] :339
void FallbackWebViewClient::LoadHtml(uString* html)
{
    LoadHtml1(html, ::STRINGS[1/*""*/]);
}

// public void LoadHtml(string html, string baseUrl) [instance] :343
void FallbackWebViewClient::LoadHtml1(uString* html, uString* baseUrl)
{
    ::g::Uno::Collections::List__Add_fn(uPtr(_bufferedCalls), (uObject*)::g::Fuse::Controls::LoadHtmlCall::New1(html, baseUrl));
}

// public void LoadUrl(string url) [instance] :338
void FallbackWebViewClient::LoadUrl(uString* url)
{
}

// public generated void add_PageLoaded(Uno.EventHandler value) [instance] :348
void FallbackWebViewClient::add_PageLoaded(uDelegate* value)
{
    PageLoaded1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PageLoaded1, value), ::TYPES[33/*Uno.EventHandler*/]);
}

// public generated void remove_PageLoaded(Uno.EventHandler value) [instance] :348
void FallbackWebViewClient::remove_PageLoaded(uDelegate* value)
{
    PageLoaded1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PageLoaded1, value), ::TYPES[33/*Uno.EventHandler*/]);
}

// public double get_Progress() [instance] :350
double FallbackWebViewClient::Progress()
{
    return 0.0;
}

// public generated void add_ProgressChanged(Uno.EventHandler value) [instance] :347
void FallbackWebViewClient::add_ProgressChanged(uDelegate* value)
{
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ProgressChanged1, value), ::TYPES[33/*Uno.EventHandler*/]);
}

// public generated void remove_ProgressChanged(Uno.EventHandler value) [instance] :347
void FallbackWebViewClient::remove_ProgressChanged(uDelegate* value)
{
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ProgressChanged1, value), ::TYPES[33/*Uno.EventHandler*/]);
}

// public void Reload() [instance] :328
void FallbackWebViewClient::Reload()
{
}

// public generated string get_Source() [instance] :320
uString* FallbackWebViewClient::Source()
{
    return _Source;
}

// public generated void set_Source(string value) [instance] :320
void FallbackWebViewClient::Source(uString* value)
{
    _Source = value;
}

// public void Stop() [instance] :329
void FallbackWebViewClient::Stop()
{
}

// public generated string get_Url() [instance] :322
uString* FallbackWebViewClient::Url()
{
    return _Url;
}

// public generated void set_Url(string value) [instance] :322
void FallbackWebViewClient::Url(uString* value)
{
    _Url = value;
}

// public FallbackWebViewClient New() [static] :305
FallbackWebViewClient* FallbackWebViewClient::New1()
{
    FallbackWebViewClient* obj1 = (FallbackWebViewClient*)uNew(FallbackWebViewClient_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(2639)
// ------------------------------------------------------------

// public enum FillRule :2639
uEnumType* FillRule_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Controls.FillRule", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "NonZero", 0LL,
        "EvenOdd", 1LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(2644)
// ------------------------------------------------------------

// public enum FitMode :2644
uEnumType* FitMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Controls.FitMode", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "GeometryMaximum", 0LL,
        "StrokeMaximum", 1LL,
        "ShrinkToGeometry", 2LL,
        "ShrinkToStroke", 3LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\.cache\GeneratedCode\$.uno(171)
// --------------------------------------------------------------------------------

// public sealed class PageIndicator.Fuse_Drawing_SolidColor_float4_Color_Property :171
// {
::g::Uno::UX::Property_type* PageIndicator__Fuse_Drawing_SolidColor_float4_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(PageIndicator__Fuse_Drawing_SolidColor_float4_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("Fuse.Controls.PageIndicator.Fuse_Drawing_SolidColor_float4_Color_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float4_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))PageIndicator__Fuse_Drawing_SolidColor_float4_Color_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))PageIndicator__Fuse_Drawing_SolidColor_float4_Color_Property__OnSet_fn;
    ::TYPES[61] = ::g::Fuse::Drawing::SolidColor_typeof();
    type->SetFields(2,
        ::g::Fuse::Drawing::SolidColor_typeof(), offsetof(::g::Fuse::Controls::PageIndicator__Fuse_Drawing_SolidColor_float4_Color_Property, _obj), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)PageIndicator__Fuse_Drawing_SolidColor_float4_Color_Property__New1_fn, 0, true, PageIndicator__Fuse_Drawing_SolidColor_float4_Color_Property_typeof(), 1, ::g::Fuse::Drawing::SolidColor_typeof()));
    return type;
}

// public Fuse_Drawing_SolidColor_float4_Color_Property(Fuse.Drawing.SolidColor obj) :174
void PageIndicator__Fuse_Drawing_SolidColor_float4_Color_Property__ctor_1_fn(PageIndicator__Fuse_Drawing_SolidColor_float4_Color_Property* __this, ::g::Fuse::Drawing::SolidColor* obj)
{
    __this->ctor_1(obj);
}

// public Fuse_Drawing_SolidColor_float4_Color_Property New(Fuse.Drawing.SolidColor obj) :174
void PageIndicator__Fuse_Drawing_SolidColor_float4_Color_Property__New1_fn(::g::Fuse::Drawing::SolidColor* obj, PageIndicator__Fuse_Drawing_SolidColor_float4_Color_Property** __retval)
{
    *__retval = PageIndicator__Fuse_Drawing_SolidColor_float4_Color_Property::New1(obj);
}

// protected override sealed float4 OnGet() :175
void PageIndicator__Fuse_Drawing_SolidColor_float4_Color_Property__OnGet_fn(PageIndicator__Fuse_Drawing_SolidColor_float4_Color_Property* __this, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(__this->_obj)->Color(), void();
}

// protected override sealed void OnSet(float4 v, object origin) :176
void PageIndicator__Fuse_Drawing_SolidColor_float4_Color_Property__OnSet_fn(PageIndicator__Fuse_Drawing_SolidColor_float4_Color_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->Color(v_);
}

// public Fuse_Drawing_SolidColor_float4_Color_Property(Fuse.Drawing.SolidColor obj) [instance] :174
void PageIndicator__Fuse_Drawing_SolidColor_float4_Color_Property::ctor_1(::g::Fuse::Drawing::SolidColor* obj)
{
    ctor_();
    _obj = obj;
}

// public Fuse_Drawing_SolidColor_float4_Color_Property New(Fuse.Drawing.SolidColor obj) [static] :174
PageIndicator__Fuse_Drawing_SolidColor_float4_Color_Property* PageIndicator__Fuse_Drawing_SolidColor_float4_Color_Property::New1(::g::Fuse::Drawing::SolidColor* obj)
{
    PageIndicator__Fuse_Drawing_SolidColor_float4_Color_Property* obj1 = (PageIndicator__Fuse_Drawing_SolidColor_float4_Color_Property*)uNew(PageIndicator__Fuse_Drawing_SolidColor_float4_Color_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\.cache\GeneratedCode\$.uno(7)
// ------------------------------------------------------------------------------

// public sealed class BackButton.Fuse_Node_bool_IsEnabled_Property :7
// {
::g::Uno::UX::Property_type* BackButton__Fuse_Node_bool_IsEnabled_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(BackButton__Fuse_Node_bool_IsEnabled_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("Fuse.Controls.BackButton.Fuse_Node_bool_IsEnabled_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))BackButton__Fuse_Node_bool_IsEnabled_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))BackButton__Fuse_Node_bool_IsEnabled_Property__OnSet_fn;
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    type->SetFields(2,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Controls::BackButton__Fuse_Node_bool_IsEnabled_Property, _obj), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)BackButton__Fuse_Node_bool_IsEnabled_Property__New1_fn, 0, true, BackButton__Fuse_Node_bool_IsEnabled_Property_typeof(), 1, ::g::Fuse::Node_typeof()));
    return type;
}

// public Fuse_Node_bool_IsEnabled_Property(Fuse.Node obj) :10
void BackButton__Fuse_Node_bool_IsEnabled_Property__ctor_1_fn(BackButton__Fuse_Node_bool_IsEnabled_Property* __this, ::g::Fuse::Node* obj)
{
    __this->ctor_1(obj);
}

// public Fuse_Node_bool_IsEnabled_Property New(Fuse.Node obj) :10
void BackButton__Fuse_Node_bool_IsEnabled_Property__New1_fn(::g::Fuse::Node* obj, BackButton__Fuse_Node_bool_IsEnabled_Property** __retval)
{
    *__retval = BackButton__Fuse_Node_bool_IsEnabled_Property::New1(obj);
}

// protected override sealed bool OnGet() :11
void BackButton__Fuse_Node_bool_IsEnabled_Property__OnGet_fn(BackButton__Fuse_Node_bool_IsEnabled_Property* __this, bool* __retval)
{
    return *__retval = uPtr(__this->_obj)->IsEnabled(), void();
}

// protected override sealed void OnSet(bool v, object origin) :12
void BackButton__Fuse_Node_bool_IsEnabled_Property__OnSet_fn(BackButton__Fuse_Node_bool_IsEnabled_Property* __this, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(__this->_obj)->IsEnabled(v_);
}

// public Fuse_Node_bool_IsEnabled_Property(Fuse.Node obj) [instance] :10
void BackButton__Fuse_Node_bool_IsEnabled_Property::ctor_1(::g::Fuse::Node* obj)
{
    ctor_();
    _obj = obj;
}

// public Fuse_Node_bool_IsEnabled_Property New(Fuse.Node obj) [static] :10
BackButton__Fuse_Node_bool_IsEnabled_Property* BackButton__Fuse_Node_bool_IsEnabled_Property::New1(::g::Fuse::Node* obj)
{
    BackButton__Fuse_Node_bool_IsEnabled_Property* obj1 = (BackButton__Fuse_Node_bool_IsEnabled_Property*)uNew(BackButton__Fuse_Node_bool_IsEnabled_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(740)
// -----------------------------------------------------------

// public sealed class GraphicsView :740
// {
// static GraphicsView() :740
static void GraphicsView__cctor_3_fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret2;
    GraphicsView::BackgroundProperty1_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[62/*Fuse.StyleProperty<Fuse.Controls.GraphicsView, float4>*/], uCRef(::g::Uno::Float4__New1(0.0f)), uDelegate::New(::TYPES[63/*Uno.Action<Fuse.Controls.GraphicsView>*/], (void*)GraphicsView__OnBackgroundChanged1_fn), &ret2), ret2);
}

GraphicsView_type* GraphicsView_typeof()
{
    static uSStrong<GraphicsView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 96;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(GraphicsView);
    options.TypeSize = sizeof(GraphicsView_type);
    type = (GraphicsView_type*)uClassType::New("Fuse.Controls.GraphicsView", options);
    type->SetBase(::g::Fuse::Controls::ContentControl_typeof());
    type->fp_ctor_ = (void*)GraphicsView__New2_fn;
    type->fp_cctor_ = GraphicsView__cctor_3_fn;
    type->fp_Draw = (void(*)(::g::Fuse::Node*, ::g::Fuse::DrawContext*))GraphicsView__Draw_fn;
    type->fp_InvalidateVisual = (void(*)(::g::Fuse::Node*))GraphicsView__InvalidateVisual_fn;
    type->interface6.fp_PointToWorldRay = (void(*)(uObject*, ::g::Uno::Float2*, ::g::Uno::Geometry::Ray*))GraphicsView__PointToWorldRay_fn;
    type->interface6.fp_get_PointDensity = (void(*)(uObject*, float*))GraphicsView__get_PointDensity1_fn;
    type->interface6.fp_get_Size = (void(*)(uObject*, ::g::Uno::Float2*))GraphicsView__get_Size_fn;
    type->interface6.fp_get_PixelSize = (void(*)(uObject*, ::g::Uno::Float2*))GraphicsView__get_PixelSize_fn;
    type->interface6.fp_get_ProjectionTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))GraphicsView__get_ProjectionTransform_fn;
    type->interface6.fp_get_ProjectionTransformInverse = (void(*)(uObject*, ::g::Uno::Float4x4*))GraphicsView__get_ProjectionTransformInverse_fn;
    type->interface6.fp_get_ViewProjectionTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))GraphicsView__get_ViewProjectionTransform_fn;
    type->interface6.fp_get_ViewProjectionTransformInverse = (void(*)(uObject*, ::g::Uno::Float4x4*))GraphicsView__get_ViewProjectionTransformInverse_fn;
    type->interface6.fp_get_ViewTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))GraphicsView__get_ViewTransform_fn;
    type->interface6.fp_get_ViewTransformInverse = (void(*)(uObject*, ::g::Uno::Float4x4*))GraphicsView__get_ViewTransformInverse_fn;
    type->interface6.fp_get_ViewOrigin = (void(*)(uObject*, ::g::Uno::Float3*))GraphicsView__get_ViewOrigin_fn;
    type->interface6.fp_get_ViewRange = (void(*)(uObject*, ::g::Uno::Float2*))GraphicsView__get_ViewRange_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::TYPES[62] = ::g::Fuse::StyleProperty1_typeof()->MakeType(GraphicsView_typeof(), ::g::Uno::Float4_typeof());
    ::TYPES[63] = ::g::Uno::Action1_typeof()->MakeType(GraphicsView_typeof());
    ::TYPES[64] = ::g::Fuse::IViewport_typeof();
    ::TYPES[65] = ::g::Fuse::IFrustum_typeof();
    ::TYPES[66] = ::g::Fuse::AppBase_typeof();
    ::TYPES[17] = ::g::Uno::Delegate_typeof();
    ::TYPES[67] = ::g::Fuse::OrthographicFrustum_typeof();
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[33] = ::g::Uno::EventHandler_typeof();
    ::TYPES[19] = uObject_typeof();
    ::TYPES[34] = ::g::Uno::EventArgs_typeof();
    ::TYPES[22] = ::g::Uno::Bool_typeof();
    ::TYPES[37] = ::g::Uno::Action_typeof();
    ::TYPES[21] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[68] = ::g::Fuse::RootViewport_typeof();
    ::TYPES[69] = ::g::Fuse::FrustumViewport_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(GraphicsView_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(GraphicsView_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(GraphicsView_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(GraphicsView_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(GraphicsView_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(GraphicsView_type, interface5),
        ::g::Fuse::IViewport_typeof(), offsetof(GraphicsView_type, interface6));
    type->SetFields(90,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::GraphicsView, _frameScheduled), 0,
        ::g::Fuse::OrthographicFrustum_typeof(), offsetof(::g::Fuse::Controls::GraphicsView, _frustum), 0,
        ::g::Fuse::FrustumViewport_typeof(), offsetof(::g::Fuse::Controls::GraphicsView, _frustumViewport), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::GraphicsView, IsFullScreen), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Controls::GraphicsView, Redraw1), 0,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(GraphicsView_typeof(), ::g::Uno::Float4_typeof()), (uintptr_t)&::g::Fuse::Controls::GraphicsView::BackgroundProperty1_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("BackgroundProperty", 95));
    type->Reflection.SetFunctions(17,
        new uFunction("get_Background", NULL, (void*)GraphicsView__get_Background1_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_Background", NULL, (void*)GraphicsView__set_Background1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction(".ctor", NULL, (void*)GraphicsView__New2_fn, 0, true, GraphicsView_typeof(), 0),
        new uFunction("get_PixelSize", NULL, (void*)GraphicsView__get_PixelSize_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_PointDensity", NULL, (void*)GraphicsView__get_PointDensity1_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("PointToWorldRay", NULL, (void*)GraphicsView__PointToWorldRay_fn, 0, false, ::g::Uno::Geometry::Ray_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_ProjectionTransform", NULL, (void*)GraphicsView__get_ProjectionTransform_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("get_ProjectionTransformInverse", NULL, (void*)GraphicsView__get_ProjectionTransformInverse_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("add_Redraw", NULL, (void*)GraphicsView__add_Redraw_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_Redraw", NULL, (void*)GraphicsView__remove_Redraw_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("get_Size", NULL, (void*)GraphicsView__get_Size_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_ViewOrigin", NULL, (void*)GraphicsView__get_ViewOrigin_fn, 0, false, ::g::Uno::Float3_typeof(), 0),
        new uFunction("get_ViewProjectionTransform", NULL, (void*)GraphicsView__get_ViewProjectionTransform_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("get_ViewProjectionTransformInverse", NULL, (void*)GraphicsView__get_ViewProjectionTransformInverse_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("get_ViewRange", NULL, (void*)GraphicsView__get_ViewRange_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_ViewTransform", NULL, (void*)GraphicsView__get_ViewTransform_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0),
        new uFunction("get_ViewTransformInverse", NULL, (void*)GraphicsView__get_ViewTransformInverse_fn, 0, false, ::g::Uno::Float4x4_typeof(), 0));
    return type;
}

// public GraphicsView() :748
void GraphicsView__ctor_4_fn(GraphicsView* __this)
{
    __this->ctor_4();
}

// public float4 get_Background() :759
void GraphicsView__get_Background1_fn(GraphicsView* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Background1();
}

// public void set_Background(float4 value) :760
void GraphicsView__set_Background1_fn(GraphicsView* __this, ::g::Uno::Float4* value)
{
    __this->Background1(*value);
}

// public override sealed void Draw(Fuse.DrawContext dc) :806
void GraphicsView__Draw_fn(GraphicsView* __this, ::g::Fuse::DrawContext* dc)
{
    ::g::Fuse::Elements::Element__Draw_fn(__this, dc);
    uPtr(::g::Fuse::AppBase::Current1())->DrawSelection(dc);
}

// private void DrawFrame() :794
void GraphicsView__DrawFrame_fn(GraphicsView* __this)
{
    __this->DrawFrame();
}

// public override sealed void InvalidateVisual() :784
void GraphicsView__InvalidateVisual_fn(GraphicsView* __this)
{
    if (__this->IsRooted() && !__this->_frameScheduled)
    {
        ::g::Fuse::UpdateManager::AddOnceAction(uDelegate::New(::TYPES[37/*Uno.Action*/], (void*)GraphicsView__DrawFrame_fn, __this), 4);
        __this->_frameScheduled = true;
    }

    ::g::Fuse::Elements::Element__InvalidateVisual_fn(__this);
}

// public GraphicsView New() :748
void GraphicsView__New2_fn(GraphicsView** __retval)
{
    *__retval = GraphicsView::New2();
}

// private static void OnBackgroundChanged(Fuse.Controls.GraphicsView gv) :763
void GraphicsView__OnBackgroundChanged1_fn(GraphicsView* gv)
{
    GraphicsView::OnBackgroundChanged1(gv);
}

// public float2 get_PixelSize() :780
void GraphicsView__get_PixelSize_fn(GraphicsView* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PixelSize();
}

// public float get_PointDensity() :770
void GraphicsView__get_PointDensity1_fn(GraphicsView* __this, float* __retval)
{
    *__retval = __this->PointDensity1();
}

// public Uno.Geometry.Ray PointToWorldRay(float2 pixelPos) :822
void GraphicsView__PointToWorldRay_fn(GraphicsView* __this, ::g::Uno::Float2* pixelPos, ::g::Uno::Geometry::Ray* __retval)
{
    *__retval = __this->PointToWorldRay(*pixelPos);
}

// public float4x4 get_ProjectionTransform() :814
void GraphicsView__get_ProjectionTransform_fn(GraphicsView* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ProjectionTransform();
}

// public float4x4 get_ProjectionTransformInverse() :815
void GraphicsView__get_ProjectionTransformInverse_fn(GraphicsView* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ProjectionTransformInverse();
}

// public generated void add_Redraw(Uno.EventHandler value) :812
void GraphicsView__add_Redraw_fn(GraphicsView* __this, uDelegate* value)
{
    __this->add_Redraw(value);
}

// public generated void remove_Redraw(Uno.EventHandler value) :812
void GraphicsView__remove_Redraw_fn(GraphicsView* __this, uDelegate* value)
{
    __this->remove_Redraw(value);
}

// public float2 get_Size() :775
void GraphicsView__get_Size_fn(GraphicsView* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Size();
}

// public float3 get_ViewOrigin() :820
void GraphicsView__get_ViewOrigin_fn(GraphicsView* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->ViewOrigin();
}

// public float4x4 get_ViewProjectionTransform() :816
void GraphicsView__get_ViewProjectionTransform_fn(GraphicsView* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ViewProjectionTransform();
}

// public float4x4 get_ViewProjectionTransformInverse() :817
void GraphicsView__get_ViewProjectionTransformInverse_fn(GraphicsView* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ViewProjectionTransformInverse();
}

// public float2 get_ViewRange() :821
void GraphicsView__get_ViewRange_fn(GraphicsView* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ViewRange();
}

// public float4x4 get_ViewTransform() :819
void GraphicsView__get_ViewTransform_fn(GraphicsView* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ViewTransform();
}

// public float4x4 get_ViewTransformInverse() :818
void GraphicsView__get_ViewTransformInverse_fn(GraphicsView* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->ViewTransformInverse();
}

uSStrong< ::g::Fuse::StyleProperty1*> GraphicsView::BackgroundProperty1_;

// public GraphicsView() [instance] :748
void GraphicsView::ctor_4()
{
    _frustum = ::g::Fuse::OrthographicFrustum::New1();
    ctor_3();
    _frustumViewport = ::g::Fuse::FrustumViewport::New1();
    uPtr(_frustumViewport)->Update((uObject*)this, (uObject*)_frustum);
}

// public float4 get_Background() [instance] :759
::g::Uno::Float4 GraphicsView::Background1()
{
    ::g::Uno::Float4 ret3;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(GraphicsView::BackgroundProperty1()), this, &ret3), ret3);
}

// public void set_Background(float4 value) [instance] :760
void GraphicsView::Background1(::g::Uno::Float4 value)
{
    bool ret4;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(GraphicsView::BackgroundProperty1()), this, uCRef(value), &ret4);
}

// private void DrawFrame() [instance] :794
void GraphicsView::DrawFrame()
{
    _frameScheduled = false;

    if (::g::Uno::Delegate::op_Inequality(Redraw1, NULL))
    {
        uPtr(_frustum)->LocalFromWorld(WorldTransformInverse());
        uPtr(_frustumViewport)->Update((uObject*)this, (uObject*)_frustum);
        uPtr(Redraw1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
    }
}

// public float2 get_PixelSize() [instance] :780
::g::Uno::Float2 GraphicsView::PixelSize()
{
    return ::g::Uno::Float2__op_Multiply1(ActualSize(), PointDensity1());
}

// public float get_PointDensity() [instance] :770
float GraphicsView::PointDensity1()
{
    return (Parent() != NULL) ? ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(uPtr(Parent())->Viewport()), ::TYPES[64/*Fuse.IViewport*/])) : ::g::Fuse::RootViewport::DefaultDensity();
}

// public Uno.Geometry.Ray PointToWorldRay(float2 pixelPos) [instance] :822
::g::Uno::Geometry::Ray GraphicsView::PointToWorldRay(::g::Uno::Float2 pixelPos)
{
    return ::g::Fuse::FrustumViewport::PointToWorldRay((uObject*)this, pixelPos);
}

// public float4x4 get_ProjectionTransform() [instance] :814
::g::Uno::Float4x4 GraphicsView::ProjectionTransform()
{
    return uPtr(_frustumViewport)->ProjectionTransform;
}

// public float4x4 get_ProjectionTransformInverse() [instance] :815
::g::Uno::Float4x4 GraphicsView::ProjectionTransformInverse()
{
    return uPtr(_frustumViewport)->ProjectionTransformInverse;
}

// public generated void add_Redraw(Uno.EventHandler value) [instance] :812
void GraphicsView::add_Redraw(uDelegate* value)
{
    Redraw1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Redraw1, value), ::TYPES[33/*Uno.EventHandler*/]);
}

// public generated void remove_Redraw(Uno.EventHandler value) [instance] :812
void GraphicsView::remove_Redraw(uDelegate* value)
{
    Redraw1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Redraw1, value), ::TYPES[33/*Uno.EventHandler*/]);
}

// public float2 get_Size() [instance] :775
::g::Uno::Float2 GraphicsView::Size()
{
    return ActualSize();
}

// public float3 get_ViewOrigin() [instance] :820
::g::Uno::Float3 GraphicsView::ViewOrigin()
{
    return uPtr(_frustum)->GetWorldPosition((uObject*)this);
}

// public float4x4 get_ViewProjectionTransform() [instance] :816
::g::Uno::Float4x4 GraphicsView::ViewProjectionTransform()
{
    return uPtr(_frustumViewport)->ViewProjectionTransform;
}

// public float4x4 get_ViewProjectionTransformInverse() [instance] :817
::g::Uno::Float4x4 GraphicsView::ViewProjectionTransformInverse()
{
    return uPtr(_frustumViewport)->ViewProjectionTransformInverse;
}

// public float2 get_ViewRange() [instance] :821
::g::Uno::Float2 GraphicsView::ViewRange()
{
    return uPtr(_frustum)->GetDepthRange((uObject*)this);
}

// public float4x4 get_ViewTransform() [instance] :819
::g::Uno::Float4x4 GraphicsView::ViewTransform()
{
    return uPtr(_frustumViewport)->ViewTransform;
}

// public float4x4 get_ViewTransformInverse() [instance] :818
::g::Uno::Float4x4 GraphicsView::ViewTransformInverse()
{
    return uPtr(_frustumViewport)->ViewTransformInverse;
}

// public GraphicsView New() [static] :748
GraphicsView* GraphicsView::New2()
{
    GraphicsView* obj1 = (GraphicsView*)uNew(GraphicsView_typeof());
    obj1->ctor_4();
    return obj1;
}

// private static void OnBackgroundChanged(Fuse.Controls.GraphicsView gv) [static] :763
void GraphicsView::OnBackgroundChanged1(GraphicsView* gv)
{
    GraphicsView_typeof()->Init();
    uPtr(gv)->InvalidateVisual();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(842)
// -----------------------------------------------------------

// public sealed class Grid :842
// {
// static Grid() :842
static void Grid__cctor_4_fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret2;
    ::g::Fuse::StyleProperty1* ret3;
    Grid::CellSpacingProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[70/*Fuse.StyleProperty<Fuse.Controls.Grid, float>*/], uCRef(0.0f), uDelegate::New(::TYPES[71/*Uno.Action<Fuse.Controls.Grid>*/], (void*)Grid__OnCellSpacingChanged_fn), &ret2), ret2);
    Grid::ContentAlignmentProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[72/*Fuse.StyleProperty<Fuse.Controls.Grid, Fuse.Elements.Alignment>*/], uCRef<int>(0), uDelegate::New(::TYPES[71/*Uno.Action<Fuse.Controls.Grid>*/], (void*)Grid__OnContentAlignmentChanged_fn), &ret3), ret3);
}

::g::Fuse::Controls::Panel_type* Grid_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 103;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(Grid);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Fuse.Controls.Grid", options);
    type->SetBase(::g::Fuse::Controls::Panel_typeof());
    type->fp_ctor_ = (void*)Grid__New2_fn;
    type->fp_cctor_ = Grid__cctor_4_fn;
    type->interface6.fp_AddChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChild_fn;
    type->interface6.fp_AddChildAt = (void(*)(uObject*, int*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChildAt_fn;
    type->interface6.fp_RemoveChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_RemoveChild_fn;
    type->interface6.fp_GetChild = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_GetChild_fn;
    type->interface7.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Add_fn;
    type->interface7.fp_Remove = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Remove_fn;
    type->interface6.fp_get_ChildCount = (void(*)(uObject*, int*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_get_ChildCount_fn;
    type->interface6.fp_get_Children = (void(*)(uObject*, uObject**))::g::Fuse::Controls::Panel__get_Children_fn;
    type->interface6.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__get_ActualSize_fn;
    type->interface6.fp_get_HasChildren = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__get_HasChildren_fn;
    type->interface6.fp_add_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildAdded_fn;
    type->interface6.fp_remove_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildAdded_fn;
    type->interface6.fp_add_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildRemoved_fn;
    type->interface6.fp_remove_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildRemoved_fn;
    type->interface6.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface6.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_add_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__add_Update_fn;
    type->interface6.fp_remove_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__remove_Update_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::TYPES[70] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Grid_typeof(), ::g::Uno::Float_typeof());
    ::TYPES[71] = ::g::Uno::Action1_typeof()->MakeType(Grid_typeof());
    ::TYPES[72] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Grid_typeof(), ::g::Fuse::Elements::Alignment_typeof());
    ::TYPES[23] = ::g::Fuse::Controls::Panel_typeof();
    ::TYPES[51] = ::g::Fuse::Layouts::Layout_typeof();
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[73] = ::g::Fuse::Layouts::GridLayout_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Fuse::Triggers::IAddRemove_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Panel_type, interface7));
    type->SetFields(100,
        ::g::Fuse::Layouts::GridLayout_typeof(), offsetof(::g::Fuse::Controls::Grid, _gridLayout), 0,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Grid_typeof(), ::g::Uno::Float_typeof()), (uintptr_t)&::g::Fuse::Controls::Grid::CellSpacingProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Grid_typeof(), ::g::Fuse::Elements::Alignment_typeof()), (uintptr_t)&::g::Fuse::Controls::Grid::ContentAlignmentProperty_, uFieldFlagsStatic);
    type->Reflection.SetFields(2,
        new uField("CellSpacingProperty", 101),
        new uField("ContentAlignmentProperty", 102));
    type->Reflection.SetFunctions(35,
        new uFunction("get_CellSpacing", NULL, (void*)Grid__get_CellSpacing_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_CellSpacing", NULL, (void*)Grid__set_CellSpacing_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_ColumnCount", NULL, (void*)Grid__get_ColumnCount_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_ColumnCount", NULL, (void*)Grid__set_ColumnCount_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_ColumnData", NULL, (void*)Grid__get_ColumnData_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_ColumnData", NULL, (void*)Grid__set_ColumnData_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_ColumnList", NULL, (void*)Grid__get_ColumnList_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Layouts::Column_typeof()), 0),
        new uFunction("get_Columns", NULL, (void*)Grid__get_Columns_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Columns", NULL, (void*)Grid__set_Columns_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_ContentAlignment", NULL, (void*)Grid__get_ContentAlignment_fn, 0, false, ::g::Fuse::Elements::Alignment_typeof(), 0),
        new uFunction("set_ContentAlignment", NULL, (void*)Grid__set_ContentAlignment_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::Alignment_typeof()),
        new uFunction("get_DefaultColumn", NULL, (void*)Grid__get_DefaultColumn_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_DefaultColumn", NULL, (void*)Grid__set_DefaultColumn_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_DefaultRow", NULL, (void*)Grid__get_DefaultRow_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_DefaultRow", NULL, (void*)Grid__set_DefaultRow_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("GetColumn", NULL, (void*)Grid__GetColumn_fn, 0, true, ::g::Uno::Int_typeof(), 1, ::g::Fuse::Elements::Element_typeof()),
        new uFunction("GetColumnSpan", NULL, (void*)Grid__GetColumnSpan_fn, 0, true, ::g::Uno::Int_typeof(), 1, ::g::Fuse::Elements::Element_typeof()),
        new uFunction("GetRow", NULL, (void*)Grid__GetRow_fn, 0, true, ::g::Uno::Int_typeof(), 1, ::g::Fuse::Elements::Element_typeof()),
        new uFunction("GetRowSpan", NULL, (void*)Grid__GetRowSpan_fn, 0, true, ::g::Uno::Int_typeof(), 1, ::g::Fuse::Elements::Element_typeof()),
        new uFunction(".ctor", NULL, (void*)Grid__New2_fn, 0, true, Grid_typeof(), 0),
        new uFunction("ResetColumn", NULL, (void*)Grid__ResetColumn_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::Elements::Element_typeof()),
        new uFunction("ResetColumnSpan", NULL, (void*)Grid__ResetColumnSpan_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::Elements::Element_typeof()),
        new uFunction("ResetRow", NULL, (void*)Grid__ResetRow_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::Elements::Element_typeof()),
        new uFunction("ResetRowSpan", NULL, (void*)Grid__ResetRowSpan_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::Elements::Element_typeof()),
        new uFunction("get_RowCount", NULL, (void*)Grid__get_RowCount_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_RowCount", NULL, (void*)Grid__set_RowCount_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_RowData", NULL, (void*)Grid__get_RowData_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_RowData", NULL, (void*)Grid__set_RowData_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_RowList", NULL, (void*)Grid__get_RowList_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Layouts::Row_typeof()), 0),
        new uFunction("get_Rows", NULL, (void*)Grid__get_Rows_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Rows", NULL, (void*)Grid__set_Rows_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("SetColumn", NULL, (void*)Grid__SetColumn_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Elements::Element_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("SetColumnSpan", NULL, (void*)Grid__SetColumnSpan_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Elements::Element_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("SetRow", NULL, (void*)Grid__SetRow_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Elements::Element_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("SetRowSpan", NULL, (void*)Grid__SetRowSpan_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Elements::Element_typeof(), ::g::Uno::Int_typeof()));
    return type;
}

// public Grid() :1004
void Grid__ctor_4_fn(Grid* __this)
{
    __this->ctor_4();
}

// public float get_CellSpacing() :980
void Grid__get_CellSpacing_fn(Grid* __this, float* __retval)
{
    *__retval = __this->CellSpacing();
}

// public void set_CellSpacing(float value) :981
void Grid__set_CellSpacing_fn(Grid* __this, float* value)
{
    __this->CellSpacing(*value);
}

// public int get_ColumnCount() :962
void Grid__get_ColumnCount_fn(Grid* __this, int* __retval)
{
    *__retval = __this->ColumnCount();
}

// public void set_ColumnCount(int value) :963
void Grid__set_ColumnCount_fn(Grid* __this, int* value)
{
    __this->ColumnCount(*value);
}

// public string get_ColumnData() :956
void Grid__get_ColumnData_fn(Grid* __this, uString** __retval)
{
    *__retval = __this->ColumnData();
}

// public void set_ColumnData(string value) :957
void Grid__set_ColumnData_fn(Grid* __this, uString* value)
{
    __this->ColumnData(value);
}

// public Uno.Collections.IList<Fuse.Layouts.Column> get_ColumnList() :946
void Grid__get_ColumnList_fn(Grid* __this, uObject** __retval)
{
    *__retval = __this->ColumnList();
}

// public string get_Columns() :950
void Grid__get_Columns_fn(Grid* __this, uString** __retval)
{
    *__retval = __this->Columns();
}

// public void set_Columns(string value) :951
void Grid__set_Columns_fn(Grid* __this, uString* value)
{
    __this->Columns(value);
}

// public Fuse.Elements.Alignment get_ContentAlignment() :995
void Grid__get_ContentAlignment_fn(Grid* __this, int* __retval)
{
    *__retval = __this->ContentAlignment();
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value) :996
void Grid__set_ContentAlignment_fn(Grid* __this, int* value)
{
    __this->ContentAlignment(*value);
}

// public string get_DefaultColumn() :968
void Grid__get_DefaultColumn_fn(Grid* __this, uString** __retval)
{
    *__retval = __this->DefaultColumn();
}

// public void set_DefaultColumn(string value) :969
void Grid__set_DefaultColumn_fn(Grid* __this, uString* value)
{
    __this->DefaultColumn(value);
}

// public string get_DefaultRow() :941
void Grid__get_DefaultRow_fn(Grid* __this, uString** __retval)
{
    *__retval = __this->DefaultRow();
}

// public void set_DefaultRow(string value) :942
void Grid__set_DefaultRow_fn(Grid* __this, uString* value)
{
    __this->DefaultRow(value);
}

// public static int GetColumn(Fuse.Elements.Element elm) :888
void Grid__GetColumn_fn(::g::Fuse::Elements::Element* elm, int* __retval)
{
    *__retval = Grid::GetColumn(elm);
}

// public static int GetColumnSpan(Fuse.Elements.Element elm) :906
void Grid__GetColumnSpan_fn(::g::Fuse::Elements::Element* elm, int* __retval)
{
    *__retval = Grid::GetColumnSpan(elm);
}

// public static int GetRow(Fuse.Elements.Element elm) :852
void Grid__GetRow_fn(::g::Fuse::Elements::Element* elm, int* __retval)
{
    *__retval = Grid::GetRow(elm);
}

// public static int GetRowSpan(Fuse.Elements.Element elm) :870
void Grid__GetRowSpan_fn(::g::Fuse::Elements::Element* elm, int* __retval)
{
    *__retval = Grid::GetRowSpan(elm);
}

// public Grid New() :1004
void Grid__New2_fn(Grid** __retval)
{
    *__retval = Grid::New2();
}

// private static void OnCellSpacingChanged(Fuse.Controls.Grid p) :984
void Grid__OnCellSpacingChanged_fn(Grid* p)
{
    Grid::OnCellSpacingChanged(p);
}

// private static void OnContentAlignmentChanged(Fuse.Controls.Grid p) :999
void Grid__OnContentAlignmentChanged_fn(Grid* p)
{
    Grid::OnContentAlignmentChanged(p);
}

// public static void ResetColumn(Fuse.Elements.Element elm) :894
void Grid__ResetColumn_fn(::g::Fuse::Elements::Element* elm)
{
    Grid::ResetColumn(elm);
}

// public static void ResetColumnSpan(Fuse.Elements.Element elm) :912
void Grid__ResetColumnSpan_fn(::g::Fuse::Elements::Element* elm)
{
    Grid::ResetColumnSpan(elm);
}

// public static void ResetRow(Fuse.Elements.Element elm) :858
void Grid__ResetRow_fn(::g::Fuse::Elements::Element* elm)
{
    Grid::ResetRow(elm);
}

// public static void ResetRowSpan(Fuse.Elements.Element elm) :876
void Grid__ResetRowSpan_fn(::g::Fuse::Elements::Element* elm)
{
    Grid::ResetRowSpan(elm);
}

// public int get_RowCount() :935
void Grid__get_RowCount_fn(Grid* __this, int* __retval)
{
    *__retval = __this->RowCount();
}

// public void set_RowCount(int value) :936
void Grid__set_RowCount_fn(Grid* __this, int* value)
{
    __this->RowCount(*value);
}

// public string get_RowData() :928
void Grid__get_RowData_fn(Grid* __this, uString** __retval)
{
    *__retval = __this->RowData();
}

// public void set_RowData(string value) :929
void Grid__set_RowData_fn(Grid* __this, uString* value)
{
    __this->RowData(value);
}

// public Uno.Collections.IList<Fuse.Layouts.Row> get_RowList() :918
void Grid__get_RowList_fn(Grid* __this, uObject** __retval)
{
    *__retval = __this->RowList();
}

// public string get_Rows() :922
void Grid__get_Rows_fn(Grid* __this, uString** __retval)
{
    *__retval = __this->Rows();
}

// public void set_Rows(string value) :923
void Grid__set_Rows_fn(Grid* __this, uString* value)
{
    __this->Rows(value);
}

// public static void SetColumn(Fuse.Elements.Element elm, int col) :882
void Grid__SetColumn_fn(::g::Fuse::Elements::Element* elm, int* col)
{
    Grid::SetColumn(elm, *col);
}

// public static void SetColumnSpan(Fuse.Elements.Element elm, int span) :900
void Grid__SetColumnSpan_fn(::g::Fuse::Elements::Element* elm, int* span)
{
    Grid::SetColumnSpan(elm, *span);
}

// public static void SetRow(Fuse.Elements.Element elm, int row) :846
void Grid__SetRow_fn(::g::Fuse::Elements::Element* elm, int* row)
{
    Grid::SetRow(elm, *row);
}

// public static void SetRowSpan(Fuse.Elements.Element elm, int span) :864
void Grid__SetRowSpan_fn(::g::Fuse::Elements::Element* elm, int* span)
{
    Grid::SetRowSpan(elm, *span);
}

uSStrong< ::g::Fuse::StyleProperty1*> Grid::CellSpacingProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Grid::ContentAlignmentProperty_;

// public Grid() [instance] :1004
void Grid::ctor_4()
{
    ctor_3();
    Layout(_gridLayout = ::g::Fuse::Layouts::GridLayout::New1());
}

// public float get_CellSpacing() [instance] :980
float Grid::CellSpacing()
{
    float ret4;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Grid::CellSpacingProperty()), this, &ret4), ret4);
}

// public void set_CellSpacing(float value) [instance] :981
void Grid::CellSpacing(float value)
{
    bool ret5;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Grid::CellSpacingProperty()), this, uCRef(value), &ret5);
}

// public int get_ColumnCount() [instance] :962
int Grid::ColumnCount()
{
    return uPtr(_gridLayout)->ColumnCount();
}

// public void set_ColumnCount(int value) [instance] :963
void Grid::ColumnCount(int value)
{
    uPtr(_gridLayout)->ColumnCount(value);
}

// public string get_ColumnData() [instance] :956
uString* Grid::ColumnData()
{
    return uPtr(_gridLayout)->Columns();
}

// public void set_ColumnData(string value) [instance] :957
void Grid::ColumnData(uString* value)
{
    uPtr(_gridLayout)->Columns(value);
}

// public Uno.Collections.IList<Fuse.Layouts.Column> get_ColumnList() [instance] :946
uObject* Grid::ColumnList()
{
    return uPtr(_gridLayout)->ColumnList();
}

// public string get_Columns() [instance] :950
uString* Grid::Columns()
{
    return uPtr(_gridLayout)->Columns();
}

// public void set_Columns(string value) [instance] :951
void Grid::Columns(uString* value)
{
    uPtr(_gridLayout)->Columns(value);
}

// public Fuse.Elements.Alignment get_ContentAlignment() [instance] :995
int Grid::ContentAlignment()
{
    int ret6;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Grid::ContentAlignmentProperty()), this, &ret6), ret6);
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value) [instance] :996
void Grid::ContentAlignment(int value)
{
    bool ret7;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Grid::ContentAlignmentProperty()), this, uCRef<int>(value), &ret7);
}

// public string get_DefaultColumn() [instance] :968
uString* Grid::DefaultColumn()
{
    return uPtr(_gridLayout)->DefaultColumn();
}

// public void set_DefaultColumn(string value) [instance] :969
void Grid::DefaultColumn(uString* value)
{
    uPtr(_gridLayout)->DefaultColumn(value);
}

// public string get_DefaultRow() [instance] :941
uString* Grid::DefaultRow()
{
    return uPtr(_gridLayout)->DefaultRow();
}

// public void set_DefaultRow(string value) [instance] :942
void Grid::DefaultRow(uString* value)
{
    uPtr(_gridLayout)->DefaultRow(value);
}

// public int get_RowCount() [instance] :935
int Grid::RowCount()
{
    return uPtr(_gridLayout)->RowCount();
}

// public void set_RowCount(int value) [instance] :936
void Grid::RowCount(int value)
{
    uPtr(_gridLayout)->RowCount(value);
}

// public string get_RowData() [instance] :928
uString* Grid::RowData()
{
    return uPtr(_gridLayout)->Rows();
}

// public void set_RowData(string value) [instance] :929
void Grid::RowData(uString* value)
{
    uPtr(_gridLayout)->Rows(value);
}

// public Uno.Collections.IList<Fuse.Layouts.Row> get_RowList() [instance] :918
uObject* Grid::RowList()
{
    return uPtr(_gridLayout)->RowList();
}

// public string get_Rows() [instance] :922
uString* Grid::Rows()
{
    return uPtr(_gridLayout)->Rows();
}

// public void set_Rows(string value) [instance] :923
void Grid::Rows(uString* value)
{
    uPtr(_gridLayout)->Rows(value);
}

// public static int GetColumn(Fuse.Elements.Element elm) [static] :888
int Grid::GetColumn(::g::Fuse::Elements::Element* elm)
{
    Grid_typeof()->Init();
    return ::g::Fuse::Layouts::GridLayout::GetColumn(elm);
}

// public static int GetColumnSpan(Fuse.Elements.Element elm) [static] :906
int Grid::GetColumnSpan(::g::Fuse::Elements::Element* elm)
{
    Grid_typeof()->Init();
    return ::g::Fuse::Layouts::GridLayout::GetColumnSpan(elm);
}

// public static int GetRow(Fuse.Elements.Element elm) [static] :852
int Grid::GetRow(::g::Fuse::Elements::Element* elm)
{
    Grid_typeof()->Init();
    return ::g::Fuse::Layouts::GridLayout::GetRow(elm);
}

// public static int GetRowSpan(Fuse.Elements.Element elm) [static] :870
int Grid::GetRowSpan(::g::Fuse::Elements::Element* elm)
{
    Grid_typeof()->Init();
    return ::g::Fuse::Layouts::GridLayout::GetRowSpan(elm);
}

// public Grid New() [static] :1004
Grid* Grid::New2()
{
    Grid* obj1 = (Grid*)uNew(Grid_typeof());
    obj1->ctor_4();
    return obj1;
}

// private static void OnCellSpacingChanged(Fuse.Controls.Grid p) [static] :984
void Grid::OnCellSpacingChanged(Grid* p)
{
    Grid_typeof()->Init();
    uPtr(uPtr(p)->_gridLayout)->CellSpacing(uPtr(p)->CellSpacing());
}

// private static void OnContentAlignmentChanged(Fuse.Controls.Grid p) [static] :999
void Grid::OnContentAlignmentChanged(Grid* p)
{
    Grid_typeof()->Init();
    uPtr(uPtr(p)->_gridLayout)->ContentAlignment(uPtr(p)->ContentAlignment());
}

// public static void ResetColumn(Fuse.Elements.Element elm) [static] :894
void Grid::ResetColumn(::g::Fuse::Elements::Element* elm)
{
    Grid_typeof()->Init();
    ::g::Fuse::Layouts::GridLayout::ResetColumn(elm);
}

// public static void ResetColumnSpan(Fuse.Elements.Element elm) [static] :912
void Grid::ResetColumnSpan(::g::Fuse::Elements::Element* elm)
{
    Grid_typeof()->Init();
    ::g::Fuse::Layouts::GridLayout::ResetColumnSpan(elm);
}

// public static void ResetRow(Fuse.Elements.Element elm) [static] :858
void Grid::ResetRow(::g::Fuse::Elements::Element* elm)
{
    Grid_typeof()->Init();
    ::g::Fuse::Layouts::GridLayout::ResetRow(elm);
}

// public static void ResetRowSpan(Fuse.Elements.Element elm) [static] :876
void Grid::ResetRowSpan(::g::Fuse::Elements::Element* elm)
{
    Grid_typeof()->Init();
    ::g::Fuse::Layouts::GridLayout::ResetRowSpan(elm);
}

// public static void SetColumn(Fuse.Elements.Element elm, int col) [static] :882
void Grid::SetColumn(::g::Fuse::Elements::Element* elm, int col)
{
    Grid_typeof()->Init();
    ::g::Fuse::Layouts::GridLayout::SetColumn(elm, col);
}

// public static void SetColumnSpan(Fuse.Elements.Element elm, int span) [static] :900
void Grid::SetColumnSpan(::g::Fuse::Elements::Element* elm, int span)
{
    Grid_typeof()->Init();
    ::g::Fuse::Layouts::GridLayout::SetColumnSpan(elm, span);
}

// public static void SetRow(Fuse.Elements.Element elm, int row) [static] :846
void Grid::SetRow(::g::Fuse::Elements::Element* elm, int row)
{
    Grid_typeof()->Init();
    ::g::Fuse::Layouts::GridLayout::SetRow(elm, row);
}

// public static void SetRowSpan(Fuse.Elements.Element elm, int span) [static] :864
void Grid::SetRowSpan(::g::Fuse::Elements::Element* elm, int span)
{
    Grid_typeof()->Init();
    ::g::Fuse::Layouts::GridLayout::SetRowSpan(elm, span);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\WebView\$.uno(40)
// ------------------------------------------------------------------

// public sealed class HTML :40
// {
uType* HTML_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(HTML);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.HTML", options);
    type->fp_ctor_ = (void*)HTML__New1_fn;
    ::TYPES[74] = ::g::Fuse::Controls::ISourceReceiver_typeof();
    type->SetFields(0,
        ::g::Fuse::Controls::ISourceReceiver_typeof(), offsetof(::g::Fuse::Controls::HTML, Receiver), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)HTML__New1_fn, 0, true, HTML_typeof(), 0),
        new uFunction("get_Source", NULL, (void*)HTML__get_Source_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Source", NULL, (void*)HTML__set_Source_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
    return type;
}

// public generated HTML() :40
void HTML__ctor__fn(HTML* __this)
{
    __this->ctor_();
}

// public generated HTML New() :40
void HTML__New1_fn(HTML** __retval)
{
    *__retval = HTML::New1();
}

// public string get_Source() :47
void HTML__get_Source_fn(HTML* __this, uString** __retval)
{
    *__retval = __this->Source();
}

// public void set_Source(string value) :51
void HTML__set_Source_fn(HTML* __this, uString* value)
{
    __this->Source(value);
}

// public generated HTML() [instance] :40
void HTML::ctor_()
{
}

// public string get_Source() [instance] :47
uString* HTML::Source()
{
    return ::g::Fuse::Controls::ISourceReceiver::Source(uInterface(uPtr(Receiver), ::TYPES[74/*Fuse.Controls.ISourceReceiver*/]));
}

// public void set_Source(string value) [instance] :51
void HTML::Source(uString* value)
{
    ::g::Fuse::Controls::ISourceReceiver::Source(uInterface(uPtr(Receiver), ::TYPES[74/*Fuse.Controls.ISourceReceiver*/]), value);
}

// public generated HTML New() [static] :40
HTML* HTML::New1()
{
    HTML* obj1 = (HTML*)uNew(HTML_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(1031)
// ------------------------------------------------------------

// public sealed class Image :1031
// {
// static Image() :1031
static void Image__cctor_4_fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret2;
    ::g::Fuse::StyleProperty1* ret3;
    ::g::Fuse::StyleProperty1* ret4;
    ::g::Fuse::StyleProperty1* ret5;
    ::g::Fuse::StyleProperty1* ret6;
    Image::MemoryPolicyProperty_ = (::g::Fuse::StyleProperty1__New2_fn(::TYPES[75/*Fuse.StyleProperty<Fuse.Controls.Image, Fuse.Resources.MemoryPolicy>*/], ::g::Fuse::Resources::MemoryPolicy::PreloadRetain(), uDelegate::New(::TYPES[77/*Uno.Action<Fuse.Controls.Image>*/], (void*)Image__UpdateParam_fn), uDelegate::New(::TYPES[78/*Uno.Action<Fuse.Controls.Image, Fuse.Resources.MemoryPolicy>*/], (void*)Image__SetMemoryPolicy_fn), uDelegate::New(::TYPES[79/*Uno.Func<Fuse.Controls.Image, Fuse.Resources.MemoryPolicy>*/], (void*)Image__GetMemoryPolicy_fn), &ret2), ret2);
    Image::StretchModeProperty_ = (::g::Fuse::StyleProperty1__New2_fn(::TYPES[80/*Fuse.StyleProperty<Fuse.Controls.Image, Fuse.Elements.StretchMode>*/], uCRef<int>(5), uDelegate::New(::TYPES[77/*Uno.Action<Fuse.Controls.Image>*/], (void*)Image__UpdateParam_fn), uDelegate::New(::TYPES[81/*Uno.Action<Fuse.Controls.Image, Fuse.Elements.StretchMode>*/], (void*)Image__SetStretchMode_fn), uDelegate::New(::TYPES[82/*Uno.Func<Fuse.Controls.Image, Fuse.Elements.StretchMode>*/], (void*)Image__GetStretchMode_fn), &ret3), ret3);
    Image::StretchDirectionProperty_ = (::g::Fuse::StyleProperty1__New2_fn(::TYPES[83/*Fuse.StyleProperty<Fuse.Controls.Image, Fuse.Elements.StretchDirection>*/], uCRef<int>(0), uDelegate::New(::TYPES[77/*Uno.Action<Fuse.Controls.Image>*/], (void*)Image__UpdateParam_fn), uDelegate::New(::TYPES[84/*Uno.Action<Fuse.Controls.Image, Fuse.Elements.StretchDirection>*/], (void*)Image__SetStretchDirection_fn), uDelegate::New(::TYPES[85/*Uno.Func<Fuse.Controls.Image, Fuse.Elements.StretchDirection>*/], (void*)Image__GetStretchDirection_fn), &ret4), ret4);
    Image::StretchSizingProperty_ = (::g::Fuse::StyleProperty1__New2_fn(::TYPES[86/*Fuse.StyleProperty<Fuse.Controls.Image, Fuse.Elements.StretchSizing>*/], uCRef<int>(1), uDelegate::New(::TYPES[77/*Uno.Action<Fuse.Controls.Image>*/], (void*)Image__UpdateParam_fn), uDelegate::New(::TYPES[87/*Uno.Action<Fuse.Controls.Image, Fuse.Elements.StretchSizing>*/], (void*)Image__SetStretchSizing_fn), uDelegate::New(::TYPES[88/*Uno.Func<Fuse.Controls.Image, Fuse.Elements.StretchSizing>*/], (void*)Image__GetStretchSizing_fn), &ret5), ret5);
    Image::ContentAlignmentProperty_ = (::g::Fuse::StyleProperty1__New2_fn(::TYPES[89/*Fuse.StyleProperty<Fuse.Controls.Image, Fuse.Elements.Alignment>*/], uCRef<int>(10), uDelegate::New(::TYPES[77/*Uno.Action<Fuse.Controls.Image>*/], (void*)Image__UpdateParam_fn), uDelegate::New(::TYPES[90/*Uno.Action<Fuse.Controls.Image, Fuse.Elements.Alignment>*/], (void*)Image__SetContentAlignment_fn), uDelegate::New(::TYPES[91/*Uno.Func<Fuse.Controls.Image, Fuse.Elements.Alignment>*/], (void*)Image__GetContentAlignment_fn), &ret6), ret6);
}

::g::Fuse::Controls::Panel_type* Image_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 112;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(Image);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Fuse.Controls.Image", options);
    type->SetBase(::g::Fuse::Controls::Panel_typeof());
    type->fp_ctor_ = (void*)Image__New2_fn;
    type->fp_cctor_ = Image__cctor_4_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Image__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Image__OnUnrooted_fn;
    type->interface6.fp_AddChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChild_fn;
    type->interface6.fp_AddChildAt = (void(*)(uObject*, int*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChildAt_fn;
    type->interface6.fp_RemoveChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_RemoveChild_fn;
    type->interface6.fp_GetChild = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_GetChild_fn;
    type->interface7.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Add_fn;
    type->interface7.fp_Remove = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Remove_fn;
    type->interface6.fp_get_ChildCount = (void(*)(uObject*, int*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_get_ChildCount_fn;
    type->interface6.fp_get_Children = (void(*)(uObject*, uObject**))::g::Fuse::Controls::Panel__get_Children_fn;
    type->interface6.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__get_ActualSize_fn;
    type->interface6.fp_get_HasChildren = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__get_HasChildren_fn;
    type->interface6.fp_add_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildAdded_fn;
    type->interface6.fp_remove_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildAdded_fn;
    type->interface6.fp_add_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildRemoved_fn;
    type->interface6.fp_remove_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildRemoved_fn;
    type->interface6.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface6.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_add_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__add_Update_fn;
    type->interface6.fp_remove_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__remove_Update_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::STRINGS[3] = uString::Const("unknown failure");
    ::TYPES[75] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Image_typeof(), ::g::Fuse::Resources::MemoryPolicy_typeof());
    ::TYPES[76] = ::g::Fuse::Resources::MemoryPolicy_typeof();
    ::TYPES[77] = ::g::Uno::Action1_typeof()->MakeType(Image_typeof());
    ::TYPES[78] = ::g::Uno::Action2_typeof()->MakeType(Image_typeof(), ::g::Fuse::Resources::MemoryPolicy_typeof());
    ::TYPES[79] = ::g::Uno::Func1_typeof()->MakeType(Image_typeof(), ::g::Fuse::Resources::MemoryPolicy_typeof());
    ::TYPES[80] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Image_typeof(), ::g::Fuse::Elements::StretchMode_typeof());
    ::TYPES[81] = ::g::Uno::Action2_typeof()->MakeType(Image_typeof(), ::g::Fuse::Elements::StretchMode_typeof());
    ::TYPES[82] = ::g::Uno::Func1_typeof()->MakeType(Image_typeof(), ::g::Fuse::Elements::StretchMode_typeof());
    ::TYPES[83] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Image_typeof(), ::g::Fuse::Elements::StretchDirection_typeof());
    ::TYPES[84] = ::g::Uno::Action2_typeof()->MakeType(Image_typeof(), ::g::Fuse::Elements::StretchDirection_typeof());
    ::TYPES[85] = ::g::Uno::Func1_typeof()->MakeType(Image_typeof(), ::g::Fuse::Elements::StretchDirection_typeof());
    ::TYPES[86] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Image_typeof(), ::g::Fuse::Elements::StretchSizing_typeof());
    ::TYPES[87] = ::g::Uno::Action2_typeof()->MakeType(Image_typeof(), ::g::Fuse::Elements::StretchSizing_typeof());
    ::TYPES[88] = ::g::Uno::Func1_typeof()->MakeType(Image_typeof(), ::g::Fuse::Elements::StretchSizing_typeof());
    ::TYPES[89] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Image_typeof(), ::g::Fuse::Elements::Alignment_typeof());
    ::TYPES[90] = ::g::Uno::Action2_typeof()->MakeType(Image_typeof(), ::g::Fuse::Elements::Alignment_typeof());
    ::TYPES[91] = ::g::Uno::Func1_typeof()->MakeType(Image_typeof(), ::g::Fuse::Elements::Alignment_typeof());
    ::TYPES[92] = ::g::Fuse::Internal::ImageContainer_typeof();
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[17] = ::g::Uno::Delegate_typeof();
    ::TYPES[33] = ::g::Uno::EventHandler_typeof();
    ::TYPES[19] = uObject_typeof();
    ::TYPES[34] = ::g::Uno::EventArgs_typeof();
    ::TYPES[93] = ::g::Fuse::Resources::ImageSourceErrorHandler_typeof();
    ::TYPES[26] = ::g::Uno::Int_typeof();
    ::TYPES[94] = ::g::Fuse::Resources::ImageSource_typeof();
    ::TYPES[95] = ::g::Fuse::Resources::ImageSourceErrorArgs_typeof();
    ::TYPES[22] = ::g::Uno::Bool_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Fuse::Triggers::IAddRemove_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Panel_type, interface7));
    type->SetFields(100,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Controls::Image, _color), 0,
        ::g::Fuse::Internal::ImageContainer_typeof(), offsetof(::g::Fuse::Controls::Image, _container), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Image, _hasScale9Margin), 0,
        ::g::Fuse::Resources::ImageSourceErrorArgs_typeof(), offsetof(::g::Fuse::Controls::Image, _lastError), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Controls::Image, _scale9Margin), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Controls::Image, ParamChanged1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Controls::Image, SourceChanged1), 0,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Image_typeof(), ::g::Fuse::Elements::Alignment_typeof()), (uintptr_t)&::g::Fuse::Controls::Image::ContentAlignmentProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Image_typeof(), ::g::Fuse::Resources::MemoryPolicy_typeof()), (uintptr_t)&::g::Fuse::Controls::Image::MemoryPolicyProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Image_typeof(), ::g::Fuse::Elements::StretchDirection_typeof()), (uintptr_t)&::g::Fuse::Controls::Image::StretchDirectionProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Image_typeof(), ::g::Fuse::Elements::StretchMode_typeof()), (uintptr_t)&::g::Fuse::Controls::Image::StretchModeProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Image_typeof(), ::g::Fuse::Elements::StretchSizing_typeof()), (uintptr_t)&::g::Fuse::Controls::Image::StretchSizingProperty_, uFieldFlagsStatic);
    type->Reflection.SetFields(5,
        new uField("ContentAlignmentProperty", 107),
        new uField("MemoryPolicyProperty", 108),
        new uField("StretchDirectionProperty", 109),
        new uField("StretchModeProperty", 110),
        new uField("StretchSizingProperty", 111));
    type->Reflection.SetFunctions(32,
        new uFunction("get_Color", NULL, (void*)Image__get_Color_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_Color", NULL, (void*)Image__set_Color_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_ContentAlignment", NULL, (void*)Image__get_ContentAlignment_fn, 0, false, ::g::Fuse::Elements::Alignment_typeof(), 0),
        new uFunction("set_ContentAlignment", NULL, (void*)Image__set_ContentAlignment_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::Alignment_typeof()),
        new uFunction("get_Density", NULL, (void*)Image__get_Density_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Density", NULL, (void*)Image__set_Density_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("add_Error", NULL, (void*)Image__add_Error_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Resources::ImageSourceErrorHandler_typeof()),
        new uFunction("remove_Error", NULL, (void*)Image__remove_Error_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Resources::ImageSourceErrorHandler_typeof()),
        new uFunction("get_File", NULL, (void*)Image__get_File_fn, 0, false, ::g::Uno::UX::FileSource_typeof(), 0),
        new uFunction("set_File", NULL, (void*)Image__set_File_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::FileSource_typeof()),
        new uFunction("get_Files", NULL, (void*)Image__get_Files_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::FileSource_typeof()), 0),
        new uFunction("get_MemoryPolicy", NULL, (void*)Image__get_MemoryPolicy_fn, 0, false, ::g::Fuse::Resources::MemoryPolicy_typeof(), 0),
        new uFunction("set_MemoryPolicy", NULL, (void*)Image__set_MemoryPolicy_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Resources::MemoryPolicy_typeof()),
        new uFunction(".ctor", NULL, (void*)Image__New2_fn, 0, true, Image_typeof(), 0),
        new uFunction("add_ParamChanged", NULL, (void*)Image__add_ParamChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_ParamChanged", NULL, (void*)Image__remove_ParamChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("get_ResampleMode", NULL, (void*)Image__get_ResampleMode_fn, 0, false, ::g::Fuse::Drawing::ResampleMode_typeof(), 0),
        new uFunction("set_ResampleMode", NULL, (void*)Image__set_ResampleMode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::ResampleMode_typeof()),
        new uFunction("get_Scale9Margin", NULL, (void*)Image__get_Scale9Margin_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_Scale9Margin", NULL, (void*)Image__set_Scale9Margin_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_Source", NULL, (void*)Image__get_Source_fn, 0, false, ::g::Fuse::Resources::ImageSource_typeof(), 0),
        new uFunction("set_Source", NULL, (void*)Image__set_Source_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Resources::ImageSource_typeof()),
        new uFunction("add_SourceChanged", NULL, (void*)Image__add_SourceChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_SourceChanged", NULL, (void*)Image__remove_SourceChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("get_StretchDirection", NULL, (void*)Image__get_StretchDirection_fn, 0, false, ::g::Fuse::Elements::StretchDirection_typeof(), 0),
        new uFunction("set_StretchDirection", NULL, (void*)Image__set_StretchDirection_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::StretchDirection_typeof()),
        new uFunction("get_StretchMode", NULL, (void*)Image__get_StretchMode_fn, 0, false, ::g::Fuse::Elements::StretchMode_typeof(), 0),
        new uFunction("set_StretchMode", NULL, (void*)Image__set_StretchMode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::StretchMode_typeof()),
        new uFunction("get_StretchSizing", NULL, (void*)Image__get_StretchSizing_fn, 0, false, ::g::Fuse::Elements::StretchSizing_typeof(), 0),
        new uFunction("set_StretchSizing", NULL, (void*)Image__set_StretchSizing_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::StretchSizing_typeof()),
        new uFunction("get_Url", NULL, (void*)Image__get_Url_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Url", NULL, (void*)Image__set_Url_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
    return type;
}

// public generated Image() :1031
void Image__ctor_4_fn(Image* __this)
{
    __this->ctor_4();
}

// public float4 get_Color() :1121
void Image__get_Color_fn(Image* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Color();
}

// public void set_Color(float4 value) :1122
void Image__set_Color_fn(Image* __this, ::g::Uno::Float4* value)
{
    __this->Color(*value);
}

// internal Fuse.Internal.ImageContainer get_Container() :1036
void Image__get_Container_fn(Image* __this, ::g::Fuse::Internal::ImageContainer** __retval)
{
    *__retval = __this->Container();
}

// public Fuse.Elements.Alignment get_ContentAlignment() :1211
void Image__get_ContentAlignment_fn(Image* __this, int* __retval)
{
    *__retval = __this->ContentAlignment();
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value) :1212
void Image__set_ContentAlignment_fn(Image* __this, int* value)
{
    __this->ContentAlignment(*value);
}

// public float get_Density() :1100
void Image__get_Density_fn(Image* __this, float* __retval)
{
    *__retval = __this->Density();
}

// public void set_Density(float value) :1101
void Image__set_Density_fn(Image* __this, float* value)
{
    __this->Density(*value);
}

// public void add_Error(Fuse.Resources.ImageSourceErrorHandler value) :1176
void Image__add_Error_fn(Image* __this, uDelegate* value)
{
    __this->add_Error(value);
}

// public void remove_Error(Fuse.Resources.ImageSourceErrorHandler value) :1177
void Image__remove_Error_fn(Image* __this, uDelegate* value)
{
    __this->remove_Error(value);
}

// public Uno.UX.FileSource get_File() :1088
void Image__get_File_fn(Image* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public void set_File(Uno.UX.FileSource value) :1089
void Image__set_File_fn(Image* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// public Uno.Collections.IList<Uno.UX.FileSource> get_Files() :1107
void Image__get_Files_fn(Image* __this, uObject** __retval)
{
    *__retval = __this->Files();
}

// private static Fuse.Elements.Alignment GetContentAlignment(Fuse.Controls.Image img) :1243
void Image__GetContentAlignment_fn(Image* img, int* __retval)
{
    *__retval = Image::GetContentAlignment(img);
}

// private static Fuse.Resources.MemoryPolicy GetMemoryPolicy(Fuse.Controls.Image img) :1219
void Image__GetMemoryPolicy_fn(Image* img, ::g::Fuse::Resources::MemoryPolicy** __retval)
{
    *__retval = Image::GetMemoryPolicy(img);
}

// private static Fuse.Elements.StretchDirection GetStretchDirection(Fuse.Controls.Image img) :1231
void Image__GetStretchDirection_fn(Image* img, int* __retval)
{
    *__retval = Image::GetStretchDirection(img);
}

// private static Fuse.Elements.StretchMode GetStretchMode(Fuse.Controls.Image img) :1225
void Image__GetStretchMode_fn(Image* img, int* __retval)
{
    *__retval = Image::GetStretchMode(img);
}

// private static Fuse.Elements.StretchSizing GetStretchSizing(Fuse.Controls.Image img) :1237
void Image__GetStretchSizing_fn(Image* img, int* __retval)
{
    *__retval = Image::GetStretchSizing(img);
}

// public Fuse.Resources.MemoryPolicy get_MemoryPolicy() :1183
void Image__get_MemoryPolicy_fn(Image* __this, ::g::Fuse::Resources::MemoryPolicy** __retval)
{
    *__retval = __this->MemoryPolicy();
}

// public void set_MemoryPolicy(Fuse.Resources.MemoryPolicy value) :1184
void Image__set_MemoryPolicy_fn(Image* __this, ::g::Fuse::Resources::MemoryPolicy* value)
{
    __this->MemoryPolicy(value);
}

// public generated Image New() :1031
void Image__New2_fn(Image** __retval)
{
    *__retval = Image::New2();
}

// private void OnContainerParamChanged(object s, object a) :1065
void Image__OnContainerParamChanged_fn(Image* __this, uObject* s, uObject* a)
{
    __this->OnContainerParamChanged(s, a);
}

// private void OnContainerSourceChanged(object s, object a) :1069
void Image__OnContainerSourceChanged_fn(Image* __this, uObject* s, uObject* a)
{
    __this->OnContainerSourceChanged(s, a);
}

// private void OnContainerSourceError(object s, Fuse.Resources.ImageSourceErrorArgs args) :1075
void Image__OnContainerSourceError_fn(Image* __this, uObject* s, ::g::Fuse::Resources::ImageSourceErrorArgs* args)
{
    __this->OnContainerSourceError(s, args);
}

// private void OnIsVisibleChanged(object s, object a) :1081
void Image__OnIsVisibleChanged1_fn(Image* __this, uObject* s, uObject* a)
{
    __this->OnIsVisibleChanged1(s, a);
}

// private void OnParamChanged() :1157
void Image__OnParamChanged_fn(Image* __this)
{
    __this->OnParamChanged();
}

// protected override sealed void OnRooted() :1039
void Image__OnRooted_fn(Image* __this)
{
    ::g::Fuse::Controls::Panel__OnRooted_fn(__this);
    __this->AddDrawCost(1.0);
    __this->add_IsVisibleChanged(uDelegate::New(::TYPES[33/*Uno.EventHandler*/], (void*)Image__OnIsVisibleChanged1_fn, __this));
    uPtr(__this->_container)->IsRooted(true);
    uPtr(__this->_container)->add_ParamChanged(uDelegate::New(::TYPES[33/*Uno.EventHandler*/], (void*)Image__OnContainerParamChanged_fn, __this));
    uPtr(__this->_container)->add_SourceChanged(uDelegate::New(::TYPES[33/*Uno.EventHandler*/], (void*)Image__OnContainerSourceChanged_fn, __this));
    uPtr(__this->_container)->add_SourceError(uDelegate::New(::TYPES[93/*Fuse.Resources.ImageSourceErrorHandler*/], (void*)Image__OnContainerSourceError_fn, __this));
}

// private void OnSourceChanged() :1164
void Image__OnSourceChanged_fn(Image* __this)
{
    __this->OnSourceChanged();
}

// protected override sealed void OnUnrooted() :1052
void Image__OnUnrooted_fn(Image* __this)
{
    __this->remove_IsVisibleChanged(uDelegate::New(::TYPES[33/*Uno.EventHandler*/], (void*)Image__OnIsVisibleChanged1_fn, __this));
    uPtr(__this->_container)->IsRooted(false);
    uPtr(__this->_container)->remove_ParamChanged(uDelegate::New(::TYPES[33/*Uno.EventHandler*/], (void*)Image__OnContainerParamChanged_fn, __this));
    uPtr(__this->_container)->remove_SourceChanged(uDelegate::New(::TYPES[33/*Uno.EventHandler*/], (void*)Image__OnContainerSourceChanged_fn, __this));
    uPtr(__this->_container)->remove_SourceError(uDelegate::New(::TYPES[93/*Fuse.Resources.ImageSourceErrorHandler*/], (void*)Image__OnContainerSourceError_fn, __this));
    __this->RemoveDrawCost(1.0);
    ::g::Fuse::Controls::Panel__OnUnrooted_fn(__this);
}

// public generated void add_ParamChanged(Uno.EventHandler value) :1156
void Image__add_ParamChanged_fn(Image* __this, uDelegate* value)
{
    __this->add_ParamChanged(value);
}

// public generated void remove_ParamChanged(Uno.EventHandler value) :1156
void Image__remove_ParamChanged_fn(Image* __this, uDelegate* value)
{
    __this->remove_ParamChanged(value);
}

// public Fuse.Drawing.ResampleMode get_ResampleMode() :1135
void Image__get_ResampleMode_fn(Image* __this, int* __retval)
{
    *__retval = __this->ResampleMode();
}

// public void set_ResampleMode(Fuse.Drawing.ResampleMode value) :1136
void Image__set_ResampleMode_fn(Image* __this, int* value)
{
    __this->ResampleMode(*value);
}

// public float4 get_Scale9Margin() :1144
void Image__get_Scale9Margin_fn(Image* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Scale9Margin();
}

// public void set_Scale9Margin(float4 value) :1145
void Image__set_Scale9Margin_fn(Image* __this, ::g::Uno::Float4* value)
{
    __this->Scale9Margin(*value);
}

// private static void SetContentAlignment(Fuse.Controls.Image img, Fuse.Elements.Alignment v) :1242
void Image__SetContentAlignment_fn(Image* img, int* v)
{
    Image::SetContentAlignment(img, *v);
}

// private static void SetMemoryPolicy(Fuse.Controls.Image img, Fuse.Resources.MemoryPolicy v) :1218
void Image__SetMemoryPolicy_fn(Image* img, ::g::Fuse::Resources::MemoryPolicy* v)
{
    Image::SetMemoryPolicy(img, v);
}

// private static void SetStretchDirection(Fuse.Controls.Image img, Fuse.Elements.StretchDirection v) :1230
void Image__SetStretchDirection_fn(Image* img, int* v)
{
    Image::SetStretchDirection(img, *v);
}

// private static void SetStretchMode(Fuse.Controls.Image img, Fuse.Elements.StretchMode v) :1224
void Image__SetStretchMode_fn(Image* img, int* v)
{
    Image::SetStretchMode(img, *v);
}

// private static void SetStretchSizing(Fuse.Controls.Image img, Fuse.Elements.StretchSizing v) :1236
void Image__SetStretchSizing_fn(Image* img, int* v)
{
    Image::SetStretchSizing(img, *v);
}

// public Fuse.Resources.ImageSource get_Source() :1113
void Image__get_Source_fn(Image* __this, ::g::Fuse::Resources::ImageSource** __retval)
{
    *__retval = __this->Source();
}

// public void set_Source(Fuse.Resources.ImageSource value) :1114
void Image__set_Source_fn(Image* __this, ::g::Fuse::Resources::ImageSource* value)
{
    __this->Source(value);
}

// public generated void add_SourceChanged(Uno.EventHandler value) :1163
void Image__add_SourceChanged_fn(Image* __this, uDelegate* value)
{
    __this->add_SourceChanged(value);
}

// public generated void remove_SourceChanged(Uno.EventHandler value) :1163
void Image__remove_SourceChanged_fn(Image* __this, uDelegate* value)
{
    __this->remove_SourceChanged(value);
}

// public Fuse.Elements.StretchDirection get_StretchDirection() :1197
void Image__get_StretchDirection_fn(Image* __this, int* __retval)
{
    *__retval = __this->StretchDirection();
}

// public void set_StretchDirection(Fuse.Elements.StretchDirection value) :1198
void Image__set_StretchDirection_fn(Image* __this, int* value)
{
    __this->StretchDirection(*value);
}

// public Fuse.Elements.StretchMode get_StretchMode() :1190
void Image__get_StretchMode_fn(Image* __this, int* __retval)
{
    *__retval = __this->StretchMode();
}

// public void set_StretchMode(Fuse.Elements.StretchMode value) :1191
void Image__set_StretchMode_fn(Image* __this, int* value)
{
    __this->StretchMode(*value);
}

// public Fuse.Elements.StretchSizing get_StretchSizing() :1204
void Image__get_StretchSizing_fn(Image* __this, int* __retval)
{
    *__retval = __this->StretchSizing();
}

// public void set_StretchSizing(Fuse.Elements.StretchSizing value) :1205
void Image__set_StretchSizing_fn(Image* __this, int* value)
{
    __this->StretchSizing(*value);
}

// private static void UpdateParam(Fuse.Controls.Image img) :1245
void Image__UpdateParam_fn(Image* img)
{
    Image::UpdateParam(img);
}

// public string get_Url() :1094
void Image__get_Url_fn(Image* __this, uString** __retval)
{
    *__retval = __this->Url();
}

// public void set_Url(string value) :1095
void Image__set_Url_fn(Image* __this, uString* value)
{
    __this->Url(value);
}

uSStrong< ::g::Fuse::StyleProperty1*> Image::ContentAlignmentProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Image::MemoryPolicyProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Image::StretchDirectionProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Image::StretchModeProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Image::StretchSizingProperty_;

// public generated Image() [instance] :1031
void Image::ctor_4()
{
    _container = ::g::Fuse::Internal::ImageContainer::New1(NULL);
    _color = ::g::Uno::Float4__New1(1.0f);
    _scale9Margin = ::g::Uno::Float4__New1(10.0f);
    ctor_3();
}

// public float4 get_Color() [instance] :1121
::g::Uno::Float4 Image::Color()
{
    return _color;
}

// public void set_Color(float4 value) [instance] :1122
void Image::Color(::g::Uno::Float4 value)
{
    if (::g::Uno::Float4::op_Inequality(_color, value))
    {
        _color = value;
        OnParamChanged();
    }
}

// internal Fuse.Internal.ImageContainer get_Container() [instance] :1036
::g::Fuse::Internal::ImageContainer* Image::Container()
{
    return _container;
}

// public Fuse.Elements.Alignment get_ContentAlignment() [instance] :1211
int Image::ContentAlignment()
{
    int ret7;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Image::ContentAlignmentProperty()), this, &ret7), ret7);
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value) [instance] :1212
void Image::ContentAlignment(int value)
{
    bool ret8;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Image::ContentAlignmentProperty()), this, uCRef<int>(value), &ret8);
}

// public float get_Density() [instance] :1100
float Image::Density()
{
    return uPtr(_container)->Density();
}

// public void set_Density(float value) [instance] :1101
void Image::Density(float value)
{
    uPtr(_container)->Density(value);
}

// public void add_Error(Fuse.Resources.ImageSourceErrorHandler value) [instance] :1176
void Image::add_Error(uDelegate* value)
{
    uPtr(_container)->add_SourceError(value);
}

// public void remove_Error(Fuse.Resources.ImageSourceErrorHandler value) [instance] :1177
void Image::remove_Error(uDelegate* value)
{
    uPtr(_container)->remove_SourceError(value);
}

// public Uno.UX.FileSource get_File() [instance] :1088
::g::Uno::UX::FileSource* Image::File()
{
    return uPtr(_container)->File();
}

// public void set_File(Uno.UX.FileSource value) [instance] :1089
void Image::File(::g::Uno::UX::FileSource* value)
{
    uPtr(_container)->File(value);
}

// public Uno.Collections.IList<Uno.UX.FileSource> get_Files() [instance] :1107
uObject* Image::Files()
{
    return uPtr(_container)->Files();
}

// public Fuse.Resources.MemoryPolicy get_MemoryPolicy() [instance] :1183
::g::Fuse::Resources::MemoryPolicy* Image::MemoryPolicy()
{
    ::g::Fuse::Resources::MemoryPolicy* ret9;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Image::MemoryPolicyProperty()), this, &ret9), ret9);
}

// public void set_MemoryPolicy(Fuse.Resources.MemoryPolicy value) [instance] :1184
void Image::MemoryPolicy(::g::Fuse::Resources::MemoryPolicy* value)
{
    bool ret10;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Image::MemoryPolicyProperty()), this, value, &ret10);
}

// private void OnContainerParamChanged(object s, object a) [instance] :1065
void Image::OnContainerParamChanged(uObject* s, uObject* a)
{
    OnParamChanged();
}

// private void OnContainerSourceChanged(object s, object a) [instance] :1069
void Image::OnContainerSourceChanged(uObject* s, uObject* a)
{
    OnSourceChanged();
}

// private void OnContainerSourceError(object s, Fuse.Resources.ImageSourceErrorArgs args) [instance] :1075
void Image::OnContainerSourceError(uObject* s, ::g::Fuse::Resources::ImageSourceErrorArgs* args)
{
    _lastError = args;
    OnSourceChanged();
}

// private void OnIsVisibleChanged(object s, object a) [instance] :1081
void Image::OnIsVisibleChanged1(uObject* s, uObject* a)
{
    uPtr(_container)->IsVisible(IsVisible());
}

// private void OnParamChanged() [instance] :1157
void Image::OnParamChanged()
{
    if (::g::Uno::Delegate::op_Inequality(ParamChanged1, NULL))
        uPtr(ParamChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private void OnSourceChanged() [instance] :1164
void Image::OnSourceChanged()
{
    ::g::Fuse::Triggers::WhileFailed::SetState(this, uPtr(uPtr(_container)->Source())->State() == 3, (_lastError == NULL) ? ::STRINGS[3/*"unknown fai...*/] : (uString*)uPtr(_lastError)->Reason);
    ::g::Fuse::Triggers::WhileLoading::SetState(this, uPtr(uPtr(_container)->Source())->State() == 2);

    if (::g::Uno::Delegate::op_Inequality(SourceChanged1, NULL))
        uPtr(SourceChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// public generated void add_ParamChanged(Uno.EventHandler value) [instance] :1156
void Image::add_ParamChanged(uDelegate* value)
{
    ParamChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ParamChanged1, value), ::TYPES[33/*Uno.EventHandler*/]);
}

// public generated void remove_ParamChanged(Uno.EventHandler value) [instance] :1156
void Image::remove_ParamChanged(uDelegate* value)
{
    ParamChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ParamChanged1, value), ::TYPES[33/*Uno.EventHandler*/]);
}

// public Fuse.Drawing.ResampleMode get_ResampleMode() [instance] :1135
int Image::ResampleMode()
{
    return uPtr(_container)->ResampleMode();
}

// public void set_ResampleMode(Fuse.Drawing.ResampleMode value) [instance] :1136
void Image::ResampleMode(int value)
{
    uPtr(_container)->ResampleMode(value);
}

// public float4 get_Scale9Margin() [instance] :1144
::g::Uno::Float4 Image::Scale9Margin()
{
    return _scale9Margin;
}

// public void set_Scale9Margin(float4 value) [instance] :1145
void Image::Scale9Margin(::g::Uno::Float4 value)
{
    if (!_hasScale9Margin || ::g::Uno::Float4::op_Inequality(_scale9Margin, value))
    {
        _scale9Margin = value;
        _hasScale9Margin = true;
        OnParamChanged();
    }
}

// public Fuse.Resources.ImageSource get_Source() [instance] :1113
::g::Fuse::Resources::ImageSource* Image::Source()
{
    return uPtr(_container)->Source();
}

// public void set_Source(Fuse.Resources.ImageSource value) [instance] :1114
void Image::Source(::g::Fuse::Resources::ImageSource* value)
{
    uPtr(_container)->Source(value);
}

// public generated void add_SourceChanged(Uno.EventHandler value) [instance] :1163
void Image::add_SourceChanged(uDelegate* value)
{
    SourceChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(SourceChanged1, value), ::TYPES[33/*Uno.EventHandler*/]);
}

// public generated void remove_SourceChanged(Uno.EventHandler value) [instance] :1163
void Image::remove_SourceChanged(uDelegate* value)
{
    SourceChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(SourceChanged1, value), ::TYPES[33/*Uno.EventHandler*/]);
}

// public Fuse.Elements.StretchDirection get_StretchDirection() [instance] :1197
int Image::StretchDirection()
{
    int ret11;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Image::StretchDirectionProperty()), this, &ret11), ret11);
}

// public void set_StretchDirection(Fuse.Elements.StretchDirection value) [instance] :1198
void Image::StretchDirection(int value)
{
    bool ret12;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Image::StretchDirectionProperty()), this, uCRef<int>(value), &ret12);
}

// public Fuse.Elements.StretchMode get_StretchMode() [instance] :1190
int Image::StretchMode()
{
    int ret13;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Image::StretchModeProperty()), this, &ret13), ret13);
}

// public void set_StretchMode(Fuse.Elements.StretchMode value) [instance] :1191
void Image::StretchMode(int value)
{
    bool ret14;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Image::StretchModeProperty()), this, uCRef<int>(value), &ret14);
}

// public Fuse.Elements.StretchSizing get_StretchSizing() [instance] :1204
int Image::StretchSizing()
{
    int ret15;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Image::StretchSizingProperty()), this, &ret15), ret15);
}

// public void set_StretchSizing(Fuse.Elements.StretchSizing value) [instance] :1205
void Image::StretchSizing(int value)
{
    bool ret16;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Image::StretchSizingProperty()), this, uCRef<int>(value), &ret16);
}

// public string get_Url() [instance] :1094
uString* Image::Url()
{
    return uPtr(_container)->Url();
}

// public void set_Url(string value) [instance] :1095
void Image::Url(uString* value)
{
    uPtr(_container)->Url(value);
}

// private static Fuse.Elements.Alignment GetContentAlignment(Fuse.Controls.Image img) [static] :1243
int Image::GetContentAlignment(Image* img)
{
    Image_typeof()->Init();
    return uPtr(uPtr(img)->_container)->ContentAlignment();
}

// private static Fuse.Resources.MemoryPolicy GetMemoryPolicy(Fuse.Controls.Image img) [static] :1219
::g::Fuse::Resources::MemoryPolicy* Image::GetMemoryPolicy(Image* img)
{
    Image_typeof()->Init();
    return uPtr(uPtr(img)->_container)->MemoryPolicy();
}

// private static Fuse.Elements.StretchDirection GetStretchDirection(Fuse.Controls.Image img) [static] :1231
int Image::GetStretchDirection(Image* img)
{
    Image_typeof()->Init();
    return uPtr(uPtr(img)->_container)->StretchDirection();
}

// private static Fuse.Elements.StretchMode GetStretchMode(Fuse.Controls.Image img) [static] :1225
int Image::GetStretchMode(Image* img)
{
    Image_typeof()->Init();
    return uPtr(uPtr(img)->_container)->StretchMode();
}

// private static Fuse.Elements.StretchSizing GetStretchSizing(Fuse.Controls.Image img) [static] :1237
int Image::GetStretchSizing(Image* img)
{
    Image_typeof()->Init();
    return uPtr(uPtr(img)->_container)->StretchSizing();
}

// public generated Image New() [static] :1031
Image* Image::New2()
{
    Image* obj1 = (Image*)uNew(Image_typeof());
    obj1->ctor_4();
    return obj1;
}

// private static void SetContentAlignment(Fuse.Controls.Image img, Fuse.Elements.Alignment v) [static] :1242
void Image::SetContentAlignment(Image* img, int v)
{
    Image_typeof()->Init();
    uPtr(uPtr(img)->_container)->ContentAlignment(v);
}

// private static void SetMemoryPolicy(Fuse.Controls.Image img, Fuse.Resources.MemoryPolicy v) [static] :1218
void Image::SetMemoryPolicy(Image* img, ::g::Fuse::Resources::MemoryPolicy* v)
{
    Image_typeof()->Init();
    uPtr(uPtr(img)->_container)->MemoryPolicy(v);
}

// private static void SetStretchDirection(Fuse.Controls.Image img, Fuse.Elements.StretchDirection v) [static] :1230
void Image::SetStretchDirection(Image* img, int v)
{
    Image_typeof()->Init();
    uPtr(uPtr(img)->_container)->StretchDirection(v);
}

// private static void SetStretchMode(Fuse.Controls.Image img, Fuse.Elements.StretchMode v) [static] :1224
void Image::SetStretchMode(Image* img, int v)
{
    Image_typeof()->Init();
    uPtr(uPtr(img)->_container)->StretchMode(v);
}

// private static void SetStretchSizing(Fuse.Controls.Image img, Fuse.Elements.StretchSizing v) [static] :1236
void Image::SetStretchSizing(Image* img, int v)
{
    Image_typeof()->Init();
    uPtr(uPtr(img)->_container)->StretchSizing(v);
}

// private static void UpdateParam(Fuse.Controls.Image img) [static] :1245
void Image::UpdateParam(Image* img)
{
    Image_typeof()->Init();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\WebView\$.uno(18)
// ------------------------------------------------------------------

// public abstract interface ISourceReceiver :18
// {
uInterfaceType* ISourceReceiver_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.ISourceReceiver", 0, 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_Source", NULL, NULL, offsetof(ISourceReceiver, fp_get_Source), false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Source", NULL, NULL, offsetof(ISourceReceiver, fp_set_Source), false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\WebView\$.uno(23)
// ------------------------------------------------------------------

// public abstract interface IWebView :23
// {
uInterfaceType* IWebView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.IWebView", 0, 0);
    type->Reflection.SetFunctions(18,
        new uFunction("get_BaseUrl", NULL, NULL, offsetof(IWebView, fp_get_BaseUrl), false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_BaseUrl", NULL, NULL, offsetof(IWebView, fp_set_BaseUrl), false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("add_BeginLoading", NULL, NULL, offsetof(IWebView, fp_add_BeginLoading), false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_BeginLoading", NULL, NULL, offsetof(IWebView, fp_remove_BeginLoading), false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("get_DocumentTitle", NULL, NULL, offsetof(IWebView, fp_get_DocumentTitle), false, ::g::Uno::String_typeof(), 0),
        new uFunction("Eval", NULL, NULL, offsetof(IWebView, fp_Eval), false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("Eval", NULL, NULL, offsetof(IWebView, fp_Eval1), false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof())),
        new uFunction("get_File", NULL, NULL, offsetof(IWebView, fp_get_File), false, ::g::Uno::UX::FileSource_typeof(), 0),
        new uFunction("set_File", NULL, NULL, offsetof(IWebView, fp_set_File), false, uVoid_typeof(), 1, ::g::Uno::UX::FileSource_typeof()),
        new uFunction("LoadHtml", NULL, NULL, offsetof(IWebView, fp_LoadHtml), false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("LoadHtml", NULL, NULL, offsetof(IWebView, fp_LoadHtml1), false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("LoadUrl", NULL, NULL, offsetof(IWebView, fp_LoadUrl), false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("add_PageLoaded", NULL, NULL, offsetof(IWebView, fp_add_PageLoaded), false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_PageLoaded", NULL, NULL, offsetof(IWebView, fp_remove_PageLoaded), false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("Reload", NULL, NULL, offsetof(IWebView, fp_Reload), false, uVoid_typeof(), 0),
        new uFunction("Stop", NULL, NULL, offsetof(IWebView, fp_Stop), false, uVoid_typeof(), 0),
        new uFunction("get_Url", NULL, NULL, offsetof(IWebView, fp_get_Url), false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Url", NULL, NULL, offsetof(IWebView, fp_set_Url), false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\WebView\$.uno(274)
// -------------------------------------------------------------------

// internal sealed class JavaScriptCall :274
// {
JavaScriptCall_type* JavaScriptCall_typeof()
{
    static uSStrong<JavaScriptCall_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(JavaScriptCall);
    options.TypeSize = sizeof(JavaScriptCall_type);
    type = (JavaScriptCall_type*)uClassType::New("Fuse.Controls.JavaScriptCall", options);
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*))JavaScriptCall__Apply_fn;
    ::TYPES[17] = ::g::Uno::Delegate_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::BufferedWebViewCall_typeof(), offsetof(JavaScriptCall_type, interface0));
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Fuse::Controls::JavaScriptCall, Handler), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Controls::JavaScriptCall, Script), 0);
    return type;
}

// public JavaScriptCall(string script, Uno.Action<string> handler) :279
void JavaScriptCall__ctor__fn(JavaScriptCall* __this, uString* script, uDelegate* handler)
{
    __this->ctor_(script, handler);
}

// public void Apply(Fuse.Controls.IWebView wv) :285
void JavaScriptCall__Apply_fn(JavaScriptCall* __this, uObject* wv)
{
    __this->Apply(wv);
}

// public JavaScriptCall New(string script, Uno.Action<string> handler) :279
void JavaScriptCall__New1_fn(uString* script, uDelegate* handler, JavaScriptCall** __retval)
{
    *__retval = JavaScriptCall::New1(script, handler);
}

// public JavaScriptCall(string script, Uno.Action<string> handler) [instance] :279
void JavaScriptCall::ctor_(uString* script, uDelegate* handler)
{
    Script = script;
    Handler = handler;
}

// public void Apply(Fuse.Controls.IWebView wv) [instance] :285
void JavaScriptCall::Apply(uObject* wv)
{
    if (::g::Uno::Delegate::op_Inequality(Handler, NULL))
        ::g::Fuse::Controls::IWebView::Eval1(uInterface(uPtr(wv), ::TYPES[232/*Fuse.Controls.IWebView*/]), Script, Handler);
    else
        ::g::Fuse::Controls::IWebView::Eval(uInterface(uPtr(wv), ::TYPES[232/*Fuse.Controls.IWebView*/]), Script);
}

// public JavaScriptCall New(string script, Uno.Action<string> handler) [static] :279
JavaScriptCall* JavaScriptCall::New1(uString* script, uDelegate* handler)
{
    JavaScriptCall* obj1 = (JavaScriptCall*)uNew(JavaScriptCall_typeof());
    obj1->ctor_(script, handler);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(1262)
// ------------------------------------------------------------

// public static class KeyframeAccessors :1262
// {
uClassType* KeyframeAccessors_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.KeyframeAccessors", options);
    ::TYPES[96] = ::g::Fuse::Elements::Visibility_typeof();
    ::TYPES[97] = ::g::Fuse::Animations::Keyframe_typeof();
    ::TYPES[19] = uObject_typeof();
    type->Reflection.SetFunctions(2,
        new uFunction("SetVisibility", NULL, (void*)KeyframeAccessors__SetVisibility_fn, 0, true, ::g::Fuse::Elements::Visibility_typeof(), 1, ::g::Fuse::Animations::Keyframe_typeof()),
        new uFunction("SetVisibility", NULL, (void*)KeyframeAccessors__SetVisibility1_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Animations::Keyframe_typeof(), ::g::Fuse::Elements::Visibility_typeof()));
    return type;
}

// public static Fuse.Elements.Visibility SetVisibility(Fuse.Animations.Keyframe kf) :1271
void KeyframeAccessors__SetVisibility_fn(::g::Fuse::Animations::Keyframe* kf, int* __retval)
{
    *__retval = KeyframeAccessors::SetVisibility(kf);
}

// public static void SetVisibility(Fuse.Animations.Keyframe kf, Fuse.Elements.Visibility v) :1265
void KeyframeAccessors__SetVisibility1_fn(::g::Fuse::Animations::Keyframe* kf, int* v)
{
    KeyframeAccessors::SetVisibility1(kf, *v);
}

// public static Fuse.Elements.Visibility SetVisibility(Fuse.Animations.Keyframe kf) [static] :1271
int KeyframeAccessors::SetVisibility(::g::Fuse::Animations::Keyframe* kf)
{
    return uUnbox<int>(::TYPES[96/*Fuse.Elements.Visibility*/], uPtr(kf)->ObjectValue());
}

// public static void SetVisibility(Fuse.Animations.Keyframe kf, Fuse.Elements.Visibility v) [static] :1265
void KeyframeAccessors::SetVisibility1(::g::Fuse::Animations::Keyframe* kf, int v)
{
    uPtr(kf)->ObjectValue(uBox<int>(::TYPES[96/*Fuse.Elements.Visibility*/], v));
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\WebView\$.uno(259)
// -------------------------------------------------------------------

// internal sealed class LoadHtmlCall :259
// {
LoadHtmlCall_type* LoadHtmlCall_typeof()
{
    static uSStrong<LoadHtmlCall_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LoadHtmlCall);
    options.TypeSize = sizeof(LoadHtmlCall_type);
    type = (LoadHtmlCall_type*)uClassType::New("Fuse.Controls.LoadHtmlCall", options);
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*))LoadHtmlCall__Apply_fn;
    type->SetInterfaces(
        ::g::Fuse::Controls::BufferedWebViewCall_typeof(), offsetof(LoadHtmlCall_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Controls::LoadHtmlCall, baseUrl), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Controls::LoadHtmlCall, html), 0);
    return type;
}

// public LoadHtmlCall(string html, string baseUrl) :263
void LoadHtmlCall__ctor__fn(LoadHtmlCall* __this, uString* html1, uString* baseUrl1)
{
    __this->ctor_(html1, baseUrl1);
}

// public void Apply(Fuse.Controls.IWebView wv) :268
void LoadHtmlCall__Apply_fn(LoadHtmlCall* __this, uObject* wv)
{
    __this->Apply(wv);
}

// public LoadHtmlCall New(string html, string baseUrl) :263
void LoadHtmlCall__New1_fn(uString* html1, uString* baseUrl1, LoadHtmlCall** __retval)
{
    *__retval = LoadHtmlCall::New1(html1, baseUrl1);
}

// public LoadHtmlCall(string html, string baseUrl) [instance] :263
void LoadHtmlCall::ctor_(uString* html1, uString* baseUrl1)
{
    html = html1;
    baseUrl = baseUrl1;
}

// public void Apply(Fuse.Controls.IWebView wv) [instance] :268
void LoadHtmlCall::Apply(uObject* wv)
{
    ::g::Fuse::Controls::IWebView::LoadHtml1(uInterface(uPtr(wv), ::TYPES[232/*Fuse.Controls.IWebView*/]), html, baseUrl);
}

// public LoadHtmlCall New(string html, string baseUrl) [static] :263
LoadHtmlCall* LoadHtmlCall::New1(uString* html1, uString* baseUrl1)
{
    LoadHtmlCall* obj1 = (LoadHtmlCall*)uNew(LoadHtmlCall_typeof());
    obj1->ctor_(html1, baseUrl1);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(1292)
// ------------------------------------------------------------

// public sealed class MapView :1292
// {
::g::Fuse::Controls::Panel_type* MapView_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 100;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(MapView);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Fuse.Controls.MapView", options);
    type->SetBase(::g::Fuse::Controls::Panel_typeof());
    type->fp_ctor_ = (void*)MapView__New2_fn;
    type->interface6.fp_AddChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChild_fn;
    type->interface6.fp_AddChildAt = (void(*)(uObject*, int*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChildAt_fn;
    type->interface6.fp_RemoveChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_RemoveChild_fn;
    type->interface6.fp_GetChild = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_GetChild_fn;
    type->interface7.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Add_fn;
    type->interface7.fp_Remove = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Remove_fn;
    type->interface6.fp_get_ChildCount = (void(*)(uObject*, int*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_get_ChildCount_fn;
    type->interface6.fp_get_Children = (void(*)(uObject*, uObject**))::g::Fuse::Controls::Panel__get_Children_fn;
    type->interface6.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__get_ActualSize_fn;
    type->interface6.fp_get_HasChildren = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__get_HasChildren_fn;
    type->interface6.fp_add_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildAdded_fn;
    type->interface6.fp_remove_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildAdded_fn;
    type->interface6.fp_add_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildRemoved_fn;
    type->interface6.fp_remove_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildRemoved_fn;
    type->interface6.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface6.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_add_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__add_Update_fn;
    type->interface6.fp_remove_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__remove_Update_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Fuse::Triggers::IAddRemove_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Panel_type, interface7));
    type->SetFields(100);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MapView__New2_fn, 0, true, MapView_typeof(), 0));
    return type;
}

// public generated MapView() :1292
void MapView__ctor_4_fn(MapView* __this)
{
    __this->ctor_4();
}

// public generated MapView New() :1292
void MapView__New2_fn(MapView** __retval)
{
    *__retval = MapView::New2();
}

// public generated MapView() [instance] :1292
void MapView::ctor_4()
{
    ctor_3();
}

// public generated MapView New() [static] :1292
MapView* MapView::New2()
{
    MapView* obj1 = (MapView*)uNew(MapView_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(1310)
// ------------------------------------------------------------

// public sealed class MultiLayout :1310
// {
::g::Fuse::Behavior_type* MultiLayout_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(MultiLayout);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.Controls.MultiLayout", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_ctor_ = (void*)MultiLayout__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))MultiLayout__OnRooted_fn;
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[98] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Behavior_typeof());
    ::TYPES[99] = ::g::Fuse::Controls::Placeholder_typeof();
    type->SetFields(3,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Controls::MultiLayout, _layoutElement), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_LayoutElement", NULL, (void*)MultiLayout__get_LayoutElement_fn, 0, false, ::g::Fuse::Elements::Element_typeof(), 0),
        new uFunction("set_LayoutElement", NULL, (void*)MultiLayout__set_LayoutElement_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::Element_typeof()),
        new uFunction(".ctor", NULL, (void*)MultiLayout__New1_fn, 0, true, MultiLayout_typeof(), 0));
    return type;
}

// public generated MultiLayout() :1310
void MultiLayout__ctor_1_fn(MultiLayout* __this)
{
    __this->ctor_1();
}

// private void ChangeLayout(Fuse.Node layoutRoot) :1319
void MultiLayout__ChangeLayout_fn(MultiLayout* __this, ::g::Fuse::Node* layoutRoot)
{
    __this->ChangeLayout(layoutRoot);
}

// public Fuse.Elements.Element get_LayoutElement() :1342
void MultiLayout__get_LayoutElement_fn(MultiLayout* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->LayoutElement();
}

// public void set_LayoutElement(Fuse.Elements.Element value) :1346
void MultiLayout__set_LayoutElement_fn(MultiLayout* __this, ::g::Fuse::Elements::Element* value)
{
    __this->LayoutElement(value);
}

// public generated MultiLayout New() :1310
void MultiLayout__New1_fn(MultiLayout** __retval)
{
    *__retval = MultiLayout::New1();
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1312
void MultiLayout__OnRooted_fn(MultiLayout* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    __this->ChangeLayout(__this->_layoutElement);
}

// public generated MultiLayout() [instance] :1310
void MultiLayout::ctor_1()
{
    ctor_();
}

// private void ChangeLayout(Fuse.Node layoutRoot) [instance] :1319
void MultiLayout::ChangeLayout(::g::Fuse::Node* layoutRoot)
{
    ::g::Fuse::Behavior* ret3;

    if (layoutRoot == NULL)
        return;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(layoutRoot)->Behaviors()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[7/*Fuse.Behavior*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Fuse::Behavior* b = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[98/*Uno.Collections.IEnumerator<Fuse.Behavior>*/]), &ret3), ret3);

        if (uIs(b, MultiLayout_typeof()))
            return;
    }

    if (uIs(layoutRoot, ::TYPES[99/*Fuse.Controls.Placeholder*/]))
        uPtr(uCast< ::g::Fuse::Controls::Placeholder*>(layoutRoot, ::TYPES[99/*Fuse.Controls.Placeholder*/]))->AcquireTarget();

    for (int i = 0; i < layoutRoot->SubNodeCount(); i++)
        ChangeLayout(uPtr(layoutRoot)->GetSubNode(i));
}

// public Fuse.Elements.Element get_LayoutElement() [instance] :1342
::g::Fuse::Elements::Element* MultiLayout::LayoutElement()
{
    return _layoutElement;
}

// public void set_LayoutElement(Fuse.Elements.Element value) [instance] :1346
void MultiLayout::LayoutElement(::g::Fuse::Elements::Element* value)
{
    if (_layoutElement != value)
    {
        _layoutElement = value;
        ChangeLayout(_layoutElement);
    }
}

// public generated MultiLayout New() [static] :1310
MultiLayout* MultiLayout::New1()
{
    MultiLayout* obj2 = (MultiLayout*)uNew(MultiLayout_typeof());
    obj2->ctor_1();
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(1357)
// ------------------------------------------------------------

// public sealed class MultiLayoutPanel :1357
// {
::g::Fuse::Controls::Panel_type* MultiLayoutPanel_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 101;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(MultiLayoutPanel);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Fuse.Controls.MultiLayoutPanel", options);
    type->SetBase(::g::Fuse::Controls::Panel_typeof());
    type->fp_ctor_ = (void*)MultiLayoutPanel__New2_fn;
    type->interface6.fp_AddChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChild_fn;
    type->interface6.fp_AddChildAt = (void(*)(uObject*, int*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChildAt_fn;
    type->interface6.fp_RemoveChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_RemoveChild_fn;
    type->interface6.fp_GetChild = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_GetChild_fn;
    type->interface7.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Add_fn;
    type->interface7.fp_Remove = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Remove_fn;
    type->interface6.fp_get_ChildCount = (void(*)(uObject*, int*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_get_ChildCount_fn;
    type->interface6.fp_get_Children = (void(*)(uObject*, uObject**))::g::Fuse::Controls::Panel__get_Children_fn;
    type->interface6.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__get_ActualSize_fn;
    type->interface6.fp_get_HasChildren = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__get_HasChildren_fn;
    type->interface6.fp_add_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildAdded_fn;
    type->interface6.fp_remove_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildAdded_fn;
    type->interface6.fp_add_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildRemoved_fn;
    type->interface6.fp_remove_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildRemoved_fn;
    type->interface6.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface6.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_add_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__add_Update_fn;
    type->interface6.fp_remove_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__remove_Update_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    ::TYPES[100] = ::g::Fuse::Controls::MultiLayout_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Fuse::Triggers::IAddRemove_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Panel_type, interface7));
    type->SetFields(100,
        ::g::Fuse::Controls::MultiLayout_typeof(), offsetof(::g::Fuse::Controls::MultiLayoutPanel, _multiLayout), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_LayoutElement", NULL, (void*)MultiLayoutPanel__get_LayoutElement_fn, 0, false, ::g::Fuse::Elements::Element_typeof(), 0),
        new uFunction("set_LayoutElement", NULL, (void*)MultiLayoutPanel__set_LayoutElement_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::Element_typeof()),
        new uFunction(".ctor", NULL, (void*)MultiLayoutPanel__New2_fn, 0, true, MultiLayoutPanel_typeof(), 0));
    return type;
}

// public MultiLayoutPanel() :1360
void MultiLayoutPanel__ctor_4_fn(MultiLayoutPanel* __this)
{
    __this->ctor_4();
}

// public Fuse.Elements.Element get_LayoutElement() :1367
void MultiLayoutPanel__get_LayoutElement_fn(MultiLayoutPanel* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->LayoutElement();
}

// public void set_LayoutElement(Fuse.Elements.Element value) :1368
void MultiLayoutPanel__set_LayoutElement_fn(MultiLayoutPanel* __this, ::g::Fuse::Elements::Element* value)
{
    __this->LayoutElement(value);
}

// public MultiLayoutPanel New() :1360
void MultiLayoutPanel__New2_fn(MultiLayoutPanel** __retval)
{
    *__retval = MultiLayoutPanel::New2();
}

// public MultiLayoutPanel() [instance] :1360
void MultiLayoutPanel::ctor_4()
{
    _multiLayout = ::g::Fuse::Controls::MultiLayout::New1();
    ctor_3();
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Behavior*/])), _multiLayout);
}

// public Fuse.Elements.Element get_LayoutElement() [instance] :1367
::g::Fuse::Elements::Element* MultiLayoutPanel::LayoutElement()
{
    return uPtr(_multiLayout)->LayoutElement();
}

// public void set_LayoutElement(Fuse.Elements.Element value) [instance] :1368
void MultiLayoutPanel::LayoutElement(::g::Fuse::Elements::Element* value)
{
    uPtr(_multiLayout)->LayoutElement(value);
}

// public MultiLayoutPanel New() [static] :1360
MultiLayoutPanel* MultiLayoutPanel::New2()
{
    MultiLayoutPanel* obj1 = (MultiLayoutPanel*)uNew(MultiLayoutPanel_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(1444)
// ------------------------------------------------------------

// public sealed class NativeViewHost :1444
// {
::g::Fuse::Controls::Panel_type* NativeViewHost_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 100;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(NativeViewHost);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Fuse.Controls.NativeViewHost", options);
    type->SetBase(::g::Fuse::Controls::Panel_typeof());
    type->fp_ctor_ = (void*)NativeViewHost__New2_fn;
    type->fp_OnApplyStyle = (void(*)(::g::Fuse::Node*, uObject*))NativeViewHost__OnApplyStyle_fn;
    type->interface6.fp_AddChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChild_fn;
    type->interface6.fp_AddChildAt = (void(*)(uObject*, int*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChildAt_fn;
    type->interface6.fp_RemoveChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_RemoveChild_fn;
    type->interface6.fp_GetChild = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_GetChild_fn;
    type->interface7.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Add_fn;
    type->interface7.fp_Remove = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Remove_fn;
    type->interface6.fp_get_ChildCount = (void(*)(uObject*, int*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_get_ChildCount_fn;
    type->interface6.fp_get_Children = (void(*)(uObject*, uObject**))::g::Fuse::Controls::Panel__get_Children_fn;
    type->interface6.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__get_ActualSize_fn;
    type->interface6.fp_get_HasChildren = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__get_HasChildren_fn;
    type->interface6.fp_add_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildAdded_fn;
    type->interface6.fp_remove_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildAdded_fn;
    type->interface6.fp_add_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildRemoved_fn;
    type->interface6.fp_remove_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildRemoved_fn;
    type->interface6.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface6.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_add_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__add_Update_fn;
    type->interface6.fp_remove_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__remove_Update_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::TYPES[66] = ::g::Fuse::AppBase_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Fuse::Triggers::IAddRemove_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Panel_type, interface7));
    type->SetFields(100);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NativeViewHost__New2_fn, 0, true, NativeViewHost_typeof(), 0));
    return type;
}

// public generated NativeViewHost() :1444
void NativeViewHost__ctor_4_fn(NativeViewHost* __this)
{
    __this->ctor_4();
}

// public generated NativeViewHost New() :1444
void NativeViewHost__New2_fn(NativeViewHost** __retval)
{
    *__retval = NativeViewHost::New2();
}

// protected override sealed void OnApplyStyle(object target) :1446
void NativeViewHost__OnApplyStyle_fn(NativeViewHost* __this, uObject* target)
{
    uPtr(uPtr(::g::Fuse::AppBase::Current1())->NativeStyle())->Apply(target);
    __this->ApplyLocalStyles(target);
}

// public generated NativeViewHost() [instance] :1444
void NativeViewHost::ctor_4()
{
    ctor_3();
}

// public generated NativeViewHost New() [static] :1444
NativeViewHost* NativeViewHost::New2()
{
    NativeViewHost* obj1 = (NativeViewHost*)uNew(NativeViewHost_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(1468)
// ------------------------------------------------------------

// public sealed class NavigationBar :1468
// {
::g::Fuse::Controls::Panel_type* NavigationBar_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 100;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(NavigationBar);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Fuse.Controls.NavigationBar", options);
    type->SetBase(::g::Fuse::Controls::Panel_typeof());
    type->fp_ctor_ = (void*)NavigationBar__New2_fn;
    type->interface6.fp_AddChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChild_fn;
    type->interface6.fp_AddChildAt = (void(*)(uObject*, int*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChildAt_fn;
    type->interface6.fp_RemoveChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_RemoveChild_fn;
    type->interface6.fp_GetChild = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_GetChild_fn;
    type->interface7.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Add_fn;
    type->interface7.fp_Remove = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Remove_fn;
    type->interface6.fp_get_ChildCount = (void(*)(uObject*, int*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_get_ChildCount_fn;
    type->interface6.fp_get_Children = (void(*)(uObject*, uObject**))::g::Fuse::Controls::Panel__get_Children_fn;
    type->interface6.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__get_ActualSize_fn;
    type->interface6.fp_get_HasChildren = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__get_HasChildren_fn;
    type->interface6.fp_add_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildAdded_fn;
    type->interface6.fp_remove_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildAdded_fn;
    type->interface6.fp_add_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildRemoved_fn;
    type->interface6.fp_remove_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildRemoved_fn;
    type->interface6.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface6.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_add_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__add_Update_fn;
    type->interface6.fp_remove_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__remove_Update_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Fuse::Triggers::IAddRemove_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Panel_type, interface7));
    type->SetFields(100);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NavigationBar__New2_fn, 0, true, NavigationBar_typeof(), 0));
    return type;
}

// public generated NavigationBar() :1468
void NavigationBar__ctor_4_fn(NavigationBar* __this)
{
    __this->ctor_4();
}

// public generated NavigationBar New() :1468
void NavigationBar__New2_fn(NavigationBar** __retval)
{
    *__retval = NavigationBar::New2();
}

// public generated NavigationBar() [instance] :1468
void NavigationBar::ctor_4()
{
    ctor_3();
}

// public generated NavigationBar New() [static] :1468
NavigationBar* NavigationBar::New2()
{
    NavigationBar* obj1 = (NavigationBar*)uNew(NavigationBar_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(1484)
// ------------------------------------------------------------

// public sealed class Number :1484
// {
// static Number() :1484
static void Number__cctor_4_fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret2;
    ::g::Fuse::StyleProperty1* ret3;
    ::g::Fuse::StyleProperty1* ret4;
    Number::FormatProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[101/*Fuse.StyleProperty<Fuse.Controls.Number, string>*/], ::STRINGS[4/*"F0"*/], uDelegate::New(::TYPES[102/*Uno.Action<Fuse.Controls.Number>*/], (void*)Number__FormatChanged_fn), &ret2), ret2);
    Number::FormatStringProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[101/*Fuse.StyleProperty<Fuse.Controls.Number, string>*/], ::STRINGS[5/*"{0:F0}"*/], uDelegate::New(::TYPES[102/*Uno.Action<Fuse.Controls.Number>*/], (void*)Number__FormatChanged_fn), &ret3), ret3);
    Number::ValueProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[103/*Fuse.StyleProperty<Fuse.Controls.Number, float>*/], uCRef(0.0f), uDelegate::New(::TYPES[102/*Uno.Action<Fuse.Controls.Number>*/], (void*)Number__StaticValueChanged_fn), &ret4), ret4);
}

Number_type* Number_typeof()
{
    static uSStrong<Number_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 105;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(Number);
    options.TypeSize = sizeof(Number_type);
    type = (Number_type*)uClassType::New("Fuse.Controls.Number", options);
    type->SetBase(::g::Fuse::Controls::Panel_typeof());
    type->fp_ctor_ = (void*)Number__New2_fn;
    type->fp_cctor_ = Number__cctor_4_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Number__OnRooted_fn;
    type->interface8.fp_get_Value = (void(*)(uObject*, uTRef))Number__get_Value_fn;
    type->interface8.fp_set_Value = (void(*)(uObject*, void*))Number__set_Value_fn;
    type->interface8.fp_add_ValueChanged = (void(*)(uObject*, uDelegate*))Number__add_ValueChanged_fn;
    type->interface8.fp_remove_ValueChanged = (void(*)(uObject*, uDelegate*))Number__remove_ValueChanged_fn;
    type->interface6.fp_AddChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChild_fn;
    type->interface6.fp_AddChildAt = (void(*)(uObject*, int*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChildAt_fn;
    type->interface6.fp_RemoveChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_RemoveChild_fn;
    type->interface6.fp_GetChild = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_GetChild_fn;
    type->interface7.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Add_fn;
    type->interface7.fp_Remove = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Remove_fn;
    type->interface6.fp_get_ChildCount = (void(*)(uObject*, int*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_get_ChildCount_fn;
    type->interface6.fp_get_Children = (void(*)(uObject*, uObject**))::g::Fuse::Controls::Panel__get_Children_fn;
    type->interface6.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__get_ActualSize_fn;
    type->interface6.fp_get_HasChildren = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__get_HasChildren_fn;
    type->interface6.fp_add_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildAdded_fn;
    type->interface6.fp_remove_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildAdded_fn;
    type->interface6.fp_add_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildRemoved_fn;
    type->interface6.fp_remove_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildRemoved_fn;
    type->interface6.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface6.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_add_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__add_Update_fn;
    type->interface6.fp_remove_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__remove_Update_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::STRINGS[4] = uString::Const("F0");
    ::STRINGS[5] = uString::Const("{0:F0}");
    ::STRINGS[6] = uString::Const("{0:");
    ::STRINGS[7] = uString::Const("}");
    ::TYPES[101] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Number_typeof(), ::g::Uno::String_typeof());
    ::TYPES[102] = ::g::Uno::Action1_typeof()->MakeType(Number_typeof());
    ::TYPES[103] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Number_typeof(), ::g::Uno::Float_typeof());
    ::TYPES[104] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[23] = ::g::Fuse::Controls::Panel_typeof();
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[17] = ::g::Uno::Delegate_typeof();
    ::TYPES[105] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[106] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[19] = uObject_typeof();
    ::TYPES[107] = uObject_typeof()->Array();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(Number_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(Number_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(Number_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(Number_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(Number_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(Number_type, interface5),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(Number_type, interface6),
        ::g::Fuse::Triggers::IAddRemove_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(Number_type, interface7),
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::Float_typeof()), offsetof(Number_type, interface8));
    type->SetFields(100,
        ::g::Fuse::Controls::TextControl_typeof(), offsetof(::g::Fuse::Controls::Number, _text), 0,
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Float_typeof()), offsetof(::g::Fuse::Controls::Number, ValueChanged1), 0,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Number_typeof(), ::g::Uno::String_typeof()), (uintptr_t)&::g::Fuse::Controls::Number::FormatProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Number_typeof(), ::g::Uno::String_typeof()), (uintptr_t)&::g::Fuse::Controls::Number::FormatStringProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Number_typeof(), ::g::Uno::Float_typeof()), (uintptr_t)&::g::Fuse::Controls::Number::ValueProperty_, uFieldFlagsStatic);
    type->Reflection.SetFields(3,
        new uField("FormatProperty", 102),
        new uField("FormatStringProperty", 103),
        new uField("ValueProperty", 104));
    type->Reflection.SetFunctions(9,
        new uFunction("get_Format", NULL, (void*)Number__get_Format_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Format", NULL, (void*)Number__set_Format_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_FormatString", NULL, (void*)Number__get_FormatString_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_FormatString", NULL, (void*)Number__set_FormatString_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)Number__New2_fn, 0, true, Number_typeof(), 0),
        new uFunction("get_Value", NULL, (void*)Number__get_Value_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Value", NULL, (void*)Number__set_Value_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("add_ValueChanged", NULL, (void*)Number__add_ValueChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Float_typeof())),
        new uFunction("remove_ValueChanged", NULL, (void*)Number__remove_ValueChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Float_typeof())));
    return type;
}

// public Number() :1487
void Number__ctor_4_fn(Number* __this)
{
    __this->ctor_4();
}

// public string get_Format() :1504
void Number__get_Format_fn(Number* __this, uString** __retval)
{
    *__retval = __this->Format();
}

// public void set_Format(string value) :1505
void Number__set_Format_fn(Number* __this, uString* value)
{
    __this->Format(value);
}

// private static void FormatChanged(Fuse.Controls.Number n) :1517
void Number__FormatChanged_fn(Number* n)
{
    Number::FormatChanged(n);
}

// public string get_FormatString() :1513
void Number__get_FormatString_fn(Number* __this, uString** __retval)
{
    *__retval = __this->FormatString();
}

// public void set_FormatString(string value) :1514
void Number__set_FormatString_fn(Number* __this, uString* value)
{
    __this->FormatString(value);
}

// public Number New() :1487
void Number__New2_fn(Number** __retval)
{
    *__retval = Number::New2();
}

// protected override sealed void OnRooted() :1493
void Number__OnRooted_fn(Number* __this)
{
    ::g::Fuse::Controls::Panel__OnRooted_fn(__this);
    __this->UpdateValue();
}

// private void OnValueChanged(float n, object origin) :1539
void Number__OnValueChanged_fn(Number* __this, float* n, uObject* origin)
{
    __this->OnValueChanged(*n, origin);
}

// private static void StaticValueChanged(Fuse.Controls.Number n) :1531
void Number__StaticValueChanged_fn(Number* n)
{
    Number::StaticValueChanged(n);
}

// private void UpdateValue() :1548
void Number__UpdateValue_fn(Number* __this)
{
    __this->UpdateValue();
}

// public new float get_Value() :1527
void Number__get_Value_fn(Number* __this, float* __retval)
{
    *__retval = __this->Value();
}

// public new void set_Value(float value) :1528
void Number__set_Value_fn(Number* __this, float* value)
{
    __this->Value(*value);
}

// public generated void add_ValueChanged(Uno.UX.ValueChangedHandler<float> value) :1537
void Number__add_ValueChanged_fn(Number* __this, uDelegate* value)
{
    __this->add_ValueChanged(value);
}

// public generated void remove_ValueChanged(Uno.UX.ValueChangedHandler<float> value) :1537
void Number__remove_ValueChanged_fn(Number* __this, uDelegate* value)
{
    __this->remove_ValueChanged(value);
}

uSStrong< ::g::Fuse::StyleProperty1*> Number::FormatProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Number::FormatStringProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Number::ValueProperty_;

// public Number() [instance] :1487
void Number::ctor_4()
{
    ctor_3();
    _text = ::g::Fuse::Controls::Text::New2();
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[122/*Uno.Collections.ICollection<Fuse.Node>*/]), _text);
}

// public string get_Format() [instance] :1504
uString* Number::Format()
{
    uString* ret7;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Number::FormatProperty()), this, &ret7), ret7);
}

// public void set_Format(string value) [instance] :1505
void Number::Format(uString* value)
{
    bool ret8;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Number::FormatProperty()), this, value, &ret8);
}

// public string get_FormatString() [instance] :1513
uString* Number::FormatString()
{
    uString* ret9;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Number::FormatStringProperty()), this, &ret9), ret9);
}

// public void set_FormatString(string value) [instance] :1514
void Number::FormatString(uString* value)
{
    bool ret10;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Number::FormatStringProperty()), this, value, &ret10);
}

// private void OnValueChanged(float n, object origin) [instance] :1539
void Number::OnValueChanged(float n, uObject* origin)
{
    ::g::Uno::UX::ValueChangedArgs* ret5;

    if (::g::Uno::Delegate::op_Inequality(ValueChanged1, NULL))
    {
        ::g::Uno::UX::ValueChangedArgs* args = (::g::Uno::UX::ValueChangedArgs__New2_fn(::TYPES[105/*Uno.UX.ValueChangedArgs<float>*/], uCRef(n), origin, &ret5), ret5);
        uPtr(ValueChanged1)->Invoke(2, uBox(::TYPES[184/*float*/], n), args);
    }
}

// private void UpdateValue() [instance] :1548
void Number::UpdateValue()
{
    bool ret6;
    uString* fmt = (::g::Fuse::StyleProperty1__HasValue_fn(uPtr(Number::FormatStringProperty()), this, &ret6), ret6) ? (uString*)FormatString() : (uString*)::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[6/*"{0:"*/], Format()), ::STRINGS[7/*"}"*/]);
    uPtr(_text)->Value(::g::Uno::String::Format(fmt, uArray::Init<uObject*>(::TYPES[107/*object[]*/], 1, uBox(::TYPES[184/*float*/], Value()))));
}

// public new float get_Value() [instance] :1527
float Number::Value()
{
    float ret11;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Number::ValueProperty()), this, &ret11), ret11);
}

// public new void set_Value(float value) [instance] :1528
void Number::Value(float value)
{
    bool ret12;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Number::ValueProperty()), this, uCRef(value), &ret12);
}

// public generated void add_ValueChanged(Uno.UX.ValueChangedHandler<float> value) [instance] :1537
void Number::add_ValueChanged(uDelegate* value)
{
    ValueChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ValueChanged1, value), ::TYPES[106/*Uno.UX.ValueChangedHandler<float>*/]);
}

// public generated void remove_ValueChanged(Uno.UX.ValueChangedHandler<float> value) [instance] :1537
void Number::remove_ValueChanged(uDelegate* value)
{
    ValueChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ValueChanged1, value), ::TYPES[106/*Uno.UX.ValueChangedHandler<float>*/]);
}

// private static void FormatChanged(Fuse.Controls.Number n) [static] :1517
void Number::FormatChanged(Number* n)
{
    Number_typeof()->Init();
    uPtr(n)->UpdateValue();
}

// public Number New() [static] :1487
Number* Number::New2()
{
    Number* obj1 = (Number*)uNew(Number_typeof());
    obj1->ctor_4();
    return obj1;
}

// private static void StaticValueChanged(Fuse.Controls.Number n) [static] :1531
void Number::StaticValueChanged(Number* n)
{
    Number_typeof()->Init();
    uPtr(n)->UpdateValue();
    n->OnValueChanged(n->Value(), n);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(1726)
// ------------------------------------------------------------

// public partial sealed class Page :1726
// {
::g::Fuse::Controls::Panel_type* Page_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 100;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(Page);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Fuse.Controls.Page", options);
    type->SetBase(::g::Fuse::Controls::Panel_typeof());
    type->fp_ctor_ = (void*)Page__New2_fn;
    type->interface6.fp_AddChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChild_fn;
    type->interface6.fp_AddChildAt = (void(*)(uObject*, int*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChildAt_fn;
    type->interface6.fp_RemoveChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_RemoveChild_fn;
    type->interface6.fp_GetChild = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_GetChild_fn;
    type->interface7.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Add_fn;
    type->interface7.fp_Remove = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Remove_fn;
    type->interface6.fp_get_ChildCount = (void(*)(uObject*, int*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_get_ChildCount_fn;
    type->interface6.fp_get_Children = (void(*)(uObject*, uObject**))::g::Fuse::Controls::Panel__get_Children_fn;
    type->interface6.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__get_ActualSize_fn;
    type->interface6.fp_get_HasChildren = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__get_HasChildren_fn;
    type->interface6.fp_add_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildAdded_fn;
    type->interface6.fp_remove_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildAdded_fn;
    type->interface6.fp_add_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildRemoved_fn;
    type->interface6.fp_remove_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildRemoved_fn;
    type->interface6.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface6.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_add_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__add_Update_fn;
    type->interface6.fp_remove_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__remove_Update_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::STRINGS[8] = uString::Const("Title");
    ::TYPES[108] = ::g::Uno::String_typeof();
    ::TYPES[19] = uObject_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Fuse::Triggers::IAddRemove_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Panel_type, interface7));
    type->SetFields(100);
    type->Reflection.SetFunctions(5,
        new uFunction(".ctor", NULL, (void*)Page__New2_fn, 0, true, Page_typeof(), 0),
        new uFunction("RestoreState", NULL, (void*)Page__RestoreState_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction("SaveState", NULL, (void*)Page__SaveState_fn, 0, false, uObject_typeof(), 0),
        new uFunction("get_Title", NULL, (void*)Page__get_Title_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Title", NULL, (void*)Page__set_Title_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
    return type;
}

// public generated Page() :1726
void Page__ctor_4_fn(Page* __this)
{
    __this->ctor_4();
}

// public generated Page New() :1726
void Page__New2_fn(Page** __retval)
{
    *__retval = Page::New2();
}

// protected void OnRestoreState(object state) :1743
void Page__OnRestoreState_fn(Page* __this, uObject* state)
{
    __this->OnRestoreState(state);
}

// protected object OnSaveState() :1733
void Page__OnSaveState_fn(Page* __this, uObject** __retval)
{
    *__retval = __this->OnSaveState();
}

// public void RestoreState(object state) :1738
void Page__RestoreState_fn(Page* __this, uObject* state)
{
    __this->RestoreState(state);
}

// public object SaveState() :1728
void Page__SaveState_fn(Page* __this, uObject** __retval)
{
    *__retval = __this->SaveState();
}

// public string get_Title() :1748
void Page__get_Title_fn(Page* __this, uString** __retval)
{
    *__retval = __this->Title();
}

// public void set_Title(string value) :1755
void Page__set_Title_fn(Page* __this, uString* value)
{
    __this->Title(value);
}

// public generated Page() [instance] :1726
void Page::ctor_4()
{
    ctor_3();
}

// protected void OnRestoreState(object state) [instance] :1743
void Page::OnRestoreState(uObject* state)
{
}

// protected object OnSaveState() [instance] :1733
uObject* Page::OnSaveState()
{
    return NULL;
}

// public void RestoreState(object state) [instance] :1738
void Page::RestoreState(uObject* state)
{
    OnRestoreState(state);
}

// public object SaveState() [instance] :1728
uObject* Page::SaveState()
{
    return OnSaveState();
}

// public string get_Title() [instance] :1748
uString* Page::Title()
{
    uObject* v;

    if (TryGetResource(::STRINGS[8/*"Title"*/], NULL, &v))
        return uAs<uString*>(v, ::TYPES[108/*string*/]);

    return NULL;
}

// public void set_Title(string value) [instance] :1755
void Page::Title(uString* value)
{
    if (::g::Uno::String::op_Inequality(Title(), value))
        SetResource(::STRINGS[8/*"Title"*/], value);
}

// public generated Page New() [static] :1726
Page* Page::New2()
{
    Page* obj1 = (Page*)uNew(Page_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(1567)
// ------------------------------------------------------------

// public partial sealed class PageControl :1567
// {
// static PageControl() :125
static void PageControl__cctor_4_fn(uType* __type)
{
}

PageControl_type* PageControl_typeof()
{
    static uSStrong<PageControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 101;
    options.InterfaceCount = 10;
    options.ObjectSize = sizeof(PageControl);
    options.TypeSize = sizeof(PageControl_type);
    type = (PageControl_type*)uClassType::New("Fuse.Controls.PageControl", options);
    type->SetBase(::g::Fuse::Controls::Panel_typeof());
    type->fp_ctor_ = (void*)PageControl__New2_fn;
    type->fp_cctor_ = PageControl__cctor_4_fn;
    type->interface8.fp_GetPage = (void(*)(uObject*, int*, ::g::Fuse::Node**))PageControl__Fuse_Navigation_INavigation_GetPage_fn;
    type->interface8.fp_get_PageCount = (void(*)(uObject*, int*))PageControl__Fuse_Navigation_INavigation_get_PageCount_fn;
    type->interface8.fp_get_PageProgress = (void(*)(uObject*, double*))PageControl__Fuse_Navigation_INavigation_get_PageProgress_fn;
    type->interface8.fp_get_ActivePage = (void(*)(uObject*, ::g::Fuse::Node**))PageControl__Fuse_Navigation_INavigation_get_ActivePage_fn;
    type->interface8.fp_Goto = (void(*)(uObject*, ::g::Fuse::Node*, int*))PageControl__Goto_fn;
    type->interface8.fp_Toggle = (void(*)(uObject*, ::g::Fuse::Node*))PageControl__Toggle_fn;
    type->interface8.fp_add_PageCountChanged = (void(*)(uObject*, uDelegate*))PageControl__add_PageCountChanged_fn;
    type->interface8.fp_remove_PageCountChanged = (void(*)(uObject*, uDelegate*))PageControl__remove_PageCountChanged_fn;
    type->interface8.fp_add_PageProgressChanged = (void(*)(uObject*, uDelegate*))PageControl__add_PageProgressChanged_fn;
    type->interface8.fp_remove_PageProgressChanged = (void(*)(uObject*, uDelegate*))PageControl__remove_PageProgressChanged_fn;
    type->interface8.fp_add_Navigated = (void(*)(uObject*, uDelegate*))PageControl__add_Navigated_fn;
    type->interface8.fp_remove_Navigated = (void(*)(uObject*, uDelegate*))PageControl__remove_Navigated_fn;
    type->interface8.fp_add_HistoryChanged = (void(*)(uObject*, uDelegate*))PageControl__add_HistoryChanged_fn;
    type->interface8.fp_remove_HistoryChanged = (void(*)(uObject*, uDelegate*))PageControl__remove_HistoryChanged_fn;
    type->interface9.fp_GoForward = (void(*)(uObject*))PageControl__GoForward_fn;
    type->interface9.fp_GoBack = (void(*)(uObject*))PageControl__GoBack_fn;
    type->interface9.fp_get_CanGoBack = (void(*)(uObject*, bool*))PageControl__get_CanGoBack_fn;
    type->interface9.fp_get_CanGoForward = (void(*)(uObject*, bool*))PageControl__get_CanGoForward_fn;
    type->interface6.fp_AddChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChild_fn;
    type->interface6.fp_AddChildAt = (void(*)(uObject*, int*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChildAt_fn;
    type->interface6.fp_RemoveChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_RemoveChild_fn;
    type->interface6.fp_GetChild = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_GetChild_fn;
    type->interface7.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Add_fn;
    type->interface7.fp_Remove = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Remove_fn;
    type->interface6.fp_get_ChildCount = (void(*)(uObject*, int*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_get_ChildCount_fn;
    type->interface6.fp_get_Children = (void(*)(uObject*, uObject**))::g::Fuse::Controls::Panel__get_Children_fn;
    type->interface6.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__get_ActualSize_fn;
    type->interface6.fp_get_HasChildren = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__get_HasChildren_fn;
    type->interface6.fp_add_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildAdded_fn;
    type->interface6.fp_remove_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildAdded_fn;
    type->interface6.fp_add_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildRemoved_fn;
    type->interface6.fp_remove_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildRemoved_fn;
    type->interface6.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface6.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_add_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__add_Update_fn;
    type->interface6.fp_remove_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__remove_Update_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::TYPES[109] = ::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::Page_typeof());
    ::TYPES[110] = ::g::Fuse::Style_typeof();
    ::TYPES[111] = ::g::Uno::UX::ITemplate_typeof();
    ::TYPES[112] = ::g::Fuse::Navigation::StructuredNavigation_typeof();
    ::TYPES[113] = ::g::Fuse::Navigation::SwipeNavigate_typeof();
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    ::TYPES[58] = ::g::Fuse::Navigation::Navigation_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(PageControl_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(PageControl_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(PageControl_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(PageControl_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(PageControl_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(PageControl_type, interface5),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(PageControl_type, interface6),
        ::g::Fuse::Triggers::IAddRemove_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(PageControl_type, interface7),
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(PageControl_type, interface8),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(PageControl_type, interface9));
    type->SetFields(100,
        ::g::Fuse::Navigation::LinearNavigation_typeof(), offsetof(::g::Fuse::Controls::PageControl, TheNavigation), 0);
    type->Reflection.SetFunctions(17,
        new uFunction("get_Active", NULL, (void*)PageControl__get_Active_fn, 0, false, ::g::Fuse::Node_typeof(), 0),
        new uFunction("set_Active", NULL, (void*)PageControl__set_Active_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("get_CanGoBack", NULL, (void*)PageControl__get_CanGoBack_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanGoForward", NULL, (void*)PageControl__get_CanGoForward_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("GoBack", NULL, (void*)PageControl__GoBack_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("GoForward", NULL, (void*)PageControl__GoForward_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Goto", NULL, (void*)PageControl__Goto_fn, 0, false, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Fuse::Navigation::NavigationGotoMode_typeof()),
        new uFunction("add_HistoryChanged", NULL, (void*)PageControl__add_HistoryChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::HistoryChangedHandler_typeof()),
        new uFunction("remove_HistoryChanged", NULL, (void*)PageControl__remove_HistoryChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::HistoryChangedHandler_typeof()),
        new uFunction("add_Navigated", NULL, (void*)PageControl__add_Navigated_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::NavigatedHandler_typeof()),
        new uFunction("remove_Navigated", NULL, (void*)PageControl__remove_Navigated_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::NavigatedHandler_typeof()),
        new uFunction(".ctor", NULL, (void*)PageControl__New2_fn, 0, true, PageControl_typeof(), 0),
        new uFunction("add_PageCountChanged", NULL, (void*)PageControl__add_PageCountChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::NavigationPageCountHandler_typeof()),
        new uFunction("remove_PageCountChanged", NULL, (void*)PageControl__remove_PageCountChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::NavigationPageCountHandler_typeof()),
        new uFunction("add_PageProgressChanged", NULL, (void*)PageControl__add_PageProgressChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::NavigationPageProgressHandler_typeof()),
        new uFunction("remove_PageProgressChanged", NULL, (void*)PageControl__remove_PageProgressChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::NavigationPageProgressHandler_typeof()),
        new uFunction("Toggle", NULL, (void*)PageControl__Toggle_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()));
    return type;
}

// public PageControl() :128
void PageControl__ctor_4_fn(PageControl* __this)
{
    __this->ctor_4();
}

// public Fuse.Node get_Active() :1576
void PageControl__get_Active_fn(PageControl* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Active();
}

// public void set_Active(Fuse.Node value) :1577
void PageControl__set_Active_fn(PageControl* __this, ::g::Fuse::Node* value)
{
    __this->Active(value);
}

// public bool get_CanGoBack() :1609
void PageControl__get_CanGoBack_fn(PageControl* __this, bool* __retval)
{
    *__retval = __this->CanGoBack();
}

// public bool get_CanGoForward() :1610
void PageControl__get_CanGoForward_fn(PageControl* __this, bool* __retval)
{
    *__retval = __this->CanGoForward();
}

// public Fuse.Node Fuse.Navigation.INavigation.get_ActivePage() :1584
void PageControl__Fuse_Navigation_INavigation_get_ActivePage_fn(PageControl* __this, ::g::Fuse::Node** __retval)
{
    return *__retval = uPtr(__this->Navigation())->ActivePage(), void();
}

// public Fuse.Node Fuse.Navigation.INavigation.GetPage(int index) :1583
void PageControl__Fuse_Navigation_INavigation_GetPage_fn(PageControl* __this, int* index, ::g::Fuse::Node** __retval)
{
    int index_ = *index;
    return *__retval = uPtr(__this->Navigation())->GetPage(index_), void();
}

// public int Fuse.Navigation.INavigation.get_PageCount() :1581
void PageControl__Fuse_Navigation_INavigation_get_PageCount_fn(PageControl* __this, int* __retval)
{
    return *__retval = uPtr(__this->Navigation())->PageCount(), void();
}

// public double Fuse.Navigation.INavigation.get_PageProgress() :1582
void PageControl__Fuse_Navigation_INavigation_get_PageProgress_fn(PageControl* __this, double* __retval)
{
    return *__retval = uPtr(__this->Navigation())->PageProgress(), void();
}

// public void GoBack() :1608
void PageControl__GoBack_fn(PageControl* __this)
{
    __this->GoBack();
}

// public void GoForward() :1607
void PageControl__GoForward_fn(PageControl* __this)
{
    __this->GoForward();
}

// public void Goto(Fuse.Node node, Fuse.Navigation.NavigationGotoMode mode) :1611
void PageControl__Goto_fn(PageControl* __this, ::g::Fuse::Node* node, int* mode)
{
    __this->Goto(node, *mode);
}

// public void add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) :1604
void PageControl__add_HistoryChanged_fn(PageControl* __this, uDelegate* value)
{
    __this->add_HistoryChanged(value);
}

// public void remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) :1605
void PageControl__remove_HistoryChanged_fn(PageControl* __this, uDelegate* value)
{
    __this->remove_HistoryChanged(value);
}

// internal void InitializeUX() :132
void PageControl__InitializeUX_fn(PageControl* __this)
{
    __this->InitializeUX();
}

// public void add_Navigated(Fuse.Navigation.NavigatedHandler value) :1599
void PageControl__add_Navigated_fn(PageControl* __this, uDelegate* value)
{
    __this->add_Navigated(value);
}

// public void remove_Navigated(Fuse.Navigation.NavigatedHandler value) :1600
void PageControl__remove_Navigated_fn(PageControl* __this, uDelegate* value)
{
    __this->remove_Navigated(value);
}

// internal Fuse.Navigation.StructuredNavigation get_Navigation() :1571
void PageControl__get_Navigation_fn(PageControl* __this, ::g::Fuse::Navigation::StructuredNavigation** __retval)
{
    *__retval = __this->Navigation();
}

// public PageControl New() :128
void PageControl__New2_fn(PageControl** __retval)
{
    *__retval = PageControl::New2();
}

// public void add_PageCountChanged(Fuse.Navigation.NavigationPageCountHandler value) :1588
void PageControl__add_PageCountChanged_fn(PageControl* __this, uDelegate* value)
{
    __this->add_PageCountChanged(value);
}

// public void remove_PageCountChanged(Fuse.Navigation.NavigationPageCountHandler value) :1589
void PageControl__remove_PageCountChanged_fn(PageControl* __this, uDelegate* value)
{
    __this->remove_PageCountChanged(value);
}

// public void add_PageProgressChanged(Fuse.Navigation.NavigationPageProgressHandler value) :1593
void PageControl__add_PageProgressChanged_fn(PageControl* __this, uDelegate* value)
{
    __this->add_PageProgressChanged(value);
}

// public void remove_PageProgressChanged(Fuse.Navigation.NavigationPageProgressHandler value) :1594
void PageControl__remove_PageProgressChanged_fn(PageControl* __this, uDelegate* value)
{
    __this->remove_PageProgressChanged(value);
}

// public void Toggle(Fuse.Node node) :1612
void PageControl__Toggle_fn(PageControl* __this, ::g::Fuse::Node* node)
{
    __this->Toggle(node);
}

// public PageControl() [instance] :128
void PageControl::ctor_4()
{
    ctor_3();
    InitializeUX();
}

// public Fuse.Node get_Active() [instance] :1576
::g::Fuse::Node* PageControl::Active()
{
    return uPtr(TheNavigation)->Active();
}

// public void set_Active(Fuse.Node value) [instance] :1577
void PageControl::Active(::g::Fuse::Node* value)
{
    uPtr(TheNavigation)->Active(value);
}

// public bool get_CanGoBack() [instance] :1609
bool PageControl::CanGoBack()
{
    return uPtr(Navigation())->CanGoBack();
}

// public bool get_CanGoForward() [instance] :1610
bool PageControl::CanGoForward()
{
    return uPtr(Navigation())->CanGoForward();
}

// public void GoBack() [instance] :1608
void PageControl::GoBack()
{
    uPtr(Navigation())->GoBack();
}

// public void GoForward() [instance] :1607
void PageControl::GoForward()
{
    uPtr(Navigation())->GoForward();
}

// public void Goto(Fuse.Node node, Fuse.Navigation.NavigationGotoMode mode) [instance] :1611
void PageControl::Goto(::g::Fuse::Node* node, int mode)
{
    uPtr(Navigation())->Goto(node, mode);
}

// public void add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) [instance] :1604
void PageControl::add_HistoryChanged(uDelegate* value)
{
    uPtr(Navigation())->add_HistoryChanged(value);
}

// public void remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) [instance] :1605
void PageControl::remove_HistoryChanged(uDelegate* value)
{
    uPtr(Navigation())->remove_HistoryChanged(value);
}

// internal void InitializeUX() [instance] :132
void PageControl::InitializeUX()
{
    PageControl__Template* collection1;
    ::g::Fuse::Style* temp = ::g::Fuse::Style::New1();
    collection1 = PageControl__Template::New1(this);
    uPtr(collection1)->Cascade(true);
    true;
    uPtr(collection1)->AffectSubtypes(true);
    true;
    PageControl__Template* temp1 = collection1;
    TheNavigation = ::g::Fuse::Navigation::LinearNavigation::New1();
    ::g::Fuse::Navigation::SwipeNavigate* temp2 = ::g::Fuse::Navigation::SwipeNavigate::New1();
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[111/*Uno.UX.ITemplate*/])), (uObject*)temp1);
    uPtr(TheNavigation)->Easing(20);
    temp2->SwipeEnds(0);
    temp2->SwipeDirection(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Behavior*/])), TheNavigation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Behavior*/])), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Styles()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[110/*Fuse.Style*/])), temp);
}

// public void add_Navigated(Fuse.Navigation.NavigatedHandler value) [instance] :1599
void PageControl::add_Navigated(uDelegate* value)
{
    uPtr(Navigation())->add_Navigated(value);
}

// public void remove_Navigated(Fuse.Navigation.NavigatedHandler value) [instance] :1600
void PageControl::remove_Navigated(uDelegate* value)
{
    uPtr(Navigation())->remove_Navigated(value);
}

// internal Fuse.Navigation.StructuredNavigation get_Navigation() [instance] :1571
::g::Fuse::Navigation::StructuredNavigation* PageControl::Navigation()
{
    return TheNavigation;
}

// public void add_PageCountChanged(Fuse.Navigation.NavigationPageCountHandler value) [instance] :1588
void PageControl::add_PageCountChanged(uDelegate* value)
{
    uPtr(Navigation())->add_PageCountChanged(value);
}

// public void remove_PageCountChanged(Fuse.Navigation.NavigationPageCountHandler value) [instance] :1589
void PageControl::remove_PageCountChanged(uDelegate* value)
{
    uPtr(Navigation())->remove_PageCountChanged(value);
}

// public void add_PageProgressChanged(Fuse.Navigation.NavigationPageProgressHandler value) [instance] :1593
void PageControl::add_PageProgressChanged(uDelegate* value)
{
    uPtr(Navigation())->add_PageProgressChanged(value);
}

// public void remove_PageProgressChanged(Fuse.Navigation.NavigationPageProgressHandler value) [instance] :1594
void PageControl::remove_PageProgressChanged(uDelegate* value)
{
    uPtr(Navigation())->remove_PageProgressChanged(value);
}

// public void Toggle(Fuse.Node node) [instance] :1612
void PageControl::Toggle(::g::Fuse::Node* node)
{
    uPtr(Navigation())->Toggle(node);
}

// public PageControl New() [static] :128
PageControl* PageControl::New2()
{
    PageControl* obj2 = (PageControl*)uNew(PageControl_typeof());
    obj2->ctor_4();
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(1629)
// ------------------------------------------------------------

// public partial sealed class PageIndicator :1629
// {
// static PageIndicator() :211
static void PageIndicator__cctor_5_fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret3;
    PageIndicator::DotFactoryProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[114/*Fuse.StyleProperty<Fuse.Controls.PageIndicator, Uno.UX.IFactory>*/], NULL, uDelegate::New(::TYPES[115/*Uno.Action<Fuse.Controls.PageIndicator>*/], (void*)PageIndicator__OnDotFactoryChanged_fn), &ret3), ret3);
}

::g::Fuse::Controls::Panel_type* PageIndicator_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 103;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(PageIndicator);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Fuse.Controls.PageIndicator", options);
    type->SetBase(::g::Fuse::Controls::StackPanel_typeof());
    type->fp_cctor_ = PageIndicator__cctor_5_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))PageIndicator__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))PageIndicator__OnUnrooted_fn;
    type->interface6.fp_AddChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChild_fn;
    type->interface6.fp_AddChildAt = (void(*)(uObject*, int*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChildAt_fn;
    type->interface6.fp_RemoveChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_RemoveChild_fn;
    type->interface6.fp_GetChild = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_GetChild_fn;
    type->interface7.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Add_fn;
    type->interface7.fp_Remove = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Remove_fn;
    type->interface6.fp_get_ChildCount = (void(*)(uObject*, int*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_get_ChildCount_fn;
    type->interface6.fp_get_Children = (void(*)(uObject*, uObject**))::g::Fuse::Controls::Panel__get_Children_fn;
    type->interface6.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__get_ActualSize_fn;
    type->interface6.fp_get_HasChildren = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__get_HasChildren_fn;
    type->interface6.fp_add_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildAdded_fn;
    type->interface6.fp_remove_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildAdded_fn;
    type->interface6.fp_add_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildRemoved_fn;
    type->interface6.fp_remove_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildRemoved_fn;
    type->interface6.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface6.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_add_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__add_Update_fn;
    type->interface6.fp_remove_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__remove_Update_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::TYPES[114] = ::g::Fuse::StyleProperty1_typeof()->MakeType(PageIndicator_typeof(), ::g::Uno::UX::IFactory_typeof());
    ::TYPES[115] = ::g::Uno::Action1_typeof()->MakeType(PageIndicator_typeof());
    ::TYPES[116] = ::g::Uno::UX::IFactory_typeof();
    ::TYPES[117] = ::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::PageIndicatorDot_typeof());
    ::TYPES[118] = ::g::Fuse::Controls::StackPanel_typeof();
    ::TYPES[110] = ::g::Fuse::Style_typeof();
    ::TYPES[111] = ::g::Uno::UX::ITemplate_typeof();
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[119] = ::g::Fuse::Navigation::INavigation_typeof();
    ::TYPES[120] = ::g::Fuse::Navigation::NavigationPageCountHandler_typeof();
    ::TYPES[121] = ::g::Fuse::Navigation::NavigationPageProgressHandler_typeof();
    ::TYPES[122] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[23] = ::g::Fuse::Controls::Panel_typeof();
    ::TYPES[123] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[19] = uObject_typeof();
    ::TYPES[40] = ::g::Uno::Double_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Fuse::Triggers::IAddRemove_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Panel_type, interface7));
    type->SetFields(101,
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(::g::Fuse::Controls::PageIndicator, _pageProgress), 0,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(PageIndicator_typeof(), ::g::Uno::UX::IFactory_typeof()), (uintptr_t)&::g::Fuse::Controls::PageIndicator::DotFactoryProperty_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("DotFactoryProperty", 102));
    type->Reflection.SetFunctions(3,
        new uFunction("get_DotFactory", NULL, (void*)PageIndicator__get_DotFactory_fn, 0, false, ::g::Uno::UX::IFactory_typeof(), 0),
        new uFunction("set_DotFactory", NULL, (void*)PageIndicator__set_DotFactory_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::IFactory_typeof()),
        new uFunction(".ctor", NULL, (void*)PageIndicator__New3_fn, 0, true, PageIndicator_typeof(), 1, ::g::Fuse::Navigation::INavigation_typeof()));
    return type;
}

// public PageIndicator(Fuse.Navigation.INavigation navigation) :1634
void PageIndicator__ctor_5_fn(PageIndicator* __this, uObject* navigation)
{
    __this->ctor_5(navigation);
}

// public Uno.UX.IFactory get_DotFactory() :1646
void PageIndicator__get_DotFactory_fn(PageIndicator* __this, uObject** __retval)
{
    *__retval = __this->DotFactory();
}

// public void set_DotFactory(Uno.UX.IFactory value) :1647
void PageIndicator__set_DotFactory_fn(PageIndicator* __this, uObject* value)
{
    __this->DotFactory(value);
}

// internal void InitializeUX() :214
void PageIndicator__InitializeUX_fn(PageIndicator* __this)
{
    __this->InitializeUX();
}

// public PageIndicator New(Fuse.Navigation.INavigation navigation) :1634
void PageIndicator__New3_fn(uObject* navigation, PageIndicator** __retval)
{
    *__retval = PageIndicator::New3(navigation);
}

// private static void OnDotFactoryChanged(Fuse.Controls.PageIndicator p) :1650
void PageIndicator__OnDotFactoryChanged_fn(PageIndicator* p)
{
    PageIndicator::OnDotFactoryChanged(p);
}

// protected override sealed void OnRooted() :1655
void PageIndicator__OnRooted_fn(PageIndicator* __this)
{
    ::g::Fuse::Controls::Panel__OnRooted_fn(__this);
    ::g::Fuse::Navigation::INavigation::add_PageCountChanged(uInterface(uPtr(__this->_pageProgress), ::TYPES[119/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[120/*Fuse.Navigation.NavigationPageCountHandler*/], (void*)PageIndicator__UpdateCount_fn, __this));
    ::g::Fuse::Navigation::INavigation::add_PageProgressChanged(uInterface(uPtr(__this->_pageProgress), ::TYPES[119/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[121/*Fuse.Navigation.NavigationPageProgressHandler*/], (void*)PageIndicator__UpdateCurrent_fn, __this));
    __this->UpdateCount(NULL);
    __this->UpdateCurrent(NULL, ::g::Fuse::Navigation::INavigation::PageProgress(uInterface(uPtr(__this->_pageProgress), ::TYPES[119/*Fuse.Navigation.INavigation*/])), ::g::Fuse::Navigation::INavigation::PageProgress(uInterface(uPtr(__this->_pageProgress), ::TYPES[119/*Fuse.Navigation.INavigation*/])));
}

// protected override sealed void OnUnrooted() :1664
void PageIndicator__OnUnrooted_fn(PageIndicator* __this)
{
    ::g::Fuse::Navigation::INavigation::remove_PageCountChanged(uInterface(uPtr(__this->_pageProgress), ::TYPES[119/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[120/*Fuse.Navigation.NavigationPageCountHandler*/], (void*)PageIndicator__UpdateCount_fn, __this));
    ::g::Fuse::Navigation::INavigation::remove_PageProgressChanged(uInterface(uPtr(__this->_pageProgress), ::TYPES[119/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[121/*Fuse.Navigation.NavigationPageProgressHandler*/], (void*)PageIndicator__UpdateCurrent_fn, __this));
    ::g::Fuse::Controls::Panel__OnUnrooted_fn(__this);
}

// private void RecreateDots() :1676
void PageIndicator__RecreateDots_fn(PageIndicator* __this)
{
    __this->RecreateDots();
}

// private void UpdateCount(object s) :1671
void PageIndicator__UpdateCount_fn(PageIndicator* __this, uObject* s)
{
    __this->UpdateCount(s);
}

// private void UpdateCurrent(object s, double progress, double prevProgress) :1693
void PageIndicator__UpdateCurrent_fn(PageIndicator* __this, uObject* s, double* progress, double* prevProgress)
{
    __this->UpdateCurrent(s, *progress, *prevProgress);
}

uSStrong< ::g::Fuse::StyleProperty1*> PageIndicator::DotFactoryProperty_;

// public PageIndicator(Fuse.Navigation.INavigation navigation) [instance] :1634
void PageIndicator::ctor_5(uObject* navigation)
{
    ctor_4();
    InitializeUX();
    _pageProgress = navigation;
    DotFactory((uObject*)::g::Fuse::Controls::PageIndicatorDotFactory::New2());
}

// public Uno.UX.IFactory get_DotFactory() [instance] :1646
uObject* PageIndicator::DotFactory()
{
    uObject* ret6;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(PageIndicator::DotFactoryProperty()), this, &ret6), ret6);
}

// public void set_DotFactory(Uno.UX.IFactory value) [instance] :1647
void PageIndicator::DotFactory(uObject* value)
{
    bool ret7;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(PageIndicator::DotFactoryProperty()), this, value, &ret7);
}

// internal void InitializeUX() [instance] :214
void PageIndicator::InitializeUX()
{
    PageIndicator__Template* collection1;
    ::g::Fuse::Style* temp = ::g::Fuse::Style::New1();
    collection1 = PageIndicator__Template::New1(this);
    uPtr(collection1)->Cascade(true);
    true;
    uPtr(collection1)->AffectSubtypes(true);
    true;
    PageIndicator__Template* temp1 = collection1;
    Orientation(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[111/*Uno.UX.ITemplate*/])), (uObject*)temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Styles()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[110/*Fuse.Style*/])), temp);
}

// private void RecreateDots() [instance] :1676
void PageIndicator::RecreateDots()
{
    ::g::Fuse::Node* ret4;
    int count = ::g::Fuse::Navigation::INavigation::PageCount(uInterface(uPtr(_pageProgress), ::TYPES[119/*Fuse.Navigation.INavigation*/]));

    while (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Children()), ::TYPES[122/*Uno.Collections.ICollection<Fuse.Node>*/])) > count)
        ::g::Uno::Collections::IList::RemoveAt(uInterface(uPtr(Children()), ::TYPES[123/*Uno.Collections.IList<Fuse.Node>*/]), ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Children()), ::TYPES[122/*Uno.Collections.ICollection<Fuse.Node>*/])) - 1);

    while (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Children()), ::TYPES[122/*Uno.Collections.ICollection<Fuse.Node>*/])) < count)
    {
        ::g::Fuse::Node* dot = uAs< ::g::Fuse::Node*>(::g::Uno::UX::IFactory::New1(uInterface(uPtr(DotFactory()), ::TYPES[116/*Uno.UX.IFactory*/])), ::TYPES[0/*Fuse.Node*/]);
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[122/*Uno.Collections.ICollection<Fuse.Node>*/]), dot);
    }

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Children()), ::TYPES[122/*Uno.Collections.ICollection<Fuse.Node>*/])); ++i)
        ::g::Fuse::Navigation::NavigationPageProperty::SetNavigationPage((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Children()), ::TYPES[123/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret4), ret4), ::g::Fuse::Navigation::INavigation::GetPage(uInterface(uPtr(_pageProgress), ::TYPES[119/*Fuse.Navigation.INavigation*/]), i));

    UpdateCurrent(_pageProgress, ::g::Fuse::Navigation::INavigation::PageProgress(uInterface(uPtr(_pageProgress), ::TYPES[119/*Fuse.Navigation.INavigation*/])), ::g::Fuse::Navigation::INavigation::PageProgress(uInterface(uPtr(_pageProgress), ::TYPES[119/*Fuse.Navigation.INavigation*/])));
}

// private void UpdateCount(object s) [instance] :1671
void PageIndicator::UpdateCount(uObject* s)
{
    RecreateDots();
}

// private void UpdateCurrent(object s, double progress, double prevProgress) [instance] :1693
void PageIndicator::UpdateCurrent(uObject* s, double progress, double prevProgress)
{
    ::g::Fuse::Node* ret5;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Children()), ::TYPES[122/*Uno.Collections.ICollection<Fuse.Node>*/])); ++i)
    {
        double p = progress - (double)i;
        double pp = prevProgress - (double)i;
        ::g::Fuse::Navigation::Navigation::NotifyNavigation((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Children()), ::TYPES[123/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret5), ret5), ::g::Fuse::Navigation::NavigationArgs::New2(p, pp, 2));
    }
}

// public PageIndicator New(Fuse.Navigation.INavigation navigation) [static] :1634
PageIndicator* PageIndicator::New3(uObject* navigation)
{
    PageIndicator* obj2 = (PageIndicator*)uNew(PageIndicator_typeof());
    obj2->ctor_5(navigation);
    return obj2;
}

// private static void OnDotFactoryChanged(Fuse.Controls.PageIndicator p) [static] :1650
void PageIndicator::OnDotFactoryChanged(PageIndicator* p)
{
    PageIndicator_typeof()->Init();
    uPtr(p)->RecreateDots();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\.cache\GeneratedCode\$.uno(153)
// --------------------------------------------------------------------------------

// public partial sealed class PageIndicatorDot :153
// {
// static PageIndicatorDot() :155
static void PageIndicatorDot__cctor_4_fn(uType* __type)
{
}

::g::Fuse::Controls::Panel_type* PageIndicatorDot_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 100;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(PageIndicatorDot);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Fuse.Controls.PageIndicatorDot", options);
    type->SetBase(::g::Fuse::Controls::Panel_typeof());
    type->fp_ctor_ = (void*)PageIndicatorDot__New2_fn;
    type->fp_cctor_ = PageIndicatorDot__cctor_4_fn;
    type->interface6.fp_AddChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChild_fn;
    type->interface6.fp_AddChildAt = (void(*)(uObject*, int*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChildAt_fn;
    type->interface6.fp_RemoveChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_RemoveChild_fn;
    type->interface6.fp_GetChild = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_GetChild_fn;
    type->interface7.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Add_fn;
    type->interface7.fp_Remove = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Remove_fn;
    type->interface6.fp_get_ChildCount = (void(*)(uObject*, int*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_get_ChildCount_fn;
    type->interface6.fp_get_Children = (void(*)(uObject*, uObject**))::g::Fuse::Controls::Panel__get_Children_fn;
    type->interface6.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__get_ActualSize_fn;
    type->interface6.fp_get_HasChildren = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__get_HasChildren_fn;
    type->interface6.fp_add_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildAdded_fn;
    type->interface6.fp_remove_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildAdded_fn;
    type->interface6.fp_add_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildRemoved_fn;
    type->interface6.fp_remove_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildRemoved_fn;
    type->interface6.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface6.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_add_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__add_Update_fn;
    type->interface6.fp_remove_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__remove_Update_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Fuse::Triggers::IAddRemove_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Panel_type, interface7));
    type->SetFields(100);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)PageIndicatorDot__New2_fn, 0, true, PageIndicatorDot_typeof(), 0));
    return type;
}

// public PageIndicatorDot() :158
void PageIndicatorDot__ctor_4_fn(PageIndicatorDot* __this)
{
    __this->ctor_4();
}

// internal void InitializeUX() :162
void PageIndicatorDot__InitializeUX_fn(PageIndicatorDot* __this)
{
    __this->InitializeUX();
}

// public PageIndicatorDot New() :158
void PageIndicatorDot__New2_fn(PageIndicatorDot** __retval)
{
    *__retval = PageIndicatorDot::New2();
}

// public PageIndicatorDot() [instance] :158
void PageIndicatorDot::ctor_4()
{
    ctor_3();
    InitializeUX();
}

// internal void InitializeUX() [instance] :162
void PageIndicatorDot::InitializeUX()
{
}

// public PageIndicatorDot New() [static] :158
PageIndicatorDot* PageIndicatorDot::New2()
{
    PageIndicatorDot* obj1 = (PageIndicatorDot*)uNew(PageIndicatorDot_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(1705)
// ------------------------------------------------------------

// internal sealed class PageIndicatorDotFactory :1705
// {
PageIndicatorDotFactory_type* PageIndicatorDotFactory_typeof()
{
    static uSStrong<PageIndicatorDotFactory_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PageIndicatorDotFactory);
    options.TypeSize = sizeof(PageIndicatorDotFactory_type);
    type = (PageIndicatorDotFactory_type*)uClassType::New("Fuse.Controls.PageIndicatorDotFactory", options);
    type->fp_ctor_ = (void*)PageIndicatorDotFactory__New2_fn;
    type->interface0.fp_New1 = (void(*)(uObject*, uObject**))PageIndicatorDotFactory__New1_fn;
    ::TYPES[19] = uObject_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::IFactory_typeof(), offsetof(PageIndicatorDotFactory_type, interface0));
    return type;
}

// public generated PageIndicatorDotFactory() :1705
void PageIndicatorDotFactory__ctor__fn(PageIndicatorDotFactory* __this)
{
    __this->ctor_();
}

// public object New() :1707
void PageIndicatorDotFactory__New1_fn(PageIndicatorDotFactory* __this, uObject** __retval)
{
    *__retval = __this->New1();
}

// public generated PageIndicatorDotFactory New() :1705
void PageIndicatorDotFactory__New2_fn(PageIndicatorDotFactory** __retval)
{
    *__retval = PageIndicatorDotFactory::New2();
}

// public generated PageIndicatorDotFactory() [instance] :1705
void PageIndicatorDotFactory::ctor_()
{
}

// public object New() [instance] :1707
uObject* PageIndicatorDotFactory::New1()
{
    return ::g::Fuse::Controls::PageIndicatorDot::New2();
}

// public generated PageIndicatorDotFactory New() [static] :1705
PageIndicatorDotFactory* PageIndicatorDotFactory::New2()
{
    PageIndicatorDotFactory* obj1 = (PageIndicatorDotFactory*)uNew(PageIndicatorDotFactory_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(1789)
// ------------------------------------------------------------

// public partial class Panel :1789
// {
// static Panel() :1789
static void Panel__cctor_3_fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret6;
    ::g::Fuse::StyleProperty1* ret7;
    Panel::AppearanceProperty_ = (::g::Fuse::StyleProperty1__New2_fn(::TYPES[124/*Fuse.StyleProperty<Fuse.Controls.Panel, Fuse.Node>*/], NULL, uDelegate::New(::TYPES[125/*Uno.Action<Fuse.Controls.Panel>*/], (void*)Panel__OnAppearanceChanged_fn), uDelegate::New(::TYPES[126/*Uno.Action<Fuse.Controls.Panel, Fuse.Node>*/], (void*)Panel__SetAppearance_fn), uDelegate::New(::TYPES[127/*Uno.Func<Fuse.Controls.Panel, Fuse.Node>*/], (void*)Panel__GetAppearance_fn), &ret6), ret6);
    Panel::LayoutProperty_ = (::g::Fuse::StyleProperty1__New2_fn(::TYPES[128/*Fuse.StyleProperty<Fuse.Controls.Panel, Fuse.Layouts.Layout>*/], ::g::Fuse::Layouts::Layouts::Default(), uDelegate::New(::TYPES[125/*Uno.Action<Fuse.Controls.Panel>*/], (void*)Panel__OnLayoutChanged_fn), uDelegate::New(::TYPES[130/*Uno.Action<Fuse.Controls.Panel, Fuse.Layouts.Layout>*/], (void*)Panel__SetLayout_fn), uDelegate::New(::TYPES[131/*Uno.Func<Fuse.Controls.Panel, Fuse.Layouts.Layout>*/], (void*)Panel__GetLayout_fn), &ret7), ret7);
}

Panel_type* Panel_typeof()
{
    static uSStrong<Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 102;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(Panel);
    options.TypeSize = sizeof(Panel_type);
    type = (Panel_type*)uClassType::New("Fuse.Controls.Panel", options);
    type->SetBase(::g::Fuse::Controls::Control_typeof());
    type->fp_ctor_ = (void*)Panel__New1_fn;
    type->fp_cctor_ = Panel__cctor_3_fn;
    type->fp_ArrangePaddingBox = (void(*)(::g::Fuse::Elements::Element*, ::g::Uno::Float2*, int*))Panel__ArrangePaddingBox_fn;
    type->fp_CalcRenderBounds = (void(*)(::g::Fuse::Elements::Element*, ::g::Uno::Rect*))Panel__CalcRenderBounds_fn;
    type->fp_FastTrackDrawWithOpacity = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::DrawContext*, bool*))Panel__FastTrackDrawWithOpacity_fn;
    type->fp_GetContentSize = (void(*)(::g::Fuse::Elements::Element*, ::g::Uno::Float2*, int*, ::g::Uno::Float2*))Panel__GetContentSize_fn;
    type->fp_GetSubNode = (void(*)(::g::Fuse::Node*, int*, ::g::Fuse::Node**))Panel__GetSubNode_fn;
    type->fp_IsMarginBoxDependent = (void(*)(::g::Fuse::Node*, ::g::Fuse::Node*, int*))Panel__IsMarginBoxDependent_fn;
    type->fp_OnDrawControl = (void(*)(::g::Fuse::Controls::Control*, ::g::Fuse::DrawContext*))Panel__OnDrawControl_fn;
    type->fp_OnHitTestChildren = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::HitTestContext*))Panel__OnHitTestChildren_fn;
    type->fp_OnInvalidateLayout = (void(*)(::g::Fuse::Node*))Panel__OnInvalidateLayout_fn;
    type->fp_OnResetStyle = (void(*)(::g::Fuse::Node*))Panel__OnResetStyle_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Panel__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Panel__OnUnrooted_fn;
    type->fp_get_SubNodeCount = (void(*)(::g::Fuse::Node*, int*))Panel__get_SubNodeCount_fn;
    type->interface6.fp_AddChild = (void(*)(uObject*, ::g::Fuse::Node*))Panel__Fuse_Navigation_INavigationPanel_AddChild_fn;
    type->interface6.fp_AddChildAt = (void(*)(uObject*, int*, ::g::Fuse::Node*))Panel__Fuse_Navigation_INavigationPanel_AddChildAt_fn;
    type->interface6.fp_RemoveChild = (void(*)(uObject*, ::g::Fuse::Node*))Panel__Fuse_Navigation_INavigationPanel_RemoveChild_fn;
    type->interface6.fp_GetChild = (void(*)(uObject*, int*, ::g::Fuse::Node**))Panel__Fuse_Navigation_INavigationPanel_GetChild_fn;
    type->interface7.fp_Add = (void(*)(uObject*, void*))Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Add_fn;
    type->interface7.fp_Remove = (void(*)(uObject*, void*))Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Remove_fn;
    type->interface6.fp_get_ChildCount = (void(*)(uObject*, int*))Panel__Fuse_Navigation_INavigationPanel_get_ChildCount_fn;
    type->interface6.fp_get_Children = (void(*)(uObject*, uObject**))Panel__get_Children_fn;
    type->interface6.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__get_ActualSize_fn;
    type->interface6.fp_get_HasChildren = (void(*)(uObject*, bool*))Panel__get_HasChildren_fn;
    type->interface6.fp_add_ChildAdded = (void(*)(uObject*, uDelegate*))Panel__add_ChildAdded_fn;
    type->interface6.fp_remove_ChildAdded = (void(*)(uObject*, uDelegate*))Panel__remove_ChildAdded_fn;
    type->interface6.fp_add_ChildRemoved = (void(*)(uObject*, uDelegate*))Panel__add_ChildRemoved_fn;
    type->interface6.fp_remove_ChildRemoved = (void(*)(uObject*, uDelegate*))Panel__remove_ChildRemoved_fn;
    type->interface6.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface6.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_add_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__add_Update_fn;
    type->interface6.fp_remove_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__remove_Update_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::STRINGS[9] = uString::Const("Use `Layer=\"Background\"` instead of setting the appearance on a Panel");
    ::STRINGS[10] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Controls\\0.19.3\\$.uno");
    ::STRINGS[11] = uString::Const("SetAppearance");
    ::TYPES[124] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Panel_typeof(), ::g::Fuse::Node_typeof());
    ::TYPES[125] = ::g::Uno::Action1_typeof()->MakeType(Panel_typeof());
    ::TYPES[126] = ::g::Uno::Action2_typeof()->MakeType(Panel_typeof(), ::g::Fuse::Node_typeof());
    ::TYPES[127] = ::g::Uno::Func1_typeof()->MakeType(Panel_typeof(), ::g::Fuse::Node_typeof());
    ::TYPES[128] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Panel_typeof(), ::g::Fuse::Layouts::Layout_typeof());
    ::TYPES[129] = ::g::Fuse::Layouts::Layouts_typeof();
    ::TYPES[130] = ::g::Uno::Action2_typeof()->MakeType(Panel_typeof(), ::g::Fuse::Layouts::Layout_typeof());
    ::TYPES[131] = ::g::Uno::Func1_typeof()->MakeType(Panel_typeof(), ::g::Fuse::Layouts::Layout_typeof());
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[21] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[22] = ::g::Uno::Bool_typeof();
    ::TYPES[132] = ::g::Fuse::BeginRemoveArgs_typeof();
    ::TYPES[133] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[122] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[123] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[17] = ::g::Uno::Delegate_typeof();
    ::TYPES[33] = ::g::Uno::EventHandler_typeof();
    ::TYPES[19] = uObject_typeof();
    ::TYPES[34] = ::g::Uno::EventArgs_typeof();
    ::TYPES[134] = ::g::Uno::Comparison_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[135] = ::g::Fuse::Controls::Control_typeof();
    ::TYPES[136] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[26] = ::g::Uno::Int_typeof();
    ::TYPES[137] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[138] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[37] = ::g::Uno::Action_typeof();
    ::TYPES[139] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[140] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Node_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(Panel_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(Panel_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(Panel_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(Panel_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(Panel_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(Panel_type, interface5),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(Panel_type, interface6),
        ::g::Fuse::Triggers::IAddRemove_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(Panel_type, interface7));
    type->SetFields(89,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Controls::Panel, _appearance), 0,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Panel, _children), 0,
        ::g::Fuse::Elements::ElementBatcher_typeof(), offsetof(::g::Fuse::Controls::Panel, _elementBatcher), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Panel, _elementBatchValid), 0,
        ::g::Fuse::Layouts::Layout_typeof(), offsetof(::g::Fuse::Controls::Panel, _layout), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Panel, _nodeZOrders), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Panel, _sortedZOrder), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Panel, _zOrder), 0,
        ::g::Uno::EventHandler1_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Panel, ChildAdded1), 0,
        ::g::Uno::EventHandler1_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Panel, ChildRemoved1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Controls::Panel, ZOrderChanged1), 0,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Panel_typeof(), ::g::Fuse::Node_typeof()), (uintptr_t)&::g::Fuse::Controls::Panel::AppearanceProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Panel_typeof(), ::g::Fuse::Layouts::Layout_typeof()), (uintptr_t)&::g::Fuse::Controls::Panel::LayoutProperty_, uFieldFlagsStatic);
    type->Reflection.SetFields(2,
        new uField("AppearanceProperty", 100),
        new uField("LayoutProperty", 101));
    type->Reflection.SetFunctions(18,
        new uFunction("AddStyleChild", NULL, (void*)Panel__AddStyleChild_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("get_Appearance", NULL, (void*)Panel__get_Appearance_fn, 0, false, ::g::Fuse::Node_typeof(), 0),
        new uFunction("set_Appearance", NULL, (void*)Panel__set_Appearance_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("BeginRemoveChild", NULL, (void*)Panel__BeginRemoveChild_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("BringToFront", NULL, (void*)Panel__BringToFront_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("add_ChildAdded", NULL, (void*)Panel__add_ChildAdded_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Fuse::Node_typeof())),
        new uFunction("remove_ChildAdded", NULL, (void*)Panel__remove_ChildAdded_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Fuse::Node_typeof())),
        new uFunction("add_ChildRemoved", NULL, (void*)Panel__add_ChildRemoved_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Fuse::Node_typeof())),
        new uFunction("remove_ChildRemoved", NULL, (void*)Panel__remove_ChildRemoved_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler1_typeof()->MakeType(::g::Fuse::Node_typeof())),
        new uFunction("get_Children", NULL, (void*)Panel__get_Children_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof()), 0),
        new uFunction("GetLayoutMaster", NULL, (void*)Panel__GetLayoutMaster_fn, 0, true, ::g::Fuse::Elements::Element_typeof(), 1, ::g::Fuse::Elements::Element_typeof()),
        new uFunction("get_HasChildren", NULL, (void*)Panel__get_HasChildren_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_Layout", NULL, (void*)Panel__get_Layout_fn, 0, false, ::g::Fuse::Layouts::Layout_typeof(), 0),
        new uFunction("set_Layout", NULL, (void*)Panel__set_Layout_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Layouts::Layout_typeof()),
        new uFunction(".ctor", NULL, (void*)Panel__New1_fn, 0, true, Panel_typeof(), 0),
        new uFunction("SendToBack", NULL, (void*)Panel__SendToBack_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("SetLayoutMaster", NULL, (void*)Panel__SetLayoutMaster_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Elements::Element_typeof(), ::g::Fuse::Elements::Element_typeof()),
        new uFunction("SetSingleChild", NULL, (void*)Panel__SetSingleChild_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()));
    return type;
}

// public generated Panel() :1789
void Panel__ctor_3_fn(Panel* __this)
{
    __this->ctor_3();
}

// public void AddStyleChild(Fuse.Node child) :1845
void Panel__AddStyleChild_fn(Panel* __this, ::g::Fuse::Node* child)
{
    __this->AddStyleChild(child);
}

// public Fuse.Node get_Appearance() :2109
void Panel__get_Appearance_fn(Panel* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Appearance();
}

// public void set_Appearance(Fuse.Node value) :2110
void Panel__set_Appearance_fn(Panel* __this, ::g::Fuse::Node* value)
{
    __this->Appearance(value);
}

// protected override sealed void ArrangePaddingBox(float2 size, Fuse.SizeFlags flags) :2248
void Panel__ArrangePaddingBox_fn(Panel* __this, ::g::Uno::Float2* size, int* flags)
{
    ::g::Uno::Float2 size_ = *size;
    int flags_ = *flags;

    if (__this->HasChildren())
        uPtr(__this->Layout())->ArrangePaddingBox(__this->Children(), __this->Padding(), size_, flags_);

    ::g::Fuse::Elements::Element__ArrangePaddingBox_fn(__this, uCRef(size_), uCRef<int>(flags_));
}

// public void BeginRemoveChild(Fuse.Node child) :1791
void Panel__BeginRemoveChild_fn(Panel* __this, ::g::Fuse::Node* child)
{
    __this->BeginRemoveChild(child);
}

// public void BringToFront(Fuse.Node item) :1908
void Panel__BringToFront_fn(Panel* __this, ::g::Fuse::Node* item)
{
    __this->BringToFront(item);
}

// protected override Uno.Rect CalcRenderBounds() :2255
void Panel__CalcRenderBounds_fn(Panel* __this, ::g::Uno::Rect* __retval)
{
    ::g::Uno::Rect ret10;
    ::g::Fuse::Node* ret11;
    ::g::Uno::Rect r = (::g::Fuse::Elements::Element__CalcRenderBounds_fn(__this, &ret10), ret10);

    if (__this->HasChildren())

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->Children()), ::TYPES[122/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
            r = ::g::Uno::Rect__Union(r, uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(__this->Children()), ::TYPES[123/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret11), ret11))->CalcRenderBoundsInParentSpace());

    return *__retval = r, void();
}

// public generated void add_ChildAdded(Uno.EventHandler<Fuse.Node> value) :2216
void Panel__add_ChildAdded_fn(Panel* __this, uDelegate* value)
{
    __this->add_ChildAdded(value);
}

// public generated void remove_ChildAdded(Uno.EventHandler<Fuse.Node> value) :2216
void Panel__remove_ChildAdded_fn(Panel* __this, uDelegate* value)
{
    __this->remove_ChildAdded(value);
}

// public generated void add_ChildRemoved(Uno.EventHandler<Fuse.Node> value) :2217
void Panel__add_ChildRemoved_fn(Panel* __this, uDelegate* value)
{
    __this->add_ChildRemoved(value);
}

// public generated void remove_ChildRemoved(Uno.EventHandler<Fuse.Node> value) :2217
void Panel__remove_ChildRemoved_fn(Panel* __this, uDelegate* value)
{
    __this->remove_ChildRemoved(value);
}

// public Uno.Collections.IList<Fuse.Node> get_Children() :1836
void Panel__get_Children_fn(Panel* __this, uObject** __retval)
{
    *__retval = __this->Children();
}

// private void EmitZOrderChanged() :1982
void Panel__EmitZOrderChanged_fn(Panel* __this)
{
    __this->EmitZOrderChanged();
}

// internal void EndRemoveChild(Fuse.Node child) :1811
void Panel__EndRemoveChild_fn(Panel* __this, ::g::Fuse::Node* child)
{
    __this->EndRemoveChild(child);
}

// private void EnsureSortedZOrder() :1953
void Panel__EnsureSortedZOrder_fn(Panel* __this)
{
    __this->EnsureSortedZOrder();
}

// protected override sealed bool FastTrackDrawWithOpacity(Fuse.DrawContext dc) :2182
void Panel__FastTrackDrawWithOpacity_fn(Panel* __this, ::g::Fuse::DrawContext* dc, bool* __retval)
{
    if (__this->HasChildren())
        return *__retval = false, void();

    if (__this->Background() == NULL)
        return *__retval = true, void();

    __this->DrawBackground(dc, __this->Opacity());
    return *__retval = true, void();
}

// private void Fuse.Navigation.INavigationPanel.AddChild(Fuse.Node n) :2154
void Panel__Fuse_Navigation_INavigationPanel_AddChild_fn(Panel* __this, ::g::Fuse::Node* n)
{
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__this->Children()), ::TYPES[122/*Uno.Collections.ICollection<Fuse.Node>*/]), n);
}

// private void Fuse.Navigation.INavigationPanel.AddChildAt(int index, Fuse.Node n) :2155
void Panel__Fuse_Navigation_INavigationPanel_AddChildAt_fn(Panel* __this, int* index, ::g::Fuse::Node* n)
{
    int index_ = *index;
    ::g::Uno::Collections::IList::Insert_ex(uInterface(uPtr(__this->Children()), ::TYPES[123/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(index_), n);
}

// private int Fuse.Navigation.INavigationPanel.get_ChildCount() :2161
void Panel__Fuse_Navigation_INavigationPanel_get_ChildCount_fn(Panel* __this, int* __retval)
{
    return *__retval = __this->HasChildren() ? ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->Children()), ::TYPES[122/*Uno.Collections.ICollection<Fuse.Node>*/])) : 0, void();
}

// private Fuse.Node Fuse.Navigation.INavigationPanel.GetChild(int index) :2157
void Panel__Fuse_Navigation_INavigationPanel_GetChild_fn(Panel* __this, int* index, ::g::Fuse::Node** __retval)
{
    int index_ = *index;
    ::g::Fuse::Node* ret15;
    return *__retval = ((index_ < 0) || (index_ >= ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->Children()), ::TYPES[122/*Uno.Collections.ICollection<Fuse.Node>*/])))) ? uCast< ::g::Fuse::Node*>(NULL, ::TYPES[0/*Fuse.Node*/]) : (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(__this->Children()), ::TYPES[123/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(index_), &ret15), ret15), void();
}

// private void Fuse.Navigation.INavigationPanel.RemoveChild(Fuse.Node child) :2156
void Panel__Fuse_Navigation_INavigationPanel_RemoveChild_fn(Panel* __this, ::g::Fuse::Node* child)
{
    bool ret16;
    ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(__this->Children()), ::TYPES[122/*Uno.Collections.ICollection<Fuse.Node>*/]), child, &ret16);
}

// private void Fuse.Triggers.IAddRemove<Fuse.Node>.Add(Fuse.Node n) :2298
void Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Add_fn(Panel* __this, ::g::Fuse::Node* n)
{
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__this->Children()), ::TYPES[122/*Uno.Collections.ICollection<Fuse.Node>*/]), n);
}

// private void Fuse.Triggers.IAddRemove<Fuse.Node>.Remove(Fuse.Node n) :2303
void Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Remove_fn(Panel* __this, ::g::Fuse::Node* n)
{
    __this->BeginRemoveChild(n);
}

// private static Fuse.Node GetAppearance(Fuse.Controls.Panel c) :2127
void Panel__GetAppearance_fn(Panel* c, ::g::Fuse::Node** __retval)
{
    *__retval = Panel::GetAppearance(c);
}

// protected override sealed float2 GetContentSize(float2 fillSize, Fuse.SizeFlags fillSet) :2241
void Panel__GetContentSize_fn(Panel* __this, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 fillSize_ = *fillSize;
    int fillSet_ = *fillSet;
    ::g::Uno::Float2 ret17;

    if (__this->HasChildren())
        return *__retval = uPtr(__this->Layout())->GetContentSize(__this->Children(), fillSize_, fillSet_), void();

    return *__retval = (::g::Fuse::Elements::Element__GetContentSize_fn(__this, uCRef(fillSize_), uCRef<int>(fillSet_), &ret17), ret17), void();
}

// private static Fuse.Layouts.Layout GetLayout(Fuse.Controls.Panel p) :2214
void Panel__GetLayout_fn(Panel* p, ::g::Fuse::Layouts::Layout** __retval)
{
    *__retval = Panel::GetLayout(p);
}

// public static Fuse.Elements.Element GetLayoutMaster(Fuse.Elements.Element elm) :2097
void Panel__GetLayoutMaster_fn(::g::Fuse::Elements::Element* elm, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = Panel::GetLayoutMaster(elm);
}

// public override sealed Fuse.Node GetSubNode(int index) :2291
void Panel__GetSubNode_fn(Panel* __this, int* index, ::g::Fuse::Node** __retval)
{
    int index_ = *index;
    int ret18;
    ::g::Fuse::Node* ret19;
    ::g::Fuse::Node* ret20;
    int ret21;

    if (index_ < (::g::Fuse::Node__get_SubNodeCount_fn(__this, &ret18), ret18))
        return *__retval = (::g::Fuse::Node__GetSubNode_fn(__this, uCRef<int>(index_), &ret19), ret19), void();

    return *__retval = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(__this->Children()), ::TYPES[123/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(index_ - (::g::Fuse::Node__get_SubNodeCount_fn(__this, &ret21), ret21)), &ret20), ret20), void();
}

// internal Fuse.Node GetZOrderChild(int index) :1997
void Panel__GetZOrderChild_fn(Panel* __this, int* index, ::g::Fuse::Node** __retval)
{
    *__retval = __this->GetZOrderChild(*index);
}

// public bool get_HasChildren() :1831
void Panel__get_HasChildren_fn(Panel* __this, bool* __retval)
{
    *__retval = __this->HasChildren();
}

// private void InvalidateZOrder() :1988
void Panel__InvalidateZOrder_fn(Panel* __this)
{
    __this->InvalidateZOrder();
}

// protected override sealed Fuse.LayoutDependent IsMarginBoxDependent(Fuse.Node child) :2314
void Panel__IsMarginBoxDependent_fn(Panel* __this, ::g::Fuse::Node* child, int* __retval)
{
    int outer = uPtr(__this->BoxSizingObject())->IsContentRelativeSize(__this);
    int inner = uPtr(__this->Layout())->IsMarginBoxDependent(child);

    if (outer == 4)
    {
        if (inner == 0)
            return *__retval = 0, void();

        return *__retval = 4, void();
    }
    else if (outer == 0)
    {
        if (inner == 4)
            return *__retval = 1, void();

        if (inner == 0)
            return *__retval = 0, void();

        return *__retval = 3, void();
    }
    else
    {
        if (inner == 4)
            return *__retval = 3, void();

        if (inner == 0)
            return *__retval = 0, void();

        return *__retval = 2, void();
    }
}

// public Fuse.Layouts.Layout get_Layout() :2199
void Panel__get_Layout_fn(Panel* __this, ::g::Fuse::Layouts::Layout** __retval)
{
    *__retval = __this->Layout();
}

// public void set_Layout(Fuse.Layouts.Layout value) :2200
void Panel__set_Layout_fn(Panel* __this, ::g::Fuse::Layouts::Layout* value)
{
    __this->Layout(value);
}

// private void ListChildAdded(Fuse.Node item) :1876
void Panel__ListChildAdded_fn(Panel* __this, ::g::Fuse::Node* item)
{
    __this->ListChildAdded(item);
}

// private void ListChildRemoved(Fuse.Node child) :1889
void Panel__ListChildRemoved_fn(Panel* __this, ::g::Fuse::Node* child)
{
    __this->ListChildRemoved(child);
}

// public generated Panel New() :1789
void Panel__New1_fn(Panel** __retval)
{
    *__retval = Panel::New1();
}

// private static void OnAppearanceChanged(Fuse.Controls.Panel c) :2131
void Panel__OnAppearanceChanged_fn(Panel* c)
{
    Panel::OnAppearanceChanged(c);
}

// protected void OnChildAdded(Fuse.Node elm) :2266
void Panel__OnChildAdded_fn(Panel* __this, ::g::Fuse::Node* elm)
{
    __this->OnChildAdded(elm);
}

// protected void OnChildRemoved(Fuse.Node elm) :2271
void Panel__OnChildRemoved_fn(Panel* __this, ::g::Fuse::Node* elm)
{
    __this->OnChildRemoved(elm);
}

// protected override sealed void OnDrawControl(Fuse.DrawContext dc) :2031
void Panel__OnDrawControl_fn(Panel* __this, ::g::Fuse::DrawContext* dc)
{
    ::g::Fuse::Controls::Control__OnDrawControl_fn(__this, dc);

    if (!__this->HasChildren())
        return;

    if (!__this->ShouldBatch())
    {
        if (__this->_elementBatcher != NULL)
            __this->_elementBatcher = NULL;

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->Children()), ::TYPES[122/*Uno.Collections.ICollection<Fuse.Node>*/])); ++i)
            uPtr(__this->GetZOrderChild(i))->Draw(dc);
    }
    else
    {
        if ((__this->_elementBatcher == NULL) || !__this->_elementBatchValid)
        {
            if (__this->_elementBatcher == NULL)
                __this->_elementBatcher = ::g::Fuse::Elements::ElementBatcher::New1();
            else
                uPtr(__this->_elementBatcher)->RemoveAllElements();

            for (int i1 = 0; i1 < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->Children()), ::TYPES[122/*Uno.Collections.ICollection<Fuse.Node>*/])); ++i1)
                uPtr(__this->_elementBatcher)->AddElement(__this->GetZOrderChild(i1));

            __this->_elementBatchValid = true;
        }

        uPtr(__this->_elementBatcher)->Draw(dc);
    }
}

// protected override sealed void OnHitTestChildren(Fuse.HitTestContext htc) :2276
void Panel__OnHitTestChildren_fn(Panel* __this, ::g::Fuse::HitTestContext* htc)
{
    if (__this->HasChildren())

        for (int i = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->Children()), ::TYPES[122/*Uno.Collections.ICollection<Fuse.Node>*/])) - 1; i >= 0; --i)
            uPtr(__this->GetZOrderChild(i))->HitTest(htc);

    ::g::Fuse::Elements::Element__OnHitTestChildren_fn(__this, htc);
}

// protected override sealed void OnInvalidateLayout() :2343
void Panel__OnInvalidateLayout_fn(Panel* __this)
{
    ::g::Fuse::Elements::Element__OnInvalidateLayout_fn(__this);

    if (__this->HasChildren())
        __this->InvalidateZOrder();
}

// private static void OnLayoutChanged(Fuse.Controls.Panel p) :2203
void Panel__OnLayoutChanged_fn(Panel* p)
{
    Panel::OnLayoutChanged(p);
}

// protected override void OnResetStyle() :2219
void Panel__OnResetStyle_fn(Panel* __this)
{
    if (__this->HasChildren())
        __this->RemoveStyleChildren();

    ::g::Fuse::Elements::Element__OnResetStyle_fn(__this);
}

// protected override void OnRooted() :2227
void Panel__OnRooted_fn(Panel* __this)
{
    if (__this->_layout != NULL)
        uPtr(__this->_layout)->SetContainer(__this);

    ::g::Fuse::Controls::Control__OnRooted_fn(__this);
}

// protected override void OnUnrooted() :2234
void Panel__OnUnrooted_fn(Panel* __this)
{
    if (__this->_layout != NULL)
        uPtr(__this->_layout)->RemoveContainer(__this);

    ::g::Fuse::Controls::Control__OnUnrooted_fn(__this);
}

// private void RemoveStyleChildren() :2003
void Panel__RemoveStyleChildren_fn(Panel* __this)
{
    __this->RemoveStyleChildren();
}

// public void SendToBack(Fuse.Node item) :1925
void Panel__SendToBack_fn(Panel* __this, ::g::Fuse::Node* item)
{
    __this->SendToBack(item);
}

// private static void SetAppearance(Fuse.Controls.Panel c, Fuse.Node a) :2112
void Panel__SetAppearance_fn(Panel* c, ::g::Fuse::Node* a)
{
    Panel::SetAppearance(c, a);
}

// private static void SetLayout(Fuse.Controls.Panel p, Fuse.Layouts.Layout value) :2205
void Panel__SetLayout_fn(Panel* p, ::g::Fuse::Layouts::Layout* value)
{
    Panel::SetLayout(p, value);
}

// public static void SetLayoutMaster(Fuse.Elements.Element elm, Fuse.Elements.Element master) :2080
void Panel__SetLayoutMaster_fn(::g::Fuse::Elements::Element* elm, ::g::Fuse::Elements::Element* master)
{
    Panel::SetLayoutMaster(elm, master);
}

// public void SetSingleChild(Fuse.Node e) :2308
void Panel__SetSingleChild_fn(Panel* __this, ::g::Fuse::Node* e)
{
    __this->SetSingleChild(e);
}

// private bool ShouldBatch() :2016
void Panel__ShouldBatch_fn(Panel* __this, bool* __retval)
{
    *__retval = __this->ShouldBatch();
}

// private void SoftInvalidateZOrder([bool force]) :1970
void Panel__SoftInvalidateZOrder_fn(Panel* __this, bool* force)
{
    __this->SoftInvalidateZOrder(*force);
}

// public override sealed int get_SubNodeCount() :2288
void Panel__get_SubNodeCount_fn(Panel* __this, int* __retval)
{
    int ret31;
    return *__retval = (::g::Fuse::Node__get_SubNodeCount_fn(__this, &ret31), ret31) + (__this->HasChildren() ? ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->Children()), ::TYPES[122/*Uno.Collections.ICollection<Fuse.Node>*/])) : 0), void();
}

// private Uno.Collections.List<Fuse.Node> get_ZOrder() :1855
void Panel__get_ZOrder_fn(Panel* __this, ::g::Uno::Collections::List** __retval)
{
    *__retval = __this->ZOrder();
}

// internal generated void add_ZOrderChanged(Uno.EventHandler value) :1968
void Panel__add_ZOrderChanged_fn(Panel* __this, uDelegate* value)
{
    __this->add_ZOrderChanged(value);
}

// internal generated void remove_ZOrderChanged(Uno.EventHandler value) :1968
void Panel__remove_ZOrderChanged_fn(Panel* __this, uDelegate* value)
{
    __this->remove_ZOrderChanged(value);
}

// private int ZOrderComparator(Fuse.Node a, Fuse.Node b) :1942
void Panel__ZOrderComparator_fn(Panel* __this, ::g::Fuse::Node* a, ::g::Fuse::Node* b, int* __retval)
{
    *__retval = __this->ZOrderComparator(a, b);
}

uSStrong< ::g::Fuse::StyleProperty1*> Panel::AppearanceProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Panel::LayoutProperty_;

// public generated Panel() [instance] :1789
void Panel::ctor_3()
{
    ctor_2();
}

// public void AddStyleChild(Fuse.Node child) [instance] :1845
void Panel::AddStyleChild(::g::Fuse::Node* child)
{
    uPtr(child)->AddedByStyle(true);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[122/*Uno.Collections.ICollection<Fuse.Node>*/]), child);
}

// public Fuse.Node get_Appearance() [instance] :2109
::g::Fuse::Node* Panel::Appearance()
{
    return _appearance;
}

// public void set_Appearance(Fuse.Node value) [instance] :2110
void Panel::Appearance(::g::Fuse::Node* value)
{
    bool ret29;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Panel::AppearanceProperty()), this, value, &ret29);
}

// public void BeginRemoveChild(Fuse.Node child) [instance] :1791
void Panel::BeginRemoveChild(::g::Fuse::Node* child)
{
    bool ret8;

    if (!IsRooted())
    {
        ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(Children()), ::TYPES[122/*Uno.Collections.ICollection<Fuse.Node>*/]), child, &ret8);
        return;
    }

    ::g::Fuse::Controls::BeginRemoveArgsImpl* args = ::g::Fuse::Controls::BeginRemoveArgsImpl::New2(child, this);
    uPtr(child)->OnBeginRemove(args);

    if (args->HasSubscribers())
    {
        uPtr(child)->_pendingRemove = args;
        InvalidateLayout(2);
        return;
    }

    EndRemoveChild(child);
}

// public void BringToFront(Fuse.Node item) [instance] :1908
void Panel::BringToFront(::g::Fuse::Node* item)
{
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > ret9;

    if (!HasChildren())
        return;

    int mx = uPtr(item)->ZOffset;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(ZOrder()), &ret9), ret9); enum1.MoveNext(::TYPES[133/*Uno.Collections.List<Fuse.Node>.Enumerator*/]); )
    {
        ::g::Fuse::Node* c = enum1.Current(::TYPES[133/*Uno.Collections.List<Fuse.Node>.Enumerator*/]);

        if (uPtr(c)->ZLayer == uPtr(item)->ZLayer)
            mx = ::g::Uno::Math::Max8(mx, uPtr(c)->ZOffset);
    }

    item->ZOffset = (mx + 1);
    item->ZOffsetFixed = true;
    _elementBatchValid = false;
    SoftInvalidateZOrder(false);
}

// public generated void add_ChildAdded(Uno.EventHandler<Fuse.Node> value) [instance] :2216
void Panel::add_ChildAdded(uDelegate* value)
{
    ChildAdded1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ChildAdded1, value), ::TYPES[137/*Uno.EventHandler<Fuse.Node>*/]);
}

// public generated void remove_ChildAdded(Uno.EventHandler<Fuse.Node> value) [instance] :2216
void Panel::remove_ChildAdded(uDelegate* value)
{
    ChildAdded1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ChildAdded1, value), ::TYPES[137/*Uno.EventHandler<Fuse.Node>*/]);
}

// public generated void add_ChildRemoved(Uno.EventHandler<Fuse.Node> value) [instance] :2217
void Panel::add_ChildRemoved(uDelegate* value)
{
    ChildRemoved1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ChildRemoved1, value), ::TYPES[137/*Uno.EventHandler<Fuse.Node>*/]);
}

// public generated void remove_ChildRemoved(Uno.EventHandler<Fuse.Node> value) [instance] :2217
void Panel::remove_ChildRemoved(uDelegate* value)
{
    ChildRemoved1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ChildRemoved1, value), ::TYPES[137/*Uno.EventHandler<Fuse.Node>*/]);
}

// public Uno.Collections.IList<Fuse.Node> get_Children() [instance] :1836
uObject* Panel::Children()
{
    if (_children == NULL)
        _children = (uObject*)((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[139/*Uno.Collections.ObservableList<Fuse.Node>*/], uDelegate::New(::TYPES[140/*Uno.Action<Fuse.Node>*/], (void*)Panel__ListChildAdded_fn, this), uDelegate::New(::TYPES[140/*Uno.Action<Fuse.Node>*/], (void*)Panel__ListChildRemoved_fn, this)));

    return _children;
}

// private void EmitZOrderChanged() [instance] :1982
void Panel::EmitZOrderChanged()
{
    if (::g::Uno::Delegate::op_Inequality(ZOrderChanged1, NULL))
        uPtr(ZOrderChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// internal void EndRemoveChild(Fuse.Node child) [instance] :1811
void Panel::EndRemoveChild(::g::Fuse::Node* child)
{
    bool ret14;
    ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(Children()), ::TYPES[122/*Uno.Collections.ICollection<Fuse.Node>*/]), child, &ret14);
}

// private void EnsureSortedZOrder() [instance] :1953
void Panel::EnsureSortedZOrder()
{
    if (_sortedZOrder && _nodeZOrders)
        return;

    if (!_nodeZOrders)
    {
        ::g::Fuse::Layouts::Layout::AssignZOrder(Children());
        _nodeZOrders = true;
    }

    uPtr(ZOrder())->Sort(uDelegate::New(::TYPES[134/*Uno.Comparison<Fuse.Node>*/], (void*)Panel__ZOrderComparator_fn, this));
    _sortedZOrder = true;
}

// internal Fuse.Node GetZOrderChild(int index) [instance] :1997
::g::Fuse::Node* Panel::GetZOrderChild(int index)
{
    ::g::Fuse::Node* ret22;
    EnsureSortedZOrder();
    return (::g::Uno::Collections::List__get_Item_fn(uPtr(ZOrder()), uCRef<int>(index), &ret22), ret22);
}

// public bool get_HasChildren() [instance] :1831
bool Panel::HasChildren()
{
    return (_children != NULL) && (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_children), ::TYPES[122/*Uno.Collections.ICollection<Fuse.Node>*/])) > 0);
}

// private void InvalidateZOrder() [instance] :1988
void Panel::InvalidateZOrder()
{
    if (!_nodeZOrders)
        return;

    _nodeZOrders = false;
    SoftInvalidateZOrder(true);
}

// public Fuse.Layouts.Layout get_Layout() [instance] :2199
::g::Fuse::Layouts::Layout* Panel::Layout()
{
    ::g::Fuse::Layouts::Layout* ind4 = _layout;
    return (ind4 != NULL) ? ind4 : (::g::Fuse::Layouts::Layout*)::g::Fuse::Layouts::Layouts::Default();
}

// public void set_Layout(Fuse.Layouts.Layout value) [instance] :2200
void Panel::Layout(::g::Fuse::Layouts::Layout* value)
{
    bool ret30;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Panel::LayoutProperty()), this, value, &ret30);
}

// private void ListChildAdded(Fuse.Node item) [instance] :1876
void Panel::ListChildAdded(::g::Fuse::Node* item)
{
    ::g::Uno::Collections::List__Insert_fn(uPtr(ZOrder()), uCRef<int>(0), item);
    InvalidateZOrder();
    uPtr(item)->OnAdded(this);
    _elementBatchValid = false;
    OnChildAdded(item);

    if (::g::Uno::Delegate::op_Inequality(ChildAdded1, NULL))
        uPtr(ChildAdded1)->Invoke(2, this, item);
}

// private void ListChildRemoved(Fuse.Node child) [instance] :1889
void Panel::ListChildRemoved(::g::Fuse::Node* child)
{
    bool ret23;
    ::g::Uno::Collections::List__Remove_fn(uPtr(ZOrder()), child, &ret23);
    uPtr(child)->OnRemoved(this);
    ::g::Fuse::Elements::Element* elm = uAs< ::g::Fuse::Elements::Element*>(child, ::TYPES[21/*Fuse.Elements.Element*/]);

    if ((elm != NULL) && (uPtr(elm)->ElementBatchEntry() != NULL))
    {
        uPtr(uPtr(elm)->ElementBatchEntry())->OnRemoved();
        elm->ElementBatchEntry(NULL);
    }

    _elementBatchValid = false;
    OnChildRemoved(child);

    if (::g::Uno::Delegate::op_Inequality(ChildRemoved1, NULL))
        uPtr(ChildRemoved1)->Invoke(2, this, child);
}

// protected void OnChildAdded(Fuse.Node elm) [instance] :2266
void Panel::OnChildAdded(::g::Fuse::Node* elm)
{
    InvalidateLayout(2);
}

// protected void OnChildRemoved(Fuse.Node elm) [instance] :2271
void Panel::OnChildRemoved(::g::Fuse::Node* elm)
{
    InvalidateLayout(2);
}

// private void RemoveStyleChildren() [instance] :2003
void Panel::RemoveStyleChildren()
{
    ::g::Fuse::Node* ret24;
    bool ret25;

    for (int i = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Children()), ::TYPES[122/*Uno.Collections.ICollection<Fuse.Node>*/])) - 1; i >= 0; --i)
    {
        ::g::Fuse::Node* n = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Children()), ::TYPES[123/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret24), ret24);

        if (uPtr(n)->AddedByStyle())
            ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(Children()), ::TYPES[122/*Uno.Collections.ICollection<Fuse.Node>*/]), n, &ret25);
    }
}

// public void SendToBack(Fuse.Node item) [instance] :1925
void Panel::SendToBack(::g::Fuse::Node* item)
{
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > ret26;

    if (!HasChildren())
        return;

    int mn = uPtr(item)->ZOffset;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > enum2 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(ZOrder()), &ret26), ret26); enum2.MoveNext(::TYPES[133/*Uno.Collections.List<Fuse.Node>.Enumerator*/]); )
    {
        ::g::Fuse::Node* c = enum2.Current(::TYPES[133/*Uno.Collections.List<Fuse.Node>.Enumerator*/]);

        if (uPtr(c)->ZLayer == uPtr(item)->ZLayer)
            mn = ::g::Uno::Math::Min8(mn, uPtr(c)->ZOffset);
    }

    item->ZOffset = (mn - 1);
    item->ZOffsetFixed = true;
    _elementBatchValid = false;
    SoftInvalidateZOrder(false);
}

// public void SetSingleChild(Fuse.Node e) [instance] :2308
void Panel::SetSingleChild(::g::Fuse::Node* e)
{
    ::g::Uno::Collections::ICollection::Clear(uInterface(uPtr(Children()), ::TYPES[122/*Uno.Collections.ICollection<Fuse.Node>*/]));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[122/*Uno.Collections.ICollection<Fuse.Node>*/]), e);
}

// private bool ShouldBatch() [instance] :2016
bool Panel::ShouldBatch()
{
    ::g::Fuse::Node* ret28;

    if (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Children()), ::TYPES[122/*Uno.Collections.ICollection<Fuse.Node>*/])) < 10)
        return false;

    int batchable = 0;

    for (uObject* enum3 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(Children()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[0/*Fuse.Node*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum3), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Fuse::Node* node = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum3), ::TYPES[138/*Uno.Collections.IEnumerator<Fuse.Node>*/]), &ret28), ret28);

        if (::g::Fuse::Elements::ElementBatcher::ShouldBatchElement(node))
            batchable++;
    }

    return batchable > (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Children()), ::TYPES[122/*Uno.Collections.ICollection<Fuse.Node>*/])) / 2);
}

// private void SoftInvalidateZOrder([bool force]) [instance] :1970
void Panel::SoftInvalidateZOrder(bool force)
{
    if (!_sortedZOrder && !force)
        return;

    _sortedZOrder = false;
    InvalidateVisual();

    if (::g::Uno::Delegate::op_Inequality(ZOrderChanged1, NULL))
        ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[37/*Uno.Action*/], (void*)Panel__EmitZOrderChanged_fn, this));
}

// private Uno.Collections.List<Fuse.Node> get_ZOrder() [instance] :1855
::g::Uno::Collections::List* Panel::ZOrder()
{
    if (_zOrder == NULL)
        _zOrder = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[136/*Uno.Collections.List<Fuse.Node>*/]));

    return _zOrder;
}

// internal generated void add_ZOrderChanged(Uno.EventHandler value) [instance] :1968
void Panel::add_ZOrderChanged(uDelegate* value)
{
    ZOrderChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ZOrderChanged1, value), ::TYPES[33/*Uno.EventHandler*/]);
}

// internal generated void remove_ZOrderChanged(Uno.EventHandler value) [instance] :1968
void Panel::remove_ZOrderChanged(uDelegate* value)
{
    ZOrderChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ZOrderChanged1, value), ::TYPES[33/*Uno.EventHandler*/]);
}

// private int ZOrderComparator(Fuse.Node a, Fuse.Node b) [instance] :1942
int Panel::ZOrderComparator(::g::Fuse::Node* a, ::g::Fuse::Node* b)
{
    if (uPtr(a)->ZLayer != uPtr(b)->ZLayer)
        return uPtr(a)->ZLayer - uPtr(b)->ZLayer;

    return uPtr(a)->ZOffset - uPtr(b)->ZOffset;
}

// private static Fuse.Node GetAppearance(Fuse.Controls.Panel c) [static] :2127
::g::Fuse::Node* Panel::GetAppearance(Panel* c)
{
    Panel_typeof()->Init();
    return uPtr(c)->_appearance;
}

// private static Fuse.Layouts.Layout GetLayout(Fuse.Controls.Panel p) [static] :2214
::g::Fuse::Layouts::Layout* Panel::GetLayout(Panel* p)
{
    Panel_typeof()->Init();
    return uPtr(p)->_layout;
}

// public static Fuse.Elements.Element GetLayoutMaster(Fuse.Elements.Element elm) [static] :2097
::g::Fuse::Elements::Element* Panel::GetLayoutMaster(::g::Fuse::Elements::Element* elm)
{
    Panel_typeof()->Init();
    return ::g::Fuse::Elements::LayoutMasterBoxSizing::GetLayoutMaster(elm);
}

// public generated Panel New() [static] :1789
Panel* Panel::New1()
{
    Panel* obj5 = (Panel*)uNew(Panel_typeof());
    obj5->ctor_3();
    return obj5;
}

// private static void OnAppearanceChanged(Fuse.Controls.Panel c) [static] :2131
void Panel::OnAppearanceChanged(Panel* c)
{
    Panel_typeof()->Init();
}

// private static void OnLayoutChanged(Fuse.Controls.Panel p) [static] :2203
void Panel::OnLayoutChanged(Panel* p)
{
    Panel_typeof()->Init();
    uPtr(p)->InvalidateLayout(2);
}

// private static void SetAppearance(Fuse.Controls.Panel c, Fuse.Node a) [static] :2112
void Panel::SetAppearance(Panel* c, ::g::Fuse::Node* a)
{
    Panel_typeof()->Init();
    bool ret27;
    ::g::Fuse::Diagnostics::Deprecated(::STRINGS[9/*"Use `Layer=...*/], c, ::STRINGS[10/*"C:\\Program...*/], 2114, ::STRINGS[11/*"SetAppearance"*/]);

    if (uPtr(c)->_appearance != NULL)
        ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(uPtr(c)->Children()), ::TYPES[122/*Uno.Collections.ICollection<Fuse.Node>*/]), a, &ret27);

    c->_appearance = a;

    if (c->_appearance != NULL)
    {
        uPtr(a)->Layer(0);
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(c)->Children()), ::TYPES[122/*Uno.Collections.ICollection<Fuse.Node>*/]), a);
    }
}

// private static void SetLayout(Fuse.Controls.Panel p, Fuse.Layouts.Layout value) [static] :2205
void Panel::SetLayout(Panel* p, ::g::Fuse::Layouts::Layout* value)
{
    Panel_typeof()->Init();

    if (uPtr(p)->IsLocalRooted() && (uPtr(p)->_layout != NULL))
        uPtr(uPtr(p)->_layout)->RemoveContainer(p);

    p->_layout = value;

    if (p->IsLocalRooted() && (p->_layout != NULL))
        uPtr(p->_layout)->SetContainer(p);
}

// public static void SetLayoutMaster(Fuse.Elements.Element elm, Fuse.Elements.Element master) [static] :2080
void Panel::SetLayoutMaster(::g::Fuse::Elements::Element* elm, ::g::Fuse::Elements::Element* master)
{
    Panel_typeof()->Init();

    if (master == NULL)
    {
        uPtr(elm)->BoxSizing(0);
        elm->LayoutRole(0);
        ::g::Fuse::Elements::LayoutMasterBoxSizing::SetLayoutMaster(elm, NULL);
    }
    else
    {
        uPtr(elm)->BoxSizing(3);
        elm->LayoutRole(2);
        ::g::Fuse::Elements::LayoutMasterBoxSizing::SetLayoutMaster(elm, master);
    }
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(2659)
// ------------------------------------------------------------

// public sealed class Path :2659
// {
::g::Fuse::Controls::Panel_type* Path_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 111;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(Path);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Fuse.Controls.Path", options);
    type->SetBase(::g::Fuse::Controls::Shape_typeof());
    type->fp_ctor_ = (void*)Path__New2_fn;
    type->interface6.fp_AddChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChild_fn;
    type->interface6.fp_AddChildAt = (void(*)(uObject*, int*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChildAt_fn;
    type->interface6.fp_RemoveChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_RemoveChild_fn;
    type->interface6.fp_GetChild = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_GetChild_fn;
    type->interface7.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Add_fn;
    type->interface7.fp_Remove = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Remove_fn;
    type->interface6.fp_get_ChildCount = (void(*)(uObject*, int*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_get_ChildCount_fn;
    type->interface6.fp_get_Children = (void(*)(uObject*, uObject**))::g::Fuse::Controls::Panel__get_Children_fn;
    type->interface6.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__get_ActualSize_fn;
    type->interface6.fp_get_HasChildren = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__get_HasChildren_fn;
    type->interface6.fp_add_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildAdded_fn;
    type->interface6.fp_remove_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildAdded_fn;
    type->interface6.fp_add_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildRemoved_fn;
    type->interface6.fp_remove_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildRemoved_fn;
    type->interface6.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface6.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_add_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__add_Update_fn;
    type->interface6.fp_remove_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__remove_Update_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::TYPES[141] = ::g::Fuse::Internal::SizingContainer_typeof();
    ::TYPES[26] = ::g::Uno::Int_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Fuse::Triggers::IAddRemove_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Panel_type, interface7));
    type->SetFields(106,
        ::g::Fuse::Controls::FillRule_typeof(), offsetof(::g::Fuse::Controls::Path, _fillRule), 0,
        ::g::Fuse::Controls::FitMode_typeof(), offsetof(::g::Fuse::Controls::Path, _fitMode), 0,
        ::g::Fuse::Drawing::PathGeometry_typeof(), offsetof(::g::Fuse::Controls::Path, _geometry), 0,
        ::g::Fuse::Controls::PathScaleMode_typeof(), offsetof(::g::Fuse::Controls::Path, _scaleMode), 0,
        ::g::Fuse::Internal::SizingContainer_typeof(), offsetof(::g::Fuse::Controls::Path, sizing), 0);
    type->Reflection.SetFunctions(17,
        new uFunction("get_ContentAlignment", NULL, (void*)Path__get_ContentAlignment_fn, 0, false, ::g::Fuse::Elements::Alignment_typeof(), 0),
        new uFunction("set_ContentAlignment", NULL, (void*)Path__set_ContentAlignment_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::Alignment_typeof()),
        new uFunction("get_Data", NULL, (void*)Path__get_Data_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Data", NULL, (void*)Path__set_Data_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_FillRule", NULL, (void*)Path__get_FillRule_fn, 0, false, ::g::Fuse::Controls::FillRule_typeof(), 0),
        new uFunction("set_FillRule", NULL, (void*)Path__set_FillRule_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::FillRule_typeof()),
        new uFunction("get_FitMode", NULL, (void*)Path__get_FitMode_fn, 0, false, ::g::Fuse::Controls::FitMode_typeof(), 0),
        new uFunction("set_FitMode", NULL, (void*)Path__set_FitMode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::FitMode_typeof()),
        new uFunction("get_Geometry", NULL, (void*)Path__get_Geometry_fn, 0, false, ::g::Fuse::Drawing::PathGeometry_typeof(), 0),
        new uFunction("set_Geometry", NULL, (void*)Path__set_Geometry_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::PathGeometry_typeof()),
        new uFunction(".ctor", NULL, (void*)Path__New2_fn, 0, true, Path_typeof(), 0),
        new uFunction("get_ScaleMode", NULL, (void*)Path__get_ScaleMode_fn, 0, false, ::g::Fuse::Controls::PathScaleMode_typeof(), 0),
        new uFunction("set_ScaleMode", NULL, (void*)Path__set_ScaleMode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::PathScaleMode_typeof()),
        new uFunction("get_StretchDirection", NULL, (void*)Path__get_StretchDirection_fn, 0, false, ::g::Fuse::Elements::StretchDirection_typeof(), 0),
        new uFunction("set_StretchDirection", NULL, (void*)Path__set_StretchDirection_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::StretchDirection_typeof()),
        new uFunction("get_StretchMode", NULL, (void*)Path__get_StretchMode_fn, 0, false, ::g::Fuse::Elements::StretchMode_typeof(), 0),
        new uFunction("set_StretchMode", NULL, (void*)Path__set_StretchMode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::StretchMode_typeof()));
    return type;
}

// public generated Path() :2659
void Path__ctor_5_fn(Path* __this)
{
    __this->ctor_5();
}

// public Fuse.Elements.Alignment get_ContentAlignment() :2689
void Path__get_ContentAlignment_fn(Path* __this, int* __retval)
{
    *__retval = __this->ContentAlignment();
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value) :2690
void Path__set_ContentAlignment_fn(Path* __this, int* value)
{
    __this->ContentAlignment(*value);
}

// public string get_Data() :2740
void Path__get_Data_fn(Path* __this, uString** __retval)
{
    *__retval = __this->Data();
}

// public void set_Data(string value) :2741
void Path__set_Data_fn(Path* __this, uString* value)
{
    __this->Data(value);
}

// public Fuse.Controls.FillRule get_FillRule() :2748
void Path__get_FillRule_fn(Path* __this, int* __retval)
{
    *__retval = __this->FillRule();
}

// public void set_FillRule(Fuse.Controls.FillRule value) :2749
void Path__set_FillRule_fn(Path* __this, int* value)
{
    __this->FillRule(*value);
}

// public Fuse.Controls.FitMode get_FitMode() :2701
void Path__get_FitMode_fn(Path* __this, int* __retval)
{
    *__retval = __this->FitMode();
}

// public void set_FitMode(Fuse.Controls.FitMode value) :2702
void Path__set_FitMode_fn(Path* __this, int* value)
{
    __this->FitMode(*value);
}

// public Fuse.Drawing.PathGeometry get_Geometry() :2729
void Path__get_Geometry_fn(Path* __this, ::g::Fuse::Drawing::PathGeometry** __retval)
{
    *__retval = __this->Geometry();
}

// public void set_Geometry(Fuse.Drawing.PathGeometry value) :2730
void Path__set_Geometry_fn(Path* __this, ::g::Fuse::Drawing::PathGeometry* value)
{
    __this->Geometry(value);
}

// public generated Path New() :2659
void Path__New2_fn(Path** __retval)
{
    *__retval = Path::New2();
}

// public Fuse.Controls.PathScaleMode get_ScaleMode() :2715
void Path__get_ScaleMode_fn(Path* __this, int* __retval)
{
    *__retval = __this->ScaleMode();
}

// public void set_ScaleMode(Fuse.Controls.PathScaleMode value) :2716
void Path__set_ScaleMode_fn(Path* __this, int* value)
{
    __this->ScaleMode(*value);
}

// internal Fuse.Internal.SizingContainer get_Sizing() :2662
void Path__get_Sizing_fn(Path* __this, ::g::Fuse::Internal::SizingContainer** __retval)
{
    *__retval = __this->Sizing();
}

// public Fuse.Elements.StretchDirection get_StretchDirection() :2678
void Path__get_StretchDirection_fn(Path* __this, int* __retval)
{
    *__retval = __this->StretchDirection();
}

// public void set_StretchDirection(Fuse.Elements.StretchDirection value) :2679
void Path__set_StretchDirection_fn(Path* __this, int* value)
{
    __this->StretchDirection(*value);
}

// public Fuse.Elements.StretchMode get_StretchMode() :2667
void Path__get_StretchMode_fn(Path* __this, int* __retval)
{
    *__retval = __this->StretchMode();
}

// public void set_StretchMode(Fuse.Elements.StretchMode value) :2668
void Path__set_StretchMode_fn(Path* __this, int* value)
{
    __this->StretchMode(*value);
}

// public generated Path() [instance] :2659
void Path::ctor_5()
{
    sizing = ::g::Fuse::Internal::SizingContainer::New1();
    _fitMode = 2;
    _scaleMode = 1;
    _geometry = ::g::Fuse::Drawing::PathGeometry::New1();
    ctor_4();
}

// public Fuse.Elements.Alignment get_ContentAlignment() [instance] :2689
int Path::ContentAlignment()
{
    return uPtr(sizing)->align;
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value) [instance] :2690
void Path::ContentAlignment(int value)
{
    if (uPtr(sizing)->SetAlignment(value))
        OnShapeChanged();
}

// public string get_Data() [instance] :2740
uString* Path::Data()
{
    return uPtr(Geometry())->ToString();
}

// public void set_Data(string value) [instance] :2741
void Path::Data(uString* value)
{
    Geometry(::g::Fuse::Drawing::PathGeometry::Parse(value));
}

// public Fuse.Controls.FillRule get_FillRule() [instance] :2748
int Path::FillRule()
{
    return _fillRule;
}

// public void set_FillRule(Fuse.Controls.FillRule value) [instance] :2749
void Path::FillRule(int value)
{
    _fillRule = value;
    OnShapeChanged();
}

// public Fuse.Controls.FitMode get_FitMode() [instance] :2701
int Path::FitMode()
{
    return _fitMode;
}

// public void set_FitMode(Fuse.Controls.FitMode value) [instance] :2702
void Path::FitMode(int value)
{
    if (value != _fitMode)
    {
        _fitMode = value;
        OnShapeChanged();
    }
}

// public Fuse.Drawing.PathGeometry get_Geometry() [instance] :2729
::g::Fuse::Drawing::PathGeometry* Path::Geometry()
{
    return _geometry;
}

// public void set_Geometry(Fuse.Drawing.PathGeometry value) [instance] :2730
void Path::Geometry(::g::Fuse::Drawing::PathGeometry* value)
{
    _geometry = value;
    OnShapeChanged();
}

// public Fuse.Controls.PathScaleMode get_ScaleMode() [instance] :2715
int Path::ScaleMode()
{
    return _scaleMode;
}

// public void set_ScaleMode(Fuse.Controls.PathScaleMode value) [instance] :2716
void Path::ScaleMode(int value)
{
    if (_scaleMode != value)
    {
        _scaleMode = value;
        OnShapeChanged();
    }
}

// internal Fuse.Internal.SizingContainer get_Sizing() [instance] :2662
::g::Fuse::Internal::SizingContainer* Path::Sizing()
{
    return sizing;
}

// public Fuse.Elements.StretchDirection get_StretchDirection() [instance] :2678
int Path::StretchDirection()
{
    return uPtr(sizing)->stretchDirection;
}

// public void set_StretchDirection(Fuse.Elements.StretchDirection value) [instance] :2679
void Path::StretchDirection(int value)
{
    if (uPtr(sizing)->SetStretchDirection(value))
        OnShapeChanged();
}

// public Fuse.Elements.StretchMode get_StretchMode() [instance] :2667
int Path::StretchMode()
{
    return uPtr(sizing)->stretchMode;
}

// public void set_StretchMode(Fuse.Elements.StretchMode value) [instance] :2668
void Path::StretchMode(int value)
{
    if (uPtr(sizing)->SetStretchMode(value))
        OnShapeChanged();
}

// public generated Path New() [static] :2659
Path* Path::New2()
{
    Path* obj1 = (Path*)uNew(Path_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(2652)
// ------------------------------------------------------------

// public enum PathScaleMode :2652
uEnumType* PathScaleMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Controls.PathScaleMode", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Pre", 0LL,
        "Post", 1LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(1373)
// ------------------------------------------------------------

// public sealed class Placeholder :1373
// {
::g::Fuse::Controls::ContentControl_type* Placeholder_typeof()
{
    static uSStrong< ::g::Fuse::Controls::ContentControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 92;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(Placeholder);
    options.TypeSize = sizeof(::g::Fuse::Controls::ContentControl_type);
    type = (::g::Fuse::Controls::ContentControl_type*)uClassType::New("Fuse.Controls.Placeholder", options);
    type->SetBase(::g::Fuse::Controls::ContentControl_typeof());
    type->fp_ctor_ = (void*)Placeholder__New2_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::TYPES[142] = ::g::Fuse::Controls::ContentControl_typeof();
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[21] = ::g::Fuse::Elements::Element_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::ContentControl_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::ContentControl_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::ContentControl_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::ContentControl_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::ContentControl_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::ContentControl_type, interface5));
    type->SetFields(90,
        ::g::Uno::UX::IFactory_typeof(), offsetof(::g::Fuse::Controls::Placeholder, _contentFactory), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Controls::Placeholder, _Target), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_ContentFactory", NULL, (void*)Placeholder__get_ContentFactory_fn, 0, false, ::g::Uno::UX::IFactory_typeof(), 0),
        new uFunction("set_ContentFactory", NULL, (void*)Placeholder__set_ContentFactory_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::IFactory_typeof()),
        new uFunction(".ctor", NULL, (void*)Placeholder__New2_fn, 0, true, Placeholder_typeof(), 0),
        new uFunction("get_PlaceholderContent", NULL, (void*)Placeholder__get_PlaceholderContent_fn, 0, false, ::g::Fuse::Node_typeof(), 0),
        new uFunction("set_PlaceholderContent", NULL, (void*)Placeholder__set_PlaceholderContent_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("get_Target", NULL, (void*)Placeholder__get_Target_fn, 0, false, ::g::Fuse::Node_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)Placeholder__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()));
    return type;
}

// public generated Placeholder() :1373
void Placeholder__ctor_4_fn(Placeholder* __this)
{
    __this->ctor_4();
}

// internal void AcquireTarget() :1408
void Placeholder__AcquireTarget_fn(Placeholder* __this)
{
    __this->AcquireTarget();
}

// public Uno.UX.IFactory get_ContentFactory() :1394
void Placeholder__get_ContentFactory_fn(Placeholder* __this, uObject** __retval)
{
    *__retval = __this->ContentFactory();
}

// public void set_ContentFactory(Uno.UX.IFactory value) :1395
void Placeholder__set_ContentFactory_fn(Placeholder* __this, uObject* value)
{
    __this->ContentFactory(value);
}

// public generated Placeholder New() :1373
void Placeholder__New2_fn(Placeholder** __retval)
{
    *__retval = Placeholder::New2();
}

// public Fuse.Node get_PlaceholderContent() :1383
void Placeholder__get_PlaceholderContent_fn(Placeholder* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->PlaceholderContent();
}

// public void set_PlaceholderContent(Fuse.Node value) :1384
void Placeholder__set_PlaceholderContent_fn(Placeholder* __this, ::g::Fuse::Node* value)
{
    __this->PlaceholderContent(value);
}

// public generated Fuse.Node get_Target() :1377
void Placeholder__get_Target_fn(Placeholder* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Node value) :1377
void Placeholder__set_Target_fn(Placeholder* __this, ::g::Fuse::Node* value)
{
    __this->Target(value);
}

// public generated Placeholder() [instance] :1373
void Placeholder::ctor_4()
{
    ctor_3();
}

// internal void AcquireTarget() [instance] :1408
void Placeholder::AcquireTarget()
{
    if (Target() == NULL)
        return;

    if (Content() == Target())
        return;

    DataContext(uPtr(Target())->DataContext());
    Placeholder* oldParent = uAs<Placeholder*>(uPtr(Target())->Parent(), Placeholder_typeof());

    if (oldParent == NULL)
        return;

    ::g::Fuse::Elements::Element* targetElement = uAs< ::g::Fuse::Elements::Element*>(Target(), ::TYPES[21/*Fuse.Elements.Element*/]);

    if (targetElement != NULL)
        uPtr(targetElement)->OnPreplacement();

    uPtr(oldParent)->Content(NULL);
    Content(Target());
}

// public Uno.UX.IFactory get_ContentFactory() [instance] :1394
uObject* Placeholder::ContentFactory()
{
    return _contentFactory;
}

// public void set_ContentFactory(Uno.UX.IFactory value) [instance] :1395
void Placeholder::ContentFactory(uObject* value)
{
    if (_contentFactory == value)
        return;

    _contentFactory = value;

    if (_contentFactory == NULL)
        Content(NULL);
    else
        Content(uAs< ::g::Fuse::Node*>(::g::Uno::UX::IFactory::New1(uInterface(uPtr(_contentFactory), ::TYPES[116/*Uno.UX.IFactory*/])), ::TYPES[0/*Fuse.Node*/]));
}

// public Fuse.Node get_PlaceholderContent() [instance] :1383
::g::Fuse::Node* Placeholder::PlaceholderContent()
{
    return Content();
}

// public void set_PlaceholderContent(Fuse.Node value) [instance] :1384
void Placeholder::PlaceholderContent(::g::Fuse::Node* value)
{
    Content(value);
    Target(value);
}

// public generated Fuse.Node get_Target() [instance] :1377
::g::Fuse::Node* Placeholder::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Node value) [instance] :1377
void Placeholder::Target(::g::Fuse::Node* value)
{
    _Target = value;
}

// public generated Placeholder New() [static] :1373
Placeholder* Placeholder::New2()
{
    Placeholder* obj1 = (Placeholder*)uNew(Placeholder_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(2767)
// ------------------------------------------------------------

// public sealed class PlainTextEdit :2767
// {
// static PlainTextEdit() :2767
static void PlainTextEdit__cctor_4_fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret2;
    ::g::Fuse::StyleProperty1* ret3;
    PlainTextEdit::NativeEditProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[143/*Fuse.StyleProperty<Fuse.Controls.PlainTextEdit, Uno.UX.IFactory>*/], NULL, uDelegate::New(::TYPES[144/*Uno.Action<Fuse.Controls.PlainTextEdit>*/], (void*)PlainTextEdit__OnFactoryChanged_fn), &ret2), ret2);
    PlainTextEdit::NativeTextProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[143/*Fuse.StyleProperty<Fuse.Controls.PlainTextEdit, Uno.UX.IFactory>*/], NULL, uDelegate::New(::TYPES[144/*Uno.Action<Fuse.Controls.PlainTextEdit>*/], (void*)PlainTextEdit__OnFactoryChanged_fn), &ret3), ret3);
}

::g::Fuse::Controls::Panel_type* PlainTextEdit_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 106;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(PlainTextEdit);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Fuse.Controls.PlainTextEdit", options);
    type->SetBase(::g::Fuse::Controls::Panel_typeof());
    type->fp_ctor_ = (void*)PlainTextEdit__New2_fn;
    type->fp_cctor_ = PlainTextEdit__cctor_4_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))PlainTextEdit__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))PlainTextEdit__OnUnrooted_fn;
    type->interface6.fp_AddChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChild_fn;
    type->interface6.fp_AddChildAt = (void(*)(uObject*, int*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChildAt_fn;
    type->interface6.fp_RemoveChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_RemoveChild_fn;
    type->interface6.fp_GetChild = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_GetChild_fn;
    type->interface7.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Add_fn;
    type->interface7.fp_Remove = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Remove_fn;
    type->interface6.fp_get_ChildCount = (void(*)(uObject*, int*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_get_ChildCount_fn;
    type->interface6.fp_get_Children = (void(*)(uObject*, uObject**))::g::Fuse::Controls::Panel__get_Children_fn;
    type->interface6.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__get_ActualSize_fn;
    type->interface6.fp_get_HasChildren = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__get_HasChildren_fn;
    type->interface6.fp_add_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildAdded_fn;
    type->interface6.fp_remove_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildAdded_fn;
    type->interface6.fp_add_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildRemoved_fn;
    type->interface6.fp_remove_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildRemoved_fn;
    type->interface6.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface6.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_add_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__add_Update_fn;
    type->interface6.fp_remove_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__remove_Update_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::TYPES[143] = ::g::Fuse::StyleProperty1_typeof()->MakeType(PlainTextEdit_typeof(), ::g::Uno::UX::IFactory_typeof());
    ::TYPES[144] = ::g::Uno::Action1_typeof()->MakeType(PlainTextEdit_typeof());
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[145] = ::g::Fuse::Input::FocusDelegator_typeof();
    ::TYPES[21] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[22] = ::g::Uno::Bool_typeof();
    ::TYPES[37] = ::g::Uno::Action_typeof();
    ::TYPES[23] = ::g::Fuse::Controls::Panel_typeof();
    ::TYPES[146] = ::g::Fuse::Input::Focus_typeof();
    ::TYPES[147] = ::g::Fuse::Input::FocusLostHandler_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Fuse::Triggers::IAddRemove_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Panel_type, interface7));
    type->SetFields(100,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Controls::PlainTextEdit, _nativeEdit), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Controls::PlainTextEdit, _nativeText), 0,
        ::g::Fuse::Controls::NativeViewHost_typeof(), offsetof(::g::Fuse::Controls::PlainTextEdit, _nativeViewHost), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::PlainTextEdit, _textMode), 0,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(PlainTextEdit_typeof(), ::g::Uno::UX::IFactory_typeof()), (uintptr_t)&::g::Fuse::Controls::PlainTextEdit::NativeEditProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(PlainTextEdit_typeof(), ::g::Uno::UX::IFactory_typeof()), (uintptr_t)&::g::Fuse::Controls::PlainTextEdit::NativeTextProperty_, uFieldFlagsStatic);
    type->Reflection.SetFields(2,
        new uField("NativeEditProperty", 104),
        new uField("NativeTextProperty", 105));
    type->Reflection.SetFunctions(5,
        new uFunction("get_NativeEdit", NULL, (void*)PlainTextEdit__get_NativeEdit_fn, 0, false, ::g::Uno::UX::IFactory_typeof(), 0),
        new uFunction("set_NativeEdit", NULL, (void*)PlainTextEdit__set_NativeEdit_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::IFactory_typeof()),
        new uFunction("get_NativeText", NULL, (void*)PlainTextEdit__get_NativeText_fn, 0, false, ::g::Uno::UX::IFactory_typeof(), 0),
        new uFunction("set_NativeText", NULL, (void*)PlainTextEdit__set_NativeText_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::IFactory_typeof()),
        new uFunction(".ctor", NULL, (void*)PlainTextEdit__New2_fn, 0, true, PlainTextEdit_typeof(), 0));
    return type;
}

// public PlainTextEdit() :2796
void PlainTextEdit__ctor_4_fn(PlainTextEdit* __this)
{
    __this->ctor_4();
}

// private Fuse.Node ForwardFocusNode() :2802
void PlainTextEdit__ForwardFocusNode_fn(PlainTextEdit* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->ForwardFocusNode();
}

// public Uno.UX.IFactory get_NativeEdit() :2773
void PlainTextEdit__get_NativeEdit_fn(PlainTextEdit* __this, uObject** __retval)
{
    *__retval = __this->NativeEdit();
}

// public void set_NativeEdit(Uno.UX.IFactory value) :2774
void PlainTextEdit__set_NativeEdit_fn(PlainTextEdit* __this, uObject* value)
{
    __this->NativeEdit(value);
}

// public Uno.UX.IFactory get_NativeText() :2781
void PlainTextEdit__get_NativeText_fn(PlainTextEdit* __this, uObject** __retval)
{
    *__retval = __this->NativeText();
}

// public void set_NativeText(Uno.UX.IFactory value) :2782
void PlainTextEdit__set_NativeText_fn(PlainTextEdit* __this, uObject* value)
{
    __this->NativeText(value);
}

// public PlainTextEdit New() :2796
void PlainTextEdit__New2_fn(PlainTextEdit** __retval)
{
    *__retval = PlainTextEdit::New2();
}

// private static void OnFactoryChanged(Fuse.Controls.PlainTextEdit pte) :2785
void PlainTextEdit__OnFactoryChanged_fn(PlainTextEdit* pte)
{
    PlainTextEdit::OnFactoryChanged(pte);
}

// private void OnLostFocus(object s, object a) :2819
void PlainTextEdit__OnLostFocus_fn(PlainTextEdit* __this, uObject* s, uObject* a)
{
    __this->OnLostFocus(s, a);
}

// protected override sealed void OnRooted() :2808
void PlainTextEdit__OnRooted_fn(PlainTextEdit* __this)
{
    ::g::Fuse::Controls::Panel__OnRooted_fn(__this);
    __this->SetupText();
}

// protected override sealed void OnUnrooted() :2814
void PlainTextEdit__OnUnrooted_fn(PlainTextEdit* __this)
{
    ::g::Fuse::Controls::Panel__OnUnrooted_fn(__this);
}

// private void SetupEdit() :2829
void PlainTextEdit__SetupEdit_fn(PlainTextEdit* __this)
{
    __this->SetupEdit();
}

// private void SetupText() :2849
void PlainTextEdit__SetupText_fn(PlainTextEdit* __this)
{
    __this->SetupText();
}

uSStrong< ::g::Fuse::StyleProperty1*> PlainTextEdit::NativeEditProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> PlainTextEdit::NativeTextProperty_;

// public PlainTextEdit() [instance] :2796
void PlainTextEdit::ctor_4()
{
    ctor_3();
    ::g::Fuse::Input::Focus::SetDelegator(this, uDelegate::New(::TYPES[145/*Fuse.Input.FocusDelegator*/], (void*)PlainTextEdit__ForwardFocusNode_fn, this));
    HitTestMode(6);
}

// private Fuse.Node ForwardFocusNode() [instance] :2802
::g::Fuse::Node* PlainTextEdit::ForwardFocusNode()
{
    SetupEdit();
    return _nativeEdit;
}

// public Uno.UX.IFactory get_NativeEdit() [instance] :2773
uObject* PlainTextEdit::NativeEdit()
{
    uObject* ret6;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(PlainTextEdit::NativeEditProperty()), this, &ret6), ret6);
}

// public void set_NativeEdit(Uno.UX.IFactory value) [instance] :2774
void PlainTextEdit::NativeEdit(uObject* value)
{
    bool ret7;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(PlainTextEdit::NativeEditProperty()), this, value, &ret7);
}

// public Uno.UX.IFactory get_NativeText() [instance] :2781
uObject* PlainTextEdit::NativeText()
{
    uObject* ret8;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(PlainTextEdit::NativeTextProperty()), this, &ret8), ret8);
}

// public void set_NativeText(Uno.UX.IFactory value) [instance] :2782
void PlainTextEdit::NativeText(uObject* value)
{
    bool ret9;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(PlainTextEdit::NativeTextProperty()), this, value, &ret9);
}

// private void OnLostFocus(object s, object a) [instance] :2819
void PlainTextEdit::OnLostFocus(uObject* s, uObject* a)
{
    ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[37/*Uno.Action*/], (void*)PlainTextEdit__SetupText_fn, this));
}

// private void SetupEdit() [instance] :2829
void PlainTextEdit::SetupEdit()
{
    bool ret4;

    if (_nativeText != NULL)
    {
        ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(Children()), ::TYPES[122/*Uno.Collections.ICollection<Fuse.Node>*/]), _nativeText, &ret4);
        _nativeText = NULL;
    }

    _textMode = false;

    if ((NativeEdit() == NULL) || (_nativeViewHost != NULL))
        return;

    _nativeViewHost = ::g::Fuse::Controls::NativeViewHost::New2();
    _nativeEdit = uAs< ::g::Fuse::Node*>(::g::Uno::UX::IFactory::New1(uInterface(uPtr(NativeEdit()), ::TYPES[116/*Uno.UX.IFactory*/])), ::TYPES[0/*Fuse.Node*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(_nativeViewHost)->Children()), ::TYPES[122/*Uno.Collections.ICollection<Fuse.Node>*/]), _nativeEdit);
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), _nativeEdit, uDelegate::New(::TYPES[147/*Fuse.Input.FocusLostHandler*/], (void*)PlainTextEdit__OnLostFocus_fn, this));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[122/*Uno.Collections.ICollection<Fuse.Node>*/]), _nativeViewHost);
}

// private void SetupText() [instance] :2849
void PlainTextEdit::SetupText()
{
    bool ret5;

    if ((NativeText() == NULL) && (NativeEdit() != NULL))
    {
        SetupEdit();
        return;
    }

    if (_nativeViewHost != NULL)
    {
        ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(Children()), ::TYPES[122/*Uno.Collections.ICollection<Fuse.Node>*/]), _nativeViewHost, &ret5);
        _nativeViewHost = NULL;
        ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), _nativeEdit, uDelegate::New(::TYPES[147/*Fuse.Input.FocusLostHandler*/], (void*)PlainTextEdit__OnLostFocus_fn, this));
    }

    _textMode = true;

    if ((NativeText() == NULL) || (_nativeText != NULL))
        return;

    _nativeText = uAs< ::g::Fuse::Node*>(::g::Uno::UX::IFactory::New1(uInterface(uPtr(NativeText()), ::TYPES[116/*Uno.UX.IFactory*/])), ::TYPES[0/*Fuse.Node*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[122/*Uno.Collections.ICollection<Fuse.Node>*/]), _nativeText);
}

// public PlainTextEdit New() [static] :2796
PlainTextEdit* PlainTextEdit::New2()
{
    PlainTextEdit* obj1 = (PlainTextEdit*)uNew(PlainTextEdit_typeof());
    obj1->ctor_4();
    return obj1;
}

// private static void OnFactoryChanged(Fuse.Controls.PlainTextEdit pte) [static] :2785
void PlainTextEdit::OnFactoryChanged(PlainTextEdit* pte)
{
    PlainTextEdit_typeof()->Init();

    if (!uPtr(pte)->IsLocalRooted())
        return;

    if (uPtr(pte)->_textMode)
        uPtr(pte)->SetupText();
    else
        pte->SetupEdit();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(460)
// -----------------------------------------------------------

// public sealed class PropertyBinding<T> :460
// {
::g::Fuse::Behavior_type* PropertyBinding_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.GenericCount = 1;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(PropertyBinding);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.Controls.PropertyBinding`1", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))PropertyBinding__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))PropertyBinding__OnUnrooted_fn;
    ::TYPES[148] = ::g::Uno::UX::Property_typeof();
    ::TYPES[149] = ::g::Uno::UX::ValueChangedHandler_typeof();
    ::TYPES[19] = uObject_typeof();
    ::TYPES[150] = ::g::Uno::UX::ValueChangedArgs_typeof();
    type->SetPrecalc(
        ::TYPES[148/*Uno.UX.Property`1*/]->MakeType(type->T(0)),
        ::TYPES[149/*Uno.UX.ValueChangedHandler`1*/]->MakeType(type->T(0)),
        ::TYPES[150/*Uno.UX.ValueChangedArgs`1*/]->MakeType(type->T(0)));
    type->SetFields(3,
        ::g::Uno::UX::Property_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Controls::PropertyBinding, _Source), 0,
        ::g::Uno::UX::Property_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Controls::PropertyBinding, _Target), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", type, (void*)PropertyBinding__New1_fn, 0, true, type, 2, ::g::Uno::UX::Property_typeof()->MakeType(type->T(0)), ::g::Uno::UX::Property_typeof()->MakeType(type->T(0))),
        new uFunction("get_Source", NULL, (void*)PropertyBinding__get_Source_fn, 0, false, ::g::Uno::UX::Property_typeof()->MakeType(type->T(0)), 0),
        new uFunction("get_Target", NULL, (void*)PropertyBinding__get_Target_fn, 0, false, ::g::Uno::UX::Property_typeof()->MakeType(type->T(0)), 0));
    return type;
}

// public PropertyBinding(Uno.UX.Property<T> target, Uno.UX.Property<T> source) :469
void PropertyBinding__ctor_1_fn(PropertyBinding* __this, ::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source)
{
    __this->ctor_1(target, source);
}

// public PropertyBinding New(Uno.UX.Property<T> target, Uno.UX.Property<T> source) :469
void PropertyBinding__New1_fn(uType* __type, ::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source, PropertyBinding** __retval)
{
    *__retval = PropertyBinding::New1(__type, target, source);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :476
void PropertyBinding__OnRooted_fn(PropertyBinding* __this, ::g::Fuse::Node* parentNode)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Uno.UX.Property<T>*/),
        __this->__type->Precalced(1/*Uno.UX.ValueChangedHandler<T>*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    uPtr(__this->Source())->add_ValueChanged(uDelegate::New(__types[2], (void*)PropertyBinding__OnSourceValueChanged_fn, __this));
    uPtr(__this->Target())->add_ValueChanged(uDelegate::New(__types[2], (void*)PropertyBinding__OnTargetValueChanged_fn, __this));
    ::g::Uno::UX::Property__SetRestState_fn(uPtr(__this->Target()), (::g::Uno::UX::Property__Get_fn(uPtr(__this->Source()), &ret2), ret2), __this);
}

// private void OnSourceValueChanged(object s, Uno.UX.ValueChangedArgs<T> args) :493
void PropertyBinding__OnSourceValueChanged_fn(PropertyBinding* __this, uObject* s, ::g::Uno::UX::ValueChangedArgs* args)
{
    __this->OnSourceValueChanged(s, args);
}

// private void OnTargetValueChanged(object s, Uno.UX.ValueChangedArgs<T> args) :499
void PropertyBinding__OnTargetValueChanged_fn(PropertyBinding* __this, uObject* s, ::g::Uno::UX::ValueChangedArgs* args)
{
    __this->OnTargetValueChanged(s, args);
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :485
void PropertyBinding__OnUnrooted_fn(PropertyBinding* __this, ::g::Fuse::Node* parentNode)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Uno.UX.Property<T>*/),
        __this->__type->T(0),
        __this->__type->Precalced(1/*Uno.UX.ValueChangedHandler<T>*/),
    };
    uPtr(__this->Source())->remove_ValueChanged(uDelegate::New(__types[2], (void*)PropertyBinding__OnSourceValueChanged_fn, __this));
    uPtr(__this->Target())->remove_ValueChanged(uDelegate::New(__types[2], (void*)PropertyBinding__OnTargetValueChanged_fn, __this));
    ::g::Fuse::Behavior__OnUnrooted_fn(__this, parentNode);
}

// public generated Uno.UX.Property<T> get_Source() :466
void PropertyBinding__get_Source_fn(PropertyBinding* __this, ::g::Uno::UX::Property** __retval)
{
    *__retval = __this->Source();
}

// private generated void set_Source(Uno.UX.Property<T> value) :466
void PropertyBinding__set_Source_fn(PropertyBinding* __this, ::g::Uno::UX::Property* value)
{
    __this->Source(value);
}

// public generated Uno.UX.Property<T> get_Target() :463
void PropertyBinding__get_Target_fn(PropertyBinding* __this, ::g::Uno::UX::Property** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property<T> value) :463
void PropertyBinding__set_Target_fn(PropertyBinding* __this, ::g::Uno::UX::Property* value)
{
    __this->Target(value);
}

// public PropertyBinding(Uno.UX.Property<T> target, Uno.UX.Property<T> source) [instance] :469
void PropertyBinding::ctor_1(::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source)
{
    ctor_();
    Target(target);
    Source(source);
}

// private void OnSourceValueChanged(object s, Uno.UX.ValueChangedArgs<T> args) [instance] :493
void PropertyBinding::OnSourceValueChanged(uObject* s, ::g::Uno::UX::ValueChangedArgs* args)
{
    uType* __types[] = {
        __type->T(0),
        __type->Precalced(2/*Uno.UX.ValueChangedArgs<T>*/),
    };
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;

    if (uPtr(args)->Origin() != this)
        ::g::Uno::UX::Property__SetRestState_fn(uPtr(Target()), (::g::Uno::UX::ValueChangedArgs__get_Value_fn(uPtr(args), &ret3), ret3), this);
}

// private void OnTargetValueChanged(object s, Uno.UX.ValueChangedArgs<T> args) [instance] :499
void PropertyBinding::OnTargetValueChanged(uObject* s, ::g::Uno::UX::ValueChangedArgs* args)
{
    uType* __types[] = {
        __type->T(0),
        __type->Precalced(2/*Uno.UX.ValueChangedArgs<T>*/),
    };
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;

    if (uPtr(args)->Origin() != this)
        ::g::Uno::UX::Property__SetRestState_fn(uPtr(Source()), (::g::Uno::UX::ValueChangedArgs__get_Value_fn(uPtr(args), &ret4), ret4), this);
}

// public generated Uno.UX.Property<T> get_Source() [instance] :466
::g::Uno::UX::Property* PropertyBinding::Source()
{
    return _Source;
}

// private generated void set_Source(Uno.UX.Property<T> value) [instance] :466
void PropertyBinding::Source(::g::Uno::UX::Property* value)
{
    _Source = value;
}

// public generated Uno.UX.Property<T> get_Target() [instance] :463
::g::Uno::UX::Property* PropertyBinding::Target()
{
    return _Target;
}

// private generated void set_Target(Uno.UX.Property<T> value) [instance] :463
void PropertyBinding::Target(::g::Uno::UX::Property* value)
{
    _Target = value;
}

// public PropertyBinding New(Uno.UX.Property<T> target, Uno.UX.Property<T> source) [static] :469
PropertyBinding* PropertyBinding::New1(uType* __type, ::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source)
{
    PropertyBinding* obj1 = (PropertyBinding*)uNew(__type);
    obj1->ctor_1(target, source);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(2885)
// ------------------------------------------------------------

// public abstract class RangeControl :2885
// {
// static RangeControl() :2885
static void RangeControl__cctor_4_fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret1;
    ::g::Fuse::StyleProperty1* ret2;
    ::g::Fuse::StyleProperty1* ret3;
    RangeControl::MinimumProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[151/*Fuse.StyleProperty<Fuse.Controls.RangeControl, double>*/], uCRef(0.0), uDelegate::New(::TYPES[152/*Uno.Action<Fuse.Controls.RangeControl>*/], (void*)RangeControl__OnRangeChanged_fn), &ret1), ret1);
    RangeControl::MaximumProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[151/*Fuse.StyleProperty<Fuse.Controls.RangeControl, double>*/], uCRef(100.0), uDelegate::New(::TYPES[152/*Uno.Action<Fuse.Controls.RangeControl>*/], (void*)RangeControl__OnRangeChanged_fn), &ret2), ret2);
    RangeControl::ValueProperty_ = (::g::Fuse::StyleProperty1__New2_fn(::TYPES[151/*Fuse.StyleProperty<Fuse.Controls.RangeControl, double>*/], uCRef(0.0), NULL, uDelegate::New(::TYPES[153/*Uno.Action<Fuse.Controls.RangeControl, double>*/], (void*)RangeControl__SetValue1_fn), uDelegate::New(::TYPES[154/*Uno.Func<Fuse.Controls.RangeControl, double>*/], (void*)RangeControl__GetValue_fn), &ret3), ret3);
}

RangeControl_type* RangeControl_typeof()
{
    static uSStrong<RangeControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 106;
    options.InterfaceCount = 10;
    options.ObjectSize = sizeof(RangeControl);
    options.TypeSize = sizeof(RangeControl_type);
    type = (RangeControl_type*)uClassType::New("Fuse.Controls.RangeControl", options);
    type->SetBase(::g::Fuse::Controls::Panel_typeof());
    type->fp_cctor_ = RangeControl__cctor_4_fn;
    type->interface8.fp_get_Progress = (void(*)(uObject*, double*))RangeControl__get_Progress_fn;
    type->interface8.fp_add_ProgressChanged = (void(*)(uObject*, uDelegate*))RangeControl__add_ProgressChanged_fn;
    type->interface8.fp_remove_ProgressChanged = (void(*)(uObject*, uDelegate*))RangeControl__remove_ProgressChanged_fn;
    type->interface9.fp_get_Value = (void(*)(uObject*, uTRef))RangeControl__get_Value_fn;
    type->interface9.fp_set_Value = (void(*)(uObject*, void*))RangeControl__set_Value_fn;
    type->interface9.fp_add_ValueChanged = (void(*)(uObject*, uDelegate*))RangeControl__add_ValueChanged_fn;
    type->interface9.fp_remove_ValueChanged = (void(*)(uObject*, uDelegate*))RangeControl__remove_ValueChanged_fn;
    type->interface6.fp_AddChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChild_fn;
    type->interface6.fp_AddChildAt = (void(*)(uObject*, int*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChildAt_fn;
    type->interface6.fp_RemoveChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_RemoveChild_fn;
    type->interface6.fp_GetChild = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_GetChild_fn;
    type->interface7.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Add_fn;
    type->interface7.fp_Remove = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Remove_fn;
    type->interface6.fp_get_ChildCount = (void(*)(uObject*, int*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_get_ChildCount_fn;
    type->interface6.fp_get_Children = (void(*)(uObject*, uObject**))::g::Fuse::Controls::Panel__get_Children_fn;
    type->interface6.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__get_ActualSize_fn;
    type->interface6.fp_get_HasChildren = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__get_HasChildren_fn;
    type->interface6.fp_add_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildAdded_fn;
    type->interface6.fp_remove_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildAdded_fn;
    type->interface6.fp_add_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildRemoved_fn;
    type->interface6.fp_remove_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildRemoved_fn;
    type->interface6.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface6.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_add_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__add_Update_fn;
    type->interface6.fp_remove_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__remove_Update_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::TYPES[151] = ::g::Fuse::StyleProperty1_typeof()->MakeType(RangeControl_typeof(), ::g::Uno::Double_typeof());
    ::TYPES[152] = ::g::Uno::Action1_typeof()->MakeType(RangeControl_typeof());
    ::TYPES[153] = ::g::Uno::Action2_typeof()->MakeType(RangeControl_typeof(), ::g::Uno::Double_typeof());
    ::TYPES[154] = ::g::Uno::Func1_typeof()->MakeType(RangeControl_typeof(), ::g::Uno::Double_typeof());
    ::TYPES[17] = ::g::Uno::Delegate_typeof();
    ::TYPES[33] = ::g::Uno::EventHandler_typeof();
    ::TYPES[19] = uObject_typeof();
    ::TYPES[34] = ::g::Uno::EventArgs_typeof();
    ::TYPES[155] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof());
    ::TYPES[156] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Double_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(RangeControl_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(RangeControl_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(RangeControl_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(RangeControl_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(RangeControl_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(RangeControl_type, interface5),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(RangeControl_type, interface6),
        ::g::Fuse::Triggers::IAddRemove_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(RangeControl_type, interface7),
        ::g::Fuse::Triggers::IProgress_typeof(), offsetof(RangeControl_type, interface8),
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::Double_typeof()), offsetof(RangeControl_type, interface9));
    type->SetFields(100,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Controls::RangeControl, _value), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Controls::RangeControl, ProgressChanged1), 0,
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof()), offsetof(::g::Fuse::Controls::RangeControl, ValueChanged1), 0,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(RangeControl_typeof(), ::g::Uno::Double_typeof()), (uintptr_t)&::g::Fuse::Controls::RangeControl::MaximumProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(RangeControl_typeof(), ::g::Uno::Double_typeof()), (uintptr_t)&::g::Fuse::Controls::RangeControl::MinimumProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(RangeControl_typeof(), ::g::Uno::Double_typeof()), (uintptr_t)&::g::Fuse::Controls::RangeControl::ValueProperty_, uFieldFlagsStatic);
    type->Reflection.SetFields(3,
        new uField("MaximumProperty", 103),
        new uField("MinimumProperty", 104),
        new uField("ValueProperty", 105));
    type->Reflection.SetFunctions(15,
        new uFunction("get_Maximum", NULL, (void*)RangeControl__get_Maximum_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Maximum", NULL, (void*)RangeControl__set_Maximum_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_Minimum", NULL, (void*)RangeControl__get_Minimum_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Minimum", NULL, (void*)RangeControl__set_Minimum_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_Progress", NULL, (void*)RangeControl__get_Progress_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Progress", NULL, (void*)RangeControl__set_Progress_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("add_ProgressChanged", NULL, (void*)RangeControl__add_ProgressChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_ProgressChanged", NULL, (void*)RangeControl__remove_ProgressChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("get_RelativeValue", NULL, (void*)RangeControl__get_RelativeValue_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_RelativeValue", NULL, (void*)RangeControl__set_RelativeValue_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("SetValue", NULL, (void*)RangeControl__SetValue_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Double_typeof(), uObject_typeof()),
        new uFunction("get_Value", NULL, (void*)RangeControl__get_Value_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Value", NULL, (void*)RangeControl__set_Value_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("add_ValueChanged", NULL, (void*)RangeControl__add_ValueChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof())),
        new uFunction("remove_ValueChanged", NULL, (void*)RangeControl__remove_ValueChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof())));
    return type;
}

// protected generated RangeControl() :2885
void RangeControl__ctor_4_fn(RangeControl* __this)
{
    __this->ctor_4();
}

// private double ClampToRange(double v) :2945
void RangeControl__ClampToRange_fn(RangeControl* __this, double* v, double* __retval)
{
    *__retval = __this->ClampToRange(*v);
}

// private static double GetValue(Fuse.Controls.RangeControl rc) :2917
void RangeControl__GetValue_fn(RangeControl* rc, double* __retval)
{
    *__retval = RangeControl::GetValue(rc);
}

// public double get_Maximum() :2903
void RangeControl__get_Maximum_fn(RangeControl* __this, double* __retval)
{
    *__retval = __this->Maximum();
}

// public void set_Maximum(double value) :2904
void RangeControl__set_Maximum_fn(RangeControl* __this, double* value)
{
    __this->Maximum(*value);
}

// public double get_Minimum() :2893
void RangeControl__get_Minimum_fn(RangeControl* __this, double* __retval)
{
    *__retval = __this->Minimum();
}

// public void set_Minimum(double value) :2894
void RangeControl__set_Minimum_fn(RangeControl* __this, double* value)
{
    __this->Minimum(*value);
}

// protected void OnProgressChanged() :2970
void RangeControl__OnProgressChanged_fn(RangeControl* __this)
{
    __this->OnProgressChanged();
}

// private static void OnRangeChanged(Fuse.Controls.RangeControl rc) :2952
void RangeControl__OnRangeChanged_fn(RangeControl* rc)
{
    RangeControl::OnRangeChanged(rc);
}

// private void OnValueChanged(double value, object origin) :2961
void RangeControl__OnValueChanged_fn(RangeControl* __this, double* value, uObject* origin)
{
    __this->OnValueChanged(*value, origin);
}

// public double get_Progress() :2978
void RangeControl__get_Progress_fn(RangeControl* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public void set_Progress(double value) :2979
void RangeControl__set_Progress_fn(RangeControl* __this, double* value)
{
    __this->Progress(*value);
}

// public generated void add_ProgressChanged(Uno.EventHandler value) :2992
void RangeControl__add_ProgressChanged_fn(RangeControl* __this, uDelegate* value)
{
    __this->add_ProgressChanged(value);
}

// public generated void remove_ProgressChanged(Uno.EventHandler value) :2992
void RangeControl__remove_ProgressChanged_fn(RangeControl* __this, uDelegate* value)
{
    __this->remove_ProgressChanged(value);
}

// public double get_RelativeValue() :2931
void RangeControl__get_RelativeValue_fn(RangeControl* __this, double* __retval)
{
    *__retval = __this->RelativeValue();
}

// public void set_RelativeValue(double value) :2932
void RangeControl__set_RelativeValue_fn(RangeControl* __this, double* value)
{
    __this->RelativeValue(*value);
}

// private void SetInternal(double value, object origin) :2934
void RangeControl__SetInternal_fn(RangeControl* __this, double* value, uObject* origin)
{
    __this->SetInternal(*value, origin);
}

// public void SetValue(double value, object origin) :2923
void RangeControl__SetValue_fn(RangeControl* __this, double* value, uObject* origin)
{
    __this->SetValue(*value, origin);
}

// private static void SetValue(Fuse.Controls.RangeControl rc, double value) :2918
void RangeControl__SetValue1_fn(RangeControl* rc, double* value)
{
    RangeControl::SetValue1(rc, *value);
}

// public double get_Value() :2914
void RangeControl__get_Value_fn(RangeControl* __this, double* __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(double value) :2915
void RangeControl__set_Value_fn(RangeControl* __this, double* value)
{
    __this->Value(*value);
}

// public generated void add_ValueChanged(Uno.UX.ValueChangedHandler<double> value) :2950
void RangeControl__add_ValueChanged_fn(RangeControl* __this, uDelegate* value)
{
    __this->add_ValueChanged(value);
}

// public generated void remove_ValueChanged(Uno.UX.ValueChangedHandler<double> value) :2950
void RangeControl__remove_ValueChanged_fn(RangeControl* __this, uDelegate* value)
{
    __this->remove_ValueChanged(value);
}

// internal double ValueFromRelative(double relative) :2982
void RangeControl__ValueFromRelative_fn(RangeControl* __this, double* relative, double* __retval)
{
    *__retval = __this->ValueFromRelative(*relative);
}

// internal double ValueToRelative(double value) :2987
void RangeControl__ValueToRelative_fn(RangeControl* __this, double* value, double* __retval)
{
    *__retval = __this->ValueToRelative(*value);
}

uSStrong< ::g::Fuse::StyleProperty1*> RangeControl::MaximumProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> RangeControl::MinimumProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> RangeControl::ValueProperty_;

// protected generated RangeControl() [instance] :2885
void RangeControl::ctor_4()
{
    ctor_3();
}

// private double ClampToRange(double v) [instance] :2945
double RangeControl::ClampToRange(double v)
{
    return ::g::Uno::Math::Min(::g::Uno::Math::Max(Minimum(), v), Maximum());
}

// public double get_Maximum() [instance] :2903
double RangeControl::Maximum()
{
    double ret4;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(RangeControl::MaximumProperty()), this, &ret4), ret4);
}

// public void set_Maximum(double value) [instance] :2904
void RangeControl::Maximum(double value)
{
    bool ret5;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(RangeControl::MaximumProperty()), this, uCRef(value), &ret5);
}

// public double get_Minimum() [instance] :2893
double RangeControl::Minimum()
{
    double ret6;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(RangeControl::MinimumProperty()), this, &ret6), ret6);
}

// public void set_Minimum(double value) [instance] :2894
void RangeControl::Minimum(double value)
{
    bool ret7;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(RangeControl::MinimumProperty()), this, uCRef(value), &ret7);
}

// protected void OnProgressChanged() [instance] :2970
void RangeControl::OnProgressChanged()
{
    if (::g::Uno::Delegate::op_Inequality(ProgressChanged1, NULL))
        uPtr(ProgressChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private void OnValueChanged(double value, object origin) [instance] :2961
void RangeControl::OnValueChanged(double value, uObject* origin)
{
    if (::g::Uno::Delegate::op_Inequality(ValueChanged1, NULL))
        uPtr(ValueChanged1)->Invoke(2, this, (::g::Fuse::Scripting::DoubleChangedArgs*)::g::Fuse::Scripting::DoubleChangedArgs::New3(value, origin));

    OnProgressChanged();
}

// public double get_Progress() [instance] :2978
double RangeControl::Progress()
{
    return ValueToRelative(Value());
}

// public void set_Progress(double value) [instance] :2979
void RangeControl::Progress(double value)
{
    Value(ValueFromRelative(value));
}

// public generated void add_ProgressChanged(Uno.EventHandler value) [instance] :2992
void RangeControl::add_ProgressChanged(uDelegate* value)
{
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ProgressChanged1, value), ::TYPES[33/*Uno.EventHandler*/]);
}

// public generated void remove_ProgressChanged(Uno.EventHandler value) [instance] :2992
void RangeControl::remove_ProgressChanged(uDelegate* value)
{
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ProgressChanged1, value), ::TYPES[33/*Uno.EventHandler*/]);
}

// public double get_RelativeValue() [instance] :2931
double RangeControl::RelativeValue()
{
    return ValueToRelative(Value());
}

// public void set_RelativeValue(double value) [instance] :2932
void RangeControl::RelativeValue(double value)
{
    Value(ValueFromRelative(value));
}

// private void SetInternal(double value, object origin) [instance] :2934
void RangeControl::SetInternal(double value, uObject* origin)
{
    double v = ClampToRange(value);

    if (v != _value)
    {
        _value = v;
        OnValueChanged(v, origin);
    }
}

// public void SetValue(double value, object origin) [instance] :2923
void RangeControl::SetValue(double value, uObject* origin)
{
    ::g::Fuse::StyleProperty1__SetLocalState_fn(uPtr(RangeControl::ValueProperty()), this);
    SetInternal(value, origin);
}

// public double get_Value() [instance] :2914
double RangeControl::Value()
{
    return _value;
}

// public void set_Value(double value) [instance] :2915
void RangeControl::Value(double value)
{
    bool ret8;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(RangeControl::ValueProperty()), this, uCRef(value), &ret8);
}

// public generated void add_ValueChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :2950
void RangeControl::add_ValueChanged(uDelegate* value)
{
    ValueChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ValueChanged1, value), ::TYPES[155/*Uno.UX.ValueChangedHandler<double>*/]);
}

// public generated void remove_ValueChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :2950
void RangeControl::remove_ValueChanged(uDelegate* value)
{
    ValueChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ValueChanged1, value), ::TYPES[155/*Uno.UX.ValueChangedHandler<double>*/]);
}

// internal double ValueFromRelative(double relative) [instance] :2982
double RangeControl::ValueFromRelative(double relative)
{
    return (relative * (Maximum() - Minimum())) + Minimum();
}

// internal double ValueToRelative(double value) [instance] :2987
double RangeControl::ValueToRelative(double value)
{
    return (value - Minimum()) / (Maximum() - Minimum());
}

// private static double GetValue(Fuse.Controls.RangeControl rc) [static] :2917
double RangeControl::GetValue(RangeControl* rc)
{
    RangeControl_typeof()->Init();
    return uPtr(rc)->_value;
}

// private static void OnRangeChanged(Fuse.Controls.RangeControl rc) [static] :2952
void RangeControl::OnRangeChanged(RangeControl* rc)
{
    RangeControl_typeof()->Init();
    uPtr(rc)->SetValue(uPtr(rc)->Value(), NULL);
    rc->OnProgressChanged();
}

// private static void SetValue(Fuse.Controls.RangeControl rc, double value) [static] :2918
void RangeControl::SetValue1(RangeControl* rc, double value)
{
    RangeControl_typeof()->Init();
    uPtr(rc)->SetInternal(value, NULL);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(3008)
// ------------------------------------------------------------

// public sealed class Rectangle :3008
// {
// static Rectangle() :3008
static void Rectangle__cctor_5_fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret2;
    Rectangle::CornerRadiusProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[157/*Fuse.StyleProperty<Fuse.Controls.Rectangle, float4>*/], uCRef(::g::Uno::Float4__New1(0.0f)), uDelegate::New(::TYPES[158/*Uno.Action<Fuse.Controls.Rectangle>*/], (void*)Rectangle__OnCornerRadiusChanged_fn), &ret2), ret2);
}

::g::Fuse::Controls::Panel_type* Rectangle_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 107;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(Rectangle);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Fuse.Controls.Rectangle", options);
    type->SetBase(::g::Fuse::Controls::Shape_typeof());
    type->fp_ctor_ = (void*)Rectangle__New2_fn;
    type->fp_cctor_ = Rectangle__cctor_5_fn;
    type->interface6.fp_AddChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChild_fn;
    type->interface6.fp_AddChildAt = (void(*)(uObject*, int*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChildAt_fn;
    type->interface6.fp_RemoveChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_RemoveChild_fn;
    type->interface6.fp_GetChild = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_GetChild_fn;
    type->interface7.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Add_fn;
    type->interface7.fp_Remove = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Remove_fn;
    type->interface6.fp_get_ChildCount = (void(*)(uObject*, int*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_get_ChildCount_fn;
    type->interface6.fp_get_Children = (void(*)(uObject*, uObject**))::g::Fuse::Controls::Panel__get_Children_fn;
    type->interface6.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__get_ActualSize_fn;
    type->interface6.fp_get_HasChildren = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__get_HasChildren_fn;
    type->interface6.fp_add_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildAdded_fn;
    type->interface6.fp_remove_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildAdded_fn;
    type->interface6.fp_add_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildRemoved_fn;
    type->interface6.fp_remove_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildRemoved_fn;
    type->interface6.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface6.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_add_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__add_Update_fn;
    type->interface6.fp_remove_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__remove_Update_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::TYPES[157] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Rectangle_typeof(), ::g::Uno::Float4_typeof());
    ::TYPES[158] = ::g::Uno::Action1_typeof()->MakeType(Rectangle_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Fuse::Triggers::IAddRemove_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Panel_type, interface7));
    type->SetFields(106,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Rectangle_typeof(), ::g::Uno::Float4_typeof()), (uintptr_t)&::g::Fuse::Controls::Rectangle::CornerRadiusProperty_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("CornerRadiusProperty", 106));
    type->Reflection.SetFunctions(3,
        new uFunction("get_CornerRadius", NULL, (void*)Rectangle__get_CornerRadius_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_CornerRadius", NULL, (void*)Rectangle__set_CornerRadius_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction(".ctor", NULL, (void*)Rectangle__New2_fn, 0, true, Rectangle_typeof(), 0));
    return type;
}

// public generated Rectangle() :3008
void Rectangle__ctor_5_fn(Rectangle* __this)
{
    __this->ctor_5();
}

// public float4 get_CornerRadius() :3016
void Rectangle__get_CornerRadius_fn(Rectangle* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->CornerRadius();
}

// public void set_CornerRadius(float4 value) :3017
void Rectangle__set_CornerRadius_fn(Rectangle* __this, ::g::Uno::Float4* value)
{
    __this->CornerRadius(*value);
}

// public generated Rectangle New() :3008
void Rectangle__New2_fn(Rectangle** __retval)
{
    *__retval = Rectangle::New2();
}

// private static void OnCornerRadiusChanged(Fuse.Controls.Rectangle r) :3019
void Rectangle__OnCornerRadiusChanged_fn(Rectangle* r)
{
    Rectangle::OnCornerRadiusChanged(r);
}

uSStrong< ::g::Fuse::StyleProperty1*> Rectangle::CornerRadiusProperty_;

// public generated Rectangle() [instance] :3008
void Rectangle::ctor_5()
{
    ctor_4();
}

// public float4 get_CornerRadius() [instance] :3016
::g::Uno::Float4 Rectangle::CornerRadius()
{
    ::g::Uno::Float4 ret3;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Rectangle::CornerRadiusProperty()), this, &ret3), ret3);
}

// public void set_CornerRadius(float4 value) [instance] :3017
void Rectangle::CornerRadius(::g::Uno::Float4 value)
{
    bool ret4;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Rectangle::CornerRadiusProperty()), this, uCRef(value), &ret4);
}

// public generated Rectangle New() [static] :3008
Rectangle* Rectangle::New2()
{
    Rectangle* obj1 = (Rectangle*)uNew(Rectangle_typeof());
    obj1->ctor_5();
    return obj1;
}

// private static void OnCornerRadiusChanged(Fuse.Controls.Rectangle r) [static] :3019
void Rectangle::OnCornerRadiusChanged(Rectangle* r)
{
    Rectangle_typeof()->Init();
    uPtr(r)->OnShapeChanged();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(3038)
// ------------------------------------------------------------

// public sealed class RegularPolygon :3038
// {
::g::Fuse::Controls::Panel_type* RegularPolygon_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 107;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(RegularPolygon);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Fuse.Controls.RegularPolygon", options);
    type->SetBase(::g::Fuse::Controls::Shape_typeof());
    type->fp_ctor_ = (void*)RegularPolygon__New2_fn;
    type->interface6.fp_AddChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChild_fn;
    type->interface6.fp_AddChildAt = (void(*)(uObject*, int*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChildAt_fn;
    type->interface6.fp_RemoveChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_RemoveChild_fn;
    type->interface6.fp_GetChild = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_GetChild_fn;
    type->interface7.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Add_fn;
    type->interface7.fp_Remove = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Remove_fn;
    type->interface6.fp_get_ChildCount = (void(*)(uObject*, int*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_get_ChildCount_fn;
    type->interface6.fp_get_Children = (void(*)(uObject*, uObject**))::g::Fuse::Controls::Panel__get_Children_fn;
    type->interface6.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__get_ActualSize_fn;
    type->interface6.fp_get_HasChildren = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__get_HasChildren_fn;
    type->interface6.fp_add_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildAdded_fn;
    type->interface6.fp_remove_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildAdded_fn;
    type->interface6.fp_add_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildRemoved_fn;
    type->interface6.fp_remove_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildRemoved_fn;
    type->interface6.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface6.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_add_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__add_Update_fn;
    type->interface6.fp_remove_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__remove_Update_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Fuse::Triggers::IAddRemove_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Panel_type, interface7));
    type->SetFields(106,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::RegularPolygon, _sides), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)RegularPolygon__New2_fn, 0, true, RegularPolygon_typeof(), 0),
        new uFunction("get_Sides", NULL, (void*)RegularPolygon__get_Sides_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_Sides", NULL, (void*)RegularPolygon__set_Sides_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()));
    return type;
}

// public generated RegularPolygon() :3038
void RegularPolygon__ctor_5_fn(RegularPolygon* __this)
{
    __this->ctor_5();
}

// public generated RegularPolygon New() :3038
void RegularPolygon__New2_fn(RegularPolygon** __retval)
{
    *__retval = RegularPolygon::New2();
}

// public int get_Sides() :3043
void RegularPolygon__get_Sides_fn(RegularPolygon* __this, int* __retval)
{
    *__retval = __this->Sides();
}

// public void set_Sides(int value) :3044
void RegularPolygon__set_Sides_fn(RegularPolygon* __this, int* value)
{
    __this->Sides(*value);
}

// public generated RegularPolygon() [instance] :3038
void RegularPolygon::ctor_5()
{
    _sides = 5;
    ctor_4();
}

// public int get_Sides() [instance] :3043
int RegularPolygon::Sides()
{
    return _sides;
}

// public void set_Sides(int value) [instance] :3044
void RegularPolygon::Sides(int value)
{
    if (value == _sides)
        return;

    _sides = value;
    OnShapeChanged();
}

// public generated RegularPolygon New() [static] :3038
RegularPolygon* RegularPolygon::New2()
{
    RegularPolygon* obj1 = (RegularPolygon*)uNew(RegularPolygon_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(3065)
// ------------------------------------------------------------

// public sealed class ScrollPropertyChangedArgs :3065
// {
uType* ScrollPropertyChangedArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ScrollPropertyChangedArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.ScrollPropertyChangedArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->SetFields(0,
        uObject_typeof(), offsetof(::g::Fuse::Controls::ScrollPropertyChangedArgs, _Origin), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)ScrollPropertyChangedArgs__New2_fn, 0, true, ScrollPropertyChangedArgs_typeof(), 1, uObject_typeof()),
        new uFunction("get_Origin", NULL, (void*)ScrollPropertyChangedArgs__get_Origin_fn, 0, false, uObject_typeof(), 0));
    return type;
}

// public ScrollPropertyChangedArgs(object origin) :3069
void ScrollPropertyChangedArgs__ctor_1_fn(ScrollPropertyChangedArgs* __this, uObject* origin)
{
    __this->ctor_1(origin);
}

// public ScrollPropertyChangedArgs New(object origin) :3069
void ScrollPropertyChangedArgs__New2_fn(uObject* origin, ScrollPropertyChangedArgs** __retval)
{
    *__retval = ScrollPropertyChangedArgs::New2(origin);
}

// public generated object get_Origin() :3067
void ScrollPropertyChangedArgs__get_Origin_fn(ScrollPropertyChangedArgs* __this, uObject** __retval)
{
    *__retval = __this->Origin();
}

// private generated void set_Origin(object value) :3067
void ScrollPropertyChangedArgs__set_Origin_fn(ScrollPropertyChangedArgs* __this, uObject* value)
{
    __this->Origin(value);
}

// public ScrollPropertyChangedArgs(object origin) [instance] :3069
void ScrollPropertyChangedArgs::ctor_1(uObject* origin)
{
    ctor_();
    Origin(origin);
}

// public generated object get_Origin() [instance] :3067
uObject* ScrollPropertyChangedArgs::Origin()
{
    return _Origin;
}

// private generated void set_Origin(object value) [instance] :3067
void ScrollPropertyChangedArgs::Origin(uObject* value)
{
    _Origin = value;
}

// public ScrollPropertyChangedArgs New(object origin) [static] :3069
ScrollPropertyChangedArgs* ScrollPropertyChangedArgs::New2(uObject* origin)
{
    ScrollPropertyChangedArgs* obj1 = (ScrollPropertyChangedArgs*)uNew(ScrollPropertyChangedArgs_typeof());
    obj1->ctor_1(origin);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(3075)
// ------------------------------------------------------------

// public delegate void ScrollPropertyChangedHandler(object sender, Fuse.Controls.ScrollPropertyChangedArgs args) :3075
uDelegateType* ScrollPropertyChangedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Controls.ScrollPropertyChangedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Controls::ScrollPropertyChangedArgs_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(3087)
// ------------------------------------------------------------

// public class ScrollView :3087
// {
// static ScrollView() :3087
static void ScrollView__cctor_3_fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret10;
    ScrollView::AllowedScrollDirectionsProperty_ = (::g::Fuse::StyleProperty1__New2_fn(::TYPES[159/*Fuse.StyleProperty<Fuse.Controls.ScrollView, Fuse.Gestures.ScrollDirections>*/], uCRef<int>(12), uDelegate::New(::TYPES[160/*Uno.Action<Fuse.Controls.ScrollView>*/], (void*)::g::Fuse::Node__InvalidateLayout1_fn), uDelegate::New(::TYPES[161/*Uno.Action<Fuse.Controls.ScrollView, Fuse.Gestures.ScrollDirections>*/], (void*)ScrollView__SetAllowedScrollDirections_fn), uDelegate::New(::TYPES[162/*Uno.Func<Fuse.Controls.ScrollView, Fuse.Gestures.ScrollDirections>*/], (void*)ScrollView__GetAllowedScrollDirections_fn), &ret10), ret10);
}

::g::Fuse::Controls::ContentControl_type* ScrollView_typeof()
{
    static uSStrong< ::g::Fuse::Controls::ContentControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 102;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(ScrollView);
    options.TypeSize = sizeof(::g::Fuse::Controls::ContentControl_type);
    type = (::g::Fuse::Controls::ContentControl_type*)uClassType::New("Fuse.Controls.ScrollView", options);
    type->SetBase(::g::Fuse::Controls::ContentControl_typeof());
    type->fp_ctor_ = (void*)ScrollView__New2_fn;
    type->fp_cctor_ = ScrollView__cctor_3_fn;
    type->fp_ArrangePaddingBox = (void(*)(::g::Fuse::Elements::Element*, ::g::Uno::Float2*, int*))ScrollView__ArrangePaddingBox_fn;
    type->fp_GetContentSize = (void(*)(::g::Fuse::Elements::Element*, ::g::Uno::Float2*, int*, ::g::Uno::Float2*))ScrollView__GetContentSize_fn;
    type->fp_IsMarginBoxDependent = (void(*)(::g::Fuse::Node*, ::g::Fuse::Node*, int*))ScrollView__IsMarginBoxDependent_fn;
    type->fp_OnApplyStyle = (void(*)(::g::Fuse::Node*, uObject*))ScrollView__OnApplyStyle_fn;
    type->fp_OnBehaviorAdded = (void(*)(::g::Fuse::Node*, ::g::Fuse::Behavior*))ScrollView__OnBehaviorAdded_fn;
    type->fp_OnBehaviorRemoved = (void(*)(::g::Fuse::Node*, ::g::Fuse::Behavior*))ScrollView__OnBehaviorRemoved_fn;
    type->fp_OnContentChanged = (void(*)(::g::Fuse::Controls::ContentControl*, ::g::Fuse::Node*, ::g::Fuse::Node*))ScrollView__OnContentChanged_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::TYPES[159] = ::g::Fuse::StyleProperty1_typeof()->MakeType(ScrollView_typeof(), ::g::Fuse::Gestures::ScrollDirections_typeof());
    ::TYPES[160] = ::g::Uno::Action1_typeof()->MakeType(ScrollView_typeof());
    ::TYPES[161] = ::g::Uno::Action2_typeof()->MakeType(ScrollView_typeof(), ::g::Fuse::Gestures::ScrollDirections_typeof());
    ::TYPES[162] = ::g::Uno::Func1_typeof()->MakeType(ScrollView_typeof(), ::g::Fuse::Gestures::ScrollDirections_typeof());
    ::TYPES[21] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[24] = ::g::Uno::Float4_typeof();
    ::TYPES[37] = ::g::Uno::Action_typeof();
    ::TYPES[26] = ::g::Uno::Int_typeof();
    ::TYPES[9] = ::g::Uno::Float2_typeof();
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[22] = ::g::Uno::Bool_typeof();
    ::TYPES[163] = ::g::Fuse::Gestures::Scroller_typeof();
    ::TYPES[164] = ::g::Fuse::Transform_typeof();
    ::TYPES[17] = ::g::Uno::Delegate_typeof();
    ::TYPES[33] = ::g::Uno::EventHandler_typeof();
    ::TYPES[19] = uObject_typeof();
    ::TYPES[34] = ::g::Uno::EventArgs_typeof();
    ::TYPES[165] = ::g::Fuse::Controls::ScrollPropertyChangedHandler_typeof();
    ::TYPES[166] = ::g::Fuse::Translation_typeof();
    ::TYPES[142] = ::g::Fuse::Controls::ContentControl_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::ContentControl_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::ContentControl_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::ContentControl_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::ContentControl_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::ContentControl_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::ContentControl_type, interface5));
    type->SetFields(90,
        ::g::Fuse::Gestures::ScrollDirections_typeof(), offsetof(::g::Fuse::Controls::ScrollView, _allowedScrollDirections), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::ScrollView, _cacheContentMarginSize), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::ScrollView, _keepFocusInView), 0,
        ::g::Fuse::Gestures::Scroller_typeof(), offsetof(::g::Fuse::Controls::ScrollView, _scroller), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::ScrollView, _scrollPosition), 0,
        ::g::Fuse::Translation_typeof(), offsetof(::g::Fuse::Controls::ScrollView, _scrollTranslation), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::ScrollView, _snapMaxTransform), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::ScrollView, _snapMinTransform), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::ScrollView, _userScroll), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Controls::ScrollView, ScrollPositionChanged1), 0,
        ::g::Fuse::Controls::ScrollPropertyChangedHandler_typeof(), offsetof(::g::Fuse::Controls::ScrollView, ScrollPropertyChanged1), 0,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(ScrollView_typeof(), ::g::Fuse::Gestures::ScrollDirections_typeof()), (uintptr_t)&::g::Fuse::Controls::ScrollView::AllowedScrollDirectionsProperty_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("AllowedScrollDirectionsProperty", 101));
    type->Reflection.SetFunctions(28,
        new uFunction("get_AllowedScrollDirections", NULL, (void*)ScrollView__get_AllowedScrollDirections_fn, 0, false, ::g::Fuse::Gestures::ScrollDirections_typeof(), 0),
        new uFunction("set_AllowedScrollDirections", NULL, (void*)ScrollView__set_AllowedScrollDirections_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::ScrollDirections_typeof()),
        new uFunction("get_Content", NULL, (void*)ScrollView__get_Content1_fn, 0, false, ::g::Fuse::Elements::Element_typeof(), 0),
        new uFunction("set_Content", NULL, (void*)ScrollView__set_Content1_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::Element_typeof()),
        new uFunction("GetNodeScrollPosition", NULL, (void*)ScrollView__GetNodeScrollPosition_fn, 0, false, ::g::Uno::Float2_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("Goto", NULL, (void*)ScrollView__Goto_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_KeepFocusInView", NULL, (void*)ScrollView__get_KeepFocusInView_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_KeepFocusInView", NULL, (void*)ScrollView__set_KeepFocusInView_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_MaxScroll", NULL, (void*)ScrollView__get_MaxScroll_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_MinOverflow", NULL, (void*)ScrollView__get_MinOverflow_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_MinScroll", NULL, (void*)ScrollView__get_MinScroll_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)ScrollView__New2_fn, 0, true, ScrollView_typeof(), 0),
        new uFunction("get_RelativeScrollPosition", NULL, (void*)ScrollView__get_RelativeScrollPosition_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_RelativeScrollPosition", NULL, (void*)ScrollView__set_RelativeScrollPosition_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_Scroller", NULL, (void*)ScrollView__get_Scroller_fn, 0, false, ::g::Fuse::Gestures::Scroller_typeof(), 0),
        new uFunction("get_ScrollPosition", NULL, (void*)ScrollView__get_ScrollPosition_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_ScrollPosition", NULL, (void*)ScrollView__set_ScrollPosition_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("add_ScrollPositionChanged", NULL, (void*)ScrollView__add_ScrollPositionChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_ScrollPositionChanged", NULL, (void*)ScrollView__remove_ScrollPositionChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("add_ScrollPropertyChanged", NULL, (void*)ScrollView__add_ScrollPropertyChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::ScrollPropertyChangedHandler_typeof()),
        new uFunction("remove_ScrollPropertyChanged", NULL, (void*)ScrollView__remove_ScrollPropertyChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::ScrollPropertyChangedHandler_typeof()),
        new uFunction("SetScrollPosition", NULL, (void*)ScrollView__SetScrollPosition_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float2_typeof(), uObject_typeof()),
        new uFunction("get_SnapMaxTransform", NULL, (void*)ScrollView__get_SnapMaxTransform_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_SnapMaxTransform", NULL, (void*)ScrollView__set_SnapMaxTransform_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_SnapMinTransform", NULL, (void*)ScrollView__get_SnapMinTransform_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_SnapMinTransform", NULL, (void*)ScrollView__set_SnapMinTransform_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_UserScroll", NULL, (void*)ScrollView__get_UserScroll_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_UserScroll", NULL, (void*)ScrollView__set_UserScroll_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));
    return type;
}

// public ScrollView() :3128
void ScrollView__ctor_4_fn(ScrollView* __this)
{
    __this->ctor_4();
}

// public Fuse.Gestures.ScrollDirections get_AllowedScrollDirections() :3176
void ScrollView__get_AllowedScrollDirections_fn(ScrollView* __this, int* __retval)
{
    *__retval = __this->AllowedScrollDirections();
}

// public void set_AllowedScrollDirections(Fuse.Gestures.ScrollDirections value) :3177
void ScrollView__set_AllowedScrollDirections_fn(ScrollView* __this, int* value)
{
    __this->AllowedScrollDirections(*value);
}

// protected override sealed void ArrangePaddingBox(float2 size, Fuse.SizeFlags flags) :3310
void ScrollView__ArrangePaddingBox_fn(ScrollView* __this, ::g::Uno::Float2* size, int* flags)
{
    ::g::Uno::Float4 ind1;
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float4 ind3;
    ::g::Uno::Float2 size_ = *size;
    int flags_ = *flags;

    if (__this->Content1() == NULL)
        __this->_cacheContentMarginSize = ::g::Uno::Float2__New1(0.0f);
    else
    {
        size_ = ::g::Uno::Float2__op_Subtraction2(size_, ::g::Uno::Float2__op_Addition2((ind1 = __this->Padding(), ::g::Uno::Float2__New2(ind1.X, ind1.Y)), (ind2 = __this->Padding(), ::g::Uno::Float2__New2(ind2.Z, ind2.W))));
        __this->_cacheContentMarginSize = uPtr(__this->Content1())->ArrangeMarginBox((ind3 = __this->Padding(), ::g::Uno::Float2__New2(ind3.X, ind3.Y)), size_, flags_);
    }

    ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[37/*Uno.Action*/], (void*)ScrollView__UpdateScrollPosition_fn, __this));
}

// private float2 ConstrainExtent(float2 t) :3301
void ScrollView__ConstrainExtent_fn(ScrollView* __this, ::g::Uno::Float2* t, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ConstrainExtent(*t);
}

// public new Fuse.Elements.Element get_Content() :3092
void ScrollView__get_Content1_fn(ScrollView* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->Content1();
}

// public new void set_Content(Fuse.Elements.Element value) :3093
void ScrollView__set_Content1_fn(ScrollView* __this, ::g::Fuse::Elements::Element* value)
{
    __this->Content1(value);
}

// private static Fuse.Gestures.ScrollDirections GetAllowedScrollDirections(Fuse.Controls.ScrollView sv) :3179
void ScrollView__GetAllowedScrollDirections_fn(ScrollView* sv, int* __retval)
{
    *__retval = ScrollView::GetAllowedScrollDirections(sv);
}

// protected override sealed float2 GetContentSize(float2 fillSize, Fuse.SizeFlags fillSet) :3335
void ScrollView__GetContentSize_fn(ScrollView* __this, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float4 ind4;
    ::g::Uno::Float4 ind5;
    ::g::Uno::Float2 fillSize_ = *fillSize;
    int fillSet_ = *fillSet;

    if (__this->Content1() != NULL)
    {
        fillSize_ = ::g::Uno::Float2__op_Subtraction2(fillSize_, ::g::Uno::Float2__op_Addition2((ind4 = __this->Padding(), ::g::Uno::Float2__New2(ind4.X, ind4.Y)), (ind5 = __this->Padding(), ::g::Uno::Float2__New2(ind5.Z, ind5.W))));
        ::g::Uno::Float2 r = uPtr(__this->Content1())->GetMarginSize(fillSize_, fillSet_);
        return *__retval = r, void();
    }

    return *__retval = ::g::Uno::Float2__New1(0.0f), void();
}

// public float2 GetNodeScrollPosition(Fuse.Node n) :3216
void ScrollView__GetNodeScrollPosition_fn(ScrollView* __this, ::g::Fuse::Node* n, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetNodeScrollPosition(n);
}

// public void Goto(float2 position) :3232
void ScrollView__Goto_fn(ScrollView* __this, ::g::Uno::Float2* position)
{
    __this->Goto(*position);
}

// protected override sealed Fuse.LayoutDependent IsMarginBoxDependent(Fuse.Node child) :3400
void ScrollView__IsMarginBoxDependent_fn(ScrollView* __this, ::g::Fuse::Node* child, int* __retval)
{
    return *__retval = 3, void();
}

// public bool get_KeepFocusInView() :3157
void ScrollView__get_KeepFocusInView_fn(ScrollView* __this, bool* __retval)
{
    *__retval = __this->KeepFocusInView();
}

// public void set_KeepFocusInView(bool value) :3158
void ScrollView__set_KeepFocusInView_fn(ScrollView* __this, bool* value)
{
    __this->KeepFocusInView(*value);
}

// public float2 get_MaxScroll() :3273
void ScrollView__get_MaxScroll_fn(ScrollView* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->MaxScroll();
}

// public float2 get_MinOverflow() :3295
void ScrollView__get_MinOverflow_fn(ScrollView* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->MinOverflow();
}

// public float2 get_MinScroll() :3285
void ScrollView__get_MinScroll_fn(ScrollView* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->MinScroll();
}

// public ScrollView New() :3128
void ScrollView__New2_fn(ScrollView** __retval)
{
    *__retval = ScrollView::New2();
}

// protected override sealed void OnApplyStyle(object target) :3346
void ScrollView__OnApplyStyle_fn(ScrollView* __this, uObject* target)
{
    bool ret11;
    bool ret12;
    bool ret13;
    bool ret14;
    bool ret15;
    bool ret16;
    bool ret17;
    bool ret18;
    bool ret19;
    bool ret20;
    bool ret21;
    bool ret22;
    ::g::Fuse::Node__OnApplyStyle_fn(__this, target);
    ::g::Fuse::Elements::Element* elm = __this->Content1();

    if (target != elm)
        return;

    int align = 0;
    bool setWidth = false;
    bool setHeight = false;

    if (__this->AllowedScrollDirections() == 15)
    {
        align = 5;
        setWidth = true;
        setHeight = true;
    }
    else if (__this->AllowedScrollDirections() == 3)
    {
        align = 1;
        setWidth = true;
    }
    else if (__this->AllowedScrollDirections() == 12)
    {
        align = 4;
        setHeight = true;
    }

    if (!(::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::MaxWidthProperty()), elm, &ret11), ret11) && setWidth)
        ::g::Fuse::StylePropertyWithUnit__SetStyle1_fn(uPtr(::g::Fuse::Elements::Element::MaxWidthProperty()), elm, uCRef(FLT_INF), uCRef<int>(1), &ret12);

    if (!(::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::MaxHeightProperty()), elm, &ret13), ret13) && setHeight)
        ::g::Fuse::StylePropertyWithUnit__SetStyle1_fn(uPtr(::g::Fuse::Elements::Element::MaxHeightProperty()), elm, uCRef(FLT_INF), uCRef<int>(1), &ret14);

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::AlignmentProperty()), elm, &ret15), ret15))
        return;

    bool setAlign = false;

    if ((setWidth && !(::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::WidthProperty()), elm, &ret16), ret16)) && !(::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::MinWidthProperty()), elm, &ret17), ret17))
    {
        ::g::Fuse::StylePropertyWithUnit__SetStyle1_fn(uPtr(::g::Fuse::Elements::Element::MinWidthProperty()), elm, uCRef(100.0f), uCRef<int>(1), &ret18);
        setAlign = true;
    }

    if ((setHeight && !(::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::HeightProperty()), elm, &ret19), ret19)) && !(::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::MinHeightProperty()), elm, &ret20), ret20))
    {
        ::g::Fuse::StylePropertyWithUnit__SetStyle1_fn(uPtr(::g::Fuse::Elements::Element::MinHeightProperty()), elm, uCRef(100.0f), uCRef<int>(1), &ret21);
        setAlign = true;
    }

    if (setAlign)
        ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(::g::Fuse::Elements::Element::AlignmentProperty()), elm, uCRef<int>(align), &ret22);
}

// internal override sealed void OnBehaviorAdded(Fuse.Behavior b) :3140
void ScrollView__OnBehaviorAdded_fn(ScrollView* __this, ::g::Fuse::Behavior* b)
{
    ::g::Fuse::Node__OnBehaviorAdded_fn(__this, b);

    if (uIs(b, ::TYPES[163/*Fuse.Gestures.Scroller*/]))
        __this->_scroller = uAs< ::g::Fuse::Gestures::Scroller*>(b, ::TYPES[163/*Fuse.Gestures.Scroller*/]);
}

// internal override sealed void OnBehaviorRemoved(Fuse.Behavior b) :3147
void ScrollView__OnBehaviorRemoved_fn(ScrollView* __this, ::g::Fuse::Behavior* b)
{
    ::g::Fuse::Node__OnBehaviorRemoved_fn(__this, b);

    if (b == __this->_scroller)
        __this->_scroller = NULL;
}

// protected override sealed void OnContentChanged(Fuse.Node oldContent, Fuse.Node newContent) :3121
void ScrollView__OnContentChanged_fn(ScrollView* __this, ::g::Fuse::Node* oldContent, ::g::Fuse::Node* newContent)
{
    bool ret23;
    ::g::Fuse::Controls::ContentControl__OnContentChanged_fn(__this, oldContent, newContent);

    if (oldContent != NULL)
        ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(uPtr(oldContent)->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[164/*Fuse.Transform*/])), __this->_scrollTranslation, &ret23);

    if (newContent != NULL)
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(newContent)->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[164/*Fuse.Transform*/])), __this->_scrollTranslation);
}

// private void OnScrollPositionChanged(object origin) :3260
void ScrollView__OnScrollPositionChanged_fn(ScrollView* __this, uObject* origin)
{
    __this->OnScrollPositionChanged(origin);
}

// private void OnScrollPropertyChanged(object origin) :3186
void ScrollView__OnScrollPropertyChanged_fn(ScrollView* __this, uObject* origin)
{
    __this->OnScrollPropertyChanged(origin);
}

// public float2 get_RelativeScrollPosition() :3242
void ScrollView__get_RelativeScrollPosition_fn(ScrollView* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->RelativeScrollPosition();
}

// public void set_RelativeScrollPosition(float2 value) :3252
void ScrollView__set_RelativeScrollPosition_fn(ScrollView* __this, ::g::Uno::Float2* value)
{
    __this->RelativeScrollPosition(*value);
}

// public Fuse.Gestures.Scroller get_Scroller() :3137
void ScrollView__get_Scroller_fn(ScrollView* __this, ::g::Fuse::Gestures::Scroller** __retval)
{
    *__retval = __this->Scroller();
}

// public float2 get_ScrollPosition() :3197
void ScrollView__get_ScrollPosition_fn(ScrollView* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ScrollPosition();
}

// public void set_ScrollPosition(float2 value) :3198
void ScrollView__set_ScrollPosition_fn(ScrollView* __this, ::g::Uno::Float2* value)
{
    __this->ScrollPosition(*value);
}

// public generated void add_ScrollPositionChanged(Uno.EventHandler value) :3258
void ScrollView__add_ScrollPositionChanged_fn(ScrollView* __this, uDelegate* value)
{
    __this->add_ScrollPositionChanged(value);
}

// public generated void remove_ScrollPositionChanged(Uno.EventHandler value) :3258
void ScrollView__remove_ScrollPositionChanged_fn(ScrollView* __this, uDelegate* value)
{
    __this->remove_ScrollPositionChanged(value);
}

// public generated void add_ScrollPropertyChanged(Fuse.Controls.ScrollPropertyChangedHandler value) :3214
void ScrollView__add_ScrollPropertyChanged_fn(ScrollView* __this, uDelegate* value)
{
    __this->add_ScrollPropertyChanged(value);
}

// public generated void remove_ScrollPropertyChanged(Fuse.Controls.ScrollPropertyChangedHandler value) :3214
void ScrollView__remove_ScrollPropertyChanged_fn(ScrollView* __this, uDelegate* value)
{
    __this->remove_ScrollPropertyChanged(value);
}

// private static void SetAllowedScrollDirections(Fuse.Controls.ScrollView sv, Fuse.Gestures.ScrollDirections value) :3180
void ScrollView__SetAllowedScrollDirections_fn(ScrollView* sv, int* value)
{
    ScrollView::SetAllowedScrollDirections(sv, *value);
}

// public void SetScrollPosition(float2 position, object origin) :3201
void ScrollView__SetScrollPosition_fn(ScrollView* __this, ::g::Uno::Float2* position, uObject* origin)
{
    __this->SetScrollPosition(*position, origin);
}

// public bool get_SnapMaxTransform() :3117
void ScrollView__get_SnapMaxTransform_fn(ScrollView* __this, bool* __retval)
{
    *__retval = __this->SnapMaxTransform();
}

// public void set_SnapMaxTransform(bool value) :3118
void ScrollView__set_SnapMaxTransform_fn(ScrollView* __this, bool* value)
{
    __this->SnapMaxTransform(*value);
}

// public bool get_SnapMinTransform() :3110
void ScrollView__get_SnapMinTransform_fn(ScrollView* __this, bool* __retval)
{
    *__retval = __this->SnapMinTransform();
}

// public void set_SnapMinTransform(bool value) :3111
void ScrollView__set_SnapMinTransform_fn(ScrollView* __this, bool* value)
{
    __this->SnapMinTransform(*value);
}

// private void UpdateScrollPosition() :3323
void ScrollView__UpdateScrollPosition_fn(ScrollView* __this)
{
    __this->UpdateScrollPosition();
}

// public bool get_UserScroll() :3099
void ScrollView__get_UserScroll_fn(ScrollView* __this, bool* __retval)
{
    *__retval = __this->UserScroll();
}

// public void set_UserScroll(bool value) :3100
void ScrollView__set_UserScroll_fn(ScrollView* __this, bool* value)
{
    __this->UserScroll(*value);
}

uSStrong< ::g::Fuse::StyleProperty1*> ScrollView::AllowedScrollDirectionsProperty_;

// public ScrollView() [instance] :3128
void ScrollView::ctor_4()
{
    _userScroll = true;
    _snapMinTransform = true;
    _snapMaxTransform = true;
    _keepFocusInView = true;
    _allowedScrollDirections = 12;
    _scrollTranslation = ::g::Fuse::Translation::New1();
    ctor_3();
    ClipToBounds(true);
    HitTestMode(6);
}

// public Fuse.Gestures.ScrollDirections get_AllowedScrollDirections() [instance] :3176
int ScrollView::AllowedScrollDirections()
{
    return _allowedScrollDirections;
}

// public void set_AllowedScrollDirections(Fuse.Gestures.ScrollDirections value) [instance] :3177
void ScrollView::AllowedScrollDirections(int value)
{
    bool ret24;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(ScrollView::AllowedScrollDirectionsProperty()), this, uCRef<int>(value), &ret24);
}

// private float2 ConstrainExtent(float2 t) [instance] :3301
::g::Uno::Float2 ScrollView::ConstrainExtent(::g::Uno::Float2 t)
{
    if (AllowedScrollDirections() == 3)
        t.Y = 0.0f;
    else if (AllowedScrollDirections() == 12)
        t.X = 0.0f;

    return t;
}

// public new Fuse.Elements.Element get_Content() [instance] :3092
::g::Fuse::Elements::Element* ScrollView::Content1()
{
    return uAs< ::g::Fuse::Elements::Element*>(Content(), ::TYPES[21/*Fuse.Elements.Element*/]);
}

// public new void set_Content(Fuse.Elements.Element value) [instance] :3093
void ScrollView::Content1(::g::Fuse::Elements::Element* value)
{
    Content(value);
}

// public float2 GetNodeScrollPosition(Fuse.Node n) [instance] :3216
::g::Uno::Float2 ScrollView::GetNodeScrollPosition(::g::Fuse::Node* n)
{
    if ((n == NULL) || (Content1() == NULL))
        return ::g::Uno::Float2__New1(0.0f);

    ::g::Uno::Float4x4 trans = uPtr(n)->GetTransformTo(Content1());
    ::g::Uno::Float4 local = ::g::Uno::Vector::Transform4(::g::Uno::Float3__New1(0.0f), trans);
    ::g::Fuse::Elements::Element* elm = uAs< ::g::Fuse::Elements::Element*>(n, ::TYPES[21/*Fuse.Elements.Element*/]);

    if (elm == NULL)
        return ::g::Uno::Float2__New2(local.X, local.Y);

    return ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__New2(local.X, local.Y), ::g::Uno::Float2__op_Division1(uPtr(elm)->ActualSize(), 2.0f)), ::g::Uno::Float2__op_Division1(ActualSize(), 2.0f));
}

// public void Goto(float2 position) [instance] :3232
void ScrollView::Goto(::g::Uno::Float2 position)
{
    if (_scroller == NULL)
        ScrollPosition(::g::Uno::Math::Min3(MaxScroll(), ::g::Uno::Math::Max3(MinScroll(), ScrollPosition())));
    else
        uPtr(_scroller)->Goto(position);
}

// public bool get_KeepFocusInView() [instance] :3157
bool ScrollView::KeepFocusInView()
{
    return _keepFocusInView;
}

// public void set_KeepFocusInView(bool value) [instance] :3158
void ScrollView::KeepFocusInView(bool value)
{
    if (_keepFocusInView != value)
    {
        _keepFocusInView = value;
        OnScrollPropertyChanged(this);
    }
}

// public float2 get_MaxScroll() [instance] :3273
::g::Uno::Float2 ScrollView::MaxScroll()
{
    ::g::Uno::Float4 ind6;
    ::g::Uno::Float4 ind7;

    if (Content1() == NULL)
        return ::g::Uno::Float2__New1(0.0f);

    return ConstrainExtent(::g::Uno::Math::Max3(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Addition2(_cacheContentMarginSize, uPtr(Content1())->ActualPosition()), (ind6 = Padding(), ::g::Uno::Float2__New2(ind6.X, ind6.Y))), (ind7 = Padding(), ::g::Uno::Float2__New2(ind7.Z, ind7.W))), ActualSize()), ::g::Uno::Float2__New1(0.0f)));
}

// public float2 get_MinOverflow() [instance] :3295
::g::Uno::Float2 ScrollView::MinOverflow()
{
    return ::g::Uno::Float2__op_Subtraction2(MinScroll(), (_scroller == NULL) ? ::g::Uno::Float2__New1(0.0f) : uPtr(_scroller)->OverflowExtent());
}

// public float2 get_MinScroll() [instance] :3285
::g::Uno::Float2 ScrollView::MinScroll()
{
    ::g::Uno::Float4 ind8;

    if (Content1() == NULL)
        return ::g::Uno::Float2__New1(0.0f);

    return ConstrainExtent(::g::Uno::Math::Min3(::g::Uno::Float2__New1(0.0f), ::g::Uno::Float2__op_Subtraction2(uPtr(Content1())->ActualPosition(), (ind8 = Padding(), ::g::Uno::Float2__New2(ind8.X, ind8.Y)))));
}

// private void OnScrollPositionChanged(object origin) [instance] :3260
void ScrollView::OnScrollPositionChanged(uObject* origin)
{
    uDelegate* handler = ScrollPositionChanged1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());

    OnScrollPropertyChanged(origin);
}

// private void OnScrollPropertyChanged(object origin) [instance] :3186
void ScrollView::OnScrollPropertyChanged(uObject* origin)
{
    if (::g::Uno::Delegate::op_Inequality(ScrollPropertyChanged1, NULL))
        uPtr(ScrollPropertyChanged1)->Invoke(2, this, (::g::Fuse::Controls::ScrollPropertyChangedArgs*)::g::Fuse::Controls::ScrollPropertyChangedArgs::New2(origin));
}

// public float2 get_RelativeScrollPosition() [instance] :3242
::g::Uno::Float2 ScrollView::RelativeScrollPosition()
{
    ::g::Uno::Float2 r = ::g::Uno::Float2__op_Subtraction2(MaxScroll(), MinScroll());

    if ((r.X < 1e-05f) || (r.Y < 1e-05f))
        return (Content1() == NULL) ? ::g::Uno::Float2__New1(0.5f) : ::g::Fuse::Elements::AlignmentHelpers::GetAnchor(uPtr(Content1())->Alignment());

    return ::g::Uno::Float2__op_Division2(::g::Uno::Float2__op_Subtraction2(ScrollPosition(), MinScroll()), ::g::Uno::Float2__op_Subtraction2(MaxScroll(), MinScroll()));
}

// public void set_RelativeScrollPosition(float2 value) [instance] :3252
void ScrollView::RelativeScrollPosition(::g::Uno::Float2 value)
{
    ScrollPosition(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Multiply2(value, ::g::Uno::Float2__op_Subtraction2(MaxScroll(), MinScroll())), MinScroll()));
}

// public Fuse.Gestures.Scroller get_Scroller() [instance] :3137
::g::Fuse::Gestures::Scroller* ScrollView::Scroller()
{
    return _scroller;
}

// public float2 get_ScrollPosition() [instance] :3197
::g::Uno::Float2 ScrollView::ScrollPosition()
{
    return _scrollPosition;
}

// public void set_ScrollPosition(float2 value) [instance] :3198
void ScrollView::ScrollPosition(::g::Uno::Float2 value)
{
    SetScrollPosition(value, this);
}

// public generated void add_ScrollPositionChanged(Uno.EventHandler value) [instance] :3258
void ScrollView::add_ScrollPositionChanged(uDelegate* value)
{
    ScrollPositionChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ScrollPositionChanged1, value), ::TYPES[33/*Uno.EventHandler*/]);
}

// public generated void remove_ScrollPositionChanged(Uno.EventHandler value) [instance] :3258
void ScrollView::remove_ScrollPositionChanged(uDelegate* value)
{
    ScrollPositionChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ScrollPositionChanged1, value), ::TYPES[33/*Uno.EventHandler*/]);
}

// public generated void add_ScrollPropertyChanged(Fuse.Controls.ScrollPropertyChangedHandler value) [instance] :3214
void ScrollView::add_ScrollPropertyChanged(uDelegate* value)
{
    ScrollPropertyChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ScrollPropertyChanged1, value), ::TYPES[165/*Fuse.Controls.ScrollPropertyChangedHandler*/]);
}

// public generated void remove_ScrollPropertyChanged(Fuse.Controls.ScrollPropertyChangedHandler value) [instance] :3214
void ScrollView::remove_ScrollPropertyChanged(uDelegate* value)
{
    ScrollPropertyChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ScrollPropertyChanged1, value), ::TYPES[165/*Fuse.Controls.ScrollPropertyChangedHandler*/]);
}

// public void SetScrollPosition(float2 position, object origin) [instance] :3201
void ScrollView::SetScrollPosition(::g::Uno::Float2 position, uObject* origin)
{
    _scrollPosition = ConstrainExtent(position);

    if (!SnapMinTransform())
        position = ::g::Uno::Math::Max3(MinScroll(), position);

    if (!SnapMaxTransform())
        position = ::g::Uno::Math::Min3(MaxScroll(), position);

    uPtr(_scrollTranslation)->Vector(::g::Uno::Float3__New4(::g::Uno::Float2__op_UnaryNegation(position), 0.0f));
    OnScrollPositionChanged(origin);
}

// public bool get_SnapMaxTransform() [instance] :3117
bool ScrollView::SnapMaxTransform()
{
    return _snapMaxTransform;
}

// public void set_SnapMaxTransform(bool value) [instance] :3118
void ScrollView::SnapMaxTransform(bool value)
{
    _snapMaxTransform = value;
}

// public bool get_SnapMinTransform() [instance] :3110
bool ScrollView::SnapMinTransform()
{
    return _snapMinTransform;
}

// public void set_SnapMinTransform(bool value) [instance] :3111
void ScrollView::SnapMinTransform(bool value)
{
    _snapMinTransform = value;
}

// private void UpdateScrollPosition() [instance] :3323
void ScrollView::UpdateScrollPosition()
{
    if (_scroller != NULL)
        uPtr(_scroller)->CheckLimits();
    else
        ScrollPosition(::g::Uno::Math::Min3(MaxScroll(), ::g::Uno::Math::Max3(MinScroll(), ScrollPosition())));

    OnScrollPositionChanged(this);
}

// public bool get_UserScroll() [instance] :3099
bool ScrollView::UserScroll()
{
    return _userScroll;
}

// public void set_UserScroll(bool value) [instance] :3100
void ScrollView::UserScroll(bool value)
{
    _userScroll = value;
    OnScrollPropertyChanged(this);
}

// private static Fuse.Gestures.ScrollDirections GetAllowedScrollDirections(Fuse.Controls.ScrollView sv) [static] :3179
int ScrollView::GetAllowedScrollDirections(ScrollView* sv)
{
    ScrollView_typeof()->Init();
    return uPtr(sv)->_allowedScrollDirections;
}

// public ScrollView New() [static] :3128
ScrollView* ScrollView::New2()
{
    ScrollView* obj9 = (ScrollView*)uNew(ScrollView_typeof());
    obj9->ctor_4();
    return obj9;
}

// private static void SetAllowedScrollDirections(Fuse.Controls.ScrollView sv, Fuse.Gestures.ScrollDirections value) [static] :3180
void ScrollView::SetAllowedScrollDirections(ScrollView* sv, int value)
{
    ScrollView_typeof()->Init();
    uPtr(sv)->_allowedScrollDirections = value;
    sv->OnScrollPropertyChanged(sv);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(3078)
// ------------------------------------------------------------

// public sealed class ScrollViewer :3078
// {
::g::Fuse::Controls::ContentControl_type* ScrollViewer_typeof()
{
    static uSStrong< ::g::Fuse::Controls::ContentControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 101;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(ScrollViewer);
    options.TypeSize = sizeof(::g::Fuse::Controls::ContentControl_type);
    type = (::g::Fuse::Controls::ContentControl_type*)uClassType::New("Fuse.Controls.ScrollViewer", options);
    type->SetBase(::g::Fuse::Controls::ScrollView_typeof());
    type->fp_ctor_ = (void*)ScrollViewer__New3_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::STRINGS[12] = uString::Const("ScrollViewer is deprecated - use ScrollView instead");
    ::STRINGS[10] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Controls\\0.19.3\\$.uno");
    ::STRINGS[13] = uString::Const(".ctor");
    ::TYPES[19] = uObject_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::ContentControl_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::ContentControl_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::ContentControl_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::ContentControl_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::ContentControl_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::ContentControl_type, interface5));
    type->SetFields(101);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ScrollViewer__New3_fn, 0, true, ScrollViewer_typeof(), 0));
    return type;
}

// public ScrollViewer() :3080
void ScrollViewer__ctor_5_fn(ScrollViewer* __this)
{
    __this->ctor_5();
}

// public ScrollViewer New() :3080
void ScrollViewer__New3_fn(ScrollViewer** __retval)
{
    *__retval = ScrollViewer::New3();
}

// public ScrollViewer() [instance] :3080
void ScrollViewer::ctor_5()
{
    ctor_4();
    ::g::Fuse::Diagnostics::Deprecated(::STRINGS[12/*"ScrollViewe...*/], this, ::STRINGS[10/*"C:\\Program...*/], 3082, ::STRINGS[13/*".ctor"*/]);
}

// public ScrollViewer New() [static] :3080
ScrollViewer* ScrollViewer::New3()
{
    ScrollViewer* obj1 = (ScrollViewer*)uNew(ScrollViewer_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(3420)
// ------------------------------------------------------------

// public abstract class Shape :3420
// {
// static Shape() :3420
static void Shape__cctor_4_fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret2;
    ::g::Fuse::StyleProperty1* ret3;
    ::g::Fuse::StyleProperty1* ret4;
    Shape::FillProperty_ = (::g::Fuse::StyleProperty1__New2_fn(::TYPES[167/*Fuse.StyleProperty<Fuse.Controls.Shape, Fuse.Drawing.Brush>*/], NULL, NULL, uDelegate::New(::TYPES[168/*Uno.Action<Fuse.Controls.Shape, Fuse.Drawing.Brush>*/], (void*)Shape__SetFill_fn), uDelegate::New(::TYPES[169/*Uno.Func<Fuse.Controls.Shape, Fuse.Drawing.Brush>*/], (void*)Shape__GetFill_fn), &ret2), ret2);
    Shape::StrokeProperty_ = (::g::Fuse::StyleProperty1__New2_fn(::TYPES[170/*Fuse.StyleProperty<Fuse.Controls.Shape, Fuse.Drawing.Stroke>*/], NULL, NULL, uDelegate::New(::TYPES[171/*Uno.Action<Fuse.Controls.Shape, Fuse.Drawing.Stroke>*/], (void*)Shape__SetStroke_fn), uDelegate::New(::TYPES[172/*Uno.Func<Fuse.Controls.Shape, Fuse.Drawing.Stroke>*/], (void*)Shape__GetStroke_fn), &ret3), ret3);
    Shape::SmoothnessProperty_ = (::g::Fuse::StyleProperty1__New2_fn(::TYPES[173/*Fuse.StyleProperty<Fuse.Controls.Shape, float>*/], uCRef(1.0f), uDelegate::New(::TYPES[174/*Uno.Action<Fuse.Controls.Shape>*/], (void*)Shape__OnSmoothnessChanged_fn), uDelegate::New(::TYPES[175/*Uno.Action<Fuse.Controls.Shape, float>*/], (void*)Shape__SetSmoothness_fn), uDelegate::New(::TYPES[176/*Uno.Func<Fuse.Controls.Shape, float>*/], (void*)Shape__GetSmoothness_fn), &ret4), ret4);
}

::g::Fuse::Controls::Panel_type* Shape_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 109;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(Shape);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Fuse.Controls.Shape", options);
    type->SetBase(::g::Fuse::Controls::Panel_typeof());
    type->fp_cctor_ = Shape__cctor_4_fn;
    type->fp_CalcRenderBounds = (void(*)(::g::Fuse::Elements::Element*, ::g::Uno::Rect*))Shape__CalcRenderBounds_fn;
    type->fp_OnResetStyle = (void(*)(::g::Fuse::Node*))Shape__OnResetStyle_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Shape__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Shape__OnUnrooted_fn;
    type->interface6.fp_AddChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChild_fn;
    type->interface6.fp_AddChildAt = (void(*)(uObject*, int*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChildAt_fn;
    type->interface6.fp_RemoveChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_RemoveChild_fn;
    type->interface6.fp_GetChild = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_GetChild_fn;
    type->interface7.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Add_fn;
    type->interface7.fp_Remove = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Remove_fn;
    type->interface6.fp_get_ChildCount = (void(*)(uObject*, int*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_get_ChildCount_fn;
    type->interface6.fp_get_Children = (void(*)(uObject*, uObject**))::g::Fuse::Controls::Panel__get_Children_fn;
    type->interface6.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__get_ActualSize_fn;
    type->interface6.fp_get_HasChildren = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__get_HasChildren_fn;
    type->interface6.fp_add_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildAdded_fn;
    type->interface6.fp_remove_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildAdded_fn;
    type->interface6.fp_add_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildRemoved_fn;
    type->interface6.fp_remove_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildRemoved_fn;
    type->interface6.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface6.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_add_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__add_Update_fn;
    type->interface6.fp_remove_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__remove_Update_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::TYPES[167] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Shape_typeof(), ::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[168] = ::g::Uno::Action2_typeof()->MakeType(Shape_typeof(), ::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[169] = ::g::Uno::Func1_typeof()->MakeType(Shape_typeof(), ::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[170] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Shape_typeof(), ::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[171] = ::g::Uno::Action2_typeof()->MakeType(Shape_typeof(), ::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[172] = ::g::Uno::Func1_typeof()->MakeType(Shape_typeof(), ::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[173] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Shape_typeof(), ::g::Uno::Float_typeof());
    ::TYPES[174] = ::g::Uno::Action1_typeof()->MakeType(Shape_typeof());
    ::TYPES[175] = ::g::Uno::Action2_typeof()->MakeType(Shape_typeof(), ::g::Uno::Float_typeof());
    ::TYPES[176] = ::g::Uno::Func1_typeof()->MakeType(Shape_typeof(), ::g::Uno::Float_typeof());
    ::TYPES[177] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[178] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[21] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[179] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[180] = ::g::Fuse::Drawing::Stroke_typeof();
    ::TYPES[181] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[182] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[36] = ::g::Fuse::Drawing::DynamicBrush_typeof();
    ::TYPES[37] = ::g::Uno::Action_typeof();
    ::TYPES[40] = ::g::Uno::Double_typeof();
    ::TYPES[17] = ::g::Uno::Delegate_typeof();
    ::TYPES[183] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[184] = ::g::Uno::Float_typeof();
    ::TYPES[185] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[186] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[187] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[188] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[189] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Fuse::Triggers::IAddRemove_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Panel_type, interface7));
    type->SetFields(100,
        ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof()), offsetof(::g::Fuse::Controls::Shape, _fills), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Shape, _smoothness), 0,
        ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof()), offsetof(::g::Fuse::Controls::Shape, _strokes), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof()), offsetof(::g::Fuse::Controls::Shape, _styleFills), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof()), offsetof(::g::Fuse::Controls::Shape, _styleStrokes), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Controls::Shape, ShapeChanged1), 0,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Shape_typeof(), ::g::Fuse::Drawing::Brush_typeof()), (uintptr_t)&::g::Fuse::Controls::Shape::FillProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Shape_typeof(), ::g::Uno::Float_typeof()), (uintptr_t)&::g::Fuse::Controls::Shape::SmoothnessProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Shape_typeof(), ::g::Fuse::Drawing::Stroke_typeof()), (uintptr_t)&::g::Fuse::Controls::Shape::StrokeProperty_, uFieldFlagsStatic);
    type->Reflection.SetFields(3,
        new uField("FillProperty", 106),
        new uField("SmoothnessProperty", 107),
        new uField("StrokeProperty", 108));
    type->Reflection.SetFunctions(12,
        new uFunction("AddStyleFill", NULL, (void*)Shape__AddStyleFill_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Brush_typeof()),
        new uFunction("AddStyleStroke", NULL, (void*)Shape__AddStyleStroke_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Stroke_typeof()),
        new uFunction("get_Fill", NULL, (void*)Shape__get_Fill_fn, 0, false, ::g::Fuse::Drawing::Brush_typeof(), 0),
        new uFunction("set_Fill", NULL, (void*)Shape__set_Fill_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Brush_typeof()),
        new uFunction("get_Fills", NULL, (void*)Shape__get_Fills_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof()), 0),
        new uFunction("get_HasFills", NULL, (void*)Shape__get_HasFills_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_HasStrokes", NULL, (void*)Shape__get_HasStrokes_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_Smoothness", NULL, (void*)Shape__get_Smoothness_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Smoothness", NULL, (void*)Shape__set_Smoothness_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Stroke", NULL, (void*)Shape__get_Stroke_fn, 0, false, ::g::Fuse::Drawing::Stroke_typeof(), 0),
        new uFunction("set_Stroke", NULL, (void*)Shape__set_Stroke_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Stroke_typeof()),
        new uFunction("get_Strokes", NULL, (void*)Shape__get_Strokes_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof()), 0));
    return type;
}

// protected generated Shape() :3420
void Shape__ctor_4_fn(Shape* __this)
{
    __this->ctor_4();
}

// public void AddStyleFill(Fuse.Drawing.Brush b) :3463
void Shape__AddStyleFill_fn(Shape* __this, ::g::Fuse::Drawing::Brush* b)
{
    __this->AddStyleFill(b);
}

// public void AddStyleStroke(Fuse.Drawing.Stroke s) :3542
void Shape__AddStyleStroke_fn(Shape* __this, ::g::Fuse::Drawing::Stroke* s)
{
    __this->AddStyleStroke(s);
}

// protected override sealed Uno.Rect CalcRenderBounds() :3608
void Shape__CalcRenderBounds_fn(Shape* __this, ::g::Uno::Rect* __retval)
{
    ::g::Fuse::Drawing::Stroke* ret5;
    ::g::Uno::Rect r = ::g::Uno::Rect__New2(::g::Uno::Float2__New1(0.0f), __this->ActualSize());

    if (__this->HasStrokes())

        for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(__this->Strokes()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[180/*Fuse.Drawing.Stroke*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            ::g::Fuse::Drawing::Stroke* stroke = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[179/*Uno.Collections.IEnumerator<Fuse.Drawing.Stroke>*/]), &ret5), ret5);
            float b = uPtr(stroke)->Offset() + uPtr(stroke)->Width();

            if (b > 0.0f)
                r = ::g::Uno::Rect__Inflate(r, b);
        }

    r = ::g::Uno::Rect__Inflate(r, __this->Smoothness() - 1.0f);
    return *__retval = r, void();
}

// private float get_DrawCost() :3649
void Shape__get_DrawCost1_fn(Shape* __this, float* __retval)
{
    *__retval = __this->DrawCost1();
}

// public Fuse.Drawing.Brush get_Fill() :3435
void Shape__get_Fill_fn(Shape* __this, ::g::Fuse::Drawing::Brush** __retval)
{
    *__retval = __this->Fill();
}

// public void set_Fill(Fuse.Drawing.Brush value) :3436
void Shape__set_Fill_fn(Shape* __this, ::g::Fuse::Drawing::Brush* value)
{
    __this->Fill(value);
}

// public Uno.Collections.IList<Fuse.Drawing.Brush> get_Fills() :3455
void Shape__get_Fills_fn(Shape* __this, uObject** __retval)
{
    *__retval = __this->Fills();
}

// private static Fuse.Drawing.Brush GetFill(Fuse.Controls.Shape s) :3438
void Shape__GetFill_fn(Shape* s, ::g::Fuse::Drawing::Brush** __retval)
{
    *__retval = Shape::GetFill(s);
}

// private static float GetSmoothness(Fuse.Controls.Shape s) :3601
void Shape__GetSmoothness_fn(Shape* s, float* __retval)
{
    *__retval = Shape::GetSmoothness(s);
}

// private static Fuse.Drawing.Stroke GetStroke(Fuse.Controls.Shape s) :3514
void Shape__GetStroke_fn(Shape* s, ::g::Fuse::Drawing::Stroke** __retval)
{
    *__retval = Shape::GetStroke(s);
}

// public bool get_HasFills() :3503
void Shape__get_HasFills_fn(Shape* __this, bool* __retval)
{
    *__retval = __this->HasFills();
}

// public bool get_HasStrokes() :3526
void Shape__get_HasStrokes_fn(Shape* __this, bool* __retval)
{
    *__retval = __this->HasStrokes();
}

// private void OnFillAdded(Fuse.Drawing.Brush f) :3471
void Shape__OnFillAdded_fn(Shape* __this, ::g::Fuse::Drawing::Brush* f)
{
    __this->OnFillAdded(f);
}

// private void OnFillRemoved(Fuse.Drawing.Brush f) :3487
void Shape__OnFillRemoved_fn(Shape* __this, ::g::Fuse::Drawing::Brush* f)
{
    __this->OnFillRemoved(f);
}

// protected override sealed void OnResetStyle() :3626
void Shape__OnResetStyle_fn(Shape* __this)
{
    bool ret8;
    ::g::Fuse::Drawing::Brush* ret9;
    bool ret10;
    ::g::Fuse::Drawing::Stroke* ret11;

    if (__this->_styleFills != NULL)
    {
        for (int i = 0; i < uPtr(__this->_styleFills)->Count(); i++)
            ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(__this->Fills()), ::TYPES[185/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_styleFills), uCRef<int>(i), &ret9), ret9), &ret8);

        __this->_styleFills = NULL;
    }

    if (__this->_styleStrokes != NULL)
    {
        for (int i1 = 0; i1 < uPtr(__this->_styleStrokes)->Count(); i1++)
            ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(__this->Strokes()), ::TYPES[186/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_styleStrokes), uCRef<int>(i1), &ret11), ret11), &ret10);

        __this->_styleStrokes = NULL;
    }

    ::g::Fuse::Controls::Panel__OnResetStyle_fn(__this);
}

// protected override sealed void OnRooted() :3663
void Shape__OnRooted_fn(Shape* __this)
{
    ::g::Fuse::Drawing::Stroke* ret12;
    ::g::Fuse::Drawing::Brush* ret13;
    ::g::Fuse::Controls::Panel__OnRooted_fn(__this);

    if (__this->HasStrokes())

        for (int i = 0; i < uPtr(__this->_strokes)->Count(); ++i)
            uPtr((::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(__this->_strokes), uCRef<int>(i), &ret12), ret12))->Pin();

    if (__this->HasFills())

        for (int i1 = 0; i1 < uPtr(__this->_fills)->Count(); ++i1)
            uPtr((::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(__this->_fills), uCRef<int>(i1), &ret13), ret13))->Pin();

    __this->AddDrawCost((double)__this->DrawCost1());
}

// private void OnShadingChanged() :3580
void Shape__OnShadingChanged_fn(Shape* __this)
{
    __this->OnShadingChanged();
}

// protected void OnShapeChanged() :3586
void Shape__OnShapeChanged_fn(Shape* __this)
{
    __this->OnShapeChanged();
}

// private static void OnSmoothnessChanged(Fuse.Controls.Shape s) :3602
void Shape__OnSmoothnessChanged_fn(Shape* s)
{
    Shape::OnSmoothnessChanged(s);
}

// private void OnStrokeAdded(Fuse.Drawing.Stroke s) :3549
void Shape__OnStrokeAdded_fn(Shape* __this, ::g::Fuse::Drawing::Stroke* s)
{
    __this->OnStrokeAdded(s);
}

// private void OnStrokeChanged(Fuse.Drawing.Stroke s) :3575
void Shape__OnStrokeChanged_fn(Shape* __this, ::g::Fuse::Drawing::Stroke* s)
{
    __this->OnStrokeChanged(s);
}

// private void OnStrokeRemoved(Fuse.Drawing.Stroke s) :3562
void Shape__OnStrokeRemoved_fn(Shape* __this, ::g::Fuse::Drawing::Stroke* s)
{
    __this->OnStrokeRemoved(s);
}

// protected override sealed void OnUnrooted() :3680
void Shape__OnUnrooted_fn(Shape* __this)
{
    ::g::Fuse::Drawing::Stroke* ret14;
    ::g::Fuse::Drawing::Brush* ret15;
    ::g::Fuse::Controls::Panel__OnUnrooted_fn(__this);

    if (__this->HasStrokes())

        for (int i = 0; i < uPtr(__this->_strokes)->Count(); ++i)
            uPtr((::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(__this->_strokes), uCRef<int>(i), &ret14), ret14))->Unpin();

    if (__this->HasFills())

        for (int i1 = 0; i1 < uPtr(__this->_fills)->Count(); ++i1)
            uPtr((::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(__this->_fills), uCRef<int>(i1), &ret15), ret15))->Unpin();

    __this->RemoveDrawCost((double)__this->DrawCost1());
}

// internal void PrepareDraw(Fuse.DrawContext dc, float2 canvasSize) :3697
void Shape__PrepareDraw_fn(Shape* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2* canvasSize)
{
    __this->PrepareDraw(dc, *canvasSize);
}

// private static void SetFill(Fuse.Controls.Shape s, Fuse.Drawing.Brush value) :3444
void Shape__SetFill_fn(Shape* s, ::g::Fuse::Drawing::Brush* value)
{
    Shape::SetFill(s, value);
}

// private static void SetSmoothness(Fuse.Controls.Shape s, float value) :3600
void Shape__SetSmoothness_fn(Shape* s, float* value)
{
    Shape::SetSmoothness(s, *value);
}

// private static void SetStroke(Fuse.Controls.Shape s, Fuse.Drawing.Stroke value) :3520
void Shape__SetStroke_fn(Shape* s, ::g::Fuse::Drawing::Stroke* value)
{
    Shape::SetStroke(s, value);
}

// internal generated void add_ShapeChanged(Uno.Action value) :3585
void Shape__add_ShapeChanged_fn(Shape* __this, uDelegate* value)
{
    __this->add_ShapeChanged(value);
}

// internal generated void remove_ShapeChanged(Uno.Action value) :3585
void Shape__remove_ShapeChanged_fn(Shape* __this, uDelegate* value)
{
    __this->remove_ShapeChanged(value);
}

// public float get_Smoothness() :3597
void Shape__get_Smoothness_fn(Shape* __this, float* __retval)
{
    *__retval = __this->Smoothness();
}

// public void set_Smoothness(float value) :3598
void Shape__set_Smoothness_fn(Shape* __this, float* value)
{
    __this->Smoothness(*value);
}

// public Fuse.Drawing.Stroke get_Stroke() :3511
void Shape__get_Stroke_fn(Shape* __this, ::g::Fuse::Drawing::Stroke** __retval)
{
    *__retval = __this->Stroke();
}

// public void set_Stroke(Fuse.Drawing.Stroke value) :3512
void Shape__set_Stroke_fn(Shape* __this, ::g::Fuse::Drawing::Stroke* value)
{
    __this->Stroke(value);
}

// public Uno.Collections.IList<Fuse.Drawing.Stroke> get_Strokes() :3534
void Shape__get_Strokes_fn(Shape* __this, uObject** __retval)
{
    *__retval = __this->Strokes();
}

uSStrong< ::g::Fuse::StyleProperty1*> Shape::FillProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Shape::SmoothnessProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Shape::StrokeProperty_;

// protected generated Shape() [instance] :3420
void Shape::ctor_4()
{
    _smoothness = 1.0f;
    ctor_3();
}

// public void AddStyleFill(Fuse.Drawing.Brush b) [instance] :3463
void Shape::AddStyleFill(::g::Fuse::Drawing::Brush* b)
{
    if (_styleFills == NULL)
        _styleFills = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[177/*Uno.Collections.List<Fuse.Drawing.Brush>*/]));

    ::g::Uno::Collections::List__Add_fn(uPtr(_styleFills), b);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Fills()), ::TYPES[185/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), b);
}

// public void AddStyleStroke(Fuse.Drawing.Stroke s) [instance] :3542
void Shape::AddStyleStroke(::g::Fuse::Drawing::Stroke* s)
{
    if (_styleStrokes == NULL)
        _styleStrokes = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[178/*Uno.Collections.List<Fuse.Drawing.Stroke>*/]));

    ::g::Uno::Collections::List__Add_fn(uPtr(_styleStrokes), s);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Strokes()), ::TYPES[186/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), s);
}

// private float get_DrawCost() [instance] :3649
float Shape::DrawCost1()
{
    float cost = 0.0f;

    if (HasFills())
        cost = cost + (float)::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Fills()), ::TYPES[185/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]));

    if (HasStrokes())
        cost = cost + (float)::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Strokes()), ::TYPES[186/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]));

    return cost;
}

// public Fuse.Drawing.Brush get_Fill() [instance] :3435
::g::Fuse::Drawing::Brush* Shape::Fill()
{
    return Shape::GetFill(this);
}

// public void set_Fill(Fuse.Drawing.Brush value) [instance] :3436
void Shape::Fill(::g::Fuse::Drawing::Brush* value)
{
    Shape::SetFill(this, value);
}

// public Uno.Collections.IList<Fuse.Drawing.Brush> get_Fills() [instance] :3455
uObject* Shape::Fills()
{
    if (_fills == NULL)
        _fills = ((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[181/*Uno.Collections.ObservableList<Fuse.Drawing.Brush>*/], uDelegate::New(::TYPES[187/*Uno.Action<Fuse.Drawing.Brush>*/], (void*)Shape__OnFillAdded_fn, this), uDelegate::New(::TYPES[187/*Uno.Action<Fuse.Drawing.Brush>*/], (void*)Shape__OnFillRemoved_fn, this)));

    return (uObject*)_fills;
}

// public bool get_HasFills() [instance] :3503
bool Shape::HasFills()
{
    return (_fills != NULL) && (uPtr(_fills)->Count() > 0);
}

// public bool get_HasStrokes() [instance] :3526
bool Shape::HasStrokes()
{
    return (_strokes != NULL) && (uPtr(_strokes)->Count() > 0);
}

// private void OnFillAdded(Fuse.Drawing.Brush f) [instance] :3471
void Shape::OnFillAdded(::g::Fuse::Drawing::Brush* f)
{
    if (IsLocalRooted() && (f != NULL))
    {
        uPtr(f)->Pin();
        AddDrawCost(1.0);
    }

    if (uIs(f, ::TYPES[36/*Fuse.Drawing.DynamicBrush*/]))
        uPtr(uCast< ::g::Fuse::Drawing::DynamicBrush*>(f, ::TYPES[36/*Fuse.Drawing.DynamicBrush*/]))->add_ShadingChanged(uDelegate::New(::TYPES[37/*Uno.Action*/], (void*)Shape__OnShadingChanged_fn, this));

    OnShadingChanged();
}

// private void OnFillRemoved(Fuse.Drawing.Brush f) [instance] :3487
void Shape::OnFillRemoved(::g::Fuse::Drawing::Brush* f)
{
    if (IsLocalRooted() && (f != NULL))
    {
        uPtr(f)->Unpin();
        RemoveDrawCost(1.0);
    }

    if (uIs(f, ::TYPES[36/*Fuse.Drawing.DynamicBrush*/]))
        uPtr(uCast< ::g::Fuse::Drawing::DynamicBrush*>(f, ::TYPES[36/*Fuse.Drawing.DynamicBrush*/]))->remove_ShadingChanged(uDelegate::New(::TYPES[37/*Uno.Action*/], (void*)Shape__OnShadingChanged_fn, this));

    OnShadingChanged();
}

// private void OnShadingChanged() [instance] :3580
void Shape::OnShadingChanged()
{
    OnShapeChanged();
}

// protected void OnShapeChanged() [instance] :3586
void Shape::OnShapeChanged()
{
    if (::g::Uno::Delegate::op_Inequality(ShapeChanged1, NULL))
        uPtr(ShapeChanged1)->InvokeVoid();
}

// private void OnStrokeAdded(Fuse.Drawing.Stroke s) [instance] :3549
void Shape::OnStrokeAdded(::g::Fuse::Drawing::Stroke* s)
{
    if (IsLocalRooted() && (s != NULL))
    {
        uPtr(s)->Pin();
        AddDrawCost(1.0);
    }

    uPtr(s)->add_ShadingChanged(uDelegate::New(::TYPES[37/*Uno.Action*/], (void*)Shape__OnShadingChanged_fn, this));
    s->add_StrokeChanged(uDelegate::New(::TYPES[183/*Uno.Action<Fuse.Drawing.Stroke>*/], (void*)Shape__OnStrokeChanged_fn, this));
    OnStrokeChanged(s);
}

// private void OnStrokeChanged(Fuse.Drawing.Stroke s) [instance] :3575
void Shape::OnStrokeChanged(::g::Fuse::Drawing::Stroke* s)
{
    OnShapeChanged();
}

// private void OnStrokeRemoved(Fuse.Drawing.Stroke s) [instance] :3562
void Shape::OnStrokeRemoved(::g::Fuse::Drawing::Stroke* s)
{
    if (IsLocalRooted() && (s != NULL))
    {
        uPtr(s)->Unpin();
        RemoveDrawCost(1.0);
    }

    uPtr(s)->remove_ShadingChanged(uDelegate::New(::TYPES[37/*Uno.Action*/], (void*)Shape__OnShadingChanged_fn, this));
    s->remove_StrokeChanged(uDelegate::New(::TYPES[183/*Uno.Action<Fuse.Drawing.Stroke>*/], (void*)Shape__OnStrokeChanged_fn, this));
    OnStrokeChanged(s);
}

// internal void PrepareDraw(Fuse.DrawContext dc, float2 canvasSize) [instance] :3697
void Shape::PrepareDraw(::g::Fuse::DrawContext* dc, ::g::Uno::Float2 canvasSize)
{
    ::g::Fuse::Drawing::Brush* ret16;
    ::g::Fuse::Drawing::Stroke* ret17;

    if (HasFills())

        for (int i = 0; i < uPtr(_fills)->Count(); ++i)
            uPtr((::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(_fills), uCRef<int>(i), &ret16), ret16))->Prepare(dc, canvasSize);

    if (HasStrokes())

        for (int i1 = 0; i1 < uPtr(_strokes)->Count(); ++i1)
            uPtr((::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(_strokes), uCRef<int>(i1), &ret17), ret17))->Prepare(dc, canvasSize);
}

// internal generated void add_ShapeChanged(Uno.Action value) [instance] :3585
void Shape::add_ShapeChanged(uDelegate* value)
{
    ShapeChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ShapeChanged1, value), ::TYPES[37/*Uno.Action*/]);
}

// internal generated void remove_ShapeChanged(Uno.Action value) [instance] :3585
void Shape::remove_ShapeChanged(uDelegate* value)
{
    ShapeChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ShapeChanged1, value), ::TYPES[37/*Uno.Action*/]);
}

// public float get_Smoothness() [instance] :3597
float Shape::Smoothness()
{
    return _smoothness;
}

// public void set_Smoothness(float value) [instance] :3598
void Shape::Smoothness(float value)
{
    bool ret18;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Shape::SmoothnessProperty()), this, uCRef(value), &ret18);
}

// public Fuse.Drawing.Stroke get_Stroke() [instance] :3511
::g::Fuse::Drawing::Stroke* Shape::Stroke()
{
    return Shape::GetStroke(this);
}

// public void set_Stroke(Fuse.Drawing.Stroke value) [instance] :3512
void Shape::Stroke(::g::Fuse::Drawing::Stroke* value)
{
    Shape::SetStroke(this, value);
}

// public Uno.Collections.IList<Fuse.Drawing.Stroke> get_Strokes() [instance] :3534
uObject* Shape::Strokes()
{
    if (_strokes == NULL)
        _strokes = ((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[182/*Uno.Collections.ObservableList<Fuse.Drawing.Stroke>*/], uDelegate::New(::TYPES[183/*Uno.Action<Fuse.Drawing.Stroke>*/], (void*)Shape__OnStrokeAdded_fn, this), uDelegate::New(::TYPES[183/*Uno.Action<Fuse.Drawing.Stroke>*/], (void*)Shape__OnStrokeRemoved_fn, this)));

    return (uObject*)_strokes;
}

// private static Fuse.Drawing.Brush GetFill(Fuse.Controls.Shape s) [static] :3438
::g::Fuse::Drawing::Brush* Shape::GetFill(Shape* s)
{
    Shape_typeof()->Init();
    ::g::Fuse::Drawing::Brush* ret6;

    if ((uPtr(s)->_fills == NULL) || (uPtr(uPtr(s)->_fills)->Count() == 0))
        return NULL;
    else
        return (::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(uPtr(s)->_fills), uCRef<int>(0), &ret6), ret6);
}

// private static float GetSmoothness(Fuse.Controls.Shape s) [static] :3601
float Shape::GetSmoothness(Shape* s)
{
    Shape_typeof()->Init();
    return uPtr(s)->_smoothness;
}

// private static Fuse.Drawing.Stroke GetStroke(Fuse.Controls.Shape s) [static] :3514
::g::Fuse::Drawing::Stroke* Shape::GetStroke(Shape* s)
{
    Shape_typeof()->Init();
    ::g::Fuse::Drawing::Stroke* ret7;

    if ((uPtr(s)->_strokes == NULL) || (uPtr(uPtr(s)->_strokes)->Count() == 0))
        return NULL;

    return (::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(uPtr(s)->_strokes), uCRef<int>(0), &ret7), ret7);
}

// private static void OnSmoothnessChanged(Fuse.Controls.Shape s) [static] :3602
void Shape::OnSmoothnessChanged(Shape* s)
{
    Shape_typeof()->Init();
    uPtr(s)->InvalidateVisual();
    s->InvalidateRenderBounds();
}

// private static void SetFill(Fuse.Controls.Shape s, Fuse.Drawing.Brush value) [static] :3444
void Shape::SetFill(Shape* s, ::g::Fuse::Drawing::Brush* value)
{
    Shape_typeof()->Init();
    ::g::Uno::Collections::ICollection::Clear(uInterface(uPtr(uPtr(s)->Fills()), ::TYPES[185/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(s->Fills()), ::TYPES[185/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), value);
}

// private static void SetSmoothness(Fuse.Controls.Shape s, float value) [static] :3600
void Shape::SetSmoothness(Shape* s, float value)
{
    Shape_typeof()->Init();
    uPtr(s)->_smoothness = value;
}

// private static void SetStroke(Fuse.Controls.Shape s, Fuse.Drawing.Stroke value) [static] :3520
void Shape::SetStroke(Shape* s, ::g::Fuse::Drawing::Stroke* value)
{
    Shape_typeof()->Init();
    ::g::Uno::Collections::ICollection::Clear(uInterface(uPtr(uPtr(s)->Strokes()), ::TYPES[186/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(s->Strokes()), ::TYPES[186/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), value);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(2995)
// ------------------------------------------------------------

// public sealed class Slider :2995
// {
::g::Fuse::Controls::RangeControl_type* Slider_typeof()
{
    static uSStrong< ::g::Fuse::Controls::RangeControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 103;
    options.InterfaceCount = 10;
    options.ObjectSize = sizeof(Slider);
    options.TypeSize = sizeof(::g::Fuse::Controls::RangeControl_type);
    type = (::g::Fuse::Controls::RangeControl_type*)uClassType::New("Fuse.Controls.Slider", options);
    type->SetBase(::g::Fuse::Controls::RangeControl_typeof());
    type->fp_ctor_ = (void*)Slider__New2_fn;
    type->interface8.fp_get_Progress = (void(*)(uObject*, double*))::g::Fuse::Controls::RangeControl__get_Progress_fn;
    type->interface8.fp_add_ProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::RangeControl__add_ProgressChanged_fn;
    type->interface8.fp_remove_ProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::RangeControl__remove_ProgressChanged_fn;
    type->interface9.fp_get_Value = (void(*)(uObject*, uTRef))::g::Fuse::Controls::RangeControl__get_Value_fn;
    type->interface9.fp_set_Value = (void(*)(uObject*, void*))::g::Fuse::Controls::RangeControl__set_Value_fn;
    type->interface9.fp_add_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::RangeControl__add_ValueChanged_fn;
    type->interface9.fp_remove_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::RangeControl__remove_ValueChanged_fn;
    type->interface6.fp_AddChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChild_fn;
    type->interface6.fp_AddChildAt = (void(*)(uObject*, int*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChildAt_fn;
    type->interface6.fp_RemoveChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_RemoveChild_fn;
    type->interface6.fp_GetChild = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_GetChild_fn;
    type->interface7.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Add_fn;
    type->interface7.fp_Remove = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Remove_fn;
    type->interface6.fp_get_ChildCount = (void(*)(uObject*, int*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_get_ChildCount_fn;
    type->interface6.fp_get_Children = (void(*)(uObject*, uObject**))::g::Fuse::Controls::Panel__get_Children_fn;
    type->interface6.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__get_ActualSize_fn;
    type->interface6.fp_get_HasChildren = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__get_HasChildren_fn;
    type->interface6.fp_add_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildAdded_fn;
    type->interface6.fp_remove_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildAdded_fn;
    type->interface6.fp_add_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildRemoved_fn;
    type->interface6.fp_remove_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildRemoved_fn;
    type->interface6.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface6.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_add_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__add_Update_fn;
    type->interface6.fp_remove_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__remove_Update_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::RangeControl_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::RangeControl_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::RangeControl_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::RangeControl_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::RangeControl_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::RangeControl_type, interface5),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(::g::Fuse::Controls::RangeControl_type, interface6),
        ::g::Fuse::Triggers::IAddRemove_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::RangeControl_type, interface7),
        ::g::Fuse::Triggers::IProgress_typeof(), offsetof(::g::Fuse::Controls::RangeControl_type, interface8),
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::Double_typeof()), offsetof(::g::Fuse::Controls::RangeControl_type, interface9));
    type->SetFields(103);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Slider__New2_fn, 0, true, Slider_typeof(), 0));
    return type;
}

// public generated Slider() :2995
void Slider__ctor_5_fn(Slider* __this)
{
    __this->ctor_5();
}

// public generated Slider New() :2995
void Slider__New2_fn(Slider** __retval)
{
    *__retval = Slider::New2();
}

// public generated Slider() [instance] :2995
void Slider::ctor_5()
{
    ctor_4();
}

// public generated Slider New() [static] :2995
Slider* Slider::New2()
{
    Slider* obj1 = (Slider*)uNew(Slider_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(3725)
// ------------------------------------------------------------

// public class StackPanel :3725
// {
// static StackPanel() :3725
static void StackPanel__cctor_4_fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret2;
    ::g::Fuse::StyleProperty1* ret3;
    ::g::Fuse::StyleProperty1* ret4;
    StackPanel::OrientationProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[190/*Fuse.StyleProperty<Fuse.Controls.StackPanel, Fuse.Layouts.Orientation>*/], uCRef<int>(1), uDelegate::New(::TYPES[191/*Uno.Action<Fuse.Controls.StackPanel>*/], (void*)StackPanel__OnOrientationChanged_fn), &ret2), ret2);
    StackPanel::ItemSpacingProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[192/*Fuse.StyleProperty<Fuse.Controls.StackPanel, float>*/], uCRef(0.0f), uDelegate::New(::TYPES[191/*Uno.Action<Fuse.Controls.StackPanel>*/], (void*)StackPanel__OnItemSpacingChanged_fn), &ret3), ret3);
    StackPanel::ContentAlignmentProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[193/*Fuse.StyleProperty<Fuse.Controls.StackPanel, Fuse.Elements.Alignment>*/], uCRef<int>(0), uDelegate::New(::TYPES[191/*Uno.Action<Fuse.Controls.StackPanel>*/], (void*)StackPanel__OnContentAlignmentChanged_fn), &ret4), ret4);
}

::g::Fuse::Controls::Panel_type* StackPanel_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 104;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(StackPanel);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Fuse.Controls.StackPanel", options);
    type->SetBase(::g::Fuse::Controls::Panel_typeof());
    type->fp_ctor_ = (void*)StackPanel__New2_fn;
    type->fp_cctor_ = StackPanel__cctor_4_fn;
    type->interface6.fp_AddChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChild_fn;
    type->interface6.fp_AddChildAt = (void(*)(uObject*, int*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChildAt_fn;
    type->interface6.fp_RemoveChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_RemoveChild_fn;
    type->interface6.fp_GetChild = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_GetChild_fn;
    type->interface7.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Add_fn;
    type->interface7.fp_Remove = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Remove_fn;
    type->interface6.fp_get_ChildCount = (void(*)(uObject*, int*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_get_ChildCount_fn;
    type->interface6.fp_get_Children = (void(*)(uObject*, uObject**))::g::Fuse::Controls::Panel__get_Children_fn;
    type->interface6.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__get_ActualSize_fn;
    type->interface6.fp_get_HasChildren = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__get_HasChildren_fn;
    type->interface6.fp_add_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildAdded_fn;
    type->interface6.fp_remove_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildAdded_fn;
    type->interface6.fp_add_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildRemoved_fn;
    type->interface6.fp_remove_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildRemoved_fn;
    type->interface6.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface6.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_add_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__add_Update_fn;
    type->interface6.fp_remove_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__remove_Update_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::TYPES[190] = ::g::Fuse::StyleProperty1_typeof()->MakeType(StackPanel_typeof(), ::g::Fuse::Layouts::Orientation_typeof());
    ::TYPES[191] = ::g::Uno::Action1_typeof()->MakeType(StackPanel_typeof());
    ::TYPES[192] = ::g::Fuse::StyleProperty1_typeof()->MakeType(StackPanel_typeof(), ::g::Uno::Float_typeof());
    ::TYPES[193] = ::g::Fuse::StyleProperty1_typeof()->MakeType(StackPanel_typeof(), ::g::Fuse::Elements::Alignment_typeof());
    ::TYPES[23] = ::g::Fuse::Controls::Panel_typeof();
    ::TYPES[51] = ::g::Fuse::Layouts::Layout_typeof();
    ::TYPES[194] = ::g::Fuse::Layouts::StackLayout_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Fuse::Triggers::IAddRemove_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Panel_type, interface7));
    type->SetFields(100,
        ::g::Fuse::Layouts::StackLayout_typeof(), offsetof(::g::Fuse::Controls::StackPanel, _stackLayout), 0,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(StackPanel_typeof(), ::g::Fuse::Elements::Alignment_typeof()), (uintptr_t)&::g::Fuse::Controls::StackPanel::ContentAlignmentProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(StackPanel_typeof(), ::g::Uno::Float_typeof()), (uintptr_t)&::g::Fuse::Controls::StackPanel::ItemSpacingProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(StackPanel_typeof(), ::g::Fuse::Layouts::Orientation_typeof()), (uintptr_t)&::g::Fuse::Controls::StackPanel::OrientationProperty_, uFieldFlagsStatic);
    type->Reflection.SetFields(3,
        new uField("ContentAlignmentProperty", 101),
        new uField("ItemSpacingProperty", 102),
        new uField("OrientationProperty", 103));
    type->Reflection.SetFunctions(7,
        new uFunction("get_ContentAlignment", NULL, (void*)StackPanel__get_ContentAlignment_fn, 0, false, ::g::Fuse::Elements::Alignment_typeof(), 0),
        new uFunction("set_ContentAlignment", NULL, (void*)StackPanel__set_ContentAlignment_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::Alignment_typeof()),
        new uFunction("get_ItemSpacing", NULL, (void*)StackPanel__get_ItemSpacing_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_ItemSpacing", NULL, (void*)StackPanel__set_ItemSpacing_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)StackPanel__New2_fn, 0, true, StackPanel_typeof(), 0),
        new uFunction("get_Orientation", NULL, (void*)StackPanel__get_Orientation_fn, 0, false, ::g::Fuse::Layouts::Orientation_typeof(), 0),
        new uFunction("set_Orientation", NULL, (void*)StackPanel__set_Orientation_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Layouts::Orientation_typeof()));
    return type;
}

// public StackPanel() :3759
void StackPanel__ctor_4_fn(StackPanel* __this)
{
    __this->ctor_4();
}

// public Fuse.Elements.Alignment get_ContentAlignment() :3770
void StackPanel__get_ContentAlignment_fn(StackPanel* __this, int* __retval)
{
    *__retval = __this->ContentAlignment();
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value) :3771
void StackPanel__set_ContentAlignment_fn(StackPanel* __this, int* value)
{
    __this->ContentAlignment(*value);
}

// public float get_ItemSpacing() :3748
void StackPanel__get_ItemSpacing_fn(StackPanel* __this, float* __retval)
{
    *__retval = __this->ItemSpacing();
}

// public void set_ItemSpacing(float value) :3749
void StackPanel__set_ItemSpacing_fn(StackPanel* __this, float* value)
{
    __this->ItemSpacing(*value);
}

// public StackPanel New() :3759
void StackPanel__New2_fn(StackPanel** __retval)
{
    *__retval = StackPanel::New2();
}

// private static void OnContentAlignmentChanged(Fuse.Controls.StackPanel p) :3774
void StackPanel__OnContentAlignmentChanged_fn(StackPanel* p)
{
    StackPanel::OnContentAlignmentChanged(p);
}

// private static void OnItemSpacingChanged(Fuse.Controls.StackPanel p) :3752
void StackPanel__OnItemSpacingChanged_fn(StackPanel* p)
{
    StackPanel::OnItemSpacingChanged(p);
}

// private static void OnOrientationChanged(Fuse.Controls.StackPanel p) :3737
void StackPanel__OnOrientationChanged_fn(StackPanel* p)
{
    StackPanel::OnOrientationChanged(p);
}

// public Fuse.Layouts.Orientation get_Orientation() :3733
void StackPanel__get_Orientation_fn(StackPanel* __this, int* __retval)
{
    *__retval = __this->Orientation();
}

// public void set_Orientation(Fuse.Layouts.Orientation value) :3734
void StackPanel__set_Orientation_fn(StackPanel* __this, int* value)
{
    __this->Orientation(*value);
}

uSStrong< ::g::Fuse::StyleProperty1*> StackPanel::ContentAlignmentProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> StackPanel::ItemSpacingProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> StackPanel::OrientationProperty_;

// public StackPanel() [instance] :3759
void StackPanel::ctor_4()
{
    ctor_3();
    Layout(_stackLayout = ::g::Fuse::Layouts::StackLayout::New1());
}

// public Fuse.Elements.Alignment get_ContentAlignment() [instance] :3770
int StackPanel::ContentAlignment()
{
    int ret5;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(StackPanel::ContentAlignmentProperty()), this, &ret5), ret5);
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value) [instance] :3771
void StackPanel::ContentAlignment(int value)
{
    bool ret6;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(StackPanel::ContentAlignmentProperty()), this, uCRef<int>(value), &ret6);
}

// public float get_ItemSpacing() [instance] :3748
float StackPanel::ItemSpacing()
{
    float ret7;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(StackPanel::ItemSpacingProperty()), this, &ret7), ret7);
}

// public void set_ItemSpacing(float value) [instance] :3749
void StackPanel::ItemSpacing(float value)
{
    bool ret8;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(StackPanel::ItemSpacingProperty()), this, uCRef(value), &ret8);
}

// public Fuse.Layouts.Orientation get_Orientation() [instance] :3733
int StackPanel::Orientation()
{
    int ret9;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(StackPanel::OrientationProperty()), this, &ret9), ret9);
}

// public void set_Orientation(Fuse.Layouts.Orientation value) [instance] :3734
void StackPanel::Orientation(int value)
{
    bool ret10;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(StackPanel::OrientationProperty()), this, uCRef<int>(value), &ret10);
}

// public StackPanel New() [static] :3759
StackPanel* StackPanel::New2()
{
    StackPanel* obj1 = (StackPanel*)uNew(StackPanel_typeof());
    obj1->ctor_4();
    return obj1;
}

// private static void OnContentAlignmentChanged(Fuse.Controls.StackPanel p) [static] :3774
void StackPanel::OnContentAlignmentChanged(StackPanel* p)
{
    StackPanel_typeof()->Init();
    uPtr(uPtr(p)->_stackLayout)->ContentAlignment(uPtr(p)->ContentAlignment());
}

// private static void OnItemSpacingChanged(Fuse.Controls.StackPanel p) [static] :3752
void StackPanel::OnItemSpacingChanged(StackPanel* p)
{
    StackPanel_typeof()->Init();
    uPtr(uPtr(p)->_stackLayout)->ItemSpacing(uPtr(p)->ItemSpacing());
}

// private static void OnOrientationChanged(Fuse.Controls.StackPanel p) [static] :3737
void StackPanel::OnOrientationChanged(StackPanel* p)
{
    StackPanel_typeof()->Init();
    uPtr(uPtr(p)->_stackLayout)->Orientation(uPtr(p)->Orientation());
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(3792)
// ------------------------------------------------------------

// public sealed class Star :3792
// {
::g::Fuse::Controls::Panel_type* Star_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 110;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(Star);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Fuse.Controls.Star", options);
    type->SetBase(::g::Fuse::Controls::Shape_typeof());
    type->fp_ctor_ = (void*)Star__New2_fn;
    type->interface6.fp_AddChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChild_fn;
    type->interface6.fp_AddChildAt = (void(*)(uObject*, int*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChildAt_fn;
    type->interface6.fp_RemoveChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_RemoveChild_fn;
    type->interface6.fp_GetChild = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_GetChild_fn;
    type->interface7.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Add_fn;
    type->interface7.fp_Remove = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Remove_fn;
    type->interface6.fp_get_ChildCount = (void(*)(uObject*, int*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_get_ChildCount_fn;
    type->interface6.fp_get_Children = (void(*)(uObject*, uObject**))::g::Fuse::Controls::Panel__get_Children_fn;
    type->interface6.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__get_ActualSize_fn;
    type->interface6.fp_get_HasChildren = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__get_HasChildren_fn;
    type->interface6.fp_add_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildAdded_fn;
    type->interface6.fp_remove_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildAdded_fn;
    type->interface6.fp_add_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildRemoved_fn;
    type->interface6.fp_remove_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildRemoved_fn;
    type->interface6.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface6.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_add_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__add_Update_fn;
    type->interface6.fp_remove_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__remove_Update_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Fuse::Triggers::IAddRemove_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Panel_type, interface7));
    type->SetFields(106,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Star, _degrees), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::Star, _points), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Star, _ratio), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::Star, _roundRatio), 0);
    type->Reflection.SetFunctions(9,
        new uFunction(".ctor", NULL, (void*)Star__New2_fn, 0, true, Star_typeof(), 0),
        new uFunction("get_Points", NULL, (void*)Star__get_Points_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_Points", NULL, (void*)Star__set_Points_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_Ratio", NULL, (void*)Star__get_Ratio_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Ratio", NULL, (void*)Star__set_Ratio_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_RotationDegrees", NULL, (void*)Star__get_RotationDegrees_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_RotationDegrees", NULL, (void*)Star__set_RotationDegrees_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_RoundRatio", NULL, (void*)Star__get_RoundRatio_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_RoundRatio", NULL, (void*)Star__set_RoundRatio_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
    return type;
}

// public generated Star() :3792
void Star__ctor_5_fn(Star* __this)
{
    __this->ctor_5();
}

// public generated Star New() :3792
void Star__New2_fn(Star** __retval)
{
    *__retval = Star::New2();
}

// public int get_Points() :3797
void Star__get_Points_fn(Star* __this, int* __retval)
{
    *__retval = __this->Points();
}

// public void set_Points(int value) :3798
void Star__set_Points_fn(Star* __this, int* value)
{
    __this->Points(*value);
}

// public float get_Ratio() :3809
void Star__get_Ratio_fn(Star* __this, float* __retval)
{
    *__retval = __this->Ratio();
}

// public void set_Ratio(float value) :3810
void Star__set_Ratio_fn(Star* __this, float* value)
{
    __this->Ratio(*value);
}

// public float get_RotationDegrees() :3835
void Star__get_RotationDegrees_fn(Star* __this, float* __retval)
{
    *__retval = __this->RotationDegrees();
}

// public void set_RotationDegrees(float value) :3836
void Star__set_RotationDegrees_fn(Star* __this, float* value)
{
    __this->RotationDegrees(*value);
}

// internal float get_RotationRadians() :3847
void Star__get_RotationRadians_fn(Star* __this, float* __retval)
{
    *__retval = __this->RotationRadians();
}

// public float get_RoundRatio() :3822
void Star__get_RoundRatio_fn(Star* __this, float* __retval)
{
    *__retval = __this->RoundRatio();
}

// public void set_RoundRatio(float value) :3823
void Star__set_RoundRatio_fn(Star* __this, float* value)
{
    __this->RoundRatio(*value);
}

// public generated Star() [instance] :3792
void Star::ctor_5()
{
    _points = 5;
    _ratio = 0.5f;
    _degrees = 0.0f;
    ctor_4();
}

// public int get_Points() [instance] :3797
int Star::Points()
{
    return _points;
}

// public void set_Points(int value) [instance] :3798
void Star::Points(int value)
{
    if (value == _points)
        return;

    _points = value;
    OnShapeChanged();
}

// public float get_Ratio() [instance] :3809
float Star::Ratio()
{
    return _ratio;
}

// public void set_Ratio(float value) [instance] :3810
void Star::Ratio(float value)
{
    if (value == _ratio)
        return;

    _ratio = value;
    OnShapeChanged();
}

// public float get_RotationDegrees() [instance] :3835
float Star::RotationDegrees()
{
    return _degrees;
}

// public void set_RotationDegrees(float value) [instance] :3836
void Star::RotationDegrees(float value)
{
    if (value == _degrees)
        return;

    _degrees = value;
    InvalidateVisual();
}

// internal float get_RotationRadians() [instance] :3847
float Star::RotationRadians()
{
    return (_degrees / 180.0f) * 3.14159274f;
}

// public float get_RoundRatio() [instance] :3822
float Star::RoundRatio()
{
    return _roundRatio;
}

// public void set_RoundRatio(float value) [instance] :3823
void Star::RoundRatio(float value)
{
    if (value == _roundRatio)
        return;

    _roundRatio = value;
    OnShapeChanged();
}

// public generated Star New() [static] :3792
Star* Star::New2()
{
    Star* obj1 = (Star*)uNew(Star_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(4361)
// ------------------------------------------------------------

// public sealed class StatusBarBackground :4361
// {
::g::Fuse::Controls::Control_type* StatusBarBackground_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 89;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(StatusBarBackground);
    options.TypeSize = sizeof(::g::Fuse::Controls::Control_type);
    type = (::g::Fuse::Controls::Control_type*)uClassType::New("Fuse.Controls.StatusBarBackground", options);
    type->SetBase(::g::Fuse::Controls::TopFrameBackground_typeof());
    type->fp_ctor_ = (void*)StatusBarBackground__New2_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface5));
    type->SetFields(89);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)StatusBarBackground__New2_fn, 0, true, StatusBarBackground_typeof(), 0));
    return type;
}

// public generated StatusBarBackground() :4361
void StatusBarBackground__ctor_4_fn(StatusBarBackground* __this)
{
    __this->ctor_4();
}

// public generated StatusBarBackground New() :4361
void StatusBarBackground__New2_fn(StatusBarBackground** __retval)
{
    *__retval = StatusBarBackground::New2();
}

// public generated StatusBarBackground() [instance] :4361
void StatusBarBackground::ctor_4()
{
    ctor_3();
}

// public generated StatusBarBackground New() [static] :4361
StatusBarBackground* StatusBarBackground::New2()
{
    StatusBarBackground* obj1 = (StatusBarBackground*)uNew(StatusBarBackground_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(4347)
// ------------------------------------------------------------

// public sealed class Switch :4347
// {
::g::Fuse::Controls::ToggleControl_type* Switch_typeof()
{
    static uSStrong< ::g::Fuse::Controls::ToggleControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 102;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(Switch);
    options.TypeSize = sizeof(::g::Fuse::Controls::ToggleControl_type);
    type = (::g::Fuse::Controls::ToggleControl_type*)uClassType::New("Fuse.Controls.Switch", options);
    type->SetBase(::g::Fuse::Controls::ToggleControl_typeof());
    type->fp_ctor_ = (void*)Switch__New3_fn;
    type->interface8.fp_get_Value = (void(*)(uObject*, uTRef))::g::Fuse::Controls::ToggleControl__get_Value_fn;
    type->interface8.fp_set_Value = (void(*)(uObject*, void*))::g::Fuse::Controls::ToggleControl__set_Value_fn;
    type->interface8.fp_add_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::ToggleControl__add_ValueChanged_fn;
    type->interface8.fp_remove_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::ToggleControl__remove_ValueChanged_fn;
    type->interface6.fp_AddChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChild_fn;
    type->interface6.fp_AddChildAt = (void(*)(uObject*, int*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChildAt_fn;
    type->interface6.fp_RemoveChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_RemoveChild_fn;
    type->interface6.fp_GetChild = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_GetChild_fn;
    type->interface7.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Add_fn;
    type->interface7.fp_Remove = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Remove_fn;
    type->interface6.fp_get_ChildCount = (void(*)(uObject*, int*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_get_ChildCount_fn;
    type->interface6.fp_get_Children = (void(*)(uObject*, uObject**))::g::Fuse::Controls::Panel__get_Children_fn;
    type->interface6.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__get_ActualSize_fn;
    type->interface6.fp_get_HasChildren = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__get_HasChildren_fn;
    type->interface6.fp_add_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildAdded_fn;
    type->interface6.fp_remove_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildAdded_fn;
    type->interface6.fp_add_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildRemoved_fn;
    type->interface6.fp_remove_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildRemoved_fn;
    type->interface6.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface6.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_add_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__add_Update_fn;
    type->interface6.fp_remove_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__remove_Update_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::ToggleControl_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::ToggleControl_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::ToggleControl_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::ToggleControl_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::ToggleControl_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::ToggleControl_type, interface5),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(::g::Fuse::Controls::ToggleControl_type, interface6),
        ::g::Fuse::Triggers::IAddRemove_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::ToggleControl_type, interface7),
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::Fuse::Controls::ToggleControl_type, interface8));
    type->SetFields(102);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Switch__New3_fn, 0, true, Switch_typeof(), 0));
    return type;
}

// public generated Switch() :4347
void Switch__ctor_5_fn(Switch* __this)
{
    __this->ctor_5();
}

// public generated Switch New() :4347
void Switch__New3_fn(Switch** __retval)
{
    *__retval = Switch::New3();
}

// public generated Switch() [instance] :4347
void Switch::ctor_5()
{
    ctor_4();
}

// public generated Switch New() [static] :4347
Switch* Switch::New3()
{
    Switch* obj1 = (Switch*)uNew(Switch_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\.cache\GeneratedCode\$.uno(178)
// --------------------------------------------------------------------------------

// public partial sealed class PageIndicator.Template :178
// {
// static Template() :187
static void PageIndicator__Template__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Template_type* PageIndicator__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PageIndicator__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Fuse.Controls.PageIndicator.Template", options);
    type->SetBase(::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::PageIndicatorDot_typeof()));
    type->fp_cctor_ = PageIndicator__Template__cctor__fn;
    type->fp_OnApply = (void(*)(::g::Uno::UX::Template*, void*))PageIndicator__Template__OnApply_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Uno::UX::Template__Apply_fn;
    ::TYPES[195] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof());
    ::TYPES[196] = ::g::Uno::UX::Property_typeof()->MakeType(::g::Uno::Float4_typeof());
    ::TYPES[21] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[197] = ::g::Fuse::Controls::Shape_typeof();
    ::TYPES[31] = ::g::Fuse::Drawing::Brush_typeof();
    ::TYPES[61] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[4] = ::g::Fuse::Triggers::Trigger_typeof();
    ::TYPES[5] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[198] = ::g::Fuse::Animations::Scale_typeof();
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Uno::UX::Template_type, interface0));
    type->SetFields(2,
        ::g::Fuse::Controls::PageIndicator_typeof(), offsetof(::g::Fuse::Controls::PageIndicator__Template, __parent1), 0,
        ::g::Fuse::Controls::PageIndicator__Fuse_Drawing_SolidColor_float4_Color_Property_typeof(), offsetof(::g::Fuse::Controls::PageIndicator__Template, TheColor_Color_inst), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)PageIndicator__Template__New1_fn, 0, true, PageIndicator__Template_typeof(), 1, ::g::Fuse::Controls::PageIndicator_typeof()));
    return type;
}

// public Template(Fuse.Controls.PageIndicator parent) :181
void PageIndicator__Template__ctor_1_fn(PageIndicator__Template* __this, ::g::Fuse::Controls::PageIndicator* parent)
{
    __this->ctor_1(parent);
}

// public Template New(Fuse.Controls.PageIndicator parent) :181
void PageIndicator__Template__New1_fn(::g::Fuse::Controls::PageIndicator* parent, PageIndicator__Template** __retval)
{
    *__retval = PageIndicator__Template::New1(parent);
}

// protected override sealed void OnApply(Fuse.Controls.PageIndicatorDot self) :190
void PageIndicator__Template__OnApply_fn(PageIndicator__Template* __this, ::g::Fuse::Controls::PageIndicatorDot* self)
{
    bool ret2;
    bool ret3;
    bool ret4;
    ::g::Fuse::Drawing::SolidColor* TheColor1 = ::g::Fuse::Drawing::SolidColor::New1();
    __this->TheColor_Color_inst = ::g::Fuse::Controls::PageIndicator__Fuse_Drawing_SolidColor_float4_Color_Property::New1(TheColor1);
    ::g::Fuse::Controls::Circle* temp = ::g::Fuse::Controls::Circle::New2();
    ::g::Fuse::Navigation::ActivatingAnimation* temp1 = ::g::Fuse::Navigation::ActivatingAnimation::New1();
    ::g::Fuse::Animations::Scale* temp2 = ::g::Fuse::Animations::Scale::New1();
    ::g::Fuse::Animations::Change* temp3 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New1(::TYPES[195/*Fuse.Animations.Change<float4>*/], __this->TheColor_Color_inst);
    ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(::g::Fuse::Elements::Element::WidthProperty()), self, uCRef(6.0f), &ret2);
    ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(::g::Fuse::Elements::Element::HeightProperty()), self, uCRef(6.0f), &ret3);
    ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(::g::Fuse::Elements::Element::MarginProperty()), self, uCRef(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f)), &ret4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Fills()), ::TYPES[185/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), TheColor1);
    TheColor1->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.3f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Animations.Animator*/])), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Animations.Animator*/])), temp3);
    temp2->Factor(1.2f);
    ::g::Fuse::Animations::Change__set_Value_fn(temp3, uCRef(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f)));
    uPtr(self)->AddStyleChild(temp);
    self->AddStyleBehavior(temp1);
}

// public Template(Fuse.Controls.PageIndicator parent) [instance] :181
void PageIndicator__Template::ctor_1(::g::Fuse::Controls::PageIndicator* parent)
{
    ctor_();
    __parent1 = parent;
}

// public Template New(Fuse.Controls.PageIndicator parent) [static] :181
PageIndicator__Template* PageIndicator__Template::New1(::g::Fuse::Controls::PageIndicator* parent)
{
    PageIndicator__Template* obj1 = (PageIndicator__Template*)uNew(PageIndicator__Template_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\.cache\GeneratedCode\$.uno(97)
// -------------------------------------------------------------------------------

// public partial sealed class PageControl.Template :97
// {
// static Template() :104
static void PageControl__Template__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Template_type* PageControl__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PageControl__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Fuse.Controls.PageControl.Template", options);
    type->SetBase(::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::Page_typeof()));
    type->fp_cctor_ = PageControl__Template__cctor__fn;
    type->fp_OnApply = (void(*)(::g::Uno::UX::Template*, void*))PageControl__Template__OnApply_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Uno::UX::Template__Apply_fn;
    ::TYPES[4] = ::g::Fuse::Triggers::Trigger_typeof();
    ::TYPES[5] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[54] = ::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(::g::Fuse::Translation_typeof());
    ::TYPES[55] = ::g::Fuse::Animations::Move_typeof();
    ::TYPES[56] = ::g::Fuse::TranslationModes_typeof();
    ::TYPES[199] = ::g::Fuse::Animations::TrackAnimator_typeof();
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Uno::UX::Template_type, interface0));
    type->SetFields(2,
        ::g::Fuse::Controls::PageControl_typeof(), offsetof(::g::Fuse::Controls::PageControl__Template, __parent1), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)PageControl__Template__New1_fn, 0, true, PageControl__Template_typeof(), 1, ::g::Fuse::Controls::PageControl_typeof()));
    return type;
}

// public Template(Fuse.Controls.PageControl parent) :100
void PageControl__Template__ctor_1_fn(PageControl__Template* __this, ::g::Fuse::Controls::PageControl* parent)
{
    __this->ctor_1(parent);
}

// public Template New(Fuse.Controls.PageControl parent) :100
void PageControl__Template__New1_fn(::g::Fuse::Controls::PageControl* parent, PageControl__Template** __retval)
{
    *__retval = PageControl__Template::New1(parent);
}

// protected override sealed void OnApply(Fuse.Controls.Page self) :107
void PageControl__Template__OnApply_fn(PageControl__Template* __this, ::g::Fuse::Controls::Page* self)
{
    ::g::Fuse::Navigation::EnteringAnimation* temp = ::g::Fuse::Navigation::EnteringAnimation::New1();
    ::g::Fuse::Animations::Move* temp1 = ::g::Fuse::Animations::Move::New1();
    ::g::Fuse::Navigation::ExitingAnimation* temp2 = ::g::Fuse::Navigation::ExitingAnimation::New1();
    ::g::Fuse::Animations::Move* temp3 = ::g::Fuse::Animations::Move::New1();
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Animations.Animator*/])), temp1);
    temp1->X(-1.0f);
    temp1->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Animations.Animator*/])), temp3);
    temp3->X(1.0f);
    temp3->Duration(0.5);
    temp3->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    uPtr(self)->AddStyleBehavior(temp);
    self->AddStyleBehavior(temp2);
}

// public Template(Fuse.Controls.PageControl parent) [instance] :100
void PageControl__Template::ctor_1(::g::Fuse::Controls::PageControl* parent)
{
    ctor_();
    __parent1 = parent;
}

// public Template New(Fuse.Controls.PageControl parent) [static] :100
PageControl__Template* PageControl__Template::New1(::g::Fuse::Controls::PageControl* parent)
{
    PageControl__Template* obj1 = (PageControl__Template*)uNew(PageControl__Template_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(4254)
// ------------------------------------------------------------

// public sealed class Text :4254
// {
::g::Fuse::Controls::TextControl_type* Text_typeof()
{
    static uSStrong< ::g::Fuse::Controls::TextControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 104;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(Text);
    options.TypeSize = sizeof(::g::Fuse::Controls::TextControl_type);
    type = (::g::Fuse::Controls::TextControl_type*)uClassType::New("Fuse.Controls.Text", options);
    type->SetBase(::g::Fuse::Controls::TextBlock_typeof());
    type->fp_ctor_ = (void*)Text__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Text__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Text__OnUnrooted_fn;
    type->interface8.fp_get_Value = (void(*)(uObject*, uTRef))::g::Fuse::Controls::TextControl__get_Value_fn;
    type->interface8.fp_set_Value = (void(*)(uObject*, void*))::g::Fuse::Controls::TextControl__set_Value_fn;
    type->interface8.fp_add_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::TextControl__add_ValueChanged_fn;
    type->interface8.fp_remove_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::TextControl__remove_ValueChanged_fn;
    type->interface6.fp_AddChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChild_fn;
    type->interface6.fp_AddChildAt = (void(*)(uObject*, int*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChildAt_fn;
    type->interface6.fp_RemoveChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_RemoveChild_fn;
    type->interface6.fp_GetChild = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_GetChild_fn;
    type->interface7.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Add_fn;
    type->interface7.fp_Remove = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Remove_fn;
    type->interface6.fp_get_ChildCount = (void(*)(uObject*, int*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_get_ChildCount_fn;
    type->interface6.fp_get_Children = (void(*)(uObject*, uObject**))::g::Fuse::Controls::Panel__get_Children_fn;
    type->interface6.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__get_ActualSize_fn;
    type->interface6.fp_get_HasChildren = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__get_HasChildren_fn;
    type->interface6.fp_add_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildAdded_fn;
    type->interface6.fp_remove_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildAdded_fn;
    type->interface6.fp_add_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildRemoved_fn;
    type->interface6.fp_remove_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildRemoved_fn;
    type->interface6.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface6.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_add_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__add_Update_fn;
    type->interface6.fp_remove_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__remove_Update_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface5),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface6),
        ::g::Fuse::Triggers::IAddRemove_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::TextControl_type, interface7),
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Fuse::Controls::TextControl_type, interface8));
    type->SetFields(104);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Text__New2_fn, 0, true, Text_typeof(), 0));
    return type;
}

// public generated Text() :4254
void Text__ctor_6_fn(Text* __this)
{
    __this->ctor_6();
}

// public generated Text New() :4254
void Text__New2_fn(Text** __retval)
{
    *__retval = Text::New2();
}

// protected override sealed void OnRooted() :4257
void Text__OnRooted_fn(Text* __this)
{
    ::g::Fuse::Controls::Panel__OnRooted_fn(__this);
    __this->AddDrawCost(2.0);
}

// protected override sealed void OnUnrooted() :4263
void Text__OnUnrooted_fn(Text* __this)
{
    __this->RemoveDrawCost(2.0);
    ::g::Fuse::Controls::Panel__OnUnrooted_fn(__this);
}

// public generated Text() [instance] :4254
void Text::ctor_6()
{
    ctor_5();
}

// public generated Text New() [static] :4254
Text* Text::New2()
{
    Text* obj1 = (Text*)uNew(Text_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(4249)
// ------------------------------------------------------------

// public abstract class TextBlock :4249
// {
::g::Fuse::Controls::TextControl_type* TextBlock_typeof()
{
    static uSStrong< ::g::Fuse::Controls::TextControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 104;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(TextBlock);
    options.TypeSize = sizeof(::g::Fuse::Controls::TextControl_type);
    type = (::g::Fuse::Controls::TextControl_type*)uClassType::New("Fuse.Controls.TextBlock", options);
    type->SetBase(::g::Fuse::Controls::TextControl_typeof());
    type->interface8.fp_get_Value = (void(*)(uObject*, uTRef))::g::Fuse::Controls::TextControl__get_Value_fn;
    type->interface8.fp_set_Value = (void(*)(uObject*, void*))::g::Fuse::Controls::TextControl__set_Value_fn;
    type->interface8.fp_add_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::TextControl__add_ValueChanged_fn;
    type->interface8.fp_remove_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::TextControl__remove_ValueChanged_fn;
    type->interface6.fp_AddChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChild_fn;
    type->interface6.fp_AddChildAt = (void(*)(uObject*, int*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChildAt_fn;
    type->interface6.fp_RemoveChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_RemoveChild_fn;
    type->interface6.fp_GetChild = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_GetChild_fn;
    type->interface7.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Add_fn;
    type->interface7.fp_Remove = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Remove_fn;
    type->interface6.fp_get_ChildCount = (void(*)(uObject*, int*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_get_ChildCount_fn;
    type->interface6.fp_get_Children = (void(*)(uObject*, uObject**))::g::Fuse::Controls::Panel__get_Children_fn;
    type->interface6.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__get_ActualSize_fn;
    type->interface6.fp_get_HasChildren = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__get_HasChildren_fn;
    type->interface6.fp_add_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildAdded_fn;
    type->interface6.fp_remove_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildAdded_fn;
    type->interface6.fp_add_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildRemoved_fn;
    type->interface6.fp_remove_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildRemoved_fn;
    type->interface6.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface6.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_add_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__add_Update_fn;
    type->interface6.fp_remove_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__remove_Update_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface5),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface6),
        ::g::Fuse::Triggers::IAddRemove_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::TextControl_type, interface7),
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Fuse::Controls::TextControl_type, interface8));
    type->SetFields(104);
    return type;
}

// protected generated TextBlock() :4249
void TextBlock__ctor_5_fn(TextBlock* __this)
{
    __this->ctor_5();
}

// protected generated TextBlock() [instance] :4249
void TextBlock::ctor_5()
{
    ctor_4();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(3863)
// ------------------------------------------------------------

// public abstract class TextControl :3863
// {
// static TextControl() :3863
static void TextControl__cctor_4_fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret1;
    ::g::Fuse::StyleProperty1* ret2;
    ::g::Fuse::StyleProperty1* ret3;
    ::g::Fuse::StyleProperty1* ret4;
    ::g::Fuse::StyleProperty1* ret5;
    ::g::Fuse::StyleProperty1* ret6;
    ::g::Fuse::StyleProperty1* ret7;
    TextControl::ValueProperty_ = (::g::Fuse::StyleProperty1__New2_fn(::TYPES[200/*Fuse.StyleProperty<Fuse.Controls.TextControl, string>*/], ::STRINGS[1/*""*/], NULL, uDelegate::New(::TYPES[201/*Uno.Action<Fuse.Controls.TextControl, string>*/], (void*)TextControl__SetValue_fn), uDelegate::New(::TYPES[202/*Uno.Func<Fuse.Controls.TextControl, string>*/], (void*)TextControl__GetValue_fn), &ret1), ret1);
    TextControl::TextWrappingProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[203/*Fuse.StyleProperty<Fuse.Controls.TextControl, Fuse.Elements.TextWrapping>*/], uCRef<int>(0), uDelegate::New(::TYPES[204/*Uno.Action<Fuse.Controls.TextControl>*/], (void*)TextControl__OnTextLayoutPropertyChanged1_fn), &ret2), ret2);
    TextControl::LineSpacingProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[205/*Fuse.StyleProperty<Fuse.Controls.TextControl, float>*/], uCRef(0.0f), uDelegate::New(::TYPES[204/*Uno.Action<Fuse.Controls.TextControl>*/], (void*)TextControl__OnTextLayoutPropertyChanged1_fn), &ret3), ret3);
    TextControl::FontSizeProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[205/*Fuse.StyleProperty<Fuse.Controls.TextControl, float>*/], uCRef(16.0f), uDelegate::New(::TYPES[204/*Uno.Action<Fuse.Controls.TextControl>*/], (void*)TextControl__OnTextLayoutPropertyChanged1_fn), &ret4), ret4);
    TextControl::FontProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[206/*Fuse.StyleProperty<Fuse.Controls.TextControl, Fuse.Font>*/], ::g::Fuse::Fonts::Fallback(), uDelegate::New(::TYPES[204/*Uno.Action<Fuse.Controls.TextControl>*/], (void*)TextControl__OnTextLayoutPropertyChanged1_fn), &ret5), ret5);
    TextControl::TextAlignmentProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[208/*Fuse.StyleProperty<Fuse.Controls.TextControl, Fuse.Elements.TextAlignment>*/], uCRef<int>(0), uDelegate::New(::TYPES[204/*Uno.Action<Fuse.Controls.TextControl>*/], (void*)TextControl__OnTextLayoutPropertyChanged1_fn), &ret6), ret6);
    TextControl::TextColorProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[209/*Fuse.StyleProperty<Fuse.Controls.TextControl, float4>*/], uCRef(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f)), uDelegate::New(::TYPES[204/*Uno.Action<Fuse.Controls.TextControl>*/], (void*)TextControl__OnTextRenderPropertyChanged1_fn), &ret7), ret7);
}

TextControl_type* TextControl_typeof()
{
    static uSStrong<TextControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 111;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(TextControl);
    options.TypeSize = sizeof(TextControl_type);
    type = (TextControl_type*)uClassType::New("Fuse.Controls.TextControl", options);
    type->SetBase(::g::Fuse::Controls::Panel_typeof());
    type->fp_cctor_ = TextControl__cctor_4_fn;
    type->fp_OnValueChanged = TextControl__OnValueChanged_fn;
    type->fp_get_RenderColor = TextControl__get_RenderColor_fn;
    type->fp_get_RenderValue = TextControl__get_RenderValue_fn;
    type->interface8.fp_get_Value = (void(*)(uObject*, uTRef))TextControl__get_Value_fn;
    type->interface8.fp_set_Value = (void(*)(uObject*, void*))TextControl__set_Value_fn;
    type->interface8.fp_add_ValueChanged = (void(*)(uObject*, uDelegate*))TextControl__add_ValueChanged_fn;
    type->interface8.fp_remove_ValueChanged = (void(*)(uObject*, uDelegate*))TextControl__remove_ValueChanged_fn;
    type->interface6.fp_AddChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChild_fn;
    type->interface6.fp_AddChildAt = (void(*)(uObject*, int*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChildAt_fn;
    type->interface6.fp_RemoveChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_RemoveChild_fn;
    type->interface6.fp_GetChild = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_GetChild_fn;
    type->interface7.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Add_fn;
    type->interface7.fp_Remove = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Remove_fn;
    type->interface6.fp_get_ChildCount = (void(*)(uObject*, int*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_get_ChildCount_fn;
    type->interface6.fp_get_Children = (void(*)(uObject*, uObject**))::g::Fuse::Controls::Panel__get_Children_fn;
    type->interface6.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__get_ActualSize_fn;
    type->interface6.fp_get_HasChildren = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__get_HasChildren_fn;
    type->interface6.fp_add_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildAdded_fn;
    type->interface6.fp_remove_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildAdded_fn;
    type->interface6.fp_add_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildRemoved_fn;
    type->interface6.fp_remove_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildRemoved_fn;
    type->interface6.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface6.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_add_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__add_Update_fn;
    type->interface6.fp_remove_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__remove_Update_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::STRINGS[1] = uString::Const("");
    ::TYPES[200] = ::g::Fuse::StyleProperty1_typeof()->MakeType(TextControl_typeof(), ::g::Uno::String_typeof());
    ::TYPES[201] = ::g::Uno::Action2_typeof()->MakeType(TextControl_typeof(), ::g::Uno::String_typeof());
    ::TYPES[202] = ::g::Uno::Func1_typeof()->MakeType(TextControl_typeof(), ::g::Uno::String_typeof());
    ::TYPES[203] = ::g::Fuse::StyleProperty1_typeof()->MakeType(TextControl_typeof(), ::g::Fuse::Elements::TextWrapping_typeof());
    ::TYPES[204] = ::g::Uno::Action1_typeof()->MakeType(TextControl_typeof());
    ::TYPES[205] = ::g::Fuse::StyleProperty1_typeof()->MakeType(TextControl_typeof(), ::g::Uno::Float_typeof());
    ::TYPES[206] = ::g::Fuse::StyleProperty1_typeof()->MakeType(TextControl_typeof(), ::g::Fuse::Font_typeof());
    ::TYPES[207] = ::g::Fuse::Fonts_typeof();
    ::TYPES[208] = ::g::Fuse::StyleProperty1_typeof()->MakeType(TextControl_typeof(), ::g::Fuse::Elements::TextAlignment_typeof());
    ::TYPES[209] = ::g::Fuse::StyleProperty1_typeof()->MakeType(TextControl_typeof(), ::g::Uno::Float4_typeof());
    ::TYPES[17] = ::g::Uno::Delegate_typeof();
    ::TYPES[33] = ::g::Uno::EventHandler_typeof();
    ::TYPES[19] = uObject_typeof();
    ::TYPES[34] = ::g::Uno::EventArgs_typeof();
    ::TYPES[18] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[20] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::String_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(TextControl_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(TextControl_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(TextControl_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(TextControl_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(TextControl_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(TextControl_type, interface5),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(TextControl_type, interface6),
        ::g::Fuse::Triggers::IAddRemove_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(TextControl_type, interface7),
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(TextControl_type, interface8));
    type->SetFields(100,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Controls::TextControl, _value), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Controls::TextControl, TextLayoutPropertyChanged1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Controls::TextControl, TextRenderPropertyChanged1), 0,
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Fuse::Controls::TextControl, ValueChanged1), 0,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(TextControl_typeof(), ::g::Fuse::Font_typeof()), (uintptr_t)&::g::Fuse::Controls::TextControl::FontProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(TextControl_typeof(), ::g::Uno::Float_typeof()), (uintptr_t)&::g::Fuse::Controls::TextControl::FontSizeProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(TextControl_typeof(), ::g::Uno::Float_typeof()), (uintptr_t)&::g::Fuse::Controls::TextControl::LineSpacingProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(TextControl_typeof(), ::g::Fuse::Elements::TextAlignment_typeof()), (uintptr_t)&::g::Fuse::Controls::TextControl::TextAlignmentProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(TextControl_typeof(), ::g::Uno::Float4_typeof()), (uintptr_t)&::g::Fuse::Controls::TextControl::TextColorProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(TextControl_typeof(), ::g::Fuse::Elements::TextWrapping_typeof()), (uintptr_t)&::g::Fuse::Controls::TextControl::TextWrappingProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(TextControl_typeof(), ::g::Uno::String_typeof()), (uintptr_t)&::g::Fuse::Controls::TextControl::ValueProperty_, uFieldFlagsStatic);
    type->Reflection.SetFields(7,
        new uField("FontProperty", 104),
        new uField("FontSizeProperty", 105),
        new uField("LineSpacingProperty", 106),
        new uField("TextAlignmentProperty", 107),
        new uField("TextColorProperty", 108),
        new uField("TextWrappingProperty", 109),
        new uField("ValueProperty", 110));
    type->Reflection.SetFunctions(23,
        new uFunction("get_Font", NULL, (void*)TextControl__get_Font_fn, 0, false, ::g::Fuse::Font_typeof(), 0),
        new uFunction("set_Font", NULL, (void*)TextControl__set_Font_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Font_typeof()),
        new uFunction("get_FontSize", NULL, (void*)TextControl__get_FontSize_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_FontSize", NULL, (void*)TextControl__set_FontSize_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_LineSpacing", NULL, (void*)TextControl__get_LineSpacing_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_LineSpacing", NULL, (void*)TextControl__set_LineSpacing_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_RenderColor", NULL, NULL, offsetof(TextControl_type, fp_get_RenderColor), false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("get_RenderValue", NULL, NULL, offsetof(TextControl_type, fp_get_RenderValue), false, ::g::Uno::String_typeof(), 0),
        new uFunction("SetValue", NULL, (void*)TextControl__SetValue1_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), uObject_typeof()),
        new uFunction("get_TextAlignment", NULL, (void*)TextControl__get_TextAlignment_fn, 0, false, ::g::Fuse::Elements::TextAlignment_typeof(), 0),
        new uFunction("set_TextAlignment", NULL, (void*)TextControl__set_TextAlignment_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::TextAlignment_typeof()),
        new uFunction("get_TextColor", NULL, (void*)TextControl__get_TextColor_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_TextColor", NULL, (void*)TextControl__set_TextColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("add_TextLayoutPropertyChanged", NULL, (void*)TextControl__add_TextLayoutPropertyChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_TextLayoutPropertyChanged", NULL, (void*)TextControl__remove_TextLayoutPropertyChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("add_TextRenderPropertyChanged", NULL, (void*)TextControl__add_TextRenderPropertyChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_TextRenderPropertyChanged", NULL, (void*)TextControl__remove_TextRenderPropertyChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("get_TextWrapping", NULL, (void*)TextControl__get_TextWrapping_fn, 0, false, ::g::Fuse::Elements::TextWrapping_typeof(), 0),
        new uFunction("set_TextWrapping", NULL, (void*)TextControl__set_TextWrapping_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::TextWrapping_typeof()),
        new uFunction("get_Value", NULL, (void*)TextControl__get_Value_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Value", NULL, (void*)TextControl__set_Value_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("add_ValueChanged", NULL, (void*)TextControl__add_ValueChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof())),
        new uFunction("remove_ValueChanged", NULL, (void*)TextControl__remove_ValueChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof())));
    return type;
}

// protected generated TextControl() :3863
void TextControl__ctor_4_fn(TextControl* __this)
{
    __this->ctor_4();
}

// public Fuse.Font get_Font() :3970
void TextControl__get_Font_fn(TextControl* __this, ::g::Fuse::Font** __retval)
{
    *__retval = __this->Font();
}

// public void set_Font(Fuse.Font value) :3971
void TextControl__set_Font_fn(TextControl* __this, ::g::Fuse::Font* value)
{
    __this->Font(value);
}

// public float get_FontSize() :3959
void TextControl__get_FontSize_fn(TextControl* __this, float* __retval)
{
    *__retval = __this->FontSize();
}

// public void set_FontSize(float value) :3960
void TextControl__set_FontSize_fn(TextControl* __this, float* value)
{
    __this->FontSize(*value);
}

// private static string GetValue(Fuse.Controls.TextControl t) :3876
void TextControl__GetValue_fn(TextControl* t, uString** __retval)
{
    *__retval = TextControl::GetValue(t);
}

// public float get_LineSpacing() :3948
void TextControl__get_LineSpacing_fn(TextControl* __this, float* __retval)
{
    *__retval = __this->LineSpacing();
}

// public void set_LineSpacing(float value) :3949
void TextControl__set_LineSpacing_fn(TextControl* __this, float* value)
{
    __this->LineSpacing(*value);
}

// protected void OnTextLayoutPropertyChanged() :3912
void TextControl__OnTextLayoutPropertyChanged_fn(TextControl* __this)
{
    __this->OnTextLayoutPropertyChanged();
}

// protected static void OnTextLayoutPropertyChanged(Fuse.Controls.TextControl t) :3906
void TextControl__OnTextLayoutPropertyChanged1_fn(TextControl* t)
{
    TextControl::OnTextLayoutPropertyChanged1(t);
}

// protected void OnTextRenderPropertyChanged() :3924
void TextControl__OnTextRenderPropertyChanged_fn(TextControl* __this)
{
    __this->OnTextRenderPropertyChanged();
}

// protected static void OnTextRenderPropertyChanged(Fuse.Controls.TextControl t) :3918
void TextControl__OnTextRenderPropertyChanged1_fn(TextControl* t)
{
    TextControl::OnTextRenderPropertyChanged1(t);
}

// protected virtual void OnValueChanged(string newString, object origin) :3891
void TextControl__OnValueChanged_fn(TextControl* __this, uString* newString, uObject* origin)
{
    if (::g::Uno::Delegate::op_Inequality(__this->ValueChanged1, NULL))
    {
        ::g::Fuse::Scripting::StringChangedArgs* args = ::g::Fuse::Scripting::StringChangedArgs::New3(newString, origin);
        uPtr(__this->ValueChanged1)->Invoke(2, __this, args);
    }
}

// public virtual float4 get_RenderColor() :3902
void TextControl__get_RenderColor_fn(TextControl* __this, ::g::Uno::Float4* __retval)
{
    return *__retval = __this->TextColor(), void();
}

// public virtual string get_RenderValue() :3901
void TextControl__get_RenderValue_fn(TextControl* __this, uString** __retval)
{
    return *__retval = __this->Value(), void();
}

// private static void SetValue(Fuse.Controls.TextControl t, string value) :3880
void TextControl__SetValue_fn(TextControl* t, uString* value)
{
    TextControl::SetValue(t, value);
}

// public void SetValue(string value, object origin) :3885
void TextControl__SetValue1_fn(TextControl* __this, uString* value, uObject* origin)
{
    __this->SetValue1(value, origin);
}

// public Fuse.Elements.TextAlignment get_TextAlignment() :3981
void TextControl__get_TextAlignment_fn(TextControl* __this, int* __retval)
{
    *__retval = __this->TextAlignment();
}

// public void set_TextAlignment(Fuse.Elements.TextAlignment value) :3982
void TextControl__set_TextAlignment_fn(TextControl* __this, int* value)
{
    __this->TextAlignment(*value);
}

// public float4 get_TextColor() :3992
void TextControl__get_TextColor_fn(TextControl* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->TextColor();
}

// public void set_TextColor(float4 value) :3993
void TextControl__set_TextColor_fn(TextControl* __this, ::g::Uno::Float4* value)
{
    __this->TextColor(*value);
}

// public generated void add_TextLayoutPropertyChanged(Uno.EventHandler value) :3911
void TextControl__add_TextLayoutPropertyChanged_fn(TextControl* __this, uDelegate* value)
{
    __this->add_TextLayoutPropertyChanged(value);
}

// public generated void remove_TextLayoutPropertyChanged(Uno.EventHandler value) :3911
void TextControl__remove_TextLayoutPropertyChanged_fn(TextControl* __this, uDelegate* value)
{
    __this->remove_TextLayoutPropertyChanged(value);
}

// public generated void add_TextRenderPropertyChanged(Uno.EventHandler value) :3923
void TextControl__add_TextRenderPropertyChanged_fn(TextControl* __this, uDelegate* value)
{
    __this->add_TextRenderPropertyChanged(value);
}

// public generated void remove_TextRenderPropertyChanged(Uno.EventHandler value) :3923
void TextControl__remove_TextRenderPropertyChanged_fn(TextControl* __this, uDelegate* value)
{
    __this->remove_TextRenderPropertyChanged(value);
}

// public Fuse.Elements.TextWrapping get_TextWrapping() :3937
void TextControl__get_TextWrapping_fn(TextControl* __this, int* __retval)
{
    *__retval = __this->TextWrapping();
}

// public void set_TextWrapping(Fuse.Elements.TextWrapping value) :3938
void TextControl__set_TextWrapping_fn(TextControl* __this, int* value)
{
    __this->TextWrapping(*value);
}

// public string get_Value() :3873
void TextControl__get_Value_fn(TextControl* __this, uString** __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(string value) :3874
void TextControl__set_Value_fn(TextControl* __this, uString* value)
{
    __this->Value(value);
}

// public generated void add_ValueChanged(Uno.UX.ValueChangedHandler<string> value) :3904
void TextControl__add_ValueChanged_fn(TextControl* __this, uDelegate* value)
{
    __this->add_ValueChanged(value);
}

// public generated void remove_ValueChanged(Uno.UX.ValueChangedHandler<string> value) :3904
void TextControl__remove_ValueChanged_fn(TextControl* __this, uDelegate* value)
{
    __this->remove_ValueChanged(value);
}

uSStrong< ::g::Fuse::StyleProperty1*> TextControl::FontProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> TextControl::FontSizeProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> TextControl::LineSpacingProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> TextControl::TextAlignmentProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> TextControl::TextColorProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> TextControl::TextWrappingProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> TextControl::ValueProperty_;

// protected generated TextControl() [instance] :3863
void TextControl::ctor_4()
{
    _value = ::STRINGS[1/*""*/];
    ctor_3();
}

// public Fuse.Font get_Font() [instance] :3970
::g::Fuse::Font* TextControl::Font()
{
    ::g::Fuse::Font* ret8;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(TextControl::FontProperty()), this, &ret8), ret8);
}

// public void set_Font(Fuse.Font value) [instance] :3971
void TextControl::Font(::g::Fuse::Font* value)
{
    bool ret9;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(TextControl::FontProperty()), this, value, &ret9);
}

// public float get_FontSize() [instance] :3959
float TextControl::FontSize()
{
    float ret10;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(TextControl::FontSizeProperty()), this, &ret10), ret10);
}

// public void set_FontSize(float value) [instance] :3960
void TextControl::FontSize(float value)
{
    bool ret11;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(TextControl::FontSizeProperty()), this, uCRef(value), &ret11);
}

// public float get_LineSpacing() [instance] :3948
float TextControl::LineSpacing()
{
    float ret12;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(TextControl::LineSpacingProperty()), this, &ret12), ret12);
}

// public void set_LineSpacing(float value) [instance] :3949
void TextControl::LineSpacing(float value)
{
    bool ret13;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(TextControl::LineSpacingProperty()), this, uCRef(value), &ret13);
}

// protected void OnTextLayoutPropertyChanged() [instance] :3912
void TextControl::OnTextLayoutPropertyChanged()
{
    if (::g::Uno::Delegate::op_Inequality(TextLayoutPropertyChanged1, NULL))
        uPtr(TextLayoutPropertyChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// protected void OnTextRenderPropertyChanged() [instance] :3924
void TextControl::OnTextRenderPropertyChanged()
{
    if (::g::Uno::Delegate::op_Inequality(TextRenderPropertyChanged1, NULL))
        uPtr(TextRenderPropertyChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// public void SetValue(string value, object origin) [instance] :3885
void TextControl::SetValue1(uString* value, uObject* origin)
{
    _value = value;
    ::g::Fuse::StyleProperty1__SetLocalState_fn(uPtr(TextControl::ValueProperty()), this);
    OnValueChanged(value, origin);
}

// public Fuse.Elements.TextAlignment get_TextAlignment() [instance] :3981
int TextControl::TextAlignment()
{
    int ret14;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(TextControl::TextAlignmentProperty()), this, &ret14), ret14);
}

// public void set_TextAlignment(Fuse.Elements.TextAlignment value) [instance] :3982
void TextControl::TextAlignment(int value)
{
    bool ret15;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(TextControl::TextAlignmentProperty()), this, uCRef<int>(value), &ret15);
}

// public float4 get_TextColor() [instance] :3992
::g::Uno::Float4 TextControl::TextColor()
{
    ::g::Uno::Float4 ret16;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(TextControl::TextColorProperty()), this, &ret16), ret16);
}

// public void set_TextColor(float4 value) [instance] :3993
void TextControl::TextColor(::g::Uno::Float4 value)
{
    bool ret17;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(TextControl::TextColorProperty()), this, uCRef(value), &ret17);
}

// public generated void add_TextLayoutPropertyChanged(Uno.EventHandler value) [instance] :3911
void TextControl::add_TextLayoutPropertyChanged(uDelegate* value)
{
    TextLayoutPropertyChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(TextLayoutPropertyChanged1, value), ::TYPES[33/*Uno.EventHandler*/]);
}

// public generated void remove_TextLayoutPropertyChanged(Uno.EventHandler value) [instance] :3911
void TextControl::remove_TextLayoutPropertyChanged(uDelegate* value)
{
    TextLayoutPropertyChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(TextLayoutPropertyChanged1, value), ::TYPES[33/*Uno.EventHandler*/]);
}

// public generated void add_TextRenderPropertyChanged(Uno.EventHandler value) [instance] :3923
void TextControl::add_TextRenderPropertyChanged(uDelegate* value)
{
    TextRenderPropertyChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(TextRenderPropertyChanged1, value), ::TYPES[33/*Uno.EventHandler*/]);
}

// public generated void remove_TextRenderPropertyChanged(Uno.EventHandler value) [instance] :3923
void TextControl::remove_TextRenderPropertyChanged(uDelegate* value)
{
    TextRenderPropertyChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(TextRenderPropertyChanged1, value), ::TYPES[33/*Uno.EventHandler*/]);
}

// public Fuse.Elements.TextWrapping get_TextWrapping() [instance] :3937
int TextControl::TextWrapping()
{
    int ret18;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(TextControl::TextWrappingProperty()), this, &ret18), ret18);
}

// public void set_TextWrapping(Fuse.Elements.TextWrapping value) [instance] :3938
void TextControl::TextWrapping(int value)
{
    bool ret19;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(TextControl::TextWrappingProperty()), this, uCRef<int>(value), &ret19);
}

// public string get_Value() [instance] :3873
uString* TextControl::Value()
{
    return _value;
}

// public void set_Value(string value) [instance] :3874
void TextControl::Value(uString* value)
{
    bool ret20;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(TextControl::ValueProperty()), this, (value != NULL) ? value : ::STRINGS[1/*""*/], &ret20);
}

// public generated void add_ValueChanged(Uno.UX.ValueChangedHandler<string> value) [instance] :3904
void TextControl::add_ValueChanged(uDelegate* value)
{
    ValueChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ValueChanged1, value), ::TYPES[18/*Uno.UX.ValueChangedHandler<string>*/]);
}

// public generated void remove_ValueChanged(Uno.UX.ValueChangedHandler<string> value) [instance] :3904
void TextControl::remove_ValueChanged(uDelegate* value)
{
    ValueChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ValueChanged1, value), ::TYPES[18/*Uno.UX.ValueChangedHandler<string>*/]);
}

// private static string GetValue(Fuse.Controls.TextControl t) [static] :3876
uString* TextControl::GetValue(TextControl* t)
{
    TextControl_typeof()->Init();
    return uPtr(t)->_value;
}

// protected static void OnTextLayoutPropertyChanged(Fuse.Controls.TextControl t) [static] :3906
void TextControl::OnTextLayoutPropertyChanged1(TextControl* t)
{
    TextControl_typeof()->Init();
    uPtr(t)->OnTextLayoutPropertyChanged();
}

// protected static void OnTextRenderPropertyChanged(Fuse.Controls.TextControl t) [static] :3918
void TextControl::OnTextRenderPropertyChanged1(TextControl* t)
{
    TextControl_typeof()->Init();
    uPtr(t)->OnTextRenderPropertyChanged();
}

// private static void SetValue(Fuse.Controls.TextControl t, string value) [static] :3880
void TextControl::SetValue(TextControl* t, uString* value)
{
    TextControl_typeof()->Init();
    uPtr(t)->_value = value;
    t->OnValueChanged(value, NULL);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(4042)
// ------------------------------------------------------------

// public class TextEdit :4042
// {
// static TextEdit() :4042
static void TextEdit__cctor_5_fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret2;
    ::g::Fuse::StyleProperty1* ret3;
    ::g::Fuse::StyleProperty1* ret4;
    ::g::Fuse::StyleProperty1* ret5;
    ::g::Fuse::StyleProperty1* ret6;
    ::g::Fuse::StyleProperty1* ret7;
    ::g::Fuse::StyleProperty1* ret8;
    ::g::Fuse::StyleProperty1* ret9;
    ::g::Fuse::StyleProperty1* ret10;
    TextEdit::IsMultilineProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[210/*Fuse.StyleProperty<Fuse.Controls.TextEdit, bool>*/], uCRef(false), uDelegate::New(::TYPES[211/*Uno.Action<Fuse.Controls.TextEdit>*/], (void*)::g::Fuse::Controls::TextControl__OnTextLayoutPropertyChanged1_fn), &ret2), ret2);
    TextEdit::IsPasswordProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[210/*Fuse.StyleProperty<Fuse.Controls.TextEdit, bool>*/], uCRef(false), uDelegate::New(::TYPES[211/*Uno.Action<Fuse.Controls.TextEdit>*/], (void*)::g::Fuse::Controls::TextControl__OnTextLayoutPropertyChanged1_fn), &ret3), ret3);
    TextEdit::IsReadOnlyProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[210/*Fuse.StyleProperty<Fuse.Controls.TextEdit, bool>*/], uCRef(false), uDelegate::New(::TYPES[211/*Uno.Action<Fuse.Controls.TextEdit>*/], (void*)::g::Fuse::Controls::TextControl__OnTextRenderPropertyChanged1_fn), &ret4), ret4);
    TextEdit::InputHintProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[212/*Fuse.StyleProperty<Fuse.Controls.TextEdit, Uno.Platform.TextInputHint>*/], uCRef<int>(0), uDelegate::New(::TYPES[211/*Uno.Action<Fuse.Controls.TextEdit>*/], (void*)::g::Fuse::Controls::TextControl__OnTextRenderPropertyChanged1_fn), &ret5), ret5);
    TextEdit::CaretColorProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[213/*Fuse.StyleProperty<Fuse.Controls.TextEdit, float4>*/], uCRef(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f)), uDelegate::New(::TYPES[211/*Uno.Action<Fuse.Controls.TextEdit>*/], (void*)::g::Fuse::Controls::TextControl__OnTextRenderPropertyChanged1_fn), &ret6), ret6);
    TextEdit::SelectionColorProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[213/*Fuse.StyleProperty<Fuse.Controls.TextEdit, float4>*/], uCRef(::g::Uno::Float4__New2(0.6f, 0.8f, 1.0f, 0.5f)), uDelegate::New(::TYPES[211/*Uno.Action<Fuse.Controls.TextEdit>*/], (void*)::g::Fuse::Controls::TextControl__OnTextRenderPropertyChanged1_fn), &ret7), ret7);
    TextEdit::ActionStyleProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[214/*Fuse.StyleProperty<Fuse.Controls.TextEdit, Fuse.Controls.TextInputActionStyle>*/], uCRef<int>(2), uDelegate::New(::TYPES[211/*Uno.Action<Fuse.Controls.TextEdit>*/], (void*)TextEdit__OnTextInputActionStyleChanged_fn), &ret8), ret8);
    TextEdit::PlaceholderTextProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[200/*Fuse.StyleProperty<Fuse.Controls.TextControl, string>*/], ::STRINGS[1/*""*/], uDelegate::New(::TYPES[204/*Uno.Action<Fuse.Controls.TextControl>*/], (void*)::g::Fuse::Controls::TextControl__OnTextRenderPropertyChanged1_fn), &ret9), ret9);
    TextEdit::PlaceholderColorProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[209/*Fuse.StyleProperty<Fuse.Controls.TextControl, float4>*/], uCRef(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f)), uDelegate::New(::TYPES[204/*Uno.Action<Fuse.Controls.TextControl>*/], (void*)::g::Fuse::Controls::TextControl__OnTextRenderPropertyChanged1_fn), &ret10), ret10);
}

::g::Fuse::Controls::TextControl_type* TextEdit_typeof()
{
    static uSStrong< ::g::Fuse::Controls::TextControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 115;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(TextEdit);
    options.TypeSize = sizeof(::g::Fuse::Controls::TextControl_type);
    type = (::g::Fuse::Controls::TextControl_type*)uClassType::New("Fuse.Controls.TextEdit", options);
    type->SetBase(::g::Fuse::Controls::TextControl_typeof());
    type->fp_ctor_ = (void*)TextEdit__New2_fn;
    type->fp_cctor_ = TextEdit__cctor_5_fn;
    type->fp_OnValueChanged = (void(*)(::g::Fuse::Controls::TextControl*, uString*, uObject*))TextEdit__OnValueChanged_fn;
    type->fp_get_RenderColor = (void(*)(::g::Fuse::Controls::TextControl*, ::g::Uno::Float4*))TextEdit__get_RenderColor_fn;
    type->fp_get_RenderValue = (void(*)(::g::Fuse::Controls::TextControl*, uString**))TextEdit__get_RenderValue_fn;
    type->interface8.fp_get_Value = (void(*)(uObject*, uTRef))::g::Fuse::Controls::TextControl__get_Value_fn;
    type->interface8.fp_set_Value = (void(*)(uObject*, void*))::g::Fuse::Controls::TextControl__set_Value_fn;
    type->interface8.fp_add_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::TextControl__add_ValueChanged_fn;
    type->interface8.fp_remove_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::TextControl__remove_ValueChanged_fn;
    type->interface6.fp_AddChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChild_fn;
    type->interface6.fp_AddChildAt = (void(*)(uObject*, int*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChildAt_fn;
    type->interface6.fp_RemoveChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_RemoveChild_fn;
    type->interface6.fp_GetChild = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_GetChild_fn;
    type->interface7.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Add_fn;
    type->interface7.fp_Remove = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Remove_fn;
    type->interface6.fp_get_ChildCount = (void(*)(uObject*, int*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_get_ChildCount_fn;
    type->interface6.fp_get_Children = (void(*)(uObject*, uObject**))::g::Fuse::Controls::Panel__get_Children_fn;
    type->interface6.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__get_ActualSize_fn;
    type->interface6.fp_get_HasChildren = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__get_HasChildren_fn;
    type->interface6.fp_add_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildAdded_fn;
    type->interface6.fp_remove_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildAdded_fn;
    type->interface6.fp_add_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildRemoved_fn;
    type->interface6.fp_remove_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildRemoved_fn;
    type->interface6.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface6.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_add_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__add_Update_fn;
    type->interface6.fp_remove_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__remove_Update_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::STRINGS[1] = uString::Const("");
    ::STRINGS[14] = uString::Const(" ");
    ::TYPES[210] = ::g::Fuse::StyleProperty1_typeof()->MakeType(TextEdit_typeof(), ::g::Uno::Bool_typeof());
    ::TYPES[211] = ::g::Uno::Action1_typeof()->MakeType(TextEdit_typeof());
    ::TYPES[212] = ::g::Fuse::StyleProperty1_typeof()->MakeType(TextEdit_typeof(), ::g::Uno::Platform::TextInputHint_typeof());
    ::TYPES[213] = ::g::Fuse::StyleProperty1_typeof()->MakeType(TextEdit_typeof(), ::g::Uno::Float4_typeof());
    ::TYPES[214] = ::g::Fuse::StyleProperty1_typeof()->MakeType(TextEdit_typeof(), ::g::Fuse::Controls::TextInputActionStyle_typeof());
    ::TYPES[200] = ::g::Fuse::StyleProperty1_typeof()->MakeType(::g::Fuse::Controls::TextControl_typeof(), ::g::Uno::String_typeof());
    ::TYPES[204] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Controls::TextControl_typeof());
    ::TYPES[209] = ::g::Fuse::StyleProperty1_typeof()->MakeType(::g::Fuse::Controls::TextControl_typeof(), ::g::Uno::Float4_typeof());
    ::TYPES[17] = ::g::Uno::Delegate_typeof();
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[215] = ::g::Fuse::Controls::TextInputActionHandler_typeof();
    ::TYPES[19] = uObject_typeof();
    ::TYPES[26] = ::g::Uno::Int_typeof();
    ::TYPES[104] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[108] = ::g::Uno::String_typeof();
    ::TYPES[216] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[22] = ::g::Uno::Bool_typeof();
    ::TYPES[217] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Char_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface5),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface6),
        ::g::Fuse::Triggers::IAddRemove_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::TextControl_type, interface7),
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Fuse::Controls::TextControl_type, interface8));
    type->SetFields(104,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Controls::TextEdit, _renderValue), 0,
        ::g::Fuse::Controls::TextInputActionHandler_typeof(), offsetof(::g::Fuse::Controls::TextEdit, ActionTriggered1), 0,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(TextEdit_typeof(), ::g::Fuse::Controls::TextInputActionStyle_typeof()), (uintptr_t)&::g::Fuse::Controls::TextEdit::ActionStyleProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(TextEdit_typeof(), ::g::Uno::Float4_typeof()), (uintptr_t)&::g::Fuse::Controls::TextEdit::CaretColorProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(TextEdit_typeof(), ::g::Uno::Platform::TextInputHint_typeof()), (uintptr_t)&::g::Fuse::Controls::TextEdit::InputHintProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(TextEdit_typeof(), ::g::Uno::Bool_typeof()), (uintptr_t)&::g::Fuse::Controls::TextEdit::IsMultilineProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(TextEdit_typeof(), ::g::Uno::Bool_typeof()), (uintptr_t)&::g::Fuse::Controls::TextEdit::IsPasswordProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(TextEdit_typeof(), ::g::Uno::Bool_typeof()), (uintptr_t)&::g::Fuse::Controls::TextEdit::IsReadOnlyProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(::g::Fuse::Controls::TextControl_typeof(), ::g::Uno::Float4_typeof()), (uintptr_t)&::g::Fuse::Controls::TextEdit::PlaceholderColorProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(::g::Fuse::Controls::TextControl_typeof(), ::g::Uno::String_typeof()), (uintptr_t)&::g::Fuse::Controls::TextEdit::PlaceholderTextProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(TextEdit_typeof(), ::g::Uno::Float4_typeof()), (uintptr_t)&::g::Fuse::Controls::TextEdit::SelectionColorProperty_, uFieldFlagsStatic);
    type->Reflection.SetFields(9,
        new uField("ActionStyleProperty", 106),
        new uField("CaretColorProperty", 107),
        new uField("InputHintProperty", 108),
        new uField("IsMultilineProperty", 109),
        new uField("IsPasswordProperty", 110),
        new uField("IsReadOnlyProperty", 111),
        new uField("PlaceholderColorProperty", 112),
        new uField("PlaceholderTextProperty", 113),
        new uField("SelectionColorProperty", 114));
    type->Reflection.SetFunctions(22,
        new uFunction("get_ActionStyle", NULL, (void*)TextEdit__get_ActionStyle_fn, 0, false, ::g::Fuse::Controls::TextInputActionStyle_typeof(), 0),
        new uFunction("set_ActionStyle", NULL, (void*)TextEdit__set_ActionStyle_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::TextInputActionStyle_typeof()),
        new uFunction("add_ActionTriggered", NULL, (void*)TextEdit__add_ActionTriggered_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::TextInputActionHandler_typeof()),
        new uFunction("remove_ActionTriggered", NULL, (void*)TextEdit__remove_ActionTriggered_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::TextInputActionHandler_typeof()),
        new uFunction("get_CaretColor", NULL, (void*)TextEdit__get_CaretColor_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_CaretColor", NULL, (void*)TextEdit__set_CaretColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_InputHint", NULL, (void*)TextEdit__get_InputHint_fn, 0, false, ::g::Uno::Platform::TextInputHint_typeof(), 0),
        new uFunction("set_InputHint", NULL, (void*)TextEdit__set_InputHint_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Platform::TextInputHint_typeof()),
        new uFunction("get_IsMultiline", NULL, (void*)TextEdit__get_IsMultiline_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsMultiline", NULL, (void*)TextEdit__set_IsMultiline_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_IsPassword", NULL, (void*)TextEdit__get_IsPassword_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsPassword", NULL, (void*)TextEdit__set_IsPassword_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_IsReadOnly", NULL, (void*)TextEdit__get_IsReadOnly_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsReadOnly", NULL, (void*)TextEdit__set_IsReadOnly_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)TextEdit__New2_fn, 0, true, TextEdit_typeof(), 0),
        new uFunction("get_PlaceholderColor", NULL, (void*)TextEdit__get_PlaceholderColor_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_PlaceholderColor", NULL, (void*)TextEdit__set_PlaceholderColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_PlaceholderText", NULL, (void*)TextEdit__get_PlaceholderText_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_PlaceholderText", NULL, (void*)TextEdit__set_PlaceholderText_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_SelectionColor", NULL, (void*)TextEdit__get_SelectionColor_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_SelectionColor", NULL, (void*)TextEdit__set_SelectionColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_UsePlaceholder", NULL, (void*)TextEdit__get_UsePlaceholder_fn, 0, false, ::g::Uno::Bool_typeof(), 0));
    return type;
}

// public generated TextEdit() :4042
void TextEdit__ctor_5_fn(TextEdit* __this)
{
    __this->ctor_5();
}

// public Fuse.Controls.TextInputActionStyle get_ActionStyle() :4120
void TextEdit__get_ActionStyle_fn(TextEdit* __this, int* __retval)
{
    *__retval = __this->ActionStyle();
}

// public void set_ActionStyle(Fuse.Controls.TextInputActionStyle value) :4121
void TextEdit__set_ActionStyle_fn(TextEdit* __this, int* value)
{
    __this->ActionStyle(*value);
}

// public generated void add_ActionTriggered(Fuse.Controls.TextInputActionHandler value) :4216
void TextEdit__add_ActionTriggered_fn(TextEdit* __this, uDelegate* value)
{
    __this->add_ActionTriggered(value);
}

// public generated void remove_ActionTriggered(Fuse.Controls.TextInputActionHandler value) :4216
void TextEdit__remove_ActionTriggered_fn(TextEdit* __this, uDelegate* value)
{
    __this->remove_ActionTriggered(value);
}

// public float4 get_CaretColor() :4094
void TextEdit__get_CaretColor_fn(TextEdit* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->CaretColor();
}

// public void set_CaretColor(float4 value) :4100
void TextEdit__set_CaretColor_fn(TextEdit* __this, ::g::Uno::Float4* value)
{
    __this->CaretColor(*value);
}

// public Uno.Platform.TextInputHint get_InputHint() :4083
void TextEdit__get_InputHint_fn(TextEdit* __this, int* __retval)
{
    *__retval = __this->InputHint();
}

// public void set_InputHint(Uno.Platform.TextInputHint value) :4084
void TextEdit__set_InputHint_fn(TextEdit* __this, int* value)
{
    __this->InputHint(*value);
}

// public bool get_IsMultiline() :4051
void TextEdit__get_IsMultiline_fn(TextEdit* __this, bool* __retval)
{
    *__retval = __this->IsMultiline();
}

// public void set_IsMultiline(bool value) :4052
void TextEdit__set_IsMultiline_fn(TextEdit* __this, bool* value)
{
    __this->IsMultiline(*value);
}

// public bool get_IsPassword() :4062
void TextEdit__get_IsPassword_fn(TextEdit* __this, bool* __retval)
{
    *__retval = __this->IsPassword();
}

// public void set_IsPassword(bool value) :4063
void TextEdit__set_IsPassword_fn(TextEdit* __this, bool* value)
{
    __this->IsPassword(*value);
}

// public bool get_IsReadOnly() :4073
void TextEdit__get_IsReadOnly_fn(TextEdit* __this, bool* __retval)
{
    *__retval = __this->IsReadOnly();
}

// public void set_IsReadOnly(bool value) :4074
void TextEdit__set_IsReadOnly_fn(TextEdit* __this, bool* value)
{
    __this->IsReadOnly(*value);
}

// public generated TextEdit New() :4042
void TextEdit__New2_fn(TextEdit** __retval)
{
    *__retval = TextEdit::New2();
}

// internal bool OnAction() :4218
void TextEdit__OnAction_fn(TextEdit* __this, bool* __retval)
{
    *__retval = __this->OnAction();
}

// private static void OnTextInputActionStyleChanged(Fuse.Controls.TextEdit input) :4124
void TextEdit__OnTextInputActionStyleChanged_fn(TextEdit* input)
{
    TextEdit::OnTextInputActionStyleChanged(input);
}

// protected override sealed void OnValueChanged(string newString, object origin) :4210
void TextEdit__OnValueChanged_fn(TextEdit* __this, uString* newString, uObject* origin)
{
    ::g::Fuse::Controls::TextControl__OnValueChanged_fn(__this, newString, origin);
    __this->_renderValue = NULL;
}

// public float4 get_PlaceholderColor() :4144
void TextEdit__get_PlaceholderColor_fn(TextEdit* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->PlaceholderColor();
}

// public void set_PlaceholderColor(float4 value) :4145
void TextEdit__set_PlaceholderColor_fn(TextEdit* __this, ::g::Uno::Float4* value)
{
    __this->PlaceholderColor(*value);
}

// public string get_PlaceholderText() :4133
void TextEdit__get_PlaceholderText_fn(TextEdit* __this, uString** __retval)
{
    *__retval = __this->PlaceholderText();
}

// public void set_PlaceholderText(string value) :4134
void TextEdit__set_PlaceholderText_fn(TextEdit* __this, uString* value)
{
    __this->PlaceholderText(value);
}

// public override sealed float4 get_RenderColor() :4208
void TextEdit__get_RenderColor_fn(TextEdit* __this, ::g::Uno::Float4* __retval)
{
    return *__retval = __this->UsePlaceholder() ? __this->PlaceholderColor() : __this->TextColor(), void();
}

// public override sealed string get_RenderValue() :4153
void TextEdit__get_RenderValue_fn(TextEdit* __this, uString** __retval)
{
    if (::g::Uno::String::op_Inequality(__this->_renderValue, NULL))
        return *__retval = __this->_renderValue, void();

    if (uPtr(__this->Value())->Length() == 0)
    {
        if (__this->UsePlaceholder())
            return *__retval = __this->PlaceholderText(), void();

        __this->_renderValue = ::STRINGS[14/*" "*/];
        return *__retval = __this->_renderValue, void();
    }

    if (__this->IsPassword())
    {
        uArray* c = uArray::New(::TYPES[216/*char[]*/], uPtr(__this->Value())->Length());
        uChar replacementChar = 8226;

        for (int i = 0; i < c->Length(); ++i)
            c->Item<uChar>(i) = replacementChar;

        __this->_renderValue = uString::CharArray(c);
        return *__retval = __this->_renderValue, void();
    }

    if (!__this->IsMultiline())
    {
        ::g::Uno::Collections::List* s = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[217/*Uno.Collections.List<char>*/]);
        uString* v = __this->Value();

        for (int i1 = 0; i1 < uPtr(v)->Length(); ++i1)
        {
            uChar c1 = uPtr(v)->Item(i1);

            if ((c1 == 10) || (c1 == 13))
                c1 = ' ';

            ::g::Uno::Collections::List__Add_fn(uPtr(s), uCRef<uChar>(c1));
        }

        __this->_renderValue = uString::CharArray((uArray*)s->ToArray());
        return *__retval = __this->_renderValue, void();
    }

    return *__retval = __this->Value(), void();
}

// public float4 get_SelectionColor() :4110
void TextEdit__get_SelectionColor_fn(TextEdit* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->SelectionColor();
}

// public void set_SelectionColor(float4 value) :4111
void TextEdit__set_SelectionColor_fn(TextEdit* __this, ::g::Uno::Float4* value)
{
    __this->SelectionColor(*value);
}

// public bool get_UsePlaceholder() :4148
void TextEdit__get_UsePlaceholder_fn(TextEdit* __this, bool* __retval)
{
    *__retval = __this->UsePlaceholder();
}

uSStrong< ::g::Fuse::StyleProperty1*> TextEdit::ActionStyleProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> TextEdit::CaretColorProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> TextEdit::InputHintProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> TextEdit::IsMultilineProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> TextEdit::IsPasswordProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> TextEdit::IsReadOnlyProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> TextEdit::PlaceholderColorProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> TextEdit::PlaceholderTextProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> TextEdit::SelectionColorProperty_;

// public generated TextEdit() [instance] :4042
void TextEdit::ctor_5()
{
    ctor_4();
}

// public Fuse.Controls.TextInputActionStyle get_ActionStyle() [instance] :4120
int TextEdit::ActionStyle()
{
    int ret11;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(TextEdit::ActionStyleProperty()), this, &ret11), ret11);
}

// public void set_ActionStyle(Fuse.Controls.TextInputActionStyle value) [instance] :4121
void TextEdit::ActionStyle(int value)
{
    bool ret12;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(TextEdit::ActionStyleProperty()), this, uCRef<int>(value), &ret12);
}

// public generated void add_ActionTriggered(Fuse.Controls.TextInputActionHandler value) [instance] :4216
void TextEdit::add_ActionTriggered(uDelegate* value)
{
    ActionTriggered1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ActionTriggered1, value), ::TYPES[215/*Fuse.Controls.TextInputActionHandler*/]);
}

// public generated void remove_ActionTriggered(Fuse.Controls.TextInputActionHandler value) [instance] :4216
void TextEdit::remove_ActionTriggered(uDelegate* value)
{
    ActionTriggered1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ActionTriggered1, value), ::TYPES[215/*Fuse.Controls.TextInputActionHandler*/]);
}

// public float4 get_CaretColor() [instance] :4094
::g::Uno::Float4 TextEdit::CaretColor()
{
    bool ret13;
    ::g::Uno::Float4 ret14;

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(TextEdit::CaretColorProperty()), this, &ret13), ret13))
        return (::g::Fuse::StyleProperty1__Get_fn(uPtr(TextEdit::CaretColorProperty()), this, &ret14), ret14);

    return TextColor();
}

// public void set_CaretColor(float4 value) [instance] :4100
void TextEdit::CaretColor(::g::Uno::Float4 value)
{
    bool ret15;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(TextEdit::CaretColorProperty()), this, uCRef(value), &ret15);
}

// public Uno.Platform.TextInputHint get_InputHint() [instance] :4083
int TextEdit::InputHint()
{
    int ret16;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(TextEdit::InputHintProperty()), this, &ret16), ret16);
}

// public void set_InputHint(Uno.Platform.TextInputHint value) [instance] :4084
void TextEdit::InputHint(int value)
{
    bool ret17;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(TextEdit::InputHintProperty()), this, uCRef<int>(value), &ret17);
}

// public bool get_IsMultiline() [instance] :4051
bool TextEdit::IsMultiline()
{
    bool ret18;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(TextEdit::IsMultilineProperty()), this, &ret18), ret18);
}

// public void set_IsMultiline(bool value) [instance] :4052
void TextEdit::IsMultiline(bool value)
{
    bool ret19;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(TextEdit::IsMultilineProperty()), this, uCRef(value), &ret19);
}

// public bool get_IsPassword() [instance] :4062
bool TextEdit::IsPassword()
{
    bool ret20;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(TextEdit::IsPasswordProperty()), this, &ret20), ret20);
}

// public void set_IsPassword(bool value) [instance] :4063
void TextEdit::IsPassword(bool value)
{
    bool ret21;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(TextEdit::IsPasswordProperty()), this, uCRef(value), &ret21);
}

// public bool get_IsReadOnly() [instance] :4073
bool TextEdit::IsReadOnly()
{
    bool ret22;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(TextEdit::IsReadOnlyProperty()), this, &ret22), ret22);
}

// public void set_IsReadOnly(bool value) [instance] :4074
void TextEdit::IsReadOnly(bool value)
{
    bool ret23;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(TextEdit::IsReadOnlyProperty()), this, uCRef(value), &ret23);
}

// internal bool OnAction() [instance] :4218
bool TextEdit::OnAction()
{
    if (::g::Uno::Delegate::op_Inequality(ActionTriggered1, NULL))
    {
        ::g::Fuse::Controls::TextInputActionArgs* args = ::g::Fuse::Controls::TextInputActionArgs::New3(this, 0);
        uPtr(ActionTriggered1)->Invoke(2, this, args);
        return true;
    }

    if (ActionStyle() == 2)
        ::g::Fuse::Input::Focus::Move(1);
    else
        ::g::Fuse::Input::Focus::Release();

    return true;
}

// public float4 get_PlaceholderColor() [instance] :4144
::g::Uno::Float4 TextEdit::PlaceholderColor()
{
    ::g::Uno::Float4 ret24;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(TextEdit::PlaceholderColorProperty()), this, &ret24), ret24);
}

// public void set_PlaceholderColor(float4 value) [instance] :4145
void TextEdit::PlaceholderColor(::g::Uno::Float4 value)
{
    bool ret25;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(TextEdit::PlaceholderColorProperty()), this, uCRef(value), &ret25);
}

// public string get_PlaceholderText() [instance] :4133
uString* TextEdit::PlaceholderText()
{
    uString* ret26;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(TextEdit::PlaceholderTextProperty()), this, &ret26), ret26);
}

// public void set_PlaceholderText(string value) [instance] :4134
void TextEdit::PlaceholderText(uString* value)
{
    bool ret27;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(TextEdit::PlaceholderTextProperty()), this, value, &ret27);
}

// public float4 get_SelectionColor() [instance] :4110
::g::Uno::Float4 TextEdit::SelectionColor()
{
    ::g::Uno::Float4 ret28;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(TextEdit::SelectionColorProperty()), this, &ret28), ret28);
}

// public void set_SelectionColor(float4 value) [instance] :4111
void TextEdit::SelectionColor(::g::Uno::Float4 value)
{
    bool ret29;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(TextEdit::SelectionColorProperty()), this, uCRef(value), &ret29);
}

// public bool get_UsePlaceholder() [instance] :4148
bool TextEdit::UsePlaceholder()
{
    bool ret30;
    return ((uPtr(Value())->Length() == 0) && (::g::Fuse::StyleProperty1__HasValue_fn(uPtr(TextEdit::PlaceholderTextProperty()), this, &ret30), ret30)) && (uPtr(PlaceholderText())->Length() > 0);
}

// public generated TextEdit New() [static] :4042
TextEdit* TextEdit::New2()
{
    TextEdit* obj1 = (TextEdit*)uNew(TextEdit_typeof());
    obj1->ctor_5();
    return obj1;
}

// private static void OnTextInputActionStyleChanged(Fuse.Controls.TextEdit input) [static] :4124
void TextEdit::OnTextInputActionStyleChanged(TextEdit* input)
{
    TextEdit_typeof()->Init();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(4236)
// ------------------------------------------------------------

// public sealed class TextInput :4236
// {
::g::Fuse::Controls::TextControl_type* TextInput_typeof()
{
    static uSStrong< ::g::Fuse::Controls::TextControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 106;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(TextInput);
    options.TypeSize = sizeof(::g::Fuse::Controls::TextControl_type);
    type = (::g::Fuse::Controls::TextControl_type*)uClassType::New("Fuse.Controls.TextInput", options);
    type->SetBase(::g::Fuse::Controls::TextEdit_typeof());
    type->fp_ctor_ = (void*)TextInput__New3_fn;
    type->interface8.fp_get_Value = (void(*)(uObject*, uTRef))::g::Fuse::Controls::TextControl__get_Value_fn;
    type->interface8.fp_set_Value = (void(*)(uObject*, void*))::g::Fuse::Controls::TextControl__set_Value_fn;
    type->interface8.fp_add_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::TextControl__add_ValueChanged_fn;
    type->interface8.fp_remove_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::TextControl__remove_ValueChanged_fn;
    type->interface6.fp_AddChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChild_fn;
    type->interface6.fp_AddChildAt = (void(*)(uObject*, int*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChildAt_fn;
    type->interface6.fp_RemoveChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_RemoveChild_fn;
    type->interface6.fp_GetChild = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_GetChild_fn;
    type->interface7.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Add_fn;
    type->interface7.fp_Remove = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Remove_fn;
    type->interface6.fp_get_ChildCount = (void(*)(uObject*, int*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_get_ChildCount_fn;
    type->interface6.fp_get_Children = (void(*)(uObject*, uObject**))::g::Fuse::Controls::Panel__get_Children_fn;
    type->interface6.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__get_ActualSize_fn;
    type->interface6.fp_get_HasChildren = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__get_HasChildren_fn;
    type->interface6.fp_add_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildAdded_fn;
    type->interface6.fp_remove_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildAdded_fn;
    type->interface6.fp_add_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildRemoved_fn;
    type->interface6.fp_remove_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildRemoved_fn;
    type->interface6.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface6.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_add_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__add_Update_fn;
    type->interface6.fp_remove_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__remove_Update_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface5),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(::g::Fuse::Controls::TextControl_type, interface6),
        ::g::Fuse::Triggers::IAddRemove_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::TextControl_type, interface7),
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Fuse::Controls::TextControl_type, interface8));
    type->SetFields(106);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TextInput__New3_fn, 0, true, TextInput_typeof(), 0));
    return type;
}

// public generated TextInput() :4236
void TextInput__ctor_6_fn(TextInput* __this)
{
    __this->ctor_6();
}

// public generated TextInput New() :4236
void TextInput__New3_fn(TextInput** __retval)
{
    *__retval = TextInput::New3();
}

// public generated TextInput() [instance] :4236
void TextInput::ctor_6()
{
    ctor_5();
}

// public generated TextInput New() [static] :4236
TextInput* TextInput::New3()
{
    TextInput* obj1 = (TextInput*)uNew(TextInput_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(4018)
// ------------------------------------------------------------

// public sealed class TextInputActionArgs :4018
// {
::g::Fuse::NodeEventArgs_type* TextInputActionArgs_typeof()
{
    static uSStrong< ::g::Fuse::NodeEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TextInputActionArgs);
    options.TypeSize = sizeof(::g::Fuse::NodeEventArgs_type);
    type = (::g::Fuse::NodeEventArgs_type*)uClassType::New("Fuse.Controls.TextInputActionArgs", options);
    type->SetBase(::g::Fuse::NodeEventArgs_typeof());
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::NodeEventArgs__Fuse_Scripting_IScriptEvent_Serialize_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::NodeEventArgs_type, interface0));
    type->SetFields(2,
        ::g::Fuse::Controls::TextInputActionType_typeof(), offsetof(::g::Fuse::Controls::TextInputActionArgs, _Type), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)TextInputActionArgs__New3_fn, 0, true, TextInputActionArgs_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Fuse::Controls::TextInputActionType_typeof()),
        new uFunction("get_Type", NULL, (void*)TextInputActionArgs__get_Type_fn, 0, false, ::g::Fuse::Controls::TextInputActionType_typeof(), 0));
    return type;
}

// public TextInputActionArgs(Fuse.Node node, Fuse.Controls.TextInputActionType type) :4022
void TextInputActionArgs__ctor_2_fn(TextInputActionArgs* __this, ::g::Fuse::Node* node, int* type)
{
    __this->ctor_2(node, *type);
}

// public TextInputActionArgs New(Fuse.Node node, Fuse.Controls.TextInputActionType type) :4022
void TextInputActionArgs__New3_fn(::g::Fuse::Node* node, int* type, TextInputActionArgs** __retval)
{
    *__retval = TextInputActionArgs::New3(node, *type);
}

// public generated Fuse.Controls.TextInputActionType get_Type() :4020
void TextInputActionArgs__get_Type_fn(TextInputActionArgs* __this, int* __retval)
{
    *__retval = __this->Type();
}

// private generated void set_Type(Fuse.Controls.TextInputActionType value) :4020
void TextInputActionArgs__set_Type_fn(TextInputActionArgs* __this, int* value)
{
    __this->Type(*value);
}

// public TextInputActionArgs(Fuse.Node node, Fuse.Controls.TextInputActionType type) [instance] :4022
void TextInputActionArgs::ctor_2(::g::Fuse::Node* node, int type)
{
    ctor_1(node);
    Type(type);
}

// public generated Fuse.Controls.TextInputActionType get_Type() [instance] :4020
int TextInputActionArgs::Type()
{
    return _Type;
}

// private generated void set_Type(Fuse.Controls.TextInputActionType value) [instance] :4020
void TextInputActionArgs::Type(int value)
{
    _Type = value;
}

// public TextInputActionArgs New(Fuse.Node node, Fuse.Controls.TextInputActionType type) [static] :4022
TextInputActionArgs* TextInputActionArgs::New3(::g::Fuse::Node* node, int type)
{
    TextInputActionArgs* obj1 = (TextInputActionArgs*)uNew(TextInputActionArgs_typeof());
    obj1->ctor_2(node, type);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(4039)
// ------------------------------------------------------------

// public delegate void TextInputActionHandler(object sender, Fuse.Controls.TextInputActionArgs args) :4039
uDelegateType* TextInputActionHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Controls.TextInputActionHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Controls::TextInputActionArgs_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(4029)
// ------------------------------------------------------------

// public enum TextInputActionStyle :4029
uEnumType* TextInputActionStyle_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Controls.TextInputActionStyle", ::g::Uno::Int_typeof(), 6);
    type->SetLiterals(
        "Default", 0LL,
        "Done", 1LL,
        "Next", 2LL,
        "Go", 3LL,
        "Search", 4LL,
        "Send", 5LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(4013)
// ------------------------------------------------------------

// public enum TextInputActionType :4013
uEnumType* TextInputActionType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Controls.TextInputActionType", ::g::Uno::Int_typeof(), 1);
    type->SetLiterals(
        "Primary", 0LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(4285)
// ------------------------------------------------------------

// public sealed class Toggle :4285
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Toggle_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(Toggle);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Controls.Toggle", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_ctor_ = (void*)Toggle__New1_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))Toggle__Perform_fn;
    ::TYPES[218] = ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[22] = ::g::Uno::Bool_typeof();
    type->SetFields(7,
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::Fuse::Controls::Toggle, _Target), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)Toggle__New1_fn, 0, true, Toggle_typeof(), 0),
        new uFunction("get_Target", NULL, (void*)Toggle__get_Target_fn, 0, false, ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::Bool_typeof()), 0),
        new uFunction("set_Target", NULL, (void*)Toggle__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::Bool_typeof())));
    return type;
}

// public generated Toggle() :4285
void Toggle__ctor_1_fn(Toggle* __this)
{
    __this->ctor_1();
}

// private Fuse.Triggers.IValue<bool> FindTarget(Fuse.Node n) :4296
void Toggle__FindTarget_fn(Toggle* __this, ::g::Fuse::Node* n, uObject** __retval)
{
    *__retval = __this->FindTarget(n);
}

// public generated Toggle New() :4285
void Toggle__New1_fn(Toggle** __retval)
{
    *__retval = Toggle::New1();
}

// protected override sealed void Perform(Fuse.Node target) :4289
void Toggle__Perform_fn(Toggle* __this, ::g::Fuse::Node* target)
{
    bool ret3;
    uObject* ind1 = __this->Target();
    uObject* t = (ind1 != NULL) ? ind1 : (uObject*)__this->FindTarget(target);

    if (t != NULL)
        ::g::Fuse::Triggers::IValue::set_Value_ex(uInterface(uPtr(t), ::TYPES[218/*Fuse.Triggers.IValue<bool>*/]), uCRef(!(::g::Fuse::Triggers::IValue::get_Value_ex(uInterface(uPtr(t), ::TYPES[218/*Fuse.Triggers.IValue<bool>*/]), &ret3), ret3)));
}

// public generated Fuse.Triggers.IValue<bool> get_Target() :4287
void Toggle__get_Target_fn(Toggle* __this, uObject** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Triggers.IValue<bool> value) :4287
void Toggle__set_Target_fn(Toggle* __this, uObject* value)
{
    __this->Target(value);
}

// public generated Toggle() [instance] :4285
void Toggle::ctor_1()
{
    ctor_();
}

// private Fuse.Triggers.IValue<bool> FindTarget(Fuse.Node n) [instance] :4296
uObject* Toggle::FindTarget(::g::Fuse::Node* n)
{
    while (n != NULL)
    {
        uObject* iv = uAs<uObject*>(n, ::TYPES[218/*Fuse.Triggers.IValue<bool>*/]);

        if (iv != NULL)
            return iv;

        n = uPtr(n)->Parent();
    }

    return NULL;
}

// public generated Fuse.Triggers.IValue<bool> get_Target() [instance] :4287
uObject* Toggle::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Triggers.IValue<bool> value) [instance] :4287
void Toggle::Target(uObject* value)
{
    _Target = value;
}

// public generated Toggle New() [static] :4285
Toggle* Toggle::New1()
{
    Toggle* obj2 = (Toggle*)uNew(Toggle_typeof());
    obj2->ctor_1();
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(4308)
// ------------------------------------------------------------

// public class ToggleControl :4308
// {
// static ToggleControl() :4308
static void ToggleControl__cctor_4_fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret2;
    ToggleControl::ValueProperty_ = (::g::Fuse::StyleProperty1__New2_fn(::TYPES[219/*Fuse.StyleProperty<Fuse.Controls.ToggleControl, bool>*/], uCRef(false), NULL, uDelegate::New(::TYPES[220/*Uno.Action<Fuse.Controls.ToggleControl, bool>*/], (void*)ToggleControl__SetValue1_fn), uDelegate::New(::TYPES[221/*Uno.Func<Fuse.Controls.ToggleControl, bool>*/], (void*)ToggleControl__GetValue_fn), &ret2), ret2);
}

ToggleControl_type* ToggleControl_typeof()
{
    static uSStrong<ToggleControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 103;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(ToggleControl);
    options.TypeSize = sizeof(ToggleControl_type);
    type = (ToggleControl_type*)uClassType::New("Fuse.Controls.ToggleControl", options);
    type->SetBase(::g::Fuse::Controls::Panel_typeof());
    type->fp_ctor_ = (void*)ToggleControl__New2_fn;
    type->fp_cctor_ = ToggleControl__cctor_4_fn;
    type->interface8.fp_get_Value = (void(*)(uObject*, uTRef))ToggleControl__get_Value_fn;
    type->interface8.fp_set_Value = (void(*)(uObject*, void*))ToggleControl__set_Value_fn;
    type->interface8.fp_add_ValueChanged = (void(*)(uObject*, uDelegate*))ToggleControl__add_ValueChanged_fn;
    type->interface8.fp_remove_ValueChanged = (void(*)(uObject*, uDelegate*))ToggleControl__remove_ValueChanged_fn;
    type->interface6.fp_AddChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChild_fn;
    type->interface6.fp_AddChildAt = (void(*)(uObject*, int*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChildAt_fn;
    type->interface6.fp_RemoveChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_RemoveChild_fn;
    type->interface6.fp_GetChild = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_GetChild_fn;
    type->interface7.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Add_fn;
    type->interface7.fp_Remove = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Remove_fn;
    type->interface6.fp_get_ChildCount = (void(*)(uObject*, int*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_get_ChildCount_fn;
    type->interface6.fp_get_Children = (void(*)(uObject*, uObject**))::g::Fuse::Controls::Panel__get_Children_fn;
    type->interface6.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__get_ActualSize_fn;
    type->interface6.fp_get_HasChildren = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__get_HasChildren_fn;
    type->interface6.fp_add_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildAdded_fn;
    type->interface6.fp_remove_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildAdded_fn;
    type->interface6.fp_add_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildRemoved_fn;
    type->interface6.fp_remove_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildRemoved_fn;
    type->interface6.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface6.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_add_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__add_Update_fn;
    type->interface6.fp_remove_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__remove_Update_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::TYPES[219] = ::g::Fuse::StyleProperty1_typeof()->MakeType(ToggleControl_typeof(), ::g::Uno::Bool_typeof());
    ::TYPES[220] = ::g::Uno::Action2_typeof()->MakeType(ToggleControl_typeof(), ::g::Uno::Bool_typeof());
    ::TYPES[221] = ::g::Uno::Func1_typeof()->MakeType(ToggleControl_typeof(), ::g::Uno::Bool_typeof());
    ::TYPES[17] = ::g::Uno::Delegate_typeof();
    ::TYPES[42] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[19] = uObject_typeof();
    ::TYPES[50] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Bool_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(ToggleControl_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(ToggleControl_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(ToggleControl_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(ToggleControl_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(ToggleControl_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(ToggleControl_type, interface5),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(ToggleControl_type, interface6),
        ::g::Fuse::Triggers::IAddRemove_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(ToggleControl_type, interface7),
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(ToggleControl_type, interface8));
    type->SetFields(100,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::ToggleControl, _value), 0,
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::Fuse::Controls::ToggleControl, ValueChanged1), 0,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(ToggleControl_typeof(), ::g::Uno::Bool_typeof()), (uintptr_t)&::g::Fuse::Controls::ToggleControl::ValueProperty_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("ValueProperty", 102));
    type->Reflection.SetFunctions(6,
        new uFunction(".ctor", NULL, (void*)ToggleControl__New2_fn, 0, true, ToggleControl_typeof(), 0),
        new uFunction("SetValue", NULL, (void*)ToggleControl__SetValue_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), uObject_typeof()),
        new uFunction("get_Value", NULL, (void*)ToggleControl__get_Value_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Value", NULL, (void*)ToggleControl__set_Value_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("add_ValueChanged", NULL, (void*)ToggleControl__add_ValueChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Bool_typeof())),
        new uFunction("remove_ValueChanged", NULL, (void*)ToggleControl__remove_ValueChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Bool_typeof())));
    return type;
}

// public generated ToggleControl() :4308
void ToggleControl__ctor_4_fn(ToggleControl* __this)
{
    __this->ctor_4();
}

// private static bool GetValue(Fuse.Controls.ToggleControl s) :4320
void ToggleControl__GetValue_fn(ToggleControl* s, bool* __retval)
{
    *__retval = ToggleControl::GetValue(s);
}

// public generated ToggleControl New() :4308
void ToggleControl__New2_fn(ToggleControl** __retval)
{
    *__retval = ToggleControl::New2();
}

// protected void OnValueChanged(bool value, object origin) :4338
void ToggleControl__OnValueChanged_fn(ToggleControl* __this, bool* value, uObject* origin)
{
    __this->OnValueChanged(*value, origin);
}

// public void SetValue(bool value, object origin) :4329
void ToggleControl__SetValue_fn(ToggleControl* __this, bool* value, uObject* origin)
{
    __this->SetValue(*value, origin);
}

// private static void SetValue(Fuse.Controls.ToggleControl s, bool value) :4324
void ToggleControl__SetValue1_fn(ToggleControl* s, bool* value)
{
    ToggleControl::SetValue1(s, *value);
}

// public bool get_Value() :4317
void ToggleControl__get_Value_fn(ToggleControl* __this, bool* __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(bool value) :4318
void ToggleControl__set_Value_fn(ToggleControl* __this, bool* value)
{
    __this->Value(*value);
}

// public generated void add_ValueChanged(Uno.UX.ValueChangedHandler<bool> value) :4344
void ToggleControl__add_ValueChanged_fn(ToggleControl* __this, uDelegate* value)
{
    __this->add_ValueChanged(value);
}

// public generated void remove_ValueChanged(Uno.UX.ValueChangedHandler<bool> value) :4344
void ToggleControl__remove_ValueChanged_fn(ToggleControl* __this, uDelegate* value)
{
    __this->remove_ValueChanged(value);
}

uSStrong< ::g::Fuse::StyleProperty1*> ToggleControl::ValueProperty_;

// public generated ToggleControl() [instance] :4308
void ToggleControl::ctor_4()
{
    ctor_3();
}

// protected void OnValueChanged(bool value, object origin) [instance] :4338
void ToggleControl::OnValueChanged(bool value, uObject* origin)
{
    bool value_ = value;

    if (::g::Uno::Delegate::op_Inequality(ValueChanged1, NULL))
        uPtr(ValueChanged1)->Invoke(2, this, (::g::Fuse::Scripting::BoolChangedArgs*)::g::Fuse::Scripting::BoolChangedArgs::New3(value_, origin));
}

// public void SetValue(bool value, object origin) [instance] :4329
void ToggleControl::SetValue(bool value, uObject* origin)
{
    if (_value != value)
    {
        _value = value;
        ::g::Fuse::StyleProperty1__SetLocalState_fn(uPtr(ToggleControl::ValueProperty()), this);
        OnValueChanged(value, origin);
    }
}

// public bool get_Value() [instance] :4317
bool ToggleControl::Value()
{
    return _value;
}

// public void set_Value(bool value) [instance] :4318
void ToggleControl::Value(bool value)
{
    bool ret3;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(ToggleControl::ValueProperty()), this, uCRef(value), &ret3);
}

// public generated void add_ValueChanged(Uno.UX.ValueChangedHandler<bool> value) [instance] :4344
void ToggleControl::add_ValueChanged(uDelegate* value)
{
    ValueChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ValueChanged1, value), ::TYPES[42/*Uno.UX.ValueChangedHandler<bool>*/]);
}

// public generated void remove_ValueChanged(Uno.UX.ValueChangedHandler<bool> value) [instance] :4344
void ToggleControl::remove_ValueChanged(uDelegate* value)
{
    ValueChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ValueChanged1, value), ::TYPES[42/*Uno.UX.ValueChangedHandler<bool>*/]);
}

// private static bool GetValue(Fuse.Controls.ToggleControl s) [static] :4320
bool ToggleControl::GetValue(ToggleControl* s)
{
    ToggleControl_typeof()->Init();
    return uPtr(s)->_value;
}

// public generated ToggleControl New() [static] :4308
ToggleControl* ToggleControl::New2()
{
    ToggleControl* obj1 = (ToggleControl*)uNew(ToggleControl_typeof());
    obj1->ctor_4();
    return obj1;
}

// private static void SetValue(Fuse.Controls.ToggleControl s, bool value) [static] :4324
void ToggleControl::SetValue1(ToggleControl* s, bool value)
{
    ToggleControl_typeof()->Init();
    uPtr(s)->_value = value;
    s->OnValueChanged(value, NULL);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(4363)
// ------------------------------------------------------------

// public class TopFrameBackground :4363
// {
::g::Fuse::Controls::Control_type* TopFrameBackground_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 89;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(TopFrameBackground);
    options.TypeSize = sizeof(::g::Fuse::Controls::Control_type);
    type = (::g::Fuse::Controls::Control_type*)uClassType::New("Fuse.Controls.TopFrameBackground", options);
    type->SetBase(::g::Fuse::Controls::Control_typeof());
    type->fp_ctor_ = (void*)TopFrameBackground__New1_fn;
    type->fp_GetContentSize = (void(*)(::g::Fuse::Elements::Element*, ::g::Uno::Float2*, int*, ::g::Uno::Float2*))TopFrameBackground__GetContentSize_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))TopFrameBackground__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))TopFrameBackground__OnUnrooted_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::TYPES[8] = ::g::Uno::Platform2::Display_typeof();
    ::TYPES[10] = ::g::Uno::Rect_typeof();
    ::TYPES[12] = ::g::Uno::Platform::SystemUI_typeof();
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[13] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::SystemUIWillResizeEventArgs_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface5));
    type->SetFields(89);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TopFrameBackground__New1_fn, 0, true, TopFrameBackground_typeof(), 0));
    return type;
}

// public generated TopFrameBackground() :4363
void TopFrameBackground__ctor_3_fn(TopFrameBackground* __this)
{
    __this->ctor_3();
}

// protected override sealed float2 GetContentSize(float2 fillSize, Fuse.SizeFlags fillSet) :4384
void TopFrameBackground__GetContentSize_fn(TopFrameBackground* __this, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval)
{
    float density = uPtr(::g::Uno::Platform2::Display::MainDisplay())->Density();
    ::g::Uno::Float2 x = ::g::Uno::Float2__op_Division2(::g::Uno::Platform::SystemUI::TopFrame().Size(), ::g::Uno::Float2__New1(__this->AbsoluteZoom()));
    return *__retval = x, void();
    return *__retval = ::g::Uno::Float2__New2(0.0f, 0.0f), void();
}

// public generated TopFrameBackground New() :4363
void TopFrameBackground__New1_fn(TopFrameBackground** __retval)
{
    *__retval = TopFrameBackground::New1();
}

// private extern void OnFrameResized(object sender, Uno.Platform.SystemUIWillResizeEventArgs args) :4379
void TopFrameBackground__OnFrameResized_fn(TopFrameBackground* __this, uObject* sender, ::g::Uno::Platform::SystemUIWillResizeEventArgs* args)
{
    __this->OnFrameResized(sender, args);
}

// protected override sealed void OnRooted() :4365
void TopFrameBackground__OnRooted_fn(TopFrameBackground* __this)
{
    ::g::Fuse::Controls::Control__OnRooted_fn(__this);
    ::g::Uno::Platform::SystemUI::add_TopFrameWillResize(uDelegate::New(::TYPES[13/*Uno.EventHandler<Uno.Platform.SystemUIWillResizeEventArgs>*/], (void*)TopFrameBackground__OnFrameResized_fn, __this));
}

// protected override sealed void OnUnrooted() :4371
void TopFrameBackground__OnUnrooted_fn(TopFrameBackground* __this)
{
    ::g::Fuse::Controls::Control__OnUnrooted_fn(__this);
    ::g::Uno::Platform::SystemUI::remove_TopFrameWillResize(uDelegate::New(::TYPES[13/*Uno.EventHandler<Uno.Platform.SystemUIWillResizeEventArgs>*/], (void*)TopFrameBackground__OnFrameResized_fn, __this));
}

// public generated TopFrameBackground() [instance] :4363
void TopFrameBackground::ctor_3()
{
    ctor_2();
}

// private extern void OnFrameResized(object sender, Uno.Platform.SystemUIWillResizeEventArgs args) [instance] :4379
void TopFrameBackground::OnFrameResized(uObject* sender, ::g::Uno::Platform::SystemUIWillResizeEventArgs* args)
{
    InvalidateLayout(2);
}

// public generated TopFrameBackground New() [static] :4363
TopFrameBackground* TopFrameBackground::New1()
{
    TopFrameBackground* obj1 = (TopFrameBackground*)uNew(TopFrameBackground_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(2365)
// ------------------------------------------------------------

// public sealed class Video :2365
// {
// static Video() :2365
static void Video__cctor_4_fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret2;
    ::g::Fuse::StyleProperty1* ret3;
    ::g::Fuse::StyleProperty1* ret4;
    ::g::Fuse::StyleProperty1* ret5;
    ::g::Fuse::StyleProperty1* ret6;
    ::g::Fuse::StyleProperty1* ret7;
    ::g::Fuse::StyleProperty1* ret8;
    Video::IsLoopingProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[222/*Fuse.StyleProperty<Fuse.Controls.Video, bool>*/], uCRef(false), uDelegate::New(::TYPES[223/*Uno.Action<Fuse.Controls.Video>*/], (void*)Video__UpdateParam_fn), &ret2), ret2);
    Video::AutoPlayProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[222/*Fuse.StyleProperty<Fuse.Controls.Video, bool>*/], uCRef(false), uDelegate::New(::TYPES[223/*Uno.Action<Fuse.Controls.Video>*/], (void*)Video__UpdateParam_fn), &ret3), ret3);
    Video::StretchModeProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[224/*Fuse.StyleProperty<Fuse.Controls.Video, Fuse.Elements.StretchMode>*/], uCRef<int>(5), uDelegate::New(::TYPES[223/*Uno.Action<Fuse.Controls.Video>*/], (void*)Video__UpdateRenderParam_fn), &ret4), ret4);
    Video::StretchDirectionProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[225/*Fuse.StyleProperty<Fuse.Controls.Video, Fuse.Elements.StretchDirection>*/], uCRef<int>(0), uDelegate::New(::TYPES[223/*Uno.Action<Fuse.Controls.Video>*/], (void*)Video__UpdateRenderParam_fn), &ret5), ret5);
    Video::StretchSizingProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[226/*Fuse.StyleProperty<Fuse.Controls.Video, Fuse.Elements.StretchSizing>*/], uCRef<int>(1), uDelegate::New(::TYPES[223/*Uno.Action<Fuse.Controls.Video>*/], (void*)Video__UpdateRenderParam_fn), &ret6), ret6);
    Video::ContentAlignmentProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[227/*Fuse.StyleProperty<Fuse.Controls.Video, Fuse.Elements.Alignment>*/], uCRef<int>(10), uDelegate::New(::TYPES[223/*Uno.Action<Fuse.Controls.Video>*/], (void*)Video__UpdateRenderParam_fn), &ret7), ret7);
    Video::VolumeProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[228/*Fuse.StyleProperty<Fuse.Controls.Video, float>*/], uCRef(1.0f), uDelegate::New(::TYPES[223/*Uno.Action<Fuse.Controls.Video>*/], (void*)Video__UpdateParam_fn), &ret8), ret8);
}

Video_type* Video_typeof()
{
    static uSStrong<Video_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 117;
    options.InterfaceCount = 11;
    options.ObjectSize = sizeof(Video);
    options.TypeSize = sizeof(Video_type);
    type = (Video_type*)uClassType::New("Fuse.Controls.Video", options);
    type->SetBase(::g::Fuse::Controls::Panel_typeof());
    type->fp_ctor_ = (void*)Video__New2_fn;
    type->fp_cctor_ = Video__cctor_4_fn;
    type->interface8.fp_get_Volume = (void(*)(uObject*, float*))Video__get_Volume_fn;
    type->interface8.fp_set_Volume = (void(*)(uObject*, float*))Video__set_Volume_fn;
    type->interface8.fp_get_Position = (void(*)(uObject*, double*))Video__get_Position_fn;
    type->interface8.fp_set_Position = (void(*)(uObject*, double*))Video__set_Position_fn;
    type->interface8.fp_get_Duration = (void(*)(uObject*, double*))Video__get_Duration_fn;
    type->interface8.fp_get_Progress = (void(*)(uObject*, double*))Video__get_Progress_fn;
    type->interface8.fp_set_Progress = (void(*)(uObject*, double*))Video__set_Progress_fn;
    type->interface9.fp_Stop = (void(*)(uObject*))Video__Stop_fn;
    type->interface9.fp_PlayTo = (void(*)(uObject*, double*))Video__PlayTo_fn;
    type->interface9.fp_Pause = (void(*)(uObject*))Video__Pause_fn;
    type->interface9.fp_Resume = (void(*)(uObject*))Video__Resume_fn;
    type->interface9.fp_get_CanPlayTo = (void(*)(uObject*, bool*))Video__get_CanPlayTo_fn;
    type->interface9.fp_get_CanStop = (void(*)(uObject*, bool*))Video__get_CanStop_fn;
    type->interface9.fp_get_CanPause = (void(*)(uObject*, bool*))Video__get_CanPause_fn;
    type->interface9.fp_get_CanResume = (void(*)(uObject*, bool*))Video__get_CanResume_fn;
    type->interface10.fp_get_Progress = (void(*)(uObject*, double*))Video__get_Progress_fn;
    type->interface10.fp_add_ProgressChanged = (void(*)(uObject*, uDelegate*))Video__add_ProgressChanged_fn;
    type->interface10.fp_remove_ProgressChanged = (void(*)(uObject*, uDelegate*))Video__remove_ProgressChanged_fn;
    type->interface6.fp_AddChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChild_fn;
    type->interface6.fp_AddChildAt = (void(*)(uObject*, int*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChildAt_fn;
    type->interface6.fp_RemoveChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_RemoveChild_fn;
    type->interface6.fp_GetChild = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_GetChild_fn;
    type->interface7.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Add_fn;
    type->interface7.fp_Remove = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Remove_fn;
    type->interface6.fp_get_ChildCount = (void(*)(uObject*, int*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_get_ChildCount_fn;
    type->interface6.fp_get_Children = (void(*)(uObject*, uObject**))::g::Fuse::Controls::Panel__get_Children_fn;
    type->interface6.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__get_ActualSize_fn;
    type->interface6.fp_get_HasChildren = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__get_HasChildren_fn;
    type->interface6.fp_add_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildAdded_fn;
    type->interface6.fp_remove_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildAdded_fn;
    type->interface6.fp_add_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildRemoved_fn;
    type->interface6.fp_remove_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildRemoved_fn;
    type->interface6.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface6.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_add_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__add_Update_fn;
    type->interface6.fp_remove_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__remove_Update_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::TYPES[222] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Video_typeof(), ::g::Uno::Bool_typeof());
    ::TYPES[223] = ::g::Uno::Action1_typeof()->MakeType(Video_typeof());
    ::TYPES[224] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Video_typeof(), ::g::Fuse::Elements::StretchMode_typeof());
    ::TYPES[225] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Video_typeof(), ::g::Fuse::Elements::StretchDirection_typeof());
    ::TYPES[226] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Video_typeof(), ::g::Fuse::Elements::StretchSizing_typeof());
    ::TYPES[227] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Video_typeof(), ::g::Fuse::Elements::Alignment_typeof());
    ::TYPES[228] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Video_typeof(), ::g::Uno::Float_typeof());
    ::TYPES[17] = ::g::Uno::Delegate_typeof();
    ::TYPES[33] = ::g::Uno::EventHandler_typeof();
    ::TYPES[19] = uObject_typeof();
    ::TYPES[34] = ::g::Uno::EventArgs_typeof();
    ::TYPES[155] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof());
    ::TYPES[156] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Double_typeof());
    ::TYPES[229] = ::g::Fuse::Triggers::IPlayback_typeof();
    ::TYPES[230] = ::g::Fuse::Triggers::IMediaPlayback_typeof();
    ::TYPES[231] = ::g::Fuse::Triggers::IProgress_typeof();
    ::TYPES[22] = ::g::Uno::Bool_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(Video_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(Video_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(Video_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(Video_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(Video_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(Video_type, interface5),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(Video_type, interface6),
        ::g::Fuse::Triggers::IAddRemove_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(Video_type, interface7),
        ::g::Fuse::Triggers::IMediaPlayback_typeof(), offsetof(Video_type, interface8),
        ::g::Fuse::Triggers::IPlayback_typeof(), offsetof(Video_type, interface9),
        ::g::Fuse::Triggers::IProgress_typeof(), offsetof(Video_type, interface10));
    type->SetFields(100,
        ::g::Uno::UX::FileSource_typeof(), offsetof(::g::Fuse::Controls::Video, _file), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Video, _hasScale9Margin), 0,
        ::g::Fuse::Triggers::IMediaPlayback_typeof(), offsetof(::g::Fuse::Controls::Video, _playback), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Controls::Video, _scale9Margin), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Controls::Video, _url), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Controls::Video, ParamChanged1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Controls::Video, ProgressChanged1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Controls::Video, RenderParamChanged1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Controls::Video, SourceChanged1), 0,
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof()), offsetof(::g::Fuse::Controls::Video, ValueChanged1), 0,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Video_typeof(), ::g::Uno::Bool_typeof()), (uintptr_t)&::g::Fuse::Controls::Video::AutoPlayProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Video_typeof(), ::g::Fuse::Elements::Alignment_typeof()), (uintptr_t)&::g::Fuse::Controls::Video::ContentAlignmentProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Video_typeof(), ::g::Uno::Bool_typeof()), (uintptr_t)&::g::Fuse::Controls::Video::IsLoopingProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Video_typeof(), ::g::Fuse::Elements::StretchDirection_typeof()), (uintptr_t)&::g::Fuse::Controls::Video::StretchDirectionProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Video_typeof(), ::g::Fuse::Elements::StretchMode_typeof()), (uintptr_t)&::g::Fuse::Controls::Video::StretchModeProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Video_typeof(), ::g::Fuse::Elements::StretchSizing_typeof()), (uintptr_t)&::g::Fuse::Controls::Video::StretchSizingProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Video_typeof(), ::g::Uno::Float_typeof()), (uintptr_t)&::g::Fuse::Controls::Video::VolumeProperty_, uFieldFlagsStatic);
    type->Reflection.SetFields(7,
        new uField("AutoPlayProperty", 110),
        new uField("ContentAlignmentProperty", 111),
        new uField("IsLoopingProperty", 112),
        new uField("StretchDirectionProperty", 113),
        new uField("StretchModeProperty", 114),
        new uField("StretchSizingProperty", 115),
        new uField("VolumeProperty", 116));
    type->Reflection.SetFunctions(46,
        new uFunction("get_AutoPlay", NULL, (void*)Video__get_AutoPlay_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_AutoPlay", NULL, (void*)Video__set_AutoPlay_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_CanPause", NULL, (void*)Video__get_CanPause_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanPlayTo", NULL, (void*)Video__get_CanPlayTo_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanResume", NULL, (void*)Video__get_CanResume_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanStop", NULL, (void*)Video__get_CanStop_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_ContentAlignment", NULL, (void*)Video__get_ContentAlignment_fn, 0, false, ::g::Fuse::Elements::Alignment_typeof(), 0),
        new uFunction("set_ContentAlignment", NULL, (void*)Video__set_ContentAlignment_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::Alignment_typeof()),
        new uFunction("get_Duration", NULL, (void*)Video__get_Duration_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("get_File", NULL, (void*)Video__get_File_fn, 0, false, ::g::Uno::UX::FileSource_typeof(), 0),
        new uFunction("set_File", NULL, (void*)Video__set_File_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::FileSource_typeof()),
        new uFunction("get_IsLooping", NULL, (void*)Video__get_IsLooping_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsLooping", NULL, (void*)Video__set_IsLooping_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)Video__New2_fn, 0, true, Video_typeof(), 0),
        new uFunction("add_ParamChanged", NULL, (void*)Video__add_ParamChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_ParamChanged", NULL, (void*)Video__remove_ParamChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("Pause", NULL, (void*)Video__Pause_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("PlayTo", NULL, (void*)Video__PlayTo_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_Position", NULL, (void*)Video__get_Position_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Position", NULL, (void*)Video__set_Position_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_Progress", NULL, (void*)Video__get_Progress_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Progress", NULL, (void*)Video__set_Progress_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("add_ProgressChanged", NULL, (void*)Video__add_ProgressChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_ProgressChanged", NULL, (void*)Video__remove_ProgressChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("add_RenderParamChanged", NULL, (void*)Video__add_RenderParamChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_RenderParamChanged", NULL, (void*)Video__remove_RenderParamChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("Resume", NULL, (void*)Video__Resume_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Scale9Margin", NULL, (void*)Video__get_Scale9Margin_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_Scale9Margin", NULL, (void*)Video__set_Scale9Margin_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("SetPlayback", NULL, (void*)Video__SetPlayback_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::IMediaPlayback_typeof()),
        new uFunction("SetProgress", NULL, (void*)Video__SetProgress_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Double_typeof(), uObject_typeof()),
        new uFunction("add_SourceChanged", NULL, (void*)Video__add_SourceChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_SourceChanged", NULL, (void*)Video__remove_SourceChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("Stop", NULL, (void*)Video__Stop_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_StretchDirection", NULL, (void*)Video__get_StretchDirection_fn, 0, false, ::g::Fuse::Elements::StretchDirection_typeof(), 0),
        new uFunction("set_StretchDirection", NULL, (void*)Video__set_StretchDirection_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::StretchDirection_typeof()),
        new uFunction("get_StretchMode", NULL, (void*)Video__get_StretchMode_fn, 0, false, ::g::Fuse::Elements::StretchMode_typeof(), 0),
        new uFunction("set_StretchMode", NULL, (void*)Video__set_StretchMode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::StretchMode_typeof()),
        new uFunction("get_StretchSizing", NULL, (void*)Video__get_StretchSizing_fn, 0, false, ::g::Fuse::Elements::StretchSizing_typeof(), 0),
        new uFunction("set_StretchSizing", NULL, (void*)Video__set_StretchSizing_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::StretchSizing_typeof()),
        new uFunction("get_Url", NULL, (void*)Video__get_Url_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Url", NULL, (void*)Video__set_Url_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("add_ValueChanged", NULL, (void*)Video__add_ValueChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof())),
        new uFunction("remove_ValueChanged", NULL, (void*)Video__remove_ValueChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof())),
        new uFunction("get_Volume", NULL, (void*)Video__get_Volume_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Volume", NULL, (void*)Video__set_Volume_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
    return type;
}

// public generated Video() :2365
void Video__ctor_4_fn(Video* __this)
{
    __this->ctor_4();
}

// public bool get_AutoPlay() :2423
void Video__get_AutoPlay_fn(Video* __this, bool* __retval)
{
    *__retval = __this->AutoPlay();
}

// public void set_AutoPlay(bool value) :2424
void Video__set_AutoPlay_fn(Video* __this, bool* value)
{
    __this->AutoPlay(*value);
}

// public bool get_CanPause() :2553
void Video__get_CanPause_fn(Video* __this, bool* __retval)
{
    *__retval = __this->CanPause();
}

// public bool get_CanPlayTo() :2543
void Video__get_CanPlayTo_fn(Video* __this, bool* __retval)
{
    *__retval = __this->CanPlayTo();
}

// public bool get_CanResume() :2558
void Video__get_CanResume_fn(Video* __this, bool* __retval)
{
    *__retval = __this->CanResume();
}

// public bool get_CanStop() :2548
void Video__get_CanStop_fn(Video* __this, bool* __retval)
{
    *__retval = __this->CanStop();
}

// public Fuse.Elements.Alignment get_ContentAlignment() :2451
void Video__get_ContentAlignment_fn(Video* __this, int* __retval)
{
    *__retval = __this->ContentAlignment();
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value) :2452
void Video__set_ContentAlignment_fn(Video* __this, int* value)
{
    __this->ContentAlignment(*value);
}

// public double get_Duration() :2576
void Video__get_Duration_fn(Video* __this, double* __retval)
{
    *__retval = __this->Duration();
}

// public Uno.UX.FileSource get_File() :2371
void Video__get_File_fn(Video* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public void set_File(Uno.UX.FileSource value) :2372
void Video__set_File_fn(Video* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// public bool get_IsLooping() :2416
void Video__get_IsLooping_fn(Video* __this, bool* __retval)
{
    *__retval = __this->IsLooping();
}

// public void set_IsLooping(bool value) :2417
void Video__set_IsLooping_fn(Video* __this, bool* value)
{
    __this->IsLooping(*value);
}

// public generated Video New() :2365
void Video__New2_fn(Video** __retval)
{
    *__retval = Video::New2();
}

// private void OnParamChanged() :2505
void Video__OnParamChanged_fn(Video* __this)
{
    __this->OnParamChanged();
}

// private void OnProgressChanged(object sender, Uno.EventArgs args) :2601
void Video__OnProgressChanged_fn(Video* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnProgressChanged(sender, args);
}

// private void OnRenderParamChanged() :2499
void Video__OnRenderParamChanged_fn(Video* __this)
{
    __this->OnRenderParamChanged();
}

// private void OnSourceChanged() :2511
void Video__OnSourceChanged_fn(Video* __this)
{
    __this->OnSourceChanged();
}

// public generated void add_ParamChanged(Uno.EventHandler value) :2495
void Video__add_ParamChanged_fn(Video* __this, uDelegate* value)
{
    __this->add_ParamChanged(value);
}

// public generated void remove_ParamChanged(Uno.EventHandler value) :2495
void Video__remove_ParamChanged_fn(Video* __this, uDelegate* value)
{
    __this->remove_ParamChanged(value);
}

// public void Pause() :2529
void Video__Pause_fn(Video* __this)
{
    __this->Pause();
}

// private Fuse.Triggers.IMediaPlayback get_Playback() :2586
void Video__get_Playback_fn(Video* __this, uObject** __retval)
{
    *__retval = __this->Playback();
}

// private void set_Playback(Fuse.Triggers.IMediaPlayback value) :2587
void Video__set_Playback_fn(Video* __this, uObject* value)
{
    __this->Playback(value);
}

// public void PlayTo(double progress) :2523
void Video__PlayTo_fn(Video* __this, double* progress)
{
    __this->PlayTo(*progress);
}

// public double get_Position() :2570
void Video__get_Position_fn(Video* __this, double* __retval)
{
    *__retval = __this->Position();
}

// public void set_Position(double value) :2571
void Video__set_Position_fn(Video* __this, double* value)
{
    __this->Position(*value);
}

// public double get_Progress() :2564
void Video__get_Progress_fn(Video* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public void set_Progress(double value) :2565
void Video__set_Progress_fn(Video* __this, double* value)
{
    __this->Progress(*value);
}

// public generated void add_ProgressChanged(Uno.EventHandler value) :2581
void Video__add_ProgressChanged_fn(Video* __this, uDelegate* value)
{
    __this->add_ProgressChanged(value);
}

// public generated void remove_ProgressChanged(Uno.EventHandler value) :2581
void Video__remove_ProgressChanged_fn(Video* __this, uDelegate* value)
{
    __this->remove_ProgressChanged(value);
}

// public generated void add_RenderParamChanged(Uno.EventHandler value) :2493
void Video__add_RenderParamChanged_fn(Video* __this, uDelegate* value)
{
    __this->add_RenderParamChanged(value);
}

// public generated void remove_RenderParamChanged(Uno.EventHandler value) :2493
void Video__remove_RenderParamChanged_fn(Video* __this, uDelegate* value)
{
    __this->remove_RenderParamChanged(value);
}

// public void Resume() :2535
void Video__Resume_fn(Video* __this)
{
    __this->Resume();
}

// public float4 get_Scale9Margin() :2401
void Video__get_Scale9Margin_fn(Video* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Scale9Margin();
}

// public void set_Scale9Margin(float4 value) :2402
void Video__set_Scale9Margin_fn(Video* __this, ::g::Uno::Float4* value)
{
    __this->Scale9Margin(*value);
}

// public void SetPlayback(Fuse.Triggers.IMediaPlayback playback) :2610
void Video__SetPlayback_fn(Video* __this, uObject* playback)
{
    __this->SetPlayback(playback);
}

// public void SetProgress(double value, object origin) :2615
void Video__SetProgress_fn(Video* __this, double* value, uObject* origin)
{
    __this->SetProgress(*value, origin);
}

// public generated void add_SourceChanged(Uno.EventHandler value) :2497
void Video__add_SourceChanged_fn(Video* __this, uDelegate* value)
{
    __this->add_SourceChanged(value);
}

// public generated void remove_SourceChanged(Uno.EventHandler value) :2497
void Video__remove_SourceChanged_fn(Video* __this, uDelegate* value)
{
    __this->remove_SourceChanged(value);
}

// public void Stop() :2517
void Video__Stop_fn(Video* __this)
{
    __this->Stop();
}

// public Fuse.Elements.StretchDirection get_StretchDirection() :2437
void Video__get_StretchDirection_fn(Video* __this, int* __retval)
{
    *__retval = __this->StretchDirection();
}

// public void set_StretchDirection(Fuse.Elements.StretchDirection value) :2438
void Video__set_StretchDirection_fn(Video* __this, int* value)
{
    __this->StretchDirection(*value);
}

// public Fuse.Elements.StretchMode get_StretchMode() :2430
void Video__get_StretchMode_fn(Video* __this, int* __retval)
{
    *__retval = __this->StretchMode();
}

// public void set_StretchMode(Fuse.Elements.StretchMode value) :2431
void Video__set_StretchMode_fn(Video* __this, int* value)
{
    __this->StretchMode(*value);
}

// public Fuse.Elements.StretchSizing get_StretchSizing() :2444
void Video__get_StretchSizing_fn(Video* __this, int* __retval)
{
    *__retval = __this->StretchSizing();
}

// public void set_StretchSizing(Fuse.Elements.StretchSizing value) :2445
void Video__set_StretchSizing_fn(Video* __this, int* value)
{
    __this->StretchSizing(*value);
}

// private static void UpdateParam(Fuse.Controls.Video video) :2483
void Video__UpdateParam_fn(Video* video)
{
    Video::UpdateParam(video);
}

// private static void UpdateRenderParam(Fuse.Controls.Video video) :2488
void Video__UpdateRenderParam_fn(Video* video)
{
    Video::UpdateRenderParam(video);
}

// public string get_Url() :2385
void Video__get_Url_fn(Video* __this, uString** __retval)
{
    *__retval = __this->Url();
}

// public void set_Url(string value) :2386
void Video__set_Url_fn(Video* __this, uString* value)
{
    __this->Url(value);
}

// public generated void add_ValueChanged(Uno.UX.ValueChangedHandler<double> value) :2579
void Video__add_ValueChanged_fn(Video* __this, uDelegate* value)
{
    __this->add_ValueChanged(value);
}

// public generated void remove_ValueChanged(Uno.UX.ValueChangedHandler<double> value) :2579
void Video__remove_ValueChanged_fn(Video* __this, uDelegate* value)
{
    __this->remove_ValueChanged(value);
}

// public float get_Volume() :2458
void Video__get_Volume_fn(Video* __this, float* __retval)
{
    *__retval = __this->Volume();
}

// public void set_Volume(float value) :2459
void Video__set_Volume_fn(Video* __this, float* value)
{
    __this->Volume(*value);
}

uSStrong< ::g::Fuse::StyleProperty1*> Video::AutoPlayProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Video::ContentAlignmentProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Video::IsLoopingProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Video::StretchDirectionProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Video::StretchModeProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Video::StretchSizingProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Video::VolumeProperty_;

// public generated Video() [instance] :2365
void Video::ctor_4()
{
    _scale9Margin = ::g::Uno::Float4__New1(10.0f);
    ctor_3();
}

// public bool get_AutoPlay() [instance] :2423
bool Video::AutoPlay()
{
    bool ret10;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Video::AutoPlayProperty()), this, &ret10), ret10);
}

// public void set_AutoPlay(bool value) [instance] :2424
void Video::AutoPlay(bool value)
{
    bool ret11;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Video::AutoPlayProperty()), this, uCRef(value), &ret11);
}

// public bool get_CanPause() [instance] :2553
bool Video::CanPause()
{
    return (Playback() != NULL) ? ::g::Fuse::Triggers::IPlayback::CanPause(uInterface(uPtr(Playback()), ::TYPES[229/*Fuse.Triggers.IPlayback*/])) : false;
}

// public bool get_CanPlayTo() [instance] :2543
bool Video::CanPlayTo()
{
    return (Playback() != NULL) ? ::g::Fuse::Triggers::IPlayback::CanPlayTo(uInterface(uPtr(Playback()), ::TYPES[229/*Fuse.Triggers.IPlayback*/])) : false;
}

// public bool get_CanResume() [instance] :2558
bool Video::CanResume()
{
    return (Playback() != NULL) ? ::g::Fuse::Triggers::IPlayback::CanResume(uInterface(uPtr(Playback()), ::TYPES[229/*Fuse.Triggers.IPlayback*/])) : false;
}

// public bool get_CanStop() [instance] :2548
bool Video::CanStop()
{
    return (Playback() != NULL) ? ::g::Fuse::Triggers::IPlayback::CanStop(uInterface(uPtr(Playback()), ::TYPES[229/*Fuse.Triggers.IPlayback*/])) : false;
}

// public Fuse.Elements.Alignment get_ContentAlignment() [instance] :2451
int Video::ContentAlignment()
{
    int ret12;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Video::ContentAlignmentProperty()), this, &ret12), ret12);
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value) [instance] :2452
void Video::ContentAlignment(int value)
{
    bool ret13;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Video::ContentAlignmentProperty()), this, uCRef<int>(value), &ret13);
}

// public double get_Duration() [instance] :2576
double Video::Duration()
{
    return (Playback() != NULL) ? ::g::Fuse::Triggers::IMediaPlayback::Duration(uInterface(uPtr(Playback()), ::TYPES[230/*Fuse.Triggers.IMediaPlayback*/])) : 0.0;
}

// public Uno.UX.FileSource get_File() [instance] :2371
::g::Uno::UX::FileSource* Video::File()
{
    return _file;
}

// public void set_File(Uno.UX.FileSource value) [instance] :2372
void Video::File(::g::Uno::UX::FileSource* value)
{
    if (_file != value)
    {
        _file = value;
        OnSourceChanged();
    }
}

// public bool get_IsLooping() [instance] :2416
bool Video::IsLooping()
{
    bool ret14;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Video::IsLoopingProperty()), this, &ret14), ret14);
}

// public void set_IsLooping(bool value) [instance] :2417
void Video::IsLooping(bool value)
{
    bool ret15;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Video::IsLoopingProperty()), this, uCRef(value), &ret15);
}

// private void OnParamChanged() [instance] :2505
void Video::OnParamChanged()
{
    if (::g::Uno::Delegate::op_Inequality(ParamChanged1, NULL))
        uPtr(ParamChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private void OnProgressChanged(object sender, Uno.EventArgs args) [instance] :2601
void Video::OnProgressChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    ::g::Uno::UX::ValueChangedArgs* ret9;

    if (::g::Uno::Delegate::op_Inequality(ValueChanged1, NULL))
        uPtr(ValueChanged1)->Invoke(2, this, (::g::Uno::UX::ValueChangedArgs__New2_fn(::TYPES[156/*Uno.UX.ValueChangedArgs<double>*/], uCRef(Progress()), this, &ret9), ret9));

    if (::g::Uno::Delegate::op_Inequality(ProgressChanged1, NULL))
        uPtr(ProgressChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private void OnRenderParamChanged() [instance] :2499
void Video::OnRenderParamChanged()
{
    if (::g::Uno::Delegate::op_Inequality(RenderParamChanged1, NULL))
        uPtr(RenderParamChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private void OnSourceChanged() [instance] :2511
void Video::OnSourceChanged()
{
    if (::g::Uno::Delegate::op_Inequality(SourceChanged1, NULL))
        uPtr(SourceChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// public generated void add_ParamChanged(Uno.EventHandler value) [instance] :2495
void Video::add_ParamChanged(uDelegate* value)
{
    ParamChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ParamChanged1, value), ::TYPES[33/*Uno.EventHandler*/]);
}

// public generated void remove_ParamChanged(Uno.EventHandler value) [instance] :2495
void Video::remove_ParamChanged(uDelegate* value)
{
    ParamChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ParamChanged1, value), ::TYPES[33/*Uno.EventHandler*/]);
}

// public void Pause() [instance] :2529
void Video::Pause()
{
    if (Playback() != NULL)
        ::g::Fuse::Triggers::IPlayback::Pause(uInterface(uPtr(Playback()), ::TYPES[229/*Fuse.Triggers.IPlayback*/]));
}

// private Fuse.Triggers.IMediaPlayback get_Playback() [instance] :2586
uObject* Video::Playback()
{
    return _playback;
}

// private void set_Playback(Fuse.Triggers.IMediaPlayback value) [instance] :2587
void Video::Playback(uObject* value)
{
    if (_playback != NULL)
        ::g::Fuse::Triggers::IProgress::remove_ProgressChanged(uInterface(uPtr(_playback), ::TYPES[231/*Fuse.Triggers.IProgress*/]), uDelegate::New(::TYPES[33/*Uno.EventHandler*/], (void*)Video__OnProgressChanged_fn, this));

    _playback = value;

    if (_playback != NULL)
        ::g::Fuse::Triggers::IProgress::add_ProgressChanged(uInterface(uPtr(_playback), ::TYPES[231/*Fuse.Triggers.IProgress*/]), uDelegate::New(::TYPES[33/*Uno.EventHandler*/], (void*)Video__OnProgressChanged_fn, this));

    OnProgressChanged(NULL, NULL);
}

// public void PlayTo(double progress) [instance] :2523
void Video::PlayTo(double progress)
{
    if (Playback() != NULL)
        ::g::Fuse::Triggers::IPlayback::PlayTo(uInterface(uPtr(Playback()), ::TYPES[229/*Fuse.Triggers.IPlayback*/]), progress);
}

// public double get_Position() [instance] :2570
double Video::Position()
{
    return (Playback() != NULL) ? ::g::Fuse::Triggers::IMediaPlayback::Position(uInterface(uPtr(Playback()), ::TYPES[230/*Fuse.Triggers.IMediaPlayback*/])) : 0.0;
}

// public void set_Position(double value) [instance] :2571
void Video::Position(double value)
{
    if (Playback() != NULL)
        ::g::Fuse::Triggers::IMediaPlayback::Position(uInterface(uPtr(Playback()), ::TYPES[230/*Fuse.Triggers.IMediaPlayback*/]), value);
}

// public double get_Progress() [instance] :2564
double Video::Progress()
{
    return (Playback() != NULL) ? ::g::Fuse::Triggers::IMediaPlayback::Progress(uInterface(uPtr(Playback()), ::TYPES[230/*Fuse.Triggers.IMediaPlayback*/])) : 0.0;
}

// public void set_Progress(double value) [instance] :2565
void Video::Progress(double value)
{
    if (Playback() != NULL)
        ::g::Fuse::Triggers::IMediaPlayback::Progress(uInterface(uPtr(Playback()), ::TYPES[230/*Fuse.Triggers.IMediaPlayback*/]), value);
}

// public generated void add_ProgressChanged(Uno.EventHandler value) [instance] :2581
void Video::add_ProgressChanged(uDelegate* value)
{
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ProgressChanged1, value), ::TYPES[33/*Uno.EventHandler*/]);
}

// public generated void remove_ProgressChanged(Uno.EventHandler value) [instance] :2581
void Video::remove_ProgressChanged(uDelegate* value)
{
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ProgressChanged1, value), ::TYPES[33/*Uno.EventHandler*/]);
}

// public generated void add_RenderParamChanged(Uno.EventHandler value) [instance] :2493
void Video::add_RenderParamChanged(uDelegate* value)
{
    RenderParamChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(RenderParamChanged1, value), ::TYPES[33/*Uno.EventHandler*/]);
}

// public generated void remove_RenderParamChanged(Uno.EventHandler value) [instance] :2493
void Video::remove_RenderParamChanged(uDelegate* value)
{
    RenderParamChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(RenderParamChanged1, value), ::TYPES[33/*Uno.EventHandler*/]);
}

// public void Resume() [instance] :2535
void Video::Resume()
{
    if (Playback() != NULL)
        ::g::Fuse::Triggers::IPlayback::Resume(uInterface(uPtr(Playback()), ::TYPES[229/*Fuse.Triggers.IPlayback*/]));
}

// public float4 get_Scale9Margin() [instance] :2401
::g::Uno::Float4 Video::Scale9Margin()
{
    return _scale9Margin;
}

// public void set_Scale9Margin(float4 value) [instance] :2402
void Video::Scale9Margin(::g::Uno::Float4 value)
{
    if (!_hasScale9Margin || ::g::Uno::Float4::op_Inequality(_scale9Margin, value))
    {
        _scale9Margin = value;
        _hasScale9Margin = true;
        OnParamChanged();
    }
}

// public void SetPlayback(Fuse.Triggers.IMediaPlayback playback) [instance] :2610
void Video::SetPlayback(uObject* playback)
{
    Playback(playback);
}

// public void SetProgress(double value, object origin) [instance] :2615
void Video::SetProgress(double value, uObject* origin)
{
    if (origin != this)
        Progress(value);
}

// public generated void add_SourceChanged(Uno.EventHandler value) [instance] :2497
void Video::add_SourceChanged(uDelegate* value)
{
    SourceChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(SourceChanged1, value), ::TYPES[33/*Uno.EventHandler*/]);
}

// public generated void remove_SourceChanged(Uno.EventHandler value) [instance] :2497
void Video::remove_SourceChanged(uDelegate* value)
{
    SourceChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(SourceChanged1, value), ::TYPES[33/*Uno.EventHandler*/]);
}

// public void Stop() [instance] :2517
void Video::Stop()
{
    if (Playback() != NULL)
        ::g::Fuse::Triggers::IPlayback::Stop(uInterface(uPtr(Playback()), ::TYPES[229/*Fuse.Triggers.IPlayback*/]));
}

// public Fuse.Elements.StretchDirection get_StretchDirection() [instance] :2437
int Video::StretchDirection()
{
    int ret16;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Video::StretchDirectionProperty()), this, &ret16), ret16);
}

// public void set_StretchDirection(Fuse.Elements.StretchDirection value) [instance] :2438
void Video::StretchDirection(int value)
{
    bool ret17;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Video::StretchDirectionProperty()), this, uCRef<int>(value), &ret17);
}

// public Fuse.Elements.StretchMode get_StretchMode() [instance] :2430
int Video::StretchMode()
{
    int ret18;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Video::StretchModeProperty()), this, &ret18), ret18);
}

// public void set_StretchMode(Fuse.Elements.StretchMode value) [instance] :2431
void Video::StretchMode(int value)
{
    bool ret19;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Video::StretchModeProperty()), this, uCRef<int>(value), &ret19);
}

// public Fuse.Elements.StretchSizing get_StretchSizing() [instance] :2444
int Video::StretchSizing()
{
    int ret20;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Video::StretchSizingProperty()), this, &ret20), ret20);
}

// public void set_StretchSizing(Fuse.Elements.StretchSizing value) [instance] :2445
void Video::StretchSizing(int value)
{
    bool ret21;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Video::StretchSizingProperty()), this, uCRef<int>(value), &ret21);
}

// public string get_Url() [instance] :2385
uString* Video::Url()
{
    return _url;
}

// public void set_Url(string value) [instance] :2386
void Video::Url(uString* value)
{
    if (::g::Uno::String::op_Inequality(_url, value))
    {
        _url = value;
        OnSourceChanged();
    }
}

// public generated void add_ValueChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :2579
void Video::add_ValueChanged(uDelegate* value)
{
    ValueChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ValueChanged1, value), ::TYPES[155/*Uno.UX.ValueChangedHandler<double>*/]);
}

// public generated void remove_ValueChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :2579
void Video::remove_ValueChanged(uDelegate* value)
{
    ValueChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ValueChanged1, value), ::TYPES[155/*Uno.UX.ValueChangedHandler<double>*/]);
}

// public float get_Volume() [instance] :2458
float Video::Volume()
{
    float ret22;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Video::VolumeProperty()), this, &ret22), ret22);
}

// public void set_Volume(float value) [instance] :2459
void Video::Volume(float value)
{
    bool ret23;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Video::VolumeProperty()), this, uCRef(value), &ret23);
}

// public generated Video New() [static] :2365
Video* Video::New2()
{
    Video* obj1 = (Video*)uNew(Video_typeof());
    obj1->ctor_4();
    return obj1;
}

// private static void UpdateParam(Fuse.Controls.Video video) [static] :2483
void Video::UpdateParam(Video* video)
{
    Video_typeof()->Init();
    uPtr(video)->OnParamChanged();
}

// private static void UpdateRenderParam(Fuse.Controls.Video video) [static] :2488
void Video::UpdateRenderParam(Video* video)
{
    Video_typeof()->Init();
    uPtr(video)->OnRenderParamChanged();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(4409)
// ------------------------------------------------------------

// public sealed class Viewbox :4409
// {
::g::Fuse::Controls::ContentControl_type* Viewbox_typeof()
{
    static uSStrong< ::g::Fuse::Controls::ContentControl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 92;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(Viewbox);
    options.TypeSize = sizeof(::g::Fuse::Controls::ContentControl_type);
    type = (::g::Fuse::Controls::ContentControl_type*)uClassType::New("Fuse.Controls.Viewbox", options);
    type->SetBase(::g::Fuse::Controls::ContentControl_typeof());
    type->fp_ctor_ = (void*)Viewbox__New2_fn;
    type->fp_ArrangePaddingBox = (void(*)(::g::Fuse::Elements::Element*, ::g::Uno::Float2*, int*))Viewbox__ArrangePaddingBox_fn;
    type->fp_GetContentSize = (void(*)(::g::Fuse::Elements::Element*, ::g::Uno::Float2*, int*, ::g::Uno::Float2*))Viewbox__GetContentSize_fn;
    type->fp_OnApplyStyle = (void(*)(::g::Fuse::Node*, uObject*))Viewbox__OnApplyStyle_fn;
    type->fp_PrependImplicitTransform = (void(*)(::g::Fuse::Node*, ::g::Fuse::FastMatrix*))Viewbox__PrependImplicitTransform_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::TYPES[141] = ::g::Fuse::Internal::SizingContainer_typeof();
    ::TYPES[21] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[9] = ::g::Uno::Float2_typeof();
    ::TYPES[25] = ::g::Fuse::SizeFlags_typeof();
    ::TYPES[26] = ::g::Uno::Int_typeof();
    ::TYPES[22] = ::g::Uno::Bool_typeof();
    ::TYPES[142] = ::g::Fuse::Controls::ContentControl_typeof();
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::ContentControl_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::ContentControl_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::ContentControl_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::ContentControl_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::ContentControl_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::ContentControl_type, interface5));
    type->SetFields(90,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::Viewbox, _scale), 0,
        ::g::Fuse::Internal::SizingContainer_typeof(), offsetof(::g::Fuse::Controls::Viewbox, sizing), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_Content", NULL, (void*)Viewbox__get_Content1_fn, 0, false, ::g::Fuse::Elements::Element_typeof(), 0),
        new uFunction("set_Content", NULL, (void*)Viewbox__set_Content1_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::Element_typeof()),
        new uFunction(".ctor", NULL, (void*)Viewbox__New2_fn, 0, true, Viewbox_typeof(), 0),
        new uFunction("get_StretchDirection", NULL, (void*)Viewbox__get_StretchDirection_fn, 0, false, ::g::Fuse::Elements::StretchDirection_typeof(), 0),
        new uFunction("set_StretchDirection", NULL, (void*)Viewbox__set_StretchDirection_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::StretchDirection_typeof()),
        new uFunction("get_StretchMode", NULL, (void*)Viewbox__get_StretchMode_fn, 0, false, ::g::Fuse::Elements::StretchMode_typeof(), 0),
        new uFunction("set_StretchMode", NULL, (void*)Viewbox__set_StretchMode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::StretchMode_typeof()));
    return type;
}

// public generated Viewbox() :4409
void Viewbox__ctor_4_fn(Viewbox* __this)
{
    __this->ctor_4();
}

// protected override sealed void ArrangePaddingBox(float2 size, Fuse.SizeFlags flags) :4464
void Viewbox__ArrangePaddingBox_fn(Viewbox* __this, ::g::Uno::Float2* size, int* flags)
{
    ::g::Uno::Float2 size_ = *size;
    int flags_ = *flags;
    uPtr(__this->sizing)->padding = __this->Padding();

    if (__this->Content1() != NULL)
        uPtr(__this->sizing)->align = uPtr(__this->Content1())->Alignment();

    ::g::Uno::Float2 contentDesiredSize = __this->GetNaturalContentSize();
    __this->_scale = uPtr(__this->sizing)->CalcScale(size_, contentDesiredSize);
    __this->InvalidateLocalTransform();
    ::g::Uno::Float2 origin = uPtr(__this->sizing)->CalcOrigin(size_, ::g::Uno::Float2__op_Multiply2(contentDesiredSize, __this->_scale));

    if ((__this->_scale.X > 1e-05f) && (__this->_scale.Y > 1e-05f))
        origin = ::g::Uno::Float2__op_Division2(origin, __this->_scale);

    if (__this->Content1() != NULL)
        uPtr(__this->Content1())->ArrangeMarginBox(origin, contentDesiredSize, 3 | flags_);
}

// public new Fuse.Elements.Element get_Content() :4414
void Viewbox__get_Content1_fn(Viewbox* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->Content1();
}

// public new void set_Content(Fuse.Elements.Element value) :4415
void Viewbox__set_Content1_fn(Viewbox* __this, ::g::Fuse::Elements::Element* value)
{
    __this->Content1(value);
}

// protected override sealed float2 GetContentSize(float2 fillSize, Fuse.SizeFlags fillSet) :4456
void Viewbox__GetContentSize_fn(Viewbox* __this, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 fillSize_ = *fillSize;
    int fillSet_ = *fillSet;
    ::g::Uno::Float2 natural = __this->GetNaturalContentSize();
    uPtr(__this->sizing)->padding = ::g::Uno::Float4__New1(0.0f);
    ::g::Uno::Float2 r = uPtr(__this->sizing)->ExpandFillSize(natural, fillSize_, fillSet_);
    return *__retval = r, void();
}

// protected float2 GetNaturalContentSize() :4451
void Viewbox__GetNaturalContentSize_fn(Viewbox* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetNaturalContentSize();
}

// public generated Viewbox New() :4409
void Viewbox__New2_fn(Viewbox** __retval)
{
    *__retval = Viewbox::New2();
}

// protected override sealed void OnApplyStyle(object target) :4498
void Viewbox__OnApplyStyle_fn(Viewbox* __this, uObject* target)
{
    bool ret2;
    bool ret3;
    bool ret4;
    bool ret5;
    ::g::Fuse::Node__OnApplyStyle_fn(__this, target);
    ::g::Fuse::Elements::Element* elm = __this->Content1();

    if (target != elm)
        return;

    if (!(::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::MaxWidthProperty()), elm, &ret2), ret2))
        ::g::Fuse::StylePropertyWithUnit__SetStyle1_fn(uPtr(::g::Fuse::Elements::Element::MaxWidthProperty()), elm, uCRef(FLT_INF), uCRef<int>(1), &ret3);

    if (!(::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Elements::Element::MaxHeightProperty()), elm, &ret4), ret4))
        ::g::Fuse::StylePropertyWithUnit__SetStyle1_fn(uPtr(::g::Fuse::Elements::Element::MaxHeightProperty()), elm, uCRef(FLT_INF), uCRef<int>(1), &ret5);
}

// private void OnSizingChanged() :4442
void Viewbox__OnSizingChanged_fn(Viewbox* __this)
{
    __this->OnSizingChanged();
}

// protected override sealed void PrependImplicitTransform(Fuse.FastMatrix m) :4489
void Viewbox__PrependImplicitTransform_fn(Viewbox* __this, ::g::Fuse::FastMatrix* m)
{
    ::g::Fuse::Elements::Element__PrependImplicitTransform_fn(__this, m);

    if (::g::Uno::Vector::Length(__this->_scale) > 1e-05f)
        uPtr(m)->PrependScale1(::g::Uno::Float3__New2(__this->_scale.X, __this->_scale.Y, 1.0f));
}

// public Fuse.Elements.StretchDirection get_StretchDirection() :4434
void Viewbox__get_StretchDirection_fn(Viewbox* __this, int* __retval)
{
    *__retval = __this->StretchDirection();
}

// public void set_StretchDirection(Fuse.Elements.StretchDirection value) :4435
void Viewbox__set_StretchDirection_fn(Viewbox* __this, int* value)
{
    __this->StretchDirection(*value);
}

// public Fuse.Elements.StretchMode get_StretchMode() :4423
void Viewbox__get_StretchMode_fn(Viewbox* __this, int* __retval)
{
    *__retval = __this->StretchMode();
}

// public void set_StretchMode(Fuse.Elements.StretchMode value) :4424
void Viewbox__set_StretchMode_fn(Viewbox* __this, int* value)
{
    __this->StretchMode(*value);
}

// public generated Viewbox() [instance] :4409
void Viewbox::ctor_4()
{
    sizing = ::g::Fuse::Internal::SizingContainer::New1();
    _scale = ::g::Uno::Float2__New1(1.0f);
    ctor_3();
}

// public new Fuse.Elements.Element get_Content() [instance] :4414
::g::Fuse::Elements::Element* Viewbox::Content1()
{
    return uAs< ::g::Fuse::Elements::Element*>(Content(), ::TYPES[21/*Fuse.Elements.Element*/]);
}

// public new void set_Content(Fuse.Elements.Element value) [instance] :4415
void Viewbox::Content1(::g::Fuse::Elements::Element* value)
{
    Content(value);
}

// protected float2 GetNaturalContentSize() [instance] :4451
::g::Uno::Float2 Viewbox::GetNaturalContentSize()
{
    return (Content1() == NULL) ? ::g::Uno::Float2__New1(0.0f) : uPtr(Content1())->GetMarginSize(::g::Uno::Float2__New1(0.0f), 0);
}

// private void OnSizingChanged() [instance] :4442
void Viewbox::OnSizingChanged()
{
    InvalidateLayout(2);
    InvalidateVisualComposition();
}

// public Fuse.Elements.StretchDirection get_StretchDirection() [instance] :4434
int Viewbox::StretchDirection()
{
    return uPtr(sizing)->stretchDirection;
}

// public void set_StretchDirection(Fuse.Elements.StretchDirection value) [instance] :4435
void Viewbox::StretchDirection(int value)
{
    if (uPtr(sizing)->SetStretchDirection(value))
        OnSizingChanged();
}

// public Fuse.Elements.StretchMode get_StretchMode() [instance] :4423
int Viewbox::StretchMode()
{
    return uPtr(sizing)->stretchMode;
}

// public void set_StretchMode(Fuse.Elements.StretchMode value) [instance] :4424
void Viewbox::StretchMode(int value)
{
    if (uPtr(sizing)->SetStretchMode(value))
        OnSizingChanged();
}

// public generated Viewbox New() [static] :4409
Viewbox* Viewbox::New2()
{
    Viewbox* obj1 = (Viewbox*)uNew(Viewbox_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\WebView\$.uno(58)
// ------------------------------------------------------------------

// public sealed class WebView :58
// {
WebView_type* WebView_typeof()
{
    static uSStrong<WebView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 106;
    options.InterfaceCount = 12;
    options.ObjectSize = sizeof(WebView);
    options.TypeSize = sizeof(WebView_type);
    type = (WebView_type*)uClassType::New("Fuse.Controls.WebView", options);
    type->SetBase(::g::Fuse::Controls::Panel_typeof());
    type->fp_ctor_ = (void*)WebView__New2_fn;
    type->interface8.fp_Eval1 = (void(*)(uObject*, uString*, uDelegate*))WebView__Eval1_fn;
    type->interface8.fp_Eval = (void(*)(uObject*, uString*))WebView__Eval_fn;
    type->interface8.fp_LoadHtml = (void(*)(uObject*, uString*))WebView__LoadHtml_fn;
    type->interface8.fp_LoadHtml1 = (void(*)(uObject*, uString*, uString*))WebView__LoadHtml1_fn;
    type->interface8.fp_LoadUrl = (void(*)(uObject*, uString*))WebView__LoadUrl_fn;
    type->interface8.fp_Stop = (void(*)(uObject*))WebView__Stop_fn;
    type->interface8.fp_Reload = (void(*)(uObject*))WebView__Reload_fn;
    type->interface8.fp_get_BaseUrl = (void(*)(uObject*, uString**))WebView__get_BaseUrl_fn;
    type->interface8.fp_set_BaseUrl = (void(*)(uObject*, uString*))WebView__set_BaseUrl_fn;
    type->interface8.fp_get_Url = (void(*)(uObject*, uString**))WebView__get_Url_fn;
    type->interface8.fp_set_Url = (void(*)(uObject*, uString*))WebView__set_Url_fn;
    type->interface8.fp_get_DocumentTitle = (void(*)(uObject*, uString**))WebView__get_DocumentTitle_fn;
    type->interface8.fp_get_File = (void(*)(uObject*, ::g::Uno::UX::FileSource**))WebView__get_File_fn;
    type->interface8.fp_set_File = (void(*)(uObject*, ::g::Uno::UX::FileSource*))WebView__set_File_fn;
    type->interface8.fp_add_PageLoaded = (void(*)(uObject*, uDelegate*))WebView__add_PageLoaded_fn;
    type->interface8.fp_remove_PageLoaded = (void(*)(uObject*, uDelegate*))WebView__remove_PageLoaded_fn;
    type->interface8.fp_add_BeginLoading = (void(*)(uObject*, uDelegate*))WebView__add_BeginLoading_fn;
    type->interface8.fp_remove_BeginLoading = (void(*)(uObject*, uDelegate*))WebView__remove_BeginLoading_fn;
    type->interface9.fp_get_Progress = (void(*)(uObject*, double*))WebView__get_Progress_fn;
    type->interface9.fp_add_ProgressChanged = (void(*)(uObject*, uDelegate*))WebView__add_ProgressChanged_fn;
    type->interface9.fp_remove_ProgressChanged = (void(*)(uObject*, uDelegate*))WebView__remove_ProgressChanged_fn;
    type->interface10.fp_GoForward = (void(*)(uObject*))WebView__GoForward_fn;
    type->interface10.fp_GoBack = (void(*)(uObject*))WebView__GoBack_fn;
    type->interface10.fp_get_CanGoBack = (void(*)(uObject*, bool*))WebView__get_CanGoBack_fn;
    type->interface10.fp_get_CanGoForward = (void(*)(uObject*, bool*))WebView__get_CanGoForward_fn;
    type->interface11.fp_get_Source = (void(*)(uObject*, uString**))WebView__get_Source_fn;
    type->interface11.fp_set_Source = (void(*)(uObject*, uString*))WebView__set_Source_fn;
    type->interface6.fp_AddChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChild_fn;
    type->interface6.fp_AddChildAt = (void(*)(uObject*, int*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChildAt_fn;
    type->interface6.fp_RemoveChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_RemoveChild_fn;
    type->interface6.fp_GetChild = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_GetChild_fn;
    type->interface7.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Add_fn;
    type->interface7.fp_Remove = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Remove_fn;
    type->interface6.fp_get_ChildCount = (void(*)(uObject*, int*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_get_ChildCount_fn;
    type->interface6.fp_get_Children = (void(*)(uObject*, uObject**))::g::Fuse::Controls::Panel__get_Children_fn;
    type->interface6.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__get_ActualSize_fn;
    type->interface6.fp_get_HasChildren = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__get_HasChildren_fn;
    type->interface6.fp_add_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildAdded_fn;
    type->interface6.fp_remove_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildAdded_fn;
    type->interface6.fp_add_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildRemoved_fn;
    type->interface6.fp_remove_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildRemoved_fn;
    type->interface6.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface6.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_add_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__add_Update_fn;
    type->interface6.fp_remove_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__remove_Update_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::STRINGS[15] = uString::Const("about:blank");
    ::STRINGS[1] = uString::Const("");
    ::TYPES[232] = ::g::Fuse::Controls::IWebView_typeof();
    ::TYPES[233] = ::g::Fuse::Controls::FallbackWebViewClient_typeof();
    ::TYPES[17] = ::g::Uno::Delegate_typeof();
    ::TYPES[33] = ::g::Uno::EventHandler_typeof();
    ::TYPES[19] = uObject_typeof();
    ::TYPES[34] = ::g::Uno::EventArgs_typeof();
    ::TYPES[234] = ::g::Fuse::Navigation::IBaseNavigation_typeof();
    ::TYPES[235] = ::g::Fuse::Controls::HTML_typeof();
    ::TYPES[74] = ::g::Fuse::Controls::ISourceReceiver_typeof();
    ::TYPES[231] = ::g::Fuse::Triggers::IProgress_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(WebView_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(WebView_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(WebView_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(WebView_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(WebView_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(WebView_type, interface5),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(WebView_type, interface6),
        ::g::Fuse::Triggers::IAddRemove_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(WebView_type, interface7),
        ::g::Fuse::Controls::IWebView_typeof(), offsetof(WebView_type, interface8),
        ::g::Fuse::Triggers::IProgress_typeof(), offsetof(WebView_type, interface9),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(WebView_type, interface10),
        ::g::Fuse::Controls::ISourceReceiver_typeof(), offsetof(WebView_type, interface11));
    type->SetFields(100,
        ::g::Fuse::Controls::IWebView_typeof(), offsetof(::g::Fuse::Controls::WebView, _fallbackClient), 0,
        ::g::Fuse::Controls::HTML_typeof(), offsetof(::g::Fuse::Controls::WebView, _html), 0,
        ::g::Fuse::Controls::IWebView_typeof(), offsetof(::g::Fuse::Controls::WebView, _webViewClient), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Controls::WebView, BeginLoading1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Controls::WebView, PageLoaded1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Controls::WebView, ProgressChanged1), 0);
    type->Reflection.SetFunctions(32,
        new uFunction("get_BaseUrl", NULL, (void*)WebView__get_BaseUrl_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_BaseUrl", NULL, (void*)WebView__set_BaseUrl_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("add_BeginLoading", NULL, (void*)WebView__add_BeginLoading_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_BeginLoading", NULL, (void*)WebView__remove_BeginLoading_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("get_CanGoBack", NULL, (void*)WebView__get_CanGoBack_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanGoForward", NULL, (void*)WebView__get_CanGoForward_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_DocumentTitle", NULL, (void*)WebView__get_DocumentTitle_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("Eval", NULL, (void*)WebView__Eval_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("Eval", NULL, (void*)WebView__Eval1_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof())),
        new uFunction("get_File", NULL, (void*)WebView__get_File_fn, 0, false, ::g::Uno::UX::FileSource_typeof(), 0),
        new uFunction("set_File", NULL, (void*)WebView__set_File_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::FileSource_typeof()),
        new uFunction("GoBack", NULL, (void*)WebView__GoBack_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("GoForward", NULL, (void*)WebView__GoForward_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_HTMLSource", NULL, (void*)WebView__get_HTMLSource_fn, 0, false, ::g::Fuse::Controls::HTML_typeof(), 0),
        new uFunction("set_HTMLSource", NULL, (void*)WebView__set_HTMLSource_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::HTML_typeof()),
        new uFunction("LoadHtml", NULL, (void*)WebView__LoadHtml_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("LoadHtml", NULL, (void*)WebView__LoadHtml1_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("LoadUrl", NULL, (void*)WebView__LoadUrl_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)WebView__New2_fn, 0, true, WebView_typeof(), 0),
        new uFunction("add_PageLoaded", NULL, (void*)WebView__add_PageLoaded_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_PageLoaded", NULL, (void*)WebView__remove_PageLoaded_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("get_Progress", NULL, (void*)WebView__get_Progress_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("add_ProgressChanged", NULL, (void*)WebView__add_ProgressChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_ProgressChanged", NULL, (void*)WebView__remove_ProgressChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("Reload", NULL, (void*)WebView__Reload_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Source", NULL, (void*)WebView__get_Source_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Source", NULL, (void*)WebView__set_Source_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("Stop", NULL, (void*)WebView__Stop_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Url", NULL, (void*)WebView__get_Url_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Url", NULL, (void*)WebView__set_Url_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_WebViewClient", NULL, (void*)WebView__get_WebViewClient_fn, 0, false, ::g::Fuse::Controls::IWebView_typeof(), 0),
        new uFunction("set_WebViewClient", NULL, (void*)WebView__set_WebViewClient_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::IWebView_typeof()));
    return type;
}

// public WebView() :85
void WebView__ctor_4_fn(WebView* __this)
{
    __this->ctor_4();
}

// private void applyFallbackCalls(Fuse.Controls.IWebView client) :145
void WebView__applyFallbackCalls_fn(WebView* __this, uObject* client)
{
    __this->applyFallbackCalls(client);
}

// public string get_BaseUrl() :185
void WebView__get_BaseUrl_fn(WebView* __this, uString** __retval)
{
    *__retval = __this->BaseUrl();
}

// public void set_BaseUrl(string value) :186
void WebView__set_BaseUrl_fn(WebView* __this, uString* value)
{
    __this->BaseUrl(value);
}

// public generated void add_BeginLoading(Uno.EventHandler value) :67
void WebView__add_BeginLoading_fn(WebView* __this, uDelegate* value)
{
    __this->add_BeginLoading(value);
}

// public generated void remove_BeginLoading(Uno.EventHandler value) :67
void WebView__remove_BeginLoading_fn(WebView* __this, uDelegate* value)
{
    __this->remove_BeginLoading(value);
}

// public bool get_CanGoBack() :209
void WebView__get_CanGoBack_fn(WebView* __this, bool* __retval)
{
    *__retval = __this->CanGoBack();
}

// public bool get_CanGoForward() :214
void WebView__get_CanGoForward_fn(WebView* __this, bool* __retval)
{
    *__retval = __this->CanGoForward();
}

// public string get_DocumentTitle() :171
void WebView__get_DocumentTitle_fn(WebView* __this, uString** __retval)
{
    *__retval = __this->DocumentTitle();
}

// public void Eval(string js) :217
void WebView__Eval_fn(WebView* __this, uString* js)
{
    __this->Eval(js);
}

// public void Eval(string js, Uno.Action<string> resultHandler) :222
void WebView__Eval1_fn(WebView* __this, uString* js, uDelegate* resultHandler)
{
    __this->Eval1(js, resultHandler);
}

// public Uno.UX.FileSource get_File() :203
void WebView__get_File_fn(WebView* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public void set_File(Uno.UX.FileSource value) :204
void WebView__set_File_fn(WebView* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// public void GoBack() :227
void WebView__GoBack_fn(WebView* __this)
{
    __this->GoBack();
}

// public void GoForward() :232
void WebView__GoForward_fn(WebView* __this)
{
    __this->GoForward();
}

// public Fuse.Controls.HTML get_HTMLSource() :75
void WebView__get_HTMLSource_fn(WebView* __this, ::g::Fuse::Controls::HTML** __retval)
{
    *__retval = __this->HTMLSource();
}

// public void set_HTMLSource(Fuse.Controls.HTML value) :79
void WebView__set_HTMLSource_fn(WebView* __this, ::g::Fuse::Controls::HTML* value)
{
    __this->HTMLSource(value);
}

// public void LoadHtml(string html) :178
void WebView__LoadHtml_fn(WebView* __this, uString* html)
{
    __this->LoadHtml(html);
}

// public void LoadHtml(string html, string baseUrl) :174
void WebView__LoadHtml1_fn(WebView* __this, uString* html, uString* baseUrl)
{
    __this->LoadHtml1(html, baseUrl);
}

// public void LoadUrl(string url) :247
void WebView__LoadUrl_fn(WebView* __this, uString* url)
{
    __this->LoadUrl(url);
}

// public WebView New() :85
void WebView__New2_fn(WebView** __retval)
{
    *__retval = WebView::New2();
}

// private void OnBeginLoading(object sender, Uno.EventArgs args) :151
void WebView__OnBeginLoading_fn(WebView* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnBeginLoading(sender, args);
}

// private void OnPageLoaded(object sender, Uno.EventArgs args) :163
void WebView__OnPageLoaded_fn(WebView* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnPageLoaded(sender, args);
}

// private void OnProgressChanged(object sender, Uno.EventArgs args) :157
void WebView__OnProgressChanged_fn(WebView* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnProgressChanged(sender, args);
}

// public generated void add_PageLoaded(Uno.EventHandler value) :66
void WebView__add_PageLoaded_fn(WebView* __this, uDelegate* value)
{
    __this->add_PageLoaded(value);
}

// public generated void remove_PageLoaded(Uno.EventHandler value) :66
void WebView__remove_PageLoaded_fn(WebView* __this, uDelegate* value)
{
    __this->remove_PageLoaded(value);
}

// public double get_Progress() :62
void WebView__get_Progress_fn(WebView* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public generated void add_ProgressChanged(Uno.EventHandler value) :65
void WebView__add_ProgressChanged_fn(WebView* __this, uDelegate* value)
{
    __this->add_ProgressChanged(value);
}

// public generated void remove_ProgressChanged(Uno.EventHandler value) :65
void WebView__remove_ProgressChanged_fn(WebView* __this, uDelegate* value)
{
    __this->remove_ProgressChanged(value);
}

// public void Reload() :237
void WebView__Reload_fn(WebView* __this)
{
    __this->Reload();
}

// public string get_Source() :191
void WebView__get_Source_fn(WebView* __this, uString** __retval)
{
    *__retval = __this->Source();
}

// public void set_Source(string value) :192
void WebView__set_Source_fn(WebView* __this, uString* value)
{
    __this->Source(value);
}

// public void Stop() :242
void WebView__Stop_fn(WebView* __this)
{
    __this->Stop();
}

// public string get_Url() :197
void WebView__get_Url_fn(WebView* __this, uString** __retval)
{
    *__retval = __this->Url();
}

// public void set_Url(string value) :198
void WebView__set_Url_fn(WebView* __this, uString* value)
{
    __this->Url(value);
}

// public Fuse.Controls.IWebView get_WebViewClient() :105
void WebView__get_WebViewClient_fn(WebView* __this, uObject** __retval)
{
    *__retval = __this->WebViewClient();
}

// public void set_WebViewClient(Fuse.Controls.IWebView value) :106
void WebView__set_WebViewClient_fn(WebView* __this, uObject* value)
{
    __this->WebViewClient(value);
}

// public WebView() [instance] :85
void WebView::ctor_4()
{
    _fallbackClient = (uObject*)::g::Fuse::Controls::FallbackWebViewClient::New1();
    ctor_3();
    WebViewClient(_fallbackClient);
}

// private void applyFallbackCalls(Fuse.Controls.IWebView client) [instance] :145
void WebView::applyFallbackCalls(uObject* client)
{
    ::g::Fuse::Controls::FallbackWebViewClient* fbc = uAs< ::g::Fuse::Controls::FallbackWebViewClient*>(_fallbackClient, ::TYPES[233/*Fuse.Controls.FallbackWebViewClient*/]);
    uPtr(fbc)->ApplyBufferedCalls(client);
}

// public string get_BaseUrl() [instance] :185
uString* WebView::BaseUrl()
{
    return ::g::Fuse::Controls::IWebView::BaseUrl(uInterface(uPtr(WebViewClient()), ::TYPES[232/*Fuse.Controls.IWebView*/]));
}

// public void set_BaseUrl(string value) [instance] :186
void WebView::BaseUrl(uString* value)
{
    ::g::Fuse::Controls::IWebView::BaseUrl(uInterface(uPtr(WebViewClient()), ::TYPES[232/*Fuse.Controls.IWebView*/]), value);
}

// public generated void add_BeginLoading(Uno.EventHandler value) [instance] :67
void WebView::add_BeginLoading(uDelegate* value)
{
    BeginLoading1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(BeginLoading1, value), ::TYPES[33/*Uno.EventHandler*/]);
}

// public generated void remove_BeginLoading(Uno.EventHandler value) [instance] :67
void WebView::remove_BeginLoading(uDelegate* value)
{
    BeginLoading1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(BeginLoading1, value), ::TYPES[33/*Uno.EventHandler*/]);
}

// public bool get_CanGoBack() [instance] :209
bool WebView::CanGoBack()
{
    return ::g::Fuse::Navigation::IBaseNavigation::CanGoBack(uInterface(uPtr(WebViewClient()), ::TYPES[234/*Fuse.Navigation.IBaseNavigation*/]));
}

// public bool get_CanGoForward() [instance] :214
bool WebView::CanGoForward()
{
    return ::g::Fuse::Navigation::IBaseNavigation::CanGoForward(uInterface(uPtr(WebViewClient()), ::TYPES[234/*Fuse.Navigation.IBaseNavigation*/]));
}

// public string get_DocumentTitle() [instance] :171
uString* WebView::DocumentTitle()
{
    return ::g::Fuse::Controls::IWebView::DocumentTitle(uInterface(uPtr(WebViewClient()), ::TYPES[232/*Fuse.Controls.IWebView*/]));
}

// public void Eval(string js) [instance] :217
void WebView::Eval(uString* js)
{
    ::g::Fuse::Controls::IWebView::Eval(uInterface(uPtr(WebViewClient()), ::TYPES[232/*Fuse.Controls.IWebView*/]), js);
}

// public void Eval(string js, Uno.Action<string> resultHandler) [instance] :222
void WebView::Eval1(uString* js, uDelegate* resultHandler)
{
    ::g::Fuse::Controls::IWebView::Eval1(uInterface(uPtr(WebViewClient()), ::TYPES[232/*Fuse.Controls.IWebView*/]), js, resultHandler);
}

// public Uno.UX.FileSource get_File() [instance] :203
::g::Uno::UX::FileSource* WebView::File()
{
    return ::g::Fuse::Controls::IWebView::File(uInterface(uPtr(WebViewClient()), ::TYPES[232/*Fuse.Controls.IWebView*/]));
}

// public void set_File(Uno.UX.FileSource value) [instance] :204
void WebView::File(::g::Uno::UX::FileSource* value)
{
    ::g::Fuse::Controls::IWebView::File(uInterface(uPtr(WebViewClient()), ::TYPES[232/*Fuse.Controls.IWebView*/]), value);
}

// public void GoBack() [instance] :227
void WebView::GoBack()
{
    ::g::Fuse::Navigation::IBaseNavigation::GoBack(uInterface(uPtr(WebViewClient()), ::TYPES[234/*Fuse.Navigation.IBaseNavigation*/]));
}

// public void GoForward() [instance] :232
void WebView::GoForward()
{
    ::g::Fuse::Navigation::IBaseNavigation::GoForward(uInterface(uPtr(WebViewClient()), ::TYPES[234/*Fuse.Navigation.IBaseNavigation*/]));
}

// public Fuse.Controls.HTML get_HTMLSource() [instance] :75
::g::Fuse::Controls::HTML* WebView::HTMLSource()
{
    return _html;
}

// public void set_HTMLSource(Fuse.Controls.HTML value) [instance] :79
void WebView::HTMLSource(::g::Fuse::Controls::HTML* value)
{
    _html = value;
    uPtr(_html)->Receiver = (uObject*)this;
}

// public void LoadHtml(string html) [instance] :178
void WebView::LoadHtml(uString* html)
{
    ::g::Fuse::Controls::IWebView::LoadHtml(uInterface(uPtr(WebViewClient()), ::TYPES[232/*Fuse.Controls.IWebView*/]), html);
}

// public void LoadHtml(string html, string baseUrl) [instance] :174
void WebView::LoadHtml1(uString* html, uString* baseUrl)
{
    ::g::Fuse::Controls::IWebView::LoadHtml1(uInterface(uPtr(WebViewClient()), ::TYPES[232/*Fuse.Controls.IWebView*/]), html, baseUrl);
}

// public void LoadUrl(string url) [instance] :247
void WebView::LoadUrl(uString* url)
{
    ::g::Fuse::Controls::IWebView::LoadUrl(uInterface(uPtr(WebViewClient()), ::TYPES[232/*Fuse.Controls.IWebView*/]), url);
}

// private void OnBeginLoading(object sender, Uno.EventArgs args) [instance] :151
void WebView::OnBeginLoading(uObject* sender, ::g::Uno::EventArgs* args)
{
    if (::g::Uno::Delegate::op_Inequality(BeginLoading1, NULL))
        uPtr(BeginLoading1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private void OnPageLoaded(object sender, Uno.EventArgs args) [instance] :163
void WebView::OnPageLoaded(uObject* sender, ::g::Uno::EventArgs* args)
{
    if (::g::Uno::Delegate::op_Inequality(PageLoaded1, NULL))
        uPtr(PageLoaded1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private void OnProgressChanged(object sender, Uno.EventArgs args) [instance] :157
void WebView::OnProgressChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    if (::g::Uno::Delegate::op_Inequality(ProgressChanged1, NULL))
        uPtr(ProgressChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// public generated void add_PageLoaded(Uno.EventHandler value) [instance] :66
void WebView::add_PageLoaded(uDelegate* value)
{
    PageLoaded1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PageLoaded1, value), ::TYPES[33/*Uno.EventHandler*/]);
}

// public generated void remove_PageLoaded(Uno.EventHandler value) [instance] :66
void WebView::remove_PageLoaded(uDelegate* value)
{
    PageLoaded1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PageLoaded1, value), ::TYPES[33/*Uno.EventHandler*/]);
}

// public double get_Progress() [instance] :62
double WebView::Progress()
{
    return ::g::Fuse::Triggers::IProgress::Progress(uInterface(uPtr(WebViewClient()), ::TYPES[231/*Fuse.Triggers.IProgress*/]));
}

// public generated void add_ProgressChanged(Uno.EventHandler value) [instance] :65
void WebView::add_ProgressChanged(uDelegate* value)
{
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ProgressChanged1, value), ::TYPES[33/*Uno.EventHandler*/]);
}

// public generated void remove_ProgressChanged(Uno.EventHandler value) [instance] :65
void WebView::remove_ProgressChanged(uDelegate* value)
{
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ProgressChanged1, value), ::TYPES[33/*Uno.EventHandler*/]);
}

// public void Reload() [instance] :237
void WebView::Reload()
{
    ::g::Fuse::Controls::IWebView::Reload(uInterface(uPtr(WebViewClient()), ::TYPES[232/*Fuse.Controls.IWebView*/]));
}

// public string get_Source() [instance] :191
uString* WebView::Source()
{
    return ::g::Fuse::Controls::ISourceReceiver::Source(uInterface(uPtr(WebViewClient()), ::TYPES[74/*Fuse.Controls.ISourceReceiver*/]));
}

// public void set_Source(string value) [instance] :192
void WebView::Source(uString* value)
{
    ::g::Fuse::Controls::ISourceReceiver::Source(uInterface(uPtr(WebViewClient()), ::TYPES[74/*Fuse.Controls.ISourceReceiver*/]), value);
}

// public void Stop() [instance] :242
void WebView::Stop()
{
    ::g::Fuse::Controls::IWebView::Stop(uInterface(uPtr(WebViewClient()), ::TYPES[232/*Fuse.Controls.IWebView*/]));
}

// public string get_Url() [instance] :197
uString* WebView::Url()
{
    return ::g::Fuse::Controls::IWebView::Url(uInterface(uPtr(WebViewClient()), ::TYPES[232/*Fuse.Controls.IWebView*/]));
}

// public void set_Url(string value) [instance] :198
void WebView::Url(uString* value)
{
    ::g::Fuse::Controls::IWebView::Url(uInterface(uPtr(WebViewClient()), ::TYPES[232/*Fuse.Controls.IWebView*/]), value);
}

// public Fuse.Controls.IWebView get_WebViewClient() [instance] :105
uObject* WebView::WebViewClient()
{
    uObject* ind1 = _webViewClient;
    return (ind1 != NULL) ? ind1 : (uObject*)_fallbackClient;
}

// public void set_WebViewClient(Fuse.Controls.IWebView value) [instance] :106
void WebView::WebViewClient(uObject* value)
{
    uString* ind2;
    uString* url = ::STRINGS[15/*"about:blank"*/];
    uString* source = NULL;
    uString* baseUrl = NULL;
    ::g::Uno::UX::FileSource* file = NULL;

    if (_webViewClient != NULL)
    {
        ::g::Fuse::Triggers::IProgress::remove_ProgressChanged(uInterface(uPtr(_webViewClient), ::TYPES[231/*Fuse.Triggers.IProgress*/]), uDelegate::New(::TYPES[33/*Uno.EventHandler*/], (void*)WebView__OnProgressChanged_fn, this));
        ::g::Fuse::Controls::IWebView::remove_PageLoaded(uInterface(uPtr(_webViewClient), ::TYPES[232/*Fuse.Controls.IWebView*/]), uDelegate::New(::TYPES[33/*Uno.EventHandler*/], (void*)WebView__OnPageLoaded_fn, this));
        ::g::Fuse::Controls::IWebView::remove_BeginLoading(uInterface(uPtr(_webViewClient), ::TYPES[232/*Fuse.Controls.IWebView*/]), uDelegate::New(::TYPES[33/*Uno.EventHandler*/], (void*)WebView__OnBeginLoading_fn, this));
        url = ::g::Fuse::Controls::IWebView::Url(uInterface(uPtr(_webViewClient), ::TYPES[232/*Fuse.Controls.IWebView*/]));
        source = (ind2 = ::g::Fuse::Controls::ISourceReceiver::Source(uInterface(uPtr(_webViewClient), ::TYPES[74/*Fuse.Controls.ISourceReceiver*/])), (ind2 != NULL) ? ind2 : ::STRINGS[1/*""*/]);
        baseUrl = ::g::Fuse::Controls::IWebView::BaseUrl(uInterface(uPtr(_webViewClient), ::TYPES[232/*Fuse.Controls.IWebView*/]));
        file = ::g::Fuse::Controls::IWebView::File(uInterface(uPtr(_webViewClient), ::TYPES[232/*Fuse.Controls.IWebView*/]));
    }

    _webViewClient = ((value != NULL) ? value : (uObject*)_fallbackClient);

    if (_webViewClient != NULL)
    {
        ::g::Fuse::Triggers::IProgress::add_ProgressChanged(uInterface(uPtr(_webViewClient), ::TYPES[231/*Fuse.Triggers.IProgress*/]), uDelegate::New(::TYPES[33/*Uno.EventHandler*/], (void*)WebView__OnProgressChanged_fn, this));
        ::g::Fuse::Controls::IWebView::add_PageLoaded(uInterface(uPtr(_webViewClient), ::TYPES[232/*Fuse.Controls.IWebView*/]), uDelegate::New(::TYPES[33/*Uno.EventHandler*/], (void*)WebView__OnPageLoaded_fn, this));
        ::g::Fuse::Controls::IWebView::add_BeginLoading(uInterface(uPtr(_webViewClient), ::TYPES[232/*Fuse.Controls.IWebView*/]), uDelegate::New(::TYPES[33/*Uno.EventHandler*/], (void*)WebView__OnBeginLoading_fn, this));
        ::g::Fuse::Controls::IWebView::BaseUrl(uInterface(uPtr(_webViewClient), ::TYPES[232/*Fuse.Controls.IWebView*/]), baseUrl);
        ::g::Fuse::Controls::ISourceReceiver::Source(uInterface(uPtr(_webViewClient), ::TYPES[74/*Fuse.Controls.ISourceReceiver*/]), source);

        if (::g::Uno::String::op_Equality(source, ::STRINGS[1/*""*/]))
            ::g::Fuse::Controls::IWebView::Url(uInterface(uPtr(_webViewClient), ::TYPES[232/*Fuse.Controls.IWebView*/]), url);

        ::g::Fuse::Controls::IWebView::File(uInterface(uPtr(_webViewClient), ::TYPES[232/*Fuse.Controls.IWebView*/]), file);
        applyFallbackCalls(_webViewClient);
    }
}

// public WebView New() [static] :85
WebView* WebView::New2()
{
    WebView* obj3 = (WebView*)uNew(WebView_typeof());
    obj3->ctor_4();
    return obj3;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno(4732)
// ------------------------------------------------------------

// public sealed class WrapPanel :4732
// {
::g::Fuse::Controls::Panel_type* WrapPanel_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 101;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(WrapPanel);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Fuse.Controls.WrapPanel", options);
    type->SetBase(::g::Fuse::Controls::Panel_typeof());
    type->fp_ctor_ = (void*)WrapPanel__New2_fn;
    type->interface6.fp_AddChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChild_fn;
    type->interface6.fp_AddChildAt = (void(*)(uObject*, int*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_AddChildAt_fn;
    type->interface6.fp_RemoveChild = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_RemoveChild_fn;
    type->interface6.fp_GetChild = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_GetChild_fn;
    type->interface7.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Add_fn;
    type->interface7.fp_Remove = (void(*)(uObject*, void*))::g::Fuse::Controls::Panel__Fuse_Triggers_IAddRemove_Fuse_Node__Remove_fn;
    type->interface6.fp_get_ChildCount = (void(*)(uObject*, int*))::g::Fuse::Controls::Panel__Fuse_Navigation_INavigationPanel_get_ChildCount_fn;
    type->interface6.fp_get_Children = (void(*)(uObject*, uObject**))::g::Fuse::Controls::Panel__get_Children_fn;
    type->interface6.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__get_ActualSize_fn;
    type->interface6.fp_get_HasChildren = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__get_HasChildren_fn;
    type->interface6.fp_add_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildAdded_fn;
    type->interface6.fp_remove_ChildAdded = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildAdded_fn;
    type->interface6.fp_add_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__add_ChildRemoved_fn;
    type->interface6.fp_remove_ChildRemoved = (void(*)(uObject*, uDelegate*))::g::Fuse::Controls::Panel__remove_ChildRemoved_fn;
    type->interface6.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface6.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_add_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__add_Update_fn;
    type->interface6.fp_remove_Update = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__remove_Update_fn;
    type->interface1.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IShow_Show_fn;
    type->interface3.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_ICollapse_Collapse_fn;
    type->interface2.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__Fuse_Triggers_Actions_IHide_Hide_fn;
    type->interface5.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__Fuse_Animations_IResize_SetSize_fn;
    type->interface4.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualSize_fn;
    type->interface4.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__Fuse_IActualPlacement_get_ActualPosition_fn;
    type->interface4.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface4.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    ::TYPES[23] = ::g::Fuse::Controls::Panel_typeof();
    ::TYPES[51] = ::g::Fuse::Layouts::Layout_typeof();
    ::TYPES[236] = ::g::Fuse::Layouts::WrapLayout_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Fuse::Triggers::IAddRemove_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Panel_type, interface7));
    type->SetFields(100,
        ::g::Fuse::Layouts::WrapLayout_typeof(), offsetof(::g::Fuse::Controls::WrapPanel, _wrapLayout), 0);
    type->Reflection.SetFunctions(11,
        new uFunction("get_FlowDirection", NULL, (void*)WrapPanel__get_FlowDirection_fn, 0, false, ::g::Fuse::Layouts::FlowDirection_typeof(), 0),
        new uFunction("set_FlowDirection", NULL, (void*)WrapPanel__set_FlowDirection_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Layouts::FlowDirection_typeof()),
        new uFunction("get_ID", NULL, (void*)WrapPanel__get_ID_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_ID", NULL, (void*)WrapPanel__set_ID_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_ItemHeight", NULL, (void*)WrapPanel__get_ItemHeight_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_ItemHeight", NULL, (void*)WrapPanel__set_ItemHeight_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_ItemWidth", NULL, (void*)WrapPanel__get_ItemWidth_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_ItemWidth", NULL, (void*)WrapPanel__set_ItemWidth_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)WrapPanel__New2_fn, 0, true, WrapPanel_typeof(), 0),
        new uFunction("get_Orientation", NULL, (void*)WrapPanel__get_Orientation_fn, 0, false, ::g::Fuse::Layouts::Orientation_typeof(), 0),
        new uFunction("set_Orientation", NULL, (void*)WrapPanel__set_Orientation_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Layouts::Orientation_typeof()));
    return type;
}

// public WrapPanel() :4760
void WrapPanel__ctor_4_fn(WrapPanel* __this)
{
    __this->ctor_4();
}

// public Fuse.Layouts.FlowDirection get_FlowDirection() :4754
void WrapPanel__get_FlowDirection_fn(WrapPanel* __this, int* __retval)
{
    *__retval = __this->FlowDirection();
}

// public void set_FlowDirection(Fuse.Layouts.FlowDirection value) :4755
void WrapPanel__set_FlowDirection_fn(WrapPanel* __this, int* value)
{
    __this->FlowDirection(*value);
}

// public string get_ID() :4767
void WrapPanel__get_ID_fn(WrapPanel* __this, uString** __retval)
{
    *__retval = __this->ID();
}

// public void set_ID(string value) :4768
void WrapPanel__set_ID_fn(WrapPanel* __this, uString* value)
{
    __this->ID(value);
}

// public float get_ItemHeight() :4742
void WrapPanel__get_ItemHeight_fn(WrapPanel* __this, float* __retval)
{
    *__retval = __this->ItemHeight();
}

// public void set_ItemHeight(float value) :4743
void WrapPanel__set_ItemHeight_fn(WrapPanel* __this, float* value)
{
    __this->ItemHeight(*value);
}

// public float get_ItemWidth() :4736
void WrapPanel__get_ItemWidth_fn(WrapPanel* __this, float* __retval)
{
    *__retval = __this->ItemWidth();
}

// public void set_ItemWidth(float value) :4737
void WrapPanel__set_ItemWidth_fn(WrapPanel* __this, float* value)
{
    __this->ItemWidth(*value);
}

// public WrapPanel New() :4760
void WrapPanel__New2_fn(WrapPanel** __retval)
{
    *__retval = WrapPanel::New2();
}

// public Fuse.Layouts.Orientation get_Orientation() :4748
void WrapPanel__get_Orientation_fn(WrapPanel* __this, int* __retval)
{
    *__retval = __this->Orientation();
}

// public void set_Orientation(Fuse.Layouts.Orientation value) :4749
void WrapPanel__set_Orientation_fn(WrapPanel* __this, int* value)
{
    __this->Orientation(*value);
}

// public WrapPanel() [instance] :4760
void WrapPanel::ctor_4()
{
    ctor_3();
    Layout(_wrapLayout = ::g::Fuse::Layouts::WrapLayout::New1());
}

// public Fuse.Layouts.FlowDirection get_FlowDirection() [instance] :4754
int WrapPanel::FlowDirection()
{
    return uPtr(_wrapLayout)->FlowDirection();
}

// public void set_FlowDirection(Fuse.Layouts.FlowDirection value) [instance] :4755
void WrapPanel::FlowDirection(int value)
{
    uPtr(_wrapLayout)->FlowDirection(value);
}

// public string get_ID() [instance] :4767
uString* WrapPanel::ID()
{
    return uPtr(_wrapLayout)->ID();
}

// public void set_ID(string value) [instance] :4768
void WrapPanel::ID(uString* value)
{
    uPtr(_wrapLayout)->ID(value);
}

// public float get_ItemHeight() [instance] :4742
float WrapPanel::ItemHeight()
{
    return uPtr(_wrapLayout)->ItemHeight();
}

// public void set_ItemHeight(float value) [instance] :4743
void WrapPanel::ItemHeight(float value)
{
    uPtr(_wrapLayout)->ItemHeight(value);
}

// public float get_ItemWidth() [instance] :4736
float WrapPanel::ItemWidth()
{
    return uPtr(_wrapLayout)->ItemWidth();
}

// public void set_ItemWidth(float value) [instance] :4737
void WrapPanel::ItemWidth(float value)
{
    uPtr(_wrapLayout)->ItemWidth(value);
}

// public Fuse.Layouts.Orientation get_Orientation() [instance] :4748
int WrapPanel::Orientation()
{
    return uPtr(_wrapLayout)->Orientation();
}

// public void set_Orientation(Fuse.Layouts.Orientation value) [instance] :4749
void WrapPanel::Orientation(int value)
{
    uPtr(_wrapLayout)->Orientation(value);
}

// public WrapPanel New() [static] :4760
WrapPanel* WrapPanel::New2()
{
    WrapPanel* obj1 = (WrapPanel*)uNew(WrapPanel_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

}}} // ::g::Fuse::Controls
