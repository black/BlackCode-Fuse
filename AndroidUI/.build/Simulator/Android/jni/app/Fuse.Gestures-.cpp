#include <app/Experimental.Physics.BasicBoundedRegion2D.h>
#include <app/Experimental.Physics.BoundedRegion2D.h>
#include <app/Experimental.Physics.DestinationSimulation__float4.h>
#include <app/Experimental.Physics.ElasticForce__float4.h>
#include <app/Experimental.Physics.Friction__float.h>
#include <app/Experimental.Physics.MotionSimulation__float.h>
#include <app/Experimental.Physics.MotionSimulation__float2.h>
#include <app/Experimental.Physics.MotionSimulation__float4.h>
#include <app/Experimental.Physics.PointerVelocity__float.h>
#include <app/Experimental.Physics.PointerVelocity__float2.h>
#include <app/Experimental.Physics.Simulation.h>
#include <app/Fuse.Behavior.h>
#include <app/Fuse.Controls.ScrollView.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Entities.Transform3D.h>
#include <app/Fuse.Gestures.Clicked.h>
#include <app/Fuse.Gestures.ClickedArgs.h>
#include <app/Fuse.Gestures.ClickedHandler.h>
#include <app/Fuse.Gestures.Clicker.h>
#include <app/Fuse.Gestures.ClickerEventHandler.h>
#include <app/Fuse.Gestures.ClickerTrigger.h>
#include <app/Fuse.Gestures.DegreeSpan.h>
#include <app/Fuse.Gestures.DoubleClicked.h>
#include <app/Fuse.Gestures.DoubleTapped.h>
#include <app/Fuse.Gestures.DoubleTappedArgs.h>
#include <app/Fuse.Gestures.DoubleTappedHandler.h>
#include <app/Fuse.Gestures.Edge.h>
#include <app/Fuse.Gestures.EdgeSwipeAnimation.h>
#include <app/Fuse.Gestures.Internal.EdgeSwiper.h>
#include <app/Fuse.Gestures.KeepFocusInView.h>
#include <app/Fuse.Gestures.KeepInView.h>
#include <app/Fuse.Gestures.KeepInViewCommon.h>
#include <app/Fuse.Gestures.LongPressed.h>
#include <app/Fuse.Gestures.LongPressedArgs.h>
#include <app/Fuse.Gestures.LongPressedHandler.h>
#include <app/Fuse.Gestures.ScrollableGoto.h>
#include <app/Fuse.Gestures.ScrollDirections.h>
#include <app/Fuse.Gestures.Scroller.h>
#include <app/Fuse.Gestures.Scroller_MoveUserFlags.h>
#include <app/Fuse.Gestures.SwipeGestureHelper.h>
#include <app/Fuse.Gestures.Tapped.h>
#include <app/Fuse.Gestures.TappedArgs.h>
#include <app/Fuse.Gestures.TappedHandler.h>
#include <app/Fuse.Gestures.Trackball.h>
#include <app/Fuse.Gestures.Trackball_MoveMode.h>
#include <app/Fuse.Gestures.WhileClickerTrigger.h>
#include <app/Fuse.Gestures.WhileHovering.h>
#include <app/Fuse.Gestures.WhilePressed.h>
#include <app/Fuse.Input.Focus.h>
#include <app/Fuse.Input.FocusGainedArgs.h>
#include <app/Fuse.Input.FocusGainedHandler.h>
#include <app/Fuse.Input.FocusLostHandler.h>
#include <app/Fuse.Input.Pointer.h>
#include <app/Fuse.Input.PointerEnteredHandler.h>
#include <app/Fuse.Input.PointerEventArgs.h>
#include <app/Fuse.Input.PointerLeftHandler.h>
#include <app/Fuse.Input.PointerMovedArgs.h>
#include <app/Fuse.Input.PointerMovedHandler.h>
#include <app/Fuse.Input.PointerPressedArgs.h>
#include <app/Fuse.Input.PointerPressedHandler.h>
#include <app/Fuse.Input.PointerReleasedArgs.h>
#include <app/Fuse.Input.PointerReleasedHandler.h>
#include <app/Fuse.IViewport.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_Focus-e88b1a1.h>
#include <app/Fuse.NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs.h>
#include <app/Fuse.NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_Po-cd4446ec.h>
#include <app/Fuse.NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_Point-e63532ae.h>
#include <app/Fuse.NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_Poin-c465a3e6.h>
#include <app/Fuse.NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_Po-31778249.h>
#include <app/Fuse.NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_P-dde60e76.h>
#include <app/Fuse.PlacedHandler.h>
#include <app/Fuse.Properties.h>
#include <app/Fuse.PropertyHandle.h>
#include <app/Fuse.RequestBringIntoViewArgs.h>
#include <app/Fuse.RequestBringIntoViewHandler.h>
#include <app/Fuse.Time.h>
#include <app/Fuse.Transform.h>
#include <app/Fuse.Triggers.Trigger.h>
#include <app/Fuse.Triggers.WhileTrigger.h>
#include <app/Fuse.UpdateManager.h>
#include <app/Fuse.UpdateStage.h>
#include <app/Uno.Action.h>
#include <app/Uno.Action__object__double.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.ICollection__Fuse_Behavior.h>
#include <app/Uno.Collections.ICollection__Fuse_Transform.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Behavior.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Behavior.h>
#include <app/Uno.Collections.IList__Fuse_Behavior.h>
#include <app/Uno.Collections.IList__Fuse_Transform.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Diagnostics.Clock.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.Matrix.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform.PointerType.h>
#include <app/Uno.Quaternion.h>
#include <app/Uno.String.h>
#include <app/Uno.Vector.h>

namespace app {
namespace Fuse {
namespace Gestures {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Clicked__uType* Clicked__typeof()
{
    static ::uStaticStrong<Clicked__uType*> type;
    if (type != NULL) return type;

    type = (Clicked__uType*)::uAllocClassType(sizeof(Clicked__uType), "Fuse.Gestures.Clicked", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Gestures::ClickerTrigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))Clicked__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))Clicked__OnUnrooted;

    type->SetStrongRefs(
        "Handler", offsetof(Clicked, Handler));

    type->SetFunctions(7,
        ::uNewFunctionVoid("add_Handler", Clicked__add_Handler, 0, false, ::app::Fuse::Gestures::ClickedHandler__typeof()),
        ::uNewFunctionVoid("AddHandler", Clicked__AddHandler, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Gestures::ClickedHandler__typeof()),
        ::uNewFunction("GetClicked", Clicked__GetClicked, 0, true, Clicked__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunction(".ctor", Clicked__New_1, 0, true, Clicked__typeof()),
        ::uNewFunctionVoid("OnClicked", Clicked__OnClicked, 0, false, ::app::Fuse::Input::PointerEventArgs__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("remove_Handler", Clicked__remove_Handler, 0, false, ::app::Fuse::Gestures::ClickedHandler__typeof()),
        ::uNewFunctionVoid("RemoveHandler", Clicked__RemoveHandler, 0, true, ::app::Fuse::Node__typeof(), ::app::Fuse::Gestures::ClickedHandler__typeof()));

    ::uRegisterType(type);
    return type;
}

void Clicked___ObjInit_3(Clicked* __this)
{
    ::app::Fuse::Gestures::ClickerTrigger___ObjInit_2(__this);
}

void Clicked__add_Handler(Clicked* __this, ::uDelegate* value)
{
    __this->Handler = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->Handler, (::uDelegate*)value), ::app::Fuse::Gestures::ClickedHandler__typeof());
}

void Clicked__AddHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler)
{
    Clicked* c = Clicked__GetClicked(NULL, node);
    ::uPtr< Clicked*>(c)->add_Handler(handler);
}

Clicked* Clicked__GetClicked(::uStatic* __this, ::app::Fuse::Node* n)
{
    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Behavior::GetEnumerator(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(n)->Behaviors())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Behavior* b = ::app::Uno::Collections::IEnumerator__Fuse_Behavior::Current(::uPtr< ::uObject*>(enum_123));

        if (::uIs(b, Clicked__typeof()))
        {
            return ::uCast< Clicked*>(b, Clicked__typeof());
        }
    }

    Clicked* c = Clicked__New_1(NULL);
    ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(n->Behaviors()), (::app::Fuse::Behavior*)c);
    return c;
}

Clicked* Clicked__New_1(::uStatic* __this)
{
    Clicked* inst = (Clicked*)::uAllocObject(sizeof(Clicked), Clicked__typeof());
    inst->_ObjInit_3();
    return inst;
}

void Clicked__OnClicked(Clicked* __this, ::app::Fuse::Input::PointerEventArgs* args, int clickCount)
{
    __this->Pulse();

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Handler, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Handler)->InvokeVoid< ::uObject*, ::app::Fuse::Gestures::ClickedArgs*>((::uObject*)__this, ::app::Fuse::Gestures::ClickedArgs__New_3(NULL, args, __this->Node()));
    }
}

void Clicked__OnRooted(Clicked* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Gestures::ClickerTrigger__OnRooted(__this, elm);
    ::uPtr< ::app::Fuse::Gestures::Clicker*>(__this->Clicker)->add_ClickedEvent(::uNewDelegateNonVirt(::app::Fuse::Gestures::ClickerEventHandler__typeof(), (const void*)Clicked__OnClicked, __this));
}

void Clicked__OnUnrooted(Clicked* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Fuse::Gestures::Clicker*>(__this->Clicker)->remove_ClickedEvent(::uNewDelegateNonVirt(::app::Fuse::Gestures::ClickerEventHandler__typeof(), (const void*)Clicked__OnClicked, __this));
    ::app::Fuse::Gestures::ClickerTrigger__OnUnrooted(__this, elm);
}

void Clicked__remove_Handler(Clicked* __this, ::uDelegate* value)
{
    __this->Handler = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->Handler, (::uDelegate*)value), ::app::Fuse::Gestures::ClickedHandler__typeof());
}

void Clicked__RemoveHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler)
{
    Clicked* c = Clicked__GetClicked(NULL, node);
    ::uPtr< Clicked*>(c)->remove_Handler(handler);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ClickedArgs__uType* ClickedArgs__typeof()
{
    static ::uStaticStrong<ClickedArgs__uType*> type;
    if (type != NULL) return type;

    type = (ClickedArgs__uType*)::uAllocClassType(sizeof(ClickedArgs__uType), "Fuse.Gestures.ClickedArgs", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Input::CustomPointerEventArgs__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::IScriptEvent__typeof(), offsetof(ClickedArgs__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", ClickedArgs__New_3, 0, true, ClickedArgs__typeof(), ::app::Fuse::Input::PointerEventArgs__typeof(), ::app::Fuse::Node__typeof()));

    ::uRegisterType(type);
    return type;
}

void ClickedArgs___ObjInit_4(ClickedArgs* __this, ::app::Fuse::Input::PointerEventArgs* args, ::app::Fuse::Node* node)
{
    ::app::Fuse::Input::CustomPointerEventArgs___ObjInit_3(__this, args, node);
}

ClickedArgs* ClickedArgs__New_3(::uStatic* __this, ::app::Fuse::Input::PointerEventArgs* args, ::app::Fuse::Node* node)
{
    ClickedArgs* inst = (ClickedArgs*)::uAllocObject(sizeof(ClickedArgs), ClickedArgs__typeof());
    inst->_ObjInit_4(args, node);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ClickedHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Gestures.ClickedHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::Gestures::ClickedArgs__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::PropertyHandle*> Clicker___clickerProperty;

Clicker__uType* Clicker__typeof()
{
    static ::uStaticStrong<Clicker__uType*> type;
    if (type != NULL) return type;

    type = (Clicker__uType*)::uAllocClassType(sizeof(Clicker__uType), "Fuse.Gestures.Clicker", false, 0, 6, 0);

    type->SetStrongRefs(
        "_lastArgs", offsetof(Clicker, _lastArgs),
        "_node", offsetof(Clicker, _node),
        "ClickedEvent", offsetof(Clicker, ClickedEvent),
        "LongPressedEvent", offsetof(Clicker, LongPressedEvent),
        "PressingEvent", offsetof(Clicker, PressingEvent),
        "TappedEvent", offsetof(Clicker, TappedEvent));

    type->SetFields(17,
        ::uNewField("_attachCount", NULL, offsetof(Clicker, _attachCount), ::app::Uno::Int__typeof()),
        ::uNewField("_clickCount", NULL, offsetof(Clicker, _clickCount), ::app::Uno::Int__typeof()),
        ::uNewField("_clickerProperty", &Clicker___clickerProperty, 0, ::app::Fuse::PropertyHandle__typeof()),
        ::uNewField("_down", NULL, offsetof(Clicker, _down), ::app::Uno::Int__typeof()),
        ::uNewField("_hasUpdate", NULL, offsetof(Clicker, _hasUpdate), ::app::Uno::Bool__typeof()),
        ::uNewField("_hovering", NULL, offsetof(Clicker, _hovering), ::app::Uno::Bool__typeof()),
        ::uNewField("_lastArgs", NULL, offsetof(Clicker, _lastArgs), ::app::Fuse::Input::PointerEventArgs__typeof()),
        ::uNewField("_lastUpTime", NULL, offsetof(Clicker, _lastUpTime), ::app::Uno::Double__typeof()),
        ::uNewField("_longPressTimeout", NULL, offsetof(Clicker, _longPressTimeout), ::app::Uno::Float__typeof()),
        ::uNewField("_maxDoubleInterval", NULL, offsetof(Clicker, _maxDoubleInterval), ::app::Uno::Float__typeof()),
        ::uNewField("_maxTapDistanceMoved", NULL, offsetof(Clicker, _maxTapDistanceMoved), ::app::Uno::Float__typeof()),
        ::uNewField("_maxTapTimeHeld", NULL, offsetof(Clicker, _maxTapTimeHeld), ::app::Uno::Float__typeof()),
        ::uNewField("_maybeTap", NULL, offsetof(Clicker, _maybeTap), ::app::Uno::Bool__typeof()),
        ::uNewField("_node", NULL, offsetof(Clicker, _node), ::app::Fuse::Node__typeof()),
        ::uNewField("_startCoord", NULL, offsetof(Clicker, _startCoord), ::app::Uno::Float2__typeof()),
        ::uNewField("_startTime", NULL, offsetof(Clicker, _startTime), ::app::Uno::Double__typeof()),
        ::uNewField("_tapCount", NULL, offsetof(Clicker, _tapCount), ::app::Uno::Int__typeof()));

    type->SetFunctions(20,
        ::uNewFunctionVoid("add_ClickedEvent", Clicker__add_ClickedEvent, 0, false, ::app::Fuse::Gestures::ClickerEventHandler__typeof()),
        ::uNewFunctionVoid("add_LongPressedEvent", Clicker__add_LongPressedEvent, 0, false, ::app::Fuse::Gestures::ClickerEventHandler__typeof()),
        ::uNewFunctionVoid("add_PressingEvent", Clicker__add_PressingEvent, 0, false, ::app::Fuse::Gestures::ClickerEventHandler__typeof()),
        ::uNewFunctionVoid("add_TappedEvent", Clicker__add_TappedEvent, 0, false, ::app::Fuse::Gestures::ClickerEventHandler__typeof()),
        ::uNewFunction("AttachClicker", Clicker__AttachClicker, 0, true, Clicker__typeof(), ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("Detach", Clicker__Detach, 0, false),
        ::uNewFunctionVoid("DoneCapture", Clicker__DoneCapture, 0, false),
        ::uNewFunction("NeedCapture", Clicker__NeedCapture, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("OnLostCapture", Clicker__OnLostCapture, 0, false),
        ::uNewFunctionVoid("OnPointerMoved", Clicker__OnPointerMoved, 0, false, ::uObject__typeof(), ::app::Fuse::Input::PointerMovedArgs__typeof()),
        ::uNewFunctionVoid("OnPointerPressed", Clicker__OnPointerPressed, 0, false, ::uObject__typeof(), ::app::Fuse::Input::PointerPressedArgs__typeof()),
        ::uNewFunctionVoid("OnPointerReleased", Clicker__OnPointerReleased, 0, false, ::uObject__typeof(), ::app::Fuse::Input::PointerReleasedArgs__typeof()),
        ::uNewFunctionVoid("OnRooted", Clicker__OnRooted, 0, false),
        ::uNewFunctionVoid("OnUnrooted", Clicker__OnUnrooted, 0, false),
        ::uNewFunctionVoid("OnUpdate", Clicker__OnUpdate, 0, false, ::uObject__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("ReleaseUpdate", Clicker__ReleaseUpdate, 0, false),
        ::uNewFunctionVoid("remove_ClickedEvent", Clicker__remove_ClickedEvent, 0, false, ::app::Fuse::Gestures::ClickerEventHandler__typeof()),
        ::uNewFunctionVoid("remove_LongPressedEvent", Clicker__remove_LongPressedEvent, 0, false, ::app::Fuse::Gestures::ClickerEventHandler__typeof()),
        ::uNewFunctionVoid("remove_PressingEvent", Clicker__remove_PressingEvent, 0, false, ::app::Fuse::Gestures::ClickerEventHandler__typeof()),
        ::uNewFunctionVoid("remove_TappedEvent", Clicker__remove_TappedEvent, 0, false, ::app::Fuse::Gestures::ClickerEventHandler__typeof()));

    ::uRegisterType(type);
    return type;
}

void Clicker___ObjInit(Clicker* __this, ::app::Fuse::Node* node)
{
    __this->_maxTapDistanceMoved = 25.0f;
    __this->_maxTapTimeHeld = 0.3f;
    __this->_maxDoubleInterval = 0.3f;
    __this->_longPressTimeout = 0.5f;
    __this->_attachCount = 1;
    __this->_down = -1;
    __this->_node = node;
}

void Clicker___TypeInit(::uStatic* __this)
{
    Clicker___clickerProperty = ::app::Fuse::Properties__CreateHandle(NULL);
}

void Clicker__add_ClickedEvent(Clicker* __this, ::uDelegate* value)
{
    __this->ClickedEvent = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ClickedEvent, (::uDelegate*)value), ::app::Fuse::Gestures::ClickerEventHandler__typeof());
}

void Clicker__add_LongPressedEvent(Clicker* __this, ::uDelegate* value)
{
    __this->LongPressedEvent = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->LongPressedEvent, (::uDelegate*)value), ::app::Fuse::Gestures::ClickerEventHandler__typeof());
}

void Clicker__add_PressingEvent(Clicker* __this, ::uDelegate* value)
{
    __this->PressingEvent = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->PressingEvent, (::uDelegate*)value), ::app::Fuse::Gestures::ClickerEventHandler__typeof());
}

void Clicker__add_TappedEvent(Clicker* __this, ::uDelegate* value)
{
    __this->TappedEvent = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->TappedEvent, (::uDelegate*)value), ::app::Fuse::Gestures::ClickerEventHandler__typeof());
}

