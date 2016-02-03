// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Animations.AnimationVariant.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.IResizeMode.h>
#include <Fuse.Animations.Nothing.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TriggerAnimation.h>
#include <Fuse.Animations.TriggerAnimationState.h>
#include <Fuse.Animations.TriggerAnimationState.SeekFlags.h>
#include <Fuse.BeginRemoveArgs.h>
#include <Fuse.BeginRemoveHandler.h>
#include <Fuse.Behavior.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.IWebView.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.TextEdit.h>
#include <Fuse.Controls.TextInputActionArgs.h>
#include <Fuse.Controls.TextInputActionHandler.h>
#include <Fuse.Controls.TextInputActionType.h>
#include <Fuse.Controls.WebView.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.PreplacementArgs.h>
#include <Fuse.Elements.PreplacementHandler.h>
#include <Fuse.Gestures.ScrollDirections.h>
#include <Fuse.Input.Focus.h>
#include <Fuse.Input.FocusGainedArgs.h>
#include <Fuse.Input.FocusGainedHandler.h>
#include <Fuse.Input.FocusLostArgs.h>
#include <Fuse.Input.FocusLostHandler.h>
#include <Fuse.IScalingMode.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.IViewport.h>
#include <Fuse.Node.h>
#include <Fuse.NodeEvent-2.h>
#include <Fuse.NodeEventArgs.h>
#include <Fuse.NodeEventHandler.h>
#include <Fuse.PlacedArgs.h>
#include <Fuse.PlacedHandler.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.RootViewport.h>
#include <Fuse.Scaling.h>
#include <Fuse.Transform.h>
#include <Fuse.TransformModeFlags.h>
#include <Fuse.Translation.h>
#include <Fuse.Triggers.Actions.Callback.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.Actions.TriggerDirection.h>
#include <Fuse.Triggers.AddingAnimation.h>
#include <Fuse.Triggers.Android.h>
#include <Fuse.Triggers.ContainingText.h>
#include <Fuse.Triggers.IAddRemove-1.h>
#include <Fuse.Triggers.IMediaPlayback.h>
#include <Fuse.Triggers.iOS.h>
#include <Fuse.Triggers.IPlayback.h>
#include <Fuse.Triggers.IProgress.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Fuse.Triggers.IVisibility.h>
#include <Fuse.Triggers.LayoutAnimation.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.LayoutTransition.PositionChangeMode.h>
#include <Fuse.Triggers.LayoutTransition.ResizeChangeMode.h>
#include <Fuse.Triggers.LayoutTransition.ScaleChangeMode.h>
#include <Fuse.Triggers.LayoutTransition.WorldPositionChangeMode.h>
#include <Fuse.Triggers.LayoutTransitioned.h>
#include <Fuse.Triggers.LayoutTransitionedArgs.h>
#include <Fuse.Triggers.LayoutTransitionedHandler.h>
#include <Fuse.Triggers.OnBackButton.h>
#include <Fuse.Triggers.OnKeyPress.h>
#include <Fuse.Triggers.OnUserEvent.h>
#include <Fuse.Triggers.OnUserEventFilter.h>
#include <Fuse.Triggers.PageBeginLoading.h>
#include <Fuse.Triggers.PageLoaded.h>
#include <Fuse.Triggers.ProgressAnimation.h>
#include <Fuse.Triggers.PullToReload.h>
#include <Fuse.Triggers.RemovingAnimation.h>
#include <Fuse.Triggers.ScrollingAnimation.h>
#include <Fuse.Triggers.ScrollingAnimationRange.h>
#include <Fuse.Triggers.State.h>
#include <Fuse.Triggers.StateGroup.h>
#include <Fuse.Triggers.StateTransition.h>
#include <Fuse.Triggers.TextInputActionTriggered.h>
#include <Fuse.Triggers.Timeline.h>
#include <Fuse.Triggers.Timeline.State.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.TriggerBypassMode.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileCompleted.h>
#include <Fuse.Triggers.WhileContainsText.h>
#include <Fuse.Triggers.WhileDisabled.h>
#include <Fuse.Triggers.WhileEnabled.h>
#include <Fuse.Triggers.WhileEnabledDisabledTrigger.h>
#include <Fuse.Triggers.WhileFailed.h>
#include <Fuse.Triggers.WhileFalse.h>
#include <Fuse.Triggers.WhileFloat.h>
#include <Fuse.Triggers.WhileFloat.Range.h>
#include <Fuse.Triggers.WhileFocused.h>
#include <Fuse.Triggers.WhileFocusWithin.h>
#include <Fuse.Triggers.WhileInteracting.h>
#include <Fuse.Triggers.WhileKeyboardVisible.h>
#include <Fuse.Triggers.WhileKeyboardVisible.RelativeToKeyboardMode.h>
#include <Fuse.Triggers.WhileLoading.h>
#include <Fuse.Triggers.WhileNotFocused.h>
#include <Fuse.Triggers.WhilePageLoading.h>
#include <Fuse.Triggers.WhilePaused.h>
#include <Fuse.Triggers.WhilePlaying.h>
#include <Fuse.Triggers.WhileScrollable.h>
#include <Fuse.Triggers.WhileTrigger.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.Triggers.WhileValue-1.h>
#include <Fuse.Triggers.WhileVisible.h>
#include <Fuse.Triggers.WhileWindowAspect.h>
#include <Fuse.Triggers.WhileWindowLandscape.h>
#include <Fuse.Triggers.WhileWindowPortrait.h>
#include <Fuse.Triggers.WhileWindowSize.h>
#include <Fuse.Triggers.WindowSizeTrigger.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UserEvent.h>
#include <Fuse.UserEventArgs.h>
#include <Fuse.UserEventDispatch.h>
#include <Fuse.UserEventHandler.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Application.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.ObservableList-1.h>
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
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Object.h>
#include <Uno.Platform.Key.h>
#include <Uno.Platform.KeyEventArgs.h>
#include <Uno.Platform.SystemUI.h>
#include <Uno.Platform.SystemUIWillResizeEventArgs.h>
#include <Uno.Platform.Window.h>
#include <Uno.Platform2.Display.h>
#include <Uno.Predicate-1.h>
#include <Uno.Rect.h>
#include <Uno.String.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
static uString* STRINGS[13];
static uType* TYPES[98];

namespace g{
namespace Fuse{
namespace Triggers{

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno(16)
// ----------------------------------------------------------

// public sealed class AddingAnimation :16
// {
::g::Fuse::Triggers::Trigger_type* AddingAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.ObjectSize = sizeof(AddingAnimation);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.AddingAnimation", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)AddingAnimation__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))AddingAnimation__OnRooted_fn;
    type->SetFields(14);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)AddingAnimation__New1_fn, 0, true, AddingAnimation_typeof(), 0));
    return type;
}

// public generated AddingAnimation() :16
void AddingAnimation__ctor_2_fn(AddingAnimation* __this)
{
    __this->ctor_2();
}

// public generated AddingAnimation New() :16
void AddingAnimation__New1_fn(AddingAnimation** __retval)
{
    *__retval = AddingAnimation::New1();
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :18
void AddingAnimation__OnRooted_fn(AddingAnimation* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    __this->BypassActivate();
    __this->Deactivate();
}

// public generated AddingAnimation() [instance] :16
void AddingAnimation::ctor_2()
{
    ctor_1();
}

// public generated AddingAnimation New() [static] :16
AddingAnimation* AddingAnimation::New1()
{
    AddingAnimation* obj1 = (AddingAnimation*)uNew(AddingAnimation_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno(231)
// -----------------------------------------------------------

// public sealed class Android :231
// {
::g::Fuse::Triggers::Trigger_type* Android_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.ObjectSize = sizeof(Android);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.Android", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)Android__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Android__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Android__OnUnrooted_fn;
    type->SetFields(14);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Android__New1_fn, 0, true, Android_typeof(), 0));
    return type;
}

// public generated Android() :231
void Android__ctor_2_fn(Android* __this)
{
    __this->ctor_2();
}

// public generated Android New() :231
void Android__New1_fn(Android** __retval)
{
    *__retval = Android::New1();
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :233
void Android__OnRooted_fn(Android* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    __this->BypassActivate();
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :242
void Android__OnUnrooted_fn(Android* __this, ::g::Fuse::Node* parentNode)
{
    __this->Deactivate();
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public generated Android() [instance] :231
void Android::ctor_2()
{
    ctor_1();
}

// public generated Android New() [static] :231
Android* Android::New1()
{
    Android* obj1 = (Android*)uNew(Android_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.18.8\Triggers\$.uno(93)
// -------------------------------------------------------------------

// public sealed class ContainingText :93
// {
::g::Fuse::Triggers::Trigger_type* ContainingText_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 18;
    options.ObjectSize = sizeof(ContainingText);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.ContainingText", options);
    type->SetBase(::g::Fuse::Triggers::WhileContainsText_typeof());
    type->fp_ctor_ = (void*)ContainingText__New2_fn;
    ::STRINGS[0] = uString::Const("Use the trigger WhileContainsText instead");
    ::STRINGS[1] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Controls\\0.18.8\\Triggers\\$.uno");
    ::STRINGS[2] = uString::Const(".ctor");
    ::TYPES[0] = uObject_typeof();
    type->SetFields(18);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ContainingText__New2_fn, 0, true, ContainingText_typeof(), 0));
    return type;
}

// public ContainingText() :95
void ContainingText__ctor_4_fn(ContainingText* __this)
{
    __this->ctor_4();
}

// public ContainingText New() :95
void ContainingText__New2_fn(ContainingText** __retval)
{
    *__retval = ContainingText::New2();
}

// public ContainingText() [instance] :95
void ContainingText::ctor_4()
{
    ctor_3();
    ::g::Fuse::Diagnostics::Deprecated(::STRINGS[0/*"Use the tri...*/], this, ::STRINGS[1/*"C:\\Program...*/], 97, ::STRINGS[2/*".ctor"*/]);
}

// public ContainingText New() [static] :95
ContainingText* ContainingText::New2()
{
    ContainingText* obj1 = (ContainingText*)uNew(ContainingText_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno(653)
// -----------------------------------------------------------

// public abstract interface IAddRemove<T> :653
// {
uInterfaceType* IAddRemove_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.IAddRemove`1", 1, 0);
    type->Reflection.SetFunctions(2,
        new uFunction("Add", NULL, NULL, offsetof(IAddRemove, fp_Add), false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("Remove", NULL, NULL, offsetof(IAddRemove, fp_Remove), false, uVoid_typeof(), 1, type->T(0)));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\Actions\$.uno(113)
// -------------------------------------------------------------------

// public abstract interface IMediaPlayback :113
// {
uInterfaceType* IMediaPlayback_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.IMediaPlayback", 0, 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_Duration", NULL, NULL, offsetof(IMediaPlayback, fp_get_Duration), false, ::g::Uno::Double_typeof(), 0),
        new uFunction("get_Position", NULL, NULL, offsetof(IMediaPlayback, fp_get_Position), false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Position", NULL, NULL, offsetof(IMediaPlayback, fp_set_Position), false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_Progress", NULL, NULL, offsetof(IMediaPlayback, fp_get_Progress), false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Progress", NULL, NULL, offsetof(IMediaPlayback, fp_set_Progress), false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_Volume", NULL, NULL, offsetof(IMediaPlayback, fp_get_Volume), false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Volume", NULL, NULL, offsetof(IMediaPlayback, fp_set_Volume), false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno(210)
// -----------------------------------------------------------

// public sealed class iOS :210
// {
::g::Fuse::Triggers::Trigger_type* iOS_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.ObjectSize = sizeof(iOS);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.iOS", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)iOS__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))iOS__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))iOS__OnUnrooted_fn;
    type->SetFields(14);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)iOS__New1_fn, 0, true, iOS_typeof(), 0));
    return type;
}

// public generated iOS() :210
void iOS__ctor_2_fn(iOS* __this)
{
    __this->ctor_2();
}

// public generated iOS New() :210
void iOS__New1_fn(iOS** __retval)
{
    *__retval = iOS::New1();
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :212
void iOS__OnRooted_fn(iOS* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :221
void iOS__OnUnrooted_fn(iOS* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public generated iOS() [instance] :210
void iOS::ctor_2()
{
    ctor_1();
}

// public generated iOS New() [static] :210
iOS* iOS::New1()
{
    iOS* obj1 = (iOS*)uNew(iOS_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\Actions\$.uno(99)
// ------------------------------------------------------------------

// public abstract interface IPlayback :99
// {
uInterfaceType* IPlayback_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.IPlayback", 0, 0);
    type->Reflection.SetFunctions(8,
        new uFunction("get_CanPause", NULL, NULL, offsetof(IPlayback, fp_get_CanPause), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanPlayTo", NULL, NULL, offsetof(IPlayback, fp_get_CanPlayTo), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanResume", NULL, NULL, offsetof(IPlayback, fp_get_CanResume), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanStop", NULL, NULL, offsetof(IPlayback, fp_get_CanStop), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("Pause", NULL, NULL, offsetof(IPlayback, fp_Pause), false, uVoid_typeof(), 0),
        new uFunction("PlayTo", NULL, NULL, offsetof(IPlayback, fp_PlayTo), false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Resume", NULL, NULL, offsetof(IPlayback, fp_Resume), false, uVoid_typeof(), 0),
        new uFunction("Stop", NULL, NULL, offsetof(IPlayback, fp_Stop), false, uVoid_typeof(), 0));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno(261)
// -----------------------------------------------------------

// public abstract interface IProgress :261
// {
uInterfaceType* IProgress_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.IProgress", 0, 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Progress", NULL, NULL, offsetof(IProgress, fp_get_Progress), false, ::g::Uno::Double_typeof(), 0),
        new uFunction("add_ProgressChanged", NULL, NULL, offsetof(IProgress, fp_add_ProgressChanged), false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_ProgressChanged", NULL, NULL, offsetof(IProgress, fp_remove_ProgressChanged), false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno(93)
// ----------------------------------------------------------

// public abstract interface IValue<T> :93
// {
uInterfaceType* IValue_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.IValue`1", 1, 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_Value", NULL, NULL, offsetof(IValue, fp_get_Value), false, type->T(0), 0),
        new uFunction("set_Value", NULL, NULL, offsetof(IValue, fp_set_Value), false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("add_ValueChanged", NULL, NULL, offsetof(IValue, fp_add_ValueChanged), false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(type->T(0))),
        new uFunction("remove_ValueChanged", NULL, NULL, offsetof(IValue, fp_remove_ValueChanged), false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(type->T(0))));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno(12)
// ----------------------------------------------------------

// internal abstract interface IVisibility :12
// {
uInterfaceType* IVisibility_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Triggers.IVisibility", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.18.8\Triggers\$.uno(154)
// --------------------------------------------------------------------

// public sealed class LayoutAnimation :154
// {
::g::Fuse::Triggers::Trigger_type* LayoutAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 21;
    options.ObjectSize = sizeof(LayoutAnimation);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.LayoutAnimation", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)LayoutAnimation__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))LayoutAnimation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))LayoutAnimation__OnUnrooted_fn;
    ::STRINGS[3] = uString::Const("LayoutAnimation can only be used on an Element");
    ::STRINGS[4] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Elements\\0.18.8\\Triggers\\$.uno");
    ::STRINGS[5] = uString::Const("OnRooted");
    ::TYPES[1] = ::g::Fuse::UpdateManager_typeof();
    ::TYPES[2] = ::g::Uno::Float4x4_typeof();
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    ::TYPES[4] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[5] = ::g::Uno::Bool_typeof();
    ::TYPES[6] = ::g::Fuse::Elements::PreplacementArgs_typeof();
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    ::TYPES[0] = uObject_typeof();
    ::TYPES[8] = ::g::Fuse::PlacedHandler_typeof();
    ::TYPES[9] = ::g::Fuse::Elements::PreplacementHandler_typeof();
    ::TYPES[10] = ::g::Fuse::Triggers::LayoutTransition_typeof();
    ::TYPES[11] = ::g::Fuse::Triggers::LayoutTransitionedHandler_typeof();
    type->SetFields(14,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Triggers::LayoutAnimation, _element), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Triggers::LayoutAnimation, _hasOld), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Triggers::LayoutAnimation, _oldLocal), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Triggers::LayoutAnimation, _oldParent), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Triggers::LayoutAnimation, _oldPosition), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Triggers::LayoutAnimation, _oldSize), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Triggers::LayoutAnimation, _oldWorld), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)LayoutAnimation__New1_fn, 0, true, LayoutAnimation_typeof(), 0));
    return type;
}

// public generated LayoutAnimation() :154
void LayoutAnimation__ctor_2_fn(LayoutAnimation* __this)
{
    __this->ctor_2();
}

// public generated LayoutAnimation New() :154
void LayoutAnimation__New1_fn(LayoutAnimation** __retval)
{
    *__retval = LayoutAnimation::New1();
}

// private void OnPlaced(object sender, Fuse.PlacedArgs args) :209
void LayoutAnimation__OnPlaced_fn(LayoutAnimation* __this, uObject* sender, ::g::Fuse::PlacedArgs* args)
{
    __this->OnPlaced(sender, args);
}

// private void OnPreplacement(object sender, Fuse.Elements.PreplacementArgs args) :191
void LayoutAnimation__OnPreplacement_fn(LayoutAnimation* __this, uObject* sender, ::g::Fuse::Elements::PreplacementArgs* args)
{
    __this->OnPreplacement(sender, args);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :157
void LayoutAnimation__OnRooted_fn(LayoutAnimation* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    __this->_element = uAs< ::g::Fuse::Elements::Element*>(__this->ParentNode(), ::TYPES[4/*Fuse.Elements.Element*/]);

    if (__this->_element == NULL)
    {
        ::g::Fuse::Diagnostics::Error(::STRINGS[3/*"LayoutAnima...*/], __this->ParentNode(), ::STRINGS[4/*"C:\\Program...*/], 163, ::STRINGS[5/*"OnRooted"*/]);
        return;
    }

    uPtr(__this->_element)->add_Placed(uDelegate::New(::TYPES[8/*Fuse.PlacedHandler*/], (void*)LayoutAnimation__OnPlaced_fn, __this));
    uPtr(__this->_element)->add_Preplacement(uDelegate::New(::TYPES[9/*Fuse.Elements.PreplacementHandler*/], (void*)LayoutAnimation__OnPreplacement_fn, __this));
    uPtr(__this->_element)->ignoreTempArrange = true;
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Triggers::LayoutTransition::Transitioned()), __this->_element, uDelegate::New(::TYPES[11/*Fuse.Triggers.LayoutTransitionedHandler*/], (void*)LayoutAnimation__OnTransitioned_fn, __this));
}

// private void OnTransitioned(object sender, Fuse.Triggers.LayoutTransitionedArgs args) :229
void LayoutAnimation__OnTransitioned_fn(LayoutAnimation* __this, uObject* sender, ::g::Fuse::Triggers::LayoutTransitionedArgs* args)
{
    __this->OnTransitioned(sender, args);
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :173
void LayoutAnimation__OnUnrooted_fn(LayoutAnimation* __this, ::g::Fuse::Node* parentNode)
{
    if (__this->_element != NULL)
    {
        uPtr(__this->_element)->ignoreTempArrange = false;
        uPtr(__this->_element)->remove_Placed(uDelegate::New(::TYPES[8/*Fuse.PlacedHandler*/], (void*)LayoutAnimation__OnPlaced_fn, __this));
        uPtr(__this->_element)->remove_Preplacement(uDelegate::New(::TYPES[9/*Fuse.Elements.PreplacementHandler*/], (void*)LayoutAnimation__OnPreplacement_fn, __this));
        ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Triggers::LayoutTransition::Transitioned()), __this->_element, uDelegate::New(::TYPES[11/*Fuse.Triggers.LayoutTransitionedHandler*/], (void*)LayoutAnimation__OnTransitioned_fn, __this));
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public generated LayoutAnimation() [instance] :154
void LayoutAnimation::ctor_2()
{
    ctor_1();
}

// private void OnPlaced(object sender, Fuse.PlacedArgs args) [instance] :209
void LayoutAnimation::OnPlaced(uObject* sender, ::g::Fuse::PlacedArgs* args)
{
    if (_hasOld != ::g::Fuse::UpdateManager::FrameIndex())
        return;

    ::g::Uno::Float4x4 ind1 = _oldLocal;
    ::g::Uno::Float2 oldPosition = ::g::Uno::Float2__New2(ind1.M41, ind1.M42);
    ::g::Uno::Float2 oldSize = _oldSize;
    ::g::Uno::Float4x4 m = ::g::Uno::Matrix::Mul8(_oldWorld, uPtr(uPtr(_element)->Parent())->WorldTransformInverse());
    ::g::Uno::Float3 worldChange = ::g::Uno::Float3__op_Subtraction2(::g::Uno::Float3__New2(m.M41, m.M42, m.M43), ::g::Uno::Float3__New4(uPtr(_element)->IntendedPosition(), 0.0f));
    ::g::Fuse::Triggers::LayoutTransition::SetWorldPositionChange(_element, worldChange);
    ::g::Fuse::Triggers::LayoutTransition::SetPositionChange(_element, oldPosition, uPtr(_element)->IntendedPosition());
    ::g::Fuse::Triggers::LayoutTransition::SetSizeChange(_element, oldSize, uPtr(_element)->IntendedSize());
    BypassActivate();
    Deactivate();
}

// private void OnPreplacement(object sender, Fuse.Elements.PreplacementArgs args) [instance] :191
void LayoutAnimation::OnPreplacement(uObject* sender, ::g::Fuse::Elements::PreplacementArgs* args)
{
    if (_hasOld == ::g::Fuse::UpdateManager::FrameIndex())
        return;

    if (!uPtr(args)->HasPrev())
        return;

    _hasOld = ::g::Fuse::UpdateManager::FrameIndex();
    _oldWorld = uPtr(_element)->WorldTransform();
    _oldPosition = uPtr(_element)->ActualPosition();
    _oldSize = uPtr(_element)->ActualSize();
    _oldParent = uPtr(_element)->Parent();
    _oldLocal = uPtr(_element)->LocalTransform();
}

// private void OnTransitioned(object sender, Fuse.Triggers.LayoutTransitionedArgs args) [instance] :229
void LayoutAnimation::OnTransitioned(uObject* sender, ::g::Fuse::Triggers::LayoutTransitionedArgs* args)
{
    BypassActivate();
    Deactivate();
}

// public generated LayoutAnimation New() [static] :154
LayoutAnimation* LayoutAnimation::New1()
{
    LayoutAnimation* obj2 = (LayoutAnimation*)uNew(LayoutAnimation_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.18.8\Triggers\$.uno(26)
// -------------------------------------------------------------------

// public static class LayoutTransition :26
// {
// static LayoutTransition() :26
static void LayoutTransition__cctor__fn(uType* __type)
{
    LayoutTransition::_transitioned_ = ::g::Fuse::Triggers::LayoutTransitioned::New1();
    LayoutTransition::PositionLayoutChange_ = (uObject*)LayoutTransition__WorldPositionChangeMode::New1();
    LayoutTransition::WorldPositionChange_ = (uObject*)LayoutTransition__WorldPositionChangeMode::New1();
    LayoutTransition::_worldPositionChange_ = ::g::Fuse::PropertyHandle::New1();
    LayoutTransition::PositionChange_ = (uObject*)LayoutTransition__PositionChangeMode::New1();
    LayoutTransition::_positionChange_ = ::g::Fuse::PropertyHandle::New1();
    LayoutTransition::SizeLayoutChange_ = (uObject*)LayoutTransition__ResizeChangeMode::New1();
    LayoutTransition::ResizeSizeChange_ = (uObject*)LayoutTransition__ResizeChangeMode::New1();
    LayoutTransition::ScalingSizeChange_ = (uObject*)LayoutTransition__ScaleChangeMode::New1();
    LayoutTransition::_sizeChange_ = ::g::Fuse::Properties::CreateHandle();
}

uClassType* LayoutTransition_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Triggers.LayoutTransition", options);
    type->fp_cctor_ = LayoutTransition__cctor__fn;
    ::TYPES[12] = ::g::Fuse::ITranslationMode_typeof();
    ::TYPES[13] = ::g::Fuse::Animations::IResizeMode_typeof();
    ::TYPES[14] = ::g::Fuse::IScalingMode_typeof();
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    ::TYPES[15] = ::g::Uno::Float4_typeof();
    ::TYPES[16] = ::g::Uno::Float3_typeof();
    ::TYPES[0] = uObject_typeof();
    ::TYPES[17] = ::g::Fuse::NodeEvent_typeof()->MakeType(::g::Fuse::Triggers::LayoutTransitionedHandler_typeof(), ::g::Fuse::Triggers::LayoutTransitionedArgs_typeof());
    type->SetFields(0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::_positionChange_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::_sizeChange_, uFieldFlagsStatic,
        ::g::Fuse::Triggers::LayoutTransitioned_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::_transitioned_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::_worldPositionChange_, uFieldFlagsStatic,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::PositionChange_, uFieldFlagsStatic,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::PositionLayoutChange_, uFieldFlagsStatic,
        ::g::Fuse::Animations::IResizeMode_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::ResizeSizeChange_, uFieldFlagsStatic,
        ::g::Fuse::IScalingMode_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::ScalingSizeChange_, uFieldFlagsStatic,
        ::g::Fuse::Animations::IResizeMode_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::SizeLayoutChange_, uFieldFlagsStatic,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&::g::Fuse::Triggers::LayoutTransition::WorldPositionChange_, uFieldFlagsStatic);
    type->Reflection.SetFields(6,
        new uField("PositionChange", 4),
        new uField("PositionLayoutChange", 5),
        new uField("ResizeSizeChange", 6),
        new uField("ScalingSizeChange", 7),
        new uField("SizeLayoutChange", 8),
        new uField("WorldPositionChange", 9));
    type->Reflection.SetFunctions(1,
        new uFunction("get_Transitioned", NULL, (void*)LayoutTransition__get_Transitioned_fn, 0, true, ::g::Fuse::NodeEvent_typeof()->MakeType(::g::Fuse::Triggers::LayoutTransitionedHandler_typeof(), ::g::Fuse::Triggers::LayoutTransitionedArgs_typeof()), 0));
    return type;
}

// internal static bool GetPositionChange(Fuse.Node n, float2& oldPos, float2& newPos) :75
void LayoutTransition__GetPositionChange_fn(::g::Fuse::Node* n, ::g::Uno::Float2* oldPos, ::g::Uno::Float2* newPos, bool* __retval)
{
    *__retval = LayoutTransition::GetPositionChange(n, oldPos, newPos);
}

// internal static bool GetSizeChange(Fuse.Node n, float2& oldSize, float2& newSize) :135
void LayoutTransition__GetSizeChange_fn(::g::Fuse::Node* n, ::g::Uno::Float2* oldSize, ::g::Uno::Float2* newSize, bool* __retval)
{
    *__retval = LayoutTransition::GetSizeChange(n, oldSize, newSize);
}

// internal static float3 GetWorldPositionChange(Fuse.Node n) :47
void LayoutTransition__GetWorldPositionChange_fn(::g::Fuse::Node* n, ::g::Uno::Float3* __retval)
{
    *__retval = LayoutTransition::GetWorldPositionChange(n);
}

// internal static void SetPositionChange(Fuse.Node n, float2 oldPos, float2 newPos) :85
void LayoutTransition__SetPositionChange_fn(::g::Fuse::Node* n, ::g::Uno::Float2* oldPos, ::g::Uno::Float2* newPos)
{
    LayoutTransition::SetPositionChange(n, *oldPos, *newPos);
}

// internal static void SetSizeChange(Fuse.Node n, float2 oldSize, float2 newSize) :130
void LayoutTransition__SetSizeChange_fn(::g::Fuse::Node* n, ::g::Uno::Float2* oldSize, ::g::Uno::Float2* newSize)
{
    LayoutTransition::SetSizeChange(n, *oldSize, *newSize);
}

// internal static void SetWorldPositionChange(Fuse.Node n, float3 change) :54
void LayoutTransition__SetWorldPositionChange_fn(::g::Fuse::Node* n, ::g::Uno::Float3* change)
{
    LayoutTransition::SetWorldPositionChange(n, *change);
}

// public static Fuse.NodeEvent<Fuse.Triggers.LayoutTransitionedHandler, Fuse.Triggers.LayoutTransitionedArgs> get_Transitioned() :30
void LayoutTransition__get_Transitioned_fn(::g::Fuse::NodeEvent** __retval)
{
    *__retval = LayoutTransition::Transitioned();
}

uSStrong< ::g::Fuse::PropertyHandle*> LayoutTransition::_positionChange_;
uSStrong< ::g::Fuse::PropertyHandle*> LayoutTransition::_sizeChange_;
uSStrong< ::g::Fuse::Triggers::LayoutTransitioned*> LayoutTransition::_transitioned_;
uSStrong< ::g::Fuse::PropertyHandle*> LayoutTransition::_worldPositionChange_;
uSStrong<uObject*> LayoutTransition::PositionChange_;
uSStrong<uObject*> LayoutTransition::PositionLayoutChange_;
uSStrong<uObject*> LayoutTransition::ResizeSizeChange_;
uSStrong<uObject*> LayoutTransition::ScalingSizeChange_;
uSStrong<uObject*> LayoutTransition::SizeLayoutChange_;
uSStrong<uObject*> LayoutTransition::WorldPositionChange_;

// internal static bool GetPositionChange(Fuse.Node n, float2& oldPos, float2& newPos) [static] :75
bool LayoutTransition::GetPositionChange(::g::Fuse::Node* n, ::g::Uno::Float2* oldPos, ::g::Uno::Float2* newPos)
{
    LayoutTransition_typeof()->Init();
    uObject* v = uPtr(uPtr(n)->Properties())->Get(LayoutTransition::_positionChange());
    ::g::Uno::Float4 f = (v == NULL) ? ::g::Uno::Float4__New1(0.0f) : uUnbox< ::g::Uno::Float4>(::TYPES[15/*float4*/], v);
    *oldPos = ::g::Uno::Float2__New2(f.X, f.Y);
    *newPos = ::g::Uno::Float2__New2(f.Z, f.W);
    return v != NULL;
}

// internal static bool GetSizeChange(Fuse.Node n, float2& oldSize, float2& newSize) [static] :135
bool LayoutTransition::GetSizeChange(::g::Fuse::Node* n, ::g::Uno::Float2* oldSize, ::g::Uno::Float2* newSize)
{
    LayoutTransition_typeof()->Init();
    uObject* res = NULL;

    if ((n != NULL) && uPtr(uPtr(n)->Properties())->TryGet(LayoutTransition::_sizeChange(), &res))
    {
        ::g::Uno::Float4 f = uUnbox< ::g::Uno::Float4>(::TYPES[15/*float4*/], res);
        *oldSize = ::g::Uno::Float2__New2(f.X, f.Y);
        *newSize = ::g::Uno::Float2__New2(f.Z, f.W);
        return true;
    }
    else
    {
        *oldSize = ::g::Uno::Float2__New1(0.0f);
        *newSize = ::g::Uno::Float2__New1(0.0f);
        return false;
    }
}

// internal static float3 GetWorldPositionChange(Fuse.Node n) [static] :47
::g::Uno::Float3 LayoutTransition::GetWorldPositionChange(::g::Fuse::Node* n)
{
    LayoutTransition_typeof()->Init();
    uObject* v = uPtr(uPtr(n)->Properties())->Get(LayoutTransition::_worldPositionChange());

    if (v != NULL)
        return uUnbox< ::g::Uno::Float3>(::TYPES[16/*float3*/], v);
    else
        return ::g::Uno::Float3__New1(0.0f);
}

// internal static void SetPositionChange(Fuse.Node n, float2 oldPos, float2 newPos) [static] :85
void LayoutTransition::SetPositionChange(::g::Fuse::Node* n, ::g::Uno::Float2 oldPos, ::g::Uno::Float2 newPos)
{
    LayoutTransition_typeof()->Init();
    uPtr(uPtr(n)->Properties())->Set(LayoutTransition::_positionChange(), uBox(::TYPES[15/*float4*/], ::g::Uno::Float4__New7(oldPos, newPos)));
}

// internal static void SetSizeChange(Fuse.Node n, float2 oldSize, float2 newSize) [static] :130
void LayoutTransition::SetSizeChange(::g::Fuse::Node* n, ::g::Uno::Float2 oldSize, ::g::Uno::Float2 newSize)
{
    LayoutTransition_typeof()->Init();
    uPtr(uPtr(n)->Properties())->Set(LayoutTransition::_sizeChange(), uBox(::TYPES[15/*float4*/], ::g::Uno::Float4__New7(oldSize, newSize)));
}

// internal static void SetWorldPositionChange(Fuse.Node n, float3 change) [static] :54
void LayoutTransition::SetWorldPositionChange(::g::Fuse::Node* n, ::g::Uno::Float3 change)
{
    LayoutTransition_typeof()->Init();
    uPtr(uPtr(n)->Properties())->Set(LayoutTransition::_worldPositionChange(), uBox(::TYPES[16/*float3*/], change));
}

// public static Fuse.NodeEvent<Fuse.Triggers.LayoutTransitionedHandler, Fuse.Triggers.LayoutTransitionedArgs> get_Transitioned() [static] :30
::g::Fuse::NodeEvent* LayoutTransition::Transitioned()
{
    LayoutTransition_typeof()->Init();
    return LayoutTransition::_transitioned();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.18.8\Triggers\$.uno(17)
// -------------------------------------------------------------------

// internal sealed class LayoutTransitioned :17
// {
::g::Fuse::NodeEvent_type* LayoutTransitioned_typeof()
{
    static uSStrong< ::g::Fuse::NodeEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LayoutTransitioned);
    options.TypeSize = sizeof(::g::Fuse::NodeEvent_type);
    type = (::g::Fuse::NodeEvent_type*)uClassType::New("Fuse.Triggers.LayoutTransitioned", options);
    type->SetBase(::g::Fuse::NodeEvent_typeof()->MakeType(::g::Fuse::Triggers::LayoutTransitionedHandler_typeof(), ::g::Fuse::Triggers::LayoutTransitionedArgs_typeof()));
    type->fp_ctor_ = (void*)LayoutTransitioned__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::NodeEvent*, void*, uObject*, ::g::Fuse::NodeEventArgs*))LayoutTransitioned__Invoke_fn;
    ::TYPES[11] = ::g::Fuse::Triggers::LayoutTransitionedHandler_typeof();
    type->SetFields(2);
    return type;
}

