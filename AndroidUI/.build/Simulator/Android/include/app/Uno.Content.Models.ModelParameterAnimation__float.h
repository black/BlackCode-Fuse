// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_MODELS_MODEL_PARAMETER_ANIMATION__FLOAT_H__
#define __APP_UNO_CONTENT_MODELS_MODEL_PARAMETER_ANIMATION__FLOAT_H__

#include <app/Uno.Content.Models.ModelParameter__float.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Content { namespace Splines { struct Spline__float; } } } }

namespace app {
namespace Uno {
namespace Content {
namespace Models {

struct ModelParameterAnimation__float;

struct ModelParameterAnimation__float__uType : ::app::Uno::Content::Models::ModelParameter__float__uType
{
};

ModelParameterAnimation__float__uType* ModelParameterAnimation__float__typeof();

void ModelParameterAnimation__float___ObjInit_2(ModelParameterAnimation__float* __this, int valueType, ::app::Uno::Content::Splines::Spline__float* spline);
double ModelParameterAnimation__float__get_EndTime(ModelParameterAnimation__float* __this);
bool ModelParameterAnimation__float__get_IsAnimated(ModelParameterAnimation__float* __this);
int ModelParameterAnimation__float__get_ParameterType(ModelParameterAnimation__float* __this);
double ModelParameterAnimation__float__get_StartTime(ModelParameterAnimation__float* __this);
ModelParameterAnimation__float* ModelParameterAnimation__float__New_2(::uStatic* __this, int valueType, ::app::Uno::Content::Splines::Spline__float* spline);
void ModelParameterAnimation__float__Update(ModelParameterAnimation__float* __this, double time);

struct ModelParameterAnimation__float : ::app::Uno::Content::Models::ModelParameter__float
{
    ::uStrong< ::app::Uno::Content::Splines::Spline__float*> _spline;

    void _ObjInit_2(int valueType, ::app::Uno::Content::Splines::Spline__float* spline) { ModelParameterAnimation__float___ObjInit_2(this, valueType, spline); }
};

}}}}


#endif
