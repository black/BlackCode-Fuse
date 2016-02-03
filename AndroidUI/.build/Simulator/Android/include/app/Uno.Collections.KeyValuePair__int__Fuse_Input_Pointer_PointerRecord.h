// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__INT__FUSE_INPUT_POINTER_POINTER_RECORD_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__INT__FUSE_INPUT_POINTER_POINTER_RECORD_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct Pointer_PointerRecord; } } }

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__int__Fuse_Input_Pointer_PointerRecord;

struct KeyValuePair__int__Fuse_Input_Pointer_PointerRecord__uType : ::uStructType
{
};

KeyValuePair__int__Fuse_Input_Pointer_PointerRecord__uType* KeyValuePair__int__Fuse_Input_Pointer_PointerRecord__typeof();

void KeyValuePair__int__Fuse_Input_Pointer_PointerRecord___ObjInit(KeyValuePair__int__Fuse_Input_Pointer_PointerRecord* __this, int key, ::app::Fuse::Input::Pointer_PointerRecord* value);
int KeyValuePair__int__Fuse_Input_Pointer_PointerRecord__get_Key(KeyValuePair__int__Fuse_Input_Pointer_PointerRecord* __this);
::app::Fuse::Input::Pointer_PointerRecord* KeyValuePair__int__Fuse_Input_Pointer_PointerRecord__get_Value(KeyValuePair__int__Fuse_Input_Pointer_PointerRecord* __this);
KeyValuePair__int__Fuse_Input_Pointer_PointerRecord KeyValuePair__int__Fuse_Input_Pointer_PointerRecord__New_1(::uStatic* __this, int key, ::app::Fuse::Input::Pointer_PointerRecord* value);

struct KeyValuePair__int__Fuse_Input_Pointer_PointerRecord
{
    int _key;
    ::uStrong< ::app::Fuse::Input::Pointer_PointerRecord*> _value;

    void _ObjInit(int key, ::app::Fuse::Input::Pointer_PointerRecord* value) { KeyValuePair__int__Fuse_Input_Pointer_PointerRecord___ObjInit(this, key, value); }
    int Key() { return KeyValuePair__int__Fuse_Input_Pointer_PointerRecord__get_Key(this); }
    ::app::Fuse::Input::Pointer_PointerRecord* Value() { return KeyValuePair__int__Fuse_Input_Pointer_PointerRecord__get_Value(this); }
};

}}}


#endif
