// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Json\0.13.2\Source\Implementation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DATA_JSON_JSON_READER_IMPL_H__
#define __APP_UNO_DATA_JSON_JSON_READER_IMPL_H__

#include <Uno.h>
namespace app { namespace Uno { namespace Data { namespace Json { struct JsonReaderHandle; } } } }

namespace app {
namespace Uno {
namespace Data {
namespace Json {

struct JsonReaderImpl__uType : ::uClassType
{
};

JsonReaderImpl__uType* JsonReaderImpl__typeof();

int JsonReaderImpl__GetCount(::uStatic* __this, ::app::Uno::Data::Json::JsonReaderHandle* handle);
bool JsonReaderImpl__GetHasKey(::uStatic* __this, ::app::Uno::Data::Json::JsonReaderHandle* handle, ::uString* key);
::app::Uno::Data::Json::JsonReaderHandle* JsonReaderImpl__GetItemByIndex(::uStatic* __this, ::app::Uno::Data::Json::JsonReaderHandle* handle, int index);
::app::Uno::Data::Json::JsonReaderHandle* JsonReaderImpl__GetItemByKey(::uStatic* __this, ::app::Uno::Data::Json::JsonReaderHandle* handle, ::uString* key);
::uString* JsonReaderImpl__GetJsonDataType(::uStatic* __this, ::app::Uno::Data::Json::JsonReaderHandle* handle);
::uArray* JsonReaderImpl__GetKeys(::uStatic* __this, ::app::Uno::Data::Json::JsonReaderHandle* handle);
bool JsonReaderImpl__GetValueAsBool(::uStatic* __this, ::app::Uno::Data::Json::JsonReaderHandle* handle);
bool JsonReaderImpl__GetValueAsBoolOrThrow(::uStatic* __this, ::app::Uno::Data::Json::JsonReaderHandle* handle);
double JsonReaderImpl__GetValueAsDouble(::uStatic* __this, ::app::Uno::Data::Json::JsonReaderHandle* handle);
double JsonReaderImpl__GetValueAsDoubleOrThrow(::uStatic* __this, ::app::Uno::Data::Json::JsonReaderHandle* handle);
float JsonReaderImpl__GetValueAsFloat(::uStatic* __this, ::app::Uno::Data::Json::JsonReaderHandle* handle);
float JsonReaderImpl__GetValueAsFloatOrThrow(::uStatic* __this, ::app::Uno::Data::Json::JsonReaderHandle* handle);
int JsonReaderImpl__GetValueAsInteger(::uStatic* __this, ::app::Uno::Data::Json::JsonReaderHandle* handle);
int JsonReaderImpl__GetValueAsIntegerOrThrow(::uStatic* __this, ::app::Uno::Data::Json::JsonReaderHandle* handle);
::uString* JsonReaderImpl__GetValueAsString(::uStatic* __this, ::app::Uno::Data::Json::JsonReaderHandle* handle);
::uString* JsonReaderImpl__GetValueAsStringOrThrow(::uStatic* __this, ::app::Uno::Data::Json::JsonReaderHandle* handle);
bool JsonReaderImpl__IsEqual(::uStatic* __this, ::app::Uno::Data::Json::JsonReaderHandle* h1, ::app::Uno::Data::Json::JsonReaderHandle* h2);
bool JsonReaderImpl__IsEqual_1(::uStatic* __this, ::app::Uno::Data::Json::JsonReaderHandle* handle, ::uObject* obj);
::app::Uno::Data::Json::JsonReaderHandle* JsonReaderImpl__Parse(::uStatic* __this, ::uString* json);

}}}}


#endif
