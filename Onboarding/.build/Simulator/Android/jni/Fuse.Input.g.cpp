// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.AppBase.h>
#include <Fuse.HitTestCallback.h>
#include <Fuse.HitTestContext.h>
#include <Fuse.HitTestResult.h>
#include <Fuse.Input.Capturer.h>
#include <Fuse.Input.CustomPointerEventArgs.h>
#include <Fuse.Input.Focus.h>
#include <Fuse.Input.FocusDelegator.h>
#include <Fuse.Input.FocusGained.h>
#include <Fuse.Input.FocusGainedArgs.h>
#include <Fuse.Input.FocusGainedHandler.h>
#include <Fuse.Input.FocusLost.h>
#include <Fuse.Input.FocusLostArgs.h>
#include <Fuse.Input.FocusLostHandler.h>
#include <Fuse.Input.FocusNavigationDirection.h>
#include <Fuse.Input.FocusPredictStrategy.h>
#include <Fuse.Input.HitTestHelpers.h>
#include <Fuse.Input.IPointerEventResponder.h>
#include <Fuse.Input.IsFocusableChangedArgs.h>
#include <Fuse.Input.IsFocusableChangedEvent.h>
#include <Fuse.Input.IsFocusableChangedHandler.h>
#include <Fuse.Input.Keyboard.h>
#include <Fuse.Input.KeyEventArgs.h>
#include <Fuse.Input.KeyPressed.h>
#include <Fuse.Input.KeyPressedArgs.h>
#include <Fuse.Input.KeyPressedHandler.h>
#include <Fuse.Input.KeyReleased.h>
#include <Fuse.Input.KeyReleasedArgs.h>
#include <Fuse.Input.KeyReleasedHandler.h>
#include <Fuse.Input.Pointer.DefaultPointerEventResponder.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.Pointer.PELHolder.h>
#include <Fuse.Input.Pointer.PELStatus.h>
#include <Fuse.Input.Pointer.PointerRecord.h>
#include <Fuse.Input.PointerEntered.h>
#include <Fuse.Input.PointerEnteredArgs.h>
#include <Fuse.Input.PointerEnteredHandler.h>
#include <Fuse.Input.PointerEventArgs.h>
#include <Fuse.Input.PointerEventData.h>
#include <Fuse.Input.PointerLeft.h>
#include <Fuse.Input.PointerLeftArgs.h>
#include <Fuse.Input.PointerLeftHandler.h>
#include <Fuse.Input.PointerMoved.h>
#include <Fuse.Input.PointerMovedArgs.h>
#include <Fuse.Input.PointerMovedHandler.h>
#include <Fuse.Input.PointerPressed.h>
#include <Fuse.Input.PointerPressedArgs.h>
#include <Fuse.Input.PointerPressedHandler.h>
#include <Fuse.Input.PointerReleased.h>
#include <Fuse.Input.PointerReleasedArgs.h>
#include <Fuse.Input.PointerReleasedHandler.h>
#include <Fuse.Input.PointerWheelMoved.h>
#include <Fuse.Input.PointerWheelMovedArgs.h>
#include <Fuse.Input.PointerWheelMovedHandler.h>
#include <Fuse.Input.SelectionQuery.h>
#include <Fuse.Input.TextEntered.h>
#include <Fuse.Input.TextEnteredArgs.h>
#include <Fuse.Input.TextEnteredHandler.h>
#include <Fuse.Input.TextService.h>
#include <Fuse.Input.TraverseNodeExtensions.h>
#include <Fuse.Node.h>
#include <Fuse.NodeEvent-2.h>
#include <Fuse.NodeEventArgs.h>
#include <Fuse.NodeEventMode.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.Scripting.IEventSerializer.h>
#include <Fuse.StyleProperty-2.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Application.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Clock.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Platform.Key.h>
#include <Uno.Platform.PointerType.h>
#include <Uno.Platform.WheelDeltaMode.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
#include <Uno.Vector.h>
static uString* STRINGS[21];
static uType* TYPES[76];

namespace g{
namespace Fuse{
namespace Input{

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(885)
// ------------------------------------------------------------

// internal sealed class Capturer :885
// {
uType* Capturer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Capturer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Input.Capturer", options);
    ::STRINGS[0] = uString::Const("Invalid Capturer parameters");
    ::TYPES[0] = ::g::Uno::Delegate_typeof();
    ::TYPES[1] = ::g::Fuse::Node_typeof();
    type->SetFields(0,
        uObject_typeof(), offsetof(::g::Fuse::Input::Capturer, _Identity), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Input::Capturer, _LostCallback), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Input::Capturer, _Node), 0);
    return type;
}

// public Capturer(Fuse.Node n, object identity, Uno.Action lostCallback) :891
void Capturer__ctor__fn(Capturer* __this, ::g::Fuse::Node* n, uObject* identity, uDelegate* lostCallback)
{
    __this->ctor_(n, identity, lostCallback);
}

// public generated object get_Identity() :888
void Capturer__get_Identity_fn(Capturer* __this, uObject** __retval)
{
    *__retval = __this->Identity();
}

// private generated void set_Identity(object value) :888
void Capturer__set_Identity_fn(Capturer* __this, uObject* value)
{
    __this->Identity(value);
}

// public bool get_IsSuitable() :903
void Capturer__get_IsSuitable_fn(Capturer* __this, bool* __retval)
{
    *__retval = __this->IsSuitable();
}

// public generated Uno.Action get_LostCallback() :889
void Capturer__get_LostCallback_fn(Capturer* __this, uDelegate** __retval)
{
    *__retval = __this->LostCallback();
}

// private generated void set_LostCallback(Uno.Action value) :889
void Capturer__set_LostCallback_fn(Capturer* __this, uDelegate* value)
{
    __this->LostCallback(value);
}

// public Capturer New(Fuse.Node n, object identity, Uno.Action lostCallback) :891
void Capturer__New1_fn(::g::Fuse::Node* n, uObject* identity, uDelegate* lostCallback, Capturer** __retval)
{
    *__retval = Capturer::New1(n, identity, lostCallback);
}

// public generated Fuse.Node get_Node() :887
void Capturer__get_Node_fn(Capturer* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Node();
}

// private generated void set_Node(Fuse.Node value) :887
void Capturer__set_Node_fn(Capturer* __this, ::g::Fuse::Node* value)
{
    __this->Node(value);
}

// public Capturer(Fuse.Node n, object identity, Uno.Action lostCallback) [instance] :891
void Capturer::ctor_(::g::Fuse::Node* n, uObject* identity, uDelegate* lostCallback)
{
    if (((n == NULL) || (identity == NULL)) || ::g::Uno::Delegate::op_Equality(lostCallback, NULL))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"Invalid Cap...*/]));

    Node(n);
    Identity(identity);
    LostCallback(lostCallback);
}

// public generated object get_Identity() [instance] :888
uObject* Capturer::Identity()
{
    return _Identity;
}

// private generated void set_Identity(object value) [instance] :888
void Capturer::Identity(uObject* value)
{
    _Identity = value;
}

// public bool get_IsSuitable() [instance] :903
bool Capturer::IsSuitable()
{
    return uPtr(Node())->IsEnabled() && uPtr(Node())->IsRooted();
}

// public generated Uno.Action get_LostCallback() [instance] :889
uDelegate* Capturer::LostCallback()
{
    return _LostCallback;
}

// private generated void set_LostCallback(Uno.Action value) [instance] :889
void Capturer::LostCallback(uDelegate* value)
{
    _LostCallback = value;
}

// public generated Fuse.Node get_Node() [instance] :887
::g::Fuse::Node* Capturer::Node()
{
    return _Node;
}

// private generated void set_Node(Fuse.Node value) [instance] :887
void Capturer::Node(::g::Fuse::Node* value)
{
    _Node = value;
}

// public Capturer New(Fuse.Node n, object identity, Uno.Action lostCallback) [static] :891
Capturer* Capturer::New1(::g::Fuse::Node* n, uObject* identity, uDelegate* lostCallback)
{
    Capturer* obj1 = (Capturer*)uNew(Capturer_typeof());
    obj1->ctor_(n, identity, lostCallback);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(750)
// ------------------------------------------------------------

// public abstract class CustomPointerEventArgs :750
// {
::g::Fuse::NodeEventArgs_type* CustomPointerEventArgs_typeof()
{
    static uSStrong< ::g::Fuse::NodeEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(CustomPointerEventArgs);
    options.TypeSize = sizeof(::g::Fuse::NodeEventArgs_type);
    type = (::g::Fuse::NodeEventArgs_type*)uClassType::New("Fuse.Input.CustomPointerEventArgs", options);
    type->SetBase(::g::Fuse::Input::PointerEventArgs_typeof());
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::NodeEventArgs__Fuse_Scripting_IScriptEvent_Serialize_fn;
    ::TYPES[2] = ::g::Fuse::Input::PointerEventArgs_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::NodeEventArgs_type, interface0));
    type->SetFields(3);
    return type;
}

// protected CustomPointerEventArgs(Fuse.Input.PointerEventArgs args, Fuse.Node node) :752
void CustomPointerEventArgs__ctor_3_fn(CustomPointerEventArgs* __this, ::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node)
{
    __this->ctor_3(args, node);
}

// protected CustomPointerEventArgs(Fuse.Input.PointerEventArgs args, Fuse.Node node) [instance] :752
void CustomPointerEventArgs::ctor_3(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Node* node)
{
    ctor_2(uPtr(args)->Data(), node);
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(1376)
// -------------------------------------------------------------

// private sealed class Pointer.DefaultPointerEventResponder :1376
// {
Pointer__DefaultPointerEventResponder_type* Pointer__DefaultPointerEventResponder_typeof()
{
    static uSStrong<Pointer__DefaultPointerEventResponder_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Pointer__DefaultPointerEventResponder);
    options.TypeSize = sizeof(Pointer__DefaultPointerEventResponder_type);
    type = (Pointer__DefaultPointerEventResponder_type*)uClassType::New("Fuse.Input.Pointer.DefaultPointerEventResponder", options);
    type->fp_ctor_ = (void*)Pointer__DefaultPointerEventResponder__New1_fn;
    type->interface0.fp_OnPointerPressed = (void(*)(uObject*, ::g::Fuse::Input::PointerPressedArgs*))Pointer__DefaultPointerEventResponder__OnPointerPressed_fn;
    type->interface0.fp_OnPointerMoved = (void(*)(uObject*, ::g::Fuse::Input::PointerMovedArgs*))Pointer__DefaultPointerEventResponder__OnPointerMoved_fn;
    type->interface0.fp_OnPointerReleased = (void(*)(uObject*, ::g::Fuse::Input::PointerReleasedArgs*))Pointer__DefaultPointerEventResponder__OnPointerReleased_fn;
    type->interface0.fp_OnPointerWheelMoved = (void(*)(uObject*, ::g::Fuse::Input::PointerWheelMovedArgs*))Pointer__DefaultPointerEventResponder__OnPointerWheelMoved_fn;
    ::TYPES[3] = ::g::Fuse::NodeEventArgs_typeof();
    ::TYPES[4] = ::g::Fuse::Input::Pointer_typeof();
    ::TYPES[2] = ::g::Fuse::Input::PointerEventArgs_typeof();
    ::TYPES[5] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Fuse::Input::Pointer__PointerRecord_typeof());
    ::TYPES[6] = ::g::Fuse::Input::Pointer__PointerRecord_typeof();
    ::TYPES[7] = ::g::Uno::Action2_typeof()->MakeType(::g::Fuse::Input::PointerPressedArgs_typeof(), ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof()));
    type->SetInterfaces(
        ::g::Fuse::Input::IPointerEventResponder_typeof(), offsetof(Pointer__DefaultPointerEventResponder_type, interface0));
    return type;
}

// public generated DefaultPointerEventResponder() :1376
void Pointer__DefaultPointerEventResponder__ctor__fn(Pointer__DefaultPointerEventResponder* __this)
{
    __this->ctor_();
}

// public generated DefaultPointerEventResponder New() :1376
void Pointer__DefaultPointerEventResponder__New1_fn(Pointer__DefaultPointerEventResponder** __retval)
{
    *__retval = Pointer__DefaultPointerEventResponder::New1();
}

// public void OnPointerMoved(Fuse.Input.PointerMovedArgs args) :1400
void Pointer__DefaultPointerEventResponder__OnPointerMoved_fn(Pointer__DefaultPointerEventResponder* __this, ::g::Fuse::Input::PointerMovedArgs* args)
{
    __this->OnPointerMoved(args);
}

// public void OnPointerPressed(Fuse.Input.PointerPressedArgs args) :1378
void Pointer__DefaultPointerEventResponder__OnPointerPressed_fn(Pointer__DefaultPointerEventResponder* __this, ::g::Fuse::Input::PointerPressedArgs* args)
{
    __this->OnPointerPressed(args);
}

// public void OnPointerReleased(Fuse.Input.PointerReleasedArgs args) :1417
void Pointer__DefaultPointerEventResponder__OnPointerReleased_fn(Pointer__DefaultPointerEventResponder* __this, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    __this->OnPointerReleased(args);
}

// public void OnPointerWheelMoved(Fuse.Input.PointerWheelMovedArgs args) :1432
void Pointer__DefaultPointerEventResponder__OnPointerWheelMoved_fn(Pointer__DefaultPointerEventResponder* __this, ::g::Fuse::Input::PointerWheelMovedArgs* args)
{
    __this->OnPointerWheelMoved(args);
}

// public generated DefaultPointerEventResponder() [instance] :1376
void Pointer__DefaultPointerEventResponder::ctor_()
{
}

// public void OnPointerMoved(Fuse.Input.PointerMovedArgs args) [instance] :1400
void Pointer__DefaultPointerEventResponder::OnPointerMoved(::g::Fuse::Input::PointerMovedArgs* args)
{
    bool ret3;
    ::g::Fuse::Input::Pointer__PointerRecord* ret4;

    if (uPtr(args)->Node() == NULL)
        return;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(::g::Fuse::Input::Pointer::_pointersDown()), uCRef<int>(uPtr(args)->PointIndex()), &ret3), ret3))
    {
        ::g::Fuse::Input::Pointer__PointerRecord* p = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(::g::Fuse::Input::Pointer::_pointersDown()), uCRef<int>(uPtr(args)->PointIndex()), &ret4), ret4);
        uPtr(p)->DistanceMoved = (uPtr(p)->DistanceMoved + ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(args->WindowPoint(), uPtr(p)->WindowPoint)));
        p->WindowPoint = args->WindowPoint();
    }

    ::g::Fuse::Input::Pointer::Coord(uPtr(args)->WindowPoint());
    uPtr(::g::Fuse::Input::Pointer::Moved())->RaiseWithBubble(args, 1);
}

// public void OnPointerPressed(Fuse.Input.PointerPressedArgs args) [instance] :1378
void Pointer__DefaultPointerEventResponder::OnPointerPressed(::g::Fuse::Input::PointerPressedArgs* args)
{
    ::g::Fuse::Input::Pointer__PointerRecord* collection1;

    if (uPtr(args)->Node() == NULL)
    {
        ::g::Fuse::Input::Focus::Release();
        return;
    }

    collection1 = ::g::Fuse::Input::Pointer__PointerRecord::New1();
    uPtr(collection1)->WindowPoint = uPtr(args)->WindowPoint();
    uPtr(collection1)->DistanceMoved = 0.0f;
    ::g::Fuse::Input::Pointer__PointerRecord* p = collection1;
    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(::g::Fuse::Input::Pointer::_pointersDown()), uCRef<int>(args->PointIndex()), p);
    ::g::Fuse::Input::Pointer::Coord(args->WindowPoint());
    uPtr(::g::Fuse::Input::Pointer::Pressed())->RaiseWithBubble1(args, 1, uDelegate::New(::TYPES[7/*Uno.Action<Fuse.Input.PointerPressedArgs, Uno.Collections.IList<Fuse.Node>>*/], (void*)::g::Fuse::Input::Pointer__CheckFocus_fn));
    uPtr(p)->WasHandled = args->IsHandled();
}

// public void OnPointerReleased(Fuse.Input.PointerReleasedArgs args) [instance] :1417
void Pointer__DefaultPointerEventResponder::OnPointerReleased(::g::Fuse::Input::PointerReleasedArgs* args)
{
    bool ret5;
    ::g::Fuse::Input::Pointer__PointerRecord* ret6;
    bool ret7;

    if (uPtr(args)->Node() == NULL)
        return;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(::g::Fuse::Input::Pointer::_pointersDown()), uCRef<int>(uPtr(args)->PointIndex()), &ret5), ret5))
    {
        ::g::Fuse::Input::Pointer__PointerRecord* p = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(::g::Fuse::Input::Pointer::_pointersDown()), uCRef<int>(uPtr(args)->PointIndex()), &ret6), ret6);
        uPtr(p)->DistanceMoved = (uPtr(p)->DistanceMoved + ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(args->WindowPoint(), uPtr(p)->WindowPoint)));
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(::g::Fuse::Input::Pointer::_pointersDown()), uCRef<int>(args->PointIndex()), &ret7);
    }

    ::g::Fuse::Input::Pointer::Coord(uPtr(args)->WindowPoint());
    uPtr(::g::Fuse::Input::Pointer::Released())->RaiseWithBubble(args, 1);
}

// public void OnPointerWheelMoved(Fuse.Input.PointerWheelMovedArgs args) [instance] :1432
void Pointer__DefaultPointerEventResponder::OnPointerWheelMoved(::g::Fuse::Input::PointerWheelMovedArgs* args)
{
    if (uPtr(args)->Node() == NULL)
        return;

    uPtr(::g::Fuse::Input::Pointer::WheelMoved())->RaiseWithBubble(args, 1);
}

// public generated DefaultPointerEventResponder New() [static] :1376
Pointer__DefaultPointerEventResponder* Pointer__DefaultPointerEventResponder::New1()
{
    Pointer__DefaultPointerEventResponder* obj2 = (Pointer__DefaultPointerEventResponder*)uNew(Pointer__DefaultPointerEventResponder_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(226)
// ------------------------------------------------------------

// public partial static class Focus :226
// {
// static Focus() :226
static void Focus__cctor__fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret2;
    ::g::Fuse::StyleProperty1* ret3;
    Focus::_gained_ = ::g::Fuse::Input::FocusGained::New1();
    Focus::_lost_ = ::g::Fuse::Input::FocusLost::New1();
    Focus::_isFoucsableChanged_ = ::g::Fuse::Input::IsFocusableChangedEvent::New1();
    Focus::_focusDelegatorHandle_ = ::g::Fuse::Properties::CreateHandle();
    Focus::IsFocusableProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[8/*Fuse.StyleProperty<Fuse.Node, bool>*/], uCRef(false), uDelegate::New(::TYPES[9/*Uno.Action<Fuse.Node>*/], (void*)Focus__OnIsFocusableChanged_fn), &ret2), ret2);
    Focus::FocusDelegateProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[10/*Fuse.StyleProperty<Fuse.Node, Fuse.Node>*/], NULL, uDelegate::New(::TYPES[9/*Uno.Action<Fuse.Node>*/], (void*)Focus__OnFocusDelegateChanged_fn), &ret3), ret3);
}

