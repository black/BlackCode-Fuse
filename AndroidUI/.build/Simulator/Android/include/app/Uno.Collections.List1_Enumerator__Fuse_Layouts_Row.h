// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_LAYOUTS_ROW_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_LAYOUTS_ROW_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Layouts_Row.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Layouts { struct Row; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Layouts_Row; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Layouts_Row;

struct List1_Enumerator__Fuse_Layouts_Row__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Layouts_Row __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Layouts_Row__uType* List1_Enumerator__Fuse_Layouts_Row__typeof();

void List1_Enumerator__Fuse_Layouts_Row___ObjInit(List1_Enumerator__Fuse_Layouts_Row* __this, ::app::Uno::Collections::List__Fuse_Layouts_Row* source);
void List1_Enumerator__Fuse_Layouts_Row__Dispose(List1_Enumerator__Fuse_Layouts_Row* __this);
::app::Fuse::Layouts::Row* List1_Enumerator__Fuse_Layouts_Row__get_Current(List1_Enumerator__Fuse_Layouts_Row* __this);
bool List1_Enumerator__Fuse_Layouts_Row__MoveNext(List1_Enumerator__Fuse_Layouts_Row* __this);
List1_Enumerator__Fuse_Layouts_Row List1_Enumerator__Fuse_Layouts_Row__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Layouts_Row* source);
void List1_Enumerator__Fuse_Layouts_Row__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Layouts_Row* __this);

struct List1_Enumerator__Fuse_Layouts_Row
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Layouts_Row*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Layouts::Row*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Layouts_Row* source) { List1_Enumerator__Fuse_Layouts_Row___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Layouts_Row__Dispose(this); }
    ::app::Fuse::Layouts::Row* Current() { return List1_Enumerator__Fuse_Layouts_Row__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Layouts_Row__MoveNext(this); }
};

}}}


#endif
