// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__STRING__UNO_DATA_JSON_VALUE_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__STRING__UNO_DATA_JSON_VALUE_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_strin-5b0e278e.h>
#include <app/Uno.Collections.KeyValuePair__string__Uno_Data_Json_Value.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Uno_Data_Json_Value; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Enumerator__string__Uno_Data_Json_Value;

struct Dictionary2_Enumerator__string__Uno_Data_Json_Value__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Collections_KeyValuePair_string_Uno_Data_Json_Value_ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

Dictionary2_Enumerator__string__Uno_Data_Json_Value__uType* Dictionary2_Enumerator__string__Uno_Data_Json_Value__typeof();

void Dictionary2_Enumerator__string__Uno_Data_Json_Value___ObjInit(Dictionary2_Enumerator__string__Uno_Data_Json_Value* __this, ::app::Uno::Collections::Dictionary__string__Uno_Data_Json_Value* source);
void Dictionary2_Enumerator__string__Uno_Data_Json_Value__Dispose(Dictionary2_Enumerator__string__Uno_Data_Json_Value* __this);
::app::Uno::Collections::KeyValuePair__string__Uno_Data_Json_Value Dictionary2_Enumerator__string__Uno_Data_Json_Value__get_Current(Dictionary2_Enumerator__string__Uno_Data_Json_Value* __this);
bool Dictionary2_Enumerator__string__Uno_Data_Json_Value__MoveNext(Dictionary2_Enumerator__string__Uno_Data_Json_Value* __this);
Dictionary2_Enumerator__string__Uno_Data_Json_Value Dictionary2_Enumerator__string__Uno_Data_Json_Value__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Uno_Data_Json_Value* source);
void Dictionary2_Enumerator__string__Uno_Data_Json_Value__Uno_Collections_IEnumerator_Reset(Dictionary2_Enumerator__string__Uno_Data_Json_Value* __this);

struct Dictionary2_Enumerator__string__Uno_Data_Json_Value
{
    ::uStrong< ::app::Uno::Collections::Dictionary__string__Uno_Data_Json_Value*> _source;
    ::app::Uno::Collections::KeyValuePair__string__Uno_Data_Json_Value _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__string__Uno_Data_Json_Value* source) { Dictionary2_Enumerator__string__Uno_Data_Json_Value___ObjInit(this, source); }
    void Dispose() { Dictionary2_Enumerator__string__Uno_Data_Json_Value__Dispose(this); }
    ::app::Uno::Collections::KeyValuePair__string__Uno_Data_Json_Value Current() { return Dictionary2_Enumerator__string__Uno_Data_Json_Value__get_Current(this); }
    bool MoveNext() { return Dictionary2_Enumerator__string__Uno_Data_Json_Value__MoveNext(this); }
};

}}}


#endif