// public generated LayoutTransitioned() :17
void LayoutTransitioned__ctor_1_fn(LayoutTransitioned* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Triggers.LayoutTransitionedHandler handler, object sender, Fuse.Triggers.LayoutTransitionedArgs args) :19
void LayoutTransitioned__Invoke_fn(LayoutTransitioned* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Triggers::LayoutTransitionedArgs* args)
{
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated LayoutTransitioned New() :17
void LayoutTransitioned__New1_fn(LayoutTransitioned** __retval)
{
    *__retval = LayoutTransitioned::New1();
}

// public generated LayoutTransitioned() [instance] :17
void LayoutTransitioned::ctor_1()
{
    ctor_();
}

// public generated LayoutTransitioned New() [static] :17
LayoutTransitioned* LayoutTransitioned::New1()
{
    LayoutTransitioned* obj1 = (LayoutTransitioned*)uNew(LayoutTransitioned_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.18.8\Triggers\$.uno(10)
// -------------------------------------------------------------------

// internal sealed class LayoutTransitionedArgs :10
// {
::g::Fuse::NodeEventArgs_type* LayoutTransitionedArgs_typeof()
{
    static uSStrong< ::g::Fuse::NodeEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LayoutTransitionedArgs);
    options.TypeSize = sizeof(::g::Fuse::NodeEventArgs_type);
    type = (::g::Fuse::NodeEventArgs_type*)uClassType::New("Fuse.Triggers.LayoutTransitionedArgs", options);
    type->SetBase(::g::Fuse::NodeEventArgs_typeof());
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::NodeEventArgs__Fuse_Scripting_IScriptEvent_Serialize_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::NodeEventArgs_type, interface0));
    type->SetFields(2);
    return type;
}

// public LayoutTransitionedArgs(Fuse.Node node) :12
void LayoutTransitionedArgs__ctor_2_fn(LayoutTransitionedArgs* __this, ::g::Fuse::Node* node)
{
    __this->ctor_2(node);
}

// public LayoutTransitionedArgs New(Fuse.Node node) :12
void LayoutTransitionedArgs__New3_fn(::g::Fuse::Node* node, LayoutTransitionedArgs** __retval)
{
    *__retval = LayoutTransitionedArgs::New3(node);
}

// public LayoutTransitionedArgs(Fuse.Node node) [instance] :12
void LayoutTransitionedArgs::ctor_2(::g::Fuse::Node* node)
{
    ctor_1(node);
}

// public LayoutTransitionedArgs New(Fuse.Node node) [static] :12
LayoutTransitionedArgs* LayoutTransitionedArgs::New3(::g::Fuse::Node* node)
{
    LayoutTransitionedArgs* obj1 = (LayoutTransitionedArgs*)uNew(LayoutTransitionedArgs_typeof());
    obj1->ctor_2(node);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.18.8\Triggers\$.uno(16)
// -------------------------------------------------------------------

// internal delegate void LayoutTransitionedHandler(object sender, Fuse.Triggers.LayoutTransitionedArgs args) :16
uDelegateType* LayoutTransitionedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Triggers.LayoutTransitionedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Triggers::LayoutTransitionedArgs_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno(1871)
// ------------------------------------------------------------

// public sealed class OnBackButton :1871
// {
::g::Fuse::Triggers::Trigger_type* OnBackButton_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.ObjectSize = sizeof(OnBackButton);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.OnBackButton", options);
    type->SetBase(::g::Fuse::Triggers::OnKeyPress_typeof());
    type->fp_ctor_ = (void*)OnBackButton__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))OnBackButton__OnRooted_fn;
    ::TYPES[18] = ::g::Fuse::Triggers::OnKeyPress_typeof();
    type->SetFields(15);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)OnBackButton__New2_fn, 0, true, OnBackButton_typeof(), 0));
    return type;
}

// public generated OnBackButton() :1871
void OnBackButton__ctor_3_fn(OnBackButton* __this)
{
    __this->ctor_3();
}

// public generated OnBackButton New() :1871
void OnBackButton__New2_fn(OnBackButton** __retval)
{
    *__retval = OnBackButton::New2();
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1873
void OnBackButton__OnRooted_fn(OnBackButton* __this, ::g::Fuse::Node* parentNode)
{
    __this->Key(201);
    ::g::Fuse::Triggers::OnKeyPress__OnRooted_fn(__this, parentNode);
}

// public generated OnBackButton() [instance] :1871
void OnBackButton::ctor_3()
{
    ctor_2();
}

// public generated OnBackButton New() [static] :1871
OnBackButton* OnBackButton::New2()
{
    OnBackButton* obj1 = (OnBackButton*)uNew(OnBackButton_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno(1846)
// ------------------------------------------------------------

// public class OnKeyPress :1846
// {
::g::Fuse::Triggers::Trigger_type* OnKeyPress_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.ObjectSize = sizeof(OnKeyPress);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.OnKeyPress", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)OnKeyPress__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))OnKeyPress__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))OnKeyPress__OnUnrooted_fn;
    ::TYPES[19] = ::g::Uno::Int_typeof();
    ::TYPES[20] = ::g::Uno::Platform::KeyEventArgs_typeof();
    ::TYPES[21] = ::g::Uno::Platform::Window_typeof();
    ::TYPES[22] = ::g::Uno::Application_typeof();
    ::TYPES[23] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::KeyEventArgs_typeof());
    type->SetFields(14,
        ::g::Uno::Platform::Key_typeof(), offsetof(::g::Fuse::Triggers::OnKeyPress, _Key), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Key", NULL, (void*)OnKeyPress__get_Key_fn, 0, false, ::g::Uno::Platform::Key_typeof(), 0),
        new uFunction("set_Key", NULL, (void*)OnKeyPress__set_Key_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Platform::Key_typeof()),
        new uFunction(".ctor", NULL, (void*)OnKeyPress__New1_fn, 0, true, OnKeyPress_typeof(), 0));
    return type;
}

// public generated OnKeyPress() :1846
void OnKeyPress__ctor_2_fn(OnKeyPress* __this)
{
    __this->ctor_2();
}

// public generated Uno.Platform.Key get_Key() :1849
void OnKeyPress__get_Key_fn(OnKeyPress* __this, int* __retval)
{
    *__retval = __this->Key();
}

// public generated void set_Key(Uno.Platform.Key value) :1849
void OnKeyPress__set_Key_fn(OnKeyPress* __this, int* value)
{
    __this->Key(*value);
}

// public generated OnKeyPress New() :1846
void OnKeyPress__New1_fn(OnKeyPress** __retval)
{
    *__retval = OnKeyPress::New1();
}

// internal void OnKeyPressed(object sender, Uno.Platform.KeyEventArgs args) :1864
void OnKeyPress__OnKeyPressed_fn(OnKeyPress* __this, uObject* sender, ::g::Uno::Platform::KeyEventArgs* args)
{
    __this->OnKeyPressed(sender, args);
}

// protected override void OnRooted(Fuse.Node parentNode) :1851
void OnKeyPress__OnRooted_fn(OnKeyPress* __this, ::g::Fuse::Node* parentNode)
{
    if (__this->Key() != 0)
        uPtr(uPtr(::g::Uno::Application::Current())->Window())->add_KeyPressed(uDelegate::New(::TYPES[23/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/], (void*)OnKeyPress__OnKeyPressed_fn, __this));
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :1859
void OnKeyPress__OnUnrooted_fn(OnKeyPress* __this, ::g::Fuse::Node* parentNode)
{
    uPtr(uPtr(::g::Uno::Application::Current())->Window())->remove_KeyPressed(uDelegate::New(::TYPES[23/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/], (void*)OnKeyPress__OnKeyPressed_fn, __this));
}

// public generated OnKeyPress() [instance] :1846
void OnKeyPress::ctor_2()
{
    ctor_1();
}

// public generated Uno.Platform.Key get_Key() [instance] :1849
int OnKeyPress::Key()
{
    return _Key;
}

// public generated void set_Key(Uno.Platform.Key value) [instance] :1849
void OnKeyPress::Key(int value)
{
    _Key = value;
}

// internal void OnKeyPressed(object sender, Uno.Platform.KeyEventArgs args) [instance] :1864
void OnKeyPress::OnKeyPressed(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args)
{
    if (uPtr(args)->Key() == Key())
        Pulse();
}

// public generated OnKeyPress New() [static] :1846
OnKeyPress* OnKeyPress::New1()
{
    OnKeyPress* obj1 = (OnKeyPress*)uNew(OnKeyPress_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.UserEvents\0.18.8\$.uno(12)
// ------------------------------------------------------------

// public sealed class OnUserEvent :12
// {
::g::Fuse::Triggers::Trigger_type* OnUserEvent_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 19;
    options.ObjectSize = sizeof(OnUserEvent);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.OnUserEvent", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)OnUserEvent__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))OnUserEvent__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))OnUserEvent__OnUnrooted_fn;
    ::TYPES[19] = ::g::Uno::Int_typeof();
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    ::TYPES[24] = ::g::Fuse::UserEventArgs_typeof();
    ::TYPES[25] = ::g::Uno::Delegate_typeof();
    ::TYPES[26] = ::g::Fuse::UserEventHandler_typeof();
    ::TYPES[0] = uObject_typeof();
    ::TYPES[27] = ::g::Fuse::UserEventDispatch_typeof();
    type->SetFields(14,
        ::g::Fuse::Triggers::OnUserEventFilter_typeof(), offsetof(::g::Fuse::Triggers::OnUserEvent, _filter), 0,
        ::g::Fuse::UserEventDispatch_typeof(), offsetof(::g::Fuse::Triggers::OnUserEvent, _rootedEvent), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Triggers::OnUserEvent, _scope), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::OnUserEvent, _Name), 0,
        ::g::Fuse::UserEventHandler_typeof(), offsetof(::g::Fuse::Triggers::OnUserEvent, Handler1), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_Filter", NULL, (void*)OnUserEvent__get_Filter_fn, 0, false, ::g::Fuse::Triggers::OnUserEventFilter_typeof(), 0),
        new uFunction("set_Filter", NULL, (void*)OnUserEvent__set_Filter_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::OnUserEventFilter_typeof()),
        new uFunction("add_Handler", NULL, (void*)OnUserEvent__add_Handler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::UserEventHandler_typeof()),
        new uFunction("remove_Handler", NULL, (void*)OnUserEvent__remove_Handler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::UserEventHandler_typeof()),
        new uFunction("get_Name", NULL, (void*)OnUserEvent__get_Name_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Name", NULL, (void*)OnUserEvent__set_Name_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)OnUserEvent__New1_fn, 0, true, OnUserEvent_typeof(), 0));
    return type;
}

// public generated OnUserEvent() :12
void OnUserEvent__ctor_2_fn(OnUserEvent* __this)
{
    __this->ctor_2();
}

// public Fuse.Triggers.OnUserEventFilter get_Filter() :19
void OnUserEvent__get_Filter_fn(OnUserEvent* __this, int* __retval)
{
    *__retval = __this->Filter();
}

// public void set_Filter(Fuse.Triggers.OnUserEventFilter value) :20
void OnUserEvent__set_Filter_fn(OnUserEvent* __this, int* value)
{
    __this->Filter(*value);
}

// public generated void add_Handler(Fuse.UserEventHandler value) :23
void OnUserEvent__add_Handler_fn(OnUserEvent* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.UserEventHandler value) :23
void OnUserEvent__remove_Handler_fn(OnUserEvent* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// public generated string get_Name() :14
void OnUserEvent__get_Name_fn(OnUserEvent* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// public generated void set_Name(string value) :14
void OnUserEvent__set_Name_fn(OnUserEvent* __this, uString* value)
{
    __this->Name(value);
}

// public generated OnUserEvent New() :12
void OnUserEvent__New1_fn(OnUserEvent** __retval)
{
    *__retval = OnUserEvent::New1();
}

// private void OnRaised(object s, Fuse.UserEventArgs args) :42
void OnUserEvent__OnRaised_fn(OnUserEvent* __this, uObject* s, ::g::Fuse::UserEventArgs* args)
{
    __this->OnRaised(s, args);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :26
void OnUserEvent__OnRooted_fn(OnUserEvent* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    __this->_rootedEvent = ::g::Fuse::UserEventDispatch::GetByName(__this->Name());
    uPtr(__this->_rootedEvent)->add_Raised(uDelegate::New(::TYPES[26/*Fuse.UserEventHandler*/], (void*)OnUserEvent__OnRaised_fn, __this));
    __this->_scope = NULL;
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :34
void OnUserEvent__OnUnrooted_fn(OnUserEvent* __this, ::g::Fuse::Node* parentNode)
{
    uPtr(__this->_rootedEvent)->remove_Raised(uDelegate::New(::TYPES[26/*Fuse.UserEventHandler*/], (void*)OnUserEvent__OnRaised_fn, __this));
    __this->_rootedEvent = NULL;
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public generated OnUserEvent() [instance] :12
void OnUserEvent::ctor_2()
{
    ctor_1();
}

// public Fuse.Triggers.OnUserEventFilter get_Filter() [instance] :19
int OnUserEvent::Filter()
{
    return _filter;
}

// public void set_Filter(Fuse.Triggers.OnUserEventFilter value) [instance] :20
void OnUserEvent::Filter(int value)
{
    _filter = value;
}

// public generated void add_Handler(Fuse.UserEventHandler value) [instance] :23
void OnUserEvent::add_Handler(uDelegate* value)
{
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[26/*Fuse.UserEventHandler*/]);
}

// public generated void remove_Handler(Fuse.UserEventHandler value) [instance] :23
void OnUserEvent::remove_Handler(uDelegate* value)
{
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[26/*Fuse.UserEventHandler*/]);
}

// public generated string get_Name() [instance] :14
uString* OnUserEvent::Name()
{
    return _Name;
}

// public generated void set_Name(string value) [instance] :14
void OnUserEvent::Name(uString* value)
{
    _Name = value;
}

// private void OnRaised(object s, Fuse.UserEventArgs args) [instance] :42
void OnUserEvent::OnRaised(uObject* s, ::g::Fuse::UserEventArgs* args)
{
    if (Filter() == 0)
    {
        if (_scope == NULL)
        {
            ::g::Fuse::Node* n;
            ::g::Fuse::UserEvent::ScanTree(ParentNode(), Name(), &n);
            _scope = n;
        }

        if (_scope != uPtr(args)->Source())
            return;
    }

    if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
        uPtr(Handler1)->Invoke(2, this, args);

    Pulse();
}

// public generated OnUserEvent New() [static] :12
OnUserEvent* OnUserEvent::New1()
{
    OnUserEvent* obj1 = (OnUserEvent*)uNew(OnUserEvent_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.UserEvents\0.18.8\$.uno(5)
// -----------------------------------------------------------

// public enum OnUserEventFilter :5
uEnumType* OnUserEventFilter_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.OnUserEventFilter", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Local", 0LL,
        "Global", 1LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.18.8\WebView\$.uno(521)
// -------------------------------------------------------------------

// public sealed class PageBeginLoading :521
// {
::g::Fuse::Triggers::Trigger_type* PageBeginLoading_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.ObjectSize = sizeof(PageBeginLoading);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.PageBeginLoading", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)PageBeginLoading__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))PageBeginLoading__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))PageBeginLoading__OnUnrooted_fn;
    ::STRINGS[6] = uString::Const("Warning: ");
    ::STRINGS[7] = uString::Const(" only applies to WebViews. Was attached to: ");
    ::STRINGS[8] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Controls\\0.18.8\\WebView\\$.uno");
    ::STRINGS[5] = uString::Const("OnRooted");
    ::TYPES[28] = ::g::Fuse::Controls::IWebView_typeof();
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    ::TYPES[29] = ::g::Uno::EventHandler_typeof();
    ::TYPES[0] = uObject_typeof();
    type->SetFields(14,
        ::g::Fuse::Controls::IWebView_typeof(), offsetof(::g::Fuse::Triggers::PageBeginLoading, _webView), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)PageBeginLoading__New1_fn, 0, true, PageBeginLoading_typeof(), 0));
    return type;
}

// public generated PageBeginLoading() :521
void PageBeginLoading__ctor_2_fn(PageBeginLoading* __this)
{
    __this->ctor_2();
}

// public generated PageBeginLoading New() :521
void PageBeginLoading__New1_fn(PageBeginLoading** __retval)
{
    *__retval = PageBeginLoading::New1();
}

// private void OnPageBeginLoading(object s, object a) :539
void PageBeginLoading__OnPageBeginLoading_fn(PageBeginLoading* __this, uObject* s, uObject* a)
{
    __this->OnPageBeginLoading(s, a);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :525
void PageBeginLoading__OnRooted_fn(PageBeginLoading* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);

    if (uIs(__this->ParentNode(), ::TYPES[28/*Fuse.Controls.IWebView*/]))
    {
        __this->_webView = uAs<uObject*>(__this->ParentNode(), ::TYPES[28/*Fuse.Controls.IWebView*/]);
        ::g::Fuse::Controls::IWebView::add_BeginLoading(uInterface(uPtr(__this->_webView), ::TYPES[28/*Fuse.Controls.IWebView*/]), uDelegate::New(::TYPES[29/*Uno.EventHandler*/], (void*)PageBeginLoading__OnPageBeginLoading_fn, __this));
    }
    else
        ::g::Fuse::Diagnostics::Error(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[6/*"Warning: "*/], __this), ::STRINGS[7/*" only appli...*/]), __this->ParentNode()), __this, ::STRINGS[8/*"C:\\Program...*/], 535, ::STRINGS[5/*"OnRooted"*/]);
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :544
void PageBeginLoading__OnUnrooted_fn(PageBeginLoading* __this, ::g::Fuse::Node* parentNode)
{
    if (__this->_webView != NULL)
    {
        ::g::Fuse::Controls::IWebView::remove_BeginLoading(uInterface(uPtr(__this->_webView), ::TYPES[28/*Fuse.Controls.IWebView*/]), uDelegate::New(::TYPES[29/*Uno.EventHandler*/], (void*)PageBeginLoading__OnPageBeginLoading_fn, __this));
        __this->_webView = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public generated PageBeginLoading() [instance] :521
void PageBeginLoading::ctor_2()
{
    ctor_1();
}

// private void OnPageBeginLoading(object s, object a) [instance] :539
void PageBeginLoading::OnPageBeginLoading(uObject* s, uObject* a)
{
    Pulse();
}

// public generated PageBeginLoading New() [static] :521
PageBeginLoading* PageBeginLoading::New1()
{
    PageBeginLoading* obj1 = (PageBeginLoading*)uNew(PageBeginLoading_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.18.8\WebView\$.uno(481)
// -------------------------------------------------------------------

// public sealed class PageLoaded :481
// {
::g::Fuse::Triggers::Trigger_type* PageLoaded_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.ObjectSize = sizeof(PageLoaded);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.PageLoaded", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)PageLoaded__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))PageLoaded__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))PageLoaded__OnUnrooted_fn;
    ::STRINGS[6] = uString::Const("Warning: ");
    ::STRINGS[7] = uString::Const(" only applies to WebViews. Was attached to: ");
    ::STRINGS[8] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Controls\\0.18.8\\WebView\\$.uno");
    ::STRINGS[5] = uString::Const("OnRooted");
    ::TYPES[28] = ::g::Fuse::Controls::IWebView_typeof();
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    ::TYPES[29] = ::g::Uno::EventHandler_typeof();
    ::TYPES[0] = uObject_typeof();
    type->SetFields(14,
        ::g::Fuse::Controls::IWebView_typeof(), offsetof(::g::Fuse::Triggers::PageLoaded, _webView), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)PageLoaded__New1_fn, 0, true, PageLoaded_typeof(), 0));
    return type;
}

// public generated PageLoaded() :481
void PageLoaded__ctor_2_fn(PageLoaded* __this)
{
    __this->ctor_2();
}

// public generated PageLoaded New() :481
void PageLoaded__New1_fn(PageLoaded** __retval)
{
    *__retval = PageLoaded::New1();
}

// private void OnPageLoaded(object s, object a) :499
void PageLoaded__OnPageLoaded_fn(PageLoaded* __this, uObject* s, uObject* a)
{
    __this->OnPageLoaded(s, a);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :485
void PageLoaded__OnRooted_fn(PageLoaded* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);

    if (uIs(__this->ParentNode(), ::TYPES[28/*Fuse.Controls.IWebView*/]))
    {
        __this->_webView = uAs<uObject*>(__this->ParentNode(), ::TYPES[28/*Fuse.Controls.IWebView*/]);
        ::g::Fuse::Controls::IWebView::add_PageLoaded(uInterface(uPtr(__this->_webView), ::TYPES[28/*Fuse.Controls.IWebView*/]), uDelegate::New(::TYPES[29/*Uno.EventHandler*/], (void*)PageLoaded__OnPageLoaded_fn, __this));
    }
    else
        ::g::Fuse::Diagnostics::Error(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[6/*"Warning: "*/], __this), ::STRINGS[7/*" only appli...*/]), __this->ParentNode()), __this, ::STRINGS[8/*"C:\\Program...*/], 495, ::STRINGS[5/*"OnRooted"*/]);
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :504
void PageLoaded__OnUnrooted_fn(PageLoaded* __this, ::g::Fuse::Node* parentNode)
{
    if (__this->_webView != NULL)
    {
        ::g::Fuse::Controls::IWebView::remove_PageLoaded(uInterface(uPtr(__this->_webView), ::TYPES[28/*Fuse.Controls.IWebView*/]), uDelegate::New(::TYPES[29/*Uno.EventHandler*/], (void*)PageLoaded__OnPageLoaded_fn, __this));
        __this->_webView = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public generated PageLoaded() [instance] :481
void PageLoaded::ctor_2()
{
    ctor_1();
}

// private void OnPageLoaded(object s, object a) [instance] :499
void PageLoaded::OnPageLoaded(uObject* s, uObject* a)
{
    Pulse();
}

// public generated PageLoaded New() [static] :481
PageLoaded* PageLoaded::New1()
{
    PageLoaded* obj1 = (PageLoaded*)uNew(PageLoaded_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.18.8\Triggers\$.uno(59)
// -------------------------------------------------------------------

// private sealed class LayoutTransition.PositionChangeMode :59
// {
LayoutTransition__PositionChangeMode_type* LayoutTransition__PositionChangeMode_typeof()
{
    static uSStrong<LayoutTransition__PositionChangeMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(LayoutTransition__PositionChangeMode);
    options.TypeSize = sizeof(LayoutTransition__PositionChangeMode_type);
    type = (LayoutTransition__PositionChangeMode_type*)uClassType::New("Fuse.Triggers.LayoutTransition.PositionChangeMode", options);
    type->fp_ctor_ = (void*)LayoutTransition__PositionChangeMode__New1_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))LayoutTransition__PositionChangeMode__GetAbsVector_fn;
    type->interface1.fp_get_Flags = (void(*)(uObject*, int*))LayoutTransition__PositionChangeMode__get_Flags_fn;
    ::TYPES[5] = ::g::Uno::Bool_typeof();
    ::TYPES[30] = ::g::Fuse::Transform_typeof();
    ::TYPES[31] = ::g::Fuse::Translation_typeof();
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(LayoutTransition__PositionChangeMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(LayoutTransition__PositionChangeMode_type, interface1));
    return type;
}

// public generated PositionChangeMode() :59
void LayoutTransition__PositionChangeMode__ctor__fn(LayoutTransition__PositionChangeMode* __this)
{
    __this->ctor_();
}

// public Fuse.TransformModeFlags get_Flags() :68
void LayoutTransition__PositionChangeMode__get_Flags_fn(LayoutTransition__PositionChangeMode* __this, int* __retval)
{
    *__retval = __this->Flags();
}

// public float3 GetAbsVector(Fuse.Translation t) :61
void LayoutTransition__PositionChangeMode__GetAbsVector_fn(LayoutTransition__PositionChangeMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetAbsVector(t);
}

// public generated PositionChangeMode New() :59
void LayoutTransition__PositionChangeMode__New1_fn(LayoutTransition__PositionChangeMode** __retval)
{
    *__retval = LayoutTransition__PositionChangeMode::New1();
}

// public generated PositionChangeMode() [instance] :59
void LayoutTransition__PositionChangeMode::ctor_()
{
}

// public Fuse.TransformModeFlags get_Flags() [instance] :68
int LayoutTransition__PositionChangeMode::Flags()
{
    return 0;
}

// public float3 GetAbsVector(Fuse.Translation t) [instance] :61
::g::Uno::Float3 LayoutTransition__PositionChangeMode::GetAbsVector(::g::Fuse::Translation* t)
{
    ::g::Uno::Float2 oldPos;
    ::g::Uno::Float2 newPos;

    if (!::g::Fuse::Triggers::LayoutTransition::GetPositionChange(uPtr(t)->RelativeNode(), &oldPos, &newPos))
        return ::g::Uno::Float3__New1(0.0f);

    return ::g::Uno::Float3__op_Multiply2(::g::Uno::Float3__New4(::g::Uno::Float2__op_Subtraction2(oldPos, newPos), 0.0f), uPtr(t)->Vector());
}

// public generated PositionChangeMode New() [static] :59
LayoutTransition__PositionChangeMode* LayoutTransition__PositionChangeMode::New1()
{
    LayoutTransition__PositionChangeMode* obj1 = (LayoutTransition__PositionChangeMode*)uNew(LayoutTransition__PositionChangeMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno(267)
// -----------------------------------------------------------

// public sealed class ProgressAnimation :267
// {
::g::Fuse::Triggers::Trigger_type* ProgressAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(ProgressAnimation);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.ProgressAnimation", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)ProgressAnimation__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))ProgressAnimation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))ProgressAnimation__OnUnrooted_fn;
    ::TYPES[32] = ::g::Fuse::Triggers::IProgress_typeof();
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    ::TYPES[29] = ::g::Uno::EventHandler_typeof();
    type->SetFields(14,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Triggers::ProgressAnimation, _prevValue), 0,
        ::g::Fuse::Triggers::IProgress_typeof(), offsetof(::g::Fuse::Triggers::ProgressAnimation, _progress), 0,
        ::g::Fuse::Triggers::IProgress_typeof(), offsetof(::g::Fuse::Triggers::ProgressAnimation, _Source), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)ProgressAnimation__New1_fn, 0, true, ProgressAnimation_typeof(), 0),
        new uFunction("get_Source", NULL, (void*)ProgressAnimation__get_Source_fn, 0, false, ::g::Fuse::Triggers::IProgress_typeof(), 0),
        new uFunction("set_Source", NULL, (void*)ProgressAnimation__set_Source_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::IProgress_typeof()));
    return type;
}

// public generated ProgressAnimation() :267
void ProgressAnimation__ctor_2_fn(ProgressAnimation* __this)
{
    __this->ctor_2();
}

// public generated ProgressAnimation New() :267
void ProgressAnimation__New1_fn(ProgressAnimation** __retval)
{
    *__retval = ProgressAnimation::New1();
}

// private void OnChanged(object s, object a) :297
void ProgressAnimation__OnChanged_fn(ProgressAnimation* __this, uObject* s, uObject* a)
{
    __this->OnChanged(s, a);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :273
void ProgressAnimation__OnRooted_fn(ProgressAnimation* __this, ::g::Fuse::Node* parentNode)
{
    uObject* ind1;
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    __this->_progress = (ind1 = __this->Source(), ((ind1 != NULL) ? ind1 : uAs<uObject*>(__this->ParentNode(), ::TYPES[32/*Fuse.Triggers.IProgress*/])));

    if (__this->_progress != NULL)
    {
        ::g::Fuse::Triggers::IProgress::add_ProgressChanged(uInterface(uPtr(__this->_progress), ::TYPES[32/*Fuse.Triggers.IProgress*/]), uDelegate::New(::TYPES[29/*Uno.EventHandler*/], (void*)ProgressAnimation__OnChanged_fn, __this));
        __this->_prevValue = ::g::Fuse::Triggers::IProgress::Progress(uInterface(uPtr(__this->_progress), ::TYPES[32/*Fuse.Triggers.IProgress*/]));
        __this->BypassSeek(__this->_prevValue, 0);
    }
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :286
void ProgressAnimation__OnUnrooted_fn(ProgressAnimation* __this, ::g::Fuse::Node* parentNode)
{
    if (__this->_progress != NULL)
    {
        ::g::Fuse::Triggers::IProgress::remove_ProgressChanged(uInterface(uPtr(__this->_progress), ::TYPES[32/*Fuse.Triggers.IProgress*/]), uDelegate::New(::TYPES[29/*Uno.EventHandler*/], (void*)ProgressAnimation__OnChanged_fn, __this));
        __this->_progress = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public generated Fuse.Triggers.IProgress get_Source() :269
void ProgressAnimation__get_Source_fn(ProgressAnimation* __this, uObject** __retval)
{
    *__retval = __this->Source();
}

// public generated void set_Source(Fuse.Triggers.IProgress value) :269
void ProgressAnimation__set_Source_fn(ProgressAnimation* __this, uObject* value)
{
    __this->Source(value);
}

// public generated ProgressAnimation() [instance] :267
void ProgressAnimation::ctor_2()
{
    ctor_1();
}

// private void OnChanged(object s, object a) [instance] :297
void ProgressAnimation::OnChanged(uObject* s, uObject* a)
{
    double p = ::g::Fuse::Triggers::IProgress::Progress(uInterface(uPtr(_progress), ::TYPES[32/*Fuse.Triggers.IProgress*/]));
    double diff = p - _prevValue;
    _prevValue = p;
    Seek1(p, (diff >= 0.0) ? 0 : 1);
}

// public generated Fuse.Triggers.IProgress get_Source() [instance] :269
uObject* ProgressAnimation::Source()
{
    return _Source;
}

// public generated void set_Source(Fuse.Triggers.IProgress value) [instance] :269
void ProgressAnimation::Source(uObject* value)
{
    _Source = value;
}

// public generated ProgressAnimation New() [static] :267
ProgressAnimation* ProgressAnimation::New1()
{
    ProgressAnimation* obj2 = (ProgressAnimation*)uNew(ProgressAnimation_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.18.8\Triggers\$.uno(112)
// --------------------------------------------------------------------

// public partial sealed class PullToReload :112
// {
// static PullToReload() :7
static void PullToReload__cctor__fn(uType* __type)
{
}

::g::Fuse::Triggers::Trigger_type* PullToReload_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 31;
    options.ObjectSize = sizeof(PullToReload);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.PullToReload", options);
    type->SetBase(::g::Fuse::Triggers::ScrollingAnimation_typeof());
    type->fp_ctor_ = (void*)PullToReload__New2_fn;
    type->fp_cctor_ = PullToReload__cctor__fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))PullToReload__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))PullToReload__OnUnrooted_fn;
    ::TYPES[33] = ::g::Fuse::Triggers::ScrollingAnimation_typeof();
    ::TYPES[34] = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    ::TYPES[35] = ::g::Fuse::Triggers::Actions::Callback_typeof();
    ::TYPES[36] = ::g::Uno::Action_typeof();
    ::TYPES[37] = ::g::Fuse::Animations::TrackAnimator_typeof();
    ::TYPES[38] = ::g::Fuse::Triggers::Trigger_typeof();
    ::TYPES[39] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    ::TYPES[40] = ::g::Fuse::Triggers::StateGroup_typeof();
    ::TYPES[25] = ::g::Uno::Delegate_typeof();
    ::TYPES[41] = ::g::Fuse::NodeEventHandler_typeof();
    ::TYPES[0] = uObject_typeof();
    type->SetFields(22,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::PullToReload, _internLoading), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::PullToReload, _isLoading), 0,
        ::g::Fuse::Triggers::State_typeof(), offsetof(::g::Fuse::Triggers::PullToReload, _loading), 0,
        ::g::Fuse::Triggers::State_typeof(), offsetof(::g::Fuse::Triggers::PullToReload, _pulledPastThreshold), 0,
        ::g::Fuse::Triggers::State_typeof(), offsetof(::g::Fuse::Triggers::PullToReload, _pulling), 0,
        ::g::Fuse::Triggers::State_typeof(), offsetof(::g::Fuse::Triggers::PullToReload, _rest), 0,
        ::g::Fuse::Triggers::StateGroup_typeof(), offsetof(::g::Fuse::Triggers::PullToReload, StateGroup), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::PullToReload, threshold), 0,
        ::g::Fuse::NodeEventHandler_typeof(), offsetof(::g::Fuse::Triggers::PullToReload, ReloadHandler1), 0);
    type->Reflection.SetFunctions(13,
        new uFunction("get_IsLoading", NULL, (void*)PullToReload__get_IsLoading_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsLoading", NULL, (void*)PullToReload__set_IsLoading_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Loading", NULL, (void*)PullToReload__get_Loading_fn, 0, false, ::g::Fuse::Triggers::State_typeof(), 0),
        new uFunction("set_Loading", NULL, (void*)PullToReload__set_Loading_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::State_typeof()),
        new uFunction(".ctor", NULL, (void*)PullToReload__New2_fn, 0, true, PullToReload_typeof(), 0),
        new uFunction("get_PulledPastThreshold", NULL, (void*)PullToReload__get_PulledPastThreshold_fn, 0, false, ::g::Fuse::Triggers::State_typeof(), 0),
        new uFunction("set_PulledPastThreshold", NULL, (void*)PullToReload__set_PulledPastThreshold_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::State_typeof()),
        new uFunction("get_Pulling", NULL, (void*)PullToReload__get_Pulling_fn, 0, false, ::g::Fuse::Triggers::State_typeof(), 0),
        new uFunction("set_Pulling", NULL, (void*)PullToReload__set_Pulling_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::State_typeof()),
        new uFunction("add_ReloadHandler", NULL, (void*)PullToReload__add_ReloadHandler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::NodeEventHandler_typeof()),
        new uFunction("remove_ReloadHandler", NULL, (void*)PullToReload__remove_ReloadHandler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::NodeEventHandler_typeof()),
        new uFunction("get_Rest", NULL, (void*)PullToReload__get_Rest_fn, 0, false, ::g::Fuse::Triggers::State_typeof(), 0),
        new uFunction("set_Rest", NULL, (void*)PullToReload__set_Rest_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::State_typeof()));
    return type;
}

