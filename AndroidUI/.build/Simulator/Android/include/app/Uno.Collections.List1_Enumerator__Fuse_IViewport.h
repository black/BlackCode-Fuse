// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_I_VIEWPORT_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_I_VIEWPORT_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_IViewport.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Fuse_IViewport; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_IViewport;

struct List1_Enumerator__Fuse_IViewport__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_IViewport __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_IViewport__uType* List1_Enumerator__Fuse_IViewport__typeof();

void List1_Enumerator__Fuse_IViewport___ObjInit(List1_Enumerator__Fuse_IViewport* __this, ::app::Uno::Collections::List__Fuse_IViewport* source);
void List1_Enumerator__Fuse_IViewport__Dispose(List1_Enumerator__Fuse_IViewport* __this);
::uObject* List1_Enumerator__Fuse_IViewport__get_Current(List1_Enumerator__Fuse_IViewport* __this);
bool List1_Enumerator__Fuse_IViewport__MoveNext(List1_Enumerator__Fuse_IViewport* __this);
List1_Enumerator__Fuse_IViewport List1_Enumerator__Fuse_IViewport__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_IViewport* source);
void List1_Enumerator__Fuse_IViewport__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_IViewport* __this);

struct List1_Enumerator__Fuse_IViewport
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_IViewport*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::uObject*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_IViewport* source) { List1_Enumerator__Fuse_IViewport___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_IViewport__Dispose(this); }
    ::uObject* Current() { return List1_Enumerator__Fuse_IViewport__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_IViewport__MoveNext(this); }
};

}}}


#endif