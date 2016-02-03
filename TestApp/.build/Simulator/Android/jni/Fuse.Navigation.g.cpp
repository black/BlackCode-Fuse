// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Animations.AnimationVariant.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.EasingFunction.h>
#include <Fuse.Animations.EasingFunctions.h>
#include <Fuse.Behavior.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.DegreeSpan.h>
#include <Fuse.Gestures.Edge.h>
#include <Fuse.Gestures.Internal.EdgeSwiper.h>
#include <Fuse.Gestures.SwipeGestureHelper.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEventArgs.h>
#include <Fuse.Input.PointerMovedArgs.h>
#include <Fuse.Input.PointerMovedHandler.h>
#include <Fuse.Input.PointerPressedArgs.h>
#include <Fuse.Input.PointerPressedHandler.h>
#include <Fuse.Input.PointerReleasedArgs.h>
#include <Fuse.Input.PointerReleasedHandler.h>
#include <Fuse.LayoutRole.h>
#include <Fuse.Navigation.ActivatingAnimation.h>
#include <Fuse.Navigation.BackForwardNavigationTriggerAction.h>
#include <Fuse.Navigation.DeactivatingAnimation.h>
#include <Fuse.Navigation.DefaultNavigationAnimator.h>
#include <Fuse.Navigation.DefaultNavigationAnimatorPlayer.h>
#include <Fuse.Navigation.DirectNavigation.h>
#include <Fuse.Navigation.EdgeNavigation.h>
#include <Fuse.Navigation.EndSeekArgs.h>
#include <Fuse.Navigation.EnterExitAnimation.h>
#include <Fuse.Navigation.EnteringAnimation.h>
#include <Fuse.Navigation.ExitingAnimation.h>
#include <Fuse.Navigation.GoBack.h>
#include <Fuse.Navigation.GoForward.h>
#include <Fuse.Navigation.HierarchicalNavigation.h>
#include <Fuse.Navigation.HistoryChangedHandler.h>
#include <Fuse.Navigation.IBaseNavigation.h>
#include <Fuse.Navigation.INavigation.h>
#include <Fuse.Navigation.INavigationAnimator.h>
#include <Fuse.Navigation.INavigationAnimatorPlayer.h>
#include <Fuse.Navigation.INavigationPanel.h>
#include <Fuse.Navigation.IPageResourceBinding.h>
#include <Fuse.Navigation.ISeekable.h>
#include <Fuse.Navigation.LinearNavigation.h>
#include <Fuse.Navigation.NavigatedArgs.h>
#include <Fuse.Navigation.NavigatedHandler.h>
#include <Fuse.Navigation.NavigateTo.h>
#include <Fuse.Navigation.NavigateToggle.h>
#include <Fuse.Navigation.Navigation.h>
#include <Fuse.Navigation.NavigationAnimation.h>
#include <Fuse.Navigation.NavigationArgs.h>
#include <Fuse.Navigation.NavigationDirection.h>
#include <Fuse.Navigation.NavigationEdge.h>
#include <Fuse.Navigation.NavigationGotoMode.h>
#include <Fuse.Navigation.NavigationHandler.h>
#include <Fuse.Navigation.NavigationMode.h>
#include <Fuse.Navigation.NavigationPageCountHandler.h>
#include <Fuse.Navigation.NavigationPageProgressHandler.h>
#include <Fuse.Navigation.NavigationPageProperty.h>
#include <Fuse.Navigation.NavigationState.h>
#include <Fuse.Navigation.NavigationStateArgs.h>
#include <Fuse.Navigation.NavigationStateHandler.h>
#include <Fuse.Navigation.NavigationTriggerAction.h>
#include <Fuse.Navigation.NavigationTween.h>
#include <Fuse.Navigation.NavTriggerUtil.h>
#include <Fuse.Navigation.PageResourceBinding-1.h>
#include <Fuse.Navigation.PlayerFactory.h>
#include <Fuse.Navigation.ProgressSpan.h>
#include <Fuse.Navigation.ProgressTimer.h>
#include <Fuse.Navigation.SeekNavigationAnimatorPlayer.h>
#include <Fuse.Navigation.SnapTo.h>
#include <Fuse.Navigation.StructuredNavigation.h>
#include <Fuse.Navigation.StructuredNavigation.NavigationStructure.h>
#include <Fuse.Navigation.SwipeDirection.h>
#include <Fuse.Navigation.SwipeEnds.h>
#include <Fuse.Navigation.SwipeNavigate.h>
#include <Fuse.Navigation.UpdateSeekArgs.h>
#include <Fuse.Navigation.WhileActive.h>
#include <Fuse.Navigation.WhileCanGoBack.h>
#include <Fuse.Navigation.WhileCanGoForward.h>
#include <Fuse.Navigation.WhileHistoryTrigger.h>
#include <Fuse.Navigation.WhileInactive.h>
#include <Fuse.Navigation.WhileInEnterState.h>
#include <Fuse.Navigation.WhileInExitState.h>
#include <Fuse.Navigation.WhileNavigating.h>
#include <Fuse.Navigation.WhileNavigationTrigger.h>
#include <Fuse.Node.h>
#include <Fuse.NodeEvent-2.h>
#include <Fuse.PlacedHandler.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.Resources.ResourceRegistry.h>
#include <Fuse.Scripting.IEventSerializer.h>
#include <Fuse.Time.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Func-1.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.NotImplementedException.h>
#include <Uno.Object.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
static uString* STRINGS[10];
static uType* TYPES[75];

namespace g{
namespace Fuse{
namespace Navigation{

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(584)
// -------------------------------------------------------------

// public sealed class ActivatingAnimation :584
// {
::g::Fuse::Navigation::NavigationAnimation_type* ActivatingAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.ObjectSize = sizeof(ActivatingAnimation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationAnimation_type);
    type = (::g::Fuse::Navigation::NavigationAnimation_type*)uClassType::New("Fuse.Navigation.ActivatingAnimation", options);
    type->SetBase(::g::Fuse::Navigation::NavigationAnimation_typeof());
    type->fp_ctor_ = (void*)ActivatingAnimation__New1_fn;
    type->fp_ForceUpdate = (void(*)(::g::Fuse::Navigation::NavigationAnimation*))ActivatingAnimation__ForceUpdate_fn;
    type->fp_OnNavigationStateChanged = (void(*)(::g::Fuse::Navigation::NavigationAnimation*, uObject*, ::g::Fuse::Navigation::NavigationArgs*))ActivatingAnimation__OnNavigationStateChanged_fn;
    ::TYPES[0] = ::g::Fuse::Navigation::NavigationAnimation_typeof();
    ::TYPES[1] = ::g::Uno::Double_typeof();
    ::TYPES[2] = ::g::Fuse::Navigation::NavigationArgs_typeof();
    ::TYPES[3] = ::g::Uno::Int_typeof();
    type->SetFields(15);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ActivatingAnimation__New1_fn, 0, true, ActivatingAnimation_typeof(), 0));
    return type;
}

// public generated ActivatingAnimation() :584
void ActivatingAnimation__ctor_3_fn(ActivatingAnimation* __this)
{
    __this->ctor_3();
}

// protected override sealed void ForceUpdate() :586
void ActivatingAnimation__ForceUpdate_fn(ActivatingAnimation* __this)
{
    __this->BypassSeek(__this->InvertProgress(::g::Fuse::Navigation::Navigation::GetProgress(__this->PageContext())), 0);
}

// private double InvertProgress(double p) :591
void ActivatingAnimation__InvertProgress_fn(ActivatingAnimation* __this, double* p, double* __retval)
{
    *__retval = __this->InvertProgress(*p);
}

// public generated ActivatingAnimation New() :584
void ActivatingAnimation__New1_fn(ActivatingAnimation** __retval)
{
    *__retval = ActivatingAnimation::New1();
}

// internal override sealed void OnNavigationStateChanged(object sender, Fuse.Navigation.NavigationArgs state) :596
void ActivatingAnimation__OnNavigationStateChanged_fn(ActivatingAnimation* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state)
{
    int d = (::g::Uno::Math::Abs(uPtr(state)->Progress()) < ::g::Uno::Math::Abs(uPtr(state)->PreviousProgress())) ? 0 : 1;

    if ((state->Mode() != 1) && ::g::Fuse::Navigation::NavTriggerUtil::CrossesZero(state->Progress(), state->PreviousProgress()))
        __this->Seek1(1.0, ::g::Fuse::Navigation::NavTriggerUtil::Opposite(d));

    __this->GoProgress(__this->InvertProgress(state->Progress()), d, state);
}

// public generated ActivatingAnimation() [instance] :584
void ActivatingAnimation::ctor_3()
{
    ctor_2();
}

// private double InvertProgress(double p) [instance] :591
double ActivatingAnimation::InvertProgress(double p)
{
    return 1.0 - ::g::Uno::Math::Min(1.0, ::g::Uno::Math::Abs((double)Scale() * p));
}

// public generated ActivatingAnimation New() [static] :584
ActivatingAnimation* ActivatingAnimation::New1()
{
    ActivatingAnimation* obj1 = (ActivatingAnimation*)uNew(ActivatingAnimation_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(2058)
// --------------------------------------------------------------

// public abstract class BackForwardNavigationTriggerAction :2058
// {
BackForwardNavigationTriggerAction_type* BackForwardNavigationTriggerAction_typeof()
{
    static uSStrong<BackForwardNavigationTriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(BackForwardNavigationTriggerAction);
    options.TypeSize = sizeof(BackForwardNavigationTriggerAction_type);
    type = (BackForwardNavigationTriggerAction_type*)uClassType::New("Fuse.Navigation.BackForwardNavigationTriggerAction", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))BackForwardNavigationTriggerAction__Perform_fn;
    ::TYPES[4] = ::g::Fuse::Navigation::IBaseNavigation_typeof();
    ::TYPES[5] = ::g::Fuse::Node_typeof()->MakeMethod(1, ::g::Fuse::Navigation::IBaseNavigation_typeof());
    type->SetFields(7);
    return type;
}

// protected generated BackForwardNavigationTriggerAction() :2058
void BackForwardNavigationTriggerAction__ctor_1_fn(BackForwardNavigationTriggerAction* __this)
{
    __this->ctor_1();
}

// protected override sealed void Perform(Fuse.Node n) :2060
void BackForwardNavigationTriggerAction__Perform_fn(BackForwardNavigationTriggerAction* __this, ::g::Fuse::Node* n)
{
    uObject* nav = ::g::Fuse::Navigation::Navigation::TryFind(n);

    if (nav == NULL)
        nav = (uObject*)uPtr(n)->FindByType(::TYPES[5/*Fuse.Node.FindByType<Fuse.Navigation.IBaseNavigation>*/]);

    if (nav != NULL)
        __this->Perform1(nav, n);
}

// protected generated BackForwardNavigationTriggerAction() [instance] :2058
void BackForwardNavigationTriggerAction::ctor_1()
{
    ctor_();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(610)
// -------------------------------------------------------------

// public sealed class DeactivatingAnimation :610
// {
::g::Fuse::Navigation::NavigationAnimation_type* DeactivatingAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.ObjectSize = sizeof(DeactivatingAnimation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationAnimation_type);
    type = (::g::Fuse::Navigation::NavigationAnimation_type*)uClassType::New("Fuse.Navigation.DeactivatingAnimation", options);
    type->SetBase(::g::Fuse::Navigation::NavigationAnimation_typeof());
    type->fp_ctor_ = (void*)DeactivatingAnimation__New1_fn;
    type->fp_ForceUpdate = (void(*)(::g::Fuse::Navigation::NavigationAnimation*))DeactivatingAnimation__ForceUpdate_fn;
    type->fp_OnNavigationStateChanged = (void(*)(::g::Fuse::Navigation::NavigationAnimation*, uObject*, ::g::Fuse::Navigation::NavigationArgs*))DeactivatingAnimation__OnNavigationStateChanged_fn;
    ::TYPES[0] = ::g::Fuse::Navigation::NavigationAnimation_typeof();
    ::TYPES[2] = ::g::Fuse::Navigation::NavigationArgs_typeof();
    ::TYPES[3] = ::g::Uno::Int_typeof();
    type->SetFields(15);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DeactivatingAnimation__New1_fn, 0, true, DeactivatingAnimation_typeof(), 0));
    return type;
}

// public generated DeactivatingAnimation() :610
void DeactivatingAnimation__ctor_3_fn(DeactivatingAnimation* __this)
{
    __this->ctor_3();
}

// protected override sealed void ForceUpdate() :612
void DeactivatingAnimation__ForceUpdate_fn(DeactivatingAnimation* __this)
{
    __this->BypassSeek(::g::Uno::Math::Abs(::g::Fuse::Navigation::Navigation::GetProgress(__this->PageContext())), 0);
}

// public generated DeactivatingAnimation New() :610
void DeactivatingAnimation__New1_fn(DeactivatingAnimation** __retval)
{
    *__retval = DeactivatingAnimation::New1();
}

// internal override sealed void OnNavigationStateChanged(object sender, Fuse.Navigation.NavigationArgs state) :617
void DeactivatingAnimation__OnNavigationStateChanged_fn(DeactivatingAnimation* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state)
{
    int d = (::g::Uno::Math::Abs(uPtr(state)->Progress()) > ::g::Uno::Math::Abs(uPtr(state)->PreviousProgress())) ? 0 : 1;

    if ((state->Mode() != 1) && ::g::Fuse::Navigation::NavTriggerUtil::CrossesZero(state->Progress(), state->PreviousProgress()))
        __this->Seek1(0.0, ::g::Fuse::Navigation::NavTriggerUtil::Opposite(d));

    __this->GoProgress(::g::Uno::Math::Abs(state->Progress()), d, state);
}

// public generated DeactivatingAnimation() [instance] :610
void DeactivatingAnimation::ctor_3()
{
    ctor_2();
}

// public generated DeactivatingAnimation New() [static] :610
DeactivatingAnimation* DeactivatingAnimation::New1()
{
    DeactivatingAnimation* obj1 = (DeactivatingAnimation*)uNew(DeactivatingAnimation_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\Internal\$.uno(25)
// ---------------------------------------------------------------------

// internal sealed class DefaultNavigationAnimator :25
// {
DefaultNavigationAnimator_type* DefaultNavigationAnimator_typeof()
{
    static uSStrong<DefaultNavigationAnimator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(DefaultNavigationAnimator);
    options.TypeSize = sizeof(DefaultNavigationAnimator_type);
    type = (DefaultNavigationAnimator_type*)uClassType::New("Fuse.Navigation.DefaultNavigationAnimator", options);
    type->interface0.fp_Update = (void(*)(uObject*, double*, double*))DefaultNavigationAnimator__Update_fn;
    type->interface0.fp_get_Index = (void(*)(uObject*, int*))DefaultNavigationAnimator__get_Index_fn;
    type->interface0.fp_get_Node = (void(*)(uObject*, ::g::Fuse::Node**))DefaultNavigationAnimator__get_Node_fn;
    ::TYPES[1] = ::g::Uno::Double_typeof();
    type->SetInterfaces(
        ::g::Fuse::Navigation::INavigationAnimator_typeof(), offsetof(DefaultNavigationAnimator_type, interface0));
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Navigation::DefaultNavigationAnimator, _index), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Navigation::DefaultNavigationAnimator, _node), 0);
    return type;
}

// public DefaultNavigationAnimator(int index, Fuse.Node node) :33
void DefaultNavigationAnimator__ctor__fn(DefaultNavigationAnimator* __this, int* index, ::g::Fuse::Node* node)
{
    __this->ctor_(*index, node);
}

// public int get_Index() :27
void DefaultNavigationAnimator__get_Index_fn(DefaultNavigationAnimator* __this, int* __retval)
{
    *__retval = __this->Index();
}

// public DefaultNavigationAnimator New(int index, Fuse.Node node) :33
void DefaultNavigationAnimator__New1_fn(int* index, ::g::Fuse::Node* node, DefaultNavigationAnimator** __retval)
{
    *__retval = DefaultNavigationAnimator::New1(*index, node);
}

// public Fuse.Node get_Node() :28
void DefaultNavigationAnimator__get_Node_fn(DefaultNavigationAnimator* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Node();
}

// public void Update(double progress, double prevProgress) :39
void DefaultNavigationAnimator__Update_fn(DefaultNavigationAnimator* __this, double* progress, double* prevProgress)
{
    __this->Update(*progress, *prevProgress);
}

// public DefaultNavigationAnimator(int index, Fuse.Node node) [instance] :33
void DefaultNavigationAnimator::ctor_(int index, ::g::Fuse::Node* node)
{
    _index = index;
    _node = node;
}

// public int get_Index() [instance] :27
int DefaultNavigationAnimator::Index()
{
    return _index;
}

// public Fuse.Node get_Node() [instance] :28
::g::Fuse::Node* DefaultNavigationAnimator::Node()
{
    return _node;
}

// public void Update(double progress, double prevProgress) [instance] :39
void DefaultNavigationAnimator::Update(double progress, double prevProgress)
{
    ::g::Fuse::Navigation::Navigation::NotifyNavigation(Node(), ::g::Fuse::Navigation::NavigationArgs::New2(progress - (double)_index, prevProgress - (double)_index, 2));
}

// public DefaultNavigationAnimator New(int index, Fuse.Node node) [static] :33
DefaultNavigationAnimator* DefaultNavigationAnimator::New1(int index, ::g::Fuse::Node* node)
{
    DefaultNavigationAnimator* obj1 = (DefaultNavigationAnimator*)uNew(DefaultNavigationAnimator_typeof());
    obj1->ctor_(index, node);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\Internal\$.uno(90)
// ---------------------------------------------------------------------

// internal sealed class DefaultNavigationAnimatorPlayer :90
// {
DefaultNavigationAnimatorPlayer_type* DefaultNavigationAnimatorPlayer_typeof()
{
    static uSStrong<DefaultNavigationAnimatorPlayer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(DefaultNavigationAnimatorPlayer);
    options.TypeSize = sizeof(DefaultNavigationAnimatorPlayer_type);
    type = (DefaultNavigationAnimatorPlayer_type*)uClassType::New("Fuse.Navigation.DefaultNavigationAnimatorPlayer", options);
    type->interface0.fp_Update = (void(*)(uObject*))DefaultNavigationAnimatorPlayer__Update_fn;
    type->interface0.fp_EnsureAtEnd = (void(*)(uObject*))DefaultNavigationAnimatorPlayer__EnsureAtEnd_fn;
    ::TYPES[3] = ::g::Uno::Int_typeof();
    ::TYPES[6] = ::g::Fuse::Navigation::ProgressTimer_typeof();
    ::TYPES[7] = ::g::Fuse::Navigation::ProgressSpan_typeof();
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Navigation::INavigationAnimator_typeof());
    ::TYPES[9] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Navigation::INavigationAnimator_typeof());
    ::TYPES[10] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Double_typeof());
    ::TYPES[11] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Fuse::Navigation::INavigationAnimatorPlayer_typeof(), offsetof(DefaultNavigationAnimatorPlayer_type, interface0));
    type->SetFields(0,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Navigation::INavigationAnimator_typeof()), offsetof(::g::Fuse::Navigation::DefaultNavigationAnimatorPlayer, _animators), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Navigation::DefaultNavigationAnimatorPlayer, _doneCallback), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Double_typeof()), offsetof(::g::Fuse::Navigation::DefaultNavigationAnimatorPlayer, _progressSetCallback), 0,
        ::g::Fuse::Navigation::ProgressTimer_typeof(), offsetof(::g::Fuse::Navigation::DefaultNavigationAnimatorPlayer, _progressTimer), 0);
    return type;
}

// public DefaultNavigationAnimatorPlayer(Fuse.Navigation.ProgressTimer progressTimer, Uno.Collections.IList<Fuse.Navigation.INavigationAnimator> animators, Uno.Action<double> progressSetCallback, Uno.Action doneCallback) :97
void DefaultNavigationAnimatorPlayer__ctor__fn(DefaultNavigationAnimatorPlayer* __this, ::g::Fuse::Navigation::ProgressTimer* progressTimer, uObject* animators, uDelegate* progressSetCallback, uDelegate* doneCallback)
{
    __this->ctor_(progressTimer, animators, progressSetCallback, doneCallback);
}

// public void EnsureAtEnd() :127
void DefaultNavigationAnimatorPlayer__EnsureAtEnd_fn(DefaultNavigationAnimatorPlayer* __this)
{
    __this->EnsureAtEnd();
}

// public DefaultNavigationAnimatorPlayer New(Fuse.Navigation.ProgressTimer progressTimer, Uno.Collections.IList<Fuse.Navigation.INavigationAnimator> animators, Uno.Action<double> progressSetCallback, Uno.Action doneCallback) :97
void DefaultNavigationAnimatorPlayer__New1_fn(::g::Fuse::Navigation::ProgressTimer* progressTimer, uObject* animators, uDelegate* progressSetCallback, uDelegate* doneCallback, DefaultNavigationAnimatorPlayer** __retval)
{
    *__retval = DefaultNavigationAnimatorPlayer::New1(progressTimer, animators, progressSetCallback, doneCallback);
}

// public void Update() :109
void DefaultNavigationAnimatorPlayer__Update_fn(DefaultNavigationAnimatorPlayer* __this)
{
    __this->Update();
}

// public DefaultNavigationAnimatorPlayer(Fuse.Navigation.ProgressTimer progressTimer, Uno.Collections.IList<Fuse.Navigation.INavigationAnimator> animators, Uno.Action<double> progressSetCallback, Uno.Action doneCallback) [instance] :97
void DefaultNavigationAnimatorPlayer::ctor_(::g::Fuse::Navigation::ProgressTimer* progressTimer, uObject* animators, uDelegate* progressSetCallback, uDelegate* doneCallback)
{
    _progressTimer = progressTimer;
    _animators = animators;
    _progressSetCallback = progressSetCallback;
    _doneCallback = doneCallback;
}

// public void EnsureAtEnd() [instance] :127
void DefaultNavigationAnimatorPlayer::EnsureAtEnd()
{
    uObject* ret2;
    double endProgress = (uPtr(_progressTimer)->Variant() == 0) ? uPtr(uPtr(_progressTimer)->ProgressSpan())->To() : uPtr(uPtr(_progressTimer)->ProgressSpan())->From();

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_animators), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Navigation.INavigationAnimator>*/])); i++)
        ::g::Fuse::Navigation::INavigationAnimator::Update(uInterface(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(_animators), ::TYPES[9/*Uno.Collections.IList<Fuse.Navigation.INavigationAnimator>*/]), uCRef<int>(i), &ret2), ret2)), ::TYPES[62/*Fuse.Navigation.INavigationAnimator*/]), endProgress, endProgress);
}

// public void Update() [instance] :109
void DefaultNavigationAnimatorPlayer::Update()
{
    uObject* ret3;
    double prevProgress = uPtr(_progressTimer)->EasedProgress();
    uPtr(_progressTimer)->Update();
    double curProgress = uPtr(_progressTimer)->EasedProgress();
    uPtr(_progressSetCallback)->InvokeVoid(uCRef(curProgress));

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_animators), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Navigation.INavigationAnimator>*/])); i++)
        ::g::Fuse::Navigation::INavigationAnimator::Update(uInterface(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(_animators), ::TYPES[9/*Uno.Collections.IList<Fuse.Navigation.INavigationAnimator>*/]), uCRef<int>(i), &ret3), ret3)), ::TYPES[62/*Fuse.Navigation.INavigationAnimator*/]), curProgress, prevProgress);

    if (uPtr(_progressTimer)->TimeLeft() == 0.0)
        uPtr(_doneCallback)->InvokeVoid();
}

// public DefaultNavigationAnimatorPlayer New(Fuse.Navigation.ProgressTimer progressTimer, Uno.Collections.IList<Fuse.Navigation.INavigationAnimator> animators, Uno.Action<double> progressSetCallback, Uno.Action doneCallback) [static] :97
DefaultNavigationAnimatorPlayer* DefaultNavigationAnimatorPlayer::New1(::g::Fuse::Navigation::ProgressTimer* progressTimer, uObject* animators, uDelegate* progressSetCallback, uDelegate* doneCallback)
{
    DefaultNavigationAnimatorPlayer* obj1 = (DefaultNavigationAnimatorPlayer*)uNew(DefaultNavigationAnimatorPlayer_typeof());
    obj1->ctor_(progressTimer, animators, progressSetCallback, doneCallback);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(12)
// ------------------------------------------------------------

// public sealed class DirectNavigation :12
// {
// static DirectNavigation() :12
static void DirectNavigation__cctor_1_fn(uType* __type)
{
    DirectNavigation::_progressStateProperty_ = ::g::Fuse::Properties::CreateHandle();
}

::g::Fuse::Navigation::Navigation_type* DirectNavigation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::Navigation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(DirectNavigation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::Navigation_type);
    type = (::g::Fuse::Navigation::Navigation_type*)uClassType::New("Fuse.Navigation.DirectNavigation", options);
    type->SetBase(::g::Fuse::Navigation::Navigation_typeof());
    type->fp_ctor_ = (void*)DirectNavigation__New1_fn;
    type->fp_cctor_ = DirectNavigation__cctor_1_fn;
    type->fp_get_Active = (void(*)(::g::Fuse::Navigation::Navigation*, ::g::Fuse::Node**))DirectNavigation__get_Active_fn;
    type->fp_set_Active = (void(*)(::g::Fuse::Navigation::Navigation*, ::g::Fuse::Node*))DirectNavigation__set_Active_fn;
    type->fp_Goto = (void(*)(::g::Fuse::Navigation::Navigation*, ::g::Fuse::Node*, int*))DirectNavigation__Goto_fn;
    type->fp_OnChildAdded = (void(*)(::g::Fuse::Navigation::Navigation*, uObject*, ::g::Fuse::Node*))DirectNavigation__OnChildAdded_fn;
    type->fp_OnChildRemoved = (void(*)(::g::Fuse::Navigation::Navigation*, uObject*, ::g::Fuse::Node*))DirectNavigation__OnChildRemoved_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))DirectNavigation__OnRooted_fn;
    type->fp_get_PageProgress = (void(*)(::g::Fuse::Navigation::Navigation*, double*))DirectNavigation__get_PageProgress_fn;
    type->interface0.fp_GetPage = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Navigation::Navigation__GetPage_fn;
    type->interface0.fp_Goto = (void(*)(uObject*, ::g::Fuse::Node*, int*))DirectNavigation__Goto_fn;
    type->interface0.fp_Toggle = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Navigation::Navigation__Toggle_fn;
    type->interface0.fp_get_PageCount = (void(*)(uObject*, int*))::g::Fuse::Navigation::Navigation__get_PageCount_fn;
    type->interface0.fp_get_PageProgress = (void(*)(uObject*, double*))DirectNavigation__get_PageProgress_fn;
    type->interface0.fp_get_ActivePage = (void(*)(uObject*, ::g::Fuse::Node**))::g::Fuse::Navigation::Navigation__get_ActivePage_fn;
    type->interface0.fp_add_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__add_PageCountChanged_fn;
    type->interface0.fp_remove_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__remove_PageCountChanged_fn;
    type->interface0.fp_add_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__add_PageProgressChanged_fn;
    type->interface0.fp_remove_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__remove_PageProgressChanged_fn;
    type->interface0.fp_add_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__add_Navigated_fn;
    type->interface0.fp_remove_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__remove_Navigated_fn;
    type->interface0.fp_add_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__add_HistoryChanged_fn;
    type->interface0.fp_remove_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__remove_HistoryChanged_fn;
    type->interface1.fp_GoForward = (void(*)(uObject*))::g::Fuse::Navigation::Navigation__GoForward_fn;
    type->interface1.fp_GoBack = (void(*)(uObject*))::g::Fuse::Navigation::Navigation__GoBack_fn;
    type->interface1.fp_get_CanGoBack = (void(*)(uObject*, bool*))::g::Fuse::Navigation::Navigation__get_CanGoBack_fn;
    type->interface1.fp_get_CanGoForward = (void(*)(uObject*, bool*))::g::Fuse::Navigation::Navigation__get_CanGoForward_fn;
    ::TYPES[12] = ::g::Fuse::Node_typeof();
    ::TYPES[3] = ::g::Uno::Int_typeof();
    ::TYPES[13] = ::g::Fuse::Navigation::Navigation_typeof();
    ::TYPES[14] = uObject_typeof();
    ::TYPES[15] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[16] = ::g::Fuse::Navigation::INavigationPanel_typeof();
    ::TYPES[17] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[18] = ::g::Uno::Bool_typeof();
    ::TYPES[1] = ::g::Uno::Double_typeof();
    type->SetInterfaces(
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(::g::Fuse::Navigation::Navigation_type, interface0),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(::g::Fuse::Navigation::Navigation_type, interface1));
    type->SetFields(8,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Navigation::DirectNavigation, _active), 0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Navigation::DirectNavigation::_progressStateProperty_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DirectNavigation__New1_fn, 0, true, DirectNavigation_typeof(), 0));
    return type;
}

// public generated DirectNavigation() :12
void DirectNavigation__ctor_2_fn(DirectNavigation* __this)
{
    __this->ctor_2();
}

// public override sealed Fuse.Node get_Active() :91
void DirectNavigation__get_Active_fn(DirectNavigation* __this, ::g::Fuse::Node** __retval)
{
    return *__retval = __this->_active, void();
}

// public override sealed void set_Active(Fuse.Node value) :92
void DirectNavigation__set_Active_fn(DirectNavigation* __this, ::g::Fuse::Node* value)
{
    __this->TransitionTo(value, false);
}

// private static int GetProgressState(Fuse.Node elm) :99
void DirectNavigation__GetProgressState_fn(::g::Fuse::Node* elm, int* __retval)
{
    *__retval = DirectNavigation::GetProgressState(elm);
}

// public override sealed void Goto(Fuse.Node node, Fuse.Navigation.NavigationGotoMode mode) :41
void DirectNavigation__Goto_fn(DirectNavigation* __this, ::g::Fuse::Node* node, int* mode)
{
    int mode_ = *mode;
    __this->TransitionTo(node, mode_ == 2);
}

// public generated DirectNavigation New() :12
void DirectNavigation__New1_fn(DirectNavigation** __retval)
{
    *__retval = DirectNavigation::New1();
}

// protected override sealed void OnChildAdded(object s, Fuse.Node child) :21
void DirectNavigation__OnChildAdded_fn(DirectNavigation* __this, uObject* s, ::g::Fuse::Node* child)
{
    ::g::Fuse::Navigation::NavigationArgs* state = ::g::Fuse::Navigation::NavigationArgs::New2(-1.0, -1.0, 1);
    ::g::Fuse::Navigation::Navigation::NotifyNavigation(child, state);
    DirectNavigation::SetProgressState(child, -1);
    ::g::Fuse::Navigation::Navigation__OnChildAdded_fn(__this, s, child);
}

// protected override sealed void OnChildRemoved(object s, Fuse.Node child) :29
void DirectNavigation__OnChildRemoved_fn(DirectNavigation* __this, uObject* s, ::g::Fuse::Node* child)
{
    DirectNavigation::ResetProgressState(child);
    ::g::Fuse::Navigation::NavigationArgs* state = ::g::Fuse::Navigation::NavigationArgs::New2(0.0, 0.0, 1);
    ::g::Fuse::Navigation::Navigation::NotifyNavigation(child, state);

    if (__this->_active == child)
        __this->Goto(NULL, 0);

    ::g::Fuse::Navigation::Navigation__OnChildRemoved_fn(__this, s, child);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :14
void DirectNavigation__OnRooted_fn(DirectNavigation* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Navigation::Navigation__OnRooted_fn(__this, parentNode);

    if (__this->Owner() != NULL)
        __this->UpdateState(true);
}

// public override sealed double get_PageProgress() :121
void DirectNavigation__get_PageProgress_fn(DirectNavigation* __this, double* __retval)
{
    if (__this->_active == NULL)
        return *__retval = -1.0, void();

    return *__retval = 0.0, void();
}

// private static void ResetProgressState(Fuse.Node elm) :114
void DirectNavigation__ResetProgressState_fn(::g::Fuse::Node* elm)
{
    DirectNavigation::ResetProgressState(elm);
}

// private static void SetProgressState(Fuse.Node elm, int progress) :109
void DirectNavigation__SetProgressState_fn(::g::Fuse::Node* elm, int* progress)
{
    DirectNavigation::SetProgressState(elm, *progress);
}

// private void TransitionTo(Fuse.Node node, bool bypass) :46
void DirectNavigation__TransitionTo_fn(DirectNavigation* __this, ::g::Fuse::Node* node, bool* bypass)
{
    __this->TransitionTo(node, *bypass);
}

// private void UpdateState(bool bypass) :56
void DirectNavigation__UpdateState_fn(DirectNavigation* __this, bool* bypass)
{
    __this->UpdateState(*bypass);
}

uSStrong< ::g::Fuse::PropertyHandle*> DirectNavigation::_progressStateProperty_;

// public generated DirectNavigation() [instance] :12
void DirectNavigation::ctor_2()
{
    ctor_1();
}

// private void TransitionTo(Fuse.Node node, bool bypass) [instance] :46
void DirectNavigation::TransitionTo(::g::Fuse::Node* node, bool bypass)
{
    ::g::Fuse::Node* oldActive = _active;
    _active = node;
    UpdateState(bypass);

    if (oldActive != _active)
        OnNavigated(_active);
}

// private void UpdateState(bool bypass) [instance] :56
void DirectNavigation::UpdateState(bool bypass)
{
    ::g::Fuse::Node* ret2;

    if (Owner() == NULL)
        return;

    int i = 0;

    for (int t = 0; t < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(::g::Fuse::Navigation::INavigationPanel::Children(uInterface(uPtr(Owner()), ::TYPES[16/*Fuse.Navigation.INavigationPanel*/]))), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/])); t++)
    {
        ::g::Fuse::Node* c = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(::g::Fuse::Navigation::INavigationPanel::Children(uInterface(uPtr(Owner()), ::TYPES[16/*Fuse.Navigation.INavigationPanel*/]))), ::TYPES[17/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(t), &ret2), ret2);

        if (!IsPage(c))
            continue;

        int oldProgress = DirectNavigation::GetProgressState(c);
        bool active = _active == c;
        int newProgress = active ? 0 : -1;

        if (bypass)
        {
            ::g::Fuse::Navigation::NavigationArgs* jump = ::g::Fuse::Navigation::NavigationArgs::New2((double)newProgress, (double)newProgress, 1);
            ::g::Fuse::Navigation::Navigation::NotifyNavigation(c, jump);
            DirectNavigation::SetProgressState(c, newProgress);
            continue;
        }

        if (oldProgress == newProgress)
            continue;

        ::g::Fuse::Navigation::NavigationArgs* state = ::g::Fuse::Navigation::NavigationArgs::New2((double)newProgress, (double)oldProgress, 0);
        ::g::Fuse::Navigation::Navigation::NotifyNavigation(c, state);
        DirectNavigation::SetProgressState(c, newProgress);
    }
}

