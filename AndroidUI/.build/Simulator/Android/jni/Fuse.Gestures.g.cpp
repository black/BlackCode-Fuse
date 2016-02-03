// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Experimental.Physics.BasicBoundedRegion2D.h>
#include <Experimental.Physics.BoundedRegion2D.h>
#include <Experimental.Physics.DestinationSimulation-1.h>
#include <Experimental.Physics.ElasticForce-1.h>
#include <Experimental.Physics.Friction-1.h>
#include <Experimental.Physics.MotionSimulation-1.h>
#include <Experimental.Physics.PointerVelocity-1.h>
#include <Experimental.Physics.Simulation.h>
#include <Fuse.Behavior.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Entities.Transform3D.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedArgs.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Gestures.Clicker.h>
#include <Fuse.Gestures.ClickerEventHandler.h>
#include <Fuse.Gestures.ClickerTrigger.h>
#include <Fuse.Gestures.DegreeSpan.h>
#include <Fuse.Gestures.DoubleClicked.h>
#include <Fuse.Gestures.DoubleTapped.h>
#include <Fuse.Gestures.DoubleTappedArgs.h>
#include <Fuse.Gestures.DoubleTappedHandler.h>
#include <Fuse.Gestures.Edge.h>
#include <Fuse.Gestures.EdgeSwipeAnimation.h>
#include <Fuse.Gestures.Internal.EdgeSwiper.h>
#include <Fuse.Gestures.Internal.Swiper.h>
#include <Fuse.Gestures.Internal.SwipeRegion.h>
#include <Fuse.Gestures.Internal.SwipeRegionArea.h>
#include <Fuse.Gestures.KeepFocusInView.h>
#include <Fuse.Gestures.KeepInView.h>
#include <Fuse.Gestures.KeepInViewCommon.h>
#include <Fuse.Gestures.LongPressed.h>
#include <Fuse.Gestures.LongPressedArgs.h>
#include <Fuse.Gestures.LongPressedHandler.h>
#include <Fuse.Gestures.Pressed.h>
#include <Fuse.Gestures.Released.h>
#include <Fuse.Gestures.ScrollableGoto.h>
#include <Fuse.Gestures.ScrollDirections.h>
#include <Fuse.Gestures.Scroller.h>
#include <Fuse.Gestures.Scroller.MoveUserFlags.h>
#include <Fuse.Gestures.SetSwipeActive.h>
#include <Fuse.Gestures.Swiped.h>
#include <Fuse.Gestures.SwipedHow.h>
#include <Fuse.Gestures.SwipeDirection.h>
#include <Fuse.Gestures.SwipeGesture.h>
#include <Fuse.Gestures.SwipeGestureHelper.h>
#include <Fuse.Gestures.SwipeType.h>
#include <Fuse.Gestures.SwipingAnimation.h>
#include <Fuse.Gestures.Tapped.h>
#include <Fuse.Gestures.TappedArgs.h>
#include <Fuse.Gestures.TappedHandler.h>
#include <Fuse.Gestures.ToggleSwipeActive.h>
#include <Fuse.Gestures.Trackball.h>
#include <Fuse.Gestures.Trackball.MoveMode.h>
#include <Fuse.Gestures.WhileClickerTrigger.h>
#include <Fuse.Gestures.WhileHovering.h>
#include <Fuse.Gestures.WhilePressed.h>
#include <Fuse.Gestures.WhileSwipeActive.h>
#include <Fuse.Input.Focus.h>
#include <Fuse.Input.FocusGainedArgs.h>
#include <Fuse.Input.FocusGainedHandler.h>
#include <Fuse.Input.FocusLostArgs.h>
#include <Fuse.Input.FocusLostHandler.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEnteredArgs.h>
#include <Fuse.Input.PointerEnteredHandler.h>
#include <Fuse.Input.PointerEventArgs.h>
#include <Fuse.Input.PointerLeftArgs.h>
#include <Fuse.Input.PointerLeftHandler.h>
#include <Fuse.Input.PointerMovedArgs.h>
#include <Fuse.Input.PointerMovedHandler.h>
#include <Fuse.Input.PointerPressedArgs.h>
#include <Fuse.Input.PointerPressedHandler.h>
#include <Fuse.Input.PointerReleasedArgs.h>
#include <Fuse.Input.PointerReleasedHandler.h>
#include <Fuse.IViewport.h>
#include <Fuse.Node.h>
#include <Fuse.NodeEvent-2.h>
#include <Fuse.PlacedHandler.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.RequestBringIntoViewArgs.h>
#include <Fuse.RequestBringIntoViewHandler.h>
#include <Fuse.Time.h>
#include <Fuse.Transform.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Clock.h>
#include <Uno.Double.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Object.h>
#include <Uno.Platform.PointerType.h>
#include <Uno.Quaternion.h>
#include <Uno.String.h>
#include <Uno.Vector.h>
static uString* STRINGS[6];
static uType* TYPES[58];

namespace g{
namespace Fuse{
namespace Gestures{

// C:\ProgramData\Uno\Packages\Fuse.Gestures\0.18.8\$.uno(16)
// ----------------------------------------------------------

// public sealed class Clicked :16
// {
::g::Fuse::Triggers::Trigger_type* Clicked_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.ObjectSize = sizeof(Clicked);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.Clicked", options);
    type->SetBase(::g::Fuse::Gestures::ClickerTrigger_typeof());
    type->fp_ctor_ = (void*)Clicked__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Clicked__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Clicked__OnUnrooted_fn;
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[1] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Behavior_typeof());
    ::TYPES[2] = ::g::Fuse::Behavior_typeof();
    ::TYPES[3] = ::g::Uno::Delegate_typeof();
    ::TYPES[4] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[5] = uObject_typeof();
    ::TYPES[6] = ::g::Fuse::Gestures::Clicker_typeof();
    ::TYPES[7] = ::g::Fuse::Gestures::ClickerTrigger_typeof();
    ::TYPES[8] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    type->SetFields(15,
        ::g::Fuse::Gestures::ClickedHandler_typeof(), offsetof(::g::Fuse::Gestures::Clicked, Handler1), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("AddHandler", NULL, (void*)Clicked__AddHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Fuse::Gestures::ClickedHandler_typeof()),
        new uFunction("add_Handler", NULL, (void*)Clicked__add_Handler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::ClickedHandler_typeof()),
        new uFunction("remove_Handler", NULL, (void*)Clicked__remove_Handler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::ClickedHandler_typeof()),
        new uFunction(".ctor", NULL, (void*)Clicked__New1_fn, 0, true, Clicked_typeof(), 0),
        new uFunction("RemoveHandler", NULL, (void*)Clicked__RemoveHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Fuse::Gestures::ClickedHandler_typeof()));
    return type;
}

// public generated Clicked() :16
void Clicked__ctor_3_fn(Clicked* __this)
{
    __this->ctor_3();
}

// public static void AddHandler(Fuse.Node node, Fuse.Gestures.ClickedHandler handler) :30
void Clicked__AddHandler_fn(::g::Fuse::Node* node, uDelegate* handler)
{
    Clicked::AddHandler(node, handler);
}

// private static Fuse.Gestures.Clicked GetClicked(Fuse.Node n) :18
void Clicked__GetClicked_fn(::g::Fuse::Node* n, Clicked** __retval)
{
    *__retval = Clicked::GetClicked(n);
}

// public generated void add_Handler(Fuse.Gestures.ClickedHandler value) :43
void Clicked__add_Handler_fn(Clicked* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.Gestures.ClickedHandler value) :43
void Clicked__remove_Handler_fn(Clicked* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// public generated Clicked New() :16
void Clicked__New1_fn(Clicked** __retval)
{
    *__retval = Clicked::New1();
}

// private void OnClicked(Fuse.Input.PointerEventArgs args, int clickCount) :57
void Clicked__OnClicked_fn(Clicked* __this, ::g::Fuse::Input::PointerEventArgs* args, int* clickCount)
{
    __this->OnClicked(args, *clickCount);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :45
void Clicked__OnRooted_fn(Clicked* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Gestures::ClickerTrigger__OnRooted_fn(__this, parentNode);
    uPtr(__this->Clicker)->add_ClickedEvent(uDelegate::New(::TYPES[8/*Fuse.Gestures.ClickerEventHandler*/], (void*)Clicked__OnClicked_fn, __this));
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :51
void Clicked__OnUnrooted_fn(Clicked* __this, ::g::Fuse::Node* parentNode)
{
    uPtr(__this->Clicker)->remove_ClickedEvent(uDelegate::New(::TYPES[8/*Fuse.Gestures.ClickerEventHandler*/], (void*)Clicked__OnClicked_fn, __this));
    ::g::Fuse::Gestures::ClickerTrigger__OnUnrooted_fn(__this, parentNode);
}

// public static void RemoveHandler(Fuse.Node node, Fuse.Gestures.ClickedHandler handler) :37
void Clicked__RemoveHandler_fn(::g::Fuse::Node* node, uDelegate* handler)
{
    Clicked::RemoveHandler(node, handler);
}

// public generated Clicked() [instance] :16
void Clicked::ctor_3()
{
    ctor_2();
}

// public generated void add_Handler(Fuse.Gestures.ClickedHandler value) [instance] :43
void Clicked::add_Handler(uDelegate* value)
{
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[4/*Fuse.Gestures.ClickedHandler*/]);
}

// public generated void remove_Handler(Fuse.Gestures.ClickedHandler value) [instance] :43
void Clicked::remove_Handler(uDelegate* value)
{
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[4/*Fuse.Gestures.ClickedHandler*/]);
}

// private void OnClicked(Fuse.Input.PointerEventArgs args, int clickCount) [instance] :57
void Clicked::OnClicked(::g::Fuse::Input::PointerEventArgs* args, int clickCount)
{
    Pulse();

    if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
        uPtr(Handler1)->Invoke(2, this, (::g::Fuse::Gestures::ClickedArgs*)::g::Fuse::Gestures::ClickedArgs::New3(args, ParentNode()));
}

// public static void AddHandler(Fuse.Node node, Fuse.Gestures.ClickedHandler handler) [static] :30
void Clicked::AddHandler(::g::Fuse::Node* node, uDelegate* handler)
{
    Clicked* c = Clicked::GetClicked(node);
    uPtr(c)->add_Handler(handler);
}

// private static Fuse.Gestures.Clicked GetClicked(Fuse.Node n) [static] :18
Clicked* Clicked::GetClicked(::g::Fuse::Node* n)
{
    ::g::Fuse::Behavior* ret3;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(n)->Behaviors()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[2/*Fuse.Behavior*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Fuse::Behavior* b = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[1/*Uno.Collections.IEnumerator<Fuse.Behavior>*/]), &ret3), ret3);

        if (uIs(b, Clicked_typeof()))
            return uCast<Clicked*>(b, Clicked_typeof());
    }

    Clicked* c = Clicked::New1();
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(n->Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[2/*Fuse.Behavior*/])), c);
    return c;
}

// public generated Clicked New() [static] :16
Clicked* Clicked::New1()
{
    Clicked* obj2 = (Clicked*)uNew(Clicked_typeof());
    obj2->ctor_3();
    return obj2;
}

// public static void RemoveHandler(Fuse.Node node, Fuse.Gestures.ClickedHandler handler) [static] :37
void Clicked::RemoveHandler(::g::Fuse::Node* node, uDelegate* handler)
{
    Clicked* c = Clicked::GetClicked(node);
    uPtr(c)->remove_Handler(handler);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Gestures\0.18.8\$.uno(9)
// ---------------------------------------------------------

// public sealed class ClickedArgs :9
// {
::g::Fuse::NodeEventArgs_type* ClickedArgs_typeof()
{
    static uSStrong< ::g::Fuse::NodeEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ClickedArgs);
    options.TypeSize = sizeof(::g::Fuse::NodeEventArgs_type);
    type = (::g::Fuse::NodeEventArgs_type*)uClassType::New("Fuse.Gestures.ClickedArgs", options);
    type->SetBase(::g::Fuse::Input::CustomPointerEventArgs_typeof());
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::NodeEventArgs__Fuse_Scripting_IScriptEvent_Serialize_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::NodeEventArgs_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ClickedArgs__New3_fn, 0, true, ClickedArgs_typeof(), 2, ::g::Fuse::Input::PointerEventArgs_typeof(), ::g::Fuse::Node_typeof()));
    return type;
}

// public ClickedArgs(Fuse.Input.PointerEventArgs args, Fuse.Node node) :11
void ClickedArgs__ctor_4_fn(ClickedArgs* __this, ::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node)
{
    __this->ctor_4(args, node);
}

// public ClickedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Node node) :11
void ClickedArgs__New3_fn(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node, ClickedArgs** __retval)
{
    *__retval = ClickedArgs::New3(args, node);
}

// public ClickedArgs(Fuse.Input.PointerEventArgs args, Fuse.Node node) [instance] :11
void ClickedArgs::ctor_4(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node)
{
    ctor_3(args, node);
}

// public ClickedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Node node) [static] :11
ClickedArgs* ClickedArgs::New3(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node)
{
    ClickedArgs* obj1 = (ClickedArgs*)uNew(ClickedArgs_typeof());
    obj1->ctor_4(args, node);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Gestures\0.18.8\$.uno(14)
// ----------------------------------------------------------

// public delegate void ClickedHandler(object sender, Fuse.Gestures.ClickedArgs args) :14
uDelegateType* ClickedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Gestures.ClickedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Gestures::ClickedArgs_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Gestures\0.18.8\Internal\$.uno(47)
// -------------------------------------------------------------------

// internal sealed class Clicker :47
// {
// static Clicker() :47
static void Clicker__cctor__fn(uType* __type)
{
    Clicker::_clickerProperty_ = ::g::Fuse::Properties::CreateHandle();
}

uType* Clicker_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 21;
    options.ObjectSize = sizeof(Clicker);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Gestures.Clicker", options);
    type->fp_cctor_ = Clicker__cctor__fn;
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[5] = uObject_typeof();
    ::TYPES[3] = ::g::Uno::Delegate_typeof();
    ::TYPES[8] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    ::TYPES[9] = ::g::Fuse::Input::PointerEventArgs_typeof();
    ::TYPES[10] = ::g::Fuse::Time_typeof();
    ::TYPES[11] = ::g::Uno::Double_typeof();
    ::TYPES[12] = ::g::Uno::Bool_typeof();
    ::TYPES[13] = ::g::Uno::Action_typeof();
    ::TYPES[14] = ::g::Uno::EventHandler_typeof();
    ::TYPES[15] = ::g::Fuse::Input::Pointer_typeof();
    ::TYPES[16] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[17] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    ::TYPES[18] = ::g::Fuse::Input::PointerMovedHandler_typeof();
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _attachCount), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _clickCount), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _down), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _hasUpdate), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _hovering), 0,
        ::g::Fuse::Input::PointerEventArgs_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _lastArgs), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _lastUpTime), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _longPressTimeout), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _maxDoubleInterval), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _maxTapDistanceMoved), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _maxTapTimeHeld), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _maybeTap), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _node), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _startCoord), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _startTime), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::Clicker, _tapCount), 0,
        ::g::Fuse::Gestures::ClickerEventHandler_typeof(), offsetof(::g::Fuse::Gestures::Clicker, ClickedEvent1), 0,
        ::g::Fuse::Gestures::ClickerEventHandler_typeof(), offsetof(::g::Fuse::Gestures::Clicker, LongPressedEvent1), 0,
        ::g::Fuse::Gestures::ClickerEventHandler_typeof(), offsetof(::g::Fuse::Gestures::Clicker, PressingEvent1), 0,
        ::g::Fuse::Gestures::ClickerEventHandler_typeof(), offsetof(::g::Fuse::Gestures::Clicker, TappedEvent1), 0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Gestures::Clicker::_clickerProperty_, uFieldFlagsStatic);
    return type;
}

// private Clicker(Fuse.Node node) :62
void Clicker__ctor__fn(Clicker* __this, ::g::Fuse::Node* node)
{
    __this->ctor_(node);
}

// public static Fuse.Gestures.Clicker AttachClicker(Fuse.Node elm) :68
void Clicker__AttachClicker_fn(::g::Fuse::Node* elm, Clicker** __retval)
{
    *__retval = Clicker::AttachClicker(elm);
}

// public generated void add_ClickedEvent(Fuse.Gestures.ClickerEventHandler value) :50
void Clicker__add_ClickedEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->add_ClickedEvent(value);
}

// public generated void remove_ClickedEvent(Fuse.Gestures.ClickerEventHandler value) :50
void Clicker__remove_ClickedEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->remove_ClickedEvent(value);
}

// public void Detach() :84
void Clicker__Detach_fn(Clicker* __this)
{
    __this->Detach();
}

// private void DoneCapture() :235
void Clicker__DoneCapture_fn(Clicker* __this)
{
    __this->DoneCapture();
}

// public generated void add_LongPressedEvent(Fuse.Gestures.ClickerEventHandler value) :51
void Clicker__add_LongPressedEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->add_LongPressedEvent(value);
}

// public generated void remove_LongPressedEvent(Fuse.Gestures.ClickerEventHandler value) :51
void Clicker__remove_LongPressedEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->remove_LongPressedEvent(value);
}

// private bool NeedCapture() :178
void Clicker__NeedCapture_fn(Clicker* __this, bool* __retval)
{
    *__retval = __this->NeedCapture();
}

// private Clicker New(Fuse.Node node) :62
void Clicker__New1_fn(::g::Fuse::Node* node, Clicker** __retval)
{
    *__retval = Clicker::New1(node);
}

// private void OnLostCapture() :254
void Clicker__OnLostCapture_fn(Clicker* __this)
{
    __this->OnLostCapture();
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) :150
void Clicker__OnPointerMoved_fn(Clicker* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    __this->OnPointerMoved(sender, args);
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) :120
void Clicker__OnPointerPressed_fn(Clicker* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    __this->OnPointerPressed(sender, args);
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) :186
void Clicker__OnPointerReleased_fn(Clicker* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    __this->OnPointerReleased(sender, args);
}

// private void OnRooted() :94
void Clicker__OnRooted_fn(Clicker* __this)
{
    __this->OnRooted();
}

// private void OnUnrooted() :101
void Clicker__OnUnrooted_fn(Clicker* __this)
{
    __this->OnUnrooted();
}

// private void OnUpdate(object s, object a) :224
void Clicker__OnUpdate_fn(Clicker* __this, uObject* s, uObject* a)
{
    __this->OnUpdate(s, a);
}

// public generated void add_PressingEvent(Fuse.Gestures.ClickerEventHandler value) :52
void Clicker__add_PressingEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->add_PressingEvent(value);
}

// public generated void remove_PressingEvent(Fuse.Gestures.ClickerEventHandler value) :52
void Clicker__remove_PressingEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->remove_PressingEvent(value);
}

// private void ReleaseUpdate() :245
void Clicker__ReleaseUpdate_fn(Clicker* __this)
{
    __this->ReleaseUpdate();
}

// public generated void add_TappedEvent(Fuse.Gestures.ClickerEventHandler value) :49
void Clicker__add_TappedEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->add_TappedEvent(value);
}

// public generated void remove_TappedEvent(Fuse.Gestures.ClickerEventHandler value) :49
void Clicker__remove_TappedEvent_fn(Clicker* __this, uDelegate* value)
{
    __this->remove_TappedEvent(value);
}

uSStrong< ::g::Fuse::PropertyHandle*> Clicker::_clickerProperty_;

// private Clicker(Fuse.Node node) [instance] :62
void Clicker::ctor_(::g::Fuse::Node* node)
{
    _maxTapDistanceMoved = 25.0f;
    _maxTapTimeHeld = 0.3f;
    _maxDoubleInterval = 0.3f;
    _longPressTimeout = 0.5f;
    _attachCount = 1;
    _down = -1;
    _node = node;
}

// public generated void add_ClickedEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :50
void Clicker::add_ClickedEvent(uDelegate* value)
{
    ClickedEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ClickedEvent1, value), ::TYPES[8/*Fuse.Gestures.ClickerEventHandler*/]);
}

// public generated void remove_ClickedEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :50
void Clicker::remove_ClickedEvent(uDelegate* value)
{
    ClickedEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ClickedEvent1, value), ::TYPES[8/*Fuse.Gestures.ClickerEventHandler*/]);
}

// public void Detach() [instance] :84
void Clicker::Detach()
{
    _attachCount--;

    if (_attachCount == 0)
    {
        OnUnrooted();
        uPtr(uPtr(_node)->Properties())->Clear(Clicker::_clickerProperty());
    }
}

// private void DoneCapture() [instance] :235
void Clicker::DoneCapture()
{
    _down = -1;
    ReleaseUpdate();

    if (_hovering && ::g::Uno::Delegate::op_Inequality(PressingEvent1, NULL))
        uPtr(PressingEvent1)->Invoke(2, (::g::Fuse::Input::PointerEventArgs*)_lastArgs, uCRef<int>(0));

    _hovering = false;
}

// public generated void add_LongPressedEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :51
void Clicker::add_LongPressedEvent(uDelegate* value)
{
    LongPressedEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(LongPressedEvent1, value), ::TYPES[8/*Fuse.Gestures.ClickerEventHandler*/]);
}

// public generated void remove_LongPressedEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :51
void Clicker::remove_LongPressedEvent(uDelegate* value)
{
    LongPressedEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(LongPressedEvent1, value), ::TYPES[8/*Fuse.Gestures.ClickerEventHandler*/]);
}

// private bool NeedCapture() [instance] :178
bool Clicker::NeedCapture()
{
    return (((_maybeTap && ::g::Uno::Delegate::op_Inequality(TappedEvent1, NULL)) || ::g::Uno::Delegate::op_Inequality(ClickedEvent1, NULL)) || ::g::Uno::Delegate::op_Inequality(LongPressedEvent1, NULL)) || ::g::Uno::Delegate::op_Inequality(PressingEvent1, NULL);
}

