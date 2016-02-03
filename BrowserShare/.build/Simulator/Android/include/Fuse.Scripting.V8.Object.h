// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.V8.Internal.Value.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Object;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{

// internal sealed extern class Object :672
// {
::g::Fuse::Scripting::Object_type* Object_typeof();
void Object__ctor_1_fn(Object* __this, ::v8::Local< ::v8::Object>* obj);
void Object__get__object_fn(Object* __this, ::v8::Local< ::v8::Object>* __retval);
void Object__CallMethod_fn(Object* __this, uString* name, uArray* args, uObject** __retval);
void Object__ContainsKey_fn(Object* __this, uString* key, bool* __retval);
void Object__Equals2_fn(Object* __this, ::g::Fuse::Scripting::Object* o, bool* __retval);
void Object__InstanceOf_fn(Object* __this, ::g::Fuse::Scripting::Function* type, bool* __retval);
void Object__get_Item_fn(Object* __this, uString* key, uObject** __retval);
void Object__set_Item_fn(Object* __this, uString* key, uObject* value);
void Object__get_Keys_fn(Object* __this, uArray** __retval);
void Object__New1_fn(::v8::Local< ::v8::Object>* obj, Object** __retval);

struct Object : ::g::Fuse::Scripting::Object
{
    ::v8::Persistent< ::v8::Object>* _persistentObject;

    void ctor_1(::v8::Local< ::v8::Object> obj);
    ::v8::Local< ::v8::Object> _object();
    static Object* New1(::v8::Local< ::v8::Object> obj);
};
// }

}}}} // ::g::Fuse::Scripting::V8
