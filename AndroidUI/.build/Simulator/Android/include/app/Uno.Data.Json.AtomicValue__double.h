// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Json\0.13.2\Source\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DATA_JSON_ATOMIC_VALUE__DOUBLE_H__
#define __APP_UNO_DATA_JSON_ATOMIC_VALUE__DOUBLE_H__

#include <app/Uno.Data.Json.Value.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Data {
namespace Json {

struct AtomicValue__double;

struct AtomicValue__double__uType : ::app::Uno::Data::Json::Value__uType
{
};

AtomicValue__double__uType* AtomicValue__double__typeof();

void AtomicValue__double___ObjInit_1(AtomicValue__double* __this, double val);
double AtomicValue__double__get_Value(AtomicValue__double* __this);
::uString* AtomicValue__double__ToString(AtomicValue__double* __this);

struct AtomicValue__double : ::app::Uno::Data::Json::Value
{
    double _val;

    void _ObjInit_1(double val) { AtomicValue__double___ObjInit_1(this, val); }
    double Value() { return AtomicValue__double__get_Value(this); }
};

}}}}


#endif
