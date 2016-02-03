// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_PRIMITIVES_CUBE_RENDERER_H__
#define __APP_FUSE_ENTITIES_PRIMITIVES_CUBE_RENDERER_H__

#include <app/Fuse.Entities.MeshRenderer.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Entities {
namespace Primitives {

struct CubeRenderer;

struct CubeRenderer__uType : ::app::Fuse::Entities::MeshRenderer__uType
{
};

CubeRenderer__uType* CubeRenderer__typeof();

void CubeRenderer___ObjInit_2(CubeRenderer* __this);
CubeRenderer* CubeRenderer__New_2(::uStatic* __this);

struct CubeRenderer : ::app::Fuse::Entities::MeshRenderer
{
    void _ObjInit_2() { CubeRenderer___ObjInit_2(this); }
};

}}}}


#endif
