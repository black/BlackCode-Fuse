// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_SPOT_LIGHT_H__
#define __APP_FUSE_ENTITIES_SPOT_LIGHT_H__

#include <app/Fuse.Entities.Light.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Entities {

struct SpotLight;

struct SpotLight__uType : ::app::Fuse::Entities::Light__uType
{
};

SpotLight__uType* SpotLight__typeof();

void SpotLight___ObjInit_2(SpotLight* __this);
void SpotLight__Accept(SpotLight* __this, ::uObject* visitor);
float SpotLight__get_Extent(SpotLight* __this);
SpotLight* SpotLight__New_1(::uStatic* __this);
void SpotLight__set_Extent(SpotLight* __this, float value);

struct SpotLight : ::app::Fuse::Entities::Light
{
    float _Extent;

    void _ObjInit_2() { SpotLight___ObjInit_2(this); }
    float Extent() { return SpotLight__get_Extent(this); }
    void Extent(float value) { SpotLight__set_Extent(this, value); }
};

}}}


#endif
