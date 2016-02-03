// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__STRING__OUTRACKS_SIMULATOR_BYTE_FILE_SOURCE_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__STRING__OUTRACKS_SIMULATOR_BYTE_FILE_SOURCE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { struct ByteFileSource; } } }

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__string__Outracks_Simulator_ByteFileSource;

struct KeyValuePair__string__Outracks_Simulator_ByteFileSource__uType : ::uStructType
{
};

KeyValuePair__string__Outracks_Simulator_ByteFileSource__uType* KeyValuePair__string__Outracks_Simulator_ByteFileSource__typeof();

void KeyValuePair__string__Outracks_Simulator_ByteFileSource___ObjInit(KeyValuePair__string__Outracks_Simulator_ByteFileSource* __this, ::uString* key, ::app::Outracks::Simulator::ByteFileSource* value);
::uString* KeyValuePair__string__Outracks_Simulator_ByteFileSource__get_Key(KeyValuePair__string__Outracks_Simulator_ByteFileSource* __this);
::app::Outracks::Simulator::ByteFileSource* KeyValuePair__string__Outracks_Simulator_ByteFileSource__get_Value(KeyValuePair__string__Outracks_Simulator_ByteFileSource* __this);
KeyValuePair__string__Outracks_Simulator_ByteFileSource KeyValuePair__string__Outracks_Simulator_ByteFileSource__New_1(::uStatic* __this, ::uString* key, ::app::Outracks::Simulator::ByteFileSource* value);

struct KeyValuePair__string__Outracks_Simulator_ByteFileSource
{
    ::uStrong< ::uString*> _key;
    ::uStrong< ::app::Outracks::Simulator::ByteFileSource*> _value;

    void _ObjInit(::uString* key, ::app::Outracks::Simulator::ByteFileSource* value) { KeyValuePair__string__Outracks_Simulator_ByteFileSource___ObjInit(this, key, value); }
    ::uString* Key() { return KeyValuePair__string__Outracks_Simulator_ByteFileSource__get_Key(this); }
    ::app::Outracks::Simulator::ByteFileSource* Value() { return KeyValuePair__string__Outracks_Simulator_ByteFileSource__get_Value(this); }
};

}}}


#endif
