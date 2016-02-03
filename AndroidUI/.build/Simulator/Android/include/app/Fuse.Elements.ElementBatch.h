// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Caching\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ELEMENTS_ELEMENT_BATCH_H__
#define __APP_FUSE_ELEMENTS_ELEMENT_BATCH_H__

#include <app/Fuse.Elements.IElementBatchDrawable.h>
#include <app/Uno.Graphics.VertexAttributeInfo.h>
#include <app/Uno.Object.h>
#include <app/Uno.Rect.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { namespace Elements { struct ElementAtlas; } } }
namespace app { namespace Fuse { namespace Elements { struct ElementBatcher; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Elements_ElementBatchEntry; } } }
namespace app { namespace Uno { namespace Graphics { struct IndexBuffer; } } }
namespace app { namespace Uno { struct Buffer; } }
namespace app { namespace Uno { struct Float4x4; } }
namespace app { namespace Uno { struct Recti; } }

namespace app {
namespace Fuse {
namespace Elements {

struct ElementBatch;

struct ElementBatch__uType : ::uClassType
{
    ::app::Fuse::Elements::IElementBatchDrawable __interface_0;
};

ElementBatch__uType* ElementBatch__typeof();

void ElementBatch___ObjInit(ElementBatch* __this, ::app::Fuse::Elements::ElementBatcher* elementBatcher, ::app::Fuse::Elements::ElementAtlas* elementAtlas);
void ElementBatch__AddElement(ElementBatch* __this, ::app::Fuse::Elements::Element* elm);
::app::Uno::Rect ElementBatch__CalcRenderBounds(ElementBatch* __this);
::app::Uno::Recti ElementBatch__ConservativelySnapToCoveringIntegers(::uStatic* __this, ::app::Uno::Rect r);
void ElementBatch__Dispose(ElementBatch* __this);
void ElementBatch__Draw(ElementBatch* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Float4x4 localToClipTransform, ::app::Uno::Rect scissorRectInClipSpace);
void ElementBatch__FillIndexBuffer(ElementBatch* __this);
void ElementBatch__FillVertexPositionBuffer(ElementBatch* __this, ::app::Fuse::DrawContext* dc);
void ElementBatch__FillVertexTexCoordBuffer(ElementBatch* __this);
void ElementBatch__free_DrawCalls(ElementBatch* __this);
::app::Uno::Rect ElementBatch__get_RenderBounds(ElementBatch* __this);
::app::Uno::Recti ElementBatch__GetCachingRect(::uStatic* __this, ::app::Fuse::Elements::Element* elm);
void ElementBatch__init_DrawCalls(ElementBatch* __this);
void ElementBatch__InvalidateOpacity(ElementBatch* __this, ::app::Fuse::Elements::Element* elm);
void ElementBatch__InvalidateRenderBounds(ElementBatch* __this, ::app::Fuse::Elements::Element* elm);
void ElementBatch__InvalidateTransform(ElementBatch* __this, ::app::Fuse::Elements::Element* elm);
bool ElementBatch__IsFull(ElementBatch* __this);
ElementBatch* ElementBatch__New_1(::uStatic* __this, ::app::Fuse::Elements::ElementBatcher* elementBatcher, ::app::Fuse::Elements::ElementAtlas* elementAtlas);

struct ElementBatch : ::uObject
{
    ::uStrong< ::app::Fuse::Elements::ElementBatcher*> _elementBatcher;
    ::uStrong< ::app::Fuse::Elements::ElementAtlas*> _elementAtlas;
    bool _indexBufferValid;
    bool _vertexPositionBufferValid;
    bool _vertexTexCoordBufferValid;
    ::uStrong< ::app::Uno::Graphics::IndexBuffer*> _indexBuffer;
    ::app::Uno::Graphics::VertexAttributeInfo _positionInfo;
    ::app::Uno::Graphics::VertexAttributeInfo _texCoordInfo;
    int _prevElementCount;
    bool _renderBoundsValid;
    ::app::Uno::Rect _renderBounds;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Elements_ElementBatchEntry*> _elements;
    ::uStrong< ::app::Uno::Buffer*> _tempBuffer;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_9aaabe09;

    void _ObjInit(::app::Fuse::Elements::ElementBatcher* elementBatcher, ::app::Fuse::Elements::ElementAtlas* elementAtlas) { ElementBatch___ObjInit(this, elementBatcher, elementAtlas); }
    void AddElement(::app::Fuse::Elements::Element* elm) { ElementBatch__AddElement(this, elm); }
    ::app::Uno::Rect CalcRenderBounds();
    void Dispose() { ElementBatch__Dispose(this); }
    void Draw(::app::Fuse::DrawContext* dc, ::app::Uno::Float4x4 localToClipTransform, ::app::Uno::Rect scissorRectInClipSpace);
    void FillIndexBuffer() { ElementBatch__FillIndexBuffer(this); }
    void FillVertexPositionBuffer(::app::Fuse::DrawContext* dc) { ElementBatch__FillVertexPositionBuffer(this, dc); }
    void FillVertexTexCoordBuffer() { ElementBatch__FillVertexTexCoordBuffer(this); }
    void free_DrawCalls() { ElementBatch__free_DrawCalls(this); }
    ::app::Uno::Rect RenderBounds();
    void init_DrawCalls() { ElementBatch__init_DrawCalls(this); }
    void InvalidateOpacity(::app::Fuse::Elements::Element* elm) { ElementBatch__InvalidateOpacity(this, elm); }
    void InvalidateRenderBounds(::app::Fuse::Elements::Element* elm) { ElementBatch__InvalidateRenderBounds(this, elm); }
    void InvalidateTransform(::app::Fuse::Elements::Element* elm) { ElementBatch__InvalidateTransform(this, elm); }
    bool IsFull() { return ElementBatch__IsFull(this); }
};

}}}

#include <app/Uno.Float4x4.h>

namespace app {
namespace Fuse {
namespace Elements {

inline ::app::Uno::Rect ElementBatch::CalcRenderBounds() { return ElementBatch__CalcRenderBounds(this); }
inline void ElementBatch::Draw(::app::Fuse::DrawContext* dc, ::app::Uno::Float4x4 localToClipTransform, ::app::Uno::Rect scissorRectInClipSpace) { ElementBatch__Draw(this, dc, localToClipTransform, scissorRectInClipSpace); }
inline ::app::Uno::Rect ElementBatch::RenderBounds() { return ElementBatch__get_RenderBounds(this); }

}}}


#endif