Clicker* Clicker__AttachClicker(::uStatic* __this, ::app::Fuse::Node* elm)
{
    ::uObject* v;

    if (::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(elm)->Properties())->TryGet(Clicker___clickerProperty, &v))
    {
        Clicker* c = ::uAs< Clicker*>(v, Clicker__typeof());
        ::uPtr< Clicker*>(c)->_attachCount++;
        return c;
    }

    Clicker* nc = Clicker__New_1(NULL, elm);
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(elm)->Properties())->Set(Clicker___clickerProperty, (::uObject*)nc);
    ::uPtr< Clicker*>(nc)->OnRooted();
    return nc;
}

void Clicker__Detach(Clicker* __this)
{
    __this->_attachCount--;

    if (__this->_attachCount == 0)
    {
        __this->OnUnrooted();
        ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(__this->_node)->Properties())->Clear(Clicker___clickerProperty);
    }
}

void Clicker__DoneCapture(Clicker* __this)
{
    __this->_down = -1;
    __this->ReleaseUpdate();

    if (__this->_hovering && ::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->PressingEvent, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->PressingEvent)->InvokeVoid< ::app::Fuse::Input::PointerEventArgs*, int>(__this->_lastArgs, 0);
    }

    __this->_hovering = false;
}

bool Clicker__NeedCapture(Clicker* __this)
{
    return (((__this->_maybeTap && ::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->TappedEvent, NULL)) || ::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ClickedEvent, NULL)) || ::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->LongPressedEvent, NULL)) || ::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->PressingEvent, NULL);
}

Clicker* Clicker__New_1(::uStatic* __this, ::app::Fuse::Node* node)
{
    Clicker* inst = (Clicker*)::uAllocObject(sizeof(Clicker), Clicker__typeof());
    inst->_ObjInit(node);
    return inst;
}

void Clicker__OnLostCapture(Clicker* __this)
{
    __this->DoneCapture();
    __this->_tapCount = 0;
    __this->_clickCount = 0;
}

void Clicker__OnPointerMoved(Clicker* __this, ::uObject* sender, ::app::Fuse::Input::PointerMovedArgs* args)
{
    if (__this->_down != ::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->PointIndex())
    {
        return;
    }

    float distance = ::app::Uno::Vector__Length(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->WindowPoint(), __this->_startCoord));
    double deltaTime = ::app::Fuse::Time__get_FrameTime(NULL) - __this->_startTime;

    if ((distance > __this->_maxTapDistanceMoved) || (deltaTime > (double)__this->_maxTapTimeHeld))
    {
        __this->_maybeTap = false;
    }

    if (!__this->NeedCapture())
    {
        ::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->ReleaseSoftCapture((::uObject*)__this);
        __this->DoneCapture();
    }

    bool hoverNow = ::uPtr< ::app::Fuse::Node*>(__this->_node)->GetHitWindowPoint(args->WindowPoint()) != NULL;

    if (hoverNow != __this->_hovering)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->PressingEvent, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->PressingEvent)->InvokeVoid< ::app::Fuse::Input::PointerEventArgs*, int>((::app::Fuse::Input::PointerEventArgs*)args, hoverNow ? 1 : 0);
        }

        __this->_hovering = hoverNow;
    }

    __this->_lastArgs = (::app::Fuse::Input::PointerEventArgs*)args;
}

void Clicker__OnPointerPressed(Clicker* __this, ::uObject* sender, ::app::Fuse::Input::PointerPressedArgs* args)
{
    if ((__this->_down != -1) || !::uPtr< ::app::Fuse::Input::PointerPressedArgs*>(args)->TrySoftCapture((::uObject*)__this, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Clicker__OnLostCapture, __this), NULL))
    {
        return;
    }

    double delta = ::app::Fuse::Time__get_FrameTime(NULL) - __this->_lastUpTime;

    if (delta > (double)__this->_maxDoubleInterval)
    {
        __this->_tapCount = 0;
        __this->_clickCount = 0;
    }

    __this->_down = ::uPtr< ::app::Fuse::Input::PointerPressedArgs*>(args)->PointIndex();
    __this->_startCoord = args->WindowPoint();
    __this->_startTime = ::app::Fuse::Time__get_FrameTime(NULL);
    __this->_maybeTap = true;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->LongPressedEvent, NULL))
    {
        __this->_hasUpdate = true;
        ::uPtr< ::app::Fuse::Node*>(__this->_node)->add_Update(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)Clicker__OnUpdate, __this));
    }

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->PressingEvent, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->PressingEvent)->InvokeVoid< ::app::Fuse::Input::PointerEventArgs*, int>((::app::Fuse::Input::PointerEventArgs*)args, 1);
    }

    __this->_lastArgs = (::app::Fuse::Input::PointerEventArgs*)args;
    __this->_hovering = true;
}

void Clicker__OnPointerReleased(Clicker* __this, ::uObject* sender, ::app::Fuse::Input::PointerReleasedArgs* args)
{
    if (__this->_down != ::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(args)->PointIndex())
    {
        return;
    }

    ::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(args)->ReleaseSoftCapture((::uObject*)__this);
    double deltaTime = ::app::Fuse::Time__get_FrameTime(NULL) - __this->_startTime;

    if (__this->_maybeTap && (deltaTime <= (double)__this->_maxTapTimeHeld))
    {
        __this->_tapCount++;

        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->TappedEvent, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->TappedEvent)->InvokeVoid< ::app::Fuse::Input::PointerEventArgs*, int>((::app::Fuse::Input::PointerEventArgs*)args, __this->_tapCount);
        }
    }
    else
    {
        __this->_tapCount = 0;
    }

    if (::uPtr< ::app::Fuse::Node*>(__this->_node)->GetHitWindowPoint(args->WindowPoint()) != NULL)
    {
        __this->_clickCount++;

        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ClickedEvent, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->ClickedEvent)->InvokeVoid< ::app::Fuse::Input::PointerEventArgs*, int>((::app::Fuse::Input::PointerEventArgs*)args, __this->_clickCount);
        }
    }
    else
    {
        __this->_clickCount = 0;
    }

    if (__this->_hovering && ::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->PressingEvent, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->PressingEvent)->InvokeVoid< ::app::Fuse::Input::PointerEventArgs*, int>((::app::Fuse::Input::PointerEventArgs*)args, 0);
    }

    __this->_hovering = false;
    __this->DoneCapture();
    __this->_lastUpTime = ::app::Fuse::Time__get_FrameTime(NULL);
    __this->_lastArgs = (::app::Fuse::Input::PointerEventArgs*)args;
}

void Clicker__OnRooted(Clicker* __this)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*>(::app::Fuse::Input::Pointer__get_Pressed(NULL))->AddHandler(__this->_node, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerPressedHandler__typeof(), (const void*)Clicker__OnPointerPressed, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*>(::app::Fuse::Input::Pointer__get_Released(NULL))->AddHandler(__this->_node, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerReleasedHandler__typeof(), (const void*)Clicker__OnPointerReleased, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs*>(::app::Fuse::Input::Pointer__get_Moved(NULL))->AddHandler(__this->_node, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerMovedHandler__typeof(), (const void*)Clicker__OnPointerMoved, __this));
}

void Clicker__OnUnrooted(Clicker* __this)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*>(::app::Fuse::Input::Pointer__get_Pressed(NULL))->RemoveHandler(__this->_node, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerPressedHandler__typeof(), (const void*)Clicker__OnPointerPressed, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*>(::app::Fuse::Input::Pointer__get_Released(NULL))->RemoveHandler(__this->_node, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerReleasedHandler__typeof(), (const void*)Clicker__OnPointerReleased, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs*>(::app::Fuse::Input::Pointer__get_Moved(NULL))->AddHandler(__this->_node, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerMovedHandler__typeof(), (const void*)Clicker__OnPointerMoved, __this));
}

void Clicker__OnUpdate(Clicker* __this, ::uObject* s, ::uObject* a)
{
    double elapsed = ::app::Fuse::Time__get_FrameTime(NULL) - __this->_startTime;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->LongPressedEvent, NULL) && (elapsed > (double)__this->_longPressTimeout))
    {
        ::uPtr< ::uDelegate*>(__this->LongPressedEvent)->InvokeVoid< ::app::Fuse::Input::PointerEventArgs*, int>(__this->_lastArgs, 0);
        ::app::Fuse::Input::Pointer__ReleaseSoftCapture(NULL, __this->_down, (::uObject*)__this);
        __this->DoneCapture();
    }
}

void Clicker__ReleaseUpdate(Clicker* __this)
{
    if (__this->_hasUpdate)
    {
        ::uPtr< ::app::Fuse::Node*>(__this->_node)->remove_Update(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)Clicker__OnUpdate, __this));
        __this->_hasUpdate = false;
    }
}

void Clicker__remove_ClickedEvent(Clicker* __this, ::uDelegate* value)
{
    __this->ClickedEvent = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->ClickedEvent, (::uDelegate*)value), ::app::Fuse::Gestures::ClickerEventHandler__typeof());
}

void Clicker__remove_LongPressedEvent(Clicker* __this, ::uDelegate* value)
{
    __this->LongPressedEvent = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->LongPressedEvent, (::uDelegate*)value), ::app::Fuse::Gestures::ClickerEventHandler__typeof());
}

void Clicker__remove_PressingEvent(Clicker* __this, ::uDelegate* value)
{
    __this->PressingEvent = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->PressingEvent, (::uDelegate*)value), ::app::Fuse::Gestures::ClickerEventHandler__typeof());
}

