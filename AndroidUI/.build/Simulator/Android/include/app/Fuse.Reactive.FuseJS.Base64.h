// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\FuseJS\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_FUSE_J_S_BASE64_H__
#define __APP_FUSE_REACTIVE_FUSE_J_S_BASE64_H__

#include <app/Fuse.Scripting.IModule.h>
#include <app/Fuse.Scripting.NativeModule.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Scripting { struct Context; } } }

namespace app {
namespace Fuse {
namespace Reactive {
namespace FuseJS {

struct Base64;

struct Base64__uType : ::app::Fuse::Scripting::NativeModule__uType
{
};

Base64__uType* Base64__typeof();

void Base64___ObjInit_1(Base64* __this);
::uObject* Base64__DecodeAscii(Base64* __this, ::app::Fuse::Scripting::Context* context, ::uArray* args);
::uObject* Base64__DecodeUtf8(Base64* __this, ::app::Fuse::Scripting::Context* context, ::uArray* args);
::uObject* Base64__EncodeAscii(Base64* __this, ::app::Fuse::Scripting::Context* context, ::uArray* args);
::uObject* Base64__EncodeUtf8(Base64* __this, ::app::Fuse::Scripting::Context* context, ::uArray* args);
Base64* Base64__New_2(::uStatic* __this);

struct Base64 : ::app::Fuse::Scripting::NativeModule
{
    void _ObjInit_1() { Base64___ObjInit_1(this); }
    ::uObject* DecodeAscii(::app::Fuse::Scripting::Context* context, ::uArray* args) { return Base64__DecodeAscii(this, context, args); }
    ::uObject* DecodeUtf8(::app::Fuse::Scripting::Context* context, ::uArray* args) { return Base64__DecodeUtf8(this, context, args); }
    ::uObject* EncodeAscii(::app::Fuse::Scripting::Context* context, ::uArray* args) { return Base64__EncodeAscii(this, context, args); }
    ::uObject* EncodeUtf8(::app::Fuse::Scripting::Context* context, ::uArray* args) { return Base64__EncodeUtf8(this, context, args); }
};

}}}}


#endif
