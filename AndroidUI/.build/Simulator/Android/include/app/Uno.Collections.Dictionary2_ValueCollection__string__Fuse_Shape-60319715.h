// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__STRING__FUSE_SHAPE_60319715_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__STRING__FUSE_SHAPE_60319715_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Shapes { struct GeometryCacheEntry; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Fuse_Shapes_GeometryCacheEntry; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry;

struct Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry__uType : ::uClassType
{
};

Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry__uType* Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry__typeof();

void Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry___ObjInit(Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry* __this, ::app::Uno::Collections::Dictionary__string__Fuse_Shapes_GeometryCacheEntry* source);
int Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry__get_Count(Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry* __this);
::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry__GetEnumerator(Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry* __this);
Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry* Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Fuse_Shapes_GeometryCacheEntry* source);
void Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry* __this, ::app::Fuse::Shapes::GeometryCacheEntry* item);
void Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry* __this);
bool Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry* __this, ::app::Fuse::Shapes::GeometryCacheEntry* item);
bool Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry* __this, ::app::Fuse::Shapes::GeometryCacheEntry* item);

struct Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__string__Fuse_Shapes_GeometryCacheEntry*> _source;

    void _ObjInit(::app::Uno::Collections::Dictionary__string__Fuse_Shapes_GeometryCacheEntry* source) { Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry___ObjInit(this, source); }
    int Count() { return Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry__get_Count(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry GetEnumerator();
};

}}}

#include <app/Uno.Collections.Dictionary2_ValueCollection_Enumerator__string_-e21052d.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry::GetEnumerator() { return Dictionary2_ValueCollection__string__Fuse_Shapes_GeometryCacheEntry__GetEnumerator(this); }

}}}


#endif
