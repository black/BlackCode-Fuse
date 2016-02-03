// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION_ENUMERATOR__STRING__E21052D_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION_ENUMERATOR__STRING__E21052D_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Shapes { struct GeometryCacheEntry; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Fuse_Shapes_GeometryCacheEntry; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry;

struct Dictionary2_ValueCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry__uType : ::uStructType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

Dictionary2_ValueCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry__uType* Dictionary2_ValueCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry__typeof();

void Dictionary2_ValueCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry___ObjInit(Dictionary2_ValueCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry* __this, ::app::Uno::Collections::Dictionary__string__Fuse_Shapes_GeometryCacheEntry* source);
void Dictionary2_ValueCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry__Dispose(Dictionary2_ValueCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry* __this);
bool Dictionary2_ValueCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry__MoveNext(Dictionary2_ValueCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry* __this);
Dictionary2_ValueCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry Dictionary2_ValueCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Fuse_Shapes_GeometryCacheEntry* source);
void Dictionary2_ValueCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry__Uno_Collections_IEnumerator_Reset(Dictionary2_ValueCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry* __this);

struct Dictionary2_ValueCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry
{
    ::uStrong< ::app::Uno::Collections::Dictionary__string__Fuse_Shapes_GeometryCacheEntry*> _source;
    ::uStrong< ::app::Fuse::Shapes::GeometryCacheEntry*> _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__string__Fuse_Shapes_GeometryCacheEntry* source) { Dictionary2_ValueCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry___ObjInit(this, source); }
    void Dispose() { Dictionary2_ValueCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry__Dispose(this); }
    bool MoveNext() { return Dictionary2_ValueCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry__MoveNext(this); }
};

}}}


#endif
