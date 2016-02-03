// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__FUSE_DRAWING_STROK_D86A258A_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__FUSE_DRAWING_STROK_D86A258A_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct PolygonFiller; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller;

struct Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType : ::uClassType
{
};

Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType* Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__typeof();

void Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller___ObjInit(Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this, ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* source);
int Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__get_Count(Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this);
::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__GetEnumerator(Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this);
Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* source);
void Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this, ::app::Fuse::Drawing::PolygonFiller* item);
void Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this);
bool Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this, ::app::Fuse::Drawing::PolygonFiller* item);
bool Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this, ::app::Fuse::Drawing::PolygonFiller* item);

struct Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*> _source;

    void _ObjInit(::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* source) { Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller___ObjInit(this, source); }
    int Count() { return Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__get_Count(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller GetEnumerator();
};

}}}

#include <app/Uno.Collections.Dictionary2_ValueCollection_Enumerator__Fuse_Dr-20869336.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller::GetEnumerator() { return Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__GetEnumerator(this); }

}}}


#endif
