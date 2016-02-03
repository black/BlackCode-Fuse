// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION_ENUMERATOR__FUSE_DRAW_BD620405_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION_ENUMERATOR__FUSE_DRAW_BD620405_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Stroke.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Stroke; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller;

struct Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Stroke __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType* Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__typeof();

void Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller___ObjInit(Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this, ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* source);
void Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Dispose(Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this);
::app::Fuse::Drawing::Stroke* Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__get_Current(Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this);
bool Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__MoveNext(Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this);
Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* source);
void Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Uno_Collections_IEnumerator_Reset(Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this);

struct Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*> _source;
    ::uStrong< ::app::Fuse::Drawing::Stroke*> _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* source) { Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller___ObjInit(this, source); }
    void Dispose() { Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Dispose(this); }
    ::app::Fuse::Drawing::Stroke* Current() { return Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__get_Current(this); }
    bool MoveNext() { return Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__MoveNext(this); }
};

}}}


#endif
