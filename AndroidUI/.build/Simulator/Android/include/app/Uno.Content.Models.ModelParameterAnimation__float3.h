// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_MODELS_MODEL_PARAMETER_ANIMATION__FLOAT3_H__
#define __APP_UNO_CONTENT_MODELS_MODEL_PARAMETER_ANIMATION__FLOAT3_H__

#include <app/Uno.Content.Models.ModelParameter__float3.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Content { namespace Splines { struct Spline__float3; } } } }

namespace app {
namespace Uno {
namespace Content {
namespace Models {

struct ModelParameterAnimation__float3;

struct ModelParameterAnimation__float3__uType : ::app::Uno::Content::Models::ModelParameter__float3__uType
{
};

ModelParameterAnimation__float3__uType* ModelParameterAnimation__float3__typeof();

void ModelParameterAnimation__float3___ObjInit_2(ModelParameterAnimation__float3* __this, int valueType, ::app::Uno::Content::Splines::Spline__float3* spline);
double ModelParameterAnimation__float3__get_EndTime(ModelParameterAnimation__float3* __this);
bool ModelParameterAnimation__float3__get_IsAnimated(ModelParameterAnimation__float3* __this);
int ModelParameterAnimation__float3__get_ParameterType(ModelParameterAnimation__float3* __this);
double ModelParameterAnimation__float3__get_StartTime(ModelParameterAnimation__float3* __this);
ModelParameterAnimation__float3* ModelParameterAnimation__float3__New_2(::uStatic* __this, int valueType, ::app::Uno::Content::Splines::Spline__float3* spline);
void ModelParameterAnimation__float3__Update(ModelParameterAnimation__float3* __this, double time);

struct ModelParameterAnimation__float3 : ::app::Uno::Content::Models::ModelParameter__float3
{
    ::uStrong< ::app::Uno::Content::Splines::Spline__float3*> _spline;

    void _ObjInit_2(int valueType, ::app::Uno::Content::Splines::Spline__float3* spline) { ModelParameterAnimation__float3___ObjInit_2(this, valueType, spline); }
};

}}}}


#endif
