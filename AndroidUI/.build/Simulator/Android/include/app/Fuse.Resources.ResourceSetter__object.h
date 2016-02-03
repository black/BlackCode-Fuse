// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_RESOURCE_SETTER__OBJECT_H__
#define __APP_FUSE_RESOURCES_RESOURCE_SETTER__OBJECT_H__

#include <app/Fuse.Behavior.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Resources {

struct ResourceSetter__object;

struct ResourceSetter__object__uType : ::app::Fuse::Behavior__uType
{
};

ResourceSetter__object__uType* ResourceSetter__object__typeof();

void ResourceSetter__object___ObjInit_1(ResourceSetter__object* __this);
::uString* ResourceSetter__object__get_Key(ResourceSetter__object* __this);
::uObject* ResourceSetter__object__get_Value(ResourceSetter__object* __this);
void ResourceSetter__object__OnChanged(ResourceSetter__object* __this);
void ResourceSetter__object__OnRooted(ResourceSetter__object* __this, ::app::Fuse::Node* n);
void ResourceSetter__object__OnUnrooted(ResourceSetter__object* __this, ::app::Fuse::Node* n);
void ResourceSetter__object__set_Key(ResourceSetter__object* __this, ::uString* value);
void ResourceSetter__object__set_Value(ResourceSetter__object* __this, ::uObject* value);

struct ResourceSetter__object : ::app::Fuse::Behavior
{
    ::uStrong< ::uString*> _key;
    ::uStrong< ::uObject*> _value;
    ::uStrong< ::app::Fuse::Node*> _node;

    void _ObjInit_1() { ResourceSetter__object___ObjInit_1(this); }
    ::uString* Key() { return ResourceSetter__object__get_Key(this); }
    ::uObject* Value() { return ResourceSetter__object__get_Value(this); }
    void OnChanged() { ResourceSetter__object__OnChanged(this); }
    void Key(::uString* value) { ResourceSetter__object__set_Key(this, value); }
    void Value(::uObject* value) { ResourceSetter__object__set_Value(this, value); }
};

}}}


#endif
