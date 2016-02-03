// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.Array.h>
#include <Fuse.Scripting.V8.Internal.Value.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Array;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{

// internal sealed extern class Array :8
// {
::g::Fuse::Scripting::Array_type* Array_typeof();
void Array__ctor_1_fn(Array* __this, ::v8::Local< ::v8::Array>* array);
void Array__get__array_fn(Array* __this, ::v8::Local< ::v8::Array>* __retval);
void Array__Equals2_fn(Array* __this, ::g::Fuse::Scripting::Array* a, bool* __retval);
void Array__Equals_fn(Array* __this, uObject* o, bool* __retval);
void Array__get_Item_fn(Array* __this, int* index, uObject** __retval);
void Array__set_Item_fn(Array* __this, int* index, uObject* value);
void Array__get_Length_fn(Array* __this, int* __retval);
void Array__New1_fn(::v8::Local< ::v8::Array>* array, Array** __retval);

struct Array : ::g::Fuse::Scripting::Array
{
    ::v8::Persistent< ::v8::Array>* _persistentArray;

    void ctor_1(::v8::Local< ::v8::Array> array);
    ::v8::Local< ::v8::Array> _array();
    static Array* New1(::v8::Local< ::v8::Array> array);
};
// }

}}}} // ::g::Fuse::Scripting::V8