// private static int GetProgressState(Fuse.Node elm) [static] :99
int DirectNavigation::GetProgressState(::g::Fuse::Node* elm)
{
    DirectNavigation_typeof()->Init();
    uObject* val;

    if (uPtr(uPtr(elm)->Properties())->TryGet(DirectNavigation::_progressStateProperty(), &val))
        return uUnbox<int>(::TYPES[3/*int*/], val);

    return 0;
}

// public generated DirectNavigation New() [static] :12
DirectNavigation* DirectNavigation::New1()
{
    DirectNavigation* obj1 = (DirectNavigation*)uNew(DirectNavigation_typeof());
    obj1->ctor_2();
    return obj1;
}

// private static void ResetProgressState(Fuse.Node elm) [static] :114
void DirectNavigation::ResetProgressState(::g::Fuse::Node* elm)
{
    DirectNavigation_typeof()->Init();
    uPtr(uPtr(elm)->Properties())->Clear(DirectNavigation::_progressStateProperty());
}

// private static void SetProgressState(Fuse.Node elm, int progress) [static] :109
void DirectNavigation::SetProgressState(::g::Fuse::Node* elm, int progress)
{
    DirectNavigation_typeof()->Init();
    uPtr(uPtr(elm)->Properties())->Set(DirectNavigation::_progressStateProperty(), uBox<int>(::TYPES[3/*int*/], progress));
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(152)
// -------------------------------------------------------------

// public sealed class EdgeNavigation :152
// {
// static EdgeNavigation() :152
static void EdgeNavigation__cctor_1_fn(uType* __type)
{
    EdgeNavigation::_edgeHandle_ = ::g::Fuse::Properties::CreateHandle();
}

::g::Fuse::Navigation::Navigation_type* EdgeNavigation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::Navigation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 13;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(EdgeNavigation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::Navigation_type);
    type = (::g::Fuse::Navigation::Navigation_type*)uClassType::New("Fuse.Navigation.EdgeNavigation", options);
    type->SetBase(::g::Fuse::Navigation::Navigation_typeof());
    type->fp_ctor_ = (void*)EdgeNavigation__New1_fn;
    type->fp_cctor_ = EdgeNavigation__cctor_1_fn;
    type->fp_get_Active = (void(*)(::g::Fuse::Navigation::Navigation*, ::g::Fuse::Node**))EdgeNavigation__get_Active_fn;
    type->fp_set_Active = (void(*)(::g::Fuse::Navigation::Navigation*, ::g::Fuse::Node*))EdgeNavigation__set_Active_fn;
    type->fp_get_CanGoBack = (void(*)(::g::Fuse::Navigation::Navigation*, bool*))EdgeNavigation__get_CanGoBack_fn;
    type->fp_GoBack = (void(*)(::g::Fuse::Navigation::Navigation*))EdgeNavigation__GoBack_fn;
    type->fp_Goto = (void(*)(::g::Fuse::Navigation::Navigation*, ::g::Fuse::Node*, int*))EdgeNavigation__Goto_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))EdgeNavigation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))EdgeNavigation__OnUnrooted_fn;
    type->fp_get_PageProgress = (void(*)(::g::Fuse::Navigation::Navigation*, double*))EdgeNavigation__get_PageProgress_fn;
    type->fp_Toggle = (void(*)(::g::Fuse::Navigation::Navigation*, ::g::Fuse::Node*))EdgeNavigation__Toggle_fn;
    type->interface0.fp_GetPage = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Navigation::Navigation__GetPage_fn;
    type->interface0.fp_Goto = (void(*)(uObject*, ::g::Fuse::Node*, int*))EdgeNavigation__Goto_fn;
    type->interface0.fp_Toggle = (void(*)(uObject*, ::g::Fuse::Node*))EdgeNavigation__Toggle_fn;
    type->interface0.fp_get_PageCount = (void(*)(uObject*, int*))::g::Fuse::Navigation::Navigation__get_PageCount_fn;
    type->interface0.fp_get_PageProgress = (void(*)(uObject*, double*))EdgeNavigation__get_PageProgress_fn;
    type->interface0.fp_get_ActivePage = (void(*)(uObject*, ::g::Fuse::Node**))::g::Fuse::Navigation::Navigation__get_ActivePage_fn;
    type->interface0.fp_add_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__add_PageCountChanged_fn;
    type->interface0.fp_remove_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__remove_PageCountChanged_fn;
    type->interface0.fp_add_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__add_PageProgressChanged_fn;
    type->interface0.fp_remove_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__remove_PageProgressChanged_fn;
    type->interface0.fp_add_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__add_Navigated_fn;
    type->interface0.fp_remove_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__remove_Navigated_fn;
    type->interface0.fp_add_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__add_HistoryChanged_fn;
    type->interface0.fp_remove_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__remove_HistoryChanged_fn;
    type->interface1.fp_GoForward = (void(*)(uObject*))::g::Fuse::Navigation::Navigation__GoForward_fn;
    type->interface1.fp_GoBack = (void(*)(uObject*))EdgeNavigation__GoBack_fn;
    type->interface1.fp_get_CanGoBack = (void(*)(uObject*, bool*))EdgeNavigation__get_CanGoBack_fn;
    type->interface1.fp_get_CanGoForward = (void(*)(uObject*, bool*))::g::Fuse::Navigation::Navigation__get_CanGoForward_fn;
    ::STRINGS[0] = uString::Const("Unexpected message");
    ::STRINGS[1] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Navigation\\0.18.8\\$.uno");
    ::STRINGS[2] = uString::Const("EdgeNavigation must be rooted in an Element");
    ::TYPES[19] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Navigation::NavigationEdge_typeof(), ::g::Fuse::Gestures::Internal::EdgeSwiper_typeof());
    ::TYPES[20] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[15] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[16] = ::g::Fuse::Navigation::INavigationPanel_typeof();
    ::TYPES[13] = ::g::Fuse::Navigation::Navigation_typeof();
    ::TYPES[17] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[18] = ::g::Uno::Bool_typeof();
    ::TYPES[21] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[3] = ::g::Uno::Int_typeof();
    ::TYPES[12] = ::g::Fuse::Node_typeof();
    ::TYPES[22] = ::g::Fuse::Gestures::Internal::EdgeSwiper_typeof();
    ::TYPES[23] = ::g::Fuse::Gestures::Edge_typeof();
    ::TYPES[24] = ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), ::g::Uno::Double_typeof());
    ::TYPES[25] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Fuse::Navigation::NavigationEdge_typeof(), ::g::Fuse::Gestures::Internal::EdgeSwiper_typeof());
    ::TYPES[26] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Fuse::Navigation::NavigationEdge_typeof(), ::g::Fuse::Gestures::Internal::EdgeSwiper_typeof());
    ::TYPES[27] = ::g::Fuse::Navigation::NavigationEdge_typeof();
    ::TYPES[1] = ::g::Uno::Double_typeof();
    ::TYPES[28] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[29] = ::g::Fuse::Behavior_typeof();
    ::TYPES[14] = uObject_typeof();
    type->SetInterfaces(
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(::g::Fuse::Navigation::Navigation_type, interface0),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(::g::Fuse::Navigation::Navigation_type, interface1));
    type->SetFields(8,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Navigation::EdgeNavigation, _active), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Navigation::EdgeNavigation, _element), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Navigation::EdgeNavigation, _mains), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Navigation::NavigationEdge_typeof(), ::g::Fuse::Gestures::Internal::EdgeSwiper_typeof()), offsetof(::g::Fuse::Navigation::EdgeNavigation, _swipers), 0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Navigation::EdgeNavigation::_edgeHandle_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(4,
        new uFunction("GetEdge", NULL, (void*)EdgeNavigation__GetEdge_fn, 0, true, ::g::Fuse::Navigation::NavigationEdge_typeof(), 1, ::g::Fuse::Elements::Element_typeof()),
        new uFunction(".ctor", NULL, (void*)EdgeNavigation__New1_fn, 0, true, EdgeNavigation_typeof(), 0),
        new uFunction("ResetEdge", NULL, (void*)EdgeNavigation__ResetEdge_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::Elements::Element_typeof()),
        new uFunction("SetEdge", NULL, (void*)EdgeNavigation__SetEdge_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Elements::Element_typeof(), ::g::Fuse::Navigation::NavigationEdge_typeof()));
    return type;
}

// public generated EdgeNavigation() :152
void EdgeNavigation__ctor_2_fn(EdgeNavigation* __this)
{
    __this->ctor_2();
}

// public override sealed Fuse.Node get_Active() :201
void EdgeNavigation__get_Active_fn(EdgeNavigation* __this, ::g::Fuse::Node** __retval)
{
    return *__retval = __this->_active, void();
}

// public override sealed void set_Active(Fuse.Node value) :205
void EdgeNavigation__set_Active_fn(EdgeNavigation* __this, ::g::Fuse::Node* value)
{
    __this->Goto(value, 0);
}

// public override sealed bool get_CanGoBack() :354
void EdgeNavigation__get_CanGoBack_fn(EdgeNavigation* __this, bool* __retval)
{
    return *__retval = __this->IsAnyPanelActive(), void();
}

// private void CheckChildren() :258
void EdgeNavigation__CheckChildren_fn(EdgeNavigation* __this)
{
    __this->CheckChildren();
}

// private void ClearChildren() :247
void EdgeNavigation__ClearChildren_fn(EdgeNavigation* __this)
{
    __this->ClearChildren();
}

// public static Fuse.Navigation.NavigationEdge GetEdge(Fuse.Elements.Element elm) :163
void EdgeNavigation__GetEdge_fn(::g::Fuse::Elements::Element* elm, int* __retval)
{
    *__retval = EdgeNavigation::GetEdge(elm);
}

