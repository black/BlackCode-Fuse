#include <app/Experimental.Physics.DestinationSimulation__float.h>
#include <app/Experimental.Physics.MotionSimulation__float.h>
#include <app/Experimental.Physics.PointerVelocity__float2.h>
#include <app/Experimental.Physics.Simulation.h>
#include <app/Experimental.Physics.SmoothSnap__float.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Gestures.DegreeSpan.h>
#include <app/Fuse.Gestures.Edge.h>
#include <app/Fuse.Gestures.Internal.EdgeSwiper.h>
#include <app/Fuse.Gestures.SwipeGestureHelper.h>
#include <app/Fuse.Input.Pointer.h>
#include <app/Fuse.Input.PointerEventArgs.h>
#include <app/Fuse.Input.PointerMovedArgs.h>
#include <app/Fuse.Input.PointerMovedHandler.h>
#include <app/Fuse.Input.PointerPressedArgs.h>
#include <app/Fuse.Input.PointerPressedHandler.h>
#include <app/Fuse.Input.PointerReleasedArgs.h>
#include <app/Fuse.Input.PointerReleasedHandler.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_Poin-c465a3e6.h>
#include <app/Fuse.NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_Po-31778249.h>
#include <app/Fuse.NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_P-dde60e76.h>
#include <app/Fuse.Time.h>
#include <app/Fuse.UpdateManager.h>
#include <app/Fuse.UpdateStage.h>
#include <app/Uno.Action.h>
#include <app/Uno.Action__object__double.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Diagnostics.Clock.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>

