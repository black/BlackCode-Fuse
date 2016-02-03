// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_MODELS_MODEL_DRAWABLE_H__
#define __APP_UNO_CONTENT_MODELS_MODEL_DRAWABLE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelMaterial; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelMesh; } } } }

namespace app {
namespace Uno {
namespace Content {
namespace Models {

struct ModelDrawable;

struct ModelDrawable__uType : ::uClassType
{
};

ModelDrawable__uType* ModelDrawable__typeof();

void ModelDrawable___ObjInit(ModelDrawable* __this, ::app::Uno::Content::Models::ModelMesh* mesh, ::app::Uno::Content::Models::ModelMaterial* optionalMaterial);
::app::Uno::Content::Models::ModelMesh* ModelDrawable__get_Mesh(ModelDrawable* __this);
::app::Uno::Content::Models::ModelMaterial* ModelDrawable__get_OptionalMaterial(ModelDrawable* __this);
ModelDrawable* ModelDrawable__New_1(::uStatic* __this, ::app::Uno::Content::Models::ModelMesh* mesh, ::app::Uno::Content::Models::ModelMaterial* optionalMaterial);

struct ModelDrawable : ::uObject
{
    ::uStrong< ::app::Uno::Content::Models::ModelMesh*> _mesh;
    ::uStrong< ::app::Uno::Content::Models::ModelMaterial*> _optionalMaterial;

    void _ObjInit(::app::Uno::Content::Models::ModelMesh* mesh, ::app::Uno::Content::Models::ModelMaterial* optionalMaterial) { ModelDrawable___ObjInit(this, mesh, optionalMaterial); }
    ::app::Uno::Content::Models::ModelMesh* Mesh() { return ModelDrawable__get_Mesh(this); }
    ::app::Uno::Content::Models::ModelMaterial* OptionalMaterial() { return ModelDrawable__get_OptionalMaterial(this); }
};

}}}}


#endif
