// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__FUSE_DRAWING_STROKE__FUSE_DRAWING_1CD47656_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__FUSE_DRAWING_STROKE__FUSE_DRAWING_1CD47656_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct PolygonFiller; } } }
namespace app { namespace Fuse { namespace Drawing { struct Stroke; } } }

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller;

struct KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType : ::uStructType
{
};

KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType* KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__typeof();

void KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller___ObjInit(KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this, ::app::Fuse::Drawing::Stroke* key, ::app::Fuse::Drawing::PolygonFiller* value);
::app::Fuse::Drawing::Stroke* KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__get_Key(KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this);
::app::Fuse::Drawing::PolygonFiller* KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__get_Value(KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller* __this);
KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__New_1(::uStatic* __this, ::app::Fuse::Drawing::Stroke* key, ::app::Fuse::Drawing::PolygonFiller* value);

struct KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller
{
    ::uStrong< ::app::Fuse::Drawing::Stroke*> _key;
    ::uStrong< ::app::Fuse::Drawing::PolygonFiller*> _value;

    void _ObjInit(::app::Fuse::Drawing::Stroke* key, ::app::Fuse::Drawing::PolygonFiller* value) { KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller___ObjInit(this, key, value); }
    ::app::Fuse::Drawing::Stroke* Key() { return KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__get_Key(this); }
    ::app::Fuse::Drawing::PolygonFiller* Value() { return KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__get_Value(this); }
};

}}}


#endif