// public override sealed void GoBack() :348
void EdgeNavigation__GoBack_fn(EdgeNavigation* __this)
{
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > ret11;

    for (::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > enum7 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(__this->_swipers), &ret11), ret11); enum7.MoveNext(::TYPES[25/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > sw = enum7.Current(::TYPES[25/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);
        uPtr(sw.Value(::TYPES[26/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Disable();
    }
}

// public override sealed void Goto(Fuse.Node element, Fuse.Navigation.NavigationGotoMode mode) :177
void EdgeNavigation__Goto_fn(EdgeNavigation* __this, ::g::Fuse::Node* element, int* mode)
{
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > ret12;

    for (::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(__this->_swipers), &ret12), ret12); enum1.MoveNext(::TYPES[25/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > sw = enum1.Current(::TYPES[25/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);

        if (uPtr(sw.Value(::TYPES[26/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Target() == element)
            uPtr(sw.Value(::TYPES[26/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Enable();
        else
            uPtr(sw.Value(::TYPES[26/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Disable();
    }

    __this->_active = element;
}

// internal bool IsAnyPanelActive() :338
void EdgeNavigation__IsAnyPanelActive_fn(EdgeNavigation* __this, bool* __retval)
{
    *__retval = __this->IsAnyPanelActive();
}

// internal bool IsDismissPoint(float2 windowPoint) :326
void EdgeNavigation__IsDismissPoint_fn(EdgeNavigation* __this, ::g::Uno::Float2* windowPoint, bool* __retval)
{
    *__retval = __this->IsDismissPoint(*windowPoint);
}

// public generated EdgeNavigation New() :152
void EdgeNavigation__New1_fn(EdgeNavigation** __retval)
{
    *__retval = EdgeNavigation::New1();
}

// private void OnProgressChanged(object s, double progress) :293
void EdgeNavigation__OnProgressChanged_fn(EdgeNavigation* __this, uObject* s, double* progress)
{
    __this->OnProgressChanged(s, *progress);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :212
void EdgeNavigation__OnRooted_fn(EdgeNavigation* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Navigation::Navigation__OnRooted_fn(__this, parentNode);
    __this->_element = uAs< ::g::Fuse::Elements::Element*>(__this->ParentNode(), ::TYPES[21/*Fuse.Elements.Element*/]);

    if ((__this->_element == NULL) || (__this->Owner() == NULL))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[2/*"EdgeNavigat...*/]));

    __this->CheckChildren();
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :222
void EdgeNavigation__OnUnrooted_fn(EdgeNavigation* __this, ::g::Fuse::Node* parentNode)
{
    if (__this->Owner() != NULL)
        __this->ClearChildren();

    __this->_element = NULL;
    ::g::Fuse::Navigation::Navigation__OnUnrooted_fn(__this, parentNode);
}

// public override sealed double get_PageProgress() :358
void EdgeNavigation__get_PageProgress_fn(EdgeNavigation* __this, double* __retval)
{
    return *__retval = (double)__this->GetPageIndex(__this->_active), void();
}

// public static void ResetEdge(Fuse.Elements.Element elm) :172
void EdgeNavigation__ResetEdge_fn(::g::Fuse::Elements::Element* elm)
{
    EdgeNavigation::ResetEdge(elm);
}

// public static void SetEdge(Fuse.Elements.Element elm, Fuse.Navigation.NavigationEdge edge) :157
void EdgeNavigation__SetEdge_fn(::g::Fuse::Elements::Element* elm, int* edge)
{
    EdgeNavigation::SetEdge(elm, *edge);
}

// public override sealed void Toggle(Fuse.Node page) :190
void EdgeNavigation__Toggle_fn(EdgeNavigation* __this, ::g::Fuse::Node* page)
{
    if (__this->Active() == page)
        __this->Active(NULL);
    else
        __this->Active(page);
}

uSStrong< ::g::Fuse::PropertyHandle*> EdgeNavigation::_edgeHandle_;

// public generated EdgeNavigation() [instance] :152
void EdgeNavigation::ctor_2()
{
    _swipers = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[19/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]));
    _mains = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[20/*Uno.Collections.List<Fuse.Node>*/]));
    ctor_1();
}

// private void CheckChildren() [instance] :258
void EdgeNavigation::CheckChildren()
{
    ::g::Fuse::Node* ret9;
    ClearChildren();
    ::g::Fuse::Navigation::NavigationArgs* panelArgs = ::g::Fuse::Navigation::NavigationArgs::New2(1.0, 1.0, 1);
    ::g::Fuse::Navigation::NavigationArgs* mainArgs = ::g::Fuse::Navigation::NavigationArgs::New2(0.0, 0.0, 1);

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(::g::Fuse::Navigation::INavigationPanel::Children(uInterface(uPtr(Owner()), ::TYPES[16/*Fuse.Navigation.INavigationPanel*/]))), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
    {
        ::g::Fuse::Node* nodeChild = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(::g::Fuse::Navigation::INavigationPanel::Children(uInterface(uPtr(Owner()), ::TYPES[16/*Fuse.Navigation.INavigationPanel*/]))), ::TYPES[17/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret9), ret9);

        if (!IsPage(nodeChild))
            continue;

        ::g::Fuse::Elements::Element* element = uAs< ::g::Fuse::Elements::Element*>(nodeChild, ::TYPES[21/*Fuse.Elements.Element*/]);
        int edge = (element == NULL) ? 4 : EdgeNavigation::GetEdge(element);

        if (edge == 4)
        {
            ::g::Uno::Collections::List__Add_fn(uPtr(_mains), nodeChild);
            ::g::Fuse::Navigation::Navigation::NotifyNavigation(nodeChild, mainArgs);
        }
        else
        {
            ::g::Fuse::Navigation::Navigation::NotifyNavigation(element, panelArgs);
            ::g::Fuse::Gestures::Internal::EdgeSwiper* s = ::g::Fuse::Gestures::Internal::EdgeSwiper::New1();
            s->Edge(edge);
            s->Target(element);
            s->add_ProgressChanged(uDelegate::New(::TYPES[24/*Uno.Action<object, double>*/], (void*)EdgeNavigation__OnProgressChanged_fn, this));
            s->Rooted(_element);
            ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(_swipers), uCRef<int>(edge), s);
        }
    }
}

// private void ClearChildren() [instance] :247
void EdgeNavigation::ClearChildren()
{
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > ret10;

    for (::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > enum2 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(_swipers), &ret10), ret10); enum2.MoveNext(::TYPES[25/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > s = enum2.Current(::TYPES[25/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);
        uPtr(s.Value(::TYPES[26/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->remove_ProgressChanged(uDelegate::New(::TYPES[24/*Uno.Action<object, double>*/], (void*)EdgeNavigation__OnProgressChanged_fn, this));
        uPtr(s.Value(::TYPES[26/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Unrooted();
    }

    uPtr(_swipers)->Clear();
    uPtr(_mains)->Clear();
}

// internal bool IsAnyPanelActive() [instance] :338
bool EdgeNavigation::IsAnyPanelActive()
{
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > ret13;

    for (::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > enum6 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(_swipers), &ret13), ret13); enum6.MoveNext(::TYPES[25/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > sw = enum6.Current(::TYPES[25/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);

        if (uPtr(sw.Value(::TYPES[26/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Progress() > 0.0)
            return true;
    }

    return false;
}

// internal bool IsDismissPoint(float2 windowPoint) [instance] :326
bool EdgeNavigation::IsDismissPoint(::g::Uno::Float2 windowPoint)
{
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > ret14;

    for (::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > enum5 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(_swipers), &ret14), ret14); enum5.MoveNext(::TYPES[25/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > sw = enum5.Current(::TYPES[25/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);
        ::g::Uno::Float2 local = uPtr(uPtr(sw.Value(::TYPES[26/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Target())->WindowToLocal(windowPoint);

        if (uPtr(uPtr(sw.Value(::TYPES[26/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Target())->IsPointInside(local))
            return false;
    }

    return true;
}

// private void OnProgressChanged(object s, double progress) [instance] :293
void EdgeNavigation::OnProgressChanged(uObject* s, double progress)
{
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > ret15;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > ret16;
    ::g::Fuse::Gestures::Internal::EdgeSwiper* swiper = uAs< ::g::Fuse::Gestures::Internal::EdgeSwiper*>(s, ::TYPES[22/*Fuse.Gestures.Internal.EdgeSwiper*/]);
    ::g::Fuse::Elements::Element* panel = uPtr(swiper)->Target();

    if ((panel == NULL) || (swiper == NULL))
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[0/*"Unexpected ...*/], 1, ::STRINGS[1/*"C:\\Program...*/], 299);
        return;
    }

    ::g::Fuse::Navigation::NavigationArgs* a = ::g::Fuse::Navigation::NavigationArgs::New2(1.0 - progress, 1.0 - progress, 2);
    ::g::Fuse::Navigation::Navigation::NotifyNavigation(panel, a);
    ::g::Fuse::Node* maxPage = NULL;
    double maxProgress = 0.0;

    for (::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > enum3 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(_swipers), &ret15), ret15); enum3.MoveNext(::TYPES[25/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > sw = enum3.Current(::TYPES[25/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);

        if (uPtr(sw.Value(::TYPES[26/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Progress() > maxProgress)
        {
            maxPage = uPtr(sw.Value(::TYPES[26/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Target();
            maxProgress = uPtr(sw.Value(::TYPES[26/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Progress();
        }
    }

    _active = maxPage;
    ::g::Fuse::Navigation::NavigationArgs* b = ::g::Fuse::Navigation::NavigationArgs::New2(-maxProgress, -maxProgress, 2);

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > enum4 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_mains), &ret16), ret16); enum4.MoveNext(::TYPES[28/*Uno.Collections.List<Fuse.Node>.Enumerator*/]); )
    {
        ::g::Fuse::Node* m = enum4.Current(::TYPES[28/*Uno.Collections.List<Fuse.Node>.Enumerator*/]);
        ::g::Fuse::Navigation::Navigation::NotifyNavigation(m, b);
    }
}

// public static Fuse.Navigation.NavigationEdge GetEdge(Fuse.Elements.Element elm) [static] :163
int EdgeNavigation::GetEdge(::g::Fuse::Elements::Element* elm)
{
    EdgeNavigation_typeof()->Init();
    uObject* res;

    if (uPtr(uPtr(elm)->Properties())->TryGet(EdgeNavigation::_edgeHandle(), &res))
        return uUnbox<int>(::TYPES[27/*Fuse.Navigation.NavigationEdge*/], res);

    return 4;
}

// public generated EdgeNavigation New() [static] :152
EdgeNavigation* EdgeNavigation::New1()
{
    EdgeNavigation* obj8 = (EdgeNavigation*)uNew(EdgeNavigation_typeof());
    obj8->ctor_2();
    return obj8;
}

// public static void ResetEdge(Fuse.Elements.Element elm) [static] :172
void EdgeNavigation::ResetEdge(::g::Fuse::Elements::Element* elm)
{
    EdgeNavigation_typeof()->Init();
    uPtr(uPtr(elm)->Properties())->Clear(EdgeNavigation::_edgeHandle());
}

// public static void SetEdge(Fuse.Elements.Element elm, Fuse.Navigation.NavigationEdge edge) [static] :157
void EdgeNavigation::SetEdge(::g::Fuse::Elements::Element* elm, int edge)
{
    EdgeNavigation_typeof()->Init();
    uPtr(uPtr(elm)->Properties())->Set(EdgeNavigation::_edgeHandle(), uBox<int>(::TYPES[27/*Fuse.Navigation.NavigationEdge*/], edge));
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(1705)
// --------------------------------------------------------------

// public sealed class EndSeekArgs :1705
// {
uType* EndSeekArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(EndSeekArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.EndSeekArgs", options);
    type->SetFields(0,
        ::g::Fuse::Navigation::SnapTo_typeof(), offsetof(::g::Fuse::Navigation::EndSeekArgs, _SnapTo), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)EndSeekArgs__New1_fn, 0, true, EndSeekArgs_typeof(), 1, ::g::Fuse::Navigation::SnapTo_typeof()),
        new uFunction("get_SnapTo", NULL, (void*)EndSeekArgs__get_SnapTo_fn, 0, false, ::g::Fuse::Navigation::SnapTo_typeof(), 0));
    return type;
}

// public EndSeekArgs(Fuse.Navigation.SnapTo snapTo) :1710
void EndSeekArgs__ctor__fn(EndSeekArgs* __this, int* snapTo)
{
    __this->ctor_(*snapTo);
}

// public EndSeekArgs New(Fuse.Navigation.SnapTo snapTo) :1710
void EndSeekArgs__New1_fn(int* snapTo, EndSeekArgs** __retval)
{
    *__retval = EndSeekArgs::New1(*snapTo);
}

// public generated Fuse.Navigation.SnapTo get_SnapTo() :1708
void EndSeekArgs__get_SnapTo_fn(EndSeekArgs* __this, int* __retval)
{
    *__retval = __this->SnapTo();
}

// private generated void set_SnapTo(Fuse.Navigation.SnapTo value) :1708
void EndSeekArgs__set_SnapTo_fn(EndSeekArgs* __this, int* value)
{
    __this->SnapTo(*value);
}

// public EndSeekArgs(Fuse.Navigation.SnapTo snapTo) [instance] :1710
void EndSeekArgs::ctor_(int snapTo)
{
    SnapTo(snapTo);
}

// public generated Fuse.Navigation.SnapTo get_SnapTo() [instance] :1708
int EndSeekArgs::SnapTo()
{
    return _SnapTo;
}

// private generated void set_SnapTo(Fuse.Navigation.SnapTo value) [instance] :1708
void EndSeekArgs::SnapTo(int value)
{
    _SnapTo = value;
}

// public EndSeekArgs New(Fuse.Navigation.SnapTo snapTo) [static] :1710
EndSeekArgs* EndSeekArgs::New1(int snapTo)
{
    EndSeekArgs* obj1 = (EndSeekArgs*)uNew(EndSeekArgs_typeof());
    obj1->ctor_(snapTo);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(537)
// -------------------------------------------------------------

// public abstract class EnterExitAnimation :537
// {
::g::Fuse::Navigation::NavigationAnimation_type* EnterExitAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(EnterExitAnimation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationAnimation_type);
    type = (::g::Fuse::Navigation::NavigationAnimation_type*)uClassType::New("Fuse.Navigation.EnterExitAnimation", options);
    type->SetBase(::g::Fuse::Navigation::NavigationAnimation_typeof());
    type->fp_ForceUpdate = (void(*)(::g::Fuse::Navigation::NavigationAnimation*))EnterExitAnimation__ForceUpdate_fn;
    type->fp_OnNavigationStateChanged = (void(*)(::g::Fuse::Navigation::NavigationAnimation*, uObject*, ::g::Fuse::Navigation::NavigationArgs*))EnterExitAnimation__OnNavigationStateChanged_fn;
    ::TYPES[0] = ::g::Fuse::Navigation::NavigationAnimation_typeof();
    ::TYPES[2] = ::g::Fuse::Navigation::NavigationArgs_typeof();
    ::TYPES[18] = ::g::Uno::Bool_typeof();
    ::TYPES[1] = ::g::Uno::Double_typeof();
    type->SetFields(15,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::EnterExitAnimation, NegativeProgress), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::EnterExitAnimation, PositiveProgress), 0);
    return type;
}

// protected generated EnterExitAnimation() :537
void EnterExitAnimation__ctor_3_fn(EnterExitAnimation* __this)
{
    __this->ctor_3();
}

// protected override sealed void ForceUpdate() :539
void EnterExitAnimation__ForceUpdate_fn(EnterExitAnimation* __this)
{
    double p = ::g::Fuse::Navigation::Navigation::GetProgress(__this->PageContext());

    if (__this->IsMatch(p))
        __this->BypassSeek(::g::Uno::Math::Abs(p), 0);
}

// private bool IsMatch(double progress) :546
void EnterExitAnimation__IsMatch_fn(EnterExitAnimation* __this, double* progress, bool* __retval)
{
    *__retval = __this->IsMatch(*progress);
}

// internal override sealed void OnNavigationStateChanged(object sender, Fuse.Navigation.NavigationArgs state) :554
void EnterExitAnimation__OnNavigationStateChanged_fn(EnterExitAnimation* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state)
{
    int d = (::g::Uno::Math::Abs(uPtr(state)->PreviousProgress()) < ::g::Uno::Math::Abs(uPtr(state)->Progress())) ? 0 : 1;

    if (!__this->IsMatch(state->Progress()))
    {
        __this->Seek1(0.0, d);
        return;
    }

    __this->GoProgress((double)__this->Scale() * ::g::Uno::Math::Abs(state->Progress()), d, state);
}

// protected generated EnterExitAnimation() [instance] :537
void EnterExitAnimation::ctor_3()
{
    ctor_2();
}

// private bool IsMatch(double progress) [instance] :546
bool EnterExitAnimation::IsMatch(double progress)
{
    return (PositiveProgress && (progress >= 0.0)) || (NegativeProgress && (progress <= 0.0));
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(576)
// -------------------------------------------------------------

// public sealed class EnteringAnimation :576
// {
::g::Fuse::Navigation::NavigationAnimation_type* EnteringAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(EnteringAnimation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationAnimation_type);
    type = (::g::Fuse::Navigation::NavigationAnimation_type*)uClassType::New("Fuse.Navigation.EnteringAnimation", options);
    type->SetBase(::g::Fuse::Navigation::EnterExitAnimation_typeof());
    type->fp_ctor_ = (void*)EnteringAnimation__New1_fn;
    ::TYPES[30] = ::g::Fuse::Navigation::EnterExitAnimation_typeof();
    type->SetFields(17);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)EnteringAnimation__New1_fn, 0, true, EnteringAnimation_typeof(), 0));
    return type;
}

// public EnteringAnimation() :578
void EnteringAnimation__ctor_4_fn(EnteringAnimation* __this)
{
    __this->ctor_4();
}

// public EnteringAnimation New() :578
void EnteringAnimation__New1_fn(EnteringAnimation** __retval)
{
    *__retval = EnteringAnimation::New1();
}

// public EnteringAnimation() [instance] :578
void EnteringAnimation::ctor_4()
{
    ctor_3();
    PositiveProgress = true;
}

// public EnteringAnimation New() [static] :578
EnteringAnimation* EnteringAnimation::New1()
{
    EnteringAnimation* obj1 = (EnteringAnimation*)uNew(EnteringAnimation_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(568)
// -------------------------------------------------------------

// public sealed class ExitingAnimation :568
// {
::g::Fuse::Navigation::NavigationAnimation_type* ExitingAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(ExitingAnimation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationAnimation_type);
    type = (::g::Fuse::Navigation::NavigationAnimation_type*)uClassType::New("Fuse.Navigation.ExitingAnimation", options);
    type->SetBase(::g::Fuse::Navigation::EnterExitAnimation_typeof());
    type->fp_ctor_ = (void*)ExitingAnimation__New1_fn;
    ::TYPES[30] = ::g::Fuse::Navigation::EnterExitAnimation_typeof();
    type->SetFields(17);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ExitingAnimation__New1_fn, 0, true, ExitingAnimation_typeof(), 0));
    return type;
}

// public ExitingAnimation() :570
void ExitingAnimation__ctor_4_fn(ExitingAnimation* __this)
{
    __this->ctor_4();
}

// public ExitingAnimation New() :570
void ExitingAnimation__New1_fn(ExitingAnimation** __retval)
{
    *__retval = ExitingAnimation::New1();
}

// public ExitingAnimation() [instance] :570
void ExitingAnimation::ctor_4()
{
    ctor_3();
    NegativeProgress = true;
}

// public ExitingAnimation New() [static] :570
ExitingAnimation* ExitingAnimation::New1()
{
    ExitingAnimation* obj1 = (ExitingAnimation*)uNew(ExitingAnimation_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(2073)
// --------------------------------------------------------------

// public sealed class GoBack :2073
// {
::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type* GoBack_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(GoBack);
    options.TypeSize = sizeof(::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type);
    type = (::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type*)uClassType::New("Fuse.Navigation.GoBack", options);
    type->SetBase(::g::Fuse::Navigation::BackForwardNavigationTriggerAction_typeof());
    type->fp_ctor_ = (void*)GoBack__New1_fn;
    type->fp_Perform1 = (void(*)(::g::Fuse::Navigation::BackForwardNavigationTriggerAction*, uObject*, ::g::Fuse::Node*))GoBack__Perform1_fn;
    ::TYPES[4] = ::g::Fuse::Navigation::IBaseNavigation_typeof();
    type->SetFields(7);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)GoBack__New1_fn, 0, true, GoBack_typeof(), 0));
    return type;
}

// public generated GoBack() :2073
void GoBack__ctor_2_fn(GoBack* __this)
{
    __this->ctor_2();
}

// public generated GoBack New() :2073
void GoBack__New1_fn(GoBack** __retval)
{
    *__retval = GoBack::New1();
}

// protected override sealed void Perform(Fuse.Navigation.IBaseNavigation ctx, Fuse.Node node) :2075
void GoBack__Perform1_fn(GoBack* __this, uObject* ctx, ::g::Fuse::Node* node)
{
    if (::g::Fuse::Navigation::IBaseNavigation::CanGoBack(uInterface(uPtr(ctx), ::TYPES[4/*Fuse.Navigation.IBaseNavigation*/])))
        ::g::Fuse::Navigation::IBaseNavigation::GoBack(uInterface(uPtr(ctx), ::TYPES[4/*Fuse.Navigation.IBaseNavigation*/]));
}

// public generated GoBack() [instance] :2073
void GoBack::ctor_2()
{
    ctor_1();
}

// public generated GoBack New() [static] :2073
GoBack* GoBack::New1()
{
    GoBack* obj1 = (GoBack*)uNew(GoBack_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(2082)
// --------------------------------------------------------------

// public sealed class GoForward :2082
// {
::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type* GoForward_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(GoForward);
    options.TypeSize = sizeof(::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type);
    type = (::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type*)uClassType::New("Fuse.Navigation.GoForward", options);
    type->SetBase(::g::Fuse::Navigation::BackForwardNavigationTriggerAction_typeof());
    type->fp_ctor_ = (void*)GoForward__New1_fn;
    type->fp_Perform1 = (void(*)(::g::Fuse::Navigation::BackForwardNavigationTriggerAction*, uObject*, ::g::Fuse::Node*))GoForward__Perform1_fn;
    ::TYPES[4] = ::g::Fuse::Navigation::IBaseNavigation_typeof();
    type->SetFields(7);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)GoForward__New1_fn, 0, true, GoForward_typeof(), 0));
    return type;
}

// public generated GoForward() :2082
void GoForward__ctor_2_fn(GoForward* __this)
{
    __this->ctor_2();
}

// public generated GoForward New() :2082
void GoForward__New1_fn(GoForward** __retval)
{
    *__retval = GoForward::New1();
}

// protected override sealed void Perform(Fuse.Navigation.IBaseNavigation ctx, Fuse.Node node) :2085
void GoForward__Perform1_fn(GoForward* __this, uObject* ctx, ::g::Fuse::Node* node)
{
    if (::g::Fuse::Navigation::IBaseNavigation::CanGoForward(uInterface(uPtr(ctx), ::TYPES[4/*Fuse.Navigation.IBaseNavigation*/])))
        ::g::Fuse::Navigation::IBaseNavigation::GoForward(uInterface(uPtr(ctx), ::TYPES[4/*Fuse.Navigation.IBaseNavigation*/]));
}

// public generated GoForward() [instance] :2082
void GoForward::ctor_2()
{
    ctor_1();
}

// public generated GoForward New() [static] :2082
GoForward* GoForward::New1()
{
    GoForward* obj1 = (GoForward*)uNew(GoForward_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(1634)
// --------------------------------------------------------------

// public sealed class HierarchicalNavigation :1634
// {
::g::Fuse::Navigation::Navigation_type* HierarchicalNavigation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::Navigation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(HierarchicalNavigation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::Navigation_type);
    type = (::g::Fuse::Navigation::Navigation_type*)uClassType::New("Fuse.Navigation.HierarchicalNavigation", options);
    type->SetBase(::g::Fuse::Navigation::StructuredNavigation_typeof());
    type->fp_ctor_ = (void*)HierarchicalNavigation__New1_fn;
    type->interface0.fp_GetPage = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Navigation::Navigation__GetPage_fn;
    type->interface0.fp_Goto = (void(*)(uObject*, ::g::Fuse::Node*, int*))::g::Fuse::Navigation::StructuredNavigation__Goto_fn;
    type->interface0.fp_Toggle = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Navigation::Navigation__Toggle_fn;
    type->interface0.fp_get_PageCount = (void(*)(uObject*, int*))::g::Fuse::Navigation::Navigation__get_PageCount_fn;
    type->interface0.fp_get_PageProgress = (void(*)(uObject*, double*))::g::Fuse::Navigation::StructuredNavigation__get_PageProgress_fn;
    type->interface0.fp_get_ActivePage = (void(*)(uObject*, ::g::Fuse::Node**))::g::Fuse::Navigation::Navigation__get_ActivePage_fn;
    type->interface0.fp_add_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__add_PageCountChanged_fn;
    type->interface0.fp_remove_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__remove_PageCountChanged_fn;
    type->interface0.fp_add_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__add_PageProgressChanged_fn;
    type->interface0.fp_remove_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__remove_PageProgressChanged_fn;
    type->interface0.fp_add_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__add_Navigated_fn;
    type->interface0.fp_remove_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__remove_Navigated_fn;
    type->interface0.fp_add_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__add_HistoryChanged_fn;
    type->interface0.fp_remove_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__remove_HistoryChanged_fn;
    type->interface1.fp_GoForward = (void(*)(uObject*))::g::Fuse::Navigation::StructuredNavigation__GoForward_fn;
    type->interface1.fp_GoBack = (void(*)(uObject*))::g::Fuse::Navigation::StructuredNavigation__GoBack_fn;
    type->interface1.fp_get_CanGoBack = (void(*)(uObject*, bool*))::g::Fuse::Navigation::StructuredNavigation__get_CanGoBack_fn;
    type->interface1.fp_get_CanGoForward = (void(*)(uObject*, bool*))::g::Fuse::Navigation::StructuredNavigation__get_CanGoForward_fn;
    ::TYPES[31] = ::g::Fuse::Navigation::StructuredNavigation_typeof();
    type->SetInterfaces(
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(::g::Fuse::Navigation::Navigation_type, interface0),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(::g::Fuse::Navigation::Navigation_type, interface1));
    type->SetFields(16);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)HierarchicalNavigation__New1_fn, 0, true, HierarchicalNavigation_typeof(), 0),
        new uFunction("get_ReuseExistingNode", NULL, (void*)HierarchicalNavigation__get_ReuseExistingNode_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_ReuseExistingNode", NULL, (void*)HierarchicalNavigation__set_ReuseExistingNode_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));
    return type;
}

// public HierarchicalNavigation() :1636
void HierarchicalNavigation__ctor_3_fn(HierarchicalNavigation* __this)
{
    __this->ctor_3();
}

// public HierarchicalNavigation New() :1636
void HierarchicalNavigation__New1_fn(HierarchicalNavigation** __retval)
{
    *__retval = HierarchicalNavigation::New1();
}

// public bool get_ReuseExistingNode() :1642
void HierarchicalNavigation__get_ReuseExistingNode_fn(HierarchicalNavigation* __this, bool* __retval)
{
    *__retval = __this->ReuseExistingNode();
}

// public void set_ReuseExistingNode(bool value) :1643
void HierarchicalNavigation__set_ReuseExistingNode_fn(HierarchicalNavigation* __this, bool* value)
{
    __this->ReuseExistingNode(*value);
}

// public HierarchicalNavigation() [instance] :1636
void HierarchicalNavigation::ctor_3()
{
    ctor_2(1);
}

// public bool get_ReuseExistingNode() [instance] :1642
bool HierarchicalNavigation::ReuseExistingNode()
{
    return _reuseExistingNode;
}

// public void set_ReuseExistingNode(bool value) [instance] :1643
void HierarchicalNavigation::ReuseExistingNode(bool value)
{
    _reuseExistingNode = value;
}

// public HierarchicalNavigation New() [static] :1636
HierarchicalNavigation* HierarchicalNavigation::New1()
{
    HierarchicalNavigation* obj1 = (HierarchicalNavigation*)uNew(HierarchicalNavigation_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(394)
// -------------------------------------------------------------

// public delegate void HistoryChangedHandler(object sender) :394
uDelegateType* HistoryChangedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.HistoryChangedHandler", 1, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(409)
// -------------------------------------------------------------

// public abstract interface IBaseNavigation :409
// {
uInterfaceType* IBaseNavigation_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Navigation.IBaseNavigation", 0, 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_CanGoBack", NULL, NULL, offsetof(IBaseNavigation, fp_get_CanGoBack), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanGoForward", NULL, NULL, offsetof(IBaseNavigation, fp_get_CanGoForward), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("GoBack", NULL, NULL, offsetof(IBaseNavigation, fp_GoBack), false, uVoid_typeof(), 0),
        new uFunction("GoForward", NULL, NULL, offsetof(IBaseNavigation, fp_GoForward), false, uVoid_typeof(), 0));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(417)
// -------------------------------------------------------------

// public abstract interface INavigation :417
// {
uInterfaceType* INavigation_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Navigation.INavigation", 0, 0);
    type->Reflection.SetFunctions(14,
        new uFunction("get_ActivePage", NULL, NULL, offsetof(INavigation, fp_get_ActivePage), false, ::g::Fuse::Node_typeof(), 0),
        new uFunction("GetPage", NULL, NULL, offsetof(INavigation, fp_GetPage), false, ::g::Fuse::Node_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("Goto", NULL, NULL, offsetof(INavigation, fp_Goto), false, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Fuse::Navigation::NavigationGotoMode_typeof()),
        new uFunction("add_HistoryChanged", NULL, NULL, offsetof(INavigation, fp_add_HistoryChanged), false, uVoid_typeof(), 1, ::g::Fuse::Navigation::HistoryChangedHandler_typeof()),
        new uFunction("remove_HistoryChanged", NULL, NULL, offsetof(INavigation, fp_remove_HistoryChanged), false, uVoid_typeof(), 1, ::g::Fuse::Navigation::HistoryChangedHandler_typeof()),
        new uFunction("add_Navigated", NULL, NULL, offsetof(INavigation, fp_add_Navigated), false, uVoid_typeof(), 1, ::g::Fuse::Navigation::NavigatedHandler_typeof()),
        new uFunction("remove_Navigated", NULL, NULL, offsetof(INavigation, fp_remove_Navigated), false, uVoid_typeof(), 1, ::g::Fuse::Navigation::NavigatedHandler_typeof()),
        new uFunction("get_PageCount", NULL, NULL, offsetof(INavigation, fp_get_PageCount), false, ::g::Uno::Int_typeof(), 0),
        new uFunction("add_PageCountChanged", NULL, NULL, offsetof(INavigation, fp_add_PageCountChanged), false, uVoid_typeof(), 1, ::g::Fuse::Navigation::NavigationPageCountHandler_typeof()),
        new uFunction("remove_PageCountChanged", NULL, NULL, offsetof(INavigation, fp_remove_PageCountChanged), false, uVoid_typeof(), 1, ::g::Fuse::Navigation::NavigationPageCountHandler_typeof()),
        new uFunction("get_PageProgress", NULL, NULL, offsetof(INavigation, fp_get_PageProgress), false, ::g::Uno::Double_typeof(), 0),
        new uFunction("add_PageProgressChanged", NULL, NULL, offsetof(INavigation, fp_add_PageProgressChanged), false, uVoid_typeof(), 1, ::g::Fuse::Navigation::NavigationPageProgressHandler_typeof()),
        new uFunction("remove_PageProgressChanged", NULL, NULL, offsetof(INavigation, fp_remove_PageProgressChanged), false, uVoid_typeof(), 1, ::g::Fuse::Navigation::NavigationPageProgressHandler_typeof()),
        new uFunction("Toggle", NULL, NULL, offsetof(INavigation, fp_Toggle), false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\Internal\$.uno(12)
// ---------------------------------------------------------------------

// internal abstract interface INavigationAnimator :12
// {
uInterfaceType* INavigationAnimator_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Navigation.INavigationAnimator", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\Internal\$.uno(19)
// ---------------------------------------------------------------------

// internal abstract interface INavigationAnimatorPlayer :19
// {
uInterfaceType* INavigationAnimatorPlayer_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Navigation.INavigationAnimatorPlayer", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(442)
// -------------------------------------------------------------

// internal abstract interface INavigationPanel :442
// {
uInterfaceType* INavigationPanel_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Navigation.INavigationPanel", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(1002)
// --------------------------------------------------------------

// internal abstract interface IPageResourceBinding :1002
// {
uInterfaceType* IPageResourceBinding_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Navigation.IPageResourceBinding", 0, 0);
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(1660)
// --------------------------------------------------------------

// public abstract interface ISeekable :1660
// {
uInterfaceType* ISeekable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Navigation.ISeekable", 0, 0);
    type->Reflection.SetFunctions(3,
        new uFunction("BeginSeek", NULL, NULL, offsetof(ISeekable, fp_BeginSeek), false, uVoid_typeof(), 0),
        new uFunction("EndSeek", NULL, NULL, offsetof(ISeekable, fp_EndSeek), false, uVoid_typeof(), 1, ::g::Fuse::Navigation::EndSeekArgs_typeof()),
        new uFunction("Seek", NULL, NULL, offsetof(ISeekable, fp_Seek), false, uVoid_typeof(), 1, ::g::Fuse::Navigation::UpdateSeekArgs_typeof()));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(1627)
// --------------------------------------------------------------

// public sealed class LinearNavigation :1627
// {
::g::Fuse::Navigation::Navigation_type* LinearNavigation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::Navigation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(LinearNavigation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::Navigation_type);
    type = (::g::Fuse::Navigation::Navigation_type*)uClassType::New("Fuse.Navigation.LinearNavigation", options);
    type->SetBase(::g::Fuse::Navigation::StructuredNavigation_typeof());
    type->fp_ctor_ = (void*)LinearNavigation__New1_fn;
    type->interface0.fp_GetPage = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Navigation::Navigation__GetPage_fn;
    type->interface0.fp_Goto = (void(*)(uObject*, ::g::Fuse::Node*, int*))::g::Fuse::Navigation::StructuredNavigation__Goto_fn;
    type->interface0.fp_Toggle = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Navigation::Navigation__Toggle_fn;
    type->interface0.fp_get_PageCount = (void(*)(uObject*, int*))::g::Fuse::Navigation::Navigation__get_PageCount_fn;
    type->interface0.fp_get_PageProgress = (void(*)(uObject*, double*))::g::Fuse::Navigation::StructuredNavigation__get_PageProgress_fn;
    type->interface0.fp_get_ActivePage = (void(*)(uObject*, ::g::Fuse::Node**))::g::Fuse::Navigation::Navigation__get_ActivePage_fn;
    type->interface0.fp_add_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__add_PageCountChanged_fn;
    type->interface0.fp_remove_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__remove_PageCountChanged_fn;
    type->interface0.fp_add_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__add_PageProgressChanged_fn;
    type->interface0.fp_remove_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__remove_PageProgressChanged_fn;
    type->interface0.fp_add_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__add_Navigated_fn;
    type->interface0.fp_remove_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__remove_Navigated_fn;
    type->interface0.fp_add_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__add_HistoryChanged_fn;
    type->interface0.fp_remove_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__remove_HistoryChanged_fn;
    type->interface1.fp_GoForward = (void(*)(uObject*))::g::Fuse::Navigation::StructuredNavigation__GoForward_fn;
    type->interface1.fp_GoBack = (void(*)(uObject*))::g::Fuse::Navigation::StructuredNavigation__GoBack_fn;
    type->interface1.fp_get_CanGoBack = (void(*)(uObject*, bool*))::g::Fuse::Navigation::StructuredNavigation__get_CanGoBack_fn;
    type->interface1.fp_get_CanGoForward = (void(*)(uObject*, bool*))::g::Fuse::Navigation::StructuredNavigation__get_CanGoForward_fn;
    type->SetInterfaces(
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(::g::Fuse::Navigation::Navigation_type, interface0),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(::g::Fuse::Navigation::Navigation_type, interface1));
    type->SetFields(16);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)LinearNavigation__New1_fn, 0, true, LinearNavigation_typeof(), 0));
    return type;
}

// public LinearNavigation() :1629
void LinearNavigation__ctor_3_fn(LinearNavigation* __this)
{
    __this->ctor_3();
}

// public LinearNavigation New() :1629
void LinearNavigation__New1_fn(LinearNavigation** __retval)
{
    *__retval = LinearNavigation::New1();
}

// public LinearNavigation() [instance] :1629
void LinearNavigation::ctor_3()
{
    ctor_2(0);
}

// public LinearNavigation New() [static] :1629
LinearNavigation* LinearNavigation::New1()
{
    LinearNavigation* obj1 = (LinearNavigation*)uNew(LinearNavigation_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(377)
// -------------------------------------------------------------

// public sealed class NavigatedArgs :377
// {
NavigatedArgs_type* NavigatedArgs_typeof()
{
    static uSStrong<NavigatedArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NavigatedArgs);
    options.TypeSize = sizeof(NavigatedArgs_type);
    type = (NavigatedArgs_type*)uClassType::New("Fuse.Navigation.NavigatedArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))NavigatedArgs__Fuse_Scripting_IScriptEvent_Serialize_fn;
    ::STRINGS[3] = uString::Const("name");
    ::STRINGS[4] = uString::Const("");
    ::TYPES[12] = ::g::Fuse::Node_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(NavigatedArgs_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Navigation::NavigatedArgs, _NewNode), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)NavigatedArgs__New2_fn, 0, true, NavigatedArgs_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("get_NewNode", NULL, (void*)NavigatedArgs__get_NewNode_fn, 0, false, ::g::Fuse::Node_typeof(), 0));
    return type;
}

// public NavigatedArgs(Fuse.Node newNode) :381
void NavigatedArgs__ctor_1_fn(NavigatedArgs* __this, ::g::Fuse::Node* newNode)
{
    __this->ctor_1(newNode);
}

// private void Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer s) :386
void NavigatedArgs__Fuse_Scripting_IScriptEvent_Serialize_fn(NavigatedArgs* __this, uObject* s)
{
    if (::g::Uno::String::op_Inequality(uPtr(__this->NewNode())->Name(), NULL))
        ::g::Fuse::Scripting::IEventSerializer::AddString(uInterface(uPtr(s), ::g::Fuse::Scripting::IEventSerializer_typeof()), ::STRINGS[3/*"name"*/], uPtr(__this->NewNode())->Name());
    else
        ::g::Fuse::Scripting::IEventSerializer::AddString(uInterface(s, ::g::Fuse::Scripting::IEventSerializer_typeof()), ::STRINGS[3/*"name"*/], ::STRINGS[4/*""*/]);
}

// public NavigatedArgs New(Fuse.Node newNode) :381
void NavigatedArgs__New2_fn(::g::Fuse::Node* newNode, NavigatedArgs** __retval)
{
    *__retval = NavigatedArgs::New2(newNode);
}

// public generated Fuse.Node get_NewNode() :379
void NavigatedArgs__get_NewNode_fn(NavigatedArgs* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->NewNode();
}

// private generated void set_NewNode(Fuse.Node value) :379
void NavigatedArgs__set_NewNode_fn(NavigatedArgs* __this, ::g::Fuse::Node* value)
{
    __this->NewNode(value);
}

// public NavigatedArgs(Fuse.Node newNode) [instance] :381
void NavigatedArgs::ctor_1(::g::Fuse::Node* newNode)
{
    ctor_();
    NewNode(newNode);
}

// public generated Fuse.Node get_NewNode() [instance] :379
::g::Fuse::Node* NavigatedArgs::NewNode()
{
    return _NewNode;
}

// private generated void set_NewNode(Fuse.Node value) [instance] :379
void NavigatedArgs::NewNode(::g::Fuse::Node* value)
{
    _NewNode = value;
}

// public NavigatedArgs New(Fuse.Node newNode) [static] :381
NavigatedArgs* NavigatedArgs::New2(::g::Fuse::Node* newNode)
{
    NavigatedArgs* obj1 = (NavigatedArgs*)uNew(NavigatedArgs_typeof());
    obj1->ctor_1(newNode);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(393)
// -------------------------------------------------------------

// public delegate void NavigatedHandler(object sender, Fuse.Navigation.NavigatedArgs args) :393
uDelegateType* NavigatedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.NavigatedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Navigation::NavigatedArgs_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(2028)
// --------------------------------------------------------------

// public sealed class NavigateTo :2028
// {
::g::Fuse::Navigation::NavigationTriggerAction_type* NavigateTo_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationTriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.ObjectSize = sizeof(NavigateTo);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationTriggerAction_type);
    type = (::g::Fuse::Navigation::NavigationTriggerAction_type*)uClassType::New("Fuse.Navigation.NavigateTo", options);
    type->SetBase(::g::Fuse::Navigation::NavigationTriggerAction_typeof());
    type->fp_ctor_ = (void*)NavigateTo__New1_fn;
    type->fp_Perform1 = (void(*)(::g::Fuse::Navigation::NavigationTriggerAction*, uObject*, ::g::Fuse::Node*))NavigateTo__Perform1_fn;
    ::TYPES[32] = ::g::Fuse::Navigation::NavigationGotoMode_typeof();
    ::TYPES[3] = ::g::Uno::Int_typeof();
    type->SetFields(8,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::NavigateTo, _Bypass), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::NavigateTo, _ClearForwardHistory), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Navigation::NavigateTo, _Target), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_Bypass", NULL, (void*)NavigateTo__get_Bypass_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Bypass", NULL, (void*)NavigateTo__set_Bypass_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_ClearForwardHistory", NULL, (void*)NavigateTo__get_ClearForwardHistory_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_ClearForwardHistory", NULL, (void*)NavigateTo__set_ClearForwardHistory_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)NavigateTo__New1_fn, 0, true, NavigateTo_typeof(), 0),
        new uFunction("get_Target", NULL, (void*)NavigateTo__get_Target_fn, 0, false, ::g::Fuse::Node_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)NavigateTo__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()));
    return type;
}

// public generated NavigateTo() :2028
void NavigateTo__ctor_2_fn(NavigateTo* __this)
{
    __this->ctor_2();
}

// public generated bool get_Bypass() :2032
void NavigateTo__get_Bypass_fn(NavigateTo* __this, bool* __retval)
{
    *__retval = __this->Bypass();
}

// public generated void set_Bypass(bool value) :2032
void NavigateTo__set_Bypass_fn(NavigateTo* __this, bool* value)
{
    __this->Bypass(*value);
}

// public generated bool get_ClearForwardHistory() :2034
void NavigateTo__get_ClearForwardHistory_fn(NavigateTo* __this, bool* __retval)
{
    *__retval = __this->ClearForwardHistory();
}

// public generated void set_ClearForwardHistory(bool value) :2034
void NavigateTo__set_ClearForwardHistory_fn(NavigateTo* __this, bool* value)
{
    __this->ClearForwardHistory(*value);
}

// public generated NavigateTo New() :2028
void NavigateTo__New1_fn(NavigateTo** __retval)
{
    *__retval = NavigateTo::New1();
}

// protected override sealed void Perform(Fuse.Navigation.INavigation ctx, Fuse.Node n) :2036
void NavigateTo__Perform1_fn(NavigateTo* __this, uObject* ctx, ::g::Fuse::Node* n)
{
    int mode = __this->Bypass() ? 2 : 0;

    if (__this->ClearForwardHistory())
        mode = mode | 4;

    if (__this->Target() != NULL)
        ::g::Fuse::Navigation::INavigation::Goto(uInterface(uPtr(ctx), ::TYPES[34/*Fuse.Navigation.INavigation*/]), __this->Target(), mode);
}

// public generated Fuse.Node get_Target() :2030
void NavigateTo__get_Target_fn(NavigateTo* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Node value) :2030
void NavigateTo__set_Target_fn(NavigateTo* __this, ::g::Fuse::Node* value)
{
    __this->Target(value);
}

// public generated NavigateTo() [instance] :2028
void NavigateTo::ctor_2()
{
    ctor_1();
}

// public generated bool get_Bypass() [instance] :2032
bool NavigateTo::Bypass()
{
    return _Bypass;
}

// public generated void set_Bypass(bool value) [instance] :2032
void NavigateTo::Bypass(bool value)
{
    _Bypass = value;
}

// public generated bool get_ClearForwardHistory() [instance] :2034
bool NavigateTo::ClearForwardHistory()
{
    return _ClearForwardHistory;
}

// public generated void set_ClearForwardHistory(bool value) [instance] :2034
void NavigateTo::ClearForwardHistory(bool value)
{
    _ClearForwardHistory = value;
}

// public generated Fuse.Node get_Target() [instance] :2030
::g::Fuse::Node* NavigateTo::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Node value) [instance] :2030
void NavigateTo::Target(::g::Fuse::Node* value)
{
    _Target = value;
}

// public generated NavigateTo New() [static] :2028
NavigateTo* NavigateTo::New1()
{
    NavigateTo* obj1 = (NavigateTo*)uNew(NavigateTo_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(2046)
// --------------------------------------------------------------

// public sealed class NavigateToggle :2046
// {
::g::Fuse::Navigation::NavigationTriggerAction_type* NavigateToggle_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationTriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(NavigateToggle);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationTriggerAction_type);
    type = (::g::Fuse::Navigation::NavigationTriggerAction_type*)uClassType::New("Fuse.Navigation.NavigateToggle", options);
    type->SetBase(::g::Fuse::Navigation::NavigationTriggerAction_typeof());
    type->fp_ctor_ = (void*)NavigateToggle__New1_fn;
    type->fp_Perform1 = (void(*)(::g::Fuse::Navigation::NavigationTriggerAction*, uObject*, ::g::Fuse::Node*))NavigateToggle__Perform1_fn;
    type->SetFields(8,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Navigation::NavigateToggle, _Target), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)NavigateToggle__New1_fn, 0, true, NavigateToggle_typeof(), 0),
        new uFunction("get_Target", NULL, (void*)NavigateToggle__get_Target_fn, 0, false, ::g::Fuse::Node_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)NavigateToggle__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()));
    return type;
}

// public generated NavigateToggle() :2046
void NavigateToggle__ctor_2_fn(NavigateToggle* __this)
{
    __this->ctor_2();
}

// public generated NavigateToggle New() :2046
void NavigateToggle__New1_fn(NavigateToggle** __retval)
{
    *__retval = NavigateToggle::New1();
}

// protected override sealed void Perform(Fuse.Navigation.INavigation ctx, Fuse.Node n) :2050
void NavigateToggle__Perform1_fn(NavigateToggle* __this, uObject* ctx, ::g::Fuse::Node* n)
{
    ::g::Fuse::Node* ind1;
    ::g::Fuse::Node* page = ::g::Fuse::Navigation::Navigation::TryFindPage((ind1 = __this->Target(), (ind1 != NULL) ? ind1 : n));

    if (page != NULL)
        ::g::Fuse::Navigation::INavigation::Toggle(uInterface(uPtr(ctx), ::TYPES[34/*Fuse.Navigation.INavigation*/]), page);
}

// public generated Fuse.Node get_Target() :2048
void NavigateToggle__get_Target_fn(NavigateToggle* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Node value) :2048
void NavigateToggle__set_Target_fn(NavigateToggle* __this, ::g::Fuse::Node* value)
{
    __this->Target(value);
}

// public generated NavigateToggle() [instance] :2046
void NavigateToggle::ctor_2()
{
    ctor_1();
}

// public generated Fuse.Node get_Target() [instance] :2048
::g::Fuse::Node* NavigateToggle::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Node value) [instance] :2048
void NavigateToggle::Target(::g::Fuse::Node* value)
{
    _Target = value;
}

// public generated NavigateToggle New() [static] :2046
NavigateToggle* NavigateToggle::New1()
{
    NavigateToggle* obj2 = (NavigateToggle*)uNew(NavigateToggle_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(677)
// -------------------------------------------------------------

// public interfacemodifiers class Navigation :677
// {
// static Navigation() :677
static void Navigation__cctor__fn(uType* __type)
{
    Navigation::_navigationHandler_ = ::g::Fuse::Properties::CreateHandle();
    Navigation::_navigationStateHandler_ = ::g::Fuse::Properties::CreateHandle();
    Navigation::_navigationProgress_ = ::g::Fuse::Properties::CreateHandle();
    Navigation::_contextHandle_ = ::g::Fuse::Properties::CreateHandle();
}

Navigation_type* Navigation_typeof()
{
    static uSStrong<Navigation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Navigation);
    options.TypeSize = sizeof(Navigation_type);
    type = (Navigation_type*)uClassType::New("Fuse.Navigation.Navigation", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_cctor_ = Navigation__cctor__fn;
    type->fp_get_CanGoBack = Navigation__get_CanGoBack_fn;
    type->fp_get_CanGoForward = Navigation__get_CanGoForward_fn;
    type->fp_GoBack = Navigation__GoBack_fn;
    type->fp_GoForward = Navigation__GoForward_fn;
    type->fp_OnChildAdded = Navigation__OnChildAdded_fn;
    type->fp_OnChildRemoved = Navigation__OnChildRemoved_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Navigation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Navigation__OnUnrooted_fn;
    type->fp_Toggle = Navigation__Toggle_fn;
    type->interface0.fp_GetPage = (void(*)(uObject*, int*, ::g::Fuse::Node**))Navigation__GetPage_fn;
    type->interface0.fp_Toggle = (void(*)(uObject*, ::g::Fuse::Node*))Navigation__Toggle_fn;
    type->interface0.fp_get_PageCount = (void(*)(uObject*, int*))Navigation__get_PageCount_fn;
    type->interface0.fp_get_ActivePage = (void(*)(uObject*, ::g::Fuse::Node**))Navigation__get_ActivePage_fn;
    type->interface0.fp_add_PageCountChanged = (void(*)(uObject*, uDelegate*))Navigation__add_PageCountChanged_fn;
    type->interface0.fp_remove_PageCountChanged = (void(*)(uObject*, uDelegate*))Navigation__remove_PageCountChanged_fn;
    type->interface0.fp_add_PageProgressChanged = (void(*)(uObject*, uDelegate*))Navigation__add_PageProgressChanged_fn;
    type->interface0.fp_remove_PageProgressChanged = (void(*)(uObject*, uDelegate*))Navigation__remove_PageProgressChanged_fn;
    type->interface0.fp_add_Navigated = (void(*)(uObject*, uDelegate*))Navigation__add_Navigated_fn;
    type->interface0.fp_remove_Navigated = (void(*)(uObject*, uDelegate*))Navigation__remove_Navigated_fn;
    type->interface0.fp_add_HistoryChanged = (void(*)(uObject*, uDelegate*))Navigation__add_HistoryChanged_fn;
    type->interface0.fp_remove_HistoryChanged = (void(*)(uObject*, uDelegate*))Navigation__remove_HistoryChanged_fn;
    type->interface1.fp_GoForward = (void(*)(uObject*))Navigation__GoForward_fn;
    type->interface1.fp_GoBack = (void(*)(uObject*))Navigation__GoBack_fn;
    type->interface1.fp_get_CanGoBack = (void(*)(uObject*, bool*))Navigation__get_CanGoBack_fn;
    type->interface1.fp_get_CanGoForward = (void(*)(uObject*, bool*))Navigation__get_CanGoForward_fn;
    ::TYPES[12] = ::g::Fuse::Node_typeof();
    ::TYPES[14] = uObject_typeof();
    ::TYPES[33] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Behavior_typeof());
    ::TYPES[34] = ::g::Fuse::Navigation::INavigation_typeof();
    ::TYPES[35] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Behavior_typeof());
    ::TYPES[15] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[16] = ::g::Fuse::Navigation::INavigationPanel_typeof();
    ::TYPES[17] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[1] = ::g::Uno::Double_typeof();
    ::TYPES[36] = ::g::Fuse::Navigation::NavigationHandler_typeof();
    ::TYPES[2] = ::g::Fuse::Navigation::NavigationArgs_typeof();
    ::TYPES[37] = ::g::Fuse::Navigation::NavigationStateHandler_typeof();
    ::TYPES[38] = ::g::Fuse::Navigation::NavigationStateArgs_typeof();
    ::TYPES[3] = ::g::Uno::Int_typeof();
    ::TYPES[39] = ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), uObject_typeof()->Array());
    ::TYPES[40] = uObject_typeof()->Array();
    ::TYPES[41] = ::g::Uno::Delegate_typeof();
    ::TYPES[42] = ::g::Fuse::Navigation::HistoryChangedHandler_typeof();
    ::TYPES[43] = ::g::Fuse::Navigation::NavigatedHandler_typeof();
    ::TYPES[44] = ::g::Fuse::Navigation::NavigationPageCountHandler_typeof();
    ::TYPES[45] = ::g::Fuse::Navigation::NavigationPageProgressHandler_typeof();
    ::TYPES[29] = ::g::Fuse::Behavior_typeof();
    ::TYPES[46] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Fuse::Node_typeof());
    type->SetInterfaces(
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(Navigation_type, interface0),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(Navigation_type, interface1));
    type->SetFields(3,
        ::g::Fuse::Navigation::INavigationPanel_typeof(), offsetof(::g::Fuse::Navigation::Navigation, _panel), 0,
        ::g::Fuse::Navigation::HistoryChangedHandler_typeof(), offsetof(::g::Fuse::Navigation::Navigation, HistoryChanged1), 0,
        ::g::Fuse::Navigation::NavigatedHandler_typeof(), offsetof(::g::Fuse::Navigation::Navigation, Navigated1), 0,
        ::g::Fuse::Navigation::NavigationPageCountHandler_typeof(), offsetof(::g::Fuse::Navigation::Navigation, PageCountChanged1), 0,
        ::g::Fuse::Navigation::NavigationPageProgressHandler_typeof(), offsetof(::g::Fuse::Navigation::Navigation, PageProgressChanged1), 0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Navigation::Navigation::_contextHandle_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Navigation::Navigation::_navigationHandler_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Navigation::Navigation::_navigationProgress_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Navigation::Navigation::_navigationStateHandler_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(26,
        new uFunction("get_Active", NULL, NULL, offsetof(Navigation_type, fp_get_Active), false, ::g::Fuse::Node_typeof(), 0),
        new uFunction("set_Active", NULL, NULL, offsetof(Navigation_type, fp_set_Active), false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("get_ActivePage", NULL, (void*)Navigation__get_ActivePage_fn, 0, false, ::g::Fuse::Node_typeof(), 0),
        new uFunction("get_CanGoBack", NULL, NULL, offsetof(Navigation_type, fp_get_CanGoBack), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanGoForward", NULL, NULL, offsetof(Navigation_type, fp_get_CanGoForward), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("ClearHistory", NULL, (void*)Navigation__ClearHistory_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("GetNavigationNavigation", NULL, (void*)Navigation__GetNavigationNavigation_fn, 0, true, ::g::Fuse::Navigation::INavigation_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("GetPage", NULL, (void*)Navigation__GetPage_fn, 0, false, ::g::Fuse::Node_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("GoBack", NULL, NULL, offsetof(Navigation_type, fp_GoBack), false, uVoid_typeof(), 0),
        new uFunction("GoForward", NULL, NULL, offsetof(Navigation_type, fp_GoForward), false, uVoid_typeof(), 0),
        new uFunction("Goto", NULL, NULL, offsetof(Navigation_type, fp_Goto), false, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Fuse::Navigation::NavigationGotoMode_typeof()),
        new uFunction("add_HistoryChanged", NULL, (void*)Navigation__add_HistoryChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::HistoryChangedHandler_typeof()),
        new uFunction("remove_HistoryChanged", NULL, (void*)Navigation__remove_HistoryChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::HistoryChangedHandler_typeof()),
        new uFunction("add_Navigated", NULL, (void*)Navigation__add_Navigated_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::NavigatedHandler_typeof()),
        new uFunction("remove_Navigated", NULL, (void*)Navigation__remove_Navigated_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::NavigatedHandler_typeof()),
        new uFunction("get_PageCount", NULL, (void*)Navigation__get_PageCount_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("add_PageCountChanged", NULL, (void*)Navigation__add_PageCountChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::NavigationPageCountHandler_typeof()),
        new uFunction("remove_PageCountChanged", NULL, (void*)Navigation__remove_PageCountChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::NavigationPageCountHandler_typeof()),
        new uFunction("get_PageProgress", NULL, NULL, offsetof(Navigation_type, fp_get_PageProgress), false, ::g::Uno::Double_typeof(), 0),
        new uFunction("add_PageProgressChanged", NULL, (void*)Navigation__add_PageProgressChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::NavigationPageProgressHandler_typeof()),
        new uFunction("remove_PageProgressChanged", NULL, (void*)Navigation__remove_PageProgressChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::NavigationPageProgressHandler_typeof()),
        new uFunction("ResetNavigationNavigation", NULL, (void*)Navigation__ResetNavigationNavigation_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("SetNavigationNavigation", NULL, (void*)Navigation__SetNavigationNavigation_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Fuse::Navigation::INavigation_typeof()),
        new uFunction("Toggle", NULL, NULL, offsetof(Navigation_type, fp_Toggle), false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("TryFind", NULL, (void*)Navigation__TryFind_fn, 0, true, ::g::Fuse::Navigation::INavigation_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("TryFindPage", NULL, (void*)Navigation__TryFindPage_fn, 0, true, ::g::Fuse::Node_typeof(), 1, ::g::Fuse::Node_typeof()));
    return type;
}

// internal Navigation() :766
void Navigation__ctor_1_fn(Navigation* __this)
{
    __this->ctor_1();
}

// public Fuse.Node get_ActivePage() :955
void Navigation__get_ActivePage_fn(Navigation* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->ActivePage();
}

// internal static void AddHandler(Fuse.Node node, Fuse.Navigation.NavigationHandler handler) :681
void Navigation__AddHandler_fn(::g::Fuse::Node* node, uDelegate* handler)
{
    Navigation::AddHandler(node, handler);
}

// internal static void AddStateHandler(Fuse.Node node, Fuse.Navigation.NavigationStateHandler handler) :711
void Navigation__AddStateHandler_fn(::g::Fuse::Node* node, uDelegate* handler)
{
    Navigation::AddStateHandler(node, handler);
}

// public virtual bool get_CanGoBack() :877
void Navigation__get_CanGoBack_fn(Navigation* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public virtual bool get_CanGoForward() :878
void Navigation__get_CanGoForward_fn(Navigation* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public void ClearHistory() :879
void Navigation__ClearHistory_fn(Navigation* __this)
{
    __this->ClearHistory();
}

// internal static Fuse.Navigation.INavigation GetLocalNavigation(Fuse.Node node) :772
void Navigation__GetLocalNavigation_fn(::g::Fuse::Node* node, uObject** __retval)
{
    *__retval = Navigation::GetLocalNavigation(node);
}

// public static Fuse.Navigation.INavigation GetNavigationNavigation(Fuse.Node n) :823
void Navigation__GetNavigationNavigation_fn(::g::Fuse::Node* n, uObject** __retval)
{
    *__retval = Navigation::GetNavigationNavigation(n);
}

// public Fuse.Node GetPage(int index) :940
void Navigation__GetPage_fn(Navigation* __this, int* index, ::g::Fuse::Node** __retval)
{
    *__retval = __this->GetPage(*index);
}

// protected int GetPageIndex(Fuse.Node child) :971
void Navigation__GetPageIndex_fn(Navigation* __this, ::g::Fuse::Node* child, int* __retval)
{
    *__retval = __this->GetPageIndex(child);
}

// internal static double GetProgress(Fuse.Node n) :742
void Navigation__GetProgress_fn(::g::Fuse::Node* n, double* __retval)
{
    *__retval = Navigation::GetProgress(n);
}

// public virtual void GoBack() :876
void Navigation__GoBack_fn(Navigation* __this)
{
}

// public virtual void GoForward() :875
void Navigation__GoForward_fn(Navigation* __this)
{
}

// protected bool get_HasPages() :959
void Navigation__get_HasPages_fn(Navigation* __this, bool* __retval)
{
    *__retval = __this->HasPages();
}

// public generated void add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) :867
void Navigation__add_HistoryChanged_fn(Navigation* __this, uDelegate* value)
{
    __this->add_HistoryChanged(value);
}

// public generated void remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) :867
void Navigation__remove_HistoryChanged_fn(Navigation* __this, uDelegate* value)
{
    __this->remove_HistoryChanged(value);
}

// private static void Invoke(object handler, object[] state) :700
void Navigation__Invoke_fn(uObject* handler, uArray* state)
{
    Navigation::Invoke(handler, state);
}

// private static void InvokeState(object handler, object[] state) :726
void Navigation__InvokeState_fn(uObject* handler, uArray* state)
{
    Navigation::InvokeState(handler, state);
}

// protected bool IsPage(Fuse.Node n) :984
void Navigation__IsPage_fn(Navigation* __this, ::g::Fuse::Node* n, bool* __retval)
{
    *__retval = __this->IsPage(n);
}

// public generated void add_Navigated(Fuse.Navigation.NavigatedHandler value) :856
void Navigation__add_Navigated_fn(Navigation* __this, uDelegate* value)
{
    __this->add_Navigated(value);
}

// public generated void remove_Navigated(Fuse.Navigation.NavigatedHandler value) :856
void Navigation__remove_Navigated_fn(Navigation* __this, uDelegate* value)
{
    __this->remove_Navigated(value);
}

// internal static void NotifyNavigation(Fuse.Node n, Fuse.Navigation.NavigationArgs state) :691
void Navigation__NotifyNavigation_fn(::g::Fuse::Node* n, ::g::Fuse::Navigation::NavigationArgs* state)
{
    Navigation::NotifyNavigation(n, state);
}

// internal static void NotifyNavigationState(Fuse.Node n, Fuse.Navigation.NavigationStateArgs state) :721
void Navigation__NotifyNavigationState_fn(::g::Fuse::Node* n, ::g::Fuse::Navigation::NavigationStateArgs* state)
{
    Navigation::NotifyNavigationState(n, state);
}

// protected virtual void OnChildAdded(object s, Fuse.Node child) :921
void Navigation__OnChildAdded_fn(Navigation* __this, uObject* s, ::g::Fuse::Node* child)
{
}

// protected virtual void OnChildRemoved(object s, Fuse.Node child) :922
void Navigation__OnChildRemoved_fn(Navigation* __this, uObject* s, ::g::Fuse::Node* child)
{
}

// protected void OnHistoryChanged() :869
void Navigation__OnHistoryChanged_fn(Navigation* __this)
{
    __this->OnHistoryChanged();
}

// private void OnNavChildAdded(object s, Fuse.Node child) :909
void Navigation__OnNavChildAdded_fn(Navigation* __this, uObject* s, ::g::Fuse::Node* child)
{
    __this->OnNavChildAdded(s, child);
}

// private void OnNavChildRemoved(object s, Fuse.Node child) :915
void Navigation__OnNavChildRemoved_fn(Navigation* __this, uObject* s, ::g::Fuse::Node* child)
{
    __this->OnNavChildRemoved(s, child);
}

// protected void OnNavigated(Fuse.Node newElement) :858
void Navigation__OnNavigated_fn(Navigation* __this, ::g::Fuse::Node* newElement)
{
    __this->OnNavigated(newElement);
}

// protected void OnPageCountChanged() :842
void Navigation__OnPageCountChanged_fn(Navigation* __this)
{
    __this->OnPageCountChanged();
}

// protected void OnPageProgressChanged(double current, double prev) :850
void Navigation__OnPageProgressChanged_fn(Navigation* __this, double* current, double* prev)
{
    __this->OnPageProgressChanged(*current, *prev);
}

// protected override void OnRooted(Fuse.Node parentNode) :884
void Navigation__OnRooted_fn(Navigation* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    __this->_panel = uAs<uObject*>(__this->ParentNode(), ::TYPES[16/*Fuse.Navigation.INavigationPanel*/]);

    if (__this->_panel != NULL)
    {
        ::g::Fuse::Navigation::INavigationPanel::add_ChildAdded(uInterface(uPtr(__this->_panel), ::TYPES[16/*Fuse.Navigation.INavigationPanel*/]), uDelegate::New(::TYPES[46/*Uno.EventHandler<Fuse.Node>*/], (void*)Navigation__OnNavChildAdded_fn, __this));
        ::g::Fuse::Navigation::INavigationPanel::add_ChildRemoved(uInterface(uPtr(__this->_panel), ::TYPES[16/*Fuse.Navigation.INavigationPanel*/]), uDelegate::New(::TYPES[46/*Uno.EventHandler<Fuse.Node>*/], (void*)Navigation__OnNavChildRemoved_fn, __this));
    }

    __this->OnPageCountChanged();
}

// protected override void OnUnrooted(Fuse.Node parentNode) :897
void Navigation__OnUnrooted_fn(Navigation* __this, ::g::Fuse::Node* parentNode)
{
    if (__this->_panel != NULL)
    {
        ::g::Fuse::Navigation::INavigationPanel::remove_ChildAdded(uInterface(uPtr(__this->_panel), ::TYPES[16/*Fuse.Navigation.INavigationPanel*/]), uDelegate::New(::TYPES[46/*Uno.EventHandler<Fuse.Node>*/], (void*)Navigation__OnNavChildAdded_fn, __this));
        ::g::Fuse::Navigation::INavigationPanel::remove_ChildRemoved(uInterface(uPtr(__this->_panel), ::TYPES[16/*Fuse.Navigation.INavigationPanel*/]), uDelegate::New(::TYPES[46/*Uno.EventHandler<Fuse.Node>*/], (void*)Navigation__OnNavChildRemoved_fn, __this));
        __this->_panel = NULL;
    }

    ::g::Fuse::Behavior__OnUnrooted_fn(__this, parentNode);
}

// internal Fuse.Navigation.INavigationPanel get_Owner() :881
void Navigation__get_Owner_fn(Navigation* __this, uObject** __retval)
{
    *__retval = __this->Owner();
}

// public int get_PageCount() :926
void Navigation__get_PageCount_fn(Navigation* __this, int* __retval)
{
    *__retval = __this->PageCount();
}

// public generated void add_PageCountChanged(Fuse.Navigation.NavigationPageCountHandler value) :840
void Navigation__add_PageCountChanged_fn(Navigation* __this, uDelegate* value)
{
    __this->add_PageCountChanged(value);
}

// public generated void remove_PageCountChanged(Fuse.Navigation.NavigationPageCountHandler value) :840
void Navigation__remove_PageCountChanged_fn(Navigation* __this, uDelegate* value)
{
    __this->remove_PageCountChanged(value);
}

// public generated void add_PageProgressChanged(Fuse.Navigation.NavigationPageProgressHandler value) :848
void Navigation__add_PageProgressChanged_fn(Navigation* __this, uDelegate* value)
{
    __this->add_PageProgressChanged(value);
}

// public generated void remove_PageProgressChanged(Fuse.Navigation.NavigationPageProgressHandler value) :848
void Navigation__remove_PageProgressChanged_fn(Navigation* __this, uDelegate* value)
{
    __this->remove_PageProgressChanged(value);
}

// internal static void RemoveHandler(Fuse.Node node, Fuse.Navigation.NavigationHandler handler) :686
void Navigation__RemoveHandler_fn(::g::Fuse::Node* node, uDelegate* handler)
{
    Navigation::RemoveHandler(node, handler);
}

// internal static void RemoveStateHandler(Fuse.Node node, Fuse.Navigation.NavigationStateHandler handler) :716
void Navigation__RemoveStateHandler_fn(::g::Fuse::Node* node, uDelegate* handler)
{
    Navigation::RemoveStateHandler(node, handler);
}

// public static void ResetNavigationNavigation(Fuse.Node n) :832
void Navigation__ResetNavigationNavigation_fn(::g::Fuse::Node* n)
{
    Navigation::ResetNavigationNavigation(n);
}

// public static void SetNavigationNavigation(Fuse.Node n, Fuse.Navigation.INavigation ctx) :817
void Navigation__SetNavigationNavigation_fn(::g::Fuse::Node* n, uObject* ctx)
{
    Navigation::SetNavigationNavigation(n, ctx);
}

// private static void SetProgress(Fuse.Node n, double progress) :737
void Navigation__SetProgress_fn(::g::Fuse::Node* n, double* progress)
{
    Navigation::SetProgress(n, *progress);
}

// public virtual void Toggle(Fuse.Node page) :770
void Navigation__Toggle_fn(Navigation* __this, ::g::Fuse::Node* page)
{
}

// public static Fuse.Navigation.INavigation TryFind(Fuse.Node node) :786
void Navigation__TryFind_fn(::g::Fuse::Node* node, uObject** __retval)
{
    *__retval = Navigation::TryFind(node);
}

// public static Fuse.Node TryFindPage(Fuse.Node node) :799
void Navigation__TryFindPage_fn(::g::Fuse::Node* node, ::g::Fuse::Node** __retval)
{
    *__retval = Navigation::TryFindPage(node);
}

uSStrong< ::g::Fuse::PropertyHandle*> Navigation::_contextHandle_;
uSStrong< ::g::Fuse::PropertyHandle*> Navigation::_navigationHandler_;
uSStrong< ::g::Fuse::PropertyHandle*> Navigation::_navigationProgress_;
uSStrong< ::g::Fuse::PropertyHandle*> Navigation::_navigationStateHandler_;

// internal Navigation() [instance] :766
void Navigation::ctor_1()
{
    ctor_();
}

// public Fuse.Node get_ActivePage() [instance] :955
::g::Fuse::Node* Navigation::ActivePage()
{
    return Active();
}

// public void ClearHistory() [instance] :879
void Navigation::ClearHistory()
{
}

// public Fuse.Node GetPage(int index) [instance] :940
::g::Fuse::Node* Navigation::GetPage(int index)
{
    ::g::Fuse::Node* ret3;
    int c = 0;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(::g::Fuse::Navigation::INavigationPanel::Children(uInterface(uPtr(Owner()), ::TYPES[16/*Fuse.Navigation.INavigationPanel*/]))), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
    {
        ::g::Fuse::Node* x = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(::g::Fuse::Navigation::INavigationPanel::Children(uInterface(uPtr(Owner()), ::TYPES[16/*Fuse.Navigation.INavigationPanel*/]))), ::TYPES[17/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret3), ret3);

        if (IsPage(x))
        {
            if (c == index)
                return x;

            c++;
        }
    }

    return NULL;
}

// protected int GetPageIndex(Fuse.Node child) [instance] :971
int Navigation::GetPageIndex(::g::Fuse::Node* child)
{
    ::g::Fuse::Node* ret4;
    int c = 0;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(::g::Fuse::Navigation::INavigationPanel::Children(uInterface(uPtr(Owner()), ::TYPES[16/*Fuse.Navigation.INavigationPanel*/]))), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/])); ++i)
    {
        ::g::Fuse::Node* x = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(::g::Fuse::Navigation::INavigationPanel::Children(uInterface(uPtr(Owner()), ::TYPES[16/*Fuse.Navigation.INavigationPanel*/]))), ::TYPES[17/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret4), ret4);

        if (x == child)
            return c;

        if (IsPage(x))
            c++;
    }

    return -1;
}

// protected bool get_HasPages() [instance] :959
bool Navigation::HasPages()
{
    ::g::Fuse::Node* ret5;

    if (Owner() == NULL)
        return false;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(::g::Fuse::Navigation::INavigationPanel::Children(uInterface(uPtr(Owner()), ::TYPES[16/*Fuse.Navigation.INavigationPanel*/]))), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/])); ++i)
        if (IsPage((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(::g::Fuse::Navigation::INavigationPanel::Children(uInterface(uPtr(Owner()), ::TYPES[16/*Fuse.Navigation.INavigationPanel*/]))), ::TYPES[17/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret5), ret5)))
            return true;

    return false;
}

// public generated void add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) [instance] :867
void Navigation::add_HistoryChanged(uDelegate* value)
{
    HistoryChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(HistoryChanged1, value), ::TYPES[42/*Fuse.Navigation.HistoryChangedHandler*/]);
}

// public generated void remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) [instance] :867
void Navigation::remove_HistoryChanged(uDelegate* value)
{
    HistoryChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(HistoryChanged1, value), ::TYPES[42/*Fuse.Navigation.HistoryChangedHandler*/]);
}

