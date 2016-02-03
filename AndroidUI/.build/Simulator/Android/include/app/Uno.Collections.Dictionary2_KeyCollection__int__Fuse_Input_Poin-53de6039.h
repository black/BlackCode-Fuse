// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION__INT__FUSE_INPUT_POIN_53DE6039_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION__INT__FUSE_INPUT_POIN_53DE6039_H__

#include <app/Uno.Collections.IEnumerable__int.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__int__Fuse_Input_Pointer_PointerRecord; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_KeyCollection__int__Fuse_Input_Pointer_PointerRecord;

struct Dictionary2_KeyCollection__int__Fuse_Input_Pointer_PointerRecord__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__int __interface_0;
};

Dictionary2_KeyCollection__int__Fuse_Input_Pointer_PointerRecord__uType* Dictionary2_KeyCollection__int__Fuse_Input_Pointer_PointerRecord__typeof();

::uObject* Dictionary2_KeyCollection__int__Fuse_Input_Pointer_PointerRecord__GetEnumerator_boxed(Dictionary2_KeyCollection__int__Fuse_Input_Pointer_PointerRecord* __this);
void Dictionary2_KeyCollection__int__Fuse_Input_Pointer_PointerRecord___ObjInit(Dictionary2_KeyCollection__int__Fuse_Input_Pointer_PointerRecord* __this, ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord* source);
int Dictionary2_KeyCollection__int__Fuse_Input_Pointer_PointerRecord__get_Count(Dictionary2_KeyCollection__int__Fuse_Input_Pointer_PointerRecord* __this);
::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord Dictionary2_KeyCollection__int__Fuse_Input_Pointer_PointerRecord__GetEnumerator(Dictionary2_KeyCollection__int__Fuse_Input_Pointer_PointerRecord* __this);
Dictionary2_KeyCollection__int__Fuse_Input_Pointer_PointerRecord* Dictionary2_KeyCollection__int__Fuse_Input_Pointer_PointerRecord__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord* source);
void Dictionary2_KeyCollection__int__Fuse_Input_Pointer_PointerRecord__Uno_Collections_ICollection_Add(Dictionary2_KeyCollection__int__Fuse_Input_Pointer_PointerRecord* __this, int item);
void Dictionary2_KeyCollection__int__Fuse_Input_Pointer_PointerRecord__Uno_Collections_ICollection_Clear(Dictionary2_KeyCollection__int__Fuse_Input_Pointer_PointerRecord* __this);
bool Dictionary2_KeyCollection__int__Fuse_Input_Pointer_PointerRecord__Uno_Collections_ICollection_Contains(Dictionary2_KeyCollection__int__Fuse_Input_Pointer_PointerRecord* __this, int item);
bool Dictionary2_KeyCollection__int__Fuse_Input_Pointer_PointerRecord__Uno_Collections_ICollection_Remove(Dictionary2_KeyCollection__int__Fuse_Input_Pointer_PointerRecord* __this, int item);

struct Dictionary2_KeyCollection__int__Fuse_Input_Pointer_PointerRecord : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord*> _source;

    ::uObject* GetEnumerator_boxed() { return Dictionary2_KeyCollection__int__Fuse_Input_Pointer_PointerRecord__GetEnumerator_boxed(this); }
    void _ObjInit(::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord* source) { Dictionary2_KeyCollection__int__Fuse_Input_Pointer_PointerRecord___ObjInit(this, source); }
    int Count() { return Dictionary2_KeyCollection__int__Fuse_Input_Pointer_PointerRecord__get_Count(this); }
    ::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord GetEnumerator();
};

}}}

#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__int__Fuse-f060a27d.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__int__Fuse_Input_Pointer_PointerRecord Dictionary2_KeyCollection__int__Fuse_Input_Pointer_PointerRecord::GetEnumerator() { return Dictionary2_KeyCollection__int__Fuse_Input_Pointer_PointerRecord__GetEnumerator(this); }

}}}


#endif
