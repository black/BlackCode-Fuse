// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_ENVIRONMENT_LIGHT_H__
#define __APP_FUSE_ENTITIES_ENVIRONMENT_LIGHT_H__

#include <app/Fuse.Entities.Light.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Entities {

struct EnvironmentLight;

struct EnvironmentLight__uType : ::app::Fuse::Entities::Light__uType
{
};

EnvironmentLight__uType* EnvironmentLight__typeof();

void EnvironmentLight___ObjInit_2(EnvironmentLight* __this);
void EnvironmentLight__Accept(EnvironmentLight* __this, ::uObject* visitor);
EnvironmentLight* EnvironmentLight__New_1(::uStatic* __this);

struct EnvironmentLight : ::app::Fuse::Entities::Light
{
    void _ObjInit_2() { EnvironmentLight___ObjInit_2(this); }
};

}}}


#endif