// protected bool IsPage(Fuse.Node n) [instance] :984
bool Navigation::IsPage(::g::Fuse::Node* n)
{
    return uPtr(n)->LayoutRole() == 0;
}

// public generated void add_Navigated(Fuse.Navigation.NavigatedHandler value) [instance] :856
void Navigation::add_Navigated(uDelegate* value)
{
    Navigated1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Navigated1, value), ::TYPES[43/*Fuse.Navigation.NavigatedHandler*/]);
}

// public generated void remove_Navigated(Fuse.Navigation.NavigatedHandler value) [instance] :856
void Navigation::remove_Navigated(uDelegate* value)
{
    Navigated1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Navigated1, value), ::TYPES[43/*Fuse.Navigation.NavigatedHandler*/]);
}

// protected void OnHistoryChanged() [instance] :869
void Navigation::OnHistoryChanged()
{
    if (::g::Uno::Delegate::op_Inequality(HistoryChanged1, NULL))
        uPtr(HistoryChanged1)->InvokeVoid(this);
}

// private void OnNavChildAdded(object s, Fuse.Node child) [instance] :909
void Navigation::OnNavChildAdded(uObject* s, ::g::Fuse::Node* child)
{
    OnPageCountChanged();
    OnChildAdded(s, child);
}

// private void OnNavChildRemoved(object s, Fuse.Node child) [instance] :915
void Navigation::OnNavChildRemoved(uObject* s, ::g::Fuse::Node* child)
{
    OnPageCountChanged();
    OnChildRemoved(s, child);
}

// protected void OnNavigated(Fuse.Node newElement) [instance] :858
void Navigation::OnNavigated(::g::Fuse::Node* newElement)
{
    uDelegate* handler = Navigated1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, this, (::g::Fuse::Navigation::NavigatedArgs*)::g::Fuse::Navigation::NavigatedArgs::New2(newElement));
}

// protected void OnPageCountChanged() [instance] :842
void Navigation::OnPageCountChanged()
{
    if (::g::Uno::Delegate::op_Inequality(PageCountChanged1, NULL))
        uPtr(PageCountChanged1)->InvokeVoid(this);
}

// protected void OnPageProgressChanged(double current, double prev) [instance] :850
void Navigation::OnPageProgressChanged(double current, double prev)
{
    if (::g::Uno::Delegate::op_Inequality(PageProgressChanged1, NULL))
        uPtr(PageProgressChanged1)->Invoke(3, this, uCRef(current), uCRef(prev));
}

// internal Fuse.Navigation.INavigationPanel get_Owner() [instance] :881
uObject* Navigation::Owner()
{
    return _panel;
}

// public int get_PageCount() [instance] :926
int Navigation::PageCount()
{
    ::g::Fuse::Node* ret6;

    if (Owner() == NULL)
        return 0;

    int c = 0;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(::g::Fuse::Navigation::INavigationPanel::Children(uInterface(uPtr(Owner()), ::TYPES[16/*Fuse.Navigation.INavigationPanel*/]))), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
    {
        ::g::Fuse::Node* x = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(::g::Fuse::Navigation::INavigationPanel::Children(uInterface(uPtr(Owner()), ::TYPES[16/*Fuse.Navigation.INavigationPanel*/]))), ::TYPES[17/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret6), ret6);

        if (IsPage(x))
            c++;
    }

    return c;
}

// public generated void add_PageCountChanged(Fuse.Navigation.NavigationPageCountHandler value) [instance] :840
void Navigation::add_PageCountChanged(uDelegate* value)
{
    PageCountChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PageCountChanged1, value), ::TYPES[44/*Fuse.Navigation.NavigationPageCountHandler*/]);
}

// public generated void remove_PageCountChanged(Fuse.Navigation.NavigationPageCountHandler value) [instance] :840
void Navigation::remove_PageCountChanged(uDelegate* value)
{
    PageCountChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PageCountChanged1, value), ::TYPES[44/*Fuse.Navigation.NavigationPageCountHandler*/]);
}

// public generated void add_PageProgressChanged(Fuse.Navigation.NavigationPageProgressHandler value) [instance] :848
void Navigation::add_PageProgressChanged(uDelegate* value)
{
    PageProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PageProgressChanged1, value), ::TYPES[45/*Fuse.Navigation.NavigationPageProgressHandler*/]);
}

// public generated void remove_PageProgressChanged(Fuse.Navigation.NavigationPageProgressHandler value) [instance] :848
void Navigation::remove_PageProgressChanged(uDelegate* value)
{
    PageProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PageProgressChanged1, value), ::TYPES[45/*Fuse.Navigation.NavigationPageProgressHandler*/]);
}

// internal static void AddHandler(Fuse.Node node, Fuse.Navigation.NavigationHandler handler) [static] :681
void Navigation::AddHandler(::g::Fuse::Node* node, uDelegate* handler)
{
    Navigation_typeof()->Init();
    uPtr(uPtr(node)->Properties())->AddToList(Navigation::_navigationHandler(), handler);
}

// internal static void AddStateHandler(Fuse.Node node, Fuse.Navigation.NavigationStateHandler handler) [static] :711
void Navigation::AddStateHandler(::g::Fuse::Node* node, uDelegate* handler)
{
    Navigation_typeof()->Init();
    uPtr(uPtr(node)->Properties())->AddToList(Navigation::_navigationStateHandler(), handler);
}

// internal static Fuse.Navigation.INavigation GetLocalNavigation(Fuse.Node node) [static] :772
uObject* Navigation::GetLocalNavigation(::g::Fuse::Node* node)
{
    Navigation_typeof()->Init();
    ::g::Fuse::Behavior* ret1;
    ::g::Fuse::Behavior* ret2;
    uObject* n = Navigation::GetNavigationNavigation(node);

    if (n != NULL)
        return n;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(node)->Behaviors()), ::TYPES[33/*Uno.Collections.ICollection<Fuse.Behavior>*/])); i++)
        if (uIs((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(node)->Behaviors()), ::TYPES[35/*Uno.Collections.IList<Fuse.Behavior>*/]), uCRef<int>(i), &ret1), ret1), ::TYPES[34/*Fuse.Navigation.INavigation*/]))
            return (uObject*)(::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(node)->Behaviors()), ::TYPES[35/*Uno.Collections.IList<Fuse.Behavior>*/]), uCRef<int>(i), &ret2), ret2);

    return NULL;
}

// public static Fuse.Navigation.INavigation GetNavigationNavigation(Fuse.Node n) [static] :823
uObject* Navigation::GetNavigationNavigation(::g::Fuse::Node* n)
{
    Navigation_typeof()->Init();
    uObject* v;

    if (uPtr(uPtr(n)->Properties())->TryGet(Navigation::_contextHandle(), &v))
        return (uObject*)v;

    return NULL;
}

// internal static double GetProgress(Fuse.Node n) [static] :742
double Navigation::GetProgress(::g::Fuse::Node* n)
{
    Navigation_typeof()->Init();
    uObject* res;

    if (uPtr(uPtr(n)->Properties())->TryGet(Navigation::_navigationProgress(), &res))
        return uUnbox<double>(::TYPES[1/*double*/], res);
    else
        return 0.0;
}

// private static void Invoke(object handler, object[] state) [static] :700
void Navigation::Invoke(uObject* handler, uArray* state)
{
    Navigation_typeof()->Init();
    uDelegate* h = uCast<uDelegate*>(handler, ::TYPES[36/*Fuse.Navigation.NavigationHandler*/]);
    ::g::Fuse::Node* n = uCast< ::g::Fuse::Node*>(uPtr(state)->Strong<uObject*>(0), ::TYPES[12/*Fuse.Node*/]);
    ::g::Fuse::Navigation::NavigationArgs* s = uCast< ::g::Fuse::Navigation::NavigationArgs*>(state->Strong<uObject*>(1), ::TYPES[2/*Fuse.Navigation.NavigationArgs*/]);
    uPtr(h)->Invoke(2, n, s);
}

// private static void InvokeState(object handler, object[] state) [static] :726
void Navigation::InvokeState(uObject* handler, uArray* state)
{
    Navigation_typeof()->Init();
    uDelegate* h = uCast<uDelegate*>(handler, ::TYPES[37/*Fuse.Navigation.NavigationStateHandler*/]);
    ::g::Fuse::Node* n = uCast< ::g::Fuse::Node*>(uPtr(state)->Strong<uObject*>(0), ::TYPES[12/*Fuse.Node*/]);
    ::g::Fuse::Navigation::NavigationStateArgs* s = uCast< ::g::Fuse::Navigation::NavigationStateArgs*>(state->Strong<uObject*>(1), ::TYPES[38/*Fuse.Navigation.NavigationStateArgs*/]);
    uPtr(h)->Invoke(2, n, s);
}

// internal static void NotifyNavigation(Fuse.Node n, Fuse.Navigation.NavigationArgs state) [static] :691
void Navigation::NotifyNavigation(::g::Fuse::Node* n, ::g::Fuse::Navigation::NavigationArgs* state)
{
    Navigation_typeof()->Init();

    if (n == NULL)
        return;

    Navigation::SetProgress(n, uPtr(state)->Progress());
    uPtr(uPtr(n)->Properties())->ForeachInList(Navigation::_navigationHandler(), uDelegate::New(::TYPES[39/*Uno.Action<object, object[]>*/], (void*)Navigation__Invoke_fn), uArray::Init<uObject*>(::TYPES[40/*object[]*/], 2, n, state));
}

// internal static void NotifyNavigationState(Fuse.Node n, Fuse.Navigation.NavigationStateArgs state) [static] :721
void Navigation::NotifyNavigationState(::g::Fuse::Node* n, ::g::Fuse::Navigation::NavigationStateArgs* state)
{
    Navigation_typeof()->Init();
    uPtr(uPtr(n)->Properties())->ForeachInList(Navigation::_navigationStateHandler(), uDelegate::New(::TYPES[39/*Uno.Action<object, object[]>*/], (void*)Navigation__InvokeState_fn), uArray::Init<uObject*>(::TYPES[40/*object[]*/], 2, n, state));
}

// internal static void RemoveHandler(Fuse.Node node, Fuse.Navigation.NavigationHandler handler) [static] :686
void Navigation::RemoveHandler(::g::Fuse::Node* node, uDelegate* handler)
{
    Navigation_typeof()->Init();
    uPtr(uPtr(node)->Properties())->RemoveFromList(Navigation::_navigationHandler(), handler);
}

// internal static void RemoveStateHandler(Fuse.Node node, Fuse.Navigation.NavigationStateHandler handler) [static] :716
void Navigation::RemoveStateHandler(::g::Fuse::Node* node, uDelegate* handler)
{
    Navigation_typeof()->Init();
    uPtr(uPtr(node)->Properties())->RemoveFromList(Navigation::_navigationStateHandler(), handler);
}

// public static void ResetNavigationNavigation(Fuse.Node n) [static] :832
void Navigation::ResetNavigationNavigation(::g::Fuse::Node* n)
{
    Navigation_typeof()->Init();
    uPtr(uPtr(n)->Properties())->Clear(Navigation::_contextHandle());
}

// public static void SetNavigationNavigation(Fuse.Node n, Fuse.Navigation.INavigation ctx) [static] :817
void Navigation::SetNavigationNavigation(::g::Fuse::Node* n, uObject* ctx)
{
    Navigation_typeof()->Init();
    uPtr(uPtr(n)->Properties())->Set(Navigation::_contextHandle(), ctx);
}

// private static void SetProgress(Fuse.Node n, double progress) [static] :737
void Navigation::SetProgress(::g::Fuse::Node* n, double progress)
{
    Navigation_typeof()->Init();
    uPtr(uPtr(n)->Properties())->Set(Navigation::_navigationProgress(), uBox(::TYPES[1/*double*/], progress));
}

// public static Fuse.Navigation.INavigation TryFind(Fuse.Node node) [static] :786
uObject* Navigation::TryFind(::g::Fuse::Node* node)
{
    Navigation_typeof()->Init();

    while (node != NULL)
    {
        uObject* n = Navigation::GetLocalNavigation(node);

        if (n != NULL)
            return n;

        node = uPtr(node)->Parent();
    }

    return NULL;
}

// public static Fuse.Node TryFindPage(Fuse.Node node) [static] :799
::g::Fuse::Node* Navigation::TryFindPage(::g::Fuse::Node* node)
{
    Navigation_typeof()->Init();
    ::g::Fuse::Node* prev = node;

    while (node != NULL)
    {
        uObject* n = Navigation::GetLocalNavigation(node);

        if (n != NULL)
            return prev;

        prev = node;
        node = uPtr(node)->Parent();
    }

    return NULL;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(485)
// -------------------------------------------------------------

// public abstract class NavigationAnimation :485
// {
NavigationAnimation_type* NavigationAnimation_typeof()
{
    static uSStrong<NavigationAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.ObjectSize = sizeof(NavigationAnimation);
    options.TypeSize = sizeof(NavigationAnimation_type);
    type = (NavigationAnimation_type*)uClassType::New("Fuse.Navigation.NavigationAnimation", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))NavigationAnimation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))NavigationAnimation__OnUnrooted_fn;
    ::TYPES[47] = ::g::Fuse::Triggers::Trigger_typeof();
    ::TYPES[3] = ::g::Uno::Int_typeof();
    ::TYPES[2] = ::g::Fuse::Navigation::NavigationArgs_typeof();
    ::TYPES[36] = ::g::Fuse::Navigation::NavigationHandler_typeof();
    ::TYPES[29] = ::g::Fuse::Behavior_typeof();
    type->SetFields(14,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation, _scale), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_Scale", NULL, (void*)NavigationAnimation__get_Scale_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Scale", NULL, (void*)NavigationAnimation__set_Scale_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
    return type;
}

// internal NavigationAnimation() :487
void NavigationAnimation__ctor_2_fn(NavigationAnimation* __this)
{
    __this->ctor_2();
}