// private void OnLostCapture() [instance] :254
void Clicker::OnLostCapture()
{
    DoneCapture();
    _tapCount = 0;
    _clickCount = 0;
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) [instance] :150
void Clicker::OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    if (_down != uPtr(args)->PointIndex())
        return;

    float distance = ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(uPtr(args)->WindowPoint(), _startCoord));
    double deltaTime = ::g::Fuse::Time::FrameTime() - _startTime;

    if ((distance > _maxTapDistanceMoved) || (deltaTime > (double)_maxTapTimeHeld))
        _maybeTap = false;

    if (!NeedCapture())
    {
        uPtr(args)->ReleaseSoftCapture(this);
        DoneCapture();
    }

    bool hoverNow = uPtr(_node)->GetHitWindowPoint(args->WindowPoint()) != NULL;

    if (hoverNow != _hovering)
    {
        if (::g::Uno::Delegate::op_Inequality(PressingEvent1, NULL))
            uPtr(PressingEvent1)->Invoke(2, args, uCRef<int>(hoverNow ? 1 : 0));

        _hovering = hoverNow;
    }

    _lastArgs = args;
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) [instance] :120
void Clicker::OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    if ((_down != -1) || !uPtr(args)->TrySoftCapture(this, uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)Clicker__OnLostCapture_fn, this), NULL))
        return;

    double delta = ::g::Fuse::Time::FrameTime() - _lastUpTime;

    if (delta > (double)_maxDoubleInterval)
    {
        _tapCount = 0;
        _clickCount = 0;
    }

    _down = uPtr(args)->PointIndex();
    _startCoord = args->WindowPoint();
    _startTime = ::g::Fuse::Time::FrameTime();
    _maybeTap = true;

    if (::g::Uno::Delegate::op_Inequality(LongPressedEvent1, NULL))
    {
        _hasUpdate = true;
        uPtr(_node)->add_Update(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)Clicker__OnUpdate_fn, this));
    }

    if (::g::Uno::Delegate::op_Inequality(PressingEvent1, NULL))
        uPtr(PressingEvent1)->Invoke(2, args, uCRef<int>(1));

    _lastArgs = args;
    _hovering = true;
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) [instance] :186
void Clicker::OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    if (_down != uPtr(args)->PointIndex())
        return;

    uPtr(args)->ReleaseSoftCapture(this);
    double deltaTime = ::g::Fuse::Time::FrameTime() - _startTime;

    if (_maybeTap && (deltaTime <= (double)_maxTapTimeHeld))
    {
        _tapCount++;

        if (::g::Uno::Delegate::op_Inequality(TappedEvent1, NULL))
            uPtr(TappedEvent1)->Invoke(2, args, uCRef<int>(_tapCount));
    }
    else
        _tapCount = 0;

    if (uPtr(_node)->GetHitWindowPoint(args->WindowPoint()) != NULL)
    {
        _clickCount++;

        if (::g::Uno::Delegate::op_Inequality(ClickedEvent1, NULL))
            uPtr(ClickedEvent1)->Invoke(2, args, uCRef<int>(_clickCount));
    }
    else
        _clickCount = 0;

    if (_hovering && ::g::Uno::Delegate::op_Inequality(PressingEvent1, NULL))
        uPtr(PressingEvent1)->Invoke(2, args, uCRef<int>(0));

    _hovering = false;
    DoneCapture();
    _lastUpTime = ::g::Fuse::Time::FrameTime();
    _lastArgs = args;
}

// private void OnRooted() [instance] :94
void Clicker::OnRooted()
{
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), _node, uDelegate::New(::TYPES[16/*Fuse.Input.PointerPressedHandler*/], (void*)Clicker__OnPointerPressed_fn, this));
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), _node, uDelegate::New(::TYPES[17/*Fuse.Input.PointerReleasedHandler*/], (void*)Clicker__OnPointerReleased_fn, this));
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), _node, uDelegate::New(::TYPES[18/*Fuse.Input.PointerMovedHandler*/], (void*)Clicker__OnPointerMoved_fn, this));
}

// private void OnUnrooted() [instance] :101
void Clicker::OnUnrooted()
{
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), _node, uDelegate::New(::TYPES[16/*Fuse.Input.PointerPressedHandler*/], (void*)Clicker__OnPointerPressed_fn, this));
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), _node, uDelegate::New(::TYPES[17/*Fuse.Input.PointerReleasedHandler*/], (void*)Clicker__OnPointerReleased_fn, this));
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), _node, uDelegate::New(::TYPES[18/*Fuse.Input.PointerMovedHandler*/], (void*)Clicker__OnPointerMoved_fn, this));
}

// private void OnUpdate(object s, object a) [instance] :224
void Clicker::OnUpdate(uObject* s, uObject* a)
{
    double elapsed = ::g::Fuse::Time::FrameTime() - _startTime;

    if (::g::Uno::Delegate::op_Inequality(LongPressedEvent1, NULL) && (elapsed > (double)_longPressTimeout))
    {
        uPtr(LongPressedEvent1)->Invoke(2, (::g::Fuse::Input::PointerEventArgs*)_lastArgs, uCRef<int>(0));
        ::g::Fuse::Input::Pointer::ReleaseSoftCapture(_down, this);
        DoneCapture();
    }
}

// public generated void add_PressingEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :52
void Clicker::add_PressingEvent(uDelegate* value)
{
    PressingEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PressingEvent1, value), ::TYPES[8/*Fuse.Gestures.ClickerEventHandler*/]);
}

// public generated void remove_PressingEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :52
void Clicker::remove_PressingEvent(uDelegate* value)
{
    PressingEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PressingEvent1, value), ::TYPES[8/*Fuse.Gestures.ClickerEventHandler*/]);
}

// private void ReleaseUpdate() [instance] :245
void Clicker::ReleaseUpdate()
{
    if (_hasUpdate)
    {
        uPtr(_node)->remove_Update(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)Clicker__OnUpdate_fn, this));
        _hasUpdate = false;
    }
}

// public generated void add_TappedEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :49
void Clicker::add_TappedEvent(uDelegate* value)
{
    TappedEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(TappedEvent1, value), ::TYPES[8/*Fuse.Gestures.ClickerEventHandler*/]);
}

// public generated void remove_TappedEvent(Fuse.Gestures.ClickerEventHandler value) [instance] :49
void Clicker::remove_TappedEvent(uDelegate* value)
{
    TappedEvent1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(TappedEvent1, value), ::TYPES[8/*Fuse.Gestures.ClickerEventHandler*/]);
}

// public static Fuse.Gestures.Clicker AttachClicker(Fuse.Node elm) [static] :68
Clicker* Clicker::AttachClicker(::g::Fuse::Node* elm)
{
    Clicker_typeof()->Init();
    uObject* v;

    if (uPtr(uPtr(elm)->Properties())->TryGet(Clicker::_clickerProperty(), &v))
    {
        Clicker* c = uAs<Clicker*>(v, Clicker_typeof());
        uPtr(c)->_attachCount++;
        return c;
    }

    Clicker* nc = Clicker::New1(elm);
    uPtr(uPtr(elm)->Properties())->Set(Clicker::_clickerProperty(), nc);
    nc->OnRooted();
    return nc;
}

// private Clicker New(Fuse.Node node) [static] :62
Clicker* Clicker::New1(::g::Fuse::Node* node)
{
    Clicker* obj1 = (Clicker*)uNew(Clicker_typeof());
    obj1->ctor_(node);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Gestures\0.18.8\Internal\$.uno(11)
// -------------------------------------------------------------------

// internal delegate void ClickerEventHandler(Fuse.Input.PointerEventArgs args, int count) :11
uDelegateType* ClickerEventHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Gestures.ClickerEventHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Fuse::Input::PointerEventArgs_typeof(),
        ::g::Uno::Int_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Gestures\0.18.8\Internal\$.uno(13)
// -------------------------------------------------------------------

// public abstract class ClickerTrigger :13
// {
::g::Fuse::Triggers::Trigger_type* ClickerTrigger_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.ObjectSize = sizeof(ClickerTrigger);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.ClickerTrigger", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))ClickerTrigger__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))ClickerTrigger__OnUnrooted_fn;
    ::TYPES[2] = ::g::Fuse::Behavior_typeof();
    type->SetFields(14,
        ::g::Fuse::Gestures::Clicker_typeof(), offsetof(::g::Fuse::Gestures::ClickerTrigger, Clicker), 0);
    return type;
}

// protected generated ClickerTrigger() :13
void ClickerTrigger__ctor_2_fn(ClickerTrigger* __this)
{
    __this->ctor_2();
}

// protected override void OnRooted(Fuse.Node parentNode) :16
void ClickerTrigger__OnRooted_fn(ClickerTrigger* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    __this->Clicker = ::g::Fuse::Gestures::Clicker::AttachClicker(__this->ParentNode());
}

// protected override void OnUnrooted(Fuse.Node parentNode) :22
void ClickerTrigger__OnUnrooted_fn(ClickerTrigger* __this, ::g::Fuse::Node* parentNode)
{
    uPtr(__this->Clicker)->Detach();
    __this->Clicker = NULL;
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// protected generated ClickerTrigger() [instance] :13
void ClickerTrigger::ctor_2()
{
    ctor_1();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Gestures\0.18.8\Internal\$.uno(575)
// --------------------------------------------------------------------

// internal sealed class DegreeSpan :575
// {
uType* DegreeSpan_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(DegreeSpan);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Gestures.DegreeSpan", options);
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::DegreeSpan, _a), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::DegreeSpan, _b), 0);
    return type;
}

// public DegreeSpan(float a, float b) :580
void DegreeSpan__ctor__fn(DegreeSpan* __this, float* a, float* b)
{
    __this->ctor_(*a, *b);
}

// public bool IsWithinBounds(float x) :586
void DegreeSpan__IsWithinBounds_fn(DegreeSpan* __this, float* x, bool* __retval)
{
    *__retval = __this->IsWithinBounds(*x);
}

// public DegreeSpan New(float a, float b) :580
void DegreeSpan__New1_fn(float* a, float* b, DegreeSpan** __retval)
{
    *__retval = DegreeSpan::New1(*a, *b);
}

// public DegreeSpan(float a, float b) [instance] :580
void DegreeSpan::ctor_(float a, float b)
{
    _a = a;
    _b = b;
}

// public bool IsWithinBounds(float x) [instance] :586
bool DegreeSpan::IsWithinBounds(float x)
{
    float angle1 = _a;
    float angle2 = _b;
    float rAngle = ::g::Uno::Math::Mod1(::g::Uno::Math::Mod1(angle2 - angle1, 360.0f) + 360.0f, 360.0f);

    if (rAngle >= 180.0f)
    {
        float a = angle1;
        angle1 = angle2;
        angle2 = a;
    }

    if (angle1 <= angle2)
        return (x >= angle1) && (x <= angle2);
    else
        return (x >= angle2) || (x <= angle2);
}

// public DegreeSpan New(float a, float b) [static] :580
DegreeSpan* DegreeSpan::New1(float a, float b)
{
    DegreeSpan* obj1 = (DegreeSpan*)uNew(DegreeSpan_typeof());
    obj1->ctor_(a, b);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Gestures\0.18.8\$.uno(65)
// ----------------------------------------------------------

// public sealed class DoubleClicked :65
// {
::g::Fuse::Triggers::Trigger_type* DoubleClicked_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.ObjectSize = sizeof(DoubleClicked);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.DoubleClicked", options);
    type->SetBase(::g::Fuse::Gestures::ClickerTrigger_typeof());
    type->fp_ctor_ = (void*)DoubleClicked__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))DoubleClicked__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))DoubleClicked__OnUnrooted_fn;
    ::TYPES[3] = ::g::Uno::Delegate_typeof();
    ::TYPES[4] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[5] = uObject_typeof();
    ::TYPES[2] = ::g::Fuse::Behavior_typeof();
    ::TYPES[6] = ::g::Fuse::Gestures::Clicker_typeof();
    ::TYPES[7] = ::g::Fuse::Gestures::ClickerTrigger_typeof();
    ::TYPES[8] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    type->SetFields(15,
        ::g::Fuse::Gestures::ClickedHandler_typeof(), offsetof(::g::Fuse::Gestures::DoubleClicked, Handler1), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("add_Handler", NULL, (void*)DoubleClicked__add_Handler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::ClickedHandler_typeof()),
        new uFunction("remove_Handler", NULL, (void*)DoubleClicked__remove_Handler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::ClickedHandler_typeof()),
        new uFunction(".ctor", NULL, (void*)DoubleClicked__New1_fn, 0, true, DoubleClicked_typeof(), 0));
    return type;
}

// public generated DoubleClicked() :65
void DoubleClicked__ctor_3_fn(DoubleClicked* __this)
{
    __this->ctor_3();
}

// public generated void add_Handler(Fuse.Gestures.ClickedHandler value) :67
void DoubleClicked__add_Handler_fn(DoubleClicked* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.Gestures.ClickedHandler value) :67
void DoubleClicked__remove_Handler_fn(DoubleClicked* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// public generated DoubleClicked New() :65
void DoubleClicked__New1_fn(DoubleClicked** __retval)
{
    *__retval = DoubleClicked::New1();
}

// private void OnClicked(Fuse.Input.PointerEventArgs args, int clickCount) :81
void DoubleClicked__OnClicked_fn(DoubleClicked* __this, ::g::Fuse::Input::PointerEventArgs* args, int* clickCount)
{
    __this->OnClicked(args, *clickCount);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :69
void DoubleClicked__OnRooted_fn(DoubleClicked* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Gestures::ClickerTrigger__OnRooted_fn(__this, parentNode);
    uPtr(__this->Clicker)->add_ClickedEvent(uDelegate::New(::TYPES[8/*Fuse.Gestures.ClickerEventHandler*/], (void*)DoubleClicked__OnClicked_fn, __this));
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :75
void DoubleClicked__OnUnrooted_fn(DoubleClicked* __this, ::g::Fuse::Node* parentNode)
{
    uPtr(__this->Clicker)->remove_ClickedEvent(uDelegate::New(::TYPES[8/*Fuse.Gestures.ClickerEventHandler*/], (void*)DoubleClicked__OnClicked_fn, __this));
    ::g::Fuse::Gestures::ClickerTrigger__OnUnrooted_fn(__this, parentNode);
}

// public generated DoubleClicked() [instance] :65
void DoubleClicked::ctor_3()
{
    ctor_2();
}

// public generated void add_Handler(Fuse.Gestures.ClickedHandler value) [instance] :67
void DoubleClicked::add_Handler(uDelegate* value)
{
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[4/*Fuse.Gestures.ClickedHandler*/]);
}

// public generated void remove_Handler(Fuse.Gestures.ClickedHandler value) [instance] :67
void DoubleClicked::remove_Handler(uDelegate* value)
{
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[4/*Fuse.Gestures.ClickedHandler*/]);
}

// private void OnClicked(Fuse.Input.PointerEventArgs args, int clickCount) [instance] :81
void DoubleClicked::OnClicked(::g::Fuse::Input::PointerEventArgs* args, int clickCount)
{
    if (clickCount != 2)
        return;

    Pulse();

    if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
        uPtr(Handler1)->Invoke(2, this, (::g::Fuse::Gestures::ClickedArgs*)::g::Fuse::Gestures::ClickedArgs::New3(args, ParentNode()));
}

// public generated DoubleClicked New() [static] :65
DoubleClicked* DoubleClicked::New1()
{
    DoubleClicked* obj1 = (DoubleClicked*)uNew(DoubleClicked_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Gestures\0.18.8\$.uno(806)
// -----------------------------------------------------------

// public sealed class DoubleTapped :806
// {
::g::Fuse::Triggers::Trigger_type* DoubleTapped_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.ObjectSize = sizeof(DoubleTapped);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.DoubleTapped", options);
    type->SetBase(::g::Fuse::Gestures::ClickerTrigger_typeof());
    type->fp_ctor_ = (void*)DoubleTapped__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))DoubleTapped__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))DoubleTapped__OnUnrooted_fn;
    ::TYPES[6] = ::g::Fuse::Gestures::Clicker_typeof();
    ::TYPES[7] = ::g::Fuse::Gestures::ClickerTrigger_typeof();
    ::TYPES[8] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    ::TYPES[3] = ::g::Uno::Delegate_typeof();
    ::TYPES[19] = ::g::Fuse::Gestures::DoubleTappedHandler_typeof();
    ::TYPES[5] = uObject_typeof();
    ::TYPES[2] = ::g::Fuse::Behavior_typeof();
    type->SetFields(15,
        ::g::Fuse::Gestures::DoubleTappedHandler_typeof(), offsetof(::g::Fuse::Gestures::DoubleTapped, Handler1), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("add_Handler", NULL, (void*)DoubleTapped__add_Handler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::DoubleTappedHandler_typeof()),
        new uFunction("remove_Handler", NULL, (void*)DoubleTapped__remove_Handler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::DoubleTappedHandler_typeof()),
        new uFunction(".ctor", NULL, (void*)DoubleTapped__New1_fn, 0, true, DoubleTapped_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)DoubleTapped__New2_fn, 0, true, DoubleTapped_typeof(), 1, ::g::Fuse::Gestures::DoubleTappedHandler_typeof()));
    return type;
}

// public DoubleTapped() :810
void DoubleTapped__ctor_3_fn(DoubleTapped* __this)
{
    __this->ctor_3();
}

// public DoubleTapped(Fuse.Gestures.DoubleTappedHandler handler) :812
void DoubleTapped__ctor_4_fn(DoubleTapped* __this, uDelegate* handler)
{
    __this->ctor_4(handler);
}

// public generated void add_Handler(Fuse.Gestures.DoubleTappedHandler value) :808
void DoubleTapped__add_Handler_fn(DoubleTapped* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.Gestures.DoubleTappedHandler value) :808
void DoubleTapped__remove_Handler_fn(DoubleTapped* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// public DoubleTapped New() :810
void DoubleTapped__New1_fn(DoubleTapped** __retval)
{
    *__retval = DoubleTapped::New1();
}

// public DoubleTapped New(Fuse.Gestures.DoubleTappedHandler handler) :812
void DoubleTapped__New2_fn(uDelegate* handler, DoubleTapped** __retval)
{
    *__retval = DoubleTapped::New2(handler);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :817
void DoubleTapped__OnRooted_fn(DoubleTapped* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Gestures::ClickerTrigger__OnRooted_fn(__this, parentNode);
    uPtr(__this->Clicker)->add_TappedEvent(uDelegate::New(::TYPES[8/*Fuse.Gestures.ClickerEventHandler*/], (void*)DoubleTapped__OnTapped_fn, __this));
}

// private void OnTapped(Fuse.Input.PointerEventArgs args, int tapCount) :829
void DoubleTapped__OnTapped_fn(DoubleTapped* __this, ::g::Fuse::Input::PointerEventArgs* args, int* tapCount)
{
    __this->OnTapped(args, *tapCount);
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :823
void DoubleTapped__OnUnrooted_fn(DoubleTapped* __this, ::g::Fuse::Node* parentNode)
{
    uPtr(__this->Clicker)->remove_TappedEvent(uDelegate::New(::TYPES[8/*Fuse.Gestures.ClickerEventHandler*/], (void*)DoubleTapped__OnTapped_fn, __this));
    ::g::Fuse::Gestures::ClickerTrigger__OnUnrooted_fn(__this, parentNode);
}

// public DoubleTapped() [instance] :810
void DoubleTapped::ctor_3()
{
    ctor_2();
}

// public DoubleTapped(Fuse.Gestures.DoubleTappedHandler handler) [instance] :812
void DoubleTapped::ctor_4(uDelegate* handler)
{
    ctor_2();
    add_Handler(handler);
}

// public generated void add_Handler(Fuse.Gestures.DoubleTappedHandler value) [instance] :808
void DoubleTapped::add_Handler(uDelegate* value)
{
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[19/*Fuse.Gestures.DoubleTappedHandler*/]);
}

// public generated void remove_Handler(Fuse.Gestures.DoubleTappedHandler value) [instance] :808
void DoubleTapped::remove_Handler(uDelegate* value)
{
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[19/*Fuse.Gestures.DoubleTappedHandler*/]);
}

// private void OnTapped(Fuse.Input.PointerEventArgs args, int tapCount) [instance] :829
void DoubleTapped::OnTapped(::g::Fuse::Input::PointerEventArgs* args, int tapCount)
{
    if (tapCount != 2)
        return;

    Pulse();

    if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
        uPtr(Handler1)->Invoke(2, this, (::g::Fuse::Gestures::DoubleTappedArgs*)::g::Fuse::Gestures::DoubleTappedArgs::New3(args, ParentNode()));
}

// public DoubleTapped New() [static] :810
DoubleTapped* DoubleTapped::New1()
{
    DoubleTapped* obj1 = (DoubleTapped*)uNew(DoubleTapped_typeof());
    obj1->ctor_3();
    return obj1;
}

// public DoubleTapped New(Fuse.Gestures.DoubleTappedHandler handler) [static] :812
DoubleTapped* DoubleTapped::New2(uDelegate* handler)
{
    DoubleTapped* obj2 = (DoubleTapped*)uNew(DoubleTapped_typeof());
    obj2->ctor_4(handler);
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Gestures\0.18.8\$.uno(796)
// -----------------------------------------------------------

// public sealed class DoubleTappedArgs :796
// {
::g::Fuse::NodeEventArgs_type* DoubleTappedArgs_typeof()
{
    static uSStrong< ::g::Fuse::NodeEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(DoubleTappedArgs);
    options.TypeSize = sizeof(::g::Fuse::NodeEventArgs_type);
    type = (::g::Fuse::NodeEventArgs_type*)uClassType::New("Fuse.Gestures.DoubleTappedArgs", options);
    type->SetBase(::g::Fuse::Input::CustomPointerEventArgs_typeof());
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::NodeEventArgs__Fuse_Scripting_IScriptEvent_Serialize_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::NodeEventArgs_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DoubleTappedArgs__New3_fn, 0, true, DoubleTappedArgs_typeof(), 2, ::g::Fuse::Input::PointerEventArgs_typeof(), ::g::Fuse::Node_typeof()));
    return type;
}

// public DoubleTappedArgs(Fuse.Input.PointerEventArgs args, Fuse.Node node) :798
void DoubleTappedArgs__ctor_4_fn(DoubleTappedArgs* __this, ::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node)
{
    __this->ctor_4(args, node);
}

// public DoubleTappedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Node node) :798
void DoubleTappedArgs__New3_fn(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node, DoubleTappedArgs** __retval)
{
    *__retval = DoubleTappedArgs::New3(args, node);
}

// public DoubleTappedArgs(Fuse.Input.PointerEventArgs args, Fuse.Node node) [instance] :798
void DoubleTappedArgs::ctor_4(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node)
{
    ctor_3(args, node);
}

