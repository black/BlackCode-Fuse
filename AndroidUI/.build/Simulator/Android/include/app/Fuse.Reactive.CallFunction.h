// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_CALL_FUNCTION_H__
#define __APP_FUSE_REACTIVE_CALL_FUNCTION_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Scripting { struct Function; } } }

namespace app {
namespace Fuse {
namespace Reactive {

struct CallFunction;

struct CallFunction__uType : ::uClassType
{
};

CallFunction__uType* CallFunction__typeof();

void CallFunction___ObjInit(CallFunction* __this, ::app::Fuse::Scripting::Function* function, ::uArray* args);
CallFunction* CallFunction__New_1(::uStatic* __this, ::app::Fuse::Scripting::Function* function, ::uArray* args);
void CallFunction__Run(CallFunction* __this);

struct CallFunction : ::uObject
{
    ::uStrong< ::app::Fuse::Scripting::Function*> _function;
    ::uStrong< ::uArray*> _args;

    void _ObjInit(::app::Fuse::Scripting::Function* function, ::uArray* args) { CallFunction___ObjInit(this, function, args); }
    void Run() { CallFunction__Run(this); }
};

}}}


#endif
