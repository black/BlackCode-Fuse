// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_SELECT_ENUMERATOR__FUSE_DRAWING_CONTOUR__FUSE_DR_F5FD654C_H__
#define __APP_UNO_COLLECTIONS_SELECT_ENUMERATOR__FUSE_DRAWING_CONTOUR__FUSE_DR_F5FD654C_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Border.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Border; } } }

namespace app {
namespace Uno {
namespace Collections {

struct SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border;

struct SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Border __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__uType* SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__typeof();

void SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border___ObjInit(SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border* __this, ::uObject* source, ::uDelegate* select);
void SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__Dispose(SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border* __this);
::app::Fuse::Drawing::Border* SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__get_Current(SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border* __this);
bool SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__MoveNext(SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border* __this);
SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border* SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* select);
void SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__Reset(SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border* __this);

struct SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border : ::uObject
{
    ::uStrong< ::uObject*> _source;
    ::uStrong< ::uDelegate*> _select;

    void _ObjInit(::uObject* source, ::uDelegate* select) { SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border___ObjInit(this, source, select); }
    void Dispose() { SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__Dispose(this); }
    ::app::Fuse::Drawing::Border* Current() { return SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__get_Current(this); }
    bool MoveNext() { return SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__MoveNext(this); }
    void Reset() { SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__Reset(this); }
};

}}}


#endif
