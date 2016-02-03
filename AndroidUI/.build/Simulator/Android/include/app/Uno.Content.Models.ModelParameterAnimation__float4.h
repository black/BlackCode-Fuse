// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_MODELS_MODEL_PARAMETER_ANIMATION__FLOAT4_H__
#define __APP_UNO_CONTENT_MODELS_MODEL_PARAMETER_ANIMATION__FLOAT4_H__

#include <app/Uno.Content.Models.ModelParameter__float4.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Content { namespace Splines { struct Spline__float4; } } } }

namespace app {
namespace Uno {
namespace Content {
namespace Models {

struct ModelParameterAnimation__float4;

struct ModelParameterAnimation__float4__uType : ::app::Uno::Content::Models::ModelParameter__float4__uType
{
};

ModelParameterAnimation__float4__uType* ModelParameterAnimation__float4__typeof();

void ModelParameterAnimation__float4___ObjInit_2(ModelParameterAnimation__float4* __this, int valueType, ::app::Uno::Content::Splines::Spline__float4* spline);
double ModelParameterAnimation__float4__get_EndTime(ModelParameterAnimation__float4* __this);
bool ModelParameterAnimation__float4__get_IsAnimated(ModelParameterAnimation__float4* __this);
int ModelParameterAnimation__float4__get_ParameterType(ModelParameterAnimation__float4* __this);
double ModelParameterAnimation__float4__get_StartTime(ModelParameterAnimation__float4* __this);
ModelParameterAnimation__float4* ModelParameterAnimation__float4__New_2(::uStatic* __this, int valueType, ::app::Uno::Content::Splines::Spline__float4* spline);
void ModelParameterAnimation__float4__Update(ModelParameterAnimation__float4* __this, double time);

struct ModelParameterAnimation__float4 : ::app::Uno::Content::Models::ModelParameter__float4
{
    ::uStrong< ::app::Uno::Content::Splines::Spline__float4*> _spline;

    void _ObjInit_2(int valueType, ::app::Uno::Content::Splines::Spline__float4* spline) { ModelParameterAnimation__float4___ObjInit_2(this, valueType, spline); }
};

}}}}


#endif
