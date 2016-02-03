// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__FUSE_ENTITIES_MESH__FUS_17A9B975_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__FUSE_ENTITIES_MESH__FUS_17A9B975_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_Fuse_-ffee88e1.h>
#include <app/Uno.Collections.KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_-817a38d0.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher;

struct Dictionary2_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Collections_KeyValuePair_Fuse_Entities_Mesh_Fuse_Drawing_Batching_MeshBatcher_ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

Dictionary2_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__uType* Dictionary2_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__typeof();

void Dictionary2_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher___ObjInit(Dictionary2_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this, ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* source);
void Dictionary2_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__Dispose(Dictionary2_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this);
::app::Uno::Collections::KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher Dictionary2_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__get_Current(Dictionary2_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this);
bool Dictionary2_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__MoveNext(Dictionary2_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this);
Dictionary2_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher Dictionary2_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* source);
void Dictionary2_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__Uno_Collections_IEnumerator_Reset(Dictionary2_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this);

struct Dictionary2_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher*> _source;
    ::app::Uno::Collections::KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* source) { Dictionary2_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher___ObjInit(this, source); }
    void Dispose() { Dictionary2_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__Dispose(this); }
    ::app::Uno::Collections::KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher Current() { return Dictionary2_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__get_Current(this); }
    bool MoveNext() { return Dictionary2_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__MoveNext(this); }
};

}}}


#endif