// public PullToReload() :10
void PullToReload__ctor_3_fn(PullToReload* __this)
{
    __this->ctor_3();
}

// internal void InitializeUX() :14
void PullToReload__InitializeUX_fn(PullToReload* __this)
{
    __this->InitializeUX();
}

// public bool get_IsLoading() :164
void PullToReload__get_IsLoading_fn(PullToReload* __this, bool* __retval)
{
    *__retval = __this->IsLoading();
}

// public void set_IsLoading(bool value) :165
void PullToReload__set_IsLoading_fn(PullToReload* __this, bool* value)
{
    __this->IsLoading(*value);
}

// public Fuse.Triggers.State get_Loading() :143
void PullToReload__get_Loading_fn(PullToReload* __this, ::g::Fuse::Triggers::State** __retval)
{
    *__retval = __this->Loading();
}

// public void set_Loading(Fuse.Triggers.State value) :144
void PullToReload__set_Loading_fn(PullToReload* __this, ::g::Fuse::Triggers::State* value)
{
    __this->Loading(value);
}

// public PullToReload New() :10
void PullToReload__New2_fn(PullToReload** __retval)
{
    *__retval = PullToReload::New2();
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :149
void PullToReload__OnRooted_fn(PullToReload* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Triggers::ScrollingAnimation__OnRooted_fn(__this, parentNode);
    uPtr(__this->StateGroup)->Rooted(__this->ParentNode());
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :155
void PullToReload__OnUnrooted_fn(PullToReload* __this, ::g::Fuse::Node* parentNode)
{
    uPtr(__this->StateGroup)->Unrooted(__this->ParentNode());
    ::g::Fuse::Triggers::ScrollingAnimation__OnUnrooted_fn(__this, parentNode);
}

// public Fuse.Triggers.State get_PulledPastThreshold() :138
void PullToReload__get_PulledPastThreshold_fn(PullToReload* __this, ::g::Fuse::Triggers::State** __retval)
{
    *__retval = __this->PulledPastThreshold();
}

// public void set_PulledPastThreshold(Fuse.Triggers.State value) :139
void PullToReload__set_PulledPastThreshold_fn(PullToReload* __this, ::g::Fuse::Triggers::State* value)
{
    __this->PulledPastThreshold(value);
}

// public Fuse.Triggers.State get_Pulling() :133
void PullToReload__get_Pulling_fn(PullToReload* __this, ::g::Fuse::Triggers::State** __retval)
{
    *__retval = __this->Pulling();
}

// public void set_Pulling(Fuse.Triggers.State value) :134
void PullToReload__set_Pulling_fn(PullToReload* __this, ::g::Fuse::Triggers::State* value)
{
    __this->Pulling(value);
}

// private void ReachThreshold() :203
void PullToReload__ReachThreshold_fn(PullToReload* __this)
{
    __this->ReachThreshold();
}

// private void ReleasePull() :186
void PullToReload__ReleasePull_fn(PullToReload* __this)
{
    __this->ReleasePull();
}

// public generated void add_ReloadHandler(Fuse.NodeEventHandler value) :147
void PullToReload__add_ReloadHandler_fn(PullToReload* __this, uDelegate* value)
{
    __this->add_ReloadHandler(value);
}

// public generated void remove_ReloadHandler(Fuse.NodeEventHandler value) :147
void PullToReload__remove_ReloadHandler_fn(PullToReload* __this, uDelegate* value)
{
    __this->remove_ReloadHandler(value);
}

// private Fuse.Triggers.State Replace(Fuse.Triggers.State state, Fuse.Triggers.State value) :116
void PullToReload__Replace_fn(PullToReload* __this, ::g::Fuse::Triggers::State* state, ::g::Fuse::Triggers::State* value, ::g::Fuse::Triggers::State** __retval)
{
    *__retval = __this->Replace(state, value);
}

// public Fuse.Triggers.State get_Rest() :128
void PullToReload__get_Rest_fn(PullToReload* __this, ::g::Fuse::Triggers::State** __retval)
{
    *__retval = __this->Rest();
}

// public void set_Rest(Fuse.Triggers.State value) :129
void PullToReload__set_Rest_fn(PullToReload* __this, ::g::Fuse::Triggers::State* value)
{
    __this->Rest(value);
}

// private void StartPull() :177
void PullToReload__StartPull_fn(PullToReload* __this)
{
    __this->StartPull();
}

// public PullToReload() [instance] :10
void PullToReload::ctor_3()
{
    StateGroup = ::g::Fuse::Triggers::StateGroup::New1();
    ctor_2();
    InitializeUX();
}

// internal void InitializeUX() [instance] :14
void PullToReload::InitializeUX()
{
    ::g::Fuse::Triggers::Actions::Callback* temp = ::g::Fuse::Triggers::Actions::Callback::New1();
    ::g::Fuse::Triggers::Actions::Callback* temp1 = ::g::Fuse::Triggers::Actions::Callback::New1();
    ::g::Fuse::Triggers::Actions::Callback* temp2 = ::g::Fuse::Triggers::Actions::Callback::New1();
    ::g::Fuse::Animations::Nothing* temp3 = ::g::Fuse::Animations::Nothing::New1();
    Range(1);
    temp->Direction(0);
    temp->Action(uDelegate::New(::TYPES[36/*Uno.Action*/], (void*)PullToReload__StartPull_fn, this));
    temp1->Direction(1);
    temp1->Action(uDelegate::New(::TYPES[36/*Uno.Action*/], (void*)PullToReload__ReleasePull_fn, this));
    temp2->Delay(0.5f);
    temp2->Action(uDelegate::New(::TYPES[36/*Uno.Action*/], (void*)PullToReload__ReachThreshold_fn, this));
    temp3->Duration(1.0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[39/*Fuse.Animations.Animator*/])), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[34/*Fuse.Triggers.Actions.TriggerAction*/])), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[34/*Fuse.Triggers.Actions.TriggerAction*/])), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[34/*Fuse.Triggers.Actions.TriggerAction*/])), temp2);
}

// public bool get_IsLoading() [instance] :164
bool PullToReload::IsLoading()
{
    return _isLoading;
}

// public void set_IsLoading(bool value) [instance] :165
void PullToReload::IsLoading(bool value)
{
    _isLoading = value;
    _internLoading = value;

    if (_isLoading)
        uPtr(StateGroup)->Active(Loading());
    else
        uPtr(StateGroup)->Active(Rest());
}

// public Fuse.Triggers.State get_Loading() [instance] :143
::g::Fuse::Triggers::State* PullToReload::Loading()
{
    return _loading;
}

// public void set_Loading(Fuse.Triggers.State value) [instance] :144
void PullToReload::Loading(::g::Fuse::Triggers::State* value)
{
    _loading = Replace(_loading, value);
}

// public Fuse.Triggers.State get_PulledPastThreshold() [instance] :138
::g::Fuse::Triggers::State* PullToReload::PulledPastThreshold()
{
    return _pulledPastThreshold;
}

// public void set_PulledPastThreshold(Fuse.Triggers.State value) [instance] :139
void PullToReload::PulledPastThreshold(::g::Fuse::Triggers::State* value)
{
    _pulledPastThreshold = Replace(_pulledPastThreshold, value);
}

// public Fuse.Triggers.State get_Pulling() [instance] :133
::g::Fuse::Triggers::State* PullToReload::Pulling()
{
    return _pulling;
}

// public void set_Pulling(Fuse.Triggers.State value) [instance] :134
void PullToReload::Pulling(::g::Fuse::Triggers::State* value)
{
    _pulling = Replace(_pulling, value);
}

// private void ReachThreshold() [instance] :203
void PullToReload::ReachThreshold()
{
    if (IsLoading() || _internLoading)
        return;

    threshold = true;
    uPtr(StateGroup)->Active(PulledPastThreshold());
}

// private void ReleasePull() [instance] :186
void PullToReload::ReleasePull()
{
    if (IsLoading() || _internLoading)
        return;

    if (threshold)
    {
        _internLoading = true;
        uPtr(StateGroup)->Active(Loading());

        if (::g::Uno::Delegate::op_Inequality(ReloadHandler1, NULL))
            uPtr(ReloadHandler1)->Invoke(2, this, (::g::Fuse::NodeEventArgs*)::g::Fuse::NodeEventArgs::New2(ParentNode()));
    }
    else
        uPtr(StateGroup)->Active(Rest());
}

// public generated void add_ReloadHandler(Fuse.NodeEventHandler value) [instance] :147
void PullToReload::add_ReloadHandler(uDelegate* value)
{
    ReloadHandler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ReloadHandler1, value), ::TYPES[41/*Fuse.NodeEventHandler*/]);
}

// public generated void remove_ReloadHandler(Fuse.NodeEventHandler value) [instance] :147
void PullToReload::remove_ReloadHandler(uDelegate* value)
{
    ReloadHandler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ReloadHandler1, value), ::TYPES[41/*Fuse.NodeEventHandler*/]);
}

// private Fuse.Triggers.State Replace(Fuse.Triggers.State state, Fuse.Triggers.State value) [instance] :116
::g::Fuse::Triggers::State* PullToReload::Replace(::g::Fuse::Triggers::State* state, ::g::Fuse::Triggers::State* value)
{
    bool ret2;

    if (state != NULL)
        ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(uPtr(StateGroup)->States()), ::TYPES[54/*Uno.Collections.ICollection<Fuse.Triggers.State>*/]), state, &ret2);

    if (value != NULL)
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(StateGroup)->States()), ::TYPES[54/*Uno.Collections.ICollection<Fuse.Triggers.State>*/]), value);

    return value;
}

// public Fuse.Triggers.State get_Rest() [instance] :128
::g::Fuse::Triggers::State* PullToReload::Rest()
{
    return _rest;
}

// public void set_Rest(Fuse.Triggers.State value) [instance] :129
void PullToReload::Rest(::g::Fuse::Triggers::State* value)
{
    _rest = Replace(_rest, value);
}

// private void StartPull() [instance] :177
void PullToReload::StartPull()
{
    if (IsLoading() || _internLoading)
        return;

    threshold = false;
    uPtr(StateGroup)->Active(Pulling());
}

// public PullToReload New() [static] :10
PullToReload* PullToReload::New2()
{
    PullToReload* obj1 = (PullToReload*)uNew(PullToReload_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno(1221)
// ------------------------------------------------------------

// private enum WhileFloat.Range :1221
uEnumType* WhileFloat__Range_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.WhileFloat.Range", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Open", 0LL,
        "Exclusive", 1LL,
        "Inclusive", 2LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno(187)
// -----------------------------------------------------------

// private sealed class WhileKeyboardVisible.RelativeToKeyboardMode :187
// {
WhileKeyboardVisible__RelativeToKeyboardMode_type* WhileKeyboardVisible__RelativeToKeyboardMode_typeof()
{
    static uSStrong<WhileKeyboardVisible__RelativeToKeyboardMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(WhileKeyboardVisible__RelativeToKeyboardMode);
    options.TypeSize = sizeof(WhileKeyboardVisible__RelativeToKeyboardMode_type);
    type = (WhileKeyboardVisible__RelativeToKeyboardMode_type*)uClassType::New("Fuse.Triggers.WhileKeyboardVisible.RelativeToKeyboardMode", options);
    type->fp_ctor_ = (void*)WhileKeyboardVisible__RelativeToKeyboardMode__New1_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))WhileKeyboardVisible__RelativeToKeyboardMode__GetAbsVector_fn;
    type->interface1.fp_get_Flags = (void(*)(uObject*, int*))WhileKeyboardVisible__RelativeToKeyboardMode__get_Flags_fn;
    ::TYPES[16] = ::g::Uno::Float3_typeof();
    ::TYPES[31] = ::g::Fuse::Translation_typeof();
    ::TYPES[42] = ::g::Fuse::Triggers::WhileKeyboardVisible_typeof();
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(WhileKeyboardVisible__RelativeToKeyboardMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(WhileKeyboardVisible__RelativeToKeyboardMode_type, interface1));
    return type;
}

// public generated RelativeToKeyboardMode() :187
void WhileKeyboardVisible__RelativeToKeyboardMode__ctor__fn(WhileKeyboardVisible__RelativeToKeyboardMode* __this)
{
    __this->ctor_();
}

// public Fuse.TransformModeFlags get_Flags() :194
void WhileKeyboardVisible__RelativeToKeyboardMode__get_Flags_fn(WhileKeyboardVisible__RelativeToKeyboardMode* __this, int* __retval)
{
    *__retval = __this->Flags();
}

// public float3 GetAbsVector(Fuse.Translation t) :189
void WhileKeyboardVisible__RelativeToKeyboardMode__GetAbsVector_fn(WhileKeyboardVisible__RelativeToKeyboardMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetAbsVector(t);
}

// public generated RelativeToKeyboardMode New() :187
void WhileKeyboardVisible__RelativeToKeyboardMode__New1_fn(WhileKeyboardVisible__RelativeToKeyboardMode** __retval)
{
    *__retval = WhileKeyboardVisible__RelativeToKeyboardMode::New1();
}

// public generated RelativeToKeyboardMode() [instance] :187
void WhileKeyboardVisible__RelativeToKeyboardMode::ctor_()
{
}

// public Fuse.TransformModeFlags get_Flags() [instance] :194
int WhileKeyboardVisible__RelativeToKeyboardMode::Flags()
{
    return 0;
}

// public float3 GetAbsVector(Fuse.Translation t) [instance] :189
::g::Uno::Float3 WhileKeyboardVisible__RelativeToKeyboardMode::GetAbsVector(::g::Fuse::Translation* t)
{
    return ::g::Uno::Float3__New2(0.0f, uPtr(t)->Vector().Y * ::g::Fuse::Triggers::WhileKeyboardVisible::_deltaY(), 0.0f);
}

// public generated RelativeToKeyboardMode New() [static] :187
WhileKeyboardVisible__RelativeToKeyboardMode* WhileKeyboardVisible__RelativeToKeyboardMode::New1()
{
    WhileKeyboardVisible__RelativeToKeyboardMode* obj1 = (WhileKeyboardVisible__RelativeToKeyboardMode*)uNew(WhileKeyboardVisible__RelativeToKeyboardMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno(317)
// -----------------------------------------------------------

// public sealed class RemovingAnimation :317
// {
::g::Fuse::Triggers::Trigger_type* RemovingAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.ObjectSize = sizeof(RemovingAnimation);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.RemovingAnimation", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)RemovingAnimation__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))RemovingAnimation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))RemovingAnimation__OnUnrooted_fn;
    ::TYPES[36] = ::g::Uno::Action_typeof();
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    ::TYPES[43] = ::g::Fuse::BeginRemoveHandler_typeof();
    type->SetFields(14,
        ::g::Fuse::BeginRemoveArgs_typeof(), offsetof(::g::Fuse::Triggers::RemovingAnimation, _args), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)RemovingAnimation__New1_fn, 0, true, RemovingAnimation_typeof(), 0));
    return type;
}

// public generated RemovingAnimation() :317
void RemovingAnimation__ctor_2_fn(RemovingAnimation* __this)
{
    __this->ctor_2();
}

// public generated RemovingAnimation New() :317
void RemovingAnimation__New1_fn(RemovingAnimation** __retval)
{
    *__retval = RemovingAnimation::New1();
}

// private void OnBeginRemove(object sender, Fuse.BeginRemoveArgs args) :333
void RemovingAnimation__OnBeginRemove_fn(RemovingAnimation* __this, uObject* sender, ::g::Fuse::BeginRemoveArgs* args)
{
    __this->OnBeginRemove(sender, args);
}

// private void OnDone() :340
void RemovingAnimation__OnDone_fn(RemovingAnimation* __this)
{
    __this->OnDone();
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :319
void RemovingAnimation__OnRooted_fn(RemovingAnimation* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    uPtr(__this->ParentNode())->add_BeginRemove(uDelegate::New(::TYPES[43/*Fuse.BeginRemoveHandler*/], (void*)RemovingAnimation__OnBeginRemove_fn, __this));
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :325
void RemovingAnimation__OnUnrooted_fn(RemovingAnimation* __this, ::g::Fuse::Node* parentNode)
{
    uPtr(__this->ParentNode())->remove_BeginRemove(uDelegate::New(::TYPES[43/*Fuse.BeginRemoveHandler*/], (void*)RemovingAnimation__OnBeginRemove_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public generated RemovingAnimation() [instance] :317
void RemovingAnimation::ctor_2()
{
    ctor_1();
}

// private void OnBeginRemove(object sender, Fuse.BeginRemoveArgs args) [instance] :333
void RemovingAnimation::OnBeginRemove(uObject* sender, ::g::Fuse::BeginRemoveArgs* args)
{
    _args = args;
    uPtr(args)->AddSubscriber();
    Activate(uDelegate::New(::TYPES[36/*Uno.Action*/], (void*)RemovingAnimation__OnDone_fn, this));
}

// private void OnDone() [instance] :340
void RemovingAnimation::OnDone()
{
    uPtr(_args)->RemoveSubscriber();
    _args = NULL;
}

// public generated RemovingAnimation New() [static] :317
RemovingAnimation* RemovingAnimation::New1()
{
    RemovingAnimation* obj1 = (RemovingAnimation*)uNew(RemovingAnimation_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.18.8\Triggers\$.uno(91)
// -------------------------------------------------------------------

// private sealed class LayoutTransition.ResizeChangeMode :91
// {
LayoutTransition__ResizeChangeMode_type* LayoutTransition__ResizeChangeMode_typeof()
{
    static uSStrong<LayoutTransition__ResizeChangeMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(LayoutTransition__ResizeChangeMode);
    options.TypeSize = sizeof(LayoutTransition__ResizeChangeMode_type);
    type = (LayoutTransition__ResizeChangeMode_type*)uClassType::New("Fuse.Triggers.LayoutTransition.ResizeChangeMode", options);
    type->fp_ctor_ = (void*)LayoutTransition__ResizeChangeMode__New1_fn;
    type->interface0.fp_GetSizeChange = (void(*)(uObject*, ::g::Fuse::Node*, ::g::Uno::Float2*, ::g::Uno::Float2*, bool*))LayoutTransition__ResizeChangeMode__GetSizeChange_fn;
    type->interface1.fp_get_Flags = (void(*)(uObject*, int*))LayoutTransition__ResizeChangeMode__get_Flags_fn;
    type->SetInterfaces(
        ::g::Fuse::Animations::IResizeMode_typeof(), offsetof(LayoutTransition__ResizeChangeMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(LayoutTransition__ResizeChangeMode_type, interface1));
    return type;
}

// public generated ResizeChangeMode() :91
void LayoutTransition__ResizeChangeMode__ctor__fn(LayoutTransition__ResizeChangeMode* __this)
{
    __this->ctor_();
}

// public Fuse.TransformModeFlags get_Flags() :102
void LayoutTransition__ResizeChangeMode__get_Flags_fn(LayoutTransition__ResizeChangeMode* __this, int* __retval)
{
    *__retval = __this->Flags();
}

// public bool GetSizeChange(Fuse.Node n, float2& baseSize, float2& deltaSize) :93
void LayoutTransition__ResizeChangeMode__GetSizeChange_fn(LayoutTransition__ResizeChangeMode* __this, ::g::Fuse::Node* n, ::g::Uno::Float2* baseSize, ::g::Uno::Float2* deltaSize, bool* __retval)
{
    *__retval = __this->GetSizeChange(n, baseSize, deltaSize);
}

// public generated ResizeChangeMode New() :91
void LayoutTransition__ResizeChangeMode__New1_fn(LayoutTransition__ResizeChangeMode** __retval)
{
    *__retval = LayoutTransition__ResizeChangeMode::New1();
}

// public generated ResizeChangeMode() [instance] :91
void LayoutTransition__ResizeChangeMode::ctor_()
{
}

// public Fuse.TransformModeFlags get_Flags() [instance] :102
int LayoutTransition__ResizeChangeMode::Flags()
{
    return 0;
}

// public bool GetSizeChange(Fuse.Node n, float2& baseSize, float2& deltaSize) [instance] :93
bool LayoutTransition__ResizeChangeMode::GetSizeChange(::g::Fuse::Node* n, ::g::Uno::Float2* baseSize, ::g::Uno::Float2* deltaSize)
{
    ::g::Uno::Float2 oldSize;
    ::g::Uno::Float2 newSize;
    bool b = ::g::Fuse::Triggers::LayoutTransition::GetSizeChange(n, &oldSize, &newSize);
    *deltaSize = ::g::Uno::Float2__op_Subtraction2(oldSize, newSize);
    *baseSize = newSize;
    return b;
}

// public generated ResizeChangeMode New() [static] :91
LayoutTransition__ResizeChangeMode* LayoutTransition__ResizeChangeMode::New1()
{
    LayoutTransition__ResizeChangeMode* obj1 = (LayoutTransition__ResizeChangeMode*)uNew(LayoutTransition__ResizeChangeMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.18.8\Triggers\$.uno(105)
// --------------------------------------------------------------------

// private sealed class LayoutTransition.ScaleChangeMode :105
// {
LayoutTransition__ScaleChangeMode_type* LayoutTransition__ScaleChangeMode_typeof()
{
    static uSStrong<LayoutTransition__ScaleChangeMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(LayoutTransition__ScaleChangeMode);
    options.TypeSize = sizeof(LayoutTransition__ScaleChangeMode_type);
    type = (LayoutTransition__ScaleChangeMode_type*)uClassType::New("Fuse.Triggers.LayoutTransition.ScaleChangeMode", options);
    type->fp_ctor_ = (void*)LayoutTransition__ScaleChangeMode__New1_fn;
    type->interface0.fp_GetScaleVector = (void(*)(uObject*, ::g::Fuse::Scaling*, ::g::Uno::Float3*))LayoutTransition__ScaleChangeMode__GetScaleVector_fn;
    type->interface1.fp_get_Flags = (void(*)(uObject*, int*))LayoutTransition__ScaleChangeMode__get_Flags_fn;
    ::TYPES[30] = ::g::Fuse::Transform_typeof();
    ::TYPES[5] = ::g::Uno::Bool_typeof();
    ::TYPES[44] = ::g::Uno::Float2_typeof();
    ::TYPES[45] = ::g::Fuse::Scaling_typeof();
    type->SetInterfaces(
        ::g::Fuse::IScalingMode_typeof(), offsetof(LayoutTransition__ScaleChangeMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(LayoutTransition__ScaleChangeMode_type, interface1));
    return type;
}

// public generated ScaleChangeMode() :105
void LayoutTransition__ScaleChangeMode__ctor__fn(LayoutTransition__ScaleChangeMode* __this)
{
    __this->ctor_();
}

// public Fuse.TransformModeFlags get_Flags() :118
void LayoutTransition__ScaleChangeMode__get_Flags_fn(LayoutTransition__ScaleChangeMode* __this, int* __retval)
{
    *__retval = __this->Flags();
}

// public float3 GetScaleVector(Fuse.Scaling v) :107
void LayoutTransition__ScaleChangeMode__GetScaleVector_fn(LayoutTransition__ScaleChangeMode* __this, ::g::Fuse::Scaling* v, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetScaleVector(v);
}

// public generated ScaleChangeMode New() :105
void LayoutTransition__ScaleChangeMode__New1_fn(LayoutTransition__ScaleChangeMode** __retval)
{
    *__retval = LayoutTransition__ScaleChangeMode::New1();
}

// public generated ScaleChangeMode() [instance] :105
void LayoutTransition__ScaleChangeMode::ctor_()
{
}

// public Fuse.TransformModeFlags get_Flags() [instance] :118
int LayoutTransition__ScaleChangeMode::Flags()
{
    return 0;
}

// public float3 GetScaleVector(Fuse.Scaling v) [instance] :107
::g::Uno::Float3 LayoutTransition__ScaleChangeMode::GetScaleVector(::g::Fuse::Scaling* v)
{
    ::g::Uno::Float2 oldSize;
    ::g::Uno::Float2 newSize;
    bool b = ::g::Fuse::Triggers::LayoutTransition::GetSizeChange(uPtr(v)->RelativeNode(), &oldSize, &newSize);

    if ((!b || (newSize.Y < 1e-05f)) || (newSize.X < 1e-05f))
        return v->Vector();

    ::g::Uno::Float2 n = ::g::Uno::Float2__op_Division2(oldSize, newSize);
    return ::g::Uno::Float3__op_Multiply2(::g::Uno::Float3__New4(n, 1.0f), v->Vector());
}

// public generated ScaleChangeMode New() [static] :105
LayoutTransition__ScaleChangeMode* LayoutTransition__ScaleChangeMode::New1()
{
    LayoutTransition__ScaleChangeMode* obj1 = (LayoutTransition__ScaleChangeMode*)uNew(LayoutTransition__ScaleChangeMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.18.8\Triggers\$.uno(234)
// --------------------------------------------------------------------

// public class ScrollingAnimation :234
// {
::g::Fuse::Triggers::Trigger_type* ScrollingAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 22;
    options.ObjectSize = sizeof(ScrollingAnimation);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.ScrollingAnimation", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)ScrollingAnimation__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))ScrollingAnimation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))ScrollingAnimation__OnUnrooted_fn;
    ::TYPES[46] = ::g::Fuse::Node_typeof()->MakeMethod(1, ::g::Fuse::Controls::ScrollView_typeof());
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    ::TYPES[47] = ::g::Fuse::Controls::ScrollView_typeof();
    ::TYPES[29] = ::g::Uno::EventHandler_typeof();
    ::TYPES[19] = ::g::Uno::Int_typeof();
    ::TYPES[44] = ::g::Uno::Float2_typeof();
    ::TYPES[48] = ::g::Uno::Double_typeof();
    type->SetFields(14,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Triggers::ScrollingAnimation, _from), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::ScrollingAnimation, _hasFrom), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::ScrollingAnimation, _hasTo), 0,
        ::g::Fuse::Triggers::ScrollingAnimationRange_typeof(), offsetof(::g::Fuse::Triggers::ScrollingAnimation, _range), 0,
        ::g::Fuse::Controls::ScrollView_typeof(), offsetof(::g::Fuse::Triggers::ScrollingAnimation, _scrollable), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Triggers::ScrollingAnimation, _to), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::ScrollingAnimation, _Inverse), 0,
        ::g::Fuse::Gestures::ScrollDirections_typeof(), offsetof(::g::Fuse::Triggers::ScrollingAnimation, _ScrollDirections), 0);
    type->Reflection.SetFunctions(11,
        new uFunction("get_From", NULL, (void*)ScrollingAnimation__get_From_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_From", NULL, (void*)ScrollingAnimation__set_From_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Inverse", NULL, (void*)ScrollingAnimation__get_Inverse_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Inverse", NULL, (void*)ScrollingAnimation__set_Inverse_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)ScrollingAnimation__New1_fn, 0, true, ScrollingAnimation_typeof(), 0),
        new uFunction("get_Range", NULL, (void*)ScrollingAnimation__get_Range_fn, 0, false, ::g::Fuse::Triggers::ScrollingAnimationRange_typeof(), 0),
        new uFunction("set_Range", NULL, (void*)ScrollingAnimation__set_Range_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::ScrollingAnimationRange_typeof()),
        new uFunction("get_ScrollDirections", NULL, (void*)ScrollingAnimation__get_ScrollDirections_fn, 0, false, ::g::Fuse::Gestures::ScrollDirections_typeof(), 0),
        new uFunction("set_ScrollDirections", NULL, (void*)ScrollingAnimation__set_ScrollDirections_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::ScrollDirections_typeof()),
        new uFunction("get_To", NULL, (void*)ScrollingAnimation__get_To_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_To", NULL, (void*)ScrollingAnimation__set_To_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
    return type;
}

// public ScrollingAnimation() :320
void ScrollingAnimation__ctor_2_fn(ScrollingAnimation* __this)
{
    __this->ctor_2();
}

// public float get_From() :255
void ScrollingAnimation__get_From_fn(ScrollingAnimation* __this, float* __retval)
{
    *__retval = __this->From();
}

// public void set_From(float value) :256
void ScrollingAnimation__set_From_fn(ScrollingAnimation* __this, float* value)
{
    __this->From(*value);
}

// public generated bool get_Inverse() :249
void ScrollingAnimation__get_Inverse_fn(ScrollingAnimation* __this, bool* __retval)
{
    *__retval = __this->Inverse();
}

// public generated void set_Inverse(bool value) :249
void ScrollingAnimation__set_Inverse_fn(ScrollingAnimation* __this, bool* value)
{
    __this->Inverse(*value);
}

// public ScrollingAnimation New() :320
void ScrollingAnimation__New1_fn(ScrollingAnimation** __retval)
{
    *__retval = ScrollingAnimation::New1();
}

// protected override void OnRooted(Fuse.Node parentNode) :325
void ScrollingAnimation__OnRooted_fn(ScrollingAnimation* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    __this->_scrollable = ((::g::Fuse::Controls::ScrollView*)uPtr(__this->ParentNode())->FindByType(::TYPES[46/*Fuse.Node.FindByType<Fuse.Controls.ScrollView>*/]));

    if (__this->_scrollable != NULL)
    {
        uPtr(__this->_scrollable)->add_ScrollPositionChanged(uDelegate::New(::TYPES[29/*Uno.EventHandler*/], (void*)ScrollingAnimation__OnScrollPositionChanged_fn, __this));
        __this->BypassSeek(__this->Progress1(), 0);
    }
}

// private void OnScrollPositionChanged(object sender, Uno.EventArgs args) :348
void ScrollingAnimation__OnScrollPositionChanged_fn(ScrollingAnimation* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnScrollPositionChanged(sender, args);
}

// protected override void OnUnrooted(Fuse.Node parentNode) :338
void ScrollingAnimation__OnUnrooted_fn(ScrollingAnimation* __this, ::g::Fuse::Node* parentNode)
{
    if (__this->_scrollable != NULL)
    {
        uPtr(__this->_scrollable)->remove_ScrollPositionChanged(uDelegate::New(::TYPES[29/*Uno.EventHandler*/], (void*)ScrollingAnimation__OnScrollPositionChanged_fn, __this));
        __this->_scrollable = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// private double get_Progress() :279
void ScrollingAnimation__get_Progress1_fn(ScrollingAnimation* __this, double* __retval)
{
    *__retval = __this->Progress1();
}

// public Fuse.Triggers.ScrollingAnimationRange get_Range() :242
void ScrollingAnimation__get_Range_fn(ScrollingAnimation* __this, int* __retval)
{
    *__retval = __this->Range();
}

// public void set_Range(Fuse.Triggers.ScrollingAnimationRange value) :243
void ScrollingAnimation__set_Range_fn(ScrollingAnimation* __this, int* value)
{
    __this->Range(*value);
}

// public generated Fuse.Gestures.ScrollDirections get_ScrollDirections() :237
void ScrollingAnimation__get_ScrollDirections_fn(ScrollingAnimation* __this, int* __retval)
{
    *__retval = __this->ScrollDirections();
}

// public generated void set_ScrollDirections(Fuse.Gestures.ScrollDirections value) :237
void ScrollingAnimation__set_ScrollDirections_fn(ScrollingAnimation* __this, int* value)
{
    __this->ScrollDirections(*value);
}

// public float get_To() :266
void ScrollingAnimation__get_To_fn(ScrollingAnimation* __this, float* __retval)
{
    *__retval = __this->To();
}

// public void set_To(float value) :267
void ScrollingAnimation__set_To_fn(ScrollingAnimation* __this, float* value)
{
    __this->To(*value);
}

// public ScrollingAnimation() [instance] :320
void ScrollingAnimation::ctor_2()
{
    ctor_1();
    ScrollDirections(12);
}

// public float get_From() [instance] :255
float ScrollingAnimation::From()
{
    return _from;
}

// public void set_From(float value) [instance] :256
void ScrollingAnimation::From(float value)
{
    _from = value;
    _hasFrom = true;
    _range = 2;
}

// public generated bool get_Inverse() [instance] :249
bool ScrollingAnimation::Inverse()
{
    return _Inverse;
}

// public generated void set_Inverse(bool value) [instance] :249
void ScrollingAnimation::Inverse(bool value)
{
    _Inverse = value;
}

// private void OnScrollPositionChanged(object sender, Uno.EventArgs args) [instance] :348
void ScrollingAnimation::OnScrollPositionChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    Seek(Progress1());
}

// private double get_Progress() [instance] :279
double ScrollingAnimation::Progress1()
{
    ::g::Uno::Float2 from;
    ::g::Uno::Float2 to;

    if (Range() == 1)
    {
        from = uPtr(_scrollable)->MinScroll();
        to = uPtr(_scrollable)->MinOverflow();
    }
    else
    {
        from = _hasFrom ? ::g::Uno::Float2__New1(From()) : uPtr(_scrollable)->MinScroll();
        to = _hasTo ? ::g::Uno::Float2__New1(To()) : uPtr(_scrollable)->MaxScroll();
    }

    ::g::Uno::Float2 range2 = ::g::Uno::Float2__op_Subtraction2(to, from);
    float at;
    float range;

    if (ScrollDirections() == 3)
    {
        at = uPtr(_scrollable)->ScrollPosition().X - from.X;
        range = range2.X;
    }
    else if (ScrollDirections() == 12)
    {
        at = uPtr(_scrollable)->ScrollPosition().Y - from.Y;
        range = range2.Y;
    }
    else
    {
        at = 0.0f;
        range = 0.0f;
    }

    if (::g::Uno::Math::Abs1(range) < 1e-05f)
        return 0.0;

    float p = ::g::Uno::Math::Clamp1(at / range, 0.0f, 1.0f);
    return (double)(Inverse() ? 1.0f - p : p);
}

// public Fuse.Triggers.ScrollingAnimationRange get_Range() [instance] :242
int ScrollingAnimation::Range()
{
    return _range;
}

// public void set_Range(Fuse.Triggers.ScrollingAnimationRange value) [instance] :243
void ScrollingAnimation::Range(int value)
{
    _range = value;
}

// public generated Fuse.Gestures.ScrollDirections get_ScrollDirections() [instance] :237
int ScrollingAnimation::ScrollDirections()
{
    return _ScrollDirections;
}

// public generated void set_ScrollDirections(Fuse.Gestures.ScrollDirections value) [instance] :237
void ScrollingAnimation::ScrollDirections(int value)
{
    _ScrollDirections = value;
}

// public float get_To() [instance] :266
float ScrollingAnimation::To()
{
    return _to;
}

// public void set_To(float value) [instance] :267
void ScrollingAnimation::To(float value)
{
    _to = value;
    _hasTo = true;
    _range = 2;
}

// public ScrollingAnimation New() [static] :320
ScrollingAnimation* ScrollingAnimation::New1()
{
    ScrollingAnimation* obj1 = (ScrollingAnimation*)uNew(ScrollingAnimation_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.18.8\Triggers\$.uno(227)
// --------------------------------------------------------------------

// public enum ScrollingAnimationRange :227
uEnumType* ScrollingAnimationRange_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.ScrollingAnimationRange", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Standard", 0LL,
        "SnapMin", 1LL,
        "Explicit", 2LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno(358)
// -----------------------------------------------------------

// public sealed class State :358
// {
::g::Fuse::Triggers::Trigger_type* State_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.ObjectSize = sizeof(State);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.State", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)State__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))State__OnRooted_fn;
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    ::TYPES[38] = ::g::Fuse::Triggers::Trigger_typeof();
    type->SetFields(14,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::State, _on), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Triggers::State, _Name), 0);
    type->Reflection.SetFunctions(6,
        new uFunction("get_Name", NULL, (void*)State__get_Name_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Name", NULL, (void*)State__set_Name_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)State__New1_fn, 0, true, State_typeof(), 0),
        new uFunction("get_On", NULL, (void*)State__get_On_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_On", NULL, (void*)State__set_On_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Progress", NULL, (void*)State__get_Progress1_fn, 0, false, ::g::Uno::Double_typeof(), 0));
    return type;
}

// public generated State() :358
void State__ctor_2_fn(State* __this)
{
    __this->ctor_2();
}

// public generated string get_Name() :363
void State__get_Name_fn(State* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// public generated void set_Name(string value) :363
void State__set_Name_fn(State* __this, uString* value)
{
    __this->Name(value);
}

// public generated State New() :358
void State__New1_fn(State** __retval)
{
    *__retval = State::New1();
}

// public bool get_On() :369
void State__get_On_fn(State* __this, bool* __retval)
{
    *__retval = __this->On();
}

// public void set_On(bool value) :370
void State__set_On_fn(State* __this, bool* value)
{
    __this->On(*value);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :385
void State__OnRooted_fn(State* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);

    if (__this->_on)
        __this->BypassActivate();
}

// public new double get_Progress() :392
void State__get_Progress1_fn(State* __this, double* __retval)
{
    *__retval = __this->Progress1();
}

// public generated State() [instance] :358
void State::ctor_2()
{
    ctor_1();
}

// public generated string get_Name() [instance] :363
uString* State::Name()
{
    return _Name;
}

// public generated void set_Name(string value) [instance] :363
void State::Name(uString* value)
{
    _Name = value;
}

// public bool get_On() [instance] :369
bool State::On()
{
    return _on;
}

// public void set_On(bool value) [instance] :370
void State::On(bool value)
{
    if (_on == value)
        return;

    _on = value;

    if (ParentNode() != NULL)
    {
        if (_on)
            Activate(NULL);
        else
            Deactivate();
    }
}

// public new double get_Progress() [instance] :392
double State::Progress1()
{
    return Progress();
}

// public generated State New() [static] :358
State* State::New1()
{
    State* obj1 = (State*)uNew(State_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno(555)
// -----------------------------------------------------------

// private enum Timeline.State :555
uEnumType* Timeline__State_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.Timeline.State", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Play", 0LL,
        "Stop", 1LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno(411)
// -----------------------------------------------------------

// public sealed class StateGroup :411
// {
StateGroup_type* StateGroup_typeof()
{
    static uSStrong<StateGroup_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(StateGroup);
    options.TypeSize = sizeof(StateGroup_type);
    type = (StateGroup_type*)uClassType::New("Fuse.Triggers.StateGroup", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_ctor_ = (void*)StateGroup__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))StateGroup__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))StateGroup__OnUnrooted_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))StateGroup__FindObjectByName_fn;
    ::TYPES[49] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Triggers::State_typeof());
    ::TYPES[50] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Triggers::State_typeof());
    ::TYPES[51] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Triggers::State_typeof());
    ::TYPES[52] = ::g::Fuse::Triggers::State_typeof();
    ::TYPES[53] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof());
    ::TYPES[0] = uObject_typeof();
    ::TYPES[54] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::State_typeof());
    ::TYPES[19] = ::g::Uno::Int_typeof();
    ::TYPES[38] = ::g::Fuse::Triggers::Trigger_typeof();
    ::TYPES[55] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Triggers::Trigger_typeof());
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(StateGroup_type, interface0));
    type->SetFields(3,
        ::g::Fuse::Triggers::State_typeof(), offsetof(::g::Fuse::Triggers::StateGroup, _active), 0,
        ::g::Fuse::Triggers::State_typeof(), offsetof(::g::Fuse::Triggers::StateGroup, _rest), 0,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Triggers::State_typeof()), offsetof(::g::Fuse::Triggers::StateGroup, _states), 0,
        ::g::Fuse::Triggers::StateTransition_typeof(), offsetof(::g::Fuse::Triggers::StateGroup, _transition), 0);
    type->Reflection.SetFunctions(10,
        new uFunction("get_Active", NULL, (void*)StateGroup__get_Active_fn, 0, false, ::g::Fuse::Triggers::State_typeof(), 0),
        new uFunction("set_Active", NULL, (void*)StateGroup__set_Active_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::State_typeof()),
        new uFunction("FindObjectByName", NULL, (void*)StateGroup__FindObjectByName_fn, 0, false, uObject_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof())),
        new uFunction("GotoNextState", NULL, (void*)StateGroup__GotoNextState_fn, 0, false, uVoid_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)StateGroup__New1_fn, 0, true, StateGroup_typeof(), 0),
        new uFunction("get_Rest", NULL, (void*)StateGroup__get_Rest_fn, 0, false, ::g::Fuse::Triggers::State_typeof(), 0),
        new uFunction("set_Rest", NULL, (void*)StateGroup__set_Rest_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::State_typeof()),
        new uFunction("get_States", NULL, (void*)StateGroup__get_States_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Triggers::State_typeof()), 0),
        new uFunction("get_Transition", NULL, (void*)StateGroup__get_Transition_fn, 0, false, ::g::Fuse::Triggers::StateTransition_typeof(), 0),
        new uFunction("set_Transition", NULL, (void*)StateGroup__set_Transition_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::StateTransition_typeof()));
    return type;
}

