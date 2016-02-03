// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_GESTURES_INTERNAL_EDGE_SWIPER_H__
#define __APP_FUSE_GESTURES_INTERNAL_EDGE_SWIPER_H__

#include <app/Uno.Float2.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Experimental { namespace Physics { struct PointerVelocity__float2; } } }
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { namespace Gestures { struct SwipeGestureHelper; } } }
namespace app { namespace Fuse { namespace Input { struct PointerMovedArgs; } } }
namespace app { namespace Fuse { namespace Input { struct PointerPressedArgs; } } }
namespace app { namespace Fuse { namespace Input { struct PointerReleasedArgs; } } }

namespace app {
namespace Fuse {
namespace Gestures {
namespace Internal {

struct EdgeSwiper;

extern ::uStaticStrong< ::app::Fuse::Gestures::SwipeGestureHelper*> EdgeSwiper___leftRightSwipe;
extern ::uStaticStrong< ::app::Fuse::Gestures::SwipeGestureHelper*> EdgeSwiper___upDownSwipe;

struct EdgeSwiper__uType : ::uClassType
{
};

EdgeSwiper__uType* EdgeSwiper__typeof();

void EdgeSwiper___ObjInit(EdgeSwiper* __this);
void EdgeSwiper___TypeInit(::uStatic* __this);
void EdgeSwiper__add_ProgressChanged(EdgeSwiper* __this, ::uDelegate* value);
void EdgeSwiper__CalcProgress(EdgeSwiper* __this);
void EdgeSwiper__CheckNeedUpdated(EdgeSwiper* __this, bool off);
void EdgeSwiper__Disable(EdgeSwiper* __this);
void EdgeSwiper__Enable(EdgeSwiper* __this);
::app::Uno::Float2 EdgeSwiper__FromWindow(EdgeSwiper* __this, ::app::Uno::Float2 p);
int EdgeSwiper__get_Edge(EdgeSwiper* __this);
float EdgeSwiper__get_EdgeThreshold(EdgeSwiper* __this);
bool EdgeSwiper__get_IsEnabled(EdgeSwiper* __this);
double EdgeSwiper__get_Progress(EdgeSwiper* __this);
::app::Fuse::Elements::Element* EdgeSwiper__get_Target(EdgeSwiper* __this);
bool EdgeSwiper__IsWithinSwipeBounds(EdgeSwiper* __this, ::app::Uno::Float2 windowPoint);
void EdgeSwiper__MoveUser(EdgeSwiper* __this, ::app::Uno::Float2 coord);
EdgeSwiper* EdgeSwiper__New_1(::uStatic* __this);
void EdgeSwiper__OnLostCapture(EdgeSwiper* __this);
void EdgeSwiper__OnPointerMoved(EdgeSwiper* __this, ::uObject* sender, ::app::Fuse::Input::PointerMovedArgs* args);
void EdgeSwiper__OnPointerPressed(EdgeSwiper* __this, ::uObject* sender, ::app::Fuse::Input::PointerPressedArgs* args);
void EdgeSwiper__OnPointerReleased(EdgeSwiper* __this, ::uObject* sender, ::app::Fuse::Input::PointerReleasedArgs* args);
void EdgeSwiper__OnUpdated(EdgeSwiper* __this);
float EdgeSwiper__PrimaryValue(EdgeSwiper* __this, ::app::Uno::Float2 v);
void EdgeSwiper__remove_ProgressChanged(EdgeSwiper* __this, ::uDelegate* value);
void EdgeSwiper__Rooted(EdgeSwiper* __this, ::app::Fuse::Elements::Element* e);
void EdgeSwiper__Seek(EdgeSwiper* __this, double progress);
void EdgeSwiper__set_Edge(EdgeSwiper* __this, int value);
void EdgeSwiper__set_EdgeThreshold(EdgeSwiper* __this, float value);
void EdgeSwiper__set_Progress(EdgeSwiper* __this, double value);
void EdgeSwiper__set_Target(EdgeSwiper* __this, ::app::Fuse::Elements::Element* value);
void EdgeSwiper__Unrooted(EdgeSwiper* __this);

struct EdgeSwiper : ::uObject
{
    ::uStrong< ::uObject*> _pointBody1D;
    float _edgeThreshold;
    double _progress;
    int _edge;
    ::uStrong< ::app::Fuse::Elements::Element*> _target;
    ::app::Uno::Float2 _previousCoord;
    ::app::Uno::Float2 _currentCoord;
    ::app::Uno::Float2 _startCoord;
    double _startProgress;
    double _prevTime;
    float _velocityThreshold;
    int _down;
    bool _isHardCapture;
    ::uStrong< ::app::Experimental::Physics::PointerVelocity__float2*> _velocity;
    ::uStrong< ::app::Fuse::Elements::Element*> _element;
    bool _hasUpdated;
    ::uStrong< ::uDelegate*> ProgressChanged;