namespace app {
namespace Fuse {
namespace Gestures {
namespace Internal {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::Gestures::SwipeGestureHelper*> EdgeSwiper___leftRightSwipe;
::uStaticStrong< ::app::Fuse::Gestures::SwipeGestureHelper*> EdgeSwiper___upDownSwipe;

EdgeSwiper__uType* EdgeSwiper__typeof()
{
    static ::uStaticStrong<EdgeSwiper__uType*> type;
    if (type != NULL) return type;

    type = (EdgeSwiper__uType*)::uAllocClassType(sizeof(EdgeSwiper__uType), "Fuse.Gestures.Internal.EdgeSwiper", false, 0, 5, 0);

    type->SetStrongRefs(
        "_element", offsetof(EdgeSwiper, _element),
        "_pointBody1D", offsetof(EdgeSwiper, _pointBody1D),
        "_target", offsetof(EdgeSwiper, _target),
        "_velocity", offsetof(EdgeSwiper, _velocity),
        "ProgressChanged", offsetof(EdgeSwiper, ProgressChanged));

    type->SetFields(18,
        ::uNewField("_currentCoord", NULL, offsetof(EdgeSwiper, _currentCoord), ::app::Uno::Float2__typeof()),
        ::uNewField("_down", NULL, offsetof(EdgeSwiper, _down), ::app::Uno::Int__typeof()),
        ::uNewField("_edge", NULL, offsetof(EdgeSwiper, _edge), ::app::Fuse::Gestures::Edge__typeof()),
        ::uNewField("_edgeThreshold", NULL, offsetof(EdgeSwiper, _edgeThreshold), ::app::Uno::Float__typeof()),
        ::uNewField("_element", NULL, offsetof(EdgeSwiper, _element), ::app::Fuse::Elements::Element__typeof()),
        ::uNewField("_hasUpdated", NULL, offsetof(EdgeSwiper, _hasUpdated), ::app::Uno::Bool__typeof()),
        ::uNewField("_isHardCapture", NULL, offsetof(EdgeSwiper, _isHardCapture), ::app::Uno::Bool__typeof()),
        ::uNewField("_leftRightSwipe", &EdgeSwiper___leftRightSwipe, 0, ::app::Fuse::Gestures::SwipeGestureHelper__typeof()),
        ::uNewField("_pointBody1D", NULL, offsetof(EdgeSwiper, _pointBody1D), ::app::Experimental::Physics::DestinationSimulation__float__typeof()),
        ::uNewField("_previousCoord", NULL, offsetof(EdgeSwiper, _previousCoord), ::app::Uno::Float2__typeof()),
        ::uNewField("_prevTime", NULL, offsetof(EdgeSwiper, _prevTime), ::app::Uno::Double__typeof()),
        ::uNewField("_progress", NULL, offsetof(EdgeSwiper, _progress), ::app::Uno::Double__typeof()),
        ::uNewField("_startCoord", NULL, offsetof(EdgeSwiper, _startCoord), ::app::Uno::Float2__typeof()),
        ::uNewField("_startProgress", NULL, offsetof(EdgeSwiper, _startProgress), ::app::Uno::Double__typeof()),
        ::uNewField("_target", NULL, offsetof(EdgeSwiper, _target), ::app::Fuse::Elements::Element__typeof()),
        ::uNewField("_upDownSwipe", &EdgeSwiper___upDownSwipe, 0, ::app::Fuse::Gestures::SwipeGestureHelper__typeof()),
        ::uNewField("_velocity", NULL, offsetof(EdgeSwiper, _velocity), ::app::Experimental::Physics::PointerVelocity__float2__typeof()),
        ::uNewField("_velocityThreshold", NULL, offsetof(EdgeSwiper, _velocityThreshold), ::app::Uno::Float__typeof()));

    type->SetFunctions(28,
        ::uNewFunctionVoid("add_ProgressChanged", EdgeSwiper__add_ProgressChanged, 0, false, ::app::Uno::Action__object__double__typeof()),
        ::uNewFunctionVoid("CalcProgress", EdgeSwiper__CalcProgress, 0, false),
        ::uNewFunctionVoid("CheckNeedUpdated", EdgeSwiper__CheckNeedUpdated, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("Disable", EdgeSwiper__Disable, 0, false),
        ::uNewFunctionVoid("Enable", EdgeSwiper__Enable, 0, false),
        ::uNewFunction("FromWindow", EdgeSwiper__FromWindow, 0, false, ::app::Uno::Float2__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunction("get_Edge", EdgeSwiper__get_Edge, 0, false, ::app::Fuse::Gestures::Edge__typeof()),
        ::uNewFunction("get_EdgeThreshold", EdgeSwiper__get_EdgeThreshold, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("get_IsEnabled", EdgeSwiper__get_IsEnabled, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Progress", EdgeSwiper__get_Progress, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction("get_Target", EdgeSwiper__get_Target, 0, false, ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunction("IsWithinSwipeBounds", EdgeSwiper__IsWithinSwipeBounds, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("MoveUser", EdgeSwiper__MoveUser, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunction(".ctor", EdgeSwiper__New_1, 0, true, EdgeSwiper__typeof()),
        ::uNewFunctionVoid("OnLostCapture", EdgeSwiper__OnLostCapture, 0, false),
        ::uNewFunctionVoid("OnPointerMoved", EdgeSwiper__OnPointerMoved, 0, false, ::uObject__typeof(), ::app::Fuse::Input::PointerMovedArgs__typeof()),
        ::uNewFunctionVoid("OnPointerPressed", EdgeSwiper__OnPointerPressed, 0, false, ::uObject__typeof(), ::app::Fuse::Input::PointerPressedArgs__typeof()),
        ::uNewFunctionVoid("OnPointerReleased", EdgeSwiper__OnPointerReleased, 0, false, ::uObject__typeof(), ::app::Fuse::Input::PointerReleasedArgs__typeof()),
        ::uNewFunctionVoid("OnUpdated", EdgeSwiper__OnUpdated, 0, false),
        ::uNewFunction("PrimaryValue", EdgeSwiper__PrimaryValue, 0, false, ::app::Uno::Float__typeof(), ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("remove_ProgressChanged", EdgeSwiper__remove_ProgressChanged, 0, false, ::app::Uno::Action__object__double__typeof()),
        ::uNewFunctionVoid("Rooted", EdgeSwiper__Rooted, 0, false, ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunctionVoid("Seek", EdgeSwiper__Seek, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("set_Edge", EdgeSwiper__set_Edge, 0, false, ::app::Fuse::Gestures::Edge__typeof()),
        ::uNewFunctionVoid("set_EdgeThreshold", EdgeSwiper__set_EdgeThreshold, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunctionVoid("set_Progress", EdgeSwiper__set_Progress, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunctionVoid("set_Target", EdgeSwiper__set_Target, 0, false, ::app::Fuse::Elements::Element__typeof()),
        ::uNewFunctionVoid("Unrooted", EdgeSwiper__Unrooted, 0, false));

    ::uRegisterType(type);
    return type;
}

void EdgeSwiper___ObjInit(EdgeSwiper* __this)
{
    __this->_pointBody1D = (::uObject*)::app::Experimental::Physics::SmoothSnap__float__CreateNormalized(NULL);
    __this->_edgeThreshold = 32.0f;
    __this->_previousCoord = ::app::Uno::Float2__New_1(NULL, 0.0f);
    __this->_currentCoord = ::app::Uno::Float2__New_1(NULL, 0.0f);
    __this->_startCoord = ::app::Uno::Float2__New_1(NULL, 0.0f);
    __this->_velocityThreshold = 20.0f;
    __this->_down = -1;
    __this->_velocity = ::app::Experimental::Physics::PointerVelocity__float2__New_1(NULL);
}

void EdgeSwiper___TypeInit(::uStatic* __this)
{
    ::uArray* array_123;
    ::uArray* array_124;
    EdgeSwiper___leftRightSwipe = ::app::Fuse::Gestures::SwipeGestureHelper__New_1(NULL, 10.0f, (array_123 = ::uNewArray(::app::Fuse::Gestures::DegreeSpan__typeof(), 2), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::app::Fuse::Gestures::DegreeSpan*>(0) = ::app::Fuse::Gestures::DegreeSpan__New_1(NULL, -45.0f, -135.0f), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::app::Fuse::Gestures::DegreeSpan*>(1) = ::app::Fuse::Gestures::DegreeSpan__New_1(NULL, 45.0f, 135.0f), array_123));
    EdgeSwiper___upDownSwipe = ::app::Fuse::Gestures::SwipeGestureHelper__New_1(NULL, 10.0f, (array_124 = ::uNewArray(::app::Fuse::Gestures::DegreeSpan__typeof(), 3), ::uPtr< ::uArray*>(array_124)->ItemStrong< ::app::Fuse::Gestures::DegreeSpan*>(0) = ::app::Fuse::Gestures::DegreeSpan__New_1(NULL, 135.0f, 180.0f), ::uPtr< ::uArray*>(array_124)->ItemStrong< ::app::Fuse::Gestures::DegreeSpan*>(1) = ::app::Fuse::Gestures::DegreeSpan__New_1(NULL, -135.0f, -180.0f), ::uPtr< ::uArray*>(array_124)->ItemStrong< ::app::Fuse::Gestures::DegreeSpan*>(2) = ::app::Fuse::Gestures::DegreeSpan__New_1(NULL, -45.0f, 45.0f), array_124));
}

void EdgeSwiper__add_ProgressChanged(EdgeSwiper* __this, ::uDelegate* value)
{
    __this->ProgressChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ProgressChanged, (::uDelegate*)value), ::app::Uno::Action__object__double__typeof());
}

void EdgeSwiper__CalcProgress(EdgeSwiper* __this)
{
    ::app::Fuse::Elements::Element* ind_125 = __this->Target();
    ::app::Fuse::Elements::Element* t = (ind_125 != NULL) ? ind_125 : __this->_element;
    ::app::Uno::Float2 bounds = ::uPtr< ::app::Fuse::Elements::Element*>(t)->ActualSize();
    ::app::Uno::Float2 progress = ::app::Uno::Float2__op_Division_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, __this->_currentCoord, __this->_startCoord), bounds);
    __this->Progress(::app::Uno::Math__Clamp(NULL, __this->_startProgress + (double)__this->PrimaryValue(progress), 0.0, 1.0));
}

void EdgeSwiper__CheckNeedUpdated(EdgeSwiper* __this, bool off)
{
    bool needUpdated = (__this->_down == -1) && !::app::Experimental::Physics::Simulation::IsStatic(::uPtr< ::uObject*>(__this->_pointBody1D));

    if (needUpdated == __this->_hasUpdated)
    {
        return;
    }

    if (needUpdated)
    {
        ::app::Fuse::UpdateManager__AddAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)EdgeSwiper__OnUpdated, __this), 0);
        __this->_hasUpdated = true;
    }
    else if (off)
    {
        ::app::Fuse::UpdateManager__RemoveAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)EdgeSwiper__OnUpdated, __this), 0);
        __this->_hasUpdated = false;
    }
}

void EdgeSwiper__Disable(EdgeSwiper* __this)
{
    ::app::Experimental::Physics::DestinationSimulation__float::Destination(::uPtr< ::uObject*>(__this->_pointBody1D), 0.0f);
    __this->CheckNeedUpdated(false);
}

void EdgeSwiper__Enable(EdgeSwiper* __this)
{
    ::app::Experimental::Physics::DestinationSimulation__float::Destination(::uPtr< ::uObject*>(__this->_pointBody1D), 1.0f);
    __this->CheckNeedUpdated(false);
}

::app::Uno::Float2 EdgeSwiper__FromWindow(EdgeSwiper* __this, ::app::Uno::Float2 p)
{
    if ((__this->_element == NULL) || (::uPtr< ::app::Fuse::Elements::Element*>(__this->_element)->Parent() == NULL))
    {
        return p;
    }

    return ::uPtr< ::app::Fuse::Node*>(::uPtr< ::app::Fuse::Elements::Element*>(__this->_element)->Parent())->WindowToLocal(p);
}

int EdgeSwiper__get_Edge(EdgeSwiper* __this)
{
    return __this->_edge;
}

float EdgeSwiper__get_EdgeThreshold(EdgeSwiper* __this)
{
    return __this->_edgeThreshold;
}

bool EdgeSwiper__get_IsEnabled(EdgeSwiper* __this)
{
    return (__this->Progress() > 0.0) && ::app::Experimental::Physics::Simulation::IsStatic(::uPtr< ::uObject*>(__this->_pointBody1D));
}

double EdgeSwiper__get_Progress(EdgeSwiper* __this)
{
    return __this->_progress;
}

::app::Fuse::Elements::Element* EdgeSwiper__get_Target(EdgeSwiper* __this)
{
    return __this->_target;
}

bool EdgeSwiper__IsWithinSwipeBounds(EdgeSwiper* __this, ::app::Uno::Float2 windowPoint)
{
    if ((__this->Target() != NULL) && (::uPtr< ::app::Fuse::Elements::Element*>(__this->Target())->GetHitWindowPoint(windowPoint) != NULL))
    {
        return true;
    }

    ::app::Uno::Float2 coord = ::uPtr< ::app::Fuse::Elements::Element*>(__this->_element)->WindowToLocal(windowPoint);
    ::app::Uno::Float2 bounds = ::uPtr< ::app::Fuse::Elements::Element*>(__this->_element)->ActualSize();
    float threshold = __this->EdgeThreshold();

    switch (__this->Edge())
    {
        case 0:
        {
            return (coord.X >= 0.0f) && (coord.X <= threshold);
        }
        case 1:
        {
            return (coord.X <= bounds.X) && (coord.X >= (bounds.X - threshold));
        }
        case 2:
        {
            return (coord.Y >= 0.0f) && (coord.Y <= threshold);
        }
        case 3:
        {
            return (coord.Y <= bounds.Y) && (coord.Y >= (bounds.Y - threshold));
        }
    }

    return false;
}

void EdgeSwiper__MoveUser(EdgeSwiper* __this, ::app::Uno::Float2 coord)
{
    __this->_currentCoord = coord;
    __this->_previousCoord = coord;
    double t = ::app::Uno::Diagnostics::Clock__GetSeconds(NULL);
    double elapsed = t - __this->_prevTime;
    __this->_prevTime = t;
    ::uPtr< ::app::Experimental::Physics::PointerVelocity__float2*>(__this->_velocity)->AddSample(__this->_currentCoord, (float)elapsed, !__this->_isHardCapture);
}

EdgeSwiper* EdgeSwiper__New_1(::uStatic* __this)
{
    EdgeSwiper* inst = (EdgeSwiper*)::uAllocObject(sizeof(EdgeSwiper), EdgeSwiper__typeof());
    inst->_ObjInit();
    return inst;
}

void EdgeSwiper__OnLostCapture(EdgeSwiper* __this)
{
    __this->_down = -1;
    __this->_isHardCapture = false;
    ::app::Experimental::Physics::MotionSimulation__float::Position(::uPtr< ::uObject*>(__this->_pointBody1D), (float)__this->Progress());
    ::app::Fuse::Input::Pointer__ReleaseAllCaptures(NULL, (::uObject*)__this);
    __this->CheckNeedUpdated(false);
}

void EdgeSwiper__OnPointerMoved(EdgeSwiper* __this, ::uObject* sender, ::app::Fuse::Input::PointerMovedArgs* args)
{
    if (__this->_down != ::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->PointIndex())
    {
        return;
    }

    __this->MoveUser(__this->FromWindow(::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->WindowPoint()));

    if (!__this->_isHardCapture)
    {
        ::app::Uno::Float2 diff = ::app::Uno::Float2__op_Subtraction_2(NULL, __this->_currentCoord, __this->_startCoord);
        bool withinBounds = false;

        switch (__this->Edge())
        {
            case 1:
            case 0:
            {
                withinBounds = ::uPtr< ::app::Fuse::Gestures::SwipeGestureHelper*>(EdgeSwiper___leftRightSwipe)->IsWithinBounds(diff);
                break;
            }
            case 2:
            case 3:
            {
                withinBounds = ::uPtr< ::app::Fuse::Gestures::SwipeGestureHelper*>(EdgeSwiper___upDownSwipe)->IsWithinBounds(diff);
                break;
            }
        }

        if (withinBounds)
        {
            if (::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->TryHardCapture((::uObject*)__this, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)EdgeSwiper__OnLostCapture, __this), (::app::Fuse::Node*)__this->_element))
            {
                __this->_isHardCapture = true;
            }
            else
            {
                __this->OnLostCapture();
            }
        }
    }

