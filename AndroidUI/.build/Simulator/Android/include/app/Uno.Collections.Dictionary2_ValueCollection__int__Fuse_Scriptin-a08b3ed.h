// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__INT__FUSE_SCRIPTIN_A08B3ED_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__INT__FUSE_SCRIPTIN_A08B3ED_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__int__Fuse_Scripting_Callback; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection_Enumerator__int__Fuse_Scripting_Callback; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection__int__Fuse_Scripting_Callback;

struct Dictionary2_ValueCollection__int__Fuse_Scripting_Callback__uType : ::uClassType
{
};

Dictionary2_ValueCollection__int__Fuse_Scripting_Callback__uType* Dictionary2_ValueCollection__int__Fuse_Scripting_Callback__typeof();

void Dictionary2_ValueCollection__int__Fuse_Scripting_Callback___ObjInit(Dictionary2_ValueCollection__int__Fuse_Scripting_Callback* __this, ::app::Uno::Collections::Dictionary__int__Fuse_Scripting_Callback* source);
int Dictionary2_ValueCollection__int__Fuse_Scripting_Callback__get_Count(Dictionary2_ValueCollection__int__Fuse_Scripting_Callback* __this);
::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__int__Fuse_Scripting_Callback Dictionary2_ValueCollection__int__Fuse_Scripting_Callback__GetEnumerator(Dictionary2_ValueCollection__int__Fuse_Scripting_Callback* __this);
Dictionary2_ValueCollection__int__Fuse_Scripting_Callback* Dictionary2_ValueCollection__int__Fuse_Scripting_Callback__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__int__Fuse_Scripting_Callback* source);
void Dictionary2_ValueCollection__int__Fuse_Scripting_Callback__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__int__Fuse_Scripting_Callback* __this, ::uDelegate* item);
void Dictionary2_ValueCollection__int__Fuse_Scripting_Callback__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__int__Fuse_Scripting_Callback* __this);
bool Dictionary2_ValueCollection__int__Fuse_Scripting_Callback__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__int__Fuse_Scripting_Callback* __this, ::uDelegate* item);
bool Dictionary2_ValueCollection__int__Fuse_Scripting_Callback__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__int__Fuse_Scripting_Callback* __this, ::uDelegate* item);

struct Dictionary2_ValueCollection__int__Fuse_Scripting_Callback : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__int__Fuse_Scripting_Callback*> _source;

    void _ObjInit(::app::Uno::Collections::Dictionary__int__Fuse_Scripting_Callback* source) { Dictionary2_ValueCollection__int__Fuse_Scripting_Callback___ObjInit(this, source); }
    int Count() { return Dictionary2_ValueCollection__int__Fuse_Scripting_Callback__get_Count(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__int__Fuse_Scripting_Callback GetEnumerator();
};

}}}

#include <app/Uno.Collections.Dictionary2_ValueCollection_Enumerator__int__Fu-e74858ae.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__int__Fuse_Scripting_Callback Dictionary2_ValueCollection__int__Fuse_Scripting_Callback::GetEnumerator() { return Dictionary2_ValueCollection__int__Fuse_Scripting_Callback__GetEnumerator(this); }

}}}


#endif
