// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_LAYOUTS_ROW_H__
#define __APP_FUSE_LAYOUTS_ROW_H__

#include <app/Fuse.Layouts.DefinitionBase.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Layouts {

struct Row;

struct Row__uType : ::app::Fuse::Layouts::DefinitionBase__uType
{
};

Row__uType* Row__typeof();

void Row___ObjInit_1(Row* __this);
void Row___ObjInit_2(Row* __this, float height, int metric);
Row* Row__CloneDef(Row* __this);
float Row__get_ActualHeight(Row* __this);
float Row__get_Height(Row* __this);
int Row__get_HeightMetric(Row* __this);
Row* Row__New_1(::uStatic* __this);
Row* Row__New_2(::uStatic* __this, float height, int metric);
Row* Row__Parse(::uStatic* __this, ::uString* data);
void Row__Parse_1(::uStatic* __this, ::uString* data, ::uObject* output);
::uString* Row__Serialize(Row* __this);
::uString* Row__Serialize_1(::uStatic* __this, ::uObject* rows);
void Row__set_ActualHeight(Row* __this, float value);
void Row__set_Height(Row* __this, float value);
void Row__set_HeightMetric(Row* __this, int value);

struct Row : ::app::Fuse::Layouts::DefinitionBase
{
    int _heightMetric;
    float _height;
    float _actualHeight;

    void _ObjInit_1() { Row___ObjInit_1(this); }
    void _ObjInit_2(float height, int metric) { Row___ObjInit_2(this, height, metric); }
    Row* CloneDef() { return Row__CloneDef(this); }
    float ActualHeight() { return Row__get_ActualHeight(this); }
    float Height() { return Row__get_Height(this); }
    int HeightMetric() { return Row__get_HeightMetric(this); }
    ::uString* Serialize() { return Row__Serialize(this); }
    void ActualHeight(float value) { Row__set_ActualHeight(this, value); }
    void Height(float value) { Row__set_Height(this, value); }
    void HeightMetric(int value) { Row__set_HeightMetric(this, value); }
};

}}}


#endif
