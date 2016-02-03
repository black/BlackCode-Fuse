// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_MESH_BATCHING_ENGINE_H__
#define __APP_FUSE_ENTITIES_MESH_BATCHING_ENGINE_H__

#include <app/Fuse.IFlush.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Object.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Batching { struct Batch; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Batching { struct MeshBatcher; } } } }
namespace app { namespace Fuse { namespace Entities { struct Material; } } }
namespace app { namespace Fuse { namespace Entities { struct Mesh; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Entities_Entry; } } }

namespace app {
namespace Fuse {
namespace Entities {

struct MeshBatchingEngine;

extern ::uStaticStrong< MeshBatchingEngine*> MeshBatchingEngine___singleton;

struct MeshBatchingEngine__uType : ::uClassType
{
    ::app::Fuse::IFlush __interface_0;
};

MeshBatchingEngine__uType* MeshBatchingEngine__typeof();

void MeshBatchingEngine___ObjInit(MeshBatchingEngine* __this);
void MeshBatchingEngine__Draw(MeshBatchingEngine* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Entities::Mesh* mesh, ::app::Uno::Float4x4 transform, ::app::Fuse::Entities::Material* material);
void MeshBatchingEngine__DrawBatch(MeshBatchingEngine* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Entities::Material* material, ::app::Fuse::Drawing::Batching::Batch* batch, ::app::Uno::Float4x4 world, ::app::Uno::Float4x4 worldInverse);
void MeshBatchingEngine__DrawBatched(MeshBatchingEngine* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Entities::Material* material, ::app::Fuse::Drawing::Batching::MeshBatcher* batcher, ::app::Uno::Collections::List__Fuse_Entities_Entry* entries);
void MeshBatchingEngine__DrawIndividual(MeshBatchingEngine* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Entities::Material* m, ::app::Uno::Collections::List__Fuse_Entities_Entry* entries);
void MeshBatchingEngine__DrawList(MeshBatchingEngine* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Entities::Material* material, ::app::Uno::Collections::List__Fuse_Entities_Entry* entries);
void MeshBatchingEngine__DrawMesh(MeshBatchingEngine* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Entities::Material* m, ::app::Fuse::Entities::Mesh* mesh, ::app::Uno::Float4x4 world, ::app::Uno::Float4x4 worldInverse);
::app::Fuse::Drawing::Batching::MeshBatcher* MeshBatchingEngine__FindOrCreateBatcher(MeshBatchingEngine* __this, ::app::Fuse::Entities::Mesh* mesh);
void MeshBatchingEngine__Flush(MeshBatchingEngine* __this, ::app::Fuse::DrawContext* dc);
void MeshBatchingEngine__free_DrawCalls(MeshBatchingEngine* __this);
MeshBatchingEngine* MeshBatchingEngine__get_Singleton(::uStatic* __this);
void MeshBatchingEngine__init_DrawCalls(MeshBatchingEngine* __this);
int MeshBatchingEngine__MeshVertexCount(MeshBatchingEngine* __this, ::app::Fuse::Entities::Mesh* mesh);
MeshBatchingEngine* MeshBatchingEngine__New_1(::uStatic* __this);
void MeshBatchingEngine__PrepareMesh(MeshBatchingEngine* __this, ::app::Fuse::Entities::Mesh* m);

struct MeshBatchingEngine : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_*> drawLists;
    ::uStrong< ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher*> batchers;
    ::uStrong< ::uArray*> worldArray;
    ::uStrong< ::uArray*> normalArray;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_3d7404f9;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_e92d1425;

    void _ObjInit() { MeshBatchingEngine___ObjInit(this); }
    void Draw(::app::Fuse::DrawContext* dc, ::app::Fuse::Entities::Mesh* mesh, ::app::Uno::Float4x4 transform, ::app::Fuse::Entities::Material* material) { MeshBatchingEngine__Draw(this, dc, mesh, transform, material); }
    void DrawBatch(::app::Fuse::DrawContext* dc, ::app::Fuse::Entities::Material* material, ::app::Fuse::Drawing::Batching::Batch* batch, ::app::Uno::Float4x4 world, ::app::Uno::Float4x4 worldInverse) { MeshBatchingEngine__DrawBatch(this, dc, material, batch, world, worldInverse); }
    void DrawBatched(::app::Fuse::DrawContext* dc, ::app::Fuse::Entities::Material* material, ::app::Fuse::Drawing::Batching::MeshBatcher* batcher, ::app::Uno::Collections::List__Fuse_Entities_Entry* entries) { MeshBatchingEngine__DrawBatched(this, dc, material, batcher, entries); }
    void DrawIndividual(::app::Fuse::DrawContext* dc, ::app::Fuse::Entities::Material* m, ::app::Uno::Collections::List__Fuse_Entities_Entry* entries) { MeshBatchingEngine__DrawIndividual(this, dc, m, entries); }
    void DrawList(::app::Fuse::DrawContext* dc, ::app::Fuse::Entities::Material* material, ::app::Uno::Collections::List__Fuse_Entities_Entry* entries) { MeshBatchingEngine__DrawList(this, dc, material, entries); }
    void DrawMesh(::app::Fuse::DrawContext* dc, ::app::Fuse::Entities::Material* m, ::app::Fuse::Entities::Mesh* mesh, ::app::Uno::Float4x4 world, ::app::Uno::Float4x4 worldInverse) { MeshBatchingEngine__DrawMesh(this, dc, m, mesh, world, worldInverse); }
    ::app::Fuse::Drawing::Batching::MeshBatcher* FindOrCreateBatcher(::app::Fuse::Entities::Mesh* mesh) { return MeshBatchingEngine__FindOrCreateBatcher(this, mesh); }
    void Flush(::app::Fuse::DrawContext* dc) { MeshBatchingEngine__Flush(this, dc); }
    void free_DrawCalls() { MeshBatchingEngine__free_DrawCalls(this); }
    void init_DrawCalls() { MeshBatchingEngine__init_DrawCalls(this); }
    int MeshVertexCount(::app::Fuse::Entities::Mesh* mesh) { return MeshBatchingEngine__MeshVertexCount(this, mesh); }
    void PrepareMesh(::app::Fuse::Entities::Mesh* m) { MeshBatchingEngine__PrepareMesh(this, m); }
};

}}}


#endif
