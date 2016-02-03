// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_STYLE_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_STYLE_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Style.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Style; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Style; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Style;

struct List1_Enumerator__Fuse_Style__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Style __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Style__uType* List1_Enumerator__Fuse_Style__typeof();

void List1_Enumerator__Fuse_Style___ObjInit(List1_Enumerator__Fuse_Style* __this, ::app::Uno::Collections::List__Fuse_Style* source);
void List1_Enumerator__Fuse_Style__Dispose(List1_Enumerator__Fuse_Style* __this);
::app::Fuse::Style* List1_Enumerator__Fuse_Style__get_Current(List1_Enumerator__Fuse_Style* __this);
bool List1_Enumerator__Fuse_Style__MoveNext(List1_Enumerator__Fuse_Style* __this);
List1_Enumerator__Fuse_Style List1_Enumerator__Fuse_Style__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Style* source);
void List1_Enumerator__Fuse_Style__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Style* __this);

struct List1_Enumerator__Fuse_Style
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Style*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Style*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Style* source) { List1_Enumerator__Fuse_Style___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Style__Dispose(this); }
    ::app::Fuse::Style* Current() { return List1_Enumerator__Fuse_Style__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Style__MoveNext(this); }
};

}}}


#endif
