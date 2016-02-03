// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION_ENUMERATOR__INT__FU_EB51BE74_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION_ENUMERATOR__INT__FU_EB51BE74_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct Pointer_PointerRecord; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__int__Fuse_Input_Pointer_PointerRecord; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord;

struct Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord__uType : ::uStructType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord__uType* Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord__typeof();

void Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord___ObjInit(Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord* __this, ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord* source);
void Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord__Dispose(Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord* __this);
bool Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord__MoveNext(Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord* __this);
Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord* source);
void Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord__Uno_Collections_IEnumerator_Reset(Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord* __this);

struct Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord
{
    ::uStrong< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord*> _source;
    ::uStrong< ::app::Fuse::Input::Pointer_PointerRecord*> _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord* source) { Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord___ObjInit(this, source); }
    void Dispose() { Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord__Dispose(this); }
    bool MoveNext() { return Dictionary2_ValueCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord__MoveNext(this); }
};

}}}


#endif
