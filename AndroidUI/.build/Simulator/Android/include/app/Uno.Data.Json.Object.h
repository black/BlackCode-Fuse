// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Json\0.13.2\Source\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DATA_JSON_OBJECT_H__
#define __APP_UNO_DATA_JSON_OBJECT_H__

#include <app/Uno.Data.Json.Value.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Uno_Data_Json_Value; } } }

namespace app {
namespace Uno {
namespace Data {
namespace Json {

struct Object;

struct Object__uType : ::app::Uno::Data::Json::Value__uType
{
};

Object__uType* Object__typeof();

void Object___ObjInit_1(Object* __this);
void Object__Add(Object* __this, ::uString* key, ::app::Uno::Data::Json::Value* val);
bool Object__ContainsKey(Object* __this, ::uString* key);
int Object__get_Count(Object* __this);
::app::Uno::Data::Json::Value* Object__get_Item(Object* __this, ::uString* key);
::uArray* Object__get_Keys(Object* __this);
Object* Object__New_1(::uStatic* __this);

struct Object : ::app::Uno::Data::Json::Value
{
    ::uStrong< ::app::Uno::Collections::Dictionary__string__Uno_Data_Json_Value*> _values;

    void _ObjInit_1() { Object___ObjInit_1(this); }
    void Add(::uString* key, ::app::Uno::Data::Json::Value* val) { Object__Add(this, key, val); }
    bool ContainsKey(::uString* key) { return Object__ContainsKey(this, key); }
    int Count() { return Object__get_Count(this); }
    ::app::Uno::Data::Json::Value* Item(::uString* key) { return Object__get_Item(this, key); }
    ::uArray* Keys() { return Object__get_Keys(this); }
};

}}}}


#endif
