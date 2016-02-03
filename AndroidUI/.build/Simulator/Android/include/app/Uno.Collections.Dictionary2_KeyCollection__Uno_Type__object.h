// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION__UNO_TYPE__OBJECT_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION__UNO_TYPE__OBJECT_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__Uno_Type__object; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection_Enumerator__Uno_Type__object; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_KeyCollection__Uno_Type__object;

struct Dictionary2_KeyCollection__Uno_Type__object__uType : ::uClassType
{
};

Dictionary2_KeyCollection__Uno_Type__object__uType* Dictionary2_KeyCollection__Uno_Type__object__typeof();

void Dictionary2_KeyCollection__Uno_Type__object___ObjInit(Dictionary2_KeyCollection__Uno_Type__object* __this, ::app::Uno::Collections::Dictionary__Uno_Type__object* source);
int Dictionary2_KeyCollection__Uno_Type__object__get_Count(Dictionary2_KeyCollection__Uno_Type__object* __this);
::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__Uno_Type__object Dictionary2_KeyCollection__Uno_Type__object__GetEnumerator(Dictionary2_KeyCollection__Uno_Type__object* __this);
Dictionary2_KeyCollection__Uno_Type__object* Dictionary2_KeyCollection__Uno_Type__object__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Uno_Type__object* source);
void Dictionary2_KeyCollection__Uno_Type__object__Uno_Collections_ICollection_Add(Dictionary2_KeyCollection__Uno_Type__object* __this, ::uType* item);
void Dictionary2_KeyCollection__Uno_Type__object__Uno_Collections_ICollection_Clear(Dictionary2_KeyCollection__Uno_Type__object* __this);
bool Dictionary2_KeyCollection__Uno_Type__object__Uno_Collections_ICollection_Contains(Dictionary2_KeyCollection__Uno_Type__object* __this, ::uType* item);
bool Dictionary2_KeyCollection__Uno_Type__object__Uno_Collections_ICollection_Remove(Dictionary2_KeyCollection__Uno_Type__object* __this, ::uType* item);

struct Dictionary2_KeyCollection__Uno_Type__object : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Uno_Type__object*> _source;

    void _ObjInit(::app::Uno::Collections::Dictionary__Uno_Type__object* source) { Dictionary2_KeyCollection__Uno_Type__object___ObjInit(this, source); }
    int Count() { return Dictionary2_KeyCollection__Uno_Type__object__get_Count(this); }
    ::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__Uno_Type__object GetEnumerator();
};

}}}

#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__Uno_Type__object.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__Uno_Type__object Dictionary2_KeyCollection__Uno_Type__object::GetEnumerator() { return Dictionary2_KeyCollection__Uno_Type__object__GetEnumerator(this); }

}}}


#endif
