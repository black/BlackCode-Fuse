// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_NAVIGATION_I_NAVIGATION_ANIMATOR_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_NAVIGATION_I_NAVIGATION_ANIMATOR_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Navigation_INavigationAnimator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Navigation_INavigationAnimator; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Navigation_INavigationAnimator;

struct List1_Enumerator__Fuse_Navigation_INavigationAnimator__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Navigation_INavigationAnimator __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Navigation_INavigationAnimator__uType* List1_Enumerator__Fuse_Navigation_INavigationAnimator__typeof();

void List1_Enumerator__Fuse_Navigation_INavigationAnimator___ObjInit(List1_Enumerator__Fuse_Navigation_INavigationAnimator* __this, ::app::Uno::Collections::List__Fuse_Navigation_INavigationAnimator* source);
void List1_Enumerator__Fuse_Navigation_INavigationAnimator__Dispose(List1_Enumerator__Fuse_Navigation_INavigationAnimator* __this);
::uObject* List1_Enumerator__Fuse_Navigation_INavigationAnimator__get_Current(List1_Enumerator__Fuse_Navigation_INavigationAnimator* __this);
bool List1_Enumerator__Fuse_Navigation_INavigationAnimator__MoveNext(List1_Enumerator__Fuse_Navigation_INavigationAnimator* __this);
List1_Enumerator__Fuse_Navigation_INavigationAnimator List1_Enumerator__Fuse_Navigation_INavigationAnimator__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Navigation_INavigationAnimator* source);
void List1_Enumerator__Fuse_Navigation_INavigationAnimator__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Navigation_INavigationAnimator* __this);

struct List1_Enumerator__Fuse_Navigation_INavigationAnimator
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Navigation_INavigationAnimator*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::uObject*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Navigation_INavigationAnimator* source) { List1_Enumerator__Fuse_Navigation_INavigationAnimator___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Navigation_INavigationAnimator__Dispose(this); }
    ::uObject* Current() { return List1_Enumerator__Fuse_Navigation_INavigationAnimator__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Navigation_INavigationAnimator__MoveNext(this); }
};

}}}


#endif