// public DoubleTappedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Node node) [static] :798
DoubleTappedArgs* DoubleTappedArgs::New3(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node)
{
    DoubleTappedArgs* obj1 = (DoubleTappedArgs*)uNew(DoubleTappedArgs_typeof());
    obj1->ctor_4(args, node);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Gestures\0.18.8\$.uno(804)
// -----------------------------------------------------------

// public delegate void DoubleTappedHandler(object sender, Fuse.Gestures.DoubleTappedArgs args) :804
uDelegateType* DoubleTappedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Gestures.DoubleTappedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Gestures::DoubleTappedArgs_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Gestures\0.18.8\$.uno(1088)
// ------------------------------------------------------------

// public enum Edge :1088
uEnumType* Edge_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.Edge", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Left", 0LL,
        "Right", 1LL,
        "Top", 2LL,
        "Bottom", 3LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Gestures\0.18.8\$.uno(1096)
// ------------------------------------------------------------

// public sealed class EdgeSwipeAnimation :1096
// {
::g::Fuse::Triggers::Trigger_type* EdgeSwipeAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.ObjectSize = sizeof(EdgeSwipeAnimation);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.EdgeSwipeAnimation", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)EdgeSwipeAnimation__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))EdgeSwipeAnimation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))EdgeSwipeAnimation__OnUnrooted_fn;
    ::STRINGS[0] = uString::Const("EdgeSwipeAnimation must be attached to an Element");
    ::TYPES[20] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[2] = ::g::Fuse::Behavior_typeof();
    ::TYPES[21] = ::g::Fuse::Gestures::Internal::EdgeSwiper_typeof();
    ::TYPES[22] = ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), ::g::Uno::Double_typeof());
    type->SetFields(14,
        ::g::Fuse::Gestures::Internal::EdgeSwiper_typeof(), offsetof(::g::Fuse::Gestures::EdgeSwipeAnimation, _swiper), 0);
    type->Reflection.SetFunctions(10,
        new uFunction("Disable", NULL, (void*)EdgeSwipeAnimation__Disable_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Edge", NULL, (void*)EdgeSwipeAnimation__get_Edge_fn, 0, false, ::g::Fuse::Gestures::Edge_typeof(), 0),
        new uFunction("set_Edge", NULL, (void*)EdgeSwipeAnimation__set_Edge_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::Edge_typeof()),
        new uFunction("get_EdgeThreshold", NULL, (void*)EdgeSwipeAnimation__get_EdgeThreshold_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_EdgeThreshold", NULL, (void*)EdgeSwipeAnimation__set_EdgeThreshold_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Enable", NULL, (void*)EdgeSwipeAnimation__Enable_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_IsEnabled", NULL, (void*)EdgeSwipeAnimation__get_IsEnabled_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)EdgeSwipeAnimation__New1_fn, 0, true, EdgeSwipeAnimation_typeof(), 0),
        new uFunction("get_Target", NULL, (void*)EdgeSwipeAnimation__get_Target_fn, 0, false, ::g::Fuse::Elements::Element_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)EdgeSwipeAnimation__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::Element_typeof()));
    return type;
}

// public generated EdgeSwipeAnimation() :1096
void EdgeSwipeAnimation__ctor_2_fn(EdgeSwipeAnimation* __this)
{
    __this->ctor_2();
}

// public void Disable() :1150
void EdgeSwipeAnimation__Disable_fn(EdgeSwipeAnimation* __this)
{
    __this->Disable();
}

// public Fuse.Gestures.Edge get_Edge() :1103
void EdgeSwipeAnimation__get_Edge_fn(EdgeSwipeAnimation* __this, int* __retval)
{
    *__retval = __this->Edge();
}

// public void set_Edge(Fuse.Gestures.Edge value) :1104
void EdgeSwipeAnimation__set_Edge_fn(EdgeSwipeAnimation* __this, int* value)
{
    __this->Edge(*value);
}

// public float get_EdgeThreshold() :1110
void EdgeSwipeAnimation__get_EdgeThreshold_fn(EdgeSwipeAnimation* __this, float* __retval)
{
    *__retval = __this->EdgeThreshold();
}

// public void set_EdgeThreshold(float value) :1111
void EdgeSwipeAnimation__set_EdgeThreshold_fn(EdgeSwipeAnimation* __this, float* value)
{
    __this->EdgeThreshold(*value);
}

// public void Enable() :1145
void EdgeSwipeAnimation__Enable_fn(EdgeSwipeAnimation* __this)
{
    __this->Enable();
}

// public bool get_IsEnabled() :1157
void EdgeSwipeAnimation__get_IsEnabled_fn(EdgeSwipeAnimation* __this, bool* __retval)
{
    *__retval = __this->IsEnabled();
}

// public generated EdgeSwipeAnimation New() :1096
void EdgeSwipeAnimation__New1_fn(EdgeSwipeAnimation** __retval)
{
    *__retval = EdgeSwipeAnimation::New1();
}

// private void OnProgressChanged(object s, double progress) :1140
void EdgeSwipeAnimation__OnProgressChanged1_fn(EdgeSwipeAnimation* __this, uObject* s, double* progress)
{
    __this->OnProgressChanged1(s, *progress);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1121
void EdgeSwipeAnimation__OnRooted_fn(EdgeSwipeAnimation* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Elements::Element* element = uAs< ::g::Fuse::Elements::Element*>(__this->ParentNode(), ::TYPES[20/*Fuse.Elements.Element*/]);

    if (element == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"EdgeSwipeAn...*/]));

    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    uPtr(__this->_swiper)->Rooted(element);
    uPtr(__this->_swiper)->Seek(0.0);
    uPtr(__this->_swiper)->add_ProgressChanged(uDelegate::New(::TYPES[22/*Uno.Action<object, double>*/], (void*)EdgeSwipeAnimation__OnProgressChanged1_fn, __this));
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :1133
void EdgeSwipeAnimation__OnUnrooted_fn(EdgeSwipeAnimation* __this, ::g::Fuse::Node* parentNode)
{
    uPtr(__this->_swiper)->Unrooted();
    uPtr(__this->_swiper)->remove_ProgressChanged(uDelegate::New(::TYPES[22/*Uno.Action<object, double>*/], (void*)EdgeSwipeAnimation__OnProgressChanged1_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public Fuse.Elements.Element get_Target() :1117
void EdgeSwipeAnimation__get_Target_fn(EdgeSwipeAnimation* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->Target();
}

// public void set_Target(Fuse.Elements.Element value) :1118
void EdgeSwipeAnimation__set_Target_fn(EdgeSwipeAnimation* __this, ::g::Fuse::Elements::Element* value)
{
    __this->Target(value);
}

// public generated EdgeSwipeAnimation() [instance] :1096
void EdgeSwipeAnimation::ctor_2()
{
    _swiper = ::g::Fuse::Gestures::Internal::EdgeSwiper::New1();
    ctor_1();
}

// public void Disable() [instance] :1150
void EdgeSwipeAnimation::Disable()
{
    uPtr(_swiper)->Disable();
}

// public Fuse.Gestures.Edge get_Edge() [instance] :1103
int EdgeSwipeAnimation::Edge()
{
    return uPtr(_swiper)->Edge();
}

// public void set_Edge(Fuse.Gestures.Edge value) [instance] :1104
void EdgeSwipeAnimation::Edge(int value)
{
    uPtr(_swiper)->Edge(value);
}

// public float get_EdgeThreshold() [instance] :1110
float EdgeSwipeAnimation::EdgeThreshold()
{
    return uPtr(_swiper)->EdgeThreshold();
}

// public void set_EdgeThreshold(float value) [instance] :1111
void EdgeSwipeAnimation::EdgeThreshold(float value)
{
    uPtr(_swiper)->EdgeThreshold(value);
}

// public void Enable() [instance] :1145
void EdgeSwipeAnimation::Enable()
{
    uPtr(_swiper)->Enable();
}

// public bool get_IsEnabled() [instance] :1157
bool EdgeSwipeAnimation::IsEnabled()
{
    return uPtr(_swiper)->IsEnabled();
}

// private void OnProgressChanged(object s, double progress) [instance] :1140
void EdgeSwipeAnimation::OnProgressChanged1(uObject* s, double progress)
{
    Seek(progress);
}

// public Fuse.Elements.Element get_Target() [instance] :1117
::g::Fuse::Elements::Element* EdgeSwipeAnimation::Target()
{
    return uPtr(_swiper)->Target();
}

// public void set_Target(Fuse.Elements.Element value) [instance] :1118
void EdgeSwipeAnimation::Target(::g::Fuse::Elements::Element* value)
{
    uPtr(_swiper)->Target(value);
}

// public generated EdgeSwipeAnimation New() [static] :1096
EdgeSwipeAnimation* EdgeSwipeAnimation::New1()
{
    EdgeSwipeAnimation* obj1 = (EdgeSwipeAnimation*)uNew(EdgeSwipeAnimation_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Gestures\0.18.8\$.uno(185)
// -----------------------------------------------------------

// public sealed class KeepFocusInView :185
// {
::g::Fuse::Behavior_type* KeepFocusInView_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(KeepFocusInView);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.Gestures.KeepFocusInView", options);
    type->SetBase(::g::Fuse::Gestures::KeepInViewCommon_typeof());
    type->fp_ctor_ = (void*)KeepFocusInView__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))KeepFocusInView__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))KeepFocusInView__OnUnrooted_fn;
    ::TYPES[23] = ::g::Fuse::Gestures::KeepInViewCommon_typeof();
    ::TYPES[24] = ::g::Fuse::Input::Focus_typeof();
    ::TYPES[2] = ::g::Fuse::Behavior_typeof();
    ::TYPES[25] = ::g::Fuse::Input::FocusGainedHandler_typeof();
    ::TYPES[26] = ::g::Fuse::Input::FocusLostHandler_typeof();
    type->SetFields(6);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)KeepFocusInView__New2_fn, 0, true, KeepFocusInView_typeof(), 0));
    return type;
}

// public generated KeepFocusInView() :185
void KeepFocusInView__ctor_2_fn(KeepFocusInView* __this)
{
    __this->ctor_2();
}

// public generated KeepFocusInView New() :185
void KeepFocusInView__New2_fn(KeepFocusInView** __retval)
{
    *__retval = KeepFocusInView::New2();
}

// private void OnGotFocus(object s, Fuse.Input.FocusGainedArgs fga) :201
void KeepFocusInView__OnGotFocus_fn(KeepFocusInView* __this, uObject* s, ::g::Fuse::Input::FocusGainedArgs* fga)
{
    __this->OnGotFocus(s, fga);
}

// private void OnLostFocus(object s, object a) :206
void KeepFocusInView__OnLostFocus_fn(KeepFocusInView* __this, uObject* s, uObject* a)
{
    __this->OnLostFocus(s, a);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :187
void KeepFocusInView__OnRooted_fn(KeepFocusInView* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Gestures::KeepInViewCommon__OnRooted_fn(__this, parentNode);
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this->ParentNode(), uDelegate::New(::TYPES[25/*Fuse.Input.FocusGainedHandler*/], (void*)KeepFocusInView__OnGotFocus_fn, __this));
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this->ParentNode(), uDelegate::New(::TYPES[26/*Fuse.Input.FocusLostHandler*/], (void*)KeepFocusInView__OnLostFocus_fn, __this));
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :194
void KeepFocusInView__OnUnrooted_fn(KeepFocusInView* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this->ParentNode(), uDelegate::New(::TYPES[25/*Fuse.Input.FocusGainedHandler*/], (void*)KeepFocusInView__OnGotFocus_fn, __this));
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this->ParentNode(), uDelegate::New(::TYPES[26/*Fuse.Input.FocusLostHandler*/], (void*)KeepFocusInView__OnLostFocus_fn, __this));
    ::g::Fuse::Gestures::KeepInViewCommon__OnUnrooted_fn(__this, parentNode);
}

// public generated KeepFocusInView() [instance] :185
void KeepFocusInView::ctor_2()
{
    ctor_1();
}

// private void OnGotFocus(object s, Fuse.Input.FocusGainedArgs fga) [instance] :201
void KeepFocusInView::OnGotFocus(uObject* s, ::g::Fuse::Input::FocusGainedArgs* fga)
{
    Target(::g::Fuse::Input::Focus::FocusedNode());
}

// private void OnLostFocus(object s, object a) [instance] :206
void KeepFocusInView::OnLostFocus(uObject* s, uObject* a)
{
    Target(NULL);
}

// public generated KeepFocusInView New() [static] :185
KeepFocusInView* KeepFocusInView::New2()
{
    KeepFocusInView* obj1 = (KeepFocusInView*)uNew(KeepFocusInView_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Gestures\0.18.8\$.uno(181)
// -----------------------------------------------------------

// public sealed class KeepInView :181
// {
::g::Fuse::Behavior_type* KeepInView_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(KeepInView);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.Gestures.KeepInView", options);
    type->SetBase(::g::Fuse::Gestures::KeepInViewCommon_typeof());
    type->fp_ctor_ = (void*)KeepInView__New2_fn;
    type->SetFields(6);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)KeepInView__New2_fn, 0, true, KeepInView_typeof(), 0));
    return type;
}

// public generated KeepInView() :181
void KeepInView__ctor_2_fn(KeepInView* __this)
{
    __this->ctor_2();
}

// public generated KeepInView New() :181
void KeepInView__New2_fn(KeepInView** __retval)
{
    *__retval = KeepInView::New2();
}

// public generated KeepInView() [instance] :181
void KeepInView::ctor_2()
{
    ctor_1();
}

// public generated KeepInView New() [static] :181
KeepInView* KeepInView::New2()
{
    KeepInView* obj1 = (KeepInView*)uNew(KeepInView_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Gestures\0.18.8\$.uno(103)
// -----------------------------------------------------------

// public class KeepInViewCommon :103
// {
::g::Fuse::Behavior_type* KeepInViewCommon_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(KeepInViewCommon);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.Gestures.KeepInViewCommon", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_ctor_ = (void*)KeepInViewCommon__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))KeepInViewCommon__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))KeepInViewCommon__OnUnrooted_fn;
    ::TYPES[20] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[27] = ::g::Fuse::PlacedHandler_typeof();
    ::TYPES[2] = ::g::Fuse::Behavior_typeof();
    ::TYPES[12] = ::g::Uno::Bool_typeof();
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    type->SetFields(3,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::KeepInViewCommon, _attached), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Gestures::KeepInViewCommon, _rootElement), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Gestures::KeepInViewCommon, _target), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_Target", NULL, (void*)KeepInViewCommon__get_Target_fn, 0, false, ::g::Fuse::Node_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)KeepInViewCommon__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()));
    return type;
}

// internal KeepInViewCommon() :105
void KeepInViewCommon__ctor_1_fn(KeepInViewCommon* __this)
{
    __this->ctor_1();
}

// private void AttachElement() :164
void KeepInViewCommon__AttachElement_fn(KeepInViewCommon* __this)
{
    __this->AttachElement();
}

// internal KeepInViewCommon New() :105
void KeepInViewCommon__New1_fn(KeepInViewCommon** __retval)
{
    *__retval = KeepInViewCommon::New1();
}

// protected override void OnRooted(Fuse.Node parentNode) :132
void KeepInViewCommon__OnRooted_fn(KeepInViewCommon* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    __this->_rootElement = uAs< ::g::Fuse::Elements::Element*>(__this->ParentNode(), ::TYPES[20/*Fuse.Elements.Element*/]);

    if (__this->_rootElement != NULL)
    {
        uPtr(__this->_rootElement)->add_Placed(uDelegate::New(::TYPES[27/*Fuse.PlacedHandler*/], (void*)KeepInViewCommon__Update_fn, __this));
        __this->AttachElement();
    }
}

// protected override void OnUnrooted(Fuse.Node parentNode) :144
void KeepInViewCommon__OnUnrooted_fn(KeepInViewCommon* __this, ::g::Fuse::Node* parentNode)
{
    if (__this->_rootElement != NULL)
    {
        uPtr(__this->_rootElement)->remove_Placed(uDelegate::New(::TYPES[27/*Fuse.PlacedHandler*/], (void*)KeepInViewCommon__Update_fn, __this));
        __this->ReleaseElement();
    }

    ::g::Fuse::Behavior__OnUnrooted_fn(__this, parentNode);
}

// private void ReleaseElement() :155
void KeepInViewCommon__ReleaseElement_fn(KeepInViewCommon* __this)
{
    __this->ReleaseElement();
}

// public Fuse.Node get_Target() :111
void KeepInViewCommon__get_Target_fn(KeepInViewCommon* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Target();
}

// public void set_Target(Fuse.Node value) :112
void KeepInViewCommon__set_Target_fn(KeepInViewCommon* __this, ::g::Fuse::Node* value)
{
    __this->Target(value);
}

// private void Update(object s, object a) :174
void KeepInViewCommon__Update_fn(KeepInViewCommon* __this, uObject* s, uObject* a)
{
    __this->Update(s, a);
}

// internal KeepInViewCommon() [instance] :105
void KeepInViewCommon::ctor_1()
{
    ctor_();
}

// private void AttachElement() [instance] :164
void KeepInViewCommon::AttachElement()
{
    if (_target == NULL)
        return;

    uPtr(_target)->add_Placed(uDelegate::New(::TYPES[27/*Fuse.PlacedHandler*/], (void*)KeepInViewCommon__Update_fn, this));
    _attached = true;
    Update(NULL, NULL);
}

// private void ReleaseElement() [instance] :155
void KeepInViewCommon::ReleaseElement()
{
    if (!_attached)
        return;

    uPtr(_target)->remove_Placed(uDelegate::New(::TYPES[27/*Fuse.PlacedHandler*/], (void*)KeepInViewCommon__Update_fn, this));
    _attached = false;
}

// public Fuse.Node get_Target() [instance] :111
::g::Fuse::Node* KeepInViewCommon::Target()
{
    return _target;
}

// public void set_Target(Fuse.Node value) [instance] :112
void KeepInViewCommon::Target(::g::Fuse::Node* value)
{
    ReleaseElement();
    ::g::Fuse::Node* v = value;

    while (v != NULL)
    {
        _target = uAs< ::g::Fuse::Elements::Element*>(v, ::TYPES[20/*Fuse.Elements.Element*/]);

        if (_target != NULL)
            break;

        v = uPtr(v)->Parent();
    }

    AttachElement();
}

// private void Update(object s, object a) [instance] :174
void KeepInViewCommon::Update(uObject* s, uObject* a)
{
    if (_target != NULL)
        uPtr(_target)->BringIntoView();
}

// internal KeepInViewCommon New() [static] :105
KeepInViewCommon* KeepInViewCommon::New1()
{
    KeepInViewCommon* obj1 = (KeepInViewCommon*)uNew(KeepInViewCommon_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Gestures\0.18.8\$.uno(231)
// -----------------------------------------------------------

// public sealed class LongPressed :231
// {
::g::Fuse::Triggers::Trigger_type* LongPressed_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.ObjectSize = sizeof(LongPressed);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.LongPressed", options);
    type->SetBase(::g::Fuse::Gestures::ClickerTrigger_typeof());
    type->fp_ctor_ = (void*)LongPressed__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))LongPressed__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))LongPressed__OnUnrooted_fn;
    ::TYPES[3] = ::g::Uno::Delegate_typeof();
    ::TYPES[28] = ::g::Fuse::Gestures::LongPressedHandler_typeof();
    ::TYPES[5] = uObject_typeof();
    ::TYPES[2] = ::g::Fuse::Behavior_typeof();
    ::TYPES[6] = ::g::Fuse::Gestures::Clicker_typeof();
    ::TYPES[7] = ::g::Fuse::Gestures::ClickerTrigger_typeof();
    ::TYPES[8] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    type->SetFields(15,
        ::g::Fuse::Gestures::LongPressedHandler_typeof(), offsetof(::g::Fuse::Gestures::LongPressed, Handler1), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("add_Handler", NULL, (void*)LongPressed__add_Handler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::LongPressedHandler_typeof()),
        new uFunction("remove_Handler", NULL, (void*)LongPressed__remove_Handler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::LongPressedHandler_typeof()),
        new uFunction(".ctor", NULL, (void*)LongPressed__New1_fn, 0, true, LongPressed_typeof(), 0));
    return type;
}

// public generated LongPressed() :231
void LongPressed__ctor_3_fn(LongPressed* __this)
{
    __this->ctor_3();
}

// public generated void add_Handler(Fuse.Gestures.LongPressedHandler value) :233
void LongPressed__add_Handler_fn(LongPressed* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.Gestures.LongPressedHandler value) :233
void LongPressed__remove_Handler_fn(LongPressed* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// public generated LongPressed New() :231
void LongPressed__New1_fn(LongPressed** __retval)
{
    *__retval = LongPressed::New1();
}

// private void OnLongPressed(Fuse.Input.PointerEventArgs args, int count) :247
void LongPressed__OnLongPressed_fn(LongPressed* __this, ::g::Fuse::Input::PointerEventArgs* args, int* count)
{
    __this->OnLongPressed(args, *count);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :235
void LongPressed__OnRooted_fn(LongPressed* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Gestures::ClickerTrigger__OnRooted_fn(__this, parentNode);
    uPtr(__this->Clicker)->add_LongPressedEvent(uDelegate::New(::TYPES[8/*Fuse.Gestures.ClickerEventHandler*/], (void*)LongPressed__OnLongPressed_fn, __this));
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :241
void LongPressed__OnUnrooted_fn(LongPressed* __this, ::g::Fuse::Node* parentNode)
{
    uPtr(__this->Clicker)->remove_LongPressedEvent(uDelegate::New(::TYPES[8/*Fuse.Gestures.ClickerEventHandler*/], (void*)LongPressed__OnLongPressed_fn, __this));
    ::g::Fuse::Gestures::ClickerTrigger__OnUnrooted_fn(__this, parentNode);
}

// public generated LongPressed() [instance] :231
void LongPressed::ctor_3()
{
    ctor_2();
}

// public generated void add_Handler(Fuse.Gestures.LongPressedHandler value) [instance] :233
void LongPressed::add_Handler(uDelegate* value)
{
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[28/*Fuse.Gestures.LongPressedHandler*/]);
}

// public generated void remove_Handler(Fuse.Gestures.LongPressedHandler value) [instance] :233
void LongPressed::remove_Handler(uDelegate* value)
{
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[28/*Fuse.Gestures.LongPressedHandler*/]);
}

// private void OnLongPressed(Fuse.Input.PointerEventArgs args, int count) [instance] :247
void LongPressed::OnLongPressed(::g::Fuse::Input::PointerEventArgs* args, int count)
{
    Pulse();

    if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
        uPtr(Handler1)->Invoke(2, this, (::g::Fuse::Gestures::LongPressedArgs*)::g::Fuse::Gestures::LongPressedArgs::New3(args, ParentNode()));
}

// public generated LongPressed New() [static] :231
LongPressed* LongPressed::New1()
{
    LongPressed* obj1 = (LongPressed*)uNew(LongPressed_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Gestures\0.18.8\$.uno(221)
// -----------------------------------------------------------

// public sealed class LongPressedArgs :221
// {
::g::Fuse::NodeEventArgs_type* LongPressedArgs_typeof()
{
    static uSStrong< ::g::Fuse::NodeEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LongPressedArgs);
    options.TypeSize = sizeof(::g::Fuse::NodeEventArgs_type);
    type = (::g::Fuse::NodeEventArgs_type*)uClassType::New("Fuse.Gestures.LongPressedArgs", options);
    type->SetBase(::g::Fuse::Input::CustomPointerEventArgs_typeof());
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::NodeEventArgs__Fuse_Scripting_IScriptEvent_Serialize_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::NodeEventArgs_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)LongPressedArgs__New3_fn, 0, true, LongPressedArgs_typeof(), 2, ::g::Fuse::Input::PointerEventArgs_typeof(), ::g::Fuse::Node_typeof()));
    return type;
}

// public LongPressedArgs(Fuse.Input.PointerEventArgs args, Fuse.Node node) :223
void LongPressedArgs__ctor_4_fn(LongPressedArgs* __this, ::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node)
{
    __this->ctor_4(args, node);
}