// public generated StateGroup() :411
void StateGroup__ctor_1_fn(StateGroup* __this)
{
    __this->ctor_1();
}

// public Fuse.Triggers.State get_Active() :420
void StateGroup__get_Active_fn(StateGroup* __this, ::g::Fuse::Triggers::State** __retval)
{
    *__retval = __this->Active();
}

// public void set_Active(Fuse.Triggers.State value) :421
void StateGroup__set_Active_fn(StateGroup* __this, ::g::Fuse::Triggers::State* value)
{
    __this->Active(value);
}

// private int get_ActiveIndex() :444
void StateGroup__get_ActiveIndex_fn(StateGroup* __this, int* __retval)
{
    *__retval = __this->ActiveIndex();
}

// private void set_ActiveIndex(int value) :451
void StateGroup__set_ActiveIndex_fn(StateGroup* __this, int* value)
{
    __this->ActiveIndex(*value);
}

// private void CheckAllDone() :529
void StateGroup__CheckAllDone_fn(StateGroup* __this)
{
    __this->CheckAllDone();
}

// public object FindObjectByName(string name, Uno.Predicate<object> acceptor) :462
void StateGroup__FindObjectByName_fn(StateGroup* __this, uString* name, uDelegate* acceptor, uObject** __retval)
{
    *__retval = __this->FindObjectByName(name, acceptor);
}

// private void Goto(Fuse.Triggers.State next) :504
void StateGroup__Goto_fn(StateGroup* __this, ::g::Fuse::Triggers::State* next)
{
    __this->Goto(next);
}

// public void GotoNextState() :457
void StateGroup__GotoNextState_fn(StateGroup* __this)
{
    __this->GotoNextState();
}

// public generated StateGroup New() :411
void StateGroup__New1_fn(StateGroup** __retval)
{
    *__retval = StateGroup::New1();
}

// private void OnPlaybackDone(Fuse.Triggers.Trigger which) :523
void StateGroup__OnPlaybackDone_fn(StateGroup* __this, ::g::Fuse::Triggers::Trigger* which)
{
    __this->OnPlaybackDone(which);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :489
void StateGroup__OnRooted_fn(StateGroup* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Triggers::State* ret13;
    ::g::Fuse::Triggers::State* ret14;

    if ((__this->_active == NULL) && (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->_states), ::TYPES[54/*Uno.Collections.ICollection<Fuse.Triggers.State>*/])) > 0))
        __this->_active = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(__this->_states), ::TYPES[49/*Uno.Collections.IList<Fuse.Triggers.State>*/]), uCRef<int>(0), &ret13), ret13);

    for (uObject* enum3 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(__this->_states), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[52/*Fuse.Triggers.State*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum3), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Fuse::Triggers::State* state = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum3), ::TYPES[51/*Uno.Collections.IEnumerator<Fuse.Triggers.State>*/]), &ret14), ret14);
        uPtr(state)->On(state == __this->_active);
        state->add_PlaybackDone(uDelegate::New(::TYPES[55/*Uno.Action<Fuse.Triggers.Trigger>*/], (void*)StateGroup__OnPlaybackDone_fn, __this));
        state->Rooted(__this->ParentNode());
    }

    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :478
void StateGroup__OnUnrooted_fn(StateGroup* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Triggers::State* ret15;
    ::g::Fuse::Behavior__OnUnrooted_fn(__this, parentNode);

    for (uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(__this->_states), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[52/*Fuse.Triggers.State*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Fuse::Triggers::State* state = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[51/*Uno.Collections.IEnumerator<Fuse.Triggers.State>*/]), &ret15), ret15);
        uPtr(state)->remove_PlaybackDone(uDelegate::New(::TYPES[55/*Uno.Action<Fuse.Triggers.Trigger>*/], (void*)StateGroup__OnPlaybackDone_fn, __this));
        state->Unrooted(__this->ParentNode());
    }
}

// public Fuse.Triggers.State get_Rest() :431
void StateGroup__get_Rest_fn(StateGroup* __this, ::g::Fuse::Triggers::State** __retval)
{
    *__retval = __this->Rest();
}

// public void set_Rest(Fuse.Triggers.State value) :439
void StateGroup__set_Rest_fn(StateGroup* __this, ::g::Fuse::Triggers::State* value)
{
    __this->Rest(value);
}

// public Uno.Collections.IList<Fuse.Triggers.State> get_States() :415
void StateGroup__get_States_fn(StateGroup* __this, uObject** __retval)
{
    *__retval = __this->States();
}

// public Fuse.Triggers.StateTransition get_Transition() :474
void StateGroup__get_Transition_fn(StateGroup* __this, int* __retval)
{
    *__retval = __this->Transition();
}

// public void set_Transition(Fuse.Triggers.StateTransition value) :475
void StateGroup__set_Transition_fn(StateGroup* __this, int* value)
{
    __this->Transition(*value);
}

// public generated StateGroup() [instance] :411
void StateGroup::ctor_1()
{
    _states = (uObject*)((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[50/*Uno.Collections.List<Fuse.Triggers.State>*/]));
    ctor_();
}

// public Fuse.Triggers.State get_Active() [instance] :420
::g::Fuse::Triggers::State* StateGroup::Active()
{
    return _active;
}

// public void set_Active(Fuse.Triggers.State value) [instance] :421
void StateGroup::Active(::g::Fuse::Triggers::State* value)
{
    if (value != _active)
        Goto(value);
}

// private int get_ActiveIndex() [instance] :444
int StateGroup::ActiveIndex()
{
    ::g::Fuse::Triggers::State* ret16;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(States()), ::TYPES[54/*Uno.Collections.ICollection<Fuse.Triggers.State>*/])); ++i)
        if (_active == (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(States()), ::TYPES[49/*Uno.Collections.IList<Fuse.Triggers.State>*/]), uCRef<int>(i), &ret16), ret16))
            return i;

    return -1;
}

// private void set_ActiveIndex(int value) [instance] :451
void StateGroup::ActiveIndex(int value)
{
    ::g::Fuse::Triggers::State* ret17;
    Active((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(_states), ::TYPES[49/*Uno.Collections.IList<Fuse.Triggers.State>*/]), uCRef<int>(value), &ret17), ret17));
}

// private void CheckAllDone() [instance] :529
void StateGroup::CheckAllDone()
{
    ::g::Fuse::Triggers::State* ret8;
    bool all = true;

    for (uObject* enum6 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_states), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[52/*Fuse.Triggers.State*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum6), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Fuse::Triggers::State* state = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum6), ::TYPES[51/*Uno.Collections.IEnumerator<Fuse.Triggers.State>*/]), &ret8), ret8);

        if (uPtr(state)->Progress1() > 0.0)
            all = false;
    }

    if (all && (_active != NULL))
        uPtr(_active)->On(true);
}

// public object FindObjectByName(string name, Uno.Predicate<object> acceptor) [instance] :462
uObject* StateGroup::FindObjectByName(uString* name, uDelegate* acceptor)
{
    ::g::Fuse::Triggers::State* ret9;
    bool ret10;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(States()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[52/*Fuse.Triggers.State*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Fuse::Triggers::State* s = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[51/*Uno.Collections.IEnumerator<Fuse.Triggers.State>*/]), &ret9), ret9);

        if (::g::Uno::String::op_Equality(uPtr(s)->Name(), name) && (uPtr(acceptor)->Invoke(&ret10, 1, s), ret10))
            return s;
    }

    return NULL;
}

// private void Goto(Fuse.Triggers.State next) [instance] :504
void StateGroup::Goto(::g::Fuse::Triggers::State* next)
{
    ::g::Fuse::Triggers::State* ret11;
    ::g::Fuse::Triggers::State* ret12;
    _active = next;

    switch (Transition())
    {
        case 0:
        {
            for (uObject* enum4 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_states), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[52/*Fuse.Triggers.State*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum4), ::g::Uno::Collections::IEnumerator_typeof())); )
            {
                ::g::Fuse::Triggers::State* state = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum4), ::TYPES[51/*Uno.Collections.IEnumerator<Fuse.Triggers.State>*/]), &ret11), ret11);
                uPtr(state)->On(state == next);
            }

            break;
        }
        case 1:
        {
            for (uObject* enum5 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_states), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[52/*Fuse.Triggers.State*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum5), ::g::Uno::Collections::IEnumerator_typeof())); )
            {
                ::g::Fuse::Triggers::State* state1 = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum5), ::TYPES[51/*Uno.Collections.IEnumerator<Fuse.Triggers.State>*/]), &ret12), ret12);
                uPtr(state1)->On(false);
            }

            CheckAllDone();
            break;
        }
    }
}

// public void GotoNextState() [instance] :457
void StateGroup::GotoNextState()
{
    ActiveIndex((ActiveIndex() + 1) % ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_states), ::TYPES[54/*Uno.Collections.ICollection<Fuse.Triggers.State>*/])));
}

// private void OnPlaybackDone(Fuse.Triggers.Trigger which) [instance] :523
void StateGroup::OnPlaybackDone(::g::Fuse::Triggers::Trigger* which)
{
    if (Transition() == 1)
        CheckAllDone();
}

// public Fuse.Triggers.State get_Rest() [instance] :431
::g::Fuse::Triggers::State* StateGroup::Rest()
{
    ::g::Fuse::Triggers::State* ret18;

    if (_rest != NULL)
        return _rest;

    if (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_states), ::TYPES[54/*Uno.Collections.ICollection<Fuse.Triggers.State>*/])) > 0)
        return (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(_states), ::TYPES[49/*Uno.Collections.IList<Fuse.Triggers.State>*/]), uCRef<int>(0), &ret18), ret18);

    return NULL;
}

// public void set_Rest(Fuse.Triggers.State value) [instance] :439
void StateGroup::Rest(::g::Fuse::Triggers::State* value)
{
    _rest = value;
}

// public Uno.Collections.IList<Fuse.Triggers.State> get_States() [instance] :415
uObject* StateGroup::States()
{
    return _states;
}

// public Fuse.Triggers.StateTransition get_Transition() [instance] :474
int StateGroup::Transition()
{
    return _transition;
}

// public void set_Transition(Fuse.Triggers.StateTransition value) [instance] :475
void StateGroup::Transition(int value)
{
    _transition = value;
}

// public generated StateGroup New() [static] :411
StateGroup* StateGroup::New1()
{
    StateGroup* obj7 = (StateGroup*)uNew(StateGroup_typeof());
    obj7->ctor_1();
    return obj7;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno(405)
// -----------------------------------------------------------

// public enum StateTransition :405
uEnumType* StateTransition_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.StateTransition", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Parallel", 0LL,
        "Exclusive", 1LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.18.8\Triggers\$.uno(419)
// --------------------------------------------------------------------

// public sealed class TextInputActionTriggered :419
// {
::g::Fuse::Triggers::Trigger_type* TextInputActionTriggered_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.ObjectSize = sizeof(TextInputActionTriggered);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.TextInputActionTriggered", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)TextInputActionTriggered__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))TextInputActionTriggered__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))TextInputActionTriggered__OnUnrooted_fn;
    ::STRINGS[9] = uString::Const("TextInputActionTriggered must be a child of a TextEdit");
    ::STRINGS[1] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Controls\\0.18.8\\Triggers\\$.uno");
    ::STRINGS[5] = uString::Const("OnRooted");
    ::TYPES[19] = ::g::Uno::Int_typeof();
    ::TYPES[56] = ::g::Fuse::Controls::TextInputActionArgs_typeof();
    ::TYPES[57] = ::g::Fuse::Controls::TextEdit_typeof();
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    ::TYPES[0] = uObject_typeof();
    ::TYPES[58] = ::g::Fuse::Controls::TextInputActionHandler_typeof();
    type->SetFields(14,
        ::g::Fuse::Controls::TextEdit_typeof(), offsetof(::g::Fuse::Triggers::TextInputActionTriggered, _textEdit), 0,
        ::g::Fuse::Controls::TextInputActionType_typeof(), offsetof(::g::Fuse::Triggers::TextInputActionTriggered, _type), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)TextInputActionTriggered__New1_fn, 0, true, TextInputActionTriggered_typeof(), 0),
        new uFunction("get_Type", NULL, (void*)TextInputActionTriggered__get_Type_fn, 0, false, ::g::Fuse::Controls::TextInputActionType_typeof(), 0),
        new uFunction("set_Type", NULL, (void*)TextInputActionTriggered__set_Type_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::TextInputActionType_typeof()));
    return type;
}

// public generated TextInputActionTriggered() :419
void TextInputActionTriggered__ctor_2_fn(TextInputActionTriggered* __this)
{
    __this->ctor_2();
}

// public generated TextInputActionTriggered New() :419
void TextInputActionTriggered__New1_fn(TextInputActionTriggered** __retval)
{
    *__retval = TextInputActionTriggered::New1();
}

// private void OnActionTriggered(object s, Fuse.Controls.TextInputActionArgs args) :453
void TextInputActionTriggered__OnActionTriggered_fn(TextInputActionTriggered* __this, uObject* s, ::g::Fuse::Controls::TextInputActionArgs* args)
{
    __this->OnActionTriggered(s, args);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :429
void TextInputActionTriggered__OnRooted_fn(TextInputActionTriggered* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    __this->_textEdit = uAs< ::g::Fuse::Controls::TextEdit*>(__this->ParentNode(), ::TYPES[57/*Fuse.Controls.TextEdit*/]);

    if (__this->_textEdit == NULL)
        ::g::Fuse::Diagnostics::Error(::STRINGS[9/*"TextInputAc...*/], __this->ParentNode(), ::STRINGS[1/*"C:\\Program...*/], 435, ::STRINGS[5/*"OnRooted"*/]);
    else
        uPtr(__this->_textEdit)->add_ActionTriggered(uDelegate::New(::TYPES[58/*Fuse.Controls.TextInputActionHandler*/], (void*)TextInputActionTriggered__OnActionTriggered_fn, __this));
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :443
void TextInputActionTriggered__OnUnrooted_fn(TextInputActionTriggered* __this, ::g::Fuse::Node* parentNode)
{
    if (__this->_textEdit != NULL)
    {
        uPtr(__this->_textEdit)->remove_ActionTriggered(uDelegate::New(::TYPES[58/*Fuse.Controls.TextInputActionHandler*/], (void*)TextInputActionTriggered__OnActionTriggered_fn, __this));
        __this->_textEdit = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public Fuse.Controls.TextInputActionType get_Type() :424
void TextInputActionTriggered__get_Type_fn(TextInputActionTriggered* __this, int* __retval)
{
    *__retval = __this->Type();
}

// public void set_Type(Fuse.Controls.TextInputActionType value) :425
void TextInputActionTriggered__set_Type_fn(TextInputActionTriggered* __this, int* value)
{
    __this->Type(*value);
}

// public generated TextInputActionTriggered() [instance] :419
void TextInputActionTriggered::ctor_2()
{
    ctor_1();
}

// private void OnActionTriggered(object s, Fuse.Controls.TextInputActionArgs args) [instance] :453
void TextInputActionTriggered::OnActionTriggered(uObject* s, ::g::Fuse::Controls::TextInputActionArgs* args)
{
    if (uPtr(args)->Type() != Type())
        return;

    Pulse();
}

// public Fuse.Controls.TextInputActionType get_Type() [instance] :424
int TextInputActionTriggered::Type()
{
    return _type;
}

// public void set_Type(Fuse.Controls.TextInputActionType value) [instance] :425
void TextInputActionTriggered::Type(int value)
{
    _type = value;
}

// public generated TextInputActionTriggered New() [static] :419
TextInputActionTriggered* TextInputActionTriggered::New1()
{
    TextInputActionTriggered* obj1 = (TextInputActionTriggered*)uNew(TextInputActionTriggered_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno(552)
// -----------------------------------------------------------

// public sealed class Timeline :552
// {
Timeline_type* Timeline_typeof()
{
    static uSStrong<Timeline_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Timeline);
    options.TypeSize = sizeof(Timeline_type);
    type = (Timeline_type*)uClassType::New("Fuse.Triggers.Timeline", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)Timeline__New1_fn;
    type->fp_OnProgressChanged = (void(*)(::g::Fuse::Triggers::Trigger*))Timeline__OnProgressChanged_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Timeline__OnRooted_fn;
    type->interface1.fp_get_Progress = (void(*)(uObject*, double*))Timeline__Fuse_Triggers_IProgress_get_Progress_fn;
    type->interface0.fp_Stop = (void(*)(uObject*))Timeline__Stop1_fn;
    type->interface0.fp_PlayTo = (void(*)(uObject*, double*))Timeline__PlayTo1_fn;
    type->interface0.fp_Pause = (void(*)(uObject*))Timeline__Pause_fn;
    type->interface0.fp_Resume = (void(*)(uObject*))Timeline__Resume_fn;
    type->interface0.fp_get_CanPlayTo = (void(*)(uObject*, bool*))Timeline__get_CanPlayTo_fn;
    type->interface0.fp_get_CanStop = (void(*)(uObject*, bool*))Timeline__get_CanStop_fn;
    type->interface0.fp_get_CanPause = (void(*)(uObject*, bool*))Timeline__get_CanPause_fn;
    type->interface0.fp_get_CanResume = (void(*)(uObject*, bool*))Timeline__get_CanResume_fn;
    type->interface1.fp_add_ProgressChanged = (void(*)(uObject*, uDelegate*))Timeline__add_ProgressChanged_fn;
    type->interface1.fp_remove_ProgressChanged = (void(*)(uObject*, uDelegate*))Timeline__remove_ProgressChanged_fn;
    ::TYPES[25] = ::g::Uno::Delegate_typeof();
    ::TYPES[29] = ::g::Uno::EventHandler_typeof();
    ::TYPES[0] = uObject_typeof();
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    ::TYPES[38] = ::g::Fuse::Triggers::Trigger_typeof();
    ::TYPES[19] = ::g::Uno::Int_typeof();
    type->SetInterfaces(
        ::g::Fuse::Triggers::IPlayback_typeof(), offsetof(Timeline_type, interface0),
        ::g::Fuse::Triggers::IProgress_typeof(), offsetof(Timeline_type, interface1));
    type->SetFields(14,
        Timeline__State_typeof(), offsetof(::g::Fuse::Triggers::Timeline, _state), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Triggers::Timeline, _targetProgress), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Triggers::Timeline, ProgressChanged1), 0);
    type->Reflection.SetFunctions(13,
        new uFunction("get_CanPause", NULL, (void*)Timeline__get_CanPause_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanPlayTo", NULL, (void*)Timeline__get_CanPlayTo_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanResume", NULL, (void*)Timeline__get_CanResume_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanStop", NULL, (void*)Timeline__get_CanStop_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Timeline__New1_fn, 0, true, Timeline_typeof(), 0),
        new uFunction("Pause", NULL, (void*)Timeline__Pause_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("PlayTo", NULL, (void*)Timeline__PlayTo1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("add_ProgressChanged", NULL, (void*)Timeline__add_ProgressChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_ProgressChanged", NULL, (void*)Timeline__remove_ProgressChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("Resume", NULL, (void*)Timeline__Resume_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Stop", NULL, (void*)Timeline__Stop1_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_TargetProgress", NULL, (void*)Timeline__get_TargetProgress_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_TargetProgress", NULL, (void*)Timeline__set_TargetProgress_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()));
    return type;
}

// public generated Timeline() :552
void Timeline__ctor_2_fn(Timeline* __this)
{
    __this->ctor_2();
}

// public bool get_CanPause() :634
void Timeline__get_CanPause_fn(Timeline* __this, bool* __retval)
{
    *__retval = __this->CanPause();
}

// public bool get_CanPlayTo() :630
void Timeline__get_CanPlayTo_fn(Timeline* __this, bool* __retval)
{
    *__retval = __this->CanPlayTo();
}

// public bool get_CanResume() :636
void Timeline__get_CanResume_fn(Timeline* __this, bool* __retval)
{
    *__retval = __this->CanResume();
}

// public bool get_CanStop() :632
void Timeline__get_CanStop_fn(Timeline* __this, bool* __retval)
{
    *__retval = __this->CanStop();
}

// public double Fuse.Triggers.IProgress.get_Progress() :582
void Timeline__Fuse_Triggers_IProgress_get_Progress_fn(Timeline* __this, double* __retval)
{
    return *__retval = __this->Progress(), void();
}

// public generated Timeline New() :552
void Timeline__New1_fn(Timeline** __retval)
{
    *__retval = Timeline::New1();
}

// protected override sealed void OnProgressChanged() :587
void Timeline__OnProgressChanged_fn(Timeline* __this)
{
    if (::g::Uno::Delegate::op_Inequality(__this->ProgressChanged1, NULL))
        uPtr(__this->ProgressChanged1)->Invoke(2, __this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::New1());
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :574
void Timeline__OnRooted_fn(Timeline* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    __this->BypassSeek(__this->_targetProgress, 0);
}

// public void Pause() :612
void Timeline__Pause_fn(Timeline* __this)
{
    __this->Pause();
}

// public void PlayTo(double progress) :603
void Timeline__PlayTo1_fn(Timeline* __this, double* progress)
{
    __this->PlayTo1(*progress);
}

// public generated void add_ProgressChanged(Uno.EventHandler value) :585
void Timeline__add_ProgressChanged_fn(Timeline* __this, uDelegate* value)
{
    __this->add_ProgressChanged(value);
}

// public generated void remove_ProgressChanged(Uno.EventHandler value) :585
void Timeline__remove_ProgressChanged_fn(Timeline* __this, uDelegate* value)
{
    __this->remove_ProgressChanged(value);
}

// public void Resume() :621
void Timeline__Resume_fn(Timeline* __this)
{
    __this->Resume();
}

// public void Stop() :593
void Timeline__Stop1_fn(Timeline* __this)
{
    __this->Stop1();
}

// public double get_TargetProgress() :565
void Timeline__get_TargetProgress_fn(Timeline* __this, double* __retval)
{
    *__retval = __this->TargetProgress();
}

// public void set_TargetProgress(double value) :566
void Timeline__set_TargetProgress_fn(Timeline* __this, double* value)
{
    __this->TargetProgress(*value);
}

// public generated Timeline() [instance] :552
void Timeline::ctor_2()
{
    ctor_1();
}

// public bool get_CanPause() [instance] :634
bool Timeline::CanPause()
{
    return true;
}

// public bool get_CanPlayTo() [instance] :630
bool Timeline::CanPlayTo()
{
    return true;
}

// public bool get_CanResume() [instance] :636
bool Timeline::CanResume()
{
    return true;
}

// public bool get_CanStop() [instance] :632
bool Timeline::CanStop()
{
    return true;
}

// public void Pause() [instance] :612
void Timeline::Pause()
{
    if (IsRooted())
    {
        _state = 1;
        Seek(Progress());
    }
}

// public void PlayTo(double progress) [instance] :603
void Timeline::PlayTo1(double progress)
{
    if (IsRooted())
    {
        _state = 0;
        PlayTo(progress, 0);
    }
}

// public generated void add_ProgressChanged(Uno.EventHandler value) [instance] :585
void Timeline::add_ProgressChanged(uDelegate* value)
{
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ProgressChanged1, value), ::TYPES[29/*Uno.EventHandler*/]);
}

// public generated void remove_ProgressChanged(Uno.EventHandler value) [instance] :585
void Timeline::remove_ProgressChanged(uDelegate* value)
{
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ProgressChanged1, value), ::TYPES[29/*Uno.EventHandler*/]);
}

// public void Resume() [instance] :621
void Timeline::Resume()
{
    if (IsRooted())
    {
        _state = 0;
        PlayTo(_targetProgress, 0);
    }
}

// public void Stop() [instance] :593
void Timeline::Stop1()
{
    if (IsRooted())
    {
        Seek(Progress());
        _targetProgress = Progress();
        _state = 1;
    }
}

// public double get_TargetProgress() [instance] :565
double Timeline::TargetProgress()
{
    return _targetProgress;
}

// public void set_TargetProgress(double value) [instance] :566
void Timeline::TargetProgress(double value)
{
    _targetProgress = value;

    if (IsRooted() && (_state == 0))
        PlayTo1(_targetProgress);
}

// public generated Timeline New() [static] :552
Timeline* Timeline::New1()
{
    Timeline* obj1 = (Timeline*)uNew(Timeline_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno(666)
// -----------------------------------------------------------

// public abstract class Trigger :666
// {
Trigger_type* Trigger_typeof()
{
    static uSStrong<Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.ObjectSize = sizeof(Trigger);
    options.TypeSize = sizeof(Trigger_type);
    type = (Trigger_type*)uClassType::New("Fuse.Triggers.Trigger", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_OnNodeAdded = Trigger__OnNodeAdded_fn;
    type->fp_OnProgressChanged = Trigger__OnProgressChanged_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Trigger__OnUnrooted_fn;
    ::STRINGS[10] = uString::Const("Trigger started prior to being rooted: ");
    ::TYPES[59] = ::g::Fuse::Triggers::IAddRemove_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[60] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[61] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[62] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Behavior_typeof());
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    ::TYPES[63] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Behavior_typeof());
    ::TYPES[19] = ::g::Uno::Int_typeof();
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    ::TYPES[64] = ::g::Fuse::Animations::TriggerAnimationState_typeof();
    ::TYPES[65] = ::g::Uno::Action1_typeof()->MakeType(uObject_typeof());
    ::TYPES[36] = ::g::Uno::Action_typeof();
    ::TYPES[5] = ::g::Uno::Bool_typeof();
    ::TYPES[66] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    ::TYPES[34] = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    ::TYPES[48] = ::g::Uno::Double_typeof();
    ::TYPES[39] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[37] = ::g::Fuse::Animations::TrackAnimator_typeof();
    ::TYPES[67] = ::g::Fuse::Animations::TriggerAnimation_typeof();
    ::TYPES[25] = ::g::Uno::Delegate_typeof();
    ::TYPES[55] = ::g::Uno::Action1_typeof()->MakeType(Trigger_typeof());
    ::TYPES[68] = ::g::Uno::Float_typeof();
    ::TYPES[0] = uObject_typeof();
    ::TYPES[69] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    ::TYPES[70] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Behavior_typeof());
    ::TYPES[71] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Behavior_typeof());
    ::TYPES[72] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[73] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Node_typeof());
    type->SetFields(3,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof()), offsetof(::g::Fuse::Triggers::Trigger, _actions), 0,
        ::g::Fuse::Animations::TriggerAnimation_typeof(), offsetof(::g::Fuse::Triggers::Trigger, _animation), 0,
        ::g::Fuse::Animations::TriggerAnimationState_typeof(), offsetof(::g::Fuse::Triggers::Trigger, _animState), 0,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Behavior_typeof()), offsetof(::g::Fuse::Triggers::Trigger, _behaviors), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Triggers::Trigger, _doneAction), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Trigger, _doneOn), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::Trigger, _isStarted), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Triggers::Trigger, _lastPlayDirection), 0,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Triggers::Trigger, _nodes), 0,
        ::g::Fuse::Triggers::TriggerBypassMode_typeof(), offsetof(::g::Fuse::Triggers::Trigger, _Bypass), 0,
        ::g::Uno::Action1_typeof()->MakeType(Trigger_typeof()), offsetof(::g::Fuse::Triggers::Trigger, PlaybackDone1), 0);
    type->Reflection.SetFunctions(16,
        new uFunction("get_Actions", NULL, (void*)Trigger__get_Actions_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof()), 0),
        new uFunction("get_Animation", NULL, (void*)Trigger__get_Animation_fn, 0, false, ::g::Fuse::Animations::TriggerAnimation_typeof(), 0),
        new uFunction("set_Animation", NULL, (void*)Trigger__set_Animation_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::TriggerAnimation_typeof()),
        new uFunction("get_Animators", NULL, (void*)Trigger__get_Animators_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof()), 0),
        new uFunction("get_BackwardAnimation", NULL, (void*)Trigger__get_BackwardAnimation_fn, 0, false, ::g::Fuse::Animations::TriggerAnimation_typeof(), 0),
        new uFunction("set_BackwardAnimation", NULL, (void*)Trigger__set_BackwardAnimation_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::TriggerAnimation_typeof()),
        new uFunction("get_Behaviors", NULL, (void*)Trigger__get_Behaviors_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Behavior_typeof()), 0),
        new uFunction("get_Bypass", NULL, (void*)Trigger__get_Bypass_fn, 0, false, ::g::Fuse::Triggers::TriggerBypassMode_typeof(), 0),
        new uFunction("set_Bypass", NULL, (void*)Trigger__set_Bypass_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::TriggerBypassMode_typeof()),
        new uFunction("get_HasActions", NULL, (void*)Trigger__get_HasActions_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_HasAnimators", NULL, (void*)Trigger__get_HasAnimators_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_Nodes", NULL, (void*)Trigger__get_Nodes_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof()), 0),
        new uFunction("get_StretchDuration", NULL, (void*)Trigger__get_StretchDuration_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_StretchDuration", NULL, (void*)Trigger__set_StretchDuration_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_TimeMultiplier", NULL, (void*)Trigger__get_TimeMultiplier_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_TimeMultiplier", NULL, (void*)Trigger__set_TimeMultiplier_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()));
    return type;
}

