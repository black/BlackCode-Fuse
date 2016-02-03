// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION__FUSE_I_FLUSH__BOOL_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION__FUSE_I_FLUSH__BOOL_H__

#include <app/Uno.Collections.IEnumerable__Fuse_IFlush.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__Fuse_IFlush__bool; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection_Enumerator__Fuse_IFlush__bool; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_KeyCollection__Fuse_IFlush__bool;

struct Dictionary2_KeyCollection__Fuse_IFlush__bool__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_IFlush __interface_0;
};

Dictionary2_KeyCollection__Fuse_IFlush__bool__uType* Dictionary2_KeyCollection__Fuse_IFlush__bool__typeof();

::uObject* Dictionary2_KeyCollection__Fuse_IFlush__bool__GetEnumerator_boxed(Dictionary2_KeyCollection__Fuse_IFlush__bool* __this);
void Dictionary2_KeyCollection__Fuse_IFlush__bool___ObjInit(Dictionary2_KeyCollection__Fuse_IFlush__bool* __this, ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool* source);
int Dictionary2_KeyCollection__Fuse_IFlush__bool__get_Count(Dictionary2_KeyCollection__Fuse_IFlush__bool* __this);
::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__Fuse_IFlush__bool Dictionary2_KeyCollection__Fuse_IFlush__bool__GetEnumerator(Dictionary2_KeyCollection__Fuse_IFlush__bool* __this);
Dictionary2_KeyCollection__Fuse_IFlush__bool* Dictionary2_KeyCollection__Fuse_IFlush__bool__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool* source);
void Dictionary2_KeyCollection__Fuse_IFlush__bool__Uno_Collections_ICollection_Add(Dictionary2_KeyCollection__Fuse_IFlush__bool* __this, ::uObject* item);
void Dictionary2_KeyCollection__Fuse_IFlush__bool__Uno_Collections_ICollection_Clear(Dictionary2_KeyCollection__Fuse_IFlush__bool* __this);
bool Dictionary2_KeyCollection__Fuse_IFlush__bool__Uno_Collections_ICollection_Contains(Dictionary2_KeyCollection__Fuse_IFlush__bool* __this, ::uObject* item);
bool Dictionary2_KeyCollection__Fuse_IFlush__bool__Uno_Collections_ICollection_Remove(Dictionary2_KeyCollection__Fuse_IFlush__bool* __this, ::uObject* item);

struct Dictionary2_KeyCollection__Fuse_IFlush__bool : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Fuse_IFlush__bool*> _source;

    ::uObject* GetEnumerator_boxed() { return Dictionary2_KeyCollection__Fuse_IFlush__bool__GetEnumerator_boxed(this); }
    void _ObjInit(::app::Uno::Collections::Dictionary__Fuse_IFlush__bool* source) { Dictionary2_KeyCollection__Fuse_IFlush__bool___ObjInit(this, source); }
    int Count() { return Dictionary2_KeyCollection__Fuse_IFlush__bool__get_Count(this); }
    ::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__Fuse_IFlush__bool GetEnumerator();
};

}}}

#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__Fuse_IFlush__bool.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__Fuse_IFlush__bool Dictionary2_KeyCollection__Fuse_IFlush__bool::GetEnumerator() { return Dictionary2_KeyCollection__Fuse_IFlush__bool__GetEnumerator(this); }

}}}


#endif
