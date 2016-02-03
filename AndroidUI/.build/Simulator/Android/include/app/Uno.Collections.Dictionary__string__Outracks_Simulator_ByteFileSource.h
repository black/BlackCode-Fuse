// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__STRING__OUTRACKS_SIMULATOR_BYTE_FILE_SOURCE_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__STRING__OUTRACKS_SIMULATOR_BYTE_FILE_SOURCE_H__

#include <app/Uno.Collections.Dictionary2_Bucket__string__Outracks_Simulator_-bc479cff.h>
#include <app/Uno.Collections.IDictionary__string__Outracks_Simulator_ByteFileSource.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_strin-dd4b5b0b.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { struct ByteFileSource; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__string__Outracks_Simulator_ByteFileSource; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection__string__Outracks_Simulator_ByteFileSource; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource; } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__string__Outracks_Simulator_ByteFileSource; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__string__Outracks_Simulator_ByteFileSource;

struct Dictionary__string__Outracks_Simulator_ByteFileSource__uType : ::uClassType
{
    ::app::Uno::Collections::IDictionary__string__Outracks_Simulator_ByteFileSource __interface_0;
    ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_string_Outracks_Simulator_ByteFileSource_ __interface_1;
};

Dictionary__string__Outracks_Simulator_ByteFileSource__uType* Dictionary__string__Outracks_Simulator_ByteFileSource__typeof();

::uObject* Dictionary__string__Outracks_Simulator_ByteFileSource__GetEnumerator_boxed(Dictionary__string__Outracks_Simulator_ByteFileSource* __this);
void Dictionary__string__Outracks_Simulator_ByteFileSource___ObjInit(Dictionary__string__Outracks_Simulator_ByteFileSource* __this);
void Dictionary__string__Outracks_Simulator_ByteFileSource___ObjInit_1(Dictionary__string__Outracks_Simulator_ByteFileSource* __this, ::uObject* dictionary);
void Dictionary__string__Outracks_Simulator_ByteFileSource__Add(Dictionary__string__Outracks_Simulator_ByteFileSource* __this, ::uString* key, ::app::Outracks::Simulator::ByteFileSource* value);
void Dictionary__string__Outracks_Simulator_ByteFileSource__Clear(Dictionary__string__Outracks_Simulator_ByteFileSource* __this);
bool Dictionary__string__Outracks_Simulator_ByteFileSource__ContainsKey(Dictionary__string__Outracks_Simulator_ByteFileSource* __this, ::uString* key);
int Dictionary__string__Outracks_Simulator_ByteFileSource__get_Count(Dictionary__string__Outracks_Simulator_ByteFileSource* __this);
::app::Outracks::Simulator::ByteFileSource* Dictionary__string__Outracks_Simulator_ByteFileSource__get_Item(Dictionary__string__Outracks_Simulator_ByteFileSource* __this, ::uString* key);
::app::Uno::Collections::Dictionary2_KeyCollection__string__Outracks_Simulator_ByteFileSource* Dictionary__string__Outracks_Simulator_ByteFileSource__get_Keys(Dictionary__string__Outracks_Simulator_ByteFileSource* __this);
::app::Uno::Collections::Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource* Dictionary__string__Outracks_Simulator_ByteFileSource__get_Values(Dictionary__string__Outracks_Simulator_ByteFileSource* __this);
::app::Uno::Collections::Dictionary2_Enumerator__string__Outracks_Simulator_ByteFileSource Dictionary__string__Outracks_Simulator_ByteFileSource__GetEnumerator(Dictionary__string__Outracks_Simulator_ByteFileSource* __this);
Dictionary__string__Outracks_Simulator_ByteFileSource* Dictionary__string__Outracks_Simulator_ByteFileSource__New_1(::uStatic* __this);
Dictionary__string__Outracks_Simulator_ByteFileSource* Dictionary__string__Outracks_Simulator_ByteFileSource__New_2(::uStatic* __this, ::uObject* dictionary);
void Dictionary__string__Outracks_Simulator_ByteFileSource__Rehash(Dictionary__string__Outracks_Simulator_ByteFileSource* __this);
bool Dictionary__string__Outracks_Simulator_ByteFileSource__Remove(Dictionary__string__Outracks_Simulator_ByteFileSource* __this, ::uString* key);
void Dictionary__string__Outracks_Simulator_ByteFileSource__set_Item(Dictionary__string__Outracks_Simulator_ByteFileSource* __this, ::uString* key, ::app::Outracks::Simulator::ByteFileSource* value);
bool Dictionary__string__Outracks_Simulator_ByteFileSource__TryGetValue(Dictionary__string__Outracks_Simulator_ByteFileSource* __this, ::uString* key, ::app::Outracks::Simulator::ByteFileSource** value);
void Dictionary__string__Outracks_Simulator_ByteFileSource__Uno_Collections_ICollection_Add(Dictionary__string__Outracks_Simulator_ByteFileSource* __this, ::app::Uno::Collections::KeyValuePair__string__Outracks_Simulator_ByteFileSource item);
bool Dictionary__string__Outracks_Simulator_ByteFileSource__Uno_Collections_ICollection_Contains(Dictionary__string__Outracks_Simulator_ByteFileSource* __this, ::app::Uno::Collections::KeyValuePair__string__Outracks_Simulator_ByteFileSource item);
bool Dictionary__string__Outracks_Simulator_ByteFileSource__Uno_Collections_ICollection_Remove(Dictionary__string__Outracks_Simulator_ByteFileSource* __this, ::app::Uno::Collections::KeyValuePair__string__Outracks_Simulator_ByteFileSource item);

