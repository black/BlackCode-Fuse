#include <app/Fuse.Animations.AnimationVariant.h>
#include <app/Fuse.Animations.Animator.h>
#include <app/Fuse.Animations.Change__bool.h>
#include <app/Fuse.Animations.Change__float4.h>
#include <app/Fuse.Animations.Easing.h>
#include <app/Fuse.Animations.Keyframe.h>
#include <app/Fuse.Animations.Move.h>
#include <app/Fuse.Animations.Scale.h>
#include <app/Fuse.Animations.TrackAnimator.h>
#include <app/Fuse.Animations.TransformAnimator__Fuse_Translation.h>
#include <app/Fuse.AppBase.h>
#include <app/Fuse.BeginRemoveArgs.h>
#include <app/Fuse.Behavior.h>
#include <app/Fuse.Controls.BackButton.h>
#include <app/Fuse.Controls.BackButton_Fuse_Node_bool_IsEnabled_Property.h>
#include <app/Fuse.Controls.BeginRemoveArgsImpl.h>
#include <app/Fuse.Controls.BottomBarBackground.h>
#include <app/Fuse.Controls.BottomFrameBackground.h>
#include <app/Fuse.Controls.Button.h>
#include <app/Fuse.Controls.Circle.h>
#include <app/Fuse.Controls.ClientPanel.h>
#include <app/Fuse.Controls.ContentControl.h>
#include <app/Fuse.Controls.Control.h>
#include <app/Fuse.Controls.DefaultSwitchBehavior.h>
#include <app/Fuse.Controls.DockPanel.h>
#include <app/Fuse.Controls.EdgeNavigator.h>
#include <app/Fuse.Controls.Ellipse.h>
#include <app/Fuse.Controls.FallbackWebViewClient.h>
#include <app/Fuse.Controls.FillRule.h>
#include <app/Fuse.Controls.FitMode.h>
#include <app/Fuse.Controls.GraphicsView.h>
#include <app/Fuse.Controls.Grid.h>
#include <app/Fuse.Controls.Image.h>
#include <app/Fuse.Controls.IWebView.h>
#include <app/Fuse.Controls.KeyframeAccessors.h>
#include <app/Fuse.Controls.MapView.h>
#include <app/Fuse.Controls.MultiLayout.h>
#include <app/Fuse.Controls.MultiLayoutPanel.h>
#include <app/Fuse.Controls.NativeViewHost.h>
#include <app/Fuse.Controls.NavigationBar.h>
#include <app/Fuse.Controls.Number.h>
#include <app/Fuse.Controls.Page.h>
#include <app/Fuse.Controls.PageControl.h>
#include <app/Fuse.Controls.PageControl_Template.h>
#include <app/Fuse.Controls.PageIndicator.h>
#include <app/Fuse.Controls.PageIndicator_Fuse_Drawing_SolidColor_float4_Colo-7911537f.h>
#include <app/Fuse.Controls.PageIndicator_Template.h>
#include <app/Fuse.Controls.PageIndicatorDot.h>
#include <app/Fuse.Controls.PageIndicatorDotFactory.h>
#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.Controls.Path.h>
#include <app/Fuse.Controls.PathScaleMode.h>
#include <app/Fuse.Controls.Placeholder.h>
#include <app/Fuse.Controls.PlainTextEdit.h>
#include <app/Fuse.Controls.RangeControl.h>
#include <app/Fuse.Controls.Rectangle.h>
#include <app/Fuse.Controls.RegularPolygon.h>
#include <app/Fuse.Controls.ScrollPropertyChangedArgs.h>
#include <app/Fuse.Controls.ScrollPropertyChangedHandler.h>
#include <app/Fuse.Controls.ScrollView.h>
#include <app/Fuse.Controls.ScrollViewer.h>
#include <app/Fuse.Controls.Shape.h>
#include <app/Fuse.Controls.Slider.h>
#include <app/Fuse.Controls.StackPanel.h>
#include <app/Fuse.Controls.Star.h>
#include <app/Fuse.Controls.StatusBarBackground.h>
#include <app/Fuse.Controls.Switch.h>
#include <app/Fuse.Controls.Text.h>
#include <app/Fuse.Controls.TextBlock.h>
#include <app/Fuse.Controls.TextControl.h>
#include <app/Fuse.Controls.TextInput.h>
#include <app/Fuse.Controls.Toggle.h>
#include <app/Fuse.Controls.ToggleControl.h>
#include <app/Fuse.Controls.TopFrameBackground.h>
#include <app/Fuse.Controls.Viewbox.h>
#include <app/Fuse.Controls.WebView.h>
#include <app/Fuse.Controls.WrapPanel.h>
#include <app/Fuse.Diagnostics.h>
#include <app/Fuse.DrawContext.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.DynamicBrush.h>
#include <app/Fuse.Drawing.PathGeometry.h>
#include <app/Fuse.Drawing.ResampleMode.h>
#include <app/Fuse.Drawing.SolidColor.h>
#include <app/Fuse.Drawing.Stroke.h>
#include <app/Fuse.Elements.Alignment.h>
#include <app/Fuse.Elements.AlignmentHelpers.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.Element_BoxSizingMode.h>
#include <app/Fuse.Elements.ElementBatcher.h>
#include <app/Fuse.Elements.HitTestMode.h>
#include <app/Fuse.Elements.ShadowBoxSizing.h>
#include <app/Fuse.Elements.SizeUnit.h>
#include <app/Fuse.Elements.StretchDirection.h>
#include <app/Fuse.Elements.StretchMode.h>
#include <app/Fuse.Elements.StretchSizing.h>
#include <app/Fuse.Elements.TextAlignment.h>
#include <app/Fuse.Elements.TextWrapping.h>
#include <app/Fuse.Elements.Visibility.h>
#include <app/Fuse.FastMatrix.h>
#include <app/Fuse.Font.h>
#include <app/Fuse.Fonts.h>
#include <app/Fuse.FrustumViewport.h>
#include <app/Fuse.Gestures.Clicked.h>
#include <app/Fuse.Gestures.Clicker.h>
#include <app/Fuse.Gestures.ClickerEventHandler.h>
#include <app/Fuse.Gestures.ScrollDirections.h>
#include <app/Fuse.Gestures.Scroller.h>
#include <app/Fuse.Gestures.Tapped.h>
#include <app/Fuse.Gestures.TappedArgs.h>
#include <app/Fuse.Gestures.TappedHandler.h>
#include <app/Fuse.HitTestContext.h>
#include <app/Fuse.IFrustum.h>
#include <app/Fuse.Input.Focus.h>
#include <app/Fuse.Input.FocusDelegator.h>
#include <app/Fuse.Input.FocusLostHandler.h>
#include <app/Fuse.Input.Pointer.h>
#include <app/Fuse.Input.PointerEventArgs.h>
#include <app/Fuse.Input.PointerMovedArgs.h>
#include <app/Fuse.Input.PointerMovedHandler.h>
#include <app/Fuse.Input.PointerPressedArgs.h>
#include <app/Fuse.Input.PointerPressedHandler.h>
#include <app/Fuse.Input.PointerReleasedArgs.h>
#include <app/Fuse.Input.PointerReleasedHandler.h>
#include <app/Fuse.Internal.Drawing.SolidRectangle.h>
#include <app/Fuse.Internal.IImageContainerOwner.h>
#include <app/Fuse.Internal.ImageContainer.h>
#include <app/Fuse.Internal.SizingContainer.h>
#include <app/Fuse.InvalidateLayoutReason.h>
#include <app/Fuse.ITranslationMode.h>
#include <app/Fuse.LayoutDependent.h>
#include <app/Fuse.Layouts.Dock.h>
#include <app/Fuse.Layouts.DockLayout.h>
#include <app/Fuse.Layouts.FlowDirection.h>
#include <app/Fuse.Layouts.GridLayout.h>
#include <app/Fuse.Layouts.Layer.h>
#include <app/Fuse.Layouts.Layout.h>
#include <app/Fuse.Layouts.LayoutRole.h>
#include <app/Fuse.Layouts.Layouts.h>
#include <app/Fuse.Layouts.Orientation.h>
#include <app/Fuse.Layouts.StackLayout.h>
#include <app/Fuse.Layouts.WrapLayout.h>
#include <app/Fuse.Navigation.ActivatingAnimation.h>
#include <app/Fuse.Navigation.EdgeNavigation.h>
#include <app/Fuse.Navigation.EnteringAnimation.h>
#include <app/Fuse.Navigation.ExitingAnimation.h>
#include <app/Fuse.Navigation.GoBack.h>
#include <app/Fuse.Navigation.HistoryChangedHandler.h>
#include <app/Fuse.Navigation.INavigation.h>
#include <app/Fuse.Navigation.LinearNavigation.h>
#include <app/Fuse.Navigation.NavigatedHandler.h>
#include <app/Fuse.Navigation.Navigation.h>
#include <app/Fuse.Navigation.NavigationArgs.h>
#include <app/Fuse.Navigation.NavigationEdge.h>
#include <app/Fuse.Navigation.NavigationGotoMode.h>
#include <app/Fuse.Navigation.NavigationMode.h>
#include <app/Fuse.Navigation.NavigationPageCountHandler.h>
#include <app/Fuse.Navigation.NavigationPageProgressHandler.h>
#include <app/Fuse.Navigation.NavigationPageProperty.h>
#include <app/Fuse.Navigation.StructuredNavigation.h>
#include <app/Fuse.Navigation.SwipeDirection.h>
#include <app/Fuse.Navigation.SwipeEnds.h>
#include <app/Fuse.Navigation.SwipeNavigate.h>
#include <app/Fuse.Navigation.WhileCanGoBack.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.NodeBounds.h>
#include <app/Fuse.NodeDrawCount.h>
#include <app/Fuse.NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs.h>
#include <app/Fuse.NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_Poin-c465a3e6.h>
#include <app/Fuse.NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_Po-31778249.h>
#include <app/Fuse.NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_P-dde60e76.h>
#include <app/Fuse.OrthographicFrustum.h>
#include <app/Fuse.PlacedArgs.h>
#include <app/Fuse.PlacedHandler.h>
#include <app/Fuse.Resources.ImageSource.h>
#include <app/Fuse.Resources.MemoryPolicy.h>
#include <app/Fuse.RootViewport.h>
#include <app/Fuse.Scripting.BoolChangedArgs.h>
#include <app/Fuse.Scripting.DoubleChangedArgs.h>
#include <app/Fuse.Scripting.StringChangedArgs.h>
#include <app/Fuse.SizeFlags.h>
#include <app/Fuse.Style.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Button__string.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_GraphicsView__float4.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Grid__float.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Number__float.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Number__string.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Panel__Fuse_Node.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_RangeControl__double.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Rectangle__float4.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_Scr-a95f3fb5.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Shape__float.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_StackPanel__float.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_TextControl__float.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_TextControl__float4.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_Te-44d8cf97.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_Te-e2be4cfb.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_TextControl__Fuse_Font.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_TextControl__string.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_TextInput__bool.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_TextInput__float4.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_ToggleControl__bool.h>
#include <app/Fuse.StyleProperty__Fuse_Elements_Element__float.h>
#include <app/Fuse.StyleProperty__Fuse_Elements_Element__float4.h>
#include <app/Fuse.StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment.h>
#include <app/Fuse.StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_-d8fcbdc5.h>
#include <app/Fuse.Transform.h>
#include <app/Fuse.Translation.h>
#include <app/Fuse.TranslationModes.h>
#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <app/Fuse.Triggers.IValue__bool.h>
#include <app/Fuse.Triggers.Trigger.h>
#include <app/Fuse.Triggers.WhileTrigger.h>
#include <app/Fuse.UpdateManager.h>
#include <app/Fuse.UpdateStage.h>
#include <app/Uno.Action.h>
#include <app/Uno.Action__Fuse_Controls_Button.h>
#include <app/Uno.Action__Fuse_Controls_Button__string.h>
#include <app/Uno.Action__Fuse_Controls_Control.h>
#include <app/Uno.Action__Fuse_Controls_Control__Fuse_Drawing_Brush.h>
#include <app/Uno.Action__Fuse_Controls_GraphicsView.h>
#include <app/Uno.Action__Fuse_Controls_Grid.h>
#include <app/Uno.Action__Fuse_Controls_Image.h>
#include <app/Uno.Action__Fuse_Controls_Image__Fuse_Elements_Alignment.h>
#include <app/Uno.Action__Fuse_Controls_Image__Fuse_Elements_StretchDirection.h>
#include <app/Uno.Action__Fuse_Controls_Image__Fuse_Elements_StretchMode.h>
#include <app/Uno.Action__Fuse_Controls_Image__Fuse_Elements_StretchSizing.h>
#include <app/Uno.Action__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy.h>
#include <app/Uno.Action__Fuse_Controls_Number.h>
#include <app/Uno.Action__Fuse_Controls_PageIndicator.h>
#include <app/Uno.Action__Fuse_Controls_Panel.h>
#include <app/Uno.Action__Fuse_Controls_Panel__Fuse_Layouts_Layout.h>
#include <app/Uno.Action__Fuse_Controls_Panel__Fuse_Node.h>
#include <app/Uno.Action__Fuse_Controls_PlainTextEdit.h>
#include <app/Uno.Action__Fuse_Controls_RangeControl.h>
#include <app/Uno.Action__Fuse_Controls_RangeControl__double.h>
#include <app/Uno.Action__Fuse_Controls_Rectangle.h>
#include <app/Uno.Action__Fuse_Controls_ScrollView.h>
#include <app/Uno.Action__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections.h>
#include <app/Uno.Action__Fuse_Controls_Shape.h>
#include <app/Uno.Action__Fuse_Controls_Shape__float.h>
#include <app/Uno.Action__Fuse_Controls_Shape__Fuse_Drawing_Brush.h>
#include <app/Uno.Action__Fuse_Controls_Shape__Fuse_Drawing_Stroke.h>
#include <app/Uno.Action__Fuse_Controls_StackPanel.h>
#include <app/Uno.Action__Fuse_Controls_TextControl.h>
#include <app/Uno.Action__Fuse_Controls_TextControl__string.h>
#include <app/Uno.Action__Fuse_Controls_TextInput.h>
#include <app/Uno.Action__Fuse_Controls_ToggleControl.h>
#include <app/Uno.Action__Fuse_Controls_ToggleControl__bool.h>
#include <app/Uno.Action__Fuse_Drawing_Brush.h>
#include <app/Uno.Action__Fuse_Drawing_Stroke.h>
#include <app/Uno.Action__Fuse_Node.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Char.h>
#include <app/Uno.Collections.ICollection__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.ICollection__Fuse_Behavior.h>
#include <app/Uno.Collections.ICollection__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.ICollection__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.ICollection__Fuse_Node.h>
#include <app/Uno.Collections.ICollection__Fuse_Style.h>
#include <app/Uno.Collections.ICollection__Fuse_Transform.h>
#include <app/Uno.Collections.ICollection__Fuse_Triggers_Actions_TriggerAction.h>
#include <app/Uno.Collections.ICollection__Uno_UX_ITemplate.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Behavior.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Node.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Behavior.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Node.h>
#include <app/Uno.Collections.IList__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.IList__Fuse_Behavior.h>
#include <app/Uno.Collections.IList__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.IList__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.IList__Fuse_Layouts_Column.h>
#include <app/Uno.Collections.IList__Fuse_Layouts_Row.h>
#include <app/Uno.Collections.IList__Fuse_Node.h>
#include <app/Uno.Collections.IList__Fuse_Style.h>
#include <app/Uno.Collections.IList__Fuse_Transform.h>
#include <app/Uno.Collections.IList__Fuse_Triggers_Actions_TriggerAction.h>
#include <app/Uno.Collections.IList__Uno_UX_FileSource.h>
#include <app/Uno.Collections.IList__Uno_UX_ITemplate.h>
#include <app/Uno.Collections.List__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.List__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.List__Fuse_Node.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Node.h>
#include <app/Uno.Collections.ObservableList__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.ObservableList__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.ObservableList__Fuse_Node.h>
#include <app/Uno.Comparison__Fuse_Node.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.EventHandler__Fuse_Node.h>
#include <app/Uno.EventHandler__Uno_Platform_SystemUIWillResizeEventArgs.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Func__Fuse_Controls_Button__string.h>
#include <app/Uno.Func__Fuse_Controls_Control__Fuse_Drawing_Brush.h>
#include <app/Uno.Func__Fuse_Controls_Image__Fuse_Elements_Alignment.h>
#include <app/Uno.Func__Fuse_Controls_Image__Fuse_Elements_StretchDirection.h>
#include <app/Uno.Func__Fuse_Controls_Image__Fuse_Elements_StretchMode.h>
#include <app/Uno.Func__Fuse_Controls_Image__Fuse_Elements_StretchSizing.h>
#include <app/Uno.Func__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy.h>
#include <app/Uno.Func__Fuse_Controls_Panel__Fuse_Layouts_Layout.h>
#include <app/Uno.Func__Fuse_Controls_Panel__Fuse_Node.h>
#include <app/Uno.Func__Fuse_Controls_RangeControl__double.h>
#include <app/Uno.Func__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections.h>
#include <app/Uno.Func__Fuse_Controls_Shape__float.h>
#include <app/Uno.Func__Fuse_Controls_Shape__Fuse_Drawing_Brush.h>
#include <app/Uno.Func__Fuse_Controls_Shape__Fuse_Drawing_Stroke.h>
#include <app/Uno.Func__Fuse_Controls_TextControl__string.h>
#include <app/Uno.Func__Fuse_Controls_ToggleControl__bool.h>
#include <app/Uno.Int.h>
#include <app/Uno.Long.h>
#include <app/Uno.Math.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform.SystemUI.h>
#include <app/Uno.Platform.SystemUIWillResizeEventArgs.h>
#include <app/Uno.Platform.TextInputHint.h>
#include <app/Uno.Platform2.Display.h>
#include <app/Uno.Predicate__object.h>
#include <app/Uno.Rect.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.FileSource.h>
#include <app/Uno.UX.IFactory.h>
#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Property__bool.h>
#include <app/Uno.UX.Property__float4.h>
#include <app/Uno.UX.Template__Fuse_Controls_Page.h>
#include <app/Uno.UX.Template__Fuse_Controls_PageIndicatorDot.h>
#include <app/Uno.UX.ValueChangedArgs__bool.h>
#include <app/Uno.UX.ValueChangedArgs__double.h>
#include <app/Uno.UX.ValueChangedArgs__float.h>
#include <app/Uno.UX.ValueChangedArgs__string.h>
#include <app/Uno.UX.ValueChangedHandler__bool.h>
#include <app/Uno.UX.ValueChangedHandler__double.h>
#include <app/Uno.UX.ValueChangedHandler__float.h>
#include <app/Uno.UX.ValueChangedHandler__string.h>
#include <app/Uno.Vector.h>

namespace app {
namespace Fuse {
namespace Controls {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BackButton__uType* BackButton__typeof()
{
    static ::uStaticStrong<BackButton__uType*> type;
    if (type != NULL) return type;

    type = (BackButton__uType*)::uAllocClassType(sizeof(BackButton__uType), "Fuse.Controls.BackButton", false, 8, 1, 0);

    type->SetBaseType(::app::Fuse::Controls::Button__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(BackButton__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(BackButton__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(BackButton__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(BackButton__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(BackButton__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(BackButton__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(BackButton__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(BackButton__uType, __interface_7));

    type->SetStrongRefs(
        "this_IsEnabled_inst", offsetof(BackButton, this_IsEnabled_inst));

    type->SetFields(1,
        ::uNewField("this_IsEnabled_inst", NULL, offsetof(BackButton, this_IsEnabled_inst), ::app::Fuse::Controls::BackButton_Fuse_Node_bool_IsEnabled_Property__typeof()));

    type->SetFunctions(2,
        ::uNewFunctionVoid("InitializeUX", BackButton__InitializeUX, 0, false),
        ::uNewFunction(".ctor", BackButton__New_3, 0, true, BackButton__typeof()));

    ::uRegisterType(type);
    return type;
}

void BackButton___ObjInit_5(BackButton* __this)
{
    ::app::Fuse::Controls::Button___ObjInit_4(__this);
    __this->InitializeUX();
}

void BackButton__InitializeUX(BackButton* __this)
{
    __this->this_IsEnabled_inst = ::app::Fuse::Controls::BackButton_Fuse_Node_bool_IsEnabled_Property__New_1(NULL, (::app::Fuse::Node*)__this);
    ::app::Fuse::Navigation::WhileCanGoBack* temp = ::app::Fuse::Navigation::WhileCanGoBack__New_1(NULL);
    ::app::Fuse::Animations::Change__bool* temp1 = ::app::Fuse::Animations::Change__bool__New_1(NULL, (::app::Uno::UX::Property__bool*)__this->this_IsEnabled_inst);
    ::app::Fuse::Gestures::Clicked* temp2 = ::app::Fuse::Gestures::Clicked__New_1(NULL);
    ::app::Fuse::Navigation::GoBack* temp3 = ::app::Fuse::Navigation::GoBack__New_1(NULL);
    __this->Name(::uGetConstString("Myself"));
    ::uPtr< ::app::Fuse::Navigation::WhileCanGoBack*>(temp)->Invert(true);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(temp->Animators()), (::app::Fuse::Animations::Animator*)temp1);
    ::uPtr< ::app::Fuse::Animations::Change__bool*>(temp1)->Value(false);
    ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Gestures::Clicked*>(temp2)->Actions()), (::app::Fuse::Triggers::Actions::TriggerAction*)temp3);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(__this->Behaviors()), (::app::Fuse::Behavior*)temp);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(__this->Behaviors()), (::app::Fuse::Behavior*)temp2);
}

BackButton* BackButton__New_3(::uStatic* __this)
{
    BackButton* inst = (BackButton*)::uAllocObject(sizeof(BackButton), BackButton__typeof());
    inst->_ObjInit_5();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BackButton_Fuse_Node_bool_IsEnabled_Property__uType* BackButton_Fuse_Node_bool_IsEnabled_Property__typeof()
{
    static ::uStaticStrong<BackButton_Fuse_Node_bool_IsEnabled_Property__uType*> type;
    if (type != NULL) return type;

    type = (BackButton_Fuse_Node_bool_IsEnabled_Property__uType*)::uAllocClassType(sizeof(BackButton_Fuse_Node_bool_IsEnabled_Property__uType), "Fuse.Controls.BackButton.Fuse_Node_bool_IsEnabled_Property", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::UX::Property__bool__typeof());
    type->__fp_OnGet = (bool(*)(::app::Uno::UX::Property__bool*))BackButton_Fuse_Node_bool_IsEnabled_Property__OnGet;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__bool*, bool, ::uObject*))BackButton_Fuse_Node_bool_IsEnabled_Property__OnSet;

    type->SetStrongRefs(
        "_obj", offsetof(BackButton_Fuse_Node_bool_IsEnabled_Property, _obj));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", BackButton_Fuse_Node_bool_IsEnabled_Property__New_1, 0, true, BackButton_Fuse_Node_bool_IsEnabled_Property__typeof(), ::app::Fuse::Node__typeof()));

    ::uRegisterType(type);
    return type;
}

void BackButton_Fuse_Node_bool_IsEnabled_Property___ObjInit_1(BackButton_Fuse_Node_bool_IsEnabled_Property* __this, ::app::Fuse::Node* obj)
{
    ::app::Uno::UX::Property__bool___ObjInit(__this);
    __this->_obj = obj;
}

BackButton_Fuse_Node_bool_IsEnabled_Property* BackButton_Fuse_Node_bool_IsEnabled_Property__New_1(::uStatic* __this, ::app::Fuse::Node* obj)
{
    BackButton_Fuse_Node_bool_IsEnabled_Property* inst = (BackButton_Fuse_Node_bool_IsEnabled_Property*)::uAllocObject(sizeof(BackButton_Fuse_Node_bool_IsEnabled_Property), BackButton_Fuse_Node_bool_IsEnabled_Property__typeof());
    inst->_ObjInit_1(obj);
    return inst;
}

bool BackButton_Fuse_Node_bool_IsEnabled_Property__OnGet(BackButton_Fuse_Node_bool_IsEnabled_Property* __this)
{
    return ::uPtr< ::app::Fuse::Node*>(__this->_obj)->IsEnabled();
}

void BackButton_Fuse_Node_bool_IsEnabled_Property__OnSet(BackButton_Fuse_Node_bool_IsEnabled_Property* __this, bool v, ::uObject* origin)
{
    ::uPtr< ::app::Fuse::Node*>(__this->_obj)->IsEnabled(v);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BeginRemoveArgsImpl__uType* BeginRemoveArgsImpl__typeof()
{
    static ::uStaticStrong<BeginRemoveArgsImpl__uType*> type;
    if (type != NULL) return type;

    type = (BeginRemoveArgsImpl__uType*)::uAllocClassType(sizeof(BeginRemoveArgsImpl__uType), "Fuse.Controls.BeginRemoveArgsImpl", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::BeginRemoveArgs__typeof());
    type->__fp_Remove = (void(*)(::app::Fuse::BeginRemoveArgs*))BeginRemoveArgsImpl__Remove;

    type->SetStrongRefs(
        "_Child", offsetof(BeginRemoveArgsImpl, _Child),
        "_Parent", offsetof(BeginRemoveArgsImpl, _Parent));

    type->SetFunctions(5,
        ::uNewFunction("get_Child", BeginRemoveArgsImpl__get_Child, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunction("get_Parent", BeginRemoveArgsImpl__get_Parent, 0, false, ::app::Fuse::Controls::Panel__typeof()),
        ::uNewFunction(".ctor", BeginRemoveArgsImpl__New_2, 0, true, BeginRemoveArgsImpl__typeof(), ::app::Fuse::Node__typeof(), ::app::Fuse::Controls::Panel__typeof()),
        ::uNewFunctionVoid("set_Child", BeginRemoveArgsImpl__set_Child, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("set_Parent", BeginRemoveArgsImpl__set_Parent, 0, false, ::app::Fuse::Controls::Panel__typeof()));

    ::uRegisterType(type);
    return type;
}

void BeginRemoveArgsImpl___ObjInit_2(BeginRemoveArgsImpl* __this, ::app::Fuse::Node* child, ::app::Fuse::Controls::Panel* parent)
{
    ::app::Fuse::BeginRemoveArgs___ObjInit_1(__this);
    __this->Parent(parent);
    __this->Child(child);
}

::app::Fuse::Node* BeginRemoveArgsImpl__get_Child(BeginRemoveArgsImpl* __this)
{
    return __this->_Child;
}

::app::Fuse::Controls::Panel* BeginRemoveArgsImpl__get_Parent(BeginRemoveArgsImpl* __this)
{
    return __this->_Parent;
}

BeginRemoveArgsImpl* BeginRemoveArgsImpl__New_2(::uStatic* __this, ::app::Fuse::Node* child, ::app::Fuse::Controls::Panel* parent)
{
    BeginRemoveArgsImpl* inst = (BeginRemoveArgsImpl*)::uAllocObject(sizeof(BeginRemoveArgsImpl), BeginRemoveArgsImpl__typeof());
    inst->_ObjInit_2(child, parent);
    return inst;
}

void BeginRemoveArgsImpl__Remove(BeginRemoveArgsImpl* __this)
{
    ::uPtr< ::app::Fuse::Controls::Panel*>(__this->Parent())->EndRemoveChild(__this->Child());
}

void BeginRemoveArgsImpl__set_Child(BeginRemoveArgsImpl* __this, ::app::Fuse::Node* value)
{
    __this->_Child = value;
}

void BeginRemoveArgsImpl__set_Parent(BeginRemoveArgsImpl* __this, ::app::Fuse::Controls::Panel* value)
{
    __this->_Parent = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BottomBarBackground__uType* BottomBarBackground__typeof()
{
    static ::uStaticStrong<BottomBarBackground__uType*> type;
    if (type != NULL) return type;

    type = (BottomBarBackground__uType*)::uAllocClassType(sizeof(BottomBarBackground__uType), "Fuse.Controls.BottomBarBackground", false, 6, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::BottomFrameBackground__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(BottomBarBackground__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(BottomBarBackground__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(BottomBarBackground__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(BottomBarBackground__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(BottomBarBackground__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(BottomBarBackground__uType, __interface_5));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", BottomBarBackground__New_2, 0, true, BottomBarBackground__typeof()));

    ::uRegisterType(type);
    return type;
}

void BottomBarBackground___ObjInit_4(BottomBarBackground* __this)
{
    ::app::Fuse::Controls::BottomFrameBackground___ObjInit_3(__this);
}

BottomBarBackground* BottomBarBackground__New_2(::uStatic* __this)
{
    BottomBarBackground* inst = (BottomBarBackground*)::uAllocObject(sizeof(BottomBarBackground), BottomBarBackground__typeof());
    inst->_ObjInit_4();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BottomFrameBackground__uType* BottomFrameBackground__typeof()
{
    static ::uStaticStrong<BottomFrameBackground__uType*> type;
    if (type != NULL) return type;

    type = (BottomFrameBackground__uType*)::uAllocClassType(sizeof(BottomFrameBackground__uType), "Fuse.Controls.BottomFrameBackground", false, 6, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::Control__typeof());
    type->__fp_GetContentSize = (::app::Uno::Float2(*)(::app::Fuse::Elements::Element*, ::app::Uno::Float2, int))BottomFrameBackground__GetContentSize;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))BottomFrameBackground__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))BottomFrameBackground__OnUnrooted;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(BottomFrameBackground__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(BottomFrameBackground__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(BottomFrameBackground__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(BottomFrameBackground__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(BottomFrameBackground__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(BottomFrameBackground__uType, __interface_5));

    type->SetFields(3,
        ::uNewField("_height", NULL, offsetof(BottomFrameBackground, _height_1), ::app::Uno::Float__typeof()),
        ::uNewField("_includesKeyboard", NULL, offsetof(BottomFrameBackground, _includesKeyboard), ::app::Uno::Bool__typeof()),
        ::uNewField("_keyboardVisibleThreshold", NULL, offsetof(BottomFrameBackground, _keyboardVisibleThreshold), ::app::Uno::Float__typeof()));

    type->SetFunctions(6,
        ::uNewFunction("get_IncludesKeyboard", BottomFrameBackground__get_IncludesKeyboard, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_KeyboardVisibleThreshold", BottomFrameBackground__get_KeyboardVisibleThreshold, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", BottomFrameBackground__New_1, 0, true, BottomFrameBackground__typeof()),
        ::uNewFunctionVoid("OnFrameResized", BottomFrameBackground__OnFrameResized, 0, false, ::uObject__typeof(), ::app::Uno::Platform::SystemUIWillResizeEventArgs__typeof()),
        ::uNewFunctionVoid("set_IncludesKeyboard", BottomFrameBackground__set_IncludesKeyboard, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_KeyboardVisibleThreshold", BottomFrameBackground__set_KeyboardVisibleThreshold, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void BottomFrameBackground___ObjInit_3(BottomFrameBackground* __this)
{
    __this->_includesKeyboard = true;
    __this->_keyboardVisibleThreshold = 150.0f;
    ::app::Fuse::Controls::Control___ObjInit_2(__this);
}

bool BottomFrameBackground__get_IncludesKeyboard(BottomFrameBackground* __this)
{
    return __this->_includesKeyboard;
}

float BottomFrameBackground__get_KeyboardVisibleThreshold(BottomFrameBackground* __this)
{
    return __this->_keyboardVisibleThreshold;
}

::app::Uno::Float2 BottomFrameBackground__GetContentSize(BottomFrameBackground* __this, ::app::Uno::Float2 fillSize, int fillSet)
{
    {
        ::app::Uno::Platform2::Display* display = ::app::Uno::Platform2::Display__get_MainDisplay(NULL);
        return ::app::Uno::Float2__New_2(NULL, fillSize.X, __this->_height_1 / ::uPtr< ::app::Uno::Platform2::Display*>(display)->Density());
    }

    return ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f);
}

BottomFrameBackground* BottomFrameBackground__New_1(::uStatic* __this)
{
    BottomFrameBackground* inst = (BottomFrameBackground*)::uAllocObject(sizeof(BottomFrameBackground), BottomFrameBackground__typeof());
    inst->_ObjInit_3();
    return inst;
}

void BottomFrameBackground__OnFrameResized(BottomFrameBackground* __this, ::uObject* sender, ::app::Uno::Platform::SystemUIWillResizeEventArgs* args)
{
    float newHeight = ::uPtr< ::app::Uno::Platform::SystemUIWillResizeEventArgs*>(args)->EndFrame().Size().Y;

    if (__this->IncludesKeyboard() || (newHeight < __this->KeyboardVisibleThreshold()))
    {
        __this->_height_1 = newHeight;
        __this->InvalidateLayout(2);
    }
}

void BottomFrameBackground__OnRooted(BottomFrameBackground* __this)
{
    ::app::Fuse::Controls::Control__OnRooted(__this);
    {
        __this->_height_1 = ::app::Uno::Platform::SystemUI__get_BottomFrame(NULL).Size().Y;
        ::app::Uno::Platform::SystemUI__add_BottomFrameWillResize(NULL, ::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform_SystemUIWillResizeEventArgs__typeof(), (const void*)BottomFrameBackground__OnFrameResized, __this));
    }
}

void BottomFrameBackground__OnUnrooted(BottomFrameBackground* __this)
{
    ::app::Fuse::Controls::Control__OnUnrooted(__this);
    ::app::Uno::Platform::SystemUI__remove_BottomFrameWillResize(NULL, ::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform_SystemUIWillResizeEventArgs__typeof(), (const void*)BottomFrameBackground__OnFrameResized, __this));
}

void BottomFrameBackground__set_IncludesKeyboard(BottomFrameBackground* __this, bool value)
{
    if (__this->_includesKeyboard != value)
    {
        __this->_includesKeyboard = value;
        __this->InvalidateLayout(2);
    }
}

void BottomFrameBackground__set_KeyboardVisibleThreshold(BottomFrameBackground* __this, float value)
{
    if (__this->_keyboardVisibleThreshold != value)
    {
        __this->_keyboardVisibleThreshold = value;
        __this->InvalidateLayout(2);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Button__string*> Button__TextProperty;

Button__uType* Button__typeof()
{
    static ::uStaticStrong<Button__uType*> type;
    if (type != NULL) return type;

    type = (Button__uType*)::uAllocClassType(sizeof(Button__uType), "Fuse.Controls.Button", false, 8, 2, 0);

    type->SetBaseType(::app::Fuse::Controls::Panel__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Button__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(Button__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(Button__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(Button__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(Button__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(Button__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(Button__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(Button__uType, __interface_7));

    type->SetStrongRefs(
        "_text", offsetof(Button, _text),
        "TextChanged", offsetof(Button, TextChanged));

    type->SetFields(2,
        ::uNewField("_text", NULL, offsetof(Button, _text), ::app::Uno::String__typeof()),
        ::uNewField("TextProperty", &Button__TextProperty, 0, ::app::Fuse::StyleProperty__Fuse_Controls_Button__string__typeof()));

    type->SetFunctions(9,
        ::uNewFunctionVoid("add_TextChanged", Button__add_TextChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__string__typeof()),
        ::uNewFunction("get_Text", Button__get_Text, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("GetText", Button__GetText, 0, true, ::app::Uno::String__typeof(), Button__typeof()),
        ::uNewFunction(".ctor", Button__New_2, 0, true, Button__typeof()),
        ::uNewFunctionVoid("OnTextChanged", Button__OnTextChanged, 0, false, ::app::Uno::String__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("remove_TextChanged", Button__remove_TextChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__string__typeof()),
        ::uNewFunctionVoid("set_Text", Button__set_Text, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("SetText", Button__SetText, 0, true, Button__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("SetText", Button__SetText_1, 0, false, ::app::Uno::String__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void Button___ObjInit_4(Button* __this)
{
    __this->_text = ::uGetConstString("");
    ::app::Fuse::Controls::Panel___ObjInit_3(__this);
}

void Button___TypeInit_4(::uStatic* __this)
{
    Button__TextProperty = ::app::Fuse::StyleProperty__Fuse_Controls_Button__string__New_2(NULL, ::uGetConstString(""), NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Button__string__typeof(), (const void*)Button__SetText), ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Controls_Button__string__typeof(), (const void*)Button__GetText));
}

void Button__add_TextChanged(Button* __this, ::uDelegate* value)
{
    __this->TextChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->TextChanged, (::uDelegate*)value), ::app::Uno::UX::ValueChangedHandler__string__typeof());
}

::uString* Button__get_Text(Button* __this)
{
    return Button__GetText(NULL, __this);
}

::uString* Button__GetText(::uStatic* __this, Button* b)
{
    return ::uPtr< Button*>(b)->_text;
}

Button* Button__New_2(::uStatic* __this)
{
    Button* inst = (Button*)::uAllocObject(sizeof(Button), Button__typeof());
    inst->_ObjInit_4();
    return inst;
}

void Button__OnTextChanged(Button* __this, ::uString* value, ::uString* orig)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->TextChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->TextChanged)->InvokeVoid< ::uObject*, ::app::Uno::UX::ValueChangedArgs__string*>((::uObject*)__this, ::app::Uno::UX::ValueChangedArgs__string__New_2(NULL, value, (::uObject*)orig));
    }
}

void Button__remove_TextChanged(Button* __this, ::uDelegate* value)
{
    __this->TextChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->TextChanged, (::uDelegate*)value), ::app::Uno::UX::ValueChangedHandler__string__typeof());
}

void Button__set_Text(Button* __this, ::uString* value)
{
    Button__SetText(NULL, __this, value);
}

void Button__SetText(::uStatic* __this, Button* b, ::uString* value)
{
    if (::app::Uno::String__op_Inequality(NULL, ::uPtr< Button*>(b)->_text, value))
    {
        ::uString* s = ::uPtr< Button*>(b)->_text;
        b->_text = value;
        b->OnTextChanged(value, s);
    }
}

void Button__SetText_1(Button* __this, ::uString* value, ::uObject* origin)
{
    __this->Text(value);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Circle__uType* Circle__typeof()
{
    static ::uStaticStrong<Circle__uType*> type;
    if (type != NULL) return type;

    type = (Circle__uType*)::uAllocClassType(sizeof(Circle__uType), "Fuse.Controls.Circle", false, 8, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::Shape__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Circle__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(Circle__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(Circle__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(Circle__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(Circle__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(Circle__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(Circle__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(Circle__uType, __interface_7));

    type->SetFields(5,
        ::uNewField("_endAngle", NULL, offsetof(Circle, _endAngle), ::app::Uno::Float__typeof()),
        ::uNewField("_hasAngle", NULL, offsetof(Circle, _hasAngle), ::app::Uno::Bool__typeof()),
        ::uNewField("_hasLengthAngle", NULL, offsetof(Circle, _hasLengthAngle), ::app::Uno::Bool__typeof()),
        ::uNewField("_lengthAngle", NULL, offsetof(Circle, _lengthAngle), ::app::Uno::Float__typeof()),
        ::uNewField("_startAngle", NULL, offsetof(Circle, _startAngle), ::app::Uno::Float__typeof()));

    type->SetFunctions(19,
        ::uNewFunction("AngleInRange", Circle__AngleInRange, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Center", Circle__get_Center, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_EffectiveEndAngle", Circle__get_EffectiveEndAngle, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_EffectiveEndAngleDegrees", Circle__get_EffectiveEndAngleDegrees, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_EndAngle", Circle__get_EndAngle, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_EndAngleDegrees", Circle__get_EndAngleDegrees, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_LengthAngle", Circle__get_LengthAngle, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_LengthAngleDegrees", Circle__get_LengthAngleDegrees, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Radius", Circle__get_Radius, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_StartAngle", Circle__get_StartAngle, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_StartAngleDegrees", Circle__get_StartAngleDegrees, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_UseAngle", Circle__get_UseAngle, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", Circle__New_2, 0, true, Circle__typeof()),
        ::uNewFunctionVoid("set_EndAngle", Circle__set_EndAngle, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_EndAngleDegrees", Circle__set_EndAngleDegrees, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_LengthAngle", Circle__set_LengthAngle, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_LengthAngleDegrees", Circle__set_LengthAngleDegrees, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_StartAngle", Circle__set_StartAngle, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_StartAngleDegrees", Circle__set_StartAngleDegrees, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Circle___ObjInit_5(Circle* __this)
{
    ::app::Fuse::Controls::Shape___ObjInit_4(__this);
}

bool Circle__AngleInRange(::uStatic* __this, float angle, float start, float end)
{
    angle = ::app::Uno::Math__Mod_1(NULL, angle, 6.28318548f);
    float pStartAngle = ::app::Uno::Math__Mod_1(NULL, start, 6.28318548f);
    float pEndAngle = ::app::Uno::Math__Mod_1(NULL, end, 6.28318548f);

    if (pStartAngle > pEndAngle)
    {
        return (angle > pStartAngle) || (angle < pEndAngle);
    }
    else
    {
        return (angle > pStartAngle) && (angle < pEndAngle);
    }
}

::app::Uno::Float2 Circle__get_Center(Circle* __this)
{
    return ::app::Uno::Float2__op_Division_1(NULL, __this->ActualSize(), 2.0f);
}

float Circle__get_EffectiveEndAngle(Circle* __this)
{
    return __this->_hasLengthAngle ? (__this->_startAngle + __this->_lengthAngle) : __this->_endAngle;
}

float Circle__get_EffectiveEndAngleDegrees(Circle* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->EffectiveEndAngle());
}

float Circle__get_EndAngle(Circle* __this)
{
    return __this->_endAngle;
}

float Circle__get_EndAngleDegrees(Circle* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->_endAngle);
}

float Circle__get_LengthAngle(Circle* __this)
{
    return __this->_lengthAngle;
}

float Circle__get_LengthAngleDegrees(Circle* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->_lengthAngle);
}

float Circle__get_Radius(Circle* __this)
{
    return ::app::Uno::Math__Min_1(NULL, __this->ActualSize().X, __this->ActualSize().Y) * 0.5f;
}

float Circle__get_StartAngle(Circle* __this)
{
    return __this->_startAngle;
}

float Circle__get_StartAngleDegrees(Circle* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_1(NULL, __this->_startAngle);
}

bool Circle__get_UseAngle(Circle* __this)
{
    if (!__this->_hasAngle)
    {
        return false;
    }

    if (__this->_hasLengthAngle && (__this->_lengthAngle >= 6.28318548f))
    {
        return false;
    }

    return true;
}

Circle* Circle__New_2(::uStatic* __this)
{
    Circle* inst = (Circle*)::uAllocObject(sizeof(Circle), Circle__typeof());
    inst->_ObjInit_5();
    return inst;
}

void Circle__set_EndAngle(Circle* __this, float value)
{
    __this->_endAngle = value;
    __this->OnShapeChanged();
}

void Circle__set_EndAngleDegrees(Circle* __this, float value)
{
    __this->EndAngle(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Circle__set_LengthAngle(Circle* __this, float value)
{
    __this->_lengthAngle = value;
    __this->_hasLengthAngle = true;
    __this->OnShapeChanged();
}

void Circle__set_LengthAngleDegrees(Circle* __this, float value)
{
    __this->LengthAngle(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

void Circle__set_StartAngle(Circle* __this, float value)
{
    __this->_startAngle = value;
    __this->_hasAngle = true;
    __this->OnShapeChanged();
}

void Circle__set_StartAngleDegrees(Circle* __this, float value)
{
    __this->StartAngle(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ClientPanel__uType* ClientPanel__typeof()
{
    static ::uStaticStrong<ClientPanel__uType*> type;
    if (type != NULL) return type;

    type = (ClientPanel__uType*)::uAllocClassType(sizeof(ClientPanel__uType), "Fuse.Controls.ClientPanel", false, 8, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::DockPanel__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(ClientPanel__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(ClientPanel__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(ClientPanel__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(ClientPanel__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(ClientPanel__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(ClientPanel__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(ClientPanel__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(ClientPanel__uType, __interface_7));

    type->SetFunctions(2,
        ::uNewFunctionVoid("InitializeUX", ClientPanel__InitializeUX, 0, false),
        ::uNewFunction(".ctor", ClientPanel__New_3, 0, true, ClientPanel__typeof()));

    ::uRegisterType(type);
    return type;
}

void ClientPanel___ObjInit_5(ClientPanel* __this)
{
    ::app::Fuse::Controls::DockPanel___ObjInit_4(__this);
    __this->InitializeUX();
}

void ClientPanel__InitializeUX(ClientPanel* __this)
{
    ::app::Fuse::Controls::TopFrameBackground* temp = ::app::Fuse::Controls::TopFrameBackground__New_1(NULL);
    ::app::Fuse::Controls::BottomFrameBackground* temp1 = ::app::Fuse::Controls::BottomFrameBackground__New_1(NULL);
    ::app::Fuse::Controls::DockPanel__SetDock(NULL, (::app::Fuse::Elements::Element*)temp, 2);
    ::app::Fuse::Controls::DockPanel__SetDock(NULL, (::app::Fuse::Elements::Element*)temp1, 3);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(__this->Children()), (::app::Fuse::Node*)temp);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(__this->Children()), (::app::Fuse::Node*)temp1);
}

ClientPanel* ClientPanel__New_3(::uStatic* __this)
{
    ClientPanel* inst = (ClientPanel*)::uAllocObject(sizeof(ClientPanel), ClientPanel__typeof());
    inst->_ObjInit_5();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContentControl__uType* ContentControl__typeof()
{
    static ::uStaticStrong<ContentControl__uType*> type;
    if (type != NULL) return type;

    type = (ContentControl__uType*)::uAllocClassType(sizeof(ContentControl__uType), "Fuse.Controls.ContentControl", false, 6, 1, 0);

    type->SetBaseType(::app::Fuse::Controls::Control__typeof());
    type->__fp_ArrangePaddingBox = (void(*)(::app::Fuse::Elements::Element*, ::app::Uno::Float2))ContentControl__ArrangePaddingBox;
    type->__fp_CalcRenderBounds = (::app::Uno::Rect(*)(::app::Fuse::Elements::Element*))ContentControl__CalcRenderBounds;
    type->__fp_get_SubNodeCount = (int(*)(::app::Fuse::Node*))ContentControl__get_SubNodeCount;
    type->__fp_GetContentSize = (::app::Uno::Float2(*)(::app::Fuse::Elements::Element*, ::app::Uno::Float2, int))ContentControl__GetContentSize;
    type->__fp_GetSubNode = (::app::Fuse::Node*(*)(::app::Fuse::Node*, int))ContentControl__GetSubNode;
    type->__fp_OnContentChanged = ContentControl__OnContentChanged;
    type->__fp_OnDrawControl = (void(*)(::app::Fuse::Controls::Control*, ::app::Fuse::DrawContext*))ContentControl__OnDrawControl;
    type->__fp_OnHitTestChildren = (void(*)(::app::Fuse::Elements::Element*, ::app::Fuse::HitTestContext*))ContentControl__OnHitTestChildren;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(ContentControl__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(ContentControl__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(ContentControl__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(ContentControl__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(ContentControl__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(ContentControl__uType, __interface_5));

    type->SetStrongRefs(
        "_content", offsetof(ContentControl, _content));

    type->SetFields(1,
        ::uNewField("_content", NULL, offsetof(ContentControl, _content), ::app::Fuse::Node__typeof()));

    type->SetFunctions(4,
        ::uNewFunction("get_Content", ContentControl__get_Content, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunction(".ctor", ContentControl__New_1, 0, true, ContentControl__typeof()),
        ::uNewFunctionVoid("OnContentChanged", type->__fp_OnContentChanged, offsetof(ContentControl__uType, __fp_OnContentChanged), false, ::app::Fuse::Node__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("set_Content", ContentControl__set_Content, 0, false, ::app::Fuse::Node__typeof()));

    ::uRegisterType(type);
    return type;
}

void ContentControl___ObjInit_3(ContentControl* __this)
{
    ::app::Fuse::Controls::Control___ObjInit_2(__this);
}

void ContentControl__ArrangePaddingBox(ContentControl* __this, ::app::Uno::Float2 size)
{
    ::app::Uno::Float4 ind_123 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_124 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_125 = ::app::Uno::Float4();

    if (__this->Content() != NULL)
    {
        ::uPtr< ::app::Fuse::Node*>(__this->Content())->ArrangeMarginBox((ind_123 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y)), ::app::Uno::Float2__op_Subtraction_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, size, (ind_124 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_124.X, ind_124.Y))), (ind_125 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_125.Z, ind_125.W))), 3);
    }
}

::app::Uno::Rect ContentControl__CalcRenderBounds(ContentControl* __this)
{
    ::app::Uno::Rect baseRect = ::app::Fuse::Elements::Element__CalcRenderBounds(__this);

    if (__this->Content() != NULL)
    {
        baseRect = ::app::Uno::Rect__Union(NULL, baseRect, ::uPtr< ::app::Fuse::Node*>(__this->Content())->CalcRenderBoundsInParentSpace());
    }

    return baseRect;
}

::app::Fuse::Node* ContentControl__get_Content(ContentControl* __this)
{
    return __this->_content;
}

int ContentControl__get_SubNodeCount(ContentControl* __this)
{
    return ::app::Fuse::Node__get_SubNodeCount(__this) + ((__this->Content() == NULL) ? 0 : 1);
}

::app::Uno::Float2 ContentControl__GetContentSize(ContentControl* __this, ::app::Uno::Float2 fillSize, int fillSet)
{
    if (__this->Content() != NULL)
    {
        return ::uPtr< ::app::Fuse::Node*>(__this->Content())->GetMarginSize(fillSize, fillSet);
    }

    return ::app::Fuse::Elements::Element__GetContentSize(__this, fillSize, fillSet);
}

::app::Fuse::Node* ContentControl__GetSubNode(ContentControl* __this, int index)
{
    int b = ::app::Fuse::Node__get_SubNodeCount(__this);

    if (index >= b)
    {
        return __this->Content();
    }

    return ::app::Fuse::Node__GetSubNode(__this, index);
}

ContentControl* ContentControl__New_1(::uStatic* __this)
{
    ContentControl* inst = (ContentControl*)::uAllocObject(sizeof(ContentControl), ContentControl__typeof());
    inst->_ObjInit_3();
    return inst;
}

void ContentControl__OnContentChanged(ContentControl* __this, ::app::Fuse::Node* oldContent, ::app::Fuse::Node* newContent)
{
    __this->InvalidateLayout(2);
}

void ContentControl__OnDrawControl(ContentControl* __this, ::app::Fuse::DrawContext* dc)
{
    if (__this->Content() != NULL)
    {
        ::uPtr< ::app::Fuse::Node*>(__this->Content())->Draw(dc);
    }
}

void ContentControl__OnHitTestChildren(ContentControl* __this, ::app::Fuse::HitTestContext* htc)
{
    if (__this->Content() != NULL)
    {
        ::uPtr< ::app::Fuse::Node*>(__this->Content())->HitTest(htc);
    }

    ::app::Fuse::Elements::Element__OnHitTestChildren(__this, htc);
}

void ContentControl__set_Content(ContentControl* __this, ::app::Fuse::Node* value)
{
    if (__this->_content != value)
    {
        ::app::Fuse::Node* old = __this->_content;

        if ((__this->_content != NULL) && (::uPtr< ::app::Fuse::Node*>(__this->_content)->Parent() == __this))
        {
            ::uPtr< ::app::Fuse::Node*>(__this->_content)->OnRemoved((::app::Fuse::Node*)__this);
        }

        __this->_content = value;

        if ((__this->_content != NULL) && (::uPtr< ::app::Fuse::Node*>(__this->_content)->Parent() != __this))
        {
            ::uPtr< ::app::Fuse::Node*>(__this->_content)->OnAdded((::app::Fuse::Node*)__this);
        }

        __this->OnContentChanged(old, value);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush*> Control__BackgroundProperty;

Control__uType* Control__typeof()
{
    static ::uStaticStrong<Control__uType*> type;
    if (type != NULL) return type;

    type = (Control__uType*)::uAllocClassType(sizeof(Control__uType), "Fuse.Controls.Control", false, 6, 3, 0);

    type->SetBaseType(::app::Fuse::Elements::Element__typeof());
    type->__fp_get_HitTestLocalVisualBounds = (::app::Fuse::NodeBounds*(*)(::app::Fuse::Elements::Element*))Control__get_HitTestLocalVisualBounds;
    type->__fp_get_LocalDrawCount = (::app::Fuse::NodeDrawCount(*)(::app::Fuse::Node*))Control__get_LocalDrawCount;
    type->__fp_OnDraw = (void(*)(::app::Fuse::Elements::Element*, ::app::Fuse::DrawContext*))Control__OnDraw;
    type->__fp_OnDrawControl = Control__OnDrawControl;
    type->__fp_OnHitTestLocalVisual = (void(*)(::app::Fuse::Elements::Element*, ::app::Fuse::HitTestContext*))Control__OnHitTestLocalVisual;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))Control__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))Control__OnUnrooted;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Control__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(Control__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(Control__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(Control__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(Control__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(Control__uType, __interface_5));

    type->SetStrongRefs(
        "_background", offsetof(Control, _background),
        "ControlRenderPropertyChanged", offsetof(Control, ControlRenderPropertyChanged),
        "IsInteractingChanged", offsetof(Control, IsInteractingChanged));

    type->SetFields(3,
        ::uNewField("_background", NULL, offsetof(Control, _background), ::app::Fuse::Drawing::Brush__typeof()),
        ::uNewField("_isInteracting", NULL, offsetof(Control, _isInteracting), ::app::Uno::Bool__typeof()),
        ::uNewField("BackgroundProperty", &Control__BackgroundProperty, 0, ::app::Fuse::StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__typeof()));

    type->SetFunctions(14,
        ::uNewFunctionVoid("add_ControlRenderPropertyChanged", Control__add_ControlRenderPropertyChanged, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("add_IsInteractingChanged", Control__add_IsInteractingChanged, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("DrawBackground", Control__DrawBackground, 0, false, ::app::Fuse::DrawContext__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Background", Control__get_Background, 0, false, ::app::Fuse::Drawing::Brush__typeof()),
        ::uNewFunction("get_IsInteracting", Control__get_IsInteracting, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("GetBackground", Control__GetBackground, 0, true, ::app::Fuse::Drawing::Brush__typeof(), Control__typeof()),
        ::uNewFunctionVoid("OnBackgroundChanged", Control__OnBackgroundChanged, 0, true, Control__typeof()),
        ::uNewFunctionVoid("OnControlRenderPropertyChanged", Control__OnControlRenderPropertyChanged, 0, false),
        ::uNewFunctionVoid("OnDrawControl", type->__fp_OnDrawControl, offsetof(Control__uType, __fp_OnDrawControl), false, ::app::Fuse::DrawContext__typeof()),
        ::uNewFunctionVoid("remove_ControlRenderPropertyChanged", Control__remove_ControlRenderPropertyChanged, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("remove_IsInteractingChanged", Control__remove_IsInteractingChanged, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("set_Background", Control__set_Background, 0, false, ::app::Fuse::Drawing::Brush__typeof()),
        ::uNewFunctionVoid("SetBackground", Control__SetBackground, 0, true, Control__typeof(), ::app::Fuse::Drawing::Brush__typeof()),
        ::uNewFunctionVoid("SetIsInteracting", Control__SetIsInteracting, 0, false, ::uObject__typeof(), ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Control___ObjInit_2(Control* __this)
{
    ::app::Fuse::Elements::Element___ObjInit_1(__this);
}

void Control___TypeInit_2(::uStatic* __this)
{
    Control__BackgroundProperty = ::app::Fuse::StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__New_2(NULL, NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Control__typeof(), (const void*)Control__OnBackgroundChanged), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Control__Fuse_Drawing_Brush__typeof(), (const void*)Control__SetBackground), ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Controls_Control__Fuse_Drawing_Brush__typeof(), (const void*)Control__GetBackground));
}

void Control__add_ControlRenderPropertyChanged(Control* __this, ::uDelegate* value)
{
    __this->ControlRenderPropertyChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ControlRenderPropertyChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void Control__add_IsInteractingChanged(Control* __this, ::uDelegate* value)
{
    __this->IsInteractingChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->IsInteractingChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void Control__DrawBackground(Control* __this, ::app::Fuse::DrawContext* dc, float opacity)
{
    if ((__this->Background() != NULL) && !::uPtr< ::app::Fuse::Drawing::Brush*>(__this->Background())->IsCompletelyTransparent())
    {
        ::uPtr< ::app::Fuse::Drawing::Brush*>(__this->Background())->Prepare(dc, __this->ActualSize());
        ::uPtr< ::app::Fuse::Internal::Drawing::SolidRectangle*>(::app::Fuse::Internal::Drawing::SolidRectangle__Impl)->DrawElement(dc, (::app::Fuse::Elements::Element*)__this, __this->Background(), opacity);
    }
}

::app::Fuse::Drawing::Brush* Control__get_Background(Control* __this)
{
    return __this->_background;
}

::app::Fuse::NodeBounds* Control__get_HitTestLocalVisualBounds(Control* __this)
{
    ::app::Fuse::NodeBounds* nb = ::app::Fuse::Elements::Element__get_HitTestLocalVisualBounds(__this);

    if (__this->Background() != NULL)
    {
        nb = ::uPtr< ::app::Fuse::NodeBounds*>(nb)->AddRect(::app::Uno::Float2__New_1(NULL, 0.0f), __this->ActualSize());
    }

    return nb;
}

bool Control__get_IsInteracting(Control* __this)
{
    return __this->_isInteracting;
}

::app::Fuse::NodeDrawCount Control__get_LocalDrawCount(Control* __this)
{
    ::app::Fuse::NodeDrawCount dc = ::uDefault< ::app::Fuse::NodeDrawCount>();

    if (__this->Background() != NULL)
    {
        dc.Draw = dc.Draw + 1;
        dc.Pixels = dc.Pixels + (::uLong)((__this->ActualSize().X * __this->ActualSize().Y) * __this->PointDensity());
    }

    return dc;
}

::app::Fuse::Drawing::Brush* Control__GetBackground(::uStatic* __this, Control* c)
{
    return ::uPtr< Control*>(c)->_background;
}

void Control__OnBackgroundChanged(::uStatic* __this, Control* c)
{
    ::uPtr< Control*>(c)->OnControlRenderPropertyChanged();
}

void Control__OnControlRenderPropertyChanged(Control* __this)
{
    __this->InvalidateVisual();

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ControlRenderPropertyChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ControlRenderPropertyChanged)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

void Control__OnDraw(Control* __this, ::app::Fuse::DrawContext* dc)
{
    __this->DrawBackground(dc, 1.0f);
    __this->OnDrawControl(dc);
}

void Control__OnDrawControl(Control* __this, ::app::Fuse::DrawContext* dc)
{
}

void Control__OnHitTestLocalVisual(Control* __this, ::app::Fuse::HitTestContext* htc)
{
    if ((__this->Background() != NULL) && __this->IsPointInside(::uPtr< ::app::Fuse::HitTestContext*>(htc)->LocalPoint()))
    {
        ::uPtr< ::app::Fuse::HitTestContext*>(htc)->Hit((::app::Fuse::Node*)__this);
    }

    ::app::Fuse::Elements::Element__OnHitTestLocalVisual(__this, htc);
}

void Control__OnRooted(Control* __this)
{
    ::app::Fuse::Elements::Element__OnRooted(__this);

    if (__this->_background != NULL)
    {
        ::uPtr< ::app::Fuse::Drawing::Brush*>(__this->_background)->Pin();
    }
}

void Control__OnUnrooted(Control* __this)
{
    if (__this->_background != NULL)
    {
        ::uPtr< ::app::Fuse::Drawing::Brush*>(__this->_background)->Unpin();
    }

    ::app::Fuse::Elements::Element__OnUnrooted(__this);
}

void Control__remove_ControlRenderPropertyChanged(Control* __this, ::uDelegate* value)
{
    __this->ControlRenderPropertyChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->ControlRenderPropertyChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void Control__remove_IsInteractingChanged(Control* __this, ::uDelegate* value)
{
    __this->IsInteractingChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->IsInteractingChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void Control__set_Background(Control* __this, ::app::Fuse::Drawing::Brush* value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush*>(Control__BackgroundProperty)->Set(__this, value);
}

void Control__SetBackground(::uStatic* __this, Control* c, ::app::Fuse::Drawing::Brush* value)
{
    if (::uPtr< Control*>(c)->IsLocalRooted() && (::uPtr< Control*>(c)->_background != NULL))
    {
        ::uPtr< ::app::Fuse::Drawing::Brush*>(::uPtr< Control*>(c)->_background)->Unpin();
    }

    if (::uIs(c->_background, ::app::Fuse::Drawing::DynamicBrush__typeof()))
    {
        ::uPtr< ::app::Fuse::Drawing::DynamicBrush*>(::uCast< ::app::Fuse::Drawing::DynamicBrush*>(c->_background, ::app::Fuse::Drawing::DynamicBrush__typeof()))->remove_ShadingChanged(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Control__OnControlRenderPropertyChanged, c));
    }

    c->_background = value;

    if (::uIs(c->_background, ::app::Fuse::Drawing::DynamicBrush__typeof()))
    {
        ::uPtr< ::app::Fuse::Drawing::DynamicBrush*>(::uCast< ::app::Fuse::Drawing::DynamicBrush*>(c->_background, ::app::Fuse::Drawing::DynamicBrush__typeof()))->add_ShadingChanged(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Control__OnControlRenderPropertyChanged, c));
    }

    if (c->IsLocalRooted() && (c->_background != NULL))
    {
        ::uPtr< ::app::Fuse::Drawing::Brush*>(c->_background)->Pin();
    }
}

void Control__SetIsInteracting(Control* __this, ::uObject* what, bool on)
{
    if (__this->_isInteracting == on)
    {
        return;
    }

    __this->_isInteracting = on;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->IsInteractingChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->IsInteractingChanged)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DefaultSwitchBehavior__uType* DefaultSwitchBehavior__typeof()
{
    static ::uStaticStrong<DefaultSwitchBehavior__uType*> type;
    if (type != NULL) return type;

    type = (DefaultSwitchBehavior__uType*)::uAllocClassType(sizeof(DefaultSwitchBehavior__uType), "Fuse.Controls.DefaultSwitchBehavior", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Triggers::Trigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DefaultSwitchBehavior__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DefaultSwitchBehavior__OnUnrooted;

    type->SetStrongRefs(
        "_bounds", offsetof(DefaultSwitchBehavior, _bounds),
        "_clicker", offsetof(DefaultSwitchBehavior, _clicker),
        "_switch", offsetof(DefaultSwitchBehavior, _switch));

    type->SetFields(8,
        ::uNewField("_bounds", NULL, offsetof(DefaultSwitchBehavior, _bounds), ::app::Fuse::Elements::Element__typeof()),
        ::uNewField("_captured", NULL, offsetof(DefaultSwitchBehavior, _captured), ::app::Uno::Bool__typeof()),
        ::uNewField("_capturedIndex", NULL, offsetof(DefaultSwitchBehavior, _capturedIndex), ::app::Uno::Int__typeof()),
        ::uNewField("_clicker", NULL, offsetof(DefaultSwitchBehavior, _clicker), ::app::Fuse::Gestures::Clicker__typeof()),
        ::uNewField("_currentCoord", NULL, offsetof(DefaultSwitchBehavior, _currentCoord), ::app::Uno::Float2__typeof()),
        ::uNewField("_originalP", NULL, offsetof(DefaultSwitchBehavior, _originalP), ::app::Uno::Float2__typeof()),
        ::uNewField("_prevCoord", NULL, offsetof(DefaultSwitchBehavior, _prevCoord), ::app::Uno::Float2__typeof()),
        ::uNewField("_switch", NULL, offsetof(DefaultSwitchBehavior, _switch), ::app::Fuse::Controls::Switch__typeof()));

    type->SetFunctions(12,
        ::uNewFunction("get_Bounds", DefaultSwitchBehavior__get_Bounds, 0, false, ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction("get_Size", DefaultSwitchBehavior__get_Size, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction(".ctor", DefaultSwitchBehavior__New_1, 0, true, DefaultSwitchBehavior__typeof()),
        ::uNewFunctionVoid("OnCaptureLost", DefaultSwitchBehavior__OnCaptureLost, 0, false),
        ::uNewFunctionVoid("OnPlaced", DefaultSwitchBehavior__OnPlaced, 0, false, ::uObject__typeof(), ::app::Fuse::PlacedArgs__typeof()),
        ::uNewFunctionVoid("OnPointerMoved", DefaultSwitchBehavior__OnPointerMoved, 0, false, ::uObject__typeof(), ::app::Fuse::Input::PointerMovedArgs__typeof()),
        ::uNewFunctionVoid("OnPointerPressed", DefaultSwitchBehavior__OnPointerPressed, 0, false, ::uObject__typeof(), ::app::Fuse::Input::PointerPressedArgs__typeof()),
        ::uNewFunctionVoid("OnPointerReleased", DefaultSwitchBehavior__OnPointerReleased, 0, false, ::uObject__typeof(), ::app::Fuse::Input::PointerReleasedArgs__typeof()),
        ::uNewFunctionVoid("OnPointerTapped", DefaultSwitchBehavior__OnPointerTapped, 0, false, ::uObject__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("OnValueChanged", DefaultSwitchBehavior__OnValueChanged, 0, false, ::uObject__typeof(), ::app::Uno::UX::ValueChangedArgs__bool__typeof()),
        ::uNewFunction("ReleaseCapture", DefaultSwitchBehavior__ReleaseCapture, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Bounds", DefaultSwitchBehavior__set_Bounds, 0, false, ::app::Fuse::Elements::Element__typeof()));

    ::uRegisterType(type);
    return type;
}

void DefaultSwitchBehavior___ObjInit_2(DefaultSwitchBehavior* __this)
{
    ::app::Fuse::Triggers::Trigger___ObjInit_1(__this);
}

::app::Fuse::Elements::Element* DefaultSwitchBehavior__get_Bounds(DefaultSwitchBehavior* __this)
{
    return __this->_bounds;
}

::app::Uno::Float2 DefaultSwitchBehavior__get_Size(DefaultSwitchBehavior* __this)
{
    return ::uPtr< ::app::Fuse::Elements::Element*>(__this->_bounds)->ActualSize();
}

DefaultSwitchBehavior* DefaultSwitchBehavior__New_1(::uStatic* __this)
{
    DefaultSwitchBehavior* inst = (DefaultSwitchBehavior*)::uAllocObject(sizeof(DefaultSwitchBehavior), DefaultSwitchBehavior__typeof());
    inst->_ObjInit_2();
    return inst;
}

void DefaultSwitchBehavior__OnCaptureLost(DefaultSwitchBehavior* __this)
{
    __this->_captured = false;
    __this->PlayEnd(::uPtr< ::app::Fuse::Controls::Switch*>(__this->_switch)->Value(), NULL);
}

void DefaultSwitchBehavior__OnPlaced(DefaultSwitchBehavior* __this, ::uObject* sender, ::app::Fuse::PlacedArgs* args)
{
    __this->PlayEnd(::uPtr< ::app::Fuse::Controls::Switch*>(__this->_switch)->Value(), NULL);
}

void DefaultSwitchBehavior__OnPointerMoved(DefaultSwitchBehavior* __this, ::uObject* sender, ::app::Fuse::Input::PointerMovedArgs* args)
{
    if (__this->_captured)
    {
        if (!::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->IsHardCapturedTo((::uObject*)__this))
        {
            if (::app::Uno::Math__Abs_1(NULL, __this->_originalP.X - ::uPtr< ::app::Fuse::Controls::Switch*>(__this->_switch)->WindowToLocal(::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->WindowPoint()).X) > 10.0f)
            {
                ::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->TryHardCapture((::uObject*)__this, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)DefaultSwitchBehavior__OnCaptureLost, __this), NULL);
            }
        }

        __this->_prevCoord = __this->_currentCoord;
        __this->_currentCoord = ::uPtr< ::app::Fuse::Controls::Switch*>(__this->_switch)->WindowToLocal(::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->WindowPoint());
        ::app::Uno::Float2 delta = ::app::Uno::Float2__op_Subtraction_2(NULL, __this->_currentCoord, __this->_prevCoord);
        float p = delta.X / __this->Size().X;
        __this->Seek_1(__this->Progress() + (double)p, ::uPtr< ::app::Fuse::Controls::Switch*>(__this->_switch)->Value() ? 1 : 0);
    }
}

void DefaultSwitchBehavior__OnPointerPressed(DefaultSwitchBehavior* __this, ::uObject* sender, ::app::Fuse::Input::PointerPressedArgs* args)
{
    if (__this->_captured)
    {
        return;
    }

    if (::uPtr< ::app::Fuse::Input::PointerPressedArgs*>(args)->TrySoftCapture((::uObject*)__this, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)DefaultSwitchBehavior__OnCaptureLost, __this), NULL))
    {
        __this->_captured = true;
        __this->_capturedIndex = ::uPtr< ::app::Fuse::Input::PointerPressedArgs*>(args)->PointIndex();
        __this->_originalP = __this->_prevCoord = __this->_currentCoord = ::uPtr< ::app::Fuse::Controls::Switch*>(__this->_switch)->WindowToLocal(args->WindowPoint());
    }
}

void DefaultSwitchBehavior__OnPointerReleased(DefaultSwitchBehavior* __this, ::uObject* sender, ::app::Fuse::Input::PointerReleasedArgs* args)
{
    if (__this->ReleaseCapture())
    {
        ::uPtr< ::app::Fuse::Controls::Switch*>(__this->_switch)->Value(__this->Progress() >= 0.5);
        __this->PlayEnd(::uPtr< ::app::Fuse::Controls::Switch*>(__this->_switch)->Value(), NULL);
    }
}

void DefaultSwitchBehavior__OnPointerTapped(DefaultSwitchBehavior* __this, ::uObject* a, int tapCount)
{
    __this->ReleaseCapture();
    ::uPtr< ::app::Fuse::Controls::Switch*>(__this->_switch)->Value(!::uPtr< ::app::Fuse::Controls::Switch*>(__this->_switch)->Value());
    __this->PlayEnd(::uPtr< ::app::Fuse::Controls::Switch*>(__this->_switch)->Value(), NULL);
}

void DefaultSwitchBehavior__OnRooted(DefaultSwitchBehavior* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Triggers::Trigger__OnRooted(__this, elm);
    __this->_switch = ::uAs< ::app::Fuse::Controls::Switch*>(elm, ::app::Fuse::Controls::Switch__typeof());

    if (__this->_switch == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("SwitchBehavior must be rooted in a Switch")));
    }

    ::uPtr< ::app::Fuse::Controls::Switch*>(__this->_switch)->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__bool__typeof(), (const void*)DefaultSwitchBehavior__OnValueChanged, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*>(::app::Fuse::Input::Pointer__get_Pressed(NULL))->AddHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerPressedHandler__typeof(), (const void*)DefaultSwitchBehavior__OnPointerPressed, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs*>(::app::Fuse::Input::Pointer__get_Moved(NULL))->AddHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerMovedHandler__typeof(), (const void*)DefaultSwitchBehavior__OnPointerMoved, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*>(::app::Fuse::Input::Pointer__get_Released(NULL))->AddHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerReleasedHandler__typeof(), (const void*)DefaultSwitchBehavior__OnPointerReleased, __this));
    __this->_clicker = ::app::Fuse::Gestures::Clicker__AttachClicker(NULL, elm);
    ::uPtr< ::app::Fuse::Gestures::Clicker*>(__this->_clicker)->add_TappedEvent(::uNewDelegateNonVirt(::app::Fuse::Gestures::ClickerEventHandler__typeof(), (const void*)DefaultSwitchBehavior__OnPointerTapped, __this));

    if (__this->Bounds() == NULL)
    {
        __this->Bounds(::uAs< ::app::Fuse::Elements::Element*>(__this->_switch, ::app::Fuse::Elements::Element__typeof()));
    }

    if (::uPtr< ::app::Fuse::Controls::Switch*>(__this->_switch)->Value())
    {
        __this->BypassActivate();
    }
}

void DefaultSwitchBehavior__OnUnrooted(DefaultSwitchBehavior* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Fuse::Controls::Switch*>(__this->_switch)->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__bool__typeof(), (const void*)DefaultSwitchBehavior__OnValueChanged, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*>(::app::Fuse::Input::Pointer__get_Pressed(NULL))->RemoveHandler((::app::Fuse::Node*)__this->_switch, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerPressedHandler__typeof(), (const void*)DefaultSwitchBehavior__OnPointerPressed, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs*>(::app::Fuse::Input::Pointer__get_Moved(NULL))->RemoveHandler((::app::Fuse::Node*)__this->_switch, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerMovedHandler__typeof(), (const void*)DefaultSwitchBehavior__OnPointerMoved, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*>(::app::Fuse::Input::Pointer__get_Released(NULL))->RemoveHandler((::app::Fuse::Node*)__this->_switch, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerReleasedHandler__typeof(), (const void*)DefaultSwitchBehavior__OnPointerReleased, __this));
    ::uPtr< ::app::Fuse::Controls::Switch*>(__this->_switch)->remove_Placed(::uNewDelegateNonVirt(::app::Fuse::PlacedHandler__typeof(), (const void*)DefaultSwitchBehavior__OnPlaced, __this));
    ::uPtr< ::app::Fuse::Gestures::Clicker*>(__this->_clicker)->remove_TappedEvent(::uNewDelegateNonVirt(::app::Fuse::Gestures::ClickerEventHandler__typeof(), (const void*)DefaultSwitchBehavior__OnPointerTapped, __this));
    ::uPtr< ::app::Fuse::Gestures::Clicker*>(__this->_clicker)->Detach();
    __this->_clicker = NULL;
    __this->_switch = NULL;
    __this->Bounds(NULL);
    ::app::Fuse::Input::Pointer__ReleaseAllCaptures(NULL, (::uObject*)__this);
    ::app::Fuse::Triggers::Trigger__OnUnrooted(__this, elm);
}

void DefaultSwitchBehavior__OnValueChanged(DefaultSwitchBehavior* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__bool* args)
{
    __this->PlayEnd(::uPtr< ::app::Uno::UX::ValueChangedArgs__bool*>(args)->Value(), NULL);
}

bool DefaultSwitchBehavior__ReleaseCapture(DefaultSwitchBehavior* __this)
{
    if (!__this->_captured)
    {
        return false;
    }

    ::app::Fuse::Input::Pointer__ReleaseAllCaptures(NULL, (::uObject*)__this);
    __this->_captured = false;
    return true;
}

void DefaultSwitchBehavior__set_Bounds(DefaultSwitchBehavior* __this, ::app::Fuse::Elements::Element* value)
{
    __this->_bounds = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DockPanel__uType* DockPanel__typeof()
{
    static ::uStaticStrong<DockPanel__uType*> type;
    if (type != NULL) return type;

    type = (DockPanel__uType*)::uAllocClassType(sizeof(DockPanel__uType), "Fuse.Controls.DockPanel", false, 8, 1, 0);

    type->SetBaseType(::app::Fuse::Controls::Panel__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(DockPanel__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(DockPanel__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(DockPanel__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(DockPanel__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(DockPanel__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(DockPanel__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(DockPanel__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(DockPanel__uType, __interface_7));

    type->SetStrongRefs(
        "_dockLayout", offsetof(DockPanel, _dockLayout));

    type->SetFields(1,
        ::uNewField("_dockLayout", NULL, offsetof(DockPanel, _dockLayout), ::app::Fuse::Layouts::DockLayout__typeof()));

    type->SetFunctions(4,
        ::uNewFunction("GetDock", DockPanel__GetDock, 0, true, ::app::Fuse::Layouts::Dock__typeof(), ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction(".ctor", DockPanel__New_2, 0, true, DockPanel__typeof()),
        ::uNewFunctionVoid("ResetDock", DockPanel__ResetDock, 0, true, ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunctionVoid("SetDock", DockPanel__SetDock, 0, true, ::app::Fuse::Elements::Element__typeof(), ::app::Fuse::Layouts::Dock__typeof()));

    ::uRegisterType(type);
    return type;
}

void DockPanel___ObjInit_4(DockPanel* __this)
{
    ::app::Fuse::Controls::Panel___ObjInit_3(__this);
    __this->Layout((::app::Fuse::Layouts::Layout*)(__this->_dockLayout = ::app::Fuse::Layouts::DockLayout__New_1(NULL)));
}

int DockPanel__GetDock(::uStatic* __this, ::app::Fuse::Elements::Element* elm)
{
    return ::app::Fuse::Layouts::DockLayout__GetDock(NULL, (::app::Fuse::Node*)elm);
}

DockPanel* DockPanel__New_2(::uStatic* __this)
{
    DockPanel* inst = (DockPanel*)::uAllocObject(sizeof(DockPanel), DockPanel__typeof());
    inst->_ObjInit_4();
    return inst;
}

void DockPanel__ResetDock(::uStatic* __this, ::app::Fuse::Elements::Element* elm)
{
    ::app::Fuse::Layouts::DockLayout__ResetDock(NULL, (::app::Fuse::Node*)elm);
}

void DockPanel__SetDock(::uStatic* __this, ::app::Fuse::Elements::Element* elm, int dock)
{
    ::app::Fuse::Layouts::DockLayout__SetDock(NULL, (::app::Fuse::Node*)elm, dock);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EdgeNavigator__uType* EdgeNavigator__typeof()
{
    static ::uStaticStrong<EdgeNavigator__uType*> type;
    if (type != NULL) return type;

    type = (EdgeNavigator__uType*)::uAllocClassType(sizeof(EdgeNavigator__uType), "Fuse.Controls.EdgeNavigator", false, 8, 1, 0);

    type->SetBaseType(::app::Fuse::Controls::Panel__typeof());
    type->__fp_OnApplyStyle = (void(*)(::app::Fuse::Node*, ::uObject*))EdgeNavigator__OnApplyStyle;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(EdgeNavigator__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(EdgeNavigator__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(EdgeNavigator__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(EdgeNavigator__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(EdgeNavigator__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(EdgeNavigator__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(EdgeNavigator__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(EdgeNavigator__uType, __interface_7));

    type->SetStrongRefs(
        "_navigation", offsetof(EdgeNavigator, _navigation));

    type->SetFields(1,
        ::uNewField("_navigation", NULL, offsetof(EdgeNavigator, _navigation), ::app::Fuse::Navigation::EdgeNavigation__typeof()));

    type->SetFunctions(8,
        ::uNewFunction("get_Active", EdgeNavigator__get_Active, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunction("get_Navigation", EdgeNavigator__get_Navigation, 0, false, ::app::Fuse::Navigation::Navigation__typeof()),
        ::uNewFunctionVoid("InitializeUX", EdgeNavigator__InitializeUX, 0, false),
        ::uNewFunction(".ctor", EdgeNavigator__New_2, 0, true, EdgeNavigator__typeof()),
        ::uNewFunctionVoid("OnTapped", EdgeNavigator__OnTapped, 0, false, ::uObject__typeof(), ::app::Fuse::Gestures::TappedArgs__typeof()),
        ::uNewFunctionVoid("set_Active", EdgeNavigator__set_Active, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("SetupEdge", EdgeNavigator__SetupEdge, 0, false, ::app::Fuse::Elements::Element__typeof(), ::app::Uno::Float2__typeof(), ::app::Fuse::Elements::Alignment__typeof()),
        ::uNewFunctionVoid("SetupMain", EdgeNavigator__SetupMain, 0, false, ::app::Fuse::Elements::Element__typeof()));

    ::uRegisterType(type);
    return type;
}

void EdgeNavigator___ObjInit_4(EdgeNavigator* __this)
{
    ::app::Fuse::Controls::Panel___ObjInit_3(__this);
    __this->InitializeUX();
}

::app::Fuse::Node* EdgeNavigator__get_Active(EdgeNavigator* __this)
{
    return ::uPtr< ::app::Fuse::Navigation::EdgeNavigation*>(__this->_navigation)->Active();
}

::app::Fuse::Navigation::Navigation* EdgeNavigator__get_Navigation(EdgeNavigator* __this)
{
    return (::app::Fuse::Navigation::Navigation*)__this->_navigation;
}

void EdgeNavigator__InitializeUX(EdgeNavigator* __this)
{
    __this->_navigation = ::app::Fuse::Navigation::EdgeNavigation__New_1(NULL);
    ::app::Fuse::Gestures::Tapped* temp = ::app::Fuse::Gestures::Tapped__New_1(NULL);
    __this->ClipToBounds(true);
    ::uPtr< ::app::Fuse::Gestures::Tapped*>(temp)->add_Handler(::uNewDelegateNonVirt(::app::Fuse::Gestures::TappedHandler__typeof(), (const void*)EdgeNavigator__OnTapped, __this));
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(__this->Behaviors()), (::app::Fuse::Behavior*)__this->_navigation);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(__this->Behaviors()), (::app::Fuse::Behavior*)temp);
}

EdgeNavigator* EdgeNavigator__New_2(::uStatic* __this)
{
    EdgeNavigator* inst = (EdgeNavigator*)::uAllocObject(sizeof(EdgeNavigator), EdgeNavigator__typeof());
    inst->_ObjInit_4();
    return inst;
}

void EdgeNavigator__OnApplyStyle(EdgeNavigator* __this, ::uObject* o)
{
    ::app::Fuse::Elements::Element* elm = ::uAs< ::app::Fuse::Elements::Element*>(o, ::app::Fuse::Elements::Element__typeof());

    if ((elm != NULL) && (::uPtr< ::app::Fuse::Elements::Element*>(elm)->Parent() == __this))
    {
        int e = ::app::Fuse::Navigation::EdgeNavigation__GetEdge(NULL, elm);

        switch (e)
        {
            case 0:
            {
                __this->SetupEdge(elm, ::app::Uno::Float2__New_2(NULL, -1.0f, 0.0f), 1);
                break;
            }
            case 1:
            {
                __this->SetupEdge(elm, ::app::Uno::Float2__New_2(NULL, 1.0f, 0.0f), 3);
                break;
            }
            case 2:
            {
                __this->SetupEdge(elm, ::app::Uno::Float2__New_2(NULL, 0.0f, -1.0f), 4);
                break;
            }
            case 3:
            {
                __this->SetupEdge(elm, ::app::Uno::Float2__New_2(NULL, 0.0f, 1.0f), 12);
                break;
            }
            case 4:
            {
                __this->SetupMain(elm);
                break;
            }
        }
    }

    ::app::Fuse::Node__OnApplyStyle(__this, o);
}

void EdgeNavigator__OnTapped(EdgeNavigator* __this, ::uObject* s, ::app::Fuse::Gestures::TappedArgs* args)
{
    if (::uPtr< ::app::Fuse::Navigation::EdgeNavigation*>(__this->_navigation)->IsDismissPoint(::uPtr< ::app::Fuse::Gestures::TappedArgs*>(args)->WindowPoint()) && ::uPtr< ::app::Fuse::Navigation::EdgeNavigation*>(__this->_navigation)->IsAnyPanelActive())
    {
        ::uPtr< ::app::Fuse::Navigation::EdgeNavigation*>(__this->_navigation)->Goto(NULL, 0);
    }
}

void EdgeNavigator__set_Active(EdgeNavigator* __this, ::app::Fuse::Node* value)
{
    ::uPtr< ::app::Fuse::Navigation::EdgeNavigation*>(__this->_navigation)->Active(value);
}

void EdgeNavigator__SetupEdge(EdgeNavigator* __this, ::app::Fuse::Elements::Element* elm, ::app::Uno::Float2 rel, int align)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment*>(::app::Fuse::Elements::Element__AlignmentProperty)->SetStyle(elm, align);
    ::app::Fuse::Navigation::EnteringAnimation* enter = ::app::Fuse::Navigation::EnteringAnimation__New_1(NULL);
    ::app::Fuse::Animations::Move* move = ::app::Fuse::Animations::Move__New_1(NULL);
    ::uPtr< ::app::Fuse::Animations::Move*>(move)->X(rel.X);
    move->Y(rel.Y);
    move->RelativeTo(::app::Fuse::TranslationModes__Size);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Navigation::EnteringAnimation*>(enter)->Animators()), (::app::Fuse::Animations::Animator*)move);
    ::uPtr< ::app::Fuse::Elements::Element*>(elm)->AddStyleBehavior((::app::Fuse::Behavior*)enter);
}

void EdgeNavigator__SetupMain(EdgeNavigator* __this, ::app::Fuse::Elements::Element* elm)
{
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Ellipse__uType* Ellipse__typeof()
{
    static ::uStaticStrong<Ellipse__uType*> type;
    if (type != NULL) return type;

    type = (Ellipse__uType*)::uAllocClassType(sizeof(Ellipse__uType), "Fuse.Controls.Ellipse", false, 8, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::Shape__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Ellipse__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(Ellipse__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(Ellipse__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(Ellipse__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(Ellipse__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(Ellipse__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(Ellipse__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(Ellipse__uType, __interface_7));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", Ellipse__New_2, 0, true, Ellipse__typeof()));

    ::uRegisterType(type);
    return type;
}

void Ellipse___ObjInit_5(Ellipse* __this)
{
    ::app::Fuse::Controls::Shape___ObjInit_4(__this);
}

Ellipse* Ellipse__New_2(::uStatic* __this)
{
    Ellipse* inst = (Ellipse*)::uAllocObject(sizeof(Ellipse), Ellipse__typeof());
    inst->_ObjInit_5();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FallbackWebViewClient__uType* FallbackWebViewClient__typeof()
{
    static ::uStaticStrong<FallbackWebViewClient__uType*> type;
    if (type != NULL) return type;

    type = (FallbackWebViewClient__uType*)::uAllocClassType(sizeof(FallbackWebViewClient__uType), "Fuse.Controls.FallbackWebViewClient", false, 3, 3, 0);

    type->__interface_0.__fp_get_Url = (::uString*(*)(void*))FallbackWebViewClient__get_Url;
    type->__interface_0.__fp_set_Url = (void(*)(void*, ::uString*))FallbackWebViewClient__set_Url;
    type->__interface_0.__fp_get_DocumentTitle = (::uString*(*)(void*))FallbackWebViewClient__get_DocumentTitle;
    type->__interface_0.__fp_get_File = (::app::Uno::UX::FileSource*(*)(void*))FallbackWebViewClient__get_File;
    type->__interface_0.__fp_set_File = (void(*)(void*, ::app::Uno::UX::FileSource*))FallbackWebViewClient__set_File;
    type->__interface_1.__fp_get_Progress = (double(*)(void*))FallbackWebViewClient__get_Progress;
    type->__interface_1.__fp_add_ProgressChanged = (void(*)(void*, ::uDelegate*))FallbackWebViewClient__add_ProgressChanged;
    type->__interface_1.__fp_remove_ProgressChanged = (void(*)(void*, ::uDelegate*))FallbackWebViewClient__remove_ProgressChanged;
    type->__interface_2.__fp_GoBack = (void(*)(void*))FallbackWebViewClient__GoBack;
    type->__interface_2.__fp_GoForward = (void(*)(void*))FallbackWebViewClient__GoForward;
    type->__interface_2.__fp_Reload = (void(*)(void*))FallbackWebViewClient__Reload;
    type->__interface_2.__fp_Stop = (void(*)(void*))FallbackWebViewClient__Stop;
    type->__interface_2.__fp_LoadUrl = (void(*)(void*, ::uString*))FallbackWebViewClient__LoadUrl;
    type->__interface_2.__fp_get_CanGoBack = (bool(*)(void*))FallbackWebViewClient__get_CanGoBack;
    type->__interface_2.__fp_get_CanGoForward = (bool(*)(void*))FallbackWebViewClient__get_CanGoForward;

    type->SetInterfaces(
        ::app::Fuse::Controls::IWebView__typeof(), offsetof(FallbackWebViewClient__uType, __interface_0),
        ::app::Fuse::Triggers::IProgress__typeof(), offsetof(FallbackWebViewClient__uType, __interface_1),
        ::app::Fuse::Navigation::IWebViewNavgation__typeof(), offsetof(FallbackWebViewClient__uType, __interface_2));

    type->SetStrongRefs(
        "_File", offsetof(FallbackWebViewClient, _File),
        "_Url", offsetof(FallbackWebViewClient, _Url),
        "ProgressChanged", offsetof(FallbackWebViewClient, ProgressChanged));

    type->SetFunctions(16,
        ::uNewFunctionVoid("add_ProgressChanged", FallbackWebViewClient__add_ProgressChanged, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunction("get_CanGoBack", FallbackWebViewClient__get_CanGoBack, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_CanGoForward", FallbackWebViewClient__get_CanGoForward, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_DocumentTitle", FallbackWebViewClient__get_DocumentTitle, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_File", FallbackWebViewClient__get_File, 0, false, ::app::Uno::UX::FileSource__typeof()),
        ::uNewFunction("get_Progress", FallbackWebViewClient__get_Progress, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction("get_Url", FallbackWebViewClient__get_Url, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("GoBack", FallbackWebViewClient__GoBack, 0, false),
        ::uNewFunctionVoid("GoForward", FallbackWebViewClient__GoForward, 0, false),
        ::uNewFunctionVoid("LoadUrl", FallbackWebViewClient__LoadUrl, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction(".ctor", FallbackWebViewClient__New_1, 0, true, FallbackWebViewClient__typeof()),
        ::uNewFunctionVoid("Reload", FallbackWebViewClient__Reload, 0, false),
        ::uNewFunctionVoid("remove_ProgressChanged", FallbackWebViewClient__remove_ProgressChanged, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("set_File", FallbackWebViewClient__set_File, 0, false, ::app::Uno::UX::FileSource__typeof()),
        ::uNewFunctionVoid("set_Url", FallbackWebViewClient__set_Url, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("Stop", FallbackWebViewClient__Stop, 0, false));

    ::uRegisterType(type);
    return type;
}

void FallbackWebViewClient___ObjInit(FallbackWebViewClient* __this)
{
}

void FallbackWebViewClient__add_ProgressChanged(FallbackWebViewClient* __this, ::uDelegate* value)
{
    __this->ProgressChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ProgressChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

bool FallbackWebViewClient__get_CanGoBack(FallbackWebViewClient* __this)
{
    return false;
}

bool FallbackWebViewClient__get_CanGoForward(FallbackWebViewClient* __this)
{
    return false;
}

::uString* FallbackWebViewClient__get_DocumentTitle(FallbackWebViewClient* __this)
{
    return ::uGetConstString("");
}

::app::Uno::UX::FileSource* FallbackWebViewClient__get_File(FallbackWebViewClient* __this)
{
    return __this->_File;
}

double FallbackWebViewClient__get_Progress(FallbackWebViewClient* __this)
{
    return 0.0;
}

::uString* FallbackWebViewClient__get_Url(FallbackWebViewClient* __this)
{
    return __this->_Url;
}

void FallbackWebViewClient__GoBack(FallbackWebViewClient* __this)
{
}

void FallbackWebViewClient__GoForward(FallbackWebViewClient* __this)
{
}

void FallbackWebViewClient__LoadUrl(FallbackWebViewClient* __this, ::uString* url)
{
}

FallbackWebViewClient* FallbackWebViewClient__New_1(::uStatic* __this)
{
    FallbackWebViewClient* inst = (FallbackWebViewClient*)::uAllocObject(sizeof(FallbackWebViewClient), FallbackWebViewClient__typeof());
    inst->_ObjInit();
    return inst;
}

void FallbackWebViewClient__Reload(FallbackWebViewClient* __this)
{
}

void FallbackWebViewClient__remove_ProgressChanged(FallbackWebViewClient* __this, ::uDelegate* value)
{
    __this->ProgressChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->ProgressChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void FallbackWebViewClient__set_File(FallbackWebViewClient* __this, ::app::Uno::UX::FileSource* value)
{
    __this->_File = value;
}

void FallbackWebViewClient__set_Url(FallbackWebViewClient* __this, ::uString* value)
{
    __this->_Url = value;
}

void FallbackWebViewClient__Stop(FallbackWebViewClient* __this)
{
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* FillRule__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Controls.FillRule", ::app::Uno::Int__typeof(), 2);

    type->SetLiterals(
        "NonZero", 0LL,
        "EvenOdd", 1LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* FitMode__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Controls.FitMode", ::app::Uno::Int__typeof(), 4);

    type->SetLiterals(
        "GeometryMaximum", 0LL,
        "StrokeMaximum", 1LL,
        "ShrinkToGeometry", 2LL,
        "ShrinkToStroke", 3LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_GraphicsView__float4*> GraphicsView__BackgroundProperty_1;

GraphicsView__uType* GraphicsView__typeof()
{
    static ::uStaticStrong<GraphicsView__uType*> type;
    if (type != NULL) return type;

    type = (GraphicsView__uType*)::uAllocClassType(sizeof(GraphicsView__uType), "Fuse.Controls.GraphicsView", false, 7, 3, 0);

    type->SetBaseType(::app::Fuse::Controls::ContentControl__typeof());
    type->__fp_Draw = (void(*)(::app::Fuse::Node*, ::app::Fuse::DrawContext*))GraphicsView__Draw;
    type->__fp_InvalidateVisual = (void(*)(::app::Fuse::Node*))GraphicsView__InvalidateVisual;
    type->__interface_6.__fp_PointToWorldRay = (::app::Uno::Geometry::Ray(*)(void*, ::app::Uno::Float2))GraphicsView__PointToWorldRay;
    type->__interface_6.__fp_get_PointDensity = (float(*)(void*))GraphicsView__get_PointDensity_1;
    type->__interface_6.__fp_get_Size = (::app::Uno::Float2(*)(void*))GraphicsView__get_Size;
    type->__interface_6.__fp_get_PixelSize = (::app::Uno::Float2(*)(void*))GraphicsView__get_PixelSize;
    type->__interface_6.__fp_get_ProjectionTransform = (::app::Uno::Float4x4(*)(void*))GraphicsView__get_ProjectionTransform;
    type->__interface_6.__fp_get_ViewProjectionTransform = (::app::Uno::Float4x4(*)(void*))GraphicsView__get_ViewProjectionTransform;
    type->__interface_6.__fp_get_ViewProjectionTransformInverse = (::app::Uno::Float4x4(*)(void*))GraphicsView__get_ViewProjectionTransformInverse;
    type->__interface_6.__fp_get_ViewTransform = (::app::Uno::Float4x4(*)(void*))GraphicsView__get_ViewTransform;
    type->__interface_6.__fp_get_ViewOrigin = (::app::Uno::Float3(*)(void*))GraphicsView__get_ViewOrigin;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(GraphicsView__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(GraphicsView__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(GraphicsView__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(GraphicsView__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(GraphicsView__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(GraphicsView__uType, __interface_5),
        ::app::Fuse::IViewport__typeof(), offsetof(GraphicsView__uType, __interface_6));

    type->SetStrongRefs(
        "_frustum", offsetof(GraphicsView, _frustum),
        "_frustumViewport", offsetof(GraphicsView, _frustumViewport),
        "Redraw", offsetof(GraphicsView, Redraw));

    type->SetFields(4,
        ::uNewField("_frameScheduled", NULL, offsetof(GraphicsView, _frameScheduled), ::app::Uno::Bool__typeof()),
        ::uNewField("_frustum", NULL, offsetof(GraphicsView, _frustum), ::app::Fuse::OrthographicFrustum__typeof()),
        ::uNewField("_frustumViewport", NULL, offsetof(GraphicsView, _frustumViewport), ::app::Fuse::FrustumViewport__typeof()),
        ::uNewField("BackgroundProperty", &GraphicsView__BackgroundProperty_1, 0, ::app::Fuse::StyleProperty__Fuse_Controls_GraphicsView__float4__typeof()));

    type->SetFunctions(19,
        ::uNewFunctionVoid("add_Redraw", GraphicsView__add_Redraw, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("DrawFrame", GraphicsView__DrawFrame, 0, false),
        ::uNewFunction("get_Background", GraphicsView__get_Background_1, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction("get_PixelSize", GraphicsView__get_PixelSize, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_PointDensity", GraphicsView__get_PointDensity_1, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_ProjectionTransform", GraphicsView__get_ProjectionTransform, 0, false, ::app::Uno::Float4x4__typeof()),
        ::uNewFunction("get_ProjectionTransformInverse", GraphicsView__get_ProjectionTransformInverse, 0, false, ::app::Uno::Float4x4__typeof()),
        ::uNewFunction("get_Size", GraphicsView__get_Size, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_ViewOrigin", GraphicsView__get_ViewOrigin, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunction("get_ViewProjectionTransform", GraphicsView__get_ViewProjectionTransform, 0, false, ::app::Uno::Float4x4__typeof()),
        ::uNewFunction("get_ViewProjectionTransformInverse", GraphicsView__get_ViewProjectionTransformInverse, 0, false, ::app::Uno::Float4x4__typeof()),
        ::uNewFunction("get_ViewRange", GraphicsView__get_ViewRange, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_ViewTransform", GraphicsView__get_ViewTransform, 0, false, ::app::Uno::Float4x4__typeof()),
        ::uNewFunction("get_ViewTransformInverse", GraphicsView__get_ViewTransformInverse, 0, false, ::app::Uno::Float4x4__typeof()),
        ::uNewFunction(".ctor", GraphicsView__New_2, 0, true, GraphicsView__typeof()),
        ::uNewFunctionVoid("OnBackgroundChanged", GraphicsView__OnBackgroundChanged_1, 0, true, GraphicsView__typeof()),
        ::uNewFunction("PointToWorldRay", GraphicsView__PointToWorldRay, 0, false, ::app::Uno::Geometry::Ray__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("remove_Redraw", GraphicsView__remove_Redraw, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("set_Background", GraphicsView__set_Background_1, 0, false, ::app::Uno::Float4__typeof()));

    ::uRegisterType(type);
    return type;
}

void GraphicsView___ObjInit_4(GraphicsView* __this)
{
    __this->_frustum = ::app::Fuse::OrthographicFrustum__New_1(NULL);
    ::app::Fuse::Controls::ContentControl___ObjInit_3(__this);
    __this->_frustumViewport = ::app::Fuse::FrustumViewport__New_1(NULL);
    ::uPtr< ::app::Fuse::FrustumViewport*>(__this->_frustumViewport)->Update((::uObject*)__this, (::uObject*)__this->_frustum);
}

void GraphicsView___TypeInit_3(::uStatic* __this)
{
    GraphicsView__BackgroundProperty_1 = ::app::Fuse::StyleProperty__Fuse_Controls_GraphicsView__float4__New_1(NULL, ::app::Uno::Float4__New_1(NULL, 0.0f), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_GraphicsView__typeof(), (const void*)GraphicsView__OnBackgroundChanged_1));
}

void GraphicsView__add_Redraw(GraphicsView* __this, ::uDelegate* value)
{
    __this->Redraw = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->Redraw, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void GraphicsView__Draw(GraphicsView* __this, ::app::Fuse::DrawContext* dc)
{
    ::app::Fuse::Elements::Element__Draw(__this, dc);
    ::uPtr< ::app::Fuse::AppBase*>(::app::Fuse::AppBase__get_Current_1(NULL))->DrawSelection(dc);
}

void GraphicsView__DrawFrame(GraphicsView* __this)
{
    __this->_frameScheduled = false;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Redraw, NULL))
    {
        ::uPtr< ::app::Fuse::OrthographicFrustum*>(__this->_frustum)->LocalFromWorld(__this->WorldTransformInverse());
        ::uPtr< ::app::Fuse::FrustumViewport*>(__this->_frustumViewport)->Update((::uObject*)__this, (::uObject*)__this->_frustum);
        ::uPtr< ::uDelegate*>(__this->Redraw)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

::app::Uno::Float4 GraphicsView__get_Background_1(GraphicsView* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_GraphicsView__float4*>(GraphicsView__BackgroundProperty_1)->Get(__this);
}

::app::Uno::Float2 GraphicsView__get_PixelSize(GraphicsView* __this)
{
    return ::app::Uno::Float2__op_Multiply_1(NULL, __this->ActualSize(), __this->PointDensity_1());
}

float GraphicsView__get_PointDensity_1(GraphicsView* __this)
{
    return (__this->Parent() != NULL) ? ::app::Fuse::IViewport::PointDensity(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(__this->Parent())->Viewport())) : ::app::Fuse::RootViewport__get_DefaultDensity(NULL);
}

::app::Uno::Float4x4 GraphicsView__get_ProjectionTransform(GraphicsView* __this)
{
    return ::uPtr< ::app::Fuse::FrustumViewport*>(__this->_frustumViewport)->ProjectionTransform;
}

::app::Uno::Float4x4 GraphicsView__get_ProjectionTransformInverse(GraphicsView* __this)
{
    return ::uPtr< ::app::Fuse::FrustumViewport*>(__this->_frustumViewport)->ProjectionTransformInverse;
}

::app::Uno::Float2 GraphicsView__get_Size(GraphicsView* __this)
{
    return __this->ActualSize();
}

::app::Uno::Float3 GraphicsView__get_ViewOrigin(GraphicsView* __this)
{
    return ::uPtr< ::app::Fuse::OrthographicFrustum*>(__this->_frustum)->GetWorldPosition((::uObject*)__this);
}

::app::Uno::Float4x4 GraphicsView__get_ViewProjectionTransform(GraphicsView* __this)
{
    return ::uPtr< ::app::Fuse::FrustumViewport*>(__this->_frustumViewport)->ViewProjectionTransform;
}

::app::Uno::Float4x4 GraphicsView__get_ViewProjectionTransformInverse(GraphicsView* __this)
{
    return ::uPtr< ::app::Fuse::FrustumViewport*>(__this->_frustumViewport)->ViewProjectionTransformInverse;
}

::app::Uno::Float2 GraphicsView__get_ViewRange(GraphicsView* __this)
{
    return ::uPtr< ::app::Fuse::OrthographicFrustum*>(__this->_frustum)->GetDepthRange((::uObject*)__this);
}

::app::Uno::Float4x4 GraphicsView__get_ViewTransform(GraphicsView* __this)
{
    return ::uPtr< ::app::Fuse::FrustumViewport*>(__this->_frustumViewport)->ViewTransform;
}

::app::Uno::Float4x4 GraphicsView__get_ViewTransformInverse(GraphicsView* __this)
{
    return ::uPtr< ::app::Fuse::FrustumViewport*>(__this->_frustumViewport)->ViewTransformInverse;
}

void GraphicsView__InvalidateVisual(GraphicsView* __this)
{
    if (__this->IsRooted() && !__this->_frameScheduled)
    {
        ::app::Fuse::UpdateManager__AddOnceAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)GraphicsView__DrawFrame, __this), 4);
        __this->_frameScheduled = true;
    }

    ::app::Fuse::Elements::Element__InvalidateVisual(__this);
}

GraphicsView* GraphicsView__New_2(::uStatic* __this)
{
    GraphicsView* inst = (GraphicsView*)::uAllocObject(sizeof(GraphicsView), GraphicsView__typeof());
    inst->_ObjInit_4();
    return inst;
}

void GraphicsView__OnBackgroundChanged_1(::uStatic* __this, GraphicsView* gv)
{
    ::uPtr< GraphicsView*>(gv)->InvalidateVisual();
}

::app::Uno::Geometry::Ray GraphicsView__PointToWorldRay(GraphicsView* __this, ::app::Uno::Float2 pixelPos)
{
    return ::app::Fuse::FrustumViewport__PointToWorldRay(NULL, (::uObject*)__this, pixelPos);
}

void GraphicsView__remove_Redraw(GraphicsView* __this, ::uDelegate* value)
{
    __this->Redraw = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->Redraw, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void GraphicsView__set_Background_1(GraphicsView* __this, ::app::Uno::Float4 value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_GraphicsView__float4*>(GraphicsView__BackgroundProperty_1)->Set(__this, value);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Grid__float*> Grid__CellSpacingProperty;

Grid__uType* Grid__typeof()
{
    static ::uStaticStrong<Grid__uType*> type;
    if (type != NULL) return type;

    type = (Grid__uType*)::uAllocClassType(sizeof(Grid__uType), "Fuse.Controls.Grid", false, 8, 1, 0);

    type->SetBaseType(::app::Fuse::Controls::Panel__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Grid__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(Grid__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(Grid__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(Grid__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(Grid__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(Grid__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(Grid__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(Grid__uType, __interface_7));

    type->SetStrongRefs(
        "_gridLayout", offsetof(Grid, _gridLayout));

    type->SetFields(2,
        ::uNewField("_gridLayout", NULL, offsetof(Grid, _gridLayout), ::app::Fuse::Layouts::GridLayout__typeof()),
        ::uNewField("CellSpacingProperty", &Grid__CellSpacingProperty, 0, ::app::Fuse::StyleProperty__Fuse_Controls_Grid__float__typeof()));

    type->SetFunctions(34,
        ::uNewFunction("get_CellSpacing", Grid__get_CellSpacing, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_ColumnCount", Grid__get_ColumnCount, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_ColumnData", Grid__get_ColumnData, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_ColumnList", Grid__get_ColumnList, 0, false, ::app::Uno::Collections::IList__Fuse_Layouts_Column__typeof()),
        ::uNewFunction("get_Columns", Grid__get_Columns, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_DefaultColumn", Grid__get_DefaultColumn, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_DefaultRow", Grid__get_DefaultRow, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_RowCount", Grid__get_RowCount, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_RowData", Grid__get_RowData, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_RowList", Grid__get_RowList, 0, false, ::app::Uno::Collections::IList__Fuse_Layouts_Row__typeof()),
        ::uNewFunction("get_Rows", Grid__get_Rows, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("GetColumn", Grid__GetColumn, 0, true, ::app::Uno::Int__typeof(), ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction("GetColumnSpan", Grid__GetColumnSpan, 0, true, ::app::Uno::Int__typeof(), ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction("GetRow", Grid__GetRow, 0, true, ::app::Uno::Int__typeof(), ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction("GetRowSpan", Grid__GetRowSpan, 0, true, ::app::Uno::Int__typeof(), ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction(".ctor", Grid__New_2, 0, true, Grid__typeof()),
        ::uNewFunctionVoid("OnCellSpacingChanged", Grid__OnCellSpacingChanged, 0, true, Grid__typeof()),
        ::uNewFunctionVoid("ResetColumn", Grid__ResetColumn, 0, true, ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunctionVoid("ResetColumnSpan", Grid__ResetColumnSpan, 0, true, ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunctionVoid("ResetRow", Grid__ResetRow, 0, true, ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunctionVoid("ResetRowSpan", Grid__ResetRowSpan, 0, true, ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunctionVoid("set_CellSpacing", Grid__set_CellSpacing, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_ColumnCount", Grid__set_ColumnCount, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("set_ColumnData", Grid__set_ColumnData, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Columns", Grid__set_Columns, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_DefaultColumn", Grid__set_DefaultColumn, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_DefaultRow", Grid__set_DefaultRow, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_RowCount", Grid__set_RowCount, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("set_RowData", Grid__set_RowData, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Rows", Grid__set_Rows, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("SetColumn", Grid__SetColumn, 0, true, ::app::Fuse::Elements::Element__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("SetColumnSpan", Grid__SetColumnSpan, 0, true, ::app::Fuse::Elements::Element__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("SetRow", Grid__SetRow, 0, true, ::app::Fuse::Elements::Element__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("SetRowSpan", Grid__SetRowSpan, 0, true, ::app::Fuse::Elements::Element__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void Grid___ObjInit_4(Grid* __this)
{
    ::app::Fuse::Controls::Panel___ObjInit_3(__this);
    __this->Layout((::app::Fuse::Layouts::Layout*)(__this->_gridLayout = ::app::Fuse::Layouts::GridLayout__New_1(NULL)));
}

void Grid___TypeInit_4(::uStatic* __this)
{
    Grid__CellSpacingProperty = ::app::Fuse::StyleProperty__Fuse_Controls_Grid__float__New_1(NULL, 0.0f, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Grid__typeof(), (const void*)Grid__OnCellSpacingChanged));
}

float Grid__get_CellSpacing(Grid* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Grid__float*>(Grid__CellSpacingProperty)->Get(__this);
}

int Grid__get_ColumnCount(Grid* __this)
{
    return ::uPtr< ::app::Fuse::Layouts::GridLayout*>(__this->_gridLayout)->ColumnCount();
}

::uString* Grid__get_ColumnData(Grid* __this)
{
    return ::uPtr< ::app::Fuse::Layouts::GridLayout*>(__this->_gridLayout)->Columns();
}

::uObject* Grid__get_ColumnList(Grid* __this)
{
    return ::uPtr< ::app::Fuse::Layouts::GridLayout*>(__this->_gridLayout)->ColumnList();
}

::uString* Grid__get_Columns(Grid* __this)
{
    return ::uPtr< ::app::Fuse::Layouts::GridLayout*>(__this->_gridLayout)->Columns();
}

::uString* Grid__get_DefaultColumn(Grid* __this)
{
    return ::uPtr< ::app::Fuse::Layouts::GridLayout*>(__this->_gridLayout)->DefaultColumn();
}

::uString* Grid__get_DefaultRow(Grid* __this)
{
    return ::uPtr< ::app::Fuse::Layouts::GridLayout*>(__this->_gridLayout)->DefaultRow();
}

int Grid__get_RowCount(Grid* __this)
{
    return ::uPtr< ::app::Fuse::Layouts::GridLayout*>(__this->_gridLayout)->RowCount();
}

::uString* Grid__get_RowData(Grid* __this)
{
    return ::uPtr< ::app::Fuse::Layouts::GridLayout*>(__this->_gridLayout)->Rows();
}

::uObject* Grid__get_RowList(Grid* __this)
{
    return ::uPtr< ::app::Fuse::Layouts::GridLayout*>(__this->_gridLayout)->RowList();
}

::uString* Grid__get_Rows(Grid* __this)
{
    return ::uPtr< ::app::Fuse::Layouts::GridLayout*>(__this->_gridLayout)->Rows();
}

int Grid__GetColumn(::uStatic* __this, ::app::Fuse::Elements::Element* elm)
{
    return ::app::Fuse::Layouts::GridLayout__GetColumn(NULL, (::app::Fuse::Node*)elm);
}

int Grid__GetColumnSpan(::uStatic* __this, ::app::Fuse::Elements::Element* elm)
{
    return ::app::Fuse::Layouts::GridLayout__GetColumnSpan(NULL, (::app::Fuse::Node*)elm);
}

int Grid__GetRow(::uStatic* __this, ::app::Fuse::Elements::Element* elm)
{
    return ::app::Fuse::Layouts::GridLayout__GetRow(NULL, (::app::Fuse::Node*)elm);
}

int Grid__GetRowSpan(::uStatic* __this, ::app::Fuse::Elements::Element* elm)
{
    return ::app::Fuse::Layouts::GridLayout__GetRowSpan(NULL, (::app::Fuse::Node*)elm);
}

Grid* Grid__New_2(::uStatic* __this)
{
    Grid* inst = (Grid*)::uAllocObject(sizeof(Grid), Grid__typeof());
    inst->_ObjInit_4();
    return inst;
}

void Grid__OnCellSpacingChanged(::uStatic* __this, Grid* p)
{
    ::uPtr< ::app::Fuse::Layouts::GridLayout*>(::uPtr< Grid*>(p)->_gridLayout)->CellSpacing(::uPtr< Grid*>(p)->CellSpacing());
}

void Grid__ResetColumn(::uStatic* __this, ::app::Fuse::Elements::Element* elm)
{
    ::app::Fuse::Layouts::GridLayout__ResetColumn(NULL, (::app::Fuse::Node*)elm);
}

void Grid__ResetColumnSpan(::uStatic* __this, ::app::Fuse::Elements::Element* elm)
{
    ::app::Fuse::Layouts::GridLayout__ResetColumnSpan(NULL, (::app::Fuse::Node*)elm);
}

void Grid__ResetRow(::uStatic* __this, ::app::Fuse::Elements::Element* elm)
{
    ::app::Fuse::Layouts::GridLayout__ResetRow(NULL, (::app::Fuse::Node*)elm);
}

void Grid__ResetRowSpan(::uStatic* __this, ::app::Fuse::Elements::Element* elm)
{
    ::app::Fuse::Layouts::GridLayout__ResetRowSpan(NULL, (::app::Fuse::Node*)elm);
}

void Grid__set_CellSpacing(Grid* __this, float value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Grid__float*>(Grid__CellSpacingProperty)->Set(__this, value);
}

void Grid__set_ColumnCount(Grid* __this, int value)
{
    ::uPtr< ::app::Fuse::Layouts::GridLayout*>(__this->_gridLayout)->ColumnCount(value);
}

void Grid__set_ColumnData(Grid* __this, ::uString* value)
{
    ::uPtr< ::app::Fuse::Layouts::GridLayout*>(__this->_gridLayout)->Columns(value);
}

void Grid__set_Columns(Grid* __this, ::uString* value)
{
    ::uPtr< ::app::Fuse::Layouts::GridLayout*>(__this->_gridLayout)->Columns(value);
}

void Grid__set_DefaultColumn(Grid* __this, ::uString* value)
{
    ::uPtr< ::app::Fuse::Layouts::GridLayout*>(__this->_gridLayout)->DefaultColumn(value);
}

void Grid__set_DefaultRow(Grid* __this, ::uString* value)
{
    ::uPtr< ::app::Fuse::Layouts::GridLayout*>(__this->_gridLayout)->DefaultRow(value);
}

void Grid__set_RowCount(Grid* __this, int value)
{
    ::uPtr< ::app::Fuse::Layouts::GridLayout*>(__this->_gridLayout)->RowCount(value);
}

void Grid__set_RowData(Grid* __this, ::uString* value)
{
    ::uPtr< ::app::Fuse::Layouts::GridLayout*>(__this->_gridLayout)->Rows(value);
}

void Grid__set_Rows(Grid* __this, ::uString* value)
{
    ::uPtr< ::app::Fuse::Layouts::GridLayout*>(__this->_gridLayout)->Rows(value);
}

void Grid__SetColumn(::uStatic* __this, ::app::Fuse::Elements::Element* elm, int col)
{
    ::app::Fuse::Layouts::GridLayout__SetColumn(NULL, (::app::Fuse::Node*)elm, col);
}

void Grid__SetColumnSpan(::uStatic* __this, ::app::Fuse::Elements::Element* elm, int span)
{
    ::app::Fuse::Layouts::GridLayout__SetColumnSpan(NULL, (::app::Fuse::Node*)elm, span);
}

void Grid__SetRow(::uStatic* __this, ::app::Fuse::Elements::Element* elm, int row)
{
    ::app::Fuse::Layouts::GridLayout__SetRow(NULL, (::app::Fuse::Node*)elm, row);
}

void Grid__SetRowSpan(::uStatic* __this, ::app::Fuse::Elements::Element* elm, int span)
{
    ::app::Fuse::Layouts::GridLayout__SetRowSpan(NULL, (::app::Fuse::Node*)elm, span);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment*> Image__ContentAlignmentProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy*> Image__MemoryPolicyProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection*> Image__StretchDirectionProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode*> Image__StretchModeProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing*> Image__StretchSizingProperty;

Image__uType* Image__typeof()
{
    static ::uStaticStrong<Image__uType*> type;
    if (type != NULL) return type;

    type = (Image__uType*)::uAllocClassType(sizeof(Image__uType), "Fuse.Controls.Image", false, 8, 3, 0);

    type->SetBaseType(::app::Fuse::Controls::Panel__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))Image__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))Image__OnUnrooted;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Image__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(Image__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(Image__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(Image__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(Image__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(Image__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(Image__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(Image__uType, __interface_7));

    type->SetStrongRefs(
        "_container", offsetof(Image, _container),
        "ParamChanged", offsetof(Image, ParamChanged),
        "SourceChanged", offsetof(Image, SourceChanged));

    type->SetFields(9,
        ::uNewField("_color", NULL, offsetof(Image, _color), ::app::Uno::Float4__typeof()),
        ::uNewField("_container", NULL, offsetof(Image, _container), ::app::Fuse::Internal::ImageContainer__typeof()),
        ::uNewField("_hasScale9Margin", NULL, offsetof(Image, _hasScale9Margin), ::app::Uno::Bool__typeof()),
        ::uNewField("_scale9Margin", NULL, offsetof(Image, _scale9Margin), ::app::Uno::Float4__typeof()),
        ::uNewField("ContentAlignmentProperty", &Image__ContentAlignmentProperty, 0, ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__typeof()),
        ::uNewField("MemoryPolicyProperty", &Image__MemoryPolicyProperty, 0, ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__typeof()),
        ::uNewField("StretchDirectionProperty", &Image__StretchDirectionProperty, 0, ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__typeof()),
        ::uNewField("StretchModeProperty", &Image__StretchModeProperty, 0, ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__typeof()),
        ::uNewField("StretchSizingProperty", &Image__StretchSizingProperty, 0, ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__typeof()));

    type->SetFunctions(47,
        ::uNewFunctionVoid("add_ParamChanged", Image__add_ParamChanged, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("add_SourceChanged", Image__add_SourceChanged, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunction("get_Color", Image__get_Color, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction("get_Container", Image__get_Container, 0, false, ::app::Fuse::Internal::ImageContainer__typeof()),
        ::uNewFunction("get_ContentAlignment", Image__get_ContentAlignment, 0, false, ::app::Fuse::Elements::Alignment__typeof()),
        ::uNewFunction("get_Density", Image__get_Density, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_File", Image__get_File, 0, false, ::app::Uno::UX::FileSource__typeof()),
        ::uNewFunction("get_Files", Image__get_Files, 0, false, ::app::Uno::Collections::IList__Uno_UX_FileSource__typeof()),
        ::uNewFunction("get_MemoryPolicy", Image__get_MemoryPolicy, 0, false, ::app::Fuse::Resources::MemoryPolicy__typeof()),
        ::uNewFunction("get_ResampleMode", Image__get_ResampleMode, 0, false, ::app::Fuse::Drawing::ResampleMode__typeof()),
        ::uNewFunction("get_Scale9Margin", Image__get_Scale9Margin, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction("get_Source", Image__get_Source, 0, false, ::app::Fuse::Resources::ImageSource__typeof()),
        ::uNewFunction("get_StretchDirection", Image__get_StretchDirection, 0, false, ::app::Fuse::Elements::StretchDirection__typeof()),
        ::uNewFunction("get_StretchMode", Image__get_StretchMode, 0, false, ::app::Fuse::Elements::StretchMode__typeof()),
        ::uNewFunction("get_StretchSizing", Image__get_StretchSizing, 0, false, ::app::Fuse::Elements::StretchSizing__typeof()),
        ::uNewFunction("get_Url", Image__get_Url, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("GetContentAlignment", Image__GetContentAlignment, 0, true, ::app::Fuse::Elements::Alignment__typeof(), Image__typeof()),
        ::uNewFunction("GetMemoryPolicy", Image__GetMemoryPolicy, 0, true, ::app::Fuse::Resources::MemoryPolicy__typeof(), Image__typeof()),
        ::uNewFunction("GetStretchDirection", Image__GetStretchDirection, 0, true, ::app::Fuse::Elements::StretchDirection__typeof(), Image__typeof()),
        ::uNewFunction("GetStretchMode", Image__GetStretchMode, 0, true, ::app::Fuse::Elements::StretchMode__typeof(), Image__typeof()),
        ::uNewFunction("GetStretchSizing", Image__GetStretchSizing, 0, true, ::app::Fuse::Elements::StretchSizing__typeof(), Image__typeof()),
        ::uNewFunction(".ctor", Image__New_2, 0, true, Image__typeof()),
        ::uNewFunctionVoid("OnContainerParamChanged", Image__OnContainerParamChanged, 0, false, ::uObject__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("OnContainerSourceChanged", Image__OnContainerSourceChanged, 0, false, ::uObject__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("OnIsVisibleChanged", Image__OnIsVisibleChanged_1, 0, false, ::uObject__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("OnParamChanged", Image__OnParamChanged, 0, false),
        ::uNewFunctionVoid("OnSourceChanged", Image__OnSourceChanged, 0, false),
        ::uNewFunctionVoid("remove_ParamChanged", Image__remove_ParamChanged, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("remove_SourceChanged", Image__remove_SourceChanged, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("set_Color", Image__set_Color, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunctionVoid("set_ContentAlignment", Image__set_ContentAlignment, 0, false, ::app::Fuse::Elements::Alignment__typeof()),
        ::uNewFunctionVoid("set_Density", Image__set_Density, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_File", Image__set_File, 0, false, ::app::Uno::UX::FileSource__typeof()),
        ::uNewFunctionVoid("set_MemoryPolicy", Image__set_MemoryPolicy, 0, false, ::app::Fuse::Resources::MemoryPolicy__typeof()),
        ::uNewFunctionVoid("set_ResampleMode", Image__set_ResampleMode, 0, false, ::app::Fuse::Drawing::ResampleMode__typeof()),
        ::uNewFunctionVoid("set_Scale9Margin", Image__set_Scale9Margin, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunctionVoid("set_Source", Image__set_Source, 0, false, ::app::Fuse::Resources::ImageSource__typeof()),
        ::uNewFunctionVoid("set_StretchDirection", Image__set_StretchDirection, 0, false, ::app::Fuse::Elements::StretchDirection__typeof()),
        ::uNewFunctionVoid("set_StretchMode", Image__set_StretchMode, 0, false, ::app::Fuse::Elements::StretchMode__typeof()),
        ::uNewFunctionVoid("set_StretchSizing", Image__set_StretchSizing, 0, false, ::app::Fuse::Elements::StretchSizing__typeof()),
        ::uNewFunctionVoid("set_Url", Image__set_Url, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("SetContentAlignment", Image__SetContentAlignment, 0, true, Image__typeof(), ::app::Fuse::Elements::Alignment__typeof()),
        ::uNewFunctionVoid("SetMemoryPolicy", Image__SetMemoryPolicy, 0, true, Image__typeof(), ::app::Fuse::Resources::MemoryPolicy__typeof()),
        ::uNewFunctionVoid("SetStretchDirection", Image__SetStretchDirection, 0, true, Image__typeof(), ::app::Fuse::Elements::StretchDirection__typeof()),
        ::uNewFunctionVoid("SetStretchMode", Image__SetStretchMode, 0, true, Image__typeof(), ::app::Fuse::Elements::StretchMode__typeof()),
        ::uNewFunctionVoid("SetStretchSizing", Image__SetStretchSizing, 0, true, Image__typeof(), ::app::Fuse::Elements::StretchSizing__typeof()),
        ::uNewFunctionVoid("UpdateParam", Image__UpdateParam, 0, true, Image__typeof()));

    ::uRegisterType(type);
    return type;
}

void Image___ObjInit_4(Image* __this)
{
    __this->_container = ::app::Fuse::Internal::ImageContainer__New_1(NULL, NULL);
    __this->_color = ::app::Uno::Float4__New_1(NULL, 1.0f);
    __this->_scale9Margin = ::app::Uno::Float4__New_1(NULL, 10.0f);
    ::app::Fuse::Controls::Panel___ObjInit_3(__this);
}

void Image___TypeInit_4(::uStatic* __this)
{
    Image__MemoryPolicyProperty = ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__New_2(NULL, ::app::Fuse::Resources::MemoryPolicy__PreloadRetain, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Image__typeof(), (const void*)Image__UpdateParam), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__typeof(), (const void*)Image__SetMemoryPolicy), ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__typeof(), (const void*)Image__GetMemoryPolicy));
    Image__StretchModeProperty = ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__New_2(NULL, 5, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Image__typeof(), (const void*)Image__UpdateParam), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Image__Fuse_Elements_StretchMode__typeof(), (const void*)Image__SetStretchMode), ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Controls_Image__Fuse_Elements_StretchMode__typeof(), (const void*)Image__GetStretchMode));
    Image__StretchDirectionProperty = ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__New_2(NULL, 0, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Image__typeof(), (const void*)Image__UpdateParam), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Image__Fuse_Elements_StretchDirection__typeof(), (const void*)Image__SetStretchDirection), ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Controls_Image__Fuse_Elements_StretchDirection__typeof(), (const void*)Image__GetStretchDirection));
    Image__StretchSizingProperty = ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__New_2(NULL, 1, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Image__typeof(), (const void*)Image__UpdateParam), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Image__Fuse_Elements_StretchSizing__typeof(), (const void*)Image__SetStretchSizing), ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Controls_Image__Fuse_Elements_StretchSizing__typeof(), (const void*)Image__GetStretchSizing));
    Image__ContentAlignmentProperty = ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__New_2(NULL, 10, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Image__typeof(), (const void*)Image__UpdateParam), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Image__Fuse_Elements_Alignment__typeof(), (const void*)Image__SetContentAlignment), ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Controls_Image__Fuse_Elements_Alignment__typeof(), (const void*)Image__GetContentAlignment));
}

void Image__add_ParamChanged(Image* __this, ::uDelegate* value)
{
    __this->ParamChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ParamChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void Image__add_SourceChanged(Image* __this, ::uDelegate* value)
{
    __this->SourceChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->SourceChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

::app::Uno::Float4 Image__get_Color(Image* __this)
{
    return __this->_color;
}

::app::Fuse::Internal::ImageContainer* Image__get_Container(Image* __this)
{
    return __this->_container;
}

int Image__get_ContentAlignment(Image* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment*>(Image__ContentAlignmentProperty)->Get(__this);
}

float Image__get_Density(Image* __this)
{
    return ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->Density();
}

::app::Uno::UX::FileSource* Image__get_File(Image* __this)
{
    return ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->File();
}

::uObject* Image__get_Files(Image* __this)
{
    return ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->Files();
}

::app::Fuse::Resources::MemoryPolicy* Image__get_MemoryPolicy(Image* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy*>(Image__MemoryPolicyProperty)->Get(__this);
}

int Image__get_ResampleMode(Image* __this)
{
    return ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->ResampleMode();
}

::app::Uno::Float4 Image__get_Scale9Margin(Image* __this)
{
    return __this->_scale9Margin;
}

::app::Fuse::Resources::ImageSource* Image__get_Source(Image* __this)
{
    return ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->Source();
}

int Image__get_StretchDirection(Image* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection*>(Image__StretchDirectionProperty)->Get(__this);
}

int Image__get_StretchMode(Image* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode*>(Image__StretchModeProperty)->Get(__this);
}

int Image__get_StretchSizing(Image* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing*>(Image__StretchSizingProperty)->Get(__this);
}

::uString* Image__get_Url(Image* __this)
{
    return ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->Url();
}

int Image__GetContentAlignment(::uStatic* __this, Image* img)
{
    return ::uPtr< ::app::Fuse::Internal::ImageContainer*>(::uPtr< Image*>(img)->_container)->ContentAlignment();
}

::app::Fuse::Resources::MemoryPolicy* Image__GetMemoryPolicy(::uStatic* __this, Image* img)
{
    return ::uPtr< ::app::Fuse::Internal::ImageContainer*>(::uPtr< Image*>(img)->_container)->MemoryPolicy();
}

int Image__GetStretchDirection(::uStatic* __this, Image* img)
{
    return ::uPtr< ::app::Fuse::Internal::ImageContainer*>(::uPtr< Image*>(img)->_container)->StretchDirection();
}

int Image__GetStretchMode(::uStatic* __this, Image* img)
{
    return ::uPtr< ::app::Fuse::Internal::ImageContainer*>(::uPtr< Image*>(img)->_container)->StretchMode();
}

int Image__GetStretchSizing(::uStatic* __this, Image* img)
{
    return ::uPtr< ::app::Fuse::Internal::ImageContainer*>(::uPtr< Image*>(img)->_container)->StretchSizing();
}

Image* Image__New_2(::uStatic* __this)
{
    Image* inst = (Image*)::uAllocObject(sizeof(Image), Image__typeof());
    inst->_ObjInit_4();
    return inst;
}

void Image__OnContainerParamChanged(Image* __this, ::uObject* s, ::uObject* a)
{
    __this->OnParamChanged();
}

void Image__OnContainerSourceChanged(Image* __this, ::uObject* s, ::uObject* a)
{
    __this->OnSourceChanged();
}

void Image__OnIsVisibleChanged_1(Image* __this, ::uObject* s, ::uObject* a)
{
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->IsVisible(__this->IsVisible());
}

void Image__OnParamChanged(Image* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ParamChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ParamChanged)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

void Image__OnRooted(Image* __this)
{
    ::app::Fuse::Controls::Panel__OnRooted(__this);
    __this->AddDrawCost(1.0);
    __this->add_IsVisibleChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)Image__OnIsVisibleChanged_1, __this));
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->IsRooted(true);
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->add_ParamChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)Image__OnContainerParamChanged, __this));
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->add_SourceChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)Image__OnContainerSourceChanged, __this));
}

void Image__OnSourceChanged(Image* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->SourceChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->SourceChanged)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

void Image__OnUnrooted(Image* __this)
{
    __this->remove_IsVisibleChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)Image__OnIsVisibleChanged_1, __this));
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->IsRooted(false);
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->remove_ParamChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)Image__OnContainerParamChanged, __this));
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->remove_SourceChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)Image__OnContainerSourceChanged, __this));
    __this->RemoveDrawCost(1.0);
    ::app::Fuse::Controls::Panel__OnUnrooted(__this);
}

void Image__remove_ParamChanged(Image* __this, ::uDelegate* value)
{
    __this->ParamChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->ParamChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void Image__remove_SourceChanged(Image* __this, ::uDelegate* value)
{
    __this->SourceChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->SourceChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void Image__set_Color(Image* __this, ::app::Uno::Float4 value)
{
    if (::app::Uno::Float4__op_Inequality(NULL, __this->_color, value))
    {
        __this->_color = value;
        __this->OnParamChanged();
    }
}

void Image__set_ContentAlignment(Image* __this, int value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment*>(Image__ContentAlignmentProperty)->Set(__this, value);
}

void Image__set_Density(Image* __this, float value)
{
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->Density(value);
}

void Image__set_File(Image* __this, ::app::Uno::UX::FileSource* value)
{
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->File(value);
}

void Image__set_MemoryPolicy(Image* __this, ::app::Fuse::Resources::MemoryPolicy* value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy*>(Image__MemoryPolicyProperty)->Set(__this, value);
}

void Image__set_ResampleMode(Image* __this, int value)
{
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->ResampleMode(value);
}

void Image__set_Scale9Margin(Image* __this, ::app::Uno::Float4 value)
{
    if (!__this->_hasScale9Margin || ::app::Uno::Float4__op_Inequality(NULL, __this->_scale9Margin, value))
    {
        __this->_scale9Margin = value;
        __this->_hasScale9Margin = true;
        __this->OnParamChanged();
    }
}

void Image__set_Source(Image* __this, ::app::Fuse::Resources::ImageSource* value)
{
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->Source(value);
}

void Image__set_StretchDirection(Image* __this, int value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection*>(Image__StretchDirectionProperty)->Set(__this, value);
}

void Image__set_StretchMode(Image* __this, int value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode*>(Image__StretchModeProperty)->Set(__this, value);
}

void Image__set_StretchSizing(Image* __this, int value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing*>(Image__StretchSizingProperty)->Set(__this, value);
}

void Image__set_Url(Image* __this, ::uString* value)
{
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->Url(value);
}

void Image__SetContentAlignment(::uStatic* __this, Image* img, int v)
{
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(::uPtr< Image*>(img)->_container)->ContentAlignment(v);
}

void Image__SetMemoryPolicy(::uStatic* __this, Image* img, ::app::Fuse::Resources::MemoryPolicy* v)
{
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(::uPtr< Image*>(img)->_container)->MemoryPolicy(v);
}

void Image__SetStretchDirection(::uStatic* __this, Image* img, int v)
{
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(::uPtr< Image*>(img)->_container)->StretchDirection(v);
}

void Image__SetStretchMode(::uStatic* __this, Image* img, int v)
{
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(::uPtr< Image*>(img)->_container)->StretchMode(v);
}

void Image__SetStretchSizing(::uStatic* __this, Image* img, int v)
{
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(::uPtr< Image*>(img)->_container)->StretchSizing(v);
}

void Image__UpdateParam(::uStatic* __this, Image* img)
{
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IWebView__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Controls.IWebView");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyframeAccessors__uType* KeyframeAccessors__typeof()
{
    static ::uStaticStrong<KeyframeAccessors__uType*> type;
    if (type != NULL) return type;

    type = (KeyframeAccessors__uType*)::uAllocClassType(sizeof(KeyframeAccessors__uType), "Fuse.Controls.KeyframeAccessors");

    type->SetFunctions(2,
        ::uNewFunction("SetVisibility", KeyframeAccessors__SetVisibility, 0, true, ::app::Fuse::Elements::Visibility__typeof(), ::app::Fuse::Animations::Keyframe__typeof()),
        ::uNewFunctionVoid("SetVisibility", KeyframeAccessors__SetVisibility_1, 0, true, ::app::Fuse::Animations::Keyframe__typeof(), ::app::Fuse::Elements::Visibility__typeof()));

    ::uRegisterType(type);
    return type;
}

int KeyframeAccessors__SetVisibility(::uStatic* __this, ::app::Fuse::Animations::Keyframe* kf)
{
    return ::uUnbox< int>(::app::Fuse::Elements::Visibility__typeof(), ::uPtr< ::app::Fuse::Animations::Keyframe*>(kf)->ObjectValue());
}

void KeyframeAccessors__SetVisibility_1(::uStatic* __this, ::app::Fuse::Animations::Keyframe* kf, int v)
{
    ::uPtr< ::app::Fuse::Animations::Keyframe*>(kf)->ObjectValue(::uBox< int>(::app::Fuse::Elements::Visibility__typeof(), v));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MapView__uType* MapView__typeof()
{
    static ::uStaticStrong<MapView__uType*> type;
    if (type != NULL) return type;

    type = (MapView__uType*)::uAllocClassType(sizeof(MapView__uType), "Fuse.Controls.MapView", false, 8, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::Panel__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(MapView__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(MapView__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(MapView__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(MapView__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(MapView__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(MapView__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(MapView__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(MapView__uType, __interface_7));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", MapView__New_2, 0, true, MapView__typeof()));

    ::uRegisterType(type);
    return type;
}

void MapView___ObjInit_4(MapView* __this)
{
    ::app::Fuse::Controls::Panel___ObjInit_3(__this);
}

MapView* MapView__New_2(::uStatic* __this)
{
    MapView* inst = (MapView*)::uAllocObject(sizeof(MapView), MapView__typeof());
    inst->_ObjInit_4();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MultiLayout__uType* MultiLayout__typeof()
{
    static ::uStaticStrong<MultiLayout__uType*> type;
    if (type != NULL) return type;

    type = (MultiLayout__uType*)::uAllocClassType(sizeof(MultiLayout__uType), "Fuse.Controls.MultiLayout", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Behavior__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))MultiLayout__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))MultiLayout__OnUnrooted;

    type->SetStrongRefs(
        "_layoutElement", offsetof(MultiLayout, _layoutElement));

    type->SetFields(1,
        ::uNewField("_layoutElement", NULL, offsetof(MultiLayout, _layoutElement), ::app::Fuse::Elements::Element__typeof()));

    type->SetFunctions(4,
        ::uNewFunctionVoid("ChangeLayout", MultiLayout__ChangeLayout, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunction("get_LayoutElement", MultiLayout__get_LayoutElement, 0, false, ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction(".ctor", MultiLayout__New_1, 0, true, MultiLayout__typeof()),
        ::uNewFunctionVoid("set_LayoutElement", MultiLayout__set_LayoutElement, 0, false, ::app::Fuse::Elements::Element__typeof()));

    ::uRegisterType(type);
    return type;
}

void MultiLayout___ObjInit_1(MultiLayout* __this)
{
    ::app::Fuse::Behavior___ObjInit(__this);
}

void MultiLayout__ChangeLayout(MultiLayout* __this, ::app::Fuse::Node* layoutRoot)
{
    if (layoutRoot == NULL)
    {
        return;
    }

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Behavior::GetEnumerator(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(layoutRoot)->Behaviors())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Behavior* b = ::app::Uno::Collections::IEnumerator__Fuse_Behavior::Current(::uPtr< ::uObject*>(enum_123));

        if (::uIs(b, MultiLayout__typeof()))
        {
            return;
        }
    }

    if (::uIs(layoutRoot, ::app::Fuse::Controls::Placeholder__typeof()))
    {
        ::uPtr< ::app::Fuse::Controls::Placeholder*>(::uCast< ::app::Fuse::Controls::Placeholder*>(layoutRoot, ::app::Fuse::Controls::Placeholder__typeof()))->AcquireTarget();
    }

    for (int i = 0; i < layoutRoot->SubNodeCount(); i++)
    {
        __this->ChangeLayout(::uPtr< ::app::Fuse::Node*>(layoutRoot)->GetSubNode(i));
    }
}

::app::Fuse::Elements::Element* MultiLayout__get_LayoutElement(MultiLayout* __this)
{
    return __this->_layoutElement;
}

MultiLayout* MultiLayout__New_1(::uStatic* __this)
{
    MultiLayout* inst = (MultiLayout*)::uAllocObject(sizeof(MultiLayout), MultiLayout__typeof());
    inst->_ObjInit_1();
    return inst;
}

void MultiLayout__OnRooted(MultiLayout* __this, ::app::Fuse::Node* node)
{
    __this->ChangeLayout((::app::Fuse::Node*)__this->_layoutElement);
}

void MultiLayout__OnUnrooted(MultiLayout* __this, ::app::Fuse::Node* node)
{
}

void MultiLayout__set_LayoutElement(MultiLayout* __this, ::app::Fuse::Elements::Element* value)
{
    if (__this->_layoutElement != value)
    {
        __this->_layoutElement = value;
        __this->ChangeLayout((::app::Fuse::Node*)__this->_layoutElement);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MultiLayoutPanel__uType* MultiLayoutPanel__typeof()
{
    static ::uStaticStrong<MultiLayoutPanel__uType*> type;
    if (type != NULL) return type;

    type = (MultiLayoutPanel__uType*)::uAllocClassType(sizeof(MultiLayoutPanel__uType), "Fuse.Controls.MultiLayoutPanel", false, 8, 1, 0);

    type->SetBaseType(::app::Fuse::Controls::Panel__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(MultiLayoutPanel__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(MultiLayoutPanel__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(MultiLayoutPanel__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(MultiLayoutPanel__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(MultiLayoutPanel__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(MultiLayoutPanel__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(MultiLayoutPanel__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(MultiLayoutPanel__uType, __interface_7));

    type->SetStrongRefs(
        "_multiLayout", offsetof(MultiLayoutPanel, _multiLayout));

    type->SetFields(1,
        ::uNewField("_multiLayout", NULL, offsetof(MultiLayoutPanel, _multiLayout), ::app::Fuse::Controls::MultiLayout__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_LayoutElement", MultiLayoutPanel__get_LayoutElement, 0, false, ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction(".ctor", MultiLayoutPanel__New_2, 0, true, MultiLayoutPanel__typeof()),
        ::uNewFunctionVoid("set_LayoutElement", MultiLayoutPanel__set_LayoutElement, 0, false, ::app::Fuse::Elements::Element__typeof()));

    ::uRegisterType(type);
    return type;
}

void MultiLayoutPanel___ObjInit_4(MultiLayoutPanel* __this)
{
    __this->_multiLayout = ::app::Fuse::Controls::MultiLayout__New_1(NULL);
    ::app::Fuse::Controls::Panel___ObjInit_3(__this);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(__this->Behaviors()), (::app::Fuse::Behavior*)__this->_multiLayout);
}

::app::Fuse::Elements::Element* MultiLayoutPanel__get_LayoutElement(MultiLayoutPanel* __this)
{
    return ::uPtr< ::app::Fuse::Controls::MultiLayout*>(__this->_multiLayout)->LayoutElement();
}

MultiLayoutPanel* MultiLayoutPanel__New_2(::uStatic* __this)
{
    MultiLayoutPanel* inst = (MultiLayoutPanel*)::uAllocObject(sizeof(MultiLayoutPanel), MultiLayoutPanel__typeof());
    inst->_ObjInit_4();
    return inst;
}

void MultiLayoutPanel__set_LayoutElement(MultiLayoutPanel* __this, ::app::Fuse::Elements::Element* value)
{
    ::uPtr< ::app::Fuse::Controls::MultiLayout*>(__this->_multiLayout)->LayoutElement(value);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeViewHost__uType* NativeViewHost__typeof()
{
    static ::uStaticStrong<NativeViewHost__uType*> type;
    if (type != NULL) return type;

    type = (NativeViewHost__uType*)::uAllocClassType(sizeof(NativeViewHost__uType), "Fuse.Controls.NativeViewHost", false, 8, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::Panel__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(NativeViewHost__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(NativeViewHost__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(NativeViewHost__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(NativeViewHost__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(NativeViewHost__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(NativeViewHost__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(NativeViewHost__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(NativeViewHost__uType, __interface_7));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", NativeViewHost__New_2, 0, true, NativeViewHost__typeof()));

    ::uRegisterType(type);
    return type;
}

void NativeViewHost___ObjInit_4(NativeViewHost* __this)
{
    ::app::Fuse::Controls::Panel___ObjInit_3(__this);
}

NativeViewHost* NativeViewHost__New_2(::uStatic* __this)
{
    NativeViewHost* inst = (NativeViewHost*)::uAllocObject(sizeof(NativeViewHost), NativeViewHost__typeof());
    inst->_ObjInit_4();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NavigationBar__uType* NavigationBar__typeof()
{
    static ::uStaticStrong<NavigationBar__uType*> type;
    if (type != NULL) return type;

    type = (NavigationBar__uType*)::uAllocClassType(sizeof(NavigationBar__uType), "Fuse.Controls.NavigationBar", false, 8, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::Panel__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(NavigationBar__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(NavigationBar__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(NavigationBar__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(NavigationBar__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(NavigationBar__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(NavigationBar__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(NavigationBar__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(NavigationBar__uType, __interface_7));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", NavigationBar__New_2, 0, true, NavigationBar__typeof()));

    ::uRegisterType(type);
    return type;
}

void NavigationBar___ObjInit_4(NavigationBar* __this)
{
    ::app::Fuse::Controls::Panel___ObjInit_3(__this);
}

NavigationBar* NavigationBar__New_2(::uStatic* __this)
{
    NavigationBar* inst = (NavigationBar*)::uAllocObject(sizeof(NavigationBar), NavigationBar__typeof());
    inst->_ObjInit_4();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Number__string*> Number__FormatProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Number__float*> Number__ValueProperty;

Number__uType* Number__typeof()
{
    static ::uStaticStrong<Number__uType*> type;
    if (type != NULL) return type;

    type = (Number__uType*)::uAllocClassType(sizeof(Number__uType), "Fuse.Controls.Number", false, 9, 2, 0);

    type->SetBaseType(::app::Fuse::Controls::Panel__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))Number__OnRooted;
    type->__interface_8.__fp_get_Value = (float(*)(void*))Number__get_Value;
    type->__interface_8.__fp_set_Value = (void(*)(void*, float))Number__set_Value;
    type->__interface_8.__fp_add_ValueChanged = (void(*)(void*, ::uDelegate*))Number__add_ValueChanged;
    type->__interface_8.__fp_remove_ValueChanged = (void(*)(void*, ::uDelegate*))Number__remove_ValueChanged;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Number__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(Number__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(Number__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(Number__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(Number__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(Number__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(Number__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(Number__uType, __interface_7),
        ::app::Fuse::Triggers::IValue__float__typeof(), offsetof(Number__uType, __interface_8));

    type->SetStrongRefs(
        "_text", offsetof(Number, _text),
        "ValueChanged", offsetof(Number, ValueChanged));

    type->SetFields(3,
        ::uNewField("_text", NULL, offsetof(Number, _text), ::app::Fuse::Controls::TextControl__typeof()),
        ::uNewField("FormatProperty", &Number__FormatProperty, 0, ::app::Fuse::StyleProperty__Fuse_Controls_Number__string__typeof()),
        ::uNewField("ValueProperty", &Number__ValueProperty, 0, ::app::Fuse::StyleProperty__Fuse_Controls_Number__float__typeof()));

    type->SetFunctions(11,
        ::uNewFunctionVoid("add_ValueChanged", Number__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__float__typeof()),
        ::uNewFunctionVoid("FormatChanged", Number__FormatChanged, 0, true, Number__typeof()),
        ::uNewFunction("get_Format", Number__get_Format, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Value", Number__get_Value, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Number__New_2, 0, true, Number__typeof()),
        ::uNewFunctionVoid("OnValueChanged", Number__OnValueChanged, 0, false, ::app::Uno::Float__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", Number__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__float__typeof()),
        ::uNewFunctionVoid("set_Format", Number__set_Format, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_Value", Number__set_Value, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("StaticValueChanged", Number__StaticValueChanged, 0, true, Number__typeof()),
        ::uNewFunctionVoid("UpdateValue", Number__UpdateValue, 0, false));

    ::uRegisterType(type);
    return type;
}

void Number___ObjInit_4(Number* __this)
{
    ::app::Fuse::Controls::Panel___ObjInit_3(__this);
    __this->_text = (::app::Fuse::Controls::TextControl*)::app::Fuse::Controls::Text__New_2(NULL);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(__this->Children()), (::app::Fuse::Node*)__this->_text);
}

void Number___TypeInit_4(::uStatic* __this)
{
    Number__FormatProperty = ::app::Fuse::StyleProperty__Fuse_Controls_Number__string__New_1(NULL, ::uGetConstString("F0"), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Number__typeof(), (const void*)Number__FormatChanged));
    Number__ValueProperty = ::app::Fuse::StyleProperty__Fuse_Controls_Number__float__New_1(NULL, 0.0f, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Number__typeof(), (const void*)Number__StaticValueChanged));
}

void Number__add_ValueChanged(Number* __this, ::uDelegate* value)
{
    __this->ValueChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ValueChanged, (::uDelegate*)value), ::app::Uno::UX::ValueChangedHandler__float__typeof());
}

void Number__FormatChanged(::uStatic* __this, Number* n)
{
    ::uPtr< Number*>(n)->UpdateValue();
}

::uString* Number__get_Format(Number* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Number__string*>(Number__FormatProperty)->Get(__this);
}

float Number__get_Value(Number* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Number__float*>(Number__ValueProperty)->Get(__this);
}

Number* Number__New_2(::uStatic* __this)
{
    Number* inst = (Number*)::uAllocObject(sizeof(Number), Number__typeof());
    inst->_ObjInit_4();
    return inst;
}

void Number__OnRooted(Number* __this)
{
    ::app::Fuse::Controls::Panel__OnRooted(__this);
    __this->UpdateValue();
}

void Number__OnValueChanged(Number* __this, float n, ::uObject* origin)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ValueChanged, NULL))
    {
        ::app::Uno::UX::ValueChangedArgs__float* args = ::app::Uno::UX::ValueChangedArgs__float__New_2(NULL, n, origin);
        ::uPtr< ::uDelegate*>(__this->ValueChanged)->InvokeVoid< ::uObject*, ::app::Uno::UX::ValueChangedArgs__float*>(::uBox(::app::Uno::Float__typeof(), n), args);
    }
}

void Number__remove_ValueChanged(Number* __this, ::uDelegate* value)
{
    __this->ValueChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->ValueChanged, (::uDelegate*)value), ::app::Uno::UX::ValueChangedHandler__float__typeof());
}

void Number__set_Format(Number* __this, ::uString* value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Number__string*>(Number__FormatProperty)->Set(__this, value);
}

void Number__set_Value(Number* __this, float value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Number__float*>(Number__ValueProperty)->Set(__this, value);
}

void Number__StaticValueChanged(::uStatic* __this, Number* n)
{
    ::uPtr< Number*>(n)->UpdateValue();
    n->OnValueChanged(n->Value(), (::uObject*)n);
}

void Number__UpdateValue(Number* __this)
{
    ::uArray* array_123;
    ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->_text)->Value(::app::Uno::String__Format(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("{0:"), __this->Format()), ::uGetConstString("}")), (array_123 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(0) = ::uBox(::app::Uno::Float__typeof(), __this->Value()), array_123)));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Page__uType* Page__typeof()
{
    static ::uStaticStrong<Page__uType*> type;
    if (type != NULL) return type;

    type = (Page__uType*)::uAllocClassType(sizeof(Page__uType), "Fuse.Controls.Page", false, 8, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::Panel__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Page__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(Page__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(Page__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(Page__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(Page__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(Page__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(Page__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(Page__uType, __interface_7));

    type->SetFunctions(7,
        ::uNewFunction("get_Title", Page__get_Title, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction(".ctor", Page__New_2, 0, true, Page__typeof()),
        ::uNewFunctionVoid("OnRestoreState", Page__OnRestoreState, 0, false, ::uObject__typeof()),
        ::uNewFunction("OnSaveState", Page__OnSaveState, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("RestoreState", Page__RestoreState, 0, false, ::uObject__typeof()),
        ::uNewFunction("SaveState", Page__SaveState, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("set_Title", Page__set_Title, 0, false, ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void Page___ObjInit_4(Page* __this)
{
    ::app::Fuse::Controls::Panel___ObjInit_3(__this);
}

::uString* Page__get_Title(Page* __this)
{
    ::uObject* v;

    if (__this->TryGetResource(::uGetConstString("Title"), NULL, &v))
    {
        return ::uAs< ::uString*>(v, ::app::Uno::String__typeof());
    }

    return NULL;
}

Page* Page__New_2(::uStatic* __this)
{
    Page* inst = (Page*)::uAllocObject(sizeof(Page), Page__typeof());
    inst->_ObjInit_4();
    return inst;
}

void Page__OnRestoreState(Page* __this, ::uObject* state)
{
}

::uObject* Page__OnSaveState(Page* __this)
{
    return NULL;
}

void Page__RestoreState(Page* __this, ::uObject* state)
{
    __this->OnRestoreState(state);
}

::uObject* Page__SaveState(Page* __this)
{
    return __this->OnSaveState();
}

void Page__set_Title(Page* __this, ::uString* value)
{
    if (::app::Uno::String__op_Inequality(NULL, __this->Title(), value))
    {
        __this->SetResource(::uGetConstString("Title"), (::uObject*)value);
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PageControl__uType* PageControl__typeof()
{
    static ::uStaticStrong<PageControl__uType*> type;
    if (type != NULL) return type;

    type = (PageControl__uType*)::uAllocClassType(sizeof(PageControl__uType), "Fuse.Controls.PageControl", false, 9, 1, 0);

    type->SetBaseType(::app::Fuse::Controls::Panel__typeof());
    type->__interface_8.__fp_GetPage = (::app::Fuse::Node*(*)(void*, int))PageControl__Fuse_Navigation_INavigation_GetPage;
    type->__interface_8.__fp_get_PageCount = (int(*)(void*))PageControl__Fuse_Navigation_INavigation_get_PageCount;
    type->__interface_8.__fp_get_PageProgress = (double(*)(void*))PageControl__Fuse_Navigation_INavigation_get_PageProgress;
    type->__interface_8.__fp_GoForward = (void(*)(void*))PageControl__GoForward;
    type->__interface_8.__fp_GoBack = (void(*)(void*))PageControl__GoBack;
    type->__interface_8.__fp_Goto = (void(*)(void*, ::app::Fuse::Node*, int))PageControl__Goto;
    type->__interface_8.__fp_Toggle = (void(*)(void*, ::app::Fuse::Node*))PageControl__Toggle;
    type->__interface_8.__fp_get_CanGoBack = (bool(*)(void*))PageControl__get_CanGoBack;
    type->__interface_8.__fp_get_CanGoForward = (bool(*)(void*))PageControl__get_CanGoForward;
    type->__interface_8.__fp_add_PageCountChanged = (void(*)(void*, ::uDelegate*))PageControl__add_PageCountChanged;
    type->__interface_8.__fp_remove_PageCountChanged = (void(*)(void*, ::uDelegate*))PageControl__remove_PageCountChanged;
    type->__interface_8.__fp_add_PageProgressChanged = (void(*)(void*, ::uDelegate*))PageControl__add_PageProgressChanged;
    type->__interface_8.__fp_remove_PageProgressChanged = (void(*)(void*, ::uDelegate*))PageControl__remove_PageProgressChanged;
    type->__interface_8.__fp_add_HistoryChanged = (void(*)(void*, ::uDelegate*))PageControl__add_HistoryChanged;
    type->__interface_8.__fp_remove_HistoryChanged = (void(*)(void*, ::uDelegate*))PageControl__remove_HistoryChanged;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(PageControl__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(PageControl__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(PageControl__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(PageControl__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(PageControl__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(PageControl__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(PageControl__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(PageControl__uType, __interface_7),
        ::app::Fuse::Navigation::INavigation__typeof(), offsetof(PageControl__uType, __interface_8));

    type->SetStrongRefs(
        "TheNavigation", offsetof(PageControl, TheNavigation));

    type->SetFields(1,
        ::uNewField("TheNavigation", NULL, offsetof(PageControl, TheNavigation), ::app::Fuse::Navigation::LinearNavigation__typeof()));

    type->SetFunctions(22,
        ::uNewFunctionVoid("add_HistoryChanged", PageControl__add_HistoryChanged, 0, false, ::app::Fuse::Navigation::HistoryChangedHandler__typeof()),
        ::uNewFunctionVoid("add_Navigated", PageControl__add_Navigated, 0, false, ::app::Fuse::Navigation::NavigatedHandler__typeof()),
        ::uNewFunctionVoid("add_PageCountChanged", PageControl__add_PageCountChanged, 0, false, ::app::Fuse::Navigation::NavigationPageCountHandler__typeof()),
        ::uNewFunctionVoid("add_PageProgressChanged", PageControl__add_PageProgressChanged, 0, false, ::app::Fuse::Navigation::NavigationPageProgressHandler__typeof()),
        ::uNewFunction("Fuse.Navigation.INavigation.get_PageCount", PageControl__Fuse_Navigation_INavigation_get_PageCount, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("Fuse.Navigation.INavigation.get_PageProgress", PageControl__Fuse_Navigation_INavigation_get_PageProgress, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction("Fuse.Navigation.INavigation.GetPage", PageControl__Fuse_Navigation_INavigation_GetPage, 0, false, ::app::Fuse::Node__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Active", PageControl__get_Active, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunction("get_CanGoBack", PageControl__get_CanGoBack, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_CanGoForward", PageControl__get_CanGoForward, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Navigation", PageControl__get_Navigation, 0, false, ::app::Fuse::Navigation::StructuredNavigation__typeof()),
        ::uNewFunctionVoid("GoBack", PageControl__GoBack, 0, false),
        ::uNewFunctionVoid("GoForward", PageControl__GoForward, 0, false),
        ::uNewFunctionVoid("Goto", PageControl__Goto, 0, false, ::app::Fuse::Node__typeof(), ::app::Fuse::Navigation::NavigationGotoMode__typeof()),
        ::uNewFunctionVoid("InitializeUX", PageControl__InitializeUX, 0, false),
        ::uNewFunction(".ctor", PageControl__New_2, 0, true, PageControl__typeof()),
        ::uNewFunctionVoid("remove_HistoryChanged", PageControl__remove_HistoryChanged, 0, false, ::app::Fuse::Navigation::HistoryChangedHandler__typeof()),
        ::uNewFunctionVoid("remove_Navigated", PageControl__remove_Navigated, 0, false, ::app::Fuse::Navigation::NavigatedHandler__typeof()),
        ::uNewFunctionVoid("remove_PageCountChanged", PageControl__remove_PageCountChanged, 0, false, ::app::Fuse::Navigation::NavigationPageCountHandler__typeof()),
        ::uNewFunctionVoid("remove_PageProgressChanged", PageControl__remove_PageProgressChanged, 0, false, ::app::Fuse::Navigation::NavigationPageProgressHandler__typeof()),
        ::uNewFunctionVoid("set_Active", PageControl__set_Active, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("Toggle", PageControl__Toggle, 0, false, ::app::Fuse::Node__typeof()));

    ::uRegisterType(type);
    return type;
}

void PageControl___ObjInit_4(PageControl* __this)
{
    ::app::Fuse::Controls::Panel___ObjInit_3(__this);
    __this->InitializeUX();
}

void PageControl__add_HistoryChanged(PageControl* __this, ::uDelegate* value)
{
    ::uPtr< ::app::Fuse::Navigation::StructuredNavigation*>(__this->Navigation())->add_HistoryChanged(value);
}

void PageControl__add_Navigated(PageControl* __this, ::uDelegate* value)
{
    ::uPtr< ::app::Fuse::Navigation::StructuredNavigation*>(__this->Navigation())->add_Navigated(value);
}

void PageControl__add_PageCountChanged(PageControl* __this, ::uDelegate* value)
{
    ::uPtr< ::app::Fuse::Navigation::StructuredNavigation*>(__this->Navigation())->add_PageCountChanged(value);
}

void PageControl__add_PageProgressChanged(PageControl* __this, ::uDelegate* value)
{
    ::uPtr< ::app::Fuse::Navigation::StructuredNavigation*>(__this->Navigation())->add_PageProgressChanged(value);
}

int PageControl__Fuse_Navigation_INavigation_get_PageCount(PageControl* __this)
{
    return ::uPtr< ::app::Fuse::Navigation::StructuredNavigation*>(__this->Navigation())->PageCount();
}

double PageControl__Fuse_Navigation_INavigation_get_PageProgress(PageControl* __this)
{
    return ::uPtr< ::app::Fuse::Navigation::StructuredNavigation*>(__this->Navigation())->PageProgress();
}

::app::Fuse::Node* PageControl__Fuse_Navigation_INavigation_GetPage(PageControl* __this, int index)
{
    return ::uPtr< ::app::Fuse::Navigation::StructuredNavigation*>(__this->Navigation())->GetPage(index);
}

::app::Fuse::Node* PageControl__get_Active(PageControl* __this)
{
    return ::uPtr< ::app::Fuse::Navigation::LinearNavigation*>(__this->TheNavigation)->Active();
}

bool PageControl__get_CanGoBack(PageControl* __this)
{
    return ::uPtr< ::app::Fuse::Navigation::StructuredNavigation*>(__this->Navigation())->CanGoBack();
}

bool PageControl__get_CanGoForward(PageControl* __this)
{
    return ::uPtr< ::app::Fuse::Navigation::StructuredNavigation*>(__this->Navigation())->CanGoForward();
}

::app::Fuse::Navigation::StructuredNavigation* PageControl__get_Navigation(PageControl* __this)
{
    return (::app::Fuse::Navigation::StructuredNavigation*)__this->TheNavigation;
}

void PageControl__GoBack(PageControl* __this)
{
    ::uPtr< ::app::Fuse::Navigation::StructuredNavigation*>(__this->Navigation())->GoBack();
}

void PageControl__GoForward(PageControl* __this)
{
    ::uPtr< ::app::Fuse::Navigation::StructuredNavigation*>(__this->Navigation())->GoForward();
}

void PageControl__Goto(PageControl* __this, ::app::Fuse::Node* node, int mode)
{
    ::uPtr< ::app::Fuse::Navigation::StructuredNavigation*>(__this->Navigation())->Goto(node, mode);
}

void PageControl__InitializeUX(PageControl* __this)
{
    ::app::Fuse::Controls::PageControl_Template* collection_123;
    ::app::Fuse::Style* temp = ::app::Fuse::Style__New_1(NULL);
    collection_123 = ::app::Fuse::Controls::PageControl_Template__New_1(NULL, __this);
    ::uPtr< ::app::Fuse::Controls::PageControl_Template*>(collection_123)->Cascade(true);
    collection_123->AffectSubtypes(true);
    ::app::Fuse::Controls::PageControl_Template* temp1 = collection_123;
    __this->TheNavigation = ::app::Fuse::Navigation::LinearNavigation__New_1(NULL);
    ::app::Fuse::Navigation::SwipeNavigate* temp2 = ::app::Fuse::Navigation::SwipeNavigate__New_1(NULL);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Style*>(temp)->Templates()), (::uObject*)temp1);
    ::uPtr< ::app::Fuse::Navigation::LinearNavigation*>(__this->TheNavigation)->Easing(20);
    ::uPtr< ::app::Fuse::Navigation::SwipeNavigate*>(temp2)->SwipeEnds(0);
    temp2->SwipeDirection(1);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(__this->Behaviors()), (::app::Fuse::Behavior*)__this->TheNavigation);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(__this->Behaviors()), (::app::Fuse::Behavior*)temp2);
    ::app::Uno::Collections::ICollection__Fuse_Style::Add(::uPtr< ::uObject*>(__this->Styles()), temp);
}

PageControl* PageControl__New_2(::uStatic* __this)
{
    PageControl* inst = (PageControl*)::uAllocObject(sizeof(PageControl), PageControl__typeof());
    inst->_ObjInit_4();
    return inst;
}

void PageControl__remove_HistoryChanged(PageControl* __this, ::uDelegate* value)
{
    ::uPtr< ::app::Fuse::Navigation::StructuredNavigation*>(__this->Navigation())->remove_HistoryChanged(value);
}

void PageControl__remove_Navigated(PageControl* __this, ::uDelegate* value)
{
    ::uPtr< ::app::Fuse::Navigation::StructuredNavigation*>(__this->Navigation())->remove_Navigated(value);
}

void PageControl__remove_PageCountChanged(PageControl* __this, ::uDelegate* value)
{
    ::uPtr< ::app::Fuse::Navigation::StructuredNavigation*>(__this->Navigation())->remove_PageCountChanged(value);
}

void PageControl__remove_PageProgressChanged(PageControl* __this, ::uDelegate* value)
{
    ::uPtr< ::app::Fuse::Navigation::StructuredNavigation*>(__this->Navigation())->remove_PageProgressChanged(value);
}

void PageControl__set_Active(PageControl* __this, ::app::Fuse::Node* value)
{
    ::uPtr< ::app::Fuse::Navigation::LinearNavigation*>(__this->TheNavigation)->Active(value);
}

void PageControl__Toggle(PageControl* __this, ::app::Fuse::Node* node)
{
    ::uPtr< ::app::Fuse::Navigation::StructuredNavigation*>(__this->Navigation())->Toggle(node);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PageControl_Template__uType* PageControl_Template__typeof()
{
    static ::uStaticStrong<PageControl_Template__uType*> type;
    if (type != NULL) return type;

    type = (PageControl_Template__uType*)::uAllocClassType(sizeof(PageControl_Template__uType), "Fuse.Controls.PageControl.Template", false, 1, 1, 0);

    type->SetBaseType(::app::Uno::UX::Template__Fuse_Controls_Page__typeof());
    type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_Page*, ::app::Fuse::Controls::Page*))PageControl_Template__OnApply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(PageControl_Template__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(PageControl_Template, __parent));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", PageControl_Template__New_1, 0, true, PageControl_Template__typeof(), ::app::Fuse::Controls::PageControl__typeof()));

    ::uRegisterType(type);
    return type;
}

void PageControl_Template___ObjInit_1(PageControl_Template* __this, ::app::Fuse::Controls::PageControl* parent)
{
    ::app::Uno::UX::Template__Fuse_Controls_Page___ObjInit(__this);
    __this->__parent = parent;
}

PageControl_Template* PageControl_Template__New_1(::uStatic* __this, ::app::Fuse::Controls::PageControl* parent)
{
    PageControl_Template* inst = (PageControl_Template*)::uAllocObject(sizeof(PageControl_Template), PageControl_Template__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

void PageControl_Template__OnApply(PageControl_Template* __this, ::app::Fuse::Controls::Page* self)
{
    ::app::Fuse::Navigation::EnteringAnimation* temp = ::app::Fuse::Navigation::EnteringAnimation__New_1(NULL);
    ::app::Fuse::Animations::Move* temp1 = ::app::Fuse::Animations::Move__New_1(NULL);
    ::app::Fuse::Navigation::ExitingAnimation* temp2 = ::app::Fuse::Navigation::ExitingAnimation__New_1(NULL);
    ::app::Fuse::Animations::Move* temp3 = ::app::Fuse::Animations::Move__New_1(NULL);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Navigation::EnteringAnimation*>(temp)->Animators()), (::app::Fuse::Animations::Animator*)temp1);
    ::uPtr< ::app::Fuse::Animations::Move*>(temp1)->X(-1.0f);
    temp1->RelativeTo(::app::Fuse::TranslationModes__ParentSize);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Navigation::ExitingAnimation*>(temp2)->Animators()), (::app::Fuse::Animations::Animator*)temp3);
    ::uPtr< ::app::Fuse::Animations::Move*>(temp3)->X(1.0f);
    temp3->Duration(0.5);
    temp3->RelativeTo(::app::Fuse::TranslationModes__ParentSize);
    ::uPtr< ::app::Fuse::Controls::Page*>(self)->AddStyleBehavior((::app::Fuse::Behavior*)temp);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp2);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory*> PageIndicator__DotFactoryProperty;

PageIndicator__uType* PageIndicator__typeof()
{
    static ::uStaticStrong<PageIndicator__uType*> type;
    if (type != NULL) return type;

    type = (PageIndicator__uType*)::uAllocClassType(sizeof(PageIndicator__uType), "Fuse.Controls.PageIndicator", false, 8, 1, 0);

    type->SetBaseType(::app::Fuse::Controls::StackPanel__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))PageIndicator__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))PageIndicator__OnUnrooted;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(PageIndicator__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(PageIndicator__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(PageIndicator__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(PageIndicator__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(PageIndicator__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(PageIndicator__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(PageIndicator__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(PageIndicator__uType, __interface_7));

    type->SetStrongRefs(
        "_pageProgress", offsetof(PageIndicator, _pageProgress));

    type->SetFields(2,
        ::uNewField("_pageProgress", NULL, offsetof(PageIndicator, _pageProgress), ::app::Fuse::Navigation::INavigation__typeof()),
        ::uNewField("DotFactoryProperty", &PageIndicator__DotFactoryProperty, 0, ::app::Fuse::StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__typeof()));

    type->SetFunctions(8,
        ::uNewFunction("get_DotFactory", PageIndicator__get_DotFactory, 0, false, ::app::Uno::UX::IFactory__typeof()),
        ::uNewFunctionVoid("InitializeUX", PageIndicator__InitializeUX, 0, false),
        ::uNewFunction(".ctor", PageIndicator__New_3, 0, true, PageIndicator__typeof(), ::app::Fuse::Navigation::INavigation__typeof()),
        ::uNewFunctionVoid("OnDotFactoryChanged", PageIndicator__OnDotFactoryChanged, 0, true, PageIndicator__typeof()),
        ::uNewFunctionVoid("RecreateDots", PageIndicator__RecreateDots, 0, false),
        ::uNewFunctionVoid("set_DotFactory", PageIndicator__set_DotFactory, 0, false, ::app::Uno::UX::IFactory__typeof()),
        ::uNewFunctionVoid("UpdateCount", PageIndicator__UpdateCount, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("UpdateCurrent", PageIndicator__UpdateCurrent, 0, false, ::uObject__typeof(), ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof()));

    ::uRegisterType(type);
    return type;
}

void PageIndicator___ObjInit_5(PageIndicator* __this, ::uObject* navigation)
{
    ::app::Fuse::Controls::StackPanel___ObjInit_4(__this);
    __this->InitializeUX();
    __this->_pageProgress = navigation;
    __this->DotFactory((::uObject*)::app::Fuse::Controls::PageIndicatorDotFactory__New_2(NULL));
}

void PageIndicator___TypeInit_5(::uStatic* __this)
{
    PageIndicator__DotFactoryProperty = ::app::Fuse::StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__New_1(NULL, NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_PageIndicator__typeof(), (const void*)PageIndicator__OnDotFactoryChanged));
}

::uObject* PageIndicator__get_DotFactory(PageIndicator* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory*>(PageIndicator__DotFactoryProperty)->Get(__this);
}

void PageIndicator__InitializeUX(PageIndicator* __this)
{
    ::app::Fuse::Controls::PageIndicator_Template* collection_123;
    ::app::Fuse::Style* temp = ::app::Fuse::Style__New_1(NULL);
    collection_123 = ::app::Fuse::Controls::PageIndicator_Template__New_1(NULL, __this);
    ::uPtr< ::app::Fuse::Controls::PageIndicator_Template*>(collection_123)->Cascade(true);
    collection_123->AffectSubtypes(true);
    ::app::Fuse::Controls::PageIndicator_Template* temp1 = collection_123;
    __this->Orientation(0);
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Style*>(temp)->Templates()), (::uObject*)temp1);
    ::app::Uno::Collections::ICollection__Fuse_Style::Add(::uPtr< ::uObject*>(__this->Styles()), temp);
}

PageIndicator* PageIndicator__New_3(::uStatic* __this, ::uObject* navigation)
{
    PageIndicator* inst = (PageIndicator*)::uAllocObject(sizeof(PageIndicator), PageIndicator__typeof());
    inst->_ObjInit_5(navigation);
    return inst;
}

void PageIndicator__OnDotFactoryChanged(::uStatic* __this, PageIndicator* p)
{
    ::uPtr< PageIndicator*>(p)->RecreateDots();
}

void PageIndicator__OnRooted(PageIndicator* __this)
{
    ::app::Fuse::Controls::Panel__OnRooted(__this);
    ::app::Fuse::Navigation::INavigation::add_PageCountChanged(::uPtr< ::uObject*>(__this->_pageProgress), ::uNewDelegateNonVirt(::app::Fuse::Navigation::NavigationPageCountHandler__typeof(), (const void*)PageIndicator__UpdateCount, __this));
    ::app::Fuse::Navigation::INavigation::add_PageProgressChanged(::uPtr< ::uObject*>(__this->_pageProgress), ::uNewDelegateNonVirt(::app::Fuse::Navigation::NavigationPageProgressHandler__typeof(), (const void*)PageIndicator__UpdateCurrent, __this));
    __this->UpdateCount(NULL);
    __this->UpdateCurrent(NULL, ::app::Fuse::Navigation::INavigation::PageProgress(::uPtr< ::uObject*>(__this->_pageProgress)), ::app::Fuse::Navigation::INavigation::PageProgress(::uPtr< ::uObject*>(__this->_pageProgress)));
}

void PageIndicator__OnUnrooted(PageIndicator* __this)
{
    ::app::Fuse::Navigation::INavigation::remove_PageCountChanged(::uPtr< ::uObject*>(__this->_pageProgress), ::uNewDelegateNonVirt(::app::Fuse::Navigation::NavigationPageCountHandler__typeof(), (const void*)PageIndicator__UpdateCount, __this));
    ::app::Fuse::Navigation::INavigation::remove_PageProgressChanged(::uPtr< ::uObject*>(__this->_pageProgress), ::uNewDelegateNonVirt(::app::Fuse::Navigation::NavigationPageProgressHandler__typeof(), (const void*)PageIndicator__UpdateCurrent, __this));
    ::app::Fuse::Controls::Panel__OnUnrooted(__this);
}

void PageIndicator__RecreateDots(PageIndicator* __this)
{
    int count = ::app::Fuse::Navigation::INavigation::PageCount(::uPtr< ::uObject*>(__this->_pageProgress));

    while (::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(__this->Children())) > count)
    {
        ::app::Uno::Collections::IList__Fuse_Node::RemoveAt(::uPtr< ::uObject*>(__this->Children()), ::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(__this->Children())) - 1);
    }

    while (::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(__this->Children())) < count)
    {
        ::app::Fuse::Node* dot = ::uAs< ::app::Fuse::Node*>(::app::Uno::UX::IFactory::New_1(::uPtr< ::uObject*>(__this->DotFactory())), ::app::Fuse::Node__typeof());
        ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(__this->Children()), dot);
    }

    for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(__this->Children())); ++i)
    {
        ::app::Fuse::Navigation::NavigationPageProperty__SetNavigationPage(NULL, ::app::Uno::Collections::IList__Fuse_Node::Item(::uPtr< ::uObject*>(__this->Children()), i), ::app::Fuse::Navigation::INavigation::GetPage(::uPtr< ::uObject*>(__this->_pageProgress), i));
    }

    __this->UpdateCurrent((::uObject*)__this->_pageProgress, ::app::Fuse::Navigation::INavigation::PageProgress(::uPtr< ::uObject*>(__this->_pageProgress)), ::app::Fuse::Navigation::INavigation::PageProgress(::uPtr< ::uObject*>(__this->_pageProgress)));
}

void PageIndicator__set_DotFactory(PageIndicator* __this, ::uObject* value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory*>(PageIndicator__DotFactoryProperty)->Set(__this, value);
}

void PageIndicator__UpdateCount(PageIndicator* __this, ::uObject* s)
{
    __this->RecreateDots();
}

void PageIndicator__UpdateCurrent(PageIndicator* __this, ::uObject* s, double progress, double prevProgress)
{
    for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(__this->Children())); ++i)
    {
        double p = progress - (double)i;
        double pp = prevProgress - (double)i;
        ::app::Fuse::Navigation::Navigation__NotifyNavigation(NULL, ::app::Uno::Collections::IList__Fuse_Node::Item(::uPtr< ::uObject*>(__this->Children()), i), ::app::Fuse::Navigation::NavigationArgs__New_2(NULL, p, pp, 2));
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PageIndicator_Fuse_Drawing_SolidColor_float4_Color_Property__uType* PageIndicator_Fuse_Drawing_SolidColor_float4_Color_Property__typeof()
{
    static ::uStaticStrong<PageIndicator_Fuse_Drawing_SolidColor_float4_Color_Property__uType*> type;
    if (type != NULL) return type;

    type = (PageIndicator_Fuse_Drawing_SolidColor_float4_Color_Property__uType*)::uAllocClassType(sizeof(PageIndicator_Fuse_Drawing_SolidColor_float4_Color_Property__uType), "Fuse.Controls.PageIndicator.Fuse_Drawing_SolidColor_float4_Color_Property", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::UX::Property__float4__typeof());
    type->__fp_OnGet = (::app::Uno::Float4(*)(::app::Uno::UX::Property__float4*))PageIndicator_Fuse_Drawing_SolidColor_float4_Color_Property__OnGet;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__float4*, ::app::Uno::Float4, ::uObject*))PageIndicator_Fuse_Drawing_SolidColor_float4_Color_Property__OnSet;

    type->SetStrongRefs(
        "_obj", offsetof(PageIndicator_Fuse_Drawing_SolidColor_float4_Color_Property, _obj));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", PageIndicator_Fuse_Drawing_SolidColor_float4_Color_Property__New_1, 0, true, PageIndicator_Fuse_Drawing_SolidColor_float4_Color_Property__typeof(), ::app::Fuse::Drawing::SolidColor__typeof()));

    ::uRegisterType(type);
    return type;
}

void PageIndicator_Fuse_Drawing_SolidColor_float4_Color_Property___ObjInit_1(PageIndicator_Fuse_Drawing_SolidColor_float4_Color_Property* __this, ::app::Fuse::Drawing::SolidColor* obj)
{
    ::app::Uno::UX::Property__float4___ObjInit(__this);
    __this->_obj = obj;
}

PageIndicator_Fuse_Drawing_SolidColor_float4_Color_Property* PageIndicator_Fuse_Drawing_SolidColor_float4_Color_Property__New_1(::uStatic* __this, ::app::Fuse::Drawing::SolidColor* obj)
{
    PageIndicator_Fuse_Drawing_SolidColor_float4_Color_Property* inst = (PageIndicator_Fuse_Drawing_SolidColor_float4_Color_Property*)::uAllocObject(sizeof(PageIndicator_Fuse_Drawing_SolidColor_float4_Color_Property), PageIndicator_Fuse_Drawing_SolidColor_float4_Color_Property__typeof());
    inst->_ObjInit_1(obj);
    return inst;
}

::app::Uno::Float4 PageIndicator_Fuse_Drawing_SolidColor_float4_Color_Property__OnGet(PageIndicator_Fuse_Drawing_SolidColor_float4_Color_Property* __this)
{
    return ::uPtr< ::app::Fuse::Drawing::SolidColor*>(__this->_obj)->Color();
}

void PageIndicator_Fuse_Drawing_SolidColor_float4_Color_Property__OnSet(PageIndicator_Fuse_Drawing_SolidColor_float4_Color_Property* __this, ::app::Uno::Float4 v, ::uObject* origin)
{
    ::uPtr< ::app::Fuse::Drawing::SolidColor*>(__this->_obj)->Color(v);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PageIndicator_Template__uType* PageIndicator_Template__typeof()
{
    static ::uStaticStrong<PageIndicator_Template__uType*> type;
    if (type != NULL) return type;

    type = (PageIndicator_Template__uType*)::uAllocClassType(sizeof(PageIndicator_Template__uType), "Fuse.Controls.PageIndicator.Template", false, 1, 2, 0);

    type->SetBaseType(::app::Uno::UX::Template__Fuse_Controls_PageIndicatorDot__typeof());
    type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_PageIndicatorDot*, ::app::Fuse::Controls::PageIndicatorDot*))PageIndicator_Template__OnApply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(PageIndicator_Template__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(PageIndicator_Template, __parent),
        "TheColor_Color_inst", offsetof(PageIndicator_Template, TheColor_Color_inst));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", PageIndicator_Template__New_1, 0, true, PageIndicator_Template__typeof(), ::app::Fuse::Controls::PageIndicator__typeof()));

    ::uRegisterType(type);
    return type;
}

void PageIndicator_Template___ObjInit_1(PageIndicator_Template* __this, ::app::Fuse::Controls::PageIndicator* parent)
{
    ::app::Uno::UX::Template__Fuse_Controls_PageIndicatorDot___ObjInit(__this);
    __this->__parent = parent;
}

PageIndicator_Template* PageIndicator_Template__New_1(::uStatic* __this, ::app::Fuse::Controls::PageIndicator* parent)
{
    PageIndicator_Template* inst = (PageIndicator_Template*)::uAllocObject(sizeof(PageIndicator_Template), PageIndicator_Template__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

void PageIndicator_Template__OnApply(PageIndicator_Template* __this, ::app::Fuse::Controls::PageIndicatorDot* self)
{
    ::app::Fuse::Drawing::SolidColor* TheColor = ::app::Fuse::Drawing::SolidColor__New_1(NULL);
    __this->TheColor_Color_inst = ::app::Fuse::Controls::PageIndicator_Fuse_Drawing_SolidColor_float4_Color_Property__New_1(NULL, TheColor);
    ::app::Fuse::Controls::Circle* temp = ::app::Fuse::Controls::Circle__New_2(NULL);
    ::app::Fuse::Navigation::ActivatingAnimation* temp1 = ::app::Fuse::Navigation::ActivatingAnimation__New_1(NULL);
    ::app::Fuse::Animations::Scale* temp2 = ::app::Fuse::Animations::Scale__New_1(NULL);
    ::app::Fuse::Animations::Change__float4* temp3 = ::app::Fuse::Animations::Change__float4__New_1(NULL, (::app::Uno::UX::Property__float4*)__this->TheColor_Color_inst);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__WidthProperty)->SetStyle((::app::Fuse::Elements::Element*)self, 6.0f);
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->SetStyle((::app::Fuse::Elements::Element*)self, 6.0f);
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Elements_Element__float4*>(::app::Fuse::Elements::Element__MarginProperty)->SetStyle((::app::Fuse::Elements::Element*)self, ::app::Uno::Float4__New_2(NULL, 5.0f, 5.0f, 5.0f, 5.0f));
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::Circle*>(temp)->Fills()), (::app::Fuse::Drawing::Brush*)TheColor);
    ::uPtr< ::app::Fuse::Drawing::SolidColor*>(TheColor)->Color(::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 0.3f));
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Navigation::ActivatingAnimation*>(temp1)->Animators()), (::app::Fuse::Animations::Animator*)temp2);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(temp1->Animators()), (::app::Fuse::Animations::Animator*)temp3);
    ::uPtr< ::app::Fuse::Animations::Scale*>(temp2)->Factor(1.2f);
    ::uPtr< ::app::Fuse::Animations::Change__float4*>(temp3)->Value(::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 1.0f));
    ::uPtr< ::app::Fuse::Controls::PageIndicatorDot*>(self)->AddStyleChild((::app::Fuse::Node*)temp);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp1);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\.cache\GeneratedCode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PageIndicatorDot__uType* PageIndicatorDot__typeof()
{
    static ::uStaticStrong<PageIndicatorDot__uType*> type;
    if (type != NULL) return type;

    type = (PageIndicatorDot__uType*)::uAllocClassType(sizeof(PageIndicatorDot__uType), "Fuse.Controls.PageIndicatorDot", false, 8, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::Panel__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(PageIndicatorDot__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(PageIndicatorDot__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(PageIndicatorDot__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(PageIndicatorDot__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(PageIndicatorDot__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(PageIndicatorDot__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(PageIndicatorDot__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(PageIndicatorDot__uType, __interface_7));

    type->SetFunctions(2,
        ::uNewFunctionVoid("InitializeUX", PageIndicatorDot__InitializeUX, 0, false),
        ::uNewFunction(".ctor", PageIndicatorDot__New_2, 0, true, PageIndicatorDot__typeof()));

    ::uRegisterType(type);
    return type;
}

void PageIndicatorDot___ObjInit_4(PageIndicatorDot* __this)
{
    ::app::Fuse::Controls::Panel___ObjInit_3(__this);
    __this->InitializeUX();
}

void PageIndicatorDot__InitializeUX(PageIndicatorDot* __this)
{
}

PageIndicatorDot* PageIndicatorDot__New_2(::uStatic* __this)
{
    PageIndicatorDot* inst = (PageIndicatorDot*)::uAllocObject(sizeof(PageIndicatorDot), PageIndicatorDot__typeof());
    inst->_ObjInit_4();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PageIndicatorDotFactory__uType* PageIndicatorDotFactory__typeof()
{
    static ::uStaticStrong<PageIndicatorDotFactory__uType*> type;
    if (type != NULL) return type;

    type = (PageIndicatorDotFactory__uType*)::uAllocClassType(sizeof(PageIndicatorDotFactory__uType), "Fuse.Controls.PageIndicatorDotFactory", false, 1, 0, 0);

    type->__interface_0.__fp_New_1 = (::uObject*(*)(void*))PageIndicatorDotFactory__New_1;

    type->SetInterfaces(
        ::app::Uno::UX::IFactory__typeof(), offsetof(PageIndicatorDotFactory__uType, __interface_0));

    type->SetFunctions(2,
        ::uNewFunction("New", PageIndicatorDotFactory__New_1, 0, false, ::uObject__typeof()),
        ::uNewFunction(".ctor", PageIndicatorDotFactory__New_2, 0, true, PageIndicatorDotFactory__typeof()));

    ::uRegisterType(type);
    return type;
}

void PageIndicatorDotFactory___ObjInit(PageIndicatorDotFactory* __this)
{
}

::uObject* PageIndicatorDotFactory__New_1(PageIndicatorDotFactory* __this)
{
    return (::uObject*)::app::Fuse::Controls::PageIndicatorDot__New_2(NULL);
}

PageIndicatorDotFactory* PageIndicatorDotFactory__New_2(::uStatic* __this)
{
    PageIndicatorDotFactory* inst = (PageIndicatorDotFactory*)::uAllocObject(sizeof(PageIndicatorDotFactory), PageIndicatorDotFactory__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Panel__Fuse_Node*> Panel__AppearanceProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout*> Panel__LayoutProperty;

Panel__uType* Panel__typeof()
{
    static ::uStaticStrong<Panel__uType*> type;
    if (type != NULL) return type;

    type = (Panel__uType*)::uAllocClassType(sizeof(Panel__uType), "Fuse.Controls.Panel", false, 8, 8, 0);

    type->SetBaseType(::app::Fuse::Controls::Control__typeof());
    type->__fp_ArrangePaddingBox = (void(*)(::app::Fuse::Elements::Element*, ::app::Uno::Float2))Panel__ArrangePaddingBox;
    type->__fp_CalcRenderBounds = (::app::Uno::Rect(*)(::app::Fuse::Elements::Element*))Panel__CalcRenderBounds;
    type->__fp_FastTrackDrawWithOpacity = (bool(*)(::app::Fuse::Elements::Element*, ::app::Fuse::DrawContext*))Panel__FastTrackDrawWithOpacity;
    type->__fp_get_SubNodeCount = (int(*)(::app::Fuse::Node*))Panel__get_SubNodeCount;
    type->__fp_GetContentSize = (::app::Uno::Float2(*)(::app::Fuse::Elements::Element*, ::app::Uno::Float2, int))Panel__GetContentSize;
    type->__fp_GetSubNode = (::app::Fuse::Node*(*)(::app::Fuse::Node*, int))Panel__GetSubNode;
    type->__fp_IsMarginBoxDependent = (int(*)(::app::Fuse::Node*, ::app::Fuse::Node*))Panel__IsMarginBoxDependent;
    type->__fp_OnDrawControl = (void(*)(::app::Fuse::Controls::Control*, ::app::Fuse::DrawContext*))Panel__OnDrawControl;
    type->__fp_OnHitTestChildren = (void(*)(::app::Fuse::Elements::Element*, ::app::Fuse::HitTestContext*))Panel__OnHitTestChildren;
    type->__fp_OnInvalidateLayout = (void(*)(::app::Fuse::Node*))Panel__OnInvalidateLayout;
    type->__fp_OnResetStyle = (void(*)(::app::Fuse::Node*))Panel__OnResetStyle;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))Panel__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))Panel__OnUnrooted;
    type->__interface_6.__fp_AddChildAt = (void(*)(void*, int, ::app::Fuse::Node*))Panel__Fuse_Navigation_INavigationPanel_AddChildAt;
    type->__interface_6.__fp_RemoveChild = (void(*)(void*, ::app::Fuse::Node*))Panel__Fuse_Navigation_INavigationPanel_RemoveChild;
    type->__interface_6.__fp_GetChild = (::app::Fuse::Node*(*)(void*, int))Panel__Fuse_Navigation_INavigationPanel_GetChild;
    type->__interface_6.__fp_IsPage = (bool(*)(void*, ::app::Fuse::Node*))Panel__Fuse_Navigation_INavigationPanel_IsPage;
    type->__interface_7.__fp_Add = (void(*)(void*, ::app::Fuse::Node*))Panel__Fuse_Triggers_IAddRemove_Add;
    type->__interface_7.__fp_Remove = (void(*)(void*, ::app::Fuse::Node*))Panel__Fuse_Triggers_IAddRemove_Remove;
    type->__interface_6.__fp_get_ChildCount = (int(*)(void*))Panel__Fuse_Navigation_INavigationPanel_get_ChildCount;
    type->__interface_6.__fp_get_ActualSize = (::app::Uno::Float2(*)(void*))::app::Fuse::Elements::Element__get_ActualSize;
    type->__interface_6.__fp_add_ChildAdded = (void(*)(void*, ::uDelegate*))Panel__add_ChildAdded;
    type->__interface_6.__fp_remove_ChildAdded = (void(*)(void*, ::uDelegate*))Panel__remove_ChildAdded;
    type->__interface_6.__fp_add_ChildRemoved = (void(*)(void*, ::uDelegate*))Panel__add_ChildRemoved;
    type->__interface_6.__fp_remove_ChildRemoved = (void(*)(void*, ::uDelegate*))Panel__remove_ChildRemoved;
    type->__interface_6.__fp_add_Placed = (void(*)(void*, ::uDelegate*))::app::Fuse::Elements::Element__add_Placed;
    type->__interface_6.__fp_remove_Placed = (void(*)(void*, ::uDelegate*))::app::Fuse::Elements::Element__remove_Placed;
    type->__interface_6.__fp_add_Update = (void(*)(void*, ::uDelegate*))::app::Fuse::Node__add_Update;
    type->__interface_6.__fp_remove_Update = (void(*)(void*, ::uDelegate*))::app::Fuse::Node__remove_Update;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Panel__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(Panel__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(Panel__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(Panel__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(Panel__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(Panel__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(Panel__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(Panel__uType, __interface_7));

    type->SetStrongRefs(
        "_appearance", offsetof(Panel, _appearance),
        "_children", offsetof(Panel, _children),
        "_elementBatcher", offsetof(Panel, _elementBatcher),
        "_layout", offsetof(Panel, _layout),
        "_zOrder", offsetof(Panel, _zOrder),
        "ChildAdded", offsetof(Panel, ChildAdded),
        "ChildRemoved", offsetof(Panel, ChildRemoved),
        "ZOrderChanged", offsetof(Panel, ZOrderChanged));

    type->SetFields(10,
        ::uNewField("_appearance", NULL, offsetof(Panel, _appearance), ::app::Fuse::Node__typeof()),
        ::uNewField("_children", NULL, offsetof(Panel, _children), ::app::Uno::Collections::IList__Fuse_Node__typeof()),
        ::uNewField("_elementBatcher", NULL, offsetof(Panel, _elementBatcher), ::app::Fuse::Elements::ElementBatcher__typeof()),
        ::uNewField("_elementBatchValid", NULL, offsetof(Panel, _elementBatchValid), ::app::Uno::Bool__typeof()),
        ::uNewField("_layout", NULL, offsetof(Panel, _layout), ::app::Fuse::Layouts::Layout__typeof()),
        ::uNewField("_nodeZOrders", NULL, offsetof(Panel, _nodeZOrders), ::app::Uno::Bool__typeof()),
        ::uNewField("_sortedZOrder", NULL, offsetof(Panel, _sortedZOrder), ::app::Uno::Bool__typeof()),
        ::uNewField("_zOrder", NULL, offsetof(Panel, _zOrder), ::app::Uno::Collections::List__Fuse_Node__typeof()),
        ::uNewField("AppearanceProperty", &Panel__AppearanceProperty, 0, ::app::Fuse::StyleProperty__Fuse_Controls_Panel__Fuse_Node__typeof()),
        ::uNewField("LayoutProperty", &Panel__LayoutProperty, 0, ::app::Fuse::StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__typeof()));

    type->SetFunctions(50,
        ::uNewFunctionVoid("add_ChildAdded", Panel__add_ChildAdded, 0, false, ::app::Uno::EventHandler__Fuse_Node__typeof()),
        ::uNewFunctionVoid("add_ChildRemoved", Panel__add_ChildRemoved, 0, false, ::app::Uno::EventHandler__Fuse_Node__typeof()),
        ::uNewFunctionVoid("add_ZOrderChanged", Panel__add_ZOrderChanged, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("AddStyleChild", Panel__AddStyleChild, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("BeginRemoveChild", Panel__BeginRemoveChild, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("BringToFront", Panel__BringToFront, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("Clear", Panel__Clear, 0, false),
        ::uNewFunctionVoid("EmitZOrderChanged", Panel__EmitZOrderChanged, 0, false),
        ::uNewFunctionVoid("EndRemoveChild", Panel__EndRemoveChild, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("EnsureSortedZOrder", Panel__EnsureSortedZOrder, 0, false),
        ::uNewFunctionVoid("Fuse.Navigation.INavigationPanel.AddChild", Panel__Fuse_Navigation_INavigationPanel_AddChild, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("Fuse.Navigation.INavigationPanel.AddChildAt", Panel__Fuse_Navigation_INavigationPanel_AddChildAt, 0, false, ::app::Uno::Int__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction("Fuse.Navigation.INavigationPanel.get_ChildCount", Panel__Fuse_Navigation_INavigationPanel_get_ChildCount, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("Fuse.Navigation.INavigationPanel.GetChild", Panel__Fuse_Navigation_INavigationPanel_GetChild, 0, false, ::app::Fuse::Node__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("Fuse.Navigation.INavigationPanel.IsPage", Panel__Fuse_Navigation_INavigationPanel_IsPage, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("Fuse.Navigation.INavigationPanel.RemoveChild", Panel__Fuse_Navigation_INavigationPanel_RemoveChild, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("Fuse.Triggers.IAddRemove.Add", Panel__Fuse_Triggers_IAddRemove_Add, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("Fuse.Triggers.IAddRemove.Remove", Panel__Fuse_Triggers_IAddRemove_Remove, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunction("get_Appearance", Panel__get_Appearance, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunction("get_Children", Panel__get_Children, 0, false, ::app::Uno::Collections::IList__Fuse_Node__typeof()),
        ::uNewFunction("get_HasChildren", Panel__get_HasChildren, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Layout", Panel__get_Layout, 0, false, ::app::Fuse::Layouts::Layout__typeof()),
        ::uNewFunction("get_ZOrder", Panel__get_ZOrder, 0, false, ::app::Uno::Collections::List__Fuse_Node__typeof()),
        ::uNewFunction("GetAppearance", Panel__GetAppearance, 0, true, ::app::Fuse::Node__typeof(), Panel__typeof()),
        ::uNewFunction("GetEnumerator", Panel__GetEnumerator, 0, false, ::app::Uno::Collections::IEnumerator__Fuse_Node__typeof()),
        ::uNewFunction("GetLayout", Panel__GetLayout, 0, true, ::app::Fuse::Layouts::Layout__typeof(), Panel__typeof()),
        ::uNewFunction("GetShadowElement", Panel__GetShadowElement, 0, true, ::app::Fuse::Elements::Element__typeof(), ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction("GetZOrderChild", Panel__GetZOrderChild, 0, false, ::app::Fuse::Node__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("InvalidateZOrder", Panel__InvalidateZOrder, 0, false),
        ::uNewFunctionVoid("ListChildAdded", Panel__ListChildAdded, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("ListChildRemoved", Panel__ListChildRemoved, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunction(".ctor", Panel__New_1, 0, true, Panel__typeof()),
        ::uNewFunctionVoid("OnAppearanceChanged", Panel__OnAppearanceChanged, 0, true, Panel__typeof()),
        ::uNewFunctionVoid("OnChildAdded", Panel__OnChildAdded, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("OnChildRemoved", Panel__OnChildRemoved, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("OnLayoutChanged", Panel__OnLayoutChanged, 0, true, Panel__typeof()),
        ::uNewFunctionVoid("remove_ChildAdded", Panel__remove_ChildAdded, 0, false, ::app::Uno::EventHandler__Fuse_Node__typeof()),
        ::uNewFunctionVoid("remove_ChildRemoved", Panel__remove_ChildRemoved, 0, false, ::app::Uno::EventHandler__Fuse_Node__typeof()),
        ::uNewFunctionVoid("remove_ZOrderChanged", Panel__remove_ZOrderChanged, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("RemoveStyleChildren", Panel__RemoveStyleChildren, 0, false),
        ::uNewFunctionVoid("SendToBack", Panel__SendToBack, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("set_Appearance", Panel__set_Appearance, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("set_Layout", Panel__set_Layout, 0, false, ::app::Fuse::Layouts::Layout__typeof()),
        ::uNewFunctionVoid("SetAppearance", Panel__SetAppearance, 0, true, Panel__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("SetLayout", Panel__SetLayout, 0, true, Panel__typeof(), ::app::Fuse::Layouts::Layout__typeof()),
        ::uNewFunctionVoid("SetShadowElement", Panel__SetShadowElement, 0, true, ::app::Fuse::Elements::Element__typeof(), ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunctionVoid("SetSingleChild", Panel__SetSingleChild, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunction("ShouldBatch", Panel__ShouldBatch, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("SoftInvalidateZOrder", Panel__SoftInvalidateZOrder, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("ZOrderComparator", Panel__ZOrderComparator, 0, false, ::app::Uno::Int__typeof(), ::app::Fuse::Node__typeof(), ::app::Fuse::Node__typeof()));

    ::uRegisterType(type);
    return type;
}

void Panel___ObjInit_3(Panel* __this)
{
    ::app::Fuse::Controls::Control___ObjInit_2(__this);
}

void Panel___TypeInit_3(::uStatic* __this)
{
    Panel__AppearanceProperty = ::app::Fuse::StyleProperty__Fuse_Controls_Panel__Fuse_Node__New_2(NULL, NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Panel__typeof(), (const void*)Panel__OnAppearanceChanged), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Panel__Fuse_Node__typeof(), (const void*)Panel__SetAppearance), ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Controls_Panel__Fuse_Node__typeof(), (const void*)Panel__GetAppearance));
    Panel__LayoutProperty = ::app::Fuse::StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__New_2(NULL, ::app::Fuse::Layouts::Layouts__Default, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Panel__typeof(), (const void*)Panel__OnLayoutChanged), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Panel__Fuse_Layouts_Layout__typeof(), (const void*)Panel__SetLayout), ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Controls_Panel__Fuse_Layouts_Layout__typeof(), (const void*)Panel__GetLayout));
}

void Panel__add_ChildAdded(Panel* __this, ::uDelegate* value)
{
    __this->ChildAdded = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ChildAdded, (::uDelegate*)value), ::app::Uno::EventHandler__Fuse_Node__typeof());
}

void Panel__add_ChildRemoved(Panel* __this, ::uDelegate* value)
{
    __this->ChildRemoved = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ChildRemoved, (::uDelegate*)value), ::app::Uno::EventHandler__Fuse_Node__typeof());
}

void Panel__add_ZOrderChanged(Panel* __this, ::uDelegate* value)
{
    __this->ZOrderChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ZOrderChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void Panel__AddStyleChild(Panel* __this, ::app::Fuse::Node* child)
{
    ::uPtr< ::app::Fuse::Node*>(child)->AddedByStyle(true);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(__this->Children()), child);
}

void Panel__ArrangePaddingBox(Panel* __this, ::app::Uno::Float2 size)
{
    if (__this->HasChildren())
    {
        ::uPtr< ::app::Fuse::Layouts::Layout*>(__this->Layout())->ArrangePaddingBox(__this->Children(), __this->Padding(), size);
    }

    ::app::Fuse::Elements::Element__ArrangePaddingBox(__this, size);
}

void Panel__BeginRemoveChild(Panel* __this, ::app::Fuse::Node* child)
{
    ::app::Fuse::Controls::BeginRemoveArgsImpl* args = ::app::Fuse::Controls::BeginRemoveArgsImpl__New_2(NULL, child, __this);
    ::uPtr< ::app::Fuse::Node*>(child)->OnBeginRemove((::app::Fuse::BeginRemoveArgs*)args);

    if (::uPtr< ::app::Fuse::Controls::BeginRemoveArgsImpl*>(args)->HasSubscribers())
    {
        __this->InvalidateLayout(2);
        return;
    }

    __this->EndRemoveChild(child);
}

void Panel__BringToFront(Panel* __this, ::app::Fuse::Node* item)
{
    if (!__this->HasChildren())
    {
        return;
    }

    int mx = ::uPtr< ::app::Fuse::Node*>(item)->ZOffset;

    for (::app::Uno::Collections::List1_Enumerator__Fuse_Node enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->ZOrder())->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::app::Fuse::Node* c = enum_123.Current();

        if (::uPtr< ::app::Fuse::Node*>(c)->ZLayer == ::uPtr< ::app::Fuse::Node*>(item)->ZLayer)
        {
            mx = ::app::Uno::Math__Max_8(NULL, mx, ::uPtr< ::app::Fuse::Node*>(c)->ZOffset);
        }
    }

    item->ZOffset = mx + 1;
    item->ZOffsetFixed = true;
    __this->_elementBatchValid = false;
    __this->SoftInvalidateZOrder(false);
}

::app::Uno::Rect Panel__CalcRenderBounds(Panel* __this)
{
    ::app::Uno::Rect r = ::app::Fuse::Elements::Element__CalcRenderBounds(__this);

    if (__this->HasChildren())
    {
        for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(__this->Children())); i++)
        {
            r = ::app::Uno::Rect__Union(NULL, r, ::uPtr< ::app::Fuse::Node*>(::app::Uno::Collections::IList__Fuse_Node::Item(::uPtr< ::uObject*>(__this->Children()), i))->CalcRenderBoundsInParentSpace());
        }
    }

    return r;
}

void Panel__Clear(Panel* __this)
{
    while (::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(__this->Children())) > 0)
    {
        ::app::Uno::Collections::ICollection__Fuse_Node::Remove(::uPtr< ::uObject*>(__this->Children()), ::app::Uno::Collections::IList__Fuse_Node::Item(::uPtr< ::uObject*>(__this->Children()), 0));
    }
}

void Panel__EmitZOrderChanged(Panel* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ZOrderChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ZOrderChanged)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

void Panel__EndRemoveChild(Panel* __this, ::app::Fuse::Node* child)
{
    ::app::Uno::Collections::ICollection__Fuse_Node::Remove(::uPtr< ::uObject*>(__this->Children()), child);
}

void Panel__EnsureSortedZOrder(Panel* __this)
{
    if (__this->_sortedZOrder && __this->_nodeZOrders)
    {
        return;
    }

    if (!__this->_nodeZOrders)
    {
        ::app::Fuse::Layouts::Layout__AssignZOrder(NULL, __this->Children());
        __this->_nodeZOrders = true;
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->ZOrder())->Sort(::uNewDelegateNonVirt(::app::Uno::Comparison__Fuse_Node__typeof(), (const void*)Panel__ZOrderComparator, __this));
    __this->_sortedZOrder = true;
}

bool Panel__FastTrackDrawWithOpacity(Panel* __this, ::app::Fuse::DrawContext* dc)
{
    if (__this->HasChildren())
    {
        return false;
    }

    if (__this->Background() == NULL)
    {
        return true;
    }

    __this->DrawBackground(dc, __this->Opacity());
    return true;
}

void Panel__Fuse_Navigation_INavigationPanel_AddChild(Panel* __this, ::app::Fuse::Node* n)
{
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(__this->Children()), n);
}

void Panel__Fuse_Navigation_INavigationPanel_AddChildAt(Panel* __this, int index, ::app::Fuse::Node* n)
{
    ::app::Uno::Collections::IList__Fuse_Node::Insert(::uPtr< ::uObject*>(__this->Children()), index, n);
}

int Panel__Fuse_Navigation_INavigationPanel_get_ChildCount(Panel* __this)
{
    return __this->HasChildren() ? ::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(__this->Children())) : 0;
}

::app::Fuse::Node* Panel__Fuse_Navigation_INavigationPanel_GetChild(Panel* __this, int index)
{
    return ((index < 0) || (index >= ::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(__this->Children())))) ? (::app::Fuse::Node*)NULL : ::app::Uno::Collections::IList__Fuse_Node::Item(::uPtr< ::uObject*>(__this->Children()), index);
}

bool Panel__Fuse_Navigation_INavigationPanel_IsPage(Panel* __this, ::app::Fuse::Node* child)
{
    return ::app::Fuse::Layouts::Layout__GetLayoutRole(NULL, child) == 0;
}

void Panel__Fuse_Navigation_INavigationPanel_RemoveChild(Panel* __this, ::app::Fuse::Node* child)
{
    ::app::Uno::Collections::ICollection__Fuse_Node::Remove(::uPtr< ::uObject*>(__this->Children()), child);
}

void Panel__Fuse_Triggers_IAddRemove_Add(Panel* __this, ::app::Fuse::Node* n)
{
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(__this->Children()), n);
}

void Panel__Fuse_Triggers_IAddRemove_Remove(Panel* __this, ::app::Fuse::Node* n)
{
    __this->BeginRemoveChild(n);
}

::app::Fuse::Node* Panel__get_Appearance(Panel* __this)
{
    return __this->_appearance;
}

::uObject* Panel__get_Children(Panel* __this)
{
    if (__this->_children == NULL)
    {
        __this->_children = (::uObject*)::app::Uno::Collections::ObservableList__Fuse_Node__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Node__typeof(), (const void*)Panel__ListChildAdded, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Node__typeof(), (const void*)Panel__ListChildRemoved, __this));
    }

    return __this->_children;
}

bool Panel__get_HasChildren(Panel* __this)
{
    return (__this->_children != NULL) && (::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(__this->_children)) > 0);
}

::app::Fuse::Layouts::Layout* Panel__get_Layout(Panel* __this)
{
    ::app::Fuse::Layouts::Layout* ind_126 = __this->_layout;
    return (ind_126 != NULL) ? ind_126 : ::app::Fuse::Layouts::Layouts__Default;
}

int Panel__get_SubNodeCount(Panel* __this)
{
    return ::app::Fuse::Node__get_SubNodeCount(__this) + (__this->HasChildren() ? ::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(__this->Children())) : 0);
}

::app::Uno::Collections::List__Fuse_Node* Panel__get_ZOrder(Panel* __this)
{
    if (__this->_zOrder == NULL)
    {
        __this->_zOrder = ::app::Uno::Collections::List__Fuse_Node__New_1(NULL);
    }

    return __this->_zOrder;
}

::app::Fuse::Node* Panel__GetAppearance(::uStatic* __this, Panel* c)
{
    return ::uPtr< Panel*>(c)->_appearance;
}

::app::Uno::Float2 Panel__GetContentSize(Panel* __this, ::app::Uno::Float2 fillSize, int fillSet)
{
    if (__this->HasChildren())
    {
        return ::uPtr< ::app::Fuse::Layouts::Layout*>(__this->Layout())->GetContentSize(__this->Children(), fillSize, fillSet);
    }

    return ::app::Fuse::Elements::Element__GetContentSize(__this, fillSize, fillSet);
}

::uObject* Panel__GetEnumerator(Panel* __this)
{
    return ::app::Uno::Collections::IEnumerable__Fuse_Node::GetEnumerator(::uPtr< ::uObject*>(__this->Children()));
}

::app::Fuse::Layouts::Layout* Panel__GetLayout(::uStatic* __this, Panel* p)
{
    return ::uPtr< Panel*>(p)->_layout;
}

::app::Fuse::Elements::Element* Panel__GetShadowElement(::uStatic* __this, ::app::Fuse::Elements::Element* elm)
{
    return ::app::Fuse::Elements::ShadowBoxSizing__GetShadowElement(NULL, elm);
}

::app::Fuse::Node* Panel__GetSubNode(Panel* __this, int index)
{
    if (index < ::app::Fuse::Node__get_SubNodeCount(__this))
    {
        return ::app::Fuse::Node__GetSubNode(__this, index);
    }

    return ::app::Uno::Collections::IList__Fuse_Node::Item(::uPtr< ::uObject*>(__this->Children()), index - ::app::Fuse::Node__get_SubNodeCount(__this));
}

::app::Fuse::Node* Panel__GetZOrderChild(Panel* __this, int index)
{
    __this->EnsureSortedZOrder();
    return ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->ZOrder())->Item(index);
}

void Panel__InvalidateZOrder(Panel* __this)
{
    if (!__this->_nodeZOrders)
    {
        return;
    }

    __this->_nodeZOrders = false;
    __this->SoftInvalidateZOrder(true);
}

int Panel__IsMarginBoxDependent(Panel* __this, ::app::Fuse::Node* child)
{
    return ::uPtr< ::app::Fuse::Layouts::Layout*>(__this->Layout())->IsMarginBoxDependent(child);
}

void Panel__ListChildAdded(Panel* __this, ::app::Fuse::Node* item)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->ZOrder())->Insert(0, item);
    __this->InvalidateZOrder();
    ::uPtr< ::app::Fuse::Node*>(item)->OnAdded((::app::Fuse::Node*)__this);
    __this->_elementBatchValid = false;
    __this->OnChildAdded(item);

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ChildAdded, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ChildAdded)->InvokeVoid< ::uObject*, ::app::Fuse::Node*>((::uObject*)__this, item);
    }
}

void Panel__ListChildRemoved(Panel* __this, ::app::Fuse::Node* child)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->ZOrder())->Remove(child);
    ::uPtr< ::app::Fuse::Node*>(child)->OnRemoved((::app::Fuse::Node*)__this);
    __this->_elementBatchValid = false;
    __this->OnChildRemoved(child);

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ChildRemoved, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ChildRemoved)->InvokeVoid< ::uObject*, ::app::Fuse::Node*>((::uObject*)__this, child);
    }
}

Panel* Panel__New_1(::uStatic* __this)
{
    Panel* inst = (Panel*)::uAllocObject(sizeof(Panel), Panel__typeof());
    inst->_ObjInit_3();
    return inst;
}

void Panel__OnAppearanceChanged(::uStatic* __this, Panel* c)
{
}

void Panel__OnChildAdded(Panel* __this, ::app::Fuse::Node* elm)
{
    __this->InvalidateLayout(2);
}

void Panel__OnChildRemoved(Panel* __this, ::app::Fuse::Node* elm)
{
    __this->InvalidateLayout(2);
}

void Panel__OnDrawControl(Panel* __this, ::app::Fuse::DrawContext* dc)
{
    ::app::Fuse::Controls::Control__OnDrawControl(__this, dc);

    if (!__this->HasChildren())
    {
        return;
    }

    if (!__this->ShouldBatch())
    {
        if (__this->_elementBatcher != NULL)
        {
            __this->_elementBatcher = NULL;
        }

        for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(__this->Children())); ++i)
        {
            ::uPtr< ::app::Fuse::Node*>(__this->GetZOrderChild(i))->Draw(dc);
        }
    }
    else
    {
        if ((__this->_elementBatcher == NULL) || !__this->_elementBatchValid)
        {
            if (__this->_elementBatcher == NULL)
            {
                __this->_elementBatcher = ::app::Fuse::Elements::ElementBatcher__New_1(NULL);
            }
            else
            {
                ::uPtr< ::app::Fuse::Elements::ElementBatcher*>(__this->_elementBatcher)->RemoveAllElements();
            }

            for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(__this->Children())); ++i)
            {
                ::uPtr< ::app::Fuse::Elements::ElementBatcher*>(__this->_elementBatcher)->AddElement(__this->GetZOrderChild(i));
            }

            __this->_elementBatchValid = true;
        }

        ::uPtr< ::app::Fuse::Elements::ElementBatcher*>(__this->_elementBatcher)->Draw(dc);
    }
}

void Panel__OnHitTestChildren(Panel* __this, ::app::Fuse::HitTestContext* htc)
{
    if (__this->HasChildren())
    {
        for (int i = ::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(__this->Children())) - 1; i >= 0; --i)
        {
            ::uPtr< ::app::Fuse::Node*>(__this->GetZOrderChild(i))->HitTest(htc);
        }
    }

    ::app::Fuse::Elements::Element__OnHitTestChildren(__this, htc);
}

void Panel__OnInvalidateLayout(Panel* __this)
{
    ::app::Fuse::Elements::Element__OnInvalidateLayout(__this);

    if (__this->HasChildren())
    {
        __this->InvalidateZOrder();
    }
}

void Panel__OnLayoutChanged(::uStatic* __this, Panel* p)
{
    ::uPtr< Panel*>(p)->InvalidateLayout(2);
}

void Panel__OnResetStyle(Panel* __this)
{
    if (__this->HasChildren())
    {
        __this->RemoveStyleChildren();
    }

    ::app::Fuse::Elements::Element__OnResetStyle(__this);
}

void Panel__OnRooted(Panel* __this)
{
    if (__this->_layout != NULL)
    {
        ::uPtr< ::app::Fuse::Layouts::Layout*>(__this->_layout)->AddSubscriber((::app::Fuse::Node*)__this);
    }

    ::app::Fuse::Controls::Control__OnRooted(__this);
}

void Panel__OnUnrooted(Panel* __this)
{
    if (__this->_layout != NULL)
    {
        ::uPtr< ::app::Fuse::Layouts::Layout*>(__this->_layout)->RemoveSubscriber((::app::Fuse::Node*)__this);
    }

    ::app::Fuse::Controls::Control__OnUnrooted(__this);
}

void Panel__remove_ChildAdded(Panel* __this, ::uDelegate* value)
{
    __this->ChildAdded = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->ChildAdded, (::uDelegate*)value), ::app::Uno::EventHandler__Fuse_Node__typeof());
}

void Panel__remove_ChildRemoved(Panel* __this, ::uDelegate* value)
{
    __this->ChildRemoved = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->ChildRemoved, (::uDelegate*)value), ::app::Uno::EventHandler__Fuse_Node__typeof());
}

void Panel__remove_ZOrderChanged(Panel* __this, ::uDelegate* value)
{
    __this->ZOrderChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->ZOrderChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void Panel__RemoveStyleChildren(Panel* __this)
{
    for (int i = ::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(__this->Children())) - 1; i >= 0; --i)
    {
        ::app::Fuse::Node* n = ::app::Uno::Collections::IList__Fuse_Node::Item(::uPtr< ::uObject*>(__this->Children()), i);

        if (::uPtr< ::app::Fuse::Node*>(n)->AddedByStyle())
        {
            ::app::Uno::Collections::ICollection__Fuse_Node::Remove(::uPtr< ::uObject*>(__this->Children()), n);
        }
    }
}

void Panel__SendToBack(Panel* __this, ::app::Fuse::Node* item)
{
    if (!__this->HasChildren())
    {
        return;
    }

    int mn = ::uPtr< ::app::Fuse::Node*>(item)->ZOffset;

    for (::app::Uno::Collections::List1_Enumerator__Fuse_Node enum_124 = ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->ZOrder())->GetEnumerator(); enum_124.MoveNext(); )
    {
        ::app::Fuse::Node* c = enum_124.Current();

        if (::uPtr< ::app::Fuse::Node*>(c)->ZLayer == ::uPtr< ::app::Fuse::Node*>(item)->ZLayer)
        {
            mn = ::app::Uno::Math__Min_8(NULL, mn, ::uPtr< ::app::Fuse::Node*>(c)->ZOffset);
        }
    }

    item->ZOffset = mn - 1;
    item->ZOffsetFixed = true;
    __this->_elementBatchValid = false;
    __this->SoftInvalidateZOrder(false);
}

void Panel__set_Appearance(Panel* __this, ::app::Fuse::Node* value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Panel__Fuse_Node*>(Panel__AppearanceProperty)->Set(__this, value);
}

void Panel__set_Layout(Panel* __this, ::app::Fuse::Layouts::Layout* value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout*>(Panel__LayoutProperty)->Set(__this, value);
}

void Panel__SetAppearance(::uStatic* __this, Panel* c, ::app::Fuse::Node* a)
{
    ::app::Fuse::Diagnostics__Deprecated(NULL, ::uGetConstString("Use `Layer=\"Background\"` instead of setting the appearance on a Panel"), (::uObject*)c, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Controls\\0.11.3\\$.uno"), 2031, ::uGetConstString("SetAppearance"));

    if (::uPtr< Panel*>(c)->_appearance != NULL)
    {
        ::app::Uno::Collections::ICollection__Fuse_Node::Remove(::uPtr< ::uObject*>(::uPtr< Panel*>(c)->Children()), a);
    }

    c->_appearance = a;

    if (c->_appearance != NULL)
    {
        ::app::Fuse::Layouts::Layout__SetLayer(NULL, a, 0);
        ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< Panel*>(c)->Children()), a);
    }
}

void Panel__SetLayout(::uStatic* __this, Panel* p, ::app::Fuse::Layouts::Layout* value)
{
    if (::uPtr< Panel*>(p)->IsLocalRooted() && (::uPtr< Panel*>(p)->_layout != NULL))
    {
        ::uPtr< ::app::Fuse::Layouts::Layout*>(::uPtr< Panel*>(p)->_layout)->RemoveSubscriber((::app::Fuse::Node*)p);
    }

    p->_layout = value;

    if (p->IsLocalRooted() && (p->_layout != NULL))
    {
        ::uPtr< ::app::Fuse::Layouts::Layout*>(p->_layout)->AddSubscriber((::app::Fuse::Node*)p);
    }
}

void Panel__SetShadowElement(::uStatic* __this, ::app::Fuse::Elements::Element* elm, ::app::Fuse::Elements::Element* shadow)
{
    ::uPtr< ::app::Fuse::Elements::Element*>(elm)->BoxSizing(3);
    ::app::Fuse::Layouts::Layout__SetLayoutRole(NULL, (::app::Fuse::Node*)elm, 2);
    ::app::Fuse::Elements::ShadowBoxSizing__SetShadowElement(NULL, elm, shadow);
}

void Panel__SetSingleChild(Panel* __this, ::app::Fuse::Node* e)
{
    ::app::Uno::Collections::ICollection__Fuse_Node::Clear(::uPtr< ::uObject*>(__this->Children()));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(__this->Children()), e);
}

bool Panel__ShouldBatch(Panel* __this)
{
    if (::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(__this->Children())) < 10)
    {
        return false;
    }

    int batchable = 0;

    for (::uObject* enum_125 = ::app::Uno::Collections::IEnumerable__Fuse_Node::GetEnumerator(::uPtr< ::uObject*>(__this->Children())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_125)); )
    {
        ::app::Fuse::Node* node = ::app::Uno::Collections::IEnumerator__Fuse_Node::Current(::uPtr< ::uObject*>(enum_125));

        if (::app::Fuse::Elements::ElementBatcher__ShouldBatchElement(NULL, node))
        {
            batchable++;
        }
    }

    return batchable > (::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(__this->Children())) / 2);
}

void Panel__SoftInvalidateZOrder(Panel* __this, bool force)
{
    if (!__this->_sortedZOrder && !force)
    {
        return;
    }

    __this->_sortedZOrder = false;
    __this->InvalidateVisual();

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ZOrderChanged, NULL))
    {
        ::app::Fuse::UpdateManager__AddDeferredAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Panel__EmitZOrderChanged, __this));
    }
}

int Panel__ZOrderComparator(Panel* __this, ::app::Fuse::Node* a, ::app::Fuse::Node* b)
{
    if (::uPtr< ::app::Fuse::Node*>(a)->ZLayer != ::uPtr< ::app::Fuse::Node*>(b)->ZLayer)
    {
        return ::uPtr< ::app::Fuse::Node*>(a)->ZLayer - ::uPtr< ::app::Fuse::Node*>(b)->ZLayer;
    }

    return ::uPtr< ::app::Fuse::Node*>(a)->ZOffset - ::uPtr< ::app::Fuse::Node*>(b)->ZOffset;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Path__uType* Path__typeof()
{
    static ::uStaticStrong<Path__uType*> type;
    if (type != NULL) return type;

    type = (Path__uType*)::uAllocClassType(sizeof(Path__uType), "Fuse.Controls.Path", false, 8, 2, 0);

    type->SetBaseType(::app::Fuse::Controls::Shape__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Path__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(Path__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(Path__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(Path__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(Path__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(Path__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(Path__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(Path__uType, __interface_7));

    type->SetStrongRefs(
        "_geometry", offsetof(Path, _geometry),
        "sizing", offsetof(Path, sizing));

    type->SetFields(5,
        ::uNewField("_fillRule", NULL, offsetof(Path, _fillRule), ::app::Fuse::Controls::FillRule__typeof()),
        ::uNewField("_fitMode", NULL, offsetof(Path, _fitMode), ::app::Fuse::Controls::FitMode__typeof()),
        ::uNewField("_geometry", NULL, offsetof(Path, _geometry), ::app::Fuse::Drawing::PathGeometry__typeof()),
        ::uNewField("_scaleMode", NULL, offsetof(Path, _scaleMode), ::app::Fuse::Controls::PathScaleMode__typeof()),
        ::uNewField("sizing", NULL, offsetof(Path, sizing), ::app::Fuse::Internal::SizingContainer__typeof()));

    type->SetFunctions(18,
        ::uNewFunction("get_ContentAlignment", Path__get_ContentAlignment, 0, false, ::app::Fuse::Elements::Alignment__typeof()),
        ::uNewFunction("get_Data", Path__get_Data, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_FillRule", Path__get_FillRule, 0, false, ::app::Fuse::Controls::FillRule__typeof()),
        ::uNewFunction("get_FitMode", Path__get_FitMode, 0, false, ::app::Fuse::Controls::FitMode__typeof()),
        ::uNewFunction("get_Geometry", Path__get_Geometry, 0, false, ::app::Fuse::Drawing::PathGeometry__typeof()),
        ::uNewFunction("get_ScaleMode", Path__get_ScaleMode, 0, false, ::app::Fuse::Controls::PathScaleMode__typeof()),
        ::uNewFunction("get_Sizing", Path__get_Sizing, 0, false, ::app::Fuse::Internal::SizingContainer__typeof()),
        ::uNewFunction("get_StretchDirection", Path__get_StretchDirection, 0, false, ::app::Fuse::Elements::StretchDirection__typeof()),
        ::uNewFunction("get_StretchMode", Path__get_StretchMode, 0, false, ::app::Fuse::Elements::StretchMode__typeof()),
        ::uNewFunction(".ctor", Path__New_2, 0, true, Path__typeof()),
        ::uNewFunctionVoid("set_ContentAlignment", Path__set_ContentAlignment, 0, false, ::app::Fuse::Elements::Alignment__typeof()),
        ::uNewFunctionVoid("set_Data", Path__set_Data, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_FillRule", Path__set_FillRule, 0, false, ::app::Fuse::Controls::FillRule__typeof()),
        ::uNewFunctionVoid("set_FitMode", Path__set_FitMode, 0, false, ::app::Fuse::Controls::FitMode__typeof()),
        ::uNewFunctionVoid("set_Geometry", Path__set_Geometry, 0, false, ::app::Fuse::Drawing::PathGeometry__typeof()),
        ::uNewFunctionVoid("set_ScaleMode", Path__set_ScaleMode, 0, false, ::app::Fuse::Controls::PathScaleMode__typeof()),
        ::uNewFunctionVoid("set_StretchDirection", Path__set_StretchDirection, 0, false, ::app::Fuse::Elements::StretchDirection__typeof()),
        ::uNewFunctionVoid("set_StretchMode", Path__set_StretchMode, 0, false, ::app::Fuse::Elements::StretchMode__typeof()));

    ::uRegisterType(type);
    return type;
}

void Path___ObjInit_5(Path* __this)
{
    __this->sizing = ::app::Fuse::Internal::SizingContainer__New_1(NULL);
    __this->_fitMode = 2;
    __this->_scaleMode = 1;
    __this->_geometry = ::app::Fuse::Drawing::PathGeometry__New_1(NULL);
    ::app::Fuse::Controls::Shape___ObjInit_4(__this);
}

int Path__get_ContentAlignment(Path* __this)
{
    return ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->sizing)->align;
}

::uString* Path__get_Data(Path* __this)
{
    return ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(__this->Geometry())->ToString();
}

int Path__get_FillRule(Path* __this)
{
    return __this->_fillRule;
}

int Path__get_FitMode(Path* __this)
{
    return __this->_fitMode;
}

::app::Fuse::Drawing::PathGeometry* Path__get_Geometry(Path* __this)
{
    return __this->_geometry;
}

int Path__get_ScaleMode(Path* __this)
{
    return __this->_scaleMode;
}

::app::Fuse::Internal::SizingContainer* Path__get_Sizing(Path* __this)
{
    return __this->sizing;
}

int Path__get_StretchDirection(Path* __this)
{
    return ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->sizing)->stretchDirection;
}

int Path__get_StretchMode(Path* __this)
{
    return ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->sizing)->stretchMode;
}

Path* Path__New_2(::uStatic* __this)
{
    Path* inst = (Path*)::uAllocObject(sizeof(Path), Path__typeof());
    inst->_ObjInit_5();
    return inst;
}

void Path__set_ContentAlignment(Path* __this, int value)
{
    if (::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->sizing)->SetAlignment(value))
    {
        __this->OnShapeChanged();
    }
}

void Path__set_Data(Path* __this, ::uString* value)
{
    __this->Geometry(::app::Fuse::Drawing::PathGeometry__Parse(NULL, value));
}

void Path__set_FillRule(Path* __this, int value)
{
    __this->_fillRule = value;
    __this->OnShapeChanged();
}

void Path__set_FitMode(Path* __this, int value)
{
    if (value != __this->_fitMode)
    {
        __this->_fitMode = value;
        __this->OnShapeChanged();
    }
}

void Path__set_Geometry(Path* __this, ::app::Fuse::Drawing::PathGeometry* value)
{
    __this->_geometry = value;
    __this->OnShapeChanged();
}

void Path__set_ScaleMode(Path* __this, int value)
{
    if (__this->_scaleMode != value)
    {
        __this->_scaleMode = value;
        __this->OnShapeChanged();
    }
}

void Path__set_StretchDirection(Path* __this, int value)
{
    if (::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->sizing)->SetStretchDirection(value))
    {
        __this->OnShapeChanged();
    }
}

void Path__set_StretchMode(Path* __this, int value)
{
    if (::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->sizing)->SetStretchMode(value))
    {
        __this->OnShapeChanged();
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* PathScaleMode__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Controls.PathScaleMode", ::app::Uno::Int__typeof(), 2);

    type->SetLiterals(
        "Pre", 0LL,
        "Post", 1LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Placeholder__uType* Placeholder__typeof()
{
    static ::uStaticStrong<Placeholder__uType*> type;
    if (type != NULL) return type;

    type = (Placeholder__uType*)::uAllocClassType(sizeof(Placeholder__uType), "Fuse.Controls.Placeholder", false, 6, 2, 0);

    type->SetBaseType(::app::Fuse::Controls::ContentControl__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Placeholder__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(Placeholder__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(Placeholder__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(Placeholder__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(Placeholder__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(Placeholder__uType, __interface_5));

    type->SetStrongRefs(
        "_contentFactory", offsetof(Placeholder, _contentFactory),
        "_Target", offsetof(Placeholder, _Target));

    type->SetFields(1,
        ::uNewField("_contentFactory", NULL, offsetof(Placeholder, _contentFactory), ::app::Uno::UX::IFactory__typeof()));

    type->SetFunctions(8,
        ::uNewFunctionVoid("AcquireTarget", Placeholder__AcquireTarget, 0, false),
        ::uNewFunction("get_ContentFactory", Placeholder__get_ContentFactory, 0, false, ::app::Uno::UX::IFactory__typeof()),
        ::uNewFunction("get_PlaceholderContent", Placeholder__get_PlaceholderContent, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunction("get_Target", Placeholder__get_Target, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunction(".ctor", Placeholder__New_2, 0, true, Placeholder__typeof()),
        ::uNewFunctionVoid("set_ContentFactory", Placeholder__set_ContentFactory, 0, false, ::app::Uno::UX::IFactory__typeof()),
        ::uNewFunctionVoid("set_PlaceholderContent", Placeholder__set_PlaceholderContent, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("set_Target", Placeholder__set_Target, 0, false, ::app::Fuse::Node__typeof()));

    ::uRegisterType(type);
    return type;
}

void Placeholder___ObjInit_4(Placeholder* __this)
{
    ::app::Fuse::Controls::ContentControl___ObjInit_3(__this);
}

void Placeholder__AcquireTarget(Placeholder* __this)
{
    if (__this->Target() == NULL)
    {
        return;
    }

    if (__this->Content() == __this->Target())
    {
        return;
    }

    __this->DataContext(::uPtr< ::app::Fuse::Node*>(__this->Target())->DataContext());
    Placeholder* oldParent = ::uAs< Placeholder*>(::uPtr< ::app::Fuse::Node*>(__this->Target())->Parent(), Placeholder__typeof());

    if (oldParent == NULL)
    {
        return;
    }

    ::uPtr< Placeholder*>(oldParent)->PrepareLayoutChange();
    oldParent->Content(NULL);
    __this->Content(__this->Target());
}

::uObject* Placeholder__get_ContentFactory(Placeholder* __this)
{
    return __this->_contentFactory;
}

::app::Fuse::Node* Placeholder__get_PlaceholderContent(Placeholder* __this)
{
    return ::app::Fuse::Controls::ContentControl__get_Content(__this);
}

::app::Fuse::Node* Placeholder__get_Target(Placeholder* __this)
{
    return __this->_Target;
}

Placeholder* Placeholder__New_2(::uStatic* __this)
{
    Placeholder* inst = (Placeholder*)::uAllocObject(sizeof(Placeholder), Placeholder__typeof());
    inst->_ObjInit_4();
    return inst;
}

void Placeholder__set_ContentFactory(Placeholder* __this, ::uObject* value)
{
    if (__this->_contentFactory == value)
    {
        return;
    }

    __this->_contentFactory = value;

    if (__this->_contentFactory == NULL)
    {
        __this->Content(NULL);
    }
    else
    {
        __this->Content(::uAs< ::app::Fuse::Node*>(::app::Uno::UX::IFactory::New_1(::uPtr< ::uObject*>(__this->_contentFactory)), ::app::Fuse::Node__typeof()));
    }
}

void Placeholder__set_PlaceholderContent(Placeholder* __this, ::app::Fuse::Node* value)
{
    ::app::Fuse::Controls::ContentControl__set_Content(__this, value);
    __this->Target(value);
}

void Placeholder__set_Target(Placeholder* __this, ::app::Fuse::Node* value)
{
    __this->_Target = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory*> PlainTextEdit__NativeEditProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory*> PlainTextEdit__NativeTextProperty;

PlainTextEdit__uType* PlainTextEdit__typeof()
{
    static ::uStaticStrong<PlainTextEdit__uType*> type;
    if (type != NULL) return type;

    type = (PlainTextEdit__uType*)::uAllocClassType(sizeof(PlainTextEdit__uType), "Fuse.Controls.PlainTextEdit", false, 8, 3, 0);

    type->SetBaseType(::app::Fuse::Controls::Panel__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))PlainTextEdit__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))PlainTextEdit__OnUnrooted;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(PlainTextEdit__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(PlainTextEdit__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(PlainTextEdit__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(PlainTextEdit__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(PlainTextEdit__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(PlainTextEdit__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(PlainTextEdit__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(PlainTextEdit__uType, __interface_7));

    type->SetStrongRefs(
        "_nativeEdit", offsetof(PlainTextEdit, _nativeEdit),
        "_nativeText", offsetof(PlainTextEdit, _nativeText),
        "_nativeViewHost", offsetof(PlainTextEdit, _nativeViewHost));

    type->SetFields(6,
        ::uNewField("_nativeEdit", NULL, offsetof(PlainTextEdit, _nativeEdit), ::app::Fuse::Node__typeof()),
        ::uNewField("_nativeText", NULL, offsetof(PlainTextEdit, _nativeText), ::app::Fuse::Node__typeof()),
        ::uNewField("_nativeViewHost", NULL, offsetof(PlainTextEdit, _nativeViewHost), ::app::Fuse::Controls::NativeViewHost__typeof()),
        ::uNewField("_textMode", NULL, offsetof(PlainTextEdit, _textMode), ::app::Uno::Bool__typeof()),
        ::uNewField("NativeEditProperty", &PlainTextEdit__NativeEditProperty, 0, ::app::Fuse::StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__typeof()),
        ::uNewField("NativeTextProperty", &PlainTextEdit__NativeTextProperty, 0, ::app::Fuse::StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("ForwardFocusNode", PlainTextEdit__ForwardFocusNode, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunction("get_NativeEdit", PlainTextEdit__get_NativeEdit, 0, false, ::app::Uno::UX::IFactory__typeof()),
        ::uNewFunction("get_NativeText", PlainTextEdit__get_NativeText, 0, false, ::app::Uno::UX::IFactory__typeof()),
        ::uNewFunction(".ctor", PlainTextEdit__New_2, 0, true, PlainTextEdit__typeof()),
        ::uNewFunctionVoid("OnFactoryChanged", PlainTextEdit__OnFactoryChanged, 0, true, PlainTextEdit__typeof()),
        ::uNewFunctionVoid("OnLostFocus", PlainTextEdit__OnLostFocus, 0, false, ::uObject__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_NativeEdit", PlainTextEdit__set_NativeEdit, 0, false, ::app::Uno::UX::IFactory__typeof()),
        ::uNewFunctionVoid("set_NativeText", PlainTextEdit__set_NativeText, 0, false, ::app::Uno::UX::IFactory__typeof()),
        ::uNewFunctionVoid("SetupEdit", PlainTextEdit__SetupEdit, 0, false),
        ::uNewFunctionVoid("SetupText", PlainTextEdit__SetupText, 0, false));

    ::uRegisterType(type);
    return type;
}

void PlainTextEdit___ObjInit_4(PlainTextEdit* __this)
{
    ::app::Fuse::Controls::Panel___ObjInit_3(__this);
    ::app::Fuse::Input::Focus__SetDelegator(NULL, (::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusDelegator__typeof(), (const void*)PlainTextEdit__ForwardFocusNode, __this));
    __this->HitTestMode(6);
}

void PlainTextEdit___TypeInit_4(::uStatic* __this)
{
    PlainTextEdit__NativeEditProperty = ::app::Fuse::StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__New_1(NULL, NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_PlainTextEdit__typeof(), (const void*)PlainTextEdit__OnFactoryChanged));
    PlainTextEdit__NativeTextProperty = ::app::Fuse::StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__New_1(NULL, NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_PlainTextEdit__typeof(), (const void*)PlainTextEdit__OnFactoryChanged));
}

::app::Fuse::Node* PlainTextEdit__ForwardFocusNode(PlainTextEdit* __this)
{
    __this->SetupEdit();
    return __this->_nativeEdit;
}

::uObject* PlainTextEdit__get_NativeEdit(PlainTextEdit* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory*>(PlainTextEdit__NativeEditProperty)->Get(__this);
}

::uObject* PlainTextEdit__get_NativeText(PlainTextEdit* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory*>(PlainTextEdit__NativeTextProperty)->Get(__this);
}

PlainTextEdit* PlainTextEdit__New_2(::uStatic* __this)
{
    PlainTextEdit* inst = (PlainTextEdit*)::uAllocObject(sizeof(PlainTextEdit), PlainTextEdit__typeof());
    inst->_ObjInit_4();
    return inst;
}

void PlainTextEdit__OnFactoryChanged(::uStatic* __this, PlainTextEdit* pte)
{
    if (!::uPtr< PlainTextEdit*>(pte)->IsLocalRooted())
    {
        return;
    }

    if (::uPtr< PlainTextEdit*>(pte)->_textMode)
    {
        ::uPtr< PlainTextEdit*>(pte)->SetupText();
    }
    else
    {
        pte->SetupEdit();
    }
}

void PlainTextEdit__OnLostFocus(PlainTextEdit* __this, ::uObject* s, ::uObject* a)
{
    ::app::Fuse::UpdateManager__AddDeferredAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)PlainTextEdit__SetupText, __this));
}

void PlainTextEdit__OnRooted(PlainTextEdit* __this)
{
    ::app::Fuse::Controls::Panel__OnRooted(__this);
    __this->SetupText();
}

void PlainTextEdit__OnUnrooted(PlainTextEdit* __this)
{
    ::app::Fuse::Controls::Panel__OnUnrooted(__this);
}

void PlainTextEdit__set_NativeEdit(PlainTextEdit* __this, ::uObject* value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory*>(PlainTextEdit__NativeEditProperty)->Set(__this, value);
}

void PlainTextEdit__set_NativeText(PlainTextEdit* __this, ::uObject* value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory*>(PlainTextEdit__NativeTextProperty)->Set(__this, value);
}

void PlainTextEdit__SetupEdit(PlainTextEdit* __this)
{
    if (__this->_nativeText != NULL)
    {
        ::app::Uno::Collections::ICollection__Fuse_Node::Remove(::uPtr< ::uObject*>(__this->Children()), __this->_nativeText);
        __this->_nativeText = NULL;
    }

    __this->_textMode = false;

    if ((__this->NativeEdit() == NULL) || (__this->_nativeViewHost != NULL))
    {
        return;
    }

    __this->_nativeViewHost = ::app::Fuse::Controls::NativeViewHost__New_2(NULL);
    __this->_nativeEdit = ::uAs< ::app::Fuse::Node*>(::app::Uno::UX::IFactory::New_1(::uPtr< ::uObject*>(__this->NativeEdit())), ::app::Fuse::Node__typeof());
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::NativeViewHost*>(__this->_nativeViewHost)->Children()), __this->_nativeEdit);
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->AddHandler(__this->_nativeEdit, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)PlainTextEdit__OnLostFocus, __this));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(__this->Children()), (::app::Fuse::Node*)__this->_nativeViewHost);
}

void PlainTextEdit__SetupText(PlainTextEdit* __this)
{
    if ((__this->NativeText() == NULL) && (__this->NativeEdit() != NULL))
    {
        __this->SetupEdit();
        return;
    }

    if (__this->_nativeViewHost != NULL)
    {
        ::app::Uno::Collections::ICollection__Fuse_Node::Remove(::uPtr< ::uObject*>(__this->Children()), (::app::Fuse::Node*)__this->_nativeViewHost);
        __this->_nativeViewHost = NULL;
        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->AddHandler(__this->_nativeEdit, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)PlainTextEdit__OnLostFocus, __this));
    }

    __this->_textMode = true;

    if ((__this->NativeText() == NULL) || (__this->_nativeText != NULL))
    {
        return;
    }

    __this->_nativeText = ::uAs< ::app::Fuse::Node*>(::app::Uno::UX::IFactory::New_1(::uPtr< ::uObject*>(__this->NativeText())), ::app::Fuse::Node__typeof());
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(__this->Children()), __this->_nativeText);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_RangeControl__double*> RangeControl__MaximumProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_RangeControl__double*> RangeControl__MinimumProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_RangeControl__double*> RangeControl__ValueProperty;

RangeControl__uType* RangeControl__typeof()
{
    static ::uStaticStrong<RangeControl__uType*> type;
    if (type != NULL) return type;

    type = (RangeControl__uType*)::uAllocClassType(sizeof(RangeControl__uType), "Fuse.Controls.RangeControl", false, 9, 2, 0);

    type->SetBaseType(::app::Fuse::Controls::Panel__typeof());
    type->__interface_8.__fp_get_Progress = (double(*)(void*))RangeControl__get_Progress;
    type->__interface_8.__fp_add_ProgressChanged = (void(*)(void*, ::uDelegate*))RangeControl__add_ProgressChanged;
    type->__interface_8.__fp_remove_ProgressChanged = (void(*)(void*, ::uDelegate*))RangeControl__remove_ProgressChanged;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(RangeControl__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(RangeControl__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(RangeControl__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(RangeControl__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(RangeControl__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(RangeControl__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(RangeControl__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(RangeControl__uType, __interface_7),
        ::app::Fuse::Triggers::IProgress__typeof(), offsetof(RangeControl__uType, __interface_8));

    type->SetStrongRefs(
        "ProgressChanged", offsetof(RangeControl, ProgressChanged),
        "ValueChanged", offsetof(RangeControl, ValueChanged));

    type->SetFields(4,
        ::uNewField("_value", NULL, offsetof(RangeControl, _value), ::app::Uno::Double__typeof()),
        ::uNewField("MaximumProperty", &RangeControl__MaximumProperty, 0, ::app::Fuse::StyleProperty__Fuse_Controls_RangeControl__double__typeof()),
        ::uNewField("MinimumProperty", &RangeControl__MinimumProperty, 0, ::app::Fuse::StyleProperty__Fuse_Controls_RangeControl__double__typeof()),
        ::uNewField("ValueProperty", &RangeControl__ValueProperty, 0, ::app::Fuse::StyleProperty__Fuse_Controls_RangeControl__double__typeof()));

    type->SetFunctions(22,
        ::uNewFunctionVoid("add_ProgressChanged", RangeControl__add_ProgressChanged, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("add_ValueChanged", RangeControl__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__double__typeof()),
        ::uNewFunction("ClampToRange", RangeControl__ClampToRange, 0, false, ::app::Uno::Double__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunction("get_Maximum", RangeControl__get_Maximum, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction("get_Minimum", RangeControl__get_Minimum, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction("get_Progress", RangeControl__get_Progress, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction("get_RelativeValue", RangeControl__get_RelativeValue, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction("get_Value", RangeControl__get_Value, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction("GetValue", RangeControl__GetValue, 0, true, ::app::Uno::Double__typeof(), RangeControl__typeof()),
        ::uNewFunctionVoid("OnProgressChanged", RangeControl__OnProgressChanged, 0, false),
        ::uNewFunctionVoid("OnRangeChanged", RangeControl__OnRangeChanged, 0, true, RangeControl__typeof()),
        ::uNewFunctionVoid("OnValueChanged", RangeControl__OnValueChanged, 0, false, ::app::Uno::Double__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("remove_ProgressChanged", RangeControl__remove_ProgressChanged, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", RangeControl__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__double__typeof()),
        ::uNewFunctionVoid("set_Maximum", RangeControl__set_Maximum, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("set_Minimum", RangeControl__set_Minimum, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("set_Progress", RangeControl__set_Progress, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("set_RelativeValue", RangeControl__set_RelativeValue, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("set_Value", RangeControl__set_Value, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("SetInternal", RangeControl__SetInternal, 0, false, ::app::Uno::Double__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetValue", RangeControl__SetValue, 0, false, ::app::Uno::Double__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetValue", RangeControl__SetValue_1, 0, true, RangeControl__typeof(), ::app::Uno::Double__typeof()));

    ::uRegisterType(type);
    return type;
}

void RangeControl___ObjInit_4(RangeControl* __this)
{
    ::app::Fuse::Controls::Panel___ObjInit_3(__this);
}

void RangeControl___TypeInit_4(::uStatic* __this)
{
    RangeControl__MinimumProperty = ::app::Fuse::StyleProperty__Fuse_Controls_RangeControl__double__New_1(NULL, 0.0, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_RangeControl__typeof(), (const void*)RangeControl__OnRangeChanged));
    RangeControl__MaximumProperty = ::app::Fuse::StyleProperty__Fuse_Controls_RangeControl__double__New_1(NULL, 100.0, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_RangeControl__typeof(), (const void*)RangeControl__OnRangeChanged));
    RangeControl__ValueProperty = ::app::Fuse::StyleProperty__Fuse_Controls_RangeControl__double__New_2(NULL, 0.0, NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_RangeControl__double__typeof(), (const void*)RangeControl__SetValue_1), ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Controls_RangeControl__double__typeof(), (const void*)RangeControl__GetValue));
}

void RangeControl__add_ProgressChanged(RangeControl* __this, ::uDelegate* value)
{
    __this->ProgressChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ProgressChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void RangeControl__add_ValueChanged(RangeControl* __this, ::uDelegate* value)
{
    __this->ValueChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ValueChanged, (::uDelegate*)value), ::app::Uno::UX::ValueChangedHandler__double__typeof());
}

double RangeControl__ClampToRange(RangeControl* __this, double v)
{
    return ::app::Uno::Math__Min(NULL, ::app::Uno::Math__Max(NULL, __this->Minimum(), v), __this->Maximum());
}

double RangeControl__get_Maximum(RangeControl* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_RangeControl__double*>(RangeControl__MaximumProperty)->Get(__this);
}

double RangeControl__get_Minimum(RangeControl* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_RangeControl__double*>(RangeControl__MinimumProperty)->Get(__this);
}

double RangeControl__get_Progress(RangeControl* __this)
{
    return (__this->Value() - __this->Minimum()) / (__this->Maximum() - __this->Minimum());
}

double RangeControl__get_RelativeValue(RangeControl* __this)
{
    return (__this->_value - __this->Minimum()) / (__this->Maximum() - __this->Minimum());
}

double RangeControl__get_Value(RangeControl* __this)
{
    return __this->_value;
}

double RangeControl__GetValue(::uStatic* __this, RangeControl* rc)
{
    return ::uPtr< RangeControl*>(rc)->_value;
}

void RangeControl__OnProgressChanged(RangeControl* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ProgressChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ProgressChanged)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

void RangeControl__OnRangeChanged(::uStatic* __this, RangeControl* rc)
{
    ::uPtr< RangeControl*>(rc)->SetValue(::uPtr< RangeControl*>(rc)->Value(), NULL);
    rc->OnProgressChanged();
}

void RangeControl__OnValueChanged(RangeControl* __this, double value, ::uObject* origin)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ValueChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ValueChanged)->InvokeVoid< ::uObject*, ::app::Uno::UX::ValueChangedArgs__double*>((::uObject*)__this, (::app::Uno::UX::ValueChangedArgs__double*)::app::Fuse::Scripting::DoubleChangedArgs__New_3(NULL, value, origin));
    }

    __this->OnProgressChanged();
}

void RangeControl__remove_ProgressChanged(RangeControl* __this, ::uDelegate* value)
{
    __this->ProgressChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->ProgressChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void RangeControl__remove_ValueChanged(RangeControl* __this, ::uDelegate* value)
{
    __this->ValueChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->ValueChanged, (::uDelegate*)value), ::app::Uno::UX::ValueChangedHandler__double__typeof());
}

void RangeControl__set_Maximum(RangeControl* __this, double value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_RangeControl__double*>(RangeControl__MaximumProperty)->Set(__this, value);
}

void RangeControl__set_Minimum(RangeControl* __this, double value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_RangeControl__double*>(RangeControl__MinimumProperty)->Set(__this, value);
}

void RangeControl__set_Progress(RangeControl* __this, double value)
{
    if (__this->Progress() != value)
    {
        __this->Value((value * (__this->Maximum() - __this->Minimum())) + __this->Minimum());
    }
}

void RangeControl__set_RelativeValue(RangeControl* __this, double value)
{
    __this->Value((value * (__this->Maximum() - __this->Minimum())) + __this->Minimum());
}

void RangeControl__set_Value(RangeControl* __this, double value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_RangeControl__double*>(RangeControl__ValueProperty)->Set(__this, value);
}

void RangeControl__SetInternal(RangeControl* __this, double value, ::uObject* origin)
{
    double v = __this->ClampToRange(value);

    if (v != __this->_value)
    {
        __this->_value = v;
        __this->OnValueChanged(v, origin);
    }
}

void RangeControl__SetValue(RangeControl* __this, double value, ::uObject* origin)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_RangeControl__double*>(RangeControl__ValueProperty)->SetLocalState(__this);
    __this->SetInternal(value, origin);
}

void RangeControl__SetValue_1(::uStatic* __this, RangeControl* rc, double value)
{
    ::uPtr< RangeControl*>(rc)->SetInternal(value, NULL);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Rectangle__float4*> Rectangle__CornerRadiusProperty;

Rectangle__uType* Rectangle__typeof()
{
    static ::uStaticStrong<Rectangle__uType*> type;
    if (type != NULL) return type;

    type = (Rectangle__uType*)::uAllocClassType(sizeof(Rectangle__uType), "Fuse.Controls.Rectangle", false, 8, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::Shape__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Rectangle__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(Rectangle__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(Rectangle__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(Rectangle__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(Rectangle__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(Rectangle__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(Rectangle__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(Rectangle__uType, __interface_7));

    type->SetFields(1,
        ::uNewField("CornerRadiusProperty", &Rectangle__CornerRadiusProperty, 0, ::app::Fuse::StyleProperty__Fuse_Controls_Rectangle__float4__typeof()));

    type->SetFunctions(4,
        ::uNewFunction("get_CornerRadius", Rectangle__get_CornerRadius, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction(".ctor", Rectangle__New_2, 0, true, Rectangle__typeof()),
        ::uNewFunctionVoid("OnCornerRadiusChanged", Rectangle__OnCornerRadiusChanged, 0, true, Rectangle__typeof()),
        ::uNewFunctionVoid("set_CornerRadius", Rectangle__set_CornerRadius, 0, false, ::app::Uno::Float4__typeof()));

    ::uRegisterType(type);
    return type;
}

void Rectangle___ObjInit_5(Rectangle* __this)
{
    ::app::Fuse::Controls::Shape___ObjInit_4(__this);
}

void Rectangle___TypeInit_5(::uStatic* __this)
{
    Rectangle__CornerRadiusProperty = ::app::Fuse::StyleProperty__Fuse_Controls_Rectangle__float4__New_1(NULL, ::app::Uno::Float4__New_1(NULL, 0.0f), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Rectangle__typeof(), (const void*)Rectangle__OnCornerRadiusChanged));
}

::app::Uno::Float4 Rectangle__get_CornerRadius(Rectangle* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Rectangle__float4*>(Rectangle__CornerRadiusProperty)->Get(__this);
}

Rectangle* Rectangle__New_2(::uStatic* __this)
{
    Rectangle* inst = (Rectangle*)::uAllocObject(sizeof(Rectangle), Rectangle__typeof());
    inst->_ObjInit_5();
    return inst;
}

void Rectangle__OnCornerRadiusChanged(::uStatic* __this, Rectangle* r)
{
    ::uPtr< Rectangle*>(r)->OnShapeChanged();
}

void Rectangle__set_CornerRadius(Rectangle* __this, ::app::Uno::Float4 value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Rectangle__float4*>(Rectangle__CornerRadiusProperty)->Set(__this, value);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

RegularPolygon__uType* RegularPolygon__typeof()
{
    static ::uStaticStrong<RegularPolygon__uType*> type;
    if (type != NULL) return type;

    type = (RegularPolygon__uType*)::uAllocClassType(sizeof(RegularPolygon__uType), "Fuse.Controls.RegularPolygon", false, 8, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::Shape__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(RegularPolygon__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(RegularPolygon__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(RegularPolygon__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(RegularPolygon__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(RegularPolygon__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(RegularPolygon__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(RegularPolygon__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(RegularPolygon__uType, __interface_7));

    type->SetFields(1,
        ::uNewField("_sides", NULL, offsetof(RegularPolygon, _sides), ::app::Uno::Int__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Sides", RegularPolygon__get_Sides, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction(".ctor", RegularPolygon__New_2, 0, true, RegularPolygon__typeof()),
        ::uNewFunctionVoid("set_Sides", RegularPolygon__set_Sides, 0, false, ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void RegularPolygon___ObjInit_5(RegularPolygon* __this)
{
    __this->_sides = 5;
    ::app::Fuse::Controls::Shape___ObjInit_4(__this);
}

int RegularPolygon__get_Sides(RegularPolygon* __this)
{
    return __this->_sides;
}

RegularPolygon* RegularPolygon__New_2(::uStatic* __this)
{
    RegularPolygon* inst = (RegularPolygon*)::uAllocObject(sizeof(RegularPolygon), RegularPolygon__typeof());
    inst->_ObjInit_5();
    return inst;
}

void RegularPolygon__set_Sides(RegularPolygon* __this, int value)
{
    if (value == __this->_sides)
    {
        return;
    }

    __this->_sides = value;
    __this->OnShapeChanged();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ScrollPropertyChangedArgs__uType* ScrollPropertyChangedArgs__typeof()
{
    static ::uStaticStrong<ScrollPropertyChangedArgs__uType*> type;
    if (type != NULL) return type;

    type = (ScrollPropertyChangedArgs__uType*)::uAllocClassType(sizeof(ScrollPropertyChangedArgs__uType), "Fuse.Controls.ScrollPropertyChangedArgs", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ScrollPropertyChangedArgs, _Origin));

    type->SetFunctions(3,
        ::uNewFunction("get_Origin", ScrollPropertyChangedArgs__get_Origin, 0, false, ::uObject__typeof()),
        ::uNewFunction(".ctor", ScrollPropertyChangedArgs__New_2, 0, true, ScrollPropertyChangedArgs__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("set_Origin", ScrollPropertyChangedArgs__set_Origin, 0, false, ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void ScrollPropertyChangedArgs___ObjInit_1(ScrollPropertyChangedArgs* __this, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Origin(origin);
}

::uObject* ScrollPropertyChangedArgs__get_Origin(ScrollPropertyChangedArgs* __this)
{
    return __this->_Origin;
}

ScrollPropertyChangedArgs* ScrollPropertyChangedArgs__New_2(::uStatic* __this, ::uObject* origin)
{
    ScrollPropertyChangedArgs* inst = (ScrollPropertyChangedArgs*)::uAllocObject(sizeof(ScrollPropertyChangedArgs), ScrollPropertyChangedArgs__typeof());
    inst->_ObjInit_1(origin);
    return inst;
}

void ScrollPropertyChangedArgs__set_Origin(ScrollPropertyChangedArgs* __this, ::uObject* value)
{
    __this->_Origin = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ScrollPropertyChangedHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Controls.ScrollPropertyChangedHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::Controls::ScrollPropertyChangedArgs__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections*> ScrollView__AllowedScrollDirectionsProperty;

ScrollView__uType* ScrollView__typeof()
{
    static ::uStaticStrong<ScrollView__uType*> type;
    if (type != NULL) return type;

    type = (ScrollView__uType*)::uAllocClassType(sizeof(ScrollView__uType), "Fuse.Controls.ScrollView", false, 6, 4, 0);

    type->SetBaseType(::app::Fuse::Controls::ContentControl__typeof());
    type->__fp_ArrangePaddingBox = (void(*)(::app::Fuse::Elements::Element*, ::app::Uno::Float2))ScrollView__ArrangePaddingBox;
    type->__fp_GetContentSize = (::app::Uno::Float2(*)(::app::Fuse::Elements::Element*, ::app::Uno::Float2, int))ScrollView__GetContentSize;
    type->__fp_OnApplyStyle = (void(*)(::app::Fuse::Node*, ::uObject*))ScrollView__OnApplyStyle;
    type->__fp_OnContentChanged = (void(*)(::app::Fuse::Controls::ContentControl*, ::app::Fuse::Node*, ::app::Fuse::Node*))ScrollView__OnContentChanged;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(ScrollView__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(ScrollView__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(ScrollView__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(ScrollView__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(ScrollView__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(ScrollView__uType, __interface_5));

    type->SetStrongRefs(
        "_scroller", offsetof(ScrollView, _scroller),
        "_scrollTranslation", offsetof(ScrollView, _scrollTranslation),
        "ScrollPositionChanged", offsetof(ScrollView, ScrollPositionChanged),
        "ScrollPropertyChanged", offsetof(ScrollView, ScrollPropertyChanged));

    type->SetFields(9,
        ::uNewField("_allowedScrollDirections", NULL, offsetof(ScrollView, _allowedScrollDirections), ::app::Fuse::Gestures::ScrollDirections__typeof()),
        ::uNewField("_cacheContentMarginSize", NULL, offsetof(ScrollView, _cacheContentMarginSize), ::app::Uno::Float2__typeof()),
        ::uNewField("_keepFocusInView", NULL, offsetof(ScrollView, _keepFocusInView), ::app::Uno::Bool__typeof()),
        ::uNewField("_scroller", NULL, offsetof(ScrollView, _scroller), ::app::Fuse::Gestures::Scroller__typeof()),
        ::uNewField("_scrollTranslation", NULL, offsetof(ScrollView, _scrollTranslation), ::app::Fuse::Translation__typeof()),
        ::uNewField("_snapMaxTransform", NULL, offsetof(ScrollView, _snapMaxTransform), ::app::Uno::Bool__typeof()),
        ::uNewField("_snapMinTransform", NULL, offsetof(ScrollView, _snapMinTransform), ::app::Uno::Bool__typeof()),
        ::uNewField("_userScroll", NULL, offsetof(ScrollView, _userScroll), ::app::Uno::Bool__typeof()),
        ::uNewField("AllowedScrollDirectionsProperty", &ScrollView__AllowedScrollDirectionsProperty, 0, ::app::Fuse::StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__typeof()));

    type->SetFunctions(34,
        ::uNewFunctionVoid("add_ScrollPositionChanged", ScrollView__add_ScrollPositionChanged, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("add_ScrollPropertyChanged", ScrollView__add_ScrollPropertyChanged, 0, false, ::app::Fuse::Controls::ScrollPropertyChangedHandler__typeof()),
        ::uNewFunction("ConstrainExtent", ScrollView__ConstrainExtent, 0, false, ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_AllowedScrollDirections", ScrollView__get_AllowedScrollDirections, 0, false, ::app::Fuse::Gestures::ScrollDirections__typeof()),
        ::uNewFunction("get_Content", ScrollView__get_Content_1, 0, false, ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction("get_KeepFocusInView", ScrollView__get_KeepFocusInView, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_MaxScroll", ScrollView__get_MaxScroll, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_MinOverflow", ScrollView__get_MinOverflow, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_MinScroll", ScrollView__get_MinScroll, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_RelativeScrollPosition", ScrollView__get_RelativeScrollPosition, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Scroller", ScrollView__get_Scroller, 0, false, ::app::Fuse::Gestures::Scroller__typeof()),
        ::uNewFunction("get_ScrollPosition", ScrollView__get_ScrollPosition, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_SnapMaxTransform", ScrollView__get_SnapMaxTransform, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_SnapMinTransform", ScrollView__get_SnapMinTransform, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_UserScroll", ScrollView__get_UserScroll, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("GetAllowedScrollDirections", ScrollView__GetAllowedScrollDirections, 0, true, ::app::Fuse::Gestures::ScrollDirections__typeof(), ScrollView__typeof()),
        ::uNewFunction("GetNodeScrollPosition", ScrollView__GetNodeScrollPosition, 0, false, ::app::Uno::Float2__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("Goto", ScrollView__Goto, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction(".ctor", ScrollView__New_2, 0, true, ScrollView__typeof()),
        ::uNewFunctionVoid("OnScrollPositionChanged", ScrollView__OnScrollPositionChanged, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("OnScrollPropertyChanged", ScrollView__OnScrollPropertyChanged, 0, false, ::uObject__typeof()),
        ::uNewFunctionVoid("remove_ScrollPositionChanged", ScrollView__remove_ScrollPositionChanged, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("remove_ScrollPropertyChanged", ScrollView__remove_ScrollPropertyChanged, 0, false, ::app::Fuse::Controls::ScrollPropertyChangedHandler__typeof()),
        ::uNewFunctionVoid("set_AllowedScrollDirections", ScrollView__set_AllowedScrollDirections, 0, false, ::app::Fuse::Gestures::ScrollDirections__typeof()),
        ::uNewFunctionVoid("set_Content", ScrollView__set_Content_1, 0, false, ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunctionVoid("set_KeepFocusInView", ScrollView__set_KeepFocusInView, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_RelativeScrollPosition", ScrollView__set_RelativeScrollPosition, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_ScrollPosition", ScrollView__set_ScrollPosition, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_SnapMaxTransform", ScrollView__set_SnapMaxTransform, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_SnapMinTransform", ScrollView__set_SnapMinTransform, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_UserScroll", ScrollView__set_UserScroll, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("SetAllowedScrollDirections", ScrollView__SetAllowedScrollDirections, 0, true, ScrollView__typeof(), ::app::Fuse::Gestures::ScrollDirections__typeof()),
        ::uNewFunctionVoid("SetScrollPosition", ScrollView__SetScrollPosition, 0, false, ::app::Uno::Float2__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("UpdateScrollPosition", ScrollView__UpdateScrollPosition, 0, false));

    ::uRegisterType(type);
    return type;
}

void ScrollView___ObjInit_4(ScrollView* __this)
{
    __this->_userScroll = true;
    __this->_snapMinTransform = true;
    __this->_snapMaxTransform = true;
    __this->_keepFocusInView = true;
    __this->_allowedScrollDirections = 12;
    __this->_scrollTranslation = ::app::Fuse::Translation__New_1(NULL);
    ::app::Fuse::Controls::ContentControl___ObjInit_3(__this);
    __this->ClipToBounds(true);
    __this->HitTestMode(6);
}

void ScrollView___TypeInit_3(::uStatic* __this)
{
    ScrollView__AllowedScrollDirectionsProperty = ::app::Fuse::StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__New_2(NULL, 12, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_ScrollView__typeof(), (const void*)::app::Fuse::Node__InvalidateLayout_1), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__typeof(), (const void*)ScrollView__SetAllowedScrollDirections), ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__typeof(), (const void*)ScrollView__GetAllowedScrollDirections));
}

void ScrollView__add_ScrollPositionChanged(ScrollView* __this, ::uDelegate* value)
{
    __this->ScrollPositionChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ScrollPositionChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void ScrollView__add_ScrollPropertyChanged(ScrollView* __this, ::uDelegate* value)
{
    __this->ScrollPropertyChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ScrollPropertyChanged, (::uDelegate*)value), ::app::Fuse::Controls::ScrollPropertyChangedHandler__typeof());
}

void ScrollView__ArrangePaddingBox(ScrollView* __this, ::app::Uno::Float2 size)
{
    ::app::Uno::Float4 ind_123 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_124 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_125 = ::app::Uno::Float4();

    if (__this->Content_1() == NULL)
    {
        __this->_cacheContentMarginSize = ::app::Uno::Float2__New_1(NULL, 0.0f);
    }
    else
    {
        size = ::app::Uno::Float2__op_Subtraction_2(NULL, size, ::app::Uno::Float2__op_Addition_2(NULL, (ind_123 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y)), (ind_124 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_124.Z, ind_124.W))));
        __this->_cacheContentMarginSize = ::uPtr< ::app::Fuse::Elements::Element*>(__this->Content_1())->ArrangeMarginBox((ind_125 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_125.X, ind_125.Y)), size, 3);
    }

    ::app::Fuse::UpdateManager__AddDeferredAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)ScrollView__UpdateScrollPosition, __this));
}

::app::Uno::Float2 ScrollView__ConstrainExtent(ScrollView* __this, ::app::Uno::Float2 t)
{
    if (__this->AllowedScrollDirections() == 3)
    {
        t.Y = 0.0f;
    }
    else if (__this->AllowedScrollDirections() == 12)
    {
        t.X = 0.0f;
    }

    return t;
}

int ScrollView__get_AllowedScrollDirections(ScrollView* __this)
{
    return __this->_allowedScrollDirections;
}

::app::Fuse::Elements::Element* ScrollView__get_Content_1(ScrollView* __this)
{
    return ::uAs< ::app::Fuse::Elements::Element*>(::app::Fuse::Controls::ContentControl__get_Content(__this), ::app::Fuse::Elements::Element__typeof());
}

bool ScrollView__get_KeepFocusInView(ScrollView* __this)
{
    return __this->_keepFocusInView;
}

::app::Uno::Float2 ScrollView__get_MaxScroll(ScrollView* __this)
{
    ::app::Uno::Float4 ind_128 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_129 = ::app::Uno::Float4();

    if (__this->Content_1() == NULL)
    {
        return ::app::Uno::Float2__New_1(NULL, 0.0f);
    }

    return __this->ConstrainExtent(::app::Uno::Math__Max_3(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::app::Uno::Float2__op_Addition_2(NULL, ::app::Uno::Float2__op_Addition_2(NULL, ::app::Uno::Float2__op_Addition_2(NULL, __this->_cacheContentMarginSize, ::uPtr< ::app::Fuse::Elements::Element*>(__this->Content_1())->ActualPosition()), (ind_128 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_128.X, ind_128.Y))), (ind_129 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_129.Z, ind_129.W))), __this->ActualSize()), ::app::Uno::Float2__New_1(NULL, 0.0f)));
}

::app::Uno::Float2 ScrollView__get_MinOverflow(ScrollView* __this)
{
    return ::app::Uno::Float2__op_Subtraction_2(NULL, __this->MinScroll(), ::uPtr< ::app::Fuse::Gestures::Scroller*>(__this->_scroller)->OverflowExtent());
}

::app::Uno::Float2 ScrollView__get_MinScroll(ScrollView* __this)
{
    ::app::Uno::Float4 ind_130 = ::app::Uno::Float4();

    if (__this->Content_1() == NULL)
    {
        return ::app::Uno::Float2__New_1(NULL, 0.0f);
    }

    return __this->ConstrainExtent(::app::Uno::Math__Min_3(NULL, ::app::Uno::Float2__New_1(NULL, 0.0f), ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(__this->Content_1())->ActualPosition(), (ind_130 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_130.X, ind_130.Y)))));
}

::app::Uno::Float2 ScrollView__get_RelativeScrollPosition(ScrollView* __this)
{
    ::app::Uno::Float2 r = ::app::Uno::Float2__op_Subtraction_2(NULL, __this->MaxScroll(), __this->MinScroll());

    if ((r.X < 1e-05f) || (r.Y < 1e-05f))
    {
        return (__this->Content_1() == NULL) ? ::app::Uno::Float2__New_1(NULL, 0.5f) : ::app::Fuse::Elements::AlignmentHelpers__GetAnchor(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(__this->Content_1())->Alignment());
    }

    return ::app::Uno::Float2__op_Division_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, __this->ScrollPosition(), __this->MinScroll()), ::app::Uno::Float2__op_Subtraction_2(NULL, __this->MaxScroll(), __this->MinScroll()));
}

::app::Fuse::Gestures::Scroller* ScrollView__get_Scroller(ScrollView* __this)
{
    return __this->_scroller;
}

::app::Uno::Float2 ScrollView__get_ScrollPosition(ScrollView* __this)
{
    return ::app::Uno::Float2__op_UnaryNegation(NULL, ::uPtr< ::app::Fuse::Translation*>(__this->_scrollTranslation)->XY());
}

bool ScrollView__get_SnapMaxTransform(ScrollView* __this)
{
    return __this->_snapMaxTransform;
}

bool ScrollView__get_SnapMinTransform(ScrollView* __this)
{
    return __this->_snapMinTransform;
}

bool ScrollView__get_UserScroll(ScrollView* __this)
{
    return __this->_userScroll;
}

int ScrollView__GetAllowedScrollDirections(::uStatic* __this, ScrollView* sv)
{
    return ::uPtr< ScrollView*>(sv)->_allowedScrollDirections;
}

::app::Uno::Float2 ScrollView__GetContentSize(ScrollView* __this, ::app::Uno::Float2 fillSize, int fillSet)
{
    ::app::Uno::Float4 ind_126 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_127 = ::app::Uno::Float4();

    if (__this->Content_1() != NULL)
    {
        fillSize = ::app::Uno::Float2__op_Subtraction_2(NULL, fillSize, ::app::Uno::Float2__op_Addition_2(NULL, (ind_126 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_126.X, ind_126.Y)), (ind_127 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_127.Z, ind_127.W))));
        ::app::Uno::Float2 r = ::uPtr< ::app::Fuse::Elements::Element*>(__this->Content_1())->GetMarginSize(fillSize, fillSet);
        return r;
    }

    return ::app::Uno::Float2__New_1(NULL, 0.0f);
}

::app::Uno::Float2 ScrollView__GetNodeScrollPosition(ScrollView* __this, ::app::Fuse::Node* n)
{
    if ((n == NULL) || (__this->Content_1() == NULL))
    {
        return ::app::Uno::Float2__New_1(NULL, 0.0f);
    }

    ::app::Uno::Float4x4 trans = ::uPtr< ::app::Fuse::Node*>(n)->GetTransformTo((::app::Fuse::Node*)__this->Content_1());
    ::app::Uno::Float4 local = ::app::Uno::Vector__Transform_4(NULL, ::app::Uno::Float3__New_1(NULL, 0.0f), trans);
    ::app::Fuse::Elements::Element* elm = ::uAs< ::app::Fuse::Elements::Element*>(n, ::app::Fuse::Elements::Element__typeof());

    if (elm == NULL)
    {
        return ::app::Uno::Float2__New_2(NULL, local.X, local.Y);
    }

    return ::app::Uno::Float2__op_Subtraction_2(NULL, ::app::Uno::Float2__op_Addition_2(NULL, ::app::Uno::Float2__New_2(NULL, local.X, local.Y), ::app::Uno::Float2__op_Division_1(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(elm)->ActualSize(), 2.0f)), ::app::Uno::Float2__op_Division_1(NULL, __this->ActualSize(), 2.0f));
}

void ScrollView__Goto(ScrollView* __this, ::app::Uno::Float2 position)
{
    if (__this->_scroller == NULL)
    {
        __this->ScrollPosition(::app::Uno::Math__Min_3(NULL, __this->MaxScroll(), ::app::Uno::Math__Max_3(NULL, __this->MinScroll(), __this->ScrollPosition())));
    }
    else
    {
        ::uPtr< ::app::Fuse::Gestures::Scroller*>(__this->_scroller)->Goto(position);
    }
}

ScrollView* ScrollView__New_2(::uStatic* __this)
{
    ScrollView* inst = (ScrollView*)::uAllocObject(sizeof(ScrollView), ScrollView__typeof());
    inst->_ObjInit_4();
    return inst;
}

void ScrollView__OnApplyStyle(ScrollView* __this, ::uObject* target)
{
    ::app::Fuse::Node__OnApplyStyle(__this, target);
    ::app::Fuse::Elements::Element* elm = __this->Content_1();

    if (target != elm)
    {
        return;
    }

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

    if (!::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__MaxWidthProperty)->HasValue(elm) && setWidth)
    {
        ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__MaxWidthProperty)->SetStyle_1(elm, FLT_INF, 1);
    }

    if (!::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__MaxHeightProperty)->HasValue(elm) && setHeight)
    {
        ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__MaxHeightProperty)->SetStyle_1(elm, FLT_INF, 1);
    }

    if (::uPtr< ::app::Fuse::StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment*>(::app::Fuse::Elements::Element__AlignmentProperty)->HasValue(elm))
    {
        return;
    }

    bool setAlign = false;

    if ((setWidth && !::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__WidthProperty)->HasValue(elm)) && !::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__MinWidthProperty)->HasValue(elm))
    {
        ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__MinWidthProperty)->SetStyle_1(elm, 100.0f, 1);
        setAlign = true;
    }

    if ((setHeight && !::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->HasValue(elm)) && !::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__MinHeightProperty)->HasValue(elm))
    {
        ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__MinHeightProperty)->SetStyle_1(elm, 100.0f, 1);
        setAlign = true;
    }

    if (setAlign)
    {
        ::uPtr< ::app::Fuse::StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment*>(::app::Fuse::Elements::Element__AlignmentProperty)->SetStyle(elm, align);
    }
}

void ScrollView__OnContentChanged(ScrollView* __this, ::app::Fuse::Node* oldContent, ::app::Fuse::Node* newContent)
{
    ::app::Fuse::Controls::ContentControl__OnContentChanged(__this, oldContent, newContent);

    if (oldContent != NULL)
    {
        ::app::Uno::Collections::ICollection__Fuse_Transform::Remove(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(oldContent)->Transforms()), (::app::Fuse::Transform*)__this->_scrollTranslation);
    }

    if (newContent != NULL)
    {
        ::app::Uno::Collections::ICollection__Fuse_Transform::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(newContent)->Transforms()), (::app::Fuse::Transform*)__this->_scrollTranslation);
    }
}

void ScrollView__OnScrollPositionChanged(ScrollView* __this, ::uObject* origin)
{
    ::uDelegate* handler = __this->ScrollPositionChanged;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }

    __this->OnScrollPropertyChanged(origin);
}

void ScrollView__OnScrollPropertyChanged(ScrollView* __this, ::uObject* origin)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ScrollPropertyChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ScrollPropertyChanged)->InvokeVoid< ::uObject*, ::app::Fuse::Controls::ScrollPropertyChangedArgs*>((::uObject*)__this, ::app::Fuse::Controls::ScrollPropertyChangedArgs__New_2(NULL, origin));
    }
}

void ScrollView__remove_ScrollPositionChanged(ScrollView* __this, ::uDelegate* value)
{
    __this->ScrollPositionChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->ScrollPositionChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void ScrollView__remove_ScrollPropertyChanged(ScrollView* __this, ::uDelegate* value)
{
    __this->ScrollPropertyChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->ScrollPropertyChanged, (::uDelegate*)value), ::app::Fuse::Controls::ScrollPropertyChangedHandler__typeof());
}

void ScrollView__set_AllowedScrollDirections(ScrollView* __this, int value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections*>(ScrollView__AllowedScrollDirectionsProperty)->Set(__this, value);
}

void ScrollView__set_Content_1(ScrollView* __this, ::app::Fuse::Elements::Element* value)
{
    ::app::Fuse::Controls::ContentControl__set_Content(__this, (::app::Fuse::Node*)value);
}

void ScrollView__set_KeepFocusInView(ScrollView* __this, bool value)
{
    if (__this->_keepFocusInView != value)
    {
        __this->_keepFocusInView = value;
        __this->OnScrollPropertyChanged((::uObject*)__this);
    }
}

void ScrollView__set_RelativeScrollPosition(ScrollView* __this, ::app::Uno::Float2 value)
{
    __this->ScrollPosition(::app::Uno::Float2__op_Addition_2(NULL, ::app::Uno::Float2__op_Multiply_2(NULL, value, ::app::Uno::Float2__op_Subtraction_2(NULL, __this->MaxScroll(), __this->MinScroll())), __this->MinScroll()));
}

void ScrollView__set_ScrollPosition(ScrollView* __this, ::app::Uno::Float2 value)
{
    __this->SetScrollPosition(value, (::uObject*)__this);
}

void ScrollView__set_SnapMaxTransform(ScrollView* __this, bool value)
{
    __this->_snapMaxTransform = value;
}

void ScrollView__set_SnapMinTransform(ScrollView* __this, bool value)
{
    __this->_snapMinTransform = value;
}

void ScrollView__set_UserScroll(ScrollView* __this, bool value)
{
    __this->_userScroll = value;
    __this->OnScrollPropertyChanged((::uObject*)__this);
}

void ScrollView__SetAllowedScrollDirections(::uStatic* __this, ScrollView* sv, int value)
{
    ::uPtr< ScrollView*>(sv)->_allowedScrollDirections = value;
    sv->OnScrollPropertyChanged((::uObject*)sv);
}

void ScrollView__SetScrollPosition(ScrollView* __this, ::app::Uno::Float2 position, ::uObject* origin)
{
    position = __this->ConstrainExtent(position);
    ::uPtr< ::app::Fuse::Translation*>(__this->_scrollTranslation)->Vector(::app::Uno::Float3__New_4(NULL, ::app::Uno::Float2__op_UnaryNegation(NULL, position), 0.0f));
    __this->OnScrollPositionChanged(origin);
}

void ScrollView__UpdateScrollPosition(ScrollView* __this)
{
    if (__this->_scroller != NULL)
    {
        ::uPtr< ::app::Fuse::Gestures::Scroller*>(__this->_scroller)->CheckLimits();
    }
    else
    {
        __this->ScrollPosition(::app::Uno::Math__Min_3(NULL, __this->MaxScroll(), ::app::Uno::Math__Max_3(NULL, __this->MinScroll(), __this->ScrollPosition())));
    }

    __this->OnScrollPositionChanged((::uObject*)__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ScrollViewer__uType* ScrollViewer__typeof()
{
    static ::uStaticStrong<ScrollViewer__uType*> type;
    if (type != NULL) return type;

    type = (ScrollViewer__uType*)::uAllocClassType(sizeof(ScrollViewer__uType), "Fuse.Controls.ScrollViewer", false, 6, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::ScrollView__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(ScrollViewer__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(ScrollViewer__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(ScrollViewer__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(ScrollViewer__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(ScrollViewer__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(ScrollViewer__uType, __interface_5));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ScrollViewer__New_3, 0, true, ScrollViewer__typeof()));

    ::uRegisterType(type);
    return type;
}

void ScrollViewer___ObjInit_5(ScrollViewer* __this)
{
    ::app::Fuse::Controls::ScrollView___ObjInit_4(__this);
    ::app::Fuse::Diagnostics__Deprecated(NULL, ::uGetConstString("ScrollViewer is deprecated - use ScrollView instead"), (::uObject*)__this, ::uGetConstString("C:\\ProgramData\\Uno\\Packages\\Fuse.Controls\\0.11.3\\$.uno"), 2700, ::uGetConstString(".ctor"));
}

ScrollViewer* ScrollViewer__New_3(::uStatic* __this)
{
    ScrollViewer* inst = (ScrollViewer*)::uAllocObject(sizeof(ScrollViewer), ScrollViewer__typeof());
    inst->_ObjInit_5();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush*> Shape__FillProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Shape__float*> Shape__SmoothnessProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke*> Shape__StrokeProperty;

Shape__uType* Shape__typeof()
{
    static ::uStaticStrong<Shape__uType*> type;
    if (type != NULL) return type;

    type = (Shape__uType*)::uAllocClassType(sizeof(Shape__uType), "Fuse.Controls.Shape", false, 8, 5, 0);

    type->SetBaseType(::app::Fuse::Controls::Panel__typeof());
    type->__fp_CalcRenderBounds = (::app::Uno::Rect(*)(::app::Fuse::Elements::Element*))Shape__CalcRenderBounds;
    type->__fp_OnResetStyle = (void(*)(::app::Fuse::Node*))Shape__OnResetStyle;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))Shape__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))Shape__OnUnrooted;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Shape__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(Shape__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(Shape__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(Shape__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(Shape__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(Shape__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(Shape__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(Shape__uType, __interface_7));

    type->SetStrongRefs(
        "_fills", offsetof(Shape, _fills),
        "_strokes", offsetof(Shape, _strokes),
        "_styleFills", offsetof(Shape, _styleFills),
        "_styleStrokes", offsetof(Shape, _styleStrokes),
        "ShapeChanged", offsetof(Shape, ShapeChanged));

    type->SetFields(8,
        ::uNewField("_fills", NULL, offsetof(Shape, _fills), ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush__typeof()),
        ::uNewField("_smoothness", NULL, offsetof(Shape, _smoothness), ::app::Uno::Float__typeof()),
        ::uNewField("_strokes", NULL, offsetof(Shape, _strokes), ::app::Uno::Collections::ObservableList__Fuse_Drawing_Stroke__typeof()),
        ::uNewField("_styleFills", NULL, offsetof(Shape, _styleFills), ::app::Uno::Collections::List__Fuse_Drawing_Brush__typeof()),
        ::uNewField("_styleStrokes", NULL, offsetof(Shape, _styleStrokes), ::app::Uno::Collections::List__Fuse_Drawing_Stroke__typeof()),
        ::uNewField("FillProperty", &Shape__FillProperty, 0, ::app::Fuse::StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__typeof()),
        ::uNewField("SmoothnessProperty", &Shape__SmoothnessProperty, 0, ::app::Fuse::StyleProperty__Fuse_Controls_Shape__float__typeof()),
        ::uNewField("StrokeProperty", &Shape__StrokeProperty, 0, ::app::Fuse::StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__typeof()));

    type->SetFunctions(30,
        ::uNewFunctionVoid("add_ShapeChanged", Shape__add_ShapeChanged, 0, false, ::app::Uno::Action__typeof()),
        ::uNewFunctionVoid("AddStyleFill", Shape__AddStyleFill, 0, false, ::app::Fuse::Drawing::Brush__typeof()),
        ::uNewFunctionVoid("AddStyleStroke", Shape__AddStyleStroke, 0, false, ::app::Fuse::Drawing::Stroke__typeof()),
        ::uNewFunction("get_DrawCost", Shape__get_DrawCost_1, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Fill", Shape__get_Fill, 0, false, ::app::Fuse::Drawing::Brush__typeof()),
        ::uNewFunction("get_Fills", Shape__get_Fills, 0, false, ::app::Uno::Collections::IList__Fuse_Drawing_Brush__typeof()),
        ::uNewFunction("get_HasFills", Shape__get_HasFills, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_HasStrokes", Shape__get_HasStrokes, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Smoothness", Shape__get_Smoothness, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Stroke", Shape__get_Stroke, 0, false, ::app::Fuse::Drawing::Stroke__typeof()),
        ::uNewFunction("get_Strokes", Shape__get_Strokes, 0, false, ::app::Uno::Collections::IList__Fuse_Drawing_Stroke__typeof()),
        ::uNewFunction("GetFill", Shape__GetFill, 0, true, ::app::Fuse::Drawing::Brush__typeof(), Shape__typeof()),
        ::uNewFunction("GetSmoothness", Shape__GetSmoothness, 0, true, ::app::Uno::Float__typeof(), Shape__typeof()),
        ::uNewFunction("GetStroke", Shape__GetStroke, 0, true, ::app::Fuse::Drawing::Stroke__typeof(), Shape__typeof()),
        ::uNewFunctionVoid("OnFillAdded", Shape__OnFillAdded, 0, false, ::app::Fuse::Drawing::Brush__typeof()),
        ::uNewFunctionVoid("OnFillRemoved", Shape__OnFillRemoved, 0, false, ::app::Fuse::Drawing::Brush__typeof()),
        ::uNewFunctionVoid("OnShadingChanged", Shape__OnShadingChanged, 0, false),
        ::uNewFunctionVoid("OnShapeChanged", Shape__OnShapeChanged, 0, false),
        ::uNewFunctionVoid("OnSmoothnessChanged", Shape__OnSmoothnessChanged, 0, true, Shape__typeof()),
        ::uNewFunctionVoid("OnStrokeAdded", Shape__OnStrokeAdded, 0, false, ::app::Fuse::Drawing::Stroke__typeof()),
        ::uNewFunctionVoid("OnStrokeChanged", Shape__OnStrokeChanged, 0, false, ::app::Fuse::Drawing::Stroke__typeof()),
        ::uNewFunctionVoid("OnStrokeRemoved", Shape__OnStrokeRemoved, 0, false, ::app::Fuse::Drawing::Stroke__typeof()),
        ::uNewFunctionVoid("PrepareDraw", Shape__PrepareDraw, 0, false, ::app::Fuse::DrawContext__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("remove_ShapeChanged", Shape__remove_ShapeChanged, 0, false, ::app::Uno::Action__typeof()),
        ::uNewFunctionVoid("set_Fill", Shape__set_Fill, 0, false, ::app::Fuse::Drawing::Brush__typeof()),
        ::uNewFunctionVoid("set_Smoothness", Shape__set_Smoothness, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Stroke", Shape__set_Stroke, 0, false, ::app::Fuse::Drawing::Stroke__typeof()),
        ::uNewFunctionVoid("SetFill", Shape__SetFill, 0, true, Shape__typeof(), ::app::Fuse::Drawing::Brush__typeof()),
        ::uNewFunctionVoid("SetSmoothness", Shape__SetSmoothness, 0, true, Shape__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("SetStroke", Shape__SetStroke, 0, true, Shape__typeof(), ::app::Fuse::Drawing::Stroke__typeof()));

    ::uRegisterType(type);
    return type;
}

void Shape___ObjInit_4(Shape* __this)
{
    __this->_smoothness = 1.0f;
    ::app::Fuse::Controls::Panel___ObjInit_3(__this);
}

void Shape___TypeInit_4(::uStatic* __this)
{
    Shape__FillProperty = ::app::Fuse::StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__New_2(NULL, NULL, NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Shape__Fuse_Drawing_Brush__typeof(), (const void*)Shape__SetFill), ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Controls_Shape__Fuse_Drawing_Brush__typeof(), (const void*)Shape__GetFill));
    Shape__StrokeProperty = ::app::Fuse::StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__New_2(NULL, NULL, NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Shape__Fuse_Drawing_Stroke__typeof(), (const void*)Shape__SetStroke), ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Controls_Shape__Fuse_Drawing_Stroke__typeof(), (const void*)Shape__GetStroke));
    Shape__SmoothnessProperty = ::app::Fuse::StyleProperty__Fuse_Controls_Shape__float__New_2(NULL, 1.0f, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Shape__typeof(), (const void*)Shape__OnSmoothnessChanged), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Shape__float__typeof(), (const void*)Shape__SetSmoothness), ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Controls_Shape__float__typeof(), (const void*)Shape__GetSmoothness));
}

void Shape__add_ShapeChanged(Shape* __this, ::uDelegate* value)
{
    __this->ShapeChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ShapeChanged, (::uDelegate*)value), ::app::Uno::Action__typeof());
}

void Shape__AddStyleFill(Shape* __this, ::app::Fuse::Drawing::Brush* b)
{
    if (__this->_styleFills == NULL)
    {
        __this->_styleFills = ::app::Uno::Collections::List__Fuse_Drawing_Brush__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Brush*>(__this->_styleFills)->Add(b);
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Add(::uPtr< ::uObject*>(__this->Fills()), b);
}

void Shape__AddStyleStroke(Shape* __this, ::app::Fuse::Drawing::Stroke* s)
{
    if (__this->_styleStrokes == NULL)
    {
        __this->_styleStrokes = ::app::Uno::Collections::List__Fuse_Drawing_Stroke__New_1(NULL);
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Stroke*>(__this->_styleStrokes)->Add(s);
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Stroke::Add(::uPtr< ::uObject*>(__this->Strokes()), s);
}

::app::Uno::Rect Shape__CalcRenderBounds(Shape* __this)
{
    ::app::Uno::Rect r = ::app::Uno::Rect__New_2(NULL, ::app::Uno::Float2__New_1(NULL, 0.0f), __this->ActualSize());

    if (__this->HasStrokes())
    {
        for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Stroke::GetEnumerator(::uPtr< ::uObject*>(__this->Strokes())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
        {
            ::app::Fuse::Drawing::Stroke* stroke = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Stroke::Current(::uPtr< ::uObject*>(enum_123));
            float b = ::uPtr< ::app::Fuse::Drawing::Stroke*>(stroke)->Offset() + ::uPtr< ::app::Fuse::Drawing::Stroke*>(stroke)->Width();

            if (b > 0.0f)
            {
                r = ::app::Uno::Rect__Inflate(NULL, r, b);
            }
        }
    }

    r = ::app::Uno::Rect__Inflate(NULL, r, __this->Smoothness() - 1.0f);
    return r;
}

float Shape__get_DrawCost_1(Shape* __this)
{
    float cost = 0.0f;

    if (__this->HasFills())
    {
        cost = cost + (float)::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Count(::uPtr< ::uObject*>(__this->Fills()));
    }

    if (__this->HasStrokes())
    {
        cost = cost + (float)::app::Uno::Collections::ICollection__Fuse_Drawing_Stroke::Count(::uPtr< ::uObject*>(__this->Strokes()));
    }

    return cost;
}

::app::Fuse::Drawing::Brush* Shape__get_Fill(Shape* __this)
{
    return Shape__GetFill(NULL, __this);
}

::uObject* Shape__get_Fills(Shape* __this)
{
    if (__this->_fills == NULL)
    {
        __this->_fills = ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Drawing_Brush__typeof(), (const void*)Shape__OnFillAdded, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Drawing_Brush__typeof(), (const void*)Shape__OnFillRemoved, __this));
    }

    return (::uObject*)__this->_fills;
}

bool Shape__get_HasFills(Shape* __this)
{
    return (__this->_fills != NULL) && (::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush*>(__this->_fills)->Count() > 0);
}

bool Shape__get_HasStrokes(Shape* __this)
{
    return (__this->_strokes != NULL) && (::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Stroke*>(__this->_strokes)->Count() > 0);
}

float Shape__get_Smoothness(Shape* __this)
{
    return __this->_smoothness;
}

::app::Fuse::Drawing::Stroke* Shape__get_Stroke(Shape* __this)
{
    return Shape__GetStroke(NULL, __this);
}

::uObject* Shape__get_Strokes(Shape* __this)
{
    if (__this->_strokes == NULL)
    {
        __this->_strokes = ::app::Uno::Collections::ObservableList__Fuse_Drawing_Stroke__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Drawing_Stroke__typeof(), (const void*)Shape__OnStrokeAdded, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Drawing_Stroke__typeof(), (const void*)Shape__OnStrokeRemoved, __this));
    }

    return (::uObject*)__this->_strokes;
}

::app::Fuse::Drawing::Brush* Shape__GetFill(::uStatic* __this, Shape* s)
{
    if ((::uPtr< Shape*>(s)->_fills == NULL) || (::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush*>(::uPtr< Shape*>(s)->_fills)->Count() == 0))
    {
        return NULL;
    }
    else
    {
        return ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush*>(::uPtr< Shape*>(s)->_fills)->Item(0);
    }
}

float Shape__GetSmoothness(::uStatic* __this, Shape* s)
{
    return ::uPtr< Shape*>(s)->_smoothness;
}

::app::Fuse::Drawing::Stroke* Shape__GetStroke(::uStatic* __this, Shape* s)
{
    if ((::uPtr< Shape*>(s)->_strokes == NULL) || (::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Stroke*>(::uPtr< Shape*>(s)->_strokes)->Count() == 0))
    {
        return NULL;
    }

    return ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Stroke*>(::uPtr< Shape*>(s)->_strokes)->Item(0);
}

void Shape__OnFillAdded(Shape* __this, ::app::Fuse::Drawing::Brush* f)
{
    if (__this->IsLocalRooted() && (f != NULL))
    {
        ::uPtr< ::app::Fuse::Drawing::Brush*>(f)->Pin();
        __this->AddDrawCost(1.0);
    }

    if (::uIs(f, ::app::Fuse::Drawing::DynamicBrush__typeof()))
    {
        ::uPtr< ::app::Fuse::Drawing::DynamicBrush*>(::uCast< ::app::Fuse::Drawing::DynamicBrush*>(f, ::app::Fuse::Drawing::DynamicBrush__typeof()))->add_ShadingChanged(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Shape__OnShadingChanged, __this));
    }

    __this->OnShadingChanged();
}

void Shape__OnFillRemoved(Shape* __this, ::app::Fuse::Drawing::Brush* f)
{
    if (__this->IsLocalRooted() && (f != NULL))
    {
        ::uPtr< ::app::Fuse::Drawing::Brush*>(f)->Unpin();
        __this->RemoveDrawCost(1.0);
    }

    if (::uIs(f, ::app::Fuse::Drawing::DynamicBrush__typeof()))
    {
        ::uPtr< ::app::Fuse::Drawing::DynamicBrush*>(::uCast< ::app::Fuse::Drawing::DynamicBrush*>(f, ::app::Fuse::Drawing::DynamicBrush__typeof()))->remove_ShadingChanged(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Shape__OnShadingChanged, __this));
    }

    __this->OnShadingChanged();
}

void Shape__OnResetStyle(Shape* __this)
{
    if (__this->_styleFills != NULL)
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Brush*>(__this->_styleFills)->Count(); i++)
        {
            ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Remove(::uPtr< ::uObject*>(__this->Fills()), ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Brush*>(__this->_styleFills)->Item(i));
        }

        __this->_styleFills = NULL;
    }

    if (__this->_styleStrokes != NULL)
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Stroke*>(__this->_styleStrokes)->Count(); i++)
        {
            ::app::Uno::Collections::ICollection__Fuse_Drawing_Stroke::Remove(::uPtr< ::uObject*>(__this->Strokes()), ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Stroke*>(__this->_styleStrokes)->Item(i));
        }

        __this->_styleStrokes = NULL;
    }

    ::app::Fuse::Controls::Panel__OnResetStyle(__this);
}

void Shape__OnRooted(Shape* __this)
{
    ::app::Fuse::Controls::Panel__OnRooted(__this);

    if (__this->HasStrokes())
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Stroke*>(__this->_strokes)->Count(); ++i)
        {
            ::uPtr< ::app::Fuse::Drawing::Stroke*>(::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Stroke*>(__this->_strokes)->Item(i))->Pin();
        }
    }

    if (__this->HasFills())
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush*>(__this->_fills)->Count(); ++i)
        {
            ::uPtr< ::app::Fuse::Drawing::Brush*>(::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush*>(__this->_fills)->Item(i))->Pin();
        }
    }

    __this->AddDrawCost((double)__this->DrawCost_1());
}

void Shape__OnShadingChanged(Shape* __this)
{
    __this->OnShapeChanged();
}

void Shape__OnShapeChanged(Shape* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ShapeChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ShapeChanged)->InvokeVoid();
    }
}

void Shape__OnSmoothnessChanged(::uStatic* __this, Shape* s)
{
    ::uPtr< Shape*>(s)->InvalidateVisual();
    s->InvalidateRenderBounds();
}

void Shape__OnStrokeAdded(Shape* __this, ::app::Fuse::Drawing::Stroke* s)
{
    if (__this->IsLocalRooted() && (s != NULL))
    {
        ::uPtr< ::app::Fuse::Drawing::Stroke*>(s)->Pin();
        __this->AddDrawCost(1.0);
    }

    ::uPtr< ::app::Fuse::Drawing::Stroke*>(s)->add_ShadingChanged(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Shape__OnShadingChanged, __this));
    s->add_StrokeChanged(::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Drawing_Stroke__typeof(), (const void*)Shape__OnStrokeChanged, __this));
    __this->OnStrokeChanged(s);
}

void Shape__OnStrokeChanged(Shape* __this, ::app::Fuse::Drawing::Stroke* s)
{
    __this->OnShapeChanged();
}

void Shape__OnStrokeRemoved(Shape* __this, ::app::Fuse::Drawing::Stroke* s)
{
    if (__this->IsLocalRooted() && (s != NULL))
    {
        ::uPtr< ::app::Fuse::Drawing::Stroke*>(s)->Unpin();
        __this->RemoveDrawCost(1.0);
    }

    ::uPtr< ::app::Fuse::Drawing::Stroke*>(s)->remove_ShadingChanged(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Shape__OnShadingChanged, __this));
    s->remove_StrokeChanged(::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Drawing_Stroke__typeof(), (const void*)Shape__OnStrokeChanged, __this));
    __this->OnStrokeChanged(s);
}

void Shape__OnUnrooted(Shape* __this)
{
    ::app::Fuse::Controls::Panel__OnUnrooted(__this);

    if (__this->HasStrokes())
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Stroke*>(__this->_strokes)->Count(); ++i)
        {
            ::uPtr< ::app::Fuse::Drawing::Stroke*>(::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Stroke*>(__this->_strokes)->Item(i))->Unpin();
        }
    }

    if (__this->HasFills())
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush*>(__this->_fills)->Count(); ++i)
        {
            ::uPtr< ::app::Fuse::Drawing::Brush*>(::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush*>(__this->_fills)->Item(i))->Unpin();
        }
    }

    __this->RemoveDrawCost((double)__this->DrawCost_1());
}

void Shape__PrepareDraw(Shape* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Float2 canvasSize)
{
    if (__this->HasFills())
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush*>(__this->_fills)->Count(); ++i)
        {
            ::uPtr< ::app::Fuse::Drawing::Brush*>(::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush*>(__this->_fills)->Item(i))->Prepare(dc, canvasSize);
        }
    }

    if (__this->HasStrokes())
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Stroke*>(__this->_strokes)->Count(); ++i)
        {
            ::uPtr< ::app::Fuse::Drawing::Stroke*>(::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Stroke*>(__this->_strokes)->Item(i))->Prepare(dc, canvasSize);
        }
    }
}

void Shape__remove_ShapeChanged(Shape* __this, ::uDelegate* value)
{
    __this->ShapeChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->ShapeChanged, (::uDelegate*)value), ::app::Uno::Action__typeof());
}

void Shape__set_Fill(Shape* __this, ::app::Fuse::Drawing::Brush* value)
{
    Shape__SetFill(NULL, __this, value);
}

void Shape__set_Smoothness(Shape* __this, float value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Shape__float*>(Shape__SmoothnessProperty)->Set(__this, value);
}

void Shape__set_Stroke(Shape* __this, ::app::Fuse::Drawing::Stroke* value)
{
    Shape__SetStroke(NULL, __this, value);
}

void Shape__SetFill(::uStatic* __this, Shape* s, ::app::Fuse::Drawing::Brush* value)
{
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Clear(::uPtr< ::uObject*>(::uPtr< Shape*>(s)->Fills()));
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Add(::uPtr< ::uObject*>(s->Fills()), value);
}

void Shape__SetSmoothness(::uStatic* __this, Shape* s, float value)
{
    ::uPtr< Shape*>(s)->_smoothness = value;
}

void Shape__SetStroke(::uStatic* __this, Shape* s, ::app::Fuse::Drawing::Stroke* value)
{
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Stroke::Clear(::uPtr< ::uObject*>(::uPtr< Shape*>(s)->Strokes()));
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Stroke::Add(::uPtr< ::uObject*>(s->Strokes()), value);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Slider__uType* Slider__typeof()
{
    static ::uStaticStrong<Slider__uType*> type;
    if (type != NULL) return type;

    type = (Slider__uType*)::uAllocClassType(sizeof(Slider__uType), "Fuse.Controls.Slider", false, 9, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::RangeControl__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Slider__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(Slider__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(Slider__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(Slider__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(Slider__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(Slider__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(Slider__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(Slider__uType, __interface_7),
        ::app::Fuse::Triggers::IProgress__typeof(), offsetof(Slider__uType, __interface_8));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", Slider__New_2, 0, true, Slider__typeof()));

    ::uRegisterType(type);
    return type;
}

void Slider___ObjInit_5(Slider* __this)
{
    ::app::Fuse::Controls::RangeControl___ObjInit_4(__this);
}

Slider* Slider__New_2(::uStatic* __this)
{
    Slider* inst = (Slider*)::uAllocObject(sizeof(Slider), Slider__typeof());
    inst->_ObjInit_5();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_StackPanel__float*> StackPanel__ItemSpacingProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation*> StackPanel__OrientationProperty;

StackPanel__uType* StackPanel__typeof()
{
    static ::uStaticStrong<StackPanel__uType*> type;
    if (type != NULL) return type;

    type = (StackPanel__uType*)::uAllocClassType(sizeof(StackPanel__uType), "Fuse.Controls.StackPanel", false, 8, 1, 0);

    type->SetBaseType(::app::Fuse::Controls::Panel__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(StackPanel__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(StackPanel__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(StackPanel__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(StackPanel__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(StackPanel__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(StackPanel__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(StackPanel__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(StackPanel__uType, __interface_7));

    type->SetStrongRefs(
        "_stackLayout", offsetof(StackPanel, _stackLayout));

    type->SetFields(3,
        ::uNewField("_stackLayout", NULL, offsetof(StackPanel, _stackLayout), ::app::Fuse::Layouts::StackLayout__typeof()),
        ::uNewField("ItemSpacingProperty", &StackPanel__ItemSpacingProperty, 0, ::app::Fuse::StyleProperty__Fuse_Controls_StackPanel__float__typeof()),
        ::uNewField("OrientationProperty", &StackPanel__OrientationProperty, 0, ::app::Fuse::StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__typeof()));

    type->SetFunctions(7,
        ::uNewFunction("get_ItemSpacing", StackPanel__get_ItemSpacing, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Orientation", StackPanel__get_Orientation, 0, false, ::app::Fuse::Layouts::Orientation__typeof()),
        ::uNewFunction(".ctor", StackPanel__New_2, 0, true, StackPanel__typeof()),
        ::uNewFunctionVoid("OnItemSpacingChanged", StackPanel__OnItemSpacingChanged, 0, true, StackPanel__typeof()),
        ::uNewFunctionVoid("OnOrientationChanged", StackPanel__OnOrientationChanged, 0, true, StackPanel__typeof()),
        ::uNewFunctionVoid("set_ItemSpacing", StackPanel__set_ItemSpacing, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Orientation", StackPanel__set_Orientation, 0, false, ::app::Fuse::Layouts::Orientation__typeof()));

    ::uRegisterType(type);
    return type;
}

void StackPanel___ObjInit_4(StackPanel* __this)
{
    ::app::Fuse::Controls::Panel___ObjInit_3(__this);
    __this->Layout((::app::Fuse::Layouts::Layout*)(__this->_stackLayout = ::app::Fuse::Layouts::StackLayout__New_1(NULL)));
}

void StackPanel___TypeInit_4(::uStatic* __this)
{
    StackPanel__OrientationProperty = ::app::Fuse::StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__New_1(NULL, 1, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_StackPanel__typeof(), (const void*)StackPanel__OnOrientationChanged));
    StackPanel__ItemSpacingProperty = ::app::Fuse::StyleProperty__Fuse_Controls_StackPanel__float__New_1(NULL, 0.0f, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_StackPanel__typeof(), (const void*)StackPanel__OnItemSpacingChanged));
}

float StackPanel__get_ItemSpacing(StackPanel* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_StackPanel__float*>(StackPanel__ItemSpacingProperty)->Get(__this);
}

int StackPanel__get_Orientation(StackPanel* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation*>(StackPanel__OrientationProperty)->Get(__this);
}

StackPanel* StackPanel__New_2(::uStatic* __this)
{
    StackPanel* inst = (StackPanel*)::uAllocObject(sizeof(StackPanel), StackPanel__typeof());
    inst->_ObjInit_4();
    return inst;
}

void StackPanel__OnItemSpacingChanged(::uStatic* __this, StackPanel* p)
{
    ::uPtr< ::app::Fuse::Layouts::StackLayout*>(::uPtr< StackPanel*>(p)->_stackLayout)->ItemSpacing(::uPtr< StackPanel*>(p)->ItemSpacing());
}

void StackPanel__OnOrientationChanged(::uStatic* __this, StackPanel* p)
{
    ::uPtr< ::app::Fuse::Layouts::StackLayout*>(::uPtr< StackPanel*>(p)->_stackLayout)->Orientation(::uPtr< StackPanel*>(p)->Orientation());
}

void StackPanel__set_ItemSpacing(StackPanel* __this, float value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_StackPanel__float*>(StackPanel__ItemSpacingProperty)->Set(__this, value);
}

void StackPanel__set_Orientation(StackPanel* __this, int value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation*>(StackPanel__OrientationProperty)->Set(__this, value);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Star__uType* Star__typeof()
{
    static ::uStaticStrong<Star__uType*> type;
    if (type != NULL) return type;

    type = (Star__uType*)::uAllocClassType(sizeof(Star__uType), "Fuse.Controls.Star", false, 8, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::Shape__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Star__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(Star__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(Star__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(Star__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(Star__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(Star__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(Star__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(Star__uType, __interface_7));

    type->SetFields(4,
        ::uNewField("_degrees", NULL, offsetof(Star, _degrees), ::app::Uno::Float__typeof()),
        ::uNewField("_points", NULL, offsetof(Star, _points), ::app::Uno::Int__typeof()),
        ::uNewField("_ratio", NULL, offsetof(Star, _ratio), ::app::Uno::Float__typeof()),
        ::uNewField("_roundRatio", NULL, offsetof(Star, _roundRatio), ::app::Uno::Float__typeof()));

    type->SetFunctions(10,
        ::uNewFunction("get_Points", Star__get_Points, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Ratio", Star__get_Ratio, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_RotationDegrees", Star__get_RotationDegrees, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_RotationRadians", Star__get_RotationRadians, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_RoundRatio", Star__get_RoundRatio, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", Star__New_2, 0, true, Star__typeof()),
        ::uNewFunctionVoid("set_Points", Star__set_Points, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("set_Ratio", Star__set_Ratio, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_RotationDegrees", Star__set_RotationDegrees, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_RoundRatio", Star__set_RoundRatio, 0, false, ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void Star___ObjInit_5(Star* __this)
{
    __this->_points = 5;
    __this->_ratio = 0.5f;
    __this->_degrees = 0.0f;
    ::app::Fuse::Controls::Shape___ObjInit_4(__this);
}

int Star__get_Points(Star* __this)
{
    return __this->_points;
}

float Star__get_Ratio(Star* __this)
{
    return __this->_ratio;
}

float Star__get_RotationDegrees(Star* __this)
{
    return __this->_degrees;
}

float Star__get_RotationRadians(Star* __this)
{
    return (__this->_degrees / 180.0f) * 3.14159274f;
}

float Star__get_RoundRatio(Star* __this)
{
    return __this->_roundRatio;
}

Star* Star__New_2(::uStatic* __this)
{
    Star* inst = (Star*)::uAllocObject(sizeof(Star), Star__typeof());
    inst->_ObjInit_5();
    return inst;
}

void Star__set_Points(Star* __this, int value)
{
    if (value == __this->_points)
    {
        return;
    }

    __this->_points = value;
    __this->OnShapeChanged();
}

void Star__set_Ratio(Star* __this, float value)
{
    if (value == __this->_ratio)
    {
        return;
    }

    __this->_ratio = value;
    __this->OnShapeChanged();
}

void Star__set_RotationDegrees(Star* __this, float value)
{
    if (value == __this->_degrees)
    {
        return;
    }

    __this->_degrees = value;
    __this->InvalidateVisual();
}

void Star__set_RoundRatio(Star* __this, float value)
{
    if (value == __this->_roundRatio)
    {
        return;
    }

    __this->_roundRatio = value;
    __this->OnShapeChanged();
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StatusBarBackground__uType* StatusBarBackground__typeof()
{
    static ::uStaticStrong<StatusBarBackground__uType*> type;
    if (type != NULL) return type;

    type = (StatusBarBackground__uType*)::uAllocClassType(sizeof(StatusBarBackground__uType), "Fuse.Controls.StatusBarBackground", false, 6, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::TopFrameBackground__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(StatusBarBackground__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(StatusBarBackground__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(StatusBarBackground__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(StatusBarBackground__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(StatusBarBackground__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(StatusBarBackground__uType, __interface_5));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", StatusBarBackground__New_2, 0, true, StatusBarBackground__typeof()));

    ::uRegisterType(type);
    return type;
}

void StatusBarBackground___ObjInit_4(StatusBarBackground* __this)
{
    ::app::Fuse::Controls::TopFrameBackground___ObjInit_3(__this);
}

StatusBarBackground* StatusBarBackground__New_2(::uStatic* __this)
{
    StatusBarBackground* inst = (StatusBarBackground*)::uAllocObject(sizeof(StatusBarBackground), StatusBarBackground__typeof());
    inst->_ObjInit_4();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Switch__uType* Switch__typeof()
{
    static ::uStaticStrong<Switch__uType*> type;
    if (type != NULL) return type;

    type = (Switch__uType*)::uAllocClassType(sizeof(Switch__uType), "Fuse.Controls.Switch", false, 9, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::ToggleControl__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Switch__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(Switch__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(Switch__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(Switch__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(Switch__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(Switch__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(Switch__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(Switch__uType, __interface_7),
        ::app::Fuse::Triggers::IValue__bool__typeof(), offsetof(Switch__uType, __interface_8));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", Switch__New_2, 0, true, Switch__typeof()));

    ::uRegisterType(type);
    return type;
}

void Switch___ObjInit_5(Switch* __this)
{
    ::app::Fuse::Controls::ToggleControl___ObjInit_4(__this);
}

Switch* Switch__New_2(::uStatic* __this)
{
    Switch* inst = (Switch*)::uAllocObject(sizeof(Switch), Switch__typeof());
    inst->_ObjInit_5();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Text__uType* Text__typeof()
{
    static ::uStaticStrong<Text__uType*> type;
    if (type != NULL) return type;

    type = (Text__uType*)::uAllocClassType(sizeof(Text__uType), "Fuse.Controls.Text", false, 8, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::TextBlock__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))Text__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))Text__OnUnrooted;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Text__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(Text__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(Text__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(Text__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(Text__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(Text__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(Text__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(Text__uType, __interface_7));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", Text__New_2, 0, true, Text__typeof()));

    ::uRegisterType(type);
    return type;
}

void Text___ObjInit_6(Text* __this)
{
    ::app::Fuse::Controls::TextBlock___ObjInit_5(__this);
}

Text* Text__New_2(::uStatic* __this)
{
    Text* inst = (Text*)::uAllocObject(sizeof(Text), Text__typeof());
    inst->_ObjInit_6();
    return inst;
}

void Text__OnRooted(Text* __this)
{
    ::app::Fuse::Controls::Panel__OnRooted(__this);
    __this->AddDrawCost(2.0);
}

void Text__OnUnrooted(Text* __this)
{
    __this->RemoveDrawCost(2.0);
    ::app::Fuse::Controls::Panel__OnUnrooted(__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TextBlock__uType* TextBlock__typeof()
{
    static ::uStaticStrong<TextBlock__uType*> type;
    if (type != NULL) return type;

    type = (TextBlock__uType*)::uAllocClassType(sizeof(TextBlock__uType), "Fuse.Controls.TextBlock", false, 8, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::TextControl__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(TextBlock__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(TextBlock__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(TextBlock__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(TextBlock__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(TextBlock__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(TextBlock__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(TextBlock__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(TextBlock__uType, __interface_7));

    ::uRegisterType(type);
    return type;
}

void TextBlock___ObjInit_5(TextBlock* __this)
{
    ::app::Fuse::Controls::TextControl___ObjInit_4(__this);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__Fuse_Font*> TextControl__FontProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__float*> TextControl__FontSizeProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__float*> TextControl__LineSpacingProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment*> TextControl__TextAlignmentProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__float4*> TextControl__TextColorProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping*> TextControl__TextWrappingProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__string*> TextControl__ValueProperty;

TextControl__uType* TextControl__typeof()
{
    static ::uStaticStrong<TextControl__uType*> type;
    if (type != NULL) return type;

    type = (TextControl__uType*)::uAllocClassType(sizeof(TextControl__uType), "Fuse.Controls.TextControl", false, 8, 4, 0);

    type->SetBaseType(::app::Fuse::Controls::Panel__typeof());
    type->__fp_get_RenderValue = TextControl__get_RenderValue;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(TextControl__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(TextControl__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(TextControl__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(TextControl__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(TextControl__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(TextControl__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(TextControl__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(TextControl__uType, __interface_7));

    type->SetStrongRefs(
        "_value", offsetof(TextControl, _value),
        "TextLayoutPropertyChanged", offsetof(TextControl, TextLayoutPropertyChanged),
        "TextRenderPropertyChanged", offsetof(TextControl, TextRenderPropertyChanged),
        "ValueChanged", offsetof(TextControl, ValueChanged));

    type->SetFields(8,
        ::uNewField("_value", NULL, offsetof(TextControl, _value), ::app::Uno::String__typeof()),
        ::uNewField("FontProperty", &TextControl__FontProperty, 0, ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__Fuse_Font__typeof()),
        ::uNewField("FontSizeProperty", &TextControl__FontSizeProperty, 0, ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__float__typeof()),
        ::uNewField("LineSpacingProperty", &TextControl__LineSpacingProperty, 0, ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__float__typeof()),
        ::uNewField("TextAlignmentProperty", &TextControl__TextAlignmentProperty, 0, ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__typeof()),
        ::uNewField("TextColorProperty", &TextControl__TextColorProperty, 0, ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__float4__typeof()),
        ::uNewField("TextWrappingProperty", &TextControl__TextWrappingProperty, 0, ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__typeof()),
        ::uNewField("ValueProperty", &TextControl__ValueProperty, 0, ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__string__typeof()));

    type->SetFunctions(29,
        ::uNewFunctionVoid("add_TextLayoutPropertyChanged", TextControl__add_TextLayoutPropertyChanged, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("add_TextRenderPropertyChanged", TextControl__add_TextRenderPropertyChanged, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("add_ValueChanged", TextControl__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__string__typeof()),
        ::uNewFunction("get_Font", TextControl__get_Font, 0, false, ::app::Fuse::Font__typeof()),
        ::uNewFunction("get_FontSize", TextControl__get_FontSize, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_LineSpacing", TextControl__get_LineSpacing, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_RenderValue", type->__fp_get_RenderValue, offsetof(TextControl__uType, __fp_get_RenderValue), false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_TextAlignment", TextControl__get_TextAlignment, 0, false, ::app::Fuse::Elements::TextAlignment__typeof()),
        ::uNewFunction("get_TextColor", TextControl__get_TextColor, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction("get_TextWrapping", TextControl__get_TextWrapping, 0, false, ::app::Fuse::Elements::TextWrapping__typeof()),
        ::uNewFunction("get_Value", TextControl__get_Value, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("GetValue", TextControl__GetValue, 0, true, ::app::Uno::String__typeof(), TextControl__typeof()),
        ::uNewFunctionVoid("OnTextLayoutPropertyChanged", TextControl__OnTextLayoutPropertyChanged, 0, false),
        ::uNewFunctionVoid("OnTextLayoutPropertyChanged", TextControl__OnTextLayoutPropertyChanged_1, 0, true, TextControl__typeof()),
        ::uNewFunctionVoid("OnTextRenderPropertyChanged", TextControl__OnTextRenderPropertyChanged, 0, false),
        ::uNewFunctionVoid("OnTextRenderPropertyChanged", TextControl__OnTextRenderPropertyChanged_1, 0, true, TextControl__typeof()),
        ::uNewFunctionVoid("OnValueChanged", TextControl__OnValueChanged, 0, false, ::app::Uno::String__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("remove_TextLayoutPropertyChanged", TextControl__remove_TextLayoutPropertyChanged, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("remove_TextRenderPropertyChanged", TextControl__remove_TextRenderPropertyChanged, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", TextControl__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__string__typeof()),
        ::uNewFunctionVoid("set_Font", TextControl__set_Font, 0, false, ::app::Fuse::Font__typeof()),
        ::uNewFunctionVoid("set_FontSize", TextControl__set_FontSize, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_LineSpacing", TextControl__set_LineSpacing, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_TextAlignment", TextControl__set_TextAlignment, 0, false, ::app::Fuse::Elements::TextAlignment__typeof()),
        ::uNewFunctionVoid("set_TextColor", TextControl__set_TextColor, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunctionVoid("set_TextWrapping", TextControl__set_TextWrapping, 0, false, ::app::Fuse::Elements::TextWrapping__typeof()),
        ::uNewFunctionVoid("set_Value", TextControl__set_Value, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("SetValue", TextControl__SetValue, 0, false, ::app::Uno::String__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetValue", TextControl__SetValue_1, 0, true, TextControl__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void TextControl___ObjInit_4(TextControl* __this)
{
    __this->_value = ::uGetConstString("");
    ::app::Fuse::Controls::Panel___ObjInit_3(__this);
}

void TextControl___TypeInit_4(::uStatic* __this)
{
    TextControl__ValueProperty = ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__string__New_2(NULL, ::uGetConstString(""), NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_TextControl__string__typeof(), (const void*)TextControl__SetValue_1), ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Controls_TextControl__string__typeof(), (const void*)TextControl__GetValue));
    TextControl__TextWrappingProperty = ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__New_1(NULL, 0, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_TextControl__typeof(), (const void*)TextControl__OnTextLayoutPropertyChanged_1));
    TextControl__LineSpacingProperty = ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__float__New_1(NULL, 0.0f, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_TextControl__typeof(), (const void*)TextControl__OnTextLayoutPropertyChanged_1));
    TextControl__FontSizeProperty = ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__float__New_1(NULL, 16.0f, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_TextControl__typeof(), (const void*)TextControl__OnTextLayoutPropertyChanged_1));
    TextControl__FontProperty = ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__Fuse_Font__New_1(NULL, ::app::Fuse::Fonts__get_Fallback(NULL), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_TextControl__typeof(), (const void*)TextControl__OnTextLayoutPropertyChanged_1));
    TextControl__TextAlignmentProperty = ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__New_1(NULL, 0, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_TextControl__typeof(), (const void*)TextControl__OnTextLayoutPropertyChanged_1));
    TextControl__TextColorProperty = ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__float4__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 1.0f), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_TextControl__typeof(), (const void*)TextControl__OnTextRenderPropertyChanged_1));
}

void TextControl__add_TextLayoutPropertyChanged(TextControl* __this, ::uDelegate* value)
{
    __this->TextLayoutPropertyChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->TextLayoutPropertyChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void TextControl__add_TextRenderPropertyChanged(TextControl* __this, ::uDelegate* value)
{
    __this->TextRenderPropertyChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->TextRenderPropertyChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void TextControl__add_ValueChanged(TextControl* __this, ::uDelegate* value)
{
    __this->ValueChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ValueChanged, (::uDelegate*)value), ::app::Uno::UX::ValueChangedHandler__string__typeof());
}

::app::Fuse::Font* TextControl__get_Font(TextControl* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__Fuse_Font*>(TextControl__FontProperty)->Get(__this);
}

float TextControl__get_FontSize(TextControl* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__float*>(TextControl__FontSizeProperty)->Get(__this);
}

float TextControl__get_LineSpacing(TextControl* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__float*>(TextControl__LineSpacingProperty)->Get(__this);
}

::uString* TextControl__get_RenderValue(TextControl* __this)
{
    return __this->Value();
}

int TextControl__get_TextAlignment(TextControl* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment*>(TextControl__TextAlignmentProperty)->Get(__this);
}

::app::Uno::Float4 TextControl__get_TextColor(TextControl* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__float4*>(TextControl__TextColorProperty)->Get(__this);
}

int TextControl__get_TextWrapping(TextControl* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping*>(TextControl__TextWrappingProperty)->Get(__this);
}

::uString* TextControl__get_Value(TextControl* __this)
{
    return __this->_value;
}

::uString* TextControl__GetValue(::uStatic* __this, TextControl* t)
{
    return ::uPtr< TextControl*>(t)->_value;
}

void TextControl__OnTextLayoutPropertyChanged(TextControl* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->TextLayoutPropertyChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->TextLayoutPropertyChanged)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

void TextControl__OnTextLayoutPropertyChanged_1(::uStatic* __this, TextControl* t)
{
    ::uPtr< TextControl*>(t)->OnTextLayoutPropertyChanged();
}

void TextControl__OnTextRenderPropertyChanged(TextControl* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->TextRenderPropertyChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->TextRenderPropertyChanged)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

void TextControl__OnTextRenderPropertyChanged_1(::uStatic* __this, TextControl* t)
{
    ::uPtr< TextControl*>(t)->OnTextRenderPropertyChanged();
}

void TextControl__OnValueChanged(TextControl* __this, ::uString* newString, ::uObject* origin)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ValueChanged, NULL))
    {
        ::app::Fuse::Scripting::StringChangedArgs* args = ::app::Fuse::Scripting::StringChangedArgs__New_3(NULL, newString, origin);
        ::uPtr< ::uDelegate*>(__this->ValueChanged)->InvokeVoid< ::uObject*, ::app::Uno::UX::ValueChangedArgs__string*>((::uObject*)__this, (::app::Uno::UX::ValueChangedArgs__string*)args);
    }
}

void TextControl__remove_TextLayoutPropertyChanged(TextControl* __this, ::uDelegate* value)
{
    __this->TextLayoutPropertyChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->TextLayoutPropertyChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void TextControl__remove_TextRenderPropertyChanged(TextControl* __this, ::uDelegate* value)
{
    __this->TextRenderPropertyChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->TextRenderPropertyChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void TextControl__remove_ValueChanged(TextControl* __this, ::uDelegate* value)
{
    __this->ValueChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->ValueChanged, (::uDelegate*)value), ::app::Uno::UX::ValueChangedHandler__string__typeof());
}

void TextControl__set_Font(TextControl* __this, ::app::Fuse::Font* value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__Fuse_Font*>(TextControl__FontProperty)->Set(__this, value);
}

void TextControl__set_FontSize(TextControl* __this, float value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__float*>(TextControl__FontSizeProperty)->Set(__this, value);
}

void TextControl__set_LineSpacing(TextControl* __this, float value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__float*>(TextControl__LineSpacingProperty)->Set(__this, value);
}

void TextControl__set_TextAlignment(TextControl* __this, int value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment*>(TextControl__TextAlignmentProperty)->Set(__this, value);
}

void TextControl__set_TextColor(TextControl* __this, ::app::Uno::Float4 value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__float4*>(TextControl__TextColorProperty)->Set(__this, value);
}

void TextControl__set_TextWrapping(TextControl* __this, int value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping*>(TextControl__TextWrappingProperty)->Set(__this, value);
}

void TextControl__set_Value(TextControl* __this, ::uString* value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__string*>(TextControl__ValueProperty)->Set(__this, (value != NULL) ? value : ::uGetConstString(""));
}

void TextControl__SetValue(TextControl* __this, ::uString* value, ::uObject* origin)
{
    __this->_value = value;
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__string*>(TextControl__ValueProperty)->SetLocalState(__this);
    __this->OnValueChanged(value, origin);
}

void TextControl__SetValue_1(::uStatic* __this, TextControl* t, ::uString* value)
{
    ::uPtr< TextControl*>(t)->_value = value;
    t->OnValueChanged(value, NULL);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__float4*> TextInput__CaretColorProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint*> TextInput__InputHintProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__bool*> TextInput__IsMultilineProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__bool*> TextInput__IsPasswordProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__bool*> TextInput__IsReadOnlyProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__float4*> TextInput__SelectionColorProperty;

TextInput__uType* TextInput__typeof()
{
    static ::uStaticStrong<TextInput__uType*> type;
    if (type != NULL) return type;

    type = (TextInput__uType*)::uAllocClassType(sizeof(TextInput__uType), "Fuse.Controls.TextInput", false, 8, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::TextControl__typeof());
    type->__fp_get_RenderValue = (::uString*(*)(::app::Fuse::Controls::TextControl*))TextInput__get_RenderValue;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(TextInput__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(TextInput__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(TextInput__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(TextInput__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(TextInput__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(TextInput__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(TextInput__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(TextInput__uType, __interface_7));

    type->SetFields(6,
        ::uNewField("CaretColorProperty", &TextInput__CaretColorProperty, 0, ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__float4__typeof()),
        ::uNewField("InputHintProperty", &TextInput__InputHintProperty, 0, ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__typeof()),
        ::uNewField("IsMultilineProperty", &TextInput__IsMultilineProperty, 0, ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__bool__typeof()),
        ::uNewField("IsPasswordProperty", &TextInput__IsPasswordProperty, 0, ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__bool__typeof()),
        ::uNewField("IsReadOnlyProperty", &TextInput__IsReadOnlyProperty, 0, ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__bool__typeof()),
        ::uNewField("SelectionColorProperty", &TextInput__SelectionColorProperty, 0, ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__float4__typeof()));

    type->SetFunctions(13,
        ::uNewFunction("get_CaretColor", TextInput__get_CaretColor, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction("get_InputHint", TextInput__get_InputHint, 0, false, ::app::Uno::Platform::TextInputHint__typeof()),
        ::uNewFunction("get_IsMultiline", TextInput__get_IsMultiline, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsPassword", TextInput__get_IsPassword, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsReadOnly", TextInput__get_IsReadOnly, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_SelectionColor", TextInput__get_SelectionColor, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunction(".ctor", TextInput__New_2, 0, true, TextInput__typeof()),
        ::uNewFunctionVoid("set_CaretColor", TextInput__set_CaretColor, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunctionVoid("set_InputHint", TextInput__set_InputHint, 0, false, ::app::Uno::Platform::TextInputHint__typeof()),
        ::uNewFunctionVoid("set_IsMultiline", TextInput__set_IsMultiline, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_IsPassword", TextInput__set_IsPassword, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_IsReadOnly", TextInput__set_IsReadOnly, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_SelectionColor", TextInput__set_SelectionColor, 0, false, ::app::Uno::Float4__typeof()));

    ::uRegisterType(type);
    return type;
}

void TextInput___ObjInit_5(TextInput* __this)
{
    ::app::Fuse::Controls::TextControl___ObjInit_4(__this);
}

void TextInput___TypeInit_5(::uStatic* __this)
{
    TextInput__IsMultilineProperty = ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__bool__New_1(NULL, false, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_TextInput__typeof(), (const void*)::app::Fuse::Controls::TextControl__OnTextLayoutPropertyChanged_1));
    TextInput__IsPasswordProperty = ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__bool__New_1(NULL, false, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_TextInput__typeof(), (const void*)::app::Fuse::Controls::TextControl__OnTextLayoutPropertyChanged_1));
    TextInput__IsReadOnlyProperty = ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__bool__New_1(NULL, false, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_TextInput__typeof(), (const void*)::app::Fuse::Controls::TextControl__OnTextRenderPropertyChanged_1));
    TextInput__InputHintProperty = ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__New_1(NULL, 0, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_TextInput__typeof(), (const void*)::app::Fuse::Controls::TextControl__OnTextRenderPropertyChanged_1));
    TextInput__CaretColorProperty = ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__float4__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 1.0f), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_TextInput__typeof(), (const void*)::app::Fuse::Controls::TextControl__OnTextRenderPropertyChanged_1));
    TextInput__SelectionColorProperty = ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__float4__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 0.6f, 0.8f, 1.0f, 0.5f), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_TextInput__typeof(), (const void*)::app::Fuse::Controls::TextControl__OnTextRenderPropertyChanged_1));
}

::app::Uno::Float4 TextInput__get_CaretColor(TextInput* __this)
{
    if (::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__float4*>(TextInput__CaretColorProperty)->HasValue(__this))
    {
        return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__float4*>(TextInput__CaretColorProperty)->Get(__this);
    }

    return __this->TextColor();
}

int TextInput__get_InputHint(TextInput* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint*>(TextInput__InputHintProperty)->Get(__this);
}

bool TextInput__get_IsMultiline(TextInput* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__bool*>(TextInput__IsMultilineProperty)->Get(__this);
}

bool TextInput__get_IsPassword(TextInput* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__bool*>(TextInput__IsPasswordProperty)->Get(__this);
}

bool TextInput__get_IsReadOnly(TextInput* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__bool*>(TextInput__IsReadOnlyProperty)->Get(__this);
}

::uString* TextInput__get_RenderValue(TextInput* __this)
{
    if (__this->IsPassword())
    {
        ::uArray* c = ::uNewArray(::app::Uno::Char__typeof(), ::uPtr< ::uString*>(__this->Value())->Length());
        ::uChar replacementChar = 8226;

        for (int i = 0; i < c->Length(); ++i)
        {
            c->Item< ::uChar>(i) = replacementChar;
        }

        return ::uNewStringFromArray(c);
    }

    return __this->Value();
}

::app::Uno::Float4 TextInput__get_SelectionColor(TextInput* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__float4*>(TextInput__SelectionColorProperty)->Get(__this);
}

TextInput* TextInput__New_2(::uStatic* __this)
{
    TextInput* inst = (TextInput*)::uAllocObject(sizeof(TextInput), TextInput__typeof());
    inst->_ObjInit_5();
    return inst;
}

void TextInput__set_CaretColor(TextInput* __this, ::app::Uno::Float4 value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__float4*>(TextInput__CaretColorProperty)->Set(__this, value);
}

void TextInput__set_InputHint(TextInput* __this, int value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint*>(TextInput__InputHintProperty)->Set(__this, value);
}

void TextInput__set_IsMultiline(TextInput* __this, bool value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__bool*>(TextInput__IsMultilineProperty)->Set(__this, value);
}

void TextInput__set_IsPassword(TextInput* __this, bool value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__bool*>(TextInput__IsPasswordProperty)->Set(__this, value);
}

void TextInput__set_IsReadOnly(TextInput* __this, bool value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__bool*>(TextInput__IsReadOnlyProperty)->Set(__this, value);
}

void TextInput__set_SelectionColor(TextInput* __this, ::app::Uno::Float4 value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__float4*>(TextInput__SelectionColorProperty)->Set(__this, value);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Toggle__uType* Toggle__typeof()
{
    static ::uStaticStrong<Toggle__uType*> type;
    if (type != NULL) return type;

    type = (Toggle__uType*)::uAllocClassType(sizeof(Toggle__uType), "Fuse.Controls.Toggle", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Toggle__Perform;

    type->SetStrongRefs(
        "_Target", offsetof(Toggle, _Target));

    type->SetFunctions(4,
        ::uNewFunction("FindTarget", Toggle__FindTarget, 0, false, ::app::Fuse::Triggers::IValue__bool__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction("get_Target", Toggle__get_Target, 0, false, ::app::Fuse::Triggers::IValue__bool__typeof()),
        ::uNewFunction(".ctor", Toggle__New_1, 0, true, Toggle__typeof()),
        ::uNewFunctionVoid("set_Target", Toggle__set_Target, 0, false, ::app::Fuse::Triggers::IValue__bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void Toggle___ObjInit_1(Toggle* __this)
{
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);
}

::uObject* Toggle__FindTarget(Toggle* __this, ::app::Fuse::Node* n)
{
    while (n != NULL)
    {
        ::uObject* iv = ::uAs< ::uObject*>(n, ::app::Fuse::Triggers::IValue__bool__typeof());

        if (iv != NULL)
        {
            return iv;
        }

        n = ::uPtr< ::app::Fuse::Node*>(n)->Parent();
    }

    return NULL;
}

::uObject* Toggle__get_Target(Toggle* __this)
{
    return __this->_Target;
}

Toggle* Toggle__New_1(::uStatic* __this)
{
    Toggle* inst = (Toggle*)::uAllocObject(sizeof(Toggle), Toggle__typeof());
    inst->_ObjInit_1();
    return inst;
}

void Toggle__Perform(Toggle* __this, ::app::Fuse::Node* target)
{
    ::uObject* ind_123 = __this->Target();
    ::uObject* t = (ind_123 != NULL) ? ind_123 : __this->FindTarget(target);

    if (t != NULL)
    {
        ::app::Fuse::Triggers::IValue__bool::Value(::uPtr< ::uObject*>(t), !::app::Fuse::Triggers::IValue__bool::Value(::uPtr< ::uObject*>(t)));
    }
}

void Toggle__set_Target(Toggle* __this, ::uObject* value)
{
    __this->_Target = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_ToggleControl__bool*> ToggleControl__ValueProperty;

ToggleControl__uType* ToggleControl__typeof()
{
    static ::uStaticStrong<ToggleControl__uType*> type;
    if (type != NULL) return type;

    type = (ToggleControl__uType*)::uAllocClassType(sizeof(ToggleControl__uType), "Fuse.Controls.ToggleControl", false, 9, 1, 0);

    type->SetBaseType(::app::Fuse::Controls::Panel__typeof());
    type->__interface_8.__fp_get_Value = (bool(*)(void*))ToggleControl__get_Value;
    type->__interface_8.__fp_set_Value = (void(*)(void*, bool))ToggleControl__set_Value;
    type->__interface_8.__fp_add_ValueChanged = (void(*)(void*, ::uDelegate*))ToggleControl__add_ValueChanged;
    type->__interface_8.__fp_remove_ValueChanged = (void(*)(void*, ::uDelegate*))ToggleControl__remove_ValueChanged;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(ToggleControl__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(ToggleControl__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(ToggleControl__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(ToggleControl__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(ToggleControl__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(ToggleControl__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(ToggleControl__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(ToggleControl__uType, __interface_7),
        ::app::Fuse::Triggers::IValue__bool__typeof(), offsetof(ToggleControl__uType, __interface_8));

    type->SetStrongRefs(
        "ValueChanged", offsetof(ToggleControl, ValueChanged));

    type->SetFields(2,
        ::uNewField("_value", NULL, offsetof(ToggleControl, _value), ::app::Uno::Bool__typeof()),
        ::uNewField("ValueProperty", &ToggleControl__ValueProperty, 0, ::app::Fuse::StyleProperty__Fuse_Controls_ToggleControl__bool__typeof()));

    type->SetFunctions(8,
        ::uNewFunctionVoid("add_ValueChanged", ToggleControl__add_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__bool__typeof()),
        ::uNewFunction("get_Value", ToggleControl__get_Value, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("GetValue", ToggleControl__GetValue, 0, true, ::app::Uno::Bool__typeof(), ToggleControl__typeof()),
        ::uNewFunctionVoid("OnValueChanged", ToggleControl__OnValueChanged, 0, false, ::app::Uno::Bool__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("remove_ValueChanged", ToggleControl__remove_ValueChanged, 0, false, ::app::Uno::UX::ValueChangedHandler__bool__typeof()),
        ::uNewFunctionVoid("set_Value", ToggleControl__set_Value, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("SetValue", ToggleControl__SetValue, 0, false, ::app::Uno::Bool__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("SetValue", ToggleControl__SetValue_1, 0, true, ToggleControl__typeof(), ::app::Uno::Bool__typeof()));

    ::uRegisterType(type);
    return type;
}

void ToggleControl___ObjInit_4(ToggleControl* __this)
{
    ::app::Fuse::Controls::Panel___ObjInit_3(__this);
}

void ToggleControl___TypeInit_4(::uStatic* __this)
{
    ToggleControl__ValueProperty = ::app::Fuse::StyleProperty__Fuse_Controls_ToggleControl__bool__New_2(NULL, false, NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_ToggleControl__bool__typeof(), (const void*)ToggleControl__SetValue_1), ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Controls_ToggleControl__bool__typeof(), (const void*)ToggleControl__GetValue));
}

void ToggleControl__add_ValueChanged(ToggleControl* __this, ::uDelegate* value)
{
    __this->ValueChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ValueChanged, (::uDelegate*)value), ::app::Uno::UX::ValueChangedHandler__bool__typeof());
}

bool ToggleControl__get_Value(ToggleControl* __this)
{
    return __this->_value;
}

bool ToggleControl__GetValue(::uStatic* __this, ToggleControl* s)
{
    return ::uPtr< ToggleControl*>(s)->_value;
}

void ToggleControl__OnValueChanged(ToggleControl* __this, bool value, ::uObject* origin)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ValueChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ValueChanged)->InvokeVoid< ::uObject*, ::app::Uno::UX::ValueChangedArgs__bool*>((::uObject*)__this, (::app::Uno::UX::ValueChangedArgs__bool*)::app::Fuse::Scripting::BoolChangedArgs__New_3(NULL, value, origin));
    }
}

void ToggleControl__remove_ValueChanged(ToggleControl* __this, ::uDelegate* value)
{
    __this->ValueChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->ValueChanged, (::uDelegate*)value), ::app::Uno::UX::ValueChangedHandler__bool__typeof());
}

void ToggleControl__set_Value(ToggleControl* __this, bool value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_ToggleControl__bool*>(ToggleControl__ValueProperty)->Set(__this, value);
}

void ToggleControl__SetValue(ToggleControl* __this, bool value, ::uObject* origin)
{
    __this->_value = value;
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_ToggleControl__bool*>(ToggleControl__ValueProperty)->SetLocalState(__this);
    __this->OnValueChanged(value, origin);
}

void ToggleControl__SetValue_1(::uStatic* __this, ToggleControl* s, bool value)
{
    ::uPtr< ToggleControl*>(s)->_value = value;
    s->OnValueChanged(value, NULL);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TopFrameBackground__uType* TopFrameBackground__typeof()
{
    static ::uStaticStrong<TopFrameBackground__uType*> type;
    if (type != NULL) return type;

    type = (TopFrameBackground__uType*)::uAllocClassType(sizeof(TopFrameBackground__uType), "Fuse.Controls.TopFrameBackground", false, 6, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::Control__typeof());
    type->__fp_GetContentSize = (::app::Uno::Float2(*)(::app::Fuse::Elements::Element*, ::app::Uno::Float2, int))TopFrameBackground__GetContentSize;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))TopFrameBackground__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))TopFrameBackground__OnUnrooted;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(TopFrameBackground__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(TopFrameBackground__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(TopFrameBackground__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(TopFrameBackground__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(TopFrameBackground__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(TopFrameBackground__uType, __interface_5));

    type->SetFunctions(2,
        ::uNewFunction(".ctor", TopFrameBackground__New_1, 0, true, TopFrameBackground__typeof()),
        ::uNewFunctionVoid("OnFrameResized", TopFrameBackground__OnFrameResized, 0, false, ::uObject__typeof(), ::app::Uno::Platform::SystemUIWillResizeEventArgs__typeof()));

    ::uRegisterType(type);
    return type;
}

void TopFrameBackground___ObjInit_3(TopFrameBackground* __this)
{
    ::app::Fuse::Controls::Control___ObjInit_2(__this);
}

::app::Uno::Float2 TopFrameBackground__GetContentSize(TopFrameBackground* __this, ::app::Uno::Float2 fillSize, int fillSet)
{
    {
        float density = ::uPtr< ::app::Uno::Platform2::Display*>(::app::Uno::Platform2::Display__get_MainDisplay(NULL))->Density();
        ::app::Uno::Float2 x = ::app::Uno::Float2__op_Division_2(NULL, ::app::Uno::Platform::SystemUI__get_TopFrame(NULL).Size(), ::app::Uno::Float2__New_1(NULL, __this->AbsoluteZoom()));
        return x;
    }

    return ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f);
}

TopFrameBackground* TopFrameBackground__New_1(::uStatic* __this)
{
    TopFrameBackground* inst = (TopFrameBackground*)::uAllocObject(sizeof(TopFrameBackground), TopFrameBackground__typeof());
    inst->_ObjInit_3();
    return inst;
}

void TopFrameBackground__OnFrameResized(TopFrameBackground* __this, ::uObject* sender, ::app::Uno::Platform::SystemUIWillResizeEventArgs* args)
{
    __this->InvalidateLayout(2);
}

void TopFrameBackground__OnRooted(TopFrameBackground* __this)
{
    ::app::Fuse::Controls::Control__OnRooted(__this);
    ::app::Uno::Platform::SystemUI__add_TopFrameWillResize(NULL, ::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform_SystemUIWillResizeEventArgs__typeof(), (const void*)TopFrameBackground__OnFrameResized, __this));
}

void TopFrameBackground__OnUnrooted(TopFrameBackground* __this)
{
    ::app::Fuse::Controls::Control__OnUnrooted(__this);
    ::app::Uno::Platform::SystemUI__remove_TopFrameWillResize(NULL, ::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform_SystemUIWillResizeEventArgs__typeof(), (const void*)TopFrameBackground__OnFrameResized, __this));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Viewbox__uType* Viewbox__typeof()
{
    static ::uStaticStrong<Viewbox__uType*> type;
    if (type != NULL) return type;

    type = (Viewbox__uType*)::uAllocClassType(sizeof(Viewbox__uType), "Fuse.Controls.Viewbox", false, 6, 1, 0);

    type->SetBaseType(::app::Fuse::Controls::ContentControl__typeof());
    type->__fp_ArrangePaddingBox = (void(*)(::app::Fuse::Elements::Element*, ::app::Uno::Float2))Viewbox__ArrangePaddingBox;
    type->__fp_GetContentSize = (::app::Uno::Float2(*)(::app::Fuse::Elements::Element*, ::app::Uno::Float2, int))Viewbox__GetContentSize;
    type->__fp_OnApplyStyle = (void(*)(::app::Fuse::Node*, ::uObject*))Viewbox__OnApplyStyle;
    type->__fp_PrependImplicitTransform = (void(*)(::app::Fuse::Node*, ::app::Fuse::FastMatrix*))Viewbox__PrependImplicitTransform;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Viewbox__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(Viewbox__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(Viewbox__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(Viewbox__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(Viewbox__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(Viewbox__uType, __interface_5));

    type->SetStrongRefs(
        "sizing", offsetof(Viewbox, sizing));

    type->SetFields(2,
        ::uNewField("_scale", NULL, offsetof(Viewbox, _scale), ::app::Uno::Float2__typeof()),
        ::uNewField("sizing", NULL, offsetof(Viewbox, sizing), ::app::Fuse::Internal::SizingContainer__typeof()));

    type->SetFunctions(9,
        ::uNewFunction("get_Content", Viewbox__get_Content_1, 0, false, ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction("get_StretchDirection", Viewbox__get_StretchDirection, 0, false, ::app::Fuse::Elements::StretchDirection__typeof()),
        ::uNewFunction("get_StretchMode", Viewbox__get_StretchMode, 0, false, ::app::Fuse::Elements::StretchMode__typeof()),
        ::uNewFunction("GetNaturalContentSize", Viewbox__GetNaturalContentSize, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction(".ctor", Viewbox__New_2, 0, true, Viewbox__typeof()),
        ::uNewFunctionVoid("OnSizingChanged", Viewbox__OnSizingChanged, 0, false),
        ::uNewFunctionVoid("set_Content", Viewbox__set_Content_1, 0, false, ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunctionVoid("set_StretchDirection", Viewbox__set_StretchDirection, 0, false, ::app::Fuse::Elements::StretchDirection__typeof()),
        ::uNewFunctionVoid("set_StretchMode", Viewbox__set_StretchMode, 0, false, ::app::Fuse::Elements::StretchMode__typeof()));

    ::uRegisterType(type);
    return type;
}

void Viewbox___ObjInit_4(Viewbox* __this)
{
    __this->sizing = ::app::Fuse::Internal::SizingContainer__New_1(NULL);
    __this->_scale = ::app::Uno::Float2__New_1(NULL, 1.0f);
    ::app::Fuse::Controls::ContentControl___ObjInit_3(__this);
}

void Viewbox__ArrangePaddingBox(Viewbox* __this, ::app::Uno::Float2 size)
{
    ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->sizing)->padding = __this->Padding();

    if (__this->Content_1() != NULL)
    {
        ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->sizing)->align = ::uPtr< ::app::Fuse::Elements::Element*>(__this->Content_1())->Alignment();
    }

    ::app::Uno::Float2 contentDesiredSize = __this->GetNaturalContentSize();
    __this->_scale = ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->sizing)->CalcScale(size, contentDesiredSize);
    __this->InvalidateLocalTransform();
    ::app::Uno::Float2 origin = ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->sizing)->CalcOrigin(size, ::app::Uno::Float2__op_Multiply_2(NULL, contentDesiredSize, __this->_scale));

    if ((__this->_scale.X > 1e-05f) && (__this->_scale.Y > 1e-05f))
    {
        origin = ::app::Uno::Float2__op_Division_2(NULL, origin, __this->_scale);
    }

    if (__this->Content_1() != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::Element*>(__this->Content_1())->ArrangeMarginBox(origin, contentDesiredSize, 3);
    }
}

::app::Fuse::Elements::Element* Viewbox__get_Content_1(Viewbox* __this)
{
    return ::uAs< ::app::Fuse::Elements::Element*>(::app::Fuse::Controls::ContentControl__get_Content(__this), ::app::Fuse::Elements::Element__typeof());
}

int Viewbox__get_StretchDirection(Viewbox* __this)
{
    return ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->sizing)->stretchDirection;
}

int Viewbox__get_StretchMode(Viewbox* __this)
{
    return ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->sizing)->stretchMode;
}

::app::Uno::Float2 Viewbox__GetContentSize(Viewbox* __this, ::app::Uno::Float2 fillSize, int fillSet)
{
    ::app::Uno::Float2 natural = __this->GetNaturalContentSize();
    ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->sizing)->padding = ::app::Uno::Float4__New_1(NULL, 0.0f);
    ::app::Uno::Float2 r = ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->sizing)->ExpandFillSize(natural, fillSize, fillSet);
    return r;
}

::app::Uno::Float2 Viewbox__GetNaturalContentSize(Viewbox* __this)
{
    return (__this->Content_1() == NULL) ? ::app::Uno::Float2__New_1(NULL, 0.0f) : ::uPtr< ::app::Fuse::Elements::Element*>(__this->Content_1())->GetMarginSize(::app::Uno::Float2__New_1(NULL, 0.0f), 0);
}

Viewbox* Viewbox__New_2(::uStatic* __this)
{
    Viewbox* inst = (Viewbox*)::uAllocObject(sizeof(Viewbox), Viewbox__typeof());
    inst->_ObjInit_4();
    return inst;
}

void Viewbox__OnApplyStyle(Viewbox* __this, ::uObject* target)
{
    ::app::Fuse::Node__OnApplyStyle(__this, target);
    ::app::Fuse::Elements::Element* elm = __this->Content_1();

    if (target != elm)
    {
        return;
    }

    if (!::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__MaxWidthProperty)->HasValue(elm))
    {
        ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__MaxWidthProperty)->SetStyle_1(elm, FLT_INF, 1);
    }

    if (!::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__MaxHeightProperty)->HasValue(elm))
    {
        ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__MaxHeightProperty)->SetStyle_1(elm, FLT_INF, 1);
    }
}

void Viewbox__OnSizingChanged(Viewbox* __this)
{
    __this->InvalidateLayout(2);
    __this->InvalidateVisualComposition();
}

void Viewbox__PrependImplicitTransform(Viewbox* __this, ::app::Fuse::FastMatrix* m)
{
    ::app::Fuse::Elements::Element__PrependImplicitTransform(__this, m);

    if (::app::Uno::Vector__Length(NULL, __this->_scale) > 1e-05f)
    {
        ::uPtr< ::app::Fuse::FastMatrix*>(m)->PrependScale_1(::app::Uno::Float3__New_2(NULL, __this->_scale.X, __this->_scale.Y, 1.0f));
    }
}

void Viewbox__set_Content_1(Viewbox* __this, ::app::Fuse::Elements::Element* value)
{
    ::app::Fuse::Controls::ContentControl__set_Content(__this, (::app::Fuse::Node*)value);
}

void Viewbox__set_StretchDirection(Viewbox* __this, int value)
{
    if (::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->sizing)->SetStretchDirection(value))
    {
        __this->OnSizingChanged();
    }
}

void Viewbox__set_StretchMode(Viewbox* __this, int value)
{
    if (::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->sizing)->SetStretchMode(value))
    {
        __this->OnSizingChanged();
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WebView__uType* WebView__typeof()
{
    static ::uStaticStrong<WebView__uType*> type;
    if (type != NULL) return type;

    type = (WebView__uType*)::uAllocClassType(sizeof(WebView__uType), "Fuse.Controls.WebView", false, 11, 3, 0);

    type->SetBaseType(::app::Fuse::Controls::Panel__typeof());
    type->__interface_8.__fp_get_Url = (::uString*(*)(void*))WebView__get_Url;
    type->__interface_8.__fp_set_Url = (void(*)(void*, ::uString*))WebView__set_Url;
    type->__interface_8.__fp_get_DocumentTitle = (::uString*(*)(void*))WebView__get_DocumentTitle;
    type->__interface_8.__fp_get_File = (::app::Uno::UX::FileSource*(*)(void*))WebView__get_File;
    type->__interface_8.__fp_set_File = (void(*)(void*, ::app::Uno::UX::FileSource*))WebView__set_File;
    type->__interface_9.__fp_get_Progress = (double(*)(void*))WebView__get_Progress;
    type->__interface_9.__fp_add_ProgressChanged = (void(*)(void*, ::uDelegate*))WebView__add_ProgressChanged;
    type->__interface_9.__fp_remove_ProgressChanged = (void(*)(void*, ::uDelegate*))WebView__remove_ProgressChanged;
    type->__interface_10.__fp_GoBack = (void(*)(void*))WebView__GoBack;
    type->__interface_10.__fp_GoForward = (void(*)(void*))WebView__GoForward;
    type->__interface_10.__fp_Reload = (void(*)(void*))WebView__Reload;
    type->__interface_10.__fp_Stop = (void(*)(void*))WebView__Stop;
    type->__interface_10.__fp_LoadUrl = (void(*)(void*, ::uString*))WebView__LoadUrl;
    type->__interface_10.__fp_get_CanGoBack = (bool(*)(void*))WebView__get_CanGoBack;
    type->__interface_10.__fp_get_CanGoForward = (bool(*)(void*))WebView__get_CanGoForward;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(WebView__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(WebView__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(WebView__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(WebView__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(WebView__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(WebView__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(WebView__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(WebView__uType, __interface_7),
        ::app::Fuse::Controls::IWebView__typeof(), offsetof(WebView__uType, __interface_8),
        ::app::Fuse::Triggers::IProgress__typeof(), offsetof(WebView__uType, __interface_9),
        ::app::Fuse::Navigation::IWebViewNavgation__typeof(), offsetof(WebView__uType, __interface_10));

    type->SetStrongRefs(
        "_fallbackClient", offsetof(WebView, _fallbackClient),
        "_webViewClient", offsetof(WebView, _webViewClient),
        "ProgressChanged", offsetof(WebView, ProgressChanged));

    type->SetFields(2,
        ::uNewField("_fallbackClient", NULL, offsetof(WebView, _fallbackClient), ::app::Fuse::Controls::IWebView__typeof()),
        ::uNewField("_webViewClient", NULL, offsetof(WebView, _webViewClient), ::app::Fuse::Controls::IWebView__typeof()));

    type->SetFunctions(19,
        ::uNewFunctionVoid("add_ProgressChanged", WebView__add_ProgressChanged, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunction("get_CanGoBack", WebView__get_CanGoBack, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_CanGoForward", WebView__get_CanGoForward, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_DocumentTitle", WebView__get_DocumentTitle, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_File", WebView__get_File, 0, false, ::app::Uno::UX::FileSource__typeof()),
        ::uNewFunction("get_Progress", WebView__get_Progress, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction("get_Url", WebView__get_Url, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_WebViewClient", WebView__get_WebViewClient, 0, false, ::app::Fuse::Controls::IWebView__typeof()),
        ::uNewFunctionVoid("GoBack", WebView__GoBack, 0, false),
        ::uNewFunctionVoid("GoForward", WebView__GoForward, 0, false),
        ::uNewFunctionVoid("LoadUrl", WebView__LoadUrl, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction(".ctor", WebView__New_2, 0, true, WebView__typeof()),
        ::uNewFunctionVoid("OnProgressChanged", WebView__OnProgressChanged, 0, false, ::uObject__typeof(), ::app::Uno::EventArgs__typeof()),
        ::uNewFunctionVoid("Reload", WebView__Reload, 0, false),
        ::uNewFunctionVoid("remove_ProgressChanged", WebView__remove_ProgressChanged, 0, false, ::app::Uno::EventHandler__typeof()),
        ::uNewFunctionVoid("set_File", WebView__set_File, 0, false, ::app::Uno::UX::FileSource__typeof()),
        ::uNewFunctionVoid("set_Url", WebView__set_Url, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_WebViewClient", WebView__set_WebViewClient, 0, false, ::app::Fuse::Controls::IWebView__typeof()),
        ::uNewFunctionVoid("Stop", WebView__Stop, 0, false));

    ::uRegisterType(type);
    return type;
}

void WebView___ObjInit_4(WebView* __this)
{
    __this->_fallbackClient = (::uObject*)::app::Fuse::Controls::FallbackWebViewClient__New_1(NULL);
    ::app::Fuse::Controls::Panel___ObjInit_3(__this);
    __this->WebViewClient(__this->_fallbackClient);
}

void WebView__add_ProgressChanged(WebView* __this, ::uDelegate* value)
{
    __this->ProgressChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ProgressChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

bool WebView__get_CanGoBack(WebView* __this)
{
    return ::app::Fuse::Navigation::IWebViewNavgation::CanGoBack(::uPtr< ::uObject*>(__this->WebViewClient()));
}

bool WebView__get_CanGoForward(WebView* __this)
{
    return ::app::Fuse::Navigation::IWebViewNavgation::CanGoForward(::uPtr< ::uObject*>(__this->WebViewClient()));
}

::uString* WebView__get_DocumentTitle(WebView* __this)
{
    return ::app::Fuse::Controls::IWebView::DocumentTitle(::uPtr< ::uObject*>(__this->WebViewClient()));
}

::app::Uno::UX::FileSource* WebView__get_File(WebView* __this)
{
    return ::app::Fuse::Controls::IWebView::File(::uPtr< ::uObject*>(__this->WebViewClient()));
}

double WebView__get_Progress(WebView* __this)
{
    return ::app::Fuse::Triggers::IProgress::Progress(::uPtr< ::uObject*>(__this->WebViewClient()));
}

::uString* WebView__get_Url(WebView* __this)
{
    return ::app::Fuse::Controls::IWebView::Url(::uPtr< ::uObject*>(__this->WebViewClient()));
}

::uObject* WebView__get_WebViewClient(WebView* __this)
{
    ::uObject* ind_123 = __this->_webViewClient;
    return (ind_123 != NULL) ? ind_123 : __this->_fallbackClient;
}

void WebView__GoBack(WebView* __this)
{
    ::app::Fuse::Navigation::IWebViewNavgation::GoBack(::uPtr< ::uObject*>(__this->WebViewClient()));
}

void WebView__GoForward(WebView* __this)
{
    ::app::Fuse::Navigation::IWebViewNavgation::GoForward(::uPtr< ::uObject*>(__this->WebViewClient()));
}

void WebView__LoadUrl(WebView* __this, ::uString* url)
{
    ::app::Fuse::Navigation::IWebViewNavgation::LoadUrl(::uPtr< ::uObject*>(__this->WebViewClient()), url);
}

WebView* WebView__New_2(::uStatic* __this)
{
    WebView* inst = (WebView*)::uAllocObject(sizeof(WebView), WebView__typeof());
    inst->_ObjInit_4();
    return inst;
}

void WebView__OnProgressChanged(WebView* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ProgressChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ProgressChanged)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

void WebView__Reload(WebView* __this)
{
    ::app::Fuse::Navigation::IWebViewNavgation::Reload(::uPtr< ::uObject*>(__this->WebViewClient()));
}

void WebView__remove_ProgressChanged(WebView* __this, ::uDelegate* value)
{
    __this->ProgressChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->ProgressChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void WebView__set_File(WebView* __this, ::app::Uno::UX::FileSource* value)
{
    ::app::Fuse::Controls::IWebView::File(::uPtr< ::uObject*>(__this->WebViewClient()), value);
}

void WebView__set_Url(WebView* __this, ::uString* value)
{
    ::app::Fuse::Controls::IWebView::Url(::uPtr< ::uObject*>(__this->WebViewClient()), value);
}

void WebView__set_WebViewClient(WebView* __this, ::uObject* value)
{
    ::uString* url = ::uGetConstString("about:blank");
    ::app::Uno::UX::FileSource* file = NULL;

    if (__this->_webViewClient != NULL)
    {
        ::app::Fuse::Triggers::IProgress::remove_ProgressChanged(::uPtr< ::uObject*>(__this->_webViewClient), ::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)WebView__OnProgressChanged, __this));
        url = ::app::Fuse::Controls::IWebView::Url(::uPtr< ::uObject*>(__this->_webViewClient));
        file = ::app::Fuse::Controls::IWebView::File(::uPtr< ::uObject*>(__this->_webViewClient));
    }

    __this->_webViewClient = (value != NULL) ? value : __this->_fallbackClient;

    if (__this->_webViewClient != NULL)
    {
        ::app::Fuse::Triggers::IProgress::add_ProgressChanged(::uPtr< ::uObject*>(__this->_webViewClient), ::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)WebView__OnProgressChanged, __this));
        ::app::Fuse::Controls::IWebView::Url(::uPtr< ::uObject*>(__this->_webViewClient), url);
        ::app::Fuse::Controls::IWebView::File(::uPtr< ::uObject*>(__this->_webViewClient), file);
    }
}

void WebView__Stop(WebView* __this)
{
    ::app::Fuse::Navigation::IWebViewNavgation::Stop(::uPtr< ::uObject*>(__this->WebViewClient()));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WrapPanel__uType* WrapPanel__typeof()
{
    static ::uStaticStrong<WrapPanel__uType*> type;
    if (type != NULL) return type;

    type = (WrapPanel__uType*)::uAllocClassType(sizeof(WrapPanel__uType), "Fuse.Controls.WrapPanel", false, 8, 1, 0);

    type->SetBaseType(::app::Fuse::Controls::Panel__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(WrapPanel__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(WrapPanel__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(WrapPanel__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(WrapPanel__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(WrapPanel__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(WrapPanel__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(WrapPanel__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(WrapPanel__uType, __interface_7));

    type->SetStrongRefs(
        "_wrapLayout", offsetof(WrapPanel, _wrapLayout));

    type->SetFields(1,
        ::uNewField("_wrapLayout", NULL, offsetof(WrapPanel, _wrapLayout), ::app::Fuse::Layouts::WrapLayout__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("get_FlowDirection", WrapPanel__get_FlowDirection, 0, false, ::app::Fuse::Layouts::FlowDirection__typeof()),
        ::uNewFunction("get_ID", WrapPanel__get_ID, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_ItemHeight", WrapPanel__get_ItemHeight, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_ItemWidth", WrapPanel__get_ItemWidth, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_Orientation", WrapPanel__get_Orientation, 0, false, ::app::Fuse::Layouts::Orientation__typeof()),
        ::uNewFunction(".ctor", WrapPanel__New_2, 0, true, WrapPanel__typeof()),
        ::uNewFunctionVoid("set_FlowDirection", WrapPanel__set_FlowDirection, 0, false, ::app::Fuse::Layouts::FlowDirection__typeof()),
        ::uNewFunctionVoid("set_ID", WrapPanel__set_ID, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunctionVoid("set_ItemHeight", WrapPanel__set_ItemHeight, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_ItemWidth", WrapPanel__set_ItemWidth, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Orientation", WrapPanel__set_Orientation, 0, false, ::app::Fuse::Layouts::Orientation__typeof()));

    ::uRegisterType(type);
    return type;
}

void WrapPanel___ObjInit_4(WrapPanel* __this)
{
    ::app::Fuse::Controls::Panel___ObjInit_3(__this);
    __this->Layout((::app::Fuse::Layouts::Layout*)(__this->_wrapLayout = ::app::Fuse::Layouts::WrapLayout__New_1(NULL)));
}

int WrapPanel__get_FlowDirection(WrapPanel* __this)
{
    return ::uPtr< ::app::Fuse::Layouts::WrapLayout*>(__this->_wrapLayout)->FlowDirection();
}

::uString* WrapPanel__get_ID(WrapPanel* __this)
{
    return ::uPtr< ::app::Fuse::Layouts::WrapLayout*>(__this->_wrapLayout)->ID();
}

float WrapPanel__get_ItemHeight(WrapPanel* __this)
{
    return ::uPtr< ::app::Fuse::Layouts::WrapLayout*>(__this->_wrapLayout)->ItemHeight();
}

float WrapPanel__get_ItemWidth(WrapPanel* __this)
{
    return ::uPtr< ::app::Fuse::Layouts::WrapLayout*>(__this->_wrapLayout)->ItemWidth();
}

int WrapPanel__get_Orientation(WrapPanel* __this)
{
    return ::uPtr< ::app::Fuse::Layouts::WrapLayout*>(__this->_wrapLayout)->Orientation();
}

WrapPanel* WrapPanel__New_2(::uStatic* __this)
{
    WrapPanel* inst = (WrapPanel*)::uAllocObject(sizeof(WrapPanel), WrapPanel__typeof());
    inst->_ObjInit_4();
    return inst;
}

void WrapPanel__set_FlowDirection(WrapPanel* __this, int value)
{
    ::uPtr< ::app::Fuse::Layouts::WrapLayout*>(__this->_wrapLayout)->FlowDirection(value);
}

void WrapPanel__set_ID(WrapPanel* __this, ::uString* value)
{
    ::uPtr< ::app::Fuse::Layouts::WrapLayout*>(__this->_wrapLayout)->ID(value);
}

void WrapPanel__set_ItemHeight(WrapPanel* __this, float value)
{
    ::uPtr< ::app::Fuse::Layouts::WrapLayout*>(__this->_wrapLayout)->ItemHeight(value);
}

void WrapPanel__set_ItemWidth(WrapPanel* __this, float value)
{
    ::uPtr< ::app::Fuse::Layouts::WrapLayout*>(__this->_wrapLayout)->ItemWidth(value);
}

void WrapPanel__set_Orientation(WrapPanel* __this, int value)
{
    ::uPtr< ::app::Fuse::Layouts::WrapLayout*>(__this->_wrapLayout)->Orientation(value);
}

}}}
