// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__INT__FUSE_SCRIPTING_CALLBACK_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__INT__FUSE_SCRIPTING_CALLBACK_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__int__Fuse_Scripting_Callback;

struct KeyValuePair__int__Fuse_Scripting_Callback__uType : ::uStructType
{
};

KeyValuePair__int__Fuse_Scripting_Callback__uType* KeyValuePair__int__Fuse_Scripting_Callback__typeof();

void KeyValuePair__int__Fuse_Scripting_Callback___ObjInit(KeyValuePair__int__Fuse_Scripting_Callback* __this, int key, ::uDelegate* value);
int KeyValuePair__int__Fuse_Scripting_Callback__get_Key(KeyValuePair__int__Fuse_Scripting_Callback* __this);
::uDelegate* KeyValuePair__int__Fuse_Scripting_Callback__get_Value(KeyValuePair__int__Fuse_Scripting_Callback* __this);
KeyValuePair__int__Fuse_Scripting_Callback KeyValuePair__int__Fuse_Scripting_Callback__New_1(::uStatic* __this, int key, ::uDelegate* value);

struct KeyValuePair__int__Fuse_Scripting_Callback
{
    int _key;
    ::uStrong< ::uDelegate*> _value;

    void _ObjInit(int key, ::uDelegate* value) { KeyValuePair__int__Fuse_Scripting_Callback___ObjInit(this, key, value); }
    int Key() { return KeyValuePair__int__Fuse_Scripting_Callback__get_Key(this); }
    ::uDelegate* Value() { return KeyValuePair__int__Fuse_Scripting_Callback__get_Value(this); }
};

}}}


#endif
