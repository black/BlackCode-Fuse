// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.18.8\Drawing\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.DynamicBrush.h>
#include <Fuse.Internal.IImageContainerOwner.h>
#include <Uno.Float4.h>
namespace g{namespace Fuse{namespace Drawing{struct ImageFill;}}}
namespace g{namespace Fuse{namespace Drawing{struct ImageFill__DrawParams;}}}
namespace g{namespace Fuse{namespace Internal{struct ImageContainer;}}}
namespace g{namespace Fuse{namespace Resources{struct ImageSource;}}}
namespace g{namespace Fuse{namespace Resources{struct MemoryPolicy;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Drawing{

// public sealed class ImageFill :14
// {
struct ImageFill_type : ::g::Fuse::Drawing::Brush_type
{
    ::g::Fuse::Internal::IImageContainerOwner interface0;
};

ImageFill_type* ImageFill_typeof();
void ImageFill__ctor_2_fn(ImageFill* __this);
void ImageFill__get_Color_fn(ImageFill* __this, ::g::Uno::Float4* __retval);
void ImageFill__set_Color_fn(ImageFill* __this, ::g::Uno::Float4* value);
void ImageFill__get_ContentAlignment_fn(ImageFill* __this, int* __retval);
void ImageFill__set_ContentAlignment_fn(ImageFill* __this, int* value);
void ImageFill__get_Density_fn(ImageFill* __this, float* __retval);
void ImageFill__set_Density_fn(ImageFill* __this, float* value);
void ImageFill__get_File_fn(ImageFill* __this, ::g::Uno::UX::FileSource** __retval);
void ImageFill__set_File_fn(ImageFill* __this, ::g::Uno::UX::FileSource* value);
void ImageFill__Fuse_Internal_IImageContainerOwner_OnParamChanged_fn(ImageFill* __this);
void ImageFill__Fuse_Internal_IImageContainerOwner_OnSizingChanged_fn(ImageFill* __this);
void ImageFill__Fuse_Internal_IImageContainerOwner_OnSourceChanged_fn(ImageFill* __this);
void ImageFill__GetDrawParams_fn(ImageFill* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2* size, ImageFill__DrawParams* __retval);
void ImageFill__GetSize_fn(ImageFill* __this, ::g::Uno::Float2* __retval);
void ImageFill__GetTexture_fn(ImageFill* __this, ::g::Uno::Graphics::Texture2D** __retval);
void ImageFill__get_MemoryPolicy_fn(ImageFill* __this, ::g::Fuse::Resources::MemoryPolicy** __retval);
void ImageFill__set_MemoryPolicy_fn(ImageFill* __this, ::g::Fuse::Resources::MemoryPolicy* value);
void ImageFill__New1_fn(ImageFill** __retval);
void ImageFill__OnPinned_fn(ImageFill* __this);
void ImageFill__OnUnpinned_fn(ImageFill* __this);
void ImageFill__get_ResampleMode_fn(ImageFill* __this, int* __retval);
void ImageFill__set_ResampleMode_fn(ImageFill* __this, int* value);
void ImageFill__get_Source_fn(ImageFill* __this, ::g::Fuse::Resources::ImageSource** __retval);
void ImageFill__set_Source_fn(ImageFill* __this, ::g::Fuse::Resources::ImageSource* value);
void ImageFill__get_StretchDirection_fn(ImageFill* __this, int* __retval);
void ImageFill__set_StretchDirection_fn(ImageFill* __this, int* value);
void ImageFill__get_StretchMode_fn(ImageFill* __this, int* __retval);
void ImageFill__set_StretchMode_fn(ImageFill* __this, int* value);
void ImageFill__get_Url_fn(ImageFill* __this, uString** __retval);
void ImageFill__set_Url_fn(ImageFill* __this, uString* value);

struct ImageFill : ::g::Fuse::Drawing::DynamicBrush
{
    ::g::Uno::Float4 _color;
    uStrong< ::g::Fuse::Internal::ImageContainer*> _container;

    void ctor_2();
    ::g::Uno::Float4 Color();
    void Color(::g::Uno::Float4 value);
    int ContentAlignment();
    void ContentAlignment(int value);
    float Density();
    void Density(float value);
    ::g::Uno::UX::FileSource* File();
    void File(::g::Uno::UX::FileSource* value);
    ImageFill__DrawParams GetDrawParams(::g::Fuse::DrawContext* dc, ::g::Uno::Float2 size);
    ::g::Uno::Float2 GetSize();
    ::g::Uno::Graphics::Texture2D* GetTexture();
    ::g::Fuse::Resources::MemoryPolicy* MemoryPolicy();
    void MemoryPolicy(::g::Fuse::Resources::MemoryPolicy* value);
    int ResampleMode();
    void ResampleMode(int value);
    ::g::Fuse::Resources::ImageSource* Source();
    void Source(::g::Fuse::Resources::ImageSource* value);
    int StretchDirection();
    void StretchDirection(int value);
    int StretchMode();
    void StretchMode(int value);
    uString* Url();
    void Url(uString* value);
    static ImageFill* New1();
};
// }

}}} // ::g::Fuse::Drawing
