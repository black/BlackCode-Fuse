// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\FuseJS\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_FUSE_J_S_MAPS_H__
#define __APP_FUSE_REACTIVE_FUSE_J_S_MAPS_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Scripting { struct Context; } } }

namespace app {
namespace Fuse {
namespace Reactive {
namespace FuseJS {

struct Maps;

struct Maps__uType : ::uClassType
{
};

Maps__uType* Maps__typeof();

void Maps___ObjInit(Maps* __this);
::uObject* Maps__CreateModule(::uStatic* __this);
Maps* Maps__New_1(::uStatic* __this);
::uObject* Maps__OpenAt(::uStatic* __this, ::app::Fuse::Scripting::Context* context, ::uArray* args);
::uObject* Maps__SearchNear(::uStatic* __this, ::app::Fuse::Scripting::Context* context, ::uArray* args);
::uObject* Maps__SearchNearby(::uStatic* __this, ::app::Fuse::Scripting::Context* context, ::uArray* args);

struct Maps : ::uObject
{
    void _ObjInit() { Maps___ObjInit(this); }
};

}}}}


#endif
