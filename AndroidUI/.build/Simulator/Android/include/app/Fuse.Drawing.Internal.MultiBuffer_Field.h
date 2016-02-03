// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_INTERNAL_MULTI_BUFFER_FIELD_H__
#define __APP_FUSE_DRAWING_INTERNAL_MULTI_BUFFER_FIELD_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Internal { struct MultiBuffer; } } } }
namespace app { namespace Uno { namespace Graphics { struct VertexBuffer; } } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Internal {

struct MultiBuffer_Field;

struct MultiBuffer_Field__uType : ::uClassType
{
};

MultiBuffer_Field__uType* MultiBuffer_Field__typeof();

void MultiBuffer_Field___ObjInit(MultiBuffer_Field* __this);
::app::Uno::Graphics::VertexBuffer* MultiBuffer_Field__get_Buffer(MultiBuffer_Field* __this);
int MultiBuffer_Field__get_Stride(MultiBuffer_Field* __this);
MultiBuffer_Field* MultiBuffer_Field__New_1(::uStatic* __this);

struct MultiBuffer_Field : ::uObject
{
    int Type;
    int Offset;
    ::uStrong< ::app::Fuse::Drawing::Internal::MultiBuffer*> _owner;

    void _ObjInit() { MultiBuffer_Field___ObjInit(this); }
    ::app::Uno::Graphics::VertexBuffer* Buffer() { return MultiBuffer_Field__get_Buffer(this); }
    int Stride() { return MultiBuffer_Field__get_Stride(this); }
};

}}}}


#endif