// internal void GoProgress(double p, Fuse.Animations.AnimationVariant variant, Fuse.Navigation.NavigationArgs state) :523
void NavigationAnimation__GoProgress_fn(NavigationAnimation* __this, double* p, int* variant, ::g::Fuse::Navigation::NavigationArgs* state)
{
    __this->GoProgress(*p, *variant, state);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :500
void NavigationAnimation__OnRooted_fn(NavigationAnimation* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    ::g::Fuse::Navigation::Navigation::AddHandler(__this->PageContext(), uDelegate::New(::TYPES[36/*Fuse.Navigation.NavigationHandler*/], __this, offsetof(NavigationAnimation_type, fp_OnNavigationStateChanged)));
    __this->ForceUpdate();
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :507
void NavigationAnimation__OnUnrooted_fn(NavigationAnimation* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Navigation::Navigation::RemoveHandler(__this->PageContext(), uDelegate::New(::TYPES[36/*Fuse.Navigation.NavigationHandler*/], __this, offsetof(NavigationAnimation_type, fp_OnNavigationStateChanged)));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// protected Fuse.Node get_PageContext() :491
void NavigationAnimation__get_PageContext_fn(NavigationAnimation* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->PageContext();
}

// public float get_Scale() :519
void NavigationAnimation__get_Scale_fn(NavigationAnimation* __this, float* __retval)
{
    *__retval = __this->Scale();
}

// public void set_Scale(float value) :520
void NavigationAnimation__set_Scale_fn(NavigationAnimation* __this, float* value)
{
    __this->Scale(*value);
}

// internal NavigationAnimation() [instance] :487
void NavigationAnimation::ctor_2()
{
    _scale = 1.0f;
    ctor_1();
}

// internal void GoProgress(double p, Fuse.Animations.AnimationVariant variant, Fuse.Navigation.NavigationArgs state) [instance] :523
void NavigationAnimation::GoProgress(double p, int variant, ::g::Fuse::Navigation::NavigationArgs* state)
{
    if (p == Progress())
        return;

    if (uPtr(state)->Mode() == 0)
        PlayTo(p, variant);
    else if (uPtr(state)->Mode() == 2)
        Seek1(p, variant);
    else
        BypassSeek(p, variant);
}

// protected Fuse.Node get_PageContext() [instance] :491
::g::Fuse::Node* NavigationAnimation::PageContext()
{
    ::g::Fuse::Node* n = ::g::Fuse::Navigation::Navigation::TryFindPage(ParentNode());

    if (n == NULL)
        return ParentNode();

    return n;
}

// public float get_Scale() [instance] :519
float NavigationAnimation::Scale()
{
    return _scale;
}

// public void set_Scale(float value) [instance] :520
void NavigationAnimation::Scale(float value)
{
    _scale = value;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(647)
// -------------------------------------------------------------

// internal sealed class NavigationArgs :647
// {
uType* NavigationArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(NavigationArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.NavigationArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->SetFields(0,
        ::g::Fuse::Navigation::NavigationMode_typeof(), offsetof(::g::Fuse::Navigation::NavigationArgs, _Mode), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Navigation::NavigationArgs, _PreviousProgress), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Navigation::NavigationArgs, _Progress), 0);
    return type;
}

// public NavigationArgs(double progress, double prevProgress, [Fuse.Navigation.NavigationMode mode]) :653
void NavigationArgs__ctor_1_fn(NavigationArgs* __this, double* progress, double* prevProgress, int* mode)
{
    __this->ctor_1(*progress, *prevProgress, *mode);
}

// public generated Fuse.Navigation.NavigationMode get_Mode() :649
void NavigationArgs__get_Mode_fn(NavigationArgs* __this, int* __retval)
{
    *__retval = __this->Mode();
}

// private generated void set_Mode(Fuse.Navigation.NavigationMode value) :649
void NavigationArgs__set_Mode_fn(NavigationArgs* __this, int* value)
{
    __this->Mode(*value);
}

// public NavigationArgs New(double progress, double prevProgress, [Fuse.Navigation.NavigationMode mode]) :653
void NavigationArgs__New2_fn(double* progress, double* prevProgress, int* mode, NavigationArgs** __retval)
{
    *__retval = NavigationArgs::New2(*progress, *prevProgress, *mode);
}

// public generated double get_PreviousProgress() :651
void NavigationArgs__get_PreviousProgress_fn(NavigationArgs* __this, double* __retval)
{
    *__retval = __this->PreviousProgress();
}

// private generated void set_PreviousProgress(double value) :651
void NavigationArgs__set_PreviousProgress_fn(NavigationArgs* __this, double* value)
{
    __this->PreviousProgress(*value);
}

// public generated double get_Progress() :650
void NavigationArgs__get_Progress_fn(NavigationArgs* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// private generated void set_Progress(double value) :650
void NavigationArgs__set_Progress_fn(NavigationArgs* __this, double* value)
{
    __this->Progress(*value);
}

// public NavigationArgs(double progress, double prevProgress, [Fuse.Navigation.NavigationMode mode]) [instance] :653
void NavigationArgs::ctor_1(double progress, double prevProgress, int mode)
{
    ctor_();
    Progress(progress);
    PreviousProgress(prevProgress);
    Mode(mode);
}

// public generated Fuse.Navigation.NavigationMode get_Mode() [instance] :649
int NavigationArgs::Mode()
{
    return _Mode;
}

// private generated void set_Mode(Fuse.Navigation.NavigationMode value) [instance] :649
void NavigationArgs::Mode(int value)
{
    _Mode = value;
}

// public generated double get_PreviousProgress() [instance] :651
double NavigationArgs::PreviousProgress()
{
    return _PreviousProgress;
}

// private generated void set_PreviousProgress(double value) [instance] :651
void NavigationArgs::PreviousProgress(double value)
{
    _PreviousProgress = value;
}

// public generated double get_Progress() [instance] :650
double NavigationArgs::Progress()
{
    return _Progress;
}

// private generated void set_Progress(double value) [instance] :650
void NavigationArgs::Progress(double value)
{
    _Progress = value;
}

// public NavigationArgs New(double progress, double prevProgress, [Fuse.Navigation.NavigationMode mode]) [static] :653
NavigationArgs* NavigationArgs::New2(double progress, double prevProgress, int mode)
{
    NavigationArgs* obj1 = (NavigationArgs*)uNew(NavigationArgs_typeof());
    obj1->ctor_1(progress, prevProgress, mode);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(372)
// -------------------------------------------------------------

// public enum NavigationDirection :372
uEnumType* NavigationDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.NavigationDirection", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Forward", 0LL,
        "Backward", 1LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(143)
// -------------------------------------------------------------

// public enum NavigationEdge :143
uEnumType* NavigationEdge_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.NavigationEdge", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Left", 0LL,
        "Right", 1LL,
        "Top", 2LL,
        "Bottom", 3LL,
        "None", 4LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(398)
// -------------------------------------------------------------

// public enum NavigationGotoMode :398
uEnumType* NavigationGotoMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.NavigationGotoMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Transition", 0LL,
        "Bypass", 2LL,
        "ClearForwardHistory", 4LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(662)
// -------------------------------------------------------------

// internal delegate void NavigationHandler(object sender, Fuse.Navigation.NavigationArgs state) :662
uDelegateType* NavigationHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.NavigationHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Navigation::NavigationArgs_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(640)
// -------------------------------------------------------------

// internal enum NavigationMode :640
uEnumType* NavigationMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.NavigationMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Switch", 0LL,
        "Bypass", 1LL,
        "Seek", 2LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(406)
// -------------------------------------------------------------

// public delegate void NavigationPageCountHandler(object sender) :406
uDelegateType* NavigationPageCountHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.NavigationPageCountHandler", 1, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(407)
// -------------------------------------------------------------

// public delegate void NavigationPageProgressHandler(object sender, double Current, double Previous) :407
uDelegateType* NavigationPageProgressHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.NavigationPageProgressHandler", 3, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Uno::Double_typeof(),
        ::g::Uno::Double_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(1163)
// --------------------------------------------------------------

// public static class NavigationPageProperty :1163
// {
// static NavigationPageProperty() :1163
static void NavigationPageProperty__cctor__fn(uType* __type)
{
    NavigationPageProperty::_pageProperty_ = ::g::Fuse::Properties::CreateHandle();
    NavigationPageProperty::RootedBindings_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[48/*Uno.Collections.List<Fuse.Navigation.IPageResourceBinding>*/]));
}

uClassType* NavigationPageProperty_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Navigation.NavigationPageProperty", options);
    type->fp_cctor_ = NavigationPageProperty__cctor__fn;
    ::TYPES[48] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Navigation::IPageResourceBinding_typeof());
    ::TYPES[12] = ::g::Fuse::Node_typeof();
    ::TYPES[14] = uObject_typeof();
    ::TYPES[49] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Navigation::IPageResourceBinding_typeof());
    type->SetFields(0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Navigation::NavigationPageProperty::_pageProperty_, uFieldFlagsStatic,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Navigation::IPageResourceBinding_typeof()), (uintptr_t)&::g::Fuse::Navigation::NavigationPageProperty::RootedBindings_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction("GetNavigationPage", NULL, (void*)NavigationPageProperty__GetNavigationPage_fn, 0, true, ::g::Fuse::Node_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("ResetNavigationPage", NULL, (void*)NavigationPageProperty__ResetNavigationPage_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("SetNavigationPage", NULL, (void*)NavigationPageProperty__SetNavigationPage_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Fuse::Node_typeof()));
    return type;
}

// public static Fuse.Node GetNavigationPage(Fuse.Node n) :1179
void NavigationPageProperty__GetNavigationPage_fn(::g::Fuse::Node* n, ::g::Fuse::Node** __retval)
{
    *__retval = NavigationPageProperty::GetNavigationPage(n);
}

// public static void ResetNavigationPage(Fuse.Node n) :1188
void NavigationPageProperty__ResetNavigationPage_fn(::g::Fuse::Node* n)
{
    NavigationPageProperty::ResetNavigationPage(n);
}

// public static void SetNavigationPage(Fuse.Node n, Fuse.Node page) :1170
void NavigationPageProperty__SetNavigationPage_fn(::g::Fuse::Node* n, ::g::Fuse::Node* page)
{
    NavigationPageProperty::SetNavigationPage(n, page);
}

uSStrong< ::g::Fuse::PropertyHandle*> NavigationPageProperty::_pageProperty_;
uSStrong< ::g::Uno::Collections::List*> NavigationPageProperty::RootedBindings_;

// public static Fuse.Node GetNavigationPage(Fuse.Node n) [static] :1179
::g::Fuse::Node* NavigationPageProperty::GetNavigationPage(::g::Fuse::Node* n)
{
    NavigationPageProperty_typeof()->Init();
    uObject* v;

    if (uPtr(uPtr(n)->Properties())->TryGet(NavigationPageProperty::_pageProperty(), &v))
        return uCast< ::g::Fuse::Node*>(v, ::TYPES[12/*Fuse.Node*/]);

    return NULL;
}

// public static void ResetNavigationPage(Fuse.Node n) [static] :1188
void NavigationPageProperty::ResetNavigationPage(::g::Fuse::Node* n)
{
    NavigationPageProperty_typeof()->Init();
    uPtr(uPtr(n)->Properties())->Clear(NavigationPageProperty::_pageProperty());
}

// public static void SetNavigationPage(Fuse.Node n, Fuse.Node page) [static] :1170
void NavigationPageProperty::SetNavigationPage(::g::Fuse::Node* n, ::g::Fuse::Node* page)
{
    NavigationPageProperty_typeof()->Init();
    ::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > ret2;
    uPtr(uPtr(n)->Properties())->Set(NavigationPageProperty::_pageProperty(), page);

    for (::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(NavigationPageProperty::RootedBindings()), &ret2), ret2); enum1.MoveNext(::TYPES[49/*Uno.Collections.List<Fuse.Navigation.IPageResourceBinding>.Enumerator*/]); )
    {
        uObject* binding = enum1.Current(::TYPES[49/*Uno.Collections.List<Fuse.Navigation.IPageResourceBinding>.Enumerator*/]);
        ::g::Fuse::Navigation::IPageResourceBinding::UpdateSource(uInterface(uPtr(binding), ::TYPES[53/*Fuse.Navigation.IPageResourceBinding*/]));
    }
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(664)
// -------------------------------------------------------------

// internal enum NavigationState :664
uEnumType* NavigationState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.NavigationState", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", 0LL,
        "Seek", 1LL,
        "Transition", 2LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(670)
// -------------------------------------------------------------

// internal sealed class NavigationStateArgs :670
// {
uType* NavigationStateArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(NavigationStateArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.NavigationStateArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->fp_ctor_ = (void*)NavigationStateArgs__New2_fn;
    type->SetFields(0,
        ::g::Fuse::Navigation::NavigationState_typeof(), offsetof(::g::Fuse::Navigation::NavigationStateArgs, _State), 0);
    return type;
}

// public generated NavigationStateArgs() :670
void NavigationStateArgs__ctor_1_fn(NavigationStateArgs* __this)
{
    __this->ctor_1();
}

// public generated NavigationStateArgs New() :670
void NavigationStateArgs__New2_fn(NavigationStateArgs** __retval)
{
    *__retval = NavigationStateArgs::New2();
}

// public generated Fuse.Navigation.NavigationState get_State() :672
void NavigationStateArgs__get_State_fn(NavigationStateArgs* __this, int* __retval)
{
    *__retval = __this->State();
}

// public generated void set_State(Fuse.Navigation.NavigationState value) :672
void NavigationStateArgs__set_State_fn(NavigationStateArgs* __this, int* value)
{
    __this->State(*value);
}

// public generated NavigationStateArgs() [instance] :670
void NavigationStateArgs::ctor_1()
{
    ctor_();
}

// public generated Fuse.Navigation.NavigationState get_State() [instance] :672
int NavigationStateArgs::State()
{
    return _State;
}

// public generated void set_State(Fuse.Navigation.NavigationState value) [instance] :672
void NavigationStateArgs::State(int value)
{
    _State = value;
}

// public generated NavigationStateArgs New() [static] :670
NavigationStateArgs* NavigationStateArgs::New2()
{
    NavigationStateArgs* obj1 = (NavigationStateArgs*)uNew(NavigationStateArgs_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(675)
// -------------------------------------------------------------

// internal delegate void NavigationStateHandler(object sender, Fuse.Navigation.NavigationStateArgs args) :675
uDelegateType* NavigationStateHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.NavigationStateHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Navigation::NavigationStateArgs_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(1209)
// --------------------------------------------------------------

// internal enum StructuredNavigation.NavigationStructure :1209
uEnumType* StructuredNavigation__NavigationStructure_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.StructuredNavigation.NavigationStructure", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Linear", 0LL,
        "Hierarchical", 1LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(2013)
// --------------------------------------------------------------

// public abstract class NavigationTriggerAction :2013
// {
NavigationTriggerAction_type* NavigationTriggerAction_typeof()
{
    static uSStrong<NavigationTriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(NavigationTriggerAction);
    options.TypeSize = sizeof(NavigationTriggerAction_type);
    type = (NavigationTriggerAction_type*)uClassType::New("Fuse.Navigation.NavigationTriggerAction", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))NavigationTriggerAction__Perform_fn;
    type->SetFields(7,
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(::g::Fuse::Navigation::NavigationTriggerAction, _NavigationContext), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_NavigationContext", NULL, (void*)NavigationTriggerAction__get_NavigationContext_fn, 0, false, ::g::Fuse::Navigation::INavigation_typeof(), 0),
        new uFunction("set_NavigationContext", NULL, (void*)NavigationTriggerAction__set_NavigationContext_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::INavigation_typeof()));
    return type;
}

// protected generated NavigationTriggerAction() :2013
void NavigationTriggerAction__ctor_1_fn(NavigationTriggerAction* __this)
{
    __this->ctor_1();
}

// public generated Fuse.Navigation.INavigation get_NavigationContext() :2015
void NavigationTriggerAction__get_NavigationContext_fn(NavigationTriggerAction* __this, uObject** __retval)
{
    *__retval = __this->NavigationContext();
}

// public generated void set_NavigationContext(Fuse.Navigation.INavigation value) :2015
void NavigationTriggerAction__set_NavigationContext_fn(NavigationTriggerAction* __this, uObject* value)
{
    __this->NavigationContext(value);
}

// protected override sealed void Perform(Fuse.Node n) :2017
void NavigationTriggerAction__Perform_fn(NavigationTriggerAction* __this, ::g::Fuse::Node* n)
{
    uObject* ind1 = __this->NavigationContext();
    uObject* ctx = (ind1 != NULL) ? ind1 : (uObject*)::g::Fuse::Navigation::Navigation::TryFind(n);

    if (ctx == NULL)
        return;

    __this->Perform1(ctx, n);
}

// protected generated NavigationTriggerAction() [instance] :2013
void NavigationTriggerAction::ctor_1()
{
    ctor_();
}

// public generated Fuse.Navigation.INavigation get_NavigationContext() [instance] :2015
uObject* NavigationTriggerAction::NavigationContext()
{
    return _NavigationContext;
}

// public generated void set_NavigationContext(Fuse.Navigation.INavigation value) [instance] :2015
void NavigationTriggerAction::NavigationContext(uObject* value)
{
    _NavigationContext = value;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(1571)
// --------------------------------------------------------------

// internal sealed class NavigationTween :1571
// {
uType* NavigationTween_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(NavigationTween);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.NavigationTween", options);
    type->fp_ctor_ = (void*)NavigationTween__New1_fn;
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Navigation::NavigationTween, _duration), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Navigation::NavigationTween, _durationBack), 0,
        ::g::Fuse::Animations::Easing_typeof(), offsetof(::g::Fuse::Navigation::NavigationTween, _easing), 0,
        ::g::Fuse::Animations::Easing_typeof(), offsetof(::g::Fuse::Navigation::NavigationTween, _easingBack), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::NavigationTween, _hasDurationBack), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::NavigationTween, _hasEasingBack), 0);
    return type;
}

// public generated NavigationTween() :1571
void NavigationTween__ctor__fn(NavigationTween* __this)
{
    __this->ctor_();
}

// public double get_Duration() :1587
void NavigationTween__get_Duration_fn(NavigationTween* __this, double* __retval)
{
    *__retval = __this->Duration();
}

// public void set_Duration(double value) :1588
void NavigationTween__set_Duration_fn(NavigationTween* __this, double* value)
{
    __this->Duration(*value);
}

// public double get_DurationBack() :1614
void NavigationTween__get_DurationBack_fn(NavigationTween* __this, double* __retval)
{
    *__retval = __this->DurationBack();
}

// public void set_DurationBack(double value) :1619
void NavigationTween__set_DurationBack_fn(NavigationTween* __this, double* value)
{
    __this->DurationBack(*value);
}

// public Fuse.Animations.Easing get_Easing() :1577
void NavigationTween__get_Easing_fn(NavigationTween* __this, int* __retval)
{
    *__retval = __this->Easing();
}

// public void set_Easing(Fuse.Animations.Easing value) :1578
void NavigationTween__set_Easing_fn(NavigationTween* __this, int* value)
{
    __this->Easing(*value);
}

// public Fuse.Animations.Easing get_EasingBack() :1598
void NavigationTween__get_EasingBack_fn(NavigationTween* __this, int* __retval)
{
    *__retval = __this->EasingBack();
}

// public void set_EasingBack(Fuse.Animations.Easing value) :1603
void NavigationTween__set_EasingBack_fn(NavigationTween* __this, int* value)
{
    __this->EasingBack(*value);
}

// public generated NavigationTween New() :1571
void NavigationTween__New1_fn(NavigationTween** __retval)
{
    *__retval = NavigationTween::New1();
}

// public generated NavigationTween() [instance] :1571
void NavigationTween::ctor_()
{
    _easing = 12;
    _duration = 0.60000002384185791;
}

// public double get_Duration() [instance] :1587
double NavigationTween::Duration()
{
    return _duration;
}

// public void set_Duration(double value) [instance] :1588
void NavigationTween::Duration(double value)
{
    _duration = value;
}

// public double get_DurationBack() [instance] :1614
double NavigationTween::DurationBack()
{
    if (_hasDurationBack)
        return _durationBack;

    return Duration();
}

// public void set_DurationBack(double value) [instance] :1619
void NavigationTween::DurationBack(double value)
{
    _durationBack = value;
    _hasDurationBack = true;
}

// public Fuse.Animations.Easing get_Easing() [instance] :1577
int NavigationTween::Easing()
{
    return _easing;
}

// public void set_Easing(Fuse.Animations.Easing value) [instance] :1578
void NavigationTween::Easing(int value)
{
    _easing = value;
}

// public Fuse.Animations.Easing get_EasingBack() [instance] :1598
int NavigationTween::EasingBack()
{
    if (_hasEasingBack)
        return _easingBack;

    return Easing();
}

// public void set_EasingBack(Fuse.Animations.Easing value) [instance] :1603
void NavigationTween::EasingBack(int value)
{
    _easingBack = value;
    _hasEasingBack = true;
}

// public generated NavigationTween New() [static] :1571
NavigationTween* NavigationTween::New1()
{
    NavigationTween* obj1 = (NavigationTween*)uNew(NavigationTween_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(470)
// -------------------------------------------------------------

// internal static class NavTriggerUtil :470
// {
uClassType* NavTriggerUtil_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Navigation.NavTriggerUtil", options);
    ::TYPES[3] = ::g::Uno::Int_typeof();
    return type;
}

// public static bool CrossesZero(double a, double b) :472
void NavTriggerUtil__CrossesZero_fn(double* a, double* b, bool* __retval)
{
    *__retval = NavTriggerUtil::CrossesZero(*a, *b);
}

// public static Fuse.Animations.AnimationVariant Opposite(Fuse.Animations.AnimationVariant v) :478
void NavTriggerUtil__Opposite_fn(int* v, int* __retval)
{
    *__retval = NavTriggerUtil::Opposite(*v);
}

// public static bool CrossesZero(double a, double b) [static] :472
bool NavTriggerUtil::CrossesZero(double a, double b)
{
    return ((a < 0.0) && (b > 0.0)) || ((a > 0.0) && (b < 0.0));
}

// public static Fuse.Animations.AnimationVariant Opposite(Fuse.Animations.AnimationVariant v) [static] :478
int NavTriggerUtil::Opposite(int v)
{
    return (v == 0) ? 1 : 0;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(1009)
// --------------------------------------------------------------

// public sealed class PageResourceBinding<T> :1009
// {
PageResourceBinding_type* PageResourceBinding_typeof()
{
    static uSStrong<PageResourceBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PageResourceBinding);
    options.TypeSize = sizeof(PageResourceBinding_type);
    type = (PageResourceBinding_type*)uClassType::New("Fuse.Navigation.PageResourceBinding`1", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))PageResourceBinding__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))PageResourceBinding__OnUnrooted_fn;
    type->interface0.fp_UpdateSource = (void(*)(uObject*))PageResourceBinding__Fuse_Navigation_IPageResourceBinding_UpdateSource_fn;
    ::STRINGS[5] = uString::Const("target");
    ::STRINGS[6] = uString::Const("Node");
    ::TYPES[14] = uObject_typeof();
    ::TYPES[50] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof());
    ::TYPES[51] = ::g::Fuse::Navigation::NavigatedArgs_typeof();
    ::TYPES[11] = ::g::Uno::Action_typeof();
    ::TYPES[52] = ::g::Fuse::Navigation::NavigationPageProperty_typeof();
    ::TYPES[53] = ::g::Fuse::Navigation::IPageResourceBinding_typeof();
    ::TYPES[34] = ::g::Fuse::Navigation::INavigation_typeof();
    ::TYPES[43] = ::g::Fuse::Navigation::NavigatedHandler_typeof();
    ::TYPES[12] = ::g::Fuse::Node_typeof();
    ::TYPES[29] = ::g::Fuse::Behavior_typeof();
    type->SetInterfaces(
        ::g::Fuse::Navigation::IPageResourceBinding_typeof(), offsetof(PageResourceBinding_type, interface0));
    type->SetFields(3,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::PageResourceBinding, _allowNull), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Navigation::PageResourceBinding, _currentPage), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::PageResourceBinding, _hasDefault), 0,
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(::g::Fuse::Navigation::PageResourceBinding, _nav), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Navigation::PageResourceBinding, _Key), 0,
        ::g::Uno::UX::Property_typeof()->MakeType(type->T(0)), offsetof(::g::Fuse::Navigation::PageResourceBinding, _Target), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_AllowNull", NULL, (void*)PageResourceBinding__get_AllowNull_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_AllowNull", NULL, (void*)PageResourceBinding__set_AllowNull_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Default", NULL, (void*)PageResourceBinding__get_Default_fn, 0, false, type->T(0), 0),
        new uFunction("set_Default", NULL, (void*)PageResourceBinding__set_Default_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("get_Key", NULL, (void*)PageResourceBinding__get_Key_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction(".ctor", type, (void*)PageResourceBinding__New1_fn, 0, true, type, 2, ::g::Uno::UX::Property_typeof()->MakeType(type->T(0)), ::g::Uno::String_typeof()),
        new uFunction("get_Target", NULL, (void*)PageResourceBinding__get_Target_fn, 0, false, ::g::Uno::UX::Property_typeof()->MakeType(type->T(0)), 0));
    return type;
}

// public PageResourceBinding(Uno.UX.Property<T> target, string key) :1041
void PageResourceBinding__ctor_1_fn(PageResourceBinding* __this, ::g::Uno::UX::Property* target, uString* key)
{
    __this->ctor_1(target, key);
}

// private bool Acceptor(object obj) :1157
void PageResourceBinding__Acceptor_fn(PageResourceBinding* __this, uObject* obj, bool* __retval)
{
    *__retval = __this->Acceptor(obj);
}

// public bool get_AllowNull() :1032
void PageResourceBinding__get_AllowNull_fn(PageResourceBinding* __this, bool* __retval)
{
    *__retval = __this->AllowNull();
}

// public void set_AllowNull(bool value) :1033
void PageResourceBinding__set_AllowNull_fn(PageResourceBinding* __this, bool* value)
{
    __this->AllowNull(*value);
}

// public T get_Default() :1021
void PageResourceBinding__get_Default_fn(PageResourceBinding* __this, uTRef __retval)
{
    return __retval.Store(__this->_default()), void();
}

// public void set_Default(T value) :1022
void PageResourceBinding__set_Default_fn(PageResourceBinding* __this, void* value)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    __this->_default() = value;
    __this->_hasDefault = true;
}

// private void Fuse.Navigation.IPageResourceBinding.UpdateSource() :1080
void PageResourceBinding__Fuse_Navigation_IPageResourceBinding_UpdateSource_fn(PageResourceBinding* __this)
{
    __this->UpdateSource();
}

// private void GotoPage(Fuse.Node page) :1128
void PageResourceBinding__GotoPage_fn(PageResourceBinding* __this, ::g::Fuse::Node* page)
{
    __this->GotoPage(page);
}

// public generated string get_Key() :1015
void PageResourceBinding__get_Key_fn(PageResourceBinding* __this, uString** __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(string value) :1015
void PageResourceBinding__set_Key_fn(PageResourceBinding* __this, uString* value)
{
    __this->Key(value);
}

// private object get_LocalObject() :1103
void PageResourceBinding__get_LocalObject_fn(PageResourceBinding* __this, uObject** __retval)
{
    *__retval = __this->LocalObject();
}

// public PageResourceBinding New(Uno.UX.Property<T> target, string key) :1041
void PageResourceBinding__New1_fn(uType* __type, ::g::Uno::UX::Property* target, uString* key, PageResourceBinding** __retval)
{
    *__retval = PageResourceBinding::New1(__type, target, key);
}

// private void OnChanged() :1137
void PageResourceBinding__OnChanged_fn(PageResourceBinding* __this)
{
    __this->OnChanged();
}

// private void OnNavigated(object s, Fuse.Navigation.NavigatedArgs args) :1123
void PageResourceBinding__OnNavigated_fn(PageResourceBinding* __this, uObject* s, ::g::Fuse::Navigation::NavigatedArgs* args)
{
    __this->OnNavigated(s, args);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1051
void PageResourceBinding__OnRooted_fn(PageResourceBinding* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    ::g::Fuse::Resources::ResourceRegistry::AddResourceChangedHandler(__this->Key(), uDelegate::New(::TYPES[11/*Uno.Action*/], (void*)PageResourceBinding__OnChanged_fn, __this));
    ::g::Uno::Collections::List__Add_fn(uPtr(::g::Fuse::Navigation::NavigationPageProperty::RootedBindings()), (uObject*)__this);
    __this->UpdateSource();
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :1092
void PageResourceBinding__OnUnrooted_fn(PageResourceBinding* __this, ::g::Fuse::Node* parentNode)
{
    bool ret2;
    __this->ReleaseCurrent();
    ::g::Uno::Collections::List__Remove_fn(uPtr(::g::Fuse::Navigation::NavigationPageProperty::RootedBindings()), (uObject*)__this, &ret2);
    ::g::Fuse::Resources::ResourceRegistry::RemoveResourceChangedHandler(__this->Key(), uDelegate::New(::TYPES[11/*Uno.Action*/], (void*)PageResourceBinding__OnChanged_fn, __this));
    ::g::Fuse::Behavior__OnUnrooted_fn(__this, parentNode);
}

// private void ReleaseCurrent() :1082
void PageResourceBinding__ReleaseCurrent_fn(PageResourceBinding* __this)
{
    __this->ReleaseCurrent();
}

// public generated Uno.UX.Property<T> get_Target() :1012
void PageResourceBinding__get_Target_fn(PageResourceBinding* __this, ::g::Uno::UX::Property** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property<T> value) :1012
void PageResourceBinding__set_Target_fn(PageResourceBinding* __this, ::g::Uno::UX::Property* value)
{
    __this->Target(value);
}

// private void UpdateSource() :1060
void PageResourceBinding__UpdateSource_fn(PageResourceBinding* __this)
{
    __this->UpdateSource();
}

// public PageResourceBinding(Uno.UX.Property<T> target, string key) [instance] :1041
void PageResourceBinding::ctor_1(::g::Uno::UX::Property* target, uString* key)
{
    ctor_();

    if (target == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[5/*"target"*/]));

    Target(target);
    Key(key);
}

// private bool Acceptor(object obj) [instance] :1157
bool PageResourceBinding::Acceptor(uObject* obj)
{
    uType* __types[] = {
        __type->T(0),
    };
    return uIs(obj, __types[0]);
}

// public bool get_AllowNull() [instance] :1032
bool PageResourceBinding::AllowNull()
{
    return _allowNull;
}

// public void set_AllowNull(bool value) [instance] :1033
void PageResourceBinding::AllowNull(bool value)
{
    _allowNull = true;
    _hasDefault = true;
}

// private void GotoPage(Fuse.Node page) [instance] :1128
void PageResourceBinding::GotoPage(::g::Fuse::Node* page)
{
    if (page == _currentPage)
        return;

    _currentPage = page;
    OnChanged();
}

// public generated string get_Key() [instance] :1015
uString* PageResourceBinding::Key()
{
    return _Key;
}

// private generated void set_Key(string value) [instance] :1015
void PageResourceBinding::Key(uString* value)
{
    _Key = value;
}

// private object get_LocalObject() [instance] :1103
uObject* PageResourceBinding::LocalObject()
{
    ::g::Fuse::Node* n = ParentNode();

    while (n != NULL)
    {
        ::g::Fuse::Node* page = ::g::Fuse::Navigation::NavigationPageProperty::GetNavigationPage(n);

        if (page != NULL)
            return page;

        uObject* navi = ::g::Fuse::Navigation::Navigation::GetLocalNavigation(n);

        if (navi != NULL)
            return navi;

        n = uPtr(n)->Parent();
    }

    return NULL;
}

// private void OnChanged() [instance] :1137
void PageResourceBinding::OnChanged()
{
    uType* __types[] = {
        __type->T(0),
    };
    ::g::Fuse::Node* page = _currentPage;

    if (page != NULL)
    {
        if (::g::Uno::String::op_Equality(Key(), ::STRINGS[6/*"Node"*/]) && uIs(page, __types[0]))
            ::g::Uno::UX::Property__SetRestState_fn(uPtr(Target()), uUnboxAny(__types[0], page), this);
        else
        {
            uObject* resource;

            if (uPtr(page)->TryGetResource(Key(), uDelegate::New(::TYPES[50/*Uno.Predicate<object>*/], (void*)PageResourceBinding__Acceptor_fn, this), &resource))
                ::g::Uno::UX::Property__SetRestState_fn(uPtr(Target()), uUnboxAny(__types[0], resource), this);
            else if (_hasDefault)
                ::g::Uno::UX::Property__SetRestState_fn(uPtr(Target()), _default(), this);
        }
    }
}

// private void OnNavigated(object s, Fuse.Navigation.NavigatedArgs args) [instance] :1123
void PageResourceBinding::OnNavigated(uObject* s, ::g::Fuse::Navigation::NavigatedArgs* args)
{
    GotoPage(uPtr(args)->NewNode());
}

// private void ReleaseCurrent() [instance] :1082
void PageResourceBinding::ReleaseCurrent()
{
    if (_nav != NULL)
    {
        ::g::Fuse::Navigation::INavigation::remove_Navigated(uInterface(uPtr(_nav), ::TYPES[34/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[43/*Fuse.Navigation.NavigatedHandler*/], (void*)PageResourceBinding__OnNavigated_fn, this));
        _nav = NULL;
    }

    _currentPage = NULL;
}

// public generated Uno.UX.Property<T> get_Target() [instance] :1012
::g::Uno::UX::Property* PageResourceBinding::Target()
{
    return _Target;
}

// private generated void set_Target(Uno.UX.Property<T> value) [instance] :1012
void PageResourceBinding::Target(::g::Uno::UX::Property* value)
{
    _Target = value;
}

// private void UpdateSource() [instance] :1060
void PageResourceBinding::UpdateSource()
{
    uObject* local = LocalObject();

    if ((local == _nav) || (local == _currentPage))
        return;

    ReleaseCurrent();
    _nav = uAs<uObject*>(local, ::TYPES[34/*Fuse.Navigation.INavigation*/]);
    _currentPage = uAs< ::g::Fuse::Node*>(local, ::TYPES[12/*Fuse.Node*/]);

    if (_nav != NULL)
    {
        ::g::Fuse::Navigation::INavigation::add_Navigated(uInterface(uPtr(_nav), ::TYPES[34/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[43/*Fuse.Navigation.NavigatedHandler*/], (void*)PageResourceBinding__OnNavigated_fn, this));
        GotoPage(::g::Fuse::Navigation::INavigation::ActivePage(uInterface(uPtr(_nav), ::TYPES[34/*Fuse.Navigation.INavigation*/])));
    }
    else
        OnChanged();
}

// public PageResourceBinding New(Uno.UX.Property<T> target, string key) [static] :1041
PageResourceBinding* PageResourceBinding::New1(uType* __type, ::g::Uno::UX::Property* target, uString* key)
{
    PageResourceBinding* obj1 = (PageResourceBinding*)uNew(__type);
    obj1->ctor_1(target, key);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\Internal\$.uno(58)
// ---------------------------------------------------------------------

// internal static class PlayerFactory :58
// {
uClassType* PlayerFactory_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Navigation.PlayerFactory", options);
    ::TYPES[54] = ::g::Fuse::Navigation::NavigationTween_typeof();
    ::TYPES[3] = ::g::Uno::Int_typeof();
    ::TYPES[55] = ::g::Fuse::Navigation::INavigationAnimatorPlayer_typeof();
    return type;
}

// public static Fuse.Navigation.INavigationAnimatorPlayer Start(double targetProgress, double startProgress, Uno.Collections.IList<Fuse.Navigation.INavigationAnimator> animators, Uno.Action doneCallback, Uno.Action<double> progressSetterCallback, Fuse.Navigation.NavigationTween navigationTween) :61
void PlayerFactory__Start_fn(double* targetProgress, double* startProgress, uObject* animators, uDelegate* doneCallback, uDelegate* progressSetterCallback, ::g::Fuse::Navigation::NavigationTween* navigationTween, uObject** __retval)
{
    *__retval = PlayerFactory::Start(*targetProgress, *startProgress, animators, doneCallback, progressSetterCallback, navigationTween);
}

// public static Fuse.Navigation.INavigationAnimatorPlayer Start(double targetProgress, double startProgress, Uno.Collections.IList<Fuse.Navigation.INavigationAnimator> animators, Uno.Action doneCallback, Uno.Action<double> progressSetterCallback, Fuse.Navigation.NavigationTween navigationTween) [static] :61
uObject* PlayerFactory::Start(double targetProgress, double startProgress, uObject* animators, uDelegate* doneCallback, uDelegate* progressSetterCallback, ::g::Fuse::Navigation::NavigationTween* navigationTween)
{
    double duration = (targetProgress > startProgress) ? uPtr(navigationTween)->Duration() : uPtr(navigationTween)->DurationBack();
    int easing = (targetProgress > startProgress) ? navigationTween->Easing() : navigationTween->EasingBack();
    int playDirection = (targetProgress > startProgress) ? 0 : 1;
    double actualStartProgress = (playDirection == 0) ? startProgress : targetProgress;
    double actualTargetProgress = (playDirection == 0) ? targetProgress : startProgress;
    ::g::Fuse::Navigation::ProgressSpan* progressSpan = ::g::Fuse::Navigation::ProgressSpan::New1(actualStartProgress, actualTargetProgress);
    ::g::Fuse::Navigation::ProgressTimer* progressTimer = ::g::Fuse::Navigation::ProgressTimer::Start(duration, progressSpan, easing, playDirection);
    return (uObject*)::g::Fuse::Navigation::DefaultNavigationAnimatorPlayer::New1(progressTimer, animators, progressSetterCallback, doneCallback);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\Internal\$.uno(183)
// ----------------------------------------------------------------------

// internal sealed class ProgressSpan :183
// {
uType* ProgressSpan_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ProgressSpan);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.ProgressSpan", options);
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Navigation::ProgressSpan, _From), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Navigation::ProgressSpan, _To), 0);
    return type;
}

