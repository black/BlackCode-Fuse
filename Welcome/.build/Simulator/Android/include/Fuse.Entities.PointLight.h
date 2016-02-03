// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Entities.Light.h>
namespace g{namespace Fuse{namespace Entities{struct PointLight;}}}

namespace g{
namespace Fuse{
namespace Entities{

// public sealed class PointLight :912
// {
::g::Fuse::Entities::Light_type* PointLight_typeof();
void PointLight__ctor_2_fn(PointLight* __this);
void PointLight__Accept_fn(PointLight* __this, uObject* visitor);
void PointLight__New1_fn(PointLight** __retval);

struct PointLight : ::g::Fuse::Entities::Light
{
    void ctor_2();
    static PointLight* New1();
};
// }

}}} // ::g::Fuse::Entities
