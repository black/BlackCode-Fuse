// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Experimental.Physics.DestinationSimulation-1.h>
#include <Experimental.Physics.MotionSimulation-1.h>
#include <Experimental.Physics.PointerVelocity-1.h>
#include <Experimental.Physics.Simulation.h>
#include <Experimental.Physics.SmoothSnap-1.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.DegreeSpan.h>
#include <Fuse.Gestures.Edge.h>
#include <Fuse.Gestures.Internal.EdgeSwiper.h>
#include <Fuse.Gestures.Internal.Swiper.h>
#include <Fuse.Gestures.Internal.SwipeRegion.h>
#include <Fuse.Gestures.Internal.SwipeRegionArea.h>
#include <Fuse.Gestures.SwipeGestureHelper.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEventArgs.h>
#include <Fuse.Input.PointerMovedArgs.h>
#include <Fuse.Input.PointerMovedHandler.h>
#include <Fuse.Input.PointerPressedArgs.h>
#include <Fuse.Input.PointerPressedHandler.h>
#include <Fuse.Input.PointerReleasedArgs.h>
#include <Fuse.Input.PointerReleasedHandler.h>
#include <Fuse.Node.h>
#include <Fuse.NodeEvent-2.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.Time.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Bool.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Clock.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Vector.h>
static uType* TYPES[29];

namespace g{
namespace Fuse{
namespace Gestures{
namespace Internal{

// C:\ProgramData\Uno\Packages\Fuse.Gestures\0.19.3\Internal\$.uno(275)
// --------------------------------------------------------------------

// internal sealed class EdgeSwiper :275
// {
// static EdgeSwiper() :275
static void EdgeSwiper__cctor__fn(uType* __type)
{
    EdgeSwiper::_leftRightSwipe_ = ::g::Fuse::Gestures::SwipeGestureHelper::New1(10.0f, uArray::Init< ::g::Fuse::Gestures::DegreeSpan*>(::TYPES[0/*Fuse.Gestures.DegreeSpan[]*/], 2, (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-45.0f, -135.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(45.0f, 135.0f)));
    EdgeSwiper::_upDownSwipe_ = ::g::Fuse::Gestures::SwipeGestureHelper::New1(10.0f, uArray::Init< ::g::Fuse::Gestures::DegreeSpan*>(::TYPES[0/*Fuse.Gestures.DegreeSpan[]*/], 3, (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(135.0f, 180.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-135.0f, -180.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-45.0f, 45.0f)));
}

uType* EdgeSwiper_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 19;
    options.ObjectSize = sizeof(EdgeSwiper);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Gestures.Internal.EdgeSwiper", options);
    type->fp_ctor_ = (void*)EdgeSwiper__New1_fn;
    type->fp_cctor_ = EdgeSwiper__cctor__fn;
    ::TYPES[0] = ::g::Fuse::Gestures::DegreeSpan_typeof()->Array();
    ::TYPES[1] = ::g::Experimental::Physics::DestinationSimulation_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[2] = ::g::Experimental::Physics::SmoothSnap_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[3] = ::g::Experimental::Physics::PointerVelocity_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[4] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[5] = ::g::Uno::Double_typeof();
    ::TYPES[6] = ::g::Uno::Bool_typeof();
    ::TYPES[7] = ::g::Experimental::Physics::Simulation_typeof();
    ::TYPES[8] = ::g::Uno::Action_typeof();
    ::TYPES[9] = ::g::Fuse::Node_typeof();
    ::TYPES[10] = ::g::Uno::Float2_typeof();
    ::TYPES[11] = ::g::Uno::Float_typeof();
    ::TYPES[12] = ::g::Experimental::Physics::MotionSimulation_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[13] = uObject_typeof();
    ::TYPES[14] = ::g::Fuse::Input::PointerEventArgs_typeof();
    ::TYPES[15] = ::g::Fuse::Time_typeof();
    ::TYPES[16] = ::g::Fuse::Input::Pointer_typeof();
    ::TYPES[17] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[18] = ::g::Fuse::Input::PointerMovedHandler_typeof();
    ::TYPES[19] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    ::TYPES[20] = ::g::Uno::Delegate_typeof();
    ::TYPES[21] = ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), ::g::Uno::Double_typeof());
    type->SetFields(0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, _currentCoord), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, _down), 0,
        ::g::Fuse::Gestures::Edge_typeof(), offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, _edge), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, _edgeThreshold), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, _element), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, _hasUpdated), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, _isHardCapture), 0,
        ::g::Experimental::Physics::DestinationSimulation_typeof()->MakeType(::g::Uno::Float_typeof()), offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, _pointBody1D), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, _previousCoord), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, _prevTime), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, _progress), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, _startCoord), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, _startProgress), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, _target), 0,
        ::g::Experimental::Physics::PointerVelocity_typeof()->MakeType(::g::Uno::Float2_typeof()), offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, _velocity), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, _velocityThreshold), 0,
        ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), ::g::Uno::Double_typeof()), offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, ProgressChanged1), 0,
        ::g::Fuse::Gestures::SwipeGestureHelper_typeof(), (uintptr_t)&::g::Fuse::Gestures::Internal::EdgeSwiper::_leftRightSwipe_, uFieldFlagsStatic,
        ::g::Fuse::Gestures::SwipeGestureHelper_typeof(), (uintptr_t)&::g::Fuse::Gestures::Internal::EdgeSwiper::_upDownSwipe_, uFieldFlagsStatic);
    return type;
}

// public generated EdgeSwiper() :275
void EdgeSwiper__ctor__fn(EdgeSwiper* __this)
{
    __this->ctor_();
}

// private void CalcProgress() :547
void EdgeSwiper__CalcProgress_fn(EdgeSwiper* __this)
{
    __this->CalcProgress();
}

// private void CheckNeedUpdated([bool off]) :377
void EdgeSwiper__CheckNeedUpdated_fn(EdgeSwiper* __this, bool* off)
{
    __this->CheckNeedUpdated(*off);
}

// public void Disable() :370
void EdgeSwiper__Disable_fn(EdgeSwiper* __this)
{
    __this->Disable();
}

// public Fuse.Gestures.Edge get_Edge() :279
void EdgeSwiper__get_Edge_fn(EdgeSwiper* __this, int* __retval)
{
    *__retval = __this->Edge();
}

// public void set_Edge(Fuse.Gestures.Edge value) :280
void EdgeSwiper__set_Edge_fn(EdgeSwiper* __this, int* value)
{
    __this->Edge(*value);
}

// public float get_EdgeThreshold() :285
void EdgeSwiper__get_EdgeThreshold_fn(EdgeSwiper* __this, float* __retval)
{
    *__retval = __this->EdgeThreshold();
}

// public void set_EdgeThreshold(float value) :286
void EdgeSwiper__set_EdgeThreshold_fn(EdgeSwiper* __this, float* value)
{
    __this->EdgeThreshold(*value);
}

// public void Enable() :364
void EdgeSwiper__Enable_fn(EdgeSwiper* __this)
{
    __this->Enable();
}

// private float2 FromWindow(float2 p) :429
void EdgeSwiper__FromWindow_fn(EdgeSwiper* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->FromWindow(*p);
}

// public bool get_IsEnabled() :358
void EdgeSwiper__get_IsEnabled_fn(EdgeSwiper* __this, bool* __retval)
{
    *__retval = __this->IsEnabled();
}

// private bool IsWithinSwipeBounds(float2 windowPoint) :520
void EdgeSwiper__IsWithinSwipeBounds_fn(EdgeSwiper* __this, ::g::Uno::Float2* windowPoint, bool* __retval)
{
    *__retval = __this->IsWithinSwipeBounds(*windowPoint);
}

// private void MoveUser(float2 coord) :437
void EdgeSwiper__MoveUser_fn(EdgeSwiper* __this, ::g::Uno::Float2* coord)
{
    __this->MoveUser(*coord);
}