    __this->CalcProgress();
}

void EdgeSwiper__OnPointerPressed(EdgeSwiper* __this, ::uObject* sender, ::app::Fuse::Input::PointerPressedArgs* args)
{
    if ((__this->_down != -1) || !__this->IsWithinSwipeBounds(::uPtr< ::app::Fuse::Input::PointerPressedArgs*>(args)->WindowPoint()))
    {
        return;
    }

    __this->_isHardCapture = false;

    if (::uPtr< ::app::Fuse::Input::PointerPressedArgs*>(args)->TrySoftCapture((::uObject*)__this, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)EdgeSwiper__OnLostCapture, __this), (::app::Fuse::Node*)__this->_element))
    {
        __this->_startProgress = __this->Progress();
        __this->_down = ::uPtr< ::app::Fuse::Input::PointerPressedArgs*>(args)->PointIndex();
        __this->_prevTime = ::app::Uno::Diagnostics::Clock__GetSeconds(NULL);
        __this->_previousCoord = __this->FromWindow(args->WindowPoint());
        __this->_currentCoord = __this->FromWindow(args->WindowPoint());
        __this->_startCoord = __this->FromWindow(args->WindowPoint());
        ::uPtr< ::app::Experimental::Physics::PointerVelocity__float2*>(__this->_velocity)->Reset_1(__this->_currentCoord, ::app::Uno::Float2__New_1(NULL, 0.0f));
    }
}

