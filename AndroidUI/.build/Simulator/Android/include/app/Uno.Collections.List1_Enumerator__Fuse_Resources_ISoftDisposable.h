// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_RESOURCES_I_SOFT_DISPOSABLE_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_RESOURCES_I_SOFT_DISPOSABLE_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Resources_ISoftDisposable.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Resources_ISoftDisposable; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Resources_ISoftDisposable;

struct List1_Enumerator__Fuse_Resources_ISoftDisposable__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Resources_ISoftDisposable __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Resources_ISoftDisposable__uType* List1_Enumerator__Fuse_Resources_ISoftDisposable__typeof();

void List1_Enumerator__Fuse_Resources_ISoftDisposable___ObjInit(List1_Enumerator__Fuse_Resources_ISoftDisposable* __this, ::app::Uno::Collections::List__Fuse_Resources_ISoftDisposable* source);
void List1_Enumerator__Fuse_Resources_ISoftDisposable__Dispose(List1_Enumerator__Fuse_Resources_ISoftDisposable* __this);
::uObject* List1_Enumerator__Fuse_Resources_ISoftDisposable__get_Current(List1_Enumerator__Fuse_Resources_ISoftDisposable* __this);
bool List1_Enumerator__Fuse_Resources_ISoftDisposable__MoveNext(List1_Enumerator__Fuse_Resources_ISoftDisposable* __this);
List1_Enumerator__Fuse_Resources_ISoftDisposable List1_Enumerator__Fuse_Resources_ISoftDisposable__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Resources_ISoftDisposable* source);
void List1_Enumerator__Fuse_Resources_ISoftDisposable__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Resources_ISoftDisposable* __this);

struct List1_Enumerator__Fuse_Resources_ISoftDisposable
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Resources_ISoftDisposable*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::uObject*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Resources_ISoftDisposable* source) { List1_Enumerator__Fuse_Resources_ISoftDisposable___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Resources_ISoftDisposable__Dispose(this); }
    ::uObject* Current() { return List1_Enumerator__Fuse_Resources_ISoftDisposable__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Resources_ISoftDisposable__MoveNext(this); }
};

}}}


#endif
