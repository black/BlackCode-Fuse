// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_WHERE_ENUMERATOR__FUSE_DRAWING_TESSELATION_FACE_H__
#define __APP_UNO_COLLECTIONS_WHERE_ENUMERATOR__FUSE_DRAWING_TESSELATION_FACE_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct Face; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct WhereEnumerator__Fuse_Drawing_Tesselation_Face;

struct WhereEnumerator__Fuse_Drawing_Tesselation_Face__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_Face __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

WhereEnumerator__Fuse_Drawing_Tesselation_Face__uType* WhereEnumerator__Fuse_Drawing_Tesselation_Face__typeof();

void WhereEnumerator__Fuse_Drawing_Tesselation_Face___ObjInit(WhereEnumerator__Fuse_Drawing_Tesselation_Face* __this, ::uObject* source, ::uDelegate* predicate);
void WhereEnumerator__Fuse_Drawing_Tesselation_Face__Dispose(WhereEnumerator__Fuse_Drawing_Tesselation_Face* __this);
::app::Fuse::Drawing::Tesselation::Face* WhereEnumerator__Fuse_Drawing_Tesselation_Face__get_Current(WhereEnumerator__Fuse_Drawing_Tesselation_Face* __this);
bool WhereEnumerator__Fuse_Drawing_Tesselation_Face__MoveNext(WhereEnumerator__Fuse_Drawing_Tesselation_Face* __this);
WhereEnumerator__Fuse_Drawing_Tesselation_Face* WhereEnumerator__Fuse_Drawing_Tesselation_Face__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* predicate);
void WhereEnumerator__Fuse_Drawing_Tesselation_Face__Reset(WhereEnumerator__Fuse_Drawing_Tesselation_Face* __this);

struct WhereEnumerator__Fuse_Drawing_Tesselation_Face : ::uObject
{
    ::uStrong< ::uObject*> _source;
    ::uStrong< ::uDelegate*> _predicate;
    ::uStrong< ::app::Fuse::Drawing::Tesselation::Face*> _current;

    void _ObjInit(::uObject* source, ::uDelegate* predicate) { WhereEnumerator__Fuse_Drawing_Tesselation_Face___ObjInit(this, source, predicate); }
    void Dispose() { WhereEnumerator__Fuse_Drawing_Tesselation_Face__Dispose(this); }
    ::app::Fuse::Drawing::Tesselation::Face* Current() { return WhereEnumerator__Fuse_Drawing_Tesselation_Face__get_Current(this); }
    bool MoveNext() { return WhereEnumerator__Fuse_Drawing_Tesselation_Face__MoveNext(this); }
    void Reset() { WhereEnumerator__Fuse_Drawing_Tesselation_Face__Reset(this); }
};

}}}


#endif
