// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_MODELS_MODEL_PARAMETER_ANIMATION__FLOAT2_H__
#define __APP_UNO_CONTENT_MODELS_MODEL_PARAMETER_ANIMATION__FLOAT2_H__

#include <app/Uno.Content.Models.ModelParameter__float2.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Content { namespace Splines { struct Spline__float2; } } } }

namespace app {
namespace Uno {
namespace Content {
namespace Models {

struct ModelParameterAnimation__float2;

struct ModelParameterAnimation__float2__uType : ::app::Uno::Content::Models::ModelParameter__float2__uType
{
};

ModelParameterAnimation__float2__uType* ModelParameterAnimation__float2__typeof();

void ModelParameterAnimation__float2___ObjInit_2(ModelParameterAnimation__float2* __this, int valueType, ::app::Uno::Content::Splines::Spline__float2* spline);
double ModelParameterAnimation__float2__get_EndTime(ModelParameterAnimation__float2* __this);
bool ModelParameterAnimation__float2__get_IsAnimated(ModelParameterAnimation__float2* __this);
int ModelParameterAnimation__float2__get_ParameterType(ModelParameterAnimation__float2* __this);
double ModelParameterAnimation__float2__get_StartTime(ModelParameterAnimation__float2* __this);
ModelParameterAnimation__float2* ModelParameterAnimation__float2__New_2(::uStatic* __this, int valueType, ::app::Uno::Content::Splines::Spline__float2* spline);
void ModelParameterAnimation__float2__Update(ModelParameterAnimation__float2* __this, double time);

struct ModelParameterAnimation__float2 : ::app::Uno::Content::Models::ModelParameter__float2
{
    ::uStrong< ::app::Uno::Content::Splines::Spline__float2*> _spline;

    void _ObjInit_2(int valueType, ::app::Uno::Content::Splines::Spline__float2* spline) { ModelParameterAnimation__float2___ObjInit_2(this, valueType, spline); }
};

}}}}


#endif
