// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__OBJECT__OBJECT_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__OBJECT__OBJECT_H__

#include <app/Uno.Collections.IEnumerable__object.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__object__object; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection_Enumerator__object__object; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection__object__object;

struct Dictionary2_ValueCollection__object__object__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__object __interface_0;
};

Dictionary2_ValueCollection__object__object__uType* Dictionary2_ValueCollection__object__object__typeof();

::uObject* Dictionary2_ValueCollection__object__object__GetEnumerator_boxed(Dictionary2_ValueCollection__object__object* __this);
void Dictionary2_ValueCollection__object__object___ObjInit(Dictionary2_ValueCollection__object__object* __this, ::app::Uno::Collections::Dictionary__object__object* source);
int Dictionary2_ValueCollection__object__object__get_Count(Dictionary2_ValueCollection__object__object* __this);
::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__object__object Dictionary2_ValueCollection__object__object__GetEnumerator(Dictionary2_ValueCollection__object__object* __this);
Dictionary2_ValueCollection__object__object* Dictionary2_ValueCollection__object__object__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__object__object* source);
void Dictionary2_ValueCollection__object__object__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__object__object* __this, ::uObject* item);
void Dictionary2_ValueCollection__object__object__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__object__object* __this);
bool Dictionary2_ValueCollection__object__object__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__object__object* __this, ::uObject* item);
bool Dictionary2_ValueCollection__object__object__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__object__object* __this, ::uObject* item);

struct Dictionary2_ValueCollection__object__object : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__object__object*> _source;

    ::uObject* GetEnumerator_boxed() { return Dictionary2_ValueCollection__object__object__GetEnumerator_boxed(this); }
    void _ObjInit(::app::Uno::Collections::Dictionary__object__object* source) { Dictionary2_ValueCollection__object__object___ObjInit(this, source); }
    int Count() { return Dictionary2_ValueCollection__object__object__get_Count(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__object__object GetEnumerator();
};

}}}

#include <app/Uno.Collections.Dictionary2_ValueCollection_Enumerator__object__object.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__object__object Dictionary2_ValueCollection__object__object::GetEnumerator() { return Dictionary2_ValueCollection__object__object__GetEnumerator(this); }

}}}


#endif
