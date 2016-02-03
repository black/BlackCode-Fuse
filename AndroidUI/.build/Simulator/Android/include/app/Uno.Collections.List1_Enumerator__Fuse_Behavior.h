// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_BEHAVIOR_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_BEHAVIOR_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Behavior.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Behavior; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Behavior; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Behavior;

struct List1_Enumerator__Fuse_Behavior__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Behavior __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Behavior__uType* List1_Enumerator__Fuse_Behavior__typeof();

void List1_Enumerator__Fuse_Behavior___ObjInit(List1_Enumerator__Fuse_Behavior* __this, ::app::Uno::Collections::List__Fuse_Behavior* source);
void List1_Enumerator__Fuse_Behavior__Dispose(List1_Enumerator__Fuse_Behavior* __this);
::app::Fuse::Behavior* List1_Enumerator__Fuse_Behavior__get_Current(List1_Enumerator__Fuse_Behavior* __this);
bool List1_Enumerator__Fuse_Behavior__MoveNext(List1_Enumerator__Fuse_Behavior* __this);
List1_Enumerator__Fuse_Behavior List1_Enumerator__Fuse_Behavior__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Behavior* source);
void List1_Enumerator__Fuse_Behavior__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Behavior* __this);

struct List1_Enumerator__Fuse_Behavior
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Behavior*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Behavior*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Behavior* source) { List1_Enumerator__Fuse_Behavior___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Behavior__Dispose(this); }
    ::app::Fuse::Behavior* Current() { return List1_Enumerator__Fuse_Behavior__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Behavior__MoveNext(this); }
};

}}}


#endif
