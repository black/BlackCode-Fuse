// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRANSLATION_H__
#define __APP_FUSE_TRANSLATION_H__

#include <app/Fuse.Transform.h>
#include <Uno.h>
namespace app { namespace Fuse { struct FastMatrix; } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float3; } }

namespace app {
namespace Fuse {

struct Translation;

struct Translation__uType : ::app::Fuse::Transform__uType
{
};

Translation__uType* Translation__typeof();

void Translation___ObjInit_1(Translation* __this);
void Translation__AppendTo(Translation* __this, ::app::Fuse::FastMatrix* m, float weight);
void Translation__CheckSubscription(Translation* __this);
bool Translation__get_IsFlat(Translation* __this);
::app::Fuse::Node* Translation__get_RelativeNode(Translation* __this);
::uObject* Translation__get_RelativeTo(Translation* __this);
::app::Uno::Float3 Translation__get_Vector(Translation* __this);
float Translation__get_X(Translation* __this);
::app::Uno::Float2 Translation__get_XY(Translation* __this);
float Translation__get_Y(Translation* __this);
float Translation__get_Z(Translation* __this);
Translation* Translation__New_1(::uStatic* __this);
void Translation__OnAdded(Translation* __this, ::app::Fuse::Node* n);
void Translation__OnPlaced(Translation* __this, ::uObject* sender, ::uObject* args);
void Translation__OnRemoved(Translation* __this, ::app::Fuse::Node* n);
void Translation__OnRooted(Translation* __this, ::uObject* sender, ::uObject* args);
void Translation__PrependTo(Translation* __this, ::app::Fuse::FastMatrix* m);
void Translation__set_RelativeNode(Translation* __this, ::app::Fuse::Node* value);
void Translation__set_RelativeTo(Translation* __this, ::uObject* value);
void Translation__set_Vector(Translation* __this, ::app::Uno::Float3 value);
void Translation__set_X(Translation* __this, float value);
void Translation__set_XY(Translation* __this, ::app::Uno::Float2 value);
void Translation__set_Y(Translation* __this, float value);
void Translation__set_Z(Translation* __this, float value);

struct Translation : ::app::Fuse::Transform
{
    ::uStrong< ::uObject*> _relativeTo;
    ::uStrong< ::app::Fuse::Node*> _relativeNode;
    ::uStrong< ::app::Fuse::Node*> _added;
    ::uStrong< ::uObject*> _subscribed;
    ::uStrong< ::app::Fuse::Node*> _rootedSubscribed;
    float _x;
    float _y;
    float _z;

    void _ObjInit_1() { Translation___ObjInit_1(this); }
    void CheckSubscription() { Translation__CheckSubscription(this); }
    ::app::Fuse::Node* RelativeNode() { return Translation__get_RelativeNode(this); }
    ::uObject* RelativeTo() { return Translation__get_RelativeTo(this); }
    ::app::Uno::Float3 Vector();
    float X() { return Translation__get_X(this); }
    ::app::Uno::Float2 XY();
    float Y() { return Translation__get_Y(this); }
    float Z() { return Translation__get_Z(this); }
    void OnPlaced(::uObject* sender, ::uObject* args) { Translation__OnPlaced(this, sender, args); }
    void OnRooted(::uObject* sender, ::uObject* args) { Translation__OnRooted(this, sender, args); }
    void RelativeNode(::app::Fuse::Node* value) { Translation__set_RelativeNode(this, value); }
    void RelativeTo(::uObject* value) { Translation__set_RelativeTo(this, value); }
    void Vector(::app::Uno::Float3 value);
    void X(float value) { Translation__set_X(this, value); }
    void XY(::app::Uno::Float2 value);
    void Y(float value) { Translation__set_Y(this, value); }
    void Z(float value) { Translation__set_Z(this, value); }
};

}}

#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>

namespace app {
namespace Fuse {

inline ::app::Uno::Float3 Translation::Vector() { return Translation__get_Vector(this); }
inline ::app::Uno::Float2 Translation::XY() { return Translation__get_XY(this); }
inline void Translation::Vector(::app::Uno::Float3 value) { Translation__set_Vector(this, value); }
inline void Translation::XY(::app::Uno::Float2 value) { Translation__set_XY(this, value); }

}}


#endif
