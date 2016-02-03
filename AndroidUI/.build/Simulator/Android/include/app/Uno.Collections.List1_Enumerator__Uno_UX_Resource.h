// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_U_X_RESOURCE_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_U_X_RESOURCE_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_UX_Resource.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_UX_Resource; } } }
namespace app { namespace Uno { namespace UX { struct Resource; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Uno_UX_Resource;

struct List1_Enumerator__Uno_UX_Resource__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_UX_Resource __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Uno_UX_Resource__uType* List1_Enumerator__Uno_UX_Resource__typeof();

void List1_Enumerator__Uno_UX_Resource___ObjInit(List1_Enumerator__Uno_UX_Resource* __this, ::app::Uno::Collections::List__Uno_UX_Resource* source);
void List1_Enumerator__Uno_UX_Resource__Dispose(List1_Enumerator__Uno_UX_Resource* __this);
::app::Uno::UX::Resource* List1_Enumerator__Uno_UX_Resource__get_Current(List1_Enumerator__Uno_UX_Resource* __this);
bool List1_Enumerator__Uno_UX_Resource__MoveNext(List1_Enumerator__Uno_UX_Resource* __this);
List1_Enumerator__Uno_UX_Resource List1_Enumerator__Uno_UX_Resource__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_UX_Resource* source);
void List1_Enumerator__Uno_UX_Resource__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_UX_Resource* __this);

struct List1_Enumerator__Uno_UX_Resource
{
    ::uStrong< ::app::Uno::Collections::List__Uno_UX_Resource*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Uno::UX::Resource*> _current;

    void _ObjInit(::app::Uno::Collections::List__Uno_UX_Resource* source) { List1_Enumerator__Uno_UX_Resource___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Uno_UX_Resource__Dispose(this); }
    ::app::Uno::UX::Resource* Current() { return List1_Enumerator__Uno_UX_Resource__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Uno_UX_Resource__MoveNext(this); }
};

}}}


#endif
