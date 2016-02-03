// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Caching\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ELEMENTS_ELEMENT_ATLAS_H__
#define __APP_FUSE_ELEMENTS_ELEMENT_ATLAS_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { namespace Elements { struct ElementAtlasFramebuffer; } } }
namespace app { namespace Fuse { namespace Elements { struct TextureAtlas; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Elements_Element; } } }
namespace app { namespace Uno { namespace Graphics { struct Framebuffer; } } }
namespace app { namespace Uno { struct EventArgs; } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Int2; } }
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Fuse {
namespace Elements {

struct ElementAtlas;

struct ElementAtlas__uType : ::uClassType
{
};

ElementAtlas__uType* ElementAtlas__typeof();

void ElementAtlas___ObjInit(ElementAtlas* __this);
bool ElementAtlas__AddElement(ElementAtlas* __this, ::app::Fuse::Elements::Element* elm);
void ElementAtlas__Dispose(ElementAtlas* __this);
void ElementAtlas__FillFramebuffer(ElementAtlas* __this, ::app::Fuse::DrawContext* dc, bool drawAll, ::app::Uno::Rect scissorRectInClipSpace);
float ElementAtlas__get_SpilledRatio(ElementAtlas* __this);
::app::Uno::Rect ElementAtlas__GetScissorRectInClipSpace(::uStatic* __this, ::app::Fuse::DrawContext* dc);
void ElementAtlas__InvalidateElement(ElementAtlas* __this, ::app::Fuse::Elements::Element* elm);
ElementAtlas* ElementAtlas__New_1(::uStatic* __this);
void ElementAtlas__OnFramebufferCollected(ElementAtlas* __this, ::uObject* sender, ::app::Uno::EventArgs* eventArgs);
::app::Uno::Graphics::Framebuffer* ElementAtlas__PinAndValidateFramebuffer(ElementAtlas* __this, ::app::Fuse::DrawContext* dc);
bool ElementAtlas__ReinsertElement(ElementAtlas* __this, ::app::Fuse::Elements::Element* elm);
void ElementAtlas__RemoveElement(ElementAtlas* __this, ::app::Fuse::Elements::Element* elm);
void ElementAtlas__Unpin(ElementAtlas* __this);
::app::Uno::Float2 ElementAtlas__WindowCoordToClipSpace(::uStatic* __this, ::app::Uno::Float2 input, ::app::Uno::Int2 viewportSize);
::app::Uno::Rect ElementAtlas__WindowRectToClipSpace(::uStatic* __this, ::app::Uno::Rect input, ::app::Uno::Int2 viewportSize);

struct ElementAtlas : ::uObject
{
    ::uStrong< ::app::Fuse::Elements::TextureAtlas*> _textureAtlas;
    ::uStrong< ::app::Fuse::Elements::ElementAtlasFramebuffer*> _framebuffer;
    int _invalidElements;
    int _spilledPixels;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Elements_Element*> _elements;

    void _ObjInit() { ElementAtlas___ObjInit(this); }
    bool AddElement(::app::Fuse::Elements::Element* elm) { return ElementAtlas__AddElement(this, elm); }
    void Dispose() { ElementAtlas__Dispose(this); }
    void FillFramebuffer(::app::Fuse::DrawContext* dc, bool drawAll, ::app::Uno::Rect scissorRectInClipSpace);
    float SpilledRatio() { return ElementAtlas__get_SpilledRatio(this); }
    void InvalidateElement(::app::Fuse::Elements::Element* elm) { ElementAtlas__InvalidateElement(this, elm); }
    void OnFramebufferCollected(::uObject* sender, ::app::Uno::EventArgs* eventArgs) { ElementAtlas__OnFramebufferCollected(this, sender, eventArgs); }
    ::app::Uno::Graphics::Framebuffer* PinAndValidateFramebuffer(::app::Fuse::DrawContext* dc) { return ElementAtlas__PinAndValidateFramebuffer(this, dc); }
    bool ReinsertElement(::app::Fuse::Elements::Element* elm) { return ElementAtlas__ReinsertElement(this, elm); }
    void RemoveElement(::app::Fuse::Elements::Element* elm) { ElementAtlas__RemoveElement(this, elm); }
    void Unpin() { ElementAtlas__Unpin(this); }
};

}}}

#include <app/Uno.Rect.h>

namespace app {
namespace Fuse {
namespace Elements {

inline void ElementAtlas::FillFramebuffer(::app::Fuse::DrawContext* dc, bool drawAll, ::app::Uno::Rect scissorRectInClipSpace) { ElementAtlas__FillFramebuffer(this, dc, drawAll, scissorRectInClipSpace); }

}}}


#endif