struct Dictionary__string__Outracks_Simulator_ByteFileSource : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::uObject* GetEnumerator_boxed() { return Dictionary__string__Outracks_Simulator_ByteFileSource__GetEnumerator_boxed(this); }
    void _ObjInit() { Dictionary__string__Outracks_Simulator_ByteFileSource___ObjInit(this); }
    void _ObjInit_1(::uObject* dictionary) { Dictionary__string__Outracks_Simulator_ByteFileSource___ObjInit_1(this, dictionary); }
    void Add(::uString* key, ::app::Outracks::Simulator::ByteFileSource* value) { Dictionary__string__Outracks_Simulator_ByteFileSource__Add(this, key, value); }
    void Clear() { Dictionary__string__Outracks_Simulator_ByteFileSource__Clear(this); }
    bool ContainsKey(::uString* key) { return Dictionary__string__Outracks_Simulator_ByteFileSource__ContainsKey(this, key); }
    int Count() { return Dictionary__string__Outracks_Simulator_ByteFileSource__get_Count(this); }
    ::app::Outracks::Simulator::ByteFileSource* Item(::uString* key) { return Dictionary__string__Outracks_Simulator_ByteFileSource__get_Item(this, key); }
    ::app::Uno::Collections::Dictionary2_KeyCollection__string__Outracks_Simulator_ByteFileSource* Keys() { return Dictionary__string__Outracks_Simulator_ByteFileSource__get_Keys(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource* Values() { return Dictionary__string__Outracks_Simulator_ByteFileSource__get_Values(this); }
    ::app::Uno::Collections::Dictionary2_Enumerator__string__Outracks_Simulator_ByteFileSource GetEnumerator();
    void Rehash() { Dictionary__string__Outracks_Simulator_ByteFileSource__Rehash(this); }
    bool Remove(::uString* key) { return Dictionary__string__Outracks_Simulator_ByteFileSource__Remove(this, key); }
    void Item(::uString* key, ::app::Outracks::Simulator::ByteFileSource* value) { Dictionary__string__Outracks_Simulator_ByteFileSource__set_Item(this, key, value); }
    bool TryGetValue(::uString* key, ::app::Outracks::Simulator::ByteFileSource** value) { return Dictionary__string__Outracks_Simulator_ByteFileSource__TryGetValue(this, key, value); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__string__Outracks_Simula-351276c0.h>
#include <app/Uno.Collections.KeyValuePair__string__Outracks_Simulator_ByteFileSource.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__string__Outracks_Simulator_ByteFileSource Dictionary__string__Outracks_Simulator_ByteFileSource::GetEnumerator() { return Dictionary__string__Outracks_Simulator_ByteFileSource__GetEnumerator(this); }

}}}


#endif
