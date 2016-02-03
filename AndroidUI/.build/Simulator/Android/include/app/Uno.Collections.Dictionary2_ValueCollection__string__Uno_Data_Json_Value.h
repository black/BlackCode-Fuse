// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__STRING__UNO_DATA_JSON_VALUE_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_VALUE_COLLECTION__STRING__UNO_DATA_JSON_VALUE_H__

#include <app/Uno.Collections.IEnumerable__Uno_Data_Json_Value.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Uno_Data_Json_Value; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection_Enumerator__string__Uno_Data_Json_Value; } } }
namespace app { namespace Uno { namespace Data { namespace Json { struct Value; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_ValueCollection__string__Uno_Data_Json_Value;

struct Dictionary2_ValueCollection__string__Uno_Data_Json_Value__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Uno_Data_Json_Value __interface_0;
};

Dictionary2_ValueCollection__string__Uno_Data_Json_Value__uType* Dictionary2_ValueCollection__string__Uno_Data_Json_Value__typeof();

::uObject* Dictionary2_ValueCollection__string__Uno_Data_Json_Value__GetEnumerator_boxed(Dictionary2_ValueCollection__string__Uno_Data_Json_Value* __this);
void Dictionary2_ValueCollection__string__Uno_Data_Json_Value___ObjInit(Dictionary2_ValueCollection__string__Uno_Data_Json_Value* __this, ::app::Uno::Collections::Dictionary__string__Uno_Data_Json_Value* source);
int Dictionary2_ValueCollection__string__Uno_Data_Json_Value__get_Count(Dictionary2_ValueCollection__string__Uno_Data_Json_Value* __this);
::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Data_Json_Value Dictionary2_ValueCollection__string__Uno_Data_Json_Value__GetEnumerator(Dictionary2_ValueCollection__string__Uno_Data_Json_Value* __this);
Dictionary2_ValueCollection__string__Uno_Data_Json_Value* Dictionary2_ValueCollection__string__Uno_Data_Json_Value__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Uno_Data_Json_Value* source);
void Dictionary2_ValueCollection__string__Uno_Data_Json_Value__Uno_Collections_ICollection_Add(Dictionary2_ValueCollection__string__Uno_Data_Json_Value* __this, ::app::Uno::Data::Json::Value* item);
void Dictionary2_ValueCollection__string__Uno_Data_Json_Value__Uno_Collections_ICollection_Clear(Dictionary2_ValueCollection__string__Uno_Data_Json_Value* __this);
bool Dictionary2_ValueCollection__string__Uno_Data_Json_Value__Uno_Collections_ICollection_Contains(Dictionary2_ValueCollection__string__Uno_Data_Json_Value* __this, ::app::Uno::Data::Json::Value* item);
bool Dictionary2_ValueCollection__string__Uno_Data_Json_Value__Uno_Collections_ICollection_Remove(Dictionary2_ValueCollection__string__Uno_Data_Json_Value* __this, ::app::Uno::Data::Json::Value* item);

struct Dictionary2_ValueCollection__string__Uno_Data_Json_Value : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__string__Uno_Data_Json_Value*> _source;

    ::uObject* GetEnumerator_boxed() { return Dictionary2_ValueCollection__string__Uno_Data_Json_Value__GetEnumerator_boxed(this); }
    void _ObjInit(::app::Uno::Collections::Dictionary__string__Uno_Data_Json_Value* source) { Dictionary2_ValueCollection__string__Uno_Data_Json_Value___ObjInit(this, source); }
    int Count() { return Dictionary2_ValueCollection__string__Uno_Data_Json_Value__get_Count(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Data_Json_Value GetEnumerator();
};

}}}

#include <app/Uno.Collections.Dictionary2_ValueCollection_Enumerator__string_-b31e1d95.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Data_Json_Value Dictionary2_ValueCollection__string__Uno_Data_Json_Value::GetEnumerator() { return Dictionary2_ValueCollection__string__Uno_Data_Json_Value__GetEnumerator(this); }

}}}


#endif
