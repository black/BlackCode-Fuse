// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Batching\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_BATCHING_BATCH_HELPERS_H__
#define __APP_FUSE_DRAWING_BATCHING_BATCH_HELPERS_H__

#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Batching { struct Batch; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Batching { struct BatchIndexBuffer; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Batching { struct BatchVertexBuffer; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct IndexArray; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelMesh; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct VertexAttributeArray; } } } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Batching {

struct BatchHelpers__uType : ::uClassType
{
};

BatchHelpers__uType* BatchHelpers__typeof();

::app::Fuse::Drawing::Batching::BatchIndexBuffer* BatchHelpers__CreateBatchIndexBuffer(::uStatic* __this, ::app::Uno::Content::Models::IndexArray* array);
::app::Fuse::Drawing::Batching::BatchVertexBuffer* BatchHelpers__CreateBatchVertexBuffer(::uStatic* __this, ::app::Uno::Content::Models::VertexAttributeArray* array);
::app::Fuse::Drawing::Batching::Batch* BatchHelpers__CreateSingleBatch(::uStatic* __this, ::app::Uno::Content::Models::ModelMesh* m);

}}}}


#endif
