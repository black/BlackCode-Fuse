// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Fonts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_FONTS_TEXT_SHADER_DATA_H__
#define __APP_UNO_CONTENT_FONTS_TEXT_SHADER_DATA_H__

#include <app/Uno.Float4x4.h>
#include <app/Uno.Graphics.VertexAttributeInfo.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Graphics { struct IndexBuffer; } } }
namespace app { namespace Uno { namespace Graphics { struct Texture2D; } } }
namespace app { namespace Uno { namespace Graphics { struct VertexBuffer; } } }

namespace app {
namespace Uno {
namespace Content {
namespace Fonts {

struct TextShaderData;

struct TextShaderData__uType : ::uClassType
{
};

TextShaderData__uType* TextShaderData__typeof();

void TextShaderData___ObjInit(TextShaderData* __this, ::app::Uno::Graphics::IndexBuffer* ibo, ::app::Uno::Graphics::VertexBuffer* vbo);
TextShaderData* TextShaderData__New_1(::uStatic* __this, ::app::Uno::Graphics::IndexBuffer* ibo, ::app::Uno::Graphics::VertexBuffer* vbo);

struct TextShaderData : ::uObject
{
    float FontScale;
    float FontSpread;
    ::app::Uno::Float4x4 ClipSpaceMatrix;
    ::uStrong< ::app::Uno::Graphics::Texture2D*> FontTexture;
    int DataCullFace;
    int CharCount;
    int IndexType;
    ::uStrong< ::app::Uno::Graphics::IndexBuffer*> IndexBuffer;
    ::app::Uno::Graphics::VertexAttributeInfo PositionInfo;
    ::app::Uno::Graphics::VertexAttributeInfo TexCoordInfo;
    ::app::Uno::Graphics::VertexAttributeInfo ColorInfo;

    void _ObjInit(::app::Uno::Graphics::IndexBuffer* ibo, ::app::Uno::Graphics::VertexBuffer* vbo) { TextShaderData___ObjInit(this, ibo, vbo); }
};

}}}}


#endif
