// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__STRING__OUTRACKS_SIMULA_351276C0_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__STRING__OUTRACKS_SIMULA_351276C0_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_strin-1ae5a232.h>
#include <app/Uno.Collections.KeyValuePair__string__Outracks_Simulator_ByteFileSource.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Outracks_Simulator_ByteFileSource; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Enumerator__string__Outracks_Simulator_ByteFileSource;

struct Dictionary2_Enumerator__string__Outracks_Simulator_ByteFileSource__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Collections_KeyValuePair_string_Outracks_Simulator_ByteFileSource_ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

Dictionary2_Enumerator__string__Outracks_Simulator_ByteFileSource__uType* Dictionary2_Enumerator__string__Outracks_Simulator_ByteFileSource__typeof();

void Dictionary2_Enumerator__string__Outracks_Simulator_ByteFileSource___ObjInit(Dictionary2_Enumerator__string__Outracks_Simulator_ByteFileSource* __this, ::app::Uno::Collections::Dictionary__string__Outracks_Simulator_ByteFileSource* source);
void Dictionary2_Enumerator__string__Outracks_Simulator_ByteFileSource__Dispose(Dictionary2_Enumerator__string__Outracks_Simulator_ByteFileSource* __this);
::app::Uno::Collections::KeyValuePair__string__Outracks_Simulator_ByteFileSource Dictionary2_Enumerator__string__Outracks_Simulator_ByteFileSource__get_Current(Dictionary2_Enumerator__string__Outracks_Simulator_ByteFileSource* __this);
bool Dictionary2_Enumerator__string__Outracks_Simulator_ByteFileSource__MoveNext(Dictionary2_Enumerator__string__Outracks_Simulator_ByteFileSource* __this);
Dictionary2_Enumerator__string__Outracks_Simulator_ByteFileSource Dictionary2_Enumerator__string__Outracks_Simulator_ByteFileSource__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Outracks_Simulator_ByteFileSource* source);
void Dictionary2_Enumerator__string__Outracks_Simulator_ByteFileSource__Uno_Collections_IEnumerator_Reset(Dictionary2_Enumerator__string__Outracks_Simulator_ByteFileSource* __this);

struct Dictionary2_Enumerator__string__Outracks_Simulator_ByteFileSource
{
    ::uStrong< ::app::Uno::Collections::Dictionary__string__Outracks_Simulator_ByteFileSource*> _source;
    ::app::Uno::Collections::KeyValuePair__string__Outracks_Simulator_ByteFileSource _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__string__Outracks_Simulator_ByteFileSource* source) { Dictionary2_Enumerator__string__Outracks_Simulator_ByteFileSource___ObjInit(this, source); }
    void Dispose() { Dictionary2_Enumerator__string__Outracks_Simulator_ByteFileSource__Dispose(this); }
    ::app::Uno::Collections::KeyValuePair__string__Outracks_Simulator_ByteFileSource Current() { return Dictionary2_Enumerator__string__Outracks_Simulator_ByteFileSource__get_Current(this); }
    bool MoveNext() { return Dictionary2_Enumerator__string__Outracks_Simulator_ByteFileSource__MoveNext(this); }
};

}}}


#endif
