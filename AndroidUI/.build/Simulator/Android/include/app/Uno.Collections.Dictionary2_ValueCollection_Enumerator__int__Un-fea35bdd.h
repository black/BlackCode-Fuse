// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION_ENUMERATOR__INT__UN_FEA35BDD_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION_ENUMERATOR__INT__UN_FEA35BDD_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_Pointer_PELHolder; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_;

struct Dictionary2_ValueCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___uType : ::uStructType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

Dictionary2_ValueCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___uType* Dictionary2_ValueCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___typeof();

void Dictionary2_ValueCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder____ObjInit(Dictionary2_ValueCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* __this, ::app::Uno::Collections::Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* source);
void Dictionary2_ValueCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___Dispose(Dictionary2_ValueCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* __this);
bool Dictionary2_ValueCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___MoveNext(Dictionary2_ValueCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* __this);
Dictionary2_ValueCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_ Dictionary2_ValueCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* source);
void Dictionary2_ValueCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___Uno_Collections_IEnumerator_Reset(Dictionary2_ValueCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* __this);

struct Dictionary2_ValueCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_
{
    ::uStrong< ::app::Uno::Collections::Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_*> _source;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder*> _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* source) { Dictionary2_ValueCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder____ObjInit(this, source); }
    void Dispose() { Dictionary2_ValueCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___Dispose(this); }
    bool MoveNext() { return Dictionary2_ValueCollection_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___MoveNext(this); }
};

}}}


#endif
