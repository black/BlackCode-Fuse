// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_CONTENT_MODELS_MODEL_MESH_H__
#define __APP_UNO_CONTENT_MODELS_MODEL_MESH_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Uno_Content_Models_VertexAttributeArray; } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct IndexArray; } } } }
namespace app { namespace Uno { namespace Content { namespace Models { struct VertexAttributeArray; } } } }

namespace app {
namespace Uno {
namespace Content {
namespace Models {

struct ModelMesh;

struct ModelMesh__uType : ::uClassType
{
};

ModelMesh__uType* ModelMesh__typeof();

void ModelMesh___ObjInit(ModelMesh* __this, ::uString* name, int type, ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray* vertexAttributes, ::app::Uno::Content::Models::IndexArray* indices);
::app::Uno::Content::Models::VertexAttributeArray* ModelMesh__get_Binormals(ModelMesh* __this);
::app::Uno::Content::Models::VertexAttributeArray* ModelMesh__get_BoneIndices(ModelMesh* __this);
::app::Uno::Content::Models::VertexAttributeArray* ModelMesh__get_BoneWeights(ModelMesh* __this);
int ModelMesh__get_IndexCount(ModelMesh* __this);
::app::Uno::Content::Models::IndexArray* ModelMesh__get_Indices(ModelMesh* __this);
::uString* ModelMesh__get_Name(ModelMesh* __this);
::app::Uno::Content::Models::VertexAttributeArray* ModelMesh__get_Normals(ModelMesh* __this);
::app::Uno::Content::Models::VertexAttributeArray* ModelMesh__get_Positions(ModelMesh* __this);
int ModelMesh__get_PrimitiveType(ModelMesh* __this);
::app::Uno::Content::Models::VertexAttributeArray* ModelMesh__get_Tangents(ModelMesh* __this);
::app::Uno::Content::Models::VertexAttributeArray* ModelMesh__get_TexCoords(ModelMesh* __this);
::uObject* ModelMesh__get_VertexAttributes(ModelMesh* __this);
int ModelMesh__get_VertexCount(ModelMesh* __this);
::app::Uno::Content::Models::VertexAttributeArray* ModelMesh__GetVertexAttribute(ModelMesh* __this, ::uString* attributeName);
ModelMesh* ModelMesh__New_1(::uStatic* __this, ::uString* name, int type, ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray* vertexAttributes, ::app::Uno::Content::Models::IndexArray* indices);
::app::Uno::Content::Models::VertexAttributeArray* ModelMesh__TryGetVertexAttribute(ModelMesh* __this, ::uString* name);

struct ModelMesh : ::uObject
{
    ::uStrong< ::uString*> _name;
    int _primitiveType;
    ::uStrong< ::app::Uno::Content::Models::IndexArray*> _indices;
    ::uStrong< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray*> _vertexAttributes;

    void _ObjInit(::uString* name, int type, ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray* vertexAttributes, ::app::Uno::Content::Models::IndexArray* indices) { ModelMesh___ObjInit(this, name, type, vertexAttributes, indices); }
    ::app::Uno::Content::Models::VertexAttributeArray* Binormals() { return ModelMesh__get_Binormals(this); }
    ::app::Uno::Content::Models::VertexAttributeArray* BoneIndices() { return ModelMesh__get_BoneIndices(this); }
    ::app::Uno::Content::Models::VertexAttributeArray* BoneWeights() { return ModelMesh__get_BoneWeights(this); }
    int IndexCount() { return ModelMesh__get_IndexCount(this); }
    ::app::Uno::Content::Models::IndexArray* Indices() { return ModelMesh__get_Indices(this); }
    ::uString* Name() { return ModelMesh__get_Name(this); }
    ::app::Uno::Content::Models::VertexAttributeArray* Normals() { return ModelMesh__get_Normals(this); }
    ::app::Uno::Content::Models::VertexAttributeArray* Positions() { return ModelMesh__get_Positions(this); }
    int PrimitiveType() { return ModelMesh__get_PrimitiveType(this); }
    ::app::Uno::Content::Models::VertexAttributeArray* Tangents() { return ModelMesh__get_Tangents(this); }
    ::app::Uno::Content::Models::VertexAttributeArray* TexCoords() { return ModelMesh__get_TexCoords(this); }
    ::uObject* VertexAttributes() { return ModelMesh__get_VertexAttributes(this); }
    int VertexCount() { return ModelMesh__get_VertexCount(this); }
    ::app::Uno::Content::Models::VertexAttributeArray* GetVertexAttribute(::uString* attributeName) { return ModelMesh__GetVertexAttribute(this, attributeName); }
    ::app::Uno::Content::Models::VertexAttributeArray* TryGetVertexAttribute(::uString* name) { return ModelMesh__TryGetVertexAttribute(this, name); }
};

}}}}


#endif
