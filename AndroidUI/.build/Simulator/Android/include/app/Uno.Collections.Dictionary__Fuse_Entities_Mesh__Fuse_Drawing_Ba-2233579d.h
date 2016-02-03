// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__FUSE_ENTITIES_MESH__FUSE_DRAWING_BA_2233579D_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__FUSE_ENTITIES_MESH__FUSE_DRAWING_BA_2233579D_H__

#include <app/Uno.Collections.Dictionary2_Bucket__Fuse_Entities_Mesh__Fuse_Dr-b40c70bc.h>
#include <app/Uno.Collections.IDictionary__Fuse_Entities_Mesh__Fuse_Drawing_B-ca494363.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_Fuse_-ece9a1fa.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Batching { struct MeshBatcher; } } } }
namespace app { namespace Fuse { namespace Entities { struct Mesh; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher; } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher;

struct Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__uType : ::uClassType
{
    ::app::Uno::Collections::IDictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher __interface_0;
    ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_Fuse_Entities_Mesh_Fuse_Drawing_Batching_MeshBatcher_ __interface_1;
};

Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__uType* Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__typeof();

::uObject* Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__GetEnumerator_boxed(Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this);
void Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher___ObjInit(Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this);
void Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher___ObjInit_1(Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this, ::uObject* dictionary);
void Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__Add(Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this, ::app::Fuse::Entities::Mesh* key, ::app::Fuse::Drawing::Batching::MeshBatcher* value);
void Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__Clear(Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this);
bool Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__ContainsKey(Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this, ::app::Fuse::Entities::Mesh* key);
int Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__get_Count(Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this);
::app::Fuse::Drawing::Batching::MeshBatcher* Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__get_Item(Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this, ::app::Fuse::Entities::Mesh* key);
::app::Uno::Collections::Dictionary2_KeyCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__get_Keys(Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this);
::app::Uno::Collections::Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__get_Values(Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this);
::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__GetEnumerator(Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this);
Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__New_1(::uStatic* __this);
Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__New_2(::uStatic* __this, ::uObject* dictionary);
void Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__Rehash(Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this);
bool Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__Remove(Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this, ::app::Fuse::Entities::Mesh* key);
void Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__set_Item(Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this, ::app::Fuse::Entities::Mesh* key, ::app::Fuse::Drawing::Batching::MeshBatcher* value);
bool Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__TryGetValue(Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this, ::app::Fuse::Entities::Mesh* key, ::app::Fuse::Drawing::Batching::MeshBatcher** value);
void Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__Uno_Collections_ICollection_Add(Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this, ::app::Uno::Collections::KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher item);
bool Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__Uno_Collections_ICollection_Contains(Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this, ::app::Uno::Collections::KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher item);
bool Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__Uno_Collections_ICollection_Remove(Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* __this, ::app::Uno::Collections::KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher item);

struct Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::uObject* GetEnumerator_boxed() { return Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__GetEnumerator_boxed(this); }
    void _ObjInit() { Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher___ObjInit(this); }
    void _ObjInit_1(::uObject* dictionary) { Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher___ObjInit_1(this, dictionary); }
    void Add(::app::Fuse::Entities::Mesh* key, ::app::Fuse::Drawing::Batching::MeshBatcher* value) { Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__Add(this, key, value); }
    void Clear() { Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__Clear(this); }
    bool ContainsKey(::app::Fuse::Entities::Mesh* key) { return Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__ContainsKey(this, key); }
    int Count() { return Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__get_Count(this); }
    ::app::Fuse::Drawing::Batching::MeshBatcher* Item(::app::Fuse::Entities::Mesh* key) { return Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__get_Item(this, key); }
    ::app::Uno::Collections::Dictionary2_KeyCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* Keys() { return Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__get_Keys(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher* Values() { return Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__get_Values(this); }
    ::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher GetEnumerator();
    void Rehash() { Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__Rehash(this); }
    bool Remove(::app::Fuse::Entities::Mesh* key) { return Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__Remove(this, key); }
    void Item(::app::Fuse::Entities::Mesh* key, ::app::Fuse::Drawing::Batching::MeshBatcher* value) { Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__set_Item(this, key, value); }
    bool TryGetValue(::app::Fuse::Entities::Mesh* key, ::app::Fuse::Drawing::Batching::MeshBatcher** value) { return Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__TryGetValue(this, key, value); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__Fuse_Entities_Mesh__Fus-17a9b975.h>
#include <app/Uno.Collections.KeyValuePair__Fuse_Entities_Mesh__Fuse_Drawing_-817a38d0.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher::GetEnumerator() { return Dictionary__Fuse_Entities_Mesh__Fuse_Drawing_Batching_MeshBatcher__GetEnumerator(this); }

}}}


#endif
