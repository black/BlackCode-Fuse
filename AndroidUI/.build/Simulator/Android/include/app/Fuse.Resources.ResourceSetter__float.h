// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_RESOURCE_SETTER__FLOAT_H__
#define __APP_FUSE_RESOURCES_RESOURCE_SETTER__FLOAT_H__

#include <app/Fuse.Behavior.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Resources {

struct ResourceSetter__float;

struct ResourceSetter__float__uType : ::app::Fuse::Behavior__uType
{
};

ResourceSetter__float__uType* ResourceSetter__float__typeof();

void ResourceSetter__float___ObjInit_1(ResourceSetter__float* __this);
::uString* ResourceSetter__float__get_Key(ResourceSetter__float* __this);
float ResourceSetter__float__get_Value(ResourceSetter__float* __this);
void ResourceSetter__float__OnChanged(ResourceSetter__float* __this);
void ResourceSetter__float__OnRooted(ResourceSetter__float* __this, ::app::Fuse::Node* n);
void ResourceSetter__float__OnUnrooted(ResourceSetter__float* __this, ::app::Fuse::Node* n);
void ResourceSetter__float__set_Key(ResourceSetter__float* __this, ::uString* value);
void ResourceSetter__float__set_Value(ResourceSetter__float* __this, float value);

struct ResourceSetter__float : ::app::Fuse::Behavior
{
    ::uStrong< ::uString*> _key;
    float _value;
    ::uStrong< ::app::Fuse::Node*> _node;

    void _ObjInit_1() { ResourceSetter__float___ObjInit_1(this); }
    ::uString* Key() { return ResourceSetter__float__get_Key(this); }
    float Value() { return ResourceSetter__float__get_Value(this); }
    void OnChanged() { ResourceSetter__float__OnChanged(this); }
    void Key(::uString* value) { ResourceSetter__float__set_Key(this, value); }
    void Value(float value) { ResourceSetter__float__set_Value(this, value); }
};

}}}


#endif
