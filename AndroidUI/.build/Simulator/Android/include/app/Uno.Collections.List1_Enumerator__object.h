// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__OBJECT_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__OBJECT_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__object.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__object; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__object;

struct List1_Enumerator__object__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__object __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__object__uType* List1_Enumerator__object__typeof();

void List1_Enumerator__object___ObjInit(List1_Enumerator__object* __this, ::app::Uno::Collections::List__object* source);
void List1_Enumerator__object__Dispose(List1_Enumerator__object* __this);
::uObject* List1_Enumerator__object__get_Current(List1_Enumerator__object* __this);
bool List1_Enumerator__object__MoveNext(List1_Enumerator__object* __this);
List1_Enumerator__object List1_Enumerator__object__New_1(::uStatic* __this, ::app::Uno::Collections::List__object* source);
void List1_Enumerator__object__Uno_Collections_IEnumerator_Reset(List1_Enumerator__object* __this);

struct List1_Enumerator__object
{
    ::uStrong< ::app::Uno::Collections::List__object*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::uObject*> _current;

    void _ObjInit(::app::Uno::Collections::List__object* source) { List1_Enumerator__object___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__object__Dispose(this); }
    ::uObject* Current() { return List1_Enumerator__object__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__object__MoveNext(this); }
};

}}}


#endif
