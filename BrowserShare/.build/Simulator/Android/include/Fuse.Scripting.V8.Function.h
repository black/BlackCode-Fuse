// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.V8.Internal.Value.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Function;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{

// internal sealed extern class Function :596
// {
::g::Fuse::Scripting::Function_type* Function_typeof();
void Function__ctor_1_fn(Function* __this, ::v8::Local< ::v8::Function>* function);
void Function__get__function_fn(Function* __this, ::v8::Local< ::v8::Function>* __retval);
void Function__Call_fn(Function* __this, uArray* args, uObject** __retval);
void Function__Construct_fn(Function* __this, uArray* args, ::g::Fuse::Scripting::Object** __retval);
void Function__Equals2_fn(Function* __this, ::g::Fuse::Scripting::Function* f, bool* __retval);
void Function__New1_fn(::v8::Local< ::v8::Function>* function, Function** __retval);

struct Function : ::g::Fuse::Scripting::Function
{
    ::v8::Persistent< ::v8::Function>* _persistentFunction;

    void ctor_1(::v8::Local< ::v8::Function> function);
    ::v8::Local< ::v8::Function> _function();
    static Function* New1(::v8::Local< ::v8::Function> function);
};
// }

}}}} // ::g::Fuse::Scripting::V8
