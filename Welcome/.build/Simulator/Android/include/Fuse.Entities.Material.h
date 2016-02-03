// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Entities{struct Material;}}}
namespace g{namespace Fuse{namespace Entities{struct Mesh;}}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Entities{

// public abstract class Material :950
// {
uType* Material_typeof();
void Material__ctor__fn(Material* __this);
void Material__Draw_fn(Material* __this, ::g::Fuse::Entities::Mesh* m, ::g::Uno::Float4x4* transform, bool* __retval);
void Material__get_IsBatchable_fn(Material* __this, bool* __retval);

struct Material : uObject
{
    void ctor_();
    bool Draw(::g::Fuse::Entities::Mesh* m, ::g::Uno::Float4x4 transform);
    bool IsBatchable();
};
// }

}}} // ::g::Fuse::Entities
