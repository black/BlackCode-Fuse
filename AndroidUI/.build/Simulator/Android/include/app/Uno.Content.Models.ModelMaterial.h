// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_MODELS_MODEL_MATERIAL_H__
#define __APP_UNO_CONTENT_MODELS_MODEL_MATERIAL_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Uno_Content_Models_ModelParameter; } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelParameter; } } } }

namespace app {
namespace Uno {
namespace Content {
namespace Models {

struct ModelMaterial;

struct ModelMaterial__uType : ::uClassType
{
};

ModelMaterial__uType* ModelMaterial__typeof();

void ModelMaterial___ObjInit(ModelMaterial* __this, ::uString* name, ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_ModelParameter* parameters);
::uString* ModelMaterial__get_Name(ModelMaterial* __this);
::uObject* ModelMaterial__get_Parameters(ModelMaterial* __this);
::app::Uno::Content::Models::ModelParameter* ModelMaterial__GetParameter(ModelMaterial* __this, ::uString* parameterName);
ModelMaterial* ModelMaterial__New_1(::uStatic* __this, ::uString* name, ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_ModelParameter* parameters);

struct ModelMaterial : ::uObject
{
    ::uStrong< ::uString*> _name;
    ::uStrong< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_ModelParameter*> _parameters;

    void _ObjInit(::uString* name, ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_ModelParameter* parameters) { ModelMaterial___ObjInit(this, name, parameters); }
    ::uString* Name() { return ModelMaterial__get_Name(this); }
    ::uObject* Parameters() { return ModelMaterial__get_Parameters(this); }
    ::app::Uno::Content::Models::ModelParameter* GetParameter(::uString* parameterName) { return ModelMaterial__GetParameter(this, parameterName); }
};

}}}}


#endif
