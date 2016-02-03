// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Json\0.13.2\Source\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DATA_JSON_JSON_EXCEPTION_H__
#define __APP_UNO_DATA_JSON_JSON_EXCEPTION_H__

#include <app/Uno.Exception.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Data {
namespace Json {

struct JsonException;

struct JsonException__uType : ::app::Uno::Exception__uType
{
};

JsonException__uType* JsonException__typeof();

void JsonException___ObjInit_2(JsonException* __this, ::uString* message);
JsonException* JsonException__New_3(::uStatic* __this, ::uString* message);

struct JsonException : ::app::Uno::Exception
{
    void _ObjInit_2(::uString* message) { JsonException___ObjInit_2(this, message); }
};

}}}}


#endif
