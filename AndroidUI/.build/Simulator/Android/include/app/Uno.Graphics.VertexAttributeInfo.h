// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_GRAPHICS_VERTEX_ATTRIBUTE_INFO_H__
#define __APP_UNO_GRAPHICS_VERTEX_ATTRIBUTE_INFO_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Graphics { struct VertexBuffer; } } }

namespace app {
namespace Uno {
namespace Graphics {

struct VertexAttributeInfo;

struct VertexAttributeInfo__uType : ::uStructType
{
};

VertexAttributeInfo__uType* VertexAttributeInfo__typeof();

struct VertexAttributeInfo
{
    int Type;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> Buffer;
    int BufferStride;
    int BufferOffset;
};

}}}


#endif