// public LongPressedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Node node) :223
void LongPressedArgs__New3_fn(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node, LongPressedArgs** __retval)
{
    *__retval = LongPressedArgs::New3(args, node);
}

// public LongPressedArgs(Fuse.Input.PointerEventArgs args, Fuse.Node node) [instance] :223
void LongPressedArgs::ctor_4(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node)
{
    ctor_3(args, node);
}

// public LongPressedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Node node) [static] :223
LongPressedArgs* LongPressedArgs::New3(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node)
{
    LongPressedArgs* obj1 = (LongPressedArgs*)uNew(LongPressedArgs_typeof());
    obj1->ctor_4(args, node);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Gestures\0.18.8\$.uno(229)
// -----------------------------------------------------------

// public delegate void LongPressedHandler(object sender, Fuse.Gestures.LongPressedArgs args) :229
uDelegateType* LongPressedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Gestures.LongPressedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Gestures::LongPressedArgs_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Gestures\0.18.8\$.uno(854)
// -----------------------------------------------------------

// private enum Trackball.MoveMode :854
uEnumType* Trackball__MoveMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.Trackball.MoveMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Stop", 0LL,
        "Attraction", 1LL,
        "Friction", 2LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.18.8\Gestures\$.uno(400)
// --------------------------------------------------------------------

// private enum Scroller.MoveUserFlags :400
uEnumType* Scroller__MoveUserFlags_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.Scroller.MoveUserFlags", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", 0LL,
        "Started", 1LL,
        "Release", 2LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Gestures\0.18.8\$.uno(265)
// -----------------------------------------------------------

// public sealed class Pressed :265
// {
::g::Fuse::Triggers::Trigger_type* Pressed_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.ObjectSize = sizeof(Pressed);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.Pressed", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)Pressed__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Pressed__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Pressed__OnUnrooted_fn;
    ::TYPES[15] = ::g::Fuse::Input::Pointer_typeof();
    ::TYPES[2] = ::g::Fuse::Behavior_typeof();
    ::TYPES[16] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    type->SetFields(14);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Pressed__New1_fn, 0, true, Pressed_typeof(), 0));
    return type;
}

// public generated Pressed() :265
void Pressed__ctor_2_fn(Pressed* __this)
{
    __this->ctor_2();
}

// public generated Pressed New() :265
void Pressed__New1_fn(Pressed** __retval)
{
    *__retval = Pressed::New1();
}

// private void OnPressed(object s, object a) :279
void Pressed__OnPressed_fn(Pressed* __this, uObject* s, uObject* a)
{
    __this->OnPressed(s, a);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :267
void Pressed__OnRooted_fn(Pressed* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), __this->ParentNode(), uDelegate::New(::TYPES[16/*Fuse.Input.PointerPressedHandler*/], (void*)Pressed__OnPressed_fn, __this));
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :273
void Pressed__OnUnrooted_fn(Pressed* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), __this->ParentNode(), uDelegate::New(::TYPES[16/*Fuse.Input.PointerPressedHandler*/], (void*)Pressed__OnPressed_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public generated Pressed() [instance] :265
void Pressed::ctor_2()
{
    ctor_1();
}

// private void OnPressed(object s, object a) [instance] :279
void Pressed::OnPressed(uObject* s, uObject* a)
{
    Pulse();
}

// public generated Pressed New() [static] :265
Pressed* Pressed::New1()
{
    Pressed* obj1 = (Pressed*)uNew(Pressed_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Gestures\0.18.8\$.uno(375)
// -----------------------------------------------------------

// public sealed class Released :375
// {
::g::Fuse::Triggers::Trigger_type* Released_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.ObjectSize = sizeof(Released);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.Released", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)Released__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Released__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Released__OnUnrooted_fn;
    ::TYPES[15] = ::g::Fuse::Input::Pointer_typeof();
    ::TYPES[2] = ::g::Fuse::Behavior_typeof();
    ::TYPES[17] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    type->SetFields(14);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Released__New1_fn, 0, true, Released_typeof(), 0));
    return type;
}

// public generated Released() :375
void Released__ctor_2_fn(Released* __this)
{
    __this->ctor_2();
}

// public generated Released New() :375
void Released__New1_fn(Released** __retval)
{
    *__retval = Released::New1();
}

// private void OnReleased(object s, object a) :389
void Released__OnReleased_fn(Released* __this, uObject* s, uObject* a)
{
    __this->OnReleased(s, a);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :377
void Released__OnRooted_fn(Released* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), __this->ParentNode(), uDelegate::New(::TYPES[17/*Fuse.Input.PointerReleasedHandler*/], (void*)Released__OnReleased_fn, __this));
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :383
void Released__OnUnrooted_fn(Released* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), __this->ParentNode(), uDelegate::New(::TYPES[17/*Fuse.Input.PointerReleasedHandler*/], (void*)Released__OnReleased_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public generated Released() [instance] :375
void Released::ctor_2()
{
    ctor_1();
}

// private void OnReleased(object s, object a) [instance] :389
void Released::OnReleased(uObject* s, uObject* a)
{
    Pulse();
}

// public generated Released New() [static] :375
Released* Released::New1()
{
    Released* obj1 = (Released*)uNew(Released_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.18.8\Gestures\$.uno(11)
// -------------------------------------------------------------------

// public sealed class ScrollableGoto :11
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* ScrollableGoto_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.ObjectSize = sizeof(ScrollableGoto);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Gestures.ScrollableGoto", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_ctor_ = (void*)ScrollableGoto__New1_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))ScrollableGoto__Perform_fn;
    ::TYPES[29] = ::g::Fuse::Controls::ScrollView_typeof();
    type->SetFields(7,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::ScrollableGoto, _hasPosition), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::ScrollableGoto, _hasRelativePosition), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::ScrollableGoto, _position), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::ScrollableGoto, _relativePosition), 0,
        ::g::Fuse::Controls::ScrollView_typeof(), offsetof(::g::Fuse::Gestures::ScrollableGoto, _Target), 0);
    type->Reflection.SetFunctions(7,
        new uFunction(".ctor", NULL, (void*)ScrollableGoto__New1_fn, 0, true, ScrollableGoto_typeof(), 0),
        new uFunction("get_Position", NULL, (void*)ScrollableGoto__get_Position_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_Position", NULL, (void*)ScrollableGoto__set_Position_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_RelativePosition", NULL, (void*)ScrollableGoto__get_RelativePosition_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_RelativePosition", NULL, (void*)ScrollableGoto__set_RelativePosition_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_Target", NULL, (void*)ScrollableGoto__get_Target_fn, 0, false, ::g::Fuse::Controls::ScrollView_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)ScrollableGoto__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::ScrollView_typeof()));
    return type;
}

// public generated ScrollableGoto() :11
void ScrollableGoto__ctor_1_fn(ScrollableGoto* __this)
{
    __this->ctor_1();
}

// public generated ScrollableGoto New() :11
void ScrollableGoto__New1_fn(ScrollableGoto** __retval)
{
    *__retval = ScrollableGoto::New1();
}

// protected override sealed void Perform(Fuse.Node target) :39
void ScrollableGoto__Perform_fn(ScrollableGoto* __this, ::g::Fuse::Node* target)
{
    if (__this->Target() == NULL)
        return;

    if (__this->_hasRelativePosition)
        uPtr(__this->Target())->Goto(::g::Uno::Float2__op_Addition2(uPtr(__this->Target())->MinScroll(), ::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(__this->Target())->MaxScroll(), uPtr(__this->Target())->MinScroll()), __this->_relativePosition)));
    else if (__this->_hasPosition)
        uPtr(__this->Target())->Goto(__this->_position);
}

// public float2 get_Position() :19
void ScrollableGoto__get_Position_fn(ScrollableGoto* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Position();
}

// public void set_Position(float2 value) :20
void ScrollableGoto__set_Position_fn(ScrollableGoto* __this, ::g::Uno::Float2* value)
{
    __this->Position(*value);
}

// public float2 get_RelativePosition() :31
void ScrollableGoto__get_RelativePosition_fn(ScrollableGoto* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->RelativePosition();
}

// public void set_RelativePosition(float2 value) :32
void ScrollableGoto__set_RelativePosition_fn(ScrollableGoto* __this, ::g::Uno::Float2* value)
{
    __this->RelativePosition(*value);
}

// public generated Fuse.Controls.ScrollView get_Target() :13
void ScrollableGoto__get_Target_fn(ScrollableGoto* __this, ::g::Fuse::Controls::ScrollView** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Controls.ScrollView value) :13
void ScrollableGoto__set_Target_fn(ScrollableGoto* __this, ::g::Fuse::Controls::ScrollView* value)
{
    __this->Target(value);
}

// public generated ScrollableGoto() [instance] :11
void ScrollableGoto::ctor_1()
{
    ctor_();
}

// public float2 get_Position() [instance] :19
::g::Uno::Float2 ScrollableGoto::Position()
{
    return _position;
}

// public void set_Position(float2 value) [instance] :20
void ScrollableGoto::Position(::g::Uno::Float2 value)
{
    _position = value;
    _hasPosition = true;
}

// public float2 get_RelativePosition() [instance] :31
::g::Uno::Float2 ScrollableGoto::RelativePosition()
{
    return _relativePosition;
}

// public void set_RelativePosition(float2 value) [instance] :32
void ScrollableGoto::RelativePosition(::g::Uno::Float2 value)
{
    _relativePosition = value;
    _hasRelativePosition = true;
}

// public generated Fuse.Controls.ScrollView get_Target() [instance] :13
::g::Fuse::Controls::ScrollView* ScrollableGoto::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Controls.ScrollView value) [instance] :13
void ScrollableGoto::Target(::g::Fuse::Controls::ScrollView* value)
{
    _Target = value;
}

// public generated ScrollableGoto New() [static] :11
ScrollableGoto* ScrollableGoto::New1()
{
    ScrollableGoto* obj1 = (ScrollableGoto*)uNew(ScrollableGoto_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.18.8\Gestures\$.uno(64)
// -------------------------------------------------------------------

// public enum ScrollDirections :64
uEnumType* ScrollDirections_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.ScrollDirections", ::g::Uno::Int_typeof(), 8);
    type->SetLiterals(
        "Left", 1LL,
        "Right", 2LL,
        "Up", 4LL,
        "Down", 8LL,
        "Horizontal", 3LL,
        "Vertical", 12LL,
        "Both", 15LL,
        "All", 15LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Controls\0.18.8\Gestures\$.uno(76)
// -------------------------------------------------------------------

// public sealed class Scroller :76
// {
// static Scroller() :76
static void Scroller__cctor__fn(uType* __type)
{
    Scroller::_horizontalGesture_ = ::g::Fuse::Gestures::SwipeGestureHelper::New1(10.0f, uArray::Init< ::g::Fuse::Gestures::DegreeSpan*>(::TYPES[30/*Fuse.Gestures.DegreeSpan[]*/], 2, (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(45.0f, 135.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-45.0f, -135.0f)));
    Scroller::_verticalGesture_ = ::g::Fuse::Gestures::SwipeGestureHelper::New1(10.0f, uArray::Init< ::g::Fuse::Gestures::DegreeSpan*>(::TYPES[30/*Fuse.Gestures.DegreeSpan[]*/], 3, (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-45.0f, 45.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-135.0f, -180.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(135.0f, 180.0f)));
}

::g::Fuse::Behavior_type* Scroller_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 21;
    options.ObjectSize = sizeof(Scroller);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.Gestures.Scroller", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_ctor_ = (void*)Scroller__New1_fn;
    type->fp_cctor_ = Scroller__cctor__fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Scroller__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Scroller__OnUnrooted_fn;
    ::STRINGS[1] = uString::Const("Scroller can only be used in a ScrollView");
    ::STRINGS[2] = uString::Const("Invalid tear-down of pointer events");
    ::TYPES[30] = ::g::Fuse::Gestures::DegreeSpan_typeof()->Array();
    ::TYPES[31] = ::g::Experimental::Physics::BoundedRegion2D_typeof();
    ::TYPES[32] = ::g::Experimental::Physics::PointerVelocity_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[33] = ::g::Experimental::Physics::Simulation_typeof();
    ::TYPES[12] = ::g::Uno::Bool_typeof();
    ::TYPES[13] = ::g::Uno::Action_typeof();
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[34] = ::g::Experimental::Physics::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[29] = ::g::Fuse::Controls::ScrollView_typeof();
    ::TYPES[5] = uObject_typeof();
    ::TYPES[35] = ::g::Uno::Int_typeof();
    ::TYPES[36] = ::g::Uno::Float_typeof();
    ::TYPES[9] = ::g::Fuse::Input::PointerEventArgs_typeof();
    ::TYPES[37] = ::g::Fuse::RequestBringIntoViewArgs_typeof();
    ::TYPES[2] = ::g::Fuse::Behavior_typeof();
    ::TYPES[38] = ::g::Fuse::RequestBringIntoViewHandler_typeof();
    ::TYPES[10] = ::g::Fuse::Time_typeof();
    ::TYPES[39] = ::g::Uno::Float2_typeof();
    ::TYPES[15] = ::g::Fuse::Input::Pointer_typeof();
    ::TYPES[16] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[18] = ::g::Fuse::Input::PointerMovedHandler_typeof();
    ::TYPES[17] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    type->SetFields(3,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _delayStart), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _down), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _hasUpdated), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _isHardCapture), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _pendingBringIntoView), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _pointerListening), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _pointerPos), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _prevPos), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _prevTime), 0,
        ::g::Experimental::Physics::BoundedRegion2D_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _region), 0,
        ::g::Fuse::Controls::ScrollView_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _scrollable), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _softCaptureCurrent), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _softCaptureStart), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _startPos), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Scroller, _userScroll), 0,
        ::g::Experimental::Physics::PointerVelocity_typeof()->MakeType(::g::Uno::Float2_typeof()), offsetof(::g::Fuse::Gestures::Scroller, _velocity), 0,
        ::g::Fuse::Gestures::SwipeGestureHelper_typeof(), (uintptr_t)&::g::Fuse::Gestures::Scroller::_horizontalGesture_, uFieldFlagsStatic,
        ::g::Fuse::Gestures::SwipeGestureHelper_typeof(), (uintptr_t)&::g::Fuse::Gestures::Scroller::_verticalGesture_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(8,
        new uFunction("CheckLimits", NULL, (void*)Scroller__CheckLimits_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_DelayStart", NULL, (void*)Scroller__get_DelayStart_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_DelayStart", NULL, (void*)Scroller__set_DelayStart_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("Goto", NULL, (void*)Scroller__Goto_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction(".ctor", NULL, (void*)Scroller__New1_fn, 0, true, Scroller_typeof(), 0),
        new uFunction("get_OverflowExtent", NULL, (void*)Scroller__get_OverflowExtent_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_UserScroll", NULL, (void*)Scroller__get_UserScroll_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_UserScroll", NULL, (void*)Scroller__set_UserScroll_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));
    return type;
}

// public generated Scroller() :76
void Scroller__ctor_1_fn(Scroller* __this)
{
    __this->ctor_1();
}

// public void CheckLimits() :327
void Scroller__CheckLimits_fn(Scroller* __this)
{
    __this->CheckLimits();
}

// private void CheckNeedUpdated([bool off]) :169
void Scroller__CheckNeedUpdated_fn(Scroller* __this, bool* off)
{
    __this->CheckNeedUpdated(*off);
}

// public bool get_DelayStart() :90
void Scroller__get_DelayStart_fn(Scroller* __this, bool* __retval)
{
    *__retval = __this->DelayStart();
}

// public void set_DelayStart(bool value) :91
void Scroller__set_DelayStart_fn(Scroller* __this, bool* value)
{
    __this->DelayStart(*value);
}

// private float2 FromWindow(float2 p) :229
void Scroller__FromWindow_fn(Scroller* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->FromWindow(*p);
}

// public void Goto(float2 position) :352
void Scroller__Goto_fn(Scroller* __this, ::g::Uno::Float2* position)
{
    __this->Goto(*position);
}

// private bool HardCapture(Fuse.Input.PointerEventArgs args) :255
void Scroller__HardCapture_fn(Scroller* __this, ::g::Fuse::Input::PointerEventArgs* args, bool* __retval)
{
    *__retval = __this->HardCapture(args);
}

// private void MoveUser(Fuse.Gestures.Scroller.MoveUserFlags flags) :407
void Scroller__MoveUser_fn(Scroller* __this, int* flags)
{
    __this->MoveUser(*flags);
}

// public generated Scroller New() :76
void Scroller__New1_fn(Scroller** __retval)
{
    *__retval = Scroller::New1();
}

// private void OnLostCapture() :234
void Scroller__OnLostCapture_fn(Scroller* __this)
{
    __this->OnLostCapture();
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) :263
void Scroller__OnPointerMoved_fn(Scroller* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    __this->OnPointerMoved(sender, args);
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) :201
void Scroller__OnPointerPressed_fn(Scroller* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    __this->OnPointerPressed(sender, args);
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) :299
void Scroller__OnPointerReleased_fn(Scroller* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    __this->OnPointerReleased(sender, args);
}

// private void OnRequestBringIntoView(object sender, Fuse.RequestBringIntoViewArgs args) :336
void Scroller__OnRequestBringIntoView_fn(Scroller* __this, uObject* sender, ::g::Fuse::RequestBringIntoViewArgs* args)
{
    __this->OnRequestBringIntoView(sender, args);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :96
void Scroller__OnRooted_fn(Scroller* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    __this->_scrollable = uAs< ::g::Fuse::Controls::ScrollView*>(__this->ParentNode(), ::TYPES[29/*Fuse.Controls.ScrollView*/]);

    if (__this->_scrollable == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[1/*"Scroller ca...*/]));

    uPtr(__this->_scrollable)->_scroller = __this;
    uPtr(__this->_scrollable)->add_RequestBringIntoView(uDelegate::New(::TYPES[38/*Fuse.RequestBringIntoViewHandler*/], (void*)Scroller__OnRequestBringIntoView_fn, __this));
    __this->UpdatePointerEvents(false);
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :109
void Scroller__OnUnrooted_fn(Scroller* __this, ::g::Fuse::Node* parentNode)
{
    uPtr(__this->_scrollable)->remove_RequestBringIntoView(uDelegate::New(::TYPES[38/*Fuse.RequestBringIntoViewHandler*/], (void*)Scroller__OnRequestBringIntoView_fn, __this));
    uPtr(__this->_scrollable)->_scroller = NULL;

    if (__this->_hasUpdated)
    {
        __this->_hasUpdated = false;
        ::g::Fuse::UpdateManager::RemoveAction(uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)Scroller__OnUpdated_fn, __this), 0);
    }

    __this->UpdatePointerEvents(true);
    __this->_scrollable = NULL;
    ::g::Fuse::Behavior__OnUnrooted_fn(__this, parentNode);
}

// private void OnUpdated() :373
void Scroller__OnUpdated_fn(Scroller* __this)
{
    __this->OnUpdated();
}

// public float2 get_OverflowExtent() :432
void Scroller__get_OverflowExtent_fn(Scroller* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->OverflowExtent();
}

// private void PerformBringIntoView() :343
void Scroller__PerformBringIntoView_fn(Scroller* __this)
{
    __this->PerformBringIntoView();
}

// private void SetScrollPosition(float2 position) :382
void Scroller__SetScrollPosition_fn(Scroller* __this, ::g::Uno::Float2* position)
{
    __this->SetScrollPosition(*position);
}

// private void UpdatePointerEvents([bool forceOff]) :142
void Scroller__UpdatePointerEvents_fn(Scroller* __this, bool* forceOff)
{
    __this->UpdatePointerEvents(*forceOff);
}

// private void UpdateScrollMax() :364
void Scroller__UpdateScrollMax_fn(Scroller* __this)
{
    __this->UpdateScrollMax();
}

// public bool get_UserScroll() :129
void Scroller__get_UserScroll_fn(Scroller* __this, bool* __retval)
{
    *__retval = __this->UserScroll();
}

// public void set_UserScroll(bool value) :130
void Scroller__set_UserScroll_fn(Scroller* __this, bool* value)
{
    __this->UserScroll(*value);
}

uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*> Scroller::_horizontalGesture_;
uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*> Scroller::_verticalGesture_;

// public generated Scroller() [instance] :76
void Scroller::ctor_1()
{
    _region = (uObject*)::g::Experimental::Physics::BasicBoundedRegion2D::CreatePoints();
    _velocity = ((::g::Experimental::Physics::PointerVelocity*)::g::Experimental::Physics::PointerVelocity::New1(::TYPES[32/*Experimental.Physics.PointerVelocity<float2>*/]));
    _delayStart = true;
    _userScroll = true;
    _down = -1;
    ctor_();
}

// public void CheckLimits() [instance] :327
void Scroller::CheckLimits()
{
    UpdateScrollMax();

    if (::g::Experimental::Physics::Simulation::IsStatic(uInterface(uPtr(_region), ::TYPES[33/*Experimental.Physics.Simulation*/])))
        ::g::Experimental::Physics::BoundedRegion2D::EndUser(uInterface(uPtr(_region), ::TYPES[31/*Experimental.Physics.BoundedRegion2D*/]), ::g::Uno::Float2__New1(0.0f));

    CheckNeedUpdated(false);
}

// private void CheckNeedUpdated([bool off]) [instance] :169
void Scroller::CheckNeedUpdated(bool off)
{
    bool needUpdated = !::g::Experimental::Physics::Simulation::IsStatic(uInterface(uPtr(_region), ::TYPES[33/*Experimental.Physics.Simulation*/]));

    if (needUpdated == _hasUpdated)
        return;

    if (needUpdated)
    {
        ::g::Fuse::UpdateManager::AddAction(uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)Scroller__OnUpdated_fn, this), 0);
        _hasUpdated = true;
    }
    else if (off)
    {
        ::g::Fuse::UpdateManager::RemoveAction(uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)Scroller__OnUpdated_fn, this), 0);
        _hasUpdated = false;
    }
}

// public bool get_DelayStart() [instance] :90
bool Scroller::DelayStart()
{
    return _delayStart;
}

// public void set_DelayStart(bool value) [instance] :91
void Scroller::DelayStart(bool value)
{
    _delayStart = value;
}

// private float2 FromWindow(float2 p) [instance] :229
::g::Uno::Float2 Scroller::FromWindow(::g::Uno::Float2 p)
{
    return uPtr(uPtr(_scrollable)->Parent())->WindowToLocal(p);
}

// public void Goto(float2 position) [instance] :352
void Scroller::Goto(::g::Uno::Float2 position)
{
    if (_scrollable == NULL)
        return;

    UpdateScrollMax();
    ::g::Experimental::Physics::MotionSimulation::set_Position_ex(uInterface(uPtr(_region), ::TYPES[34/*Experimental.Physics.MotionSimulation<float2>*/]), uCRef(uPtr(_scrollable)->ScrollPosition()));
    ::g::Experimental::Physics::BoundedRegion2D::MoveTo(uInterface(uPtr(_region), ::TYPES[31/*Experimental.Physics.BoundedRegion2D*/]), position);
    CheckNeedUpdated(false);
}