// protected generated Trigger() :666
void Trigger__ctor_1_fn(Trigger* __this)
{
    __this->ctor_1();
}

// public Uno.Collections.IList<Fuse.Triggers.Actions.TriggerAction> get_Actions() :726
void Trigger__get_Actions_fn(Trigger* __this, uObject** __retval)
{
    *__retval = __this->Actions();
}

// protected void Activate([Uno.Action done]) :893
void Trigger__Activate_fn(Trigger* __this, uDelegate* done)
{
    __this->Activate(done);
}

// protected void AddContent(Fuse.Node target) :780
void Trigger__AddContent_fn(Trigger* __this, ::g::Fuse::Node* target)
{
    __this->AddContent(target);
}

// public Fuse.Animations.TriggerAnimation get_Animation() :685
void Trigger__get_Animation_fn(Trigger* __this, ::g::Fuse::Animations::TriggerAnimation** __retval)
{
    *__retval = __this->Animation();
}

// public void set_Animation(Fuse.Animations.TriggerAnimation value) :690
void Trigger__set_Animation_fn(Trigger* __this, ::g::Fuse::Animations::TriggerAnimation* value)
{
    __this->Animation(value);
}

// public Uno.Collections.IList<Fuse.Animations.Animator> get_Animators() :716
void Trigger__get_Animators_fn(Trigger* __this, uObject** __retval)
{
    *__retval = __this->Animators();
}

// public Fuse.Animations.TriggerAnimation get_BackwardAnimation() :710
void Trigger__get_BackwardAnimation_fn(Trigger* __this, ::g::Fuse::Animations::TriggerAnimation** __retval)
{
    *__retval = __this->BackwardAnimation();
}

// public void set_BackwardAnimation(Fuse.Animations.TriggerAnimation value) :711
void Trigger__set_BackwardAnimation_fn(Trigger* __this, ::g::Fuse::Animations::TriggerAnimation* value)
{
    __this->BackwardAnimation(value);
}

// public Uno.Collections.IList<Fuse.Behavior> get_Behaviors() :751
void Trigger__get_Behaviors_fn(Trigger* __this, uObject** __retval)
{
    *__retval = __this->Behaviors();
}

// public generated Fuse.Triggers.TriggerBypassMode get_Bypass() :681
void Trigger__get_Bypass_fn(Trigger* __this, int* __retval)
{
    *__retval = __this->Bypass();
}

// public generated void set_Bypass(Fuse.Triggers.TriggerBypassMode value) :681
void Trigger__set_Bypass_fn(Trigger* __this, int* value)
{
    __this->Bypass(*value);
}

// protected void BypassActivate() :906
void Trigger__BypassActivate_fn(Trigger* __this)
{
    __this->BypassActivate();
}

// protected void BypassDeactivate() :933
void Trigger__BypassDeactivate_fn(Trigger* __this)
{
    __this->BypassDeactivate();
}

// protected void BypassSeek(double progress, [Fuse.Animations.AnimationVariant direction]) :1101
void Trigger__BypassSeek_fn(Trigger* __this, double* progress, int* direction)
{
    __this->BypassSeek(*progress, *direction);
}

// private void CleanupState() :972
void Trigger__CleanupState_fn(Trigger* __this)
{
    __this->CleanupState();
}

// private void CreateState() :981
void Trigger__CreateState_fn(Trigger* __this)
{
    __this->CreateState();
}

// protected void Deactivate() :920
void Trigger__Deactivate_fn(Trigger* __this)
{
    __this->Deactivate();
}

// private void EnsureAnimationLength() :1001
void Trigger__EnsureAnimationLength_fn(Trigger* __this)
{
    __this->EnsureAnimationLength();
}

// private bool EnsureState(double progress) :991
void Trigger__EnsureState_fn(Trigger* __this, double* progress, bool* __retval)
{
    *__retval = __this->EnsureState(*progress);
}

// public bool get_HasActions() :735
void Trigger__get_HasActions_fn(Trigger* __this, bool* __retval)
{
    *__retval = __this->HasActions();
}

// public bool get_HasAnimators() :720
void Trigger__get_HasAnimators_fn(Trigger* __this, bool* __retval)
{
    *__retval = __this->HasAnimators();
}

// protected void InversePulse() :953
void Trigger__InversePulse_fn(Trigger* __this)
{
    __this->InversePulse();
}

// public Uno.Collections.IList<Fuse.Node> get_Nodes() :741
void Trigger__get_Nodes_fn(Trigger* __this, uObject** __retval)
{
    *__retval = __this->Nodes();
}

// protected void OnBehaviorAdded(Fuse.Behavior b) :758
void Trigger__OnBehaviorAdded_fn(Trigger* __this, ::g::Fuse::Behavior* b)
{
    __this->OnBehaviorAdded(b);
}

// protected void OnBehaviorRemoved(Fuse.Behavior b) :763
void Trigger__OnBehaviorRemoved_fn(Trigger* __this, ::g::Fuse::Behavior* b)
{
    __this->OnBehaviorRemoved(b);
}

// protected virtual void OnNodeAdded(Fuse.Node n) :768
void Trigger__OnNodeAdded_fn(Trigger* __this, ::g::Fuse::Node* n)
{
    uObject* iar = uAs<uObject*>(__this->ParentNode(), ::TYPES[59/*Fuse.Triggers.IAddRemove<Fuse.Node>*/]);

    if ((iar != NULL) && __this->_isStarted)
        ::g::Fuse::Triggers::IAddRemove::Add_ex(uInterface(uPtr(iar), ::TYPES[59/*Fuse.Triggers.IAddRemove<Fuse.Node>*/]), n);
}

// protected void OnNodeRemoved(Fuse.Node n) :774
void Trigger__OnNodeRemoved_fn(Trigger* __this, ::g::Fuse::Node* n)
{
    __this->OnNodeRemoved(n);
}

// private void OnPlaybackDone(object s) :852
void Trigger__OnPlaybackDone_fn(Trigger* __this, uObject* s)
{
    __this->OnPlaybackDone(s);
}

// protected virtual void OnProgressChanged() :1044
void Trigger__OnProgressChanged_fn(Trigger* __this)
{
}

// private void OnProgressUpdated(object s) :1048
void Trigger__OnProgressUpdated_fn(Trigger* __this, uObject* s)
{
    __this->OnProgressUpdated(s);
}

// protected override void OnUnrooted(Fuse.Node parentNode) :1119
void Trigger__OnUnrooted_fn(Trigger* __this, ::g::Fuse::Node* parentNode)
{
    __this->Stop();
    __this->CleanupState();
    ::g::Fuse::Behavior__OnUnrooted_fn(__this, parentNode);
}

// internal generated void add_PlaybackDone(Uno.Action<Fuse.Triggers.Trigger> value) :679
void Trigger__add_PlaybackDone_fn(Trigger* __this, uDelegate* value)
{
    __this->add_PlaybackDone(value);
}

// internal generated void remove_PlaybackDone(Uno.Action<Fuse.Triggers.Trigger> value) :679
void Trigger__remove_PlaybackDone_fn(Trigger* __this, uDelegate* value)
{
    __this->remove_PlaybackDone(value);
}

// protected void PlayEnd(bool on, [Uno.Action done]) :963
void Trigger__PlayEnd_fn(Trigger* __this, bool* on, uDelegate* done)
{
    __this->PlayEnd(*on, done);
}

// private void PlayOn() :958
void Trigger__PlayOn_fn(Trigger* __this)
{
    __this->PlayOn();
}

// protected void PlayTo(double progress, [Fuse.Animations.AnimationVariant variant]) :1079
void Trigger__PlayTo_fn(Trigger* __this, double* progress, int* variant)
{
    __this->PlayTo(*progress, *variant);
}

// protected double get_Progress() :820
void Trigger__get_Progress_fn(Trigger* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// protected void Pulse() :946
void Trigger__Pulse_fn(Trigger* __this)
{
    __this->Pulse();
}

// protected void RemoveContent(Fuse.Node target) :796
void Trigger__RemoveContent_fn(Trigger* __this, ::g::Fuse::Node* target)
{
    __this->RemoveContent(target);
}

// protected void Seek(double progress) :1085
void Trigger__Seek_fn(Trigger* __this, double* progress)
{
    __this->Seek(*progress);
}

// protected void Seek(double progress, Fuse.Animations.AnimationVariant direction) :1090
void Trigger__Seek1_fn(Trigger* __this, double* progress, int* direction)
{
    __this->Seek1(*progress, *direction);
}

// private void SetDone(Uno.Action done, bool on) :812
void Trigger__SetDone_fn(Trigger* __this, uDelegate* done, bool* on)
{
    __this->SetDone(done, *on);
}

// private void SetPlayDirection(int next) :830
void Trigger__SetPlayDirection_fn(Trigger* __this, int* next)
{
    __this->SetPlayDirection(*next);
}

// protected void Start() :873
void Trigger__Start_fn(Trigger* __this)
{
    __this->Start();
}

// protected void Stop() :884
void Trigger__Stop_fn(Trigger* __this)
{
    __this->Stop();
}

// public double get_StretchDuration() :704
void Trigger__get_StretchDuration_fn(Trigger* __this, double* __retval)
{
    *__retval = __this->StretchDuration();
}

// public void set_StretchDuration(double value) :705
void Trigger__set_StretchDuration_fn(Trigger* __this, double* value)
{
    __this->StretchDuration(*value);
}

// public double get_TimeMultiplier() :698
void Trigger__get_TimeMultiplier_fn(Trigger* __this, double* __retval)
{
    *__retval = __this->TimeMultiplier();
}

// public void set_TimeMultiplier(double value) :699
void Trigger__set_TimeMultiplier_fn(Trigger* __this, double* value)
{
    __this->TimeMultiplier(*value);
}

// protected generated Trigger() [instance] :666
void Trigger::ctor_1()
{
    ctor_();
}

// public Uno.Collections.IList<Fuse.Triggers.Actions.TriggerAction> get_Actions() [instance] :726
uObject* Trigger::Actions()
{
    if (_actions == NULL)
        _actions = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[66/*Uno.Collections.List<Fuse.Triggers.Actions.TriggerAction>*/]));

    return (uObject*)_actions;
}

// protected void Activate([Uno.Action done]) [instance] :893
void Trigger::Activate(uDelegate* done)
{
    Start();
    SetDone(done, true);

    if ((Progress() < 1.0) || (_lastPlayDirection != 0))
        SetPlayDirection(1);

    if (EnsureState(1.0))
        uPtr(_animState)->PlayOn();
}

// protected void AddContent(Fuse.Node target) [instance] :780
void Trigger::AddContent(::g::Fuse::Node* target)
{
    ::g::Fuse::Node* ret1;
    ::g::Fuse::Behavior* ret2;
    uObject* iarn = uAs<uObject*>(target, ::TYPES[59/*Fuse.Triggers.IAddRemove<Fuse.Node>*/]);

    if ((_nodes != NULL) && (iarn != NULL))

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_nodes), ::TYPES[60/*Uno.Collections.ICollection<Fuse.Node>*/])); ++i)
            ::g::Fuse::Triggers::IAddRemove::Add_ex(uInterface(uPtr(iarn), ::TYPES[59/*Fuse.Triggers.IAddRemove<Fuse.Node>*/]), (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(_nodes), ::TYPES[61/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret1), ret1));

    if (_behaviors != NULL)

        for (int i1 = 0; i1 < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_behaviors), ::TYPES[62/*Uno.Collections.ICollection<Fuse.Behavior>*/])); ++i1)
            ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(target)->Behaviors()), ::TYPES[62/*Uno.Collections.ICollection<Fuse.Behavior>*/]), (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(_behaviors), ::TYPES[63/*Uno.Collections.IList<Fuse.Behavior>*/]), uCRef<int>(i1), &ret2), ret2));
}

// public Fuse.Animations.TriggerAnimation get_Animation() [instance] :685
::g::Fuse::Animations::TriggerAnimation* Trigger::Animation()
{
    if (_animation == NULL)
        _animation = ::g::Fuse::Animations::TriggerAnimation::New1();

    return _animation;
}

// public void set_Animation(Fuse.Animations.TriggerAnimation value) [instance] :690
void Trigger::Animation(::g::Fuse::Animations::TriggerAnimation* value)
{
    _animation = value;
}

// public Uno.Collections.IList<Fuse.Animations.Animator> get_Animators() [instance] :716
uObject* Trigger::Animators()
{
    return uPtr(Animation())->Animators();
}

// public Fuse.Animations.TriggerAnimation get_BackwardAnimation() [instance] :710
::g::Fuse::Animations::TriggerAnimation* Trigger::BackwardAnimation()
{
    return uPtr(Animation())->Backward();
}

// public void set_BackwardAnimation(Fuse.Animations.TriggerAnimation value) [instance] :711
void Trigger::BackwardAnimation(::g::Fuse::Animations::TriggerAnimation* value)
{
    uPtr(Animation())->Backward(value);
}

// public Uno.Collections.IList<Fuse.Behavior> get_Behaviors() [instance] :751
uObject* Trigger::Behaviors()
{
    if (_behaviors == NULL)
        _behaviors = (uObject*)((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[70/*Uno.Collections.ObservableList<Fuse.Behavior>*/], uDelegate::New(::TYPES[71/*Uno.Action<Fuse.Behavior>*/], (void*)Trigger__OnBehaviorAdded_fn, this), uDelegate::New(::TYPES[71/*Uno.Action<Fuse.Behavior>*/], (void*)Trigger__OnBehaviorRemoved_fn, this)));

    return _behaviors;
}

// public generated Fuse.Triggers.TriggerBypassMode get_Bypass() [instance] :681
int Trigger::Bypass()
{
    return _Bypass;
}

// public generated void set_Bypass(Fuse.Triggers.TriggerBypassMode value) [instance] :681
void Trigger::Bypass(int value)
{
    _Bypass = value;
}

// protected void BypassActivate() [instance] :906
void Trigger::BypassActivate()
{
    if (Bypass() == 1)
        Activate(NULL);
    else
    {
        BypassSeek(1.0, 0);
        PlayOn();
    }
}

// protected void BypassDeactivate() [instance] :933
void Trigger::BypassDeactivate()
{
    if (Bypass() == 1)
        Deactivate();
    else
    {
        BypassSeek(0.0, 0);
        Deactivate();
    }
}

// protected void BypassSeek(double progress, [Fuse.Animations.AnimationVariant direction]) [instance] :1101
void Trigger::BypassSeek(double progress, int direction)
{
    if (Bypass() == 1)
    {
        Seek1(progress, direction);
        return;
    }

    if (progress > 0.0)
        Start();
    else
        Stop();

    if (EnsureState(progress))
        uPtr(_animState)->SeekProgress(progress, direction, 3);
}

// private void CleanupState() [instance] :972
void Trigger::CleanupState()
{
    if (_animState != NULL)
    {
        uPtr(_animState)->Dispose();
        _animState = NULL;
    }
}

// private void CreateState() [instance] :981
void Trigger::CreateState()
{
    CleanupState();
    EnsureAnimationLength();
    _animState = uPtr(Animation())->CreateState(ParentNode());
    uPtr(_animState)->add_PlaybackDone(uDelegate::New(::TYPES[65/*Uno.Action<object>*/], (void*)Trigger__OnPlaybackDone_fn, this));
    uPtr(_animState)->add_ProgressUpdated(uDelegate::New(::TYPES[65/*Uno.Action<object>*/], (void*)Trigger__OnProgressUpdated_fn, this));
}

// protected void Deactivate() [instance] :920
void Trigger::Deactivate()
{
    if ((Progress() > 0.0) || (_lastPlayDirection != 0))
        SetPlayDirection(-1);

    if ((Progress() <= 0.0) && (_animState == NULL))
        Stop();
    else
        PlayEnd(false, uDelegate::New(::TYPES[36/*Uno.Action*/], (void*)Trigger__Stop_fn, this));
}

// private void EnsureAnimationLength() [instance] :1001
void Trigger::EnsureAnimationLength()
{
    ::g::Fuse::Triggers::Actions::TriggerAction* ret3;

    if (!HasActions())
        return;

    double animFore = uPtr(Animation())->GetAnimatorsDuration(0);
    double animBack = uPtr(Animation())->GetAnimatorsDuration(1);
    double actFore = 0.0;
    double actBack = 0.0;

    for (int i = 0; i < uPtr(_actions)->Count(); ++i)
    {
        ::g::Fuse::Triggers::Actions::TriggerAction* action = (::g::Uno::Collections::List__get_Item_fn(uPtr(_actions), uCRef<int>(i), &ret3), ret3);
        float when = uPtr(action)->Delay();

        if ((action->Direction() == 0) || (action->Direction() == 2))
            actFore = ::g::Uno::Math::Max((double)when, actFore);

        if ((action->Direction() == 1) || (action->Direction() == 2))
            actBack = ::g::Uno::Math::Max((double)when, actBack);
    }

    if ((actFore <= animFore) && (actBack <= animBack))
        return;

    ::g::Fuse::Animations::Nothing* n = ::g::Fuse::Animations::Nothing::New1();
    n->Delay(actFore);
    n->DelayBack(actBack);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[39/*Fuse.Animations.Animator*/])), n);

    if (BackwardAnimation() != NULL)
    {
        n = ::g::Fuse::Animations::Nothing::New1();
        n->Delay(actBack);
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(BackwardAnimation())->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[39/*Fuse.Animations.Animator*/])), n);
    }
}

// private bool EnsureState(double progress) [instance] :991
bool Trigger::EnsureState(double progress)
{
    if (progress > 0.0)
    {
        if ((_animState == NULL) && (HasAnimators() || HasActions()))
            CreateState();
    }

    return _animState != NULL;
}

// public bool get_HasActions() [instance] :735
bool Trigger::HasActions()
{
    return (_actions != NULL) && (uPtr(_actions)->Count() > 0);
}

// public bool get_HasAnimators() [instance] :720
bool Trigger::HasAnimators()
{
    return (_animation != NULL) && uPtr(_animation)->HasAnimators();
}

// protected void InversePulse() [instance] :953
void Trigger::InversePulse()
{
    PlayEnd(false, uDelegate::New(::TYPES[36/*Uno.Action*/], (void*)Trigger__PlayOn_fn, this));
}

// public Uno.Collections.IList<Fuse.Node> get_Nodes() [instance] :741
uObject* Trigger::Nodes()
{
    if (_nodes == NULL)
        _nodes = (uObject*)((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[72/*Uno.Collections.ObservableList<Fuse.Node>*/], uDelegate::New(::TYPES[73/*Uno.Action<Fuse.Node>*/], this, offsetof(Trigger_type, fp_OnNodeAdded)), uDelegate::New(::TYPES[73/*Uno.Action<Fuse.Node>*/], (void*)Trigger__OnNodeRemoved_fn, this)));

    return _nodes;
}

// protected void OnBehaviorAdded(Fuse.Behavior b) [instance] :758
void Trigger::OnBehaviorAdded(::g::Fuse::Behavior* b)
{
    if (IsRooted() && _isStarted)
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ParentNode())->Behaviors()), ::TYPES[62/*Uno.Collections.ICollection<Fuse.Behavior>*/]), b);
}

// protected void OnBehaviorRemoved(Fuse.Behavior b) [instance] :763
void Trigger::OnBehaviorRemoved(::g::Fuse::Behavior* b)
{
    bool ret4;

    if (IsRooted() && _isStarted)
        ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(uPtr(ParentNode())->Behaviors()), ::TYPES[62/*Uno.Collections.ICollection<Fuse.Behavior>*/]), b, &ret4);
}

// protected void OnNodeRemoved(Fuse.Node n) [instance] :774
void Trigger::OnNodeRemoved(::g::Fuse::Node* n)
{
    uObject* iar = uAs<uObject*>(ParentNode(), ::TYPES[59/*Fuse.Triggers.IAddRemove<Fuse.Node>*/]);

    if ((iar != NULL) && _isStarted)
        ::g::Fuse::Triggers::IAddRemove::Remove_ex(uInterface(uPtr(iar), ::TYPES[59/*Fuse.Triggers.IAddRemove<Fuse.Node>*/]), n);
}

// private void OnPlaybackDone(object s) [instance] :852
void Trigger::OnPlaybackDone(uObject* s)
{
    SetPlayDirection(0);

    if (::g::Uno::Delegate::op_Inequality(PlaybackDone1, NULL))
        uPtr(PlaybackDone1)->InvokeVoid(this);

    if (::g::Uno::Delegate::op_Equality(_doneAction, NULL))
        return;

    uDelegate* da = _doneAction;
    _doneAction = NULL;

    if ((_doneOn && uPtr(_animState)->ProgressFullOn()) || (!_doneOn && uPtr(_animState)->ProgressFullOff()))
        uPtr(da)->InvokeVoid();
}

// private void OnProgressUpdated(object s) [instance] :1048
void Trigger::OnProgressUpdated(uObject* s)
{
    ::g::Fuse::Triggers::Actions::TriggerAction* ret5;
    double prev = uPtr(_animState)->PreviousProgress();
    double cur = uPtr(_animState)->Progress();
    double diff = cur - prev;

    if (diff == 0.0)
        return;

    OnProgressChanged();
    SetPlayDirection((diff > 0.0) ? 1 : (diff < 0.0) ? -1 : 0);

    if (_actions == NULL)
        return;

    int dir = (diff > 0.0) ? 0 : 1;

    for (int i = 0; i < uPtr(_actions)->Count(); ++i)
    {
        ::g::Fuse::Triggers::Actions::TriggerAction* action = (::g::Uno::Collections::List__get_Item_fn(uPtr(_actions), uCRef<int>(i), &ret5), ret5);

        if (!uPtr(action)->IsProgressTriggered())
            continue;

        float tp = uPtr(action)->ProgressWhen((float)uPtr(_animState)->CurrentAnimatorsDuration());
        bool call = (dir == 0) ? (((double)tp >= prev) && ((double)tp < cur)) || ((tp == 1.0f) && (cur == 1.0)) : (((double)tp <= prev) && ((double)tp > cur)) || ((tp == 0.0f) && (cur == 0.0));

        if (call && ((action->Direction() == 2) || (action->Direction() == dir)))
            action->PerformFromNode(ParentNode());
    }
}

// internal generated void add_PlaybackDone(Uno.Action<Fuse.Triggers.Trigger> value) [instance] :679
void Trigger::add_PlaybackDone(uDelegate* value)
{
    PlaybackDone1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PlaybackDone1, value), ::TYPES[55/*Uno.Action<Fuse.Triggers.Trigger>*/]);
}

// internal generated void remove_PlaybackDone(Uno.Action<Fuse.Triggers.Trigger> value) [instance] :679
void Trigger::remove_PlaybackDone(uDelegate* value)
{
    PlaybackDone1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PlaybackDone1, value), ::TYPES[55/*Uno.Action<Fuse.Triggers.Trigger>*/]);
}

// protected void PlayEnd(bool on, [Uno.Action done]) [instance] :963
void Trigger::PlayEnd(bool on, uDelegate* done)
{
    if (on)
        Start();

    SetDone(done, on);

    if (EnsureState((double)(on ? 1 : 0)))
        uPtr(_animState)->PlayEnd(on);
}

// private void PlayOn() [instance] :958
void Trigger::PlayOn()
{
    PlayEnd(true, NULL);
}

// protected void PlayTo(double progress, [Fuse.Animations.AnimationVariant variant]) [instance] :1079
void Trigger::PlayTo(double progress, int variant)
{
    if (EnsureState(progress))
        uPtr(_animState)->PlayToProgress(progress, variant);
}

// protected double get_Progress() [instance] :820
double Trigger::Progress()
{
    if (_animState != NULL)
        return uPtr(_animState)->Progress();

    return 0.0;
}

// protected void Pulse() [instance] :946
void Trigger::Pulse()
{
    SetPlayDirection(0);
    Activate(uDelegate::New(::TYPES[36/*Uno.Action*/], (void*)Trigger__Deactivate_fn, this));
}

// protected void RemoveContent(Fuse.Node target) [instance] :796
void Trigger::RemoveContent(::g::Fuse::Node* target)
{
    ::g::Fuse::Node* ret6;
    bool ret7;
    ::g::Fuse::Behavior* ret8;
    uObject* iarn = uAs<uObject*>(target, ::TYPES[59/*Fuse.Triggers.IAddRemove<Fuse.Node>*/]);

    if ((_nodes != NULL) && (iarn != NULL))

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_nodes), ::TYPES[60/*Uno.Collections.ICollection<Fuse.Node>*/])); ++i)
            ::g::Fuse::Triggers::IAddRemove::Remove_ex(uInterface(uPtr(iarn), ::TYPES[59/*Fuse.Triggers.IAddRemove<Fuse.Node>*/]), (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(_nodes), ::TYPES[61/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret6), ret6));

    if (_behaviors != NULL)

        for (int i1 = 0; i1 < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_behaviors), ::TYPES[62/*Uno.Collections.ICollection<Fuse.Behavior>*/])); ++i1)
            ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(uPtr(target)->Behaviors()), ::TYPES[62/*Uno.Collections.ICollection<Fuse.Behavior>*/]), (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(_behaviors), ::TYPES[63/*Uno.Collections.IList<Fuse.Behavior>*/]), uCRef<int>(i1), &ret8), ret8), &ret7);
}

// protected void Seek(double progress) [instance] :1085
void Trigger::Seek(double progress)
{
    Seek1(progress, 0);
}

// protected void Seek(double progress, Fuse.Animations.AnimationVariant direction) [instance] :1090
void Trigger::Seek1(double progress, int direction)
{
    if (progress > 0.0)
        Start();
    else
        Stop();

    if (EnsureState(progress))
        uPtr(_animState)->SeekProgress(progress, direction, 1);
}

// private void SetDone(Uno.Action done, bool on) [instance] :812
void Trigger::SetDone(uDelegate* done, bool on)
{
    _doneOn = on;
    _doneAction = done;
}

// private void SetPlayDirection(int next) [instance] :830
void Trigger::SetPlayDirection(int next)
{
    ::g::Fuse::Triggers::Actions::TriggerAction* ret9;

    if (next == _lastPlayDirection)
        return;

    _lastPlayDirection = next;

    if ((next == 0) || (_actions == NULL))
        return;

    int dir = (next > 0) ? 0 : 1;

    for (int i = 0; i < uPtr(_actions)->Count(); ++i)
    {
        ::g::Fuse::Triggers::Actions::TriggerAction* action = (::g::Uno::Collections::List__get_Item_fn(uPtr(_actions), uCRef<int>(i), &ret9), ret9);

        if (uPtr(action)->IsProgressTriggered())
            continue;

        if ((uPtr(action)->Direction() == dir) || (uPtr(action)->Direction() == 2))
            uPtr(action)->PerformFromNode(ParentNode());
    }
}

// protected void Start() [instance] :873
void Trigger::Start()
{
    if (!_isStarted)
    {
        if (!TriggerCanStartTest())
            U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[10/*"Trigger sta...*/], this)));

        AddContent(ParentNode());
        _isStarted = true;
    }
}

// protected void Stop() [instance] :884
void Trigger::Stop()
{
    if (_isStarted)
    {
        RemoveContent(ParentNode());
        _isStarted = false;
    }
}

// public double get_StretchDuration() [instance] :704
double Trigger::StretchDuration()
{
    return uPtr(Animation())->StretchDuration();
}

// public void set_StretchDuration(double value) [instance] :705
void Trigger::StretchDuration(double value)
{
    uPtr(Animation())->StretchDuration(value);
}

// public double get_TimeMultiplier() [instance] :698
double Trigger::TimeMultiplier()
{
    return uPtr(Animation())->TimeMultiplier();
}

// public void set_TimeMultiplier(double value) [instance] :699
void Trigger::TimeMultiplier(double value)
{
    uPtr(Animation())->TimeMultiplier(value);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno(659)
// -----------------------------------------------------------

// public enum TriggerBypassMode :659
uEnumType* TriggerBypassMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Triggers.TriggerBypassMode", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Standard", 0LL,
        "Never", 1LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno(1139)
// ------------------------------------------------------------

// public abstract class WhileBool :1139
// {
::g::Fuse::Triggers::WhileValue_type* WhileBool_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::WhileValue_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 21;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(WhileBool);
    options.TypeSize = sizeof(::g::Fuse::Triggers::WhileValue_type);
    type = (::g::Fuse::Triggers::WhileValue_type*)uClassType::New("Fuse.Triggers.WhileBool", options);
    type->SetBase(::g::Fuse::Triggers::WhileValue_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->interface0.fp_get_Value = (void(*)(uObject*, uTRef))::g::Fuse::Triggers::WhileValue__get_Value_fn;
    type->interface0.fp_set_Value = (void(*)(uObject*, void*))::g::Fuse::Triggers::WhileValue__set_Value_fn;
    type->interface0.fp_add_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Triggers::WhileValue__add_ValueChanged_fn;
    type->interface0.fp_remove_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Triggers::WhileValue__remove_ValueChanged_fn;
    ::TYPES[74] = ::g::Fuse::Triggers::WhileValue_typeof()->MakeType(::g::Uno::Bool_typeof());
    type->SetInterfaces(
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::Fuse::Triggers::WhileValue_type, interface0));
    type->SetFields(21);
    type->Reflection.SetFunctions(2,
        new uFunction("get_Value", NULL, (void*)WhileBool__get_Value1_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Value", NULL, (void*)WhileBool__set_Value1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));
    return type;
}

// protected generated WhileBool() :1139
void WhileBool__ctor_4_fn(WhileBool* __this)
{
    __this->ctor_4();
}

// public new bool get_Value() :1143
void WhileBool__get_Value1_fn(WhileBool* __this, bool* __retval)
{
    *__retval = __this->Value1();
}

// public new void set_Value(bool value) :1144
void WhileBool__set_Value1_fn(WhileBool* __this, bool* value)
{
    __this->Value1(*value);
}

// protected generated WhileBool() [instance] :1139
void WhileBool::ctor_4()
{
    ctor_3();
}

// public new bool get_Value() [instance] :1143
bool WhileBool::Value1()
{
    bool ret1;
    return (::g::Fuse::Triggers::WhileValue__get_Value_fn(this, &ret1), ret1);
}

// public new void set_Value(bool value) [instance] :1144
void WhileBool::Value1(bool value)
{
    ::g::Fuse::Triggers::WhileValue__set_Value_fn(this, uCRef(value));
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno(1518)
// ------------------------------------------------------------

// public sealed class WhileCompleted :1518
// {
// static WhileCompleted() :1518
static void WhileCompleted__cctor__fn(uType* __type)
{
    WhileCompleted::_whileCompletedProp_ = ::g::Fuse::Properties::CreateHandle();
}

::g::Fuse::Triggers::Trigger_type* WhileCompleted_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(WhileCompleted);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileCompleted", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_ctor_ = (void*)WhileCompleted__New1_fn;
    type->fp_cctor_ = WhileCompleted__cctor__fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileCompleted__OnRooted_fn;
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    ::TYPES[5] = ::g::Uno::Bool_typeof();
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    ::TYPES[0] = uObject_typeof();
    ::TYPES[75] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Behavior_typeof());
    type->SetFields(16,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Triggers::WhileCompleted::_whileCompletedProp_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)WhileCompleted__New1_fn, 0, true, WhileCompleted_typeof(), 0),
        new uFunction("SetState", NULL, (void*)WhileCompleted__SetState_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Uno::Bool_typeof()));
    return type;
}

