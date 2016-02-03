// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_CONTROLS_INTERNAL_WRAPPED_LINE_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_CONTROLS_INTERNAL_WRAPPED_LINE_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Controls_Internal_WrappedLine.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { namespace Internal { struct WrappedLine; } } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Controls_Internal_WrappedLine; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Controls_Internal_WrappedLine;

struct List1_Enumerator__Fuse_Controls_Internal_WrappedLine__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Controls_Internal_WrappedLine __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Controls_Internal_WrappedLine__uType* List1_Enumerator__Fuse_Controls_Internal_WrappedLine__typeof();

void List1_Enumerator__Fuse_Controls_Internal_WrappedLine___ObjInit(List1_Enumerator__Fuse_Controls_Internal_WrappedLine* __this, ::app::Uno::Collections::List__Fuse_Controls_Internal_WrappedLine* source);
void List1_Enumerator__Fuse_Controls_Internal_WrappedLine__Dispose(List1_Enumerator__Fuse_Controls_Internal_WrappedLine* __this);
::app::Fuse::Controls::Internal::WrappedLine* List1_Enumerator__Fuse_Controls_Internal_WrappedLine__get_Current(List1_Enumerator__Fuse_Controls_Internal_WrappedLine* __this);
bool List1_Enumerator__Fuse_Controls_Internal_WrappedLine__MoveNext(List1_Enumerator__Fuse_Controls_Internal_WrappedLine* __this);
List1_Enumerator__Fuse_Controls_Internal_WrappedLine List1_Enumerator__Fuse_Controls_Internal_WrappedLine__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Controls_Internal_WrappedLine* source);
void List1_Enumerator__Fuse_Controls_Internal_WrappedLine__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Controls_Internal_WrappedLine* __this);

struct List1_Enumerator__Fuse_Controls_Internal_WrappedLine
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Controls_Internal_WrappedLine*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Controls::Internal::WrappedLine*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Controls_Internal_WrappedLine* source) { List1_Enumerator__Fuse_Controls_Internal_WrappedLine___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Controls_Internal_WrappedLine__Dispose(this); }
    ::app::Fuse::Controls::Internal::WrappedLine* Current() { return List1_Enumerator__Fuse_Controls_Internal_WrappedLine__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Controls_Internal_WrappedLine__MoveNext(this); }
};

}}}


#endif
