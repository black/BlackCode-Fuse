// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_MODELS_SKIN_DRAWABLE_H__
#define __APP_UNO_CONTENT_MODELS_SKIN_DRAWABLE_H__

#include <app/Uno.Content.Models.ModelDrawable.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_Content_Models_VertexInfluence; } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelMaterial; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct ModelMesh; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct VertexInfluence; } } } }

namespace app {
namespace Uno {
namespace Content {
namespace Models {

struct SkinDrawable;

struct SkinDrawable__uType : ::app::Uno::Content::Models::ModelDrawable__uType
{
};

SkinDrawable__uType* SkinDrawable__typeof();

void SkinDrawable___ObjInit_1(SkinDrawable* __this, ::app::Uno::Content::Models::ModelMesh* mesh, ::app::Uno::Content::Models::ModelMaterial* material, ::uArray* influences);
::uObject* SkinDrawable__get_VertexInfluences(SkinDrawable* __this);
SkinDrawable* SkinDrawable__New_2(::uStatic* __this, ::app::Uno::Content::Models::ModelMesh* mesh, ::app::Uno::Content::Models::ModelMaterial* material, ::uArray* influences);

struct SkinDrawable : ::app::Uno::Content::Models::ModelDrawable
{
    ::uStrong< ::app::Uno::Collections::List__Uno_Content_Models_VertexInfluence*> _vertexInfluences;

    void _ObjInit_1(::app::Uno::Content::Models::ModelMesh* mesh, ::app::Uno::Content::Models::ModelMaterial* material, ::uArray* influences) { SkinDrawable___ObjInit_1(this, mesh, material, influences); }
    ::uObject* VertexInfluences() { return SkinDrawable__get_VertexInfluences(this); }
};

}}}}


#endif
