// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION__UNO_TYPE__UNO_REFLEC_B9AF5985_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION__UNO_TYPE__UNO_REFLEC_B9AF5985_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__Uno_Type__Uno_Reflection_CppFunction__; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction__; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_KeyCollection__Uno_Type__Uno_Reflection_CppFunction__;

struct Dictionary2_KeyCollection__Uno_Type__Uno_Reflection_CppFunction____uType : ::uClassType
{
};

Dictionary2_KeyCollection__Uno_Type__Uno_Reflection_CppFunction____uType* Dictionary2_KeyCollection__Uno_Type__Uno_Reflection_CppFunction____typeof();

void Dictionary2_KeyCollection__Uno_Type__Uno_Reflection_CppFunction_____ObjInit(Dictionary2_KeyCollection__Uno_Type__Uno_Reflection_CppFunction__* __this, ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppFunction__* source);
int Dictionary2_KeyCollection__Uno_Type__Uno_Reflection_CppFunction____get_Count(Dictionary2_KeyCollection__Uno_Type__Uno_Reflection_CppFunction__* __this);
::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction__ Dictionary2_KeyCollection__Uno_Type__Uno_Reflection_CppFunction____GetEnumerator(Dictionary2_KeyCollection__Uno_Type__Uno_Reflection_CppFunction__* __this);
Dictionary2_KeyCollection__Uno_Type__Uno_Reflection_CppFunction__* Dictionary2_KeyCollection__Uno_Type__Uno_Reflection_CppFunction____New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppFunction__* source);
void Dictionary2_KeyCollection__Uno_Type__Uno_Reflection_CppFunction____Uno_Collections_ICollection_Add(Dictionary2_KeyCollection__Uno_Type__Uno_Reflection_CppFunction__* __this, ::uType* item);
void Dictionary2_KeyCollection__Uno_Type__Uno_Reflection_CppFunction____Uno_Collections_ICollection_Clear(Dictionary2_KeyCollection__Uno_Type__Uno_Reflection_CppFunction__* __this);
bool Dictionary2_KeyCollection__Uno_Type__Uno_Reflection_CppFunction____Uno_Collections_ICollection_Contains(Dictionary2_KeyCollection__Uno_Type__Uno_Reflection_CppFunction__* __this, ::uType* item);
bool Dictionary2_KeyCollection__Uno_Type__Uno_Reflection_CppFunction____Uno_Collections_ICollection_Remove(Dictionary2_KeyCollection__Uno_Type__Uno_Reflection_CppFunction__* __this, ::uType* item);

struct Dictionary2_KeyCollection__Uno_Type__Uno_Reflection_CppFunction__ : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppFunction__*> _source;

    void _ObjInit(::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppFunction__* source) { Dictionary2_KeyCollection__Uno_Type__Uno_Reflection_CppFunction_____ObjInit(this, source); }
    int Count() { return Dictionary2_KeyCollection__Uno_Type__Uno_Reflection_CppFunction____get_Count(this); }
    ::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction__ GetEnumerator();
};

}}}

#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__Uno_Type_-6827a02d.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction__ Dictionary2_KeyCollection__Uno_Type__Uno_Reflection_CppFunction__::GetEnumerator() { return Dictionary2_KeyCollection__Uno_Type__Uno_Reflection_CppFunction____GetEnumerator(this); }

}}}


#endif
