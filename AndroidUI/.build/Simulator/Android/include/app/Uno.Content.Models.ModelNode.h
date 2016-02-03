// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_MODELS_MODEL_NODE_H__
#define __APP_UNO_CONTENT_MODELS_MODEL_NODE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Uno_Content_Models_ModelParameter; } } }
namespace app { namespace Uno { namespace Collections { struct List__Uno_Content_Models_ModelDrawable; } } }
namespace app { namespace Uno { namespace Collections { struct List__Uno_Content_Models_ModelNode; } } }
namespace app { namespace Uno { namespace Collections { struct List__Uno_Content_Models_ModelParameter_float4x4_; } } }
namespace app { namespace Uno { namespace Collections { struct List__Uno_Content_Models_ModelSkin; } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelParameter; } } } }

namespace app {
namespace Uno {
namespace Content {
namespace Models {

struct ModelNode;

struct ModelNode__uType : ::uClassType
{
};

ModelNode__uType* ModelNode__typeof();

void ModelNode___ObjInit(ModelNode* __this, ::uString* name);
void ModelNode___ObjInit_1(ModelNode* __this, ::uString* name, ::app::Uno::Collections::List__Uno_Content_Models_ModelParameter_float4x4_* transforms, ::app::Uno::Collections::List__Uno_Content_Models_ModelDrawable* drawables, ::app::Uno::Collections::List__Uno_Content_Models_ModelSkin* skins, ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_ModelParameter* parameters, ::app::Uno::Collections::List__Uno_Content_Models_ModelNode* children);
::uObject* ModelNode__get_Children(ModelNode* __this);
::uObject* ModelNode__get_Drawables(ModelNode* __this);
::uString* ModelNode__get_Name(ModelNode* __this);
::uObject* ModelNode__get_Parameters(ModelNode* __this);
::uObject* ModelNode__get_Skins(ModelNode* __this);
::uObject* ModelNode__get_Transforms(ModelNode* __this);
::app::Uno::Content::Models::ModelParameter* ModelNode__GetParameter(ModelNode* __this, ::uString* parameterName);
ModelNode* ModelNode__New_1(::uStatic* __this, ::uString* name);
ModelNode* ModelNode__New_2(::uStatic* __this, ::uString* name, ::app::Uno::Collections::List__Uno_Content_Models_ModelParameter_float4x4_* transforms, ::app::Uno::Collections::List__Uno_Content_Models_ModelDrawable* drawables, ::app::Uno::Collections::List__Uno_Content_Models_ModelSkin* skins, ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_ModelParameter* parameters, ::app::Uno::Collections::List__Uno_Content_Models_ModelNode* children);

struct ModelNode : ::uObject
{
    ::uStrong< ::uString*> _name;
    ::uStrong< ::app::Uno::Collections::List__Uno_Content_Models_ModelParameter_float4x4_*> _transforms;
    ::uStrong< ::app::Uno::Collections::List__Uno_Content_Models_ModelDrawable*> _drawables;
    ::uStrong< ::app::Uno::Collections::List__Uno_Content_Models_ModelSkin*> _skins;
    ::uStrong< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_ModelParameter*> _parameters;
    ::uStrong< ::app::Uno::Collections::List__Uno_Content_Models_ModelNode*> _children;

    void _ObjInit(::uString* name) { ModelNode___ObjInit(this, name); }
    void _ObjInit_1(::uString* name, ::app::Uno::Collections::List__Uno_Content_Models_ModelParameter_float4x4_* transforms, ::app::Uno::Collections::List__Uno_Content_Models_ModelDrawable* drawables, ::app::Uno::Collections::List__Uno_Content_Models_ModelSkin* skins, ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_ModelParameter* parameters, ::app::Uno::Collections::List__Uno_Content_Models_ModelNode* children) { ModelNode___ObjInit_1(this, name, transforms, drawables, skins, parameters, children); }
    ::uObject* Children() { return ModelNode__get_Children(this); }
    ::uObject* Drawables() { return ModelNode__get_Drawables(this); }
    ::uString* Name() { return ModelNode__get_Name(this); }
    ::uObject* Parameters() { return ModelNode__get_Parameters(this); }
    ::uObject* Skins() { return ModelNode__get_Skins(this); }
    ::uObject* Transforms() { return ModelNode__get_Transforms(this); }
    ::app::Uno::Content::Models::ModelParameter* GetParameter(::uString* parameterName) { return ModelNode__GetParameter(this, parameterName); }
};

}}}}


#endif
