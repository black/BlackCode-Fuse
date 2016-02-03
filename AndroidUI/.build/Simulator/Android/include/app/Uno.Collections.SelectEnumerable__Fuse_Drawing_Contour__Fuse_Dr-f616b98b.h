// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_SELECT_ENUMERABLE__FUSE_DRAWING_CONTOUR__FUSE_DR_F616B98B_H__
#define __APP_UNO_COLLECTIONS_SELECT_ENUMERABLE__FUSE_DRAWING_CONTOUR__FUSE_DR_F616B98B_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Border.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border;

struct SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Border __interface_0;
};

SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border__uType* SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border__typeof();

void SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border___ObjInit(SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border* __this, ::uObject* source, ::uDelegate* select);
::uObject* SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border__GetEnumerator(SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border* __this);
SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border* SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* select);

struct SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border : ::uObject
{
    ::uStrong< ::uObject*> _source;
    ::uStrong< ::uDelegate*> _select;

    void _ObjInit(::uObject* source, ::uDelegate* select) { SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border___ObjInit(this, source, select); }
    ::uObject* GetEnumerator() { return SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border__GetEnumerator(this); }
};

}}}


#endif
