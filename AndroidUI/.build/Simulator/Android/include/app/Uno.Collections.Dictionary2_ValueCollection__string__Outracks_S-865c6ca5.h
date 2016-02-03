// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__STRING__OUTRACKS_S_865C6CA5_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__STRING__OUTRACKS_S_865C6CA5_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { struct ByteFileSource; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Outracks_Simulator_ByteFileSource; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection_Enumerator__string__Outracks_Simulator_ByteFileSource; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource;

struct Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource__uType : ::uClassType
{
};

Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource__uType* Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource__typeof();

void Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource___ObjInit(Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource* __this, ::app::Uno::Collections::Dictionary__string__Outracks_Simulator_ByteFileSource* source);
int Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource__get_Count(Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource* __this);
::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Outracks_Simulator_ByteFileSource Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource__GetEnumerator(Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource* __this);
Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource* Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Outracks_Simulator_ByteFileSource* source);
void Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource* __this, ::app::Outracks::Simulator::ByteFileSource* item);
void Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource* __this);
bool Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource* __this, ::app::Outracks::Simulator::ByteFileSource* item);
bool Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource* __this, ::app::Outracks::Simulator::ByteFileSource* item);

struct Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__string__Outracks_Simulator_ByteFileSource*> _source;

    void _ObjInit(::app::Uno::Collections::Dictionary__string__Outracks_Simulator_ByteFileSource* source) { Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource___ObjInit(this, source); }
    int Count() { return Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource__get_Count(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Outracks_Simulator_ByteFileSource GetEnumerator();
};

}}}

#include <app/Uno.Collections.Dictionary2_ValueCollection_Enumerator__string_-86963fcc.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Outracks_Simulator_ByteFileSource Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource::GetEnumerator() { return Dictionary2_ValueCollection__string__Outracks_Simulator_ByteFileSource__GetEnumerator(this); }

}}}


#endif
