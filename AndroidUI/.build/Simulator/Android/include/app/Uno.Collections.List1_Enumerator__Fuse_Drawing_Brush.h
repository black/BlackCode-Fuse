// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_DRAWING_BRUSH_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_DRAWING_BRUSH_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Brush.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Drawing_Brush; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Drawing_Brush;

struct List1_Enumerator__Fuse_Drawing_Brush__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Brush __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Drawing_Brush__uType* List1_Enumerator__Fuse_Drawing_Brush__typeof();

void List1_Enumerator__Fuse_Drawing_Brush___ObjInit(List1_Enumerator__Fuse_Drawing_Brush* __this, ::app::Uno::Collections::List__Fuse_Drawing_Brush* source);
void List1_Enumerator__Fuse_Drawing_Brush__Dispose(List1_Enumerator__Fuse_Drawing_Brush* __this);
::app::Fuse::Drawing::Brush* List1_Enumerator__Fuse_Drawing_Brush__get_Current(List1_Enumerator__Fuse_Drawing_Brush* __this);
bool List1_Enumerator__Fuse_Drawing_Brush__MoveNext(List1_Enumerator__Fuse_Drawing_Brush* __this);
List1_Enumerator__Fuse_Drawing_Brush List1_Enumerator__Fuse_Drawing_Brush__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Drawing_Brush* source);
void List1_Enumerator__Fuse_Drawing_Brush__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Drawing_Brush* __this);

struct List1_Enumerator__Fuse_Drawing_Brush
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Drawing_Brush*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Drawing::Brush*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Drawing_Brush* source) { List1_Enumerator__Fuse_Drawing_Brush___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Drawing_Brush__Dispose(this); }
    ::app::Fuse::Drawing::Brush* Current() { return List1_Enumerator__Fuse_Drawing_Brush__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Drawing_Brush__MoveNext(this); }
};

}}}


#endif
