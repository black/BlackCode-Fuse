// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION_ENUMERATOR__FUSE_EN_9B17A81_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION_ENUMERATOR__FUSE_EN_9B17A81_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Entities_Entry; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_;

struct Dictionary2_ValueCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___uType : ::uStructType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

Dictionary2_ValueCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___uType* Dictionary2_ValueCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___typeof();

void Dictionary2_ValueCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry____ObjInit(Dictionary2_ValueCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this, ::app::Uno::Collections::Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* source);
void Dictionary2_ValueCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___Dispose(Dictionary2_ValueCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this);
bool Dictionary2_ValueCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___MoveNext(Dictionary2_ValueCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this);
Dictionary2_ValueCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_ Dictionary2_ValueCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* source);
void Dictionary2_ValueCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___Uno_Collections_IEnumerator_Reset(Dictionary2_ValueCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this);

struct Dictionary2_ValueCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_*> _source;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Entities_Entry*> _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* source) { Dictionary2_ValueCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry____ObjInit(this, source); }
    void Dispose() { Dictionary2_ValueCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___Dispose(this); }
    bool MoveNext() { return Dictionary2_ValueCollection_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___MoveNext(this); }
};

}}}


#endif
