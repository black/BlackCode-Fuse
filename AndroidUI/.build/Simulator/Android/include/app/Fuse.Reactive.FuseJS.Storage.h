// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\FuseJS\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_FUSE_J_S_STORAGE_H__
#define __APP_FUSE_REACTIVE_FUSE_J_S_STORAGE_H__

#include <Uno.h>
namespace app { namespace Fuse { namespace Scripting { struct Context; } } }
namespace app { namespace Uno { namespace Threading { struct Future__bool; } } }
namespace app { namespace Uno { namespace Threading { struct Future__string; } } }

namespace app {
namespace Fuse {
namespace Reactive {
namespace FuseJS {

struct Storage__uType : ::uClassType
{
};

Storage__uType* Storage__typeof();

::uObject* Storage__CreateModule(::uStatic* __this);
::uObject* Storage__Delete(::uStatic* __this, ::app::Fuse::Scripting::Context* c, ::uArray* args);
::uObject* Storage__Read(::uStatic* __this, ::app::Fuse::Scripting::Context* c, ::uArray* args);
::app::Uno::Threading::Future__string* Storage__ReadAsync(::uStatic* __this, ::uArray* args);
::uObject* Storage__Write(::uStatic* __this, ::app::Fuse::Scripting::Context* c, ::uArray* args);
::app::Uno::Threading::Future__bool* Storage__WriteAsync(::uStatic* __this, ::uArray* args);

}}}}


#endif
