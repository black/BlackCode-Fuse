// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\FuseJS\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_FUSE_J_S_PHONE_H__
#define __APP_FUSE_REACTIVE_FUSE_J_S_PHONE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Scripting { struct Context; } } }

namespace app {
namespace Fuse {
namespace Reactive {
namespace FuseJS {

struct Phone;

struct Phone__uType : ::uClassType
{
};

Phone__uType* Phone__typeof();

void Phone___ObjInit(Phone* __this);
::uObject* Phone__Call(::uStatic* __this, ::app::Fuse::Scripting::Context* context, ::uArray* args);
::uObject* Phone__CreateModule(::uStatic* __this);
Phone* Phone__New_1(::uStatic* __this);

struct Phone : ::uObject
{
    void _ObjInit() { Phone___ObjInit(this); }
};

}}}}


#endif
