// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_RENDER_TARGET_ENTRY_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_RENDER_TARGET_ENTRY_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_RenderTargetEntry.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct RenderTargetEntry; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_RenderTargetEntry; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_RenderTargetEntry;

struct List1_Enumerator__Fuse_RenderTargetEntry__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_RenderTargetEntry __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_RenderTargetEntry__uType* List1_Enumerator__Fuse_RenderTargetEntry__typeof();

void List1_Enumerator__Fuse_RenderTargetEntry___ObjInit(List1_Enumerator__Fuse_RenderTargetEntry* __this, ::app::Uno::Collections::List__Fuse_RenderTargetEntry* source);
void List1_Enumerator__Fuse_RenderTargetEntry__Dispose(List1_Enumerator__Fuse_RenderTargetEntry* __this);
::app::Fuse::RenderTargetEntry* List1_Enumerator__Fuse_RenderTargetEntry__get_Current(List1_Enumerator__Fuse_RenderTargetEntry* __this);
bool List1_Enumerator__Fuse_RenderTargetEntry__MoveNext(List1_Enumerator__Fuse_RenderTargetEntry* __this);
List1_Enumerator__Fuse_RenderTargetEntry List1_Enumerator__Fuse_RenderTargetEntry__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_RenderTargetEntry* source);
void List1_Enumerator__Fuse_RenderTargetEntry__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_RenderTargetEntry* __this);

struct List1_Enumerator__Fuse_RenderTargetEntry
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_RenderTargetEntry*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::RenderTargetEntry*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_RenderTargetEntry* source) { List1_Enumerator__Fuse_RenderTargetEntry___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_RenderTargetEntry__Dispose(this); }
    ::app::Fuse::RenderTargetEntry* Current() { return List1_Enumerator__Fuse_RenderTargetEntry__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_RenderTargetEntry__MoveNext(this); }
};

}}}


#endif
