// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.18.8\Filters\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Entities.RenderNode.h>
#include <Fuse.Scripting.INameScope.h>
#include <Uno.Float4.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
namespace g{namespace Fuse{namespace Entities{namespace Filters{struct FindEdges;}}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{namespace Graphics{struct IndexBuffer;}}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}

namespace g{
namespace Fuse{
namespace Entities{
namespace Filters{

// public sealed class FindEdges :156
// {
::g::Fuse::Entities::RenderNode_type* FindEdges_typeof();
void FindEdges__ctor_2_fn(FindEdges* __this);
void FindEdges__get_BackgroundColor_fn(FindEdges* __this, ::g::Uno::Float4* __retval);
void FindEdges__set_BackgroundColor_fn(FindEdges* __this, ::g::Uno::Float4* value);
void FindEdges__get_BlendDst_fn(FindEdges* __this, int* __retval);
void FindEdges__set_BlendDst_fn(FindEdges* __this, int* value);
void FindEdges__get_BlendEnabled_fn(FindEdges* __this, bool* __retval);
void FindEdges__set_BlendEnabled_fn(FindEdges* __this, bool* value);
void FindEdges__get_BlendSrc_fn(FindEdges* __this, int* __retval);
void FindEdges__set_BlendSrc_fn(FindEdges* __this, int* value);
void FindEdges__get_EdgeColor_fn(FindEdges* __this, ::g::Uno::Float4* __retval);
void FindEdges__set_EdgeColor_fn(FindEdges* __this, ::g::Uno::Float4* value);
void FindEdges__init_DrawCalls_fn(FindEdges* __this);
void FindEdges__New2_fn(FindEdges** __retval);
void FindEdges__OnDraw_fn(FindEdges* __this, ::g::Fuse::DrawContext* dc);
void FindEdges__get_Spread_fn(FindEdges* __this, float* __retval);
void FindEdges__set_Spread_fn(FindEdges* __this, float* value);
void FindEdges__get_Strength_fn(FindEdges* __this, float* __retval);
void FindEdges__set_Strength_fn(FindEdges* __this, float* value);

struct FindEdges : ::g::Fuse::Entities::RenderNode
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_5796b4a7;
    uStrong< ::g::Uno::Graphics::IndexBuffer*> OnDraw_VertexData_5796b4a7_7_5_2;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> OnDraw_VertexData_5796b4a7_7_5_3;
    ::g::Uno::Float4 _BackgroundColor;
    int _BlendDst;
    bool _BlendEnabled;
    int _BlendSrc;
    ::g::Uno::Float4 _EdgeColor;
    float _Spread;
    float _Strength;

    void ctor_2();
    ::g::Uno::Float4 BackgroundColor();
    void BackgroundColor(::g::Uno::Float4 value);
    int BlendDst();
    void BlendDst(int value);
    bool BlendEnabled();
    void BlendEnabled(bool value);
    int BlendSrc();
    void BlendSrc(int value);
    ::g::Uno::Float4 EdgeColor();
    void EdgeColor(::g::Uno::Float4 value);
    void init_DrawCalls();
    float Spread();
    void Spread(float value);
    float Strength();
    void Strength(float value);
    static FindEdges* New2();
};
// }

}}}} // ::g::Fuse::Entities::Filters