// public generated EdgeSwiper New() :275
void EdgeSwiper__New1_fn(EdgeSwiper** __retval)
{
    *__retval = EdgeSwiper::New1();
}

// private void OnLostCapture() :402
void EdgeSwiper__OnLostCapture_fn(EdgeSwiper* __this)
{
    __this->OnLostCapture();
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) :450
void EdgeSwiper__OnPointerMoved_fn(EdgeSwiper* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    __this->OnPointerMoved(sender, args);
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) :411
void EdgeSwiper__OnPointerPressed_fn(EdgeSwiper* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    __this->OnPointerPressed(sender, args);
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) :487
void EdgeSwiper__OnPointerReleased_fn(EdgeSwiper* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    __this->OnPointerReleased(sender, args);
}

// private void OnUpdated() :395
void EdgeSwiper__OnUpdated_fn(EdgeSwiper* __this)
{
    __this->OnUpdated();
}

// private float PrimaryValue(float2 v) :555
void EdgeSwiper__PrimaryValue_fn(EdgeSwiper* __this, ::g::Uno::Float2* v, float* __retval)
{
    *__retval = __this->PrimaryValue(*v);
}

// public double get_Progress() :309
void EdgeSwiper__get_Progress_fn(EdgeSwiper* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// private void set_Progress(double value) :310
void EdgeSwiper__set_Progress_fn(EdgeSwiper* __this, double* value)
{
    __this->Progress(*value);
}

// public generated void add_ProgressChanged(Uno.Action<object, double> value) :305
void EdgeSwiper__add_ProgressChanged_fn(EdgeSwiper* __this, uDelegate* value)
{
    __this->add_ProgressChanged(value);
}

// public generated void remove_ProgressChanged(Uno.Action<object, double> value) :305
void EdgeSwiper__remove_ProgressChanged_fn(EdgeSwiper* __this, uDelegate* value)
{
    __this->remove_ProgressChanged(value);
}

// public void Rooted(Fuse.Elements.Element e) :341
void EdgeSwiper__Rooted_fn(EdgeSwiper* __this, ::g::Fuse::Elements::Element* e)
{
    __this->Rooted(e);
}

// public void Seek(double progress) :318
void EdgeSwiper__Seek_fn(EdgeSwiper* __this, double* progress)
{
    __this->Seek(*progress);
}

// public Fuse.Elements.Element get_Target() :291
void EdgeSwiper__get_Target_fn(EdgeSwiper* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->Target();
}

// public void set_Target(Fuse.Elements.Element value) :292
void EdgeSwiper__set_Target_fn(EdgeSwiper* __this, ::g::Fuse::Elements::Element* value)
{
    __this->Target(value);
}

// public void Unrooted() :349
void EdgeSwiper__Unrooted_fn(EdgeSwiper* __this)
{
    __this->Unrooted();
}

uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*> EdgeSwiper::_leftRightSwipe_;
uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*> EdgeSwiper::_upDownSwipe_;

// public generated EdgeSwiper() [instance] :275
void EdgeSwiper::ctor_()
{
    _pointBody1D = (uObject*)((::g::Experimental::Physics::SmoothSnap*)::g::Experimental::Physics::SmoothSnap::CreateNormalized(::TYPES[2/*Experimental.Physics.SmoothSnap<float>*/]));
    _edgeThreshold = 32.0f;
    _previousCoord = ::g::Uno::Float2__New1(0.0f);
    _currentCoord = ::g::Uno::Float2__New1(0.0f);
    _startCoord = ::g::Uno::Float2__New1(0.0f);
    _velocityThreshold = 20.0f;
    _down = -1;
    _velocity = ((::g::Experimental::Physics::PointerVelocity*)::g::Experimental::Physics::PointerVelocity::New1(::TYPES[3/*Experimental.Physics.PointerVelocity<float2>*/]));
}

// private void CalcProgress() [instance] :547
void EdgeSwiper::CalcProgress()
{
    ::g::Fuse::Elements::Element* ind1 = Target();
    ::g::Fuse::Elements::Element* t = (ind1 != NULL) ? ind1 : (::g::Fuse::Elements::Element*)_element;
    ::g::Uno::Float2 bounds = uPtr(t)->ActualSize();
    ::g::Uno::Float2 progress = ::g::Uno::Float2__op_Division2(::g::Uno::Float2__op_Subtraction2(_currentCoord, _startCoord), bounds);
    Progress(::g::Uno::Math::Clamp(_startProgress + (double)PrimaryValue(progress), 0.0, 1.0));
}

// private void CheckNeedUpdated([bool off]) [instance] :377
void EdgeSwiper::CheckNeedUpdated(bool off)
{
    bool needUpdated = (_down == -1) && !::g::Experimental::Physics::Simulation::IsStatic(uInterface(uPtr(_pointBody1D), ::TYPES[7/*Experimental.Physics.Simulation*/]));

    if (needUpdated == _hasUpdated)
        return;

    if (needUpdated)
    {
        ::g::Fuse::UpdateManager::AddAction(uDelegate::New(::TYPES[8/*Uno.Action*/], (void*)EdgeSwiper__OnUpdated_fn, this), 0);
        _hasUpdated = true;
    }
    else if (off)
    {
        ::g::Fuse::UpdateManager::RemoveAction(uDelegate::New(::TYPES[8/*Uno.Action*/], (void*)EdgeSwiper__OnUpdated_fn, this), 0);
        _hasUpdated = false;
    }
}

// public void Disable() [instance] :370
void EdgeSwiper::Disable()
{
    ::g::Experimental::Physics::DestinationSimulation::set_Destination_ex(uInterface(uPtr(_pointBody1D), ::TYPES[1/*Experimental.Physics.DestinationSimulation<float>*/]), uCRef(0.0f));
    CheckNeedUpdated(false);
}

// public Fuse.Gestures.Edge get_Edge() [instance] :279
int EdgeSwiper::Edge()
{
    return _edge;
}

// public void set_Edge(Fuse.Gestures.Edge value) [instance] :280
void EdgeSwiper::Edge(int value)
{
    _edge = value;
}

// public float get_EdgeThreshold() [instance] :285
float EdgeSwiper::EdgeThreshold()
{
    return _edgeThreshold;
}

// public void set_EdgeThreshold(float value) [instance] :286
void EdgeSwiper::EdgeThreshold(float value)
{
    _edgeThreshold = value;
}

// public void Enable() [instance] :364
void EdgeSwiper::Enable()
{
    ::g::Experimental::Physics::DestinationSimulation::set_Destination_ex(uInterface(uPtr(_pointBody1D), ::TYPES[1/*Experimental.Physics.DestinationSimulation<float>*/]), uCRef(1.0f));
    CheckNeedUpdated(false);
}

// private float2 FromWindow(float2 p) [instance] :429
::g::Uno::Float2 EdgeSwiper::FromWindow(::g::Uno::Float2 p)
{
    if ((_element == NULL) || (uPtr(_element)->Parent() == NULL))
        return p;

    return uPtr(uPtr(_element)->Parent())->WindowToLocal(p);
}

// public bool get_IsEnabled() [instance] :358
bool EdgeSwiper::IsEnabled()
{
    return (Progress() > 0.0) && ::g::Experimental::Physics::Simulation::IsStatic(uInterface(uPtr(_pointBody1D), ::TYPES[7/*Experimental.Physics.Simulation*/]));
}

// private bool IsWithinSwipeBounds(float2 windowPoint) [instance] :520
bool EdgeSwiper::IsWithinSwipeBounds(::g::Uno::Float2 windowPoint)
{
    if ((Target() != NULL) && (uPtr(Target())->GetHitWindowPoint(windowPoint) != NULL))
        return true;

    ::g::Uno::Float2 coord = uPtr(_element)->WindowToLocal(windowPoint);
    ::g::Uno::Float2 bounds = uPtr(_element)->ActualSize();
    float threshold = EdgeThreshold();

    switch (Edge())
    {
        case 0:
            return (coord.X >= 0.0f) && (coord.X <= threshold);
        case 1:
            return (coord.X <= bounds.X) && (coord.X >= (bounds.X - threshold));
        case 2:
            return (coord.Y >= 0.0f) && (coord.Y <= threshold);
        case 3:
            return (coord.Y <= bounds.Y) && (coord.Y >= (bounds.Y - threshold));
    }

    return false;
}

// private void MoveUser(float2 coord) [instance] :437
void EdgeSwiper::MoveUser(::g::Uno::Float2 coord)
{
    _currentCoord = coord;
    _previousCoord = coord;
    double t = ::g::Uno::Diagnostics::Clock::GetSeconds();
    double elapsed = t - _prevTime;
    _prevTime = t;
    ::g::Experimental::Physics::PointerVelocity__AddSample_fn(uPtr(_velocity), uCRef(_currentCoord), uCRef((float)elapsed), uCRef(!_isHardCapture));
}

// private void OnLostCapture() [instance] :402
void EdgeSwiper::OnLostCapture()
{
    _down = -1;
    _isHardCapture = false;
    ::g::Experimental::Physics::MotionSimulation::set_Position_ex(uInterface(uPtr(_pointBody1D), ::TYPES[12/*Experimental.Physics.MotionSimulation<float>*/]), uCRef((float)Progress()));
    ::g::Fuse::Input::Pointer::ReleaseAllCaptures(this);
    CheckNeedUpdated(false);
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) [instance] :450
void EdgeSwiper::OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    if (_down != uPtr(args)->PointIndex())
        return;

    MoveUser(FromWindow(uPtr(args)->WindowPoint()));

    if (!_isHardCapture)
    {
        ::g::Uno::Float2 diff = ::g::Uno::Float2__op_Subtraction2(_currentCoord, _startCoord);
        bool withinBounds = false;

        switch (Edge())
        {
            case 1:
            case 0:
            {
                withinBounds = uPtr(EdgeSwiper::_leftRightSwipe())->IsWithinBounds(diff);
                break;
            }
            case 2:
            case 3:
            {
                withinBounds = uPtr(EdgeSwiper::_upDownSwipe())->IsWithinBounds(diff);
                break;
            }
        }

        if (withinBounds)
        {
            if (uPtr(args)->TryHardCapture(this, uDelegate::New(::TYPES[8/*Uno.Action*/], (void*)EdgeSwiper__OnLostCapture_fn, this), _element))
                _isHardCapture = true;
            else
                OnLostCapture();
        }
    }

    CalcProgress();
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) [instance] :411
void EdgeSwiper::OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    if ((_down != -1) || !IsWithinSwipeBounds(uPtr(args)->WindowPoint()))
        return;

    _isHardCapture = false;

    if (uPtr(args)->TrySoftCapture(this, uDelegate::New(::TYPES[8/*Uno.Action*/], (void*)EdgeSwiper__OnLostCapture_fn, this), _element))
    {
        _startProgress = Progress();
        _down = uPtr(args)->PointIndex();
        _prevTime = ::g::Uno::Diagnostics::Clock::GetSeconds();
        _previousCoord = FromWindow(args->WindowPoint());
        _currentCoord = FromWindow(args->WindowPoint());
        _startCoord = FromWindow(args->WindowPoint());
        ::g::Experimental::Physics::PointerVelocity__Reset1_fn(uPtr(_velocity), uCRef(_currentCoord), uCRef(::g::Uno::Float2__New1(0.0f)));
    }
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) [instance] :487
void EdgeSwiper::OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    ::g::Uno::Float2 ret3;

    if (_down != uPtr(args)->PointIndex())
        return;

    if (!_isHardCapture)
    {
        OnLostCapture();
        return;
    }

    MoveUser(FromWindow(uPtr(args)->WindowPoint()));
    ::g::Fuse::Input::Pointer::ReleaseAllCaptures(this);
    float v = PrimaryValue((::g::Experimental::Physics::PointerVelocity__get_CurrentVelocity_fn(uPtr(_velocity), &ret3), ret3));
    bool on = false;

    if (v < -_velocityThreshold)
        on = false;
    else if (v > _velocityThreshold)
        on = true;
    else if (Progress() > 0.5)
        on = true;

    ::g::Experimental::Physics::DestinationSimulation::set_Destination_ex(uInterface(uPtr(_pointBody1D), ::TYPES[1/*Experimental.Physics.DestinationSimulation<float>*/]), uCRef((float)(on ? 1 : 0)));
    ::g::Experimental::Physics::MotionSimulation::set_Position_ex(uInterface(uPtr(_pointBody1D), ::TYPES[12/*Experimental.Physics.MotionSimulation<float>*/]), uCRef((float)Progress()));
    _down = -1;
    _isHardCapture = false;
    CheckNeedUpdated(false);
}

