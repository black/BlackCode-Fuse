// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_DATA_JSON_VALUE_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_DATA_JSON_VALUE_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Data_Json_Value.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_Data_Json_Value; } } }
namespace app { namespace Uno { namespace Data { namespace Json { struct Value; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Uno_Data_Json_Value;

struct List1_Enumerator__Uno_Data_Json_Value__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Data_Json_Value __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Uno_Data_Json_Value__uType* List1_Enumerator__Uno_Data_Json_Value__typeof();

void List1_Enumerator__Uno_Data_Json_Value___ObjInit(List1_Enumerator__Uno_Data_Json_Value* __this, ::app::Uno::Collections::List__Uno_Data_Json_Value* source);
void List1_Enumerator__Uno_Data_Json_Value__Dispose(List1_Enumerator__Uno_Data_Json_Value* __this);
::app::Uno::Data::Json::Value* List1_Enumerator__Uno_Data_Json_Value__get_Current(List1_Enumerator__Uno_Data_Json_Value* __this);
bool List1_Enumerator__Uno_Data_Json_Value__MoveNext(List1_Enumerator__Uno_Data_Json_Value* __this);
List1_Enumerator__Uno_Data_Json_Value List1_Enumerator__Uno_Data_Json_Value__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Data_Json_Value* source);
void List1_Enumerator__Uno_Data_Json_Value__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_Data_Json_Value* __this);

struct List1_Enumerator__Uno_Data_Json_Value
{
    ::uStrong< ::app::Uno::Collections::List__Uno_Data_Json_Value*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Uno::Data::Json::Value*> _current;

    void _ObjInit(::app::Uno::Collections::List__Uno_Data_Json_Value* source) { List1_Enumerator__Uno_Data_Json_Value___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Uno_Data_Json_Value__Dispose(this); }
    ::app::Uno::Data::Json::Value* Current() { return List1_Enumerator__Uno_Data_Json_Value__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Uno_Data_Json_Value__MoveNext(this); }
};

}}}


#endif
