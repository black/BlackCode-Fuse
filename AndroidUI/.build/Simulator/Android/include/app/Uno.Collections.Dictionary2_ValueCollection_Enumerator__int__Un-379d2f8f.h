// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION_ENUMERATOR__INT__UN_379D2F8F_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION_ENUMERATOR__INT__UN_379D2F8F_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_;

struct Dictionary2_ValueCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___uType : ::uStructType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

Dictionary2_ValueCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___uType* Dictionary2_ValueCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___typeof();

void Dictionary2_ValueCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer____ObjInit(Dictionary2_ValueCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this, ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_* source);
void Dictionary2_ValueCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___Dispose(Dictionary2_ValueCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this);
bool Dictionary2_ValueCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___MoveNext(Dictionary2_ValueCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this);
Dictionary2_ValueCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_ Dictionary2_ValueCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_* source);
void Dictionary2_ValueCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___Uno_Collections_IEnumerator_Reset(Dictionary2_ValueCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_* __this);

struct Dictionary2_ValueCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_
{
    ::uStrong< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*> _source;
    ::uStrong< ::uObject*> _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_* source) { Dictionary2_ValueCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer____ObjInit(this, source); }
    void Dispose() { Dictionary2_ValueCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___Dispose(this); }
    bool MoveNext() { return Dictionary2_ValueCollection_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___MoveNext(this); }
};

}}}


#endif
