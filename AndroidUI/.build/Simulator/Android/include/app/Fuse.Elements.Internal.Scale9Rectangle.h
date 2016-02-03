// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Drawing\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ELEMENTS_INTERNAL_SCALE9_RECTANGLE_H__
#define __APP_FUSE_ELEMENTS_INTERNAL_SCALE9_RECTANGLE_H__

#include <app/Uno.Object.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno.h>
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace Graphics { struct IndexBuffer; } } }
namespace app { namespace Uno { namespace Graphics { struct Texture2D; } } }
namespace app { namespace Uno { namespace Graphics { struct VertexBuffer; } } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Elements {
namespace Internal {

struct Scale9Rectangle;

extern ::uStaticStrong< Scale9Rectangle*> Scale9Rectangle__Impl;

struct Scale9Rectangle__uType : ::uClassType
{
};

Scale9Rectangle__uType* Scale9Rectangle__typeof();

void Scale9Rectangle___ObjInit(Scale9Rectangle* __this);
void Scale9Rectangle___TypeInit(::uStatic* __this);
void Scale9Rectangle__Draw(Scale9Rectangle* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Node* element, ::app::Uno::Float2 size, ::app::Uno::Float2 scaleTextureSize, ::app::Uno::Graphics::Texture2D* tex, ::app::Uno::Float4 color, ::app::Uno::Float4 margin);
void Scale9Rectangle__free_DrawCalls(Scale9Rectangle* __this);
void Scale9Rectangle__init_DrawCalls(Scale9Rectangle* __this);
Scale9Rectangle* Scale9Rectangle__New_1(::uStatic* __this);

struct Scale9Rectangle : ::uObject
{
    ::uStrong< ::app::Uno::Graphics::IndexBuffer*> Draw_xv_d0f299e5_1_3_2;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> Draw_xv_d0f299e5_1_3_3;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> Draw_yv_d0f299e5_1_4_6;
    ::uStrong< ::uArray*> Draw_indices_d0f299e5_1_2_13;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_d0f299e5;

    void _ObjInit() { Scale9Rectangle___ObjInit(this); }
    void Draw(::app::Fuse::DrawContext* dc, ::app::Fuse::Node* element, ::app::Uno::Float2 size, ::app::Uno::Float2 scaleTextureSize, ::app::Uno::Graphics::Texture2D* tex, ::app::Uno::Float4 color, ::app::Uno::Float4 margin);
    void free_DrawCalls() { Scale9Rectangle__free_DrawCalls(this); }
    void init_DrawCalls() { Scale9Rectangle__init_DrawCalls(this); }
};

}}}}

#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Elements {
namespace Internal {

inline void Scale9Rectangle::Draw(::app::Fuse::DrawContext* dc, ::app::Fuse::Node* element, ::app::Uno::Float2 size, ::app::Uno::Float2 scaleTextureSize, ::app::Uno::Graphics::Texture2D* tex, ::app::Uno::Float4 color, ::app::Uno::Float4 margin) { Scale9Rectangle__Draw(this, dc, element, size, scaleTextureSize, tex, color, margin); }

}}}}


#endif
