// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Batching\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_BATCHING_MESH_BATCHER_H__
#define __APP_FUSE_DRAWING_BATCHING_MESH_BATCHER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Batching { struct Batch; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Batching { struct Entry; } } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Drawing_Batching_Entry; } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelMesh; } } } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Batching {

struct MeshBatcher;

struct MeshBatcher__uType : ::uClassType
{
};

MeshBatcher__uType* MeshBatcher__typeof();

void MeshBatcher___ObjInit(MeshBatcher* __this);
int MeshBatcher__AddEntry(MeshBatcher* __this, ::app::Fuse::Drawing::Batching::Entry* e);
int MeshBatcher__AddMesh(MeshBatcher* __this, ::app::Uno::Content::Models::ModelMesh* mesh);
void MeshBatcher__AddMesh_1(MeshBatcher* __this, ::app::Uno::Content::Models::ModelMesh* mesh, int instanceId);
::app::Uno::Content::Models::ModelMesh* MeshBatcher__CreateFakeIndexBuffer(::uStatic* __this, ::app::Uno::Content::Models::ModelMesh* m);
void MeshBatcher__Flush(MeshBatcher* __this);
int MeshBatcher__get_BatchCount(MeshBatcher* __this);
::uObject* MeshBatcher__get_Batches(MeshBatcher* __this);
::uObject* MeshBatcher__get_Entries(MeshBatcher* __this);
int MeshBatcher__get_EntryCount(MeshBatcher* __this);
::app::Uno::Content::Models::ModelMesh* MeshBatcher__Mesh(::uStatic* __this, ::app::Fuse::Drawing::Batching::Entry* entry);
MeshBatcher* MeshBatcher__New_1(::uStatic* __this);

struct MeshBatcher : ::uObject
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Drawing_Batching_Entry*> entries;
    ::uStrong< ::uArray*> batches;

    void _ObjInit() { MeshBatcher___ObjInit(this); }
    int AddEntry(::app::Fuse::Drawing::Batching::Entry* e) { return MeshBatcher__AddEntry(this, e); }
    int AddMesh(::app::Uno::Content::Models::ModelMesh* mesh) { return MeshBatcher__AddMesh(this, mesh); }
    void AddMesh_1(::app::Uno::Content::Models::ModelMesh* mesh, int instanceId) { MeshBatcher__AddMesh_1(this, mesh, instanceId); }
    void Flush() { MeshBatcher__Flush(this); }
    int BatchCount() { return MeshBatcher__get_BatchCount(this); }
    ::uObject* Batches() { return MeshBatcher__get_Batches(this); }
    ::uObject* Entries() { return MeshBatcher__get_Entries(this); }
    int EntryCount() { return MeshBatcher__get_EntryCount(this); }
};

}}}}


#endif
