// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__FUSE_I_FLUSH__BOOL_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__FUSE_I_FLUSH__BOOL_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__Fuse_IFlush__bool;

struct KeyValuePair__Fuse_IFlush__bool__uType : ::uStructType
{
};

KeyValuePair__Fuse_IFlush__bool__uType* KeyValuePair__Fuse_IFlush__bool__typeof();

void KeyValuePair__Fuse_IFlush__bool___ObjInit(KeyValuePair__Fuse_IFlush__bool* __this, ::uObject* key, bool value);
::uObject* KeyValuePair__Fuse_IFlush__bool__get_Key(KeyValuePair__Fuse_IFlush__bool* __this);
bool KeyValuePair__Fuse_IFlush__bool__get_Value(KeyValuePair__Fuse_IFlush__bool* __this);
KeyValuePair__Fuse_IFlush__bool KeyValuePair__Fuse_IFlush__bool__New_1(::uStatic* __this, ::uObject* key, bool value);

struct KeyValuePair__Fuse_IFlush__bool
{
    ::uStrong< ::uObject*> _key;
    bool _value;

    void _ObjInit(::uObject* key, bool value) { KeyValuePair__Fuse_IFlush__bool___ObjInit(this, key, value); }
    ::uObject* Key() { return KeyValuePair__Fuse_IFlush__bool__get_Key(this); }
    bool Value() { return KeyValuePair__Fuse_IFlush__bool__get_Value(this); }
};

}}}


#endif
