// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__FUSE_NODE__BOOL_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__FUSE_NODE__BOOL_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__Fuse_Node__bool; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection_Enumerator__Fuse_Node__bool; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection__Fuse_Node__bool;

struct Dictionary2_ValueCollection__Fuse_Node__bool__uType : ::uClassType
{
};

Dictionary2_ValueCollection__Fuse_Node__bool__uType* Dictionary2_ValueCollection__Fuse_Node__bool__typeof();

void Dictionary2_ValueCollection__Fuse_Node__bool___ObjInit(Dictionary2_ValueCollection__Fuse_Node__bool* __this, ::app::Uno::Collections::Dictionary__Fuse_Node__bool* source);
int Dictionary2_ValueCollection__Fuse_Node__bool__get_Count(Dictionary2_ValueCollection__Fuse_Node__bool* __this);
::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Fuse_Node__bool Dictionary2_ValueCollection__Fuse_Node__bool__GetEnumerator(Dictionary2_ValueCollection__Fuse_Node__bool* __this);
Dictionary2_ValueCollection__Fuse_Node__bool* Dictionary2_ValueCollection__Fuse_Node__bool__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Fuse_Node__bool* source);
void Dictionary2_ValueCollection__Fuse_Node__bool__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__Fuse_Node__bool* __this, bool item);
void Dictionary2_ValueCollection__Fuse_Node__bool__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__Fuse_Node__bool* __this);
bool Dictionary2_ValueCollection__Fuse_Node__bool__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__Fuse_Node__bool* __this, bool item);
bool Dictionary2_ValueCollection__Fuse_Node__bool__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__Fuse_Node__bool* __this, bool item);

struct Dictionary2_ValueCollection__Fuse_Node__bool : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Fuse_Node__bool*> _source;

    void _ObjInit(::app::Uno::Collections::Dictionary__Fuse_Node__bool* source) { Dictionary2_ValueCollection__Fuse_Node__bool___ObjInit(this, source); }
    int Count() { return Dictionary2_ValueCollection__Fuse_Node__bool__get_Count(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Fuse_Node__bool GetEnumerator();
};

}}}

#include <app/Uno.Collections.Dictionary2_ValueCollection_Enumerator__Fuse_Node__bool.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Fuse_Node__bool Dictionary2_ValueCollection__Fuse_Node__bool::GetEnumerator() { return Dictionary2_ValueCollection__Fuse_Node__bool__GetEnumerator(this); }

}}}


#endif