// public generated WhileCompleted() :1518
void WhileCompleted__ctor_3_fn(WhileCompleted* __this)
{
    __this->ctor_3();
}

// private static bool IsCompleted(Fuse.Node n) :1522
void WhileCompleted__IsCompleted_fn(::g::Fuse::Node* n, bool* __retval)
{
    *__retval = WhileCompleted::IsCompleted(n);
}

// public generated WhileCompleted New() :1518
void WhileCompleted__New1_fn(WhileCompleted** __retval)
{
    *__retval = WhileCompleted::New1();
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1543
void WhileCompleted__OnRooted_fn(WhileCompleted* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);
    __this->BypassSetActive(WhileCompleted::IsCompleted(__this->ParentNode()));
}

// public static void SetState(Fuse.Node n, bool paused) :1529
void WhileCompleted__SetState_fn(::g::Fuse::Node* n, bool* paused)
{
    WhileCompleted::SetState(n, *paused);
}

uSStrong< ::g::Fuse::PropertyHandle*> WhileCompleted::_whileCompletedProp_;

// public generated WhileCompleted() [instance] :1518
void WhileCompleted::ctor_3()
{
    ctor_2();
}

// private static bool IsCompleted(Fuse.Node n) [static] :1522
bool WhileCompleted::IsCompleted(::g::Fuse::Node* n)
{
    WhileCompleted_typeof()->Init();
    uObject* v = uPtr(uPtr(n)->Properties())->Get(WhileCompleted::_whileCompletedProp());

    if (!uIs(v, ::TYPES[5/*bool*/]))
        return false;

    return uUnbox<bool>(::TYPES[5/*bool*/], v);
}

// public generated WhileCompleted New() [static] :1518
WhileCompleted* WhileCompleted::New1()
{
    WhileCompleted* obj2 = (WhileCompleted*)uNew(WhileCompleted_typeof());
    obj2->ctor_3();
    return obj2;
}

// public static void SetState(Fuse.Node n, bool paused) [static] :1529
void WhileCompleted::SetState(::g::Fuse::Node* n, bool paused)
{
    WhileCompleted_typeof()->Init();
    ::g::Fuse::Behavior* ret3;
    bool v = WhileCompleted::IsCompleted(n);

    if (v != paused)
    {
        uPtr(uPtr(n)->Properties())->Set(WhileCompleted::_whileCompletedProp(), uBox(::TYPES[5/*bool*/], paused));

        for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(n->Behaviors()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[7/*Fuse.Behavior*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            ::g::Fuse::Behavior* b = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[75/*Uno.Collections.IEnumerator<Fuse.Behavior>*/]), &ret3), ret3);
            WhileCompleted* wl = uAs<WhileCompleted*>(b, WhileCompleted_typeof());

            if (wl != NULL)
                uPtr(wl)->SetActive(paused);
        }
    }
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.18.8\Triggers\$.uno(52)
// -------------------------------------------------------------------

// public class WhileContainsText :52
// {
::g::Fuse::Triggers::Trigger_type* WhileContainsText_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 18;
    options.ObjectSize = sizeof(WhileContainsText);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileContainsText", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_ctor_ = (void*)WhileContainsText__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileContainsText__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileContainsText__OnUnrooted_fn;
    ::TYPES[76] = ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[77] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[5] = ::g::Uno::Bool_typeof();
    type->SetFields(16,
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Fuse::Triggers::WhileContainsText, _source), 0,
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Fuse::Triggers::WhileContainsText, _value), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)WhileContainsText__New1_fn, 0, true, WhileContainsText_typeof(), 0),
        new uFunction("get_Source", NULL, (void*)WhileContainsText__get_Source_fn, 0, false, ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::String_typeof()), 0),
        new uFunction("set_Source", NULL, (void*)WhileContainsText__set_Source_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::String_typeof())));
    return type;
}

// public generated WhileContainsText() :52
void WhileContainsText__ctor_3_fn(WhileContainsText* __this)
{
    __this->ctor_3();
}

// public generated WhileContainsText New() :52
void WhileContainsText__New1_fn(WhileContainsText** __retval)
{
    *__retval = WhileContainsText::New1();
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :62
void WhileContainsText__OnRooted_fn(WhileContainsText* __this, ::g::Fuse::Node* parentNode)
{
    uString* ret2;
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);

    if (__this->Source() != NULL)
        __this->_value = __this->Source();
    else
        __this->_value = uAs<uObject*>(parentNode, ::TYPES[76/*Fuse.Triggers.IValue<string>*/]);

    if (__this->_value != NULL)
    {
        ::g::Fuse::Triggers::IValue::add_ValueChanged(uInterface(uPtr(__this->_value), ::TYPES[76/*Fuse.Triggers.IValue<string>*/]), uDelegate::New(::TYPES[77/*Uno.UX.ValueChangedHandler<string>*/], (void*)WhileContainsText__OnValueChanged_fn, __this));
        __this->BypassSetActive(!::g::Uno::String::IsNullOrEmpty((::g::Fuse::Triggers::IValue::get_Value_ex(uInterface(uPtr(__this->_value), ::TYPES[76/*Fuse.Triggers.IValue<string>*/]), &ret2), ret2)));
    }
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :77
void WhileContainsText__OnUnrooted_fn(WhileContainsText* __this, ::g::Fuse::Node* parentNode)
{
    if (__this->_value != NULL)
    {
        ::g::Fuse::Triggers::IValue::remove_ValueChanged(uInterface(uPtr(__this->_value), ::TYPES[76/*Fuse.Triggers.IValue<string>*/]), uDelegate::New(::TYPES[77/*Uno.UX.ValueChangedHandler<string>*/], (void*)WhileContainsText__OnValueChanged_fn, __this));
        __this->_value = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// private void OnValueChanged(object sender, Uno.EventArgs args) :87
void WhileContainsText__OnValueChanged_fn(WhileContainsText* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnValueChanged(sender, args);
}

// public Fuse.Triggers.IValue<string> get_Source() :57
void WhileContainsText__get_Source_fn(WhileContainsText* __this, uObject** __retval)
{
    *__retval = __this->Source();
}

// public void set_Source(Fuse.Triggers.IValue<string> value) :58
void WhileContainsText__set_Source_fn(WhileContainsText* __this, uObject* value)
{
    __this->Source(value);
}

// public generated WhileContainsText() [instance] :52
void WhileContainsText::ctor_3()
{
    ctor_2();
}

// private void OnValueChanged(object sender, Uno.EventArgs args) [instance] :87
void WhileContainsText::OnValueChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    uString* ret3;
    SetActive(!::g::Uno::String::IsNullOrEmpty((::g::Fuse::Triggers::IValue::get_Value_ex(uInterface(uPtr(_value), ::TYPES[76/*Fuse.Triggers.IValue<string>*/]), &ret3), ret3)));
}

// public Fuse.Triggers.IValue<string> get_Source() [instance] :57
uObject* WhileContainsText::Source()
{
    return _source;
}

// public void set_Source(Fuse.Triggers.IValue<string> value) [instance] :58
void WhileContainsText::Source(uObject* value)
{
    _source = value;
}

// public generated WhileContainsText New() [static] :52
WhileContainsText* WhileContainsText::New1()
{
    WhileContainsText* obj1 = (WhileContainsText*)uNew(WhileContainsText_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno(63)
// ----------------------------------------------------------

// public sealed class WhileDisabled :63
// {
::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type* WhileDisabled_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.ObjectSize = sizeof(WhileDisabled);
    options.TypeSize = sizeof(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type);
    type = (::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type*)uClassType::New("Fuse.Triggers.WhileDisabled", options);
    type->SetBase(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_typeof());
    type->fp_ctor_ = (void*)WhileDisabled__New1_fn;
    type->fp_get_IsActive = (void(*)(::g::Fuse::Triggers::WhileEnabledDisabledTrigger*, bool*))WhileDisabled__get_IsActive_fn;
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    ::TYPES[5] = ::g::Uno::Bool_typeof();
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    type->SetFields(16);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileDisabled__New1_fn, 0, true, WhileDisabled_typeof(), 0));
    return type;
}

// public generated WhileDisabled() :63
void WhileDisabled__ctor_4_fn(WhileDisabled* __this)
{
    __this->ctor_4();
}

// protected override sealed bool get_IsActive() :67
void WhileDisabled__get_IsActive_fn(WhileDisabled* __this, bool* __retval)
{
    return *__retval = (__this->ParentNode() != NULL) ? !uPtr(__this->ParentNode())->IsEnabled() : false, void();
}

// public generated WhileDisabled New() :63
void WhileDisabled__New1_fn(WhileDisabled** __retval)
{
    *__retval = WhileDisabled::New1();
}

// public generated WhileDisabled() [instance] :63
void WhileDisabled::ctor_4()
{
    ctor_3();
}

// public generated WhileDisabled New() [static] :63
WhileDisabled* WhileDisabled::New1()
{
    WhileDisabled* obj1 = (WhileDisabled*)uNew(WhileDisabled_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno(74)
// ----------------------------------------------------------

// public sealed class WhileEnabled :74
// {
::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type* WhileEnabled_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.ObjectSize = sizeof(WhileEnabled);
    options.TypeSize = sizeof(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type);
    type = (::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type*)uClassType::New("Fuse.Triggers.WhileEnabled", options);
    type->SetBase(::g::Fuse::Triggers::WhileEnabledDisabledTrigger_typeof());
    type->fp_ctor_ = (void*)WhileEnabled__New1_fn;
    type->fp_get_IsActive = (void(*)(::g::Fuse::Triggers::WhileEnabledDisabledTrigger*, bool*))WhileEnabled__get_IsActive_fn;
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    type->SetFields(16);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileEnabled__New1_fn, 0, true, WhileEnabled_typeof(), 0));
    return type;
}

// public generated WhileEnabled() :74
void WhileEnabled__ctor_4_fn(WhileEnabled* __this)
{
    __this->ctor_4();
}

// protected override sealed bool get_IsActive() :78
void WhileEnabled__get_IsActive_fn(WhileEnabled* __this, bool* __retval)
{
    return *__retval = (__this->ParentNode() != NULL) ? uPtr(__this->ParentNode())->IsEnabled() : true, void();
}

// public generated WhileEnabled New() :74
void WhileEnabled__New1_fn(WhileEnabled** __retval)
{
    *__retval = WhileEnabled::New1();
}

// public generated WhileEnabled() [instance] :74
void WhileEnabled::ctor_4()
{
    ctor_3();
}

// public generated WhileEnabled New() [static] :74
WhileEnabled* WhileEnabled::New1()
{
    WhileEnabled* obj1 = (WhileEnabled*)uNew(WhileEnabled_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno(37)
// ----------------------------------------------------------

// public abstract class WhileEnabledDisabledTrigger :37
// {
WhileEnabledDisabledTrigger_type* WhileEnabledDisabledTrigger_typeof()
{
    static uSStrong<WhileEnabledDisabledTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.ObjectSize = sizeof(WhileEnabledDisabledTrigger);
    options.TypeSize = sizeof(WhileEnabledDisabledTrigger_type);
    type = (WhileEnabledDisabledTrigger_type*)uClassType::New("Fuse.Triggers.WhileEnabledDisabledTrigger", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileEnabledDisabledTrigger__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileEnabledDisabledTrigger__OnUnrooted_fn;
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    ::TYPES[29] = ::g::Uno::EventHandler_typeof();
    type->SetFields(16);
    return type;
}

// internal WhileEnabledDisabledTrigger() :39
void WhileEnabledDisabledTrigger__ctor_3_fn(WhileEnabledDisabledTrigger* __this)
{
    __this->ctor_3();
}

// private void OnIsEnabledChanged(object sender, Uno.EventArgs args) :57
void WhileEnabledDisabledTrigger__OnIsEnabledChanged_fn(WhileEnabledDisabledTrigger* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnIsEnabledChanged(sender, args);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :43
void WhileEnabledDisabledTrigger__OnRooted_fn(WhileEnabledDisabledTrigger* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);
    uPtr(__this->ParentNode())->add_IsEnabledChanged(uDelegate::New(::TYPES[29/*Uno.EventHandler*/], (void*)WhileEnabledDisabledTrigger__OnIsEnabledChanged_fn, __this));
    __this->BypassSetActive(__this->IsActive());
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :51
void WhileEnabledDisabledTrigger__OnUnrooted_fn(WhileEnabledDisabledTrigger* __this, ::g::Fuse::Node* parentNode)
{
    uPtr(__this->ParentNode())->remove_IsEnabledChanged(uDelegate::New(::TYPES[29/*Uno.EventHandler*/], (void*)WhileEnabledDisabledTrigger__OnIsEnabledChanged_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// internal WhileEnabledDisabledTrigger() [instance] :39
void WhileEnabledDisabledTrigger::ctor_3()
{
    ctor_2();
}

// private void OnIsEnabledChanged(object sender, Uno.EventArgs args) [instance] :57
void WhileEnabledDisabledTrigger::OnIsEnabledChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    SetActive(IsActive());
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno(1168)
// ------------------------------------------------------------

// public sealed class WhileFailed :1168
// {
// static WhileFailed() :1168
static void WhileFailed__cctor__fn(uType* __type)
{
    WhileFailed::_whileFailedProp_ = ::g::Fuse::Properties::CreateHandle();
}

::g::Fuse::Triggers::Trigger_type* WhileFailed_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(WhileFailed);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileFailed", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_ctor_ = (void*)WhileFailed__New1_fn;
    type->fp_cctor_ = WhileFailed__cctor__fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileFailed__OnRooted_fn;
    ::STRINGS[11] = uString::Const("WhileFailed.Message");
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    ::TYPES[5] = ::g::Uno::Bool_typeof();
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    ::TYPES[0] = uObject_typeof();
    ::TYPES[75] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Behavior_typeof());
    type->SetFields(16,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Triggers::WhileFailed::_whileFailedProp_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)WhileFailed__New1_fn, 0, true, WhileFailed_typeof(), 0),
        new uFunction("SetState", NULL, (void*)WhileFailed__SetState_fn, 0, true, uVoid_typeof(), 3, ::g::Fuse::Node_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::String_typeof()));
    return type;
}

// public generated WhileFailed() :1168
void WhileFailed__ctor_3_fn(WhileFailed* __this)
{
    __this->ctor_3();
}

// private static bool IsFailed(Fuse.Node n) :1172
void WhileFailed__IsFailed_fn(::g::Fuse::Node* n, bool* __retval)
{
    *__retval = WhileFailed::IsFailed(n);
}

// public generated WhileFailed New() :1168
void WhileFailed__New1_fn(WhileFailed** __retval)
{
    *__retval = WhileFailed::New1();
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1195
void WhileFailed__OnRooted_fn(WhileFailed* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);
    __this->BypassSetActive(WhileFailed::IsFailed(__this->ParentNode()));
}

// public static void SetState(Fuse.Node n, bool failed, string message) :1179
void WhileFailed__SetState_fn(::g::Fuse::Node* n, bool* failed, uString* message)
{
    WhileFailed::SetState(n, *failed, message);
}

uSStrong< ::g::Fuse::PropertyHandle*> WhileFailed::_whileFailedProp_;

// public generated WhileFailed() [instance] :1168
void WhileFailed::ctor_3()
{
    ctor_2();
}

// private static bool IsFailed(Fuse.Node n) [static] :1172
bool WhileFailed::IsFailed(::g::Fuse::Node* n)
{
    WhileFailed_typeof()->Init();
    uObject* v = uPtr(uPtr(n)->Properties())->Get(WhileFailed::_whileFailedProp());

    if (!uIs(v, ::TYPES[5/*bool*/]))
        return false;

    return uUnbox<bool>(::TYPES[5/*bool*/], v);
}

// public generated WhileFailed New() [static] :1168
WhileFailed* WhileFailed::New1()
{
    WhileFailed* obj2 = (WhileFailed*)uNew(WhileFailed_typeof());
    obj2->ctor_3();
    return obj2;
}

// public static void SetState(Fuse.Node n, bool failed, string message) [static] :1179
void WhileFailed::SetState(::g::Fuse::Node* n, bool failed, uString* message)
{
    WhileFailed_typeof()->Init();
    ::g::Fuse::Behavior* ret3;
    bool v = WhileFailed::IsFailed(n);

    if (v != failed)
    {
        uPtr(uPtr(n)->Properties())->Set(WhileFailed::_whileFailedProp(), uBox(::TYPES[5/*bool*/], failed));
        n->SetResource(::STRINGS[11/*"WhileFailed...*/], message);

        for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(n->Behaviors()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[7/*Fuse.Behavior*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            ::g::Fuse::Behavior* b = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[75/*Uno.Collections.IEnumerator<Fuse.Behavior>*/]), &ret3), ret3);
            WhileFailed* wl = uAs<WhileFailed*>(b, WhileFailed_typeof());

            if (wl != NULL)
                uPtr(wl)->SetActive(failed);
        }
    }
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno(1153)
// ------------------------------------------------------------

// public sealed class WhileFalse :1153
// {
::g::Fuse::Triggers::WhileValue_type* WhileFalse_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::WhileValue_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 21;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(WhileFalse);
    options.TypeSize = sizeof(::g::Fuse::Triggers::WhileValue_type);
    type = (::g::Fuse::Triggers::WhileValue_type*)uClassType::New("Fuse.Triggers.WhileFalse", options);
    type->SetBase(::g::Fuse::Triggers::WhileBool_typeof());
    type->fp_ctor_ = (void*)WhileFalse__New1_fn;
    type->fp_get_IsOn = (void(*)(::g::Fuse::Triggers::WhileValue*, bool*))WhileFalse__get_IsOn_fn;
    type->interface0.fp_get_Value = (void(*)(uObject*, uTRef))::g::Fuse::Triggers::WhileValue__get_Value_fn;
    type->interface0.fp_set_Value = (void(*)(uObject*, void*))::g::Fuse::Triggers::WhileValue__set_Value_fn;
    type->interface0.fp_add_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Triggers::WhileValue__add_ValueChanged_fn;
    type->interface0.fp_remove_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Triggers::WhileValue__remove_ValueChanged_fn;
    ::TYPES[5] = ::g::Uno::Bool_typeof();
    ::TYPES[78] = ::g::Fuse::Triggers::WhileBool_typeof();
    type->SetInterfaces(
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::Fuse::Triggers::WhileValue_type, interface0));
    type->SetFields(21);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileFalse__New1_fn, 0, true, WhileFalse_typeof(), 0));
    return type;
}

// public generated WhileFalse() :1153
void WhileFalse__ctor_5_fn(WhileFalse* __this)
{
    __this->ctor_5();
}

// protected override sealed bool get_IsOn() :1155
void WhileFalse__get_IsOn_fn(WhileFalse* __this, bool* __retval)
{
    return *__retval = !__this->Value1(), void();
}

// public generated WhileFalse New() :1153
void WhileFalse__New1_fn(WhileFalse** __retval)
{
    *__retval = WhileFalse::New1();
}

// public generated WhileFalse() [instance] :1153
void WhileFalse::ctor_5()
{
    ctor_4();
}

// public generated WhileFalse New() [static] :1153
WhileFalse* WhileFalse::New1()
{
    WhileFalse* obj1 = (WhileFalse*)uNew(WhileFalse_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno(1213)
// ------------------------------------------------------------

// public sealed class WhileFloat :1213
// {
::g::Fuse::Triggers::WhileValue_type* WhileFloat_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::WhileValue_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 24;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(WhileFloat);
    options.TypeSize = sizeof(::g::Fuse::Triggers::WhileValue_type);
    type = (::g::Fuse::Triggers::WhileValue_type*)uClassType::New("Fuse.Triggers.WhileFloat", options);
    type->SetBase(::g::Fuse::Triggers::WhileValue_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_ctor_ = (void*)WhileFloat__New1_fn;
    type->fp_get_IsOn = (void(*)(::g::Fuse::Triggers::WhileValue*, bool*))WhileFloat__get_IsOn_fn;
    type->interface0.fp_get_Value = (void(*)(uObject*, uTRef))::g::Fuse::Triggers::WhileValue__get_Value_fn;
    type->interface0.fp_set_Value = (void(*)(uObject*, void*))::g::Fuse::Triggers::WhileValue__set_Value_fn;
    type->interface0.fp_add_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Triggers::WhileValue__add_ValueChanged_fn;
    type->interface0.fp_remove_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Triggers::WhileValue__remove_ValueChanged_fn;
    ::TYPES[44] = ::g::Uno::Float2_typeof();
    ::TYPES[19] = ::g::Uno::Int_typeof();
    ::TYPES[79] = ::g::Fuse::Triggers::WhileValue_typeof()->MakeType(::g::Uno::Float_typeof());
    type->SetInterfaces(
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::Float_typeof()), offsetof(::g::Fuse::Triggers::WhileValue_type, interface0));
    type->SetFields(21,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Triggers::WhileFloat, _compare), 0,
        WhileFloat__Range_typeof(), offsetof(::g::Fuse::Triggers::WhileFloat, _high), 0,
        WhileFloat__Range_typeof(), offsetof(::g::Fuse::Triggers::WhileFloat, _low), 0);
    type->Reflection.SetFunctions(11,
        new uFunction("get_GreaterThan", NULL, (void*)WhileFloat__get_GreaterThan_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_GreaterThan", NULL, (void*)WhileFloat__set_GreaterThan_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_GreaterThanEqual", NULL, (void*)WhileFloat__get_GreaterThanEqual_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_GreaterThanEqual", NULL, (void*)WhileFloat__set_GreaterThanEqual_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_LessThan", NULL, (void*)WhileFloat__get_LessThan_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_LessThan", NULL, (void*)WhileFloat__set_LessThan_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_LessThanEqual", NULL, (void*)WhileFloat__get_LessThanEqual_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_LessThanEqual", NULL, (void*)WhileFloat__set_LessThanEqual_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)WhileFloat__New1_fn, 0, true, WhileFloat_typeof(), 0),
        new uFunction("get_Value", NULL, (void*)WhileFloat__get_Value1_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Value", NULL, (void*)WhileFloat__set_Value1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
    return type;
}

// public generated WhileFloat() :1213
void WhileFloat__ctor_4_fn(WhileFloat* __this)
{
    __this->ctor_4();
}

// public float get_GreaterThan() :1255
void WhileFloat__get_GreaterThan_fn(WhileFloat* __this, float* __retval)
{
    *__retval = __this->GreaterThan();
}

// public void set_GreaterThan(float value) :1256
void WhileFloat__set_GreaterThan_fn(WhileFloat* __this, float* value)
{
    __this->GreaterThan(*value);
}

// public float get_GreaterThanEqual() :1266
void WhileFloat__get_GreaterThanEqual_fn(WhileFloat* __this, float* __retval)
{
    *__retval = __this->GreaterThanEqual();
}

// public void set_GreaterThanEqual(float value) :1267
void WhileFloat__set_GreaterThanEqual_fn(WhileFloat* __this, float* value)
{
    __this->GreaterThanEqual(*value);
}

// protected override sealed bool get_IsOn() :1277
void WhileFloat__get_IsOn_fn(WhileFloat* __this, bool* __retval)
{
    if ((__this->_low == 1) && (__this->Value1() <= __this->_compare.X))
        return *__retval = false, void();

    if ((__this->_low == 2) && (__this->Value1() < __this->_compare.X))
        return *__retval = false, void();

    if ((__this->_high == 1) && (__this->Value1() >= __this->_compare.Y))
        return *__retval = false, void();

    if ((__this->_high == 2) && (__this->Value1() > __this->_compare.Y))
        return *__retval = false, void();

    return *__retval = true, void();
}

// public float get_LessThan() :1233
void WhileFloat__get_LessThan_fn(WhileFloat* __this, float* __retval)
{
    *__retval = __this->LessThan();
}

// public void set_LessThan(float value) :1234
void WhileFloat__set_LessThan_fn(WhileFloat* __this, float* value)
{
    __this->LessThan(*value);
}

// public float get_LessThanEqual() :1244
void WhileFloat__get_LessThanEqual_fn(WhileFloat* __this, float* __retval)
{
    *__retval = __this->LessThanEqual();
}

// public void set_LessThanEqual(float value) :1245
void WhileFloat__set_LessThanEqual_fn(WhileFloat* __this, float* value)
{
    __this->LessThanEqual(*value);
}

// public generated WhileFloat New() :1213
void WhileFloat__New1_fn(WhileFloat** __retval)
{
    *__retval = WhileFloat::New1();
}

// public new float get_Value() :1217
void WhileFloat__get_Value1_fn(WhileFloat* __this, float* __retval)
{
    *__retval = __this->Value1();
}

// public new void set_Value(float value) :1218
void WhileFloat__set_Value1_fn(WhileFloat* __this, float* value)
{
    __this->Value1(*value);
}

// public generated WhileFloat() [instance] :1213
void WhileFloat::ctor_4()
{
    ctor_3();
}

// public float get_GreaterThan() [instance] :1255
float WhileFloat::GreaterThan()
{
    return _compare.X;
}

// public void set_GreaterThan(float value) [instance] :1256
void WhileFloat::GreaterThan(float value)
{
    _compare.X = value;
    _low = 1;
    UpdateState();
}

// public float get_GreaterThanEqual() [instance] :1266
float WhileFloat::GreaterThanEqual()
{
    return _compare.X;
}

// public void set_GreaterThanEqual(float value) [instance] :1267
void WhileFloat::GreaterThanEqual(float value)
{
    _compare.X = value;
    _low = 2;
    UpdateState();
}

// public float get_LessThan() [instance] :1233
float WhileFloat::LessThan()
{
    return _compare.Y;
}

// public void set_LessThan(float value) [instance] :1234
void WhileFloat::LessThan(float value)
{
    _compare.Y = value;
    _high = 1;
    UpdateState();
}

// public float get_LessThanEqual() [instance] :1244
float WhileFloat::LessThanEqual()
{
    return _compare.Y;
}

// public void set_LessThanEqual(float value) [instance] :1245
void WhileFloat::LessThanEqual(float value)
{
    _compare.Y = value;
    _high = 2;
    UpdateState();
}

// public new float get_Value() [instance] :1217
float WhileFloat::Value1()
{
    float ret2;
    return (::g::Fuse::Triggers::WhileValue__get_Value_fn(this, &ret2), ret2);
}

// public new void set_Value(float value) [instance] :1218
void WhileFloat::Value1(float value)
{
    ::g::Fuse::Triggers::WhileValue__set_Value_fn(this, uCRef(value));
}

// public generated WhileFloat New() [static] :1213
WhileFloat* WhileFloat::New1()
{
    WhileFloat* obj1 = (WhileFloat*)uNew(WhileFloat_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno(1300)
// ------------------------------------------------------------

// public sealed class WhileFocused :1300
// {
::g::Fuse::Triggers::Trigger_type* WhileFocused_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.ObjectSize = sizeof(WhileFocused);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileFocused", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_ctor_ = (void*)WhileFocused__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileFocused__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileFocused__OnUnrooted_fn;
    ::TYPES[80] = ::g::Fuse::Input::Focus_typeof();
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    ::TYPES[81] = ::g::Fuse::Input::FocusGainedHandler_typeof();
    ::TYPES[82] = ::g::Fuse::Input::FocusLostHandler_typeof();
    type->SetFields(16);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileFocused__New1_fn, 0, true, WhileFocused_typeof(), 0));
    return type;
}

// public generated WhileFocused() :1300
void WhileFocused__ctor_3_fn(WhileFocused* __this)
{
    __this->ctor_3();
}

// public generated WhileFocused New() :1300
void WhileFocused__New1_fn(WhileFocused** __retval)
{
    *__retval = WhileFocused::New1();
}

// private void OnGotFocus(object sender, Uno.EventArgs args) :1317
void WhileFocused__OnGotFocus_fn(WhileFocused* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnGotFocus(sender, args);
}

// private void OnLostFocus(object sender, Uno.EventArgs args) :1322
void WhileFocused__OnLostFocus_fn(WhileFocused* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnLostFocus(sender, args);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1302
void WhileFocused__OnRooted_fn(WhileFocused* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this->ParentNode(), uDelegate::New(::TYPES[81/*Fuse.Input.FocusGainedHandler*/], (void*)WhileFocused__OnGotFocus_fn, __this));
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this->ParentNode(), uDelegate::New(::TYPES[82/*Fuse.Input.FocusLostHandler*/], (void*)WhileFocused__OnLostFocus_fn, __this));
    __this->BypassSetActive(::g::Fuse::Input::Focus::FocusedNode() == __this->ParentNode());
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :1310
void WhileFocused__OnUnrooted_fn(WhileFocused* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this->ParentNode(), uDelegate::New(::TYPES[81/*Fuse.Input.FocusGainedHandler*/], (void*)WhileFocused__OnGotFocus_fn, __this));
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this->ParentNode(), uDelegate::New(::TYPES[82/*Fuse.Input.FocusLostHandler*/], (void*)WhileFocused__OnLostFocus_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public generated WhileFocused() [instance] :1300
void WhileFocused::ctor_3()
{
    ctor_2();
}

// private void OnGotFocus(object sender, Uno.EventArgs args) [instance] :1317
void WhileFocused::OnGotFocus(uObject* sender, ::g::Uno::EventArgs* args)
{
    SetActive(true);
}

// private void OnLostFocus(object sender, Uno.EventArgs args) [instance] :1322
void WhileFocused::OnLostFocus(uObject* sender, ::g::Uno::EventArgs* args)
{
    SetActive(false);
}

// public generated WhileFocused New() [static] :1300
WhileFocused* WhileFocused::New1()
{
    WhileFocused* obj1 = (WhileFocused*)uNew(WhileFocused_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno(1371)
// ------------------------------------------------------------

// public sealed class WhileFocusWithin :1371
// {
::g::Fuse::Triggers::Trigger_type* WhileFocusWithin_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.ObjectSize = sizeof(WhileFocusWithin);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileFocusWithin", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_ctor_ = (void*)WhileFocusWithin__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileFocusWithin__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileFocusWithin__OnUnrooted_fn;
    ::TYPES[80] = ::g::Fuse::Input::Focus_typeof();
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    ::TYPES[81] = ::g::Fuse::Input::FocusGainedHandler_typeof();
    ::TYPES[82] = ::g::Fuse::Input::FocusLostHandler_typeof();
    type->SetFields(16);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileFocusWithin__New1_fn, 0, true, WhileFocusWithin_typeof(), 0));
    return type;
}

// public generated WhileFocusWithin() :1371
void WhileFocusWithin__ctor_3_fn(WhileFocusWithin* __this)
{
    __this->ctor_3();
}

// private bool get_IsOn() :1396
void WhileFocusWithin__get_IsOn_fn(WhileFocusWithin* __this, bool* __retval)
{
    *__retval = __this->IsOn();
}

// public generated WhileFocusWithin New() :1371
void WhileFocusWithin__New1_fn(WhileFocusWithin** __retval)
{
    *__retval = WhileFocusWithin::New1();
}

// private void OnFocusChange(object sender, Uno.EventArgs args) :1389
void WhileFocusWithin__OnFocusChange_fn(WhileFocusWithin* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnFocusChange(sender, args);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1373
void WhileFocusWithin__OnRooted_fn(WhileFocusWithin* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this->ParentNode(), uDelegate::New(::TYPES[81/*Fuse.Input.FocusGainedHandler*/], (void*)WhileFocusWithin__OnFocusChange_fn, __this));
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this->ParentNode(), uDelegate::New(::TYPES[82/*Fuse.Input.FocusLostHandler*/], (void*)WhileFocusWithin__OnFocusChange_fn, __this));
    __this->BypassSetActive(__this->IsOn());
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :1382
void WhileFocusWithin__OnUnrooted_fn(WhileFocusWithin* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this->ParentNode(), uDelegate::New(::TYPES[81/*Fuse.Input.FocusGainedHandler*/], (void*)WhileFocusWithin__OnFocusChange_fn, __this));
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this->ParentNode(), uDelegate::New(::TYPES[82/*Fuse.Input.FocusLostHandler*/], (void*)WhileFocusWithin__OnFocusChange_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public generated WhileFocusWithin() [instance] :1371
void WhileFocusWithin::ctor_3()
{
    ctor_2();
}

// private bool get_IsOn() [instance] :1396
bool WhileFocusWithin::IsOn()
{
    return ::g::Fuse::Input::Focus::IsWithin(ParentNode());
}

// private void OnFocusChange(object sender, Uno.EventArgs args) [instance] :1389
void WhileFocusWithin::OnFocusChange(uObject* sender, ::g::Uno::EventArgs* args)
{
    SetActive(IsOn());
}

// public generated WhileFocusWithin New() [static] :1371
WhileFocusWithin* WhileFocusWithin::New1()
{
    WhileFocusWithin* obj1 = (WhileFocusWithin*)uNew(WhileFocusWithin_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.18.8\Triggers\$.uno(470)
// --------------------------------------------------------------------

// public sealed class WhileInteracting :470
// {
::g::Fuse::Triggers::Trigger_type* WhileInteracting_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(WhileInteracting);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileInteracting", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_ctor_ = (void*)WhileInteracting__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileInteracting__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileInteracting__OnUnrooted_fn;
    ::STRINGS[12] = uString::Const("WhileInteracting must be rooted in a Control");
    ::TYPES[83] = ::g::Fuse::Controls::Control_typeof();
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    ::TYPES[29] = ::g::Uno::EventHandler_typeof();
    type->SetFields(16,
        ::g::Fuse::Controls::Control_typeof(), offsetof(::g::Fuse::Triggers::WhileInteracting, _control), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileInteracting__New1_fn, 0, true, WhileInteracting_typeof(), 0));
    return type;
}

// public generated WhileInteracting() :470
void WhileInteracting__ctor_3_fn(WhileInteracting* __this)
{
    __this->ctor_3();
}

// public generated WhileInteracting New() :470
void WhileInteracting__New1_fn(WhileInteracting** __retval)
{
    *__retval = WhileInteracting::New1();
}

// private void OnInteractingChanged(object s, object a) :492
void WhileInteracting__OnInteractingChanged_fn(WhileInteracting* __this, uObject* s, uObject* a)
{
    __this->OnInteractingChanged(s, a);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :473
void WhileInteracting__OnRooted_fn(WhileInteracting* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);
    __this->_control = uAs< ::g::Fuse::Controls::Control*>(__this->ParentNode(), ::TYPES[83/*Fuse.Controls.Control*/]);

    if (__this->_control == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[12/*"WhileIntera...*/]));

    uPtr(__this->_control)->add_IsInteractingChanged(uDelegate::New(::TYPES[29/*Uno.EventHandler*/], (void*)WhileInteracting__OnInteractingChanged_fn, __this));
    __this->BypassSetActive(uPtr(__this->_control)->IsInteracting());
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :485
void WhileInteracting__OnUnrooted_fn(WhileInteracting* __this, ::g::Fuse::Node* parentNode)
{
    uPtr(__this->_control)->remove_IsInteractingChanged(uDelegate::New(::TYPES[29/*Uno.EventHandler*/], (void*)WhileInteracting__OnInteractingChanged_fn, __this));
    __this->_control = NULL;
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public generated WhileInteracting() [instance] :470
void WhileInteracting::ctor_3()
{
    ctor_2();
}

// private void OnInteractingChanged(object s, object a) [instance] :492
void WhileInteracting::OnInteractingChanged(uObject* s, uObject* a)
{
    SetActive(uPtr(_control)->IsInteracting());
}

// public generated WhileInteracting New() [static] :470
WhileInteracting* WhileInteracting::New1()
{
    WhileInteracting* obj1 = (WhileInteracting*)uNew(WhileInteracting_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno(108)
// -----------------------------------------------------------

// public sealed class WhileKeyboardVisible :108
// {
// static WhileKeyboardVisible() :108
static void WhileKeyboardVisible__cctor__fn(uType* __type)
{
    WhileKeyboardVisible::Keyboard_ = (uObject*)WhileKeyboardVisible__RelativeToKeyboardMode::New1();
}

::g::Fuse::Triggers::Trigger_type* WhileKeyboardVisible_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 18;
    options.ObjectSize = sizeof(WhileKeyboardVisible);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileKeyboardVisible", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)WhileKeyboardVisible__New1_fn;
    type->fp_cctor_ = WhileKeyboardVisible__cctor__fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileKeyboardVisible__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileKeyboardVisible__OnUnrooted_fn;
    ::TYPES[12] = ::g::Fuse::ITranslationMode_typeof();
    ::TYPES[84] = ::g::Uno::Rect_typeof();
    ::TYPES[85] = ::g::Uno::Platform::SystemUIWillResizeEventArgs_typeof();
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    ::TYPES[86] = ::g::Fuse::IViewport_typeof();
    ::TYPES[87] = ::g::Uno::Platform::SystemUI_typeof();
    ::TYPES[88] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::SystemUIWillResizeEventArgs_typeof());
    type->SetFields(14,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Triggers::WhileKeyboardVisible, _baseHeight), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Triggers::WhileKeyboardVisible, _threshold), 0,
        ::g::Uno::Float_typeof(), (uintptr_t)&::g::Fuse::Triggers::WhileKeyboardVisible::_deltaY_, uFieldFlagsStatic,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&::g::Fuse::Triggers::WhileKeyboardVisible::Keyboard_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Keyboard", 17));
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)WhileKeyboardVisible__New1_fn, 0, true, WhileKeyboardVisible_typeof(), 0),
        new uFunction("get_Threshold", NULL, (void*)WhileKeyboardVisible__get_Threshold_fn, 0, false, ::g::Uno::Float_typeof(), 0));
    return type;
}

