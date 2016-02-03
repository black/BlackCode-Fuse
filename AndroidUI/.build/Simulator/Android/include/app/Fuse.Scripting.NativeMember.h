// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCRIPTING_NATIVE_MEMBER_H__
#define __APP_FUSE_SCRIPTING_NATIVE_MEMBER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Scripting { struct Context; } } }
namespace app { namespace Fuse { namespace Scripting { struct Object; } } }

namespace app {
namespace Fuse {
namespace Scripting {

struct NativeMember;

struct NativeMember__uType : ::uClassType
{
    ::uObject*(*__fp_CreateObject)(NativeMember*, ::app::Fuse::Scripting::Context*);
};

NativeMember__uType* NativeMember__typeof();

void NativeMember___ObjInit(NativeMember* __this, ::uString* name);
void NativeMember__Create(NativeMember* __this, ::app::Fuse::Scripting::Object* obj, ::app::Fuse::Scripting::Context* context);
::app::Fuse::Scripting::Object* NativeMember__get_ModuleObject(NativeMember* __this);
::uString* NativeMember__get_Name(NativeMember* __this);
void NativeMember__set_ModuleObject(NativeMember* __this, ::app::Fuse::Scripting::Object* value);
void NativeMember__set_Name(NativeMember* __this, ::uString* value);

struct NativeMember : ::uObject
{
    ::uStrong< ::uString*> _Name;
    ::uStrong< ::app::Fuse::Scripting::Object*> _ModuleObject;

    void _ObjInit(::uString* name) { NativeMember___ObjInit(this, name); }
    void Create(::app::Fuse::Scripting::Object* obj, ::app::Fuse::Scripting::Context* context) { NativeMember__Create(this, obj, context); }
    ::uObject* CreateObject(::app::Fuse::Scripting::Context* context) { return (((NativeMember__uType*)this->__obj_type)->__fp_CreateObject)(this, context); }
    ::app::Fuse::Scripting::Object* ModuleObject() { return NativeMember__get_ModuleObject(this); }
    ::uString* Name() { return NativeMember__get_Name(this); }
    void ModuleObject(::app::Fuse::Scripting::Object* value) { NativeMember__set_ModuleObject(this, value); }
    void Name(::uString* value) { NativeMember__set_Name(this, value); }
};

}}}


#endif
