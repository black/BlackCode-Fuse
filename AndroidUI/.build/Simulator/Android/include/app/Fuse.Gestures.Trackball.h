// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_GESTURES_TRACKBALL_H__
#define __APP_FUSE_GESTURES_TRACKBALL_H__

#include <app/Fuse.Behavior.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <Uno.h>
namespace app { namespace Experimental { namespace Physics { struct PointerVelocity__float; } } }
namespace app { namespace Fuse { namespace Entities { struct Transform3D; } } }
namespace app { namespace Fuse { namespace Input { struct PointerMovedArgs; } } }
namespace app { namespace Fuse { namespace Input { struct PointerPressedArgs; } } }
namespace app { namespace Fuse { namespace Input { struct PointerReleasedArgs; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Gestures {

struct Trackball;

struct Trackball__uType : ::app::Fuse::Behavior__uType
{
};

Trackball__uType* Trackball__typeof();

void Trackball___ObjInit_1(Trackball* __this);
void Trackball__BringToFront(Trackball* __this, ::app::Uno::Float3 normal);
void Trackball__CheckNeedUpdate(Trackball* __this);
::app::Uno::Float4x4 Trackball__get_InverseViewProjection(Trackball* __this);
::uObject* Trackball__get_Viewport(Trackball* __this);
Trackball* Trackball__New_1(::uStatic* __this);
void Trackball__OnLostCapture(Trackball* __this);
void Trackball__OnPointerMoved(Trackball* __this, ::uObject* s, ::app::Fuse::Input::PointerMovedArgs* args);
void Trackball__OnPointerPressed(Trackball* __this, ::uObject* s, ::app::Fuse::Input::PointerPressedArgs* args);
void Trackball__OnPointerReleased(Trackball* __this, ::uObject* s, ::app::Fuse::Input::PointerReleasedArgs* args);
void Trackball__OnRooted(Trackball* __this, ::app::Fuse::Node* e);
void Trackball__OnUnrooted(Trackball* __this, ::app::Fuse::Node* e);
void Trackball__OnUpdate(Trackball* __this);
void Trackball__set_Viewport(Trackball* __this, ::uObject* value);

struct Trackball : ::app::Fuse::Behavior
{
    int _moveMode;
    ::uStrong< ::app::Fuse::Node*> _node;
    ::uStrong< ::app::Fuse::Entities::Transform3D*> _transform;
    ::uStrong< ::uObject*> _viewport;
    bool _hasViewport;
    float _radius;
    bool _haveUpdate;
    ::uStrong< ::uObject*> _attractor;
    ::uStrong< ::uObject*> _friction;
    bool _captured;
    bool _soft;
    ::app::Uno::Float2 _pressLoc;
    int _pressIndex;
    ::app::Uno::Float4 _pressQ;
    ::app::Uno::Float4x4 _pressInvView;
    ::uStrong< ::app::Experimental::Physics::PointerVelocity__float*> _angularVelocity;
    float _prevAngular;
    ::app::Uno::Float3 _frictionVector;
    ::app::Uno::Float4 _frictionQ;

    void _ObjInit_1() { Trackball___ObjInit_1(this); }
    void BringToFront(::app::Uno::Float3 normal) { Trackball__BringToFront(this, normal); }
    void CheckNeedUpdate() { Trackball__CheckNeedUpdate(this); }
    ::app::Uno::Float4x4 InverseViewProjection() { return Trackball__get_InverseViewProjection(this); }
    ::uObject* Viewport() { return Trackball__get_Viewport(this); }
    void OnLostCapture() { Trackball__OnLostCapture(this); }
    void OnPointerMoved(::uObject* s, ::app::Fuse::Input::PointerMovedArgs* args) { Trackball__OnPointerMoved(this, s, args); }
    void OnPointerPressed(::uObject* s, ::app::Fuse::Input::PointerPressedArgs* args) { Trackball__OnPointerPressed(this, s, args); }
    void OnPointerReleased(::uObject* s, ::app::Fuse::Input::PointerReleasedArgs* args) { Trackball__OnPointerReleased(this, s, args); }
    void OnUpdate() { Trackball__OnUpdate(this); }
    void Viewport(::uObject* value) { Trackball__set_Viewport(this, value); }
};

}}}


#endif
