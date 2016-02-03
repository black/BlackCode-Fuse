// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_GRAPHICS_TEXTURE_HELPERS_H__
#define __APP_UNO_GRAPHICS_TEXTURE_HELPERS_H__

#include <Uno.h>
namespace app { namespace Uno { namespace Graphics { struct Texture2D; } } }
namespace app { namespace Uno { namespace Graphics { struct TextureCube; } } }
namespace app { namespace Uno { struct Int2; } }

namespace app {
namespace Uno {
namespace Graphics {

struct TextureHelpers__uType : ::uClassType
{
};

TextureHelpers__uType* TextureHelpers__typeof();

int TextureHelpers__GetMipCount(::uStatic* __this, int size);
int TextureHelpers__GetMipCount_1(::uStatic* __this, ::app::Uno::Int2 size);
::app::Uno::Int2 TextureHelpers__GetMipSize(::uStatic* __this, ::app::Uno::Graphics::Texture2D* texture, int mip);
::app::Uno::Int2 TextureHelpers__GetMipSize_1(::uStatic* __this, ::app::Uno::Graphics::TextureCube* texture, int mip);

}}}


#endif
