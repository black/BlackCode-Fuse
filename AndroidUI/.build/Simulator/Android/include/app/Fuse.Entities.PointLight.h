// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_POINT_LIGHT_H__
#define __APP_FUSE_ENTITIES_POINT_LIGHT_H__

#include <app/Fuse.Entities.Light.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Entities {

struct PointLight;

struct PointLight__uType : ::app::Fuse::Entities::Light__uType
{
};

PointLight__uType* PointLight__typeof();

void PointLight___ObjInit_2(PointLight* __this);
void PointLight__Accept(PointLight* __this, ::uObject* visitor);
PointLight* PointLight__New_1(::uStatic* __this);

struct PointLight : ::app::Fuse::Entities::Light
{
    void _ObjInit_2() { PointLight___ObjInit_2(this); }
};

}}}


#endif
