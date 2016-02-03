// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Physics\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_PHYSICS_DRAGGABLE_H__
#define __APP_FUSE_PHYSICS_DRAGGABLE_H__

#include <app/Fuse.Behavior.h>
#include <app/Fuse.Physics.IRule.h>
#include <app/Uno.Float3.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { namespace Input { struct PointerEventArgs; } } }
namespace app { namespace Fuse { namespace Input { struct PointerMovedArgs; } } }
namespace app { namespace Fuse { namespace Input { struct PointerPressedArgs; } } }
namespace app { namespace Fuse { namespace Input { struct PointerReleasedArgs; } } }
namespace app { namespace Fuse { namespace Physics { struct Body; } } }
namespace app { namespace Fuse { namespace Physics { struct World; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Physics {

struct Draggable;

struct Draggable__uType : ::app::Fuse::Behavior__uType
{
    ::app::Fuse::Physics::IRule __interface_0;
};

Draggable__uType* Draggable__typeof();

void Draggable___ObjInit_1(Draggable* __this);
void Draggable__Fuse_Physics_IRule_Update(Draggable* __this, double deltaTime, ::app::Fuse::Physics::World* world);
::app::Fuse::Elements::Element* Draggable__get_Bounds(Draggable* __this);
::app::Uno::Float3 Draggable__GetPointerPosition(Draggable* __this, ::app::Fuse::Input::PointerEventArgs* args);
Draggable* Draggable__New_1(::uStatic* __this);
void Draggable__OnMoved(Draggable* __this, ::uObject* sender, ::app::Fuse::Input::PointerMovedArgs* args);
void Draggable__OnPointerLost(Draggable* __this);
void Draggable__OnPressed(Draggable* __this, ::uObject* sender, ::app::Fuse::Input::PointerPressedArgs* args);
void Draggable__OnReleased(Draggable* __this, ::uObject* sender, ::app::Fuse::Input::PointerReleasedArgs* args);
void Draggable__OnRooted(Draggable* __this, ::app::Fuse::Node* n);
void Draggable__OnUnrooted(Draggable* __this, ::app::Fuse::Node* n);
void Draggable__set_Bounds(Draggable* __this, ::app::Fuse::Elements::Element* value);

struct Draggable : ::app::Fuse::Behavior
{
    ::uStrong< ::app::Fuse::Physics::Body*> _body;
    bool _hasLock;
    ::app::Uno::Float3 _pos;
    ::app::Uno::Float3 _forceMotion;
    ::uStrong< ::app::Fuse::Elements::Element*> _Bounds;

    void _ObjInit_1() { Draggable___ObjInit_1(this); }
    ::app::Fuse::Elements::Element* Bounds() { return Draggable__get_Bounds(this); }
    ::app::Uno::Float3 GetPointerPosition(::app::Fuse::Input::PointerEventArgs* args) { return Draggable__GetPointerPosition(this, args); }
    void OnMoved(::uObject* sender, ::app::Fuse::Input::PointerMovedArgs* args) { Draggable__OnMoved(this, sender, args); }
    void OnPointerLost() { Draggable__OnPointerLost(this); }
    void OnPressed(::uObject* sender, ::app::Fuse::Input::PointerPressedArgs* args) { Draggable__OnPressed(this, sender, args); }
    void OnReleased(::uObject* sender, ::app::Fuse::Input::PointerReleasedArgs* args) { Draggable__OnReleased(this, sender, args); }
    void Bounds(::app::Fuse::Elements::Element* value) { Draggable__set_Bounds(this, value); }
};

}}}


#endif
