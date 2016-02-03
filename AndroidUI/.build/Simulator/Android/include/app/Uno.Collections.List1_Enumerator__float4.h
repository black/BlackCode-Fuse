// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FLOAT4_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FLOAT4_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__float4.h>
#include <app/Uno.Float4.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__float4; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__float4;

struct List1_Enumerator__float4__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__float4 __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__float4__uType* List1_Enumerator__float4__typeof();

void List1_Enumerator__float4___ObjInit(List1_Enumerator__float4* __this, ::app::Uno::Collections::List__float4* source);
void List1_Enumerator__float4__Dispose(List1_Enumerator__float4* __this);
::app::Uno::Float4 List1_Enumerator__float4__get_Current(List1_Enumerator__float4* __this);
bool List1_Enumerator__float4__MoveNext(List1_Enumerator__float4* __this);
List1_Enumerator__float4 List1_Enumerator__float4__New_1(::uStatic* __this, ::app::Uno::Collections::List__float4* source);
void List1_Enumerator__float4__Uno_Collections_IEnumerator_Reset(List1_Enumerator__float4* __this);

struct List1_Enumerator__float4
{
    ::uStrong< ::app::Uno::Collections::List__float4*> _source;
    int _version;
    int _iterator;
    ::app::Uno::Float4 _current;

    void _ObjInit(::app::Uno::Collections::List__float4* source) { List1_Enumerator__float4___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__float4__Dispose(this); }
    ::app::Uno::Float4 Current() { return List1_Enumerator__float4__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__float4__MoveNext(this); }
};

}}}


#endif
