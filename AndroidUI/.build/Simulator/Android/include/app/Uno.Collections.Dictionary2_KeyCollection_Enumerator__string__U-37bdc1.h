// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION_ENUMERATOR__STRING__U_37BDC1_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION_ENUMERATOR__STRING__U_37BDC1_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__string.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener_;

struct Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__string __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType* Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___typeof();

void Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener____ObjInit(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener_* __this, ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_* source);
void Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___Dispose(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener_* __this);
::uString* Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___get_Current(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener_* __this);
bool Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___MoveNext(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener_* __this);
Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener_ Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_* source);
void Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener_* __this);

struct Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener_
{
    ::uStrong< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_*> _source;
    ::uStrong< ::uString*> _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener_* source) { Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener____ObjInit(this, source); }
    void Dispose() { Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___Dispose(this); }
    ::uString* Current() { return Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___get_Current(this); }
    bool MoveNext() { return Dictionary2_KeyCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___MoveNext(this); }
};

}}}


#endif