// private void OnUpdated() [instance] :395
void EdgeSwiper::OnUpdated()
{
    float ret4;
    ::g::Experimental::Physics::Simulation::Update(uInterface(uPtr(_pointBody1D), ::TYPES[7/*Experimental.Physics.Simulation*/]), ::g::Fuse::Time::FrameInterval());
    Progress((double)(::g::Experimental::Physics::MotionSimulation::get_Position_ex(uInterface(uPtr(_pointBody1D), ::TYPES[12/*Experimental.Physics.MotionSimulation<float>*/]), &ret4), ret4));
    CheckNeedUpdated(true);
}

// private float PrimaryValue(float2 v) [instance] :555
float EdgeSwiper::PrimaryValue(::g::Uno::Float2 v)
{
    switch (Edge())
    {
        case 0:
            return v.X;
        case 1:
            return -v.X;
        case 2:
            return v.Y;
        case 3:
            return -v.Y;
    }

    return 0.0f;
}

// public double get_Progress() [instance] :309
double EdgeSwiper::Progress()
{
    return _progress;
}

// private void set_Progress(double value) [instance] :310
void EdgeSwiper::Progress(double value)
{
    _progress = ::g::Uno::Math::Max(value, 0.0);

    if (::g::Uno::Delegate::op_Inequality(ProgressChanged1, NULL))
        uPtr(ProgressChanged1)->Invoke(2, this, uCRef(_progress));
}

// public generated void add_ProgressChanged(Uno.Action<object, double> value) [instance] :305
void EdgeSwiper::add_ProgressChanged(uDelegate* value)
{
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ProgressChanged1, value), ::TYPES[21/*Uno.Action<object, double>*/]);
}

// public generated void remove_ProgressChanged(Uno.Action<object, double> value) [instance] :305
void EdgeSwiper::remove_ProgressChanged(uDelegate* value)
{
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ProgressChanged1, value), ::TYPES[21/*Uno.Action<object, double>*/]);
}

// public void Rooted(Fuse.Elements.Element e) [instance] :341
void EdgeSwiper::Rooted(::g::Fuse::Elements::Element* e)
{
    _element = e;
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), _element, uDelegate::New(::TYPES[17/*Fuse.Input.PointerPressedHandler*/], (void*)EdgeSwiper__OnPointerPressed_fn, this));
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), _element, uDelegate::New(::TYPES[18/*Fuse.Input.PointerMovedHandler*/], (void*)EdgeSwiper__OnPointerMoved_fn, this));
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), _element, uDelegate::New(::TYPES[19/*Fuse.Input.PointerReleasedHandler*/], (void*)EdgeSwiper__OnPointerReleased_fn, this));
}

// public void Seek(double progress) [instance] :318
void EdgeSwiper::Seek(double progress)
{
    Progress(progress);
}

// public Fuse.Elements.Element get_Target() [instance] :291
::g::Fuse::Elements::Element* EdgeSwiper::Target()
{
    return _target;
}

// public void set_Target(Fuse.Elements.Element value) [instance] :292
void EdgeSwiper::Target(::g::Fuse::Elements::Element* value)
{
    _target = value;
}

