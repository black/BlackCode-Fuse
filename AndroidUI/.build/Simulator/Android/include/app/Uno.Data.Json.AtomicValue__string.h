// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Json\0.13.2\Source\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DATA_JSON_ATOMIC_VALUE__STRING_H__
#define __APP_UNO_DATA_JSON_ATOMIC_VALUE__STRING_H__

#include <app/Uno.Data.Json.Value.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Data {
namespace Json {

struct AtomicValue__string;

struct AtomicValue__string__uType : ::app::Uno::Data::Json::Value__uType
{
};

AtomicValue__string__uType* AtomicValue__string__typeof();

void AtomicValue__string___ObjInit_1(AtomicValue__string* __this, ::uString* val);
::uString* AtomicValue__string__get_Value(AtomicValue__string* __this);
::uString* AtomicValue__string__ToString(AtomicValue__string* __this);

struct AtomicValue__string : ::app::Uno::Data::Json::Value
{
    ::uStrong< ::uString*> _val;

    void _ObjInit_1(::uString* val) { AtomicValue__string___ObjInit_1(this, val); }
    ::uString* Value() { return AtomicValue__string__get_Value(this); }
};

}}}}


#endif
