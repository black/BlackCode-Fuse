// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.18.8\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
namespace g{namespace Fuse{namespace Resources{struct ResourceSetter;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Resources{

// public abstract class ResourceSetter<T> :466
// {
::g::Fuse::Behavior_type* ResourceSetter_typeof();
void ResourceSetter__ctor_1_fn(ResourceSetter* __this);
void ResourceSetter__get_Key_fn(ResourceSetter* __this, uString** __retval);
void ResourceSetter__set_Key_fn(ResourceSetter* __this, uString* value);
void ResourceSetter__OnChanged_fn(ResourceSetter* __this);
void ResourceSetter__OnRooted_fn(ResourceSetter* __this, ::g::Fuse::Node* parentNode);
void ResourceSetter__OnUnrooted_fn(ResourceSetter* __this, ::g::Fuse::Node* parentNode);
void ResourceSetter__get_Value_fn(ResourceSetter* __this, uTRef __retval);
void ResourceSetter__set_Value_fn(ResourceSetter* __this, void* value);

struct ResourceSetter : ::g::Fuse::Behavior
{
    uStrong<uString*> _key;
    uTField _value() { return __type->Field(this, 4); }

    void ctor_1();
    uString* Key();
    void Key(uString* value);
    void OnChanged();
    template<class T>
    T Value() { T __retval; return ResourceSetter__get_Value_fn(this, &__retval), __retval; }
    template<class T>
    void Value(T value) { ResourceSetter__set_Value_fn(this, uConstrain(__type->GetBase(ResourceSetter_typeof())->T(0), value)); }
};
// }

}}} // ::g::Fuse::Resources