// public void Unrooted() [instance] :349
void EdgeSwiper::Unrooted()
{
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), _element, uDelegate::New(::TYPES[17/*Fuse.Input.PointerPressedHandler*/], (void*)EdgeSwiper__OnPointerPressed_fn, this));
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), _element, uDelegate::New(::TYPES[18/*Fuse.Input.PointerMovedHandler*/], (void*)EdgeSwiper__OnPointerMoved_fn, this));
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), _element, uDelegate::New(::TYPES[19/*Fuse.Input.PointerReleasedHandler*/], (void*)EdgeSwiper__OnPointerReleased_fn, this));
}

// public generated EdgeSwiper New() [static] :275
EdgeSwiper* EdgeSwiper::New1()
{
    EdgeSwiper* obj2 = (EdgeSwiper*)uNew(EdgeSwiper_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Gestures\0.19.3\Internal\$.uno(847)
// --------------------------------------------------------------------

// internal sealed class Swiper :847
// {
// static Swiper() :847
static void Swiper__cctor__fn(uType* __type)
{
    Swiper::_swiperProperty_ = ::g::Fuse::Properties::CreateHandle();
}

uType* Swiper_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.ObjectSize = sizeof(Swiper);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Gestures.Internal.Swiper", options);
    type->fp_cctor_ = Swiper__cctor__fn;
    ::TYPES[22] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Gestures::Internal::SwipeRegion_typeof());
    ::TYPES[3] = ::g::Experimental::Physics::PointerVelocity_typeof()->MakeType(::g::Uno::Float2_typeof());
    ::TYPES[23] = ::g::Fuse::Gestures::Internal::SwipeRegion_typeof();
    ::TYPES[9] = ::g::Fuse::Node_typeof();
    ::TYPES[13] = uObject_typeof();
    ::TYPES[6] = ::g::Uno::Bool_typeof();
    ::TYPES[8] = ::g::Uno::Action_typeof();
    ::TYPES[11] = ::g::Uno::Float_typeof();
    ::TYPES[12] = ::g::Experimental::Physics::MotionSimulation_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[14] = ::g::Fuse::Input::PointerEventArgs_typeof();
    ::TYPES[5] = ::g::Uno::Double_typeof();
    ::TYPES[16] = ::g::Fuse::Input::Pointer_typeof();
    ::TYPES[17] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[19] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    ::TYPES[18] = ::g::Fuse::Input::PointerMovedHandler_typeof();
    ::TYPES[15] = ::g::Fuse::Time_typeof();
    ::TYPES[1] = ::g::Experimental::Physics::DestinationSimulation_typeof()->MakeType(::g::Uno::Float_typeof());
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Internal::Swiper, _allowNewRegion), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::Internal::Swiper, _attachCount), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Internal::Swiper, _currentCoord), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::Internal::Swiper, _down), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Gestures::Internal::Swiper, _element), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Internal::Swiper, _hasUpdated), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Internal::Swiper, _isHardCapture), 0,
        ::g::Fuse::Gestures::Internal::SwipeRegion_typeof(), offsetof(::g::Fuse::Gestures::Internal::Swiper, _pointerRegion), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Gestures::Internal::SwipeRegion_typeof()), offsetof(::g::Fuse::Gestures::Internal::Swiper, _pointerRegions), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::Internal::Swiper, _prevTime), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Gestures::Internal::SwipeRegion_typeof()), offsetof(::g::Fuse::Gestures::Internal::Swiper, _regions), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Internal::Swiper, _startCoord), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::Internal::Swiper, _startProgress), 0,
        ::g::Experimental::Physics::PointerVelocity_typeof()->MakeType(::g::Uno::Float2_typeof()), offsetof(::g::Fuse::Gestures::Internal::Swiper, _velocity), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Internal::Swiper, _velocityThreshold), 0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Gestures::Internal::Swiper::_swiperProperty_, uFieldFlagsStatic);
    return type;
}

// private Swiper(Fuse.Elements.Element elm) :853
void Swiper__ctor__fn(Swiper* __this, ::g::Fuse::Elements::Element* elm)
{
    __this->ctor_(elm);
}

// public void AddRegion(Fuse.Gestures.Internal.SwipeRegion region) :891
void Swiper__AddRegion_fn(Swiper* __this, ::g::Fuse::Gestures::Internal::SwipeRegion* region)
{
    __this->AddRegion(region);
}

// public static Fuse.Gestures.Internal.Swiper AttachSwiper(Fuse.Elements.Element elm) :859
void Swiper__AttachSwiper_fn(::g::Fuse::Elements::Element* elm, Swiper** __retval)
{
    *__retval = Swiper::AttachSwiper(elm);
}

// private void CheckNeedUpdated([bool off]) :928
void Swiper__CheckNeedUpdated_fn(Swiper* __this, bool* off)
{
    __this->CheckNeedUpdated(*off);
}

// public void Detach() :875
void Swiper__Detach_fn(Swiper* __this)
{
    __this->Detach();
}

// private float2 FromWindow(float2 p) :1009
void Swiper__FromWindow_fn(Swiper* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->FromWindow(*p);
}

// private void MoveUser(float2 coord) :1017
void Swiper__MoveUser_fn(Swiper* __this, ::g::Uno::Float2* coord)
{
    __this->MoveUser(*coord);
}

// private Swiper New(Fuse.Elements.Element elm) :853
void Swiper__New1_fn(::g::Fuse::Elements::Element* elm, Swiper** __retval)
{
    *__retval = Swiper::New1(elm);
}

// private void OnLostCapture() :960
void Swiper__OnLostCapture_fn(Swiper* __this)
{
    __this->OnLostCapture();
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) :1029
void Swiper__OnPointerMoved_fn(Swiper* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    __this->OnPointerMoved(sender, args);
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) :983
void Swiper__OnPointerPressed_fn(Swiper* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    __this->OnPointerPressed(sender, args);
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) :1109
void Swiper__OnPointerReleased_fn(Swiper* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    __this->OnPointerReleased(sender, args);
}

// private void OnRooted(Fuse.Elements.Element n) :908
void Swiper__OnRooted_fn(Swiper* __this, ::g::Fuse::Elements::Element* n)
{
    __this->OnRooted(n);
}

// private void OnUnrooted() :919
void Swiper__OnUnrooted_fn(Swiper* __this)
{
    __this->OnUnrooted();
}

// private void OnUpdated() :949
void Swiper__OnUpdated_fn(Swiper* __this)
{
    __this->OnUpdated();
}

// public void RemoveRegion(Fuse.Gestures.Internal.SwipeRegion region) :902
void Swiper__RemoveRegion_fn(Swiper* __this, ::g::Fuse::Gestures::Internal::SwipeRegion* region)
{
    __this->RemoveRegion(region);
}

// private Fuse.Gestures.Internal.SwipeRegion SelectRegion(float2 diff, bool force) :1086
void Swiper__SelectRegion_fn(Swiper* __this, ::g::Uno::Float2* diff, bool* force, ::g::Fuse::Gestures::Internal::SwipeRegion** __retval)
{
    *__retval = __this->SelectRegion(*diff, *force);
}

// public void SetActivation(Fuse.Gestures.Internal.SwipeRegion region, bool on, object origin, [bool bypass]) :1141
void Swiper__SetActivation_fn(Swiper* __this, ::g::Fuse::Gestures::Internal::SwipeRegion* region, bool* on, uObject* origin, bool* bypass)
{
    __this->SetActivation(region, *on, origin, *bypass);
}

uSStrong< ::g::Fuse::PropertyHandle*> Swiper::_swiperProperty_;