uClassType* Focus_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Input.Focus", options);
    type->fp_cctor_ = Focus__cctor__fn;
    ::STRINGS[1] = uString::Const("GiveTo");
    ::STRINGS[2] = uString::Const("Move");
    ::STRINGS[3] = uString::Const("Obtained");
    ::STRINGS[4] = uString::Const("OnNodeUnrooted");
    ::STRINGS[5] = uString::Const("OnWindowGotFocus");
    ::STRINGS[6] = uString::Const("OnWindowLostFocus");
    ::STRINGS[7] = uString::Const("Release");
    ::TYPES[8] = ::g::Fuse::StyleProperty1_typeof()->MakeType(::g::Fuse::Node_typeof(), ::g::Uno::Bool_typeof());
    ::TYPES[9] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[10] = ::g::Fuse::StyleProperty1_typeof()->MakeType(::g::Fuse::Node_typeof(), ::g::Fuse::Node_typeof());
    ::TYPES[1] = ::g::Fuse::Node_typeof();
    ::TYPES[0] = ::g::Uno::Delegate_typeof();
    ::TYPES[11] = ::g::Fuse::Input::FocusDelegator_typeof();
    ::TYPES[12] = ::g::Uno::Bool_typeof();
    ::TYPES[13] = ::g::Fuse::AppBase_typeof();
    ::TYPES[14] = ::g::Uno::Application_typeof();
    ::TYPES[15] = ::g::Uno::EventHandler_typeof();
    ::TYPES[16] = uObject_typeof();
    ::TYPES[17] = ::g::Fuse::NodeEvent_typeof()->MakeType(::g::Fuse::Input::FocusGainedHandler_typeof(), ::g::Fuse::Input::FocusGainedArgs_typeof());
    ::TYPES[18] = ::g::Fuse::NodeEvent_typeof()->MakeType(::g::Fuse::Input::IsFocusableChangedHandler_typeof(), ::g::Fuse::Input::IsFocusableChangedArgs_typeof());
    ::TYPES[19] = ::g::Fuse::NodeEvent_typeof()->MakeType(::g::Fuse::Input::FocusLostHandler_typeof(), ::g::Fuse::Input::FocusLostArgs_typeof());
    type->SetFields(0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Input::Focus::_focusDelegatorHandle_, uFieldFlagsStatic,
        ::g::Fuse::Node_typeof(), (uintptr_t)&::g::Fuse::Input::Focus::_focusedObject_, uFieldFlagsStatic,
        ::g::Fuse::Input::FocusGained_typeof(), (uintptr_t)&::g::Fuse::Input::Focus::_gained_, uFieldFlagsStatic,
        ::g::Fuse::Input::IsFocusableChangedEvent_typeof(), (uintptr_t)&::g::Fuse::Input::Focus::_isFoucsableChanged_, uFieldFlagsStatic,
        ::g::Fuse::Node_typeof(), (uintptr_t)&::g::Fuse::Input::Focus::_lastFocusedNode_, uFieldFlagsStatic,
        ::g::Fuse::Input::FocusLost_typeof(), (uintptr_t)&::g::Fuse::Input::Focus::_lost_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(::g::Fuse::Node_typeof(), ::g::Fuse::Node_typeof()), (uintptr_t)&::g::Fuse::Input::Focus::FocusDelegateProperty_, uFieldFlagsStatic,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(::g::Fuse::Node_typeof(), ::g::Uno::Bool_typeof()), (uintptr_t)&::g::Fuse::Input::Focus::IsFocusableProperty_, uFieldFlagsStatic);
    type->Reflection.SetFields(2,
        new uField("FocusDelegateProperty", 6),
        new uField("IsFocusableProperty", 7));
    type->Reflection.SetFunctions(19,
        new uFunction("get_FocusedNode", NULL, (void*)Focus__get_FocusedNode_fn, 0, true, ::g::Fuse::Node_typeof(), 0),
        new uFunction("get_Gained", NULL, (void*)Focus__get_Gained_fn, 0, true, ::g::Fuse::NodeEvent_typeof()->MakeType(::g::Fuse::Input::FocusGainedHandler_typeof(), ::g::Fuse::Input::FocusGainedArgs_typeof()), 0),
        new uFunction("GetFocusDelegate", NULL, (void*)Focus__GetFocusDelegate_fn, 0, true, ::g::Fuse::Node_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("GiveTo", NULL, (void*)Focus__GiveTo_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("IsFocusable", NULL, (void*)Focus__IsFocusable_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("get_IsFocusableChanged", NULL, (void*)Focus__get_IsFocusableChanged_fn, 0, true, ::g::Fuse::NodeEvent_typeof()->MakeType(::g::Fuse::Input::IsFocusableChangedHandler_typeof(), ::g::Fuse::Input::IsFocusableChangedArgs_typeof()), 0),
        new uFunction("IsWithin", NULL, (void*)Focus__IsWithin_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("get_Lost", NULL, (void*)Focus__get_Lost_fn, 0, true, ::g::Fuse::NodeEvent_typeof()->MakeType(::g::Fuse::Input::FocusLostHandler_typeof(), ::g::Fuse::Input::FocusLostArgs_typeof()), 0),
        new uFunction("Move", NULL, (void*)Focus__Move_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::Input::FocusNavigationDirection_typeof()),
        new uFunction("Obtained", NULL, (void*)Focus__Obtained_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("Release", NULL, (void*)Focus__Release_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("ReleaseFrom", NULL, (void*)Focus__ReleaseFrom_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("ResetFocusDelegate", NULL, (void*)Focus__ResetFocusDelegate_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("ResetIsFocusable", NULL, (void*)Focus__ResetIsFocusable_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("SetDelegator", NULL, (void*)Focus__SetDelegator_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Fuse::Input::FocusDelegator_typeof()),
        new uFunction("SetFocusDelegate", NULL, (void*)Focus__SetFocusDelegate_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Fuse::Node_typeof()),
        new uFunction("SetIsFocusable", NULL, (void*)Focus__SetIsFocusable_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("SetStyleFocusDelegate", NULL, (void*)Focus__SetStyleFocusDelegate_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Fuse::Node_typeof()),
        new uFunction("SetStyleIsFocusable", NULL, (void*)Focus__SetStyleIsFocusable_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Uno::Bool_typeof()));
    return type;
}

// internal static bool CanSetFocus(Fuse.Node node) :384
void Focus__CanSetFocus_fn(::g::Fuse::Node* node, bool* __retval)
{
    *__retval = Focus::CanSetFocus(node);
}

// private static void ChangeFocusedNode(Fuse.Node node, [string memberName]) :341
void Focus__ChangeFocusedNode_fn(::g::Fuse::Node* node, uString* memberName)
{
    Focus::ChangeFocusedNode(node, memberName);
}

// private static Fuse.Node FindRoot() :314
void Focus__FindRoot_fn(::g::Fuse::Node** __retval)
{
    *__retval = Focus::FindRoot();
}

// public static Fuse.Node get_FocusedNode() :241
void Focus__get_FocusedNode_fn(::g::Fuse::Node** __retval)
{
    *__retval = Focus::FocusedNode();
}

// public static Fuse.NodeEvent<Fuse.Input.FocusGainedHandler, Fuse.Input.FocusGainedArgs> get_Gained() :232
void Focus__get_Gained_fn(::g::Fuse::NodeEvent** __retval)
{
    *__retval = Focus::Gained();
}

// private static Fuse.Input.FocusDelegator GetDelegator(Fuse.Node n) :251
void Focus__GetDelegator_fn(::g::Fuse::Node* n, uDelegate** __retval)
{
    *__retval = Focus::GetDelegator(n);
}

// public static Fuse.Node GetFocusDelegate(Fuse.Node n) :447
void Focus__GetFocusDelegate_fn(::g::Fuse::Node* n, ::g::Fuse::Node** __retval)
{
    *__retval = Focus::GetFocusDelegate(n);
}

// public static void GiveTo(Fuse.Node n) :296
void Focus__GiveTo_fn(::g::Fuse::Node* n)
{
    Focus::GiveTo(n);
}

// internal static bool HandlesFocusEvent(Fuse.Node n) :436
void Focus__HandlesFocusEvent_fn(::g::Fuse::Node* n, bool* __retval)
{
    *__retval = Focus::HandlesFocusEvent(n);
}

// public static bool IsFocusable(Fuse.Node n) :393
void Focus__IsFocusable_fn(::g::Fuse::Node* n, bool* __retval)
{
    *__retval = Focus::IsFocusable(n);
}

// public static Fuse.NodeEvent<Fuse.Input.IsFocusableChangedHandler, Fuse.Input.IsFocusableChangedArgs> get_IsFocusableChanged() :234
void Focus__get_IsFocusableChanged_fn(::g::Fuse::NodeEvent** __retval)
{
    *__retval = Focus::IsFocusableChanged();
}

// public static bool IsWithin(Fuse.Node n) :301
void Focus__IsWithin_fn(::g::Fuse::Node* n, bool* __retval)
{
    *__retval = Focus::IsWithin(n);
}

// public static Fuse.NodeEvent<Fuse.Input.FocusLostHandler, Fuse.Input.FocusLostArgs> get_Lost() :233
void Focus__get_Lost_fn(::g::Fuse::NodeEvent** __retval)
{
    *__retval = Focus::Lost();
}

// public static void Move(Fuse.Input.FocusNavigationDirection direction) :269
void Focus__Move_fn(int* direction)
{
    Focus::Move(*direction);
}

// public static void Obtained(Fuse.Node n) :291
void Focus__Obtained_fn(::g::Fuse::Node* n)
{
    Focus::Obtained(n);
}

// private static void OnFocusDelegateChanged(Fuse.Node n) :470
void Focus__OnFocusDelegateChanged_fn(::g::Fuse::Node* n)
{
    Focus::OnFocusDelegateChanged(n);
}

// private static void OnIsFocusableChanged(Fuse.Node n) :416
void Focus__OnIsFocusableChanged_fn(::g::Fuse::Node* n)
{
    Focus::OnIsFocusableChanged(n);
}

// private static void OnNodeUnrooted(object sender, Uno.EventArgs args) :430
void Focus__OnNodeUnrooted_fn(uObject* sender, ::g::Uno::EventArgs* args)
{
    Focus::OnNodeUnrooted(sender, args);
}

// internal static void OnWindowGotFocus(object sender, Uno.EventArgs args) :258
void Focus__OnWindowGotFocus_fn(uObject* sender, ::g::Uno::EventArgs* args)
{
    Focus::OnWindowGotFocus(sender, args);
}

// internal static void OnWindowLostFocus(object sender, Uno.EventArgs args) :264
void Focus__OnWindowLostFocus_fn(uObject* sender, ::g::Uno::EventArgs* args)
{
    Focus::OnWindowLostFocus(sender, args);
}

// private static Fuse.Node Predict(Fuse.Input.FocusNavigationDirection direction) :323
void Focus__Predict_fn(int* direction, ::g::Fuse::Node** __retval)
{
    *__retval = Focus::Predict(*direction);
}

// public static void Release() :278
void Focus__Release_fn()
{
    Focus::Release();
}

// public static void ReleaseFrom(Fuse.Node n) :284
void Focus__ReleaseFrom_fn(::g::Fuse::Node* n)
{
    Focus::ReleaseFrom(n);
}

// public static void ResetFocusDelegate(Fuse.Node n) :465
void Focus__ResetFocusDelegate_fn(::g::Fuse::Node* n)
{
    Focus::ResetFocusDelegate(n);
}

// public static void ResetIsFocusable(Fuse.Node n) :411
void Focus__ResetIsFocusable_fn(::g::Fuse::Node* n)
{
    Focus::ResetIsFocusable(n);
}

// public static void SetDelegator(Fuse.Node n, Fuse.Input.FocusDelegator delegator) :246
void Focus__SetDelegator_fn(::g::Fuse::Node* n, uDelegate* delegator)
{
    Focus::SetDelegator(n, delegator);
}

// public static void SetFocusDelegate(Fuse.Node n, Fuse.Node d) :453
void Focus__SetFocusDelegate_fn(::g::Fuse::Node* n, ::g::Fuse::Node* d)
{
    Focus::SetFocusDelegate(n, d);
}

// public static void SetIsFocusable(Fuse.Node n, bool focusable) :399
void Focus__SetIsFocusable_fn(::g::Fuse::Node* n, bool* focusable)
{
    Focus::SetIsFocusable(n, *focusable);
}

// public static void SetStyleFocusDelegate(Fuse.Node n, Fuse.Node d) :459
void Focus__SetStyleFocusDelegate_fn(::g::Fuse::Node* n, ::g::Fuse::Node* d)
{
    Focus::SetStyleFocusDelegate(n, d);
}

// public static void SetStyleIsFocusable(Fuse.Node n, bool focusable) :405
void Focus__SetStyleIsFocusable_fn(::g::Fuse::Node* n, bool* focusable)
{
    Focus::SetStyleIsFocusable(n, *focusable);
}

uSStrong< ::g::Fuse::PropertyHandle*> Focus::_focusDelegatorHandle_;
uSStrong< ::g::Fuse::Node*> Focus::_focusedObject_;
uSStrong< ::g::Fuse::Input::FocusGained*> Focus::_gained_;
uSStrong< ::g::Fuse::Input::IsFocusableChangedEvent*> Focus::_isFoucsableChanged_;
uSStrong< ::g::Fuse::Node*> Focus::_lastFocusedNode_;
uSStrong< ::g::Fuse::Input::FocusLost*> Focus::_lost_;
uSStrong< ::g::Fuse::StyleProperty1*> Focus::FocusDelegateProperty_;
uSStrong< ::g::Fuse::StyleProperty1*> Focus::IsFocusableProperty_;

// internal static bool CanSetFocus(Fuse.Node node) [static] :384
bool Focus::CanSetFocus(::g::Fuse::Node* node)
{
    Focus_typeof()->Init();
    return (node == NULL) || ((uPtr(node)->IsRooted() && uPtr(node)->IsEnabled()) && Focus::IsFocusable(node));
}

// private static void ChangeFocusedNode(Fuse.Node node, [string memberName]) [static] :341
void Focus::ChangeFocusedNode(::g::Fuse::Node* node, uString* memberName)
{
    Focus_typeof()->Init();

    if (node == Focus::_focusedObject())
        return;

    while (node != NULL)
    {
        uDelegate* delegator = Focus::GetDelegator(node);

        if (::g::Uno::Delegate::op_Inequality(delegator, NULL))
        {
            node = (::g::Fuse::Node*)uPtr(delegator)->Invoke();
            continue;
        }

        ::g::Fuse::Node* focusDelegate = Focus::GetFocusDelegate(node);

        if (focusDelegate != NULL)
        {
            node = focusDelegate;
            continue;
        }

        break;
    }

    if (!Focus::CanSetFocus(node))
        node = Focus::FindRoot();

    if (node == Focus::_focusedObject())
        return;

    Focus::_lastFocusedNode() = Focus::_focusedObject();
    Focus::_focusedObject() = node;

    if (Focus::_lastFocusedNode() != NULL)
        uPtr(Focus::Lost())->RaiseWithBubble(::g::Fuse::Input::FocusLostArgs::New3(Focus::_lastFocusedNode()), 0);

    if (Focus::_focusedObject() != NULL)
        uPtr(Focus::Gained())->RaiseWithBubble(::g::Fuse::Input::FocusGainedArgs::New3(Focus::_focusedObject()), 0);
}

// private static Fuse.Node FindRoot() [static] :314
::g::Fuse::Node* Focus::FindRoot()
{
    Focus_typeof()->Init();
    ::g::Fuse::AppBase* app = uAs< ::g::Fuse::AppBase*>(::g::Uno::Application::Current(), ::TYPES[13/*Fuse.AppBase*/]);

    if (app != NULL)
        return uPtr(app)->RootNode();

    return NULL;
}

// private static Fuse.Input.FocusDelegator GetDelegator(Fuse.Node n) [static] :251
uDelegate* Focus::GetDelegator(::g::Fuse::Node* n)
{
    Focus_typeof()->Init();
    uObject* res;

    if (uPtr(uPtr(n)->Properties())->TryGet(Focus::_focusDelegatorHandle(), &res))
        return uCast<uDelegate*>(res, ::TYPES[11/*Fuse.Input.FocusDelegator*/]);

    return NULL;
}

// public static Fuse.Node GetFocusDelegate(Fuse.Node n) [static] :447
::g::Fuse::Node* Focus::GetFocusDelegate(::g::Fuse::Node* n)
{
    Focus_typeof()->Init();
    ::g::Fuse::Node* ret4;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Focus::FocusDelegateProperty()), n, &ret4), ret4);
}

// public static void GiveTo(Fuse.Node n) [static] :296
void Focus::GiveTo(::g::Fuse::Node* n)
{
    Focus_typeof()->Init();
    Focus::ChangeFocusedNode(n, ::STRINGS[1/*"GiveTo"*/]);
}

// internal static bool HandlesFocusEvent(Fuse.Node n) [static] :436
bool Focus::HandlesFocusEvent(::g::Fuse::Node* n)
{
    Focus_typeof()->Init();
    return (Focus::IsFocusable(n) || ::g::Uno::Delegate::op_Inequality(Focus::GetDelegator(n), NULL)) || (Focus::GetFocusDelegate(n) != NULL);
}

// public static bool IsFocusable(Fuse.Node n) [static] :393
bool Focus::IsFocusable(::g::Fuse::Node* n)
{
    Focus_typeof()->Init();
    bool ret5;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Focus::IsFocusableProperty()), n, &ret5), ret5);
}

// public static bool IsWithin(Fuse.Node n) [static] :301
bool Focus::IsWithin(::g::Fuse::Node* n)
{
    Focus_typeof()->Init();
    ::g::Fuse::Node* k = Focus::FocusedNode();

    while (k != NULL)
    {
        if (k == n)
            return true;

        k = uPtr(k)->Parent();
    }

    return false;
}

// public static void Move(Fuse.Input.FocusNavigationDirection direction) [static] :269
void Focus::Move(int direction)
{
    Focus_typeof()->Init();
    ::g::Fuse::Node* predictedFocus = Focus::Predict(direction);

    if (predictedFocus == NULL)
        return;

    Focus::ChangeFocusedNode(predictedFocus, ::STRINGS[2/*"Move"*/]);
}

// public static void Obtained(Fuse.Node n) [static] :291
void Focus::Obtained(::g::Fuse::Node* n)
{
    Focus_typeof()->Init();
    Focus::ChangeFocusedNode(n, ::STRINGS[3/*"Obtained"*/]);
}

// private static void OnFocusDelegateChanged(Fuse.Node n) [static] :470
void Focus::OnFocusDelegateChanged(::g::Fuse::Node* n)
{
    Focus_typeof()->Init();
}

// private static void OnIsFocusableChanged(Fuse.Node n) [static] :416
void Focus::OnIsFocusableChanged(::g::Fuse::Node* n)
{
    Focus_typeof()->Init();

    if (Focus::IsFocusable(n))
        uPtr(n)->add_Unrooted(uDelegate::New(::TYPES[15/*Uno.EventHandler*/], (void*)Focus__OnNodeUnrooted_fn));
    else
        uPtr(n)->remove_Unrooted(uDelegate::New(::TYPES[15/*Uno.EventHandler*/], (void*)Focus__OnNodeUnrooted_fn));

    uPtr(Focus::IsFocusableChanged())->RaiseWithoutBubble(::g::Fuse::Input::IsFocusableChangedArgs::New3(n), 0);
}

// private static void OnNodeUnrooted(object sender, Uno.EventArgs args) [static] :430
void Focus::OnNodeUnrooted(uObject* sender, ::g::Uno::EventArgs* args)
{
    Focus_typeof()->Init();

    if ((Focus::_focusedObject() != NULL) && !uPtr(Focus::_focusedObject())->IsRooted())
        Focus::ChangeFocusedNode(NULL, ::STRINGS[4/*"OnNodeUnroo...*/]);
}

// internal static void OnWindowGotFocus(object sender, Uno.EventArgs args) [static] :258
void Focus::OnWindowGotFocus(uObject* sender, ::g::Uno::EventArgs* args)
{
    Focus_typeof()->Init();
    ::g::Fuse::Node* ind1;
    Focus::ChangeFocusedNode((ind1 = Focus::_focusedObject(), (ind1 != NULL) ? ind1 : (::g::Fuse::Node*)Focus::_lastFocusedNode()), ::STRINGS[5/*"OnWindowGot...*/]);
}

// internal static void OnWindowLostFocus(object sender, Uno.EventArgs args) [static] :264
void Focus::OnWindowLostFocus(uObject* sender, ::g::Uno::EventArgs* args)
{
    Focus_typeof()->Init();
    Focus::ChangeFocusedNode(NULL, ::STRINGS[6/*"OnWindowLos...*/]);
}

// private static Fuse.Node Predict(Fuse.Input.FocusNavigationDirection direction) [static] :323
::g::Fuse::Node* Focus::Predict(int direction)
{
    Focus_typeof()->Init();
    ::g::Fuse::Node* node = ::g::Fuse::Input::FocusPredictStrategy::Predict(Focus::_focusedObject(), direction);

    if (node == NULL)
    {
        ::g::Fuse::Node* root = Focus::FindRoot();

        if (root != NULL)
        {
            node = ::g::Fuse::Input::FocusPredictStrategy::Predict(root, direction);

            if ((node == NULL) && Focus::CanSetFocus(root))
                node = root;
        }
    }

    return node;
}

// public static void Release() [static] :278
void Focus::Release()
{
    Focus_typeof()->Init();
    Focus::ChangeFocusedNode(NULL, ::STRINGS[7/*"Release"*/]);
}

// public static void ReleaseFrom(Fuse.Node n) [static] :284
void Focus::ReleaseFrom(::g::Fuse::Node* n)
{
    Focus_typeof()->Init();

    if (Focus::FocusedNode() == n)
        Focus::Release();
}

// public static void ResetFocusDelegate(Fuse.Node n) [static] :465
void Focus::ResetFocusDelegate(::g::Fuse::Node* n)
{
    Focus_typeof()->Init();
    bool ret6;
    ::g::Fuse::StyleProperty1__Reset_fn(uPtr(Focus::FocusDelegateProperty()), n, &ret6);
}

// public static void ResetIsFocusable(Fuse.Node n) [static] :411
void Focus::ResetIsFocusable(::g::Fuse::Node* n)
{
    Focus_typeof()->Init();
    bool ret7;
    ::g::Fuse::StyleProperty1__Reset_fn(uPtr(Focus::IsFocusableProperty()), n, &ret7);
}

// public static void SetDelegator(Fuse.Node n, Fuse.Input.FocusDelegator delegator) [static] :246
void Focus::SetDelegator(::g::Fuse::Node* n, uDelegate* delegator)
{
    Focus_typeof()->Init();
    uPtr(uPtr(n)->Properties())->Set(Focus::_focusDelegatorHandle(), delegator);
}

// public static void SetFocusDelegate(Fuse.Node n, Fuse.Node d) [static] :453
void Focus::SetFocusDelegate(::g::Fuse::Node* n, ::g::Fuse::Node* d)
{
    Focus_typeof()->Init();
    bool ret8;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Focus::FocusDelegateProperty()), n, d, &ret8);
}

// public static void SetIsFocusable(Fuse.Node n, bool focusable) [static] :399
void Focus::SetIsFocusable(::g::Fuse::Node* n, bool focusable)
{
    Focus_typeof()->Init();
    bool ret9;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Focus::IsFocusableProperty()), n, uCRef(focusable), &ret9);
}

// public static void SetStyleFocusDelegate(Fuse.Node n, Fuse.Node d) [static] :459
void Focus::SetStyleFocusDelegate(::g::Fuse::Node* n, ::g::Fuse::Node* d)
{
    Focus_typeof()->Init();
    bool ret10;
    ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(Focus::FocusDelegateProperty()), n, d, &ret10);
}

// public static void SetStyleIsFocusable(Fuse.Node n, bool focusable) [static] :405
void Focus::SetStyleIsFocusable(::g::Fuse::Node* n, bool focusable)
{
    Focus_typeof()->Init();
    bool ret11;
    ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(Focus::IsFocusableProperty()), n, uCRef(focusable), &ret11);
}

// public static Fuse.Node get_FocusedNode() [static] :241
::g::Fuse::Node* Focus::FocusedNode()
{
    Focus_typeof()->Init();
    return Focus::_focusedObject();
}

// public static Fuse.NodeEvent<Fuse.Input.FocusGainedHandler, Fuse.Input.FocusGainedArgs> get_Gained() [static] :232
::g::Fuse::NodeEvent* Focus::Gained()
{
    Focus_typeof()->Init();
    return Focus::_gained();
}

// public static Fuse.NodeEvent<Fuse.Input.IsFocusableChangedHandler, Fuse.Input.IsFocusableChangedArgs> get_IsFocusableChanged() [static] :234
::g::Fuse::NodeEvent* Focus::IsFocusableChanged()
{
    Focus_typeof()->Init();
    return Focus::_isFoucsableChanged();
}

// public static Fuse.NodeEvent<Fuse.Input.FocusLostHandler, Fuse.Input.FocusLostArgs> get_Lost() [static] :233
::g::Fuse::NodeEvent* Focus::Lost()
{
    Focus_typeof()->Init();
    return Focus::_lost();
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(224)
// ------------------------------------------------------------

// public delegate Fuse.Node FocusDelegator() :224
uDelegateType* FocusDelegator_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Input.FocusDelegator", 0, 0);
    type->SetSignature(::g::Fuse::Node_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(16)
// -----------------------------------------------------------

// internal sealed class FocusGained :16
// {
::g::Fuse::NodeEvent_type* FocusGained_typeof()
{
    static uSStrong< ::g::Fuse::NodeEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FocusGained);
    options.TypeSize = sizeof(::g::Fuse::NodeEvent_type);
    type = (::g::Fuse::NodeEvent_type*)uClassType::New("Fuse.Input.FocusGained", options);
    type->SetBase(::g::Fuse::NodeEvent_typeof()->MakeType(::g::Fuse::Input::FocusGainedHandler_typeof(), ::g::Fuse::Input::FocusGainedArgs_typeof()));
    type->fp_ctor_ = (void*)FocusGained__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::NodeEvent*, void*, uObject*, ::g::Fuse::NodeEventArgs*))FocusGained__Invoke_fn;
    ::TYPES[20] = ::g::Fuse::Input::FocusGainedHandler_typeof();
    type->SetFields(2);
    return type;
}

// public generated FocusGained() :16
void FocusGained__ctor_1_fn(FocusGained* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Input.FocusGainedHandler handler, object sender, Fuse.Input.FocusGainedArgs args) :18
void FocusGained__Invoke_fn(FocusGained* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::FocusGainedArgs* args)
{
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated FocusGained New() :16
void FocusGained__New1_fn(FocusGained** __retval)
{
    *__retval = FocusGained::New1();
}

// public generated FocusGained() [instance] :16
void FocusGained::ctor_1()
{
    ctor_();
}

// public generated FocusGained New() [static] :16
FocusGained* FocusGained::New1()
{
    FocusGained* obj1 = (FocusGained*)uNew(FocusGained_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(9)
// ----------------------------------------------------------

// public sealed class FocusGainedArgs :9
// {
::g::Fuse::NodeEventArgs_type* FocusGainedArgs_typeof()
{
    static uSStrong< ::g::Fuse::NodeEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FocusGainedArgs);
    options.TypeSize = sizeof(::g::Fuse::NodeEventArgs_type);
    type = (::g::Fuse::NodeEventArgs_type*)uClassType::New("Fuse.Input.FocusGainedArgs", options);
    type->SetBase(::g::Fuse::NodeEventArgs_typeof());
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::NodeEventArgs__Fuse_Scripting_IScriptEvent_Serialize_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::NodeEventArgs_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)FocusGainedArgs__New3_fn, 0, true, FocusGainedArgs_typeof(), 1, ::g::Fuse::Node_typeof()));
    return type;
}

// public FocusGainedArgs(Fuse.Node node) :11
void FocusGainedArgs__ctor_2_fn(FocusGainedArgs* __this, ::g::Fuse::Node* node)
{
    __this->ctor_2(node);
}

// public FocusGainedArgs New(Fuse.Node node) :11
void FocusGainedArgs__New3_fn(::g::Fuse::Node* node, FocusGainedArgs** __retval)
{
    *__retval = FocusGainedArgs::New3(node);
}

// public FocusGainedArgs(Fuse.Node node) [instance] :11
void FocusGainedArgs::ctor_2(::g::Fuse::Node* node)
{
    ctor_1(node);
}

// public FocusGainedArgs New(Fuse.Node node) [static] :11
FocusGainedArgs* FocusGainedArgs::New3(::g::Fuse::Node* node)
{
    FocusGainedArgs* obj1 = (FocusGainedArgs*)uNew(FocusGainedArgs_typeof());
    obj1->ctor_2(node);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(14)
// -----------------------------------------------------------

// public delegate void FocusGainedHandler(object sender, Fuse.Input.FocusGainedArgs args) :14
uDelegateType* FocusGainedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Input.FocusGainedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::FocusGainedArgs_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(34)
// -----------------------------------------------------------

// internal sealed class FocusLost :34
// {
::g::Fuse::NodeEvent_type* FocusLost_typeof()
{
    static uSStrong< ::g::Fuse::NodeEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FocusLost);
    options.TypeSize = sizeof(::g::Fuse::NodeEvent_type);
    type = (::g::Fuse::NodeEvent_type*)uClassType::New("Fuse.Input.FocusLost", options);
    type->SetBase(::g::Fuse::NodeEvent_typeof()->MakeType(::g::Fuse::Input::FocusLostHandler_typeof(), ::g::Fuse::Input::FocusLostArgs_typeof()));
    type->fp_ctor_ = (void*)FocusLost__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::NodeEvent*, void*, uObject*, ::g::Fuse::NodeEventArgs*))FocusLost__Invoke_fn;
    ::TYPES[21] = ::g::Fuse::Input::FocusLostHandler_typeof();
    type->SetFields(2);
    return type;
}

// public generated FocusLost() :34
void FocusLost__ctor_1_fn(FocusLost* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Input.FocusLostHandler handler, object sender, Fuse.Input.FocusLostArgs args) :36
void FocusLost__Invoke_fn(FocusLost* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::FocusLostArgs* args)
{
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated FocusLost New() :34
void FocusLost__New1_fn(FocusLost** __retval)
{
    *__retval = FocusLost::New1();
}

// public generated FocusLost() [instance] :34
void FocusLost::ctor_1()
{
    ctor_();
}

// public generated FocusLost New() [static] :34
FocusLost* FocusLost::New1()
{
    FocusLost* obj1 = (FocusLost*)uNew(FocusLost_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(27)
// -----------------------------------------------------------

// public sealed class FocusLostArgs :27
// {
::g::Fuse::NodeEventArgs_type* FocusLostArgs_typeof()
{
    static uSStrong< ::g::Fuse::NodeEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FocusLostArgs);
    options.TypeSize = sizeof(::g::Fuse::NodeEventArgs_type);
    type = (::g::Fuse::NodeEventArgs_type*)uClassType::New("Fuse.Input.FocusLostArgs", options);
    type->SetBase(::g::Fuse::NodeEventArgs_typeof());
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::NodeEventArgs__Fuse_Scripting_IScriptEvent_Serialize_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::NodeEventArgs_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)FocusLostArgs__New3_fn, 0, true, FocusLostArgs_typeof(), 1, ::g::Fuse::Node_typeof()));
    return type;
}

