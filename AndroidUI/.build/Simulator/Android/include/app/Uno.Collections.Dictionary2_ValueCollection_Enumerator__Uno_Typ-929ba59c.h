// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION_ENUMERATOR__UNO_TYP_929BA59C_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION_ENUMERATOR__UNO_TYP_929BA59C_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__Uno_Type__Uno_Reflection_CppFunction__; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction__;

struct Dictionary2_ValueCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction____uType : ::uStructType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

Dictionary2_ValueCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction____uType* Dictionary2_ValueCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction____typeof();

void Dictionary2_ValueCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction_____ObjInit(Dictionary2_ValueCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction__* __this, ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppFunction__* source);
void Dictionary2_ValueCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction____Dispose(Dictionary2_ValueCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction__* __this);
bool Dictionary2_ValueCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction____MoveNext(Dictionary2_ValueCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction__* __this);
Dictionary2_ValueCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction__ Dictionary2_ValueCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction____New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppFunction__* source);
void Dictionary2_ValueCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction____Uno_Collections_IEnumerator_Reset(Dictionary2_ValueCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction__* __this);

struct Dictionary2_ValueCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction__
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppFunction__*> _source;
    ::uStrong< ::uArray*> _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppFunction__* source) { Dictionary2_ValueCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction_____ObjInit(this, source); }
    void Dispose() { Dictionary2_ValueCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction____Dispose(this); }
    bool MoveNext() { return Dictionary2_ValueCollection_Enumerator__Uno_Type__Uno_Reflection_CppFunction____MoveNext(this); }
};

}}}


#endif
