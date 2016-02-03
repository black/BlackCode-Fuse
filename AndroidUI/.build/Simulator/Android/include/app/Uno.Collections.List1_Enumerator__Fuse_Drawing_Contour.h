// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_DRAWING_CONTOUR_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_DRAWING_CONTOUR_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Contour.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Contour; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Drawing_Contour; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Drawing_Contour;

struct List1_Enumerator__Fuse_Drawing_Contour__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Contour __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Drawing_Contour__uType* List1_Enumerator__Fuse_Drawing_Contour__typeof();

void List1_Enumerator__Fuse_Drawing_Contour___ObjInit(List1_Enumerator__Fuse_Drawing_Contour* __this, ::app::Uno::Collections::List__Fuse_Drawing_Contour* source);
void List1_Enumerator__Fuse_Drawing_Contour__Dispose(List1_Enumerator__Fuse_Drawing_Contour* __this);
::app::Fuse::Drawing::Contour* List1_Enumerator__Fuse_Drawing_Contour__get_Current(List1_Enumerator__Fuse_Drawing_Contour* __this);
bool List1_Enumerator__Fuse_Drawing_Contour__MoveNext(List1_Enumerator__Fuse_Drawing_Contour* __this);
List1_Enumerator__Fuse_Drawing_Contour List1_Enumerator__Fuse_Drawing_Contour__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Drawing_Contour* source);
void List1_Enumerator__Fuse_Drawing_Contour__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Drawing_Contour* __this);

struct List1_Enumerator__Fuse_Drawing_Contour
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Drawing_Contour*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Drawing::Contour*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Drawing_Contour* source) { List1_Enumerator__Fuse_Drawing_Contour___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Drawing_Contour__Dispose(this); }
    ::app::Fuse::Drawing::Contour* Current() { return List1_Enumerator__Fuse_Drawing_Contour__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Drawing_Contour__MoveNext(this); }
};

}}}


#endif