void Clicker__remove_TappedEvent(Clicker* __this, ::uDelegate* value)
{
    __this->TappedEvent = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->TappedEvent, (::uDelegate*)value), ::app::Fuse::Gestures::ClickerEventHandler__typeof());
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ClickerEventHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Gestures.ClickerEventHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Input::PointerEventArgs__typeof(),
        ::app::Uno::Int__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ClickerTrigger__uType* ClickerTrigger__typeof()
{
    static ::uStaticStrong<ClickerTrigger__uType*> type;
    if (type != NULL) return type;

    type = (ClickerTrigger__uType*)::uAllocClassType(sizeof(ClickerTrigger__uType), "Fuse.Gestures.ClickerTrigger", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Triggers::Trigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ClickerTrigger__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ClickerTrigger__OnUnrooted;

    type->SetStrongRefs(
        "Clicker", offsetof(ClickerTrigger, Clicker));

    type->SetFields(1,
        ::uNewField("Clicker", NULL, offsetof(ClickerTrigger, Clicker), ::app::Fuse::Gestures::Clicker__typeof()));

    ::uRegisterType(type);
    return type;
}

void ClickerTrigger___ObjInit_2(ClickerTrigger* __this)
{
    ::app::Fuse::Triggers::Trigger___ObjInit_1(__this);
}

void ClickerTrigger__OnRooted(ClickerTrigger* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Triggers::Trigger__OnRooted(__this, elm);
    __this->Clicker = ::app::Fuse::Gestures::Clicker__AttachClicker(NULL, elm);
}

void ClickerTrigger__OnUnrooted(ClickerTrigger* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Fuse::Gestures::Clicker*>(__this->Clicker)->Detach();
    __this->Clicker = NULL;
    ::app::Fuse::Triggers::Trigger__OnUnrooted(__this, elm);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DegreeSpan__uType* DegreeSpan__typeof()
{
    static ::uStaticStrong<DegreeSpan__uType*> type;
    if (type != NULL) return type;

    type = (DegreeSpan__uType*)::uAllocClassType(sizeof(DegreeSpan__uType), "Fuse.Gestures.DegreeSpan", false, 0, 0, 0);

    type->SetFields(2,
        ::uNewField("_a", NULL, offsetof(DegreeSpan, _a), ::app::Uno::Float__typeof()),
        ::uNewField("_b", NULL, offsetof(DegreeSpan, _b), ::app::Uno::Float__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("IsWithinBounds", DegreeSpan__IsWithinBounds, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction(".ctor", DegreeSpan__New_1, 0, true, DegreeSpan__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof()));

    ::uRegisterType(type);
    return type;
}

void DegreeSpan___ObjInit(DegreeSpan* __this, float a, float b)
{
    __this->_a = a;
    __this->_b = b;
}

bool DegreeSpan__IsWithinBounds(DegreeSpan* __this, float x)
{
    float angle1 = __this->_a;
    float angle2 = __this->_b;
    float rAngle = ::app::Uno::Math__Mod_1(NULL, ::app::Uno::Math__Mod_1(NULL, angle2 - angle1, 360.0f) + 360.0f, 360.0f);

    if (rAngle >= 180.0f)
    {
        float a = angle1;
        angle1 = angle2;
        angle2 = a;
    }

    if (angle1 <= angle2)
    {
        return (x >= angle1) && (x <= angle2);
    }
    else
    {
        return (x >= angle2) || (x <= angle2);
    }
}

DegreeSpan* DegreeSpan__New_1(::uStatic* __this, float a, float b)
{
    DegreeSpan* inst = (DegreeSpan*)::uAllocObject(sizeof(DegreeSpan), DegreeSpan__typeof());
    inst->_ObjInit(a, b);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DoubleClicked__uType* DoubleClicked__typeof()
{
    static ::uStaticStrong<DoubleClicked__uType*> type;
    if (type != NULL) return type;

    type = (DoubleClicked__uType*)::uAllocClassType(sizeof(DoubleClicked__uType), "Fuse.Gestures.DoubleClicked", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Gestures::ClickerTrigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DoubleClicked__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DoubleClicked__OnUnrooted;

    type->SetStrongRefs(
        "Handler", offsetof(DoubleClicked, Handler));

    type->SetFunctions(4,
        ::uNewFunctionVoid("add_Handler", DoubleClicked__add_Handler, 0, false, ::app::Fuse::Gestures::ClickedHandler__typeof()),
        ::uNewFunction(".ctor", DoubleClicked__New_1, 0, true, DoubleClicked__typeof()),
        ::uNewFunctionVoid("OnClicked", DoubleClicked__OnClicked, 0, false, ::app::Fuse::Input::PointerEventArgs__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("remove_Handler", DoubleClicked__remove_Handler, 0, false, ::app::Fuse::Gestures::ClickedHandler__typeof()));

    ::uRegisterType(type);
    return type;
}

void DoubleClicked___ObjInit_3(DoubleClicked* __this)
{
    ::app::Fuse::Gestures::ClickerTrigger___ObjInit_2(__this);
}

void DoubleClicked__add_Handler(DoubleClicked* __this, ::uDelegate* value)
{
    __this->Handler = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->Handler, (::uDelegate*)value), ::app::Fuse::Gestures::ClickedHandler__typeof());
}

DoubleClicked* DoubleClicked__New_1(::uStatic* __this)
{
    DoubleClicked* inst = (DoubleClicked*)::uAllocObject(sizeof(DoubleClicked), DoubleClicked__typeof());
    inst->_ObjInit_3();
    return inst;
}

void DoubleClicked__OnClicked(DoubleClicked* __this, ::app::Fuse::Input::PointerEventArgs* args, int clickCount)
{
    if (clickCount != 2)
    {
        return;
    }

    __this->Pulse();

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Handler, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Handler)->InvokeVoid< ::uObject*, ::app::Fuse::Gestures::ClickedArgs*>((::uObject*)__this, ::app::Fuse::Gestures::ClickedArgs__New_3(NULL, args, __this->Node()));
    }
}

void DoubleClicked__OnRooted(DoubleClicked* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Gestures::ClickerTrigger__OnRooted(__this, elm);
    ::uPtr< ::app::Fuse::Gestures::Clicker*>(__this->Clicker)->add_ClickedEvent(::uNewDelegateNonVirt(::app::Fuse::Gestures::ClickerEventHandler__typeof(), (const void*)DoubleClicked__OnClicked, __this));
}

void DoubleClicked__OnUnrooted(DoubleClicked* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Fuse::Gestures::Clicker*>(__this->Clicker)->remove_ClickedEvent(::uNewDelegateNonVirt(::app::Fuse::Gestures::ClickerEventHandler__typeof(), (const void*)DoubleClicked__OnClicked, __this));
    ::app::Fuse::Gestures::ClickerTrigger__OnUnrooted(__this, elm);
}

void DoubleClicked__remove_Handler(DoubleClicked* __this, ::uDelegate* value)
{
    __this->Handler = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->Handler, (::uDelegate*)value), ::app::Fuse::Gestures::ClickedHandler__typeof());
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DoubleTapped__uType* DoubleTapped__typeof()
{
    static ::uStaticStrong<DoubleTapped__uType*> type;
    if (type != NULL) return type;

    type = (DoubleTapped__uType*)::uAllocClassType(sizeof(DoubleTapped__uType), "Fuse.Gestures.DoubleTapped", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Gestures::ClickerTrigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DoubleTapped__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DoubleTapped__OnUnrooted;

    type->SetStrongRefs(
        "Handler", offsetof(DoubleTapped, Handler));

    type->SetFunctions(5,
        ::uNewFunctionVoid("add_Handler", DoubleTapped__add_Handler, 0, false, ::app::Fuse::Gestures::DoubleTappedHandler__typeof()),
        ::uNewFunction(".ctor", DoubleTapped__New_1, 0, true, DoubleTapped__typeof()),
        ::uNewFunction(".ctor", DoubleTapped__New_2, 0, true, DoubleTapped__typeof(), ::app::Fuse::Gestures::DoubleTappedHandler__typeof()),
        ::uNewFunctionVoid("OnTapped", DoubleTapped__OnTapped, 0, false, ::app::Fuse::Input::PointerEventArgs__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("remove_Handler", DoubleTapped__remove_Handler, 0, false, ::app::Fuse::Gestures::DoubleTappedHandler__typeof()));

    ::uRegisterType(type);
    return type;
}

void DoubleTapped___ObjInit_3(DoubleTapped* __this)
{
    ::app::Fuse::Gestures::ClickerTrigger___ObjInit_2(__this);
}

void DoubleTapped___ObjInit_4(DoubleTapped* __this, ::uDelegate* handler)
{
    ::app::Fuse::Gestures::ClickerTrigger___ObjInit_2(__this);
    __this->add_Handler(handler);
}

void DoubleTapped__add_Handler(DoubleTapped* __this, ::uDelegate* value)
{
    __this->Handler = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->Handler, (::uDelegate*)value), ::app::Fuse::Gestures::DoubleTappedHandler__typeof());
}

DoubleTapped* DoubleTapped__New_1(::uStatic* __this)
{
    DoubleTapped* inst = (DoubleTapped*)::uAllocObject(sizeof(DoubleTapped), DoubleTapped__typeof());
    inst->_ObjInit_3();
    return inst;
}

DoubleTapped* DoubleTapped__New_2(::uStatic* __this, ::uDelegate* handler)
{
    DoubleTapped* inst = (DoubleTapped*)::uAllocObject(sizeof(DoubleTapped), DoubleTapped__typeof());
    inst->_ObjInit_4(handler);
    return inst;
}

void DoubleTapped__OnRooted(DoubleTapped* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Gestures::ClickerTrigger__OnRooted(__this, elm);
    ::uPtr< ::app::Fuse::Gestures::Clicker*>(__this->Clicker)->add_TappedEvent(::uNewDelegateNonVirt(::app::Fuse::Gestures::ClickerEventHandler__typeof(), (const void*)DoubleTapped__OnTapped, __this));
}

void DoubleTapped__OnTapped(DoubleTapped* __this, ::app::Fuse::Input::PointerEventArgs* args, int tapCount)
{
    if (tapCount != 2)
    {
        return;
    }

    __this->Pulse();

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Handler, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Handler)->InvokeVoid< ::uObject*, ::app::Fuse::Gestures::DoubleTappedArgs*>((::uObject*)__this, ::app::Fuse::Gestures::DoubleTappedArgs__New_3(NULL, args, __this->Node()));
    }
}

void DoubleTapped__OnUnrooted(DoubleTapped* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Fuse::Gestures::Clicker*>(__this->Clicker)->remove_TappedEvent(::uNewDelegateNonVirt(::app::Fuse::Gestures::ClickerEventHandler__typeof(), (const void*)DoubleTapped__OnTapped, __this));
    ::app::Fuse::Gestures::ClickerTrigger__OnUnrooted(__this, elm);
}

void DoubleTapped__remove_Handler(DoubleTapped* __this, ::uDelegate* value)
{
    __this->Handler = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->Handler, (::uDelegate*)value), ::app::Fuse::Gestures::DoubleTappedHandler__typeof());
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DoubleTappedArgs__uType* DoubleTappedArgs__typeof()
{
    static ::uStaticStrong<DoubleTappedArgs__uType*> type;
    if (type != NULL) return type;

    type = (DoubleTappedArgs__uType*)::uAllocClassType(sizeof(DoubleTappedArgs__uType), "Fuse.Gestures.DoubleTappedArgs", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Input::CustomPointerEventArgs__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::IScriptEvent__typeof(), offsetof(DoubleTappedArgs__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", DoubleTappedArgs__New_3, 0, true, DoubleTappedArgs__typeof(), ::app::Fuse::Input::PointerEventArgs__typeof(), ::app::Fuse::Node__typeof()));

    ::uRegisterType(type);
    return type;
}

void DoubleTappedArgs___ObjInit_4(DoubleTappedArgs* __this, ::app::Fuse::Input::PointerEventArgs* args, ::app::Fuse::Node* node)
{
    ::app::Fuse::Input::CustomPointerEventArgs___ObjInit_3(__this, args, node);
}

DoubleTappedArgs* DoubleTappedArgs__New_3(::uStatic* __this, ::app::Fuse::Input::PointerEventArgs* args, ::app::Fuse::Node* node)
{
    DoubleTappedArgs* inst = (DoubleTappedArgs*)::uAllocObject(sizeof(DoubleTappedArgs), DoubleTappedArgs__typeof());
    inst->_ObjInit_4(args, node);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* DoubleTappedHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Gestures.DoubleTappedHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::Gestures::DoubleTappedArgs__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* Edge__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Gestures.Edge", ::app::Uno::Int__typeof(), 4);

    type->SetLiterals(
        "Left", 0LL,
        "Right", 1LL,
        "Top", 2LL,
        "Bottom", 3LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EdgeSwipeAnimation__uType* EdgeSwipeAnimation__typeof()
{
    static ::uStaticStrong<EdgeSwipeAnimation__uType*> type;
    if (type != NULL) return type;

    type = (EdgeSwipeAnimation__uType*)::uAllocClassType(sizeof(EdgeSwipeAnimation__uType), "Fuse.Gestures.EdgeSwipeAnimation", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Triggers::Trigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))EdgeSwipeAnimation__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))EdgeSwipeAnimation__OnUnrooted;

    type->SetStrongRefs(
        "_swiper", offsetof(EdgeSwipeAnimation, _swiper));

    type->SetFields(1,
        ::uNewField("_swiper", NULL, offsetof(EdgeSwipeAnimation, _swiper), ::app::Fuse::Gestures::Internal::EdgeSwiper__typeof()));

    type->SetFunctions(11,
        ::uNewFunctionVoid("Disable", EdgeSwipeAnimation__Disable, 0, false),
        ::uNewFunctionVoid("Enable", EdgeSwipeAnimation__Enable, 0, false),
        ::uNewFunction("get_Edge", EdgeSwipeAnimation__get_Edge, 0, false, ::app::Fuse::Gestures::Edge__typeof()),
        ::uNewFunction("get_EdgeThreshold", EdgeSwipeAnimation__get_EdgeThreshold, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsEnabled", EdgeSwipeAnimation__get_IsEnabled, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Target", EdgeSwipeAnimation__get_Target, 0, false, ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction(".ctor", EdgeSwipeAnimation__New_1, 0, true, EdgeSwipeAnimation__typeof()),
        ::uNewFunctionVoid("OnProgressChanged", EdgeSwipeAnimation__OnProgressChanged_1, 0, false, ::uObject__typeof(), ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("set_Edge", EdgeSwipeAnimation__set_Edge, 0, false, ::app::Fuse::Gestures::Edge__typeof()),
        ::uNewFunctionVoid("set_EdgeThreshold", EdgeSwipeAnimation__set_EdgeThreshold, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Target", EdgeSwipeAnimation__set_Target, 0, false, ::app::Fuse::Elements::Element__typeof()));

    ::uRegisterType(type);
    return type;
}

void EdgeSwipeAnimation___ObjInit_2(EdgeSwipeAnimation* __this)
{
    __this->_swiper = ::app::Fuse::Gestures::Internal::EdgeSwiper__New_1(NULL);
    ::app::Fuse::Triggers::Trigger___ObjInit_1(__this);
}

void EdgeSwipeAnimation__Disable(EdgeSwipeAnimation* __this)
{
    ::uPtr< ::app::Fuse::Gestures::Internal::EdgeSwiper*>(__this->_swiper)->Disable();
}

void EdgeSwipeAnimation__Enable(EdgeSwipeAnimation* __this)
{
    ::uPtr< ::app::Fuse::Gestures::Internal::EdgeSwiper*>(__this->_swiper)->Enable();
}

int EdgeSwipeAnimation__get_Edge(EdgeSwipeAnimation* __this)
{
    return ::uPtr< ::app::Fuse::Gestures::Internal::EdgeSwiper*>(__this->_swiper)->Edge();
}

float EdgeSwipeAnimation__get_EdgeThreshold(EdgeSwipeAnimation* __this)
{
    return ::uPtr< ::app::Fuse::Gestures::Internal::EdgeSwiper*>(__this->_swiper)->EdgeThreshold();
}

bool EdgeSwipeAnimation__get_IsEnabled(EdgeSwipeAnimation* __this)
{
    return ::uPtr< ::app::Fuse::Gestures::Internal::EdgeSwiper*>(__this->_swiper)->IsEnabled();
}

::app::Fuse::Elements::Element* EdgeSwipeAnimation__get_Target(EdgeSwipeAnimation* __this)
{
    return ::uPtr< ::app::Fuse::Gestures::Internal::EdgeSwiper*>(__this->_swiper)->Target();
}

EdgeSwipeAnimation* EdgeSwipeAnimation__New_1(::uStatic* __this)
{
    EdgeSwipeAnimation* inst = (EdgeSwipeAnimation*)::uAllocObject(sizeof(EdgeSwipeAnimation), EdgeSwipeAnimation__typeof());
    inst->_ObjInit_2();
    return inst;
}

void EdgeSwipeAnimation__OnProgressChanged_1(EdgeSwipeAnimation* __this, ::uObject* s, double progress)
{
    __this->Seek(progress);
}

void EdgeSwipeAnimation__OnRooted(EdgeSwipeAnimation* __this, ::app::Fuse::Node* e)
{
    ::app::Fuse::Elements::Element* element = ::uAs< ::app::Fuse::Elements::Element*>(e, ::app::Fuse::Elements::Element__typeof());

    if (element == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("EdgeSwipeAnimation must be attached to an Element")));
    }

    ::app::Fuse::Triggers::Trigger__OnRooted(__this, e);
    ::uPtr< ::app::Fuse::Gestures::Internal::EdgeSwiper*>(__this->_swiper)->Rooted(element);
    ::uPtr< ::app::Fuse::Gestures::Internal::EdgeSwiper*>(__this->_swiper)->Seek(0.0);
    ::uPtr< ::app::Fuse::Gestures::Internal::EdgeSwiper*>(__this->_swiper)->add_ProgressChanged(::uNewDelegateNonVirt(::app::Uno::Action__object__double__typeof(), (const void*)EdgeSwipeAnimation__OnProgressChanged_1, __this));
}

void EdgeSwipeAnimation__OnUnrooted(EdgeSwipeAnimation* __this, ::app::Fuse::Node* e)
{
    ::uPtr< ::app::Fuse::Gestures::Internal::EdgeSwiper*>(__this->_swiper)->Unrooted();
    ::uPtr< ::app::Fuse::Gestures::Internal::EdgeSwiper*>(__this->_swiper)->remove_ProgressChanged(::uNewDelegateNonVirt(::app::Uno::Action__object__double__typeof(), (const void*)EdgeSwipeAnimation__OnProgressChanged_1, __this));
    ::app::Fuse::Triggers::Trigger__OnUnrooted(__this, e);
}

void EdgeSwipeAnimation__set_Edge(EdgeSwipeAnimation* __this, int value)
{
    ::uPtr< ::app::Fuse::Gestures::Internal::EdgeSwiper*>(__this->_swiper)->Edge(value);
}

void EdgeSwipeAnimation__set_EdgeThreshold(EdgeSwipeAnimation* __this, float value)
{
    ::uPtr< ::app::Fuse::Gestures::Internal::EdgeSwiper*>(__this->_swiper)->EdgeThreshold(value);
}

void EdgeSwipeAnimation__set_Target(EdgeSwipeAnimation* __this, ::app::Fuse::Elements::Element* value)
{
    ::uPtr< ::app::Fuse::Gestures::Internal::EdgeSwiper*>(__this->_swiper)->Target(value);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeepFocusInView__uType* KeepFocusInView__typeof()
{
    static ::uStaticStrong<KeepFocusInView__uType*> type;
    if (type != NULL) return type;

    type = (KeepFocusInView__uType*)::uAllocClassType(sizeof(KeepFocusInView__uType), "Fuse.Gestures.KeepFocusInView", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Gestures::KeepInViewCommon__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))KeepFocusInView__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))KeepFocusInView__OnUnrooted;

    type->SetFunctions(3,
        ::uNewFunction(".ctor", KeepFocusInView__New_2, 0, true, KeepFocusInView__typeof()),
        ::uNewFunctionVoid("OnGotFocus", KeepFocusInView__OnGotFocus, 0, false, ::uObject__typeof(), ::app::Fuse::Input::FocusGainedArgs__typeof()),
        ::uNewFunctionVoid("OnLostFocus", KeepFocusInView__OnLostFocus, 0, false, ::uObject__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeepFocusInView___ObjInit_2(KeepFocusInView* __this)
{
    ::app::Fuse::Gestures::KeepInViewCommon___ObjInit_1(__this);
}

KeepFocusInView* KeepFocusInView__New_2(::uStatic* __this)
{
    KeepFocusInView* inst = (KeepFocusInView*)::uAllocObject(sizeof(KeepFocusInView), KeepFocusInView__typeof());
    inst->_ObjInit_2();
    return inst;
}

void KeepFocusInView__OnGotFocus(KeepFocusInView* __this, ::uObject* s, ::app::Fuse::Input::FocusGainedArgs* fga)
{
    __this->Target(::app::Fuse::Input::Focus__get_FocusedNode(NULL));
}

void KeepFocusInView__OnLostFocus(KeepFocusInView* __this, ::uObject* s, ::uObject* a)
{
    __this->Target(NULL);
}

void KeepFocusInView__OnRooted(KeepFocusInView* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Gestures::KeepInViewCommon__OnRooted(__this, elm);
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->AddHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)KeepFocusInView__OnGotFocus, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->AddHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)KeepFocusInView__OnLostFocus, __this));
}

