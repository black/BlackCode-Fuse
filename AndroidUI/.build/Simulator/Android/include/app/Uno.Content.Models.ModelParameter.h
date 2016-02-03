// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_MODELS_MODEL_PARAMETER_H__
#define __APP_UNO_CONTENT_MODELS_MODEL_PARAMETER_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Content {
namespace Models {

struct ModelParameter;

struct ModelParameter__uType : ::uClassType
{
    double(*__fp_get_EndTime)(ModelParameter*);
    bool(*__fp_get_IsAnimated)(ModelParameter*);
    int(*__fp_get_ListItemType)(ModelParameter*);
    int(*__fp_get_ListLength)(ModelParameter*);
    int(*__fp_get_ParameterType)(ModelParameter*);
    double(*__fp_get_StartTime)(ModelParameter*);
    int(*__fp_get_ValueType)(ModelParameter*);
    ModelParameter*(*__fp_GetListItem)(ModelParameter*, int);
    void(*__fp_Update)(ModelParameter*, double);
};

ModelParameter__uType* ModelParameter__typeof();

void ModelParameter___ObjInit(ModelParameter* __this);
double ModelParameter__get_EndTime(ModelParameter* __this);
bool ModelParameter__get_IsAnimated(ModelParameter* __this);
int ModelParameter__get_ListItemType(ModelParameter* __this);
int ModelParameter__get_ListLength(ModelParameter* __this);
double ModelParameter__get_StartTime(ModelParameter* __this);
ModelParameter* ModelParameter__GetListItem(ModelParameter* __this, int index);
void ModelParameter__Update(ModelParameter* __this, double time);

struct ModelParameter : ::uObject
{
    void _ObjInit() { ModelParameter___ObjInit(this); }
    double EndTime() { return (((ModelParameter__uType*)this->__obj_type)->__fp_get_EndTime)(this); }
    bool IsAnimated() { return (((ModelParameter__uType*)this->__obj_type)->__fp_get_IsAnimated)(this); }
    int ListItemType() { return (((ModelParameter__uType*)this->__obj_type)->__fp_get_ListItemType)(this); }
    int ListLength() { return (((ModelParameter__uType*)this->__obj_type)->__fp_get_ListLength)(this); }
    int ParameterType() { return (((ModelParameter__uType*)this->__obj_type)->__fp_get_ParameterType)(this); }
    double StartTime() { return (((ModelParameter__uType*)this->__obj_type)->__fp_get_StartTime)(this); }
    int ValueType() { return (((ModelParameter__uType*)this->__obj_type)->__fp_get_ValueType)(this); }
    ModelParameter* GetListItem(int index) { return (((ModelParameter__uType*)this->__obj_type)->__fp_GetListItem)(this, index); }
    void Update(double time) { (((ModelParameter__uType*)this->__obj_type)->__fp_Update)(this, time); }
};

}}}}


#endif
