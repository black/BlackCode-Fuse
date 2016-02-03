// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__STRING__FUSE_SHAPES_GEOMETRY_CACHE_ENTRY_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__STRING__FUSE_SHAPES_GEOMETRY_CACHE_ENTRY_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Shapes { struct GeometryCacheEntry; } } }

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry;

struct KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry__uType : ::uStructType
{
};

KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry__uType* KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry__typeof();

void KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry___ObjInit(KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry* __this, ::uString* key, ::app::Fuse::Shapes::GeometryCacheEntry* value);
::uString* KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry__get_Key(KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry* __this);
::app::Fuse::Shapes::GeometryCacheEntry* KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry__get_Value(KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry* __this);
KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry__New_1(::uStatic* __this, ::uString* key, ::app::Fuse::Shapes::GeometryCacheEntry* value);

struct KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry
{
    ::uStrong< ::uString*> _key;
    ::uStrong< ::app::Fuse::Shapes::GeometryCacheEntry*> _value;

    void _ObjInit(::uString* key, ::app::Fuse::Shapes::GeometryCacheEntry* value) { KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry___ObjInit(this, key, value); }
    ::uString* Key() { return KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry__get_Key(this); }
    ::app::Fuse::Shapes::GeometryCacheEntry* Value() { return KeyValuePair__string__Fuse_Shapes_GeometryCacheEntry__get_Value(this); }
};

}}}


#endif
