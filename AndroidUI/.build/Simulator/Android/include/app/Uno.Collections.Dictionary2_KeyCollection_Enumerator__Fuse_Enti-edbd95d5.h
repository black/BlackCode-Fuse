// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION_ENUMERATOR__FUSE_ENTI_EDBD95D5_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION_ENUMERATOR__FUSE_ENTI_EDBD95D5_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Entities { struct Material; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_;

struct Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___uType : ::uStructType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___uType* Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___typeof();

void Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry____ObjInit(Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this, ::app::Uno::Collections::Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* source);
void Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___Dispose(Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this);
bool Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___MoveNext(Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this);
Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_ Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* source);
void Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this);

struct Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_*> _source;
    ::uStrong< ::app::Fuse::Entities::Material*> _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* source) { Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry____ObjInit(this, source); }
    void Dispose() { Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___Dispose(this); }
    bool MoveNext() { return Dictionary2_KeyCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___MoveNext(this); }
};

}}}


#endif