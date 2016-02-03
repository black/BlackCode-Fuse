// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__FUSE_ENTITIES_MESH_62669C51_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__FUSE_ENTITIES_MESH_62669C51_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Batching { struct MeshBatcher; } } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher;

struct Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__uType : ::uClassType
{
};

Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__uType* Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__typeof();

void Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher___ObjInit(Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this, ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* source);
int Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__get_Count(Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this);
::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__GetEnumerator(Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this);
Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* source);
void Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this, ::app::Fuse::Drawing::Batching::MeshBatcher* item);
void Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this);
bool Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this, ::app::Fuse::Drawing::Batching::MeshBatcher* item);
bool Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this, ::app::Fuse::Drawing::Batching::MeshBatcher* item);

struct Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher*> _source;

    void _ObjInit(::app::Uno::Collections::Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* source) { Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher___ObjInit(this, source); }
    int Count() { return Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__get_Count(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher GetEnumerator();
};

}}}

#include <app/Uno.Collections.Dictionary2_ValueCollection_Enumerator__Fuse_En-df2dd1e0.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher::GetEnumerator() { return Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__GetEnumerator(this); }

}}}


#endif
