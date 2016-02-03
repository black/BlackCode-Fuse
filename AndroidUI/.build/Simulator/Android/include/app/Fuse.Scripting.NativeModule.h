// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCRIPTING_NATIVE_MODULE_H__
#define __APP_FUSE_SCRIPTING_NATIVE_MODULE_H__

#include <app/Fuse.Scripting.IModule.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Scripting { struct Context; } } }
namespace app { namespace Fuse { namespace Scripting { struct NativeMember; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Scripting_NativeMember; } } }

namespace app {
namespace Fuse {
namespace Scripting {

struct NativeModule;

struct NativeModule__uType : ::uClassType
{
    ::app::Fuse::Scripting::IModule __interface_0;
};

NativeModule__uType* NativeModule__typeof();

void NativeModule___ObjInit(NativeModule* __this, ::uArray* members);
void NativeModule__add_Evaluated(NativeModule* __this, ::uDelegate* value);
void NativeModule__AddMember(NativeModule* __this, ::app::Fuse::Scripting::NativeMember* member);
::uObject* NativeModule__Evaluate(NativeModule* __this, ::uString* id, ::app::Fuse::Scripting::Context* c);
::uString* NativeModule__Fuse_Scripting_IModule_get_Code(NativeModule* __this);
::uString* NativeModule__Fuse_Scripting_IModule_get_FileName(NativeModule* __this);
int NativeModule__Fuse_Scripting_IModule_get_LineNumberOffset(NativeModule* __this);
NativeModule* NativeModule__New_1(::uStatic* __this, ::uArray* members);
void NativeModule__remove_Evaluated(NativeModule* __this, ::uDelegate* value);

struct NativeModule : ::uObject
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Scripting_NativeMember*> _members;
    ::uStrong< ::uDelegate*> _evaluated;
    bool _isEvaluated;

    void _ObjInit(::uArray* members) { NativeModule___ObjInit(this, members); }
    void add_Evaluated(::uDelegate* value) { NativeModule__add_Evaluated(this, value); }
    void AddMember(::app::Fuse::Scripting::NativeMember* member) { NativeModule__AddMember(this, member); }
    ::uObject* Evaluate(::uString* id, ::app::Fuse::Scripting::Context* c) { return NativeModule__Evaluate(this, id, c); }
    void remove_Evaluated(::uDelegate* value) { NativeModule__remove_Evaluated(this, value); }
};

}}}


#endif