void KeepFocusInView__OnUnrooted(KeepFocusInView* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->RemoveHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)KeepFocusInView__OnGotFocus, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->RemoveHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)KeepFocusInView__OnLostFocus, __this));
    ::app::Fuse::Gestures::KeepInViewCommon__OnUnrooted(__this, elm);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeepInView__uType* KeepInView__typeof()
{
    static ::uStaticStrong<KeepInView__uType*> type;
    if (type != NULL) return type;

    type = (KeepInView__uType*)::uAllocClassType(sizeof(KeepInView__uType), "Fuse.Gestures.KeepInView", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Gestures::KeepInViewCommon__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", KeepInView__New_2, 0, true, KeepInView__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeepInView___ObjInit_2(KeepInView* __this)
{
    ::app::Fuse::Gestures::KeepInViewCommon___ObjInit_1(__this);
}

KeepInView* KeepInView__New_2(::uStatic* __this)
{
    KeepInView* inst = (KeepInView*)::uAllocObject(sizeof(KeepInView), KeepInView__typeof());
    inst->_ObjInit_2();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeepInViewCommon__uType* KeepInViewCommon__typeof()
{
    static ::uStaticStrong<KeepInViewCommon__uType*> type;
    if (type != NULL) return type;

    type = (KeepInViewCommon__uType*)::uAllocClassType(sizeof(KeepInViewCommon__uType), "Fuse.Gestures.KeepInViewCommon", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Behavior__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))KeepInViewCommon__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))KeepInViewCommon__OnUnrooted;

    type->SetStrongRefs(
        "_rootElement", offsetof(KeepInViewCommon, _rootElement),
        "_target", offsetof(KeepInViewCommon, _target));

    type->SetFields(3,
        ::uNewField("_attached", NULL, offsetof(KeepInViewCommon, _attached), ::app::Uno::Bool__typeof()),
        ::uNewField("_rootElement", NULL, offsetof(KeepInViewCommon, _rootElement), ::app::Fuse::Elements::Element__typeof()),
        ::uNewField("_target", NULL, offsetof(KeepInViewCommon, _target), ::app::Fuse::Elements::Element__typeof()));

    type->SetFunctions(5,
        ::uNewFunctionVoid("AttachElement", KeepInViewCommon__AttachElement, 0, false),
        ::uNewFunction("get_Target", KeepInViewCommon__get_Target, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("ReleaseElement", KeepInViewCommon__ReleaseElement, 0, false),
        ::uNewFunctionVoid("set_Target", KeepInViewCommon__set_Target, 0, false, ::app::Fuse::Node__typeof()),
        ::uNewFunctionVoid("Update", KeepInViewCommon__Update, 0, false, ::uObject__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void KeepInViewCommon___ObjInit_1(KeepInViewCommon* __this)
{
    ::app::Fuse::Behavior___ObjInit(__this);
}

void KeepInViewCommon__AttachElement(KeepInViewCommon* __this)
{
    if (__this->_target == NULL)
    {
        return;
    }

    ::uPtr< ::app::Fuse::Elements::Element*>(__this->_target)->add_Placed(::uNewDelegateNonVirt(::app::Fuse::PlacedHandler__typeof(), (const void*)KeepInViewCommon__Update, __this));
    __this->_attached = true;
    __this->Update(NULL, NULL);
}

::app::Fuse::Node* KeepInViewCommon__get_Target(KeepInViewCommon* __this)
{
    return (::app::Fuse::Node*)__this->_target;
}

KeepInViewCommon* KeepInViewCommon__New_1(::uStatic* __this)
{
    KeepInViewCommon* inst = (KeepInViewCommon*)::uAllocObject(sizeof(KeepInViewCommon), KeepInViewCommon__typeof());
    inst->_ObjInit_1();
    return inst;
}

void KeepInViewCommon__OnRooted(KeepInViewCommon* __this, ::app::Fuse::Node* elm)
{
    __this->_rootElement = ::uAs< ::app::Fuse::Elements::Element*>(elm, ::app::Fuse::Elements::Element__typeof());

    if (__this->_rootElement != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::Element*>(__this->_rootElement)->add_Placed(::uNewDelegateNonVirt(::app::Fuse::PlacedHandler__typeof(), (const void*)KeepInViewCommon__Update, __this));
        __this->AttachElement();
    }
}

void KeepInViewCommon__OnUnrooted(KeepInViewCommon* __this, ::app::Fuse::Node* elm)
{
    if (__this->_rootElement != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::Element*>(__this->_rootElement)->remove_Placed(::uNewDelegateNonVirt(::app::Fuse::PlacedHandler__typeof(), (const void*)KeepInViewCommon__Update, __this));
        __this->ReleaseElement();
    }
}

void KeepInViewCommon__ReleaseElement(KeepInViewCommon* __this)
{
    if (!__this->_attached)
    {
        return;
    }

    ::uPtr< ::app::Fuse::Elements::Element*>(__this->_target)->remove_Placed(::uNewDelegateNonVirt(::app::Fuse::PlacedHandler__typeof(), (const void*)KeepInViewCommon__Update, __this));
    __this->_attached = false;
}

void KeepInViewCommon__set_Target(KeepInViewCommon* __this, ::app::Fuse::Node* value)
{
    __this->ReleaseElement();
    ::app::Fuse::Node* v = value;

    while (v != NULL)
    {
        __this->_target = ::uAs< ::app::Fuse::Elements::Element*>(v, ::app::Fuse::Elements::Element__typeof());

        if (__this->_target != NULL)
        {
            break;
        }

        v = ::uPtr< ::app::Fuse::Node*>(v)->Parent();
    }

    __this->AttachElement();
}

void KeepInViewCommon__Update(KeepInViewCommon* __this, ::uObject* s, ::uObject* a)
{
    if (__this->_target != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::Element*>(__this->_target)->BringIntoView();
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LongPressed__uType* LongPressed__typeof()
{
    static ::uStaticStrong<LongPressed__uType*> type;
    if (type != NULL) return type;

    type = (LongPressed__uType*)::uAllocClassType(sizeof(LongPressed__uType), "Fuse.Gestures.LongPressed", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Gestures::ClickerTrigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))LongPressed__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))LongPressed__OnUnrooted;

    type->SetStrongRefs(
        "Handler", offsetof(LongPressed, Handler));

    type->SetFunctions(4,
        ::uNewFunctionVoid("add_Handler", LongPressed__add_Handler, 0, false, ::app::Fuse::Gestures::LongPressedHandler__typeof()),
        ::uNewFunction(".ctor", LongPressed__New_1, 0, true, LongPressed__typeof()),
        ::uNewFunctionVoid("OnLongPressed", LongPressed__OnLongPressed, 0, false, ::app::Fuse::Input::PointerEventArgs__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("remove_Handler", LongPressed__remove_Handler, 0, false, ::app::Fuse::Gestures::LongPressedHandler__typeof()));

    ::uRegisterType(type);
    return type;
}

void LongPressed___ObjInit_3(LongPressed* __this)
{
    ::app::Fuse::Gestures::ClickerTrigger___ObjInit_2(__this);
}

void LongPressed__add_Handler(LongPressed* __this, ::uDelegate* value)
{
    __this->Handler = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->Handler, (::uDelegate*)value), ::app::Fuse::Gestures::LongPressedHandler__typeof());
}

LongPressed* LongPressed__New_1(::uStatic* __this)
{
    LongPressed* inst = (LongPressed*)::uAllocObject(sizeof(LongPressed), LongPressed__typeof());
    inst->_ObjInit_3();
    return inst;
}

void LongPressed__OnLongPressed(LongPressed* __this, ::app::Fuse::Input::PointerEventArgs* args, int count)
{
    __this->Pulse();

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Handler, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Handler)->InvokeVoid< ::uObject*, ::app::Fuse::Gestures::LongPressedArgs*>((::uObject*)__this, ::app::Fuse::Gestures::LongPressedArgs__New_3(NULL, args, __this->Node()));
    }
}

void LongPressed__OnRooted(LongPressed* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Gestures::ClickerTrigger__OnRooted(__this, elm);
    ::uPtr< ::app::Fuse::Gestures::Clicker*>(__this->Clicker)->add_LongPressedEvent(::uNewDelegateNonVirt(::app::Fuse::Gestures::ClickerEventHandler__typeof(), (const void*)LongPressed__OnLongPressed, __this));
}

void LongPressed__OnUnrooted(LongPressed* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Fuse::Gestures::Clicker*>(__this->Clicker)->remove_LongPressedEvent(::uNewDelegateNonVirt(::app::Fuse::Gestures::ClickerEventHandler__typeof(), (const void*)LongPressed__OnLongPressed, __this));
    ::app::Fuse::Gestures::ClickerTrigger__OnUnrooted(__this, elm);
}

