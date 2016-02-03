// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_SCRIPTING_I_NAME_LISTENER_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_SCRIPTING_I_NAME_LISTENER_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Scripting_INameListener.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Scripting_INameListener; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Scripting_INameListener;

struct List1_Enumerator__Fuse_Scripting_INameListener__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Scripting_INameListener __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Scripting_INameListener__uType* List1_Enumerator__Fuse_Scripting_INameListener__typeof();

void List1_Enumerator__Fuse_Scripting_INameListener___ObjInit(List1_Enumerator__Fuse_Scripting_INameListener* __this, ::app::Uno::Collections::List__Fuse_Scripting_INameListener* source);
void List1_Enumerator__Fuse_Scripting_INameListener__Dispose(List1_Enumerator__Fuse_Scripting_INameListener* __this);
::uObject* List1_Enumerator__Fuse_Scripting_INameListener__get_Current(List1_Enumerator__Fuse_Scripting_INameListener* __this);
bool List1_Enumerator__Fuse_Scripting_INameListener__MoveNext(List1_Enumerator__Fuse_Scripting_INameListener* __this);
List1_Enumerator__Fuse_Scripting_INameListener List1_Enumerator__Fuse_Scripting_INameListener__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Scripting_INameListener* source);
void List1_Enumerator__Fuse_Scripting_INameListener__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Scripting_INameListener* __this);

struct List1_Enumerator__Fuse_Scripting_INameListener
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Scripting_INameListener*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::uObject*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Scripting_INameListener* source) { List1_Enumerator__Fuse_Scripting_INameListener___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Scripting_INameListener__Dispose(this); }
    ::uObject* Current() { return List1_Enumerator__Fuse_Scripting_INameListener__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Scripting_INameListener__MoveNext(this); }
};

}}}


#endif
