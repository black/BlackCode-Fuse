// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Entities.Light.h>
namespace g{namespace Fuse{namespace Entities{struct EnvironmentLight;}}}

namespace g{
namespace Fuse{
namespace Entities{

// public sealed class EnvironmentLight :884
// {
::g::Fuse::Entities::Light_type* EnvironmentLight_typeof();
void EnvironmentLight__ctor_2_fn(EnvironmentLight* __this);
void EnvironmentLight__Accept_fn(EnvironmentLight* __this, uObject* visitor);
void EnvironmentLight__New1_fn(EnvironmentLight** __retval);

struct EnvironmentLight : ::g::Fuse::Entities::Light
{
    void ctor_2();
    static EnvironmentLight* New1();
};
// }

}}} // ::g::Fuse::Entities
