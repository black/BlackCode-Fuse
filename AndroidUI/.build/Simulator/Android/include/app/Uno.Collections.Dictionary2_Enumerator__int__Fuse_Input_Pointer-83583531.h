// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__INT__FUSE_INPUT_POINTER_83583531_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__INT__FUSE_INPUT_POINTER_83583531_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_int_F-781fa870.h>
#include <app/Uno.Collections.KeyValuePair__int__Fuse_Input_Pointer_PointerRecord.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__int__Fuse_Input_Pointer_PointerRecord; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord;

struct Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Collections_KeyValuePair_int_Fuse_Input_Pointer_PointerRecord_ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord__uType* Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord__typeof();

void Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord___ObjInit(Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord* __this, ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord* source);
void Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord__Dispose(Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord* __this);
::app::Uno::Collections::KeyValuePair__int__Fuse_Input_Pointer_PointerRecord Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord__get_Current(Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord* __this);
bool Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord__MoveNext(Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord* __this);
Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord* source);
void Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord__Uno_Collections_IEnumerator_Reset(Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord* __this);

struct Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord
{
    ::uStrong< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord*> _source;
    ::app::Uno::Collections::KeyValuePair__int__Fuse_Input_Pointer_PointerRecord _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord* source) { Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord___ObjInit(this, source); }
    void Dispose() { Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord__Dispose(this); }
    ::app::Uno::Collections::KeyValuePair__int__Fuse_Input_Pointer_PointerRecord Current() { return Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord__get_Current(this); }
    bool MoveNext() { return Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord__MoveNext(this); }
};

}}}


#endif