// private Swiper(Fuse.Elements.Element elm) [instance] :853
void Swiper::ctor_(::g::Fuse::Elements::Element* elm)
{
    _attachCount = 1;
    _pointerRegions = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[22/*Uno.Collections.List<Fuse.Gestures.Internal.SwipeRegion>*/]));
    _regions = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[22/*Uno.Collections.List<Fuse.Gestures.Internal.SwipeRegion>*/]));
    _down = -1;
    _velocityThreshold = 20.0f;
    _velocity = ((::g::Experimental::Physics::PointerVelocity*)::g::Experimental::Physics::PointerVelocity::New1(::TYPES[3/*Experimental.Physics.PointerVelocity<float2>*/]));
    _element = elm;
}

// public void AddRegion(Fuse.Gestures.Internal.SwipeRegion region) [instance] :891
void Swiper::AddRegion(::g::Fuse::Gestures::Internal::SwipeRegion* region)
{
    ::g::Fuse::Gestures::Internal::SwipeRegion* ret2;
    int i = 0;

    for (i = 0; i < uPtr(_regions)->Count(); ++i)
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_regions), uCRef<int>(i), &ret2), ret2))->Priority > uPtr(region)->Priority)
            break;

    ::g::Uno::Collections::List__Insert_fn(uPtr(_regions), uCRef<int>(i), region);
    CheckNeedUpdated(false);
}

// private void CheckNeedUpdated([bool off]) [instance] :928
void Swiper::CheckNeedUpdated(bool off)
{
    ::g::Fuse::Gestures::Internal::SwipeRegion* ret3;
    bool needUpdated = _down == -1;

    for (int i = 0; i < uPtr(_regions)->Count(); ++i)
        needUpdated = needUpdated || !uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_regions), uCRef<int>(i), &ret3), ret3))->IsStatic();

    if (needUpdated == _hasUpdated)
        return;

    if (needUpdated)
    {
        ::g::Fuse::UpdateManager::AddAction(uDelegate::New(::TYPES[8/*Uno.Action*/], (void*)Swiper__OnUpdated_fn, this), 0);
        _hasUpdated = true;
    }
    else if (off)
    {
        ::g::Fuse::UpdateManager::RemoveAction(uDelegate::New(::TYPES[8/*Uno.Action*/], (void*)Swiper__OnUpdated_fn, this), 0);
        _hasUpdated = false;
    }
}

// public void Detach() [instance] :875
void Swiper::Detach()
{
    _attachCount--;

    if (_attachCount == 0)
    {
        uPtr(uPtr(_element)->Properties())->Clear(Swiper::_swiperProperty());
        OnUnrooted();
    }
}

// private float2 FromWindow(float2 p) [instance] :1009
::g::Uno::Float2 Swiper::FromWindow(::g::Uno::Float2 p)
{
    if ((_element == NULL) || (uPtr(_element)->Parent() == NULL))
        return p;

    return uPtr(uPtr(_element)->Parent())->WindowToLocal(p);
}

// private void MoveUser(float2 coord) [instance] :1017
void Swiper::MoveUser(::g::Uno::Float2 coord)
{
    _currentCoord = coord;
    double t = ::g::Uno::Diagnostics::Clock::GetSeconds();
    double elapsed = t - _prevTime;
    _prevTime = t;
    ::g::Experimental::Physics::PointerVelocity__AddSample_fn(uPtr(_velocity), uCRef(_currentCoord), uCRef((float)elapsed), uCRef(!_isHardCapture));
}

// private void OnLostCapture() [instance] :960
void Swiper::OnLostCapture()
{
    ::g::Fuse::Gestures::Internal::SwipeRegion* ret4;
    ::g::Fuse::Gestures::Internal::SwipeRegion* ret5;
    _down = -1;
    _isHardCapture = false;

    for (int i = 0; i < uPtr(_pointerRegions)->Count(); ++i)
        ::g::Experimental::Physics::MotionSimulation::set_Position_ex(uInterface(uPtr(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_pointerRegions), uCRef<int>(i), &ret4), ret4))->PointBody1D), ::TYPES[12/*Experimental.Physics.MotionSimulation<float>*/]), uCRef((float)uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_pointerRegions), uCRef<int>(i), &ret5), ret5))->Progress()));

    if (_pointerRegion != NULL)
        ::g::Experimental::Physics::MotionSimulation::set_Position_ex(uInterface(uPtr(uPtr(_pointerRegion)->PointBody1D), ::TYPES[12/*Experimental.Physics.MotionSimulation<float>*/]), uCRef((float)uPtr(_pointerRegion)->Progress()));

    ::g::Fuse::Input::Pointer::ReleaseAllCaptures(this);
    CheckNeedUpdated(false);
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) [instance] :1029
void Swiper::OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    if (_down != uPtr(args)->PointIndex())
        return;

    MoveUser(FromWindow(uPtr(args)->WindowPoint()));

    for (int i = 0; i < 2; ++i)
    {
        ::g::Uno::Float2 diff = ::g::Uno::Float2__op_Subtraction2(_currentCoord, _startCoord);

        if (!_isHardCapture || _allowNewRegion)
        {
            ::g::Fuse::Gestures::Internal::SwipeRegion* selRegion = SelectRegion(diff, _isHardCapture);

            if ((selRegion != NULL) && (selRegion != _pointerRegion))
            {
                _pointerRegion = selRegion;

                if (!_isHardCapture)
                {
                    if (!uPtr(args)->TryHardCapture(this, uDelegate::New(::TYPES[8/*Uno.Action*/], (void*)Swiper__OnLostCapture_fn, this), _element))
                    {
                        OnLostCapture();
                        return;
                    }

                    _isHardCapture = true;
                    _startCoord = FromWindow(uPtr(args)->WindowPoint());
                    ::g::Experimental::Physics::PointerVelocity__Reset1_fn(uPtr(_velocity), uCRef(_currentCoord), uCRef(::g::Uno::Float2__New1(0.0f)));
                }

                _startProgress = uPtr(_pointerRegion)->Progress();
                _prevTime = ::g::Uno::Diagnostics::Clock::GetSeconds();
                _currentCoord = FromWindow(uPtr(args)->WindowPoint());
                diff = ::g::Uno::Float2__op_Subtraction2(_currentCoord, _startCoord);
            }
        }

        if (_pointerRegion != NULL)
        {
            uPtr(_pointerRegion)->InteractProgress(diff, _startProgress);
            _allowNewRegion = ((_startProgress == 0.0) && (uPtr(_pointerRegion)->Progress() == 0.0));
            continue;
        }

        break;
    }
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) [instance] :983
void Swiper::OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    ::g::Fuse::Gestures::Internal::SwipeRegion* ret6;

    if (_down != -1)
        return;

    ::g::Uno::Float2 coord = FromWindow(uPtr(args)->WindowPoint());
    uPtr(_pointerRegions)->Clear();
    _pointerRegion = NULL;

    for (int i = 0; i < uPtr(_regions)->Count(); ++i)
    {
        ::g::Fuse::Gestures::Internal::SwipeRegion* region = (::g::Uno::Collections::List__get_Item_fn(uPtr(_regions), uCRef<int>(i), &ret6), ret6);

        if (uPtr(region)->IsSelectable() && uPtr(region)->IsPointInside(_element, coord))
            ::g::Uno::Collections::List__Add_fn(uPtr(_pointerRegions), region);
    }

    if (uPtr(_pointerRegions)->Count() == 0)
        return;

    _isHardCapture = false;

    if (args->TrySoftCapture(this, uDelegate::New(::TYPES[8/*Uno.Action*/], (void*)Swiper__OnLostCapture_fn, this), _element))
    {
        _down = uPtr(args)->PointIndex();
        _startCoord = FromWindow(args->WindowPoint());
    }
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) [instance] :1109
void Swiper::OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    ::g::Uno::Float2 ret7;

    if (_down != uPtr(args)->PointIndex())
        return;

    if (!_isHardCapture || (_pointerRegion == NULL))
    {
        OnLostCapture();
        return;
    }

    MoveUser(FromWindow(uPtr(args)->WindowPoint()));
    ::g::Fuse::Input::Pointer::ReleaseAllCaptures(this);
    float v = uPtr(_pointerRegion)->ScalarValue((::g::Experimental::Physics::PointerVelocity__get_CurrentVelocity_fn(uPtr(_velocity), &ret7), ret7));
    double pdiff = uPtr(_pointerRegion)->Progress() - _startProgress;
    bool on = false;

    if (v < -_velocityThreshold)
        on = false;
    else if (v > _velocityThreshold)
        on = true;
    else if (pdiff >= 0.0)
        on = uPtr(_pointerRegion)->Progress() > (double)uPtr(_pointerRegion)->ActivationThreshold;
    else
        on = !(uPtr(_pointerRegion)->Progress() < (double)uPtr(_pointerRegion)->DeactivationThreshold);

    _down = -1;
    _isHardCapture = false;
    SetActivation(_pointerRegion, on, NULL, false);
}

