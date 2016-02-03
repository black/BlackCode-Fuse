// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_DRAWING_SOLID_RECTANGLE_H__
#define __APP_FUSE_INTERNAL_DRAWING_SOLID_RECTANGLE_H__

#include <app/Uno.Float4x4.h>
#include <app/Uno.Object.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { namespace Graphics { struct VertexBuffer; } } }

namespace app {
namespace Fuse {
namespace Internal {
namespace Drawing {

struct SolidRectangle;

extern ::uStaticStrong< SolidRectangle*> SolidRectangle__Impl;

struct SolidRectangle__uType : ::uClassType
{
};

SolidRectangle__uType* SolidRectangle__typeof();

void SolidRectangle___ObjInit(SolidRectangle* __this);
void SolidRectangle___TypeInit(::uStatic* __this);
void SolidRectangle__DrawElement(SolidRectangle* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* element, ::app::Fuse::Drawing::Brush* brush, float opacity);
void SolidRectangle__free_DrawCalls(SolidRectangle* __this);
void SolidRectangle__init_DrawCalls(SolidRectangle* __this);
SolidRectangle* SolidRectangle__New_1(::uStatic* __this);

struct SolidRectangle : ::uObject
{
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> DrawElement_VertexData_c993343d_7_2_1;
    ::app::Uno::Float4x4 DrawElement_LocalTransform_c993343d_4_8_2;
    ::app::Uno::Float4x4 DrawElement_LocalTransform_c993343d_4_8_3;
    ::app::Uno::Float4x4 DrawElement_LocalTransform_c993343d_4_8_4;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> DrawElement_VertexData_c930343d_7_2_1;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> DrawElement_VertexData_c951343d_7_2_1;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> DrawElement_VertexData_c8ee343d_7_2_1;
    int DrawElement_BlendSrcRgb_c8ee343d_11_4_10;
    int DrawElement_BlendSrcAlpha_c8ee343d_11_6_11;
    int DrawElement_BlendDstRgb_c8ee343d_11_5_12;
    int DrawElement_BlendDstAlpha_c8ee343d_11_7_13;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_c993343d;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_c930343d;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_c951343d;

    void _ObjInit() { SolidRectangle___ObjInit(this); }
    void DrawElement(::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* element, ::app::Fuse::Drawing::Brush* brush, float opacity) { SolidRectangle__DrawElement(this, dc, element, brush, opacity); }
    void free_DrawCalls() { SolidRectangle__free_DrawCalls(this); }
    void init_DrawCalls() { SolidRectangle__init_DrawCalls(this); }
};

}}}}


#endif