// public ProgressSpan(double from, double to) :188
void ProgressSpan__ctor__fn(ProgressSpan* __this, double* from, double* to)
{
    __this->ctor_(*from, *to);
}

// public generated double get_From() :185
void ProgressSpan__get_From_fn(ProgressSpan* __this, double* __retval)
{
    *__retval = __this->From();
}

// private generated void set_From(double value) :185
void ProgressSpan__set_From_fn(ProgressSpan* __this, double* value)
{
    __this->From(*value);
}

// public ProgressSpan New(double from, double to) :188
void ProgressSpan__New1_fn(double* from, double* to, ProgressSpan** __retval)
{
    *__retval = ProgressSpan::New1(*from, *to);
}

// public generated double get_To() :186
void ProgressSpan__get_To_fn(ProgressSpan* __this, double* __retval)
{
    *__retval = __this->To();
}

// private generated void set_To(double value) :186
void ProgressSpan__set_To_fn(ProgressSpan* __this, double* value)
{
    __this->To(*value);
}

// public ProgressSpan(double from, double to) [instance] :188
void ProgressSpan::ctor_(double from, double to)
{
    From(from);
    To(to);
}

// public generated double get_From() [instance] :185
double ProgressSpan::From()
{
    return _From;
}

// private generated void set_From(double value) [instance] :185
void ProgressSpan::From(double value)
{
    _From = value;
}

// public generated double get_To() [instance] :186
double ProgressSpan::To()
{
    return _To;
}

// private generated void set_To(double value) [instance] :186
void ProgressSpan::To(double value)
{
    _To = value;
}

// public ProgressSpan New(double from, double to) [static] :188
ProgressSpan* ProgressSpan::New1(double from, double to)
{
    ProgressSpan* obj1 = (ProgressSpan*)uNew(ProgressSpan_typeof());
    obj1->ctor_(from, to);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\Internal\$.uno(195)
// ----------------------------------------------------------------------

// internal sealed class ProgressTimer :195
// {
uType* ProgressTimer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(ProgressTimer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.ProgressTimer", options);
    ::TYPES[1] = ::g::Uno::Double_typeof();
    ::TYPES[56] = ::g::Fuse::Animations::EasingFunction_typeof();
    ::TYPES[57] = ::g::Uno::Float_typeof();
    ::TYPES[58] = ::g::Fuse::Time_typeof();
    ::TYPES[3] = ::g::Uno::Int_typeof();
    ::TYPES[7] = ::g::Fuse::Navigation::ProgressSpan_typeof();
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Navigation::ProgressTimer, _duration), 0,
        ::g::Fuse::Animations::Easing_typeof(), offsetof(::g::Fuse::Navigation::ProgressTimer, _easing), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Navigation::ProgressTimer, _elapsedTime), 0,
        ::g::Fuse::Navigation::ProgressSpan_typeof(), offsetof(::g::Fuse::Navigation::ProgressTimer, _progressSpan), 0,
        ::g::Fuse::Animations::AnimationVariant_typeof(), offsetof(::g::Fuse::Navigation::ProgressTimer, _variant), 0);
    return type;
}

// private ProgressTimer(double duration, Fuse.Navigation.ProgressSpan progressSpan, Fuse.Animations.Easing easing, Fuse.Animations.AnimationVariant variant) :251
void ProgressTimer__ctor__fn(ProgressTimer* __this, double* duration, ::g::Fuse::Navigation::ProgressSpan* progressSpan, int* easing, int* variant)
{
    __this->ctor_(*duration, progressSpan, *easing, *variant);
}

// private double Ease(double progress) :272
void ProgressTimer__Ease_fn(ProgressTimer* __this, double* progress, double* __retval)
{
    *__retval = __this->Ease(*progress);
}

// public double get_EasedNormalizedProgress() :220
void ProgressTimer__get_EasedNormalizedProgress_fn(ProgressTimer* __this, double* __retval)
{
    *__retval = __this->EasedNormalizedProgress();
}

// public double get_EasedProgress() :236
void ProgressTimer__get_EasedProgress_fn(ProgressTimer* __this, double* __retval)
{
    *__retval = __this->EasedProgress();
}

// private ProgressTimer New(double duration, Fuse.Navigation.ProgressSpan progressSpan, Fuse.Animations.Easing easing, Fuse.Animations.AnimationVariant variant) :251
void ProgressTimer__New1_fn(double* duration, ::g::Fuse::Navigation::ProgressSpan* progressSpan, int* easing, int* variant, ProgressTimer** __retval)
{
    *__retval = ProgressTimer::New1(*duration, progressSpan, *easing, *variant);
}

// public double get_NormalizedProgress() :209
void ProgressTimer__get_NormalizedProgress_fn(ProgressTimer* __this, double* __retval)
{
    *__retval = __this->NormalizedProgress();
}

// public double get_Progress() :231
void ProgressTimer__get_Progress_fn(ProgressTimer* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public Fuse.Navigation.ProgressSpan get_ProgressSpan() :241
void ProgressTimer__get_ProgressSpan_fn(ProgressTimer* __this, ::g::Fuse::Navigation::ProgressSpan** __retval)
{
    *__retval = __this->ProgressSpan();
}

// public static Fuse.Navigation.ProgressTimer Start(double duration, Fuse.Navigation.ProgressSpan progressSpan, Fuse.Animations.Easing easing, Fuse.Animations.AnimationVariant variant) :263
void ProgressTimer__Start_fn(double* duration, ::g::Fuse::Navigation::ProgressSpan* progressSpan, int* easing, int* variant, ProgressTimer** __retval)
{
    *__retval = ProgressTimer::Start(*duration, progressSpan, *easing, *variant);
}

// public double get_TimeLeft() :204
void ProgressTimer__get_TimeLeft_fn(ProgressTimer* __this, double* __retval)
{
    *__retval = __this->TimeLeft();
}

// public void Update() :277
void ProgressTimer__Update_fn(ProgressTimer* __this)
{
    __this->Update();
}

// public Fuse.Animations.AnimationVariant get_Variant() :199
void ProgressTimer__get_Variant_fn(ProgressTimer* __this, int* __retval)
{
    *__retval = __this->Variant();
}

// private ProgressTimer(double duration, Fuse.Navigation.ProgressSpan progressSpan, Fuse.Animations.Easing easing, Fuse.Animations.AnimationVariant variant) [instance] :251
void ProgressTimer::ctor_(double duration, ::g::Fuse::Navigation::ProgressSpan* progressSpan, int easing, int variant)
{
    _duration = duration;
    _easing = easing;
    _variant = variant;
    _progressSpan = progressSpan;
}

// private double Ease(double progress) [instance] :272
double ProgressTimer::Ease(double progress)
{
    float ret2;
    return (double)(uPtr(::g::Fuse::Animations::EasingFunctions::FromEasing(_easing))->Invoke(&ret2, 1, uCRef((float)progress)), ret2);
}

// public double get_EasedNormalizedProgress() [instance] :220
double ProgressTimer::EasedNormalizedProgress()
{
    double progress = Ease(_elapsedTime / _duration);

    if (_variant == 1)
        progress = 1.0 - progress;

    return progress;
}

// public double get_EasedProgress() [instance] :236
double ProgressTimer::EasedProgress()
{
    return (EasedNormalizedProgress() * (uPtr(_progressSpan)->To() - uPtr(_progressSpan)->From())) + uPtr(_progressSpan)->From();
}

// public double get_NormalizedProgress() [instance] :209
double ProgressTimer::NormalizedProgress()
{
    double progress = _elapsedTime / _duration;

    if (_variant == 1)
        progress = 1.0 - progress;

    return progress;
}

// public double get_Progress() [instance] :231
double ProgressTimer::Progress()
{
    return (NormalizedProgress() * (uPtr(_progressSpan)->To() - uPtr(_progressSpan)->From())) + uPtr(_progressSpan)->From();
}

// public Fuse.Navigation.ProgressSpan get_ProgressSpan() [instance] :241
::g::Fuse::Navigation::ProgressSpan* ProgressTimer::ProgressSpan()
{
    return _progressSpan;
}

// public double get_TimeLeft() [instance] :204
double ProgressTimer::TimeLeft()
{
    return ::g::Uno::Math::Clamp(_duration - _elapsedTime, 0.0, _duration);
}

// public void Update() [instance] :277
void ProgressTimer::Update()
{
    _elapsedTime = ::g::Uno::Math::Min(_elapsedTime + ::g::Fuse::Time::FrameInterval(), _duration);
}

// public Fuse.Animations.AnimationVariant get_Variant() [instance] :199
int ProgressTimer::Variant()
{
    return _variant;
}

// private ProgressTimer New(double duration, Fuse.Navigation.ProgressSpan progressSpan, Fuse.Animations.Easing easing, Fuse.Animations.AnimationVariant variant) [static] :251
ProgressTimer* ProgressTimer::New1(double duration, ::g::Fuse::Navigation::ProgressSpan* progressSpan, int easing, int variant)
{
    ProgressTimer* obj1 = (ProgressTimer*)uNew(ProgressTimer_typeof());
    obj1->ctor_(duration, progressSpan, easing, variant);
    return obj1;
}

// public static Fuse.Navigation.ProgressTimer Start(double duration, Fuse.Navigation.ProgressSpan progressSpan, Fuse.Animations.Easing easing, Fuse.Animations.AnimationVariant variant) [static] :263
ProgressTimer* ProgressTimer::Start(double duration, ::g::Fuse::Navigation::ProgressSpan* progressSpan, int easing, int variant)
{
    return ProgressTimer::New1(duration, progressSpan, easing, variant);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\Internal\$.uno(140)
// ----------------------------------------------------------------------

// internal sealed class SeekNavigationAnimatorPlayer :140
// {
SeekNavigationAnimatorPlayer_type* SeekNavigationAnimatorPlayer_typeof()
{
    static uSStrong<SeekNavigationAnimatorPlayer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(SeekNavigationAnimatorPlayer);
    options.TypeSize = sizeof(SeekNavigationAnimatorPlayer_type);
    type = (SeekNavigationAnimatorPlayer_type*)uClassType::New("Fuse.Navigation.SeekNavigationAnimatorPlayer", options);
    type->interface0.fp_Update = (void(*)(uObject*))SeekNavigationAnimatorPlayer__Update_fn;
    type->interface0.fp_EnsureAtEnd = (void(*)(uObject*))SeekNavigationAnimatorPlayer__EnsureAtEnd_fn;
    ::TYPES[59] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::Double_typeof());
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Navigation::INavigationAnimator_typeof());
    ::TYPES[9] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Navigation::INavigationAnimator_typeof());
    type->SetInterfaces(
        ::g::Fuse::Navigation::INavigationAnimatorPlayer_typeof(), offsetof(SeekNavigationAnimatorPlayer_type, interface0));
    type->SetFields(0,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Navigation::INavigationAnimator_typeof()), offsetof(::g::Fuse::Navigation::SeekNavigationAnimatorPlayer, _animators), 0,
        ::g::Uno::Func_typeof()->MakeType(::g::Uno::Double_typeof()), offsetof(::g::Fuse::Navigation::SeekNavigationAnimatorPlayer, _getProgress), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Navigation::SeekNavigationAnimatorPlayer, _prevProgress), 0);
    return type;
}

// public SeekNavigationAnimatorPlayer(Uno.Collections.IList<Fuse.Navigation.INavigationAnimator> animators, Uno.Func<double> getProgress) :147
void SeekNavigationAnimatorPlayer__ctor__fn(SeekNavigationAnimatorPlayer* __this, uObject* animators, uDelegate* getProgress)
{
    __this->ctor_(animators, getProgress);
}

// public void EnsureAtEnd() :164
void SeekNavigationAnimatorPlayer__EnsureAtEnd_fn(SeekNavigationAnimatorPlayer* __this)
{
    __this->EnsureAtEnd();
}

// public SeekNavigationAnimatorPlayer New(Uno.Collections.IList<Fuse.Navigation.INavigationAnimator> animators, Uno.Func<double> getProgress) :147
void SeekNavigationAnimatorPlayer__New1_fn(uObject* animators, uDelegate* getProgress, SeekNavigationAnimatorPlayer** __retval)
{
    *__retval = SeekNavigationAnimatorPlayer::New1(animators, getProgress);
}

// public void Update() :156
void SeekNavigationAnimatorPlayer__Update_fn(SeekNavigationAnimatorPlayer* __this)
{
    __this->Update();
}

// public SeekNavigationAnimatorPlayer(Uno.Collections.IList<Fuse.Navigation.INavigationAnimator> animators, Uno.Func<double> getProgress) [instance] :147
void SeekNavigationAnimatorPlayer::ctor_(uObject* animators, uDelegate* getProgress)
{
    double ret2;
    _animators = animators;
    _getProgress = getProgress;
    _prevProgress = (uPtr(_getProgress)->Invoke(&ret2), ret2);
}

// public void EnsureAtEnd() [instance] :164
void SeekNavigationAnimatorPlayer::EnsureAtEnd()
{
    U_THROW(::g::Uno::NotImplementedException::New4());
}

// public void Update() [instance] :156
void SeekNavigationAnimatorPlayer::Update()
{
    double ret3;
    uObject* ret4;
    double progress = (uPtr(_getProgress)->Invoke(&ret3), ret3);

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(_animators), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Navigation.INavigationAnimator>*/])); ++i)
        ::g::Fuse::Navigation::INavigationAnimator::Update(uInterface(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(_animators), ::TYPES[9/*Uno.Collections.IList<Fuse.Navigation.INavigationAnimator>*/]), uCRef<int>(i), &ret4), ret4)), ::TYPES[62/*Fuse.Navigation.INavigationAnimator*/]), progress, _prevProgress);

    _prevProgress = progress;
}

// public SeekNavigationAnimatorPlayer New(Uno.Collections.IList<Fuse.Navigation.INavigationAnimator> animators, Uno.Func<double> getProgress) [static] :147
SeekNavigationAnimatorPlayer* SeekNavigationAnimatorPlayer::New1(uObject* animators, uDelegate* getProgress)
{
    SeekNavigationAnimatorPlayer* obj1 = (SeekNavigationAnimatorPlayer*)uNew(SeekNavigationAnimatorPlayer_typeof());
    obj1->ctor_(animators, getProgress);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(1698)
// --------------------------------------------------------------

// public enum SnapTo :1698
uEnumType* SnapTo_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.SnapTo", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Previous", 0LL,
        "Current", 1LL,
        "Next", 2LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(1207)
// --------------------------------------------------------------

// public interfacemodifiers class StructuredNavigation :1207
// {
::g::Fuse::Navigation::Navigation_type* StructuredNavigation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::Navigation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(StructuredNavigation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::Navigation_type);
    type = (::g::Fuse::Navigation::Navigation_type*)uClassType::New("Fuse.Navigation.StructuredNavigation", options);
    type->SetBase(::g::Fuse::Navigation::Navigation_typeof());
    type->fp_get_Active = (void(*)(::g::Fuse::Navigation::Navigation*, ::g::Fuse::Node**))StructuredNavigation__get_Active_fn;
    type->fp_set_Active = (void(*)(::g::Fuse::Navigation::Navigation*, ::g::Fuse::Node*))StructuredNavigation__set_Active_fn;
    type->fp_get_CanGoBack = (void(*)(::g::Fuse::Navigation::Navigation*, bool*))StructuredNavigation__get_CanGoBack_fn;
    type->fp_get_CanGoForward = (void(*)(::g::Fuse::Navigation::Navigation*, bool*))StructuredNavigation__get_CanGoForward_fn;
    type->fp_GoBack = (void(*)(::g::Fuse::Navigation::Navigation*))StructuredNavigation__GoBack_fn;
    type->fp_GoForward = (void(*)(::g::Fuse::Navigation::Navigation*))StructuredNavigation__GoForward_fn;
    type->fp_Goto = (void(*)(::g::Fuse::Navigation::Navigation*, ::g::Fuse::Node*, int*))StructuredNavigation__Goto_fn;
    type->fp_OnChildAdded = (void(*)(::g::Fuse::Navigation::Navigation*, uObject*, ::g::Fuse::Node*))StructuredNavigation__OnChildAdded_fn;
    type->fp_OnChildRemoved = (void(*)(::g::Fuse::Navigation::Navigation*, uObject*, ::g::Fuse::Node*))StructuredNavigation__OnChildRemoved_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))StructuredNavigation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))StructuredNavigation__OnUnrooted_fn;
    type->fp_get_PageProgress = (void(*)(::g::Fuse::Navigation::Navigation*, double*))StructuredNavigation__get_PageProgress_fn;
    type->interface0.fp_GetPage = (void(*)(uObject*, int*, ::g::Fuse::Node**))::g::Fuse::Navigation::Navigation__GetPage_fn;
    type->interface0.fp_Goto = (void(*)(uObject*, ::g::Fuse::Node*, int*))StructuredNavigation__Goto_fn;
    type->interface0.fp_Toggle = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Navigation::Navigation__Toggle_fn;
    type->interface0.fp_get_PageCount = (void(*)(uObject*, int*))::g::Fuse::Navigation::Navigation__get_PageCount_fn;
    type->interface0.fp_get_PageProgress = (void(*)(uObject*, double*))StructuredNavigation__get_PageProgress_fn;
    type->interface0.fp_get_ActivePage = (void(*)(uObject*, ::g::Fuse::Node**))::g::Fuse::Navigation::Navigation__get_ActivePage_fn;
    type->interface0.fp_add_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__add_PageCountChanged_fn;
    type->interface0.fp_remove_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__remove_PageCountChanged_fn;
    type->interface0.fp_add_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__add_PageProgressChanged_fn;
    type->interface0.fp_remove_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__remove_PageProgressChanged_fn;
    type->interface0.fp_add_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__add_Navigated_fn;
    type->interface0.fp_remove_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__remove_Navigated_fn;
    type->interface0.fp_add_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__add_HistoryChanged_fn;
    type->interface0.fp_remove_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::Navigation__remove_HistoryChanged_fn;
    type->interface1.fp_GoForward = (void(*)(uObject*))StructuredNavigation__GoForward_fn;
    type->interface1.fp_GoBack = (void(*)(uObject*))StructuredNavigation__GoBack_fn;
    type->interface1.fp_get_CanGoBack = (void(*)(uObject*, bool*))StructuredNavigation__get_CanGoBack_fn;
    type->interface1.fp_get_CanGoForward = (void(*)(uObject*, bool*))StructuredNavigation__get_CanGoForward_fn;
    ::TYPES[1] = ::g::Uno::Double_typeof();
    ::TYPES[29] = ::g::Fuse::Behavior_typeof();
    ::TYPES[38] = ::g::Fuse::Navigation::NavigationStateArgs_typeof();
    ::TYPES[55] = ::g::Fuse::Navigation::INavigationAnimatorPlayer_typeof();
    ::TYPES[59] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::Double_typeof());
    ::TYPES[13] = ::g::Fuse::Navigation::Navigation_typeof();
    ::TYPES[60] = ::g::Fuse::Navigation::EndSeekArgs_typeof();
    ::TYPES[3] = ::g::Uno::Int_typeof();
    ::TYPES[15] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[16] = ::g::Fuse::Navigation::INavigationPanel_typeof();
    ::TYPES[17] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[18] = ::g::Uno::Bool_typeof();
    ::TYPES[61] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Navigation::INavigationAnimator_typeof());
    ::TYPES[62] = ::g::Fuse::Navigation::INavigationAnimator_typeof();
    ::TYPES[9] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Navigation::INavigationAnimator_typeof());
    ::TYPES[63] = ::g::Uno::EventHandler_typeof();
    ::TYPES[64] = ::g::Fuse::PlacedHandler_typeof();
    ::TYPES[65] = ::g::Fuse::Navigation::UpdateSeekArgs_typeof();
    ::TYPES[11] = ::g::Uno::Action_typeof();
    ::TYPES[10] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Double_typeof());
    ::TYPES[54] = ::g::Fuse::Navigation::NavigationTween_typeof();
    ::TYPES[57] = ::g::Uno::Float_typeof();
    type->SetInterfaces(
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(::g::Fuse::Navigation::Navigation_type, interface0),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(::g::Fuse::Navigation::Navigation_type, interface1));
    type->SetFields(8,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation, _active), 0,
        ::g::Fuse::Navigation::INavigationAnimatorPlayer_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation, _currentAnimatorPlayer), 0,
        ::g::Fuse::Navigation::NavigationTween_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation, _navigationTween), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation, _progress), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation, _progressBase), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation, _queueClearForwardHistory), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation, _reuseExistingNode), 0,
        StructuredNavigation__NavigationStructure_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation, _Mode), 0);
    type->Reflection.SetFunctions(14,
        new uFunction("BeginSeek", NULL, (void*)StructuredNavigation__BeginSeek_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Duration", NULL, (void*)StructuredNavigation__get_Duration_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Duration", NULL, (void*)StructuredNavigation__set_Duration_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_DurationBack", NULL, (void*)StructuredNavigation__get_DurationBack_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_DurationBack", NULL, (void*)StructuredNavigation__set_DurationBack_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_Easing", NULL, (void*)StructuredNavigation__get_Easing_fn, 0, false, ::g::Fuse::Animations::Easing_typeof(), 0),
        new uFunction("set_Easing", NULL, (void*)StructuredNavigation__set_Easing_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::Easing_typeof()),
        new uFunction("get_EasingBack", NULL, (void*)StructuredNavigation__get_EasingBack_fn, 0, false, ::g::Fuse::Animations::Easing_typeof(), 0),
        new uFunction("set_EasingBack", NULL, (void*)StructuredNavigation__set_EasingBack_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::Easing_typeof()),
        new uFunction("EndSeek", NULL, (void*)StructuredNavigation__EndSeek_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::EndSeekArgs_typeof()),
        new uFunction("GotoImpl", NULL, (void*)StructuredNavigation__GotoImpl_fn, 0, false, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Fuse::Navigation::NavigationGotoMode_typeof()),
        new uFunction("get_Progress", NULL, (void*)StructuredNavigation__get_Progress_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("Seek", NULL, (void*)StructuredNavigation__Seek_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::UpdateSeekArgs_typeof()),
        new uFunction("get_SeekRange", NULL, (void*)StructuredNavigation__get_SeekRange_fn, 0, false, ::g::Uno::Float2_typeof(), 0));
    return type;
}

// internal StructuredNavigation(Fuse.Navigation.StructuredNavigation.NavigationStructure mode) :1219
void StructuredNavigation__ctor_2_fn(StructuredNavigation* __this, int* mode)
{
    __this->ctor_2(*mode);
}

// public override sealed Fuse.Node get_Active() :1481
void StructuredNavigation__get_Active_fn(StructuredNavigation* __this, ::g::Fuse::Node** __retval)
{
    return *__retval = __this->_active, void();
}

// public override sealed void set_Active(Fuse.Node value) :1482
void StructuredNavigation__set_Active_fn(StructuredNavigation* __this, ::g::Fuse::Node* value)
{
    __this->Goto(value, 0);
}

// private void AnimatorDoneCallback() :1450
void StructuredNavigation__AnimatorDoneCallback_fn(StructuredNavigation* __this)
{
    __this->AnimatorDoneCallback();
}

// private Fuse.Node get_Back() :1551
void StructuredNavigation__get_Back_fn(StructuredNavigation* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Back();
}

// public void BeginSeek() :1489
void StructuredNavigation__BeginSeek_fn(StructuredNavigation* __this)
{
    __this->BeginSeek();
}

// public override sealed bool get_CanGoBack() :1345
void StructuredNavigation__get_CanGoBack_fn(StructuredNavigation* __this, bool* __retval)
{
    return *__retval = __this->HasPages() && (__this->_active != __this->Back()), void();
}

// public override sealed bool get_CanGoForward() :1337
void StructuredNavigation__get_CanGoForward_fn(StructuredNavigation* __this, bool* __retval)
{
    return *__retval = __this->HasPages() && (__this->_active != __this->Front()), void();
}

// private void ClearForwardHistory() :1535
void StructuredNavigation__ClearForwardHistory_fn(StructuredNavigation* __this)
{
    __this->ClearForwardHistory();
}

// public double get_Duration() :1372
void StructuredNavigation__get_Duration_fn(StructuredNavigation* __this, double* __retval)
{
    *__retval = __this->Duration();
}

// public void set_Duration(double value) :1373
void StructuredNavigation__set_Duration_fn(StructuredNavigation* __this, double* value)
{
    __this->Duration(*value);
}

// public double get_DurationBack() :1384
void StructuredNavigation__get_DurationBack_fn(StructuredNavigation* __this, double* __retval)
{
    *__retval = __this->DurationBack();
}

// public void set_DurationBack(double value) :1385
void StructuredNavigation__set_DurationBack_fn(StructuredNavigation* __this, double* value)
{
    __this->DurationBack(*value);
}

// public Fuse.Animations.Easing get_Easing() :1366
void StructuredNavigation__get_Easing_fn(StructuredNavigation* __this, int* __retval)
{
    *__retval = __this->Easing();
}

// public void set_Easing(Fuse.Animations.Easing value) :1367
void StructuredNavigation__set_Easing_fn(StructuredNavigation* __this, int* value)
{
    __this->Easing(*value);
}

// public Fuse.Animations.Easing get_EasingBack() :1378
void StructuredNavigation__get_EasingBack_fn(StructuredNavigation* __this, int* __retval)
{
    *__retval = __this->EasingBack();
}

// public void set_EasingBack(Fuse.Animations.Easing value) :1379
void StructuredNavigation__set_EasingBack_fn(StructuredNavigation* __this, int* value)
{
    __this->EasingBack(*value);
}

// public void EndSeek(Fuse.Navigation.EndSeekArgs args) :1508
void StructuredNavigation__EndSeek_fn(StructuredNavigation* __this, ::g::Fuse::Navigation::EndSeekArgs* args)
{
    __this->EndSeek(args);
}

// private void EnsureChildAnimationState() :1422
void StructuredNavigation__EnsureChildAnimationState_fn(StructuredNavigation* __this)
{
    __this->EnsureChildAnimationState();
}

// private Fuse.Node get_Front() :1556
void StructuredNavigation__get_Front_fn(StructuredNavigation* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Front();
}

// private Uno.Collections.IList<Fuse.Navigation.INavigationAnimator> GetAnimators() :48
void StructuredNavigation__GetAnimators_fn(StructuredNavigation* __this, uObject** __retval)
{
    *__retval = __this->GetAnimators();
}

// public override sealed void GoBack() :1357
void StructuredNavigation__GoBack_fn(StructuredNavigation* __this)
{
    if (__this->CanGoBack())
        __this->TransitionToChild(__this->Previous(), false);
}

// public override sealed void GoForward() :1351
void StructuredNavigation__GoForward_fn(StructuredNavigation* __this)
{
    if (__this->CanGoForward())
        __this->TransitionToChild(__this->Next(), false);
}

// public override sealed void Goto(Fuse.Node element, Fuse.Navigation.NavigationGotoMode mode) :1261
void StructuredNavigation__Goto_fn(StructuredNavigation* __this, ::g::Fuse::Node* element, int* mode)
{
    int mode_ = *mode;

    if (__this->Owner() == NULL)
    {
        __this->_active = element;
        return;
    }

    if (element == __this->_active)
        return;

    __this->GotoImpl(element, mode_);
}

// public void GotoImpl(Fuse.Node element, Fuse.Navigation.NavigationGotoMode mode) :1276
void StructuredNavigation__GotoImpl_fn(StructuredNavigation* __this, ::g::Fuse::Node* element, int* mode)
{
    __this->GotoImpl(element, *mode);
}

// internal generated Fuse.Navigation.StructuredNavigation.NavigationStructure get_Mode() :1217
void StructuredNavigation__get_Mode_fn(StructuredNavigation* __this, int* __retval)
{
    *__retval = __this->Mode();
}

// internal generated void set_Mode(Fuse.Navigation.StructuredNavigation.NavigationStructure value) :1217
void StructuredNavigation__set_Mode_fn(StructuredNavigation* __this, int* value)
{
    __this->Mode(*value);
}

// private Fuse.Node get_Next() :1566
void StructuredNavigation__get_Next_fn(StructuredNavigation* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Next();
}

// protected override sealed void OnChildAdded(object s, Fuse.Node child) :1389
void StructuredNavigation__OnChildAdded_fn(StructuredNavigation* __this, uObject* s, ::g::Fuse::Node* child)
{
    if (__this->_active != NULL)
        __this->Progress((double)__this->GetPageIndex(__this->_active));

    if (__this->_active == NULL)
        __this->_active = child;

    __this->OnHistoryChanged();
    __this->EnsureChildAnimationState();
    ::g::Fuse::Navigation::Navigation__OnChildAdded_fn(__this, s, child);
}

// protected override sealed void OnChildRemoved(object s, Fuse.Node child) :1403
void StructuredNavigation__OnChildRemoved_fn(StructuredNavigation* __this, uObject* s, ::g::Fuse::Node* child)
{
    if (__this->_active == child)
        __this->_active = NULL;

    __this->OnHistoryChanged();
    ::g::Fuse::Navigation::DefaultNavigationAnimator* animator = ::g::Fuse::Navigation::DefaultNavigationAnimator::New1(0, child);
    animator->Update(0.0, 0.0);
    ::g::Fuse::Navigation::Navigation__OnChildRemoved_fn(__this, s, child);
}

// private void OnPlaced(object s, object a) :1251
void StructuredNavigation__OnPlaced_fn(StructuredNavigation* __this, uObject* s, uObject* a)
{
    __this->OnPlaced(s, a);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1224
void StructuredNavigation__OnRooted_fn(StructuredNavigation* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Navigation::Navigation__OnRooted_fn(__this, parentNode);

    if (__this->Owner() != NULL)
    {
        ::g::Fuse::Navigation::INavigationPanel::add_Update(uInterface(uPtr(__this->Owner()), ::TYPES[16/*Fuse.Navigation.INavigationPanel*/]), uDelegate::New(::TYPES[63/*Uno.EventHandler*/], (void*)StructuredNavigation__OnUpdate_fn, __this));
        ::g::Fuse::Navigation::INavigationPanel::add_Placed(uInterface(uPtr(__this->Owner()), ::TYPES[16/*Fuse.Navigation.INavigationPanel*/]), uDelegate::New(::TYPES[64/*Fuse.PlacedHandler*/], (void*)StructuredNavigation__OnPlaced_fn, __this));

        if ((__this->PageCount() > 0) && (__this->_active == NULL))
            __this->_active = __this->GetPage(0);

        if (__this->_active != NULL)
            __this->GotoImpl(__this->_active, 2);

        __this->EnsureChildAnimationState();
    }
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :1241
void StructuredNavigation__OnUnrooted_fn(StructuredNavigation* __this, ::g::Fuse::Node* parentNode)
{
    if (__this->Owner() != NULL)
    {
        ::g::Fuse::Navigation::INavigationPanel::remove_Update(uInterface(uPtr(__this->Owner()), ::TYPES[16/*Fuse.Navigation.INavigationPanel*/]), uDelegate::New(::TYPES[63/*Uno.EventHandler*/], (void*)StructuredNavigation__OnUpdate_fn, __this));
        ::g::Fuse::Navigation::INavigationPanel::remove_Placed(uInterface(uPtr(__this->Owner()), ::TYPES[16/*Fuse.Navigation.INavigationPanel*/]), uDelegate::New(::TYPES[64/*Fuse.PlacedHandler*/], (void*)StructuredNavigation__OnPlaced_fn, __this));
    }

    ::g::Fuse::Navigation::Navigation__OnUnrooted_fn(__this, parentNode);
}

// private void OnUpdate(object sender, Uno.EventArgs args) :1416
void StructuredNavigation__OnUpdate_fn(StructuredNavigation* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnUpdate(sender, args);
}

// public override sealed double get_PageProgress() :1258
void StructuredNavigation__get_PageProgress_fn(StructuredNavigation* __this, double* __retval)
{
    return *__retval = __this->Progress(), void();
}

// private Fuse.Node get_Previous() :1561
void StructuredNavigation__get_Previous_fn(StructuredNavigation* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Previous();
}

// public double get_Progress() :1439
void StructuredNavigation__get_Progress_fn(StructuredNavigation* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// private void set_Progress(double value) :1440
void StructuredNavigation__set_Progress_fn(StructuredNavigation* __this, double* value)
{
    __this->Progress(*value);
}

// private double ProgressGetterCallback() :1473
void StructuredNavigation__ProgressGetterCallback_fn(StructuredNavigation* __this, double* __retval)
{
    *__retval = __this->ProgressGetterCallback();
}

// private void ProgressSetterCallback(double newProgress) :1468
void StructuredNavigation__ProgressSetterCallback_fn(StructuredNavigation* __this, double* newProgress)
{
    __this->ProgressSetterCallback(*newProgress);
}

// public void Seek(Fuse.Navigation.UpdateSeekArgs args) :1503
void StructuredNavigation__Seek_fn(StructuredNavigation* __this, ::g::Fuse::Navigation::UpdateSeekArgs* args)
{
    __this->Seek(args);
}

// public float2 get_SeekRange() :1500
void StructuredNavigation__get_SeekRange_fn(StructuredNavigation* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->SeekRange();
}

// private void TransitionToChild(Fuse.Node element, [bool bypass]) :1304
void StructuredNavigation__TransitionToChild_fn(StructuredNavigation* __this, ::g::Fuse::Node* element, bool* bypass)
{
    __this->TransitionToChild(element, *bypass);
}

// internal StructuredNavigation(Fuse.Navigation.StructuredNavigation.NavigationStructure mode) [instance] :1219
void StructuredNavigation::ctor_2(int mode)
{
    _reuseExistingNode = true;
    _navigationTween = ::g::Fuse::Navigation::NavigationTween::New1();
    ctor_1();
    Mode(mode);
}

// private void AnimatorDoneCallback() [instance] :1450
void StructuredNavigation::AnimatorDoneCallback()
{
    ::g::Fuse::Navigation::NavigationStateArgs* collection3;
    ::g::Fuse::Navigation::INavigationAnimatorPlayer::EnsureAtEnd(uInterface(uPtr(_currentAnimatorPlayer), ::TYPES[55/*Fuse.Navigation.INavigationAnimatorPlayer*/]));
    Progress((double)GetPageIndex(_active));
    _currentAnimatorPlayer = NULL;

    if (_queueClearForwardHistory)
    {
        ClearForwardHistory();
        _queueClearForwardHistory = false;
    }

    OnNavigated(_active);
    OnHistoryChanged();
    ::g::Fuse::Navigation::Navigation::NotifyNavigationState(ParentNode(), (collection3 = ::g::Fuse::Navigation::NavigationStateArgs::New2(), uPtr(collection3)->State(0), 0, collection3));
}

// private Fuse.Node get_Back() [instance] :1551
::g::Fuse::Node* StructuredNavigation::Back()
{
    return (PageCount() > 0) ? (::g::Fuse::Node*)GetPage(PageCount() - 1) : NULL;
}

// public void BeginSeek() [instance] :1489
void StructuredNavigation::BeginSeek()
{
    ::g::Fuse::Navigation::NavigationStateArgs* collection4;
    _progressBase = Progress();
    ::g::Fuse::Navigation::Navigation::NotifyNavigationState(ParentNode(), (collection4 = ::g::Fuse::Navigation::NavigationStateArgs::New2(), uPtr(collection4)->State(1), 1, collection4));
    _currentAnimatorPlayer = (uObject*)::g::Fuse::Navigation::SeekNavigationAnimatorPlayer::New1(GetAnimators(), uDelegate::New(::TYPES[59/*Uno.Func<double>*/], (void*)StructuredNavigation__ProgressGetterCallback_fn, this));
}

// private void ClearForwardHistory() [instance] :1535
void StructuredNavigation::ClearForwardHistory()
{
    if (HasPages() && (_active != Front()))
    {
        int target = GetPageIndex(_active);

        for (int i = target - 1; i >= 0; i--)
            ::g::Fuse::Navigation::INavigationPanel::RemoveChild(uInterface(uPtr(Owner()), ::TYPES[16/*Fuse.Navigation.INavigationPanel*/]), GetPage(i));
    }

    OnHistoryChanged();
}

// public double get_Duration() [instance] :1372
double StructuredNavigation::Duration()
{
    return uPtr(_navigationTween)->Duration();
}

// public void set_Duration(double value) [instance] :1373
void StructuredNavigation::Duration(double value)
{
    uPtr(_navigationTween)->Duration(value);
}

// public double get_DurationBack() [instance] :1384
double StructuredNavigation::DurationBack()
{
    return uPtr(_navigationTween)->DurationBack();
}

// public void set_DurationBack(double value) [instance] :1385
void StructuredNavigation::DurationBack(double value)
{
    uPtr(_navigationTween)->DurationBack(value);
}

// public Fuse.Animations.Easing get_Easing() [instance] :1366
int StructuredNavigation::Easing()
{
    return uPtr(_navigationTween)->Easing();
}

// public void set_Easing(Fuse.Animations.Easing value) [instance] :1367
void StructuredNavigation::Easing(int value)
{
    uPtr(_navigationTween)->Easing(value);
}

// public Fuse.Animations.Easing get_EasingBack() [instance] :1378
int StructuredNavigation::EasingBack()
{
    return uPtr(_navigationTween)->EasingBack();
}

// public void set_EasingBack(Fuse.Animations.Easing value) [instance] :1379
void StructuredNavigation::EasingBack(int value)
{
    uPtr(_navigationTween)->EasingBack(value);
}

// public void EndSeek(Fuse.Navigation.EndSeekArgs args) [instance] :1508
void StructuredNavigation::EndSeek(::g::Fuse::Navigation::EndSeekArgs* args)
{
    _currentAnimatorPlayer = NULL;
    int targetIndex = 0;

    switch (uPtr(args)->SnapTo())
    {
        case 0:
        {
            targetIndex = ::g::Uno::Math::Clamp8((int)::g::Uno::Math::Floor(Progress()), 0, PageCount());
            break;
        }
        case 2:
        {
            targetIndex = ::g::Uno::Math::Clamp8((int)::g::Uno::Math::Ceil(Progress()), 0, PageCount());
            break;
        }
        case 1:
        {
            double diff = Progress() - ::g::Uno::Math::Floor(Progress());
            targetIndex = ::g::Uno::Math::Clamp8((diff > 0.5) ? (int)::g::Uno::Math::Ceil(Progress()) : (int)::g::Uno::Math::Floor(Progress()), 0, PageCount() - 1);
            break;
        }
    }

    if (_active != GetPage(targetIndex))
        _active = GetPage(targetIndex);

    TransitionToChild(GetPage(targetIndex), false);
}

// private void EnsureChildAnimationState() [instance] :1422
void StructuredNavigation::EnsureChildAnimationState()
{
    ::g::Fuse::Node* ret5;
    int i = 0;

    for (int t = 0; t < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(::g::Fuse::Navigation::INavigationPanel::Children(uInterface(uPtr(Owner()), ::TYPES[16/*Fuse.Navigation.INavigationPanel*/]))), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/])); t++)
    {
        ::g::Fuse::Node* c = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(::g::Fuse::Navigation::INavigationPanel::Children(uInterface(uPtr(Owner()), ::TYPES[16/*Fuse.Navigation.INavigationPanel*/]))), ::TYPES[17/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(t), &ret5), ret5);

        if (!IsPage(c))
            continue;

        double p = Progress() - (double)(i++);
        ::g::Fuse::Navigation::Navigation::NotifyNavigation(c, ::g::Fuse::Navigation::NavigationArgs::New2(p, p, 1));
    }
}

