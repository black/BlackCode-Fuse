// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION__FUSE_DRAWING_STROKE__E4F3B1C6_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_KEY_COLLECTION__FUSE_DRAWING_STROKE__E4F3B1C6_H__

#include <app/Uno.Collections.ICollection__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Stroke.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Stroke; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_KeyCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller;

struct Dictionary2_KeyCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType : ::uClassType
{
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Stroke __interface_0;
    ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Stroke __interface_1;
};

Dictionary2_KeyCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType* Dictionary2_KeyCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__typeof();

::uObject* Dictionary2_KeyCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__GetEnumerator_boxed(Dictionary2_KeyCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this);
void Dictionary2_KeyCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller___ObjInit(Dictionary2_KeyCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this, ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* source);
int Dictionary2_KeyCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__get_Count(Dictionary2_KeyCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this);
::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller Dictionary2_KeyCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__GetEnumerator(Dictionary2_KeyCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this);
Dictionary2_KeyCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* Dictionary2_KeyCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* source);
void Dictionary2_KeyCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Uno_Collections_ICollection_Add(Dictionary2_KeyCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this, ::app::Fuse::Drawing::Stroke* item);
void Dictionary2_KeyCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Uno_Collections_ICollection_Clear(Dictionary2_KeyCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this);
bool Dictionary2_KeyCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Uno_Collections_ICollection_Contains(Dictionary2_KeyCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this, ::app::Fuse::Drawing::Stroke* item);
bool Dictionary2_KeyCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Uno_Collections_ICollection_Remove(Dictionary2_KeyCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this, ::app::Fuse::Drawing::Stroke* item);

struct Dictionary2_KeyCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*> _source;

    ::uObject* GetEnumerator_boxed() { return Dictionary2_KeyCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__GetEnumerator_boxed(this); }
    void _ObjInit(::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* source) { Dictionary2_KeyCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller___ObjInit(this, source); }
    int Count() { return Dictionary2_KeyCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__get_Count(this); }
    ::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller GetEnumerator();
};

}}}

#include <app/Uno.Collections.Dictionary2_KeyCollection_Enumerator__Fuse_Draw-bd620405.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller Dictionary2_KeyCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller::GetEnumerator() { return Dictionary2_KeyCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__GetEnumerator(this); }

}}}


#endif