// public FocusLostArgs(Fuse.Node node) :29
void FocusLostArgs__ctor_2_fn(FocusLostArgs* __this, ::g::Fuse::Node* node)
{
    __this->ctor_2(node);
}

// public FocusLostArgs New(Fuse.Node node) :29
void FocusLostArgs__New3_fn(::g::Fuse::Node* node, FocusLostArgs** __retval)
{
    *__retval = FocusLostArgs::New3(node);
}

// public FocusLostArgs(Fuse.Node node) [instance] :29
void FocusLostArgs::ctor_2(::g::Fuse::Node* node)
{
    ctor_1(node);
}

// public FocusLostArgs New(Fuse.Node node) [static] :29
FocusLostArgs* FocusLostArgs::New3(::g::Fuse::Node* node)
{
    FocusLostArgs* obj1 = (FocusLostArgs*)uNew(FocusLostArgs_typeof());
    obj1->ctor_2(node);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(32)
// -----------------------------------------------------------

// public delegate void FocusLostHandler(object sender, Fuse.Input.FocusLostArgs args) :32
uDelegateType* FocusLostHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Input.FocusLostHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::FocusLostArgs_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(216)
// ------------------------------------------------------------

// public enum FocusNavigationDirection :216
uEnumType* FocusNavigationDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Input.FocusNavigationDirection", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Up", 0LL,
        "Down", 1LL,
        "Left", 2LL,
        "Right", 3LL);
    return type;
}

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(68)
// -----------------------------------------------------------

// internal static class FocusPredictStrategy :68
// {
uClassType* FocusPredictStrategy_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Input.FocusPredictStrategy", options);
    ::TYPES[22] = ::g::Uno::Int_typeof();
    ::TYPES[23] = ::g::Uno::Predicate_typeof()->MakeType(::g::Fuse::Node_typeof());
    return type;
}

// public static Fuse.Node Predict(Fuse.Node n, Fuse.Input.FocusNavigationDirection direction) :70
void FocusPredictStrategy__Predict_fn(::g::Fuse::Node* n, int* direction, ::g::Fuse::Node** __retval)
{
    *__retval = FocusPredictStrategy::Predict(n, *direction);
}

// public static Fuse.Node Predict(Fuse.Node n, Fuse.Input.FocusNavigationDirection direction) [static] :70
::g::Fuse::Node* FocusPredictStrategy::Predict(::g::Fuse::Node* n, int direction)
{
    if (n != NULL)
    {
        if (direction == 1)
            return ::g::Fuse::Input::TraverseNodeExtensions::FindNextChild1(n, uDelegate::New(::TYPES[23/*Uno.Predicate<Fuse.Node>*/], (void*)::g::Fuse::Input::Focus__CanSetFocus_fn));
        else if (direction == 0)
            return ::g::Fuse::Input::TraverseNodeExtensions::FindPreviousChild1(n, uDelegate::New(::TYPES[23/*Uno.Predicate<Fuse.Node>*/], (void*)::g::Fuse::Input::Focus__CanSetFocus_fn));
    }

    return NULL;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(503)
// ------------------------------------------------------------

// public static class HitTestHelpers :503
// {
uClassType* HitTestHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Input.HitTestHelpers", options);
    type->Reflection.SetFunctions(1,
        new uFunction("HitTestNearest", NULL, (void*)HitTestHelpers__HitTestNearest_fn, 0, true, ::g::Fuse::HitTestResult_typeof(), 2, ::g::Fuse::Node_typeof(), ::g::Uno::Float2_typeof()));
    return type;
}

// public static Fuse.HitTestResult HitTestNearest(Fuse.Node root, float2 point) :505
void HitTestHelpers__HitTestNearest_fn(::g::Fuse::Node* root, ::g::Uno::Float2* point, ::g::Fuse::HitTestResult** __retval)
{
    *__retval = HitTestHelpers::HitTestNearest(root, *point);
}

// public static Fuse.HitTestResult HitTestNearest(Fuse.Node root, float2 point) [static] :505
::g::Fuse::HitTestResult* HitTestHelpers::HitTestNearest(::g::Fuse::Node* root, ::g::Uno::Float2 point)
{
    ::g::Fuse::Input::SelectionQuery* sq = ::g::Fuse::Input::SelectionQuery::New1();
    return sq->Select1(root, point);
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(911)
// ------------------------------------------------------------

// public abstract interface IPointerEventResponder :911
// {
uInterfaceType* IPointerEventResponder_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Input.IPointerEventResponder", 0, 0);
    type->Reflection.SetFunctions(4,
        new uFunction("OnPointerMoved", NULL, NULL, offsetof(IPointerEventResponder, fp_OnPointerMoved), false, uVoid_typeof(), 1, ::g::Fuse::Input::PointerMovedArgs_typeof()),
        new uFunction("OnPointerPressed", NULL, NULL, offsetof(IPointerEventResponder, fp_OnPointerPressed), false, uVoid_typeof(), 1, ::g::Fuse::Input::PointerPressedArgs_typeof()),
        new uFunction("OnPointerReleased", NULL, NULL, offsetof(IPointerEventResponder, fp_OnPointerReleased), false, uVoid_typeof(), 1, ::g::Fuse::Input::PointerReleasedArgs_typeof()),
        new uFunction("OnPointerWheelMoved", NULL, NULL, offsetof(IPointerEventResponder, fp_OnPointerWheelMoved), false, uVoid_typeof(), 1, ::g::Fuse::Input::PointerWheelMovedArgs_typeof()));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(43)
// -----------------------------------------------------------

// public sealed class IsFocusableChangedArgs :43
// {
::g::Fuse::NodeEventArgs_type* IsFocusableChangedArgs_typeof()
{
    static uSStrong< ::g::Fuse::NodeEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(IsFocusableChangedArgs);
    options.TypeSize = sizeof(::g::Fuse::NodeEventArgs_type);
    type = (::g::Fuse::NodeEventArgs_type*)uClassType::New("Fuse.Input.IsFocusableChangedArgs", options);
    type->SetBase(::g::Fuse::NodeEventArgs_typeof());
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::NodeEventArgs__Fuse_Scripting_IScriptEvent_Serialize_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::NodeEventArgs_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)IsFocusableChangedArgs__New3_fn, 0, true, IsFocusableChangedArgs_typeof(), 1, ::g::Fuse::Node_typeof()));
    return type;
}

// public IsFocusableChangedArgs(Fuse.Node node) :45
void IsFocusableChangedArgs__ctor_2_fn(IsFocusableChangedArgs* __this, ::g::Fuse::Node* node)
{
    __this->ctor_2(node);
}

// public IsFocusableChangedArgs New(Fuse.Node node) :45
void IsFocusableChangedArgs__New3_fn(::g::Fuse::Node* node, IsFocusableChangedArgs** __retval)
{
    *__retval = IsFocusableChangedArgs::New3(node);
}

// public IsFocusableChangedArgs(Fuse.Node node) [instance] :45
void IsFocusableChangedArgs::ctor_2(::g::Fuse::Node* node)
{
    ctor_1(node);
}

// public IsFocusableChangedArgs New(Fuse.Node node) [static] :45
IsFocusableChangedArgs* IsFocusableChangedArgs::New3(::g::Fuse::Node* node)
{
    IsFocusableChangedArgs* obj1 = (IsFocusableChangedArgs*)uNew(IsFocusableChangedArgs_typeof());
    obj1->ctor_2(node);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(50)
// -----------------------------------------------------------

// internal sealed class IsFocusableChangedEvent :50
// {
::g::Fuse::NodeEvent_type* IsFocusableChangedEvent_typeof()
{
    static uSStrong< ::g::Fuse::NodeEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(IsFocusableChangedEvent);
    options.TypeSize = sizeof(::g::Fuse::NodeEvent_type);
    type = (::g::Fuse::NodeEvent_type*)uClassType::New("Fuse.Input.IsFocusableChangedEvent", options);
    type->SetBase(::g::Fuse::NodeEvent_typeof()->MakeType(::g::Fuse::Input::IsFocusableChangedHandler_typeof(), ::g::Fuse::Input::IsFocusableChangedArgs_typeof()));
    type->fp_ctor_ = (void*)IsFocusableChangedEvent__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::NodeEvent*, void*, uObject*, ::g::Fuse::NodeEventArgs*))IsFocusableChangedEvent__Invoke_fn;
    ::TYPES[24] = ::g::Fuse::Input::IsFocusableChangedHandler_typeof();
    type->SetFields(2);
    return type;
}

// public generated IsFocusableChangedEvent() :50
void IsFocusableChangedEvent__ctor_1_fn(IsFocusableChangedEvent* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Input.IsFocusableChangedHandler handler, object sender, Fuse.Input.IsFocusableChangedArgs args) :52
void IsFocusableChangedEvent__Invoke_fn(IsFocusableChangedEvent* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::IsFocusableChangedArgs* args)
{
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated IsFocusableChangedEvent New() :50
void IsFocusableChangedEvent__New1_fn(IsFocusableChangedEvent** __retval)
{
    *__retval = IsFocusableChangedEvent::New1();
}

// public generated IsFocusableChangedEvent() [instance] :50
void IsFocusableChangedEvent::ctor_1()
{
    ctor_();
}

// public generated IsFocusableChangedEvent New() [static] :50
IsFocusableChangedEvent* IsFocusableChangedEvent::New1()
{
    IsFocusableChangedEvent* obj1 = (IsFocusableChangedEvent*)uNew(IsFocusableChangedEvent_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(48)
// -----------------------------------------------------------

// public delegate void IsFocusableChangedHandler(object sender, Fuse.Input.IsFocusableChangedArgs args) :48
uDelegateType* IsFocusableChangedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Input.IsFocusableChangedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::IsFocusableChangedArgs_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(601)
// ------------------------------------------------------------

// public static class Keyboard :601
// {
// static Keyboard() :601
static void Keyboard__cctor__fn(uType* __type)
{
    Keyboard::_keyPressed_ = ::g::Fuse::Input::KeyPressed::New1();
    Keyboard::_keyReleased_ = ::g::Fuse::Input::KeyReleased::New1();
    Keyboard::_keysDown_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[25/*Uno.Collections.List<Uno.Platform.Key>*/]));
    Keyboard::_keyboardHandle_ = ::g::Fuse::Properties::CreateHandle();
}

uClassType* Keyboard_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Input.Keyboard", options);
    type->fp_cctor_ = Keyboard__cctor__fn;
    ::TYPES[25] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Platform::Key_typeof());
    ::TYPES[0] = ::g::Uno::Delegate_typeof();
    ::TYPES[22] = ::g::Uno::Int_typeof();
    ::TYPES[26] = ::g::Fuse::Input::Focus_typeof();
    ::TYPES[3] = ::g::Fuse::NodeEventArgs_typeof();
    ::TYPES[27] = ::g::Fuse::NodeEvent_typeof()->MakeType(::g::Fuse::Input::KeyPressedHandler_typeof(), ::g::Fuse::Input::KeyPressedArgs_typeof());
    ::TYPES[28] = ::g::Fuse::NodeEvent_typeof()->MakeType(::g::Fuse::Input::KeyReleasedHandler_typeof(), ::g::Fuse::Input::KeyReleasedArgs_typeof());
    type->SetFields(0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Input::Keyboard::_keyboardHandle_, uFieldFlagsStatic,
        ::g::Fuse::Input::KeyPressed_typeof(), (uintptr_t)&::g::Fuse::Input::Keyboard::_keyPressed_, uFieldFlagsStatic,
        ::g::Fuse::Input::KeyReleased_typeof(), (uintptr_t)&::g::Fuse::Input::Keyboard::_keyReleased_, uFieldFlagsStatic,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Platform::Key_typeof()), (uintptr_t)&::g::Fuse::Input::Keyboard::_keysDown_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(7,
        new uFunction("AddHandlers", NULL, (void*)Keyboard__AddHandlers_fn, 0, true, uVoid_typeof(), 3, ::g::Fuse::Node_typeof(), ::g::Fuse::Input::KeyPressedHandler_typeof(), ::g::Fuse::Input::KeyReleasedHandler_typeof()),
        new uFunction("IsKeyPressed", NULL, (void*)Keyboard__IsKeyPressed_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Platform::Key_typeof()),
        new uFunction("get_KeyPressed", NULL, (void*)Keyboard__get_KeyPressed_fn, 0, true, ::g::Fuse::NodeEvent_typeof()->MakeType(::g::Fuse::Input::KeyPressedHandler_typeof(), ::g::Fuse::Input::KeyPressedArgs_typeof()), 0),
        new uFunction("get_KeyReleased", NULL, (void*)Keyboard__get_KeyReleased_fn, 0, true, ::g::Fuse::NodeEvent_typeof()->MakeType(::g::Fuse::Input::KeyReleasedHandler_typeof(), ::g::Fuse::Input::KeyReleasedArgs_typeof()), 0),
        new uFunction("RaiseKeyPressed", NULL, (void*)Keyboard__RaiseKeyPressed_fn, 0, true, ::g::Uno::Bool_typeof(), 5, ::g::Uno::Platform::Key_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("RaiseKeyReleased", NULL, (void*)Keyboard__RaiseKeyReleased_fn, 0, true, ::g::Uno::Bool_typeof(), 5, ::g::Uno::Platform::Key_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("RemoveHandlers", NULL, (void*)Keyboard__RemoveHandlers_fn, 0, true, uVoid_typeof(), 3, ::g::Fuse::Node_typeof(), ::g::Fuse::Input::KeyPressedHandler_typeof(), ::g::Fuse::Input::KeyReleasedHandler_typeof()));
    return type;
}

// public static void AddHandlers(Fuse.Node node, [Fuse.Input.KeyPressedHandler pressed], [Fuse.Input.KeyReleasedHandler released]) :609
void Keyboard__AddHandlers_fn(::g::Fuse::Node* node, uDelegate* pressed, uDelegate* released)
{
    Keyboard::AddHandlers(node, pressed, released);
}

// public static bool IsKeyPressed(Uno.Platform.Key key) :646
void Keyboard__IsKeyPressed_fn(int* key, bool* __retval)
{
    *__retval = Keyboard::IsKeyPressed(*key);
}

// public static Fuse.NodeEvent<Fuse.Input.KeyPressedHandler, Fuse.Input.KeyPressedArgs> get_KeyPressed() :606
void Keyboard__get_KeyPressed_fn(::g::Fuse::NodeEvent** __retval)
{
    *__retval = Keyboard::KeyPressed();
}

// public static Fuse.NodeEvent<Fuse.Input.KeyReleasedHandler, Fuse.Input.KeyReleasedArgs> get_KeyReleased() :607
void Keyboard__get_KeyReleased_fn(::g::Fuse::NodeEvent** __retval)
{
    *__retval = Keyboard::KeyReleased();
}

// public static bool RaiseKeyPressed(Uno.Platform.Key key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed) :624
void Keyboard__RaiseKeyPressed_fn(int* key, bool* isMetaKeyPressed, bool* isControlKeyPressed, bool* isShiftKeyPressed, bool* isAltKeyPressed, bool* __retval)
{
    *__retval = Keyboard::RaiseKeyPressed(*key, *isMetaKeyPressed, *isControlKeyPressed, *isShiftKeyPressed, *isAltKeyPressed);
}

// public static bool RaiseKeyReleased(Uno.Platform.Key key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed) :634
void Keyboard__RaiseKeyReleased_fn(int* key, bool* isMetaKeyPressed, bool* isControlKeyPressed, bool* isShiftKeyPressed, bool* isAltKeyPressed, bool* __retval)
{
    *__retval = Keyboard::RaiseKeyReleased(*key, *isMetaKeyPressed, *isControlKeyPressed, *isShiftKeyPressed, *isAltKeyPressed);
}

// public static void RemoveHandlers(Fuse.Node node, [Fuse.Input.KeyPressedHandler pressed], [Fuse.Input.KeyReleasedHandler released]) :615
void Keyboard__RemoveHandlers_fn(::g::Fuse::Node* node, uDelegate* pressed, uDelegate* released)
{
    Keyboard::RemoveHandlers(node, pressed, released);
}

uSStrong< ::g::Fuse::PropertyHandle*> Keyboard::_keyboardHandle_;
uSStrong< ::g::Fuse::Input::KeyPressed*> Keyboard::_keyPressed_;
uSStrong< ::g::Fuse::Input::KeyReleased*> Keyboard::_keyReleased_;
uSStrong< ::g::Uno::Collections::List*> Keyboard::_keysDown_;

// public static void AddHandlers(Fuse.Node node, [Fuse.Input.KeyPressedHandler pressed], [Fuse.Input.KeyReleasedHandler released]) [static] :609
void Keyboard::AddHandlers(::g::Fuse::Node* node, uDelegate* pressed, uDelegate* released)
{
    Keyboard_typeof()->Init();

    if (::g::Uno::Delegate::op_Inequality(pressed, NULL))
        ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(Keyboard::KeyPressed()), node, pressed);

    if (::g::Uno::Delegate::op_Inequality(released, NULL))
        ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(Keyboard::KeyReleased()), node, released);
}

// public static bool IsKeyPressed(Uno.Platform.Key key) [static] :646
bool Keyboard::IsKeyPressed(int key)
{
    Keyboard_typeof()->Init();
    int ret1;

    for (int i = 0; i < uPtr(Keyboard::_keysDown())->Count(); i++)
        if ((::g::Uno::Collections::List__get_Item_fn(uPtr(Keyboard::_keysDown()), uCRef<int>(i), &ret1), ret1) == key)
            return true;

    return false;
}

// public static bool RaiseKeyPressed(Uno.Platform.Key key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed) [static] :624
bool Keyboard::RaiseKeyPressed(int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed)
{
    Keyboard_typeof()->Init();
    ::g::Uno::Collections::List__Add_fn(uPtr(Keyboard::_keysDown()), uCRef<int>(key));
    ::g::Fuse::Input::KeyPressedArgs* args = ::g::Fuse::Input::KeyPressedArgs::New3(key, isMetaKeyPressed, isControlKeyPressed, isShiftKeyPressed, isAltKeyPressed, ::g::Fuse::Input::Focus::FocusedNode());
    uPtr(Keyboard::KeyPressed())->RaiseWithBubble(args, 0);
    return args->IsHandled();
}

// public static bool RaiseKeyReleased(Uno.Platform.Key key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed) [static] :634
bool Keyboard::RaiseKeyReleased(int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed)
{
    Keyboard_typeof()->Init();
    int ret2;

    for (int i = 0; i < uPtr(Keyboard::_keysDown())->Count(); i++)
        if ((::g::Uno::Collections::List__get_Item_fn(uPtr(Keyboard::_keysDown()), uCRef<int>(i), &ret2), ret2) == key)
            uPtr(Keyboard::_keysDown())->RemoveAt(i--);

    ::g::Fuse::Input::KeyReleasedArgs* args = ::g::Fuse::Input::KeyReleasedArgs::New3(key, isMetaKeyPressed, isControlKeyPressed, isShiftKeyPressed, isAltKeyPressed, ::g::Fuse::Input::Focus::FocusedNode());
    uPtr(Keyboard::KeyReleased())->RaiseWithBubble(args, 0);
    return args->IsHandled();
}

// public static void RemoveHandlers(Fuse.Node node, [Fuse.Input.KeyPressedHandler pressed], [Fuse.Input.KeyReleasedHandler released]) [static] :615
void Keyboard::RemoveHandlers(::g::Fuse::Node* node, uDelegate* pressed, uDelegate* released)
{
    Keyboard_typeof()->Init();

    if (::g::Uno::Delegate::op_Inequality(pressed, NULL))
        ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(Keyboard::KeyPressed()), node, pressed);

    if (::g::Uno::Delegate::op_Inequality(released, NULL))
        ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(Keyboard::KeyReleased()), node, released);
}

// public static Fuse.NodeEvent<Fuse.Input.KeyPressedHandler, Fuse.Input.KeyPressedArgs> get_KeyPressed() [static] :606
::g::Fuse::NodeEvent* Keyboard::KeyPressed()
{
    Keyboard_typeof()->Init();
    return Keyboard::_keyPressed();
}

// public static Fuse.NodeEvent<Fuse.Input.KeyReleasedHandler, Fuse.Input.KeyReleasedArgs> get_KeyReleased() [static] :607
::g::Fuse::NodeEvent* Keyboard::KeyReleased()
{
    Keyboard_typeof()->Init();
    return Keyboard::_keyReleased();
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(521)
// ------------------------------------------------------------

// public abstract class KeyEventArgs :521
// {
::g::Fuse::NodeEventArgs_type* KeyEventArgs_typeof()
{
    static uSStrong< ::g::Fuse::NodeEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(KeyEventArgs);
    options.TypeSize = sizeof(::g::Fuse::NodeEventArgs_type);
    type = (::g::Fuse::NodeEventArgs_type*)uClassType::New("Fuse.Input.KeyEventArgs", options);
    type->SetBase(::g::Fuse::NodeEventArgs_typeof());
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::NodeEventArgs__Fuse_Scripting_IScriptEvent_Serialize_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::NodeEventArgs_type, interface0));
    type->SetFields(2,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Input::KeyEventArgs, _IsAltKeyPressed), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Input::KeyEventArgs, _IsControlKeyPressed), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Input::KeyEventArgs, _IsMetaKeyPressed), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Input::KeyEventArgs, _IsShiftKeyPressed), 0,
        ::g::Uno::Platform::Key_typeof(), offsetof(::g::Fuse::Input::KeyEventArgs, _Key), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_IsAltKeyPressed", NULL, (void*)KeyEventArgs__get_IsAltKeyPressed_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsControlKeyPressed", NULL, (void*)KeyEventArgs__get_IsControlKeyPressed_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsMetaKeyPressed", NULL, (void*)KeyEventArgs__get_IsMetaKeyPressed_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsShiftKeyPressed", NULL, (void*)KeyEventArgs__get_IsShiftKeyPressed_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_Key", NULL, (void*)KeyEventArgs__get_Key_fn, 0, false, ::g::Uno::Platform::Key_typeof(), 0));
    return type;
}

// protected KeyEventArgs(Uno.Platform.Key key, Fuse.Node node) :553
void KeyEventArgs__ctor_2_fn(KeyEventArgs* __this, int* key, ::g::Fuse::Node* node)
{
    __this->ctor_2(*key, node);
}

// public generated bool get_IsAltKeyPressed() :549
void KeyEventArgs__get_IsAltKeyPressed_fn(KeyEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsAltKeyPressed();
}

// protected generated void set_IsAltKeyPressed(bool value) :550
void KeyEventArgs__set_IsAltKeyPressed_fn(KeyEventArgs* __this, bool* value)
{
    __this->IsAltKeyPressed(*value);
}

// public generated bool get_IsControlKeyPressed() :537
void KeyEventArgs__get_IsControlKeyPressed_fn(KeyEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsControlKeyPressed();
}

// protected generated void set_IsControlKeyPressed(bool value) :538
void KeyEventArgs__set_IsControlKeyPressed_fn(KeyEventArgs* __this, bool* value)
{
    __this->IsControlKeyPressed(*value);
}

// public generated bool get_IsMetaKeyPressed() :531
void KeyEventArgs__get_IsMetaKeyPressed_fn(KeyEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsMetaKeyPressed();
}

// protected generated void set_IsMetaKeyPressed(bool value) :532
void KeyEventArgs__set_IsMetaKeyPressed_fn(KeyEventArgs* __this, bool* value)
{
    __this->IsMetaKeyPressed(*value);
}

// public generated bool get_IsShiftKeyPressed() :543
void KeyEventArgs__get_IsShiftKeyPressed_fn(KeyEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsShiftKeyPressed();
}

// protected generated void set_IsShiftKeyPressed(bool value) :544
void KeyEventArgs__set_IsShiftKeyPressed_fn(KeyEventArgs* __this, bool* value)
{
    __this->IsShiftKeyPressed(*value);
}