void EdgeSwiper__OnPointerReleased(EdgeSwiper* __this, ::uObject* sender, ::app::Fuse::Input::PointerReleasedArgs* args)
{
    if (__this->_down != ::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(args)->PointIndex())
    {
        return;
    }

    if (!__this->_isHardCapture)
    {
        __this->OnLostCapture();
        return;
    }

    __this->MoveUser(__this->FromWindow(::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(args)->WindowPoint()));
    ::app::Fuse::Input::Pointer__ReleaseAllCaptures(NULL, (::uObject*)__this);
    float v = __this->PrimaryValue(::uPtr< ::app::Experimental::Physics::PointerVelocity__float2*>(__this->_velocity)->CurrentVelocity());
    bool on = false;

    if (v < -__this->_velocityThreshold)
    {
        on = false;
    }
    else if (v > __this->_velocityThreshold)
    {
        on = true;
    }
    else if (__this->Progress() > 0.5)
    {
        on = true;
    }

    ::app::Experimental::Physics::DestinationSimulation__float::Destination(::uPtr< ::uObject*>(__this->_pointBody1D), (float)(on ? 1 : 0));
    ::app::Experimental::Physics::MotionSimulation__float::Position(::uPtr< ::uObject*>(__this->_pointBody1D), (float)__this->Progress());
    __this->_down = -1;
    __this->_isHardCapture = false;
    __this->CheckNeedUpdated(false);
}

