// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.19.6\Source\Uno\Content\Fonts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4x4.h>
#include <Uno.Graphics.VertexAttributeInfo.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Content{namespace Fonts{struct TextShaderData;}}}}
namespace g{namespace Uno{namespace Graphics{struct IndexBuffer;}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}

namespace g{
namespace Uno{
namespace Content{
namespace Fonts{

// public sealed class TextShaderData :862
// {
uType* TextShaderData_typeof();
void TextShaderData__ctor__fn(TextShaderData* __this, ::g::Uno::Graphics::IndexBuffer* ibo, ::g::Uno::Graphics::VertexBuffer* vbo);
void TextShaderData__New1_fn(::g::Uno::Graphics::IndexBuffer* ibo, ::g::Uno::Graphics::VertexBuffer* vbo, TextShaderData** __retval);

struct TextShaderData : uObject
{
    int CharCount;
    ::g::Uno::Float4x4 ClipSpaceMatrix;
    ::g::Uno::Graphics::VertexAttributeInfo ColorInfo;
    int DataCullFace;
    float FontScale;
    float FontSpread;
    uStrong< ::g::Uno::Graphics::Texture2D*> FontTexture;
    uStrong< ::g::Uno::Graphics::IndexBuffer*> IndexBuffer;
    int IndexType;
    ::g::Uno::Graphics::VertexAttributeInfo PositionInfo;
    ::g::Uno::Graphics::VertexAttributeInfo TexCoordInfo;

    void ctor_(::g::Uno::Graphics::IndexBuffer* ibo, ::g::Uno::Graphics::VertexBuffer* vbo);
    static TextShaderData* New1(::g::Uno::Graphics::IndexBuffer* ibo, ::g::Uno::Graphics::VertexBuffer* vbo);
};
// }

}}}} // ::g::Uno::Content::Fonts
