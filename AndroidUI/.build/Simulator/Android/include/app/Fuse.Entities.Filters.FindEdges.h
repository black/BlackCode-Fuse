// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\Filters\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_FILTERS_FIND_EDGES_H__
#define __APP_FUSE_ENTITIES_FILTERS_FIND_EDGES_H__

#include <app/Fuse.Entities.RenderNode.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno.h>
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { namespace Graphics { struct IndexBuffer; } } }
namespace app { namespace Uno { namespace Graphics { struct VertexBuffer; } } }

namespace app {
namespace Fuse {
namespace Entities {
namespace Filters {

struct FindEdges;

struct FindEdges__uType : ::app::Fuse::Entities::RenderNode__uType
{
};

FindEdges__uType* FindEdges__typeof();

void FindEdges___ObjInit_2(FindEdges* __this);
void FindEdges__free_DrawCalls(FindEdges* __this);
::app::Uno::Float4 FindEdges__get_BackgroundColor(FindEdges* __this);
int FindEdges__get_BlendDst(FindEdges* __this);
bool FindEdges__get_BlendEnabled(FindEdges* __this);
int FindEdges__get_BlendSrc(FindEdges* __this);
::app::Uno::Float4 FindEdges__get_EdgeColor(FindEdges* __this);
float FindEdges__get_Spread(FindEdges* __this);
float FindEdges__get_Strength(FindEdges* __this);
void FindEdges__init_DrawCalls(FindEdges* __this);
FindEdges* FindEdges__New_2(::uStatic* __this);
void FindEdges__OnDraw(FindEdges* __this, ::app::Fuse::DrawContext* dc);
void FindEdges__set_BackgroundColor(FindEdges* __this, ::app::Uno::Float4 value);
void FindEdges__set_BlendDst(FindEdges* __this, int value);
void FindEdges__set_BlendEnabled(FindEdges* __this, bool value);
void FindEdges__set_BlendSrc(FindEdges* __this, int value);
void FindEdges__set_EdgeColor(FindEdges* __this, ::app::Uno::Float4 value);
void FindEdges__set_Spread(FindEdges* __this, float value);
void FindEdges__set_Strength(FindEdges* __this, float value);

struct FindEdges : ::app::Fuse::Entities::RenderNode
{
    ::uStrong< ::app::Uno::Graphics::IndexBuffer*> OnDraw_VertexData_5796b4a7_7_5_2;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> OnDraw_VertexData_5796b4a7_7_5_3;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_5796b4a7;
    float _Spread;
    float _Strength;
    ::app::Uno::Float4 _BackgroundColor;
    ::app::Uno::Float4 _EdgeColor;
    bool _BlendEnabled;
    int _BlendSrc;
    int _BlendDst;

    void _ObjInit_2() { FindEdges___ObjInit_2(this); }
    void free_DrawCalls() { FindEdges__free_DrawCalls(this); }
    ::app::Uno::Float4 BackgroundColor() { return FindEdges__get_BackgroundColor(this); }
    int BlendDst() { return FindEdges__get_BlendDst(this); }
    bool BlendEnabled() { return FindEdges__get_BlendEnabled(this); }
    int BlendSrc() { return FindEdges__get_BlendSrc(this); }
    ::app::Uno::Float4 EdgeColor() { return FindEdges__get_EdgeColor(this); }
    float Spread() { return FindEdges__get_Spread(this); }
    float Strength() { return FindEdges__get_Strength(this); }
    void init_DrawCalls() { FindEdges__init_DrawCalls(this); }
    void BackgroundColor(::app::Uno::Float4 value) { FindEdges__set_BackgroundColor(this, value); }
    void BlendDst(int value) { FindEdges__set_BlendDst(this, value); }
    void BlendEnabled(bool value) { FindEdges__set_BlendEnabled(this, value); }
    void BlendSrc(int value) { FindEdges__set_BlendSrc(this, value); }
    void EdgeColor(::app::Uno::Float4 value) { FindEdges__set_EdgeColor(this, value); }
    void Spread(float value) { FindEdges__set_Spread(this, value); }
    void Strength(float value) { FindEdges__set_Strength(this, value); }
};

}}}}


#endif
