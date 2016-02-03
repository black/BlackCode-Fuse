// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Json\0.13.2\Source\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DATA_JSON_ATOMIC_VALUE__BOOL_H__
#define __APP_UNO_DATA_JSON_ATOMIC_VALUE__BOOL_H__

#include <app/Uno.Data.Json.Value.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Data {
namespace Json {

struct AtomicValue__bool;

struct AtomicValue__bool__uType : ::app::Uno::Data::Json::Value__uType
{
};

AtomicValue__bool__uType* AtomicValue__bool__typeof();

void AtomicValue__bool___ObjInit_1(AtomicValue__bool* __this, bool val);
bool AtomicValue__bool__get_Value(AtomicValue__bool* __this);
::uString* AtomicValue__bool__ToString(AtomicValue__bool* __this);

struct AtomicValue__bool : ::app::Uno::Data::Json::Value
{
    bool _val;

    void _ObjInit_1(bool val) { AtomicValue__bool___ObjInit_1(this, val); }
    bool Value() { return AtomicValue__bool__get_Value(this); }
};

}}}}


#endif
