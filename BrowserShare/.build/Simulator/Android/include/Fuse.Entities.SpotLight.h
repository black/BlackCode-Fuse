// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Entities.Light.h>
namespace g{namespace Fuse{namespace Entities{struct SpotLight;}}}

namespace g{
namespace Fuse{
namespace Entities{

// public sealed class SpotLight :894
// {
::g::Fuse::Entities::Light_type* SpotLight_typeof();
void SpotLight__ctor_2_fn(SpotLight* __this);
void SpotLight__Accept_fn(SpotLight* __this, uObject* visitor);
void SpotLight__get_Extent_fn(SpotLight* __this, float* __retval);
void SpotLight__set_Extent_fn(SpotLight* __this, float* value);
void SpotLight__New1_fn(SpotLight** __retval);

struct SpotLight : ::g::Fuse::Entities::Light
{
    float _Extent;

    void ctor_2();
    float Extent();
    void Extent(float value);
    static SpotLight* New1();
};
// }

}}} // ::g::Fuse::Entities
