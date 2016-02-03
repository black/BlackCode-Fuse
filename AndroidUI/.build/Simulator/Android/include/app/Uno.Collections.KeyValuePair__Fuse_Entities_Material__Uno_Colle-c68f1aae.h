// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__FUSE_ENTITIES_MATERIAL__UNO_COLLE_C68F1AAE_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__FUSE_ENTITIES_MATERIAL__UNO_COLLE_C68F1AAE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Entities { struct Material; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Entities_Entry; } } }

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_;

struct KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___uType : ::uStructType
{
};

KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___uType* KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___typeof();

void KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry____ObjInit(KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this, ::app::Fuse::Entities::Material* key, ::app::Uno::Collections::List__Fuse_Entities_Entry* value);
::app::Fuse::Entities::Material* KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___get_Key(KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this);
::app::Uno::Collections::List__Fuse_Entities_Entry* KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___get_Value(KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_* __this);
KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_ KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___New_1(::uStatic* __this, ::app::Fuse::Entities::Material* key, ::app::Uno::Collections::List__Fuse_Entities_Entry* value);

struct KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry_
{
    ::uStrong< ::app::Fuse::Entities::Material*> _key;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Entities_Entry*> _value;

    void _ObjInit(::app::Fuse::Entities::Material* key, ::app::Uno::Collections::List__Fuse_Entities_Entry* value) { KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry____ObjInit(this, key, value); }
    ::app::Fuse::Entities::Material* Key() { return KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___get_Key(this); }
    ::app::Uno::Collections::List__Fuse_Entities_Entry* Value() { return KeyValuePair__Fuse_Entities_Material__Uno_Collections_List_Fuse_Entities_Entry___get_Value(this); }
};

}}}


#endif