// private bool HardCapture(Fuse.Input.PointerEventArgs args) [instance] :255
bool Scroller::HardCapture(::g::Fuse::Input::PointerEventArgs* args)
{
    _isHardCapture = uPtr(args)->TryHardCapture(this, uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)Scroller__OnLostCapture_fn, this), NULL);

    if (!_isHardCapture)
        OnLostCapture();

    return _isHardCapture;
}

// private void MoveUser(Fuse.Gestures.Scroller.MoveUserFlags flags) [instance] :407
void Scroller::MoveUser(int flags)
{
    ::g::Uno::Float2 diff = ::g::Uno::Float2__op_Subtraction2(FromWindow(_prevPos), FromWindow(_pointerPos));

    if ((flags & 2) == 2)
        diff = ::g::Uno::Float2__New1(0.0f);

    _prevPos = _pointerPos;
    double t = ::g::Uno::Diagnostics::Clock::GetSeconds();
    double elapsed = t - _prevTime;
    _prevTime = t;

    if ((flags & 1) == 1)
    {
        ::g::Experimental::Physics::MotionSimulation::set_Position_ex(uInterface(uPtr(_region), ::TYPES[34/*Experimental.Physics.MotionSimulation<float2>*/]), uCRef(uPtr(_scrollable)->ScrollPosition()));
        ::g::Experimental::Physics::BoundedRegion2D::StepUser(uInterface(uPtr(_region), ::TYPES[31/*Experimental.Physics.BoundedRegion2D*/]), diff);
    }

    ::g::Experimental::Physics::PointerVelocity__AddSample_fn(uPtr(_velocity), uCRef(FromWindow(_pointerPos)), uCRef((float)elapsed), uCRef(!_isHardCapture));
}

// private void OnLostCapture() [instance] :234
void Scroller::OnLostCapture()
{
    _down = -1;

    if (::g::Experimental::Physics::BoundedRegion2D::IsUser(uInterface(uPtr(_region), ::TYPES[31/*Experimental.Physics.BoundedRegion2D*/])))
        ::g::Experimental::Physics::BoundedRegion2D::EndUser(uInterface(uPtr(_region), ::TYPES[31/*Experimental.Physics.BoundedRegion2D*/]), ::g::Uno::Float2__New1(0.0f));

    ::g::Fuse::Input::Pointer::ReleaseAllCaptures(this);
    CheckNeedUpdated(false);
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) [instance] :263
void Scroller::OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    if (_down != uPtr(args)->PointIndex())
        return;

    if (!::g::Fuse::Input::Pointer::IsPressed1(_down))
        OnLostCapture();

    if (!_isHardCapture)
    {
        _softCaptureCurrent = uPtr(args)->WindowPoint();
        ::g::Uno::Float2 diff = ::g::Uno::Float2__op_Subtraction2(_softCaptureCurrent, _softCaptureStart);

        if (uPtr(_scrollable)->AllowedScrollDirections() == 15)
        {
            if (::g::Uno::Vector::Length(diff) > 10.0f)
                HardCapture(args);
        }

        if (uPtr(_scrollable)->AllowedScrollDirections() == 3)
        {
            if (uPtr(Scroller::_horizontalGesture())->IsWithinBounds(diff))
                HardCapture(args);
        }

        if (uPtr(_scrollable)->AllowedScrollDirections() == 12)
        {
            if (uPtr(Scroller::_verticalGesture())->IsWithinBounds(diff))
                HardCapture(args);
        }
    }

    _pointerPos = uPtr(args)->WindowPoint();
    MoveUser((!_delayStart || _isHardCapture) ? 1 : 0);
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) [instance] :201
void Scroller::OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    ::g::Uno::Float2 ret2;

    if (_down == -1)
    {
        bool captured = false;
        _isHardCapture = false;

        if (::g::Uno::Vector::Length((::g::Experimental::Physics::MotionSimulation::get_Velocity_ex(uInterface(uPtr(_region), ::TYPES[34/*Experimental.Physics.MotionSimulation<float2>*/]), &ret2), ret2)) > 100.0f)
            captured = HardCapture(args);
        else
            captured = uPtr(args)->TrySoftCapture(this, uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)Scroller__OnLostCapture_fn, this), NULL);

        if (captured)
        {
            _softCaptureStart = (_softCaptureCurrent = uPtr(args)->WindowPoint());
            _down = args->PointIndex();
            _pointerPos = args->WindowPoint();
            _prevPos = (_startPos = _pointerPos);
            _prevTime = ::g::Uno::Diagnostics::Clock::GetSeconds();
            ::g::Experimental::Physics::PointerVelocity__Reset1_fn(uPtr(_velocity), uCRef(FromWindow(_pointerPos)), uCRef(::g::Uno::Float2__New1(0.0f)));
            ::g::Experimental::Physics::BoundedRegion2D::StartUser(uInterface(uPtr(_region), ::TYPES[31/*Experimental.Physics.BoundedRegion2D*/]));
            ::g::Experimental::Physics::MotionSimulation::set_Position_ex(uInterface(uPtr(_region), ::TYPES[34/*Experimental.Physics.MotionSimulation<float2>*/]), uCRef(uPtr(_scrollable)->ScrollPosition()));
            CheckNeedUpdated(false);
        }
    }
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) [instance] :299
void Scroller::OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    ::g::Uno::Float2 ret3;

    if (_down == uPtr(args)->PointIndex())
    {
        if (_delayStart && !_isHardCapture)
        {
            OnLostCapture();
            return;
        }

        _down = -1;
        ::g::Fuse::Input::Pointer::ReleaseAllCaptures(this);

        if (::g::Experimental::Physics::BoundedRegion2D::IsUser(uInterface(uPtr(_region), ::TYPES[31/*Experimental.Physics.BoundedRegion2D*/])))
        {
            _pointerPos = uPtr(args)->WindowPoint();
            MoveUser(3);
            ::g::Experimental::Physics::BoundedRegion2D::EndUser(uInterface(uPtr(_region), ::TYPES[31/*Experimental.Physics.BoundedRegion2D*/]), ::g::Uno::Float2__op_UnaryNegation((::g::Experimental::Physics::PointerVelocity__get_CurrentVelocity_fn(uPtr(_velocity), &ret3), ret3)));
            CheckNeedUpdated(false);
        }
    }
}

// private void OnRequestBringIntoView(object sender, Fuse.RequestBringIntoViewArgs args) [instance] :336
void Scroller::OnRequestBringIntoView(uObject* sender, ::g::Fuse::RequestBringIntoViewArgs* args)
{
    _pendingBringIntoView = uPtr(args)->Node();
    ::g::Fuse::UpdateManager::PerformNextFrame(uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)Scroller__PerformBringIntoView_fn, this), 0);
}

// private void OnUpdated() [instance] :373
void Scroller::OnUpdated()
{
    ::g::Uno::Float2 ret4;
    UpdateScrollMax();
    ::g::Experimental::Physics::Simulation::Update(uInterface(uPtr(_region), ::TYPES[33/*Experimental.Physics.Simulation*/]), ::g::Fuse::Time::FrameInterval());
    SetScrollPosition((::g::Experimental::Physics::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::TYPES[34/*Experimental.Physics.MotionSimulation<float2>*/]), &ret4), ret4));
    CheckNeedUpdated(true);
}

// public float2 get_OverflowExtent() [instance] :432
::g::Uno::Float2 Scroller::OverflowExtent()
{
    return ::g::Experimental::Physics::BoundedRegion2D::OverflowExtent(uInterface(uPtr(_region), ::TYPES[31/*Experimental.Physics.BoundedRegion2D*/]));
}

// private void PerformBringIntoView() [instance] :343
void Scroller::PerformBringIntoView()
{
    if (_pendingBringIntoView == NULL)
        return;

    Goto(uPtr(_scrollable)->GetNodeScrollPosition(_pendingBringIntoView));
    _pendingBringIntoView = NULL;
}

// private void SetScrollPosition(float2 position) [instance] :382
void Scroller::SetScrollPosition(::g::Uno::Float2 position)
{
    if (_scrollable == NULL)
        return;

    if (!((uPtr(_scrollable)->AllowedScrollDirections() & 3) == 3))
        position.X = 0.0f;

    if (!((uPtr(_scrollable)->AllowedScrollDirections() & 12) == 12))
        position.Y = 0.0f;

    if (uPtr(_scrollable)->SnapToPixels())
        position = uPtr(_scrollable)->InternSnap(position);

    if (::g::Uno::Vector::LengthSquared(::g::Uno::Float2__op_Subtraction2(position, uPtr(_scrollable)->ScrollPosition())) > 1e-05f)
        uPtr(_scrollable)->SetScrollPosition(position, this);
}

// private void UpdatePointerEvents([bool forceOff]) [instance] :142
void Scroller::UpdatePointerEvents(bool forceOff)
{
    bool shouldListen = (!forceOff && (_scrollable != NULL)) && _userScroll;

    if (shouldListen == _pointerListening)
        return;

    if (shouldListen)
    {
        ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), _scrollable, uDelegate::New(::TYPES[16/*Fuse.Input.PointerPressedHandler*/], (void*)Scroller__OnPointerPressed_fn, this));
        ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), _scrollable, uDelegate::New(::TYPES[18/*Fuse.Input.PointerMovedHandler*/], (void*)Scroller__OnPointerMoved_fn, this));
        ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), _scrollable, uDelegate::New(::TYPES[17/*Fuse.Input.PointerReleasedHandler*/], (void*)Scroller__OnPointerReleased_fn, this));
    }
    else if (_scrollable != NULL)
    {
        ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), _scrollable, uDelegate::New(::TYPES[16/*Fuse.Input.PointerPressedHandler*/], (void*)Scroller__OnPointerPressed_fn, this));
        ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), _scrollable, uDelegate::New(::TYPES[18/*Fuse.Input.PointerMovedHandler*/], (void*)Scroller__OnPointerMoved_fn, this));
        ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), _scrollable, uDelegate::New(::TYPES[17/*Fuse.Input.PointerReleasedHandler*/], (void*)Scroller__OnPointerReleased_fn, this));
    }
    else
        U_THROW(::g::Uno::Exception::New2(::STRINGS[2/*"Invalid tea...*/]));

    _pointerListening = shouldListen;
}

// private void UpdateScrollMax() [instance] :364
void Scroller::UpdateScrollMax()
{
    if (_scrollable == NULL)
        return;

    ::g::Experimental::Physics::BoundedRegion2D::MaxPosition(uInterface(uPtr(_region), ::TYPES[31/*Experimental.Physics.BoundedRegion2D*/]), uPtr(_scrollable)->MaxScroll());
    ::g::Experimental::Physics::BoundedRegion2D::MinPosition(uInterface(uPtr(_region), ::TYPES[31/*Experimental.Physics.BoundedRegion2D*/]), uPtr(_scrollable)->MinScroll());
}

// public bool get_UserScroll() [instance] :129
bool Scroller::UserScroll()
{
    return _userScroll;
}

// public void set_UserScroll(bool value) [instance] :130
void Scroller::UserScroll(bool value)
{
    if (_userScroll != value)
    {
        _userScroll = value;
        UpdatePointerEvents(false);
        OnLostCapture();
    }
}

// public generated Scroller New() [static] :76
Scroller* Scroller::New1()
{
    Scroller* obj1 = (Scroller*)uNew(Scroller_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Gestures\0.18.8\$.uno(645)
// -----------------------------------------------------------

// public sealed class SetSwipeActive :645
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* SetSwipeActive_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.ObjectSize = sizeof(SetSwipeActive);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Gestures.SetSwipeActive", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_ctor_ = (void*)SetSwipeActive__New1_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))SetSwipeActive__Perform_fn;
    type->SetFields(7,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::SetSwipeActive, _Bypass), 0,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(::g::Fuse::Gestures::SetSwipeActive, _Target), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::SetSwipeActive, _Value), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_Bypass", NULL, (void*)SetSwipeActive__get_Bypass_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Bypass", NULL, (void*)SetSwipeActive__set_Bypass_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)SetSwipeActive__New1_fn, 0, true, SetSwipeActive_typeof(), 0),
        new uFunction("get_Target", NULL, (void*)SetSwipeActive__get_Target_fn, 0, false, ::g::Fuse::Gestures::SwipeGesture_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)SetSwipeActive__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::SwipeGesture_typeof()),
        new uFunction("get_Value", NULL, (void*)SetSwipeActive__get_Value_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Value", NULL, (void*)SetSwipeActive__set_Value_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));
    return type;
}

// public generated SetSwipeActive() :645
void SetSwipeActive__ctor_1_fn(SetSwipeActive* __this)
{
    __this->ctor_1();
}

// public generated bool get_Bypass() :651
void SetSwipeActive__get_Bypass_fn(SetSwipeActive* __this, bool* __retval)
{
    *__retval = __this->Bypass();
}

// public generated void set_Bypass(bool value) :651
void SetSwipeActive__set_Bypass_fn(SetSwipeActive* __this, bool* value)
{
    __this->Bypass(*value);
}

// public generated SetSwipeActive New() :645
void SetSwipeActive__New1_fn(SetSwipeActive** __retval)
{
    *__retval = SetSwipeActive::New1();
}

// protected override sealed void Perform(Fuse.Node target) :653
void SetSwipeActive__Perform_fn(SetSwipeActive* __this, ::g::Fuse::Node* target)
{
    if (__this->Target() != NULL)
        uPtr(__this->Target())->SetActive(__this->Value(), NULL, __this->Bypass());
}

// public generated Fuse.Gestures.SwipeGesture get_Target() :647
void SetSwipeActive__get_Target_fn(SetSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Gestures.SwipeGesture value) :647
void SetSwipeActive__set_Target_fn(SetSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture* value)
{
    __this->Target(value);
}

// public generated bool get_Value() :649
void SetSwipeActive__get_Value_fn(SetSwipeActive* __this, bool* __retval)
{
    *__retval = __this->Value();
}

// public generated void set_Value(bool value) :649
void SetSwipeActive__set_Value_fn(SetSwipeActive* __this, bool* value)
{
    __this->Value(*value);
}

// public generated SetSwipeActive() [instance] :645
void SetSwipeActive::ctor_1()
{
    ctor_();
}

// public generated bool get_Bypass() [instance] :651
bool SetSwipeActive::Bypass()
{
    return _Bypass;
}

// public generated void set_Bypass(bool value) [instance] :651
void SetSwipeActive::Bypass(bool value)
{
    _Bypass = value;
}

// public generated Fuse.Gestures.SwipeGesture get_Target() [instance] :647
::g::Fuse::Gestures::SwipeGesture* SetSwipeActive::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Gestures.SwipeGesture value) [instance] :647
void SetSwipeActive::Target(::g::Fuse::Gestures::SwipeGesture* value)
{
    _Target = value;
}

// public generated bool get_Value() [instance] :649
bool SetSwipeActive::Value()
{
    return _Value;
}

// public generated void set_Value(bool value) [instance] :649
void SetSwipeActive::Value(bool value)
{
    _Value = value;
}

// public generated SetSwipeActive New() [static] :645
SetSwipeActive* SetSwipeActive::New1()
{
    SetSwipeActive* obj1 = (SetSwipeActive*)uNew(SetSwipeActive_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Gestures\0.18.8\$.uno(707)
// -----------------------------------------------------------

// public sealed class Swiped :707
// {
::g::Fuse::Triggers::Trigger_type* Swiped_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(Swiped);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.Swiped", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Swiped__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Swiped__OnUnrooted_fn;
    ::TYPES[40] = ::g::Fuse::Gestures::SwipeGesture_typeof();
    ::TYPES[41] = ::g::Fuse::Gestures::Internal::SwipeRegion_typeof();
    ::TYPES[42] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[35] = ::g::Uno::Int_typeof();
    ::TYPES[12] = ::g::Uno::Bool_typeof();
    type->SetFields(14,
        ::g::Fuse::Gestures::SwipedHow_typeof(), offsetof(::g::Fuse::Gestures::Swiped, _how), 0,
        ::g::Fuse::Gestures::Internal::SwipeRegion_typeof(), offsetof(::g::Fuse::Gestures::Swiped, _region), 0,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(::g::Fuse::Gestures::Swiped, _Source), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_How", NULL, (void*)Swiped__get_How_fn, 0, false, ::g::Fuse::Gestures::SwipedHow_typeof(), 0),
        new uFunction("set_How", NULL, (void*)Swiped__set_How_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::SwipedHow_typeof()),
        new uFunction(".ctor", NULL, (void*)Swiped__New1_fn, 0, true, Swiped_typeof(), 1, ::g::Fuse::Gestures::SwipeGesture_typeof()),
        new uFunction("get_Source", NULL, (void*)Swiped__get_Source_fn, 0, false, ::g::Fuse::Gestures::SwipeGesture_typeof(), 0));
    return type;
}

// public Swiped(Fuse.Gestures.SwipeGesture source) :712
void Swiped__ctor_2_fn(Swiped* __this, ::g::Fuse::Gestures::SwipeGesture* source)
{
    __this->ctor_2(source);
}

// public Fuse.Gestures.SwipedHow get_How() :720
void Swiped__get_How_fn(Swiped* __this, int* __retval)
{
    *__retval = __this->How();
}

// public void set_How(Fuse.Gestures.SwipedHow value) :721
void Swiped__set_How_fn(Swiped* __this, int* value)
{
    __this->How(*value);
}

// public Swiped New(Fuse.Gestures.SwipeGesture source) :712
void Swiped__New1_fn(::g::Fuse::Gestures::SwipeGesture* source, Swiped** __retval)
{
    *__retval = Swiped::New1(source);
}

// protected override sealed void OnRooted(Fuse.Node n) :725
void Swiped__OnRooted_fn(Swiped* __this, ::g::Fuse::Node* n)
{
    ::g::Fuse::Behavior__OnRooted_fn(__this, n);
    __this->_region = uPtr(__this->Source())->Region();
    uPtr(__this->_region)->add_Swiped(uDelegate::New(::TYPES[42/*Uno.Action<bool>*/], (void*)Swiped__OnSwiped_fn, __this));
}

// private void OnSwiped(bool v) :738
void Swiped__OnSwiped_fn(Swiped* __this, bool* v)
{
    __this->OnSwiped(*v);
}

// protected override sealed void OnUnrooted(Fuse.Node n) :732
void Swiped__OnUnrooted_fn(Swiped* __this, ::g::Fuse::Node* n)
{
    uPtr(__this->_region)->remove_Swiped(uDelegate::New(::TYPES[42/*Uno.Action<bool>*/], (void*)Swiped__OnSwiped_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, n);
}

// public generated Fuse.Gestures.SwipeGesture get_Source() :709
void Swiped__get_Source_fn(Swiped* __this, ::g::Fuse::Gestures::SwipeGesture** __retval)
{
    *__retval = __this->Source();
}

// private generated void set_Source(Fuse.Gestures.SwipeGesture value) :709
void Swiped__set_Source_fn(Swiped* __this, ::g::Fuse::Gestures::SwipeGesture* value)
{
    __this->Source(value);
}

// public Swiped(Fuse.Gestures.SwipeGesture source) [instance] :712
void Swiped::ctor_2(::g::Fuse::Gestures::SwipeGesture* source)
{
    ctor_1();
    Source(source);
}

// public Fuse.Gestures.SwipedHow get_How() [instance] :720
int Swiped::How()
{
    return _how;
}

// public void set_How(Fuse.Gestures.SwipedHow value) [instance] :721
void Swiped::How(int value)
{
    _how = value;
}

// private void OnSwiped(bool v) [instance] :738
void Swiped::OnSwiped(bool v)
{
    if (v && ((How() == 0) || (How() == 2)))
        Pulse();

    if (!v && ((How() == 1) || (How() == 2)))
        Pulse();
}

// public generated Fuse.Gestures.SwipeGesture get_Source() [instance] :709
::g::Fuse::Gestures::SwipeGesture* Swiped::Source()
{
    return _Source;
}

// private generated void set_Source(Fuse.Gestures.SwipeGesture value) [instance] :709
void Swiped::Source(::g::Fuse::Gestures::SwipeGesture* value)
{
    _Source = value;
}

// public Swiped New(Fuse.Gestures.SwipeGesture source) [static] :712
Swiped* Swiped::New1(::g::Fuse::Gestures::SwipeGesture* source)
{
    Swiped* obj1 = (Swiped*)uNew(Swiped_typeof());
    obj1->ctor_2(source);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Gestures\0.18.8\$.uno(700)
// -----------------------------------------------------------

// public enum SwipedHow :700
uEnumType* SwipedHow_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.SwipedHow", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "ToActive", 0LL,
        "ToInactive", 1LL,
        "ToEither", 2LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Gestures\0.18.8\$.uno(407)
// -----------------------------------------------------------

// public enum SwipeDirection :407
uEnumType* SwipeDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.SwipeDirection", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Left", 0LL,
        "Up", 1LL,
        "Right", 2LL,
        "Down", 3LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Gestures\0.18.8\$.uno(424)
// -----------------------------------------------------------

// public sealed class SwipeGesture :424
// {
::g::Fuse::Behavior_type* SwipeGesture_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.ObjectSize = sizeof(SwipeGesture);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.Gestures.SwipeGesture", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_ctor_ = (void*)SwipeGesture__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))SwipeGesture__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))SwipeGesture__OnUnrooted_fn;
    ::STRINGS[3] = uString::Const("SwipingAnimation must be attached to an Element");
    ::STRINGS[4] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Gestures\\0.18.8\\$.uno");
    ::STRINGS[5] = uString::Const("OnRooted");
    ::TYPES[41] = ::g::Fuse::Gestures::Internal::SwipeRegion_typeof();
    ::TYPES[11] = ::g::Uno::Double_typeof();
    ::TYPES[43] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::Bool_typeof(), uObject_typeof());
    ::TYPES[35] = ::g::Uno::Int_typeof();
    ::TYPES[20] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[2] = ::g::Fuse::Behavior_typeof();
    ::TYPES[5] = uObject_typeof();
    ::TYPES[3] = ::g::Uno::Delegate_typeof();
    ::TYPES[42] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Bool_typeof());
    type->SetFields(3,
        ::g::Fuse::Gestures::SwipeDirection_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _direction), 0,
        ::g::Fuse::Gestures::Edge_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _edge), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _hasDirection), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _hasEdge), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _hitSize), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _isActive), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _length), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _lengthNode), 0,
        ::g::Fuse::Gestures::Internal::SwipeRegion_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _region), 0,
        ::g::Fuse::Gestures::Internal::Swiper_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _swiper), 0,
        ::g::Fuse::Gestures::SwipeType_typeof(), offsetof(::g::Fuse::Gestures::SwipeGesture, _type), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::Fuse::Gestures::SwipeGesture, IsActiveChanged1), 0);
    type->Reflection.SetFunctions(14,
        new uFunction("get_Direction", NULL, (void*)SwipeGesture__get_Direction_fn, 0, false, ::g::Fuse::Gestures::SwipeDirection_typeof(), 0),
        new uFunction("set_Direction", NULL, (void*)SwipeGesture__set_Direction_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::SwipeDirection_typeof()),
        new uFunction("get_Edge", NULL, (void*)SwipeGesture__get_Edge_fn, 0, false, ::g::Fuse::Gestures::Edge_typeof(), 0),
        new uFunction("set_Edge", NULL, (void*)SwipeGesture__set_Edge_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::Edge_typeof()),
        new uFunction("get_HitSize", NULL, (void*)SwipeGesture__get_HitSize_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_HitSize", NULL, (void*)SwipeGesture__set_HitSize_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Length", NULL, (void*)SwipeGesture__get_Length_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Length", NULL, (void*)SwipeGesture__set_Length_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_LengthNode", NULL, (void*)SwipeGesture__get_LengthNode_fn, 0, false, ::g::Fuse::Elements::Element_typeof(), 0),
        new uFunction("set_LengthNode", NULL, (void*)SwipeGesture__set_LengthNode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::Element_typeof()),
        new uFunction(".ctor", NULL, (void*)SwipeGesture__New1_fn, 0, true, SwipeGesture_typeof(), 0),
        new uFunction("SetValue", NULL, (void*)SwipeGesture__SetValue_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), uObject_typeof()),
        new uFunction("get_Type", NULL, (void*)SwipeGesture__get_Type_fn, 0, false, ::g::Fuse::Gestures::SwipeType_typeof(), 0),
        new uFunction("set_Type", NULL, (void*)SwipeGesture__set_Type_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::SwipeType_typeof()));
    return type;
}