// public generated Uno.Platform.Key get_Key() :525
void KeyEventArgs__get_Key_fn(KeyEventArgs* __this, int* __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(Uno.Platform.Key value) :526
void KeyEventArgs__set_Key_fn(KeyEventArgs* __this, int* value)
{
    __this->Key(*value);
}

// protected KeyEventArgs(Uno.Platform.Key key, Fuse.Node node) [instance] :553
void KeyEventArgs::ctor_2(int key, ::g::Fuse::Node* node)
{
    ctor_1(node);
    Key(key);
}

// public generated bool get_IsAltKeyPressed() [instance] :549
bool KeyEventArgs::IsAltKeyPressed()
{
    return _IsAltKeyPressed;
}

// protected generated void set_IsAltKeyPressed(bool value) [instance] :550
void KeyEventArgs::IsAltKeyPressed(bool value)
{
    _IsAltKeyPressed = value;
}

// public generated bool get_IsControlKeyPressed() [instance] :537
bool KeyEventArgs::IsControlKeyPressed()
{
    return _IsControlKeyPressed;
}

// protected generated void set_IsControlKeyPressed(bool value) [instance] :538
void KeyEventArgs::IsControlKeyPressed(bool value)
{
    _IsControlKeyPressed = value;
}

// public generated bool get_IsMetaKeyPressed() [instance] :531
bool KeyEventArgs::IsMetaKeyPressed()
{
    return _IsMetaKeyPressed;
}

// protected generated void set_IsMetaKeyPressed(bool value) [instance] :532
void KeyEventArgs::IsMetaKeyPressed(bool value)
{
    _IsMetaKeyPressed = value;
}

// public generated bool get_IsShiftKeyPressed() [instance] :543
bool KeyEventArgs::IsShiftKeyPressed()
{
    return _IsShiftKeyPressed;
}

// protected generated void set_IsShiftKeyPressed(bool value) [instance] :544
void KeyEventArgs::IsShiftKeyPressed(bool value)
{
    _IsShiftKeyPressed = value;
}

// public generated Uno.Platform.Key get_Key() [instance] :525
int KeyEventArgs::Key()
{
    return _Key;
}

// private generated void set_Key(Uno.Platform.Key value) [instance] :526
void KeyEventArgs::Key(int value)
{
    _Key = value;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(572)
// ------------------------------------------------------------

// internal sealed class KeyPressed :572
// {
::g::Fuse::NodeEvent_type* KeyPressed_typeof()
{
    static uSStrong< ::g::Fuse::NodeEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(KeyPressed);
    options.TypeSize = sizeof(::g::Fuse::NodeEvent_type);
    type = (::g::Fuse::NodeEvent_type*)uClassType::New("Fuse.Input.KeyPressed", options);
    type->SetBase(::g::Fuse::NodeEvent_typeof()->MakeType(::g::Fuse::Input::KeyPressedHandler_typeof(), ::g::Fuse::Input::KeyPressedArgs_typeof()));
    type->fp_ctor_ = (void*)KeyPressed__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::NodeEvent*, void*, uObject*, ::g::Fuse::NodeEventArgs*))KeyPressed__Invoke_fn;
    ::TYPES[29] = ::g::Fuse::Input::KeyPressedHandler_typeof();
    type->SetFields(2);
    return type;
}

// public generated KeyPressed() :572
void KeyPressed__ctor_1_fn(KeyPressed* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Input.KeyPressedHandler handler, object sender, Fuse.Input.KeyPressedArgs args) :574
void KeyPressed__Invoke_fn(KeyPressed* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::KeyPressedArgs* args)
{
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated KeyPressed New() :572
void KeyPressed__New1_fn(KeyPressed** __retval)
{
    *__retval = KeyPressed::New1();
}

// public generated KeyPressed() [instance] :572
void KeyPressed::ctor_1()
{
    ctor_();
}

// public generated KeyPressed New() [static] :572
KeyPressed* KeyPressed::New1()
{
    KeyPressed* obj1 = (KeyPressed*)uNew(KeyPressed_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(559)
// ------------------------------------------------------------

// public sealed class KeyPressedArgs :559
// {
::g::Fuse::NodeEventArgs_type* KeyPressedArgs_typeof()
{
    static uSStrong< ::g::Fuse::NodeEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(KeyPressedArgs);
    options.TypeSize = sizeof(::g::Fuse::NodeEventArgs_type);
    type = (::g::Fuse::NodeEventArgs_type*)uClassType::New("Fuse.Input.KeyPressedArgs", options);
    type->SetBase(::g::Fuse::Input::KeyEventArgs_typeof());
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::NodeEventArgs__Fuse_Scripting_IScriptEvent_Serialize_fn;
    ::TYPES[30] = ::g::Fuse::Input::KeyEventArgs_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::NodeEventArgs_type, interface0));
    type->SetFields(7);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)KeyPressedArgs__New3_fn, 0, true, KeyPressedArgs_typeof(), 6, ::g::Uno::Platform::Key_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), ::g::Fuse::Node_typeof()));
    return type;
}

// public KeyPressedArgs(Uno.Platform.Key key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, Fuse.Node node) :561
void KeyPressedArgs__ctor_3_fn(KeyPressedArgs* __this, int* key, bool* isMetaKeyPressed, bool* isControlKeyPressed, bool* isShiftKeyPressed, bool* isAltKeyPressed, ::g::Fuse::Node* node)
{
    __this->ctor_3(*key, *isMetaKeyPressed, *isControlKeyPressed, *isShiftKeyPressed, *isAltKeyPressed, node);
}

// public KeyPressedArgs New(Uno.Platform.Key key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, Fuse.Node node) :561
void KeyPressedArgs__New3_fn(int* key, bool* isMetaKeyPressed, bool* isControlKeyPressed, bool* isShiftKeyPressed, bool* isAltKeyPressed, ::g::Fuse::Node* node, KeyPressedArgs** __retval)
{
    *__retval = KeyPressedArgs::New3(*key, *isMetaKeyPressed, *isControlKeyPressed, *isShiftKeyPressed, *isAltKeyPressed, node);
}

// public KeyPressedArgs(Uno.Platform.Key key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, Fuse.Node node) [instance] :561
void KeyPressedArgs::ctor_3(int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, ::g::Fuse::Node* node)
{
    ctor_2(key, node);
    IsMetaKeyPressed(isMetaKeyPressed);
    IsControlKeyPressed(isControlKeyPressed);
    IsShiftKeyPressed(isShiftKeyPressed);
    IsAltKeyPressed(isAltKeyPressed);
}

// public KeyPressedArgs New(Uno.Platform.Key key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, Fuse.Node node) [static] :561
KeyPressedArgs* KeyPressedArgs::New3(int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, ::g::Fuse::Node* node)
{
    KeyPressedArgs* obj1 = (KeyPressedArgs*)uNew(KeyPressedArgs_typeof());
    obj1->ctor_3(key, isMetaKeyPressed, isControlKeyPressed, isShiftKeyPressed, isAltKeyPressed, node);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(570)
// ------------------------------------------------------------

// public delegate void KeyPressedHandler(object sender, Fuse.Input.KeyPressedArgs args) :570
uDelegateType* KeyPressedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Input.KeyPressedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::KeyPressedArgs_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(593)
// ------------------------------------------------------------

// internal sealed class KeyReleased :593
// {
::g::Fuse::NodeEvent_type* KeyReleased_typeof()
{
    static uSStrong< ::g::Fuse::NodeEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(KeyReleased);
    options.TypeSize = sizeof(::g::Fuse::NodeEvent_type);
    type = (::g::Fuse::NodeEvent_type*)uClassType::New("Fuse.Input.KeyReleased", options);
    type->SetBase(::g::Fuse::NodeEvent_typeof()->MakeType(::g::Fuse::Input::KeyReleasedHandler_typeof(), ::g::Fuse::Input::KeyReleasedArgs_typeof()));
    type->fp_ctor_ = (void*)KeyReleased__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::NodeEvent*, void*, uObject*, ::g::Fuse::NodeEventArgs*))KeyReleased__Invoke_fn;
    ::TYPES[31] = ::g::Fuse::Input::KeyReleasedHandler_typeof();
    type->SetFields(2);
    return type;
}

// public generated KeyReleased() :593
void KeyReleased__ctor_1_fn(KeyReleased* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Input.KeyReleasedHandler handler, object sender, Fuse.Input.KeyReleasedArgs args) :595
void KeyReleased__Invoke_fn(KeyReleased* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::KeyReleasedArgs* args)
{
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated KeyReleased New() :593
void KeyReleased__New1_fn(KeyReleased** __retval)
{
    *__retval = KeyReleased::New1();
}

// public generated KeyReleased() [instance] :593
void KeyReleased::ctor_1()
{
    ctor_();
}

// public generated KeyReleased New() [static] :593
KeyReleased* KeyReleased::New1()
{
    KeyReleased* obj1 = (KeyReleased*)uNew(KeyReleased_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(580)
// ------------------------------------------------------------

// public sealed class KeyReleasedArgs :580
// {
::g::Fuse::NodeEventArgs_type* KeyReleasedArgs_typeof()
{
    static uSStrong< ::g::Fuse::NodeEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(KeyReleasedArgs);
    options.TypeSize = sizeof(::g::Fuse::NodeEventArgs_type);
    type = (::g::Fuse::NodeEventArgs_type*)uClassType::New("Fuse.Input.KeyReleasedArgs", options);
    type->SetBase(::g::Fuse::Input::KeyEventArgs_typeof());
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::NodeEventArgs__Fuse_Scripting_IScriptEvent_Serialize_fn;
    ::TYPES[30] = ::g::Fuse::Input::KeyEventArgs_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::NodeEventArgs_type, interface0));
    type->SetFields(7);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)KeyReleasedArgs__New3_fn, 0, true, KeyReleasedArgs_typeof(), 6, ::g::Uno::Platform::Key_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), ::g::Fuse::Node_typeof()));
    return type;
}

// public KeyReleasedArgs(Uno.Platform.Key key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, Fuse.Node node) :582
void KeyReleasedArgs__ctor_3_fn(KeyReleasedArgs* __this, int* key, bool* isMetaKeyPressed, bool* isControlKeyPressed, bool* isShiftKeyPressed, bool* isAltKeyPressed, ::g::Fuse::Node* node)
{
    __this->ctor_3(*key, *isMetaKeyPressed, *isControlKeyPressed, *isShiftKeyPressed, *isAltKeyPressed, node);
}

// public KeyReleasedArgs New(Uno.Platform.Key key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, Fuse.Node node) :582
void KeyReleasedArgs__New3_fn(int* key, bool* isMetaKeyPressed, bool* isControlKeyPressed, bool* isShiftKeyPressed, bool* isAltKeyPressed, ::g::Fuse::Node* node, KeyReleasedArgs** __retval)
{
    *__retval = KeyReleasedArgs::New3(*key, *isMetaKeyPressed, *isControlKeyPressed, *isShiftKeyPressed, *isAltKeyPressed, node);
}

// public KeyReleasedArgs(Uno.Platform.Key key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, Fuse.Node node) [instance] :582
void KeyReleasedArgs::ctor_3(int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, ::g::Fuse::Node* node)
{
    ctor_2(key, node);
    IsMetaKeyPressed(isMetaKeyPressed);
    IsControlKeyPressed(isControlKeyPressed);
    IsShiftKeyPressed(isShiftKeyPressed);
    IsAltKeyPressed(isAltKeyPressed);
}

// public KeyReleasedArgs New(Uno.Platform.Key key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, Fuse.Node node) [static] :582
KeyReleasedArgs* KeyReleasedArgs::New3(int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, ::g::Fuse::Node* node)
{
    KeyReleasedArgs* obj1 = (KeyReleasedArgs*)uNew(KeyReleasedArgs_typeof());
    obj1->ctor_3(key, isMetaKeyPressed, isControlKeyPressed, isShiftKeyPressed, isAltKeyPressed, node);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(591)
// ------------------------------------------------------------

// public delegate void KeyReleasedHandler(object sender, Fuse.Input.KeyReleasedArgs args) :591
uDelegateType* KeyReleasedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Input.KeyReleasedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::KeyReleasedArgs_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(1330)
// -------------------------------------------------------------

// private sealed class Pointer.PELHolder :1330
// {
uType* Pointer__PELHolder_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Pointer__PELHolder);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Input.Pointer.PELHolder", options);
    type->fp_ctor_ = (void*)Pointer__PELHolder__New1_fn;
    type->SetFields(0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Input::Pointer__PELHolder, Node), 0,
        ::g::Fuse::Input::Pointer__PELStatus_typeof(), offsetof(::g::Fuse::Input::Pointer__PELHolder, Status), 0);
    return type;
}

// public generated PELHolder() :1330
void Pointer__PELHolder__ctor__fn(Pointer__PELHolder* __this)
{
    __this->ctor_();
}

// public generated PELHolder New() :1330
void Pointer__PELHolder__New1_fn(Pointer__PELHolder** __retval)
{
    *__retval = Pointer__PELHolder::New1();
}

// public generated PELHolder() [instance] :1330
void Pointer__PELHolder::ctor_()
{
}

// public generated PELHolder New() [static] :1330
Pointer__PELHolder* Pointer__PELHolder::New1()
{
    Pointer__PELHolder* obj1 = (Pointer__PELHolder*)uNew(Pointer__PELHolder_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(1324)
// -------------------------------------------------------------

// private enum Pointer.PELStatus :1324
uEnumType* Pointer__PELStatus_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Input.Pointer.PELStatus", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Added", 0LL,
        "Removed", 1LL,
        "Remain", 2LL);
    return type;
}

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(919)
// ------------------------------------------------------------

// public partial static class Pointer :919
// {
// static Pointer() :923
static void Pointer__cctor__fn(uType* __type)
{
    Pointer::_pressed_ = ::g::Fuse::Input::PointerPressed::New1();
    Pointer::_moved_ = ::g::Fuse::Input::PointerMoved::New1();
    Pointer::_released_ = ::g::Fuse::Input::PointerReleased::New1();
    Pointer::_entered_ = ::g::Fuse::Input::PointerEntered::New1();
    Pointer::_left_ = ::g::Fuse::Input::PointerLeft::New1();
    Pointer::_wheelMoved_ = ::g::Fuse::Input::PointerWheelMoved::New1();
    Pointer::_pointersDown_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[5/*Uno.Collections.Dictionary<int, Fuse.Input.Pointer.PointerRecord>*/]));
    Pointer::_softCapturers_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[32/*Uno.Collections.Dictionary<int, Uno.Collections.IList<Fuse.Input.Capturer>>*/]));
    Pointer::_hardCapturers_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[33/*Uno.Collections.Dictionary<int, Fuse.Input.Capturer>*/]));
    Pointer::_lastHitNodes_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[34/*Uno.Collections.Dictionary<int, Uno.Collections.List<Fuse.Input.Pointer.PELHolder>>*/]));
    Pointer::EventResponder((uObject*)Pointer__DefaultPointerEventResponder::New1());
}

