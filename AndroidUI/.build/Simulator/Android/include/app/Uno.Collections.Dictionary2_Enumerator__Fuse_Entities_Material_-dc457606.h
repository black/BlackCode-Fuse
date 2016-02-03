// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__FUSE_ENTITIES_MATERIAL__DC457606_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__FUSE_ENTITIES_MATERIAL__DC457606_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_Fuse_-4ccadabf.h>
#include <app/Uno.Collections.KeyValuePair__Fuse_Entities_Material__Uno_Colle-c68f1aae.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_;

struct Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Collections_KeyValuePair_Fuse_Entities_Material_Uno_Collections_List_Fuse_Entities_Entry__ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___uType* Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___typeof();

void Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry____ObjInit(Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this, ::app::Uno::Collections::Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* source);
void Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___Dispose(Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this);
::app::Uno::Collections::KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_ Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___get_Current(Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this);
bool Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___MoveNext(Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this);
Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_ Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* source);
void Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___Uno_Collections_IEnumerator_Reset(Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this);

struct Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_*> _source;
    ::app::Uno::Collections::KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_ _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* source) { Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry____ObjInit(this, source); }
    void Dispose() { Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___Dispose(this); }
    ::app::Uno::Collections::KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_ Current() { return Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___get_Current(this); }
    bool MoveNext() { return Dictionary2_Enumerator__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___MoveNext(this); }
};

}}}


#endif