// private void OnRooted(Fuse.Elements.Element n) [instance] :908
void Swiper::OnRooted(::g::Fuse::Elements::Element* n)
{
    _pointerRegion = NULL;
    uPtr(_pointerRegions)->Clear();
    _element = n;
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), _element, uDelegate::New(::TYPES[17/*Fuse.Input.PointerPressedHandler*/], (void*)Swiper__OnPointerPressed_fn, this));
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), _element, uDelegate::New(::TYPES[19/*Fuse.Input.PointerReleasedHandler*/], (void*)Swiper__OnPointerReleased_fn, this));
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), _element, uDelegate::New(::TYPES[18/*Fuse.Input.PointerMovedHandler*/], (void*)Swiper__OnPointerMoved_fn, this));
}

// private void OnUnrooted() [instance] :919
void Swiper::OnUnrooted()
{
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), _element, uDelegate::New(::TYPES[17/*Fuse.Input.PointerPressedHandler*/], (void*)Swiper__OnPointerPressed_fn, this));
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), _element, uDelegate::New(::TYPES[19/*Fuse.Input.PointerReleasedHandler*/], (void*)Swiper__OnPointerReleased_fn, this));
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), _element, uDelegate::New(::TYPES[18/*Fuse.Input.PointerMovedHandler*/], (void*)Swiper__OnPointerMoved_fn, this));
    _element = NULL;
}

// private void OnUpdated() [instance] :949
void Swiper::OnUpdated()
{
    ::g::Fuse::Gestures::Internal::SwipeRegion* ret8;
    float ret9;

    for (int i = 0; i < uPtr(_regions)->Count(); ++i)
    {
        ::g::Fuse::Gestures::Internal::SwipeRegion* region = (::g::Uno::Collections::List__get_Item_fn(uPtr(_regions), uCRef<int>(i), &ret8), ret8);
        ::g::Experimental::Physics::Simulation::Update(uInterface(uPtr(uPtr(region)->PointBody1D), ::TYPES[7/*Experimental.Physics.Simulation*/]), ::g::Fuse::Time::FrameInterval() * uPtr(region)->TimeMultiplier);
        region->SetProgress((double)(::g::Experimental::Physics::MotionSimulation::get_Position_ex(uInterface(uPtr(region->PointBody1D), ::TYPES[12/*Experimental.Physics.MotionSimulation<float>*/]), &ret9), ret9), false);
    }

    CheckNeedUpdated(true);
}

// public void RemoveRegion(Fuse.Gestures.Internal.SwipeRegion region) [instance] :902
void Swiper::RemoveRegion(::g::Fuse::Gestures::Internal::SwipeRegion* region)
{
    bool ret10;
    ::g::Uno::Collections::List__Remove_fn(uPtr(_regions), region, &ret10);
    CheckNeedUpdated(false);
}

// private Fuse.Gestures.Internal.SwipeRegion SelectRegion(float2 diff, bool force) [instance] :1086
::g::Fuse::Gestures::Internal::SwipeRegion* Swiper::SelectRegion(::g::Uno::Float2 diff, bool force)
{
    ::g::Fuse::Gestures::Internal::SwipeRegion* ret11;
    ::g::Fuse::Gestures::Internal::SwipeRegion* sel = NULL;

    for (int i = 0; i < uPtr(_pointerRegions)->Count(); i++)
    {
        ::g::Fuse::Gestures::Internal::SwipeRegion* region = (::g::Uno::Collections::List__get_Item_fn(uPtr(_pointerRegions), uCRef<int>(i), &ret11), ret11);
        float str = uPtr(region)->ActivateStrength(diff);

        if (str <= 0.0f)
            continue;

        if (!force && (str < 10.0f))
            continue;

        if ((sel == NULL) || (uPtr(sel)->Progress() < region->Progress()))
            sel = region;
    }

    return sel;
}

// public void SetActivation(Fuse.Gestures.Internal.SwipeRegion region, bool on, object origin, [bool bypass]) [instance] :1141
void Swiper::SetActivation(::g::Fuse::Gestures::Internal::SwipeRegion* region, bool on, uObject* origin, bool bypass)
{
    float ret12;

    if (origin == this)
        return;

    float d = on ? 1.0f : 0.0f;
    bool changed = false;

    if (d != (::g::Experimental::Physics::DestinationSimulation::get_Destination_ex(uInterface(uPtr(uPtr(region)->PointBody1D), ::TYPES[1/*Experimental.Physics.DestinationSimulation<float>*/]), &ret12), ret12))
    {
        ::g::Experimental::Physics::DestinationSimulation::set_Destination_ex(uInterface(uPtr(uPtr(region)->PointBody1D), ::TYPES[1/*Experimental.Physics.DestinationSimulation<float>*/]), uCRef(d));
        region->OnActivationChanged(on, (origin != NULL) ? origin : this);
        changed = true;
    }

    if (bypass)
    {
        ::g::Experimental::Physics::MotionSimulation::set_Position_ex(uInterface(uPtr(uPtr(region)->PointBody1D), ::TYPES[12/*Experimental.Physics.MotionSimulation<float>*/]), uCRef(d));
        region->SetProgress((double)d, false);
    }
    else
    {
        if (changed)
            uPtr(region)->TriggerSwipe = true;

        ::g::Experimental::Physics::MotionSimulation::set_Position_ex(uInterface(uPtr(uPtr(region)->PointBody1D), ::TYPES[12/*Experimental.Physics.MotionSimulation<float>*/]), uCRef((float)uPtr(region)->Progress()));
    }

    CheckNeedUpdated(false);
}

// public static Fuse.Gestures.Internal.Swiper AttachSwiper(Fuse.Elements.Element elm) [static] :859
Swiper* Swiper::AttachSwiper(::g::Fuse::Elements::Element* elm)
{
    Swiper_typeof()->Init();
    uObject* v;

    if (uPtr(uPtr(elm)->Properties())->TryGet(Swiper::_swiperProperty(), &v))
    {
        Swiper* s = uAs<Swiper*>(v, Swiper_typeof());
        uPtr(s)->_attachCount++;
        return s;
    }

    Swiper* ns = Swiper::New1(elm);
    uPtr(uPtr(elm)->Properties())->Set(Swiper::_swiperProperty(), ns);
    ns->OnRooted(elm);
    return ns;
}

