// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__INT__STRING_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__INT__STRING_H__

#include <app/Uno.Collections.IEnumerable__string.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__int__string; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection_Enumerator__int__string; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection__int__string;

struct Dictionary2_ValueCollection__int__string__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__string __interface_0;
};

Dictionary2_ValueCollection__int__string__uType* Dictionary2_ValueCollection__int__string__typeof();

::uObject* Dictionary2_ValueCollection__int__string__GetEnumerator_boxed(Dictionary2_ValueCollection__int__string* __this);
void Dictionary2_ValueCollection__int__string___ObjInit(Dictionary2_ValueCollection__int__string* __this, ::app::Uno::Collections::Dictionary__int__string* source);
int Dictionary2_ValueCollection__int__string__get_Count(Dictionary2_ValueCollection__int__string* __this);
::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__int__string Dictionary2_ValueCollection__int__string__GetEnumerator(Dictionary2_ValueCollection__int__string* __this);
Dictionary2_ValueCollection__int__string* Dictionary2_ValueCollection__int__string__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__int__string* source);
void Dictionary2_ValueCollection__int__string__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__int__string* __this, ::uString* item);
void Dictionary2_ValueCollection__int__string__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__int__string* __this);
bool Dictionary2_ValueCollection__int__string__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__int__string* __this, ::uString* item);
bool Dictionary2_ValueCollection__int__string__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__int__string* __this, ::uString* item);

struct Dictionary2_ValueCollection__int__string : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__int__string*> _source;

    ::uObject* GetEnumerator_boxed() { return Dictionary2_ValueCollection__int__string__GetEnumerator_boxed(this); }
    void _ObjInit(::app::Uno::Collections::Dictionary__int__string* source) { Dictionary2_ValueCollection__int__string___ObjInit(this, source); }
    int Count() { return Dictionary2_ValueCollection__int__string__get_Count(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__int__string GetEnumerator();
};

}}}

#include <app/Uno.Collections.Dictionary2_ValueCollection_Enumerator__int__string.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__int__string Dictionary2_ValueCollection__int__string::GetEnumerator() { return Dictionary2_ValueCollection__int__string__GetEnumerator(this); }

}}}


#endif
