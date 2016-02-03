// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_LAYOUTS_COLUMN_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_LAYOUTS_COLUMN_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Layouts_Column.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Layouts { struct Column; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Layouts_Column; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Layouts_Column;

struct List1_Enumerator__Fuse_Layouts_Column__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Layouts_Column __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Layouts_Column__uType* List1_Enumerator__Fuse_Layouts_Column__typeof();

void List1_Enumerator__Fuse_Layouts_Column___ObjInit(List1_Enumerator__Fuse_Layouts_Column* __this, ::app::Uno::Collections::List__Fuse_Layouts_Column* source);
void List1_Enumerator__Fuse_Layouts_Column__Dispose(List1_Enumerator__Fuse_Layouts_Column* __this);
::app::Fuse::Layouts::Column* List1_Enumerator__Fuse_Layouts_Column__get_Current(List1_Enumerator__Fuse_Layouts_Column* __this);
bool List1_Enumerator__Fuse_Layouts_Column__MoveNext(List1_Enumerator__Fuse_Layouts_Column* __this);
List1_Enumerator__Fuse_Layouts_Column List1_Enumerator__Fuse_Layouts_Column__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Layouts_Column* source);
void List1_Enumerator__Fuse_Layouts_Column__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Layouts_Column* __this);

struct List1_Enumerator__Fuse_Layouts_Column
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Layouts_Column*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Layouts::Column*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Layouts_Column* source) { List1_Enumerator__Fuse_Layouts_Column___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Layouts_Column__Dispose(this); }
    ::app::Fuse::Layouts::Column* Current() { return List1_Enumerator__Fuse_Layouts_Column__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Layouts_Column__MoveNext(this); }
};

}}}


#endif