uClassType* Pointer_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Input.Pointer", options);
    type->fp_cctor_ = Pointer__cctor__fn;
    ::STRINGS[8] = uString::Const("HardCapture requires lostCallback Action");
    ::STRINGS[9] = uString::Const("HardCapture requires identity object");
    ::STRINGS[10] = uString::Const("HardCapture requires Node");
    ::STRINGS[11] = uString::Const("HardCapture can only be done on rooted enabled node");
    ::STRINGS[12] = uString::Const("C:\\ProgramData\\Uno\\Packages\\FuseCore\\0.19.3\\Input\\$.uno");
    ::STRINGS[13] = uString::Const("SoftCapture requires lostCallback Action");
    ::STRINGS[14] = uString::Const("SoftCapture requires identity object");
    ::STRINGS[15] = uString::Const("SoftCapture requires softCapturer Node");
    ::STRINGS[16] = uString::Const("SoftCapture can only be done on rooted enabled node");
    ::TYPES[5] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Int_typeof(), Pointer__PointerRecord_typeof());
    ::TYPES[32] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Input::Capturer_typeof()));
    ::TYPES[33] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Fuse::Input::Capturer_typeof());
    ::TYPES[34] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(Pointer__PELHolder_typeof()));
    ::TYPES[35] = ::g::Fuse::Input::IPointerEventResponder_typeof();
    ::TYPES[0] = ::g::Uno::Delegate_typeof();
    ::TYPES[3] = ::g::Fuse::NodeEventArgs_typeof();
    ::TYPES[36] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[37] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[12] = ::g::Uno::Bool_typeof();
    ::TYPES[38] = ::g::Fuse::Input::Capturer_typeof();
    ::TYPES[39] = ::g::Uno::Action_typeof();
    ::TYPES[40] = ::g::Uno::Collections::List_typeof()->MakeType(Pointer__PELHolder_typeof());
    ::TYPES[41] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Input::Capturer_typeof());
    ::TYPES[42] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1, ::g::Fuse::Input::Capturer_typeof());
    ::TYPES[43] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Input::Capturer_typeof());
    ::TYPES[1] = ::g::Fuse::Node_typeof();
    ::TYPES[44] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Input::Capturer_typeof());
    ::TYPES[45] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::Int_typeof(), Pointer__PointerRecord_typeof());
    ::TYPES[46] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::Int_typeof(), Pointer__PointerRecord_typeof());
    ::TYPES[47] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Input::Capturer_typeof());
    ::TYPES[48] = Pointer__PELHolder_typeof();
    ::TYPES[49] = ::g::Fuse::Input::PointerEventData_typeof();
    ::TYPES[50] = ::g::Fuse::HitTestResult_typeof();
    ::TYPES[22] = ::g::Uno::Int_typeof();
    ::TYPES[51] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Input::Capturer_typeof()));
    ::TYPES[52] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Input::Capturer_typeof()));
    ::TYPES[53] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Int_typeof());
    ::TYPES[54] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Fuse::Input::Capturer_typeof());
    ::TYPES[55] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Fuse::Input::Capturer_typeof());
    ::TYPES[56] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Int_typeof());
    ::TYPES[57] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Input::Capturer_typeof());
    ::TYPES[58] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[6] = Pointer__PointerRecord_typeof();
    ::TYPES[59] = ::g::Fuse::NodeEvent_typeof()->MakeType(::g::Fuse::Input::PointerEnteredHandler_typeof(), ::g::Fuse::Input::PointerEnteredArgs_typeof());
    ::TYPES[60] = ::g::Fuse::NodeEvent_typeof()->MakeType(::g::Fuse::Input::PointerLeftHandler_typeof(), ::g::Fuse::Input::PointerLeftArgs_typeof());
    ::TYPES[61] = ::g::Fuse::NodeEvent_typeof()->MakeType(::g::Fuse::Input::PointerMovedHandler_typeof(), ::g::Fuse::Input::PointerMovedArgs_typeof());
    ::TYPES[62] = ::g::Fuse::NodeEvent_typeof()->MakeType(::g::Fuse::Input::PointerPressedHandler_typeof(), ::g::Fuse::Input::PointerPressedArgs_typeof());
    ::TYPES[63] = ::g::Fuse::NodeEvent_typeof()->MakeType(::g::Fuse::Input::PointerReleasedHandler_typeof(), ::g::Fuse::Input::PointerReleasedArgs_typeof());
    ::TYPES[64] = ::g::Fuse::NodeEvent_typeof()->MakeType(::g::Fuse::Input::PointerWheelMovedHandler_typeof(), ::g::Fuse::Input::PointerWheelMovedArgs_typeof());
    type->SetFields(0,
        ::g::Fuse::Input::PointerEntered_typeof(), (uintptr_t)&::g::Fuse::Input::Pointer::_entered_, uFieldFlagsStatic,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Fuse::Input::Capturer_typeof()), (uintptr_t)&::g::Fuse::Input::Pointer::_hardCapturers_, uFieldFlagsStatic,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(Pointer__PELHolder_typeof())), (uintptr_t)&::g::Fuse::Input::Pointer::_lastHitNodes_, uFieldFlagsStatic,
        ::g::Fuse::Input::PointerLeft_typeof(), (uintptr_t)&::g::Fuse::Input::Pointer::_left_, uFieldFlagsStatic,
        ::g::Fuse::Input::PointerMoved_typeof(), (uintptr_t)&::g::Fuse::Input::Pointer::_moved_, uFieldFlagsStatic,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Int_typeof(), Pointer__PointerRecord_typeof()), (uintptr_t)&::g::Fuse::Input::Pointer::_pointersDown_, uFieldFlagsStatic,
        ::g::Fuse::Input::PointerPressed_typeof(), (uintptr_t)&::g::Fuse::Input::Pointer::_pressed_, uFieldFlagsStatic,
        ::g::Fuse::Input::PointerReleased_typeof(), (uintptr_t)&::g::Fuse::Input::Pointer::_released_, uFieldFlagsStatic,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Input::Capturer_typeof())), (uintptr_t)&::g::Fuse::Input::Pointer::_softCapturers_, uFieldFlagsStatic,
        ::g::Fuse::Input::PointerWheelMoved_typeof(), (uintptr_t)&::g::Fuse::Input::Pointer::_wheelMoved_, uFieldFlagsStatic,
        ::g::Uno::Float2_typeof(), (uintptr_t)&::g::Fuse::Input::Pointer::_Coord_, uFieldFlagsStatic,
        ::g::Fuse::Input::IPointerEventResponder_typeof(), (uintptr_t)&::g::Fuse::Input::Pointer::_EventResponder_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(21,
        new uFunction("AddHandlers", NULL, (void*)Pointer__AddHandlers_fn, 0, true, uVoid_typeof(), 7, ::g::Fuse::Node_typeof(), ::g::Fuse::Input::PointerPressedHandler_typeof(), ::g::Fuse::Input::PointerMovedHandler_typeof(), ::g::Fuse::Input::PointerReleasedHandler_typeof(), ::g::Fuse::Input::PointerEnteredHandler_typeof(), ::g::Fuse::Input::PointerLeftHandler_typeof(), ::g::Fuse::Input::PointerWheelMovedHandler_typeof()),
        new uFunction("get_Coord", NULL, (void*)Pointer__get_Coord_fn, 0, true, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_Coords", NULL, (void*)Pointer__get_Coords_fn, 0, true, ::g::Uno::Float2_typeof()->Array(), 0),
        new uFunction("get_Entered", NULL, (void*)Pointer__get_Entered_fn, 0, true, ::g::Fuse::NodeEvent_typeof()->MakeType(::g::Fuse::Input::PointerEnteredHandler_typeof(), ::g::Fuse::Input::PointerEnteredArgs_typeof()), 0),
        new uFunction("get_EventResponder", NULL, (void*)Pointer__get_EventResponder_fn, 0, true, ::g::Fuse::Input::IPointerEventResponder_typeof(), 0),
        new uFunction("set_EventResponder", NULL, (void*)Pointer__set_EventResponder_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::Input::IPointerEventResponder_typeof()),
        new uFunction("IsHardCaptured", NULL, (void*)Pointer__IsHardCaptured_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("IsHardCaptured", NULL, (void*)Pointer__IsHardCaptured1_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Int_typeof(), uObject_typeof()),
        new uFunction("IsPressed", NULL, (void*)Pointer__IsPressed_fn, 0, true, ::g::Uno::Bool_typeof(), 0),
        new uFunction("IsPressed", NULL, (void*)Pointer__IsPressed1_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("IsSoftCaptured", NULL, (void*)Pointer__IsSoftCaptured_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("IsSoftCaptured", NULL, (void*)Pointer__IsSoftCaptured1_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Int_typeof(), uObject_typeof()),
        new uFunction("get_Left", NULL, (void*)Pointer__get_Left_fn, 0, true, ::g::Fuse::NodeEvent_typeof()->MakeType(::g::Fuse::Input::PointerLeftHandler_typeof(), ::g::Fuse::Input::PointerLeftArgs_typeof()), 0),
        new uFunction("get_Moved", NULL, (void*)Pointer__get_Moved_fn, 0, true, ::g::Fuse::NodeEvent_typeof()->MakeType(::g::Fuse::Input::PointerMovedHandler_typeof(), ::g::Fuse::Input::PointerMovedArgs_typeof()), 0),
        new uFunction("get_Pressed", NULL, (void*)Pointer__get_Pressed_fn, 0, true, ::g::Fuse::NodeEvent_typeof()->MakeType(::g::Fuse::Input::PointerPressedHandler_typeof(), ::g::Fuse::Input::PointerPressedArgs_typeof()), 0),
        new uFunction("ReleaseAllCaptures", NULL, (void*)Pointer__ReleaseAllCaptures_fn, 0, true, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction("get_Released", NULL, (void*)Pointer__get_Released_fn, 0, true, ::g::Fuse::NodeEvent_typeof()->MakeType(::g::Fuse::Input::PointerReleasedHandler_typeof(), ::g::Fuse::Input::PointerReleasedArgs_typeof()), 0),
        new uFunction("ReleaseHardCapture", NULL, (void*)Pointer__ReleaseHardCapture_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("ReleaseSoftCapture", NULL, (void*)Pointer__ReleaseSoftCapture_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), uObject_typeof()),
        new uFunction("RemoveHandlers", NULL, (void*)Pointer__RemoveHandlers_fn, 0, true, uVoid_typeof(), 7, ::g::Fuse::Node_typeof(), ::g::Fuse::Input::PointerPressedHandler_typeof(), ::g::Fuse::Input::PointerMovedHandler_typeof(), ::g::Fuse::Input::PointerReleasedHandler_typeof(), ::g::Fuse::Input::PointerEnteredHandler_typeof(), ::g::Fuse::Input::PointerLeftHandler_typeof(), ::g::Fuse::Input::PointerWheelMovedHandler_typeof()),
        new uFunction("get_WheelMoved", NULL, (void*)Pointer__get_WheelMoved_fn, 0, true, ::g::Fuse::NodeEvent_typeof()->MakeType(::g::Fuse::Input::PointerWheelMovedHandler_typeof(), ::g::Fuse::Input::PointerWheelMovedArgs_typeof()), 0));
    return type;
}

// public static void AddHandlers(Fuse.Node node, [Fuse.Input.PointerPressedHandler pressed], [Fuse.Input.PointerMovedHandler moved], [Fuse.Input.PointerReleasedHandler released], [Fuse.Input.PointerEnteredHandler entered], [Fuse.Input.PointerLeftHandler left], [Fuse.Input.PointerWheelMovedHandler wheelMoved]) :942
void Pointer__AddHandlers_fn(::g::Fuse::Node* node, uDelegate* pressed, uDelegate* moved, uDelegate* released, uDelegate* entered, uDelegate* left, uDelegate* wheelMoved)
{
    Pointer::AddHandlers(node, pressed, moved, released, entered, left, wheelMoved);
}

// private static void CheckFocus(Fuse.Input.PointerPressedArgs args, Uno.Collections.IList<Fuse.Node> nodes) :1354
void Pointer__CheckFocus_fn(::g::Fuse::Input::PointerPressedArgs* args, uObject* nodes)
{
    Pointer::CheckFocus(args, nodes);
}

// public static generated float2 get_Coord() :1010
void Pointer__get_Coord_fn(::g::Uno::Float2* __retval)
{
    *__retval = Pointer::Coord();
}

// private static generated void set_Coord(float2 value) :1010
void Pointer__set_Coord_fn(::g::Uno::Float2* value)
{
    Pointer::Coord(*value);
}

// public static float2[] get_Coords() :978
void Pointer__get_Coords_fn(uArray** __retval)
{
    *__retval = Pointer::Coords();
}

// public static Fuse.NodeEvent<Fuse.Input.PointerEnteredHandler, Fuse.Input.PointerEnteredArgs> get_Entered() :938
void Pointer__get_Entered_fn(::g::Fuse::NodeEvent** __retval)
{
    *__retval = Pointer::Entered();
}

// public static generated Fuse.Input.IPointerEventResponder get_EventResponder() :921
void Pointer__get_EventResponder_fn(uObject** __retval)
{
    *__retval = Pointer::EventResponder();
}

// public static generated void set_EventResponder(Fuse.Input.IPointerEventResponder value) :921
void Pointer__set_EventResponder_fn(uObject* value)
{
    Pointer::EventResponder(value);
}

// internal static Fuse.Input.Capturer GetHardCapturer(int pointIndex) :1125
void Pointer__GetHardCapturer_fn(int* pointIndex, ::g::Fuse::Input::Capturer** __retval)
{
    *__retval = Pointer::GetHardCapturer(*pointIndex);
}

// private static Uno.Collections.List<Fuse.Input.Pointer.PELHolder> GetLastHitList(int pointIndex) :1339
void Pointer__GetLastHitList_fn(int* pointIndex, ::g::Uno::Collections::List** __retval)
{
    *__retval = Pointer::GetLastHitList(*pointIndex);
}

// internal static Fuse.Input.Capturer GetSoftCapturer(int pointIndex) :1014
void Pointer__GetSoftCapturer_fn(int* pointIndex, ::g::Fuse::Input::Capturer** __retval)
{
    *__retval = Pointer::GetSoftCapturer(*pointIndex);
}

// internal static bool HardCapture(int pointIndex, Fuse.Node node, object identity, Uno.Action lostCallback) :1140
void Pointer__HardCapture_fn(int* pointIndex, ::g::Fuse::Node* node, uObject* identity, uDelegate* lostCallback, bool* __retval)
{
    *__retval = Pointer::HardCapture(*pointIndex, node, identity, lostCallback);
}

// public static bool IsHardCaptured(int pointIndex) :1114
void Pointer__IsHardCaptured_fn(int* pointIndex, bool* __retval)
{
    *__retval = Pointer::IsHardCaptured(*pointIndex);
}

// public static bool IsHardCaptured(int pointIndex, object behavior) :1119
void Pointer__IsHardCaptured1_fn(int* pointIndex, uObject* behavior, bool* __retval)
{
    *__retval = Pointer::IsHardCaptured1(*pointIndex, behavior);
}

// public static bool IsPressed() :999
void Pointer__IsPressed_fn(bool* __retval)
{
    *__retval = Pointer::IsPressed();
}

// public static bool IsPressed(int pointIndex) :1004
void Pointer__IsPressed1_fn(int* pointIndex, bool* __retval)
{
    *__retval = Pointer::IsPressed1(*pointIndex);
}

// public static bool IsSoftCaptured(int pointIndex) :1034
void Pointer__IsSoftCaptured_fn(int* pointIndex, bool* __retval)
{
    *__retval = Pointer::IsSoftCaptured(*pointIndex);
}

// public static bool IsSoftCaptured(int pointIndex, object capturerIdentity) :1039
void Pointer__IsSoftCaptured1_fn(int* pointIndex, uObject* capturerIdentity, bool* __retval)
{
    *__retval = Pointer::IsSoftCaptured1(*pointIndex, capturerIdentity);
}

// public static Fuse.NodeEvent<Fuse.Input.PointerLeftHandler, Fuse.Input.PointerLeftArgs> get_Left() :939
void Pointer__get_Left_fn(::g::Fuse::NodeEvent** __retval)
{
    *__retval = Pointer::Left();
}

// private static void MarkAncestorHits(Fuse.Node hitObject, Uno.Collections.List<Fuse.Input.Pointer.PELHolder> list) :1294
void Pointer__MarkAncestorHits_fn(::g::Fuse::Node* hitObject, ::g::Uno::Collections::List* list)
{
    Pointer::MarkAncestorHits(hitObject, list);
}

// public static Fuse.NodeEvent<Fuse.Input.PointerMovedHandler, Fuse.Input.PointerMovedArgs> get_Moved() :936
void Pointer__get_Moved_fn(::g::Fuse::NodeEvent** __retval)
{
    *__retval = Pointer::Moved();
}

// public static Fuse.NodeEvent<Fuse.Input.PointerPressedHandler, Fuse.Input.PointerPressedArgs> get_Pressed() :935
void Pointer__get_Pressed_fn(::g::Fuse::NodeEvent** __retval)
{
    *__retval = Pointer::Pressed();
}

// private static void ProcessPointerEnterLeave(Fuse.HitTestResult result, Fuse.Input.PointerEventData args) :1270
void Pointer__ProcessPointerEnterLeave_fn(::g::Fuse::HitTestResult* result, ::g::Fuse::Input::PointerEventData* args)
{
    Pointer::ProcessPointerEnterLeave(result, args);
}

// internal static void RaiseLeft(Fuse.Node root, Fuse.Input.PointerEventData data) :1219
void Pointer__RaiseLeft_fn(::g::Fuse::Node* root, ::g::Fuse::Input::PointerEventData* data)
{
    Pointer::RaiseLeft(root, data);
}

// internal static Fuse.Input.PointerMovedArgs RaiseMoved(Fuse.Node root, Fuse.Input.PointerEventData data) :1190
void Pointer__RaiseMoved_fn(::g::Fuse::Node* root, ::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Input::PointerMovedArgs** __retval)
{
    *__retval = Pointer::RaiseMoved(root, data);
}

// internal static Fuse.Input.PointerPressedArgs RaisePressed(Fuse.Node root, Fuse.Input.PointerEventData data) :1182
void Pointer__RaisePressed_fn(::g::Fuse::Node* root, ::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Input::PointerPressedArgs** __retval)
{
    *__retval = Pointer::RaisePressed(root, data);
}

// internal static Fuse.Input.PointerReleasedArgs RaiseReleased(Fuse.Node root, Fuse.Input.PointerEventData data) :1198
void Pointer__RaiseReleased_fn(::g::Fuse::Node* root, ::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Input::PointerReleasedArgs** __retval)
{
    *__retval = Pointer::RaiseReleased(root, data);
}

// internal static Fuse.Input.PointerWheelMovedArgs RaiseWheelMoved(Fuse.Node root, Fuse.Input.PointerEventData data) :1211
void Pointer__RaiseWheelMoved_fn(::g::Fuse::Node* root, ::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Input::PointerWheelMovedArgs** __retval)
{
    *__retval = Pointer::RaiseWheelMoved(root, data);
}

// public static void ReleaseAllCaptures(object identity) :1091
void Pointer__ReleaseAllCaptures_fn(uObject* identity)
{
    Pointer::ReleaseAllCaptures(identity);
}

// public static Fuse.NodeEvent<Fuse.Input.PointerReleasedHandler, Fuse.Input.PointerReleasedArgs> get_Released() :937
void Pointer__get_Released_fn(::g::Fuse::NodeEvent** __retval)
{
    *__retval = Pointer::Released();
}

// public static void ReleaseHardCapture(int pointIndex) :1174
void Pointer__ReleaseHardCapture_fn(int* pointIndex)
{
    Pointer::ReleaseHardCapture(*pointIndex);
}

// public static void ReleaseSoftCapture(int pointIndex, object identity) :1075
void Pointer__ReleaseSoftCapture_fn(int* pointIndex, uObject* identity)
{
    Pointer::ReleaseSoftCapture(*pointIndex, identity);
}

// public static void RemoveHandlers(Fuse.Node node, [Fuse.Input.PointerPressedHandler pressed], [Fuse.Input.PointerMovedHandler moved], [Fuse.Input.PointerReleasedHandler released], [Fuse.Input.PointerEnteredHandler entered], [Fuse.Input.PointerLeftHandler left], [Fuse.Input.PointerWheelMovedHandler wheelMoved]) :958
void Pointer__RemoveHandlers_fn(::g::Fuse::Node* node, uDelegate* pressed, uDelegate* moved, uDelegate* released, uDelegate* entered, uDelegate* left, uDelegate* wheelMoved)
{
    Pointer::RemoveHandlers(node, pressed, moved, released, entered, left, wheelMoved);
}

// private static Fuse.Node RoutePointerEvent(Fuse.Input.PointerEventData plainEvent, Fuse.Node root) :1224
void Pointer__RoutePointerEvent_fn(::g::Fuse::Input::PointerEventData* plainEvent, ::g::Fuse::Node* root, ::g::Fuse::Node** __retval)
{
    *__retval = Pointer::RoutePointerEvent(plainEvent, root);
}

// private static Fuse.Node RouteToCapturer(Fuse.Input.PointerEventData args) :1246
void Pointer__RouteToCapturer_fn(::g::Fuse::Input::PointerEventData* args, ::g::Fuse::Node** __retval)
{
    *__retval = Pointer::RouteToCapturer(args);
}

// private static Fuse.Node RouteToHit(Fuse.Input.PointerEventData args, Fuse.Node root) :1254
void Pointer__RouteToHit_fn(::g::Fuse::Input::PointerEventData* args, ::g::Fuse::Node* root, ::g::Fuse::Node** __retval)
{
    *__retval = Pointer::RouteToHit(args, root);
}

// private static Fuse.Node RouteToSoftCapturer(Fuse.Input.PointerEventData args) :1238
void Pointer__RouteToSoftCapturer_fn(::g::Fuse::Input::PointerEventData* args, ::g::Fuse::Node** __retval)
{
    *__retval = Pointer::RouteToSoftCapturer(args);
}

// internal static bool SoftCapture(int pointIndex, Fuse.Node softCapturer, object identity, Uno.Action lostCallback) :1050
void Pointer__SoftCapture_fn(int* pointIndex, ::g::Fuse::Node* softCapturer, uObject* identity, uDelegate* lostCallback, bool* __retval)
{
    *__retval = Pointer::SoftCapture(*pointIndex, softCapturer, identity, lostCallback);
}

// public static Fuse.NodeEvent<Fuse.Input.PointerWheelMovedHandler, Fuse.Input.PointerWheelMovedArgs> get_WheelMoved() :940
void Pointer__get_WheelMoved_fn(::g::Fuse::NodeEvent** __retval)
{
    *__retval = Pointer::WheelMoved();
}

uSStrong< ::g::Fuse::Input::PointerEntered*> Pointer::_entered_;
uSStrong< ::g::Uno::Collections::Dictionary*> Pointer::_hardCapturers_;
uSStrong< ::g::Uno::Collections::Dictionary*> Pointer::_lastHitNodes_;
uSStrong< ::g::Fuse::Input::PointerLeft*> Pointer::_left_;
uSStrong< ::g::Fuse::Input::PointerMoved*> Pointer::_moved_;
uSStrong< ::g::Uno::Collections::Dictionary*> Pointer::_pointersDown_;
uSStrong< ::g::Fuse::Input::PointerPressed*> Pointer::_pressed_;
uSStrong< ::g::Fuse::Input::PointerReleased*> Pointer::_released_;
uSStrong< ::g::Uno::Collections::Dictionary*> Pointer::_softCapturers_;
uSStrong< ::g::Fuse::Input::PointerWheelMoved*> Pointer::_wheelMoved_;
::g::Uno::Float2 Pointer::_Coord_;
uSStrong<uObject*> Pointer::_EventResponder_;

// public static void AddHandlers(Fuse.Node node, [Fuse.Input.PointerPressedHandler pressed], [Fuse.Input.PointerMovedHandler moved], [Fuse.Input.PointerReleasedHandler released], [Fuse.Input.PointerEnteredHandler entered], [Fuse.Input.PointerLeftHandler left], [Fuse.Input.PointerWheelMovedHandler wheelMoved]) [static] :942
void Pointer::AddHandlers(::g::Fuse::Node* node, uDelegate* pressed, uDelegate* moved, uDelegate* released, uDelegate* entered, uDelegate* left, uDelegate* wheelMoved)
{
    Pointer_typeof()->Init();

    if (::g::Uno::Delegate::op_Inequality(pressed, NULL))
        ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(Pointer::Pressed()), node, pressed);

    if (::g::Uno::Delegate::op_Inequality(moved, NULL))
        ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(Pointer::Moved()), node, moved);

    if (::g::Uno::Delegate::op_Inequality(released, NULL))
        ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(Pointer::Released()), node, released);

    if (::g::Uno::Delegate::op_Inequality(entered, NULL))
        ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(Pointer::Entered()), node, entered);

    if (::g::Uno::Delegate::op_Inequality(left, NULL))
        ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(Pointer::Left()), node, left);

    if (::g::Uno::Delegate::op_Inequality(wheelMoved, NULL))
        ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(Pointer::WheelMoved()), node, wheelMoved);
}

// private static void CheckFocus(Fuse.Input.PointerPressedArgs args, Uno.Collections.IList<Fuse.Node> nodes) [static] :1354
void Pointer::CheckFocus(::g::Fuse::Input::PointerPressedArgs* args, uObject* nodes)
{
    Pointer_typeof()->Init();
    ::g::Fuse::Node* ret8;

    if (uPtr(args)->IsHandled())
        return;

    bool b = false;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(nodes), ::TYPES[36/*Uno.Collections.ICollection<Fuse.Node>*/])); ++i)
        if (::g::Fuse::Input::Focus::HandlesFocusEvent((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(nodes), ::TYPES[37/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret8), ret8)))
        {
            b = true;
            break;
        }

    if (!b)
        ::g::Fuse::Input::Focus::Release();
}

// internal static Fuse.Input.Capturer GetHardCapturer(int pointIndex) [static] :1125
::g::Fuse::Input::Capturer* Pointer::GetHardCapturer(int pointIndex)
{
    Pointer_typeof()->Init();
    bool ret9;
    ::g::Fuse::Input::Capturer* ret10;
    bool ret11;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(Pointer::_hardCapturers()), uCRef<int>(pointIndex), &ret9), ret9))
    {
        ::g::Fuse::Input::Capturer* hc = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(Pointer::_hardCapturers()), uCRef<int>(pointIndex), &ret10), ret10);

        if (uPtr(hc)->IsSuitable())
            return hc;

        uPtr(uPtr(hc)->LostCallback())->InvokeVoid();
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(Pointer::_hardCapturers()), uCRef<int>(pointIndex), &ret11);
    }

    return NULL;
}

// private static Uno.Collections.List<Fuse.Input.Pointer.PELHolder> GetLastHitList(int pointIndex) [static] :1339
::g::Uno::Collections::List* Pointer::GetLastHitList(int pointIndex)
{
    Pointer_typeof()->Init();
    bool ret12;
    ::g::Uno::Collections::List* lastHitList = NULL;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(Pointer::_lastHitNodes()), uCRef<int>(pointIndex), (void**)(&lastHitList), &ret12), ret12))
    {
        lastHitList = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[40/*Uno.Collections.List<Fuse.Input.Pointer.PELHolder>*/]);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Pointer::_lastHitNodes()), uCRef<int>(pointIndex), lastHitList);
    }

    return lastHitList;
}

// internal static Fuse.Input.Capturer GetSoftCapturer(int pointIndex) [static] :1014
::g::Fuse::Input::Capturer* Pointer::GetSoftCapturer(int pointIndex)
{
    Pointer_typeof()->Init();
    bool ret13;
    uObject* ret14;
    ::g::Fuse::Input::Capturer* ret15;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(Pointer::_softCapturers()), uCRef<int>(pointIndex), &ret13), ret13))
    {
        uObject* list = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(Pointer::_softCapturers()), uCRef<int>(pointIndex), &ret14), ret14);

        while (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(list), ::TYPES[41/*Uno.Collections.ICollection<Fuse.Input.Capturer>*/])) > 0)
        {
            ::g::Fuse::Input::Capturer* n = (::g::Uno::Collections::EnumerableExtensions__First_fn(::TYPES[42/*Uno.Collections.EnumerableExtensions.First<Fuse.Input.Capturer>*/], list, &ret15), ret15);

            if (uPtr(n)->IsSuitable())
                return n;

            ::g::Uno::Collections::IList::RemoveAt(uInterface(uPtr(list), ::TYPES[44/*Uno.Collections.IList<Fuse.Input.Capturer>*/]), 0);
            uPtr(uPtr(n)->LostCallback())->InvokeVoid();
        }
    }

    return NULL;
}

// internal static bool HardCapture(int pointIndex, Fuse.Node node, object identity, Uno.Action lostCallback) [static] :1140
bool Pointer::HardCapture(int pointIndex, ::g::Fuse::Node* node, uObject* identity, uDelegate* lostCallback)
{
    Pointer_typeof()->Init();
    bool ret16;
    uObject* ret17;
    ::g::Fuse::Input::Capturer* ret18;
    ::g::Fuse::Input::Capturer* ret19;
    ::g::Fuse::Input::Capturer* ret20;

    if (::g::Uno::Delegate::op_Equality(lostCallback, NULL))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[8/*"HardCapture...*/]));

    if (identity == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[9/*"HardCapture...*/]));

    if (node == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[10/*"HardCapture...*/]));

    if (!uPtr(node)->IsEnabled() || !uPtr(node)->IsRooted())
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[11/*"HardCapture...*/], 1, ::STRINGS[12/*"C:\\Program...*/], 1151);
        return false;
    }

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(Pointer::_softCapturers()), uCRef<int>(pointIndex), &ret16), ret16))
    {
        uObject* sc = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(Pointer::_softCapturers()), uCRef<int>(pointIndex), &ret17), ret17);

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sc), ::TYPES[41/*Uno.Collections.ICollection<Fuse.Input.Capturer>*/])); i++)
        {
            if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sc), ::TYPES[44/*Uno.Collections.IList<Fuse.Input.Capturer>*/]), uCRef<int>(i), &ret18), ret18))->Identity() == identity)
                continue;

            if (::g::Uno::Delegate::op_Inequality(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sc), ::TYPES[44/*Uno.Collections.IList<Fuse.Input.Capturer>*/]), uCRef<int>(i), &ret19), ret19))->LostCallback(), NULL))
                uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sc), ::TYPES[44/*Uno.Collections.IList<Fuse.Input.Capturer>*/]), uCRef<int>(i), &ret20), ret20))->LostCallback())->InvokeVoid();
        }

        ::g::Uno::Collections::ICollection::Clear(uInterface(uPtr(sc), ::TYPES[41/*Uno.Collections.ICollection<Fuse.Input.Capturer>*/]));
    }

    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(Pointer::_hardCapturers()), uCRef<int>(pointIndex), ::g::Fuse::Input::Capturer::New1(node, identity, lostCallback));
    return true;
}

// public static bool IsHardCaptured(int pointIndex) [static] :1114
bool Pointer::IsHardCaptured(int pointIndex)
{
    Pointer_typeof()->Init();
    bool ret21;
    return (::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(Pointer::_hardCapturers()), uCRef<int>(pointIndex), &ret21), ret21);
}

// public static bool IsHardCaptured(int pointIndex, object behavior) [static] :1119
bool Pointer::IsHardCaptured1(int pointIndex, uObject* behavior)
{
    Pointer_typeof()->Init();
    ::g::Fuse::Input::Capturer* hc = Pointer::GetHardCapturer(pointIndex);
    return (hc != NULL) && (uPtr(hc)->Identity() == behavior);
}

// public static bool IsPressed() [static] :999
bool Pointer::IsPressed()
{
    Pointer_typeof()->Init();
    return uPtr(Pointer::_pointersDown())->Count() > 0;
}

// public static bool IsPressed(int pointIndex) [static] :1004
bool Pointer::IsPressed1(int pointIndex)
{
    Pointer_typeof()->Init();
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong<Pointer__PointerRecord*> > ret22;

    for (::g::Uno::Collections::Dictionary__Enumerator<int, uStrong<Pointer__PointerRecord*> > enum2 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(Pointer::_pointersDown()), &ret22), ret22); enum2.MoveNext(::TYPES[45/*Uno.Collections.Dictionary<int, Fuse.Input.Pointer.PointerRecord>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<int, uStrong<Pointer__PointerRecord*> > p = enum2.Current(::TYPES[45/*Uno.Collections.Dictionary<int, Fuse.Input.Pointer.PointerRecord>.Enumerator*/]);

        if (p.Key(::TYPES[46/*Uno.Collections.KeyValuePair<int, Fuse.Input.Pointer.PointerRecord>*/]) == pointIndex)
            return true;
    }

    return false;
}

// public static bool IsSoftCaptured(int pointIndex) [static] :1034
bool Pointer::IsSoftCaptured(int pointIndex)
{
    Pointer_typeof()->Init();
    bool ret23;
    return (::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(Pointer::_softCapturers()), uCRef<int>(pointIndex), &ret23), ret23);
}

// public static bool IsSoftCaptured(int pointIndex, object capturerIdentity) [static] :1039
bool Pointer::IsSoftCaptured1(int pointIndex, uObject* capturerIdentity)
{
    Pointer_typeof()->Init();
    bool ret24;
    uObject* ret25;
    ::g::Fuse::Input::Capturer* ret26;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(Pointer::_softCapturers()), uCRef<int>(pointIndex), &ret24), ret24))
    {
        uObject* sc = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(Pointer::_softCapturers()), uCRef<int>(pointIndex), &ret25), ret25);

        for (uObject* enum3 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(sc), ::TYPES[43/*Uno.Collections.IEnumerable<Fuse.Input.Capturer>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum3), ::g::Uno::Collections::IEnumerator_typeof())); )
        {
            ::g::Fuse::Input::Capturer* s = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum3), ::TYPES[47/*Uno.Collections.IEnumerator<Fuse.Input.Capturer>*/]), &ret26), ret26);

            if (uPtr(s)->Identity() == capturerIdentity)
                return true;
        }
    }

    return false;
}

// private static void MarkAncestorHits(Fuse.Node hitObject, Uno.Collections.List<Fuse.Input.Pointer.PELHolder> list) [static] :1294
void Pointer::MarkAncestorHits(::g::Fuse::Node* hitObject, ::g::Uno::Collections::List* list)
{
    Pointer_typeof()->Init();
    Pointer__PELHolder* collection7;
    Pointer__PELHolder* ret27;
    Pointer__PELHolder* ret28;
    Pointer__PELHolder* ret29;

    for (int i = 0; i < uPtr(list)->Count(); ++i)
        uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i), &ret27), ret27))->Status = 1;

    while (hitObject != NULL)
    {
        bool found = false;

        for (int i1 = 0; i1 < uPtr(list)->Count(); ++i1)
            if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i1), &ret28), ret28))->Node == hitObject)
            {
                uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i1), &ret29), ret29))->Status = 2;
                found = true;
                break;
            }

        if (!found)
            ::g::Uno::Collections::List__Add_fn(uPtr(list), (collection7 = Pointer__PELHolder::New1(), uPtr(collection7)->Node = hitObject, uPtr(collection7)->Status = 0, collection7));

        hitObject = uPtr(hitObject)->Parent();
    }
}