// public generated SwipeGesture() :424
void SwipeGesture__ctor_1_fn(SwipeGesture* __this)
{
    __this->ctor_1();
}

// private void ConstructRegion() :495
void SwipeGesture__ConstructRegion_fn(SwipeGesture* __this)
{
    __this->ConstructRegion();
}

// public Fuse.Gestures.SwipeDirection get_Direction() :452
void SwipeGesture__get_Direction_fn(SwipeGesture* __this, int* __retval)
{
    *__retval = __this->Direction();
}

// public void set_Direction(Fuse.Gestures.SwipeDirection value) :453
void SwipeGesture__set_Direction_fn(SwipeGesture* __this, int* value)
{
    __this->Direction(*value);
}

// public Fuse.Gestures.Edge get_Edge() :440
void SwipeGesture__get_Edge_fn(SwipeGesture* __this, int* __retval)
{
    *__retval = __this->Edge();
}

// public void set_Edge(Fuse.Gestures.Edge value) :441
void SwipeGesture__set_Edge_fn(SwipeGesture* __this, int* value)
{
    __this->Edge(*value);
}

// public float get_HitSize() :477
void SwipeGesture__get_HitSize_fn(SwipeGesture* __this, float* __retval)
{
    *__retval = __this->HitSize();
}

// public void set_HitSize(float value) :478
void SwipeGesture__set_HitSize_fn(SwipeGesture* __this, float* value)
{
    __this->HitSize(*value);
}

// internal bool get_IsActive() :593
void SwipeGesture__get_IsActive_fn(SwipeGesture* __this, bool* __retval)
{
    *__retval = __this->IsActive();
}

// internal generated void add_IsActiveChanged(Uno.Action<bool> value) :587
void SwipeGesture__add_IsActiveChanged_fn(SwipeGesture* __this, uDelegate* value)
{
    __this->add_IsActiveChanged(value);
}

// internal generated void remove_IsActiveChanged(Uno.Action<bool> value) :587
void SwipeGesture__remove_IsActiveChanged_fn(SwipeGesture* __this, uDelegate* value)
{
    __this->remove_IsActiveChanged(value);
}

// public float get_Length() :463
void SwipeGesture__get_Length_fn(SwipeGesture* __this, float* __retval)
{
    *__retval = __this->Length();
}

// public void set_Length(float value) :464
void SwipeGesture__set_Length_fn(SwipeGesture* __this, float* value)
{
    __this->Length(*value);
}

// public Fuse.Elements.Element get_LengthNode() :470
void SwipeGesture__get_LengthNode_fn(SwipeGesture* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->LengthNode();
}

// public void set_LengthNode(Fuse.Elements.Element value) :471
void SwipeGesture__set_LengthNode_fn(SwipeGesture* __this, ::g::Fuse::Elements::Element* value)
{
    __this->LengthNode(value);
}

// public generated SwipeGesture New() :424
void SwipeGesture__New1_fn(SwipeGesture** __retval)
{
    *__retval = SwipeGesture::New1();
}

// protected override sealed void OnRooted(Fuse.Node n) :481
void SwipeGesture__OnRooted_fn(SwipeGesture* __this, ::g::Fuse::Node* n)
{
    ::g::Fuse::Behavior__OnRooted_fn(__this, n);
    ::g::Fuse::Elements::Element* element = uAs< ::g::Fuse::Elements::Element*>(__this->ParentNode(), ::TYPES[20/*Fuse.Elements.Element*/]);

    if (element == NULL)
    {
        ::g::Fuse::Diagnostics::Error(::STRINGS[3/*"SwipingAnim...*/], __this->ParentNode(), ::STRINGS[4/*"C:\\Program...*/], 487, ::STRINGS[5/*"OnRooted"*/]);
        return;
    }

    __this->_swiper = ::g::Fuse::Gestures::Internal::Swiper::AttachSwiper(element);
    uPtr(__this->_swiper)->AddRegion(__this->Region());
}

// protected override sealed void OnUnrooted(Fuse.Node n) :570
void SwipeGesture__OnUnrooted_fn(SwipeGesture* __this, ::g::Fuse::Node* n)
{
    if (__this->_swiper != NULL)
    {
        if (__this->_region != NULL)
        {
            uPtr(__this->_region)->remove_ActivationChanged(uDelegate::New(::TYPES[43/*Uno.Action<bool, object>*/], (void*)SwipeGesture__SetValue_fn, __this));
            __this->_region = NULL;
            uPtr(__this->_swiper)->RemoveRegion(__this->_region);
        }

        uPtr(__this->_swiper)->Detach();
        __this->_swiper = NULL;
    }

    ::g::Fuse::Behavior__OnUnrooted_fn(__this, n);
}

// internal Fuse.Gestures.Internal.SwipeRegion get_Region() :562
void SwipeGesture__get_Region_fn(SwipeGesture* __this, ::g::Fuse::Gestures::Internal::SwipeRegion** __retval)
{
    *__retval = __this->Region();
}

// internal void SetActive(bool value, object origin, [bool bypass]) :601
void SwipeGesture__SetActive_fn(SwipeGesture* __this, bool* value, uObject* origin, bool* bypass)
{
    __this->SetActive(*value, origin, *bypass);
}

// public void SetValue(bool value, object origin) :596
void SwipeGesture__SetValue_fn(SwipeGesture* __this, bool* value, uObject* origin)
{
    __this->SetValue(*value, origin);
}

// public Fuse.Gestures.SwipeType get_Type() :432
void SwipeGesture__get_Type_fn(SwipeGesture* __this, int* __retval)
{
    *__retval = __this->Type();
}

// public void set_Type(Fuse.Gestures.SwipeType value) :433
void SwipeGesture__set_Type_fn(SwipeGesture* __this, int* value)
{
    __this->Type(*value);
}

// public generated SwipeGesture() [instance] :424
void SwipeGesture::ctor_1()
{
    _length = 100.0f;
    _hitSize = 100.0f;
    ctor_();
}

// private void ConstructRegion() [instance] :495
void SwipeGesture::ConstructRegion()
{
    _region = ::g::Fuse::Gestures::Internal::SwipeRegion::New1();

    if (_hasEdge)
    {
        uPtr(_region)->Area = 1;

        switch (_edge)
        {
            case 0:
            {
                uPtr(_region)->AreaVector = ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f);
                uPtr(_region)->Direction = ::g::Uno::Float2__New2(1.0f, 0.0f);
                uPtr(_region)->Priority = 1;
                break;
            }
            case 2:
            {
                uPtr(_region)->AreaVector = ::g::Uno::Float4__New2(0.0f, 0.0f, 1.0f, 0.0f);
                uPtr(_region)->Direction = ::g::Uno::Float2__New2(0.0f, 1.0f);
                uPtr(_region)->Priority = 2;
                break;
            }
            case 1:
            {
                uPtr(_region)->AreaVector = ::g::Uno::Float4__New2(1.0f, 0.0f, 1.0f, 1.0f);
                uPtr(_region)->Direction = ::g::Uno::Float2__New2(-1.0f, 0.0f);
                uPtr(_region)->Priority = 3;
                break;
            }
            case 3:
            {
                uPtr(_region)->AreaVector = ::g::Uno::Float4__New2(0.0f, 1.0f, 1.0f, 1.0f);
                uPtr(_region)->Direction = ::g::Uno::Float2__New2(0.0f, -1.0f);
                uPtr(_region)->Priority = 4;
                break;
            }
        }
    }
    else
    {
        uPtr(_region)->Area = 0;

        switch (Direction())
        {
            case 0:
            {
                uPtr(_region)->Direction = ::g::Uno::Float2__New2(-1.0f, 0.0f);
                uPtr(_region)->Priority = 101;
                break;
            }
            case 1:
            {
                uPtr(_region)->Direction = ::g::Uno::Float2__New2(0.0f, -1.0f);
                uPtr(_region)->Priority = 102;
                break;
            }
            case 2:
            {
                uPtr(_region)->Direction = ::g::Uno::Float2__New2(1.0f, 0.0f);
                uPtr(_region)->Priority = 103;
                break;
            }
            case 3:
            {
                uPtr(_region)->Direction = ::g::Uno::Float2__New2(0.0f, 1.0f);
                uPtr(_region)->Priority = 104;
                break;
            }
        }
    }

    uPtr(_region)->SetProgress((double)(IsActive() ? 1 : 0), false);
    uPtr(_region)->Length = (double)Length();
    uPtr(_region)->LengthElement = LengthNode();
    uPtr(_region)->AreaVectorDistance = HitSize();
    uPtr(_region)->add_ActivationChanged(uDelegate::New(::TYPES[43/*Uno.Action<bool, object>*/], (void*)SwipeGesture__SetValue_fn, this));
    uPtr(_region)->IsInterruptible = (Type() != 0);
    uPtr(_region)->RevertActive = (Type() == 0);
}

// public Fuse.Gestures.SwipeDirection get_Direction() [instance] :452
int SwipeGesture::Direction()
{
    return _direction;
}

// public void set_Direction(Fuse.Gestures.SwipeDirection value) [instance] :453
void SwipeGesture::Direction(int value)
{
    _direction = value;
    _hasDirection = true;
}

// public Fuse.Gestures.Edge get_Edge() [instance] :440
int SwipeGesture::Edge()
{
    return _edge;
}

// public void set_Edge(Fuse.Gestures.Edge value) [instance] :441
void SwipeGesture::Edge(int value)
{
    _edge = value;
    _hasEdge = true;
}

// public float get_HitSize() [instance] :477
float SwipeGesture::HitSize()
{
    return _hitSize;
}

// public void set_HitSize(float value) [instance] :478
void SwipeGesture::HitSize(float value)
{
    _hitSize = value;
}

// internal bool get_IsActive() [instance] :593
bool SwipeGesture::IsActive()
{
    return _isActive;
}

// internal generated void add_IsActiveChanged(Uno.Action<bool> value) [instance] :587
void SwipeGesture::add_IsActiveChanged(uDelegate* value)
{
    IsActiveChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(IsActiveChanged1, value), ::TYPES[42/*Uno.Action<bool>*/]);
}

// internal generated void remove_IsActiveChanged(Uno.Action<bool> value) [instance] :587
void SwipeGesture::remove_IsActiveChanged(uDelegate* value)
{
    IsActiveChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(IsActiveChanged1, value), ::TYPES[42/*Uno.Action<bool>*/]);
}

// public float get_Length() [instance] :463
float SwipeGesture::Length()
{
    return _length;
}

// public void set_Length(float value) [instance] :464
void SwipeGesture::Length(float value)
{
    _length = value;
}

// public Fuse.Elements.Element get_LengthNode() [instance] :470
::g::Fuse::Elements::Element* SwipeGesture::LengthNode()
{
    return _lengthNode;
}

// public void set_LengthNode(Fuse.Elements.Element value) [instance] :471
void SwipeGesture::LengthNode(::g::Fuse::Elements::Element* value)
{
    _lengthNode = value;
}

// internal Fuse.Gestures.Internal.SwipeRegion get_Region() [instance] :562
::g::Fuse::Gestures::Internal::SwipeRegion* SwipeGesture::Region()
{
    if (_region == NULL)
        ConstructRegion();

    return _region;
}

// internal void SetActive(bool value, object origin, [bool bypass]) [instance] :601
void SwipeGesture::SetActive(bool value, uObject* origin, bool bypass)
{
    if ((value == _isActive) || (origin == this))
        return;

    _isActive = value;

    if (::g::Uno::Delegate::op_Inequality(IsActiveChanged1, NULL))
        uPtr(IsActiveChanged1)->InvokeVoid(uCRef(value));

    if (_region != NULL)
        uPtr(_swiper)->SetActivation(_region, value, (origin != NULL) ? origin : this, bypass);
}

// public void SetValue(bool value, object origin) [instance] :596
void SwipeGesture::SetValue(bool value, uObject* origin)
{
    SetActive(value, origin, false);
}

// public Fuse.Gestures.SwipeType get_Type() [instance] :432
int SwipeGesture::Type()
{
    return _type;
}

// public void set_Type(Fuse.Gestures.SwipeType value) [instance] :433
void SwipeGesture::Type(int value)
{
    _type = value;
}

// public generated SwipeGesture New() [static] :424
SwipeGesture* SwipeGesture::New1()
{
    SwipeGesture* obj1 = (SwipeGesture*)uNew(SwipeGesture_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Gestures\0.18.8\Internal\$.uno(612)
// --------------------------------------------------------------------

// internal sealed class SwipeGestureHelper :612
// {
uType* SwipeGestureHelper_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(SwipeGestureHelper);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Gestures.SwipeGestureHelper", options);
    ::TYPES[39] = ::g::Uno::Float2_typeof();
    ::TYPES[30] = ::g::Fuse::Gestures::DegreeSpan_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::SwipeGestureHelper, _lengthThreshold), 0,
        ::g::Fuse::Gestures::DegreeSpan_typeof()->Array(), offsetof(::g::Fuse::Gestures::SwipeGestureHelper, _spans), 0);
    return type;
}

// public SwipeGestureHelper(float lengthThreshold, Fuse.Gestures.DegreeSpan[] spans) :618
void SwipeGestureHelper__ctor__fn(SwipeGestureHelper* __this, float* lengthThreshold, uArray* spans)
{
    __this->ctor_(*lengthThreshold, spans);
}

// public bool IsWithinBounds(float2 vector) :624
void SwipeGestureHelper__IsWithinBounds_fn(SwipeGestureHelper* __this, ::g::Uno::Float2* vector, bool* __retval)
{
    *__retval = __this->IsWithinBounds(*vector);
}

// public SwipeGestureHelper New(float lengthThreshold, Fuse.Gestures.DegreeSpan[] spans) :618
void SwipeGestureHelper__New1_fn(float* lengthThreshold, uArray* spans, SwipeGestureHelper** __retval)
{
    *__retval = SwipeGestureHelper::New1(*lengthThreshold, spans);
}

// public SwipeGestureHelper(float lengthThreshold, Fuse.Gestures.DegreeSpan[] spans) [instance] :618
void SwipeGestureHelper::ctor_(float lengthThreshold, uArray* spans)
{
    _spans = spans;
    _lengthThreshold = lengthThreshold;
}

// public bool IsWithinBounds(float2 vector) [instance] :624
bool SwipeGestureHelper::IsWithinBounds(::g::Uno::Float2 vector)
{
    float length = ::g::Uno::Vector::Length(vector);

    if (length < _lengthThreshold)
        return false;

    float angle = ::g::Uno::Math::RadiansToDegrees1(::g::Uno::Math::Atan22(vector.X, vector.Y));

    for (int i = 0; i < uPtr(_spans)->Length(); i++)
        if (uPtr(uPtr(_spans)->Strong< ::g::Fuse::Gestures::DegreeSpan*>(i))->IsWithinBounds(angle))
            return true;

    return false;
}

// public SwipeGestureHelper New(float lengthThreshold, Fuse.Gestures.DegreeSpan[] spans) [static] :618
SwipeGestureHelper* SwipeGestureHelper::New1(float lengthThreshold, uArray* spans)
{
    SwipeGestureHelper* obj1 = (SwipeGestureHelper*)uNew(SwipeGestureHelper_typeof());
    obj1->ctor_(lengthThreshold, spans);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Gestures\0.18.8\$.uno(415)
// -----------------------------------------------------------

// public enum SwipeType :415
uEnumType* SwipeType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.SwipeType", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Simple", 0LL,
        "Active", 1LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Gestures\0.18.8\$.uno(614)
// -----------------------------------------------------------

// public sealed class SwipingAnimation :614
// {
::g::Fuse::Triggers::Trigger_type* SwipingAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.ObjectSize = sizeof(SwipingAnimation);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.SwipingAnimation", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))SwipingAnimation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))SwipingAnimation__OnUnrooted_fn;
    ::TYPES[40] = ::g::Fuse::Gestures::SwipeGesture_typeof();
    ::TYPES[41] = ::g::Fuse::Gestures::Internal::SwipeRegion_typeof();
    ::TYPES[44] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::Double_typeof(), uObject_typeof());
    type->SetFields(14,
        ::g::Fuse::Gestures::Internal::SwipeRegion_typeof(), offsetof(::g::Fuse::Gestures::SwipingAnimation, _region), 0,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(::g::Fuse::Gestures::SwipingAnimation, _Source), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)SwipingAnimation__New1_fn, 0, true, SwipingAnimation_typeof(), 1, ::g::Fuse::Gestures::SwipeGesture_typeof()),
        new uFunction("get_Source", NULL, (void*)SwipingAnimation__get_Source_fn, 0, false, ::g::Fuse::Gestures::SwipeGesture_typeof(), 0));
    return type;
}

// public SwipingAnimation(Fuse.Gestures.SwipeGesture source) :621
void SwipingAnimation__ctor_2_fn(SwipingAnimation* __this, ::g::Fuse::Gestures::SwipeGesture* source)
{
    __this->ctor_2(source);
}

// public SwipingAnimation New(Fuse.Gestures.SwipeGesture source) :621
void SwipingAnimation__New1_fn(::g::Fuse::Gestures::SwipeGesture* source, SwipingAnimation** __retval)
{
    *__retval = SwipingAnimation::New1(source);
}

// private void OnProgressChanged(double progress, object origin) :639
void SwipingAnimation__OnProgressChanged1_fn(SwipingAnimation* __this, double* progress, uObject* origin)
{
    __this->OnProgressChanged1(*progress, origin);
}

// protected override sealed void OnRooted(Fuse.Node n) :626
void SwipingAnimation__OnRooted_fn(SwipingAnimation* __this, ::g::Fuse::Node* n)
{
    ::g::Fuse::Behavior__OnRooted_fn(__this, n);
    __this->_region = uPtr(__this->Source())->Region();
    uPtr(__this->_region)->add_ProgressChanged(uDelegate::New(::TYPES[44/*Uno.Action<double, object>*/], (void*)SwipingAnimation__OnProgressChanged1_fn, __this));
}

