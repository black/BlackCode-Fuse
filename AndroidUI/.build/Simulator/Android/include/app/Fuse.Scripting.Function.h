// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCRIPTING_FUNCTION_H__
#define __APP_FUSE_SCRIPTING_FUNCTION_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Scripting { struct Object; } } }

namespace app {
namespace Fuse {
namespace Scripting {

struct Function;

struct Function__uType : ::uClassType
{
    ::uObject*(*__fp_Call)(Function*, ::uArray*);
    ::app::Fuse::Scripting::Object*(*__fp_Construct)(Function*, ::uArray*);
    bool(*__fp_Equals_2)(Function*, Function*);
};

Function__uType* Function__typeof();

void Function___ObjInit(Function* __this);
bool Function__Equals(Function* __this, ::uObject* o);
int Function__GetHashCode(Function* __this);

struct Function : ::uObject
{
    void _ObjInit() { Function___ObjInit(this); }
    ::uObject* Call(::uArray* args) { return (((Function__uType*)this->__obj_type)->__fp_Call)(this, args); }
    ::app::Fuse::Scripting::Object* Construct(::uArray* args) { return (((Function__uType*)this->__obj_type)->__fp_Construct)(this, args); }
    bool Equals_2(Function* f) { return (((Function__uType*)this->__obj_type)->__fp_Equals_2)(this, f); }
};

}}}


#endif