// private Swiper New(Fuse.Elements.Element elm) [static] :853
Swiper* Swiper::New1(::g::Fuse::Elements::Element* elm)
{
    Swiper* obj1 = (Swiper*)uNew(Swiper_typeof());
    obj1->ctor_(elm);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Gestures\0.19.3\Internal\$.uno(663)
// --------------------------------------------------------------------

// internal sealed class SwipeRegion :663
// {
uType* SwipeRegion_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 20;
    options.ObjectSize = sizeof(SwipeRegion);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Gestures.Internal.SwipeRegion", options);
    type->fp_ctor_ = (void*)SwipeRegion__New1_fn;
    ::TYPES[1] = ::g::Experimental::Physics::DestinationSimulation_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[2] = ::g::Experimental::Physics::SmoothSnap_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[24] = ::g::Uno::Float4_typeof();
    ::TYPES[13] = uObject_typeof();
    ::TYPES[20] = ::g::Uno::Delegate_typeof();
    ::TYPES[25] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[5] = ::g::Uno::Double_typeof();
    ::TYPES[4] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[26] = ::g::Uno::Int_typeof();
    ::TYPES[10] = ::g::Uno::Float2_typeof();
    ::TYPES[27] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::Bool_typeof(), uObject_typeof());
    ::TYPES[28] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::Double_typeof(), uObject_typeof());
    ::TYPES[8] = ::g::Uno::Action_typeof();
    ::TYPES[7] = ::g::Experimental::Physics::Simulation_typeof();
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, _progress), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, _wasActive), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, ActivationThreshold), 0,
        ::g::Fuse::Gestures::Internal::SwipeRegionArea_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, Area), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, AreaVector), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, AreaVectorDistance), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, DeactivationThreshold), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, Direction), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, IsInterruptible), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, Length), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, LengthElement), 0,
        ::g::Experimental::Physics::DestinationSimulation_typeof()->MakeType(::g::Uno::Float_typeof()), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, PointBody1D), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, Priority), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, Range), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, RevertActive), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, TimeMultiplier), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, TriggerSwipe), 0,
        ::g::Uno::Action2_typeof()->MakeType(::g::Uno::Bool_typeof(), uObject_typeof()), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, ActivationChanged1), 0,
        ::g::Uno::Action2_typeof()->MakeType(::g::Uno::Double_typeof(), uObject_typeof()), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, ProgressChanged1), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, Swiped1), 0);
    return type;
}

// public generated SwipeRegion() :663
void SwipeRegion__ctor__fn(SwipeRegion* __this)
{
    __this->ctor_();
}

// public float ActivateStrength(float2 diff) :816
void SwipeRegion__ActivateStrength_fn(SwipeRegion* __this, ::g::Uno::Float2* diff, float* __retval)
{
    *__retval = __this->ActivateStrength(*diff);
}

// public generated void add_ActivationChanged(Uno.Action<bool, object> value) :741
void SwipeRegion__add_ActivationChanged_fn(SwipeRegion* __this, uDelegate* value)
{
    __this->add_ActivationChanged(value);
}

// public generated void remove_ActivationChanged(Uno.Action<bool, object> value) :741
void SwipeRegion__remove_ActivationChanged_fn(SwipeRegion* __this, uDelegate* value)
{
    __this->remove_ActivationChanged(value);
}

// private static float DistanceLine(float4 line, float2 p) :686
void SwipeRegion__DistanceLine_fn(::g::Uno::Float4* line, ::g::Uno::Float2* p, float* __retval)
{
    *__retval = SwipeRegion::DistanceLine(*line, *p);
}

// private void DoRevertActive() :726
void SwipeRegion__DoRevertActive_fn(SwipeRegion* __this)
{
    __this->DoRevertActive();
}

// private void DoSwiped() :734
void SwipeRegion__DoSwiped_fn(SwipeRegion* __this)
{
    __this->DoSwiped();
}

// public void InteractProgress(float2 diff, double startProgress) :831
void SwipeRegion__InteractProgress_fn(SwipeRegion* __this, ::g::Uno::Float2* diff, double* startProgress)
{
    __this->InteractProgress(*diff, *startProgress);
}

// public bool IsPointInside(Fuse.Elements.Element prime, float2 coord) :796
void SwipeRegion__IsPointInside_fn(SwipeRegion* __this, ::g::Fuse::Elements::Element* prime, ::g::Uno::Float2* coord, bool* __retval)
{
    *__retval = __this->IsPointInside(prime, *coord);
}

// public bool get_IsSelectable() :765
void SwipeRegion__get_IsSelectable_fn(SwipeRegion* __this, bool* __retval)
{
    *__retval = __this->IsSelectable();
}

// public bool get_IsStatic() :760
void SwipeRegion__get_IsStatic_fn(SwipeRegion* __this, bool* __retval)
{
    *__retval = __this->IsStatic();
}

// public generated SwipeRegion New() :663
void SwipeRegion__New1_fn(SwipeRegion** __retval)
{
    *__retval = SwipeRegion::New1();
}

// public void OnActivationChanged(bool value, object origin) :742
void SwipeRegion__OnActivationChanged_fn(SwipeRegion* __this, bool* value, uObject* origin)
{
    __this->OnActivationChanged(*value, origin);
}

// public double get_Progress() :694
void SwipeRegion__get_Progress_fn(SwipeRegion* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public generated void add_ProgressChanged(Uno.Action<double, object> value) :754
void SwipeRegion__add_ProgressChanged_fn(SwipeRegion* __this, uDelegate* value)
{
    __this->add_ProgressChanged(value);
}

// public generated void remove_ProgressChanged(Uno.Action<double, object> value) :754
void SwipeRegion__remove_ProgressChanged_fn(SwipeRegion* __this, uDelegate* value)
{
    __this->remove_ProgressChanged(value);
}

// private static float ScalarProjection(float2 a, float2 b) :670
void SwipeRegion__ScalarProjection_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, float* __retval)
{
    *__retval = SwipeRegion::ScalarProjection(*a, *b);
}

// public float ScalarValue(float2 x) :841
void SwipeRegion__ScalarValue_fn(SwipeRegion* __this, ::g::Uno::Float2* x, float* __retval)
{
    *__retval = __this->ScalarValue(*x);
}

// public void SetProgress(double value, [bool interacting]) :697
void SwipeRegion__SetProgress_fn(SwipeRegion* __this, double* value, bool* interacting)
{
    __this->SetProgress(*value, *interacting);
}

// public generated void add_Swiped(Uno.Action<bool> value) :724
void SwipeRegion__add_Swiped_fn(SwipeRegion* __this, uDelegate* value)
{
    __this->add_Swiped(value);
}

// public generated void remove_Swiped(Uno.Action<bool> value) :724
void SwipeRegion__remove_Swiped_fn(SwipeRegion* __this, uDelegate* value)
{
    __this->remove_Swiped(value);
}

// private static float VectorAngle(float2 a, float2 b) :681
void SwipeRegion__VectorAngle_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, float* __retval)
{
    *__retval = SwipeRegion::VectorAngle(*a, *b);
}

// private static float2 VectorProjection(float2 a, float2 b) :665
void SwipeRegion__VectorProjection_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* __retval)
{
    *__retval = SwipeRegion::VectorProjection(*a, *b);
}

// private static float2 VectorRejection(float2 a, float2 b) :675
void SwipeRegion__VectorRejection_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* __retval)
{
    *__retval = SwipeRegion::VectorRejection(*a, *b);
}

// public generated SwipeRegion() [instance] :663
void SwipeRegion::ctor_()
{
    Range = ::g::Uno::Math::DegreesToRadians1(30.0f);
    PointBody1D = (uObject*)((::g::Experimental::Physics::SmoothSnap*)::g::Experimental::Physics::SmoothSnap::CreateNormalized(::TYPES[2/*Experimental.Physics.SmoothSnap<float>*/]));
    AreaVectorDistance = 100.0f;
    Length = 100.0;
    ActivationThreshold = 0.5f;
    DeactivationThreshold = 0.5f;
    IsInterruptible = true;
    TimeMultiplier = 1.0;
}

// public float ActivateStrength(float2 diff) [instance] :816
float SwipeRegion::ActivateStrength(::g::Uno::Float2 diff)
{
    float l = ::g::Uno::Vector::Length(diff);
    float a = SwipeRegion::VectorAngle(diff, Direction);

    if ((Progress() < 1.0) && (a < (Range / 2.0f)))
        return l;

    if ((Progress() > 0.0) && (a > (3.14159274f - (Range / 2.0f))))
        return l;

    return 0.0f;
}

