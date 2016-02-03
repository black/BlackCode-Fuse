// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__FUSE_ENTITIES_MESH__FUSE_DRAWING__817A38D0_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__FUSE_ENTITIES_MESH__FUSE_DRAWING__817A38D0_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Batching { struct MeshBatcher; } } } }
namespace app { namespace Fuse { namespace Entities { struct Mesh; } } }

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher;

struct KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__uType : ::uStructType
{
};

KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__uType* KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__typeof();

void KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher___ObjInit(KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this, ::app::Fuse::Entities::Mesh* key, ::app::Fuse::Drawing::Batching::MeshBatcher* value);
::app::Fuse::Entities::Mesh* KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__get_Key(KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this);
::app::Fuse::Drawing::Batching::MeshBatcher* KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__get_Value(KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this);
KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__New_1(::uStatic* __this, ::app::Fuse::Entities::Mesh* key, ::app::Fuse::Drawing::Batching::MeshBatcher* value);

struct KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher
{
    ::uStrong< ::app::Fuse::Entities::Mesh*> _key;
    ::uStrong< ::app::Fuse::Drawing::Batching::MeshBatcher*> _value;

    void _ObjInit(::app::Fuse::Entities::Mesh* key, ::app::Fuse::Drawing::Batching::MeshBatcher* value) { KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher___ObjInit(this, key, value); }
    ::app::Fuse::Entities::Mesh* Key() { return KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__get_Key(this); }
    ::app::Fuse::Drawing::Batching::MeshBatcher* Value() { return KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__get_Value(this); }
};

}}}


#endif
