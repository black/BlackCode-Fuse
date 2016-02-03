// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Json\0.13.2\Source\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DATA_JSON_NULL_H__
#define __APP_UNO_DATA_JSON_NULL_H__

#include <app/Uno.Data.Json.Value.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Data {
namespace Json {

struct Null;

extern ::uStaticStrong< Null*> Null___singleton;

struct Null__uType : ::app::Uno::Data::Json::Value__uType
{
};

Null__uType* Null__typeof();

void Null___ObjInit_1(Null* __this);
void Null___TypeInit(::uStatic* __this);
Null* Null__get_Singleton(::uStatic* __this);
Null* Null__New_1(::uStatic* __this);

struct Null : ::app::Uno::Data::Json::Value
{
    void _ObjInit_1() { Null___ObjInit_1(this); }
};

}}}}


#endif
