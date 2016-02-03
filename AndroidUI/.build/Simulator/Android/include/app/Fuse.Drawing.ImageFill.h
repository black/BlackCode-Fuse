// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Drawing\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_IMAGE_FILL_H__
#define __APP_FUSE_DRAWING_IMAGE_FILL_H__

#include <app/Fuse.Drawing.DynamicBrush.h>
#include <app/Fuse.Internal.IImageContainerOwner.h>
#include <app/Uno.Float4.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct ImageFill_DrawParams; } } }
namespace app { namespace Fuse { namespace Internal { struct ImageContainer; } } }
namespace app { namespace Fuse { namespace Resources { struct ImageSource; } } }
namespace app { namespace Fuse { namespace Resources { struct MemoryPolicy; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { namespace Graphics { struct Texture2D; } } }
namespace app { namespace Uno { namespace UX { struct FileSource; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Drawing {

struct ImageFill;

struct ImageFill__uType : ::app::Fuse::Drawing::DynamicBrush__uType
{
    ::app::Fuse::Internal::IImageContainerOwner __interface_0;
};

ImageFill__uType* ImageFill__typeof();

void ImageFill___ObjInit_2(ImageFill* __this);
void ImageFill__Fuse_Internal_IImageContainerOwner_OnParamChanged(ImageFill* __this);
void ImageFill__Fuse_Internal_IImageContainerOwner_OnSizingChanged(ImageFill* __this);
void ImageFill__Fuse_Internal_IImageContainerOwner_OnSourceChanged(ImageFill* __this);
::app::Uno::Float4 ImageFill__get_Color(ImageFill* __this);
int ImageFill__get_ContentAlignment(ImageFill* __this);
float ImageFill__get_Density(ImageFill* __this);
::app::Uno::UX::FileSource* ImageFill__get_File(ImageFill* __this);
::app::Fuse::Resources::MemoryPolicy* ImageFill__get_MemoryPolicy(ImageFill* __this);
int ImageFill__get_ResampleMode(ImageFill* __this);
::app::Fuse::Resources::ImageSource* ImageFill__get_Source(ImageFill* __this);
int ImageFill__get_StretchDirection(ImageFill* __this);
int ImageFill__get_StretchMode(ImageFill* __this);
::uString* ImageFill__get_Url(ImageFill* __this);
::app::Fuse::Drawing::ImageFill_DrawParams ImageFill__GetDrawParams(ImageFill* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Float2 size);
::app::Uno::Float2 ImageFill__GetSize(ImageFill* __this);
::app::Uno::Graphics::Texture2D* ImageFill__GetTexture(ImageFill* __this);
ImageFill* ImageFill__New_1(::uStatic* __this);
void ImageFill__OnPinned(ImageFill* __this);
void ImageFill__OnUnpinned(ImageFill* __this);
void ImageFill__set_Color(ImageFill* __this, ::app::Uno::Float4 value);
void ImageFill__set_ContentAlignment(ImageFill* __this, int value);
void ImageFill__set_Density(ImageFill* __this, float value);
void ImageFill__set_File(ImageFill* __this, ::app::Uno::UX::FileSource* value);
void ImageFill__set_MemoryPolicy(ImageFill* __this, ::app::Fuse::Resources::MemoryPolicy* value);
void ImageFill__set_ResampleMode(ImageFill* __this, int value);
void ImageFill__set_Source(ImageFill* __this, ::app::Fuse::Resources::ImageSource* value);
void ImageFill__set_StretchDirection(ImageFill* __this, int value);
void ImageFill__set_StretchMode(ImageFill* __this, int value);
void ImageFill__set_Url(ImageFill* __this, ::uString* value);

struct ImageFill : ::app::Fuse::Drawing::DynamicBrush
{
    ::app::Uno::Float4 _color;
    ::uStrong< ::app::Fuse::Internal::ImageContainer*> _container;

    void _ObjInit_2() { ImageFill___ObjInit_2(this); }
    ::app::Uno::Float4 Color();
    int ContentAlignment() { return ImageFill__get_ContentAlignment(this); }
    float Density() { return ImageFill__get_Density(this); }
    ::app::Uno::UX::FileSource* File() { return ImageFill__get_File(this); }
    ::app::Fuse::Resources::MemoryPolicy* MemoryPolicy() { return ImageFill__get_MemoryPolicy(this); }
    int ResampleMode() { return ImageFill__get_ResampleMode(this); }
    ::app::Fuse::Resources::ImageSource* Source() { return ImageFill__get_Source(this); }
    int StretchDirection() { return ImageFill__get_StretchDirection(this); }
    int StretchMode() { return ImageFill__get_StretchMode(this); }
    ::uString* Url() { return ImageFill__get_Url(this); }
    ::app::Fuse::Drawing::ImageFill_DrawParams GetDrawParams(::app::Fuse::DrawContext* dc, ::app::Uno::Float2 size);
    ::app::Uno::Float2 GetSize();
    ::app::Uno::Graphics::Texture2D* GetTexture() { return ImageFill__GetTexture(this); }
    void Color(::app::Uno::Float4 value);
    void ContentAlignment(int value) { ImageFill__set_ContentAlignment(this, value); }
    void Density(float value) { ImageFill__set_Density(this, value); }
    void File(::app::Uno::UX::FileSource* value) { ImageFill__set_File(this, value); }
    void MemoryPolicy(::app::Fuse::Resources::MemoryPolicy* value) { ImageFill__set_MemoryPolicy(this, value); }
    void ResampleMode(int value) { ImageFill__set_ResampleMode(this, value); }
    void Source(::app::Fuse::Resources::ImageSource* value) { ImageFill__set_Source(this, value); }
    void StretchDirection(int value) { ImageFill__set_StretchDirection(this, value); }
    void StretchMode(int value) { ImageFill__set_StretchMode(this, value); }
    void Url(::uString* value) { ImageFill__set_Url(this, value); }
};

}}}

#include <app/Fuse.Drawing.ImageFill_DrawParams.h>
#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Drawing {

inline ::app::Uno::Float4 ImageFill::Color() { return ImageFill__get_Color(this); }
inline ::app::Fuse::Drawing::ImageFill_DrawParams ImageFill::GetDrawParams(::app::Fuse::DrawContext* dc, ::app::Uno::Float2 size) { return ImageFill__GetDrawParams(this, dc, size); }
inline ::app::Uno::Float2 ImageFill::GetSize() { return ImageFill__GetSize(this); }
inline void ImageFill::Color(::app::Uno::Float4 value) { ImageFill__set_Color(this, value); }

}}}


#endif