void EdgeSwiper__OnUpdated(EdgeSwiper* __this)
{
    ::app::Experimental::Physics::Simulation::Update(::uPtr< ::uObject*>(__this->_pointBody1D), ::app::Fuse::Time__get_FrameInterval(NULL));
    __this->Progress((double)::app::Experimental::Physics::MotionSimulation__float::Position(::uPtr< ::uObject*>(__this->_pointBody1D)));
    __this->CheckNeedUpdated(true);
}

float EdgeSwiper__PrimaryValue(EdgeSwiper* __this, ::app::Uno::Float2 v)
{
    switch (__this->Edge())
    {
        case 0:
        {
            return v.X;
        }
        case 1:
        {
            return -v.X;
        }
        case 2:
        {
            return v.Y;
        }
        case 3:
        {
            return -v.Y;
        }
    }

    return 0.0f;
}

void EdgeSwiper__remove_ProgressChanged(EdgeSwiper* __this, ::uDelegate* value)
{
    __this->ProgressChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->ProgressChanged, (::uDelegate*)value), ::app::Uno::Action__object__double__typeof());
}

void EdgeSwiper__Rooted(EdgeSwiper* __this, ::app::Fuse::Elements::Element* e)
{
    __this->_element = e;
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*>(::app::Fuse::Input::Pointer__get_Pressed(NULL))->AddHandler((::app::Fuse::Node*)__this->_element, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerPressedHandler__typeof(), (const void*)EdgeSwiper__OnPointerPressed, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs*>(::app::Fuse::Input::Pointer__get_Moved(NULL))->AddHandler((::app::Fuse::Node*)__this->_element, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerMovedHandler__typeof(), (const void*)EdgeSwiper__OnPointerMoved, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*>(::app::Fuse::Input::Pointer__get_Released(NULL))->AddHandler((::app::Fuse::Node*)__this->_element, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerReleasedHandler__typeof(), (const void*)EdgeSwiper__OnPointerReleased, __this));
}

void EdgeSwiper__Seek(EdgeSwiper* __this, double progress)
{
    __this->Progress(progress);
}

void EdgeSwiper__set_Edge(EdgeSwiper* __this, int value)
{
    __this->_edge = value;
}

void EdgeSwiper__set_EdgeThreshold(EdgeSwiper* __this, float value)
{
    __this->_edgeThreshold = value;
}

void EdgeSwiper__set_Progress(EdgeSwiper* __this, double value)
{
    __this->_progress = ::app::Uno::Math__Max(NULL, value, 0.0);

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ProgressChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ProgressChanged)->InvokeVoid< ::uObject*, double>((::uObject*)__this, __this->_progress);
    }
}

void EdgeSwiper__set_Target(EdgeSwiper* __this, ::app::Fuse::Elements::Element* value)
{
    __this->_target = value;
}

void EdgeSwiper__Unrooted(EdgeSwiper* __this)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*>(::app::Fuse::Input::Pointer__get_Pressed(NULL))->RemoveHandler((::app::Fuse::Node*)__this->_element, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerPressedHandler__typeof(), (const void*)EdgeSwiper__OnPointerPressed, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs*>(::app::Fuse::Input::Pointer__get_Moved(NULL))->RemoveHandler((::app::Fuse::Node*)__this->_element, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerMovedHandler__typeof(), (const void*)EdgeSwiper__OnPointerMoved, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*>(::app::Fuse::Input::Pointer__get_Released(NULL))->RemoveHandler((::app::Fuse::Node*)__this->_element, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerReleasedHandler__typeof(), (const void*)EdgeSwiper__OnPointerReleased, __this));
}

}}}}
