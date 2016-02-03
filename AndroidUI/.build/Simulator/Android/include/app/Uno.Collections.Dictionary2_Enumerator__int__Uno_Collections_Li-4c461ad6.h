// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__INT__UNO_COLLECTIONS_LI_4C461AD6_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__INT__UNO_COLLECTIONS_LI_4C461AD6_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_int_U-47ec93a2.h>
#include <app/Uno.Collections.KeyValuePair__int__Uno_Collections_List_Fuse_In-7328e3bd.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_;

struct Dictionary2_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Collections_KeyValuePair_int_Uno_Collections_List_Fuse_Input_Pointer_PELHolder__ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

Dictionary2_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___uType* Dictionary2_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___typeof();

void Dictionary2_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder____ObjInit(Dictionary2_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* __this, ::app::Uno::Collections::Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* source);
void Dictionary2_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___Dispose(Dictionary2_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* __this);
::app::Uno::Collections::KeyValuePair__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_ Dictionary2_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___get_Current(Dictionary2_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* __this);
bool Dictionary2_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___MoveNext(Dictionary2_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* __this);
Dictionary2_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_ Dictionary2_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* source);
void Dictionary2_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___Uno_Collections_IEnumerator_Reset(Dictionary2_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* __this);

struct Dictionary2_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_
{
    ::uStrong< ::app::Uno::Collections::Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_*> _source;
    ::app::Uno::Collections::KeyValuePair__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_ _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_* source) { Dictionary2_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder____ObjInit(this, source); }
    void Dispose() { Dictionary2_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___Dispose(this); }
    ::app::Uno::Collections::KeyValuePair__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_ Current() { return Dictionary2_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___get_Current(this); }
    bool MoveNext() { return Dictionary2_Enumerator__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___MoveNext(this); }
};

}}}


#endif