// private Fuse.Node get_Front() [instance] :1556
::g::Fuse::Node* StructuredNavigation::Front()
{
    return (PageCount() > 0) ? (::g::Fuse::Node*)GetPage(0) : NULL;
}

// private Uno.Collections.IList<Fuse.Navigation.INavigationAnimator> GetAnimators() [instance] :48
uObject* StructuredNavigation::GetAnimators()
{
    int pc = PageCount();
    ::g::Uno::Collections::List* animators = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New2(::TYPES[61/*Uno.Collections.List<Fuse.Navigation.INavigationAnimator>*/], pc);

    for (int i = 0; i < pc; i++)
        ::g::Uno::Collections::List__Add_fn(animators, (uObject*)::g::Fuse::Navigation::DefaultNavigationAnimator::New1(i, GetPage(i)));

    return (uObject*)animators;
}

// public void GotoImpl(Fuse.Node element, Fuse.Navigation.NavigationGotoMode mode) [instance] :1276
void StructuredNavigation::GotoImpl(::g::Fuse::Node* element, int mode)
{
    bool ret6;

    if (!(::g::Uno::Collections::ICollection::Contains_ex(uInterface(uPtr(::g::Fuse::Navigation::INavigationPanel::Children(uInterface(uPtr(Owner()), ::TYPES[16/*Fuse.Navigation.INavigationPanel*/]))), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), element, &ret6), ret6))
    {
        if (Mode() == 1)
            ClearForwardHistory();

        ::g::Fuse::Navigation::INavigationPanel::AddChildAt(uInterface(uPtr(Owner()), ::TYPES[16/*Fuse.Navigation.INavigationPanel*/]), 0, element);
    }
    else if (!_reuseExistingNode)
    {
        if (Mode() == 1)
        {
            double diff = Progress() - (double)GetPageIndex(_active);
            ::g::Fuse::Navigation::INavigationPanel::RemoveChild(uInterface(uPtr(Owner()), ::TYPES[16/*Fuse.Navigation.INavigationPanel*/]), element);
            Progress((double)GetPageIndex(_active) + diff);
            ClearForwardHistory();
            ::g::Fuse::Navigation::INavigationPanel::AddChildAt(uInterface(uPtr(Owner()), ::TYPES[16/*Fuse.Navigation.INavigationPanel*/]), 0, element);
        }
    }

    TransitionToChild(element, (mode & 2) == 2);

    if ((mode & 4) == 4)
        _queueClearForwardHistory = true;

    OnHistoryChanged();
}

// internal generated Fuse.Navigation.StructuredNavigation.NavigationStructure get_Mode() [instance] :1217
int StructuredNavigation::Mode()
{
    return _Mode;
}

// internal generated void set_Mode(Fuse.Navigation.StructuredNavigation.NavigationStructure value) [instance] :1217
void StructuredNavigation::Mode(int value)
{
    _Mode = value;
}

// private Fuse.Node get_Next() [instance] :1566
::g::Fuse::Node* StructuredNavigation::Next()
{
    return GetPage(GetPageIndex(_active) - 1);
}

// private void OnPlaced(object s, object a) [instance] :1251
void StructuredNavigation::OnPlaced(uObject* s, uObject* a)
{
    EnsureChildAnimationState();
}

// private void OnUpdate(object sender, Uno.EventArgs args) [instance] :1416
void StructuredNavigation::OnUpdate(uObject* sender, ::g::Uno::EventArgs* args)
{
    if (_currentAnimatorPlayer != NULL)
        ::g::Fuse::Navigation::INavigationAnimatorPlayer::Update(uInterface(uPtr(_currentAnimatorPlayer), ::TYPES[55/*Fuse.Navigation.INavigationAnimatorPlayer*/]));
}

// private Fuse.Node get_Previous() [instance] :1561
::g::Fuse::Node* StructuredNavigation::Previous()
{
    return GetPage(GetPageIndex(_active) + 1);
}

// public double get_Progress() [instance] :1439
double StructuredNavigation::Progress()
{
    return _progress;
}

// private void set_Progress(double value) [instance] :1440
void StructuredNavigation::Progress(double value)
{
    double prev = _progress;
    _progress = value;
    OnPageProgressChanged(_progress, prev);
}

// private double ProgressGetterCallback() [instance] :1473
double StructuredNavigation::ProgressGetterCallback()
{
    return Progress();
}

// private void ProgressSetterCallback(double newProgress) [instance] :1468
void StructuredNavigation::ProgressSetterCallback(double newProgress)
{
    Progress(newProgress);
}

// public void Seek(Fuse.Navigation.UpdateSeekArgs args) [instance] :1503
void StructuredNavigation::Seek(::g::Fuse::Navigation::UpdateSeekArgs* args)
{
    Progress((double)uPtr(args)->RelativeDistance() + _progressBase);
}

// public float2 get_SeekRange() [instance] :1500
::g::Uno::Float2 StructuredNavigation::SeekRange()
{
    return ::g::Uno::Float2__New2((float)-_progressBase, (float)((double)(PageCount() - 1) - _progressBase));
}

// private void TransitionToChild(Fuse.Node element, [bool bypass]) [instance] :1304
void StructuredNavigation::TransitionToChild(::g::Fuse::Node* element, bool bypass)
{
    ::g::Fuse::Navigation::NavigationStateArgs* collection1;
    ::g::Fuse::Navigation::NavigationStateArgs* collection2;
    double targetProgress = (double)GetPageIndex(element);
    _active = element;

    if (bypass)
    {
        Progress(targetProgress);
        EnsureChildAnimationState();
        return;
    }

    if ((Progress() == targetProgress) && (_currentAnimatorPlayer == NULL))
    {
        ::g::Fuse::Navigation::Navigation::NotifyNavigationState(ParentNode(), (collection1 = ::g::Fuse::Navigation::NavigationStateArgs::New2(), uPtr(collection1)->State(0), 0, collection1));
        return;
    }

    ::g::Fuse::Navigation::Navigation::NotifyNavigationState(ParentNode(), (collection2 = ::g::Fuse::Navigation::NavigationStateArgs::New2(), uPtr(collection2)->State(2), 2, collection2));
    _currentAnimatorPlayer = ::g::Fuse::Navigation::PlayerFactory::Start(targetProgress, Progress(), GetAnimators(), uDelegate::New(::TYPES[11/*Uno.Action*/], (void*)StructuredNavigation__AnimatorDoneCallback_fn, this), uDelegate::New(::TYPES[10/*Uno.Action<double>*/], (void*)StructuredNavigation__ProgressSetterCallback_fn, this), _navigationTween);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(1718)
// --------------------------------------------------------------

// public enum SwipeDirection :1718
uEnumType* SwipeDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.SwipeDirection", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Right", 0LL,
        "Left", 1LL,
        "Down", 2LL,
        "Up", 3LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(1726)
// --------------------------------------------------------------

// public enum SwipeEnds :1726
uEnumType* SwipeEnds_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.SwipeEnds", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Closed", 0LL,
        "Open", 1LL,
        "Short", 2LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(1733)
// --------------------------------------------------------------

// public sealed class SwipeNavigate :1733
// {
// static SwipeNavigate() :1733
static void SwipeNavigate__cctor__fn(uType* __type)
{
    SwipeNavigate::elasticDecay_ = 0.015f;
    SwipeNavigate::elasticScale_ = 0.4f;
}

::g::Fuse::Behavior_type* SwipeNavigate_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.ObjectSize = sizeof(SwipeNavigate);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.Navigation.SwipeNavigate", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_ctor_ = (void*)SwipeNavigate__New1_fn;
    type->fp_cctor_ = SwipeNavigate__cctor__fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))SwipeNavigate__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))SwipeNavigate__OnUnrooted_fn;
    ::STRINGS[7] = uString::Const("SwipeNavigate: failed to find suitable Navigation object");
    ::STRINGS[1] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Navigation\\0.18.8\\$.uno");
    ::TYPES[66] = ::g::Fuse::Gestures::DegreeSpan_typeof()->Array();
    ::TYPES[67] = ::g::Uno::Float2_typeof();
    ::TYPES[3] = ::g::Uno::Int_typeof();
    ::TYPES[57] = ::g::Uno::Float_typeof();
    ::TYPES[31] = ::g::Fuse::Navigation::StructuredNavigation_typeof();
    ::TYPES[29] = ::g::Fuse::Behavior_typeof();
    ::TYPES[68] = ::g::Fuse::Input::PointerEventArgs_typeof();
    ::TYPES[14] = uObject_typeof();
    ::TYPES[11] = ::g::Uno::Action_typeof();
    ::TYPES[58] = ::g::Fuse::Time_typeof();
    ::TYPES[69] = ::g::Fuse::Input::Pointer_typeof();
    ::TYPES[70] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[71] = ::g::Fuse::Input::PointerMovedHandler_typeof();
    ::TYPES[72] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    ::TYPES[16] = ::g::Fuse::Navigation::INavigationPanel_typeof();
    ::TYPES[13] = ::g::Fuse::Navigation::Navigation_typeof();
    type->SetFields(3,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _currentCoord), 0,
        ::g::Fuse::Navigation::StructuredNavigation_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _currentNavigation), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _down), 0,
        ::g::Fuse::Gestures::SwipeGestureHelper_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _horizontalGesture), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _previousCoord), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _startCoord), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _startTime), 0,
        ::g::Fuse::Gestures::SwipeGestureHelper_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _verticalGesture), 0,
        ::g::Fuse::Navigation::SwipeDirection_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _SwipeDirection), 0,
        ::g::Fuse::Navigation::SwipeEnds_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _SwipeEnds), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _VelocityThreshold), 0,
        ::g::Uno::Float_typeof(), (uintptr_t)&::g::Fuse::Navigation::SwipeNavigate::elasticDecay_, uFieldFlagsStatic,
        ::g::Uno::Float_typeof(), (uintptr_t)&::g::Fuse::Navigation::SwipeNavigate::elasticScale_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(7,
        new uFunction(".ctor", NULL, (void*)SwipeNavigate__New1_fn, 0, true, SwipeNavigate_typeof(), 0),
        new uFunction("get_SwipeDirection", NULL, (void*)SwipeNavigate__get_SwipeDirection_fn, 0, false, ::g::Fuse::Navigation::SwipeDirection_typeof(), 0),
        new uFunction("set_SwipeDirection", NULL, (void*)SwipeNavigate__set_SwipeDirection_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::SwipeDirection_typeof()),
        new uFunction("get_SwipeEnds", NULL, (void*)SwipeNavigate__get_SwipeEnds_fn, 0, false, ::g::Fuse::Navigation::SwipeEnds_typeof(), 0),
        new uFunction("set_SwipeEnds", NULL, (void*)SwipeNavigate__set_SwipeEnds_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::SwipeEnds_typeof()),
        new uFunction("get_VelocityThreshold", NULL, (void*)SwipeNavigate__get_VelocityThreshold_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_VelocityThreshold", NULL, (void*)SwipeNavigate__set_VelocityThreshold_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
    return type;
}

// public SwipeNavigate() :1791
void SwipeNavigate__ctor_1_fn(SwipeNavigate* __this)
{
    __this->ctor_1();
}

// private float2 get_Delta() :1888
void SwipeNavigate__get_Delta_fn(SwipeNavigate* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Delta();
}

// private Fuse.Navigation.SnapTo DetermineSnap() :1986
void SwipeNavigate__DetermineSnap_fn(SwipeNavigate* __this, int* __retval)
{
    *__retval = __this->DetermineSnap();
}

// private float2 get_Distance() :1903
void SwipeNavigate__get_Distance_fn(SwipeNavigate* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Distance();
}

// private double get_ElapsedTime() :1908
void SwipeNavigate__get_ElapsedTime_fn(SwipeNavigate* __this, double* __retval)
{
    *__retval = __this->ElapsedTime();
}

// private float ElasticDistance(float v) :1968
void SwipeNavigate__ElasticDistance_fn(SwipeNavigate* __this, float* v, float* __retval)
{
    *__retval = __this->ElasticDistance(*v);
}

// private Fuse.Navigation.UpdateSeekArgs GetNavigationArgs() :1911
void SwipeNavigate__GetNavigationArgs_fn(SwipeNavigate* __this, ::g::Fuse::Navigation::UpdateSeekArgs** __retval)
{
    *__retval = __this->GetNavigationArgs();
}

// private bool get_IsHorizontal() :1772
void SwipeNavigate__get_IsHorizontal_fn(SwipeNavigate* __this, bool* __retval)
{
    *__retval = __this->IsHorizontal();
}

// private Fuse.Navigation.StructuredNavigation get_Navigation() :1737
void SwipeNavigate__get_Navigation_fn(SwipeNavigate* __this, ::g::Fuse::Navigation::StructuredNavigation** __retval)
{
    *__retval = __this->Navigation();
}

// public SwipeNavigate New() :1791
void SwipeNavigate__New1_fn(SwipeNavigate** __retval)
{
    *__retval = SwipeNavigate::New1();
}

// private void OnLostCapture() :1801
void SwipeNavigate__OnLostCapture_fn(SwipeNavigate* __this)
{
    __this->OnLostCapture();
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) :1830
void SwipeNavigate__OnPointerMoved_fn(SwipeNavigate* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    __this->OnPointerMoved(sender, args);
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) :1813
void SwipeNavigate__OnPointerPressed_fn(SwipeNavigate* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    __this->OnPointerPressed(sender, args);
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) :1862
void SwipeNavigate__OnPointerReleased_fn(SwipeNavigate* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    __this->OnPointerReleased(sender, args);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1750
void SwipeNavigate__OnRooted_fn(SwipeNavigate* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), __this->ParentNode(), uDelegate::New(::TYPES[70/*Fuse.Input.PointerPressedHandler*/], (void*)SwipeNavigate__OnPointerPressed_fn, __this));
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), __this->ParentNode(), uDelegate::New(::TYPES[71/*Fuse.Input.PointerMovedHandler*/], (void*)SwipeNavigate__OnPointerMoved_fn, __this));
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), __this->ParentNode(), uDelegate::New(::TYPES[72/*Fuse.Input.PointerReleasedHandler*/], (void*)SwipeNavigate__OnPointerReleased_fn, __this));
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :1759
void SwipeNavigate__OnUnrooted_fn(SwipeNavigate* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), __this->ParentNode(), uDelegate::New(::TYPES[70/*Fuse.Input.PointerPressedHandler*/], (void*)SwipeNavigate__OnPointerPressed_fn, __this));
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), __this->ParentNode(), uDelegate::New(::TYPES[71/*Fuse.Input.PointerMovedHandler*/], (void*)SwipeNavigate__OnPointerMoved_fn, __this));
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), __this->ParentNode(), uDelegate::New(::TYPES[72/*Fuse.Input.PointerReleasedHandler*/], (void*)SwipeNavigate__OnPointerReleased_fn, __this));
    ::g::Fuse::Behavior__OnUnrooted_fn(__this, parentNode);
}

// private float2 get_Scale() :1893
void SwipeNavigate__get_Scale_fn(SwipeNavigate* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Scale();
}

// public generated Fuse.Navigation.SwipeDirection get_SwipeDirection() :1769
void SwipeNavigate__get_SwipeDirection_fn(SwipeNavigate* __this, int* __retval)
{
    *__retval = __this->SwipeDirection();
}

// public generated void set_SwipeDirection(Fuse.Navigation.SwipeDirection value) :1769
void SwipeNavigate__set_SwipeDirection_fn(SwipeNavigate* __this, int* value)
{
    __this->SwipeDirection(*value);
}

// public generated Fuse.Navigation.SwipeEnds get_SwipeEnds() :1768
void SwipeNavigate__get_SwipeEnds_fn(SwipeNavigate* __this, int* __retval)
{
    *__retval = __this->SwipeEnds();
}

// public generated void set_SwipeEnds(Fuse.Navigation.SwipeEnds value) :1768
void SwipeNavigate__set_SwipeEnds_fn(SwipeNavigate* __this, int* value)
{
    __this->SwipeEnds(*value);
}

// private float2 get_Velocity() :1898
void SwipeNavigate__get_Velocity_fn(SwipeNavigate* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Velocity();
}

// public generated float get_VelocityThreshold() :1770
void SwipeNavigate__get_VelocityThreshold_fn(SwipeNavigate* __this, float* __retval)
{
    *__retval = __this->VelocityThreshold();
}

// public generated void set_VelocityThreshold(float value) :1770
void SwipeNavigate__set_VelocityThreshold_fn(SwipeNavigate* __this, float* value)
{
    __this->VelocityThreshold(*value);
}

float SwipeNavigate::elasticDecay_;
float SwipeNavigate::elasticScale_;

// public SwipeNavigate() [instance] :1791
void SwipeNavigate::ctor_1()
{
    _horizontalGesture = ::g::Fuse::Gestures::SwipeGestureHelper::New1(10.0f, uArray::Init< ::g::Fuse::Gestures::DegreeSpan*>(::TYPES[66/*Fuse.Gestures.DegreeSpan[]*/], 2, (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(75.0f, 105.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-75.0f, -105.0f)));
    _verticalGesture = ::g::Fuse::Gestures::SwipeGestureHelper::New1(10.0f, uArray::Init< ::g::Fuse::Gestures::DegreeSpan*>(::TYPES[66/*Fuse.Gestures.DegreeSpan[]*/], 3, (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-15.0f, 15.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-165.0f, -180.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(165.0f, 180.0f)));
    _down = -1;
    ctor_();
    _startCoord = ::g::Uno::Float2__New1(0.0f);
    _currentCoord = ::g::Uno::Float2__New1(0.0f);
    _previousCoord = ::g::Uno::Float2__New1(0.0f);
    VelocityThreshold(400.0f);
}

// private float2 get_Delta() [instance] :1888
::g::Uno::Float2 SwipeNavigate::Delta()
{
    return ::g::Uno::Float2__op_Subtraction2(_currentCoord, _previousCoord);
}

// private Fuse.Navigation.SnapTo DetermineSnap() [instance] :1986
int SwipeNavigate::DetermineSnap()
{
    float diff = IsHorizontal() ? Velocity().X : Velocity().Y;

    if ((SwipeDirection() == 1) || (SwipeDirection() == 3))
        diff = -diff;

    if (diff < -VelocityThreshold())
        return 0;

    if (diff > VelocityThreshold())
        return 2;

    return 1;
}

// private float2 get_Distance() [instance] :1903
::g::Uno::Float2 SwipeNavigate::Distance()
{
    return ::g::Uno::Float2__op_Subtraction2(_currentCoord, _startCoord);
}

// private double get_ElapsedTime() [instance] :1908
double SwipeNavigate::ElapsedTime()
{
    return ::g::Fuse::Time::FrameTime() - _startTime;
}

// private float ElasticDistance(float v) [instance] :1968
float SwipeNavigate::ElasticDistance(float v)
{
    bool neg = false;

    if (v < 0.0f)
    {
        v = -v;
        neg = true;
    }

    v = (::g::Uno::Math::Pow1(SwipeNavigate::elasticDecay(), v * SwipeNavigate::elasticScale()) - 1.0f) / ::g::Uno::Math::Log1(SwipeNavigate::elasticDecay());

    if (neg)
        v = -v;

    return v;
}

// private Fuse.Navigation.UpdateSeekArgs GetNavigationArgs() [instance] :1911
::g::Fuse::Navigation::UpdateSeekArgs* SwipeNavigate::GetNavigationArgs()
{
    float delta;
    float distance;
    float scale;

    if (IsHorizontal())
    {
        delta = Delta().X;
        distance = Distance().X;
        scale = Scale().X;
    }
    else
    {
        delta = Delta().Y;
        distance = Distance().Y;
        scale = Scale().Y;
    }

    if ((SwipeDirection() == 1) || (SwipeDirection() == 3))
    {
        delta = -delta;
        distance = -distance;
    }

    ::g::Uno::Float2 limits = uPtr(_currentNavigation)->SeekRange();
    float relDistance = distance / scale;

    switch (SwipeEnds())
    {
        case 0:
        {
            float limitDistance = ::g::Uno::Math::Clamp1(relDistance, limits.Item(0), limits.Item(1));
            distance = limitDistance * scale;
            break;
        }
        case 1:
            break;
        case 2:
        {
            float limit = relDistance;

            if (relDistance < limits.Item(0))
                limit = ElasticDistance(relDistance - limits.Item(0)) + limits.Item(0);
            else if (relDistance > limits.Item(1))
                limit = ElasticDistance(relDistance - limits.Item(1)) + limits.Item(1);

            distance = limit * scale;
            break;
        }
    }

    return ::g::Fuse::Navigation::UpdateSeekArgs::New1(delta, distance, scale, ElapsedTime());
}

// private bool get_IsHorizontal() [instance] :1772
bool SwipeNavigate::IsHorizontal()
{
    return (SwipeDirection() == 1) || (SwipeDirection() == 0);
}

// private Fuse.Navigation.StructuredNavigation get_Navigation() [instance] :1737
::g::Fuse::Navigation::StructuredNavigation* SwipeNavigate::Navigation()
{
    if (ParentNode() != NULL)
    {
        ::g::Fuse::Navigation::StructuredNavigation* navigation = uAs< ::g::Fuse::Navigation::StructuredNavigation*>(::g::Fuse::Navigation::Navigation::TryFind(ParentNode()), ::TYPES[31/*Fuse.Navigation.StructuredNavigation*/]);

        if (navigation != NULL)
            return navigation;
    }

    return NULL;
}

// private void OnLostCapture() [instance] :1801
void SwipeNavigate::OnLostCapture()
{
    _down = -1;

    if (_currentNavigation != NULL)
    {
        if (uPtr(_currentNavigation)->IsRooted())
            uPtr(_currentNavigation)->EndSeek(::g::Fuse::Navigation::EndSeekArgs::New1(1));

        _currentNavigation = NULL;
    }
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) [instance] :1830
void SwipeNavigate::OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    if (_down != uPtr(args)->PointIndex())
        return;

    if (_currentNavigation == NULL)
        return;

    _previousCoord = _currentCoord;
    _currentCoord = uPtr(args)->WindowPoint();

    if (args->IsHardCapturedTo(this))
        uPtr(_currentNavigation)->Seek(GetNavigationArgs());
    else
    {
        ::g::Uno::Float2 diff = ::g::Uno::Float2__op_Subtraction2(_currentCoord, _startCoord);
        bool withinBounds = IsHorizontal() ? uPtr(_horizontalGesture)->IsWithinBounds(diff) : uPtr(_verticalGesture)->IsWithinBounds(diff);

        if (withinBounds)
        {
            if (uPtr(args)->TryHardCapture(this, uDelegate::New(::TYPES[11/*Uno.Action*/], (void*)SwipeNavigate__OnLostCapture_fn, this), NULL))
                uPtr(_currentNavigation)->BeginSeek();
            else
                OnLostCapture();
        }
    }
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) [instance] :1813
void SwipeNavigate::OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    _currentNavigation = Navigation();

    if (_currentNavigation == NULL)
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[7/*"SwipeNaviga...*/], 1, ::STRINGS[1/*"C:\\Program...*/], 1818);
        return;
    }

    if (uPtr(args)->TrySoftCapture(this, uDelegate::New(::TYPES[11/*Uno.Action*/], (void*)SwipeNavigate__OnLostCapture_fn, this), NULL))
    {
        _down = uPtr(args)->PointIndex();
        _startCoord = (_currentCoord = (_previousCoord = args->WindowPoint()));
        _startTime = ::g::Fuse::Time::FrameTime();
    }
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) [instance] :1862
void SwipeNavigate::OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    _previousCoord = _currentCoord;
    _currentCoord = uPtr(args)->WindowPoint();
    _down = -1;

    if (_currentNavigation == NULL)
        return;

    if (args->IsHardCapturedTo(this))
    {
        uPtr(_currentNavigation)->EndSeek(::g::Fuse::Navigation::EndSeekArgs::New1(DetermineSnap()));
        uPtr(args)->ReleaseHardCapture(this);
    }
    else
    {
        if (uPtr(args)->IsSoftCapturedTo(this))
            uPtr(args)->ReleaseSoftCapture(this);
    }

    _currentNavigation = NULL;
}