void LongPressed__remove_Handler(LongPressed* __this, ::uDelegate* value)
{
    __this->Handler = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->Handler, (::uDelegate*)value), ::app::Fuse::Gestures::LongPressedHandler__typeof());
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LongPressedArgs__uType* LongPressedArgs__typeof()
{
    static ::uStaticStrong<LongPressedArgs__uType*> type;
    if (type != NULL) return type;

    type = (LongPressedArgs__uType*)::uAllocClassType(sizeof(LongPressedArgs__uType), "Fuse.Gestures.LongPressedArgs", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Input::CustomPointerEventArgs__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::IScriptEvent__typeof(), offsetof(LongPressedArgs__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", LongPressedArgs__New_3, 0, true, LongPressedArgs__typeof(), ::app::Fuse::Input::PointerEventArgs__typeof(), ::app::Fuse::Node__typeof()));

    ::uRegisterType(type);
    return type;
}

void LongPressedArgs___ObjInit_4(LongPressedArgs* __this, ::app::Fuse::Input::PointerEventArgs* args, ::app::Fuse::Node* node)
{
    ::app::Fuse::Input::CustomPointerEventArgs___ObjInit_3(__this, args, node);
}

LongPressedArgs* LongPressedArgs__New_3(::uStatic* __this, ::app::Fuse::Input::PointerEventArgs* args, ::app::Fuse::Node* node)
{
    LongPressedArgs* inst = (LongPressedArgs*)::uAllocObject(sizeof(LongPressedArgs), LongPressedArgs__typeof());
    inst->_ObjInit_4(args, node);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* LongPressedHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Gestures.LongPressedHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::Gestures::LongPressedArgs__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Gestures\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ScrollableGoto__uType* ScrollableGoto__typeof()
{
    static ::uStaticStrong<ScrollableGoto__uType*> type;
    if (type != NULL) return type;

    type = (ScrollableGoto__uType*)::uAllocClassType(sizeof(ScrollableGoto__uType), "Fuse.Gestures.ScrollableGoto", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))ScrollableGoto__Perform;

    type->SetStrongRefs(
        "_Target", offsetof(ScrollableGoto, _Target));

    type->SetFields(4,
        ::uNewField("_hasPosition", NULL, offsetof(ScrollableGoto, _hasPosition), ::app::Uno::Bool__typeof()),
        ::uNewField("_hasRelativePosition", NULL, offsetof(ScrollableGoto, _hasRelativePosition), ::app::Uno::Bool__typeof()),
        ::uNewField("_position", NULL, offsetof(ScrollableGoto, _position), ::app::Uno::Float2__typeof()),
        ::uNewField("_relativePosition", NULL, offsetof(ScrollableGoto, _relativePosition), ::app::Uno::Float2__typeof()));

    type->SetFunctions(7,
        ::uNewFunction("get_Position", ScrollableGoto__get_Position, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_RelativePosition", ScrollableGoto__get_RelativePosition, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Target", ScrollableGoto__get_Target, 0, false, ::app::Fuse::Controls::ScrollView__typeof()),
        ::uNewFunction(".ctor", ScrollableGoto__New_1, 0, true, ScrollableGoto__typeof()),
        ::uNewFunctionVoid("set_Position", ScrollableGoto__set_Position, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_RelativePosition", ScrollableGoto__set_RelativePosition, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("set_Target", ScrollableGoto__set_Target, 0, false, ::app::Fuse::Controls::ScrollView__typeof()));

    ::uRegisterType(type);
    return type;
}

void ScrollableGoto___ObjInit_1(ScrollableGoto* __this)
{
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);
}

::app::Uno::Float2 ScrollableGoto__get_Position(ScrollableGoto* __this)
{
    return __this->_position;
}

::app::Uno::Float2 ScrollableGoto__get_RelativePosition(ScrollableGoto* __this)
{
    return __this->_relativePosition;
}

::app::Fuse::Controls::ScrollView* ScrollableGoto__get_Target(ScrollableGoto* __this)
{
    return __this->_Target;
}

ScrollableGoto* ScrollableGoto__New_1(::uStatic* __this)
{
    ScrollableGoto* inst = (ScrollableGoto*)::uAllocObject(sizeof(ScrollableGoto), ScrollableGoto__typeof());
    inst->_ObjInit_1();
    return inst;
}

void ScrollableGoto__Perform(ScrollableGoto* __this, ::app::Fuse::Node* target)
{
    if (__this->Target() == NULL)
    {
        return;
    }

    if (__this->_hasRelativePosition)
    {
        ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->Target())->Goto(::app::Uno::Float2__op_Addition_2(NULL, ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->Target())->MinScroll(), ::app::Uno::Float2__op_Multiply_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->Target())->MaxScroll(), ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->Target())->MinScroll()), __this->_relativePosition)));
    }
    else if (__this->_hasPosition)
    {
        ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->Target())->Goto(__this->_position);
    }
}

void ScrollableGoto__set_Position(ScrollableGoto* __this, ::app::Uno::Float2 value)
{
    __this->_position = value;
    __this->_hasPosition = true;
}

void ScrollableGoto__set_RelativePosition(ScrollableGoto* __this, ::app::Uno::Float2 value)
{
    __this->_relativePosition = value;
    __this->_hasRelativePosition = true;
}

void ScrollableGoto__set_Target(ScrollableGoto* __this, ::app::Fuse::Controls::ScrollView* value)
{
    __this->_Target = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Gestures\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* ScrollDirections__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Gestures.ScrollDirections", ::app::Uno::Int__typeof(), 8);

    type->SetLiterals(
        "Left", 1LL,
        "Right", 2LL,
        "Up", 4LL,
        "Down", 8LL,
        "Horizontal", 3LL,
        "Vertical", 12LL,
        "Both", 15LL,
        "All", 15LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Gestures\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::Gestures::SwipeGestureHelper*> Scroller___horizontalGesture;
::uStaticStrong< ::app::Fuse::Gestures::SwipeGestureHelper*> Scroller___verticalGesture;

Scroller__uType* Scroller__typeof()
{
    static ::uStaticStrong<Scroller__uType*> type;
    if (type != NULL) return type;

    type = (Scroller__uType*)::uAllocClassType(sizeof(Scroller__uType), "Fuse.Gestures.Scroller", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::Behavior__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))Scroller__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))Scroller__OnUnrooted;

    type->SetStrongRefs(
        "_pendingBringIntoView", offsetof(Scroller, _pendingBringIntoView),
        "_region", offsetof(Scroller, _region),
        "_scrollable", offsetof(Scroller, _scrollable),
        "_velocity", offsetof(Scroller, _velocity));

    type->SetFields(18,
        ::uNewField("_delayStart", NULL, offsetof(Scroller, _delayStart), ::app::Uno::Bool__typeof()),
        ::uNewField("_down", NULL, offsetof(Scroller, _down), ::app::Uno::Int__typeof()),
        ::uNewField("_hasUpdated", NULL, offsetof(Scroller, _hasUpdated), ::app::Uno::Bool__typeof()),
        ::uNewField("_horizontalGesture", &Scroller___horizontalGesture, 0, ::app::Fuse::Gestures::SwipeGestureHelper__typeof()),
        ::uNewField("_isHardCapture", NULL, offsetof(Scroller, _isHardCapture), ::app::Uno::Bool__typeof()),
        ::uNewField("_pendingBringIntoView", NULL, offsetof(Scroller, _pendingBringIntoView), ::app::Fuse::Node__typeof()),
        ::uNewField("_pointerListening", NULL, offsetof(Scroller, _pointerListening), ::app::Uno::Bool__typeof()),
        ::uNewField("_pointerPos", NULL, offsetof(Scroller, _pointerPos), ::app::Uno::Float2__typeof()),
        ::uNewField("_prevPos", NULL, offsetof(Scroller, _prevPos), ::app::Uno::Float2__typeof()),
        ::uNewField("_prevTime", NULL, offsetof(Scroller, _prevTime), ::app::Uno::Double__typeof()),
        ::uNewField("_region", NULL, offsetof(Scroller, _region), ::app::Experimental::Physics::BoundedRegion2D__typeof()),
        ::uNewField("_scrollable", NULL, offsetof(Scroller, _scrollable), ::app::Fuse::Controls::ScrollView__typeof()),
        ::uNewField("_softCaptureCurrent", NULL, offsetof(Scroller, _softCaptureCurrent), ::app::Uno::Float2__typeof()),
        ::uNewField("_softCaptureStart", NULL, offsetof(Scroller, _softCaptureStart), ::app::Uno::Float2__typeof()),
        ::uNewField("_startPos", NULL, offsetof(Scroller, _startPos), ::app::Uno::Float2__typeof()),
        ::uNewField("_userScroll", NULL, offsetof(Scroller, _userScroll), ::app::Uno::Bool__typeof()),
        ::uNewField("_velocity", NULL, offsetof(Scroller, _velocity), ::app::Experimental::Physics::PointerVelocity__float2__typeof()),
        ::uNewField("_verticalGesture", &Scroller___verticalGesture, 0, ::app::Fuse::Gestures::SwipeGestureHelper__typeof()));

    type->SetFunctions(23,
        ::uNewFunctionVoid("CheckLimits", Scroller__CheckLimits, 0, false),
        ::uNewFunctionVoid("CheckNeedUpdated", Scroller__CheckNeedUpdated, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("FromWindow", Scroller__FromWindow, 0, false, ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_DelayStart", Scroller__get_DelayStart, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_OverflowExtent", Scroller__get_OverflowExtent, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_TestTargetDestination", Scroller__get_TestTargetDestination, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_UserScroll", Scroller__get_UserScroll, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("Goto", Scroller__Goto, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction("HardCapture", Scroller__HardCapture, 0, false, ::app::Uno::Bool__typeof(), ::app::Fuse::Input::PointerEventArgs__typeof()),
        ::uNewFunctionVoid("MoveUser", Scroller__MoveUser, 0, false, ::app::Fuse::Gestures::Scroller_MoveUserFlags__typeof()),
        ::uNewFunction(".ctor", Scroller__New_1, 0, true, Scroller__typeof()),
        ::uNewFunctionVoid("OnLostCapture", Scroller__OnLostCapture, 0, false),
        ::uNewFunctionVoid("OnPointerMoved", Scroller__OnPointerMoved, 0, false, ::uObject__typeof(), ::app::Fuse::Input::PointerMovedArgs__typeof()),
        ::uNewFunctionVoid("OnPointerPressed", Scroller__OnPointerPressed, 0, false, ::uObject__typeof(), ::app::Fuse::Input::PointerPressedArgs__typeof()),
        ::uNewFunctionVoid("OnPointerReleased", Scroller__OnPointerReleased, 0, false, ::uObject__typeof(), ::app::Fuse::Input::PointerReleasedArgs__typeof()),
        ::uNewFunctionVoid("OnRequestBringIntoView", Scroller__OnRequestBringIntoView, 0, false, ::uObject__typeof(), ::app::Fuse::RequestBringIntoViewArgs__typeof()),
        ::uNewFunctionVoid("OnUpdated", Scroller__OnUpdated, 0, false),
        ::uNewFunctionVoid("PerformBringIntoView", Scroller__PerformBringIntoView, 0, false),
        ::uNewFunctionVoid("set_DelayStart", Scroller__set_DelayStart, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_UserScroll", Scroller__set_UserScroll, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("SetScrollPosition", Scroller__SetScrollPosition, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("UpdatePointerEvents", Scroller__UpdatePointerEvents, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("UpdateScrollMax", Scroller__UpdateScrollMax, 0, false));

    ::uRegisterType(type);
    return type;
}

void Scroller___ObjInit_1(Scroller* __this)
{
    __this->_region = (::uObject*)::app::Experimental::Physics::BasicBoundedRegion2D__CreatePoints(NULL);
    __this->_velocity = ::app::Experimental::Physics::PointerVelocity__float2__New_1(NULL);
    __this->_delayStart = true;
    __this->_userScroll = true;
    __this->_down = -1;
    ::app::Fuse::Behavior___ObjInit(__this);
}

void Scroller___TypeInit(::uStatic* __this)
{
    ::uArray* array_123;
    ::uArray* array_124;
    Scroller___horizontalGesture = ::app::Fuse::Gestures::SwipeGestureHelper__New_1(NULL, 10.0f, (array_123 = ::uNewArray(::app::Fuse::Gestures::DegreeSpan__typeof(), 2), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::app::Fuse::Gestures::DegreeSpan*>(0) = ::app::Fuse::Gestures::DegreeSpan__New_1(NULL, 45.0f, 135.0f), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::app::Fuse::Gestures::DegreeSpan*>(1) = ::app::Fuse::Gestures::DegreeSpan__New_1(NULL, -45.0f, -135.0f), array_123));
    Scroller___verticalGesture = ::app::Fuse::Gestures::SwipeGestureHelper__New_1(NULL, 10.0f, (array_124 = ::uNewArray(::app::Fuse::Gestures::DegreeSpan__typeof(), 3), ::uPtr< ::uArray*>(array_124)->ItemStrong< ::app::Fuse::Gestures::DegreeSpan*>(0) = ::app::Fuse::Gestures::DegreeSpan__New_1(NULL, -45.0f, 45.0f), ::uPtr< ::uArray*>(array_124)->ItemStrong< ::app::Fuse::Gestures::DegreeSpan*>(1) = ::app::Fuse::Gestures::DegreeSpan__New_1(NULL, -135.0f, -180.0f), ::uPtr< ::uArray*>(array_124)->ItemStrong< ::app::Fuse::Gestures::DegreeSpan*>(2) = ::app::Fuse::Gestures::DegreeSpan__New_1(NULL, 135.0f, 180.0f), array_124));
}

void Scroller__CheckLimits(Scroller* __this)
{
    __this->UpdateScrollMax();

    if (::app::Experimental::Physics::Simulation::IsStatic(::uPtr< ::uObject*>(__this->_region)))
    {
        ::app::Experimental::Physics::BoundedRegion2D::EndUser(::uPtr< ::uObject*>(__this->_region), ::app::Uno::Float2__New_1(NULL, 0.0f));
    }

    __this->CheckNeedUpdated(false);
}

void Scroller__CheckNeedUpdated(Scroller* __this, bool off)
{
    bool needUpdated = !::app::Experimental::Physics::Simulation::IsStatic(::uPtr< ::uObject*>(__this->_region));

    if (needUpdated == __this->_hasUpdated)
    {
        return;
    }

    if (needUpdated)
    {
        ::app::Fuse::UpdateManager__AddAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Scroller__OnUpdated, __this), 0);
        __this->_hasUpdated = true;
    }
    else if (off)
    {
        ::app::Fuse::UpdateManager__RemoveAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Scroller__OnUpdated, __this), 0);
        __this->_hasUpdated = false;
    }
}

::app::Uno::Float2 Scroller__FromWindow(Scroller* __this, ::app::Uno::Float2 p)
{
    return ::uPtr< ::app::Fuse::Node*>(::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->Parent())->WindowToLocal(p);
}

bool Scroller__get_DelayStart(Scroller* __this)
{
    return __this->_delayStart;
}

::app::Uno::Float2 Scroller__get_OverflowExtent(Scroller* __this)
{
    return ::app::Experimental::Physics::BoundedRegion2D::OverflowExtent(::uPtr< ::uObject*>(__this->_region));
}

::app::Uno::Float2 Scroller__get_TestTargetDestination(Scroller* __this)
{
    return ::app::Experimental::Physics::BoundedRegion2D::Destination(::uPtr< ::uObject*>(__this->_region));
}

bool Scroller__get_UserScroll(Scroller* __this)
{
    return __this->_userScroll;
}

void Scroller__Goto(Scroller* __this, ::app::Uno::Float2 position)
{
    if (__this->_scrollable == NULL)
    {
        return;
    }

    __this->UpdateScrollMax();
    ::app::Experimental::Physics::MotionSimulation__float2::Position(::uPtr< ::uObject*>(__this->_region), ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->ScrollPosition());
    ::app::Experimental::Physics::BoundedRegion2D::MoveTo(::uPtr< ::uObject*>(__this->_region), position);
    __this->CheckNeedUpdated(false);
}

bool Scroller__HardCapture(Scroller* __this, ::app::Fuse::Input::PointerEventArgs* args)
{
    __this->_isHardCapture = ::uPtr< ::app::Fuse::Input::PointerEventArgs*>(args)->TryHardCapture((::uObject*)__this, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Scroller__OnLostCapture, __this), NULL);

    if (!__this->_isHardCapture)
    {
        __this->OnLostCapture();
    }

    return __this->_isHardCapture;
}

