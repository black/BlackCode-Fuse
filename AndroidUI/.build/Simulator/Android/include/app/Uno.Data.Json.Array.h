// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Json\0.13.2\Source\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DATA_JSON_ARRAY_H__
#define __APP_UNO_DATA_JSON_ARRAY_H__

#include <app/Uno.Data.Json.Value.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_Data_Json_Value; } } }

namespace app {
namespace Uno {
namespace Data {
namespace Json {

struct Array;

struct Array__uType : ::app::Uno::Data::Json::Value__uType
{
};

Array__uType* Array__typeof();

void Array___ObjInit_1(Array* __this);
void Array__Add(Array* __this, ::app::Uno::Data::Json::Value* v);
int Array__get_Count(Array* __this);
::app::Uno::Data::Json::Value* Array__get_Item(Array* __this, int index);
Array* Array__New_1(::uStatic* __this);

struct Array : ::app::Uno::Data::Json::Value
{
    ::uStrong< ::app::Uno::Collections::List__Uno_Data_Json_Value*> _values;

    void _ObjInit_1() { Array___ObjInit_1(this); }
    void Add(::app::Uno::Data::Json::Value* v) { Array__Add(this, v); }
    int Count() { return Array__get_Count(this); }
    ::app::Uno::Data::Json::Value* Item(int index) { return Array__get_Item(this, index); }
};

}}}}


#endif
