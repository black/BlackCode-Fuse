// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Graphics.ControlVisual-1.h>
#include <Fuse.Controls.Image.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
namespace g{namespace Fuse{namespace Controls{namespace Graphics{struct ImageVisual;}}}}
namespace g{namespace Fuse{namespace Internal{struct ImageContainer;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct HitTestContext;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Graphics{

// public sealed class ImageVisual :183
// {
::g::Fuse::Controls::Graphics::ControlVisual_type* ImageVisual_typeof();
void ImageVisual__ctor_3_fn(ImageVisual* __this);
void ImageVisual__Attach_fn(ImageVisual* __this);
void ImageVisual__get_Container_fn(ImageVisual* __this, ::g::Fuse::Internal::ImageContainer** __retval);
void ImageVisual__Detach_fn(ImageVisual* __this);
void ImageVisual__GetMarginSize_fn(ImageVisual* __this, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval);
void ImageVisual__GetSize_fn(ImageVisual* __this, ::g::Uno::Float2* __retval);
void ImageVisual__New1_fn(ImageVisual** __retval);
void ImageVisual__OnArrangeMarginBox_fn(ImageVisual* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* availableSize, int* fillSet, ::g::Uno::Float2* __retval);
void ImageVisual__OnDraw_fn(ImageVisual* __this, ::g::Fuse::DrawContext* dc);
void ImageVisual__OnHitTest_fn(ImageVisual* __this, ::g::Fuse::HitTestContext* htc);
void ImageVisual__OnParamChanged_fn(ImageVisual* __this, uObject* s, uObject* a);

struct ImageVisual : ::g::Fuse::Controls::Graphics::ControlVisual
{
    ::g::Uno::Float2 _drawOrigin;
    ::g::Uno::Float2 _drawSize;
    ::g::Uno::Float2 _origin;
    ::g::Uno::Float2 _scale;
    ::g::Uno::Float4 _uvClip;

    void ctor_3();
    ::g::Fuse::Internal::ImageContainer* Container();
    ::g::Uno::Float2 GetSize();
    void OnParamChanged(uObject* s, uObject* a);
    static ImageVisual* New1();
};
// }

}}}} // ::g::Fuse::Controls::Graphics
