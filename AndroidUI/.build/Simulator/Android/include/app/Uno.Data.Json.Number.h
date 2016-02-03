// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Json\0.13.2\Source\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DATA_JSON_NUMBER_H__
#define __APP_UNO_DATA_JSON_NUMBER_H__

#include <app/Uno.Data.Json.AtomicValue__double.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Data {
namespace Json {

struct Number;

struct Number__uType : ::app::Uno::Data::Json::AtomicValue__double__uType
{
};

Number__uType* Number__typeof();

void Number___ObjInit_2(Number* __this, double d);
Number* Number__New_1(::uStatic* __this, double d);

struct Number : ::app::Uno::Data::Json::AtomicValue__double
{
    void _ObjInit_2(double d) { Number___ObjInit_2(this, d); }
};

}}}}


#endif
