// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Json\0.13.2\Source\Implementation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DATA_JSON_JSON_READER_HANDLE_H__
#define __APP_UNO_DATA_JSON_JSON_READER_HANDLE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Data { namespace Json { struct Value; } } } }

namespace app {
namespace Uno {
namespace Data {
namespace Json {

struct JsonReaderHandle;

struct JsonReaderHandle__uType : ::uClassType
{
};

JsonReaderHandle__uType* JsonReaderHandle__typeof();

void JsonReaderHandle___ObjInit(JsonReaderHandle* __this, ::app::Uno::Data::Json::Value* handle);
JsonReaderHandle* JsonReaderHandle__New_1(::uStatic* __this, ::app::Uno::Data::Json::Value* handle);

struct JsonReaderHandle : ::uObject
{
    ::uStrong< ::app::Uno::Data::Json::Value*> _handle;

    void _ObjInit(::app::Uno::Data::Json::Value* handle) { JsonReaderHandle___ObjInit(this, handle); }
};

}}}}


#endif