void Scroller__MoveUser(Scroller* __this, int flags)
{
    ::app::Uno::Float2 diff = ::app::Uno::Float2__op_Subtraction_2(NULL, __this->FromWindow(__this->_prevPos), __this->FromWindow(__this->_pointerPos));

    if ((flags & 2) == 2)
    {
        diff = ::app::Uno::Float2__New_1(NULL, 0.0f);
    }

    __this->_prevPos = __this->_pointerPos;
    double t = ::app::Uno::Diagnostics::Clock__GetSeconds(NULL);
    double elapsed = t - __this->_prevTime;
    __this->_prevTime = t;

    if ((flags & 1) == 1)
    {
        ::app::Experimental::Physics::MotionSimulation__float2::Position(::uPtr< ::uObject*>(__this->_region), ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->ScrollPosition());
        ::app::Experimental::Physics::BoundedRegion2D::StepUser(::uPtr< ::uObject*>(__this->_region), diff);
    }

    ::uPtr< ::app::Experimental::Physics::PointerVelocity__float2*>(__this->_velocity)->AddSample(__this->FromWindow(__this->_pointerPos), (float)elapsed, !__this->_isHardCapture);
}

Scroller* Scroller__New_1(::uStatic* __this)
{
    Scroller* inst = (Scroller*)::uAllocObject(sizeof(Scroller), Scroller__typeof());
    inst->_ObjInit_1();
    return inst;
}

void Scroller__OnLostCapture(Scroller* __this)
{
    __this->_down = -1;
    ::app::Experimental::Physics::BoundedRegion2D::EndUser(::uPtr< ::uObject*>(__this->_region), ::app::Uno::Float2__New_1(NULL, 0.0f));
    ::app::Fuse::Input::Pointer__ReleaseAllCaptures(NULL, (::uObject*)__this);
    __this->CheckNeedUpdated(false);
}

void Scroller__OnPointerMoved(Scroller* __this, ::uObject* sender, ::app::Fuse::Input::PointerMovedArgs* args)
{
    if (__this->_down != ::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->PointIndex())
    {
        return;
    }

    if (!::app::Fuse::Input::Pointer__IsPressed_1(NULL, __this->_down))
    {
        __this->OnLostCapture();
    }

    if (!__this->_isHardCapture)
    {
        __this->_softCaptureCurrent = ::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->WindowPoint();
        ::app::Uno::Float2 diff = ::app::Uno::Float2__op_Subtraction_2(NULL, __this->_softCaptureCurrent, __this->_softCaptureStart);

        if (::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->AllowedScrollDirections() == 15)
        {
            if (::app::Uno::Vector__Length(NULL, diff) > 10.0f)
            {
                __this->HardCapture((::app::Fuse::Input::PointerEventArgs*)args);
            }
        }

        if (::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->AllowedScrollDirections() == 3)
        {
            if (::uPtr< ::app::Fuse::Gestures::SwipeGestureHelper*>(Scroller___horizontalGesture)->IsWithinBounds(diff))
            {
                __this->HardCapture((::app::Fuse::Input::PointerEventArgs*)args);
            }
        }

        if (::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->AllowedScrollDirections() == 12)
        {
            if (::uPtr< ::app::Fuse::Gestures::SwipeGestureHelper*>(Scroller___verticalGesture)->IsWithinBounds(diff))
            {
                __this->HardCapture((::app::Fuse::Input::PointerEventArgs*)args);
            }
        }
    }

    __this->_pointerPos = ::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->WindowPoint();
    __this->MoveUser((!__this->_delayStart || __this->_isHardCapture) ? 1 : 0);
}

void Scroller__OnPointerPressed(Scroller* __this, ::uObject* sender, ::app::Fuse::Input::PointerPressedArgs* args)
{
    if (__this->_down == -1)
    {
        bool captured = false;
        __this->_isHardCapture = false;

        if (::app::Uno::Vector__Length(NULL, ::app::Experimental::Physics::MotionSimulation__float2::Velocity(::uPtr< ::uObject*>(__this->_region))) > 100.0f)
        {
            captured = __this->HardCapture((::app::Fuse::Input::PointerEventArgs*)args);
        }
        else
        {
            captured = ::uPtr< ::app::Fuse::Input::PointerPressedArgs*>(args)->TrySoftCapture((::uObject*)__this, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Scroller__OnLostCapture, __this), NULL);
        }

        if (captured)
        {
            __this->_softCaptureStart = __this->_softCaptureCurrent = ::uPtr< ::app::Fuse::Input::PointerPressedArgs*>(args)->WindowPoint();
            __this->_down = args->PointIndex();
            __this->_pointerPos = args->WindowPoint();
            __this->_prevPos = __this->_startPos = __this->_pointerPos;
            __this->_prevTime = ::app::Uno::Diagnostics::Clock__GetSeconds(NULL);
            ::uPtr< ::app::Experimental::Physics::PointerVelocity__float2*>(__this->_velocity)->Reset_1(__this->FromWindow(__this->_pointerPos), ::app::Uno::Float2__New_1(NULL, 0.0f));
            ::app::Experimental::Physics::BoundedRegion2D::StartUser(::uPtr< ::uObject*>(__this->_region));
            ::app::Experimental::Physics::MotionSimulation__float2::Position(::uPtr< ::uObject*>(__this->_region), ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->ScrollPosition());
            __this->CheckNeedUpdated(false);
        }
    }
}

void Scroller__OnPointerReleased(Scroller* __this, ::uObject* sender, ::app::Fuse::Input::PointerReleasedArgs* args)
{
    if (__this->_down == ::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(args)->PointIndex())
    {
        if (__this->_delayStart && !__this->_isHardCapture)
        {
            __this->OnLostCapture();
            return;
        }

        __this->_down = -1;
        ::app::Fuse::Input::Pointer__ReleaseAllCaptures(NULL, (::uObject*)__this);

        if (::app::Experimental::Physics::BoundedRegion2D::IsUser(::uPtr< ::uObject*>(__this->_region)))
        {
            __this->_pointerPos = ::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(args)->WindowPoint();
            __this->MoveUser(3);
            ::app::Experimental::Physics::BoundedRegion2D::EndUser(::uPtr< ::uObject*>(__this->_region), ::app::Uno::Float2__op_UnaryNegation(NULL, ::uPtr< ::app::Experimental::Physics::PointerVelocity__float2*>(__this->_velocity)->CurrentVelocity()));
            __this->CheckNeedUpdated(false);
        }
    }
}

void Scroller__OnRequestBringIntoView(Scroller* __this, ::uObject* sender, ::app::Fuse::RequestBringIntoViewArgs* args)
{
    __this->_pendingBringIntoView = ::uPtr< ::app::Fuse::RequestBringIntoViewArgs*>(args)->Node();
    ::app::Fuse::UpdateManager__PerformNextFrame(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Scroller__PerformBringIntoView, __this), 0);
}

void Scroller__OnRooted(Scroller* __this, ::app::Fuse::Node* elm)
{
    __this->_scrollable = ::uAs< ::app::Fuse::Controls::ScrollView*>(elm, ::app::Fuse::Controls::ScrollView__typeof());

    if (__this->_scrollable == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Scroller can only be used in a ScrollView")));
    }

    ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->_scroller = __this;
    ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->add_RequestBringIntoView(::uNewDelegateNonVirt(::app::Fuse::RequestBringIntoViewHandler__typeof(), (const void*)Scroller__OnRequestBringIntoView, __this));
    __this->UpdatePointerEvents(false);
}

void Scroller__OnUnrooted(Scroller* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->remove_RequestBringIntoView(::uNewDelegateNonVirt(::app::Fuse::RequestBringIntoViewHandler__typeof(), (const void*)Scroller__OnRequestBringIntoView, __this));
    ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->_scroller = NULL;

    if (__this->_hasUpdated)
    {
        __this->_hasUpdated = false;
        ::app::Fuse::UpdateManager__RemoveAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Scroller__OnUpdated, __this), 0);
    }

    __this->UpdatePointerEvents(true);
    __this->_scrollable = NULL;
}

void Scroller__OnUpdated(Scroller* __this)
{
    __this->UpdateScrollMax();
    ::app::Experimental::Physics::Simulation::Update(::uPtr< ::uObject*>(__this->_region), ::app::Fuse::Time__get_FrameInterval(NULL));
    __this->SetScrollPosition(::app::Experimental::Physics::MotionSimulation__float2::Position(::uPtr< ::uObject*>(__this->_region)));
    __this->CheckNeedUpdated(true);
}

void Scroller__PerformBringIntoView(Scroller* __this)
{
    if (__this->_pendingBringIntoView == NULL)
    {
        return;
    }

    __this->Goto(::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->GetNodeScrollPosition(__this->_pendingBringIntoView));
    __this->_pendingBringIntoView = NULL;
}

void Scroller__set_DelayStart(Scroller* __this, bool value)
{
    __this->_delayStart = value;
}

void Scroller__set_UserScroll(Scroller* __this, bool value)
{
    if (__this->_userScroll != value)
    {
        __this->_userScroll = value;
        __this->UpdatePointerEvents(false);
        __this->OnLostCapture();
    }
}

void Scroller__SetScrollPosition(Scroller* __this, ::app::Uno::Float2 position)
{
    if (__this->_scrollable == NULL)
    {
        return;
    }

    if (!((::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->AllowedScrollDirections() & 3) == 3))
    {
        position.X = 0.0f;
    }

    if (!((::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->AllowedScrollDirections() & 12) == 12))
    {
        position.Y = 0.0f;
    }

    if (::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->SnapToPixels())
    {
        position = ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->InternSnap(position);
    }

    if (::app::Uno::Vector__LengthSquared(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, position, ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->ScrollPosition())) > 1e-05f)
    {
        if (!::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->SnapMinTransform())
        {
            position = ::app::Uno::Math__Max_3(NULL, ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->MinScroll(), position);
        }

        if (!::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->SnapMaxTransform())
        {
            position = ::app::Uno::Math__Min_3(NULL, ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->MaxScroll(), position);
        }

        ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->SetScrollPosition(position, (::uObject*)__this);
    }
}

void Scroller__UpdatePointerEvents(Scroller* __this, bool forceOff)
{
    bool shouldListen = (!forceOff && (__this->_scrollable != NULL)) && __this->_userScroll;

    if (shouldListen == __this->_pointerListening)
    {
        return;
    }

    if (shouldListen)
    {
        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*>(::app::Fuse::Input::Pointer__get_Pressed(NULL))->AddHandler((::app::Fuse::Node*)__this->_scrollable, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerPressedHandler__typeof(), (const void*)Scroller__OnPointerPressed, __this));
        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs*>(::app::Fuse::Input::Pointer__get_Moved(NULL))->AddHandler((::app::Fuse::Node*)__this->_scrollable, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerMovedHandler__typeof(), (const void*)Scroller__OnPointerMoved, __this));
        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*>(::app::Fuse::Input::Pointer__get_Released(NULL))->AddHandler((::app::Fuse::Node*)__this->_scrollable, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerReleasedHandler__typeof(), (const void*)Scroller__OnPointerReleased, __this));
    }
    else if (__this->_scrollable != NULL)
    {
        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*>(::app::Fuse::Input::Pointer__get_Pressed(NULL))->RemoveHandler((::app::Fuse::Node*)__this->_scrollable, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerPressedHandler__typeof(), (const void*)Scroller__OnPointerPressed, __this));
        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs*>(::app::Fuse::Input::Pointer__get_Moved(NULL))->RemoveHandler((::app::Fuse::Node*)__this->_scrollable, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerMovedHandler__typeof(), (const void*)Scroller__OnPointerMoved, __this));
        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*>(::app::Fuse::Input::Pointer__get_Released(NULL))->RemoveHandler((::app::Fuse::Node*)__this->_scrollable, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerReleasedHandler__typeof(), (const void*)Scroller__OnPointerReleased, __this));
    }
    else
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid tear-down of pointer events")));
    }

    __this->_pointerListening = shouldListen;
}

void Scroller__UpdateScrollMax(Scroller* __this)
{
    if (__this->_scrollable == NULL)
    {
        return;
    }

    ::app::Experimental::Physics::BoundedRegion2D::MaxPosition(::uPtr< ::uObject*>(__this->_region), ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->MaxScroll());
    ::app::Experimental::Physics::BoundedRegion2D::MinPosition(::uPtr< ::uObject*>(__this->_region), ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->MinScroll());
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Gestures\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* Scroller_MoveUserFlags__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Gestures.Scroller.MoveUserFlags", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "None", 0LL,
        "Started", 1LL,
        "Release", 2LL);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SwipeGestureHelper__uType* SwipeGestureHelper__typeof()
{
    static ::uStaticStrong<SwipeGestureHelper__uType*> type;
    if (type != NULL) return type;

    type = (SwipeGestureHelper__uType*)::uAllocClassType(sizeof(SwipeGestureHelper__uType), "Fuse.Gestures.SwipeGestureHelper", false, 0, 1, 0);

    type->SetStrongRefs(
        "_spans", offsetof(SwipeGestureHelper, _spans));

    type->SetFields(2,
        ::uNewField("_lengthThreshold", NULL, offsetof(SwipeGestureHelper, _lengthThreshold), ::app::Uno::Float__typeof()),
        ::uNewField("_spans", NULL, offsetof(SwipeGestureHelper, _spans), ::uGetArrayType(::app::Fuse::Gestures::DegreeSpan__typeof())));

    type->SetFunctions(2,
        ::uNewFunction("IsWithinBounds", SwipeGestureHelper__IsWithinBounds, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction(".ctor", SwipeGestureHelper__New_1, 0, true, SwipeGestureHelper__typeof(), ::app::Uno::Float__typeof(), ::uGetArrayType(::app::Fuse::Gestures::DegreeSpan__typeof())));

    ::uRegisterType(type);
    return type;
}

void SwipeGestureHelper___ObjInit(SwipeGestureHelper* __this, float lengthThreshold, ::uArray* spans)
{
    __this->_spans = spans;
    __this->_lengthThreshold = lengthThreshold;
}

bool SwipeGestureHelper__IsWithinBounds(SwipeGestureHelper* __this, ::app::Uno::Float2 vector)
{
    float length = ::app::Uno::Vector__Length(NULL, vector);

    if (length < __this->_lengthThreshold)
    {
        return false;
    }

    float angle = ::app::Uno::Math__RadiansToDegrees_1(NULL, ::app::Uno::Math__Atan2_1(NULL, vector.X, vector.Y));

    for (int i = 0; i < ::uPtr< ::uArray*>(__this->_spans)->Length(); i++)
    {
        if (::uPtr< ::app::Fuse::Gestures::DegreeSpan*>(::uPtr< ::uArray*>(__this->_spans)->Item< ::app::Fuse::Gestures::DegreeSpan*>(i))->IsWithinBounds(angle))
        {
            return true;
        }
    }

    return false;
}

SwipeGestureHelper* SwipeGestureHelper__New_1(::uStatic* __this, float lengthThreshold, ::uArray* spans)
{
    SwipeGestureHelper* inst = (SwipeGestureHelper*)::uAllocObject(sizeof(SwipeGestureHelper), SwipeGestureHelper__typeof());
    inst->_ObjInit(lengthThreshold, spans);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Tapped__uType* Tapped__typeof()
{
    static ::uStaticStrong<Tapped__uType*> type;
    if (type != NULL) return type;

    type = (Tapped__uType*)::uAllocClassType(sizeof(Tapped__uType), "Fuse.Gestures.Tapped", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Gestures::ClickerTrigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))Tapped__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))Tapped__OnUnrooted;

    type->SetStrongRefs(
        "Handler", offsetof(Tapped, Handler));

    type->SetFunctions(5,
        ::uNewFunctionVoid("add_Handler", Tapped__add_Handler, 0, false, ::app::Fuse::Gestures::TappedHandler__typeof()),
        ::uNewFunction(".ctor", Tapped__New_1, 0, true, Tapped__typeof()),
        ::uNewFunction(".ctor", Tapped__New_2, 0, true, Tapped__typeof(), ::app::Fuse::Gestures::TappedHandler__typeof()),
        ::uNewFunctionVoid("OnTapped", Tapped__OnTapped, 0, false, ::app::Fuse::Input::PointerEventArgs__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("remove_Handler", Tapped__remove_Handler, 0, false, ::app::Fuse::Gestures::TappedHandler__typeof()));

    ::uRegisterType(type);
    return type;
}

