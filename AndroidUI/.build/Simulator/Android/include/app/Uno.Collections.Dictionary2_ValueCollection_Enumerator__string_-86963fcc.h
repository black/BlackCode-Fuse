// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION_ENUMERATOR__STRING__86963FCC_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION_ENUMERATOR__STRING__86963FCC_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { struct ByteFileSource; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Outracks_Simulator_ByteFileSource; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection_Enumerator__string__Outracks_Simulator_ByteFileSource;

struct Dictionary2_ValueCollection_Enumerator__string__Outracks_Simulator_ByteFileSource__uType : ::uStructType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

Dictionary2_ValueCollection_Enumerator__string__Outracks_Simulator_ByteFileSource__uType* Dictionary2_ValueCollection_Enumerator__string__Outracks_Simulator_ByteFileSource__typeof();

void Dictionary2_ValueCollection_Enumerator__string__Outracks_Simulator_ByteFileSource___ObjInit(Dictionary2_ValueCollection_Enumerator__string__Outracks_Simulator_ByteFileSource* __this, ::app::Uno::Collections::Dictionary__string__Outracks_Simulator_ByteFileSource* source);
void Dictionary2_ValueCollection_Enumerator__string__Outracks_Simulator_ByteFileSource__Dispose(Dictionary2_ValueCollection_Enumerator__string__Outracks_Simulator_ByteFileSource* __this);
bool Dictionary2_ValueCollection_Enumerator__string__Outracks_Simulator_ByteFileSource__MoveNext(Dictionary2_ValueCollection_Enumerator__string__Outracks_Simulator_ByteFileSource* __this);
Dictionary2_ValueCollection_Enumerator__string__Outracks_Simulator_ByteFileSource Dictionary2_ValueCollection_Enumerator__string__Outracks_Simulator_ByteFileSource__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Outracks_Simulator_ByteFileSource* source);
void Dictionary2_ValueCollection_Enumerator__string__Outracks_Simulator_ByteFileSource__Uno_Collections_IEnumerator_Reset(Dictionary2_ValueCollection_Enumerator__string__Outracks_Simulator_ByteFileSource* __this);

struct Dictionary2_ValueCollection_Enumerator__string__Outracks_Simulator_ByteFileSource
{
    ::uStrong< ::app::Uno::Collections::Dictionary__string__Outracks_Simulator_ByteFileSource*> _source;
    ::uStrong< ::app::Outracks::Simulator::ByteFileSource*> _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__string__Outracks_Simulator_ByteFileSource* source) { Dictionary2_ValueCollection_Enumerator__string__Outracks_Simulator_ByteFileSource___ObjInit(this, source); }
    void Dispose() { Dictionary2_ValueCollection_Enumerator__string__Outracks_Simulator_ByteFileSource__Dispose(this); }
    bool MoveNext() { return Dictionary2_ValueCollection_Enumerator__string__Outracks_Simulator_ByteFileSource__MoveNext(this); }
};

}}}


#endif
