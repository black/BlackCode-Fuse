// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_MODELS_INDEX_ARRAY_H__
#define __APP_UNO_CONTENT_MODELS_INDEX_ARRAY_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Buffer; } }

namespace app {
namespace Uno {
namespace Content {
namespace Models {

struct IndexArray;

struct IndexArray__uType : ::uClassType
{
};

IndexArray__uType* IndexArray__typeof();

void IndexArray___ObjInit(IndexArray* __this, ::uArray* data);
void IndexArray___ObjInit_1(IndexArray* __this, ::uArray* data);
void IndexArray___ObjInit_2(IndexArray* __this, ::uArray* data);
void IndexArray___ObjInit_3(IndexArray* __this, int type, ::app::Uno::Buffer* buffer);
::app::Uno::Buffer* IndexArray__get_Buffer(IndexArray* __this);
int IndexArray__get_Count(IndexArray* __this);
int IndexArray__get_Type(IndexArray* __this);
int IndexArray__GetInt(IndexArray* __this, int index);
IndexArray* IndexArray__New_1(::uStatic* __this, ::uArray* data);
IndexArray* IndexArray__New_2(::uStatic* __this, ::uArray* data);
IndexArray* IndexArray__New_3(::uStatic* __this, ::uArray* data);
IndexArray* IndexArray__New_4(::uStatic* __this, int type, ::app::Uno::Buffer* buffer);

struct IndexArray : ::uObject
{
    ::uStrong< ::app::Uno::Buffer*> _buffer;
    int _type;

    void _ObjInit(::uArray* data) { IndexArray___ObjInit(this, data); }
    void _ObjInit_1(::uArray* data) { IndexArray___ObjInit_1(this, data); }
    void _ObjInit_2(::uArray* data) { IndexArray___ObjInit_2(this, data); }
    void _ObjInit_3(int type, ::app::Uno::Buffer* buffer) { IndexArray___ObjInit_3(this, type, buffer); }
    ::app::Uno::Buffer* Buffer() { return IndexArray__get_Buffer(this); }
    int Count() { return IndexArray__get_Count(this); }
    int Type() { return IndexArray__get_Type(this); }
    int GetInt(int index) { return IndexArray__GetInt(this, index); }
};

}}}}


#endif
