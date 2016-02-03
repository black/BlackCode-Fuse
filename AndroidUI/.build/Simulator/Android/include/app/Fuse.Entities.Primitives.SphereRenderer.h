// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_PRIMITIVES_SPHERE_RENDERER_H__
#define __APP_FUSE_ENTITIES_PRIMITIVES_SPHERE_RENDERER_H__

#include <app/Fuse.Entities.MeshRenderer.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Entities {
namespace Primitives {

struct SphereRenderer;

struct SphereRenderer__uType : ::app::Fuse::Entities::MeshRenderer__uType
{
};

SphereRenderer__uType* SphereRenderer__typeof();

void SphereRenderer___ObjInit_2(SphereRenderer* __this);
int SphereRenderer__get_Quality(SphereRenderer* __this);
float SphereRenderer__get_Radius(SphereRenderer* __this);
SphereRenderer* SphereRenderer__New_2(::uStatic* __this);
void SphereRenderer__set_Quality(SphereRenderer* __this, int value);
void SphereRenderer__set_Radius(SphereRenderer* __this, float value);
void SphereRenderer__Validate(SphereRenderer* __this);

struct SphereRenderer : ::app::Fuse::Entities::MeshRenderer
{
    bool _isDirty;
    float _radius;
    int _quality;

    void _ObjInit_2() { SphereRenderer___ObjInit_2(this); }
    int Quality() { return SphereRenderer__get_Quality(this); }
    float Radius() { return SphereRenderer__get_Radius(this); }
    void Quality(int value) { SphereRenderer__set_Quality(this, value); }
    void Radius(float value) { SphereRenderer__set_Radius(this, value); }
};

}}}}


#endif