void Tapped___ObjInit_3(Tapped* __this)
{
    ::app::Fuse::Gestures::ClickerTrigger___ObjInit_2(__this);
}

void Tapped___ObjInit_4(Tapped* __this, ::uDelegate* handler)
{
    ::app::Fuse::Gestures::ClickerTrigger___ObjInit_2(__this);
    __this->add_Handler(handler);
}

void Tapped__add_Handler(Tapped* __this, ::uDelegate* value)
{
    __this->Handler = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->Handler, (::uDelegate*)value), ::app::Fuse::Gestures::TappedHandler__typeof());
}

Tapped* Tapped__New_1(::uStatic* __this)
{
    Tapped* inst = (Tapped*)::uAllocObject(sizeof(Tapped), Tapped__typeof());
    inst->_ObjInit_3();
    return inst;
}

Tapped* Tapped__New_2(::uStatic* __this, ::uDelegate* handler)
{
    Tapped* inst = (Tapped*)::uAllocObject(sizeof(Tapped), Tapped__typeof());
    inst->_ObjInit_4(handler);
    return inst;
}

void Tapped__OnRooted(Tapped* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Gestures::ClickerTrigger__OnRooted(__this, elm);
    ::uPtr< ::app::Fuse::Gestures::Clicker*>(__this->Clicker)->add_TappedEvent(::uNewDelegateNonVirt(::app::Fuse::Gestures::ClickerEventHandler__typeof(), (const void*)Tapped__OnTapped, __this));
}

void Tapped__OnTapped(Tapped* __this, ::app::Fuse::Input::PointerEventArgs* args, int tapCount)
{
    __this->Pulse();

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Handler, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Handler)->InvokeVoid< ::uObject*, ::app::Fuse::Gestures::TappedArgs*>((::uObject*)__this, ::app::Fuse::Gestures::TappedArgs__New_3(NULL, args, __this->Node()));
    }
}

void Tapped__OnUnrooted(Tapped* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Fuse::Gestures::Clicker*>(__this->Clicker)->remove_TappedEvent(::uNewDelegateNonVirt(::app::Fuse::Gestures::ClickerEventHandler__typeof(), (const void*)Tapped__OnTapped, __this));
    ::app::Fuse::Gestures::ClickerTrigger__OnUnrooted(__this, elm);
}

void Tapped__remove_Handler(Tapped* __this, ::uDelegate* value)
{
    __this->Handler = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->Handler, (::uDelegate*)value), ::app::Fuse::Gestures::TappedHandler__typeof());
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TappedArgs__uType* TappedArgs__typeof()
{
    static ::uStaticStrong<TappedArgs__uType*> type;
    if (type != NULL) return type;

    type = (TappedArgs__uType*)::uAllocClassType(sizeof(TappedArgs__uType), "Fuse.Gestures.TappedArgs", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Input::CustomPointerEventArgs__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::IScriptEvent__typeof(), offsetof(TappedArgs__uType, __interface_0));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", TappedArgs__New_3, 0, true, TappedArgs__typeof(), ::app::Fuse::Input::PointerEventArgs__typeof(), ::app::Fuse::Node__typeof()));

    ::uRegisterType(type);
    return type;
}

void TappedArgs___ObjInit_4(TappedArgs* __this, ::app::Fuse::Input::PointerEventArgs* args, ::app::Fuse::Node* node)
{
    ::app::Fuse::Input::CustomPointerEventArgs___ObjInit_3(__this, args, node);
}

TappedArgs* TappedArgs__New_3(::uStatic* __this, ::app::Fuse::Input::PointerEventArgs* args, ::app::Fuse::Node* node)
{
    TappedArgs* inst = (TappedArgs*)::uAllocObject(sizeof(TappedArgs), TappedArgs__typeof());
    inst->_ObjInit_4(args, node);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* TappedHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Gestures.TappedHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::Gestures::TappedArgs__typeof());

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Trackball__uType* Trackball__typeof()
{
    static ::uStaticStrong<Trackball__uType*> type;
    if (type != NULL) return type;

    type = (Trackball__uType*)::uAllocClassType(sizeof(Trackball__uType), "Fuse.Gestures.Trackball", false, 0, 6, 0);

    type->SetBaseType(::app::Fuse::Behavior__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))Trackball__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))Trackball__OnUnrooted;

    type->SetStrongRefs(
        "_angularVelocity", offsetof(Trackball, _angularVelocity),
        "_attractor", offsetof(Trackball, _attractor),
        "_friction", offsetof(Trackball, _friction),
        "_node", offsetof(Trackball, _node),
        "_transform", offsetof(Trackball, _transform),
        "_viewport", offsetof(Trackball, _viewport));

    type->SetFields(19,
        ::uNewField("_angularVelocity", NULL, offsetof(Trackball, _angularVelocity), ::app::Experimental::Physics::PointerVelocity__float__typeof()),
        ::uNewField("_attractor", NULL, offsetof(Trackball, _attractor), ::app::Experimental::Physics::DestinationSimulation__float4__typeof()),
        ::uNewField("_captured", NULL, offsetof(Trackball, _captured), ::app::Uno::Bool__typeof()),
        ::uNewField("_friction", NULL, offsetof(Trackball, _friction), ::app::Experimental::Physics::MotionSimulation__float__typeof()),
        ::uNewField("_frictionQ", NULL, offsetof(Trackball, _frictionQ), ::app::Uno::Float4__typeof()),
        ::uNewField("_frictionVector", NULL, offsetof(Trackball, _frictionVector), ::app::Uno::Float3__typeof()),
        ::uNewField("_hasViewport", NULL, offsetof(Trackball, _hasViewport), ::app::Uno::Bool__typeof()),
        ::uNewField("_haveUpdate", NULL, offsetof(Trackball, _haveUpdate), ::app::Uno::Bool__typeof()),
        ::uNewField("_moveMode", NULL, offsetof(Trackball, _moveMode), ::app::Fuse::Gestures::Trackball_MoveMode__typeof()),
        ::uNewField("_node", NULL, offsetof(Trackball, _node), ::app::Fuse::Node__typeof()),
        ::uNewField("_pressIndex", NULL, offsetof(Trackball, _pressIndex), ::app::Uno::Int__typeof()),
        ::uNewField("_pressInvView", NULL, offsetof(Trackball, _pressInvView), ::app::Uno::Float4x4__typeof()),
        ::uNewField("_pressLoc", NULL, offsetof(Trackball, _pressLoc), ::app::Uno::Float2__typeof()),
        ::uNewField("_pressQ", NULL, offsetof(Trackball, _pressQ), ::app::Uno::Float4__typeof()),
        ::uNewField("_prevAngular", NULL, offsetof(Trackball, _prevAngular), ::app::Uno::Float__typeof()),
        ::uNewField("_radius", NULL, offsetof(Trackball, _radius), ::app::Uno::Float__typeof()),
        ::uNewField("_soft", NULL, offsetof(Trackball, _soft), ::app::Uno::Bool__typeof()),
        ::uNewField("_transform", NULL, offsetof(Trackball, _transform), ::app::Fuse::Entities::Transform3D__typeof()),
        ::uNewField("_viewport", NULL, offsetof(Trackball, _viewport), ::app::Fuse::IViewport__typeof()));

    type->SetFunctions(11,
        ::uNewFunctionVoid("BringToFront", Trackball__BringToFront, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunctionVoid("CheckNeedUpdate", Trackball__CheckNeedUpdate, 0, false),
        ::uNewFunction("get_InverseViewProjection", Trackball__get_InverseViewProjection, 0, false, ::app::Uno::Float4x4__typeof()),
        ::uNewFunction("get_Viewport", Trackball__get_Viewport, 0, false, ::app::Fuse::IViewport__typeof()),
        ::uNewFunction(".ctor", Trackball__New_1, 0, true, Trackball__typeof()),
        ::uNewFunctionVoid("OnLostCapture", Trackball__OnLostCapture, 0, false),
        ::uNewFunctionVoid("OnPointerMoved", Trackball__OnPointerMoved, 0, false, ::uObject__typeof(), ::app::Fuse::Input::PointerMovedArgs__typeof()),
        ::uNewFunctionVoid("OnPointerPressed", Trackball__OnPointerPressed, 0, false, ::uObject__typeof(), ::app::Fuse::Input::PointerPressedArgs__typeof()),
        ::uNewFunctionVoid("OnPointerReleased", Trackball__OnPointerReleased, 0, false, ::uObject__typeof(), ::app::Fuse::Input::PointerReleasedArgs__typeof()),
        ::uNewFunctionVoid("OnUpdate", Trackball__OnUpdate, 0, false),
        ::uNewFunctionVoid("set_Viewport", Trackball__set_Viewport, 0, false, ::app::Fuse::IViewport__typeof()));

    ::uRegisterType(type);
    return type;
}

void Trackball___ObjInit_1(Trackball* __this)
{
    __this->_transform = ::app::Fuse::Entities::Transform3D__New_1(NULL);
    __this->_radius = 100.0f;
    __this->_attractor = (::uObject*)::app::Experimental::Physics::ElasticForce__float4__CreateRadians(NULL);
    __this->_friction = (::uObject*)::app::Experimental::Physics::Friction__float__CreateRadians(NULL);
    __this->_angularVelocity = ::app::Experimental::Physics::PointerVelocity__float__New_1(NULL);
    __this->_frictionVector = ::app::Uno::Float3__New_2(NULL, 1.0f, 0.0f, 0.0f);
    ::app::Fuse::Behavior___ObjInit(__this);
}

void Trackball__BringToFront(Trackball* __this, ::app::Uno::Float3 normal)
{
    ::app::Uno::Float4 old = ::uPtr< ::app::Fuse::Entities::Transform3D*>(__this->_transform)->RotationQuaternion();
    ::uPtr< ::app::Fuse::Entities::Transform3D*>(__this->_transform)->RotationQuaternion(::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 1.0f));
    ::app::Uno::Float3 ind_124 = ::app::Uno::Vector__Normalize_1(NULL, ::app::Uno::Vector__TransformNormal_1(NULL, ::app::Uno::Float3__New_2(NULL, 0.0f, 0.0f, -1.0f), __this->InverseViewProjection()));
    ::app::Uno::Float3 localForward = ::app::Uno::Float3__New_2(NULL, ind_124.X, ind_124.Y, ind_124.Z);
    ::app::Uno::Float4 lq = ::app::Uno::Quaternion__RotationBetween(NULL, normal, localForward);
    ::app::Experimental::Physics::DestinationSimulation__float4::Destination(::uPtr< ::uObject*>(__this->_attractor), lq);
    ::app::Experimental::Physics::MotionSimulation__float4::Position(::uPtr< ::uObject*>(__this->_attractor), old);
    ::uPtr< ::app::Fuse::Entities::Transform3D*>(__this->_transform)->RotationQuaternion(old);
    __this->_moveMode = 1;
    __this->CheckNeedUpdate();
}

void Trackball__CheckNeedUpdate(Trackball* __this)
{
    if (__this->_moveMode == 0)
    {
        if (__this->_haveUpdate)
        {
            ::app::Fuse::UpdateManager__RemoveAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Trackball__OnUpdate, __this), 0);
            __this->_haveUpdate = false;
        }
    }
    else if (!__this->_haveUpdate)
    {
        ::app::Fuse::UpdateManager__AddAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Trackball__OnUpdate, __this), 0);
        __this->_haveUpdate = true;
    }
}

::app::Uno::Float4x4 Trackball__get_InverseViewProjection(Trackball* __this)
{
    ::app::Uno::Float4x4 at = ::uPtr< ::app::Fuse::Node*>(__this->_node)->WorldTransform();
    ::app::Uno::Float4x4 vp = ::app::Fuse::IViewport::ViewProjectionTransform(::uPtr< ::uObject*>(__this->Viewport()));
    return ::app::Uno::Matrix__Invert_2(NULL, ::app::Uno::Matrix__Mul_8(NULL, at, vp));
}

::uObject* Trackball__get_Viewport(Trackball* __this)
{
    return __this->_viewport;
}

Trackball* Trackball__New_1(::uStatic* __this)
{
    Trackball* inst = (Trackball*)::uAllocObject(sizeof(Trackball), Trackball__typeof());
    inst->_ObjInit_1();
    return inst;
}

void Trackball__OnLostCapture(Trackball* __this)
{
    __this->_captured = false;
    ::uPtr< ::app::Fuse::Entities::Transform3D*>(__this->_transform)->RotationQuaternion(__this->_pressQ);
}

void Trackball__OnPointerMoved(Trackball* __this, ::uObject* s, ::app::Fuse::Input::PointerMovedArgs* args)
{
    if (!__this->_captured || (::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->PointIndex() != __this->_pressIndex))
    {
        return;
    }

    ::app::Uno::Float2 dir0 = ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->WindowPoint(), __this->_pressLoc);
    ::app::Uno::Float2 dir = ::app::Uno::Float2__New_2(NULL, dir0.X, -dir0.Y);
    ::app::Uno::Float3 norm = ::app::Uno::Vector__Normalize_1(NULL, ::app::Uno::Float3__New_2(NULL, -dir.Y, dir.X, 0.0f));
    float length = ::app::Uno::Vector__Length(NULL, dir);
    float angular = length / (2.0f * __this->_radius);
    ::uPtr< ::app::Experimental::Physics::PointerVelocity__float*>(__this->_angularVelocity)->AddSample(angular, ::app::Fuse::Time__get_FrameIntervalFloat(NULL), false);
    __this->_prevAngular = angular;
    ::app::Uno::Float3 ind_123 = ::app::Uno::Vector__Normalize_1(NULL, ::app::Uno::Vector__TransformNormal_1(NULL, norm, __this->_pressInvView));
    ::app::Uno::Float3 localNorm = ::app::Uno::Float3__New_2(NULL, ind_123.X, ind_123.Y, ind_123.Z);
    __this->_frictionVector = localNorm;
    ::app::Uno::Float4 q = ::app::Uno::Quaternion__RotationAxis(NULL, localNorm, angular);
    ::app::Uno::Float4 cq = ::app::Uno::Quaternion__Mul(NULL, __this->_pressQ, q);
    ::uPtr< ::app::Fuse::Entities::Transform3D*>(__this->_transform)->RotationQuaternion(cq);

    if (__this->_soft && (length > 10.0f))
    {
        if (!::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->TryHardCapture((::uObject*)__this, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Trackball__OnLostCapture, __this), NULL))
        {
            __this->OnLostCapture();
        }

        __this->_soft = false;
    }
}

