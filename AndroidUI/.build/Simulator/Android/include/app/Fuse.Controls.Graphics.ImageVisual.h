// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_GRAPHICS_IMAGE_VISUAL_H__
#define __APP_FUSE_CONTROLS_GRAPHICS_IMAGE_VISUAL_H__

#include <app/Fuse.Controls.Graphics.ControlVisual__Fuse_Controls_Image.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Internal { struct ImageContainer; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Fuse { struct HitTestContext; } }

namespace app {
namespace Fuse {
namespace Controls {
namespace Graphics {

struct ImageVisual;

struct ImageVisual__uType : ::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_Image__uType
{
};

ImageVisual__uType* ImageVisual__typeof();

void ImageVisual___ObjInit_3(ImageVisual* __this);
void ImageVisual__Attach(ImageVisual* __this);
void ImageVisual__Detach(ImageVisual* __this);
::app::Fuse::Internal::ImageContainer* ImageVisual__get_Container(ImageVisual* __this);
::app::Uno::Float2 ImageVisual__GetMarginSize(ImageVisual* __this, ::app::Uno::Float2 fillSize, int fillSet);
::app::Uno::Float2 ImageVisual__GetSize(ImageVisual* __this);
ImageVisual* ImageVisual__New_1(::uStatic* __this);
::app::Uno::Float2 ImageVisual__OnArrangeMarginBox(ImageVisual* __this, ::app::Uno::Float2 position, ::app::Uno::Float2 availableSize, int fillSet);
void ImageVisual__OnDraw(ImageVisual* __this, ::app::Fuse::DrawContext* dc);
void ImageVisual__OnHitTest(ImageVisual* __this, ::app::Fuse::HitTestContext* htc);
void ImageVisual__OnParamChanged(ImageVisual* __this, ::uObject* s, ::uObject* a);

struct ImageVisual : ::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_Image
{
    ::app::Uno::Float2 _origin;
    ::app::Uno::Float2 _scale;
    ::app::Uno::Float2 _drawOrigin;
    ::app::Uno::Float2 _drawSize;
    ::app::Uno::Float4 _uvClip;

    void _ObjInit_3() { ImageVisual___ObjInit_3(this); }
    ::app::Fuse::Internal::ImageContainer* Container() { return ImageVisual__get_Container(this); }
    ::app::Uno::Float2 GetSize() { return ImageVisual__GetSize(this); }
    void OnParamChanged(::uObject* s, ::uObject* a) { ImageVisual__OnParamChanged(this, s, a); }
};

}}}}


#endif
