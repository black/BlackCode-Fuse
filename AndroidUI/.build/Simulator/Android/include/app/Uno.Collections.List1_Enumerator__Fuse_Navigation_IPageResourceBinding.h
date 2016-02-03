// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_NAVIGATION_I_PAGE_RESOURCE_BINDING_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_NAVIGATION_I_PAGE_RESOURCE_BINDING_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Navigation_IPageResourceBinding.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Navigation_IPageResourceBinding; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Navigation_IPageResourceBinding;

struct List1_Enumerator__Fuse_Navigation_IPageResourceBinding__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Navigation_IPageResourceBinding __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Navigation_IPageResourceBinding__uType* List1_Enumerator__Fuse_Navigation_IPageResourceBinding__typeof();

void List1_Enumerator__Fuse_Navigation_IPageResourceBinding___ObjInit(List1_Enumerator__Fuse_Navigation_IPageResourceBinding* __this, ::app::Uno::Collections::List__Fuse_Navigation_IPageResourceBinding* source);
void List1_Enumerator__Fuse_Navigation_IPageResourceBinding__Dispose(List1_Enumerator__Fuse_Navigation_IPageResourceBinding* __this);
::uObject* List1_Enumerator__Fuse_Navigation_IPageResourceBinding__get_Current(List1_Enumerator__Fuse_Navigation_IPageResourceBinding* __this);
bool List1_Enumerator__Fuse_Navigation_IPageResourceBinding__MoveNext(List1_Enumerator__Fuse_Navigation_IPageResourceBinding* __this);
List1_Enumerator__Fuse_Navigation_IPageResourceBinding List1_Enumerator__Fuse_Navigation_IPageResourceBinding__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Navigation_IPageResourceBinding* source);
void List1_Enumerator__Fuse_Navigation_IPageResourceBinding__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Navigation_IPageResourceBinding* __this);

struct List1_Enumerator__Fuse_Navigation_IPageResourceBinding
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Navigation_IPageResourceBinding*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::uObject*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Navigation_IPageResourceBinding* source) { List1_Enumerator__Fuse_Navigation_IPageResourceBinding___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Navigation_IPageResourceBinding__Dispose(this); }
    ::uObject* Current() { return List1_Enumerator__Fuse_Navigation_IPageResourceBinding__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Navigation_IPageResourceBinding__MoveNext(this); }
};

}}}


#endif
