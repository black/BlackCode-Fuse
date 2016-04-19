// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\Layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Layouts.DefinitionBase.h>
namespace g{namespace Fuse{namespace Layouts{struct Column;}}}

namespace g{
namespace Fuse{
namespace Layouts{

// public sealed class Column :464
// {
uType* Column_typeof();
void Column__ctor_1_fn(Column* __this);
void Column__get_ActualWidth_fn(Column* __this, float* __retval);
void Column__set_ActualWidth_fn(Column* __this, float* value);
void Column__CloneDef_fn(Column* __this, Column** __retval);
void Column__New1_fn(Column** __retval);
void Column__get_Width_fn(Column* __this, float* __retval);
void Column__set_Width_fn(Column* __this, float* value);
void Column__get_WidthMetric_fn(Column* __this, int* __retval);
void Column__set_WidthMetric_fn(Column* __this, int* value);

struct Column : ::g::Fuse::Layouts::DefinitionBase
{
    float _actualWidth;
    float _width;
    int _widthMetric;

    void ctor_1();
    float ActualWidth();
    void ActualWidth(float value);
    Column* CloneDef();
    float Width();
    void Width(float value);
    int WidthMetric();
    void WidthMetric(int value);
    static Column* New1();
};
// }

}}} // ::g::Fuse::Layouts
