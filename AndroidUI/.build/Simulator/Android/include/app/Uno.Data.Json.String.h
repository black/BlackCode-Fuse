// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Json\0.13.2\Source\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DATA_JSON_STRING_H__
#define __APP_UNO_DATA_JSON_STRING_H__

#include <app/Uno.Data.Json.AtomicValue__string.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Data {
namespace Json {

struct String;

struct String__uType : ::app::Uno::Data::Json::AtomicValue__string__uType
{
};

String__uType* String__typeof();

void String___ObjInit_2(String* __this, ::uString* d);
String* String__New_1(::uStatic* __this, ::uString* d);

struct String : ::app::Uno::Data::Json::AtomicValue__string
{
    void _ObjInit_2(::uString* d) { String___ObjInit_2(this, d); }
};

}}}}


#endif