// private static void ProcessPointerEnterLeave(Fuse.HitTestResult result, Fuse.Input.PointerEventData args) [static] :1270
void Pointer::ProcessPointerEnterLeave(::g::Fuse::HitTestResult* result, ::g::Fuse::Input::PointerEventData* args)
{
    Pointer_typeof()->Init();
    Pointer__PELHolder* ret30;
    Pointer__PELHolder* ret31;
    Pointer__PELHolder* ret32;
    Pointer__PELHolder* ret33;
    ::g::Uno::Collections::List* lastHitList = Pointer::GetLastHitList(uPtr(args)->PointIndex);
    Pointer::MarkAncestorHits((result == NULL) ? uCast< ::g::Fuse::Node*>(NULL, ::TYPES[1/*Fuse.Node*/]) : (::g::Fuse::Node*)uPtr(result)->HitObject(), lastHitList);

    for (int j = uPtr(lastHitList)->Count() - 1; j >= 0; j--)
    {
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(lastHitList), uCRef<int>(j), &ret30), ret30))->Status != 1)
            continue;

        uPtr(Pointer::Left())->RaiseWithoutBubble(::g::Fuse::Input::PointerLeftArgs::New3(args, uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(lastHitList), uCRef<int>(j), &ret31), ret31))->Node), 2);
        lastHitList->RemoveAt(j);
    }

    for (int j1 = 0; j1 < lastHitList->Count(); ++j1)
    {
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(lastHitList), uCRef<int>(j1), &ret32), ret32))->Status != 0)
            continue;

        uPtr(Pointer::Entered())->RaiseWithoutBubble(::g::Fuse::Input::PointerEnteredArgs::New3(args, uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(lastHitList), uCRef<int>(j1), &ret33), ret33))->Node), 1);
    }
}

// internal static void RaiseLeft(Fuse.Node root, Fuse.Input.PointerEventData data) [static] :1219
void Pointer::RaiseLeft(::g::Fuse::Node* root, ::g::Fuse::Input::PointerEventData* data)
{
    Pointer_typeof()->Init();
    Pointer::ProcessPointerEnterLeave(NULL, data);
}

// internal static Fuse.Input.PointerMovedArgs RaiseMoved(Fuse.Node root, Fuse.Input.PointerEventData data) [static] :1190
::g::Fuse::Input::PointerMovedArgs* Pointer::RaiseMoved(::g::Fuse::Node* root, ::g::Fuse::Input::PointerEventData* data)
{
    Pointer_typeof()->Init();
    ::g::Fuse::Node* target = Pointer::RoutePointerEvent(data, root);
    ::g::Fuse::Input::PointerMovedArgs* e = ::g::Fuse::Input::PointerMovedArgs::New3(data, target);
    ::g::Fuse::Input::IPointerEventResponder::OnPointerMoved(uInterface(uPtr(Pointer::EventResponder()), ::TYPES[35/*Fuse.Input.IPointerEventResponder*/]), e);
    return e;
}

// internal static Fuse.Input.PointerPressedArgs RaisePressed(Fuse.Node root, Fuse.Input.PointerEventData data) [static] :1182
::g::Fuse::Input::PointerPressedArgs* Pointer::RaisePressed(::g::Fuse::Node* root, ::g::Fuse::Input::PointerEventData* data)
{
    Pointer_typeof()->Init();
    ::g::Fuse::Node* target = Pointer::RoutePointerEvent(data, root);
    ::g::Fuse::Input::PointerPressedArgs* e = ::g::Fuse::Input::PointerPressedArgs::New3(data, target);
    ::g::Fuse::Input::IPointerEventResponder::OnPointerPressed(uInterface(uPtr(Pointer::EventResponder()), ::TYPES[35/*Fuse.Input.IPointerEventResponder*/]), e);
    return e;
}

// internal static Fuse.Input.PointerReleasedArgs RaiseReleased(Fuse.Node root, Fuse.Input.PointerEventData data) [static] :1198
::g::Fuse::Input::PointerReleasedArgs* Pointer::RaiseReleased(::g::Fuse::Node* root, ::g::Fuse::Input::PointerEventData* data)
{
    Pointer_typeof()->Init();
    ::g::Fuse::Node* target = Pointer::RoutePointerEvent(data, root);
    ::g::Fuse::Input::PointerReleasedArgs* e = ::g::Fuse::Input::PointerReleasedArgs::New3(data, target);
    ::g::Fuse::Input::IPointerEventResponder::OnPointerReleased(uInterface(uPtr(Pointer::EventResponder()), ::TYPES[35/*Fuse.Input.IPointerEventResponder*/]), e);

    if (uPtr(data)->PointerType == 2)
        Pointer::ProcessPointerEnterLeave(NULL, data);

    return e;
}

// internal static Fuse.Input.PointerWheelMovedArgs RaiseWheelMoved(Fuse.Node root, Fuse.Input.PointerEventData data) [static] :1211
::g::Fuse::Input::PointerWheelMovedArgs* Pointer::RaiseWheelMoved(::g::Fuse::Node* root, ::g::Fuse::Input::PointerEventData* data)
{
    Pointer_typeof()->Init();
    ::g::Fuse::Node* target = Pointer::RoutePointerEvent(data, root);
    ::g::Fuse::Input::PointerWheelMovedArgs* e = ::g::Fuse::Input::PointerWheelMovedArgs::New3(data, target);
    ::g::Fuse::Input::IPointerEventResponder::OnPointerWheelMoved(uInterface(uPtr(Pointer::EventResponder()), ::TYPES[35/*Fuse.Input.IPointerEventResponder*/]), e);
    return e;
}

// public static void ReleaseAllCaptures(object identity) [static] :1091
void Pointer::ReleaseAllCaptures(uObject* identity)
{
    Pointer_typeof()->Init();
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong<uObject*> > ret34;
    ::g::Fuse::Input::Capturer* ret35;
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Input::Capturer*> > ret36;
    ::g::Uno::Collections::List__Enumerator<int> ret37;
    bool ret38;

    for (::g::Uno::Collections::Dictionary__Enumerator<int, uStrong<uObject*> > enum4 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(Pointer::_softCapturers()), &ret34), ret34); enum4.MoveNext(::TYPES[51/*Uno.Collections.Dictionary<int, Uno.Collections.IList<Fuse.Input.Capturer>>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<int, uStrong<uObject*> > sc = enum4.Current(::TYPES[51/*Uno.Collections.Dictionary<int, Uno.Collections.IList<Fuse.Input.Capturer>>.Enumerator*/]);

        for (int i = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sc.Value(::TYPES[52/*Uno.Collections.KeyValuePair<int, Uno.Collections.IList<Fuse.Input.Capturer>>*/])), ::TYPES[41/*Uno.Collections.ICollection<Fuse.Input.Capturer>*/])) - 1; i >= 0; --i)
            if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sc.Value(::TYPES[52/*Uno.Collections.KeyValuePair<int, Uno.Collections.IList<Fuse.Input.Capturer>>*/])), ::TYPES[44/*Uno.Collections.IList<Fuse.Input.Capturer>*/]), uCRef<int>(i), &ret35), ret35))->Identity() == identity)
                ::g::Uno::Collections::IList::RemoveAt(uInterface(uPtr(sc.Value(::TYPES[52/*Uno.Collections.KeyValuePair<int, Uno.Collections.IList<Fuse.Input.Capturer>>*/])), ::TYPES[44/*Uno.Collections.IList<Fuse.Input.Capturer>*/]), i);
    }

    ::g::Uno::Collections::List* remove = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[53/*Uno.Collections.List<int>*/]);

    for (::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Input::Capturer*> > enum5 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(Pointer::_hardCapturers()), &ret36), ret36); enum5.MoveNext(::TYPES[54/*Uno.Collections.Dictionary<int, Fuse.Input.Capturer>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<int, uStrong< ::g::Fuse::Input::Capturer*> > hc = enum5.Current(::TYPES[54/*Uno.Collections.Dictionary<int, Fuse.Input.Capturer>.Enumerator*/]);

        if (uPtr(hc.Value(::TYPES[55/*Uno.Collections.KeyValuePair<int, Fuse.Input.Capturer>*/]))->Identity() == identity)
            ::g::Uno::Collections::List__Add_fn(uPtr(remove), uCRef<int>(hc.Key(::TYPES[55/*Uno.Collections.KeyValuePair<int, Fuse.Input.Capturer>*/])));
    }

    for (::g::Uno::Collections::List__Enumerator<int> enum6 = (::g::Uno::Collections::List__GetEnumerator_fn(remove, &ret37), ret37); enum6.MoveNext(::TYPES[56/*Uno.Collections.List<int>.Enumerator*/]); )
    {
        int r = enum6.Current(::TYPES[56/*Uno.Collections.List<int>.Enumerator*/]);
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(Pointer::_hardCapturers()), uCRef<int>(r), &ret38);
    }
}

// public static void ReleaseHardCapture(int pointIndex) [static] :1174
void Pointer::ReleaseHardCapture(int pointIndex)
{
    Pointer_typeof()->Init();
    bool ret39;
    bool ret40;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(Pointer::_hardCapturers()), uCRef<int>(pointIndex), &ret39), ret39))
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(Pointer::_hardCapturers()), uCRef<int>(pointIndex), &ret40);
}

// public static void ReleaseSoftCapture(int pointIndex, object identity) [static] :1075
void Pointer::ReleaseSoftCapture(int pointIndex, uObject* identity)
{
    Pointer_typeof()->Init();
    bool ret41;
    uObject* ret42;
    ::g::Fuse::Input::Capturer* ret43;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(Pointer::_softCapturers()), uCRef<int>(pointIndex), &ret41), ret41))
    {
        uObject* sc = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(Pointer::_softCapturers()), uCRef<int>(pointIndex), &ret42), ret42);

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sc), ::TYPES[41/*Uno.Collections.ICollection<Fuse.Input.Capturer>*/])); i++)
            if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sc), ::TYPES[44/*Uno.Collections.IList<Fuse.Input.Capturer>*/]), uCRef<int>(i), &ret43), ret43))->Identity() == identity)
                ::g::Uno::Collections::IList::RemoveAt(uInterface(uPtr(sc), ::TYPES[44/*Uno.Collections.IList<Fuse.Input.Capturer>*/]), i--);
    }
}

// public static void RemoveHandlers(Fuse.Node node, [Fuse.Input.PointerPressedHandler pressed], [Fuse.Input.PointerMovedHandler moved], [Fuse.Input.PointerReleasedHandler released], [Fuse.Input.PointerEnteredHandler entered], [Fuse.Input.PointerLeftHandler left], [Fuse.Input.PointerWheelMovedHandler wheelMoved]) [static] :958
void Pointer::RemoveHandlers(::g::Fuse::Node* node, uDelegate* pressed, uDelegate* moved, uDelegate* released, uDelegate* entered, uDelegate* left, uDelegate* wheelMoved)
{
    Pointer_typeof()->Init();

    if (::g::Uno::Delegate::op_Inequality(pressed, NULL))
        ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(Pointer::Pressed()), node, pressed);

    if (::g::Uno::Delegate::op_Inequality(moved, NULL))
        ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(Pointer::Moved()), node, moved);

    if (::g::Uno::Delegate::op_Inequality(released, NULL))
        ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(Pointer::Released()), node, released);

    if (::g::Uno::Delegate::op_Inequality(entered, NULL))
        ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(Pointer::Entered()), node, entered);

    if (::g::Uno::Delegate::op_Inequality(left, NULL))
        ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(Pointer::Left()), node, left);

    if (::g::Uno::Delegate::op_Inequality(wheelMoved, NULL))
        ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(Pointer::WheelMoved()), node, wheelMoved);
}

// private static Fuse.Node RoutePointerEvent(Fuse.Input.PointerEventData plainEvent, Fuse.Node root) [static] :1224
::g::Fuse::Node* Pointer::RoutePointerEvent(::g::Fuse::Input::PointerEventData* plainEvent, ::g::Fuse::Node* root)
{
    Pointer_typeof()->Init();
    ::g::Fuse::Node* n = Pointer::RouteToSoftCapturer(plainEvent);

    if (n != NULL)
        return n;

    n = Pointer::RouteToCapturer(plainEvent);

    if (n != NULL)
        return n;

    n = Pointer::RouteToHit(plainEvent, root);

    if (n != NULL)
        return n;

    return NULL;
}

// private static Fuse.Node RouteToCapturer(Fuse.Input.PointerEventData args) [static] :1246
::g::Fuse::Node* Pointer::RouteToCapturer(::g::Fuse::Input::PointerEventData* args)
{
    Pointer_typeof()->Init();
    ::g::Fuse::Input::Capturer* capturer = Pointer::GetHardCapturer(uPtr(args)->PointIndex);

    if (capturer == NULL)
        return NULL;

    return uPtr(capturer)->Node();
}

// private static Fuse.Node RouteToHit(Fuse.Input.PointerEventData args, Fuse.Node root) [static] :1254
::g::Fuse::Node* Pointer::RouteToHit(::g::Fuse::Input::PointerEventData* args, ::g::Fuse::Node* root)
{
    Pointer_typeof()->Init();
    ::g::Fuse::HitTestResult* result = ::g::Fuse::Input::HitTestHelpers::HitTestNearest(root, uPtr(args)->WindowPoint);

    while ((result != NULL) && !uPtr(uPtr(result)->HitObject())->IsEnabled())
        uPtr(result)->HitObject(uPtr(uPtr(result)->HitObject())->Parent());

    Pointer::ProcessPointerEnterLeave(result, args);

    if (result == NULL)
        return NULL;

    return result->HitObject();
}

// private static Fuse.Node RouteToSoftCapturer(Fuse.Input.PointerEventData args) [static] :1238
::g::Fuse::Node* Pointer::RouteToSoftCapturer(::g::Fuse::Input::PointerEventData* args)
{
    Pointer_typeof()->Init();
    ::g::Fuse::Input::Capturer* sc = Pointer::GetSoftCapturer(uPtr(args)->PointIndex);

    if (sc == NULL)
        return NULL;

    return uPtr(sc)->Node();
}

// internal static bool SoftCapture(int pointIndex, Fuse.Node softCapturer, object identity, Uno.Action lostCallback) [static] :1050
bool Pointer::SoftCapture(int pointIndex, ::g::Fuse::Node* softCapturer, uObject* identity, uDelegate* lostCallback)
{
    Pointer_typeof()->Init();
    bool ret44;
    uObject* ret45;

    if (::g::Uno::Delegate::op_Equality(lostCallback, NULL))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[13/*"SoftCapture...*/]));

    if (identity == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[14/*"SoftCapture...*/]));

    if (softCapturer == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[15/*"SoftCapture...*/]));

    if (!uPtr(softCapturer)->IsEnabled() || !uPtr(softCapturer)->IsRooted())
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[16/*"SoftCapture...*/], 1, ::STRINGS[12/*"C:\\Program...*/], 1060);
        return false;
    }

    if (Pointer::GetHardCapturer(pointIndex) != NULL)
        return false;

    if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(Pointer::_softCapturers()), uCRef<int>(pointIndex), &ret44), ret44))
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Pointer::_softCapturers()), uCRef<int>(pointIndex), (uObject*)((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[57/*Uno.Collections.List<Fuse.Input.Capturer>*/])));

    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(Pointer::_softCapturers()), uCRef<int>(pointIndex), &ret45), ret45)), ::TYPES[41/*Uno.Collections.ICollection<Fuse.Input.Capturer>*/]), ::g::Fuse::Input::Capturer::New1(softCapturer, identity, lostCallback));
    return true;
}

// public static generated float2 get_Coord() [static] :1010
::g::Uno::Float2 Pointer::Coord()
{
    Pointer_typeof()->Init();
    return Pointer::_Coord();
}

// private static generated void set_Coord(float2 value) [static] :1010
void Pointer::Coord(::g::Uno::Float2 value)
{
    Pointer_typeof()->Init();
    Pointer::_Coord() = value;
}

// public static float2[] get_Coords() [static] :978
uArray* Pointer::Coords()
{
    Pointer_typeof()->Init();
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong<Pointer__PointerRecord*> > ret46;
    uArray* f = uArray::New(::TYPES[58/*float2[]*/], uPtr(Pointer::_pointersDown())->Count());
    int i = 0;

    for (::g::Uno::Collections::Dictionary__Enumerator<int, uStrong<Pointer__PointerRecord*> > enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(Pointer::_pointersDown()), &ret46), ret46); enum1.MoveNext(::TYPES[45/*Uno.Collections.Dictionary<int, Fuse.Input.Pointer.PointerRecord>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<int, uStrong<Pointer__PointerRecord*> > p = enum1.Current(::TYPES[45/*Uno.Collections.Dictionary<int, Fuse.Input.Pointer.PointerRecord>.Enumerator*/]);
        uPtr(f)->Item< ::g::Uno::Float2>(i++) = uPtr(p.Value(::TYPES[46/*Uno.Collections.KeyValuePair<int, Fuse.Input.Pointer.PointerRecord>*/]))->WindowPoint;
    }

    return f;
}

// public static Fuse.NodeEvent<Fuse.Input.PointerEnteredHandler, Fuse.Input.PointerEnteredArgs> get_Entered() [static] :938
::g::Fuse::NodeEvent* Pointer::Entered()
{
    Pointer_typeof()->Init();
    return Pointer::_entered();
}

// public static generated Fuse.Input.IPointerEventResponder get_EventResponder() [static] :921
uObject* Pointer::EventResponder()
{
    Pointer_typeof()->Init();
    return Pointer::_EventResponder();
}

// public static generated void set_EventResponder(Fuse.Input.IPointerEventResponder value) [static] :921
void Pointer::EventResponder(uObject* value)
{
    Pointer_typeof()->Init();
    Pointer::_EventResponder() = value;
}

// public static Fuse.NodeEvent<Fuse.Input.PointerLeftHandler, Fuse.Input.PointerLeftArgs> get_Left() [static] :939
::g::Fuse::NodeEvent* Pointer::Left()
{
    Pointer_typeof()->Init();
    return Pointer::_left();
}

// public static Fuse.NodeEvent<Fuse.Input.PointerMovedHandler, Fuse.Input.PointerMovedArgs> get_Moved() [static] :936
::g::Fuse::NodeEvent* Pointer::Moved()
{
    Pointer_typeof()->Init();
    return Pointer::_moved();
}

// public static Fuse.NodeEvent<Fuse.Input.PointerPressedHandler, Fuse.Input.PointerPressedArgs> get_Pressed() [static] :935
::g::Fuse::NodeEvent* Pointer::Pressed()
{
    Pointer_typeof()->Init();
    return Pointer::_pressed();
}

// public static Fuse.NodeEvent<Fuse.Input.PointerReleasedHandler, Fuse.Input.PointerReleasedArgs> get_Released() [static] :937
::g::Fuse::NodeEvent* Pointer::Released()
{
    Pointer_typeof()->Init();
    return Pointer::_released();
}

// public static Fuse.NodeEvent<Fuse.Input.PointerWheelMovedHandler, Fuse.Input.PointerWheelMovedArgs> get_WheelMoved() [static] :940
::g::Fuse::NodeEvent* Pointer::WheelMoved()
{
    Pointer_typeof()->Init();
    return Pointer::_wheelMoved();
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(829)
// ------------------------------------------------------------

// internal sealed class PointerEntered :829
// {
::g::Fuse::NodeEvent_type* PointerEntered_typeof()
{
    static uSStrong< ::g::Fuse::NodeEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(PointerEntered);
    options.TypeSize = sizeof(::g::Fuse::NodeEvent_type);
    type = (::g::Fuse::NodeEvent_type*)uClassType::New("Fuse.Input.PointerEntered", options);
    type->SetBase(::g::Fuse::NodeEvent_typeof()->MakeType(::g::Fuse::Input::PointerEnteredHandler_typeof(), ::g::Fuse::Input::PointerEnteredArgs_typeof()));
    type->fp_ctor_ = (void*)PointerEntered__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::NodeEvent*, void*, uObject*, ::g::Fuse::NodeEventArgs*))PointerEntered__Invoke_fn;
    ::TYPES[65] = ::g::Fuse::Input::PointerEnteredHandler_typeof();
    type->SetFields(2);
    return type;
}

// public generated PointerEntered() :829
void PointerEntered__ctor_1_fn(PointerEntered* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Input.PointerEnteredHandler handler, object sender, Fuse.Input.PointerEnteredArgs args) :831
void PointerEntered__Invoke_fn(PointerEntered* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::PointerEnteredArgs* args)
{
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated PointerEntered New() :829
void PointerEntered__New1_fn(PointerEntered** __retval)
{
    *__retval = PointerEntered::New1();
}

// public generated PointerEntered() [instance] :829
void PointerEntered::ctor_1()
{
    ctor_();
}

// public generated PointerEntered New() [static] :829
PointerEntered* PointerEntered::New1()
{
    PointerEntered* obj1 = (PointerEntered*)uNew(PointerEntered_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(821)
// ------------------------------------------------------------

// public sealed class PointerEnteredArgs :821
// {
::g::Fuse::NodeEventArgs_type* PointerEnteredArgs_typeof()
{
    static uSStrong< ::g::Fuse::NodeEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PointerEnteredArgs);
    options.TypeSize = sizeof(::g::Fuse::NodeEventArgs_type);
    type = (::g::Fuse::NodeEventArgs_type*)uClassType::New("Fuse.Input.PointerEnteredArgs", options);
    type->SetBase(::g::Fuse::Input::PointerEventArgs_typeof());
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::NodeEventArgs__Fuse_Scripting_IScriptEvent_Serialize_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::NodeEventArgs_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)PointerEnteredArgs__New3_fn, 0, true, PointerEnteredArgs_typeof(), 2, ::g::Fuse::Input::PointerEventData_typeof(), ::g::Fuse::Node_typeof()));
    return type;
}

// public PointerEnteredArgs(Fuse.Input.PointerEventData data, Fuse.Node node) :823
void PointerEnteredArgs__ctor_3_fn(PointerEnteredArgs* __this, ::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Node* node)
{
    __this->ctor_3(data, node);
}

// public PointerEnteredArgs New(Fuse.Input.PointerEventData data, Fuse.Node node) :823
void PointerEnteredArgs__New3_fn(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Node* node, PointerEnteredArgs** __retval)
{
    *__retval = PointerEnteredArgs::New3(data, node);
}

// public PointerEnteredArgs(Fuse.Input.PointerEventData data, Fuse.Node node) [instance] :823
void PointerEnteredArgs::ctor_3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Node* node)
{
    ctor_2(data, node);
}

