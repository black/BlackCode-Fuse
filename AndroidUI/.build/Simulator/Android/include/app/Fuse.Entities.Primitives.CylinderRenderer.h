// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_PRIMITIVES_CYLINDER_RENDERER_H__
#define __APP_FUSE_ENTITIES_PRIMITIVES_CYLINDER_RENDERER_H__

#include <app/Fuse.Entities.MeshRenderer.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Entities {
namespace Primitives {

struct CylinderRenderer;

struct CylinderRenderer__uType : ::app::Fuse::Entities::MeshRenderer__uType
{
};

CylinderRenderer__uType* CylinderRenderer__typeof();

void CylinderRenderer___ObjInit_2(CylinderRenderer* __this);
CylinderRenderer* CylinderRenderer__New_2(::uStatic* __this);

struct CylinderRenderer : ::app::Fuse::Entities::MeshRenderer
{
    void _ObjInit_2() { CylinderRenderer___ObjInit_2(this); }
};

}}}}


#endif
