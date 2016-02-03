// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_SCRIPTING_NATIVE_MEMBER_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_SCRIPTING_NATIVE_MEMBER_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Scripting_NativeMember.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Scripting { struct NativeMember; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Scripting_NativeMember; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Scripting_NativeMember;

struct List1_Enumerator__Fuse_Scripting_NativeMember__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Scripting_NativeMember __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Scripting_NativeMember__uType* List1_Enumerator__Fuse_Scripting_NativeMember__typeof();

void List1_Enumerator__Fuse_Scripting_NativeMember___ObjInit(List1_Enumerator__Fuse_Scripting_NativeMember* __this, ::app::Uno::Collections::List__Fuse_Scripting_NativeMember* source);
void List1_Enumerator__Fuse_Scripting_NativeMember__Dispose(List1_Enumerator__Fuse_Scripting_NativeMember* __this);
::app::Fuse::Scripting::NativeMember* List1_Enumerator__Fuse_Scripting_NativeMember__get_Current(List1_Enumerator__Fuse_Scripting_NativeMember* __this);
bool List1_Enumerator__Fuse_Scripting_NativeMember__MoveNext(List1_Enumerator__Fuse_Scripting_NativeMember* __this);
List1_Enumerator__Fuse_Scripting_NativeMember List1_Enumerator__Fuse_Scripting_NativeMember__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Scripting_NativeMember* source);
void List1_Enumerator__Fuse_Scripting_NativeMember__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Scripting_NativeMember* __this);

struct List1_Enumerator__Fuse_Scripting_NativeMember
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Scripting_NativeMember*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Scripting::NativeMember*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Scripting_NativeMember* source) { List1_Enumerator__Fuse_Scripting_NativeMember___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Scripting_NativeMember__Dispose(this); }
    ::app::Fuse::Scripting::NativeMember* Current() { return List1_Enumerator__Fuse_Scripting_NativeMember__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Scripting_NativeMember__MoveNext(this); }
};

}}}


#endif
