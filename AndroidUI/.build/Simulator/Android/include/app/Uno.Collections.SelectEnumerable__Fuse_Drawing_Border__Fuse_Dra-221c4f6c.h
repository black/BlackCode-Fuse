// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_SELECT_ENUMERABLE__FUSE_DRAWING_BORDER__FUSE_DRA_221C4F6C_H__
#define __APP_UNO_COLLECTIONS_SELECT_ENUMERABLE__FUSE_DRAWING_BORDER__FUSE_DRA_221C4F6C_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Contour.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour;

struct SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Contour __interface_0;
};

SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour__uType* SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour__typeof();

void SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour___ObjInit(SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour* __this, ::uObject* source, ::uDelegate* select);
::uObject* SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour__GetEnumerator(SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour* __this);
SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour* SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* select);

struct SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour : ::uObject
{
    ::uStrong< ::uObject*> _source;
    ::uStrong< ::uDelegate*> _select;

    void _ObjInit(::uObject* source, ::uDelegate* select) { SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour___ObjInit(this, source, select); }
    ::uObject* GetEnumerator() { return SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour__GetEnumerator(this); }
};

}}}


#endif
