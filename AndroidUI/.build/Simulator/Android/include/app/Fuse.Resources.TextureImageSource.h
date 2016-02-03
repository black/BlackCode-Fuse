// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.11.3\Resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_TEXTURE_IMAGE_SOURCE_H__
#define __APP_FUSE_RESOURCES_TEXTURE_IMAGE_SOURCE_H__

#include <app/Fuse.Resources.ImageSource.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Graphics { struct Texture2D; } } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Int2; } }

namespace app {
namespace Fuse {
namespace Resources {

struct TextureImageSource;

struct TextureImageSource__uType : ::app::Fuse::Resources::ImageSource__uType
{
};

TextureImageSource__uType* TextureImageSource__typeof();

void TextureImageSource___ObjInit_1(TextureImageSource* __this);
float TextureImageSource__get_Density(TextureImageSource* __this);
::app::Uno::Int2 TextureImageSource__get_PixelSize(TextureImageSource* __this);
::app::Uno::Float2 TextureImageSource__get_Size(TextureImageSource* __this);
float TextureImageSource__get_SizeDensity(TextureImageSource* __this);
int TextureImageSource__get_State(TextureImageSource* __this);
::app::Uno::Graphics::Texture2D* TextureImageSource__get_Texture(TextureImageSource* __this);
::app::Uno::Graphics::Texture2D* TextureImageSource__GetTexture(TextureImageSource* __this);
TextureImageSource* TextureImageSource__New_1(::uStatic* __this);
void TextureImageSource__set_Density(TextureImageSource* __this, float value);
void TextureImageSource__set_Texture(TextureImageSource* __this, ::app::Uno::Graphics::Texture2D* value);

struct TextureImageSource : ::app::Fuse::Resources::ImageSource
{
    ::uStrong< ::app::Uno::Graphics::Texture2D*> _texture;
    float _density;

    void _ObjInit_1() { TextureImageSource___ObjInit_1(this); }
    float Density() { return TextureImageSource__get_Density(this); }
    ::app::Uno::Graphics::Texture2D* Texture() { return TextureImageSource__get_Texture(this); }
    void Density(float value) { TextureImageSource__set_Density(this, value); }
    void Texture(::app::Uno::Graphics::Texture2D* value) { TextureImageSource__set_Texture(this, value); }
};

}}}


#endif
