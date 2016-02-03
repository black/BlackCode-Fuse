// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_LAYOUTS_COLUMN_H__
#define __APP_FUSE_LAYOUTS_COLUMN_H__

#include <app/Fuse.Layouts.DefinitionBase.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Layouts {

struct Column;

struct Column__uType : ::app::Fuse::Layouts::DefinitionBase__uType
{
};

Column__uType* Column__typeof();

void Column___ObjInit_1(Column* __this);
void Column___ObjInit_2(Column* __this, float width, int metric);
Column* Column__CloneDef(Column* __this);
float Column__get_ActualWidth(Column* __this);
float Column__get_Width(Column* __this);
int Column__get_WidthMetric(Column* __this);
Column* Column__New_1(::uStatic* __this);
Column* Column__New_2(::uStatic* __this, float width, int metric);
Column* Column__Parse(::uStatic* __this, ::uString* data);
void Column__Parse_1(::uStatic* __this, ::uString* data, ::uObject* output);
::uString* Column__Serialize(Column* __this);
::uString* Column__Serialize_1(::uStatic* __this, ::uObject* columns);
void Column__set_ActualWidth(Column* __this, float value);
void Column__set_Width(Column* __this, float value);
void Column__set_WidthMetric(Column* __this, int value);

struct Column : ::app::Fuse::Layouts::DefinitionBase
{
    int _widthMetric;
    float _width;
    float _actualWidth;

    void _ObjInit_1() { Column___ObjInit_1(this); }
    void _ObjInit_2(float width, int metric) { Column___ObjInit_2(this, width, metric); }
    Column* CloneDef() { return Column__CloneDef(this); }
    float ActualWidth() { return Column__get_ActualWidth(this); }
    float Width() { return Column__get_Width(this); }
    int WidthMetric() { return Column__get_WidthMetric(this); }
    ::uString* Serialize() { return Column__Serialize(this); }
    void ActualWidth(float value) { Column__set_ActualWidth(this, value); }
    void Width(float value) { Column__set_Width(this, value); }
    void WidthMetric(int value) { Column__set_WidthMetric(this, value); }
};

}}}


#endif