// public generated WhileKeyboardVisible() :108
void WhileKeyboardVisible__ctor_2_fn(WhileKeyboardVisible* __this)
{
    __this->ctor_2();
}

// private float GetHeight(Uno.Rect r) :148
void WhileKeyboardVisible__GetHeight_fn(WhileKeyboardVisible* __this, ::g::Uno::Rect* r, float* __retval)
{
    *__retval = __this->GetHeight(*r);
}

// public generated WhileKeyboardVisible New() :108
void WhileKeyboardVisible__New1_fn(WhileKeyboardVisible** __retval)
{
    *__retval = WhileKeyboardVisible::New1();
}

// private void OnBottomBarResize(object sender, Uno.Platform.SystemUIWillResizeEventArgs args) :155
void WhileKeyboardVisible__OnBottomBarResize_fn(WhileKeyboardVisible* __this, uObject* sender, ::g::Uno::Platform::SystemUIWillResizeEventArgs* args)
{
    __this->OnBottomBarResize(sender, args);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :119
void WhileKeyboardVisible__OnRooted_fn(WhileKeyboardVisible* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    ::g::Uno::Platform::SystemUI::add_BottomFrameWillResize(uDelegate::New(::TYPES[88/*Uno.EventHandler<Uno.Platform.SystemUIWillResizeEventArgs>*/], (void*)WhileKeyboardVisible__OnBottomBarResize_fn, __this));
    __this->_baseHeight = __this->GetHeight(::g::Uno::Platform::SystemUI::BottomFrame());
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :138
void WhileKeyboardVisible__OnUnrooted_fn(WhileKeyboardVisible* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Uno::Platform::SystemUI::remove_BottomFrameWillResize(uDelegate::New(::TYPES[88/*Uno.EventHandler<Uno.Platform.SystemUIWillResizeEventArgs>*/], (void*)WhileKeyboardVisible__OnBottomBarResize_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public float get_Threshold() :115
void WhileKeyboardVisible__get_Threshold_fn(WhileKeyboardVisible* __this, float* __retval)
{
    *__retval = __this->Threshold();
}

float WhileKeyboardVisible::_deltaY_;
uSStrong<uObject*> WhileKeyboardVisible::Keyboard_;

// public generated WhileKeyboardVisible() [instance] :108
void WhileKeyboardVisible::ctor_2()
{
    _threshold = 150.0f;
    ctor_1();
}

// private float GetHeight(Uno.Rect r) [instance] :148
float WhileKeyboardVisible::GetHeight(::g::Uno::Rect r)
{
    return r.Bottom - r.Top;
}

// private void OnBottomBarResize(object sender, Uno.Platform.SystemUIWillResizeEventArgs args) [instance] :155
void WhileKeyboardVisible::OnBottomBarResize(uObject* sender, ::g::Uno::Platform::SystemUIWillResizeEventArgs* args)
{
    float newHeight = GetHeight(uPtr(args)->EndFrame());
    float density = 1.0f;
    uObject* vp = uPtr(ParentNode())->Viewport();

    if (vp != NULL)
        density = ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(vp), ::TYPES[86/*Fuse.IViewport*/]));

    float newDeltaY = (newHeight - _baseHeight) / density;

    if (newDeltaY > Threshold())
    {
        WhileKeyboardVisible::_deltaY() = newDeltaY;
        Activate(NULL);
    }
    else
    {
        _baseHeight = GetHeight(uPtr(args)->EndFrame());
        Deactivate();
    }
}

// public float get_Threshold() [instance] :115
float WhileKeyboardVisible::Threshold()
{
    return _threshold;
}

// public generated WhileKeyboardVisible New() [static] :108
WhileKeyboardVisible* WhileKeyboardVisible::New1()
{
    WhileKeyboardVisible* obj1 = (WhileKeyboardVisible*)uNew(WhileKeyboardVisible_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno(1411)
// ------------------------------------------------------------

// public sealed class WhileLoading :1411
// {
// static WhileLoading() :1411
static void WhileLoading__cctor__fn(uType* __type)
{
    WhileLoading::_whileLoadingProp_ = ::g::Fuse::Properties::CreateHandle();
}

::g::Fuse::Triggers::Trigger_type* WhileLoading_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(WhileLoading);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileLoading", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_ctor_ = (void*)WhileLoading__New1_fn;
    type->fp_cctor_ = WhileLoading__cctor__fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileLoading__OnRooted_fn;
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    ::TYPES[5] = ::g::Uno::Bool_typeof();
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    ::TYPES[0] = uObject_typeof();
    ::TYPES[75] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Behavior_typeof());
    type->SetFields(16,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Triggers::WhileLoading::_whileLoadingProp_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)WhileLoading__New1_fn, 0, true, WhileLoading_typeof(), 0),
        new uFunction("SetState", NULL, (void*)WhileLoading__SetState_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Uno::Bool_typeof()));
    return type;
}

// public generated WhileLoading() :1411
void WhileLoading__ctor_3_fn(WhileLoading* __this)
{
    __this->ctor_3();
}

// private static bool IsLoading(Fuse.Node n) :1415
void WhileLoading__IsLoading_fn(::g::Fuse::Node* n, bool* __retval)
{
    *__retval = WhileLoading::IsLoading(n);
}

// public generated WhileLoading New() :1411
void WhileLoading__New1_fn(WhileLoading** __retval)
{
    *__retval = WhileLoading::New1();
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1436
void WhileLoading__OnRooted_fn(WhileLoading* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);
    __this->BypassSetActive(WhileLoading::IsLoading(__this->ParentNode()));
}

// public static void SetState(Fuse.Node n, bool loading) :1422
void WhileLoading__SetState_fn(::g::Fuse::Node* n, bool* loading)
{
    WhileLoading::SetState(n, *loading);
}

uSStrong< ::g::Fuse::PropertyHandle*> WhileLoading::_whileLoadingProp_;

// public generated WhileLoading() [instance] :1411
void WhileLoading::ctor_3()
{
    ctor_2();
}

// private static bool IsLoading(Fuse.Node n) [static] :1415
bool WhileLoading::IsLoading(::g::Fuse::Node* n)
{
    WhileLoading_typeof()->Init();
    uObject* v = uPtr(uPtr(n)->Properties())->Get(WhileLoading::_whileLoadingProp());

    if (!uIs(v, ::TYPES[5/*bool*/]))
        return false;

    return uUnbox<bool>(::TYPES[5/*bool*/], v);
}

// public generated WhileLoading New() [static] :1411
WhileLoading* WhileLoading::New1()
{
    WhileLoading* obj2 = (WhileLoading*)uNew(WhileLoading_typeof());
    obj2->ctor_3();
    return obj2;
}

// public static void SetState(Fuse.Node n, bool loading) [static] :1422
void WhileLoading::SetState(::g::Fuse::Node* n, bool loading)
{
    WhileLoading_typeof()->Init();
    ::g::Fuse::Behavior* ret3;
    bool v = WhileLoading::IsLoading(n);

    if (v != loading)
    {
        uPtr(uPtr(n)->Properties())->Set(WhileLoading::_whileLoadingProp(), uBox(::TYPES[5/*bool*/], loading));

        for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(n->Behaviors()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[7/*Fuse.Behavior*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            ::g::Fuse::Behavior* b = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[75/*Uno.Collections.IEnumerator<Fuse.Behavior>*/]), &ret3), ret3);
            WhileLoading* wl = uAs<WhileLoading*>(b, WhileLoading_typeof());

            if (wl != NULL)
                uPtr(wl)->SetActive(loading);
        }
    }
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno(1328)
// ------------------------------------------------------------

// public sealed class WhileNotFocused :1328
// {
::g::Fuse::Triggers::Trigger_type* WhileNotFocused_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.ObjectSize = sizeof(WhileNotFocused);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileNotFocused", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_ctor_ = (void*)WhileNotFocused__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileNotFocused__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileNotFocused__OnUnrooted_fn;
    ::TYPES[80] = ::g::Fuse::Input::Focus_typeof();
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    ::TYPES[81] = ::g::Fuse::Input::FocusGainedHandler_typeof();
    ::TYPES[82] = ::g::Fuse::Input::FocusLostHandler_typeof();
    type->SetFields(16);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileNotFocused__New1_fn, 0, true, WhileNotFocused_typeof(), 0));
    return type;
}

// public generated WhileNotFocused() :1328
void WhileNotFocused__ctor_3_fn(WhileNotFocused* __this)
{
    __this->ctor_3();
}

// public generated WhileNotFocused New() :1328
void WhileNotFocused__New1_fn(WhileNotFocused** __retval)
{
    *__retval = WhileNotFocused::New1();
}

// private void OnGotFocus(object sender, Uno.EventArgs args) :1345
void WhileNotFocused__OnGotFocus_fn(WhileNotFocused* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnGotFocus(sender, args);
}

// private void OnLostFocus(object sender, Uno.EventArgs args) :1350
void WhileNotFocused__OnLostFocus_fn(WhileNotFocused* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnLostFocus(sender, args);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1330
void WhileNotFocused__OnRooted_fn(WhileNotFocused* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this->ParentNode(), uDelegate::New(::TYPES[81/*Fuse.Input.FocusGainedHandler*/], (void*)WhileNotFocused__OnGotFocus_fn, __this));
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this->ParentNode(), uDelegate::New(::TYPES[82/*Fuse.Input.FocusLostHandler*/], (void*)WhileNotFocused__OnLostFocus_fn, __this));
    __this->BypassSetActive(::g::Fuse::Input::Focus::FocusedNode() != __this->ParentNode());
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :1338
void WhileNotFocused__OnUnrooted_fn(WhileNotFocused* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this->ParentNode(), uDelegate::New(::TYPES[81/*Fuse.Input.FocusGainedHandler*/], (void*)WhileNotFocused__OnGotFocus_fn, __this));
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this->ParentNode(), uDelegate::New(::TYPES[82/*Fuse.Input.FocusLostHandler*/], (void*)WhileNotFocused__OnLostFocus_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public generated WhileNotFocused() [instance] :1328
void WhileNotFocused::ctor_3()
{
    ctor_2();
}

// private void OnGotFocus(object sender, Uno.EventArgs args) [instance] :1345
void WhileNotFocused::OnGotFocus(uObject* sender, ::g::Uno::EventArgs* args)
{
    SetActive(false);
}

// private void OnLostFocus(object sender, Uno.EventArgs args) [instance] :1350
void WhileNotFocused::OnLostFocus(uObject* sender, ::g::Uno::EventArgs* args)
{
    SetActive(true);
}

// public generated WhileNotFocused New() [static] :1328
WhileNotFocused* WhileNotFocused::New1()
{
    WhileNotFocused* obj1 = (WhileNotFocused*)uNew(WhileNotFocused_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.18.8\WebView\$.uno(440)
// -------------------------------------------------------------------

// public sealed class WhilePageLoading :440
// {
::g::Fuse::Triggers::Trigger_type* WhilePageLoading_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(WhilePageLoading);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhilePageLoading", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_ctor_ = (void*)WhilePageLoading__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhilePageLoading__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhilePageLoading__OnUnrooted_fn;
    ::STRINGS[6] = uString::Const("Warning: ");
    ::STRINGS[7] = uString::Const(" only applies to WebViews. Was attached to: ");
    ::STRINGS[8] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Controls\\0.18.8\\WebView\\$.uno");
    ::STRINGS[5] = uString::Const("OnRooted");
    ::TYPES[89] = ::g::Fuse::Controls::WebView_typeof();
    ::TYPES[28] = ::g::Fuse::Controls::IWebView_typeof();
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    ::TYPES[29] = ::g::Uno::EventHandler_typeof();
    ::TYPES[0] = uObject_typeof();
    type->SetFields(16,
        ::g::Fuse::Controls::WebView_typeof(), offsetof(::g::Fuse::Triggers::WhilePageLoading, _webView), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhilePageLoading__New1_fn, 0, true, WhilePageLoading_typeof(), 0));
    return type;
}

// public generated WhilePageLoading() :440
void WhilePageLoading__ctor_3_fn(WhilePageLoading* __this)
{
    __this->ctor_3();
}

// public generated WhilePageLoading New() :440
void WhilePageLoading__New1_fn(WhilePageLoading** __retval)
{
    *__retval = WhilePageLoading::New1();
}

// private void OnProgressChanged(object s, object a) :469
void WhilePageLoading__OnProgressChanged1_fn(WhilePageLoading* __this, uObject* s, uObject* a)
{
    __this->OnProgressChanged1(s, a);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :444
void WhilePageLoading__OnRooted_fn(WhilePageLoading* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);

    if (uIs(__this->ParentNode(), ::TYPES[28/*Fuse.Controls.IWebView*/]))
    {
        __this->_webView = uAs< ::g::Fuse::Controls::WebView*>(__this->ParentNode(), ::TYPES[89/*Fuse.Controls.WebView*/]);
        uPtr(__this->_webView)->add_ProgressChanged(uDelegate::New(::TYPES[29/*Uno.EventHandler*/], (void*)WhilePageLoading__OnProgressChanged1_fn, __this));
        __this->SetActive(uPtr(__this->_webView)->Progress() != 1.0);
    }
    else
        ::g::Fuse::Diagnostics::Error(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[6/*"Warning: "*/], __this), ::STRINGS[7/*" only appli...*/]), __this->ParentNode()), __this, ::STRINGS[8/*"C:\\Program...*/], 455, ::STRINGS[5/*"OnRooted"*/]);
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :459
void WhilePageLoading__OnUnrooted_fn(WhilePageLoading* __this, ::g::Fuse::Node* parentNode)
{
    if (__this->_webView != NULL)
    {
        uPtr(__this->_webView)->remove_ProgressChanged(uDelegate::New(::TYPES[29/*Uno.EventHandler*/], (void*)WhilePageLoading__OnProgressChanged1_fn, __this));
        __this->_webView = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public generated WhilePageLoading() [instance] :440
void WhilePageLoading::ctor_3()
{
    ctor_2();
}

// private void OnProgressChanged(object s, object a) [instance] :469
void WhilePageLoading::OnProgressChanged1(uObject* s, uObject* a)
{
    SetActive(uPtr(_webView)->Progress() < 1.0);
}

// public generated WhilePageLoading New() [static] :440
WhilePageLoading* WhilePageLoading::New1()
{
    WhilePageLoading* obj1 = (WhilePageLoading*)uNew(WhilePageLoading_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno(1486)
// ------------------------------------------------------------

// public sealed class WhilePaused :1486
// {
// static WhilePaused() :1486
static void WhilePaused__cctor__fn(uType* __type)
{
    WhilePaused::_whilePausedProp_ = ::g::Fuse::Properties::CreateHandle();
}

::g::Fuse::Triggers::Trigger_type* WhilePaused_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(WhilePaused);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhilePaused", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_ctor_ = (void*)WhilePaused__New1_fn;
    type->fp_cctor_ = WhilePaused__cctor__fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhilePaused__OnRooted_fn;
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    ::TYPES[5] = ::g::Uno::Bool_typeof();
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    ::TYPES[0] = uObject_typeof();
    ::TYPES[75] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Behavior_typeof());
    type->SetFields(16,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Triggers::WhilePaused::_whilePausedProp_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)WhilePaused__New1_fn, 0, true, WhilePaused_typeof(), 0),
        new uFunction("SetState", NULL, (void*)WhilePaused__SetState_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Uno::Bool_typeof()));
    return type;
}

// public generated WhilePaused() :1486
void WhilePaused__ctor_3_fn(WhilePaused* __this)
{
    __this->ctor_3();
}

// private static bool IsPaused(Fuse.Node n) :1490
void WhilePaused__IsPaused_fn(::g::Fuse::Node* n, bool* __retval)
{
    *__retval = WhilePaused::IsPaused(n);
}

// public generated WhilePaused New() :1486
void WhilePaused__New1_fn(WhilePaused** __retval)
{
    *__retval = WhilePaused::New1();
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1511
void WhilePaused__OnRooted_fn(WhilePaused* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);
    __this->BypassSetActive(WhilePaused::IsPaused(__this->ParentNode()));
}

// public static void SetState(Fuse.Node n, bool paused) :1497
void WhilePaused__SetState_fn(::g::Fuse::Node* n, bool* paused)
{
    WhilePaused::SetState(n, *paused);
}

uSStrong< ::g::Fuse::PropertyHandle*> WhilePaused::_whilePausedProp_;

// public generated WhilePaused() [instance] :1486
void WhilePaused::ctor_3()
{
    ctor_2();
}

// private static bool IsPaused(Fuse.Node n) [static] :1490
bool WhilePaused::IsPaused(::g::Fuse::Node* n)
{
    WhilePaused_typeof()->Init();
    uObject* v = uPtr(uPtr(n)->Properties())->Get(WhilePaused::_whilePausedProp());

    if (!uIs(v, ::TYPES[5/*bool*/]))
        return false;

    return uUnbox<bool>(::TYPES[5/*bool*/], v);
}

// public generated WhilePaused New() [static] :1486
WhilePaused* WhilePaused::New1()
{
    WhilePaused* obj2 = (WhilePaused*)uNew(WhilePaused_typeof());
    obj2->ctor_3();
    return obj2;
}

// public static void SetState(Fuse.Node n, bool paused) [static] :1497
void WhilePaused::SetState(::g::Fuse::Node* n, bool paused)
{
    WhilePaused_typeof()->Init();
    ::g::Fuse::Behavior* ret3;
    bool v = WhilePaused::IsPaused(n);

    if (v != paused)
    {
        uPtr(uPtr(n)->Properties())->Set(WhilePaused::_whilePausedProp(), uBox(::TYPES[5/*bool*/], paused));

        for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(n->Behaviors()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[7/*Fuse.Behavior*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            ::g::Fuse::Behavior* b = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[75/*Uno.Collections.IEnumerator<Fuse.Behavior>*/]), &ret3), ret3);
            WhilePaused* wl = uAs<WhilePaused*>(b, WhilePaused_typeof());

            if (wl != NULL)
                uPtr(wl)->SetActive(paused);
        }
    }
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno(1454)
// ------------------------------------------------------------

// public sealed class WhilePlaying :1454
// {
// static WhilePlaying() :1454
static void WhilePlaying__cctor__fn(uType* __type)
{
    WhilePlaying::_whilePlayingProp_ = ::g::Fuse::Properties::CreateHandle();
}

::g::Fuse::Triggers::Trigger_type* WhilePlaying_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(WhilePlaying);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhilePlaying", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_ctor_ = (void*)WhilePlaying__New1_fn;
    type->fp_cctor_ = WhilePlaying__cctor__fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhilePlaying__OnRooted_fn;
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    ::TYPES[5] = ::g::Uno::Bool_typeof();
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    ::TYPES[0] = uObject_typeof();
    ::TYPES[75] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Behavior_typeof());
    type->SetFields(16,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Triggers::WhilePlaying::_whilePlayingProp_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)WhilePlaying__New1_fn, 0, true, WhilePlaying_typeof(), 0),
        new uFunction("SetState", NULL, (void*)WhilePlaying__SetState_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Uno::Bool_typeof()));
    return type;
}

// public generated WhilePlaying() :1454
void WhilePlaying__ctor_3_fn(WhilePlaying* __this)
{
    __this->ctor_3();
}

// private static bool IsPlaying(Fuse.Node n) :1458
void WhilePlaying__IsPlaying_fn(::g::Fuse::Node* n, bool* __retval)
{
    *__retval = WhilePlaying::IsPlaying(n);
}

// public generated WhilePlaying New() :1454
void WhilePlaying__New1_fn(WhilePlaying** __retval)
{
    *__retval = WhilePlaying::New1();
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1479
void WhilePlaying__OnRooted_fn(WhilePlaying* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);
    __this->BypassSetActive(WhilePlaying::IsPlaying(__this->ParentNode()));
}

// public static void SetState(Fuse.Node n, bool playing) :1465
void WhilePlaying__SetState_fn(::g::Fuse::Node* n, bool* playing)
{
    WhilePlaying::SetState(n, *playing);
}

uSStrong< ::g::Fuse::PropertyHandle*> WhilePlaying::_whilePlayingProp_;

// public generated WhilePlaying() [instance] :1454
void WhilePlaying::ctor_3()
{
    ctor_2();
}

// private static bool IsPlaying(Fuse.Node n) [static] :1458
bool WhilePlaying::IsPlaying(::g::Fuse::Node* n)
{
    WhilePlaying_typeof()->Init();
    uObject* v = uPtr(uPtr(n)->Properties())->Get(WhilePlaying::_whilePlayingProp());

    if (!uIs(v, ::TYPES[5/*bool*/]))
        return false;

    return uUnbox<bool>(::TYPES[5/*bool*/], v);
}

// public generated WhilePlaying New() [static] :1454
WhilePlaying* WhilePlaying::New1()
{
    WhilePlaying* obj2 = (WhilePlaying*)uNew(WhilePlaying_typeof());
    obj2->ctor_3();
    return obj2;
}

// public static void SetState(Fuse.Node n, bool playing) [static] :1465
void WhilePlaying::SetState(::g::Fuse::Node* n, bool playing)
{
    WhilePlaying_typeof()->Init();
    ::g::Fuse::Behavior* ret3;
    bool v = WhilePlaying::IsPlaying(n);

    if (v != playing)
    {
        uPtr(uPtr(n)->Properties())->Set(WhilePlaying::_whilePlayingProp(), uBox(::TYPES[5/*bool*/], playing));

        for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(n->Behaviors()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[7/*Fuse.Behavior*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            ::g::Fuse::Behavior* b = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[75/*Uno.Collections.IEnumerator<Fuse.Behavior>*/]), &ret3), ret3);
            WhilePlaying* wl = uAs<WhilePlaying*>(b, WhilePlaying_typeof());

            if (wl != NULL)
                uPtr(wl)->SetActive(playing);
        }
    }
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.18.8\Triggers\$.uno(354)
// --------------------------------------------------------------------

// public sealed class WhileScrollable :354
// {
::g::Fuse::Triggers::Trigger_type* WhileScrollable_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 19;
    options.ObjectSize = sizeof(WhileScrollable);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileScrollable", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_ctor_ = (void*)WhileScrollable__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileScrollable__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileScrollable__OnUnrooted_fn;
    ::TYPES[47] = ::g::Fuse::Controls::ScrollView_typeof();
    ::TYPES[29] = ::g::Uno::EventHandler_typeof();
    ::TYPES[19] = ::g::Uno::Int_typeof();
    ::TYPES[44] = ::g::Uno::Float2_typeof();
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    type->SetFields(16,
        ::g::Fuse::Controls::ScrollView_typeof(), offsetof(::g::Fuse::Triggers::WhileScrollable, _scrollable), 0,
        ::g::Fuse::Controls::ScrollView_typeof(), offsetof(::g::Fuse::Triggers::WhileScrollable, _source), 0,
        ::g::Fuse::Gestures::ScrollDirections_typeof(), offsetof(::g::Fuse::Triggers::WhileScrollable, _ScrollDirections), 0);
    type->Reflection.SetFunctions(5,
        new uFunction(".ctor", NULL, (void*)WhileScrollable__New1_fn, 0, true, WhileScrollable_typeof(), 0),
        new uFunction("get_ScrollDirections", NULL, (void*)WhileScrollable__get_ScrollDirections_fn, 0, false, ::g::Fuse::Gestures::ScrollDirections_typeof(), 0),
        new uFunction("set_ScrollDirections", NULL, (void*)WhileScrollable__set_ScrollDirections_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::ScrollDirections_typeof()),
        new uFunction("get_ScrollView", NULL, (void*)WhileScrollable__get_ScrollView_fn, 0, false, ::g::Fuse::Controls::ScrollView_typeof(), 0),
        new uFunction("set_ScrollView", NULL, (void*)WhileScrollable__set_ScrollView_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::ScrollView_typeof()));
    return type;
}

// public generated WhileScrollable() :354
void WhileScrollable__ctor_3_fn(WhileScrollable* __this)
{
    __this->ctor_3();
}

// private bool get_IsOn() :394
void WhileScrollable__get_IsOn_fn(WhileScrollable* __this, bool* __retval)
{
    *__retval = __this->IsOn();
}

// public generated WhileScrollable New() :354
void WhileScrollable__New1_fn(WhileScrollable** __retval)
{
    *__retval = WhileScrollable::New1();
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :366
void WhileScrollable__OnRooted_fn(WhileScrollable* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);
    __this->_scrollable = __this->ScrollView();

    if (__this->_scrollable != NULL)
    {
        uPtr(__this->_scrollable)->add_ScrollPositionChanged(uDelegate::New(::TYPES[29/*Uno.EventHandler*/], (void*)WhileScrollable__OnScrollPositionChanged_fn, __this));
        __this->BypassSetActive(__this->IsOn());
    }
}

// private void OnScrollPositionChanged(object sender, Uno.EventArgs args) :387
void WhileScrollable__OnScrollPositionChanged_fn(WhileScrollable* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnScrollPositionChanged(sender, args);
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :377
void WhileScrollable__OnUnrooted_fn(WhileScrollable* __this, ::g::Fuse::Node* parentNode)
{
    if (__this->_scrollable != NULL)
    {
        uPtr(__this->_scrollable)->remove_ScrollPositionChanged(uDelegate::New(::TYPES[29/*Uno.EventHandler*/], (void*)WhileScrollable__OnScrollPositionChanged_fn, __this));
        __this->_scrollable = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public generated Fuse.Gestures.ScrollDirections get_ScrollDirections() :356
void WhileScrollable__get_ScrollDirections_fn(WhileScrollable* __this, int* __retval)
{
    *__retval = __this->ScrollDirections();
}

// public generated void set_ScrollDirections(Fuse.Gestures.ScrollDirections value) :356
void WhileScrollable__set_ScrollDirections_fn(WhileScrollable* __this, int* value)
{
    __this->ScrollDirections(*value);
}

// public Fuse.Controls.ScrollView get_ScrollView() :362
void WhileScrollable__get_ScrollView_fn(WhileScrollable* __this, ::g::Fuse::Controls::ScrollView** __retval)
{
    *__retval = __this->ScrollView();
}

// public void set_ScrollView(Fuse.Controls.ScrollView value) :363
void WhileScrollable__set_ScrollView_fn(WhileScrollable* __this, ::g::Fuse::Controls::ScrollView* value)
{
    __this->ScrollView(value);
}

// public generated WhileScrollable() [instance] :354
void WhileScrollable::ctor_3()
{
    ctor_2();
}

// private bool get_IsOn() [instance] :394
bool WhileScrollable::IsOn()
{
    ::g::Uno::Float2 p = uPtr(_scrollable)->ScrollPosition();
    ::g::Uno::Float2 mx = uPtr(_scrollable)->MaxScroll();
    ::g::Uno::Float2 mn = uPtr(_scrollable)->MinScroll();
    bool isOn = (((((ScrollDirections() & 1) == 1) && ((p.X - 1e-05f) > mn.X)) || (((ScrollDirections() & 2) == 2) && ((p.X + 1e-05f) < mx.X))) || (((ScrollDirections() & 4) == 4) && ((p.Y - 1e-05f) > mn.Y))) || (((ScrollDirections() & 8) == 8) && ((p.Y + 1e-05f) < mx.Y));
    return isOn;
}

// private void OnScrollPositionChanged(object sender, Uno.EventArgs args) [instance] :387
void WhileScrollable::OnScrollPositionChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    SetActive(IsOn());
}

// public generated Fuse.Gestures.ScrollDirections get_ScrollDirections() [instance] :356
int WhileScrollable::ScrollDirections()
{
    return _ScrollDirections;
}

// public generated void set_ScrollDirections(Fuse.Gestures.ScrollDirections value) [instance] :356
void WhileScrollable::ScrollDirections(int value)
{
    _ScrollDirections = value;
}

// public Fuse.Controls.ScrollView get_ScrollView() [instance] :362
::g::Fuse::Controls::ScrollView* WhileScrollable::ScrollView()
{
    ::g::Fuse::Controls::ScrollView* ind1 = _source;
    return (ind1 != NULL) ? ind1 : uAs< ::g::Fuse::Controls::ScrollView*>(ParentNode(), ::TYPES[47/*Fuse.Controls.ScrollView*/]);
}

// public void set_ScrollView(Fuse.Controls.ScrollView value) [instance] :363
void WhileScrollable::ScrollView(::g::Fuse::Controls::ScrollView* value)
{
    _source = value;
}

// public generated WhileScrollable New() [static] :354
WhileScrollable* WhileScrollable::New1()
{
    WhileScrollable* obj2 = (WhileScrollable*)uNew(WhileScrollable_typeof());
    obj2->ctor_3();
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno(1563)
// ------------------------------------------------------------

// public abstract class WhileTrigger :1563
// {
::g::Fuse::Triggers::Trigger_type* WhileTrigger_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.ObjectSize = sizeof(WhileTrigger);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileTrigger", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileTrigger__OnRooted_fn;
    ::TYPES[1] = ::g::Fuse::UpdateManager_typeof();
    type->SetFields(14,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Triggers::WhileTrigger, _rootFrame), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::WhileTrigger, _Invert), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_Invert", NULL, (void*)WhileTrigger__get_Invert_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Invert", NULL, (void*)WhileTrigger__set_Invert_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));
    return type;
}

// protected generated WhileTrigger() :1563
void WhileTrigger__ctor_2_fn(WhileTrigger* __this)
{
    __this->ctor_2();
}

// protected void BypassSetActive(bool on) :1574
void WhileTrigger__BypassSetActive_fn(WhileTrigger* __this, bool* on)
{
    __this->BypassSetActive(*on);
}

// public generated bool get_Invert() :1565
void WhileTrigger__get_Invert_fn(WhileTrigger* __this, bool* __retval)
{
    *__retval = __this->Invert();
}

// public generated void set_Invert(bool value) :1565
void WhileTrigger__set_Invert_fn(WhileTrigger* __this, bool* value)
{
    __this->Invert(*value);
}

// protected override void OnRooted(Fuse.Node parentNode) :1568
void WhileTrigger__OnRooted_fn(WhileTrigger* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    __this->_rootFrame = -1;
}

// protected void SetActive(bool on) :1583
void WhileTrigger__SetActive_fn(WhileTrigger* __this, bool* on)
{
    __this->SetActive(*on);
}