// private float2 get_Scale() [instance] :1893
::g::Uno::Float2 SwipeNavigate::Scale()
{
    return ::g::Fuse::Navigation::INavigationPanel::ActualSize(uInterface(uPtr(uPtr(_currentNavigation)->Owner()), ::TYPES[16/*Fuse.Navigation.INavigationPanel*/]));
}

// public generated Fuse.Navigation.SwipeDirection get_SwipeDirection() [instance] :1769
int SwipeNavigate::SwipeDirection()
{
    return _SwipeDirection;
}

// public generated void set_SwipeDirection(Fuse.Navigation.SwipeDirection value) [instance] :1769
void SwipeNavigate::SwipeDirection(int value)
{
    _SwipeDirection = value;
}

// public generated Fuse.Navigation.SwipeEnds get_SwipeEnds() [instance] :1768
int SwipeNavigate::SwipeEnds()
{
    return _SwipeEnds;
}

// public generated void set_SwipeEnds(Fuse.Navigation.SwipeEnds value) [instance] :1768
void SwipeNavigate::SwipeEnds(int value)
{
    _SwipeEnds = value;
}

// private float2 get_Velocity() [instance] :1898
::g::Uno::Float2 SwipeNavigate::Velocity()
{
    return ::g::Uno::Float2__op_Division1(Distance(), (float)ElapsedTime());
}

// public generated float get_VelocityThreshold() [instance] :1770
float SwipeNavigate::VelocityThreshold()
{
    return _VelocityThreshold;
}

// public generated void set_VelocityThreshold(float value) [instance] :1770
void SwipeNavigate::VelocityThreshold(float value)
{
    _VelocityThreshold = value;
}

// public SwipeNavigate New() [static] :1791
SwipeNavigate* SwipeNavigate::New1()
{
    SwipeNavigate* obj1 = (SwipeNavigate*)uNew(SwipeNavigate_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(1667)
// --------------------------------------------------------------

// public sealed class UpdateSeekArgs :1667
// {
uType* UpdateSeekArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(UpdateSeekArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.UpdateSeekArgs", options);
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::UpdateSeekArgs, _scale), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Navigation::UpdateSeekArgs, _time), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::UpdateSeekArgs, _Delta), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::UpdateSeekArgs, _Distance), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_Delta", NULL, (void*)UpdateSeekArgs__get_Delta_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("get_Distance", NULL, (void*)UpdateSeekArgs__get_Distance_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)UpdateSeekArgs__New1_fn, 0, true, UpdateSeekArgs_typeof(), 4, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("get_RelativeDelta", NULL, (void*)UpdateSeekArgs__get_RelativeDelta_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("get_RelativeDistance", NULL, (void*)UpdateSeekArgs__get_RelativeDistance_fn, 0, false, ::g::Uno::Float_typeof(), 0));
    return type;
}

// public UpdateSeekArgs(float delta, float distance, float scale, double time) :1685
void UpdateSeekArgs__ctor__fn(UpdateSeekArgs* __this, float* delta, float* distance, float* scale, double* time)
{
    __this->ctor_(*delta, *distance, *scale, *time);
}

// public generated float get_Delta() :1669
void UpdateSeekArgs__get_Delta_fn(UpdateSeekArgs* __this, float* __retval)
{
    *__retval = __this->Delta();
}

// private generated void set_Delta(float value) :1669
void UpdateSeekArgs__set_Delta_fn(UpdateSeekArgs* __this, float* value)
{
    __this->Delta(*value);
}

// public generated float get_Distance() :1670
void UpdateSeekArgs__get_Distance_fn(UpdateSeekArgs* __this, float* __retval)
{
    *__retval = __this->Distance();
}

// private generated void set_Distance(float value) :1670
void UpdateSeekArgs__set_Distance_fn(UpdateSeekArgs* __this, float* value)
{
    __this->Distance(*value);
}

// public UpdateSeekArgs New(float delta, float distance, float scale, double time) :1685
void UpdateSeekArgs__New1_fn(float* delta, float* distance, float* scale, double* time, UpdateSeekArgs** __retval)
{
    *__retval = UpdateSeekArgs::New1(*delta, *distance, *scale, *time);
}

// public float get_RelativeDelta() :1674
void UpdateSeekArgs__get_RelativeDelta_fn(UpdateSeekArgs* __this, float* __retval)
{
    *__retval = __this->RelativeDelta();
}

// public float get_RelativeDistance() :1679
void UpdateSeekArgs__get_RelativeDistance_fn(UpdateSeekArgs* __this, float* __retval)
{
    *__retval = __this->RelativeDistance();
}

// public UpdateSeekArgs(float delta, float distance, float scale, double time) [instance] :1685
void UpdateSeekArgs::ctor_(float delta, float distance, float scale, double time)
{
    Delta(delta);
    Distance(distance);
    _scale = scale;
    _time = time;
}

// public generated float get_Delta() [instance] :1669
float UpdateSeekArgs::Delta()
{
    return _Delta;
}

// private generated void set_Delta(float value) [instance] :1669
void UpdateSeekArgs::Delta(float value)
{
    _Delta = value;
}

// public generated float get_Distance() [instance] :1670
float UpdateSeekArgs::Distance()
{
    return _Distance;
}

// private generated void set_Distance(float value) [instance] :1670
void UpdateSeekArgs::Distance(float value)
{
    _Distance = value;
}

// public float get_RelativeDelta() [instance] :1674
float UpdateSeekArgs::RelativeDelta()
{
    return Delta() / _scale;
}

// public float get_RelativeDistance() [instance] :1679
float UpdateSeekArgs::RelativeDistance()
{
    return Distance() / _scale;
}

// public UpdateSeekArgs New(float delta, float distance, float scale, double time) [static] :1685
UpdateSeekArgs* UpdateSeekArgs::New1(float delta, float distance, float scale, double time)
{
    UpdateSeekArgs* obj1 = (UpdateSeekArgs*)uNew(UpdateSeekArgs_typeof());
    obj1->ctor_(delta, distance, scale, time);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(2256)
// --------------------------------------------------------------

// public sealed class WhileActive :2256
// {
::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileActive_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::WhileNavigationTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 19;
    options.ObjectSize = sizeof(WhileActive);
    options.TypeSize = sizeof(::g::Fuse::Navigation::WhileNavigationTrigger_type);
    type = (::g::Fuse::Navigation::WhileNavigationTrigger_type*)uClassType::New("Fuse.Navigation.WhileActive", options);
    type->SetBase(::g::Fuse::Navigation::WhileNavigationTrigger_typeof());
    type->fp_ctor_ = (void*)WhileActive__New1_fn;
    type->fp_ForceUpdate = (void(*)(::g::Fuse::Navigation::WhileNavigationTrigger*))WhileActive__ForceUpdate_fn;
    type->fp_OnNavigationStateChanged = (void(*)(::g::Fuse::Navigation::WhileNavigationTrigger*, uObject*, ::g::Fuse::Navigation::NavigationArgs*))WhileActive__OnNavigationStateChanged_fn;
    ::TYPES[73] = ::g::Fuse::Navigation::WhileNavigationTrigger_typeof();
    ::TYPES[2] = ::g::Fuse::Navigation::NavigationArgs_typeof();
    type->SetFields(19);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileActive__New1_fn, 0, true, WhileActive_typeof(), 0));
    return type;
}

// public generated WhileActive() :2256
void WhileActive__ctor_4_fn(WhileActive* __this)
{
    __this->ctor_4();
}

// protected override sealed void ForceUpdate() :2258
void WhileActive__ForceUpdate_fn(WhileActive* __this)
{
    __this->GoProgress(__this->InvertProgress(::g::Fuse::Navigation::Navigation::GetProgress(__this->PageContext())));
}

// private double InvertProgress(double p) :2263
void WhileActive__InvertProgress_fn(WhileActive* __this, double* p, double* __retval)
{
    *__retval = __this->InvertProgress(*p);
}

// public generated WhileActive New() :2256
void WhileActive__New1_fn(WhileActive** __retval)
{
    *__retval = WhileActive::New1();
}

// internal override sealed void OnNavigationStateChanged(object sender, Fuse.Navigation.NavigationArgs state) :2268
void WhileActive__OnNavigationStateChanged_fn(WhileActive* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state)
{
    __this->GoProgress(__this->InvertProgress(uPtr(state)->Progress()));
}

// public generated WhileActive() [instance] :2256
void WhileActive::ctor_4()
{
    ctor_3();
}

// private double InvertProgress(double p) [instance] :2263
double WhileActive::InvertProgress(double p)
{
    return 1.0 - ::g::Uno::Math::Min(1.0, ::g::Uno::Math::Abs(p));
}

// public generated WhileActive New() [static] :2256
WhileActive* WhileActive::New1()
{
    WhileActive* obj1 = (WhileActive*)uNew(WhileActive_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(2143)
// --------------------------------------------------------------

// public sealed class WhileCanGoBack :2143
// {
::g::Fuse::Navigation::WhileHistoryTrigger_type* WhileCanGoBack_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::WhileHistoryTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(WhileCanGoBack);
    options.TypeSize = sizeof(::g::Fuse::Navigation::WhileHistoryTrigger_type);
    type = (::g::Fuse::Navigation::WhileHistoryTrigger_type*)uClassType::New("Fuse.Navigation.WhileCanGoBack", options);
    type->SetBase(::g::Fuse::Navigation::WhileHistoryTrigger_typeof());
    type->fp_ctor_ = (void*)WhileCanGoBack__New1_fn;
    type->fp_get_IsOn = (void(*)(::g::Fuse::Navigation::WhileHistoryTrigger*, bool*))WhileCanGoBack__get_IsOn_fn;
    ::TYPES[4] = ::g::Fuse::Navigation::IBaseNavigation_typeof();
    ::TYPES[74] = ::g::Fuse::Navigation::WhileHistoryTrigger_typeof();
    type->SetFields(17);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileCanGoBack__New1_fn, 0, true, WhileCanGoBack_typeof(), 0));
    return type;
}

// public generated WhileCanGoBack() :2143
void WhileCanGoBack__ctor_4_fn(WhileCanGoBack* __this)
{
    __this->ctor_4();
}

// protected override sealed bool get_IsOn() :2145
void WhileCanGoBack__get_IsOn_fn(WhileCanGoBack* __this, bool* __retval)
{
    return *__retval = ::g::Fuse::Navigation::IBaseNavigation::CanGoBack(uInterface(uPtr(__this->NavigationContext()), ::TYPES[4/*Fuse.Navigation.IBaseNavigation*/])), void();
}

// public generated WhileCanGoBack New() :2143
void WhileCanGoBack__New1_fn(WhileCanGoBack** __retval)
{
    *__retval = WhileCanGoBack::New1();
}

// public generated WhileCanGoBack() [instance] :2143
void WhileCanGoBack::ctor_4()
{
    ctor_3();
}

// public generated WhileCanGoBack New() [static] :2143
WhileCanGoBack* WhileCanGoBack::New1()
{
    WhileCanGoBack* obj1 = (WhileCanGoBack*)uNew(WhileCanGoBack_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(2148)
// --------------------------------------------------------------

// public sealed class WhileCanGoForward :2148
// {
::g::Fuse::Navigation::WhileHistoryTrigger_type* WhileCanGoForward_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::WhileHistoryTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(WhileCanGoForward);
    options.TypeSize = sizeof(::g::Fuse::Navigation::WhileHistoryTrigger_type);
    type = (::g::Fuse::Navigation::WhileHistoryTrigger_type*)uClassType::New("Fuse.Navigation.WhileCanGoForward", options);
    type->SetBase(::g::Fuse::Navigation::WhileHistoryTrigger_typeof());
    type->fp_ctor_ = (void*)WhileCanGoForward__New1_fn;
    type->fp_get_IsOn = (void(*)(::g::Fuse::Navigation::WhileHistoryTrigger*, bool*))WhileCanGoForward__get_IsOn_fn;
    ::TYPES[4] = ::g::Fuse::Navigation::IBaseNavigation_typeof();
    ::TYPES[74] = ::g::Fuse::Navigation::WhileHistoryTrigger_typeof();
    type->SetFields(17);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileCanGoForward__New1_fn, 0, true, WhileCanGoForward_typeof(), 0));
    return type;
}

// public generated WhileCanGoForward() :2148
void WhileCanGoForward__ctor_4_fn(WhileCanGoForward* __this)
{
    __this->ctor_4();
}

// protected override sealed bool get_IsOn() :2150
void WhileCanGoForward__get_IsOn_fn(WhileCanGoForward* __this, bool* __retval)
{
    return *__retval = ::g::Fuse::Navigation::IBaseNavigation::CanGoForward(uInterface(uPtr(__this->NavigationContext()), ::TYPES[4/*Fuse.Navigation.IBaseNavigation*/])), void();
}

// public generated WhileCanGoForward New() :2148
void WhileCanGoForward__New1_fn(WhileCanGoForward** __retval)
{
    *__retval = WhileCanGoForward::New1();
}

// public generated WhileCanGoForward() [instance] :2148
void WhileCanGoForward::ctor_4()
{
    ctor_3();
}

// public generated WhileCanGoForward New() [static] :2148
WhileCanGoForward* WhileCanGoForward::New1()
{
    WhileCanGoForward* obj1 = (WhileCanGoForward*)uNew(WhileCanGoForward_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(2104)
// --------------------------------------------------------------

// public abstract class WhileHistoryTrigger :2104
// {
WhileHistoryTrigger_type* WhileHistoryTrigger_typeof()
{
    static uSStrong<WhileHistoryTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(WhileHistoryTrigger);
    options.TypeSize = sizeof(WhileHistoryTrigger_type);
    type = (WhileHistoryTrigger_type*)uClassType::New("Fuse.Navigation.WhileHistoryTrigger", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileHistoryTrigger__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileHistoryTrigger__OnUnrooted_fn;
    ::STRINGS[8] = uString::Const("WhileHistoryTrigger requires a Navigation context");
    ::STRINGS[1] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Navigation\\0.18.8\\$.uno");
    ::STRINGS[9] = uString::Const("OnRooted");
    ::TYPES[29] = ::g::Fuse::Behavior_typeof();
    ::TYPES[14] = uObject_typeof();
    ::TYPES[34] = ::g::Fuse::Navigation::INavigation_typeof();
    ::TYPES[42] = ::g::Fuse::Navigation::HistoryChangedHandler_typeof();
    type->SetFields(16,
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger, _context), 0);
    return type;
}

// protected generated WhileHistoryTrigger() :2104
void WhileHistoryTrigger__ctor_3_fn(WhileHistoryTrigger* __this)
{
    __this->ctor_3();
}

// protected Fuse.Navigation.INavigation get_NavigationContext() :2107
void WhileHistoryTrigger__get_NavigationContext_fn(WhileHistoryTrigger* __this, uObject** __retval)
{
    *__retval = __this->NavigationContext();
}

// protected void set_NavigationContext(Fuse.Navigation.INavigation value) :2107
void WhileHistoryTrigger__set_NavigationContext_fn(WhileHistoryTrigger* __this, uObject* value)
{
    __this->NavigationContext(value);
}

// private void OnHistoryChanged(object sender) :2135
void WhileHistoryTrigger__OnHistoryChanged_fn(WhileHistoryTrigger* __this, uObject* sender)
{
    __this->OnHistoryChanged(sender);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :2109
void WhileHistoryTrigger__OnRooted_fn(WhileHistoryTrigger* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);

    if (__this->NavigationContext() == NULL)
        __this->NavigationContext(::g::Fuse::Navigation::Navigation::TryFind(__this->ParentNode()));

    if (__this->NavigationContext() == NULL)
    {
        ::g::Fuse::Diagnostics::Error(::STRINGS[8/*"WhileHistor...*/], __this, ::STRINGS[1/*"C:\\Program...*/], 2118, ::STRINGS[9/*"OnRooted"*/]);
        return;
    }

    __this->BypassSetActive(__this->IsOn());
    ::g::Fuse::Navigation::INavigation::add_HistoryChanged(uInterface(uPtr(__this->NavigationContext()), ::TYPES[34/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[42/*Fuse.Navigation.HistoryChangedHandler*/], (void*)WhileHistoryTrigger__OnHistoryChanged_fn, __this));
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :2125
void WhileHistoryTrigger__OnUnrooted_fn(WhileHistoryTrigger* __this, ::g::Fuse::Node* parentNode)
{
    if (__this->NavigationContext() != NULL)
    {
        ::g::Fuse::Navigation::INavigation::remove_HistoryChanged(uInterface(uPtr(__this->NavigationContext()), ::TYPES[34/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[42/*Fuse.Navigation.HistoryChangedHandler*/], (void*)WhileHistoryTrigger__OnHistoryChanged_fn, __this));
        __this->NavigationContext(NULL);
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// protected generated WhileHistoryTrigger() [instance] :2104
void WhileHistoryTrigger::ctor_3()
{
    ctor_2();
}

// protected Fuse.Navigation.INavigation get_NavigationContext() [instance] :2107
uObject* WhileHistoryTrigger::NavigationContext()
{
    return _context;
}

// protected void set_NavigationContext(Fuse.Navigation.INavigation value) [instance] :2107
void WhileHistoryTrigger::NavigationContext(uObject* value)
{
    _context = value;
}

// private void OnHistoryChanged(object sender) [instance] :2135
void WhileHistoryTrigger::OnHistoryChanged(uObject* sender)
{
    SetActive(IsOn());
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(2274)
// --------------------------------------------------------------

// public sealed class WhileInactive :2274
// {
::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileInactive_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::WhileNavigationTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 19;
    options.ObjectSize = sizeof(WhileInactive);
    options.TypeSize = sizeof(::g::Fuse::Navigation::WhileNavigationTrigger_type);
    type = (::g::Fuse::Navigation::WhileNavigationTrigger_type*)uClassType::New("Fuse.Navigation.WhileInactive", options);
    type->SetBase(::g::Fuse::Navigation::WhileNavigationTrigger_typeof());
    type->fp_ctor_ = (void*)WhileInactive__New1_fn;
    type->fp_ForceUpdate = (void(*)(::g::Fuse::Navigation::WhileNavigationTrigger*))WhileInactive__ForceUpdate_fn;
    type->fp_OnNavigationStateChanged = (void(*)(::g::Fuse::Navigation::WhileNavigationTrigger*, uObject*, ::g::Fuse::Navigation::NavigationArgs*))WhileInactive__OnNavigationStateChanged_fn;
    ::TYPES[73] = ::g::Fuse::Navigation::WhileNavigationTrigger_typeof();
    ::TYPES[2] = ::g::Fuse::Navigation::NavigationArgs_typeof();
    type->SetFields(19);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileInactive__New1_fn, 0, true, WhileInactive_typeof(), 0));
    return type;
}

// public generated WhileInactive() :2274
void WhileInactive__ctor_4_fn(WhileInactive* __this)
{
    __this->ctor_4();
}

// protected override sealed void ForceUpdate() :2276
void WhileInactive__ForceUpdate_fn(WhileInactive* __this)
{
    __this->GoProgress(::g::Uno::Math::Abs(::g::Fuse::Navigation::Navigation::GetProgress(__this->PageContext())));
}

// public generated WhileInactive New() :2274
void WhileInactive__New1_fn(WhileInactive** __retval)
{
    *__retval = WhileInactive::New1();
}

// internal override sealed void OnNavigationStateChanged(object sender, Fuse.Navigation.NavigationArgs state) :2281
void WhileInactive__OnNavigationStateChanged_fn(WhileInactive* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state)
{
    __this->GoProgress(::g::Uno::Math::Abs(uPtr(state)->Progress()));
}

// public generated WhileInactive() [instance] :2274
void WhileInactive::ctor_4()
{
    ctor_3();
}

// public generated WhileInactive New() [static] :2274
WhileInactive* WhileInactive::New1()
{
    WhileInactive* obj1 = (WhileInactive*)uNew(WhileInactive_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(2300)
// --------------------------------------------------------------

// public sealed class WhileInEnterState :2300
// {
::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileInEnterState_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::WhileNavigationTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 19;
    options.ObjectSize = sizeof(WhileInEnterState);
    options.TypeSize = sizeof(::g::Fuse::Navigation::WhileNavigationTrigger_type);
    type = (::g::Fuse::Navigation::WhileNavigationTrigger_type*)uClassType::New("Fuse.Navigation.WhileInEnterState", options);
    type->SetBase(::g::Fuse::Navigation::WhileNavigationTrigger_typeof());
    type->fp_ctor_ = (void*)WhileInEnterState__New1_fn;
    type->fp_ForceUpdate = (void(*)(::g::Fuse::Navigation::WhileNavigationTrigger*))WhileInEnterState__ForceUpdate_fn;
    type->fp_OnNavigationStateChanged = (void(*)(::g::Fuse::Navigation::WhileNavigationTrigger*, uObject*, ::g::Fuse::Navigation::NavigationArgs*))WhileInEnterState__OnNavigationStateChanged_fn;
    ::TYPES[73] = ::g::Fuse::Navigation::WhileNavigationTrigger_typeof();
    ::TYPES[2] = ::g::Fuse::Navigation::NavigationArgs_typeof();
    type->SetFields(19);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileInEnterState__New1_fn, 0, true, WhileInEnterState_typeof(), 0));
    return type;
}

// public generated WhileInEnterState() :2300
void WhileInEnterState__ctor_4_fn(WhileInEnterState* __this)
{
    __this->ctor_4();
}

// protected override sealed void ForceUpdate() :2302
void WhileInEnterState__ForceUpdate_fn(WhileInEnterState* __this)
{
    __this->GoProgress(::g::Fuse::Navigation::Navigation::GetProgress(__this->PageContext()));
}

// public generated WhileInEnterState New() :2300
void WhileInEnterState__New1_fn(WhileInEnterState** __retval)
{
    *__retval = WhileInEnterState::New1();
}

// internal override sealed void OnNavigationStateChanged(object sender, Fuse.Navigation.NavigationArgs state) :2307
void WhileInEnterState__OnNavigationStateChanged_fn(WhileInEnterState* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state)
{
    __this->GoProgress(uPtr(state)->Progress());
}

// public generated WhileInEnterState() [instance] :2300
void WhileInEnterState::ctor_4()
{
    ctor_3();
}

// public generated WhileInEnterState New() [static] :2300
WhileInEnterState* WhileInEnterState::New1()
{
    WhileInEnterState* obj1 = (WhileInEnterState*)uNew(WhileInEnterState_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(2287)
// --------------------------------------------------------------

// public sealed class WhileInExitState :2287
// {
::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileInExitState_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::WhileNavigationTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 19;
    options.ObjectSize = sizeof(WhileInExitState);
    options.TypeSize = sizeof(::g::Fuse::Navigation::WhileNavigationTrigger_type);
    type = (::g::Fuse::Navigation::WhileNavigationTrigger_type*)uClassType::New("Fuse.Navigation.WhileInExitState", options);
    type->SetBase(::g::Fuse::Navigation::WhileNavigationTrigger_typeof());
    type->fp_ctor_ = (void*)WhileInExitState__New1_fn;
    type->fp_ForceUpdate = (void(*)(::g::Fuse::Navigation::WhileNavigationTrigger*))WhileInExitState__ForceUpdate_fn;
    type->fp_OnNavigationStateChanged = (void(*)(::g::Fuse::Navigation::WhileNavigationTrigger*, uObject*, ::g::Fuse::Navigation::NavigationArgs*))WhileInExitState__OnNavigationStateChanged_fn;
    ::TYPES[1] = ::g::Uno::Double_typeof();
    ::TYPES[73] = ::g::Fuse::Navigation::WhileNavigationTrigger_typeof();
    ::TYPES[2] = ::g::Fuse::Navigation::NavigationArgs_typeof();
    type->SetFields(19);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileInExitState__New1_fn, 0, true, WhileInExitState_typeof(), 0));
    return type;
}

// public generated WhileInExitState() :2287
void WhileInExitState__ctor_4_fn(WhileInExitState* __this)
{
    __this->ctor_4();
}

// protected override sealed void ForceUpdate() :2289
void WhileInExitState__ForceUpdate_fn(WhileInExitState* __this)
{
    __this->GoProgress(-::g::Fuse::Navigation::Navigation::GetProgress(__this->PageContext()));
}

// public generated WhileInExitState New() :2287
void WhileInExitState__New1_fn(WhileInExitState** __retval)
{
    *__retval = WhileInExitState::New1();
}

// internal override sealed void OnNavigationStateChanged(object sender, Fuse.Navigation.NavigationArgs state) :2294
void WhileInExitState__OnNavigationStateChanged_fn(WhileInExitState* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state)
{
    __this->GoProgress(-uPtr(state)->Progress());
}

// public generated WhileInExitState() [instance] :2287
void WhileInExitState::ctor_4()
{
    ctor_3();
}

// public generated WhileInExitState New() [static] :2287
WhileInExitState* WhileInExitState::New1()
{
    WhileInExitState* obj1 = (WhileInExitState*)uNew(WhileInExitState_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(2162)
// --------------------------------------------------------------

// public sealed class WhileNavigating :2162
// {
::g::Fuse::Triggers::Trigger_type* WhileNavigating_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.ObjectSize = sizeof(WhileNavigating);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Navigation.WhileNavigating", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)WhileNavigating__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileNavigating__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileNavigating__OnUnrooted_fn;
    ::TYPES[29] = ::g::Fuse::Behavior_typeof();
    ::TYPES[37] = ::g::Fuse::Navigation::NavigationStateHandler_typeof();
    ::TYPES[3] = ::g::Uno::Int_typeof();
    ::TYPES[38] = ::g::Fuse::Navigation::NavigationStateArgs_typeof();
    type->SetFields(14);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileNavigating__New1_fn, 0, true, WhileNavigating_typeof(), 0));
    return type;
}

// public generated WhileNavigating() :2162
void WhileNavigating__ctor_2_fn(WhileNavigating* __this)
{
    __this->ctor_2();
}

// public generated WhileNavigating New() :2162
void WhileNavigating__New1_fn(WhileNavigating** __retval)
{
    *__retval = WhileNavigating::New1();
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :2164
void WhileNavigating__OnRooted_fn(WhileNavigating* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    ::g::Fuse::Navigation::Navigation::AddStateHandler(__this->ParentNode(), uDelegate::New(::TYPES[37/*Fuse.Navigation.NavigationStateHandler*/], (void*)WhileNavigating__OnStateChange_fn, __this));
}

// private void OnStateChange(object s, Fuse.Navigation.NavigationStateArgs args) :2176
void WhileNavigating__OnStateChange_fn(WhileNavigating* __this, uObject* s, ::g::Fuse::Navigation::NavigationStateArgs* args)
{
    __this->OnStateChange(s, args);
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :2170
void WhileNavigating__OnUnrooted_fn(WhileNavigating* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Navigation::Navigation::RemoveStateHandler(__this->ParentNode(), uDelegate::New(::TYPES[37/*Fuse.Navigation.NavigationStateHandler*/], (void*)WhileNavigating__OnStateChange_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public generated WhileNavigating() [instance] :2162
void WhileNavigating::ctor_2()
{
    ctor_1();
}

// private void OnStateChange(object s, Fuse.Navigation.NavigationStateArgs args) [instance] :2176
void WhileNavigating::OnStateChange(uObject* s, ::g::Fuse::Navigation::NavigationStateArgs* args)
{
    if (uPtr(args)->State() != 0)
        Activate(NULL);
    else
        Deactivate();
}

// public generated WhileNavigating New() [static] :2162
WhileNavigating* WhileNavigating::New1()
{
    WhileNavigating* obj1 = (WhileNavigating*)uNew(WhileNavigating_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Navigation\0.18.8\$.uno(2197)
// --------------------------------------------------------------

// public abstract class WhileNavigationTrigger :2197
// {
WhileNavigationTrigger_type* WhileNavigationTrigger_typeof()
{
    static uSStrong<WhileNavigationTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 19;
    options.ObjectSize = sizeof(WhileNavigationTrigger);
    options.TypeSize = sizeof(WhileNavigationTrigger_type);
    type = (WhileNavigationTrigger_type*)uClassType::New("Fuse.Navigation.WhileNavigationTrigger", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileNavigationTrigger__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileNavigationTrigger__OnUnrooted_fn;
    ::TYPES[1] = ::g::Uno::Double_typeof();
    ::TYPES[36] = ::g::Fuse::Navigation::NavigationHandler_typeof();
    ::TYPES[29] = ::g::Fuse::Behavior_typeof();
    type->SetFields(16,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger, _hasLimit), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger, _limit), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger, _threshold), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_Limit", NULL, (void*)WhileNavigationTrigger__get_Limit_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Limit", NULL, (void*)WhileNavigationTrigger__set_Limit_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Threshold", NULL, (void*)WhileNavigationTrigger__get_Threshold_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Threshold", NULL, (void*)WhileNavigationTrigger__set_Threshold_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
    return type;
}

// internal WhileNavigationTrigger() :2199
void WhileNavigationTrigger__ctor_3_fn(WhileNavigationTrigger* __this)
{
    __this->ctor_3();
}

// internal void GoProgress(double progress) :2247
void WhileNavigationTrigger__GoProgress_fn(WhileNavigationTrigger* __this, double* progress)
{
    __this->GoProgress(*progress);
}

// public float get_Limit() :2212
void WhileNavigationTrigger__get_Limit_fn(WhileNavigationTrigger* __this, float* __retval)
{
    *__retval = __this->Limit();
}

// public void set_Limit(float value) :2213
void WhileNavigationTrigger__set_Limit_fn(WhileNavigationTrigger* __this, float* value)
{
    __this->Limit(*value);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :2231
void WhileNavigationTrigger__OnRooted_fn(WhileNavigationTrigger* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);
    ::g::Fuse::Navigation::Navigation::AddHandler(__this->PageContext(), uDelegate::New(::TYPES[36/*Fuse.Navigation.NavigationHandler*/], __this, offsetof(WhileNavigationTrigger_type, fp_OnNavigationStateChanged)));
    __this->ForceUpdate();
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :2238
void WhileNavigationTrigger__OnUnrooted_fn(WhileNavigationTrigger* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Navigation::Navigation::RemoveHandler(__this->PageContext(), uDelegate::New(::TYPES[36/*Fuse.Navigation.NavigationHandler*/], __this, offsetof(WhileNavigationTrigger_type, fp_OnNavigationStateChanged)));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// protected Fuse.Node get_PageContext() :2222
void WhileNavigationTrigger__get_PageContext_fn(WhileNavigationTrigger* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->PageContext();
}

// public float get_Threshold() :2204
void WhileNavigationTrigger__get_Threshold_fn(WhileNavigationTrigger* __this, float* __retval)
{
    *__retval = __this->Threshold();
}

// public void set_Threshold(float value) :2205
void WhileNavigationTrigger__set_Threshold_fn(WhileNavigationTrigger* __this, float* value)
{
    __this->Threshold(*value);
}

// internal WhileNavigationTrigger() [instance] :2199
void WhileNavigationTrigger::ctor_3()
{
    _threshold = 1.0f;
    ctor_2();
}

// internal void GoProgress(double progress) [instance] :2247
void WhileNavigationTrigger::GoProgress(double progress)
{
    bool set = progress >= (double)Threshold();

    if (_hasLimit)
        set = set && (progress <= (double)Limit());

    SetActive(set);
}

// public float get_Limit() [instance] :2212
float WhileNavigationTrigger::Limit()
{
    return _limit;
}

// public void set_Limit(float value) [instance] :2213
void WhileNavigationTrigger::Limit(float value)
{
    _limit = value;
    _hasLimit = true;
}

// protected Fuse.Node get_PageContext() [instance] :2222
::g::Fuse::Node* WhileNavigationTrigger::PageContext()
{
    ::g::Fuse::Node* n = ::g::Fuse::Navigation::Navigation::TryFindPage(ParentNode());

    if (n == NULL)
        return ParentNode();

    return n;
}

// public float get_Threshold() [instance] :2204
float WhileNavigationTrigger::Threshold()
{
    return _threshold;
}

// public void set_Threshold(float value) [instance] :2205
void WhileNavigationTrigger::Threshold(float value)
{
    _threshold = value;
}
// }

}}} // ::g::Fuse::Navigation