// public PointerEnteredArgs New(Fuse.Input.PointerEventData data, Fuse.Node node) [static] :823
PointerEnteredArgs* PointerEnteredArgs::New3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Node* node)
{
    PointerEnteredArgs* obj1 = (PointerEnteredArgs*)uNew(PointerEnteredArgs_typeof());
    obj1->ctor_3(data, node);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(827)
// ------------------------------------------------------------

// public delegate void PointerEnteredHandler(object sender, Fuse.Input.PointerEnteredArgs args) :827
uDelegateType* PointerEnteredHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Input.PointerEnteredHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::PointerEnteredArgs_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(677)
// ------------------------------------------------------------

// public abstract class PointerEventArgs :677
// {
::g::Fuse::NodeEventArgs_type* PointerEventArgs_typeof()
{
    static uSStrong< ::g::Fuse::NodeEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PointerEventArgs);
    options.TypeSize = sizeof(::g::Fuse::NodeEventArgs_type);
    type = (::g::Fuse::NodeEventArgs_type*)uClassType::New("Fuse.Input.PointerEventArgs", options);
    type->SetBase(::g::Fuse::NodeEventArgs_typeof());
    type->fp_Serialize = (void(*)(::g::Fuse::NodeEventArgs*, uObject*))PointerEventArgs__Serialize_fn;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::NodeEventArgs__Fuse_Scripting_IScriptEvent_Serialize_fn;
    ::STRINGS[17] = uString::Const("x");
    ::STRINGS[18] = uString::Const("y");
    ::STRINGS[19] = uString::Const("index");
    ::TYPES[66] = ::g::Uno::Double_typeof();
    ::TYPES[67] = ::g::Uno::Float2_typeof();
    ::TYPES[12] = ::g::Uno::Bool_typeof();
    ::TYPES[3] = ::g::Fuse::NodeEventArgs_typeof();
    ::TYPES[49] = ::g::Fuse::Input::PointerEventData_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::NodeEventArgs_type, interface0));
    type->SetFields(2,
        ::g::Fuse::Input::PointerEventData_typeof(), offsetof(::g::Fuse::Input::PointerEventArgs, _data), 0);
    type->Reflection.SetFunctions(13,
        new uFunction("IsHardCapturedTo", NULL, (void*)PointerEventArgs__IsHardCapturedTo_fn, 0, false, ::g::Uno::Bool_typeof(), 1, uObject_typeof()),
        new uFunction("get_IsPrimary", NULL, (void*)PointerEventArgs__get_IsPrimary_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("IsSoftCapturedTo", NULL, (void*)PointerEventArgs__IsSoftCapturedTo_fn, 0, false, ::g::Uno::Bool_typeof(), 1, uObject_typeof()),
        new uFunction("get_PointerType", NULL, (void*)PointerEventArgs__get_PointerType_fn, 0, false, ::g::Uno::Platform::PointerType_typeof(), 0),
        new uFunction("get_PointIndex", NULL, (void*)PointerEventArgs__get_PointIndex_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("ReleaseHardCapture", NULL, (void*)PointerEventArgs__ReleaseHardCapture_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction("ReleaseSoftCapture", NULL, (void*)PointerEventArgs__ReleaseSoftCapture_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction("get_Timestamp", NULL, (void*)PointerEventArgs__get_Timestamp_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("TryHardCapture", NULL, (void*)PointerEventArgs__TryHardCapture_fn, 0, false, ::g::Uno::Bool_typeof(), 3, uObject_typeof(), ::g::Uno::Action_typeof(), ::g::Fuse::Node_typeof()),
        new uFunction("TrySoftCapture", NULL, (void*)PointerEventArgs__TrySoftCapture_fn, 0, false, ::g::Uno::Bool_typeof(), 3, uObject_typeof(), ::g::Uno::Action_typeof(), ::g::Fuse::Node_typeof()),
        new uFunction("get_WheelDelta", NULL, (void*)PointerEventArgs__get_WheelDelta_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_WheelDeltaMode", NULL, (void*)PointerEventArgs__get_WheelDeltaMode_fn, 0, false, ::g::Uno::Platform::WheelDeltaMode_typeof(), 0),
        new uFunction("get_WindowPoint", NULL, (void*)PointerEventArgs__get_WindowPoint_fn, 0, false, ::g::Uno::Float2_typeof(), 0));
    return type;
}

// protected internal PointerEventArgs(Fuse.Input.PointerEventData data, Fuse.Node node) :730
void PointerEventArgs__ctor_2_fn(PointerEventArgs* __this, ::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Node* node)
{
    __this->ctor_2(data, node);
}

// internal Fuse.Input.PointerEventData get_Data() :681
void PointerEventArgs__get_Data_fn(PointerEventArgs* __this, ::g::Fuse::Input::PointerEventData** __retval)
{
    *__retval = __this->Data();
}

// internal bool get_IsHardCaptured() :722
void PointerEventArgs__get_IsHardCaptured_fn(PointerEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsHardCaptured();
}

// public bool IsHardCapturedTo(object behavior) :725
void PointerEventArgs__IsHardCapturedTo_fn(PointerEventArgs* __this, uObject* behavior, bool* __retval)
{
    *__retval = __this->IsHardCapturedTo(behavior);
}

// public bool get_IsPrimary() :690
void PointerEventArgs__get_IsPrimary_fn(PointerEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsPrimary();
}

// public bool IsSoftCapturedTo(object behavior) :715
void PointerEventArgs__IsSoftCapturedTo_fn(PointerEventArgs* __this, uObject* behavior, bool* __retval)
{
    *__retval = __this->IsSoftCapturedTo(behavior);
}

// public Uno.Platform.PointerType get_PointerType() :689
void PointerEventArgs__get_PointerType_fn(PointerEventArgs* __this, int* __retval)
{
    *__retval = __this->PointerType();
}

// public int get_PointIndex() :688
void PointerEventArgs__get_PointIndex_fn(PointerEventArgs* __this, int* __retval)
{
    *__retval = __this->PointIndex();
}

// public void ReleaseHardCapture(object behavior) :709
void PointerEventArgs__ReleaseHardCapture_fn(PointerEventArgs* __this, uObject* behavior)
{
    __this->ReleaseHardCapture(behavior);
}

// public void ReleaseSoftCapture(object behavior) :704
void PointerEventArgs__ReleaseSoftCapture_fn(PointerEventArgs* __this, uObject* behavior)
{
    __this->ReleaseSoftCapture(behavior);
}

// private override sealed void Serialize(Fuse.Scripting.IEventSerializer s) :735
void PointerEventArgs__Serialize_fn(PointerEventArgs* __this, uObject* s)
{
    ::g::Fuse::Scripting::IEventSerializer::AddDouble(uInterface(uPtr(s), ::g::Fuse::Scripting::IEventSerializer_typeof()), ::STRINGS[17/*"x"*/], (double)__this->WindowPoint().X);
    ::g::Fuse::Scripting::IEventSerializer::AddDouble(uInterface(s, ::g::Fuse::Scripting::IEventSerializer_typeof()), ::STRINGS[18/*"y"*/], (double)__this->WindowPoint().Y);
    ::g::Fuse::Scripting::IEventSerializer::AddInt(uInterface(s, ::g::Fuse::Scripting::IEventSerializer_typeof()), ::STRINGS[19/*"index"*/], __this->PointIndex());
}

// public double get_Timestamp() :683
void PointerEventArgs__get_Timestamp_fn(PointerEventArgs* __this, double* __retval)
{
    *__retval = __this->Timestamp();
}

// public bool TryHardCapture(object identity, Uno.Action lostCallback, [Fuse.Node captureNode]) :692
void PointerEventArgs__TryHardCapture_fn(PointerEventArgs* __this, uObject* identity, uDelegate* lostCallback, ::g::Fuse::Node* captureNode, bool* __retval)
{
    *__retval = __this->TryHardCapture(identity, lostCallback, captureNode);
}

// public bool TrySoftCapture(object identity, Uno.Action lostCallback, [Fuse.Node captureNode]) :699
void PointerEventArgs__TrySoftCapture_fn(PointerEventArgs* __this, uObject* identity, uDelegate* lostCallback, ::g::Fuse::Node* captureNode, bool* __retval)
{
    *__retval = __this->TrySoftCapture(identity, lostCallback, captureNode);
}

// public float2 get_WheelDelta() :686
void PointerEventArgs__get_WheelDelta_fn(PointerEventArgs* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->WheelDelta();
}

// public Uno.Platform.WheelDeltaMode get_WheelDeltaMode() :687
void PointerEventArgs__get_WheelDeltaMode_fn(PointerEventArgs* __this, int* __retval)
{
    *__retval = __this->WheelDeltaMode();
}

// public float2 get_WindowPoint() :685
void PointerEventArgs__get_WindowPoint_fn(PointerEventArgs* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->WindowPoint();
}

// protected internal PointerEventArgs(Fuse.Input.PointerEventData data, Fuse.Node node) [instance] :730
void PointerEventArgs::ctor_2(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Node* node)
{
    ctor_1(node);
    _data = data;
}

// internal Fuse.Input.PointerEventData get_Data() [instance] :681
::g::Fuse::Input::PointerEventData* PointerEventArgs::Data()
{
    return _data;
}

// internal bool get_IsHardCaptured() [instance] :722
bool PointerEventArgs::IsHardCaptured()
{
    return ::g::Fuse::Input::Pointer::IsHardCaptured(PointIndex());
}

// public bool IsHardCapturedTo(object behavior) [instance] :725
bool PointerEventArgs::IsHardCapturedTo(uObject* behavior)
{
    return ::g::Fuse::Input::Pointer::IsHardCaptured1(PointIndex(), behavior);
}

// public bool get_IsPrimary() [instance] :690
bool PointerEventArgs::IsPrimary()
{
    return uPtr(_data)->IsPrimary;
}

// public bool IsSoftCapturedTo(object behavior) [instance] :715
bool PointerEventArgs::IsSoftCapturedTo(uObject* behavior)
{
    return ::g::Fuse::Input::Pointer::IsSoftCaptured1(PointIndex(), behavior);
}

// public Uno.Platform.PointerType get_PointerType() [instance] :689
int PointerEventArgs::PointerType()
{
    return uPtr(_data)->PointerType;
}

// public int get_PointIndex() [instance] :688
int PointerEventArgs::PointIndex()
{
    return uPtr(_data)->PointIndex;
}

// public void ReleaseHardCapture(object behavior) [instance] :709
void PointerEventArgs::ReleaseHardCapture(uObject* behavior)
{
    if (IsHardCapturedTo(behavior))
        ::g::Fuse::Input::Pointer::ReleaseHardCapture(PointIndex());
}

// public void ReleaseSoftCapture(object behavior) [instance] :704
void PointerEventArgs::ReleaseSoftCapture(uObject* behavior)
{
    ::g::Fuse::Input::Pointer::ReleaseSoftCapture(PointIndex(), behavior);
}

// public double get_Timestamp() [instance] :683
double PointerEventArgs::Timestamp()
{
    return uPtr(_data)->Timestamp;
}

// public bool TryHardCapture(object identity, Uno.Action lostCallback, [Fuse.Node captureNode]) [instance] :692
bool PointerEventArgs::TryHardCapture(uObject* identity, uDelegate* lostCallback, ::g::Fuse::Node* captureNode)
{
    if (!IsHardCaptured())
        return ::g::Fuse::Input::Pointer::HardCapture(PointIndex(), (captureNode != NULL) ? captureNode : (::g::Fuse::Node*)Node(), identity, lostCallback);

    return false;
}

// public bool TrySoftCapture(object identity, Uno.Action lostCallback, [Fuse.Node captureNode]) [instance] :699
bool PointerEventArgs::TrySoftCapture(uObject* identity, uDelegate* lostCallback, ::g::Fuse::Node* captureNode)
{
    return ::g::Fuse::Input::Pointer::SoftCapture(PointIndex(), (captureNode != NULL) ? captureNode : (::g::Fuse::Node*)Node(), identity, lostCallback);
}

// public float2 get_WheelDelta() [instance] :686
::g::Uno::Float2 PointerEventArgs::WheelDelta()
{
    return uPtr(_data)->WheelDelta;
}

// public Uno.Platform.WheelDeltaMode get_WheelDeltaMode() [instance] :687
int PointerEventArgs::WheelDeltaMode()
{
    return uPtr(_data)->WheelDeltaMode;
}

// public float2 get_WindowPoint() [instance] :685
::g::Uno::Float2 PointerEventArgs::WindowPoint()
{
    return uPtr(_data)->WindowPoint;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(666)
// ------------------------------------------------------------

// public sealed class PointerEventData :666
// {
uType* PointerEventData_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(PointerEventData);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Input.PointerEventData", options);
    type->fp_ctor_ = (void*)PointerEventData__New1_fn;
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Input::PointerEventData, IsPrimary), 0,
        ::g::Uno::Platform::PointerType_typeof(), offsetof(::g::Fuse::Input::PointerEventData, PointerType), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Input::PointerEventData, PointIndex), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Input::PointerEventData, Timestamp), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Input::PointerEventData, WheelDelta), 0,
        ::g::Uno::Platform::WheelDeltaMode_typeof(), offsetof(::g::Fuse::Input::PointerEventData, WheelDeltaMode), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Input::PointerEventData, WindowPoint), 0);
    type->Reflection.SetFields(7,
        new uField("IsPrimary", 0),
        new uField("PointerType", 1),
        new uField("PointIndex", 2),
        new uField("Timestamp", 3),
        new uField("WheelDelta", 4),
        new uField("WheelDeltaMode", 5),
        new uField("WindowPoint", 6));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)PointerEventData__New1_fn, 0, true, PointerEventData_typeof(), 0));
    return type;
}

// public generated PointerEventData() :666
void PointerEventData__ctor__fn(PointerEventData* __this)
{
    __this->ctor_();
}

// public generated PointerEventData New() :666
void PointerEventData__New1_fn(PointerEventData** __retval)
{
    *__retval = PointerEventData::New1();
}

// public generated PointerEventData() [instance] :666
void PointerEventData::ctor_()
{
}

// public generated PointerEventData New() [static] :666
PointerEventData* PointerEventData::New1()
{
    PointerEventData* obj1 = (PointerEventData*)uNew(PointerEventData_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(849)
// ------------------------------------------------------------

// internal sealed class PointerLeft :849
// {
::g::Fuse::NodeEvent_type* PointerLeft_typeof()
{
    static uSStrong< ::g::Fuse::NodeEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(PointerLeft);
    options.TypeSize = sizeof(::g::Fuse::NodeEvent_type);
    type = (::g::Fuse::NodeEvent_type*)uClassType::New("Fuse.Input.PointerLeft", options);
    type->SetBase(::g::Fuse::NodeEvent_typeof()->MakeType(::g::Fuse::Input::PointerLeftHandler_typeof(), ::g::Fuse::Input::PointerLeftArgs_typeof()));
    type->fp_ctor_ = (void*)PointerLeft__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::NodeEvent*, void*, uObject*, ::g::Fuse::NodeEventArgs*))PointerLeft__Invoke_fn;
    ::TYPES[68] = ::g::Fuse::Input::PointerLeftHandler_typeof();
    type->SetFields(2);
    return type;
}

// public generated PointerLeft() :849
void PointerLeft__ctor_1_fn(PointerLeft* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Input.PointerLeftHandler handler, object sender, Fuse.Input.PointerLeftArgs args) :851
void PointerLeft__Invoke_fn(PointerLeft* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::PointerLeftArgs* args)
{
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated PointerLeft New() :849
void PointerLeft__New1_fn(PointerLeft** __retval)
{
    *__retval = PointerLeft::New1();
}

// public generated PointerLeft() [instance] :849
void PointerLeft::ctor_1()
{
    ctor_();
}

// public generated PointerLeft New() [static] :849
PointerLeft* PointerLeft::New1()
{
    PointerLeft* obj1 = (PointerLeft*)uNew(PointerLeft_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(840)
// ------------------------------------------------------------

// public sealed class PointerLeftArgs :840
// {
::g::Fuse::NodeEventArgs_type* PointerLeftArgs_typeof()
{
    static uSStrong< ::g::Fuse::NodeEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PointerLeftArgs);
    options.TypeSize = sizeof(::g::Fuse::NodeEventArgs_type);
    type = (::g::Fuse::NodeEventArgs_type*)uClassType::New("Fuse.Input.PointerLeftArgs", options);
    type->SetBase(::g::Fuse::Input::PointerEventArgs_typeof());
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::NodeEventArgs__Fuse_Scripting_IScriptEvent_Serialize_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::NodeEventArgs_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)PointerLeftArgs__New3_fn, 0, true, PointerLeftArgs_typeof(), 2, ::g::Fuse::Input::PointerEventData_typeof(), ::g::Fuse::Node_typeof()));
    return type;
}

// public PointerLeftArgs(Fuse.Input.PointerEventData data, Fuse.Node node) :842
void PointerLeftArgs__ctor_3_fn(PointerLeftArgs* __this, ::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Node* node)
{
    __this->ctor_3(data, node);
}

// public PointerLeftArgs New(Fuse.Input.PointerEventData data, Fuse.Node node) :842
void PointerLeftArgs__New3_fn(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Node* node, PointerLeftArgs** __retval)
{
    *__retval = PointerLeftArgs::New3(data, node);
}

// public PointerLeftArgs(Fuse.Input.PointerEventData data, Fuse.Node node) [instance] :842
void PointerLeftArgs::ctor_3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Node* node)
{
    ctor_2(data, node);
}

// public PointerLeftArgs New(Fuse.Input.PointerEventData data, Fuse.Node node) [static] :842
PointerLeftArgs* PointerLeftArgs::New3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Node* node)
{
    PointerLeftArgs* obj1 = (PointerLeftArgs*)uNew(PointerLeftArgs_typeof());
    obj1->ctor_3(data, node);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(847)
// ------------------------------------------------------------

// public delegate void PointerLeftHandler(object sender, Fuse.Input.PointerLeftArgs args) :847
uDelegateType* PointerLeftHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Input.PointerLeftHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::PointerLeftArgs_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(790)
// ------------------------------------------------------------

// internal sealed class PointerMoved :790
// {
::g::Fuse::NodeEvent_type* PointerMoved_typeof()
{
    static uSStrong< ::g::Fuse::NodeEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(PointerMoved);
    options.TypeSize = sizeof(::g::Fuse::NodeEvent_type);
    type = (::g::Fuse::NodeEvent_type*)uClassType::New("Fuse.Input.PointerMoved", options);
    type->SetBase(::g::Fuse::NodeEvent_typeof()->MakeType(::g::Fuse::Input::PointerMovedHandler_typeof(), ::g::Fuse::Input::PointerMovedArgs_typeof()));
    type->fp_ctor_ = (void*)PointerMoved__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::NodeEvent*, void*, uObject*, ::g::Fuse::NodeEventArgs*))PointerMoved__Invoke_fn;
    ::TYPES[69] = ::g::Fuse::Input::PointerMovedHandler_typeof();
    type->SetFields(2);
    return type;
}

// public generated PointerMoved() :790
void PointerMoved__ctor_1_fn(PointerMoved* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Input.PointerMovedHandler handler, object sender, Fuse.Input.PointerMovedArgs args) :792
void PointerMoved__Invoke_fn(PointerMoved* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated PointerMoved New() :790
void PointerMoved__New1_fn(PointerMoved** __retval)
{
    *__retval = PointerMoved::New1();
}

// public generated PointerMoved() [instance] :790
void PointerMoved::ctor_1()
{
    ctor_();
}

// public generated PointerMoved New() [static] :790
PointerMoved* PointerMoved::New1()
{
    PointerMoved* obj1 = (PointerMoved*)uNew(PointerMoved_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(781)
// ------------------------------------------------------------

// public sealed class PointerMovedArgs :781
// {
::g::Fuse::NodeEventArgs_type* PointerMovedArgs_typeof()
{
    static uSStrong< ::g::Fuse::NodeEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PointerMovedArgs);
    options.TypeSize = sizeof(::g::Fuse::NodeEventArgs_type);
    type = (::g::Fuse::NodeEventArgs_type*)uClassType::New("Fuse.Input.PointerMovedArgs", options);
    type->SetBase(::g::Fuse::Input::PointerEventArgs_typeof());
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::NodeEventArgs__Fuse_Scripting_IScriptEvent_Serialize_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::NodeEventArgs_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)PointerMovedArgs__New3_fn, 0, true, PointerMovedArgs_typeof(), 2, ::g::Fuse::Input::PointerEventData_typeof(), ::g::Fuse::Node_typeof()));
    return type;
}

// public PointerMovedArgs(Fuse.Input.PointerEventData data, Fuse.Node node) :783
void PointerMovedArgs__ctor_3_fn(PointerMovedArgs* __this, ::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Node* node)
{
    __this->ctor_3(data, node);
}

// public PointerMovedArgs New(Fuse.Input.PointerEventData data, Fuse.Node node) :783
void PointerMovedArgs__New3_fn(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Node* node, PointerMovedArgs** __retval)
{
    *__retval = PointerMovedArgs::New3(data, node);
}

// public PointerMovedArgs(Fuse.Input.PointerEventData data, Fuse.Node node) [instance] :783
void PointerMovedArgs::ctor_3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Node* node)
{
    ctor_2(data, node);
}

// public PointerMovedArgs New(Fuse.Input.PointerEventData data, Fuse.Node node) [static] :783
PointerMovedArgs* PointerMovedArgs::New3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Node* node)
{
    PointerMovedArgs* obj1 = (PointerMovedArgs*)uNew(PointerMovedArgs_typeof());
    obj1->ctor_3(data, node);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(788)
// ------------------------------------------------------------

// public delegate void PointerMovedHandler(object sender, Fuse.Input.PointerMovedArgs args) :788
uDelegateType* PointerMovedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Input.PointerMovedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::PointerMovedArgs_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(770)
// ------------------------------------------------------------

// internal sealed class PointerPressed :770
// {
::g::Fuse::NodeEvent_type* PointerPressed_typeof()
{
    static uSStrong< ::g::Fuse::NodeEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(PointerPressed);
    options.TypeSize = sizeof(::g::Fuse::NodeEvent_type);
    type = (::g::Fuse::NodeEvent_type*)uClassType::New("Fuse.Input.PointerPressed", options);
    type->SetBase(::g::Fuse::NodeEvent_typeof()->MakeType(::g::Fuse::Input::PointerPressedHandler_typeof(), ::g::Fuse::Input::PointerPressedArgs_typeof()));
    type->fp_ctor_ = (void*)PointerPressed__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::NodeEvent*, void*, uObject*, ::g::Fuse::NodeEventArgs*))PointerPressed__Invoke_fn;
    ::TYPES[70] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    type->SetFields(2);
    return type;
}

// public generated PointerPressed() :770
void PointerPressed__ctor_1_fn(PointerPressed* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Input.PointerPressedHandler handler, object sender, Fuse.Input.PointerPressedArgs args) :772
void PointerPressed__Invoke_fn(PointerPressed* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated PointerPressed New() :770
void PointerPressed__New1_fn(PointerPressed** __retval)
{
    *__retval = PointerPressed::New1();
}

// public generated PointerPressed() [instance] :770
void PointerPressed::ctor_1()
{
    ctor_();
}

// public generated PointerPressed New() [static] :770
PointerPressed* PointerPressed::New1()
{
    PointerPressed* obj1 = (PointerPressed*)uNew(PointerPressed_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(761)
// ------------------------------------------------------------

// public sealed class PointerPressedArgs :761
// {
::g::Fuse::NodeEventArgs_type* PointerPressedArgs_typeof()
{
    static uSStrong< ::g::Fuse::NodeEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PointerPressedArgs);
    options.TypeSize = sizeof(::g::Fuse::NodeEventArgs_type);
    type = (::g::Fuse::NodeEventArgs_type*)uClassType::New("Fuse.Input.PointerPressedArgs", options);
    type->SetBase(::g::Fuse::Input::PointerEventArgs_typeof());
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::NodeEventArgs__Fuse_Scripting_IScriptEvent_Serialize_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::NodeEventArgs_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)PointerPressedArgs__New3_fn, 0, true, PointerPressedArgs_typeof(), 2, ::g::Fuse::Input::PointerEventData_typeof(), ::g::Fuse::Node_typeof()));
    return type;
}

// public PointerPressedArgs(Fuse.Input.PointerEventData data, Fuse.Node node) :763
void PointerPressedArgs__ctor_3_fn(PointerPressedArgs* __this, ::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Node* node)
{
    __this->ctor_3(data, node);
}

// public PointerPressedArgs New(Fuse.Input.PointerEventData data, Fuse.Node node) :763
void PointerPressedArgs__New3_fn(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Node* node, PointerPressedArgs** __retval)
{
    *__retval = PointerPressedArgs::New3(data, node);
}

// public PointerPressedArgs(Fuse.Input.PointerEventData data, Fuse.Node node) [instance] :763
void PointerPressedArgs::ctor_3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Node* node)
{
    ctor_2(data, node);
}

// public PointerPressedArgs New(Fuse.Input.PointerEventData data, Fuse.Node node) [static] :763
PointerPressedArgs* PointerPressedArgs::New3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Node* node)
{
    PointerPressedArgs* obj1 = (PointerPressedArgs*)uNew(PointerPressedArgs_typeof());
    obj1->ctor_3(data, node);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(768)
// ------------------------------------------------------------

// public delegate void PointerPressedHandler(object sender, Fuse.Input.PointerPressedArgs args) :768
uDelegateType* PointerPressedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Input.PointerPressedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::PointerPressedArgs_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(987)
// ------------------------------------------------------------

// private sealed class Pointer.PointerRecord :987
// {
uType* Pointer__PointerRecord_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Pointer__PointerRecord);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Input.Pointer.PointerRecord", options);
    type->fp_ctor_ = (void*)Pointer__PointerRecord__New1_fn;
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Input::Pointer__PointerRecord, DistanceMoved), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Input::Pointer__PointerRecord, TimeAppeared), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Input::Pointer__PointerRecord, WasHandled), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Input::Pointer__PointerRecord, WindowPoint), 0);
    return type;
}

// public generated PointerRecord() :987
void Pointer__PointerRecord__ctor__fn(Pointer__PointerRecord* __this)
{
    __this->ctor_();
}

// public generated PointerRecord New() :987
void Pointer__PointerRecord__New1_fn(Pointer__PointerRecord** __retval)
{
    *__retval = Pointer__PointerRecord::New1();
}

// public generated PointerRecord() [instance] :987
void Pointer__PointerRecord::ctor_()
{
    TimeAppeared = ::g::Uno::Diagnostics::Clock::GetSeconds();
}

// public generated PointerRecord New() [static] :987
Pointer__PointerRecord* Pointer__PointerRecord::New1()
{
    Pointer__PointerRecord* obj1 = (Pointer__PointerRecord*)uNew(Pointer__PointerRecord_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(810)
// ------------------------------------------------------------

// internal sealed class PointerReleased :810
// {
::g::Fuse::NodeEvent_type* PointerReleased_typeof()
{
    static uSStrong< ::g::Fuse::NodeEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(PointerReleased);
    options.TypeSize = sizeof(::g::Fuse::NodeEvent_type);
    type = (::g::Fuse::NodeEvent_type*)uClassType::New("Fuse.Input.PointerReleased", options);
    type->SetBase(::g::Fuse::NodeEvent_typeof()->MakeType(::g::Fuse::Input::PointerReleasedHandler_typeof(), ::g::Fuse::Input::PointerReleasedArgs_typeof()));
    type->fp_ctor_ = (void*)PointerReleased__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::NodeEvent*, void*, uObject*, ::g::Fuse::NodeEventArgs*))PointerReleased__Invoke_fn;
    ::TYPES[71] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    type->SetFields(2);
    return type;
}

