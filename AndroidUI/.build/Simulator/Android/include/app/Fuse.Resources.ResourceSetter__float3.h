// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_RESOURCE_SETTER__FLOAT3_H__
#define __APP_FUSE_RESOURCES_RESOURCE_SETTER__FLOAT3_H__

#include <app/Fuse.Behavior.h>
#include <app/Uno.Float3.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Resources {

struct ResourceSetter__float3;

struct ResourceSetter__float3__uType : ::app::Fuse::Behavior__uType
{
};

ResourceSetter__float3__uType* ResourceSetter__float3__typeof();

void ResourceSetter__float3___ObjInit_1(ResourceSetter__float3* __this);
::uString* ResourceSetter__float3__get_Key(ResourceSetter__float3* __this);
::app::Uno::Float3 ResourceSetter__float3__get_Value(ResourceSetter__float3* __this);
void ResourceSetter__float3__OnChanged(ResourceSetter__float3* __this);
void ResourceSetter__float3__OnRooted(ResourceSetter__float3* __this, ::app::Fuse::Node* n);
void ResourceSetter__float3__OnUnrooted(ResourceSetter__float3* __this, ::app::Fuse::Node* n);
void ResourceSetter__float3__set_Key(ResourceSetter__float3* __this, ::uString* value);
void ResourceSetter__float3__set_Value(ResourceSetter__float3* __this, ::app::Uno::Float3 value);

struct ResourceSetter__float3 : ::app::Fuse::Behavior
{
    ::uStrong< ::uString*> _key;
    ::app::Uno::Float3 _value;
    ::uStrong< ::app::Fuse::Node*> _node;

    void _ObjInit_1() { ResourceSetter__float3___ObjInit_1(this); }
    ::uString* Key() { return ResourceSetter__float3__get_Key(this); }
    ::app::Uno::Float3 Value() { return ResourceSetter__float3__get_Value(this); }
    void OnChanged() { ResourceSetter__float3__OnChanged(this); }
    void Key(::uString* value) { ResourceSetter__float3__set_Key(this, value); }
    void Value(::app::Uno::Float3 value) { ResourceSetter__float3__set_Value(this, value); }
};

}}}


#endif
