// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_PRIMITIVES_CONE_RENDERER_H__
#define __APP_FUSE_ENTITIES_PRIMITIVES_CONE_RENDERER_H__

#include <app/Fuse.Entities.MeshRenderer.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Entities {
namespace Primitives {

struct ConeRenderer;

struct ConeRenderer__uType : ::app::Fuse::Entities::MeshRenderer__uType
{
};

ConeRenderer__uType* ConeRenderer__typeof();

void ConeRenderer___ObjInit_2(ConeRenderer* __this);
ConeRenderer* ConeRenderer__New_2(::uStatic* __this);

struct ConeRenderer : ::app::Fuse::Entities::MeshRenderer
{
    void _ObjInit_2() { ConeRenderer___ObjInit_2(this); }
};

}}}}


#endif
