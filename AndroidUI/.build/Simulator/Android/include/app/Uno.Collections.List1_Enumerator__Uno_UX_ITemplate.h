// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_U_X_I_TEMPLATE_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_U_X_I_TEMPLATE_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_UX_ITemplate.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_UX_ITemplate; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Uno_UX_ITemplate;

struct List1_Enumerator__Uno_UX_ITemplate__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_UX_ITemplate __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Uno_UX_ITemplate__uType* List1_Enumerator__Uno_UX_ITemplate__typeof();

void List1_Enumerator__Uno_UX_ITemplate___ObjInit(List1_Enumerator__Uno_UX_ITemplate* __this, ::app::Uno::Collections::List__Uno_UX_ITemplate* source);
void List1_Enumerator__Uno_UX_ITemplate__Dispose(List1_Enumerator__Uno_UX_ITemplate* __this);
::uObject* List1_Enumerator__Uno_UX_ITemplate__get_Current(List1_Enumerator__Uno_UX_ITemplate* __this);
bool List1_Enumerator__Uno_UX_ITemplate__MoveNext(List1_Enumerator__Uno_UX_ITemplate* __this);
List1_Enumerator__Uno_UX_ITemplate List1_Enumerator__Uno_UX_ITemplate__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_UX_ITemplate* source);
void List1_Enumerator__Uno_UX_ITemplate__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_UX_ITemplate* __this);

struct List1_Enumerator__Uno_UX_ITemplate
{
    ::uStrong< ::app::Uno::Collections::List__Uno_UX_ITemplate*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::uObject*> _current;

    void _ObjInit(::app::Uno::Collections::List__Uno_UX_ITemplate* source) { List1_Enumerator__Uno_UX_ITemplate___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Uno_UX_ITemplate__Dispose(this); }
    ::uObject* Current() { return List1_Enumerator__Uno_UX_ITemplate__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Uno_UX_ITemplate__MoveNext(this); }
};

}}}


#endif