// protected override sealed void OnUnrooted(Fuse.Node n) :633
void SwipingAnimation__OnUnrooted_fn(SwipingAnimation* __this, ::g::Fuse::Node* n)
{
    uPtr(__this->_region)->remove_ProgressChanged(uDelegate::New(::TYPES[44/*Uno.Action<double, object>*/], (void*)SwipingAnimation__OnProgressChanged1_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, n);
}

// public generated Fuse.Gestures.SwipeGesture get_Source() :616
void SwipingAnimation__get_Source_fn(SwipingAnimation* __this, ::g::Fuse::Gestures::SwipeGesture** __retval)
{
    *__retval = __this->Source();
}

// private generated void set_Source(Fuse.Gestures.SwipeGesture value) :616
void SwipingAnimation__set_Source_fn(SwipingAnimation* __this, ::g::Fuse::Gestures::SwipeGesture* value)
{
    __this->Source(value);
}

// public SwipingAnimation(Fuse.Gestures.SwipeGesture source) [instance] :621
void SwipingAnimation::ctor_2(::g::Fuse::Gestures::SwipeGesture* source)
{
    ctor_1();
    Source(source);
}

// private void OnProgressChanged(double progress, object origin) [instance] :639
void SwipingAnimation::OnProgressChanged1(double progress, uObject* origin)
{
    Seek(progress);
}

// public generated Fuse.Gestures.SwipeGesture get_Source() [instance] :616
::g::Fuse::Gestures::SwipeGesture* SwipingAnimation::Source()
{
    return _Source;
}

// private generated void set_Source(Fuse.Gestures.SwipeGesture value) [instance] :616
void SwipingAnimation::Source(::g::Fuse::Gestures::SwipeGesture* value)
{
    _Source = value;
}

// public SwipingAnimation New(Fuse.Gestures.SwipeGesture source) [static] :621
SwipingAnimation* SwipingAnimation::New1(::g::Fuse::Gestures::SwipeGesture* source)
{
    SwipingAnimation* obj1 = (SwipingAnimation*)uNew(SwipingAnimation_typeof());
    obj1->ctor_2(source);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Gestures\0.18.8\$.uno(765)
// -----------------------------------------------------------

// public sealed class Tapped :765
// {
::g::Fuse::Triggers::Trigger_type* Tapped_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.ObjectSize = sizeof(Tapped);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.Tapped", options);
    type->SetBase(::g::Fuse::Gestures::ClickerTrigger_typeof());
    type->fp_ctor_ = (void*)Tapped__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Tapped__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Tapped__OnUnrooted_fn;
    ::TYPES[6] = ::g::Fuse::Gestures::Clicker_typeof();
    ::TYPES[7] = ::g::Fuse::Gestures::ClickerTrigger_typeof();
    ::TYPES[8] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    ::TYPES[3] = ::g::Uno::Delegate_typeof();
    ::TYPES[45] = ::g::Fuse::Gestures::TappedHandler_typeof();
    ::TYPES[5] = uObject_typeof();
    ::TYPES[2] = ::g::Fuse::Behavior_typeof();
    type->SetFields(15,
        ::g::Fuse::Gestures::TappedHandler_typeof(), offsetof(::g::Fuse::Gestures::Tapped, Handler1), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("add_Handler", NULL, (void*)Tapped__add_Handler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::TappedHandler_typeof()),
        new uFunction("remove_Handler", NULL, (void*)Tapped__remove_Handler_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::TappedHandler_typeof()),
        new uFunction(".ctor", NULL, (void*)Tapped__New1_fn, 0, true, Tapped_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Tapped__New2_fn, 0, true, Tapped_typeof(), 1, ::g::Fuse::Gestures::TappedHandler_typeof()));
    return type;
}

// public Tapped() :769
void Tapped__ctor_3_fn(Tapped* __this)
{
    __this->ctor_3();
}

// public Tapped(Fuse.Gestures.TappedHandler handler) :771
void Tapped__ctor_4_fn(Tapped* __this, uDelegate* handler)
{
    __this->ctor_4(handler);
}

// public generated void add_Handler(Fuse.Gestures.TappedHandler value) :767
void Tapped__add_Handler_fn(Tapped* __this, uDelegate* value)
{
    __this->add_Handler(value);
}

// public generated void remove_Handler(Fuse.Gestures.TappedHandler value) :767
void Tapped__remove_Handler_fn(Tapped* __this, uDelegate* value)
{
    __this->remove_Handler(value);
}

// public Tapped New() :769
void Tapped__New1_fn(Tapped** __retval)
{
    *__retval = Tapped::New1();
}

// public Tapped New(Fuse.Gestures.TappedHandler handler) :771
void Tapped__New2_fn(uDelegate* handler, Tapped** __retval)
{
    *__retval = Tapped::New2(handler);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :776
void Tapped__OnRooted_fn(Tapped* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Gestures::ClickerTrigger__OnRooted_fn(__this, parentNode);
    uPtr(__this->Clicker)->add_TappedEvent(uDelegate::New(::TYPES[8/*Fuse.Gestures.ClickerEventHandler*/], (void*)Tapped__OnTapped_fn, __this));
}

// private void OnTapped(Fuse.Input.PointerEventArgs args, int tapCount) :788
void Tapped__OnTapped_fn(Tapped* __this, ::g::Fuse::Input::PointerEventArgs* args, int* tapCount)
{
    __this->OnTapped(args, *tapCount);
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :782
void Tapped__OnUnrooted_fn(Tapped* __this, ::g::Fuse::Node* parentNode)
{
    uPtr(__this->Clicker)->remove_TappedEvent(uDelegate::New(::TYPES[8/*Fuse.Gestures.ClickerEventHandler*/], (void*)Tapped__OnTapped_fn, __this));
    ::g::Fuse::Gestures::ClickerTrigger__OnUnrooted_fn(__this, parentNode);
}

// public Tapped() [instance] :769
void Tapped::ctor_3()
{
    ctor_2();
}

// public Tapped(Fuse.Gestures.TappedHandler handler) [instance] :771
void Tapped::ctor_4(uDelegate* handler)
{
    ctor_2();
    add_Handler(handler);
}

// public generated void add_Handler(Fuse.Gestures.TappedHandler value) [instance] :767
void Tapped::add_Handler(uDelegate* value)
{
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Handler1, value), ::TYPES[45/*Fuse.Gestures.TappedHandler*/]);
}

// public generated void remove_Handler(Fuse.Gestures.TappedHandler value) [instance] :767
void Tapped::remove_Handler(uDelegate* value)
{
    Handler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Handler1, value), ::TYPES[45/*Fuse.Gestures.TappedHandler*/]);
}

// private void OnTapped(Fuse.Input.PointerEventArgs args, int tapCount) [instance] :788
void Tapped::OnTapped(::g::Fuse::Input::PointerEventArgs* args, int tapCount)
{
    Pulse();

    if (::g::Uno::Delegate::op_Inequality(Handler1, NULL))
        uPtr(Handler1)->Invoke(2, this, (::g::Fuse::Gestures::TappedArgs*)::g::Fuse::Gestures::TappedArgs::New3(args, ParentNode()));
}

// public Tapped New() [static] :769
Tapped* Tapped::New1()
{
    Tapped* obj1 = (Tapped*)uNew(Tapped_typeof());
    obj1->ctor_3();
    return obj1;
}

// public Tapped New(Fuse.Gestures.TappedHandler handler) [static] :771
Tapped* Tapped::New2(uDelegate* handler)
{
    Tapped* obj2 = (Tapped*)uNew(Tapped_typeof());
    obj2->ctor_4(handler);
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Gestures\0.18.8\$.uno(755)
// -----------------------------------------------------------

// public sealed class TappedArgs :755
// {
::g::Fuse::NodeEventArgs_type* TappedArgs_typeof()
{
    static uSStrong< ::g::Fuse::NodeEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TappedArgs);
    options.TypeSize = sizeof(::g::Fuse::NodeEventArgs_type);
    type = (::g::Fuse::NodeEventArgs_type*)uClassType::New("Fuse.Gestures.TappedArgs", options);
    type->SetBase(::g::Fuse::Input::CustomPointerEventArgs_typeof());
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::NodeEventArgs__Fuse_Scripting_IScriptEvent_Serialize_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::NodeEventArgs_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TappedArgs__New3_fn, 0, true, TappedArgs_typeof(), 2, ::g::Fuse::Input::PointerEventArgs_typeof(), ::g::Fuse::Node_typeof()));
    return type;
}

// public TappedArgs(Fuse.Input.PointerEventArgs args, Fuse.Node node) :757
void TappedArgs__ctor_4_fn(TappedArgs* __this, ::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node)
{
    __this->ctor_4(args, node);
}

// public TappedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Node node) :757
void TappedArgs__New3_fn(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node, TappedArgs** __retval)
{
    *__retval = TappedArgs::New3(args, node);
}

// public TappedArgs(Fuse.Input.PointerEventArgs args, Fuse.Node node) [instance] :757
void TappedArgs::ctor_4(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node)
{
    ctor_3(args, node);
}

// public TappedArgs New(Fuse.Input.PointerEventArgs args, Fuse.Node node) [static] :757
TappedArgs* TappedArgs::New3(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node)
{
    TappedArgs* obj1 = (TappedArgs*)uNew(TappedArgs_typeof());
    obj1->ctor_4(args, node);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Gestures\0.18.8\$.uno(763)
// -----------------------------------------------------------

// public delegate void TappedHandler(object sender, Fuse.Gestures.TappedArgs args) :763
uDelegateType* TappedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Gestures.TappedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Gestures::TappedArgs_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\Fuse.Gestures\0.18.8\$.uno(660)
// -----------------------------------------------------------

// public sealed class ToggleSwipeActive :660
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* ToggleSwipeActive_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(ToggleSwipeActive);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Gestures.ToggleSwipeActive", options);
    type->SetBase(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    type->fp_ctor_ = (void*)ToggleSwipeActive__New1_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))ToggleSwipeActive__Perform_fn;
    ::TYPES[12] = ::g::Uno::Bool_typeof();
    ::TYPES[40] = ::g::Fuse::Gestures::SwipeGesture_typeof();
    type->SetFields(7,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(::g::Fuse::Gestures::ToggleSwipeActive, _Target), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)ToggleSwipeActive__New1_fn, 0, true, ToggleSwipeActive_typeof(), 0),
        new uFunction("get_Target", NULL, (void*)ToggleSwipeActive__get_Target_fn, 0, false, ::g::Fuse::Gestures::SwipeGesture_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)ToggleSwipeActive__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Gestures::SwipeGesture_typeof()));
    return type;
}

// public generated ToggleSwipeActive() :660
void ToggleSwipeActive__ctor_1_fn(ToggleSwipeActive* __this)
{
    __this->ctor_1();
}

// public generated ToggleSwipeActive New() :660
void ToggleSwipeActive__New1_fn(ToggleSwipeActive** __retval)
{
    *__retval = ToggleSwipeActive::New1();
}

// protected override sealed void Perform(Fuse.Node target) :664
void ToggleSwipeActive__Perform_fn(ToggleSwipeActive* __this, ::g::Fuse::Node* target)
{
    if (__this->Target() != NULL)
        uPtr(__this->Target())->SetActive(!uPtr(__this->Target())->IsActive(), NULL, false);
}

// public generated Fuse.Gestures.SwipeGesture get_Target() :662
void ToggleSwipeActive__get_Target_fn(ToggleSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Gestures.SwipeGesture value) :662
void ToggleSwipeActive__set_Target_fn(ToggleSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture* value)
{
    __this->Target(value);
}

// public generated ToggleSwipeActive() [instance] :660
void ToggleSwipeActive::ctor_1()
{
    ctor_();
}

// public generated Fuse.Gestures.SwipeGesture get_Target() [instance] :662
::g::Fuse::Gestures::SwipeGesture* ToggleSwipeActive::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Gestures.SwipeGesture value) [instance] :662
void ToggleSwipeActive::Target(::g::Fuse::Gestures::SwipeGesture* value)
{
    _Target = value;
}

// public generated ToggleSwipeActive New() [static] :660
ToggleSwipeActive* ToggleSwipeActive::New1()
{
    ToggleSwipeActive* obj1 = (ToggleSwipeActive*)uNew(ToggleSwipeActive_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Gestures\0.18.8\$.uno(852)
// -----------------------------------------------------------

// public sealed class Trackball :852
// {
::g::Fuse::Behavior_type* Trackball_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 21;
    options.ObjectSize = sizeof(Trackball);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.Gestures.Trackball", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_ctor_ = (void*)Trackball__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Trackball__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))Trackball__OnUnrooted_fn;
    ::TYPES[46] = ::g::Experimental::Physics::DestinationSimulation_typeof()->MakeType(::g::Uno::Float4_typeof());
    ::TYPES[47] = ::g::Experimental::Physics::ElasticForce_typeof()->MakeType(::g::Uno::Float4_typeof());
    ::TYPES[48] = ::g::Experimental::Physics::MotionSimulation_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[49] = ::g::Experimental::Physics::Friction_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[50] = ::g::Experimental::Physics::PointerVelocity_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[51] = ::g::Fuse::Entities::Transform3D_typeof();
    ::TYPES[52] = ::g::Uno::Float3_typeof();
    ::TYPES[53] = ::g::Experimental::Physics::MotionSimulation_typeof()->MakeType(::g::Uno::Float4_typeof());
    ::TYPES[35] = ::g::Uno::Int_typeof();
    ::TYPES[13] = ::g::Uno::Action_typeof();
    ::TYPES[12] = ::g::Uno::Bool_typeof();
    ::TYPES[9] = ::g::Fuse::Input::PointerEventArgs_typeof();
    ::TYPES[39] = ::g::Uno::Float2_typeof();
    ::TYPES[36] = ::g::Uno::Float_typeof();
    ::TYPES[10] = ::g::Fuse::Time_typeof();
    ::TYPES[5] = uObject_typeof();
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[2] = ::g::Fuse::Behavior_typeof();
    ::TYPES[54] = ::g::Fuse::Transform_typeof();
    ::TYPES[15] = ::g::Fuse::Input::Pointer_typeof();
    ::TYPES[16] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[17] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    ::TYPES[18] = ::g::Fuse::Input::PointerMovedHandler_typeof();
    ::TYPES[33] = ::g::Experimental::Physics::Simulation_typeof();
    ::TYPES[55] = ::g::Fuse::IViewport_typeof();
    type->SetFields(3,
        ::g::Experimental::Physics::PointerVelocity_typeof()->MakeType(::g::Uno::Float_typeof()), offsetof(::g::Fuse::Gestures::Trackball, _angularVelocity), 0,
        ::g::Experimental::Physics::DestinationSimulation_typeof()->MakeType(::g::Uno::Float4_typeof()), offsetof(::g::Fuse::Gestures::Trackball, _attractor), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Trackball, _captured), 0,
        ::g::Experimental::Physics::MotionSimulation_typeof()->MakeType(::g::Uno::Float_typeof()), offsetof(::g::Fuse::Gestures::Trackball, _friction), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Gestures::Trackball, _frictionQ), 0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Fuse::Gestures::Trackball, _frictionVector), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Trackball, _hasViewport), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Trackball, _haveUpdate), 0,
        Trackball__MoveMode_typeof(), offsetof(::g::Fuse::Gestures::Trackball, _moveMode), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::Trackball, _pressIndex), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Gestures::Trackball, _pressInvView), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Trackball, _pressLoc), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Gestures::Trackball, _pressQ), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Trackball, _prevAngular), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Trackball, _radius), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Trackball, _soft), 0,
        ::g::Fuse::Entities::Transform3D_typeof(), offsetof(::g::Fuse::Gestures::Trackball, _transform), 0,
        ::g::Fuse::IViewport_typeof(), offsetof(::g::Fuse::Gestures::Trackball, _viewport), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("BringToFront", NULL, (void*)Trackball__BringToFront_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction(".ctor", NULL, (void*)Trackball__New1_fn, 0, true, Trackball_typeof(), 0),
        new uFunction("get_Viewport", NULL, (void*)Trackball__get_Viewport_fn, 0, false, ::g::Fuse::IViewport_typeof(), 0),
        new uFunction("set_Viewport", NULL, (void*)Trackball__set_Viewport_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::IViewport_typeof()));
    return type;
}

// public generated Trackball() :852
void Trackball__ctor_1_fn(Trackball* __this)
{
    __this->ctor_1();
}

// public void BringToFront(float3 normal) :1057
void Trackball__BringToFront_fn(Trackball* __this, ::g::Uno::Float3* normal)
{
    __this->BringToFront(*normal);
}

// private void CheckNeedUpdate() :910
void Trackball__CheckNeedUpdate_fn(Trackball* __this)
{
    __this->CheckNeedUpdate();
}

// private float4x4 get_InverseViewProjection() :1049
void Trackball__get_InverseViewProjection_fn(Trackball* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->InverseViewProjection();
}

// public generated Trackball New() :852
void Trackball__New1_fn(Trackball** __retval)
{
    *__retval = Trackball::New1();
}

// private void OnLostCapture() :991
void Trackball__OnLostCapture_fn(Trackball* __this)
{
    __this->OnLostCapture();
}

// private void OnPointerMoved(object s, Fuse.Input.PointerMovedArgs args) :1015
void Trackball__OnPointerMoved_fn(Trackball* __this, uObject* s, ::g::Fuse::Input::PointerMovedArgs* args)
{
    __this->OnPointerMoved(s, args);
}

// private void OnPointerPressed(object s, Fuse.Input.PointerPressedArgs args) :967
void Trackball__OnPointerPressed_fn(Trackball* __this, uObject* s, ::g::Fuse::Input::PointerPressedArgs* args)
{
    __this->OnPointerPressed(s, args);
}

// private void OnPointerReleased(object s, Fuse.Input.PointerReleasedArgs args) :997
void Trackball__OnPointerReleased_fn(Trackball* __this, uObject* s, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    __this->OnPointerReleased(s, args);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :880
void Trackball__OnRooted_fn(Trackball* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->ParentNode())->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[54/*Fuse.Transform*/])), __this->_transform);
    __this->_moveMode = 0;
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), __this->ParentNode(), uDelegate::New(::TYPES[16/*Fuse.Input.PointerPressedHandler*/], (void*)Trackball__OnPointerPressed_fn, __this));
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), __this->ParentNode(), uDelegate::New(::TYPES[17/*Fuse.Input.PointerReleasedHandler*/], (void*)Trackball__OnPointerReleased_fn, __this));
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), __this->ParentNode(), uDelegate::New(::TYPES[18/*Fuse.Input.PointerMovedHandler*/], (void*)Trackball__OnPointerMoved_fn, __this));

    if (!__this->_hasViewport)
        __this->_viewport = uPtr(__this->ParentNode())->Viewport();
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :895
void Trackball__OnUnrooted_fn(Trackball* __this, ::g::Fuse::Node* parentNode)
{
    bool ret5;
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), __this->ParentNode(), uDelegate::New(::TYPES[16/*Fuse.Input.PointerPressedHandler*/], (void*)Trackball__OnPointerPressed_fn, __this));
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), __this->ParentNode(), uDelegate::New(::TYPES[17/*Fuse.Input.PointerReleasedHandler*/], (void*)Trackball__OnPointerReleased_fn, __this));
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), __this->ParentNode(), uDelegate::New(::TYPES[18/*Fuse.Input.PointerMovedHandler*/], (void*)Trackball__OnPointerMoved_fn, __this));
    ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(uPtr(__this->ParentNode())->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[54/*Fuse.Transform*/])), __this->_transform, &ret5);
    __this->_moveMode = 0;
    __this->CheckNeedUpdate();
    ::g::Fuse::Behavior__OnUnrooted_fn(__this, parentNode);
}

// private void OnUpdate() :930
void Trackball__OnUpdate_fn(Trackball* __this)
{
    __this->OnUpdate();
}

// public Fuse.IViewport get_Viewport() :868
void Trackball__get_Viewport_fn(Trackball* __this, uObject** __retval)
{
    *__retval = __this->Viewport();
}

// public void set_Viewport(Fuse.IViewport value) :869
void Trackball__set_Viewport_fn(Trackball* __this, uObject* value)
{
    __this->Viewport(value);
}

// public generated Trackball() [instance] :852
void Trackball::ctor_1()
{
    _transform = ::g::Fuse::Entities::Transform3D::New1();
    _radius = 100.0f;
    _attractor = (uObject*)((::g::Experimental::Physics::ElasticForce*)::g::Experimental::Physics::ElasticForce::CreateRadians(::TYPES[47/*Experimental.Physics.ElasticForce<float4>*/]));
    _friction = (uObject*)((::g::Experimental::Physics::Friction*)::g::Experimental::Physics::Friction::CreateRadians(::TYPES[49/*Experimental.Physics.Friction<float>*/]));
    _angularVelocity = ((::g::Experimental::Physics::PointerVelocity*)::g::Experimental::Physics::PointerVelocity::New1(::TYPES[50/*Experimental.Physics.PointerVelocity<float>*/]));
    _frictionVector = ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f);
    ctor_();
}

// public void BringToFront(float3 normal) [instance] :1057
void Trackball::BringToFront(::g::Uno::Float3 normal)
{
    ::g::Uno::Float4 old = uPtr(_transform)->RotationQuaternion();
    uPtr(_transform)->RotationQuaternion(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    ::g::Uno::Float3 ind2 = ::g::Uno::Vector::Normalize1(::g::Uno::Vector::TransformNormal1(::g::Uno::Float3__New2(0.0f, 0.0f, -1.0f), InverseViewProjection()));
    ::g::Uno::Float3 localForward = ::g::Uno::Float3__New2(ind2.X, ind2.Y, ind2.Z);
    ::g::Uno::Float4 lq = ::g::Uno::Quaternion::RotationBetween(normal, localForward);
    ::g::Experimental::Physics::DestinationSimulation::set_Destination_ex(uInterface(uPtr(_attractor), ::TYPES[46/*Experimental.Physics.DestinationSimulation<float4>*/]), uCRef(lq));
    ::g::Experimental::Physics::MotionSimulation::set_Position_ex(uInterface(uPtr(_attractor), ::TYPES[53/*Experimental.Physics.MotionSimulation<float4>*/]), uCRef(old));
    uPtr(_transform)->RotationQuaternion(old);
    _moveMode = 1;
    CheckNeedUpdate();
}

// private void CheckNeedUpdate() [instance] :910
void Trackball::CheckNeedUpdate()
{
    if (_moveMode == 0)
    {
        if (_haveUpdate)
        {
            ::g::Fuse::UpdateManager::RemoveAction(uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)Trackball__OnUpdate_fn, this), 0);
            _haveUpdate = false;
        }
    }
    else if (!_haveUpdate)
    {
        ::g::Fuse::UpdateManager::AddAction(uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)Trackball__OnUpdate_fn, this), 0);
        _haveUpdate = true;
    }
}

// private float4x4 get_InverseViewProjection() [instance] :1049
::g::Uno::Float4x4 Trackball::InverseViewProjection()
{
    ::g::Uno::Float4x4 at = uPtr(ParentNode())->WorldTransform();
    ::g::Uno::Float4x4 vp = ::g::Fuse::IViewport::ViewProjectionTransform(uInterface(uPtr(Viewport()), ::TYPES[55/*Fuse.IViewport*/]));
    return ::g::Uno::Matrix::Invert2(::g::Uno::Matrix::Mul8(at, vp));
}

// private void OnLostCapture() [instance] :991
void Trackball::OnLostCapture()
{
    _captured = false;
    uPtr(_transform)->RotationQuaternion(_pressQ);
}

// private void OnPointerMoved(object s, Fuse.Input.PointerMovedArgs args) [instance] :1015
void Trackball::OnPointerMoved(uObject* s, ::g::Fuse::Input::PointerMovedArgs* args)
{
    if (!_captured || (uPtr(args)->PointIndex() != _pressIndex))
        return;

    ::g::Uno::Float2 dir0 = ::g::Uno::Float2__op_Subtraction2(uPtr(args)->WindowPoint(), _pressLoc);
    ::g::Uno::Float2 dir = ::g::Uno::Float2__New2(dir0.X, -dir0.Y);
    ::g::Uno::Float3 norm = ::g::Uno::Vector::Normalize1(::g::Uno::Float3__New2(-dir.Y, dir.X, 0.0f));
    float length = ::g::Uno::Vector::Length(dir);
    float angular = length / (2.0f * _radius);
    ::g::Experimental::Physics::PointerVelocity__AddSample_fn(uPtr(_angularVelocity), uCRef(angular), uCRef(::g::Fuse::Time::FrameIntervalFloat()), uCRef(false));
    _prevAngular = angular;
    ::g::Uno::Float3 ind1 = ::g::Uno::Vector::Normalize1(::g::Uno::Vector::TransformNormal1(norm, _pressInvView));
    ::g::Uno::Float3 localNorm = ::g::Uno::Float3__New2(ind1.X, ind1.Y, ind1.Z);
    _frictionVector = localNorm;
    ::g::Uno::Float4 q = ::g::Uno::Quaternion::RotationAxis(localNorm, angular);
    ::g::Uno::Float4 cq = ::g::Uno::Quaternion::Mul(_pressQ, q);
    uPtr(_transform)->RotationQuaternion(cq);

    if (_soft && (length > 10.0f))
    {
        if (!uPtr(args)->TryHardCapture(this, uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)Trackball__OnLostCapture_fn, this), NULL))
            OnLostCapture();

        _soft = false;
    }
}

// private void OnPointerPressed(object s, Fuse.Input.PointerPressedArgs args) [instance] :967
void Trackball::OnPointerPressed(uObject* s, ::g::Fuse::Input::PointerPressedArgs* args)
{
    if (_captured || !uPtr(args)->IsPrimary())
        return;

    if (uPtr(args)->TrySoftCapture(this, uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)Trackball__OnLostCapture_fn, this), NULL))
    {
        _moveMode = 0;
        _captured = true;
        _soft = true;
        _pressLoc = uPtr(args)->WindowPoint();
        _pressIndex = args->PointIndex();
        _pressQ = uPtr(_transform)->RotationQuaternion();
        uPtr(_transform)->RotationQuaternion(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
        ::g::Experimental::Physics::PointerVelocity__Reset_fn(uPtr(_angularVelocity), uCRef(0.0f));
        _prevAngular = 0.0f;
        _pressInvView = InverseViewProjection();
        uPtr(_transform)->RotationQuaternion(_pressQ);
    }
}

