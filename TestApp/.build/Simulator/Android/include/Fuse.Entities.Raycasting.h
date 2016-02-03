// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Entities{struct Entity;}}}
namespace g{namespace Fuse{namespace Entities{struct MeshRenderer;}}}
namespace g{namespace Fuse{namespace Entities{struct Raycasting;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Entities{

// internal static class Raycasting :1811
// {
uClassType* Raycasting_typeof();
void Raycasting__PointToTexcoordSpace_fn(::g::Fuse::DrawContext* tc, ::g::Fuse::Entities::Entity* e, ::g::Uno::Float2* pointCoord, bool* __retval);
void Raycasting__PointToTexcoordSpace1_fn(::g::Fuse::DrawContext* tc, ::g::Fuse::Entities::MeshRenderer* mr, ::g::Uno::Float2* pointCoord, float* minDistance, bool* __retval);

struct Raycasting : uObject
{
    static bool PointToTexcoordSpace(::g::Fuse::DrawContext* tc, ::g::Fuse::Entities::Entity* e, ::g::Uno::Float2* pointCoord);
    static bool PointToTexcoordSpace1(::g::Fuse::DrawContext* tc, ::g::Fuse::Entities::MeshRenderer* mr, ::g::Uno::Float2* pointCoord, float* minDistance);
};
// }

}}} // ::g::Fuse::Entities
