// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\FuseJS\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_FUSE_J_S_EMAIL_H__
#define __APP_FUSE_REACTIVE_FUSE_J_S_EMAIL_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Scripting { struct Context; } } }

namespace app {
namespace Fuse {
namespace Reactive {
namespace FuseJS {

struct Email;

struct Email__uType : ::uClassType
{
};

Email__uType* Email__typeof();

void Email___ObjInit(Email* __this);
::uObject* Email__Compose(::uStatic* __this, ::app::Fuse::Scripting::Context* context, ::uArray* args);
::uObject* Email__CreateModule(::uStatic* __this);
Email* Email__New_1(::uStatic* __this);

struct Email : ::uObject
{
    void _ObjInit() { Email___ObjInit(this); }
};

}}}}


#endif
