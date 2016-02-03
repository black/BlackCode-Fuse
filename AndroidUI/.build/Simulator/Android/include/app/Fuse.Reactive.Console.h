// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_CONSOLE_H__
#define __APP_FUSE_REACTIVE_CONSOLE_H__

#include <Uno.h>
namespace app { namespace Fuse { namespace Scripting { struct Context; } } }
namespace app { namespace Uno { namespace Text { struct StringBuilder; } } }

namespace app {
namespace Fuse {
namespace Reactive {

struct Console__uType : ::uClassType
{
};

Console__uType* Console__typeof();

::uObject* Console__Dir(::uStatic* __this, ::uArray* args);
void Console__Dir_1(::uStatic* __this, ::app::Uno::Text::StringBuilder* builder, ::uObject* obj, int indent);
void Console__Indent(::uStatic* __this, ::app::Uno::Text::StringBuilder* builder, int indent);
void Console__Init(::uStatic* __this, ::app::Fuse::Scripting::Context* c);
::uObject* Console__Log(::uStatic* __this, ::uArray* args);

}}}


#endif
