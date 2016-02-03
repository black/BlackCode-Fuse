// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION__STRING__FUSE_SHAPES__DFDA45D3_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION__STRING__FUSE_SHAPES__DFDA45D3_H__

#include <app/Uno.Collections.IEnumerable__string.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Fuse_Shapes_GeometryCacheEntry; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_KeyCollection__string__Fuse_Shapes_GeometryCacheEntry;

struct Dictionary2_KeyCollection__string__Fuse_Shapes_GeometryCacheEntry__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__string __interface_0;
};

Dictionary2_KeyCollection__string__Fuse_Shapes_GeometryCacheEntry__uType* Dictionary2_KeyCollection__string__Fuse_Shapes_GeometryCacheEntry__typeof();

::uObject* Dictionary2_KeyCollection__string__Fuse_Shapes_GeometryCacheEntry__GetEnumerator_boxed(Dictionary2_KeyCollection__string__Fuse_Shapes_GeometryCacheEntry* __this);
void Dictionary2_KeyCollection__string__Fuse_Shapes_GeometryCacheEntry___ObjInit(Dictionary2_KeyCollection__string__Fuse_Shapes_GeometryCacheEntry* __this, ::app::Uno::Collections::Dictionary__string__Fuse_Shapes_GeometryCacheEntry* source);
int Dictionary2_KeyCollection__string__Fuse_Shapes_GeometryCacheEntry__get_Count(Dictionary2_KeyCollection__string__Fuse_Shapes_GeometryCacheEntry* __this);
::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry Dictionary2_KeyCollection__string__Fuse_Shapes_GeometryCacheEntry__GetEnumerator(Dictionary2_KeyCollection__string__Fuse_Shapes_GeometryCacheEntry* __this);
Dictionary2_KeyCollection__string__Fuse_Shapes_GeometryCacheEntry* Dictionary2_KeyCollection__string__Fuse_Shapes_GeometryCacheEntry__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Fuse_Shapes_GeometryCacheEntry* source);
void Dictionary2_KeyCollection__string__Fuse_Shapes_GeometryCacheEntry__Uno_Collections_ICollection_Add(Dictionary2_KeyCollection__string__Fuse_Shapes_GeometryCacheEntry* __this, ::uString* item);
void Dictionary2_KeyCollection__string__Fuse_Shapes_GeometryCacheEntry__Uno_Collections_ICollection_Clear(Dictionary2_KeyCollection__string__Fuse_Shapes_GeometryCacheEntry* __this);
bool Dictionary2_KeyCollection__string__Fuse_Shapes_GeometryCacheEntry__Uno_Collections_ICollection_Contains(Dictionary2_KeyCollection__string__Fuse_Shapes_GeometryCacheEntry* __this, ::uString* item);
bool Dictionary2_KeyCollection__string__Fuse_Shapes_GeometryCacheEntry__Uno_Collections_ICollection_Remove(Dictionary2_KeyCollection__string__Fuse_Shapes_GeometryCacheEntry* __this, ::uString* item);

struct Dictionary2_KeyCollection__string__Fuse_Shapes_GeometryCacheEntry : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__string__Fuse_Shapes_GeometryCacheEntry*> _source;

    ::uObject* GetEnumerator_boxed() { return Dictionary2_KeyCollection__string__Fuse_Shapes_GeometryCacheEntry__GetEnumerator_boxed(this); }
    void _ObjInit(::app::Uno::Collections::Dictionary__string__Fuse_Shapes_GeometryCacheEntry* source) { Dictionary2_KeyCollection__string__Fuse_Shapes_GeometryCacheEntry___ObjInit(this, source); }
    int Count() { return Dictionary2_KeyCollection__string__Fuse_Shapes_GeometryCacheEntry__get_Count(this); }
    ::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry GetEnumerator();
};

}}}

#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__string__F-f5fe226b.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__string__Fuse_Shapes_GeometryCacheEntry Dictionary2_KeyCollection__string__Fuse_Shapes_GeometryCacheEntry::GetEnumerator() { return Dictionary2_KeyCollection__string__Fuse_Shapes_GeometryCacheEntry__GetEnumerator(this); }

}}}


#endif