    void _ObjInit() { EdgeSwiper___ObjInit(this); }
    void add_ProgressChanged(::uDelegate* value) { EdgeSwiper__add_ProgressChanged(this, value); }
    void CalcProgress() { EdgeSwiper__CalcProgress(this); }
    void CheckNeedUpdated(bool off) { EdgeSwiper__CheckNeedUpdated(this, off); }
    void Disable() { EdgeSwiper__Disable(this); }
    void Enable() { EdgeSwiper__Enable(this); }
    ::app::Uno::Float2 FromWindow(::app::Uno::Float2 p) { return EdgeSwiper__FromWindow(this, p); }
    int Edge() { return EdgeSwiper__get_Edge(this); }
    float EdgeThreshold() { return EdgeSwiper__get_EdgeThreshold(this); }
    bool IsEnabled() { return EdgeSwiper__get_IsEnabled(this); }
    double Progress() { return EdgeSwiper__get_Progress(this); }
    ::app::Fuse::Elements::Element* Target() { return EdgeSwiper__get_Target(this); }
    bool IsWithinSwipeBounds(::app::Uno::Float2 windowPoint) { return EdgeSwiper__IsWithinSwipeBounds(this, windowPoint); }
    void MoveUser(::app::Uno::Float2 coord) { EdgeSwiper__MoveUser(this, coord); }
    void OnLostCapture() { EdgeSwiper__OnLostCapture(this); }
    void OnPointerMoved(::uObject* sender, ::app::Fuse::Input::PointerMovedArgs* args) { EdgeSwiper__OnPointerMoved(this, sender, args); }
    void OnPointerPressed(::uObject* sender, ::app::Fuse::Input::PointerPressedArgs* args) { EdgeSwiper__OnPointerPressed(this, sender, args); }
    void OnPointerReleased(::uObject* sender, ::app::Fuse::Input::PointerReleasedArgs* args) { EdgeSwiper__OnPointerReleased(this, sender, args); }
    void OnUpdated() { EdgeSwiper__OnUpdated(this); }
    float PrimaryValue(::app::Uno::Float2 v) { return EdgeSwiper__PrimaryValue(this, v); }
    void remove_ProgressChanged(::uDelegate* value) { EdgeSwiper__remove_ProgressChanged(this, value); }
    void Rooted(::app::Fuse::Elements::Element* e) { EdgeSwiper__Rooted(this, e); }
    void Seek(double progress) { EdgeSwiper__Seek(this, progress); }
    void Edge(int value) { EdgeSwiper__set_Edge(this, value); }
    void EdgeThreshold(float value) { EdgeSwiper__set_EdgeThreshold(this, value); }
    void Progress(double value) { EdgeSwiper__set_Progress(this, value); }
    void Target(::app::Fuse::Elements::Element* value) { EdgeSwiper__set_Target(this, value); }
    void Unrooted() { EdgeSwiper__Unrooted(this); }
};

}}}}


#endif
