// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__UNO_TYPE__UNO_REFLECTIO_6DBBA2F4_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__UNO_TYPE__UNO_REFLECTIO_6DBBA2F4_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_Uno_T-2408237e.h>
#include <app/Uno.Collections.KeyValuePair__Uno_Type__Uno_Reflection_CppFunction__.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__Uno_Type__Uno_Reflection_CppFunction__; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Enumerator__Uno_Type__Uno_Reflection_CppFunction__;

struct Dictionary2_Enumerator__Uno_Type__Uno_Reflection_CppFunction____uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Collections_KeyValuePair_Uno_Type_Uno_Reflection_CppFunction___ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

Dictionary2_Enumerator__Uno_Type__Uno_Reflection_CppFunction____uType* Dictionary2_Enumerator__Uno_Type__Uno_Reflection_CppFunction____typeof();

void Dictionary2_Enumerator__Uno_Type__Uno_Reflection_CppFunction_____ObjInit(Dictionary2_Enumerator__Uno_Type__Uno_Reflection_CppFunction__* __this, ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppFunction__* source);
void Dictionary2_Enumerator__Uno_Type__Uno_Reflection_CppFunction____Dispose(Dictionary2_Enumerator__Uno_Type__Uno_Reflection_CppFunction__* __this);
::app::Uno::Collections::KeyValuePair__Uno_Type__Uno_Reflection_CppFunction__ Dictionary2_Enumerator__Uno_Type__Uno_Reflection_CppFunction____get_Current(Dictionary2_Enumerator__Uno_Type__Uno_Reflection_CppFunction__* __this);
bool Dictionary2_Enumerator__Uno_Type__Uno_Reflection_CppFunction____MoveNext(Dictionary2_Enumerator__Uno_Type__Uno_Reflection_CppFunction__* __this);
Dictionary2_Enumerator__Uno_Type__Uno_Reflection_CppFunction__ Dictionary2_Enumerator__Uno_Type__Uno_Reflection_CppFunction____New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppFunction__* source);
void Dictionary2_Enumerator__Uno_Type__Uno_Reflection_CppFunction____Uno_Collections_IEnumerator_Reset(Dictionary2_Enumerator__Uno_Type__Uno_Reflection_CppFunction__* __this);

struct Dictionary2_Enumerator__Uno_Type__Uno_Reflection_CppFunction__
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppFunction__*> _source;
    ::app::Uno::Collections::KeyValuePair__Uno_Type__Uno_Reflection_CppFunction__ _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__Uno_Type__Uno_Reflection_CppFunction__* source) { Dictionary2_Enumerator__Uno_Type__Uno_Reflection_CppFunction_____ObjInit(this, source); }
    void Dispose() { Dictionary2_Enumerator__Uno_Type__Uno_Reflection_CppFunction____Dispose(this); }
    ::app::Uno::Collections::KeyValuePair__Uno_Type__Uno_Reflection_CppFunction__ Current() { return Dictionary2_Enumerator__Uno_Type__Uno_Reflection_CppFunction____get_Current(this); }
    bool MoveNext() { return Dictionary2_Enumerator__Uno_Type__Uno_Reflection_CppFunction____MoveNext(this); }
};

}}}


#endif
