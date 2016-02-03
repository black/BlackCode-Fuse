// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_WHERE_ENUMERABLE__FUSE_DRAWING_TESSELATION_FACE_H__
#define __APP_UNO_COLLECTIONS_WHERE_ENUMERABLE__FUSE_DRAWING_TESSELATION_FACE_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct WhereEnumerable__Fuse_Drawing_Tesselation_Face;

struct WhereEnumerable__Fuse_Drawing_Tesselation_Face__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_Face __interface_0;
};

WhereEnumerable__Fuse_Drawing_Tesselation_Face__uType* WhereEnumerable__Fuse_Drawing_Tesselation_Face__typeof();

void WhereEnumerable__Fuse_Drawing_Tesselation_Face___ObjInit(WhereEnumerable__Fuse_Drawing_Tesselation_Face* __this, ::uObject* source, ::uDelegate* predicate);
::uObject* WhereEnumerable__Fuse_Drawing_Tesselation_Face__GetEnumerator(WhereEnumerable__Fuse_Drawing_Tesselation_Face* __this);
WhereEnumerable__Fuse_Drawing_Tesselation_Face* WhereEnumerable__Fuse_Drawing_Tesselation_Face__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* predicate);

struct WhereEnumerable__Fuse_Drawing_Tesselation_Face : ::uObject
{
    ::uStrong< ::uObject*> _source;
    ::uStrong< ::uDelegate*> _predicate;

    void _ObjInit(::uObject* source, ::uDelegate* predicate) { WhereEnumerable__Fuse_Drawing_Tesselation_Face___ObjInit(this, source, predicate); }
    ::uObject* GetEnumerator() { return WhereEnumerable__Fuse_Drawing_Tesselation_Face__GetEnumerator(this); }
};

}}}


#endif