// private void OnPointerReleased(object s, Fuse.Input.PointerReleasedArgs args) [instance] :997
void Trackball::OnPointerReleased(uObject* s, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    float ret4;

    if (!_captured || (uPtr(args)->PointIndex() != _pressIndex))
        return;

    if (_soft)
        uPtr(args)->ReleaseSoftCapture(this);
    else
        args->ReleaseHardCapture(this);

    _captured = false;
    _moveMode = 2;
    ::g::Experimental::Physics::MotionSimulation::set_Position_ex(uInterface(uPtr(_friction), ::TYPES[48/*Experimental.Physics.MotionSimulation<float>*/]), uCRef(0.0f));
    ::g::Experimental::Physics::MotionSimulation::set_Velocity_ex(uInterface(uPtr(_friction), ::TYPES[48/*Experimental.Physics.MotionSimulation<float>*/]), uCRef((::g::Experimental::Physics::PointerVelocity__get_CurrentVelocity_fn(uPtr(_angularVelocity), &ret4), ret4)));
    _frictionQ = uPtr(_transform)->RotationQuaternion();
    CheckNeedUpdate();
}

// private void OnUpdate() [instance] :930
void Trackball::OnUpdate()
{
    ::g::Uno::Float4 ret6;
    float ret7;

    if (_moveMode == 1)
    {
        ::g::Experimental::Physics::Simulation::Update(uInterface(uPtr(_attractor), ::TYPES[33/*Experimental.Physics.Simulation*/]), ::g::Fuse::Time::FrameInterval());

        if (::g::Experimental::Physics::Simulation::IsStatic(uInterface(uPtr(_attractor), ::TYPES[33/*Experimental.Physics.Simulation*/])))
            _moveMode = 0;

        uPtr(_transform)->RotationQuaternion(::g::Uno::Vector::Normalize2((::g::Experimental::Physics::MotionSimulation::get_Position_ex(uInterface(uPtr(_attractor), ::TYPES[53/*Experimental.Physics.MotionSimulation<float4>*/]), &ret6), ret6)));
    }
    else if (_moveMode == 2)
    {
        ::g::Experimental::Physics::Simulation::Update(uInterface(uPtr(_friction), ::TYPES[33/*Experimental.Physics.Simulation*/]), ::g::Fuse::Time::FrameInterval());

        if (::g::Experimental::Physics::Simulation::IsStatic(uInterface(uPtr(_friction), ::TYPES[33/*Experimental.Physics.Simulation*/])))
            _moveMode = 0;

        ::g::Uno::Float4 q = ::g::Uno::Quaternion::RotationAxis(_frictionVector, (::g::Experimental::Physics::MotionSimulation::get_Position_ex(uInterface(uPtr(_friction), ::TYPES[48/*Experimental.Physics.MotionSimulation<float>*/]), &ret7), ret7));
        ::g::Uno::Float4 cq = ::g::Uno::Quaternion::Mul(_frictionQ, q);
        uPtr(_transform)->RotationQuaternion(cq);
    }

    CheckNeedUpdate();
}

// public Fuse.IViewport get_Viewport() [instance] :868
uObject* Trackball::Viewport()
{
    return _viewport;
}

// public void set_Viewport(Fuse.IViewport value) [instance] :869
void Trackball::Viewport(uObject* value)
{
    _viewport = value;
    _hasViewport = true;
}

// public generated Trackball New() [static] :852
Trackball* Trackball::New1()
{
    Trackball* obj3 = (Trackball*)uNew(Trackball_typeof());
    obj3->ctor_1();
    return obj3;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Gestures\0.18.8\Internal\$.uno(30)
// -------------------------------------------------------------------

// public abstract class WhileClickerTrigger :30
// {
::g::Fuse::Triggers::Trigger_type* WhileClickerTrigger_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(WhileClickerTrigger);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.WhileClickerTrigger", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileClickerTrigger__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileClickerTrigger__OnUnrooted_fn;
    ::TYPES[2] = ::g::Fuse::Behavior_typeof();
    type->SetFields(16,
        ::g::Fuse::Gestures::Clicker_typeof(), offsetof(::g::Fuse::Gestures::WhileClickerTrigger, Clicker), 0);
    return type;
}

// protected generated WhileClickerTrigger() :30
void WhileClickerTrigger__ctor_3_fn(WhileClickerTrigger* __this)
{
    __this->ctor_3();
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :33
void WhileClickerTrigger__OnRooted_fn(WhileClickerTrigger* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);
    __this->Clicker = ::g::Fuse::Gestures::Clicker::AttachClicker(__this->ParentNode());
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :39
void WhileClickerTrigger__OnUnrooted_fn(WhileClickerTrigger* __this, ::g::Fuse::Node* parentNode)
{
    uPtr(__this->Clicker)->Detach();
    __this->Clicker = NULL;
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// protected generated WhileClickerTrigger() [instance] :30
void WhileClickerTrigger::ctor_3()
{
    ctor_2();
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Gestures\0.18.8\$.uno(1175)
// ------------------------------------------------------------

// public sealed class WhileHovering :1175
// {
::g::Fuse::Triggers::Trigger_type* WhileHovering_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.ObjectSize = sizeof(WhileHovering);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.WhileHovering", options);
    type->SetBase(::g::Fuse::Triggers::Trigger_typeof());
    type->fp_ctor_ = (void*)WhileHovering__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileHovering__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileHovering__OnUnrooted_fn;
    ::TYPES[12] = ::g::Uno::Bool_typeof();
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[2] = ::g::Fuse::Behavior_typeof();
    ::TYPES[15] = ::g::Fuse::Input::Pointer_typeof();
    ::TYPES[56] = ::g::Fuse::Input::PointerEnteredHandler_typeof();
    ::TYPES[57] = ::g::Fuse::Input::PointerLeftHandler_typeof();
    ::TYPES[14] = ::g::Uno::EventHandler_typeof();
    type->SetFields(14);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileHovering__New1_fn, 0, true, WhileHovering_typeof(), 0));
    return type;
}

// public generated WhileHovering() :1175
void WhileHovering__ctor_2_fn(WhileHovering* __this)
{
    __this->ctor_2();
}

// public generated WhileHovering New() :1175
void WhileHovering__New1_fn(WhileHovering** __retval)
{
    *__retval = WhileHovering::New1();
}

// private void OnIsEnabledChanged(object s, object a) :1204
void WhileHovering__OnIsEnabledChanged_fn(WhileHovering* __this, uObject* s, uObject* a)
{
    __this->OnIsEnabledChanged(s, a);
}

// private void OnPointerEntered(object sender, object args) :1193
void WhileHovering__OnPointerEntered_fn(WhileHovering* __this, uObject* sender, uObject* args)
{
    __this->OnPointerEntered(sender, args);
}

// private void OnPointerLeft(object sender, object args) :1198
void WhileHovering__OnPointerLeft_fn(WhileHovering* __this, uObject* sender, uObject* args)
{
    __this->OnPointerLeft(sender, args);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :1177
void WhileHovering__OnRooted_fn(WhileHovering* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Behavior__OnRooted_fn(__this, parentNode);
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Entered()), __this->ParentNode(), uDelegate::New(::TYPES[56/*Fuse.Input.PointerEnteredHandler*/], (void*)WhileHovering__OnPointerEntered_fn, __this));
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Left()), __this->ParentNode(), uDelegate::New(::TYPES[57/*Fuse.Input.PointerLeftHandler*/], (void*)WhileHovering__OnPointerLeft_fn, __this));
    uPtr(__this->ParentNode())->add_IsEnabledChanged(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)WhileHovering__OnIsEnabledChanged_fn, __this));
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :1185
void WhileHovering__OnUnrooted_fn(WhileHovering* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Entered()), __this->ParentNode(), uDelegate::New(::TYPES[56/*Fuse.Input.PointerEnteredHandler*/], (void*)WhileHovering__OnPointerEntered_fn, __this));
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Left()), __this->ParentNode(), uDelegate::New(::TYPES[57/*Fuse.Input.PointerLeftHandler*/], (void*)WhileHovering__OnPointerLeft_fn, __this));
    uPtr(__this->ParentNode())->remove_IsEnabledChanged(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)WhileHovering__OnIsEnabledChanged_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public generated WhileHovering() [instance] :1175
void WhileHovering::ctor_2()
{
    ctor_1();
}

// private void OnIsEnabledChanged(object s, object a) [instance] :1204
void WhileHovering::OnIsEnabledChanged(uObject* s, uObject* a)
{
    if (!uPtr(ParentNode())->IsEnabled())
        Deactivate();
}

// private void OnPointerEntered(object sender, object args) [instance] :1193
void WhileHovering::OnPointerEntered(uObject* sender, uObject* args)
{
    Activate(NULL);
}

// private void OnPointerLeft(object sender, object args) [instance] :1198
void WhileHovering::OnPointerLeft(uObject* sender, uObject* args)
{
    Deactivate();
}

// public generated WhileHovering New() [static] :1175
WhileHovering* WhileHovering::New1()
{
    WhileHovering* obj1 = (WhileHovering*)uNew(WhileHovering_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Gestures\0.18.8\$.uno(285)
// -----------------------------------------------------------

// public sealed class WhilePressed :285
// {
::g::Fuse::Triggers::Trigger_type* WhilePressed_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 20;
    options.ObjectSize = sizeof(WhilePressed);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.WhilePressed", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_ctor_ = (void*)WhilePressed__New1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhilePressed__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhilePressed__OnUnrooted_fn;
    ::TYPES[0] = ::g::Fuse::Node_typeof();
    ::TYPES[2] = ::g::Fuse::Behavior_typeof();
    ::TYPES[35] = ::g::Uno::Int_typeof();
    ::TYPES[9] = ::g::Fuse::Input::PointerEventArgs_typeof();
    ::TYPES[6] = ::g::Fuse::Gestures::Clicker_typeof();
    ::TYPES[8] = ::g::Fuse::Gestures::ClickerEventHandler_typeof();
    ::TYPES[15] = ::g::Fuse::Input::Pointer_typeof();
    ::TYPES[56] = ::g::Fuse::Input::PointerEnteredHandler_typeof();
    ::TYPES[57] = ::g::Fuse::Input::PointerLeftHandler_typeof();
    ::TYPES[16] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[17] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    ::TYPES[14] = ::g::Uno::EventHandler_typeof();
    type->SetFields(16,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::WhilePressed, _inside), 0,
        ::g::Uno::Platform::PointerType_typeof(), offsetof(::g::Fuse::Gestures::WhilePressed, _pointerType), 0,
        ::g::Fuse::Gestures::Clicker_typeof(), offsetof(::g::Fuse::Gestures::WhilePressed, Clicker), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::WhilePressed, _Capture), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_Capture", NULL, (void*)WhilePressed__get_Capture_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Capture", NULL, (void*)WhilePressed__set_Capture_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)WhilePressed__New1_fn, 0, true, WhilePressed_typeof(), 0),
        new uFunction("get_PointerType", NULL, (void*)WhilePressed__get_PointerType_fn, 0, false, ::g::Uno::Platform::PointerType_typeof(), 0),
        new uFunction("set_PointerType", NULL, (void*)WhilePressed__set_PointerType_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Platform::PointerType_typeof()));
    return type;
}

// public generated WhilePressed() :285
void WhilePressed__ctor_3_fn(WhilePressed* __this)
{
    __this->ctor_3();
}

// public generated bool get_Capture() :287
void WhilePressed__get_Capture_fn(WhilePressed* __this, bool* __retval)
{
    *__retval = __this->Capture();
}

// public generated void set_Capture(bool value) :287
void WhilePressed__set_Capture_fn(WhilePressed* __this, bool* value)
{
    __this->Capture(*value);
}

// private void CheckStatus(object s, object a) :361
void WhilePressed__CheckStatus_fn(WhilePressed* __this, uObject* s, uObject* a)
{
    __this->CheckStatus(s, a);
}

// public generated WhilePressed New() :285
void WhilePressed__New1_fn(WhilePressed** __retval)
{
    *__retval = WhilePressed::New1();
}

// private void OnClickerPressing(Fuse.Input.PointerEventArgs args, int count) :340
void WhilePressed__OnClickerPressing_fn(WhilePressed* __this, ::g::Fuse::Input::PointerEventArgs* args, int* count)
{
    __this->OnClickerPressing(args, *count);
}

// private void OnPointerEntered(object sender, object args) :349
void WhilePressed__OnPointerEntered_fn(WhilePressed* __this, uObject* sender, uObject* args)
{
    __this->OnPointerEntered(sender, args);
}

// private void OnPointerLeft(object sender, object args) :355
void WhilePressed__OnPointerLeft_fn(WhilePressed* __this, uObject* sender, uObject* args)
{
    __this->OnPointerLeft(sender, args);
}

// protected override sealed void OnRooted(Fuse.Node parentNode) :298
void WhilePressed__OnRooted_fn(WhilePressed* __this, ::g::Fuse::Node* parentNode)
{
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, parentNode);

    if (__this->Capture())
    {
        __this->Clicker = ::g::Fuse::Gestures::Clicker::AttachClicker(__this->ParentNode());
        uPtr(__this->Clicker)->add_PressingEvent(uDelegate::New(::TYPES[8/*Fuse.Gestures.ClickerEventHandler*/], (void*)WhilePressed__OnClickerPressing_fn, __this));
    }
    else
    {
        ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Entered()), __this->ParentNode(), uDelegate::New(::TYPES[56/*Fuse.Input.PointerEnteredHandler*/], (void*)WhilePressed__OnPointerEntered_fn, __this));
        ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Left()), __this->ParentNode(), uDelegate::New(::TYPES[57/*Fuse.Input.PointerLeftHandler*/], (void*)WhilePressed__OnPointerLeft_fn, __this));
        ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), __this->ParentNode(), uDelegate::New(::TYPES[16/*Fuse.Input.PointerPressedHandler*/], (void*)WhilePressed__CheckStatus_fn, __this));
        ::g::Fuse::NodeEvent__AddGlobalHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), uDelegate::New(::TYPES[17/*Fuse.Input.PointerReleasedHandler*/], (void*)WhilePressed__CheckStatus_fn, __this));
        uPtr(__this->ParentNode())->add_IsEnabledChanged(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)WhilePressed__CheckStatus_fn, __this));
        __this->_inside = false;
    }

    __this->BypassSetActive(false);
}

// protected override sealed void OnUnrooted(Fuse.Node parentNode) :320
void WhilePressed__OnUnrooted_fn(WhilePressed* __this, ::g::Fuse::Node* parentNode)
{
    if (__this->Capture())
    {
        uPtr(__this->Clicker)->remove_PressingEvent(uDelegate::New(::TYPES[8/*Fuse.Gestures.ClickerEventHandler*/], (void*)WhilePressed__OnClickerPressing_fn, __this));
        uPtr(__this->Clicker)->Detach();
        __this->Clicker = NULL;
    }
    else
    {
        ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Entered()), __this->ParentNode(), uDelegate::New(::TYPES[56/*Fuse.Input.PointerEnteredHandler*/], (void*)WhilePressed__OnPointerEntered_fn, __this));
        ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Left()), __this->ParentNode(), uDelegate::New(::TYPES[57/*Fuse.Input.PointerLeftHandler*/], (void*)WhilePressed__OnPointerLeft_fn, __this));
        ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), __this->ParentNode(), uDelegate::New(::TYPES[16/*Fuse.Input.PointerPressedHandler*/], (void*)WhilePressed__CheckStatus_fn, __this));
        ::g::Fuse::NodeEvent__RemoveGlobalHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), uDelegate::New(::TYPES[17/*Fuse.Input.PointerReleasedHandler*/], (void*)WhilePressed__CheckStatus_fn, __this));
        uPtr(__this->ParentNode())->remove_IsEnabledChanged(uDelegate::New(::TYPES[14/*Uno.EventHandler*/], (void*)WhilePressed__CheckStatus_fn, __this));
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, parentNode);
}

// public Uno.Platform.PointerType get_PointerType() :294
void WhilePressed__get_PointerType_fn(WhilePressed* __this, int* __retval)
{
    *__retval = __this->PointerType();
}

// public void set_PointerType(Uno.Platform.PointerType value) :295
void WhilePressed__set_PointerType_fn(WhilePressed* __this, int* value)
{
    __this->PointerType(*value);
}

// public generated WhilePressed() [instance] :285
void WhilePressed::ctor_3()
{
    ctor_2();
}

// public generated bool get_Capture() [instance] :287
bool WhilePressed::Capture()
{
    return _Capture;
}

// public generated void set_Capture(bool value) [instance] :287
void WhilePressed::Capture(bool value)
{
    _Capture = value;
}

// private void CheckStatus(object s, object a) [instance] :361
void WhilePressed::CheckStatus(uObject* s, uObject* a)
{
    SetActive((_inside && uPtr(ParentNode())->IsEnabled()) && ::g::Fuse::Input::Pointer::IsPressed());
}

// private void OnClickerPressing(Fuse.Input.PointerEventArgs args, int count) [instance] :340
void WhilePressed::OnClickerPressing(::g::Fuse::Input::PointerEventArgs* args, int count)
{
    bool q = (PointerType() == 0) || (PointerType() == uPtr(args)->PointerType());
    bool on = count > 0;

    if (q)
        SetActive(on);
}

// private void OnPointerEntered(object sender, object args) [instance] :349
void WhilePressed::OnPointerEntered(uObject* sender, uObject* args)
{
    _inside = true;
    CheckStatus(sender, args);
}

// private void OnPointerLeft(object sender, object args) [instance] :355
void WhilePressed::OnPointerLeft(uObject* sender, uObject* args)
{
    _inside = false;
    CheckStatus(sender, args);
}

// public Uno.Platform.PointerType get_PointerType() [instance] :294
int WhilePressed::PointerType()
{
    return _pointerType;
}

// public void set_PointerType(Uno.Platform.PointerType value) [instance] :295
void WhilePressed::PointerType(int value)
{
    _pointerType = value;
}

// public generated WhilePressed New() [static] :285
WhilePressed* WhilePressed::New1()
{
    WhilePressed* obj1 = (WhilePressed*)uNew(WhilePressed_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Gestures\0.18.8\$.uno(671)
// -----------------------------------------------------------

// public sealed class WhileSwipeActive :671
// {
::g::Fuse::Triggers::Trigger_type* WhileSwipeActive_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.ObjectSize = sizeof(WhileSwipeActive);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.WhileSwipeActive", options);
    type->SetBase(::g::Fuse::Triggers::WhileTrigger_typeof());
    type->fp_OnRooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileSwipeActive__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Behavior*, ::g::Fuse::Node*))WhileSwipeActive__OnUnrooted_fn;
    ::TYPES[40] = ::g::Fuse::Gestures::SwipeGesture_typeof();
    ::TYPES[42] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Bool_typeof());
    type->SetFields(16,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(::g::Fuse::Gestures::WhileSwipeActive, _Source), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)WhileSwipeActive__New1_fn, 0, true, WhileSwipeActive_typeof(), 1, ::g::Fuse::Gestures::SwipeGesture_typeof()),
        new uFunction("get_Source", NULL, (void*)WhileSwipeActive__get_Source_fn, 0, false, ::g::Fuse::Gestures::SwipeGesture_typeof(), 0));
    return type;
}

// public WhileSwipeActive(Fuse.Gestures.SwipeGesture source) :676
void WhileSwipeActive__ctor_3_fn(WhileSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture* source)
{
    __this->ctor_3(source);
}

// public WhileSwipeActive New(Fuse.Gestures.SwipeGesture source) :676
void WhileSwipeActive__New1_fn(::g::Fuse::Gestures::SwipeGesture* source, WhileSwipeActive** __retval)
{
    *__retval = WhileSwipeActive::New1(source);
}

// private void OnIsActiveChanged(bool v) :694
void WhileSwipeActive__OnIsActiveChanged_fn(WhileSwipeActive* __this, bool* v)
{
    __this->OnIsActiveChanged(*v);
}

// protected override sealed void OnRooted(Fuse.Node n) :681
void WhileSwipeActive__OnRooted_fn(WhileSwipeActive* __this, ::g::Fuse::Node* n)
{
    ::g::Fuse::Triggers::WhileTrigger__OnRooted_fn(__this, n);
    uPtr(__this->Source())->add_IsActiveChanged(uDelegate::New(::TYPES[42/*Uno.Action<bool>*/], (void*)WhileSwipeActive__OnIsActiveChanged_fn, __this));
    __this->BypassSetActive(uPtr(__this->Source())->IsActive());
}

// protected override sealed void OnUnrooted(Fuse.Node n) :688
void WhileSwipeActive__OnUnrooted_fn(WhileSwipeActive* __this, ::g::Fuse::Node* n)
{
    uPtr(__this->Source())->remove_IsActiveChanged(uDelegate::New(::TYPES[42/*Uno.Action<bool>*/], (void*)WhileSwipeActive__OnIsActiveChanged_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this, n);
}

// public generated Fuse.Gestures.SwipeGesture get_Source() :673
void WhileSwipeActive__get_Source_fn(WhileSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture** __retval)
{
    *__retval = __this->Source();
}

// private generated void set_Source(Fuse.Gestures.SwipeGesture value) :673
void WhileSwipeActive__set_Source_fn(WhileSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture* value)
{
    __this->Source(value);
}

// public WhileSwipeActive(Fuse.Gestures.SwipeGesture source) [instance] :676
void WhileSwipeActive::ctor_3(::g::Fuse::Gestures::SwipeGesture* source)
{
    ctor_2();
    Source(source);
}

// private void OnIsActiveChanged(bool v) [instance] :694
void WhileSwipeActive::OnIsActiveChanged(bool v)
{
    SetActive(v);
}

// public generated Fuse.Gestures.SwipeGesture get_Source() [instance] :673
::g::Fuse::Gestures::SwipeGesture* WhileSwipeActive::Source()
{
    return _Source;
}

// private generated void set_Source(Fuse.Gestures.SwipeGesture value) [instance] :673
void WhileSwipeActive::Source(::g::Fuse::Gestures::SwipeGesture* value)
{
    _Source = value;
}

// public WhileSwipeActive New(Fuse.Gestures.SwipeGesture source) [static] :676
WhileSwipeActive* WhileSwipeActive::New1(::g::Fuse::Gestures::SwipeGesture* source)
{
    WhileSwipeActive* obj1 = (WhileSwipeActive*)uNew(WhileSwipeActive_typeof());
    obj1->ctor_3(source);
    return obj1;
}
// }

}}} // ::g::Fuse::Gestures
