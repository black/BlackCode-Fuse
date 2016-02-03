// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModule.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeMember;}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeModule;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public class NativeModule :183
// {
struct NativeModule_type : uType
{
    ::g::Fuse::Scripting::IModule interface0;
};

NativeModule_type* NativeModule_typeof();
void NativeModule__ctor__fn(NativeModule* __this, uArray* members);
void NativeModule__AddMember_fn(NativeModule* __this, ::g::Fuse::Scripting::NativeMember* member);
void NativeModule__Evaluate_fn(NativeModule* __this, uString* id, ::g::Fuse::Scripting::Context* c, uObject** __retval);
void NativeModule__add_Evaluated_fn(NativeModule* __this, uDelegate* value);
void NativeModule__remove_Evaluated_fn(NativeModule* __this, uDelegate* value);
void NativeModule__Fuse_Scripting_IModule_get_Code_fn(NativeModule* __this, uString** __retval);
void NativeModule__Fuse_Scripting_IModule_get_FileName_fn(NativeModule* __this, uString** __retval);
void NativeModule__Fuse_Scripting_IModule_get_LineNumberOffset_fn(NativeModule* __this, int* __retval);
void NativeModule__New1_fn(uArray* members, NativeModule** __retval);

struct NativeModule : uObject
{
    uStrong<uDelegate*> _evaluated;
    bool _isEvaluated;
    uStrong< ::g::Uno::Collections::List*> _members;

    void ctor_(uArray* members);
    void AddMember(::g::Fuse::Scripting::NativeMember* member);
    uObject* Evaluate(uString* id, ::g::Fuse::Scripting::Context* c);
    void add_Evaluated(uDelegate* value);
    void remove_Evaluated(uDelegate* value);
    static NativeModule* New1(uArray* members);
};
// }

}}} // ::g::Fuse::Scripting
