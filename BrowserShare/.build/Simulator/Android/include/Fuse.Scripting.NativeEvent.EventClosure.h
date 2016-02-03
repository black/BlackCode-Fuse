// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeEvent__EventClosure;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class NativeEvent.EventClosure :512
// {
uType* NativeEvent__EventClosure_typeof();
void NativeEvent__EventClosure__ctor__fn(NativeEvent__EventClosure* __this, ::g::Fuse::Scripting::Function* jsFunction, uArray* args);
void NativeEvent__EventClosure__Call_fn(NativeEvent__EventClosure* __this);
void NativeEvent__EventClosure__New1_fn(::g::Fuse::Scripting::Function* jsFunction, uArray* args, NativeEvent__EventClosure** __retval);

struct NativeEvent__EventClosure : uObject
{
    uStrong<uArray*> _args;
    uStrong< ::g::Fuse::Scripting::Function*> _jsFunction;

    void ctor_(::g::Fuse::Scripting::Function* jsFunction, uArray* args);
    void Call();
    static NativeEvent__EventClosure* New1(::g::Fuse::Scripting::Function* jsFunction, uArray* args);
};
// }

}}} // ::g::Fuse::Scripting