void Trackball__OnPointerPressed(Trackball* __this, ::uObject* s, ::app::Fuse::Input::PointerPressedArgs* args)
{
    if (__this->_captured || !::uPtr< ::app::Fuse::Input::PointerPressedArgs*>(args)->IsPrimary())
    {
        return;
    }

    if (::uPtr< ::app::Fuse::Input::PointerPressedArgs*>(args)->TrySoftCapture((::uObject*)__this, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Trackball__OnLostCapture, __this), NULL))
    {
        __this->_moveMode = 0;
        __this->_captured = true;
        __this->_soft = true;
        __this->_pressLoc = ::uPtr< ::app::Fuse::Input::PointerPressedArgs*>(args)->WindowPoint();
        __this->_pressIndex = args->PointIndex();
        __this->_pressQ = ::uPtr< ::app::Fuse::Entities::Transform3D*>(__this->_transform)->RotationQuaternion();
        ::uPtr< ::app::Fuse::Entities::Transform3D*>(__this->_transform)->RotationQuaternion(::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 1.0f));
        ::uPtr< ::app::Experimental::Physics::PointerVelocity__float*>(__this->_angularVelocity)->Reset(0.0f);
        __this->_prevAngular = 0.0f;
        __this->_pressInvView = __this->InverseViewProjection();
        ::uPtr< ::app::Fuse::Entities::Transform3D*>(__this->_transform)->RotationQuaternion(__this->_pressQ);
    }
}

void Trackball__OnPointerReleased(Trackball* __this, ::uObject* s, ::app::Fuse::Input::PointerReleasedArgs* args)
{
    if (!__this->_captured || (::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(args)->PointIndex() != __this->_pressIndex))
    {
        return;
    }

    if (__this->_soft)
    {
        ::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(args)->ReleaseSoftCapture((::uObject*)__this);
    }
    else
    {
        args->ReleaseHardCapture((::uObject*)__this);
    }

    __this->_captured = false;
    __this->_moveMode = 2;
    ::app::Experimental::Physics::MotionSimulation__float::Position(::uPtr< ::uObject*>(__this->_friction), 0.0f);
    ::app::Experimental::Physics::MotionSimulation__float::Velocity(::uPtr< ::uObject*>(__this->_friction), ::uPtr< ::app::Experimental::Physics::PointerVelocity__float*>(__this->_angularVelocity)->CurrentVelocity());
    __this->_frictionQ = ::uPtr< ::app::Fuse::Entities::Transform3D*>(__this->_transform)->RotationQuaternion();
    __this->CheckNeedUpdate();
}

void Trackball__OnRooted(Trackball* __this, ::app::Fuse::Node* e)
{
    __this->_node = e;
    ::app::Uno::Collections::ICollection__Fuse_Transform::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(__this->_node)->Transforms()), (::app::Fuse::Transform*)__this->_transform);
    __this->_moveMode = 0;
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*>(::app::Fuse::Input::Pointer__get_Pressed(NULL))->AddHandler(e, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerPressedHandler__typeof(), (const void*)Trackball__OnPointerPressed, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*>(::app::Fuse::Input::Pointer__get_Released(NULL))->AddHandler(e, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerReleasedHandler__typeof(), (const void*)Trackball__OnPointerReleased, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs*>(::app::Fuse::Input::Pointer__get_Moved(NULL))->AddHandler(e, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerMovedHandler__typeof(), (const void*)Trackball__OnPointerMoved, __this));

    if (!__this->_hasViewport)
    {
        __this->_viewport = ::uPtr< ::app::Fuse::Node*>(e)->Viewport();
    }
}

void Trackball__OnUnrooted(Trackball* __this, ::app::Fuse::Node* e)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*>(::app::Fuse::Input::Pointer__get_Pressed(NULL))->RemoveHandler(e, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerPressedHandler__typeof(), (const void*)Trackball__OnPointerPressed, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*>(::app::Fuse::Input::Pointer__get_Released(NULL))->RemoveHandler(e, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerReleasedHandler__typeof(), (const void*)Trackball__OnPointerReleased, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs*>(::app::Fuse::Input::Pointer__get_Moved(NULL))->RemoveHandler(e, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerMovedHandler__typeof(), (const void*)Trackball__OnPointerMoved, __this));
    ::app::Uno::Collections::ICollection__Fuse_Transform::Remove(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(__this->_node)->Transforms()), (::app::Fuse::Transform*)__this->_transform);
    __this->_node = NULL;
    __this->_moveMode = 0;
    __this->CheckNeedUpdate();
}

void Trackball__OnUpdate(Trackball* __this)
{
    if (__this->_moveMode == 1)
    {
        ::app::Experimental::Physics::Simulation::Update(::uPtr< ::uObject*>(__this->_attractor), ::app::Fuse::Time__get_FrameInterval(NULL));

        if (::app::Experimental::Physics::Simulation::IsStatic(::uPtr< ::uObject*>(__this->_attractor)))
        {
            __this->_moveMode = 0;
        }

        ::uPtr< ::app::Fuse::Entities::Transform3D*>(__this->_transform)->RotationQuaternion(::app::Uno::Vector__Normalize_2(NULL, ::app::Experimental::Physics::MotionSimulation__float4::Position(::uPtr< ::uObject*>(__this->_attractor))));
    }
    else if (__this->_moveMode == 2)
    {
        ::app::Experimental::Physics::Simulation::Update(::uPtr< ::uObject*>(__this->_friction), ::app::Fuse::Time__get_FrameInterval(NULL));

        if (::app::Experimental::Physics::Simulation::IsStatic(::uPtr< ::uObject*>(__this->_friction)))
        {
            __this->_moveMode = 0;
        }

        ::app::Uno::Float4 q = ::app::Uno::Quaternion__RotationAxis(NULL, __this->_frictionVector, ::app::Experimental::Physics::MotionSimulation__float::Position(::uPtr< ::uObject*>(__this->_friction)));
        ::app::Uno::Float4 cq = ::app::Uno::Quaternion__Mul(NULL, __this->_frictionQ, q);
        ::uPtr< ::app::Fuse::Entities::Transform3D*>(__this->_transform)->RotationQuaternion(cq);
    }

    __this->CheckNeedUpdate();
}

void Trackball__set_Viewport(Trackball* __this, ::uObject* value)
{
    __this->_viewport = value;
    __this->_hasViewport = true;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* Trackball_MoveMode__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Gestures.Trackball.MoveMode", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Stop", 0LL,
        "Attraction", 1LL,
        "Friction", 2LL);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WhileClickerTrigger__uType* WhileClickerTrigger__typeof()
{
    static ::uStaticStrong<WhileClickerTrigger__uType*> type;
    if (type != NULL) return type;

    type = (WhileClickerTrigger__uType*)::uAllocClassType(sizeof(WhileClickerTrigger__uType), "Fuse.Gestures.WhileClickerTrigger", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Triggers::WhileTrigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))WhileClickerTrigger__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))WhileClickerTrigger__OnUnrooted;

    type->SetStrongRefs(
        "Clicker", offsetof(WhileClickerTrigger, Clicker));

    type->SetFields(1,
        ::uNewField("Clicker", NULL, offsetof(WhileClickerTrigger, Clicker), ::app::Fuse::Gestures::Clicker__typeof()));

    ::uRegisterType(type);
    return type;
}

void WhileClickerTrigger___ObjInit_3(WhileClickerTrigger* __this)
{
    ::app::Fuse::Triggers::WhileTrigger___ObjInit_2(__this);
}

void WhileClickerTrigger__OnRooted(WhileClickerTrigger* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Triggers::Trigger__OnRooted(__this, elm);
    __this->Clicker = ::app::Fuse::Gestures::Clicker__AttachClicker(NULL, elm);
}

void WhileClickerTrigger__OnUnrooted(WhileClickerTrigger* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Fuse::Gestures::Clicker*>(__this->Clicker)->Detach();
    __this->Clicker = NULL;
    ::app::Fuse::Triggers::Trigger__OnUnrooted(__this, elm);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WhileHovering__uType* WhileHovering__typeof()
{
    static ::uStaticStrong<WhileHovering__uType*> type;
    if (type != NULL) return type;

    type = (WhileHovering__uType*)::uAllocClassType(sizeof(WhileHovering__uType), "Fuse.Gestures.WhileHovering", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Triggers::Trigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))WhileHovering__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))WhileHovering__OnUnrooted;

    type->SetFunctions(4,
        ::uNewFunction(".ctor", WhileHovering__New_1, 0, true, WhileHovering__typeof()),
        ::uNewFunctionVoid("OnIsEnabledChanged", WhileHovering__OnIsEnabledChanged, 0, false, ::uObject__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("OnPointerEntered", WhileHovering__OnPointerEntered, 0, false, ::uObject__typeof(), ::uObject__typeof()),
        ::uNewFunctionVoid("OnPointerLeft", WhileHovering__OnPointerLeft, 0, false, ::uObject__typeof(), ::uObject__typeof()));

    ::uRegisterType(type);
    return type;
}

void WhileHovering___ObjInit_2(WhileHovering* __this)
{
    ::app::Fuse::Triggers::Trigger___ObjInit_1(__this);
}

WhileHovering* WhileHovering__New_1(::uStatic* __this)
{
    WhileHovering* inst = (WhileHovering*)::uAllocObject(sizeof(WhileHovering), WhileHovering__typeof());
    inst->_ObjInit_2();
    return inst;
}

void WhileHovering__OnIsEnabledChanged(WhileHovering* __this, ::uObject* s, ::uObject* a)
{
    if (!::uPtr< ::app::Fuse::Node*>(__this->Node())->IsEnabled())
    {
        __this->Deactivate();
    }
}

void WhileHovering__OnPointerEntered(WhileHovering* __this, ::uObject* sender, ::uObject* args)
{
    __this->Activate(NULL);
}

void WhileHovering__OnPointerLeft(WhileHovering* __this, ::uObject* sender, ::uObject* args)
{
    __this->Deactivate();
}

void WhileHovering__OnRooted(WhileHovering* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Triggers::Trigger__OnRooted(__this, elm);
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs*>(::app::Fuse::Input::Pointer__get_Entered(NULL))->AddHandler(__this->Node(), ::uNewDelegateNonVirt(::app::Fuse::Input::PointerEnteredHandler__typeof(), (const void*)WhileHovering__OnPointerEntered, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs*>(::app::Fuse::Input::Pointer__get_Left(NULL))->AddHandler(__this->Node(), ::uNewDelegateNonVirt(::app::Fuse::Input::PointerLeftHandler__typeof(), (const void*)WhileHovering__OnPointerLeft, __this));
    ::uPtr< ::app::Fuse::Node*>(__this->Node())->add_IsEnabledChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)WhileHovering__OnIsEnabledChanged, __this));
}

void WhileHovering__OnUnrooted(WhileHovering* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs*>(::app::Fuse::Input::Pointer__get_Entered(NULL))->RemoveHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerEnteredHandler__typeof(), (const void*)WhileHovering__OnPointerEntered, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs*>(::app::Fuse::Input::Pointer__get_Left(NULL))->RemoveHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerLeftHandler__typeof(), (const void*)WhileHovering__OnPointerLeft, __this));
    ::uPtr< ::app::Fuse::Node*>(__this->Node())->remove_IsEnabledChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)WhileHovering__OnIsEnabledChanged, __this));
    ::app::Fuse::Triggers::Trigger__OnUnrooted(__this, elm);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WhilePressed__uType* WhilePressed__typeof()
{
    static ::uStaticStrong<WhilePressed__uType*> type;
    if (type != NULL) return type;

    type = (WhilePressed__uType*)::uAllocClassType(sizeof(WhilePressed__uType), "Fuse.Gestures.WhilePressed", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Gestures::WhileClickerTrigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))WhilePressed__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))WhilePressed__OnUnrooted;

    type->SetFields(1,
        ::uNewField("_pointerType", NULL, offsetof(WhilePressed, _pointerType), ::app::Uno::Platform::PointerType__typeof()));

    type->SetFunctions(4,
        ::uNewFunction("get_PointerType", WhilePressed__get_PointerType, 0, false, ::app::Uno::Platform::PointerType__typeof()),
        ::uNewFunction(".ctor", WhilePressed__New_1, 0, true, WhilePressed__typeof()),
        ::uNewFunctionVoid("OnPointerPressing", WhilePressed__OnPointerPressing, 0, false, ::app::Fuse::Input::PointerEventArgs__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("set_PointerType", WhilePressed__set_PointerType, 0, false, ::app::Uno::Platform::PointerType__typeof()));

    ::uRegisterType(type);
    return type;
}

void WhilePressed___ObjInit_4(WhilePressed* __this)
{
    ::app::Fuse::Gestures::WhileClickerTrigger___ObjInit_3(__this);
}

int WhilePressed__get_PointerType(WhilePressed* __this)
{
    return __this->_pointerType;
}

WhilePressed* WhilePressed__New_1(::uStatic* __this)
{
    WhilePressed* inst = (WhilePressed*)::uAllocObject(sizeof(WhilePressed), WhilePressed__typeof());
    inst->_ObjInit_4();
    return inst;
}

void WhilePressed__OnPointerPressing(WhilePressed* __this, ::app::Fuse::Input::PointerEventArgs* args, int count)
{
    if ((__this->PointerType() == 0) || (__this->PointerType() == ::uPtr< ::app::Fuse::Input::PointerEventArgs*>(args)->PointerType()))
    {
        __this->SetActive(count > 0);
    }
}

void WhilePressed__OnRooted(WhilePressed* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Gestures::WhileClickerTrigger__OnRooted(__this, elm);
    ::uPtr< ::app::Fuse::Gestures::Clicker*>(__this->Clicker)->add_PressingEvent(::uNewDelegateNonVirt(::app::Fuse::Gestures::ClickerEventHandler__typeof(), (const void*)WhilePressed__OnPointerPressing, __this));
    __this->BypassSetActive(false);
}

void WhilePressed__OnUnrooted(WhilePressed* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Fuse::Gestures::Clicker*>(__this->Clicker)->remove_PressingEvent(::uNewDelegateNonVirt(::app::Fuse::Gestures::ClickerEventHandler__typeof(), (const void*)WhilePressed__OnPointerPressing, __this));
    ::app::Fuse::Gestures::WhileClickerTrigger__OnUnrooted(__this, elm);
}

void WhilePressed__set_PointerType(WhilePressed* __this, int value)
{
    __this->_pointerType = value;
}

}}}
