// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION__OBJECT__STRING_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION__OBJECT__STRING_H__

#include <app/Uno.Collections.IEnumerable__object.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__object__string; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection_Enumerator__object__string; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_KeyCollection__object__string;

struct Dictionary2_KeyCollection__object__string__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__object __interface_0;
};

Dictionary2_KeyCollection__object__string__uType* Dictionary2_KeyCollection__object__string__typeof();

::uObject* Dictionary2_KeyCollection__object__string__GetEnumerator_boxed(Dictionary2_KeyCollection__object__string* __this);
void Dictionary2_KeyCollection__object__string___ObjInit(Dictionary2_KeyCollection__object__string* __this, ::app::Uno::Collections::Dictionary__object__string* source);
int Dictionary2_KeyCollection__object__string__get_Count(Dictionary2_KeyCollection__object__string* __this);
::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__object__string Dictionary2_KeyCollection__object__string__GetEnumerator(Dictionary2_KeyCollection__object__string* __this);
Dictionary2_KeyCollection__object__string* Dictionary2_KeyCollection__object__string__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__object__string* source);
void Dictionary2_KeyCollection__object__string__Uno_Collections_ICollection_Add(Dictionary2_KeyCollection__object__string* __this, ::uObject* item);
void Dictionary2_KeyCollection__object__string__Uno_Collections_ICollection_Clear(Dictionary2_KeyCollection__object__string* __this);
bool Dictionary2_KeyCollection__object__string__Uno_Collections_ICollection_Contains(Dictionary2_KeyCollection__object__string* __this, ::uObject* item);
bool Dictionary2_KeyCollection__object__string__Uno_Collections_ICollection_Remove(Dictionary2_KeyCollection__object__string* __this, ::uObject* item);

struct Dictionary2_KeyCollection__object__string : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__object__string*> _source;

    ::uObject* GetEnumerator_boxed() { return Dictionary2_KeyCollection__object__string__GetEnumerator_boxed(this); }
    void _ObjInit(::app::Uno::Collections::Dictionary__object__string* source) { Dictionary2_KeyCollection__object__string___ObjInit(this, source); }
    int Count() { return Dictionary2_KeyCollection__object__string__get_Count(this); }
    ::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__object__string GetEnumerator();
};

}}}

#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__object__string.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__object__string Dictionary2_KeyCollection__object__string::GetEnumerator() { return Dictionary2_KeyCollection__object__string__GetEnumerator(this); }

}}}


#endif