// public generated PointerReleased() :810
void PointerReleased__ctor_1_fn(PointerReleased* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Input.PointerReleasedHandler handler, object sender, Fuse.Input.PointerReleasedArgs args) :812
void PointerReleased__Invoke_fn(PointerReleased* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated PointerReleased New() :810
void PointerReleased__New1_fn(PointerReleased** __retval)
{
    *__retval = PointerReleased::New1();
}

// public generated PointerReleased() [instance] :810
void PointerReleased::ctor_1()
{
    ctor_();
}

// public generated PointerReleased New() [static] :810
PointerReleased* PointerReleased::New1()
{
    PointerReleased* obj1 = (PointerReleased*)uNew(PointerReleased_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(801)
// ------------------------------------------------------------

// public sealed class PointerReleasedArgs :801
// {
::g::Fuse::NodeEventArgs_type* PointerReleasedArgs_typeof()
{
    static uSStrong< ::g::Fuse::NodeEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PointerReleasedArgs);
    options.TypeSize = sizeof(::g::Fuse::NodeEventArgs_type);
    type = (::g::Fuse::NodeEventArgs_type*)uClassType::New("Fuse.Input.PointerReleasedArgs", options);
    type->SetBase(::g::Fuse::Input::PointerEventArgs_typeof());
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::NodeEventArgs__Fuse_Scripting_IScriptEvent_Serialize_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::NodeEventArgs_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)PointerReleasedArgs__New3_fn, 0, true, PointerReleasedArgs_typeof(), 2, ::g::Fuse::Input::PointerEventData_typeof(), ::g::Fuse::Node_typeof()));
    return type;
}

// public PointerReleasedArgs(Fuse.Input.PointerEventData data, Fuse.Node node) :803
void PointerReleasedArgs__ctor_3_fn(PointerReleasedArgs* __this, ::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Node* node)
{
    __this->ctor_3(data, node);
}

// public PointerReleasedArgs New(Fuse.Input.PointerEventData data, Fuse.Node node) :803
void PointerReleasedArgs__New3_fn(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Node* node, PointerReleasedArgs** __retval)
{
    *__retval = PointerReleasedArgs::New3(data, node);
}

// public PointerReleasedArgs(Fuse.Input.PointerEventData data, Fuse.Node node) [instance] :803
void PointerReleasedArgs::ctor_3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Node* node)
{
    ctor_2(data, node);
}

// public PointerReleasedArgs New(Fuse.Input.PointerEventData data, Fuse.Node node) [static] :803
PointerReleasedArgs* PointerReleasedArgs::New3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Node* node)
{
    PointerReleasedArgs* obj1 = (PointerReleasedArgs*)uNew(PointerReleasedArgs_typeof());
    obj1->ctor_3(data, node);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(808)
// ------------------------------------------------------------

// public delegate void PointerReleasedHandler(object sender, Fuse.Input.PointerReleasedArgs args) :808
uDelegateType* PointerReleasedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Input.PointerReleasedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::PointerReleasedArgs_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(869)
// ------------------------------------------------------------

// internal sealed class PointerWheelMoved :869
// {
::g::Fuse::NodeEvent_type* PointerWheelMoved_typeof()
{
    static uSStrong< ::g::Fuse::NodeEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(PointerWheelMoved);
    options.TypeSize = sizeof(::g::Fuse::NodeEvent_type);
    type = (::g::Fuse::NodeEvent_type*)uClassType::New("Fuse.Input.PointerWheelMoved", options);
    type->SetBase(::g::Fuse::NodeEvent_typeof()->MakeType(::g::Fuse::Input::PointerWheelMovedHandler_typeof(), ::g::Fuse::Input::PointerWheelMovedArgs_typeof()));
    type->fp_ctor_ = (void*)PointerWheelMoved__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::NodeEvent*, void*, uObject*, ::g::Fuse::NodeEventArgs*))PointerWheelMoved__Invoke_fn;
    ::TYPES[72] = ::g::Fuse::Input::PointerWheelMovedHandler_typeof();
    type->SetFields(2);
    return type;
}

// public generated PointerWheelMoved() :869
void PointerWheelMoved__ctor_1_fn(PointerWheelMoved* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Input.PointerWheelMovedHandler handler, object sender, Fuse.Input.PointerWheelMovedArgs args) :871
void PointerWheelMoved__Invoke_fn(PointerWheelMoved* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::PointerWheelMovedArgs* args)
{
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated PointerWheelMoved New() :869
void PointerWheelMoved__New1_fn(PointerWheelMoved** __retval)
{
    *__retval = PointerWheelMoved::New1();
}

// public generated PointerWheelMoved() [instance] :869
void PointerWheelMoved::ctor_1()
{
    ctor_();
}

// public generated PointerWheelMoved New() [static] :869
PointerWheelMoved* PointerWheelMoved::New1()
{
    PointerWheelMoved* obj1 = (PointerWheelMoved*)uNew(PointerWheelMoved_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(860)
// ------------------------------------------------------------

// public sealed class PointerWheelMovedArgs :860
// {
::g::Fuse::NodeEventArgs_type* PointerWheelMovedArgs_typeof()
{
    static uSStrong< ::g::Fuse::NodeEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PointerWheelMovedArgs);
    options.TypeSize = sizeof(::g::Fuse::NodeEventArgs_type);
    type = (::g::Fuse::NodeEventArgs_type*)uClassType::New("Fuse.Input.PointerWheelMovedArgs", options);
    type->SetBase(::g::Fuse::Input::PointerEventArgs_typeof());
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::NodeEventArgs__Fuse_Scripting_IScriptEvent_Serialize_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::NodeEventArgs_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)PointerWheelMovedArgs__New3_fn, 0, true, PointerWheelMovedArgs_typeof(), 2, ::g::Fuse::Input::PointerEventData_typeof(), ::g::Fuse::Node_typeof()));
    return type;
}

// public PointerWheelMovedArgs(Fuse.Input.PointerEventData data, Fuse.Node node) :862
void PointerWheelMovedArgs__ctor_3_fn(PointerWheelMovedArgs* __this, ::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Node* node)
{
    __this->ctor_3(data, node);
}

// public PointerWheelMovedArgs New(Fuse.Input.PointerEventData data, Fuse.Node node) :862
void PointerWheelMovedArgs__New3_fn(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Node* node, PointerWheelMovedArgs** __retval)
{
    *__retval = PointerWheelMovedArgs::New3(data, node);
}

// public PointerWheelMovedArgs(Fuse.Input.PointerEventData data, Fuse.Node node) [instance] :862
void PointerWheelMovedArgs::ctor_3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Node* node)
{
    ctor_2(data, node);
}

// public PointerWheelMovedArgs New(Fuse.Input.PointerEventData data, Fuse.Node node) [static] :862
PointerWheelMovedArgs* PointerWheelMovedArgs::New3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Node* node)
{
    PointerWheelMovedArgs* obj1 = (PointerWheelMovedArgs*)uNew(PointerWheelMovedArgs_typeof());
    obj1->ctor_3(data, node);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(867)
// ------------------------------------------------------------

// public delegate void PointerWheelMovedHandler(object sender, Fuse.Input.PointerWheelMovedArgs args) :867
uDelegateType* PointerWheelMovedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Input.PointerWheelMovedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::PointerWheelMovedArgs_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(480)
// ------------------------------------------------------------

// internal sealed class SelectionQuery :480
// {
uType* SelectionQuery_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(SelectionQuery);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Input.SelectionQuery", options);
    type->fp_ctor_ = (void*)SelectionQuery__New1_fn;
    ::TYPES[50] = ::g::Fuse::HitTestResult_typeof();
    ::TYPES[73] = ::g::Fuse::HitTestCallback_typeof();
    type->SetFields(0,
        ::g::Fuse::HitTestResult_typeof(), offsetof(::g::Fuse::Input::SelectionQuery, _result), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Input::SelectionQuery, count), 0);
    return type;
}

// public generated SelectionQuery() :480
void SelectionQuery__ctor__fn(SelectionQuery* __this)
{
    __this->ctor_();
}

// public generated SelectionQuery New() :480
void SelectionQuery__New1_fn(SelectionQuery** __retval)
{
    *__retval = SelectionQuery::New1();
}

// private void Select(Fuse.HitTestResult result) :493
void SelectionQuery__Select_fn(SelectionQuery* __this, ::g::Fuse::HitTestResult* result)
{
    __this->Select(result);
}

// public Fuse.HitTestResult Select(Fuse.Node root, float2 point) :484
void SelectionQuery__Select1_fn(SelectionQuery* __this, ::g::Fuse::Node* root, ::g::Uno::Float2* point, ::g::Fuse::HitTestResult** __retval)
{
    *__retval = __this->Select1(root, *point);
}

// public generated SelectionQuery() [instance] :480
void SelectionQuery::ctor_()
{
}

// private void Select(Fuse.HitTestResult result) [instance] :493
void SelectionQuery::Select(::g::Fuse::HitTestResult* result)
{
    count++;

    if ((_result == NULL) || ((uPtr(_result)->HasHitDistance() && uPtr(result)->HasHitDistance()) && (uPtr(result)->HitDistance() < uPtr(_result)->HitDistance())))
        _result = result;
}

// public Fuse.HitTestResult Select(Fuse.Node root, float2 point) [instance] :484
::g::Fuse::HitTestResult* SelectionQuery::Select1(::g::Fuse::Node* root, ::g::Uno::Float2 point)
{
    ::g::Fuse::HitTestContext* args = ::g::Fuse::HitTestContext::New1(point, uDelegate::New(::TYPES[73/*Fuse.HitTestCallback*/], (void*)SelectionQuery__Select_fn, this));
    uPtr(root)->HitTest(args);
    args->Dispose();
    return _result;
}

// public generated SelectionQuery New() [static] :480
SelectionQuery* SelectionQuery::New1()
{
    SelectionQuery* obj1 = (SelectionQuery*)uNew(SelectionQuery_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(1487)
// -------------------------------------------------------------

// internal sealed class TextEntered :1487
// {
::g::Fuse::NodeEvent_type* TextEntered_typeof()
{
    static uSStrong< ::g::Fuse::NodeEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(TextEntered);
    options.TypeSize = sizeof(::g::Fuse::NodeEvent_type);
    type = (::g::Fuse::NodeEvent_type*)uClassType::New("Fuse.Input.TextEntered", options);
    type->SetBase(::g::Fuse::NodeEvent_typeof()->MakeType(::g::Fuse::Input::TextEnteredHandler_typeof(), ::g::Fuse::Input::TextEnteredArgs_typeof()));
    type->fp_ctor_ = (void*)TextEntered__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::NodeEvent*, void*, uObject*, ::g::Fuse::NodeEventArgs*))TextEntered__Invoke_fn;
    ::TYPES[74] = ::g::Fuse::Input::TextEnteredHandler_typeof();
    type->SetFields(2);
    return type;
}

// public generated TextEntered() :1487
void TextEntered__ctor_1_fn(TextEntered* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Input.TextEnteredHandler handler, object sender, Fuse.Input.TextEnteredArgs args) :1489
void TextEntered__Invoke_fn(TextEntered* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::TextEnteredArgs* args)
{
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated TextEntered New() :1487
void TextEntered__New1_fn(TextEntered** __retval)
{
    *__retval = TextEntered::New1();
}

// public generated TextEntered() [instance] :1487
void TextEntered::ctor_1()
{
    ctor_();
}

// public generated TextEntered New() [static] :1487
TextEntered* TextEntered::New1()
{
    TextEntered* obj1 = (TextEntered*)uNew(TextEntered_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(1470)
// -------------------------------------------------------------

// public sealed class TextEnteredArgs :1470
// {
::g::Fuse::NodeEventArgs_type* TextEnteredArgs_typeof()
{
    static uSStrong< ::g::Fuse::NodeEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TextEnteredArgs);
    options.TypeSize = sizeof(::g::Fuse::NodeEventArgs_type);
    type = (::g::Fuse::NodeEventArgs_type*)uClassType::New("Fuse.Input.TextEnteredArgs", options);
    type->SetBase(::g::Fuse::NodeEventArgs_typeof());
    type->fp_Serialize = (void(*)(::g::Fuse::NodeEventArgs*, uObject*))TextEnteredArgs__Serialize_fn;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::NodeEventArgs__Fuse_Scripting_IScriptEvent_Serialize_fn;
    ::STRINGS[20] = uString::Const("text");
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::NodeEventArgs_type, interface0));
    type->SetFields(2,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Input::TextEnteredArgs, _Text), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)TextEnteredArgs__New3_fn, 0, true, TextEnteredArgs_typeof(), 2, ::g::Uno::String_typeof(), ::g::Fuse::Node_typeof()),
        new uFunction("get_Text", NULL, (void*)TextEnteredArgs__get_Text_fn, 0, false, ::g::Uno::String_typeof(), 0));
    return type;
}

// public TextEnteredArgs(string text, Fuse.Node node) :1474
void TextEnteredArgs__ctor_2_fn(TextEnteredArgs* __this, uString* text, ::g::Fuse::Node* node)
{
    __this->ctor_2(text, node);
}

// public TextEnteredArgs New(string text, Fuse.Node node) :1474
void TextEnteredArgs__New3_fn(uString* text, ::g::Fuse::Node* node, TextEnteredArgs** __retval)
{
    *__retval = TextEnteredArgs::New3(text, node);
}

// private override sealed void Serialize(Fuse.Scripting.IEventSerializer s) :1479
void TextEnteredArgs__Serialize_fn(TextEnteredArgs* __this, uObject* s)
{
    ::g::Fuse::Scripting::IEventSerializer::AddString(uInterface(uPtr(s), ::g::Fuse::Scripting::IEventSerializer_typeof()), ::STRINGS[20/*"text"*/], __this->Text());
}

// public generated string get_Text() :1472
void TextEnteredArgs__get_Text_fn(TextEnteredArgs* __this, uString** __retval)
{
    *__retval = __this->Text();
}

// private generated void set_Text(string value) :1472
void TextEnteredArgs__set_Text_fn(TextEnteredArgs* __this, uString* value)
{
    __this->Text(value);
}

// public TextEnteredArgs(string text, Fuse.Node node) [instance] :1474
void TextEnteredArgs::ctor_2(uString* text, ::g::Fuse::Node* node)
{
    ctor_1(node);
    Text(text);
}

// public generated string get_Text() [instance] :1472
uString* TextEnteredArgs::Text()
{
    return _Text;
}

// private generated void set_Text(string value) [instance] :1472
void TextEnteredArgs::Text(uString* value)
{
    _Text = value;
}

// public TextEnteredArgs New(string text, Fuse.Node node) [static] :1474
TextEnteredArgs* TextEnteredArgs::New3(uString* text, ::g::Fuse::Node* node)
{
    TextEnteredArgs* obj1 = (TextEnteredArgs*)uNew(TextEnteredArgs_typeof());
    obj1->ctor_2(text, node);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(1485)
// -------------------------------------------------------------

// public delegate void TextEnteredHandler(object sender, Fuse.Input.TextEnteredArgs args) :1485
uDelegateType* TextEnteredHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Input.TextEnteredHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::TextEnteredArgs_typeof());
    return type;
}

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(1448)
// -------------------------------------------------------------

// public static class TextService :1448
// {
// static TextService() :1448
static void TextService__cctor__fn(uType* __type)
{
    TextService::_textEntered_ = ::g::Fuse::Input::TextEntered::New1();
}

uClassType* TextService_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Input.TextService", options);
    type->fp_cctor_ = TextService__cctor__fn;
    ::TYPES[26] = ::g::Fuse::Input::Focus_typeof();
    ::TYPES[3] = ::g::Fuse::NodeEventArgs_typeof();
    ::TYPES[75] = ::g::Fuse::NodeEvent_typeof()->MakeType(::g::Fuse::Input::TextEnteredHandler_typeof(), ::g::Fuse::Input::TextEnteredArgs_typeof());
    type->SetFields(0,
        ::g::Fuse::Input::TextEntered_typeof(), (uintptr_t)&::g::Fuse::Input::TextService::_textEntered_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction("get_TextEntered", NULL, (void*)TextService__get_TextEntered_fn, 0, true, ::g::Fuse::NodeEvent_typeof()->MakeType(::g::Fuse::Input::TextEnteredHandler_typeof(), ::g::Fuse::Input::TextEnteredArgs_typeof()), 0));
    return type;
}

// internal static bool RaiseTextEntered(string text) :1454
void TextService__RaiseTextEntered_fn(uString* text, bool* __retval)
{
    *__retval = TextService::RaiseTextEntered(text);
}

// public static Fuse.NodeEvent<Fuse.Input.TextEnteredHandler, Fuse.Input.TextEnteredArgs> get_TextEntered() :1452
void TextService__get_TextEntered_fn(::g::Fuse::NodeEvent** __retval)
{
    *__retval = TextService::TextEntered();
}

uSStrong< ::g::Fuse::Input::TextEntered*> TextService::_textEntered_;

// internal static bool RaiseTextEntered(string text) [static] :1454
bool TextService::RaiseTextEntered(uString* text)
{
    TextService_typeof()->Init();

    if (::g::Fuse::Input::Focus::FocusedNode() != NULL)
    {
        ::g::Fuse::Input::TextEnteredArgs* args = ::g::Fuse::Input::TextEnteredArgs::New3(text, ::g::Fuse::Input::Focus::FocusedNode());
        uPtr(TextService::TextEntered())->RaiseWithBubble(args, 0);
        return args->IsHandled();
    }

    return false;
}

// public static Fuse.NodeEvent<Fuse.Input.TextEnteredHandler, Fuse.Input.TextEnteredArgs> get_TextEntered() [static] :1452
::g::Fuse::NodeEvent* TextService::TextEntered()
{
    TextService_typeof()->Init();
    return TextService::_textEntered();
}
// }

// C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno(86)
// -----------------------------------------------------------

// internal static class TraverseNodeExtensions :86
// {
uClassType* TraverseNodeExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Input.TraverseNodeExtensions", options);
    ::TYPES[1] = ::g::Fuse::Node_typeof();
    ::TYPES[23] = ::g::Uno::Predicate_typeof()->MakeType(::g::Fuse::Node_typeof());
    return type;
}

// private static Fuse.Node FindNextChild(Fuse.Node node, Fuse.Node currentChild) :162
void TraverseNodeExtensions__FindNextChild_fn(::g::Fuse::Node* node, ::g::Fuse::Node* currentChild, ::g::Fuse::Node** __retval)
{
    *__retval = TraverseNodeExtensions::FindNextChild(node, currentChild);
}

// public static Fuse.Node FindNextChild(Fuse.Node node, Uno.Predicate<Fuse.Node> filter) :88
void TraverseNodeExtensions__FindNextChild1_fn(::g::Fuse::Node* node, uDelegate* filter, ::g::Fuse::Node** __retval)
{
    *__retval = TraverseNodeExtensions::FindNextChild1(node, filter);
}

// private static Fuse.Node FindNextSibling(Fuse.Node node) :130
void TraverseNodeExtensions__FindNextSibling_fn(::g::Fuse::Node* node, ::g::Fuse::Node** __retval)
{
    *__retval = TraverseNodeExtensions::FindNextSibling(node);
}

// private static Fuse.Node FindPreviousChild(Fuse.Node node, Fuse.Node currentChild) :174
void TraverseNodeExtensions__FindPreviousChild_fn(::g::Fuse::Node* node, ::g::Fuse::Node* currentChild, ::g::Fuse::Node** __retval)
{
    *__retval = TraverseNodeExtensions::FindPreviousChild(node, currentChild);
}

// public static Fuse.Node FindPreviousChild(Fuse.Node node, Uno.Predicate<Fuse.Node> filter) :109
void TraverseNodeExtensions__FindPreviousChild1_fn(::g::Fuse::Node* node, uDelegate* filter, ::g::Fuse::Node** __retval)
{
    *__retval = TraverseNodeExtensions::FindPreviousChild1(node, filter);
}

// private static Fuse.Node FindPreviousSibling(Fuse.Node node) :146
void TraverseNodeExtensions__FindPreviousSibling_fn(::g::Fuse::Node* node, ::g::Fuse::Node** __retval)
{
    *__retval = TraverseNodeExtensions::FindPreviousSibling(node);
}

// private static Fuse.Node FindNextChild(Fuse.Node node, Fuse.Node currentChild) [static] :162
::g::Fuse::Node* TraverseNodeExtensions::FindNextChild(::g::Fuse::Node* node, ::g::Fuse::Node* currentChild)
{
    if (((node != NULL) && (currentChild != NULL)) && (uPtr(node)->SubNodeCount() > 0))

        for (int i = 0; i < uPtr(node)->SubNodeCount(); i++)
            if (uPtr(node)->GetSubNode(i) == currentChild)
            {
                if ((i + 1) < uPtr(node)->SubNodeCount())
                    return uPtr(node)->GetSubNode(i + 1);
            }

    return NULL;
}

// public static Fuse.Node FindNextChild(Fuse.Node node, Uno.Predicate<Fuse.Node> filter) [static] :88
::g::Fuse::Node* TraverseNodeExtensions::FindNextChild1(::g::Fuse::Node* node, uDelegate* filter)
{
    bool ret1;
    bool ret2;
    ::g::Fuse::Node* someNode = uAs< ::g::Fuse::Node*>(node, ::TYPES[1/*Fuse.Node*/]);

    if ((someNode != NULL) && (uPtr(someNode)->SubNodeCount() > 0))
    {
        ::g::Fuse::Node* child = uPtr(someNode)->GetSubNode(0);

        if ((uPtr(filter)->Invoke(&ret1, 1, child), ret1))
            return child;

        return TraverseNodeExtensions::FindNextChild1(child, filter);
    }

    ::g::Fuse::Node* sibling = TraverseNodeExtensions::FindNextSibling(node);

    if (sibling != NULL)
    {
        if ((uPtr(filter)->Invoke(&ret2, 1, sibling), ret2))
            return sibling;

        return TraverseNodeExtensions::FindNextChild1(sibling, filter);
    }

    return NULL;
}

// private static Fuse.Node FindNextSibling(Fuse.Node node) [static] :130
::g::Fuse::Node* TraverseNodeExtensions::FindNextSibling(::g::Fuse::Node* node)
{
    if (node == NULL)
        return NULL;

    ::g::Fuse::Node* parent = uPtr(node)->Parent();

    if (parent == NULL)
        return NULL;

    ::g::Fuse::Node* child = TraverseNodeExtensions::FindNextChild(parent, node);

    if (child != NULL)
        return child;

    return TraverseNodeExtensions::FindNextSibling(parent);
}

// private static Fuse.Node FindPreviousChild(Fuse.Node node, Fuse.Node currentChild) [static] :174
::g::Fuse::Node* TraverseNodeExtensions::FindPreviousChild(::g::Fuse::Node* node, ::g::Fuse::Node* currentChild)
{
    if (((node != NULL) && (currentChild != NULL)) && (uPtr(node)->SubNodeCount() > 0))

        for (int i = 0; i < uPtr(node)->SubNodeCount(); i++)
            if (uPtr(node)->GetSubNode(i) == currentChild)
            {
                if ((i - 1) >= 0)
                    return uPtr(node)->GetSubNode(i - 1);
            }

    return NULL;
}

// public static Fuse.Node FindPreviousChild(Fuse.Node node, Uno.Predicate<Fuse.Node> filter) [static] :109
::g::Fuse::Node* TraverseNodeExtensions::FindPreviousChild1(::g::Fuse::Node* node, uDelegate* filter)
{
    bool ret4;
    bool ret5;
    ::g::Fuse::Node* someNode = uAs< ::g::Fuse::Node*>(node, ::TYPES[1/*Fuse.Node*/]);

    if ((someNode != NULL) && (uPtr(someNode)->SubNodeCount() > 0))
    {
        ::g::Fuse::Node* child = uPtr(someNode)->GetSubNode(uPtr(someNode)->SubNodeCount() - 1);

        if ((uPtr(filter)->Invoke(&ret4, 1, child), ret4))
            return child;

        return TraverseNodeExtensions::FindPreviousChild1(child, filter);
    }

    ::g::Fuse::Node* sibling = TraverseNodeExtensions::FindPreviousSibling(node);

    if (sibling != NULL)
    {
        if ((uPtr(filter)->Invoke(&ret5, 1, sibling), ret5))
            return sibling;

        return TraverseNodeExtensions::FindPreviousChild1(sibling, filter);
    }

    return NULL;
}

// private static Fuse.Node FindPreviousSibling(Fuse.Node node) [static] :146
::g::Fuse::Node* TraverseNodeExtensions::FindPreviousSibling(::g::Fuse::Node* node)
{
    if (node == NULL)
        return NULL;

    ::g::Fuse::Node* parent = uPtr(node)->Parent();

    if (parent == NULL)
        return NULL;

    ::g::Fuse::Node* child = TraverseNodeExtensions::FindPreviousChild(uAs< ::g::Fuse::Node*>(parent, ::TYPES[1/*Fuse.Node*/]), node);

    if (child != NULL)
        return child;

    return TraverseNodeExtensions::FindPreviousSibling(parent);
}
// }

}}} // ::g::Fuse::Input
