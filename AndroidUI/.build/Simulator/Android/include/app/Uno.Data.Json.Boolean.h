// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Json\0.13.2\Source\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DATA_JSON_BOOLEAN_H__
#define __APP_UNO_DATA_JSON_BOOLEAN_H__

#include <app/Uno.Data.Json.AtomicValue__bool.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Data {
namespace Json {

struct Boolean;

extern ::uStaticStrong< Boolean*> Boolean___false;
extern ::uStaticStrong< Boolean*> Boolean___true;

struct Boolean__uType : ::app::Uno::Data::Json::AtomicValue__bool__uType
{
};

Boolean__uType* Boolean__typeof();

void Boolean___ObjInit_2(Boolean* __this, bool b);
void Boolean___TypeInit(::uStatic* __this);
Boolean* Boolean__get_False(::uStatic* __this);
Boolean* Boolean__get_True(::uStatic* __this);
Boolean* Boolean__New_1(::uStatic* __this, bool b);

struct Boolean : ::app::Uno::Data::Json::AtomicValue__bool
{
    void _ObjInit_2(bool b) { Boolean___ObjInit_2(this, b); }
};

}}}}


#endif
