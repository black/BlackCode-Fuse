// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Polygons\0.11.3\Rendering\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_RENDERER_CONTEXT_H__
#define __APP_FUSE_DRAWING_RENDERER_CONTEXT_H__

#include <app/Uno.Float2.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Drawing {

struct RendererContext;

struct RendererContext__uType : ::uClassType
{
};

RendererContext__uType* RendererContext__typeof();

void RendererContext___ObjInit(RendererContext* __this);
::app::Uno::Float2 RendererContext__get_CanvasSize(RendererContext* __this);
int RendererContext__get_CullFace(RendererContext* __this);
float RendererContext__get_Density(RendererContext* __this);
::app::Uno::Float4x4 RendererContext__get_Transform(RendererContext* __this);
RendererContext* RendererContext__New_1(::uStatic* __this);
void RendererContext__set_CanvasSize(RendererContext* __this, ::app::Uno::Float2 value);
void RendererContext__set_CullFace(RendererContext* __this, int value);
void RendererContext__set_Density(RendererContext* __this, float value);
void RendererContext__set_Transform(RendererContext* __this, ::app::Uno::Float4x4 value);

struct RendererContext : ::uObject
{
    ::app::Uno::Float4x4 _Transform;
    ::app::Uno::Float2 _CanvasSize;
    float _Density;
    int _CullFace;

    void _ObjInit() { RendererContext___ObjInit(this); }
    ::app::Uno::Float2 CanvasSize() { return RendererContext__get_CanvasSize(this); }
    int CullFace() { return RendererContext__get_CullFace(this); }
    float Density() { return RendererContext__get_Density(this); }
    ::app::Uno::Float4x4 Transform() { return RendererContext__get_Transform(this); }
    void CanvasSize(::app::Uno::Float2 value) { RendererContext__set_CanvasSize(this, value); }
    void CullFace(int value) { RendererContext__set_CullFace(this, value); }
    void Density(float value) { RendererContext__set_Density(this, value); }
    void Transform(::app::Uno::Float4x4 value) { RendererContext__set_Transform(this, value); }
};

}}}


#endif
