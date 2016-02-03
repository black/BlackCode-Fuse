// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCRIPTING_OBJECT_H__
#define __APP_FUSE_SCRIPTING_OBJECT_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Scripting { struct Function; } } }

namespace app {
namespace Fuse {
namespace Scripting {

struct Object;

struct Object__uType : ::uClassType
{
    ::uObject*(*__fp_CallMethod)(Object*, ::uString*, ::uArray*);
    bool(*__fp_ContainsKey)(Object*, ::uString*);
    bool(*__fp_Equals_2)(Object*, Object*);
    ::uObject*(*__fp_get_Item)(Object*, ::uString*);
    ::uArray*(*__fp_get_Keys)(Object*);
    bool(*__fp_InstanceOf)(Object*, ::app::Fuse::Scripting::Function*);
    void(*__fp_set_Item)(Object*, ::uString*, ::uObject*);
};

Object__uType* Object__typeof();

void Object___ObjInit(Object* __this);
bool Object__Equals(Object* __this, ::uObject* o);

struct Object : ::uObject
{
    void _ObjInit() { Object___ObjInit(this); }
    ::uObject* CallMethod(::uString* name, ::uArray* args) { return (((Object__uType*)this->__obj_type)->__fp_CallMethod)(this, name, args); }
    bool ContainsKey(::uString* key) { return (((Object__uType*)this->__obj_type)->__fp_ContainsKey)(this, key); }
    bool Equals_2(Object* o) { return (((Object__uType*)this->__obj_type)->__fp_Equals_2)(this, o); }
    ::uObject* Item(::uString* key) { return (((Object__uType*)this->__obj_type)->__fp_get_Item)(this, key); }
    ::uArray* Keys() { return (((Object__uType*)this->__obj_type)->__fp_get_Keys)(this); }
    bool InstanceOf(::app::Fuse::Scripting::Function* type) { return (((Object__uType*)this->__obj_type)->__fp_InstanceOf)(this, type); }
    void Item(::uString* key, ::uObject* value) { (((Object__uType*)this->__obj_type)->__fp_set_Item)(this, key, value); }
};

}}}


#endif