// protected generated WhileTrigger() [instance] :1563
void WhileTrigger::ctor_2()
{
    ctor_1();
}

// protected void BypassSetActive(bool on) [instance] :1574
void WhileTrigger::BypassSetActive(bool on)
{
    _rootFrame = ::g::Fuse::UpdateManager::FrameIndex();

    if (on != Invert())
        BypassActivate();
    else
        BypassDeactivate();
}

// public generated bool get_Invert() [instance] :1565
bool WhileTrigger::Invert()
{
    return _Invert;
}

// public generated void set_Invert(bool value) [instance] :1565
void WhileTrigger::Invert(bool value)
{
    _Invert = value;
}

// protected void SetActive(bool on) [instance] :1583
void WhileTrigger::SetActive(bool on)
{
    if (::g::Fuse::UpdateManager::FrameIndex() == _rootFrame)
    {
        BypassSetActive(on);
        return;
    }

    if (on != Invert())
        Activate(NULL);
    else
        Deactivate();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno(1148)
// ------------------------------------------------------------

// public sealed class WhileTrue :1148
// {
::g::Fuse::Triggers::WhileValue_type* WhileTrue_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::WhileValue_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 21;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(WhileTrue);
    options.TypeSize = sizeof(::g::Fuse::Triggers::WhileValue_type);
    type = (::g::Fuse::Triggers::WhileValue_type*)uClassType::New("Fuse.Triggers.WhileTrue", options);
    type->SetBase(::g::Fuse::Triggers::WhileBool_typeof());
    type->fp_ctor_ = (void*)WhileTrue__New1_fn;
    type->fp_get_IsOn = (void(*)(::g::Fuse::Triggers::WhileValue*, bool*))WhileTrue__get_IsOn_fn;
    type->interface0.fp_get_Value = (void(*)(uObject*, uTRef))::g::Fuse::Triggers::WhileValue__get_Value_fn;
    type->interface0.fp_set_Value = (void(*)(uObject*, void*))::g::Fuse::Triggers::WhileValue__set_Value_fn;
    type->interface0.fp_add_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Triggers::WhileValue__add_ValueChanged_fn;
    type->interface0.fp_remove_ValueChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Triggers::WhileValue__remove_ValueChanged_fn;
    ::TYPES[78] = ::g::Fuse::Triggers::WhileBool_typeof();
    type->SetInterfaces(
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::Fuse::Triggers::WhileValue_type, interface0));
    type->SetFields(21);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileTrue__New1_fn, 0, true, WhileTrue_typeof(), 0));
    return type;
}

// public generated WhileTrue() :1148
void WhileTrue__ctor_5_fn(WhileTrue* __this)
{
    __this->ctor_5();
}

// protected override sealed bool get_IsOn() :1150
void WhileTrue__get_IsOn_fn(WhileTrue* __this, bool* __retval)
{
    return *__retval = __this->Value1(), void();
}

// public generated WhileTrue New() :1148
void WhileTrue__New1_fn(WhileTrue** __retval)
{
    *__retval = WhileTrue::New1();
}

// public generated WhileTrue() [instance] :1148
void WhileTrue::ctor_5()
{
    ctor_4();
}

// public generated WhileTrue New() [static] :1148
WhileTrue* WhileTrue::New1()
{
    WhileTrue* obj1 = (WhileTrue*)uNew(WhileTrue_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno(1614)
// ------------------------------------------------------------

// public abstract class WhileValue<T> :1614
// {
WhileValue_type* WhileValue_typeof()
{
    static uSStrong<WhileValue_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 21;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(WhileValue);
    options.TypeSize = sizeof(WhileValue_type);
    type = (WhileValue_type*)uClassType::New("Fuse.Triggers.WhileValue`1", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileValue__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileValue__OnUnrooted_fn;
    type->interface0.fp_get_Value = (void(*)(uObject*, uTRef))WhileValue__get_Value_fn;
    type->interface0.fp_set_Value = (void(*)(uObject*, void*))WhileValue__set_Value_fn;
    type->interface0.fp_add_ValueChanged = (void(*)(uObject*, uDelegate*))WhileValue__add_ValueChanged_fn;
    type->interface0.fp_remove_ValueChanged = (void(*)(uObject*, uDelegate*))WhileValue__remove_ValueChanged_fn;
    ::TYPES[90] = ::g::Fuse::Triggers::IValue_typeof();
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    ::TYPES[91] = ::g::Uno::UX::ValueChangedHandler_typeof();
    ::TYPES[25] = ::g::Uno::Delegate_typeof();
    ::TYPES[0] = uObject_typeof();
    ::TYPES[92] = ::g::Fuse::Triggers::WhileTrigger_typeof();
    ::TYPES[5] = ::g::Uno::Bool_typeof();
    type->SetPrecalc(
        ::TYPES[90/*Fuse.Triggers.IValue`1*/]->MakeType(type->T(0)),
        ::TYPES[91/*Uno.UX.ValueChangedHandler`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(type->T(0)), offsetof(WhileValue_type, interface0));
    type->SetFields(16,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Triggers::WhileValue, _hasValue), 0,
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Triggers::WhileValue, _obj), 0,
        ::g::Fuse::Triggers::IValue_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Triggers::WhileValue, _source), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Triggers::WhileValue, ValueChanged1), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("Pulse", NULL, (void*)WhileValue__Pulse1_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Source", NULL, (void*)WhileValue__get_Source_fn, 0, false, ::g::Fuse::Triggers::IValue_typeof()->MakeType(type->T(0)), 0),
        new uFunction("set_Source", NULL, (void*)WhileValue__set_Source_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Triggers::IValue_typeof()->MakeType(type->T(0))),
        new uFunction("get_Value", NULL, (void*)WhileValue__get_Value_fn, 0, false, type->T(0), 0),
        new uFunction("set_Value", NULL, (void*)WhileValue__set_Value_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("add_ValueChanged", NULL, (void*)WhileValue__add_ValueChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(type->T(0))),
        new uFunction("remove_ValueChanged", NULL, (void*)WhileValue__remove_ValueChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(type->T(0))));
    return type;
}

// protected generated WhileValue() :1614
void WhileValue__ctor_3_fn(WhileValue* __this)
{
    __this->ctor_3();
}

// private static Fuse.Triggers.IValue<T> FindValueNode(Fuse.Node n) :1656
void WhileValue__FindValueNode_fn(uType* __type, ::g::Fuse::Node* n, uObject** __retval)
{
    *__retval = WhileValue::FindValueNode(__type, n);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1664
void WhileValue__OnRooted_fn(WhileValue* __this, ::g::Fuse::Node* parentNode)
{
    uType* __types[] = {
        __this->__type->GetBase(WhileValue_typeof())->Precalced(0/*Fuse.Triggers.IValue<T>*/),
        __this->__type->GetBase(WhileValue_typeof())->T(0),
        __this->__type->GetBase(WhileValue_typeof())->Precalced(1/*Uno.UX.ValueChangedHandler<T>*/),
    };
    uObject* ind1;
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);
    __this->_obj = (ind1 = __this->Source(), ((ind1 != NULL) ? ind1 : (uObject*)WhileValue::FindValueNode(WhileValue_typeof()->MakeType(__types[1]), __this->ParentNode())));

    if (__this->_obj != NULL)
        ::g::Fuse::Triggers::IValue::add_ValueChanged(uInterface(uPtr(__this->_obj), __types[0]), uDelegate::New(__types[2], (void*)WhileValue__OnValueChanged_fn, __this));

    __this->BypassSetActive(__this->IsOn());
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :1672
void WhileValue__OnUnrooted_fn(WhileValue* __this, ::g::Fuse::Node* parentNode)
{
    uType* __types[] = {
        __this->__type->GetBase(WhileValue_typeof())->Precalced(0/*Fuse.Triggers.IValue<T>*/),
        __this->__type->GetBase(WhileValue_typeof())->T(0),
        __this->__type->GetBase(WhileValue_typeof())->Precalced(1/*Uno.UX.ValueChangedHandler<T>*/),
    };

    if (__this->_obj != NULL)
    {
        ::g::Fuse::Triggers::IValue::remove_ValueChanged(uInterface(uPtr(__this->_obj), __types[0]), uDelegate::New(__types[2], (void*)WhileValue__OnValueChanged_fn, __this));
        __this->_obj = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// private void OnValueChanged(object s, Uno.UX.ValueChangedArgs<T> a) :1682
void WhileValue__OnValueChanged_fn(WhileValue* __this, uObject* s, ::g::Uno::UX::ValueChangedArgs* a)
{
    __this->OnValueChanged(s, a);
}

// public new void Pulse() :1648
void WhileValue__Pulse1_fn(WhileValue* __this)
{
    __this->Pulse1();
}

// public Fuse.Triggers.IValue<T> get_Source() :1642
void WhileValue__get_Source_fn(WhileValue* __this, uObject** __retval)
{
    *__retval = __this->Source();
}

// public void set_Source(Fuse.Triggers.IValue<T> value) :1643
void WhileValue__set_Source_fn(WhileValue* __this, uObject* value)
{
    __this->Source(value);
}

// protected void UpdateState() :1689
void WhileValue__UpdateState_fn(WhileValue* __this)
{
    __this->UpdateState();
}

// public T get_Value() :1620
void WhileValue__get_Value_fn(WhileValue* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(WhileValue_typeof())->T(0),
        __this->__type->GetBase(WhileValue_typeof())->Precalced(0/*Fuse.Triggers.IValue<T>*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;

    if (__this->_hasValue)
        return __retval.Store(__this->_value()), void();

    if (__this->_obj != NULL)
        return __retval.Store((::g::Fuse::Triggers::IValue::get_Value_ex(uInterface(uPtr(__this->_obj), __types[1]), &ret2), ret2)), void();

    return __retval.Store(__this->_value()), void();
}

// public void set_Value(T value) :1626
void WhileValue__set_Value_fn(WhileValue* __this, void* value)
{
    uType* __types[] = {
        __this->__type->GetBase(WhileValue_typeof())->T(0),
    };

    if (!__this->_hasValue || !::g::Uno::Object::Equals1(uBoxPtr(__types[0], __this->_value()), uBoxPtr(__types[0], value)))
    {
        __this->_hasValue = true;
        __this->_value() = value;

        if (__this->IsRooted())
            __this->SetActive(__this->IsOn());
    }
}

// public generated void add_ValueChanged(Uno.UX.ValueChangedHandler<T> value) :1646
void WhileValue__add_ValueChanged_fn(WhileValue* __this, uDelegate* value)
{
    __this->add_ValueChanged(value);
}

// public generated void remove_ValueChanged(Uno.UX.ValueChangedHandler<T> value) :1646
void WhileValue__remove_ValueChanged_fn(WhileValue* __this, uDelegate* value)
{
    __this->remove_ValueChanged(value);
}

// protected generated WhileValue() [instance] :1614
void WhileValue::ctor_3()
{
    ctor_2();
}

// private void OnValueChanged(object s, Uno.UX.ValueChangedArgs<T> a) [instance] :1682
void WhileValue::OnValueChanged(uObject* s, ::g::Uno::UX::ValueChangedArgs* a)
{
    uType* __types[] = {
        __type->GetBase(WhileValue_typeof())->Precalced(1/*Uno.UX.ValueChangedHandler<T>*/),
        __type->GetBase(WhileValue_typeof())->T(0),
    };
    SetActive(IsOn());

    if (::g::Uno::Delegate::op_Inequality(ValueChanged1, NULL))
        uPtr(ValueChanged1)->Invoke(2, this, a);
}

// public new void Pulse() [instance] :1648
void WhileValue::Pulse1()
{
    if (IsOn() != Invert())
        InversePulse();
    else
        Pulse();
}

// public Fuse.Triggers.IValue<T> get_Source() [instance] :1642
uObject* WhileValue::Source()
{
    return _source;
}

// public void set_Source(Fuse.Triggers.IValue<T> value) [instance] :1643
void WhileValue::Source(uObject* value)
{
    _source = value;
}

// protected void UpdateState() [instance] :1689
void WhileValue::UpdateState()
{
    if (!IsRooted())
        return;

    SetActive(IsOn());
}

// public generated void add_ValueChanged(Uno.UX.ValueChangedHandler<T> value) [instance] :1646
void WhileValue::add_ValueChanged(uDelegate* value)
{
    uType* __types[] = {
        __type->GetBase(WhileValue_typeof())->Precalced(1/*Uno.UX.ValueChangedHandler<T>*/),
        __type->GetBase(WhileValue_typeof())->T(0),
    };
    ValueChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ValueChanged1, value), __types[0]);
}

// public generated void remove_ValueChanged(Uno.UX.ValueChangedHandler<T> value) [instance] :1646
void WhileValue::remove_ValueChanged(uDelegate* value)
{
    uType* __types[] = {
        __type->GetBase(WhileValue_typeof())->Precalced(1/*Uno.UX.ValueChangedHandler<T>*/),
        __type->GetBase(WhileValue_typeof())->T(0),
    };
    ValueChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ValueChanged1, value), __types[0]);
}

// private static Fuse.Triggers.IValue<T> FindValueNode(Fuse.Node n) [static] :1656
uObject* WhileValue::FindValueNode(uType* __type, ::g::Fuse::Node* n)
{
    uType* __types[] = {
        __type->GetBase(WhileValue_typeof())->Precalced(0/*Fuse.Triggers.IValue<T>*/),
        __type->GetBase(WhileValue_typeof())->T(0),
    };

    if (uIs(n, __types[0]))
        return (uObject*)n;

    if (uPtr(n)->Parent() != NULL)
        return WhileValue::FindValueNode(__type->MakeType(__types[1]), uPtr(n)->Parent());

    return NULL;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno(1710)
// ------------------------------------------------------------

// public sealed class WhileVisible :1710
// {
::g::Fuse::Triggers::Trigger_type* WhileVisible_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.ObjectSize = sizeof(WhileVisible);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Triggers.WhileVisible", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_ctor_ = (void*)WhileVisible__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileVisible__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileVisible__OnUnrooted_fn;
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    ::TYPES[29] = ::g::Uno::EventHandler_typeof();
    type->SetFields(16);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileVisible__New1_fn, 0, true, WhileVisible_typeof(), 0));
    return type;
}

// public generated WhileVisible() :1710
void WhileVisible__ctor_3_fn(WhileVisible* __this)
{
    __this->ctor_3();
}

// public generated WhileVisible New() :1710
void WhileVisible__New1_fn(WhileVisible** __retval)
{
    *__retval = WhileVisible::New1();
}

// private void OnIsVisibleChanged(object sender, Uno.EventArgs args) :1726
void WhileVisible__OnIsVisibleChanged_fn(WhileVisible* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnIsVisibleChanged(sender, args);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1712
void WhileVisible__OnRooted_fn(WhileVisible* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);
    uPtr(__this->ParentNode())->add_IsVisibleChanged(uDelegate::New(::TYPES[29/*Uno.EventHandler*/], (void*)WhileVisible__OnIsVisibleChanged_fn, __this));
    __this->BypassSetActive(uPtr(__this->ParentNode())->IsVisible());
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :1720
void WhileVisible__OnUnrooted_fn(WhileVisible* __this, ::g::Fuse::Node* parentNode)
{
    uPtr(__this->ParentNode())->remove_IsVisibleChanged(uDelegate::New(::TYPES[29/*Uno.EventHandler*/], (void*)WhileVisible__OnIsVisibleChanged_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public generated WhileVisible() [instance] :1710
void WhileVisible::ctor_3()
{
    ctor_2();
}

// private void OnIsVisibleChanged(object sender, Uno.EventArgs args) [instance] :1726
void WhileVisible::OnIsVisibleChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    SetActive(uPtr(ParentNode())->IsVisible());
}

// public generated WhileVisible New() [static] :1710
WhileVisible* WhileVisible::New1()
{
    WhileVisible* obj1 = (WhileVisible*)uNew(WhileVisible_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno(1773)
// ------------------------------------------------------------

// public abstract class WhileWindowAspect :1773
// {
::g::Fuse::Triggers::WindowSizeTrigger_type* WhileWindowAspect_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::WindowSizeTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(WhileWindowAspect);
    options.TypeSize = sizeof(::g::Fuse::Triggers::WindowSizeTrigger_type);
    type = (::g::Fuse::Triggers::WindowSizeTrigger_type*)uClassType::New("Fuse.Triggers.WhileWindowAspect", options);
    type->SetBase(::g::Fuse::Triggers::WindowSizeTrigger_typeof());
    ::TYPES[93] = ::g::Fuse::RootViewport_typeof();
    ::TYPES[94] = ::g::Fuse::Triggers::WindowSizeTrigger_typeof();
    ::TYPES[44] = ::g::Uno::Float2_typeof();
    type->SetFields(17);
    return type;
}

// protected generated WhileWindowAspect() :1773
void WhileWindowAspect__ctor_4_fn(WhileWindowAspect* __this)
{
    __this->ctor_4();
}

// protected float get_Aspect() :1776
void WhileWindowAspect__get_Aspect_fn(WhileWindowAspect* __this, float* __retval)
{
    *__retval = __this->Aspect();
}

// protected generated WhileWindowAspect() [instance] :1773
void WhileWindowAspect::ctor_4()
{
    ctor_3();
}

// protected float get_Aspect() [instance] :1776
float WhileWindowAspect::Aspect()
{
    ::g::Uno::Float2 sz = uPtr(Viewport())->Size();
    return sz.X / sz.Y;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno(1784)
// ------------------------------------------------------------

// public sealed class WhileWindowLandscape :1784
// {
::g::Fuse::Triggers::WindowSizeTrigger_type* WhileWindowLandscape_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::WindowSizeTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(WhileWindowLandscape);
    options.TypeSize = sizeof(::g::Fuse::Triggers::WindowSizeTrigger_type);
    type = (::g::Fuse::Triggers::WindowSizeTrigger_type*)uClassType::New("Fuse.Triggers.WhileWindowLandscape", options);
    type->SetBase(::g::Fuse::Triggers::WhileWindowAspect_typeof());
    type->fp_ctor_ = (void*)WhileWindowLandscape__New1_fn;
    type->fp_get_IsActive = (void(*)(::g::Fuse::Triggers::WindowSizeTrigger*, bool*))WhileWindowLandscape__get_IsActive_fn;
    ::TYPES[95] = ::g::Fuse::Triggers::WhileWindowAspect_typeof();
    type->SetFields(17);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileWindowLandscape__New1_fn, 0, true, WhileWindowLandscape_typeof(), 0));
    return type;
}

// public generated WhileWindowLandscape() :1784
void WhileWindowLandscape__ctor_5_fn(WhileWindowLandscape* __this)
{
    __this->ctor_5();
}

// protected override sealed bool get_IsActive() :1786
void WhileWindowLandscape__get_IsActive_fn(WhileWindowLandscape* __this, bool* __retval)
{
    return *__retval = __this->Aspect() > 1.0f, void();
}

// public generated WhileWindowLandscape New() :1784
void WhileWindowLandscape__New1_fn(WhileWindowLandscape** __retval)
{
    *__retval = WhileWindowLandscape::New1();
}

// public generated WhileWindowLandscape() [instance] :1784
void WhileWindowLandscape::ctor_5()
{
    ctor_4();
}

// public generated WhileWindowLandscape New() [static] :1784
WhileWindowLandscape* WhileWindowLandscape::New1()
{
    WhileWindowLandscape* obj1 = (WhileWindowLandscape*)uNew(WhileWindowLandscape_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno(1789)
// ------------------------------------------------------------

// public sealed class WhileWindowPortrait :1789
// {
::g::Fuse::Triggers::WindowSizeTrigger_type* WhileWindowPortrait_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::WindowSizeTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(WhileWindowPortrait);
    options.TypeSize = sizeof(::g::Fuse::Triggers::WindowSizeTrigger_type);
    type = (::g::Fuse::Triggers::WindowSizeTrigger_type*)uClassType::New("Fuse.Triggers.WhileWindowPortrait", options);
    type->SetBase(::g::Fuse::Triggers::WhileWindowAspect_typeof());
    type->fp_ctor_ = (void*)WhileWindowPortrait__New1_fn;
    type->fp_get_IsActive = (void(*)(::g::Fuse::Triggers::WindowSizeTrigger*, bool*))WhileWindowPortrait__get_IsActive_fn;
    ::TYPES[95] = ::g::Fuse::Triggers::WhileWindowAspect_typeof();
    type->SetFields(17);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileWindowPortrait__New1_fn, 0, true, WhileWindowPortrait_typeof(), 0));
    return type;
}

// public generated WhileWindowPortrait() :1789
void WhileWindowPortrait__ctor_5_fn(WhileWindowPortrait* __this)
{
    __this->ctor_5();
}

// protected override sealed bool get_IsActive() :1791
void WhileWindowPortrait__get_IsActive_fn(WhileWindowPortrait* __this, bool* __retval)
{
    return *__retval = __this->Aspect() <= 1.0f, void();
}

// public generated WhileWindowPortrait New() :1789
void WhileWindowPortrait__New1_fn(WhileWindowPortrait** __retval)
{
    *__retval = WhileWindowPortrait::New1();
}

// public generated WhileWindowPortrait() [instance] :1789
void WhileWindowPortrait::ctor_5()
{
    ctor_4();
}

// public generated WhileWindowPortrait New() [static] :1789
WhileWindowPortrait* WhileWindowPortrait::New1()
{
    WhileWindowPortrait* obj1 = (WhileWindowPortrait*)uNew(WhileWindowPortrait_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno(1794)
// ------------------------------------------------------------

// public sealed class WhileWindowSize :1794
// {
::g::Fuse::Triggers::WindowSizeTrigger_type* WhileWindowSize_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::WindowSizeTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 20;
    options.ObjectSize = sizeof(WhileWindowSize);
    options.TypeSize = sizeof(::g::Fuse::Triggers::WindowSizeTrigger_type);
    type = (::g::Fuse::Triggers::WindowSizeTrigger_type*)uClassType::New("Fuse.Triggers.WhileWindowSize", options);
    type->SetBase(::g::Fuse::Triggers::WindowSizeTrigger_typeof());
    type->fp_ctor_ = (void*)WhileWindowSize__New1_fn;
    type->fp_get_IsActive = (void(*)(::g::Fuse::Triggers::WindowSizeTrigger*, bool*))WhileWindowSize__get_IsActive_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileWindowSize__OnRooted_fn;
    ::TYPES[93] = ::g::Fuse::RootViewport_typeof();
    ::TYPES[94] = ::g::Fuse::Triggers::WindowSizeTrigger_typeof();
    ::TYPES[44] = ::g::Uno::Float2_typeof();
    type->SetFields(17,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Triggers::WhileWindowSize, _EqualTo), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Triggers::WhileWindowSize, _GreaterThan), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Triggers::WhileWindowSize, _LessThan), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_EqualTo", NULL, (void*)WhileWindowSize__get_EqualTo_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_EqualTo", NULL, (void*)WhileWindowSize__set_EqualTo_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_GreaterThan", NULL, (void*)WhileWindowSize__get_GreaterThan_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_GreaterThan", NULL, (void*)WhileWindowSize__set_GreaterThan_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_LessThan", NULL, (void*)WhileWindowSize__get_LessThan_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_LessThan", NULL, (void*)WhileWindowSize__set_LessThan_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction(".ctor", NULL, (void*)WhileWindowSize__New1_fn, 0, true, WhileWindowSize_typeof(), 0));
    return type;
}

// public generated WhileWindowSize() :1794
void WhileWindowSize__ctor_4_fn(WhileWindowSize* __this)
{
    __this->ctor_4();
}

// public generated float2 get_EqualTo() :1799
void WhileWindowSize__get_EqualTo_fn(WhileWindowSize* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->EqualTo();
}

// public generated void set_EqualTo(float2 value) :1799
void WhileWindowSize__set_EqualTo_fn(WhileWindowSize* __this, ::g::Uno::Float2* value)
{
    __this->EqualTo(*value);
}

// public generated float2 get_GreaterThan() :1797
void WhileWindowSize__get_GreaterThan_fn(WhileWindowSize* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GreaterThan();
}

// public generated void set_GreaterThan(float2 value) :1797
void WhileWindowSize__set_GreaterThan_fn(WhileWindowSize* __this, ::g::Uno::Float2* value)
{
    __this->GreaterThan(*value);
}

// protected override sealed bool get_IsActive() :1810
void WhileWindowSize__get_IsActive_fn(WhileWindowSize* __this, bool* __retval)
{
    ::g::Uno::Float2 sz = uPtr(__this->Viewport())->Size();

    if ((__this->GreaterThan().X > 0.0f) && (__this->GreaterThan().Y > 0.0f))
    {
        if ((sz.X < __this->GreaterThan().X) || (sz.Y < __this->GreaterThan().Y))
            return *__retval = false, void();
    }

    if ((__this->LessThan().X > 0.0f) && (__this->LessThan().Y > 0.0f))
    {
        if ((sz.X > __this->LessThan().X) || (sz.Y > __this->LessThan().Y))
            return *__retval = false, void();
    }

    if ((__this->EqualTo().X > 0.0f) && (__this->EqualTo().Y > 0.0f))
    {
        if ((sz.X != __this->EqualTo().X) || (sz.Y != __this->EqualTo().Y))
            return *__retval = false, void();
    }

    return *__retval = true, void();
}

// public generated float2 get_LessThan() :1798
void WhileWindowSize__get_LessThan_fn(WhileWindowSize* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->LessThan();
}

// public generated void set_LessThan(float2 value) :1798
void WhileWindowSize__set_LessThan_fn(WhileWindowSize* __this, ::g::Uno::Float2* value)
{
    __this->LessThan(*value);
}

// public generated WhileWindowSize New() :1794
void WhileWindowSize__New1_fn(WhileWindowSize** __retval)
{
    *__retval = WhileWindowSize::New1();
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1801
void WhileWindowSize__OnRooted_fn(WhileWindowSize* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Triggers::WindowSizeTrigger__OnRooted_fn(__this, parentNode);
}

// public generated WhileWindowSize() [instance] :1794
void WhileWindowSize::ctor_4()
{
    ctor_3();
}

// public generated float2 get_EqualTo() [instance] :1799
::g::Uno::Float2 WhileWindowSize::EqualTo()
{
    return _EqualTo;
}

// public generated void set_EqualTo(float2 value) [instance] :1799
void WhileWindowSize::EqualTo(::g::Uno::Float2 value)
{
    _EqualTo = value;
}

// public generated float2 get_GreaterThan() [instance] :1797
::g::Uno::Float2 WhileWindowSize::GreaterThan()
{
    return _GreaterThan;
}

// public generated void set_GreaterThan(float2 value) [instance] :1797
void WhileWindowSize::GreaterThan(::g::Uno::Float2 value)
{
    _GreaterThan = value;
}

// public generated float2 get_LessThan() [instance] :1798
::g::Uno::Float2 WhileWindowSize::LessThan()
{
    return _LessThan;
}

// public generated void set_LessThan(float2 value) [instance] :1798
void WhileWindowSize::LessThan(::g::Uno::Float2 value)
{
    _LessThan = value;
}

// public generated WhileWindowSize New() [static] :1794
WhileWindowSize* WhileWindowSize::New1()
{
    WhileWindowSize* obj1 = (WhileWindowSize*)uNew(WhileWindowSize_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno(1739)
// ------------------------------------------------------------

// public abstract class WindowSizeTrigger :1739
// {
WindowSizeTrigger_type* WindowSizeTrigger_typeof()
{
    static uSStrong<WindowSizeTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(WindowSizeTrigger);
    options.TypeSize = sizeof(WindowSizeTrigger_type);
    type = (WindowSizeTrigger_type*)uClassType::New("Fuse.Triggers.WindowSizeTrigger", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WindowSizeTrigger__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WindowSizeTrigger__OnUnrooted_fn;
    ::TYPES[96] = ::g::Fuse::Node_typeof()->MakeMethod(1, ::g::Fuse::RootViewport_typeof());
    ::TYPES[7] = ::g::Fuse::Behavior_typeof();
    ::TYPES[97] = ::g::Uno::Platform2::Display_typeof();
    ::TYPES[29] = ::g::Uno::EventHandler_typeof();
    type->SetFields(16,
        ::g::Fuse::RootViewport_typeof(), offsetof(::g::Fuse::Triggers::WindowSizeTrigger, _Viewport), 0);
    return type;
}

// protected generated WindowSizeTrigger() :1739
void WindowSizeTrigger__ctor_3_fn(WindowSizeTrigger* __this)
{
    __this->ctor_3();
}

// private void OnResize(object sender, Uno.EventArgs args) :1765
void WindowSizeTrigger__OnResize_fn(WindowSizeTrigger* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnResize(sender, args);
}

// protected override void OnRooted(Fuse.Node parentNode) :1744
void WindowSizeTrigger__OnRooted_fn(WindowSizeTrigger* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);
    __this->Viewport((::g::Fuse::RootViewport*)uPtr(__this->ParentNode())->FindByType(::TYPES[96/*Fuse.Node.FindByType<Fuse.RootViewport>*/]));
    uPtr(::g::Uno::Platform2::Display::MainDisplay())->add_FrameChanged(uDelegate::New(::TYPES[29/*Uno.EventHandler*/], (void*)WindowSizeTrigger__OnResize_fn, __this));
    __this->BypassSetActive(__this->IsActive());
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :1759
void WindowSizeTrigger__OnUnrooted_fn(WindowSizeTrigger* __this, ::g::Fuse::Node* parentNode)
{
    __this->Viewport(NULL);
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// protected generated Fuse.RootViewport get_Viewport() :1742
void WindowSizeTrigger__get_Viewport_fn(WindowSizeTrigger* __this, ::g::Fuse::RootViewport** __retval)
{
    *__retval = __this->Viewport();
}

// private generated void set_Viewport(Fuse.RootViewport value) :1742
void WindowSizeTrigger__set_Viewport_fn(WindowSizeTrigger* __this, ::g::Fuse::RootViewport* value)
{
    __this->Viewport(value);
}

// protected generated WindowSizeTrigger() [instance] :1739
void WindowSizeTrigger::ctor_3()
{
    ctor_2();
}

// private void OnResize(object sender, Uno.EventArgs args) [instance] :1765
void WindowSizeTrigger::OnResize(uObject* sender, ::g::Uno::EventArgs* args)
{
    SetActive(IsActive());
}

// protected generated Fuse.RootViewport get_Viewport() [instance] :1742
::g::Fuse::RootViewport* WindowSizeTrigger::Viewport()
{
    return _Viewport;
}

// private generated void set_Viewport(Fuse.RootViewport value) [instance] :1742
void WindowSizeTrigger::Viewport(::g::Fuse::RootViewport* value)
{
    _Viewport = value;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Elements\0.18.8\Triggers\$.uno(32)
// -------------------------------------------------------------------

// private sealed class LayoutTransition.WorldPositionChangeMode :32
// {
LayoutTransition__WorldPositionChangeMode_type* LayoutTransition__WorldPositionChangeMode_typeof()
{
    static uSStrong<LayoutTransition__WorldPositionChangeMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(LayoutTransition__WorldPositionChangeMode);
    options.TypeSize = sizeof(LayoutTransition__WorldPositionChangeMode_type);
    type = (LayoutTransition__WorldPositionChangeMode_type*)uClassType::New("Fuse.Triggers.LayoutTransition.WorldPositionChangeMode", options);
    type->fp_ctor_ = (void*)LayoutTransition__WorldPositionChangeMode__New1_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))LayoutTransition__WorldPositionChangeMode__GetAbsVector_fn;
    type->interface1.fp_get_Flags = (void(*)(uObject*, int*))LayoutTransition__WorldPositionChangeMode__get_Flags_fn;
    ::TYPES[30] = ::g::Fuse::Transform_typeof();
    ::TYPES[31] = ::g::Fuse::Translation_typeof();
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(LayoutTransition__WorldPositionChangeMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(LayoutTransition__WorldPositionChangeMode_type, interface1));
    return type;
}

// public generated WorldPositionChangeMode() :32
void LayoutTransition__WorldPositionChangeMode__ctor__fn(LayoutTransition__WorldPositionChangeMode* __this)
{
    __this->ctor_();
}

// public Fuse.TransformModeFlags get_Flags() :38
void LayoutTransition__WorldPositionChangeMode__get_Flags_fn(LayoutTransition__WorldPositionChangeMode* __this, int* __retval)
{
    *__retval = __this->Flags();
}

// public float3 GetAbsVector(Fuse.Translation t) :34
void LayoutTransition__WorldPositionChangeMode__GetAbsVector_fn(LayoutTransition__WorldPositionChangeMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetAbsVector(t);
}

// public generated WorldPositionChangeMode New() :32
void LayoutTransition__WorldPositionChangeMode__New1_fn(LayoutTransition__WorldPositionChangeMode** __retval)
{
    *__retval = LayoutTransition__WorldPositionChangeMode::New1();
}

// public generated WorldPositionChangeMode() [instance] :32
void LayoutTransition__WorldPositionChangeMode::ctor_()
{
}

// public Fuse.TransformModeFlags get_Flags() [instance] :38
int LayoutTransition__WorldPositionChangeMode::Flags()
{
    return 0;
}

// public float3 GetAbsVector(Fuse.Translation t) [instance] :34
::g::Uno::Float3 LayoutTransition__WorldPositionChangeMode::GetAbsVector(::g::Fuse::Translation* t)
{
    return ::g::Uno::Float3__op_Multiply2(::g::Fuse::Triggers::LayoutTransition::GetWorldPositionChange(uPtr(t)->RelativeNode()), uPtr(t)->Vector());
}

// public generated WorldPositionChangeMode New() [static] :32
LayoutTransition__WorldPositionChangeMode* LayoutTransition__WorldPositionChangeMode::New1()
{
    LayoutTransition__WorldPositionChangeMode* obj1 = (LayoutTransition__WorldPositionChangeMode*)uNew(LayoutTransition__WorldPositionChangeMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

}}} // ::g::Fuse::Triggers
