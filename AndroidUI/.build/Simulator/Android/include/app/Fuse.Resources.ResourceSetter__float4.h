// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_RESOURCE_SETTER__FLOAT4_H__
#define __APP_FUSE_RESOURCES_RESOURCE_SETTER__FLOAT4_H__

#include <app/Fuse.Behavior.h>
#include <app/Uno.Float4.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Resources {

struct ResourceSetter__float4;

struct ResourceSetter__float4__uType : ::app::Fuse::Behavior__uType
{
};

ResourceSetter__float4__uType* ResourceSetter__float4__typeof();

void ResourceSetter__float4___ObjInit_1(ResourceSetter__float4* __this);
::uString* ResourceSetter__float4__get_Key(ResourceSetter__float4* __this);
::app::Uno::Float4 ResourceSetter__float4__get_Value(ResourceSetter__float4* __this);
void ResourceSetter__float4__OnChanged(ResourceSetter__float4* __this);
void ResourceSetter__float4__OnRooted(ResourceSetter__float4* __this, ::app::Fuse::Node* n);
void ResourceSetter__float4__OnUnrooted(ResourceSetter__float4* __this, ::app::Fuse::Node* n);
void ResourceSetter__float4__set_Key(ResourceSetter__float4* __this, ::uString* value);
void ResourceSetter__float4__set_Value(ResourceSetter__float4* __this, ::app::Uno::Float4 value);

struct ResourceSetter__float4 : ::app::Fuse::Behavior
{
    ::uStrong< ::uString*> _key;
    ::app::Uno::Float4 _value;
    ::uStrong< ::app::Fuse::Node*> _node;

    void _ObjInit_1() { ResourceSetter__float4___ObjInit_1(this); }
    ::uString* Key() { return ResourceSetter__float4__get_Key(this); }
    ::app::Uno::Float4 Value() { return ResourceSetter__float4__get_Value(this); }
    void OnChanged() { ResourceSetter__float4__OnChanged(this); }
    void Key(::uString* value) { ResourceSetter__float4__set_Key(this, value); }
    void Value(::app::Uno::Float4 value) { ResourceSetter__float4__set_Value(this, value); }
};

}}}


#endif
