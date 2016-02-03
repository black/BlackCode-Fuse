// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_RESOURCE_SETTER__BOOL_H__
#define __APP_FUSE_RESOURCES_RESOURCE_SETTER__BOOL_H__

#include <app/Fuse.Behavior.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Resources {

struct ResourceSetter__bool;

struct ResourceSetter__bool__uType : ::app::Fuse::Behavior__uType
{
};

ResourceSetter__bool__uType* ResourceSetter__bool__typeof();

void ResourceSetter__bool___ObjInit_1(ResourceSetter__bool* __this);
::uString* ResourceSetter__bool__get_Key(ResourceSetter__bool* __this);
bool ResourceSetter__bool__get_Value(ResourceSetter__bool* __this);
void ResourceSetter__bool__OnChanged(ResourceSetter__bool* __this);
void ResourceSetter__bool__OnRooted(ResourceSetter__bool* __this, ::app::Fuse::Node* n);
void ResourceSetter__bool__OnUnrooted(ResourceSetter__bool* __this, ::app::Fuse::Node* n);
void ResourceSetter__bool__set_Key(ResourceSetter__bool* __this, ::uString* value);
void ResourceSetter__bool__set_Value(ResourceSetter__bool* __this, bool value);

struct ResourceSetter__bool : ::app::Fuse::Behavior
{
    ::uStrong< ::uString*> _key;
    bool _value;
    ::uStrong< ::app::Fuse::Node*> _node;

    void _ObjInit_1() { ResourceSetter__bool___ObjInit_1(this); }
    ::uString* Key() { return ResourceSetter__bool__get_Key(this); }
    bool Value() { return ResourceSetter__bool__get_Value(this); }
    void OnChanged() { ResourceSetter__bool__OnChanged(this); }
    void Key(::uString* value) { ResourceSetter__bool__set_Key(this, value); }
    void Value(bool value) { ResourceSetter__bool__set_Value(this, value); }
};

}}}


#endif
