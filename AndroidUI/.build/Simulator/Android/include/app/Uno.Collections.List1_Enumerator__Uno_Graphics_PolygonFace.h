// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_GRAPHICS_POLYGON_FACE_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_GRAPHICS_POLYGON_FACE_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Graphics_PolygonFace.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_Graphics_PolygonFace; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Uno_Graphics_PolygonFace;

struct List1_Enumerator__Uno_Graphics_PolygonFace__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Graphics_PolygonFace __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Uno_Graphics_PolygonFace__uType* List1_Enumerator__Uno_Graphics_PolygonFace__typeof();

void List1_Enumerator__Uno_Graphics_PolygonFace___ObjInit(List1_Enumerator__Uno_Graphics_PolygonFace* __this, ::app::Uno::Collections::List__Uno_Graphics_PolygonFace* source);
void List1_Enumerator__Uno_Graphics_PolygonFace__Dispose(List1_Enumerator__Uno_Graphics_PolygonFace* __this);
int List1_Enumerator__Uno_Graphics_PolygonFace__get_Current(List1_Enumerator__Uno_Graphics_PolygonFace* __this);
bool List1_Enumerator__Uno_Graphics_PolygonFace__MoveNext(List1_Enumerator__Uno_Graphics_PolygonFace* __this);
List1_Enumerator__Uno_Graphics_PolygonFace List1_Enumerator__Uno_Graphics_PolygonFace__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Graphics_PolygonFace* source);
void List1_Enumerator__Uno_Graphics_PolygonFace__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_Graphics_PolygonFace* __this);

struct List1_Enumerator__Uno_Graphics_PolygonFace
{
    ::uStrong< ::app::Uno::Collections::List__Uno_Graphics_PolygonFace*> _source;
    int _version;
    int _iterator;
    int _current;

    void _ObjInit(::app::Uno::Collections::List__Uno_Graphics_PolygonFace* source) { List1_Enumerator__Uno_Graphics_PolygonFace___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Uno_Graphics_PolygonFace__Dispose(this); }
    int Current() { return List1_Enumerator__Uno_Graphics_PolygonFace__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Uno_Graphics_PolygonFace__MoveNext(this); }
};

}}}


#endif
