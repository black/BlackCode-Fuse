// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_USER_APP_STATE_H__
#define __APP_OUTRACKS_SIMULATOR_USER_APP_STATE_H__

#include <app/Uno.Float4.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct App; } }
namespace app { namespace Fuse { struct Behavior; } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct Theme; } }
namespace app { namespace Uno { namespace UX { struct Resource; } } }

namespace app {
namespace Outracks {
namespace Simulator {

struct UserAppState;

extern ::uStaticStrong< UserAppState*> UserAppState___Default;

struct UserAppState__uType : ::uClassType
{
};

UserAppState__uType* UserAppState__typeof();

void UserAppState___ObjInit(UserAppState* __this, ::app::Uno::Float4 background, ::uArray* behaviors, ::uArray* resources, ::app::Fuse::Node* rootNode, ::app::Fuse::Theme* theme, ::app::Uno::Float4 clearColor, float clearDepth);
void UserAppState__ApplyTo(UserAppState* __this, ::app::Fuse::App* app);
UserAppState* UserAppState__get_Default(::uStatic* __this);
UserAppState* UserAppState__New_1(::uStatic* __this, ::app::Uno::Float4 background, ::uArray* behaviors, ::uArray* resources, ::app::Fuse::Node* rootNode, ::app::Fuse::Theme* theme, ::app::Uno::Float4 clearColor, float clearDepth);
UserAppState* UserAppState__Save(::uStatic* __this, ::app::Fuse::App* app);
bool UserAppState__SequenceEquals__Fuse_Behavior(::uStatic* __this, ::uObject* left, ::uArray* right);
bool UserAppState__SequenceEquals__Uno_UX_Resource(::uStatic* __this, ::uObject* left, ::uArray* right);
void UserAppState__set_Default(::uStatic* __this, UserAppState* value);
void UserAppState__SetIfNotEqual__Fuse_Behavior(::uStatic* __this, ::uObject* list, ::uArray* elements);
void UserAppState__SetIfNotEqual__Uno_UX_Resource(::uStatic* __this, ::uObject* list, ::uArray* elements);
void UserAppState__SetSequence__Fuse_Behavior(::uStatic* __this, ::uObject* list, ::uArray* elements);
void UserAppState__SetSequence__Uno_UX_Resource(::uStatic* __this, ::uObject* list, ::uArray* elements);

struct UserAppState : ::uObject
{
    ::app::Uno::Float4 Background;
    ::uStrong< ::uArray*> Behaviors;
    ::uStrong< ::uArray*> Resources;
    ::uStrong< ::app::Fuse::Node*> RootNode;
    ::uStrong< ::app::Fuse::Theme*> Theme;
    ::app::Uno::Float4 ClearColor;
    float ClearDepth;

    void _ObjInit(::app::Uno::Float4 background, ::uArray* behaviors, ::uArray* resources, ::app::Fuse::Node* rootNode, ::app::Fuse::Theme* theme, ::app::Uno::Float4 clearColor, float clearDepth) { UserAppState___ObjInit(this, background, behaviors, resources, rootNode, theme, clearColor, clearDepth); }
    void ApplyTo(::app::Fuse::App* app) { UserAppState__ApplyTo(this, app); }
};

}}}


#endif