// public generated void add_ActivationChanged(Uno.Action<bool, object> value) [instance] :741
void SwipeRegion::add_ActivationChanged(uDelegate* value)
{
    ActivationChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ActivationChanged1, value), ::TYPES[27/*Uno.Action<bool, object>*/]);
}

// public generated void remove_ActivationChanged(Uno.Action<bool, object> value) [instance] :741
void SwipeRegion::remove_ActivationChanged(uDelegate* value)
{
    ActivationChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ActivationChanged1, value), ::TYPES[27/*Uno.Action<bool, object>*/]);
}

// private void DoRevertActive() [instance] :726
void SwipeRegion::DoRevertActive()
{
    SetProgress(0.0, false);
    ::g::Experimental::Physics::DestinationSimulation::set_Destination_ex(uInterface(uPtr(PointBody1D), ::TYPES[1/*Experimental.Physics.DestinationSimulation<float>*/]), uCRef(0.0f));
    OnActivationChanged(false, this);
}

// private void DoSwiped() [instance] :734
void SwipeRegion::DoSwiped()
{
    if (::g::Uno::Delegate::op_Inequality(Swiped1, NULL))
        uPtr(Swiped1)->InvokeVoid(uCRef(_wasActive));
}

// public void InteractProgress(float2 diff, double startProgress) [instance] :831
void SwipeRegion::InteractProgress(::g::Uno::Float2 diff, double startProgress)
{
    float l = SwipeRegion::ScalarProjection(diff, Direction);
    double extent = Length;

    if (LengthElement != NULL)
        extent = (double)::g::Uno::Math::Abs1(::g::Uno::Vector::Dot(Direction, uPtr(LengthElement)->ActualSize()));

    SetProgress(::g::Uno::Math::Clamp(((double)l / extent) + startProgress, 0.0, 1.0), true);
}

// public bool IsPointInside(Fuse.Elements.Element prime, float2 coord) [instance] :796
bool SwipeRegion::IsPointInside(::g::Fuse::Elements::Element* prime, ::g::Uno::Float2 coord)
{
    if (Area == 0)
        return true;

    if (Area == 1)
    {
        ::g::Uno::Float2 size = uPtr(prime)->ActualSize();

        if ((((coord.X < 0.0f) || (coord.Y < 0.0f)) || (coord.X > size.X)) || (coord.Y > size.Y))
            return false;

        ::g::Uno::Float4 v = ::g::Uno::Float4__op_Multiply2(AreaVector, ::g::Uno::Float4__New7(size, size));
        float l = SwipeRegion::DistanceLine(v, coord);
        return l < AreaVectorDistance;
    }

    return false;
}

// public bool get_IsSelectable() [instance] :765
bool SwipeRegion::IsSelectable()
{
    return IsStatic() || IsInterruptible;
}

// public bool get_IsStatic() [instance] :760
bool SwipeRegion::IsStatic()
{
    return ::g::Experimental::Physics::Simulation::IsStatic(uInterface(uPtr(PointBody1D), ::TYPES[7/*Experimental.Physics.Simulation*/]));
}

// public void OnActivationChanged(bool value, object origin) [instance] :742
void SwipeRegion::OnActivationChanged(bool value, uObject* origin)
{
    if (::g::Uno::Delegate::op_Inequality(ActivationChanged1, NULL))
        uPtr(ActivationChanged1)->Invoke(2, uCRef(value), origin);
}

// public double get_Progress() [instance] :694
double SwipeRegion::Progress()
{
    return _progress;
}

// public generated void add_ProgressChanged(Uno.Action<double, object> value) [instance] :754
void SwipeRegion::add_ProgressChanged(uDelegate* value)
{
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ProgressChanged1, value), ::TYPES[28/*Uno.Action<double, object>*/]);
}

// public generated void remove_ProgressChanged(Uno.Action<double, object> value) [instance] :754
void SwipeRegion::remove_ProgressChanged(uDelegate* value)
{
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ProgressChanged1, value), ::TYPES[28/*Uno.Action<double, object>*/]);
}

// public float ScalarValue(float2 x) [instance] :841
float SwipeRegion::ScalarValue(::g::Uno::Float2 x)
{
    return SwipeRegion::ScalarProjection(x, Direction);
}

// public void SetProgress(double value, [bool interacting]) [instance] :697
void SwipeRegion::SetProgress(double value, bool interacting)
{
    _progress = value;

    if (::g::Uno::Delegate::op_Inequality(ProgressChanged1, NULL))
        uPtr(ProgressChanged1)->Invoke(2, uCRef(_progress), this);

    if (interacting)
        return;

    if ((_progress == 1.0) || (_progress == 0.0))
    {
        bool active = _progress == 1.0;

        if (TriggerSwipe)
        {
            TriggerSwipe = false;
            _wasActive = active;
            ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[8/*Uno.Action*/], (void*)SwipeRegion__DoSwiped_fn, this));
        }

        if (active && RevertActive)
            ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[8/*Uno.Action*/], (void*)SwipeRegion__DoRevertActive_fn, this));
    }
}

// public generated void add_Swiped(Uno.Action<bool> value) [instance] :724
void SwipeRegion::add_Swiped(uDelegate* value)
{
    Swiped1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Swiped1, value), ::TYPES[25/*Uno.Action<bool>*/]);
}

// public generated void remove_Swiped(Uno.Action<bool> value) [instance] :724
void SwipeRegion::remove_Swiped(uDelegate* value)
{
    Swiped1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Swiped1, value), ::TYPES[25/*Uno.Action<bool>*/]);
}

// private static float DistanceLine(float4 line, float2 p) [static] :686
float SwipeRegion::DistanceLine(::g::Uno::Float4 line, ::g::Uno::Float2 p)
{
    return ::g::Uno::Vector::Length(SwipeRegion::VectorRejection(::g::Uno::Float2__op_Subtraction2(p, ::g::Uno::Float2__New2(line.X, line.Y)), ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(line.Z, line.W), ::g::Uno::Float2__New2(line.X, line.Y))));
}

// public generated SwipeRegion New() [static] :663
SwipeRegion* SwipeRegion::New1()
{
    SwipeRegion* obj1 = (SwipeRegion*)uNew(SwipeRegion_typeof());
    obj1->ctor_();
    return obj1;
}

// private static float ScalarProjection(float2 a, float2 b) [static] :670
float SwipeRegion::ScalarProjection(::g::Uno::Float2 a, ::g::Uno::Float2 b)
{
    return ::g::Uno::Vector::Dot(a, b) / ::g::Uno::Vector::Length(b);
}

// private static float VectorAngle(float2 a, float2 b) [static] :681
float SwipeRegion::VectorAngle(::g::Uno::Float2 a, ::g::Uno::Float2 b)
{
    return ::g::Uno::Math::Acos1(::g::Uno::Vector::Dot(a, b) / (::g::Uno::Vector::Length(a) * ::g::Uno::Vector::Length(b)));
}

// private static float2 VectorProjection(float2 a, float2 b) [static] :665
::g::Uno::Float2 SwipeRegion::VectorProjection(::g::Uno::Float2 a, ::g::Uno::Float2 b)
{
    return ::g::Uno::Float2__op_Multiply(::g::Uno::Vector::Dot(a, b) / ::g::Uno::Vector::Dot(b, b), b);
}

// private static float2 VectorRejection(float2 a, float2 b) [static] :675
::g::Uno::Float2 SwipeRegion::VectorRejection(::g::Uno::Float2 a, ::g::Uno::Float2 b)
{
    ::g::Uno::Float2 a1 = SwipeRegion::VectorProjection(a, b);
    return ::g::Uno::Float2__op_Subtraction2(a, a1);
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Gestures\0.19.3\Internal\$.uno(657)
// --------------------------------------------------------------------

// internal enum SwipeRegionArea :657
uEnumType* SwipeRegionArea_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.Internal.SwipeRegionArea", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "All", 0LL,
        "Vector", 1LL);
    return type;
}

}}}} // ::g::Fuse::Gestures::Internal
