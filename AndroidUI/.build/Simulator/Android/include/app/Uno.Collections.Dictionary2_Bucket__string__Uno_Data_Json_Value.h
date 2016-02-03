// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__STRING__UNO_DATA_JSON_VALUE_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__STRING__UNO_DATA_JSON_VALUE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Data { namespace Json { struct Value; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Bucket__string__Uno_Data_Json_Value;

struct Dictionary2_Bucket__string__Uno_Data_Json_Value__uType : ::uStructType
{
};

Dictionary2_Bucket__string__Uno_Data_Json_Value__uType* Dictionary2_Bucket__string__Uno_Data_Json_Value__typeof();

struct Dictionary2_Bucket__string__Uno_Data_Json_Value
{
    ::uStrong< ::uString*> Key;
    ::uStrong< ::app::Uno::Data::Json::Value*> Value;
    int State;
};

}}}


#endif
