// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_DIRECTIONAL_LIGHT_H__
#define __APP_FUSE_ENTITIES_DIRECTIONAL_LIGHT_H__

#include <app/Fuse.Entities.Light.h>
#include <app/Uno.Geometry.Box.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Entities {

struct DirectionalLight;

struct DirectionalLight__uType : ::app::Fuse::Entities::Light__uType
{
};

DirectionalLight__uType* DirectionalLight__typeof();

void DirectionalLight___ObjInit_2(DirectionalLight* __this);
void DirectionalLight__Accept(DirectionalLight* __this, ::uObject* visitor);
::app::Uno::Geometry::Box DirectionalLight__get_Box(DirectionalLight* __this);
DirectionalLight* DirectionalLight__New_1(::uStatic* __this);
void DirectionalLight__set_Box(DirectionalLight* __this, ::app::Uno::Geometry::Box value);

struct DirectionalLight : ::app::Fuse::Entities::Light
{
    ::app::Uno::Geometry::Box _Box;

    void _ObjInit_2() { DirectionalLight___ObjInit_2(this); }
    ::app::Uno::Geometry::Box Box() { return DirectionalLight__get_Box(this); }
    void Box(::app::Uno::Geometry::Box value) { DirectionalLight__set_Box(this, value); }
};

}}}


#endif
