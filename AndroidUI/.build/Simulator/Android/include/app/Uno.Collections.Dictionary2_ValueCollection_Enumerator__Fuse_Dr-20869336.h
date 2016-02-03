// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION_ENUMERATOR__FUSE_DR_20869336_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION_ENUMERATOR__FUSE_DR_20869336_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct PolygonFiller; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller;

struct Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType : ::uStructType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType* Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__typeof();

void Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller___ObjInit(Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this, ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* source);
void Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Dispose(Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this);
::app::Fuse::Drawing::PolygonFiller* Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__get_Current(Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this);
bool Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__MoveNext(Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this);
Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* source);
void Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Uno_Collections_IEnumerator_Reset(Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this);

struct Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*> _source;
    ::uStrong< ::app::Fuse::Drawing::PolygonFiller*> _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* source) { Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller___ObjInit(this, source); }
    void Dispose() { Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Dispose(this); }
    ::app::Fuse::Drawing::PolygonFiller* Current() { return Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__get_Current(this); }
    bool MoveNext() { return Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__MoveNext(this); }
};

}}}


#endif
