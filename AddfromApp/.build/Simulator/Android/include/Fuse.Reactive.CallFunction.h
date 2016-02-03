// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct CallFunction;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class CallFunction :136
// {
uType* CallFunction_typeof();
void CallFunction__ctor__fn(CallFunction* __this, ::g::Fuse::Scripting::Function* function, uArray* args);
void CallFunction__New1_fn(::g::Fuse::Scripting::Function* function, uArray* args, CallFunction** __retval);
void CallFunction__Run_fn(CallFunction* __this);

struct CallFunction : uObject
{
    uStrong<uArray*> _args;
    uStrong< ::g::Fuse::Scripting::Function*> _function;

    void ctor_(::g::Fuse::Scripting::Function* function, uArray* args);
    void Run();
    static CallFunction* New1(::g::Fuse::Scripting::Function* function, uArray* args);
};
// }

}}} // ::g::Fuse::Reactive
