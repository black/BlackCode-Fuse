// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_DRAWING_PATH_GEOMETRY_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_DRAWING_PATH_GEOMETRY_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_PathGeometry.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct PathGeometry; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Drawing_PathGeometry; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Drawing_PathGeometry;

struct List1_Enumerator__Fuse_Drawing_PathGeometry__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Drawing_PathGeometry __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Fuse_Drawing_PathGeometry__uType* List1_Enumerator__Fuse_Drawing_PathGeometry__typeof();

void List1_Enumerator__Fuse_Drawing_PathGeometry___ObjInit(List1_Enumerator__Fuse_Drawing_PathGeometry* __this, ::app::Uno::Collections::List__Fuse_Drawing_PathGeometry* source);
void List1_Enumerator__Fuse_Drawing_PathGeometry__Dispose(List1_Enumerator__Fuse_Drawing_PathGeometry* __this);
::app::Fuse::Drawing::PathGeometry* List1_Enumerator__Fuse_Drawing_PathGeometry__get_Current(List1_Enumerator__Fuse_Drawing_PathGeometry* __this);
bool List1_Enumerator__Fuse_Drawing_PathGeometry__MoveNext(List1_Enumerator__Fuse_Drawing_PathGeometry* __this);
List1_Enumerator__Fuse_Drawing_PathGeometry List1_Enumerator__Fuse_Drawing_PathGeometry__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Drawing_PathGeometry* source);
void List1_Enumerator__Fuse_Drawing_PathGeometry__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Fuse_Drawing_PathGeometry* __this);

struct List1_Enumerator__Fuse_Drawing_PathGeometry
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Drawing_PathGeometry*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Drawing::PathGeometry*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Drawing_PathGeometry* source) { List1_Enumerator__Fuse_Drawing_PathGeometry___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Drawing_PathGeometry__Dispose(this); }
    ::app::Fuse::Drawing::PathGeometry* Current() { return List1_Enumerator__Fuse_Drawing_PathGeometry__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Drawing_PathGeometry__MoveNext(this); }
};

}}}


#endif
