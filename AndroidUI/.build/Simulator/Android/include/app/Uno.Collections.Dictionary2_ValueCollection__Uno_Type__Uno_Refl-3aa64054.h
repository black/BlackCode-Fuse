// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__UNO_TYPE__UNO_REFL_3AA64054_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__UNO_TYPE__UNO_REFL_3AA64054_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__Uno_Type__Uno_Reflection_CppFunction__; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction__; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction__;

struct Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction____uType : ::uClassType
{
};

Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction____uType* Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction____typeof();

void Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction_____ObjInit(Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction__* __this, ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppFunction__* source);
int Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction____get_Count(Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction__* __this);
::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction__ Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction____GetEnumerator(Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction__* __this);
Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction__* Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction____New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppFunction__* source);
void Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction____Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction__* __this, ::uArray* item);
void Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction____Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction__* __this);
bool Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction____Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction__* __this, ::uArray* item);
bool Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction____Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction__* __this, ::uArray* item);

struct Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction__ : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppFunction__*> _source;

    void _ObjInit(::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppFunction__* source) { Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction_____ObjInit(this, source); }
    int Count() { return Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction____get_Count(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction__ GetEnumerator();
};

}}}

#include <app/Uno.Collections.Dictionary2_ValueCollection_Enumerator__Uno_Typ-929ba59c.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction__ Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction__::GetEnumerator() { return Dictionary2_ValueCollection__Uno_Type__Uno_Reflection_CppFunction____GetEnumerator(this); }

}}}


#endif
