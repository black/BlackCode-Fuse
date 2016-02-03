// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FLOAT3_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FLOAT3_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__float3.h>
#include <app/Uno.Float3.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__float3; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__float3;

struct List1_Enumerator__float3__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__float3 __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__float3__uType* List1_Enumerator__float3__typeof();

void List1_Enumerator__float3___ObjInit(List1_Enumerator__float3* __this, ::app::Uno::Collections::List__float3* source);
void List1_Enumerator__float3__Dispose(List1_Enumerator__float3* __this);
::app::Uno::Float3 List1_Enumerator__float3__get_Current(List1_Enumerator__float3* __this);
bool List1_Enumerator__float3__MoveNext(List1_Enumerator__float3* __this);
List1_Enumerator__float3 List1_Enumerator__float3__New_1(::uStatic* __this, ::app::Uno::Collections::List__float3* source);
void List1_Enumerator__float3__Uno_Collections_IEnumerator_Reset(List1_Enumerator__float3* __this);

struct List1_Enumerator__float3
{
    ::uStrong< ::app::Uno::Collections::List__float3*> _source;
    int _version;
    int _iterator;
    ::app::Uno::Float3 _current;

    void _ObjInit(::app::Uno::Collections::List__float3* source) { List1_Enumerator__float3___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__float3__Dispose(this); }
    ::app::Uno::Float3 Current() { return List1_Enumerator__float3__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__float3__MoveNext(this); }
};

}}}


#endif
