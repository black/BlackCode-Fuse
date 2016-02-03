#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Collections.Dictionary__string__Uno_Content_Models_ModelParameter.h>
#include <app/Uno.Collections.Dictionary__string__Uno_Content_Models_VertexAt-1b8a56c1.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_strin-c01ed8cf.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_strin-d9fcbc62.h>
#include <app/Uno.Collections.IEnumerable__Uno_Content_Models_ModelDrawable.h>
#include <app/Uno.Collections.IEnumerable__Uno_Content_Models_ModelNode.h>
#include <app/Uno.Collections.IEnumerable__Uno_Content_Models_ModelParameter_float4x4_.h>
#include <app/Uno.Collections.IEnumerable__Uno_Content_Models_ModelSkin.h>
#include <app/Uno.Collections.IEnumerable__Uno_Content_Models_SkinBone.h>
#include <app/Uno.Collections.IEnumerable__Uno_Content_Models_SkinDrawable.h>
#include <app/Uno.Collections.IEnumerable__Uno_Content_Models_VertexInfluence.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_strin-d9f4a565.h>
#include <app/Uno.Collections.KeyValuePair__string__Uno_Content_Models_Vertex-7e6c5d3f.h>
#include <app/Uno.Collections.List__Uno_Content_Models_ModelDrawable.h>
#include <app/Uno.Collections.List__Uno_Content_Models_ModelNode.h>
#include <app/Uno.Collections.List__Uno_Content_Models_ModelParameter_float4x4_.h>
#include <app/Uno.Collections.List__Uno_Content_Models_ModelSkin.h>
#include <app/Uno.Collections.List__Uno_Content_Models_SkinBone.h>
#include <app/Uno.Collections.List__Uno_Content_Models_SkinDrawable.h>
#include <app/Uno.Collections.List__Uno_Content_Models_VertexInfluence.h>
#include <app/Uno.Content.Models.IndexArray.h>
#include <app/Uno.Content.Models.Model.h>
#include <app/Uno.Content.Models.ModelDrawable.h>
#include <app/Uno.Content.Models.ModelMaterial.h>
#include <app/Uno.Content.Models.ModelMesh.h>
#include <app/Uno.Content.Models.ModelNode.h>
#include <app/Uno.Content.Models.ModelParameter.h>
#include <app/Uno.Content.Models.ModelParameter__float.h>
#include <app/Uno.Content.Models.ModelParameter__float2.h>
#include <app/Uno.Content.Models.ModelParameter__float3.h>
#include <app/Uno.Content.Models.ModelParameter__float4.h>
#include <app/Uno.Content.Models.ModelParameter__float4x4.h>
#include <app/Uno.Content.Models.ModelParameter__string.h>
#include <app/Uno.Content.Models.ModelParameterAnimation__float.h>
#include <app/Uno.Content.Models.ModelParameterAnimation__float2.h>
#include <app/Uno.Content.Models.ModelParameterAnimation__float3.h>
#include <app/Uno.Content.Models.ModelParameterAnimation__float4.h>
#include <app/Uno.Content.Models.ModelParameterAnimation__float4x4.h>
#include <app/Uno.Content.Models.ModelParameterList__float.h>
#include <app/Uno.Content.Models.ModelParameterList__float2.h>
#include <app/Uno.Content.Models.ModelParameterList__float3.h>
#include <app/Uno.Content.Models.ModelParameterList__float4.h>
#include <app/Uno.Content.Models.ModelParameterList__float4x4.h>
#include <app/Uno.Content.Models.ModelParameterList__string.h>
#include <app/Uno.Content.Models.ModelParameterType.h>
#include <app/Uno.Content.Models.ModelParameterValueType.h>
#include <app/Uno.Content.Models.ModelSkin.h>
#include <app/Uno.Content.Models.PsgReaderInternal.h>
#include <app/Uno.Content.Models.PsgReaderInternal_NodeReaderInternal.h>
#include <app/Uno.Content.Models.PsgReaderInternal_PsgModelBlockType.h>
#include <app/Uno.Content.Models.PsgReaderInternal_PsgNodeBlockType.h>
#include <app/Uno.Content.Models.PsgReaderInternal_PsgSkinFlags.h>
#include <app/Uno.Content.Models.PsgReaderInternal_PsgSplineType.h>
#include <app/Uno.Content.Models.SkinBone.h>
#include <app/Uno.Content.Models.SkinDrawable.h>
#include <app/Uno.Content.Models.VertexAttributeArray.h>
#include <app/Uno.Content.Models.VertexAttributeSemantic.h>
#include <app/Uno.Content.Models.VertexInfluence.h>
#include <app/Uno.Content.Splines.FullsampledSpline__float.h>
#include <app/Uno.Content.Splines.FullsampledSpline__float2.h>
#include <app/Uno.Content.Splines.FullsampledSpline__float3.h>
#include <app/Uno.Content.Splines.FullsampledSpline__float4.h>
#include <app/Uno.Content.Splines.FullsampledSpline__float4x4.h>
#include <app/Uno.Content.Splines.KeyframedSpline2_Key__float__float.h>
#include <app/Uno.Content.Splines.KeyframedSpline2_Key__float2__float2.h>
#include <app/Uno.Content.Splines.KeyframedSpline2_Key__float3__float3.h>
#include <app/Uno.Content.Splines.KeyframedSpline2_Key__float4__float4.h>
#include <app/Uno.Content.Splines.KeyframedSpline2_Key__float4x4__float4x4.h>
#include <app/Uno.Content.Splines.LinearSplineFloat.h>
#include <app/Uno.Content.Splines.LinearSplineFloat2.h>
#include <app/Uno.Content.Splines.LinearSplineFloat3.h>
#include <app/Uno.Content.Splines.LinearSplineFloat4.h>
#include <app/Uno.Content.Splines.LinearSplineFloat4x4.h>
#include <app/Uno.Content.Splines.Spline__float.h>
#include <app/Uno.Content.Splines.Spline__float2.h>
#include <app/Uno.Content.Splines.Spline__float3.h>
#include <app/Uno.Content.Splines.Spline__float4.h>
#include <app/Uno.Content.Splines.Spline__float4x4.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Double.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Func__Uno_Runtime_Implementation_Internal_BufferReader__float.h>
#include <app/Uno.Func__Uno_Runtime_Implementation_Internal_BufferReader__float2.h>
#include <app/Uno.Func__Uno_Runtime_Implementation_Internal_BufferReader__float3.h>
#include <app/Uno.Func__Uno_Runtime_Implementation_Internal_BufferReader__float4.h>
#include <app/Uno.Func__Uno_Runtime_Implementation_Internal_BufferReader__float4x4.h>
#include <app/Uno.Graphics.IndexType.h>
#include <app/Uno.Graphics.IndexTypeHelpers.h>
#include <app/Uno.Graphics.PrimitiveType.h>
#include <app/Uno.Graphics.VertexAttributeType.h>
#include <app/Uno.Graphics.VertexAttributeTypeHelpers.h>
#include <app/Uno.IndexOutOfRangeException.h>
#include <app/Uno.Int.h>
#include <app/Uno.Int2.h>
#include <app/Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <app/Uno.Runtime.Implementation.Internal.BufferReader.h>
#include <app/Uno.SByte.h>
#include <app/Uno.SByte4.h>
#include <app/Uno.Short.h>
#include <app/Uno.Short2.h>
#include <app/Uno.Short4.h>
#include <app/Uno.String.h>
#include <app/Uno.UInt.h>
#include <app/Uno.UShort.h>
#include <app/Uno.UShort2.h>
#include <app/Uno.UShort4.h>

namespace app {
namespace Uno {
namespace Content {
namespace Models {

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

IndexArray__uType* IndexArray__typeof()
{
    static ::uStaticStrong<IndexArray__uType*> type;
    if (type != NULL) return type;

    type = (IndexArray__uType*)::uAllocClassType(sizeof(IndexArray__uType), "Uno.Content.Models.IndexArray", false, 0, 1, 0);

    type->SetStrongRefs(
        "_buffer", offsetof(IndexArray, _buffer));

    type->SetFields(2,
        ::uNewField("_buffer", NULL, offsetof(IndexArray, _buffer), ::app::Uno::Buffer__typeof()),
        ::uNewField("_type", NULL, offsetof(IndexArray, _type), ::app::Uno::Graphics::IndexType__typeof()));

    type->SetFunctions(8,
        ::uNewFunction("get_Buffer", IndexArray__get_Buffer, 0, false, ::app::Uno::Buffer__typeof()),
        ::uNewFunction("get_Count", IndexArray__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Type", IndexArray__get_Type, 0, false, ::app::Uno::Graphics::IndexType__typeof()),
        ::uNewFunction("GetInt", IndexArray__GetInt, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction(".ctor", IndexArray__New_1, 0, true, IndexArray__typeof(), ::uGetArrayType(::app::Uno::Byte__typeof())),
        ::uNewFunction(".ctor", IndexArray__New_2, 0, true, IndexArray__typeof(), ::uGetArrayType(::app::Uno::UShort__typeof())),
        ::uNewFunction(".ctor", IndexArray__New_3, 0, true, IndexArray__typeof(), ::uGetArrayType(::app::Uno::UInt__typeof())),
        ::uNewFunction(".ctor", IndexArray__New_4, 0, true, IndexArray__typeof(), ::app::Uno::Graphics::IndexType__typeof(), ::app::Uno::Buffer__typeof()));

    ::uRegisterType(type);
    return type;
}

void IndexArray___ObjInit(IndexArray* __this, ::uArray* data)
{
    __this->_ObjInit_3(1, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_5(NULL, data));
}

void IndexArray___ObjInit_1(IndexArray* __this, ::uArray* data)
{
    __this->_ObjInit_3(2, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_6(NULL, data));
}

void IndexArray___ObjInit_2(IndexArray* __this, ::uArray* data)
{
    __this->_ObjInit_3(4, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_7(NULL, data));
}

void IndexArray___ObjInit_3(IndexArray* __this, int type, ::app::Uno::Buffer* buffer)
{
    __this->_buffer = buffer;
    __this->_type = type;
}

::app::Uno::Buffer* IndexArray__get_Buffer(IndexArray* __this)
{
    return __this->_buffer;
}

int IndexArray__get_Count(IndexArray* __this)
{
    return ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->SizeInBytes() / ::app::Uno::Graphics::IndexTypeHelpers__GetStrideInBytes(NULL, __this->_type);
}

int IndexArray__get_Type(IndexArray* __this)
{
    return __this->_type;
}

int IndexArray__GetInt(IndexArray* __this, int index)
{
    switch (__this->_type)
    {
        case 1:
        {
            return (int)::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetByte(index);
        }
        case 2:
        {
            return (int)::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetUShort(index * 2, true);
        }
        case 4:
        {
            return (int)::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetUInt(index * 4, true);
        }
        default:
        {
            return 0;
        }
    }
}

IndexArray* IndexArray__New_1(::uStatic* __this, ::uArray* data)
{
    IndexArray* inst = (IndexArray*)::uAllocObject(sizeof(IndexArray), IndexArray__typeof());
    inst->_ObjInit(data);
    return inst;
}

IndexArray* IndexArray__New_2(::uStatic* __this, ::uArray* data)
{
    IndexArray* inst = (IndexArray*)::uAllocObject(sizeof(IndexArray), IndexArray__typeof());
    inst->_ObjInit_1(data);
    return inst;
}

IndexArray* IndexArray__New_3(::uStatic* __this, ::uArray* data)
{
    IndexArray* inst = (IndexArray*)::uAllocObject(sizeof(IndexArray), IndexArray__typeof());
    inst->_ObjInit_2(data);
    return inst;
}

IndexArray* IndexArray__New_4(::uStatic* __this, int type, ::app::Uno::Buffer* buffer)
{
    IndexArray* inst = (IndexArray*)::uAllocObject(sizeof(IndexArray), IndexArray__typeof());
    inst->_ObjInit_3(type, buffer);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Model__uType* Model__typeof()
{
    static ::uStaticStrong<Model__uType*> type;
    if (type != NULL) return type;

    type = (Model__uType*)::uAllocClassType(sizeof(Model__uType), "Uno.Content.Models.Model", false, 0, 3, 0);

    type->SetStrongRefs(
        "_drawables", offsetof(Model, _drawables),
        "_name", offsetof(Model, _name),
        "_root", offsetof(Model, _root));

    type->SetFields(3,
        ::uNewField("_drawables", NULL, offsetof(Model, _drawables), ::uGetArrayType(::app::Uno::Content::Models::ModelDrawable__typeof())),
        ::uNewField("_name", NULL, offsetof(Model, _name), ::app::Uno::String__typeof()),
        ::uNewField("_root", NULL, offsetof(Model, _root), ::app::Uno::Content::Models::ModelNode__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("CreateFromPsg", Model__CreateFromPsg, 0, true, Model__typeof(), ::app::Uno::Buffer__typeof()),
        ::uNewFunction("get_DrawableCount", Model__get_DrawableCount, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Name", Model__get_Name, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Root", Model__get_Root, 0, false, ::app::Uno::Content::Models::ModelNode__typeof()),
        ::uNewFunction("GetDrawable", Model__GetDrawable, 0, false, ::app::Uno::Content::Models::ModelDrawable__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void Model___ObjInit(Model* __this, ::uString* name, ::uArray* drawables, ::app::Uno::Content::Models::ModelNode* root)
{
    __this->_name = name;
    __this->_drawables = drawables;
    __this->_root = (root != NULL) ? root : ::app::Uno::Content::Models::ModelNode__New_1(NULL, name);
}

Model* Model__CreateFromPsg(::uStatic* __this, ::app::Uno::Buffer* psg)
{
    return ::uPtr< ::app::Uno::Content::Models::PsgReaderInternal*>(::app::Uno::Content::Models::PsgReaderInternal__New_1(NULL, psg))->ReadModel();
}

int Model__get_DrawableCount(Model* __this)
{
    return ::uPtr< ::uArray*>(__this->_drawables)->Length();
}

::uString* Model__get_Name(Model* __this)
{
    return __this->_name;
}

::app::Uno::Content::Models::ModelNode* Model__get_Root(Model* __this)
{
    return __this->_root;
}

::app::Uno::Content::Models::ModelDrawable* Model__GetDrawable(Model* __this, int index)
{
    return ::uPtr< ::uArray*>(__this->_drawables)->Item< ::app::Uno::Content::Models::ModelDrawable*>(index);
}

Model* Model__New_1(::uStatic* __this, ::uString* name, ::uArray* drawables, ::app::Uno::Content::Models::ModelNode* root)
{
    Model* inst = (Model*)::uAllocObject(sizeof(Model), Model__typeof());
    inst->_ObjInit(name, drawables, root);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ModelDrawable__uType* ModelDrawable__typeof()
{
    static ::uStaticStrong<ModelDrawable__uType*> type;
    if (type != NULL) return type;

    type = (ModelDrawable__uType*)::uAllocClassType(sizeof(ModelDrawable__uType), "Uno.Content.Models.ModelDrawable", false, 0, 2, 0);

    type->SetStrongRefs(
        "_mesh", offsetof(ModelDrawable, _mesh),
        "_optionalMaterial", offsetof(ModelDrawable, _optionalMaterial));

    type->SetFields(2,
        ::uNewField("_mesh", NULL, offsetof(ModelDrawable, _mesh), ::app::Uno::Content::Models::ModelMesh__typeof()),
        ::uNewField("_optionalMaterial", NULL, offsetof(ModelDrawable, _optionalMaterial), ::app::Uno::Content::Models::ModelMaterial__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_Mesh", ModelDrawable__get_Mesh, 0, false, ::app::Uno::Content::Models::ModelMesh__typeof()),
        ::uNewFunction("get_OptionalMaterial", ModelDrawable__get_OptionalMaterial, 0, false, ::app::Uno::Content::Models::ModelMaterial__typeof()),
        ::uNewFunction(".ctor", ModelDrawable__New_1, 0, true, ModelDrawable__typeof(), ::app::Uno::Content::Models::ModelMesh__typeof(), ::app::Uno::Content::Models::ModelMaterial__typeof()));

    ::uRegisterType(type);
    return type;
}

void ModelDrawable___ObjInit(ModelDrawable* __this, ::app::Uno::Content::Models::ModelMesh* mesh, ::app::Uno::Content::Models::ModelMaterial* optionalMaterial)
{
    __this->_mesh = mesh;
    __this->_optionalMaterial = optionalMaterial;
}

::app::Uno::Content::Models::ModelMesh* ModelDrawable__get_Mesh(ModelDrawable* __this)
{
    return __this->_mesh;
}

::app::Uno::Content::Models::ModelMaterial* ModelDrawable__get_OptionalMaterial(ModelDrawable* __this)
{
    return __this->_optionalMaterial;
}

ModelDrawable* ModelDrawable__New_1(::uStatic* __this, ::app::Uno::Content::Models::ModelMesh* mesh, ::app::Uno::Content::Models::ModelMaterial* optionalMaterial)
{
    ModelDrawable* inst = (ModelDrawable*)::uAllocObject(sizeof(ModelDrawable), ModelDrawable__typeof());
    inst->_ObjInit(mesh, optionalMaterial);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ModelMaterial__uType* ModelMaterial__typeof()
{
    static ::uStaticStrong<ModelMaterial__uType*> type;
    if (type != NULL) return type;

    type = (ModelMaterial__uType*)::uAllocClassType(sizeof(ModelMaterial__uType), "Uno.Content.Models.ModelMaterial", false, 0, 2, 0);

    type->SetStrongRefs(
        "_name", offsetof(ModelMaterial, _name),
        "_parameters", offsetof(ModelMaterial, _parameters));

    type->SetFields(2,
        ::uNewField("_name", NULL, offsetof(ModelMaterial, _name), ::app::Uno::String__typeof()),
        ::uNewField("_parameters", NULL, offsetof(ModelMaterial, _parameters), ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_ModelParameter__typeof()));

    type->SetFunctions(4,
        ::uNewFunction("get_Name", ModelMaterial__get_Name, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Parameters", ModelMaterial__get_Parameters, 0, false, ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_string_Uno_Content_Models_ModelParameter___typeof()),
        ::uNewFunction("GetParameter", ModelMaterial__GetParameter, 0, false, ::app::Uno::Content::Models::ModelParameter__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction(".ctor", ModelMaterial__New_1, 0, true, ModelMaterial__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_ModelParameter__typeof()));

    ::uRegisterType(type);
    return type;
}

void ModelMaterial___ObjInit(ModelMaterial* __this, ::uString* name, ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_ModelParameter* parameters)
{
    __this->_name = name;
    __this->_parameters = parameters;
}

::uString* ModelMaterial__get_Name(ModelMaterial* __this)
{
    return __this->_name;
}

::uObject* ModelMaterial__get_Parameters(ModelMaterial* __this)
{
    return (::uObject*)__this->_parameters;
}

::app::Uno::Content::Models::ModelParameter* ModelMaterial__GetParameter(ModelMaterial* __this, ::uString* parameterName)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_ModelParameter*>(__this->_parameters)->Item(parameterName);
}

ModelMaterial* ModelMaterial__New_1(::uStatic* __this, ::uString* name, ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_ModelParameter* parameters)
{
    ModelMaterial* inst = (ModelMaterial*)::uAllocObject(sizeof(ModelMaterial), ModelMaterial__typeof());
    inst->_ObjInit(name, parameters);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ModelMesh__uType* ModelMesh__typeof()
{
    static ::uStaticStrong<ModelMesh__uType*> type;
    if (type != NULL) return type;

    type = (ModelMesh__uType*)::uAllocClassType(sizeof(ModelMesh__uType), "Uno.Content.Models.ModelMesh", false, 0, 3, 0);

    type->SetStrongRefs(
        "_indices", offsetof(ModelMesh, _indices),
        "_name", offsetof(ModelMesh, _name),
        "_vertexAttributes", offsetof(ModelMesh, _vertexAttributes));

    type->SetFields(4,
        ::uNewField("_indices", NULL, offsetof(ModelMesh, _indices), ::app::Uno::Content::Models::IndexArray__typeof()),
        ::uNewField("_name", NULL, offsetof(ModelMesh, _name), ::app::Uno::String__typeof()),
        ::uNewField("_primitiveType", NULL, offsetof(ModelMesh, _primitiveType), ::app::Uno::Graphics::PrimitiveType__typeof()),
        ::uNewField("_vertexAttributes", NULL, offsetof(ModelMesh, _vertexAttributes), ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray__typeof()));

    type->SetFunctions(16,
        ::uNewFunction("get_Binormals", ModelMesh__get_Binormals, 0, false, ::app::Uno::Content::Models::VertexAttributeArray__typeof()),
        ::uNewFunction("get_BoneIndices", ModelMesh__get_BoneIndices, 0, false, ::app::Uno::Content::Models::VertexAttributeArray__typeof()),
        ::uNewFunction("get_BoneWeights", ModelMesh__get_BoneWeights, 0, false, ::app::Uno::Content::Models::VertexAttributeArray__typeof()),
        ::uNewFunction("get_IndexCount", ModelMesh__get_IndexCount, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Indices", ModelMesh__get_Indices, 0, false, ::app::Uno::Content::Models::IndexArray__typeof()),
        ::uNewFunction("get_Name", ModelMesh__get_Name, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Normals", ModelMesh__get_Normals, 0, false, ::app::Uno::Content::Models::VertexAttributeArray__typeof()),
        ::uNewFunction("get_Positions", ModelMesh__get_Positions, 0, false, ::app::Uno::Content::Models::VertexAttributeArray__typeof()),
        ::uNewFunction("get_PrimitiveType", ModelMesh__get_PrimitiveType, 0, false, ::app::Uno::Graphics::PrimitiveType__typeof()),
        ::uNewFunction("get_Tangents", ModelMesh__get_Tangents, 0, false, ::app::Uno::Content::Models::VertexAttributeArray__typeof()),
        ::uNewFunction("get_TexCoords", ModelMesh__get_TexCoords, 0, false, ::app::Uno::Content::Models::VertexAttributeArray__typeof()),
        ::uNewFunction("get_VertexAttributes", ModelMesh__get_VertexAttributes, 0, false, ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_string_Uno_Content_Models_VertexAttributeArray___typeof()),
        ::uNewFunction("get_VertexCount", ModelMesh__get_VertexCount, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetVertexAttribute", ModelMesh__GetVertexAttribute, 0, false, ::app::Uno::Content::Models::VertexAttributeArray__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction(".ctor", ModelMesh__New_1, 0, true, ModelMesh__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Graphics::PrimitiveType__typeof(), ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray__typeof(), ::app::Uno::Content::Models::IndexArray__typeof()),
        ::uNewFunction("TryGetVertexAttribute", ModelMesh__TryGetVertexAttribute, 0, false, ::app::Uno::Content::Models::VertexAttributeArray__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void ModelMesh___ObjInit(ModelMesh* __this, ::uString* name, int type, ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray* vertexAttributes, ::app::Uno::Content::Models::IndexArray* indices)
{
    __this->_name = name;
    __this->_primitiveType = type;
    __this->_vertexAttributes = vertexAttributes;
    __this->_indices = indices;
}

::app::Uno::Content::Models::VertexAttributeArray* ModelMesh__get_Binormals(ModelMesh* __this)
{
    return __this->TryGetVertexAttribute(::uGetConstString("Binormal"));
}

::app::Uno::Content::Models::VertexAttributeArray* ModelMesh__get_BoneIndices(ModelMesh* __this)
{
    return __this->TryGetVertexAttribute(::uGetConstString("BoneIndices"));
}

::app::Uno::Content::Models::VertexAttributeArray* ModelMesh__get_BoneWeights(ModelMesh* __this)
{
    return __this->TryGetVertexAttribute(::uGetConstString("BoneWeights"));
}

int ModelMesh__get_IndexCount(ModelMesh* __this)
{
    return (__this->Indices() != NULL) ? ::uPtr< ::app::Uno::Content::Models::IndexArray*>(__this->Indices())->Count() : -1;
}

::app::Uno::Content::Models::IndexArray* ModelMesh__get_Indices(ModelMesh* __this)
{
    return __this->_indices;
}

::uString* ModelMesh__get_Name(ModelMesh* __this)
{
    return __this->_name;
}

::app::Uno::Content::Models::VertexAttributeArray* ModelMesh__get_Normals(ModelMesh* __this)
{
    return __this->TryGetVertexAttribute(::uGetConstString("Normal"));
}

::app::Uno::Content::Models::VertexAttributeArray* ModelMesh__get_Positions(ModelMesh* __this)
{
    return __this->TryGetVertexAttribute(::uGetConstString("Position"));
}

int ModelMesh__get_PrimitiveType(ModelMesh* __this)
{
    return __this->_primitiveType;
}

::app::Uno::Content::Models::VertexAttributeArray* ModelMesh__get_Tangents(ModelMesh* __this)
{
    return __this->TryGetVertexAttribute(::uGetConstString("Tangent"));
}

::app::Uno::Content::Models::VertexAttributeArray* ModelMesh__get_TexCoords(ModelMesh* __this)
{
    return __this->TryGetVertexAttribute(::uGetConstString("TexCoord"));
}

::uObject* ModelMesh__get_VertexAttributes(ModelMesh* __this)
{
    return (::uObject*)__this->_vertexAttributes;
}

int ModelMesh__get_VertexCount(ModelMesh* __this)
{
    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_string_Uno_Content_Models_VertexAttributeArray_::GetEnumerator(::uPtr< ::uObject*>(__this->VertexAttributes())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Uno::Collections::KeyValuePair__string__Uno_Content_Models_VertexAttributeArray attrib = ::app::Uno::Collections::IEnumerator__Uno_Collections_KeyValuePair_string_Uno_Content_Models_VertexAttributeArray_::Current(::uPtr< ::uObject*>(enum_123));
        return ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(attrib.Value())->Count();
    }

    return 0;
}

::app::Uno::Content::Models::VertexAttributeArray* ModelMesh__GetVertexAttribute(ModelMesh* __this, ::uString* attributeName)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray*>(__this->_vertexAttributes)->Item(attributeName);
}

ModelMesh* ModelMesh__New_1(::uStatic* __this, ::uString* name, int type, ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray* vertexAttributes, ::app::Uno::Content::Models::IndexArray* indices)
{
    ModelMesh* inst = (ModelMesh*)::uAllocObject(sizeof(ModelMesh), ModelMesh__typeof());
    inst->_ObjInit(name, type, vertexAttributes, indices);
    return inst;
}

::app::Uno::Content::Models::VertexAttributeArray* ModelMesh__TryGetVertexAttribute(ModelMesh* __this, ::uString* name)
{
    ::app::Uno::Content::Models::VertexAttributeArray* result;
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray*>(__this->_vertexAttributes)->TryGetValue(name, &result);
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ModelNode__uType* ModelNode__typeof()
{
    static ::uStaticStrong<ModelNode__uType*> type;
    if (type != NULL) return type;

    type = (ModelNode__uType*)::uAllocClassType(sizeof(ModelNode__uType), "Uno.Content.Models.ModelNode", false, 0, 6, 0);

    type->SetStrongRefs(
        "_children", offsetof(ModelNode, _children),
        "_drawables", offsetof(ModelNode, _drawables),
        "_name", offsetof(ModelNode, _name),
        "_parameters", offsetof(ModelNode, _parameters),
        "_skins", offsetof(ModelNode, _skins),
        "_transforms", offsetof(ModelNode, _transforms));

    type->SetFields(6,
        ::uNewField("_children", NULL, offsetof(ModelNode, _children), ::app::Uno::Collections::List__Uno_Content_Models_ModelNode__typeof()),
        ::uNewField("_drawables", NULL, offsetof(ModelNode, _drawables), ::app::Uno::Collections::List__Uno_Content_Models_ModelDrawable__typeof()),
        ::uNewField("_name", NULL, offsetof(ModelNode, _name), ::app::Uno::String__typeof()),
        ::uNewField("_parameters", NULL, offsetof(ModelNode, _parameters), ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_ModelParameter__typeof()),
        ::uNewField("_skins", NULL, offsetof(ModelNode, _skins), ::app::Uno::Collections::List__Uno_Content_Models_ModelSkin__typeof()),
        ::uNewField("_transforms", NULL, offsetof(ModelNode, _transforms), ::app::Uno::Collections::List__Uno_Content_Models_ModelParameter_float4x4___typeof()));

    type->SetFunctions(9,
        ::uNewFunction("get_Children", ModelNode__get_Children, 0, false, ::app::Uno::Collections::IEnumerable__Uno_Content_Models_ModelNode__typeof()),
        ::uNewFunction("get_Drawables", ModelNode__get_Drawables, 0, false, ::app::Uno::Collections::IEnumerable__Uno_Content_Models_ModelDrawable__typeof()),
        ::uNewFunction("get_Name", ModelNode__get_Name, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Parameters", ModelNode__get_Parameters, 0, false, ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_string_Uno_Content_Models_ModelParameter___typeof()),
        ::uNewFunction("get_Skins", ModelNode__get_Skins, 0, false, ::app::Uno::Collections::IEnumerable__Uno_Content_Models_ModelSkin__typeof()),
        ::uNewFunction("get_Transforms", ModelNode__get_Transforms, 0, false, ::app::Uno::Collections::IEnumerable__Uno_Content_Models_ModelParameter_float4x4___typeof()),
        ::uNewFunction("GetParameter", ModelNode__GetParameter, 0, false, ::app::Uno::Content::Models::ModelParameter__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction(".ctor", ModelNode__New_1, 0, true, ModelNode__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction(".ctor", ModelNode__New_2, 0, true, ModelNode__typeof(), ::app::Uno::String__typeof(), ::app::Uno::Collections::List__Uno_Content_Models_ModelParameter_float4x4___typeof(), ::app::Uno::Collections::List__Uno_Content_Models_ModelDrawable__typeof(), ::app::Uno::Collections::List__Uno_Content_Models_ModelSkin__typeof(), ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_ModelParameter__typeof(), ::app::Uno::Collections::List__Uno_Content_Models_ModelNode__typeof()));

    ::uRegisterType(type);
    return type;
}

void ModelNode___ObjInit(ModelNode* __this, ::uString* name)
{
    __this->_name = name;
    __this->_transforms = ::app::Uno::Collections::List__Uno_Content_Models_ModelParameter_float4x4___New_1(NULL);
    __this->_drawables = ::app::Uno::Collections::List__Uno_Content_Models_ModelDrawable__New_1(NULL);
    __this->_skins = ::app::Uno::Collections::List__Uno_Content_Models_ModelSkin__New_1(NULL);
    __this->_parameters = ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_ModelParameter__New_1(NULL);
    __this->_children = ::app::Uno::Collections::List__Uno_Content_Models_ModelNode__New_1(NULL);
}

void ModelNode___ObjInit_1(ModelNode* __this, ::uString* name, ::app::Uno::Collections::List__Uno_Content_Models_ModelParameter_float4x4_* transforms, ::app::Uno::Collections::List__Uno_Content_Models_ModelDrawable* drawables, ::app::Uno::Collections::List__Uno_Content_Models_ModelSkin* skins, ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_ModelParameter* parameters, ::app::Uno::Collections::List__Uno_Content_Models_ModelNode* children)
{
    __this->_name = name;
    __this->_transforms = transforms;
    __this->_drawables = drawables;
    __this->_skins = skins;
    __this->_parameters = parameters;
    __this->_children = children;
}

::uObject* ModelNode__get_Children(ModelNode* __this)
{
    return (::uObject*)__this->_children;
}

::uObject* ModelNode__get_Drawables(ModelNode* __this)
{
    return (::uObject*)__this->_drawables;
}

::uString* ModelNode__get_Name(ModelNode* __this)
{
    return __this->_name;
}

::uObject* ModelNode__get_Parameters(ModelNode* __this)
{
    return (::uObject*)__this->_parameters;
}

::uObject* ModelNode__get_Skins(ModelNode* __this)
{
    return (::uObject*)__this->_skins;
}

::uObject* ModelNode__get_Transforms(ModelNode* __this)
{
    return (::uObject*)__this->_transforms;
}

::app::Uno::Content::Models::ModelParameter* ModelNode__GetParameter(ModelNode* __this, ::uString* parameterName)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_ModelParameter*>(__this->_parameters)->Item(parameterName);
}

ModelNode* ModelNode__New_1(::uStatic* __this, ::uString* name)
{
    ModelNode* inst = (ModelNode*)::uAllocObject(sizeof(ModelNode), ModelNode__typeof());
    inst->_ObjInit(name);
    return inst;
}

ModelNode* ModelNode__New_2(::uStatic* __this, ::uString* name, ::app::Uno::Collections::List__Uno_Content_Models_ModelParameter_float4x4_* transforms, ::app::Uno::Collections::List__Uno_Content_Models_ModelDrawable* drawables, ::app::Uno::Collections::List__Uno_Content_Models_ModelSkin* skins, ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_ModelParameter* parameters, ::app::Uno::Collections::List__Uno_Content_Models_ModelNode* children)
{
    ModelNode* inst = (ModelNode*)::uAllocObject(sizeof(ModelNode), ModelNode__typeof());
    inst->_ObjInit_1(name, transforms, drawables, skins, parameters, children);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ModelParameter__uType* ModelParameter__typeof()
{
    static ::uStaticStrong<ModelParameter__uType*> type;
    if (type != NULL) return type;

    type = (ModelParameter__uType*)::uAllocClassType(sizeof(ModelParameter__uType), "Uno.Content.Models.ModelParameter", false, 0, 0, 0);

    type->__fp_get_EndTime = ModelParameter__get_EndTime;
    type->__fp_get_IsAnimated = ModelParameter__get_IsAnimated;
    type->__fp_get_ListItemType = ModelParameter__get_ListItemType;
    type->__fp_get_ListLength = ModelParameter__get_ListLength;
    type->__fp_get_StartTime = ModelParameter__get_StartTime;
    type->__fp_GetListItem = ModelParameter__GetListItem;
    type->__fp_Update = ModelParameter__Update;

    type->SetFunctions(9,
        ::uNewFunction("get_EndTime", type->__fp_get_EndTime, offsetof(ModelParameter__uType, __fp_get_EndTime), false, ::app::Uno::Double__typeof()),
        ::uNewFunction("get_IsAnimated", type->__fp_get_IsAnimated, offsetof(ModelParameter__uType, __fp_get_IsAnimated), false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_ListItemType", type->__fp_get_ListItemType, offsetof(ModelParameter__uType, __fp_get_ListItemType), false, ::app::Uno::Content::Models::ModelParameterValueType__typeof()),
        ::uNewFunction("get_ListLength", type->__fp_get_ListLength, offsetof(ModelParameter__uType, __fp_get_ListLength), false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_ParameterType", type->__fp_get_ParameterType, offsetof(ModelParameter__uType, __fp_get_ParameterType), false, ::app::Uno::Content::Models::ModelParameterType__typeof()),
        ::uNewFunction("get_StartTime", type->__fp_get_StartTime, offsetof(ModelParameter__uType, __fp_get_StartTime), false, ::app::Uno::Double__typeof()),
        ::uNewFunction("get_ValueType", type->__fp_get_ValueType, offsetof(ModelParameter__uType, __fp_get_ValueType), false, ::app::Uno::Content::Models::ModelParameterValueType__typeof()),
        ::uNewFunction("GetListItem", type->__fp_GetListItem, offsetof(ModelParameter__uType, __fp_GetListItem), false, ModelParameter__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("Update", type->__fp_Update, offsetof(ModelParameter__uType, __fp_Update), false, ::app::Uno::Double__typeof()));

    ::uRegisterType(type);
    return type;
}

void ModelParameter___ObjInit(ModelParameter* __this)
{
}

double ModelParameter__get_EndTime(ModelParameter* __this)
{
    return 0.0;
}

bool ModelParameter__get_IsAnimated(ModelParameter* __this)
{
    return false;
}

int ModelParameter__get_ListItemType(ModelParameter* __this)
{
    return 0;
}

int ModelParameter__get_ListLength(ModelParameter* __this)
{
    return 0;
}

double ModelParameter__get_StartTime(ModelParameter* __this)
{
    return 0.0;
}

ModelParameter* ModelParameter__GetListItem(ModelParameter* __this, int index)
{
    U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
}

void ModelParameter__Update(ModelParameter* __this, double time)
{
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* ModelParameterType__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Content.Models.ModelParameterType", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Constant", 0LL,
        "Animation", 1LL,
        "List", 2LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* ModelParameterValueType__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Content.Models.ModelParameterValueType", ::app::Uno::Int__typeof(), 8);

    type->SetLiterals(
        "Invalid", 0LL,
        "Float", 1LL,
        "Float2", 2LL,
        "Float3", 3LL,
        "Float4", 4LL,
        "Float4x4", 5LL,
        "String", 6LL,
        "List", 7LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ModelSkin__uType* ModelSkin__typeof()
{
    static ::uStaticStrong<ModelSkin__uType*> type;
    if (type != NULL) return type;

    type = (ModelSkin__uType*)::uAllocClassType(sizeof(ModelSkin__uType), "Uno.Content.Models.ModelSkin", false, 0, 2, 0);

    type->SetStrongRefs(
        "_bones", offsetof(ModelSkin, _bones),
        "_drawables", offsetof(ModelSkin, _drawables));

    type->SetFields(4,
        ::uNewField("_bindPose", NULL, offsetof(ModelSkin, _bindPose), ::app::Uno::Float4x4__typeof()),
        ::uNewField("_bones", NULL, offsetof(ModelSkin, _bones), ::app::Uno::Collections::List__Uno_Content_Models_SkinBone__typeof()),
        ::uNewField("_drawables", NULL, offsetof(ModelSkin, _drawables), ::app::Uno::Collections::List__Uno_Content_Models_SkinDrawable__typeof()),
        ::uNewField("_skeletonRoot", NULL, offsetof(ModelSkin, _skeletonRoot), ::app::Uno::Float4x4__typeof()));

    type->SetFunctions(5,
        ::uNewFunction("get_BindPose", ModelSkin__get_BindPose, 0, false, ::app::Uno::Float4x4__typeof()),
        ::uNewFunction("get_Bones", ModelSkin__get_Bones, 0, false, ::app::Uno::Collections::IEnumerable__Uno_Content_Models_SkinBone__typeof()),
        ::uNewFunction("get_Drawables", ModelSkin__get_Drawables, 0, false, ::app::Uno::Collections::IEnumerable__Uno_Content_Models_SkinDrawable__typeof()),
        ::uNewFunction("get_SkeletonRoot", ModelSkin__get_SkeletonRoot, 0, false, ::app::Uno::Float4x4__typeof()),
        ::uNewFunction(".ctor", ModelSkin__New_1, 0, true, ModelSkin__typeof(), ::app::Uno::Float4x4__typeof(), ::app::Uno::Float4x4__typeof(), ::uGetArrayType(::app::Uno::Content::Models::SkinBone__typeof()), ::uGetArrayType(::app::Uno::Content::Models::SkinDrawable__typeof())));

    ::uRegisterType(type);
    return type;
}

void ModelSkin___ObjInit(ModelSkin* __this, ::app::Uno::Float4x4 bindPose, ::app::Uno::Float4x4 skeletonRoot, ::uArray* bones, ::uArray* drawables)
{
    ::uArray* array_123;
    int index_124 = int();
    int length_125 = int();
    ::uArray* array_126;
    int index_127 = int();
    int length_128 = int();
    __this->_bones = ::app::Uno::Collections::List__Uno_Content_Models_SkinBone__New_1(NULL);
    __this->_drawables = ::app::Uno::Collections::List__Uno_Content_Models_SkinDrawable__New_1(NULL);
    __this->_bindPose = bindPose;
    __this->_skeletonRoot = skeletonRoot;

    for (array_123 = bones, index_124 = 0, length_125 = ::uPtr< ::uArray*>(array_123)->Length(); index_124 < length_125; ++index_124)
    {
        ::app::Uno::Content::Models::SkinBone* b = ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Content::Models::SkinBone*>(index_124);
        ::uPtr< ::app::Uno::Collections::List__Uno_Content_Models_SkinBone*>(__this->_bones)->Add(b);
    }

    for (array_126 = drawables, index_127 = 0, length_128 = ::uPtr< ::uArray*>(array_126)->Length(); index_127 < length_128; ++index_127)
    {
        ::app::Uno::Content::Models::SkinDrawable* d = ::uPtr< ::uArray*>(array_126)->Item< ::app::Uno::Content::Models::SkinDrawable*>(index_127);
        ::uPtr< ::app::Uno::Collections::List__Uno_Content_Models_SkinDrawable*>(__this->_drawables)->Add(d);
    }
}

::app::Uno::Float4x4 ModelSkin__get_BindPose(ModelSkin* __this)
{
    return __this->_bindPose;
}

::uObject* ModelSkin__get_Bones(ModelSkin* __this)
{
    return (::uObject*)__this->_bones;
}

::uObject* ModelSkin__get_Drawables(ModelSkin* __this)
{
    return (::uObject*)__this->_drawables;
}

::app::Uno::Float4x4 ModelSkin__get_SkeletonRoot(ModelSkin* __this)
{
    return __this->_skeletonRoot;
}

ModelSkin* ModelSkin__New_1(::uStatic* __this, ::app::Uno::Float4x4 bindPose, ::app::Uno::Float4x4 skeletonRoot, ::uArray* bones, ::uArray* drawables)
{
    ModelSkin* inst = (ModelSkin*)::uAllocObject(sizeof(ModelSkin), ModelSkin__typeof());
    inst->_ObjInit(bindPose, skeletonRoot, bones, drawables);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PsgReaderInternal__uType* PsgReaderInternal__typeof()
{
    static ::uStaticStrong<PsgReaderInternal__uType*> type;
    if (type != NULL) return type;

    type = (PsgReaderInternal__uType*)::uAllocClassType(sizeof(PsgReaderInternal__uType), "Uno.Content.Models.PsgReaderInternal", false, 0, 9, 0);

    type->SetStrongRefs(
        "_buffer", offsetof(PsgReaderInternal, _buffer),
        "_bufferOffsets", offsetof(PsgReaderInternal, _bufferOffsets),
        "_drawables", offsetof(PsgReaderInternal, _drawables),
        "_materials", offsetof(PsgReaderInternal, _materials),
        "_meshes", offsetof(PsgReaderInternal, _meshes),
        "_name", offsetof(PsgReaderInternal, _name),
        "_nodes", offsetof(PsgReaderInternal, _nodes),
        "_parameters", offsetof(PsgReaderInternal, _parameters),
        "r", offsetof(PsgReaderInternal, r));

    type->SetFields(10,
        ::uNewField("_buffer", NULL, offsetof(PsgReaderInternal, _buffer), ::app::Uno::Buffer__typeof()),
        ::uNewField("_bufferOffsets", NULL, offsetof(PsgReaderInternal, _bufferOffsets), ::uGetArrayType(::app::Uno::Int__typeof())),
        ::uNewField("_drawables", NULL, offsetof(PsgReaderInternal, _drawables), ::app::Uno::Collections::List__Uno_Content_Models_ModelDrawable__typeof()),
        ::uNewField("_materials", NULL, offsetof(PsgReaderInternal, _materials), ::uGetArrayType(::app::Uno::Content::Models::ModelMaterial__typeof())),
        ::uNewField("_meshes", NULL, offsetof(PsgReaderInternal, _meshes), ::uGetArrayType(::app::Uno::Content::Models::ModelMesh__typeof())),
        ::uNewField("_name", NULL, offsetof(PsgReaderInternal, _name), ::app::Uno::String__typeof()),
        ::uNewField("_nodes", NULL, offsetof(PsgReaderInternal, _nodes), ::uGetArrayType(::app::Uno::Content::Models::ModelNode__typeof())),
        ::uNewField("_parameters", NULL, offsetof(PsgReaderInternal, _parameters), ::uGetArrayType(::app::Uno::Content::Models::ModelParameter__typeof())),
        ::uNewField("_rootNodeIndex", NULL, offsetof(PsgReaderInternal, _rootNodeIndex), ::app::Uno::Int__typeof()),
        ::uNewField("r", NULL, offsetof(PsgReaderInternal, r), ::app::Uno::Runtime::Implementation::Internal::BufferReader__typeof()));

    type->SetFunctions(13,
        ::uNewFunction(".ctor", PsgReaderInternal__New_1, 0, true, PsgReaderInternal__typeof(), ::app::Uno::Buffer__typeof()),
        ::uNewFunction("ReadAnimationLinearSpline", PsgReaderInternal__ReadAnimationLinearSpline, 0, true, ::uObject__typeof(), ::app::Uno::Runtime::Implementation::Internal::BufferReader__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Delegate__typeof()),
        ::uNewFunctionVoid("ReadBlocks", PsgReaderInternal__ReadBlocks, 0, false),
        ::uNewFunctionVoid("ReadBufferList", PsgReaderInternal__ReadBufferList, 0, false),
        ::uNewFunctionVoid("ReadHeader", PsgReaderInternal__ReadHeader, 0, false),
        ::uNewFunction("ReadMaterial", PsgReaderInternal__ReadMaterial, 0, true, ::app::Uno::Content::Models::ModelMaterial__typeof(), ::app::Uno::Runtime::Implementation::Internal::BufferReader__typeof(), ::uGetArrayType(::app::Uno::Content::Models::ModelParameter__typeof())),
        ::uNewFunctionVoid("ReadMaterialList", PsgReaderInternal__ReadMaterialList, 0, false),
        ::uNewFunction("ReadMesh", PsgReaderInternal__ReadMesh, 0, false, ::app::Uno::Content::Models::ModelMesh__typeof()),
        ::uNewFunctionVoid("ReadMeshList", PsgReaderInternal__ReadMeshList, 0, false),
        ::uNewFunction("ReadModel", PsgReaderInternal__ReadModel, 0, false, ::app::Uno::Content::Models::Model__typeof()),
        ::uNewFunctionVoid("ReadNodes", PsgReaderInternal__ReadNodes, 0, false),
        ::uNewFunction("ReadParameter", PsgReaderInternal__ReadParameter, 0, true, ::app::Uno::Content::Models::ModelParameter__typeof(), ::app::Uno::Runtime::Implementation::Internal::BufferReader__typeof(), ::uGetArrayType(::app::Uno::Content::Models::ModelParameter__typeof())),
        ::uNewFunctionVoid("ReadParameterList", PsgReaderInternal__ReadParameterList, 0, false));

    ::uRegisterType(type);
    return type;
}

void PsgReaderInternal___ObjInit(PsgReaderInternal* __this, ::app::Uno::Buffer* buffer)
{
    __this->_drawables = ::app::Uno::Collections::List__Uno_Content_Models_ModelDrawable__New_1(NULL);
    __this->_buffer = buffer;
    __this->r = ::app::Uno::Runtime::Implementation::Internal::BufferReader__New_1(NULL, buffer);
}

PsgReaderInternal* PsgReaderInternal__New_1(::uStatic* __this, ::app::Uno::Buffer* buffer)
{
    PsgReaderInternal* inst = (PsgReaderInternal*)::uAllocObject(sizeof(PsgReaderInternal), PsgReaderInternal__typeof());
    inst->_ObjInit(buffer);
    return inst;
}

::uArray* PsgReaderInternal__ReadAnimationKeys__float(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, int keyStride, ::uDelegate* readValue)
{
    int size = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r)->ReadCompressedInt();
    ::uArray* keys = ::uNewArray(::app::Uno::Content::Splines::KeyframedSpline2_Key__float__float__typeof(), size / (keyStride + 8));

    for (int i = 0; i < keys->Length(); i++)
    {
        double time = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r)->ReadDouble(true);
        float value = ::uPtr< ::uDelegate*>(readValue)->Invoke< float, ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r);
        ::uPtr< ::uArray*>(keys)->Item< ::app::Uno::Content::Splines::KeyframedSpline2_Key__float__float>(i) = ::app::Uno::Content::Splines::KeyframedSpline2_Key__float__float__New_1(NULL, time, value);
    }

    return keys;
}

::uArray* PsgReaderInternal__ReadAnimationKeys__float2(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, int keyStride, ::uDelegate* readValue)
{
    int size = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r)->ReadCompressedInt();
    ::uArray* keys = ::uNewArray(::app::Uno::Content::Splines::KeyframedSpline2_Key__float2__float2__typeof(), size / (keyStride + 8));

    for (int i = 0; i < keys->Length(); i++)
    {
        double time = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r)->ReadDouble(true);
        ::app::Uno::Float2 value = ::uPtr< ::uDelegate*>(readValue)->Invoke< ::app::Uno::Float2, ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r);
        ::uPtr< ::uArray*>(keys)->Item< ::app::Uno::Content::Splines::KeyframedSpline2_Key__float2__float2>(i) = ::app::Uno::Content::Splines::KeyframedSpline2_Key__float2__float2__New_1(NULL, time, value);
    }

    return keys;
}

::uArray* PsgReaderInternal__ReadAnimationKeys__float3(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, int keyStride, ::uDelegate* readValue)
{
    int size = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r)->ReadCompressedInt();
    ::uArray* keys = ::uNewArray(::app::Uno::Content::Splines::KeyframedSpline2_Key__float3__float3__typeof(), size / (keyStride + 8));

    for (int i = 0; i < keys->Length(); i++)
    {
        double time = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r)->ReadDouble(true);
        ::app::Uno::Float3 value = ::uPtr< ::uDelegate*>(readValue)->Invoke< ::app::Uno::Float3, ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r);
        ::uPtr< ::uArray*>(keys)->Item< ::app::Uno::Content::Splines::KeyframedSpline2_Key__float3__float3>(i) = ::app::Uno::Content::Splines::KeyframedSpline2_Key__float3__float3__New_1(NULL, time, value);
    }

    return keys;
}

::uArray* PsgReaderInternal__ReadAnimationKeys__float4(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, int keyStride, ::uDelegate* readValue)
{
    int size = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r)->ReadCompressedInt();
    ::uArray* keys = ::uNewArray(::app::Uno::Content::Splines::KeyframedSpline2_Key__float4__float4__typeof(), size / (keyStride + 8));

    for (int i = 0; i < keys->Length(); i++)
    {
        double time = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r)->ReadDouble(true);
        ::app::Uno::Float4 value = ::uPtr< ::uDelegate*>(readValue)->Invoke< ::app::Uno::Float4, ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r);
        ::uPtr< ::uArray*>(keys)->Item< ::app::Uno::Content::Splines::KeyframedSpline2_Key__float4__float4>(i) = ::app::Uno::Content::Splines::KeyframedSpline2_Key__float4__float4__New_1(NULL, time, value);
    }

    return keys;
}

::uArray* PsgReaderInternal__ReadAnimationKeys__float4x4(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, int keyStride, ::uDelegate* readValue)
{
    int size = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r)->ReadCompressedInt();
    ::uArray* keys = ::uNewArray(::app::Uno::Content::Splines::KeyframedSpline2_Key__float4x4__float4x4__typeof(), size / (keyStride + 8));

    for (int i = 0; i < keys->Length(); i++)
    {
        double time = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r)->ReadDouble(true);
        ::app::Uno::Float4x4 value = ::uPtr< ::uDelegate*>(readValue)->Invoke< ::app::Uno::Float4x4, ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r);
        ::uPtr< ::uArray*>(keys)->Item< ::app::Uno::Content::Splines::KeyframedSpline2_Key__float4x4__float4x4>(i) = ::app::Uno::Content::Splines::KeyframedSpline2_Key__float4x4__float4x4__New_1(NULL, time, value);
    }

    return keys;
}

::uObject* PsgReaderInternal__ReadAnimationLinearSpline(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, int keyStride, ::uDelegate* readKey)
{
    switch (keyStride)
    {
        case 4:
        {
            return (::uObject*)::app::Uno::Content::Splines::LinearSplineFloat__New_2(NULL, PsgReaderInternal__ReadAnimationKeys__float(NULL, r, keyStride, ::uCast< ::uDelegate*>(readKey, ::app::Uno::Func__Uno_Runtime_Implementation_Internal_BufferReader__float__typeof())));
        }
        case 8:
        {
            return (::uObject*)::app::Uno::Content::Splines::LinearSplineFloat2__New_2(NULL, PsgReaderInternal__ReadAnimationKeys__float2(NULL, r, keyStride, ::uCast< ::uDelegate*>(readKey, ::app::Uno::Func__Uno_Runtime_Implementation_Internal_BufferReader__float2__typeof())));
        }
        case 12:
        {
            return (::uObject*)::app::Uno::Content::Splines::LinearSplineFloat3__New_2(NULL, PsgReaderInternal__ReadAnimationKeys__float3(NULL, r, keyStride, ::uCast< ::uDelegate*>(readKey, ::app::Uno::Func__Uno_Runtime_Implementation_Internal_BufferReader__float3__typeof())));
        }
        case 16:
        {
            return (::uObject*)::app::Uno::Content::Splines::LinearSplineFloat4__New_2(NULL, PsgReaderInternal__ReadAnimationKeys__float4(NULL, r, keyStride, ::uCast< ::uDelegate*>(readKey, ::app::Uno::Func__Uno_Runtime_Implementation_Internal_BufferReader__float4__typeof())));
        }
        case 64:
        {
            return (::uObject*)::app::Uno::Content::Splines::LinearSplineFloat4x4__New_2(NULL, PsgReaderInternal__ReadAnimationKeys__float4x4(NULL, r, keyStride, ::uCast< ::uDelegate*>(readKey, ::app::Uno::Func__Uno_Runtime_Implementation_Internal_BufferReader__float4x4__typeof())));
        }
        default:
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Unsupported LinearSpline animation")));
        }
    }
}

::app::Uno::Content::Splines::FullsampledSpline__float* PsgReaderInternal__ReadAnimationSampledSpline__float(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, int keyStride, ::uDelegate* readKey)
{
    double start = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r)->ReadDouble(true);
    double fps = r->ReadDouble(true);
    int size = r->ReadCompressedInt();
    ::uArray* keys = ::uNewArray(::app::Uno::Float__typeof(), size / keyStride);

    for (int i = 0; i < keys->Length(); i++)
    {
        keys->Item< float>(i) = ::uPtr< ::uDelegate*>(readKey)->Invoke< float, ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r);
    }

    return ::app::Uno::Content::Splines::FullsampledSpline__float__New_1(NULL, start, fps, keys);
}

::app::Uno::Content::Splines::FullsampledSpline__float2* PsgReaderInternal__ReadAnimationSampledSpline__float2(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, int keyStride, ::uDelegate* readKey)
{
    double start = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r)->ReadDouble(true);
    double fps = r->ReadDouble(true);
    int size = r->ReadCompressedInt();
    ::uArray* keys = ::uNewArray(::app::Uno::Float2__typeof(), size / keyStride);

    for (int i = 0; i < keys->Length(); i++)
    {
        keys->Item< ::app::Uno::Float2>(i) = ::uPtr< ::uDelegate*>(readKey)->Invoke< ::app::Uno::Float2, ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r);
    }

    return ::app::Uno::Content::Splines::FullsampledSpline__float2__New_1(NULL, start, fps, keys);
}

::app::Uno::Content::Splines::FullsampledSpline__float3* PsgReaderInternal__ReadAnimationSampledSpline__float3(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, int keyStride, ::uDelegate* readKey)
{
    double start = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r)->ReadDouble(true);
    double fps = r->ReadDouble(true);
    int size = r->ReadCompressedInt();
    ::uArray* keys = ::uNewArray(::app::Uno::Float3__typeof(), size / keyStride);

    for (int i = 0; i < keys->Length(); i++)
    {
        keys->Item< ::app::Uno::Float3>(i) = ::uPtr< ::uDelegate*>(readKey)->Invoke< ::app::Uno::Float3, ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r);
    }

    return ::app::Uno::Content::Splines::FullsampledSpline__float3__New_1(NULL, start, fps, keys);
}

::app::Uno::Content::Splines::FullsampledSpline__float4* PsgReaderInternal__ReadAnimationSampledSpline__float4(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, int keyStride, ::uDelegate* readKey)
{
    double start = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r)->ReadDouble(true);
    double fps = r->ReadDouble(true);
    int size = r->ReadCompressedInt();
    ::uArray* keys = ::uNewArray(::app::Uno::Float4__typeof(), size / keyStride);

    for (int i = 0; i < keys->Length(); i++)
    {
        keys->Item< ::app::Uno::Float4>(i) = ::uPtr< ::uDelegate*>(readKey)->Invoke< ::app::Uno::Float4, ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r);
    }

    return ::app::Uno::Content::Splines::FullsampledSpline__float4__New_1(NULL, start, fps, keys);
}

::app::Uno::Content::Splines::FullsampledSpline__float4x4* PsgReaderInternal__ReadAnimationSampledSpline__float4x4(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, int keyStride, ::uDelegate* readKey)
{
    double start = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r)->ReadDouble(true);
    double fps = r->ReadDouble(true);
    int size = r->ReadCompressedInt();
    ::uArray* keys = ::uNewArray(::app::Uno::Float4x4__typeof(), size / keyStride);

    for (int i = 0; i < keys->Length(); i++)
    {
        keys->Item< ::app::Uno::Float4x4>(i) = ::uPtr< ::uDelegate*>(readKey)->Invoke< ::app::Uno::Float4x4, ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r);
    }

    return ::app::Uno::Content::Splines::FullsampledSpline__float4x4__New_1(NULL, start, fps, keys);
}

void PsgReaderInternal__ReadBlocks(PsgReaderInternal* __this)
{
    while (true)
    {
        int blockType = (int)::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->ReadByte();

        switch (blockType)
        {
            case 1:
            {
                __this->ReadBufferList();
                break;
            }
            case 2:
            {
                __this->ReadParameterList();
                break;
            }
            case 3:
            {
                __this->ReadMeshList();
                break;
            }
            case 4:
            {
                __this->ReadMaterialList();
                break;
            }
            case 0:
            default:
            {
                return;
            }
        }
    }
}

void PsgReaderInternal__ReadBufferList(PsgReaderInternal* __this)
{
    int buffersCount = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->ReadCompressedInt();
    __this->_bufferOffsets = ::uNewArray(::app::Uno::Int__typeof(), buffersCount);

    for (int i = 0; i < buffersCount; i++)
    {
        int bufferLength = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->ReadCompressedInt();
        ::uPtr< ::uArray*>(__this->_bufferOffsets)->Item< int>(i) = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->Position();
        ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->Position(::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->Position() + bufferLength);
    }
}

void PsgReaderInternal__ReadHeader(PsgReaderInternal* __this)
{
    ::uUInt magic = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->ReadUInt(true);

    if (magic != 38228816u)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid magic number")));
    }

    __this->_name = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->ReadString();
}

::app::Uno::Content::Models::ModelMaterial* PsgReaderInternal__ReadMaterial(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, ::uArray* parameters)
{
    ::uString* name = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r)->ReadString();
    ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_ModelParameter* dict = ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_ModelParameter__New_1(NULL);
    int paramCount = r->ReadCompressedInt();

    for (int i = 0; i < paramCount; i++)
    {
        ::uString* key = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r)->ReadString();
        int index = r->ReadCompressedInt();
        ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_ModelParameter*>(dict)->Add(key, ::uPtr< ::uArray*>(parameters)->Item< ::app::Uno::Content::Models::ModelParameter*>(index));
    }

    return ::app::Uno::Content::Models::ModelMaterial__New_1(NULL, name, dict);
}

void PsgReaderInternal__ReadMaterialList(PsgReaderInternal* __this)
{
    int materialCount = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->ReadCompressedInt();
    __this->_materials = ::uNewArray(::app::Uno::Content::Models::ModelMaterial__typeof(), materialCount);

    for (int i = 0; i < materialCount; i++)
    {
        ::uPtr< ::uArray*>(__this->_materials)->ItemStrong< ::app::Uno::Content::Models::ModelMaterial*>(i) = PsgReaderInternal__ReadMaterial(NULL, __this->r, __this->_parameters);
    }
}

::app::Uno::Content::Models::ModelMesh* PsgReaderInternal__ReadMesh(PsgReaderInternal* __this)
{
    ::uString* name = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->ReadString();
    int primitiveType = (int)::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->ReadByte();
    int vertexCount = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->ReadCompressedInt();
    ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray* vertexAttributes = ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray__New_1(NULL);
    int attributeCount = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->ReadCompressedInt();

    for (int i = 0; i < attributeCount; i++)
    {
        ::uString* semantics = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->ReadString();
        int attributeType = (int)::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->ReadByte();
        int bufferIndex = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->ReadCompressedInt();
        ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray*>(vertexAttributes)->Item(semantics, ::app::Uno::Content::Models::VertexAttributeArray__New_9(NULL, attributeType, ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->CreateReadOnlySubBuffer(::uPtr< ::uArray*>(__this->_bufferOffsets)->Item< int>(bufferIndex), ::app::Uno::Graphics::VertexAttributeTypeHelpers__GetStrideInBytes(NULL, attributeType) * vertexCount)));
    }

    ::app::Uno::Content::Models::IndexArray* indices = NULL;
    int indexCount = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->ReadCompressedInt();

    if (indexCount > 0)
    {
        ::uByte indexStride = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->ReadByte();
        int indexType = (indexStride == 1) ? 1 : ((indexStride == 2) ? 2 : 4);
        int bufferIndex = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->ReadCompressedInt();
        indices = ::app::Uno::Content::Models::IndexArray__New_4(NULL, indexType, ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->CreateReadOnlySubBuffer(::uPtr< ::uArray*>(__this->_bufferOffsets)->Item< int>(bufferIndex), ::app::Uno::Graphics::IndexTypeHelpers__GetStrideInBytes(NULL, indexType) * indexCount));
    }

    return ::app::Uno::Content::Models::ModelMesh__New_1(NULL, name, primitiveType, vertexAttributes, indices);
}

void PsgReaderInternal__ReadMeshList(PsgReaderInternal* __this)
{
    int meshCount = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->ReadCompressedInt();
    __this->_meshes = ::uNewArray(::app::Uno::Content::Models::ModelMesh__typeof(), meshCount);

    for (int i = 0; i < meshCount; i++)
    {
        ::uPtr< ::uArray*>(__this->_meshes)->ItemStrong< ::app::Uno::Content::Models::ModelMesh*>(i) = __this->ReadMesh();
    }
}

::app::Uno::Content::Models::Model* PsgReaderInternal__ReadModel(PsgReaderInternal* __this)
{
    __this->ReadHeader();
    __this->ReadBlocks();
    __this->ReadNodes();
    return ::app::Uno::Content::Models::Model__New_1(NULL, __this->_name, ::uPtr< ::app::Uno::Collections::List__Uno_Content_Models_ModelDrawable*>(__this->_drawables)->ToArray(), ::uPtr< ::uArray*>(__this->_nodes)->Item< ::app::Uno::Content::Models::ModelNode*>(__this->_rootNodeIndex));
}

void PsgReaderInternal__ReadNodes(PsgReaderInternal* __this)
{
    int count = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->ReadCompressedInt();
    __this->_nodes = ::uNewArray(::app::Uno::Content::Models::ModelNode__typeof(), count);

    for (int i = 0; i < count; i++)
    {
        ::uPtr< ::uArray*>(__this->_nodes)->ItemStrong< ::app::Uno::Content::Models::ModelNode*>(i) = ::uPtr< ::app::Uno::Content::Models::PsgReaderInternal_NodeReaderInternal*>(::app::Uno::Content::Models::PsgReaderInternal_NodeReaderInternal__New_1(NULL, __this))->ReadNode();
    }

    __this->_rootNodeIndex = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->ReadCompressedInt();
}

::app::Uno::Content::Models::ModelParameter* PsgReaderInternal__ReadParameter(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, ::uArray* parameters)
{
    int valueType = (int)::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r)->ReadByte();

    switch (valueType)
    {
        case 7:
        {
            {
                int itemType = (int)::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r)->ReadByte();

                switch (itemType)
                {
                    case 1:
                    {
                        return (::app::Uno::Content::Models::ModelParameter*)PsgReaderInternal__ReadParameterList__float(NULL, r, parameters, itemType);
                    }
                    case 2:
                    {
                        return (::app::Uno::Content::Models::ModelParameter*)PsgReaderInternal__ReadParameterList__float2(NULL, r, parameters, itemType);
                    }
                    case 3:
                    {
                        return (::app::Uno::Content::Models::ModelParameter*)PsgReaderInternal__ReadParameterList__float3(NULL, r, parameters, itemType);
                    }
                    case 4:
                    {
                        return (::app::Uno::Content::Models::ModelParameter*)PsgReaderInternal__ReadParameterList__float4(NULL, r, parameters, itemType);
                    }
                    case 5:
                    {
                        return (::app::Uno::Content::Models::ModelParameter*)PsgReaderInternal__ReadParameterList__float4x4(NULL, r, parameters, itemType);
                    }
                    case 6:
                    {
                        return (::app::Uno::Content::Models::ModelParameter*)PsgReaderInternal__ReadParameterList__string(NULL, r, parameters, itemType);
                    }
                }
            }

            break;
        }
        case 6:
        {
            if ((int)::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r)->ReadByte() != 0)
            {
                break;
            }

            return (::app::Uno::Content::Models::ModelParameter*)::app::Uno::Content::Models::ModelParameter__string__New_1(NULL, valueType, ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r)->ReadString());
        }
        case 1:
        {
            return (::app::Uno::Content::Models::ModelParameter*)PsgReaderInternal__ReadParameter__float(NULL, r, valueType, 4, ::uNewDelegateNonVirt(::app::Uno::Func__Uno_Runtime_Implementation_Internal_BufferReader__float__typeof(), (const void*)::app::Uno::Runtime::Implementation::Internal::BufferReader__ReadFloat_1));
        }
        case 2:
        {
            return (::app::Uno::Content::Models::ModelParameter*)PsgReaderInternal__ReadParameter__float2(NULL, r, valueType, 8, ::uNewDelegateNonVirt(::app::Uno::Func__Uno_Runtime_Implementation_Internal_BufferReader__float2__typeof(), (const void*)::app::Uno::Runtime::Implementation::Internal::BufferReader__ReadFloat2_1));
        }
        case 3:
        {
            return (::app::Uno::Content::Models::ModelParameter*)PsgReaderInternal__ReadParameter__float3(NULL, r, valueType, 12, ::uNewDelegateNonVirt(::app::Uno::Func__Uno_Runtime_Implementation_Internal_BufferReader__float3__typeof(), (const void*)::app::Uno::Runtime::Implementation::Internal::BufferReader__ReadFloat3_1));
        }
        case 4:
        {
            return (::app::Uno::Content::Models::ModelParameter*)PsgReaderInternal__ReadParameter__float4(NULL, r, valueType, 16, ::uNewDelegateNonVirt(::app::Uno::Func__Uno_Runtime_Implementation_Internal_BufferReader__float4__typeof(), (const void*)::app::Uno::Runtime::Implementation::Internal::BufferReader__ReadFloat4_1));
        }
        case 5:
        {
            return (::app::Uno::Content::Models::ModelParameter*)PsgReaderInternal__ReadParameter__float4x4(NULL, r, valueType, 64, ::uNewDelegateNonVirt(::app::Uno::Func__Uno_Runtime_Implementation_Internal_BufferReader__float4x4__typeof(), (const void*)::app::Uno::Runtime::Implementation::Internal::BufferReader__ReadFloat4x4_1));
        }
    }

    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Unsupported model parameter")));
}

::app::Uno::Content::Models::ModelParameter__float* PsgReaderInternal__ReadParameter__float(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, int valueType, int valueStride, ::uDelegate* readValue)
{
    int type = (int)::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r)->ReadByte();

    switch (type)
    {
        case 1:
        {
            return (::app::Uno::Content::Models::ModelParameter__float*)PsgReaderInternal__ReadParameterAnimation__float(NULL, r, valueType, valueStride, readValue);
        }
        case 0:
        {
            return ::app::Uno::Content::Models::ModelParameter__float__New_1(NULL, valueType, ::uPtr< ::uDelegate*>(readValue)->Invoke< float, ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r));
        }
    }

    U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("Unsupported model parameter type <"), ::app::Uno::Int::ToString(type)), ::uGetConstString(">"))));
}

::app::Uno::Content::Models::ModelParameter__float2* PsgReaderInternal__ReadParameter__float2(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, int valueType, int valueStride, ::uDelegate* readValue)
{
    int type = (int)::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r)->ReadByte();

    switch (type)
    {
        case 1:
        {
            return (::app::Uno::Content::Models::ModelParameter__float2*)PsgReaderInternal__ReadParameterAnimation__float2(NULL, r, valueType, valueStride, readValue);
        }
        case 0:
        {
            return ::app::Uno::Content::Models::ModelParameter__float2__New_1(NULL, valueType, ::uPtr< ::uDelegate*>(readValue)->Invoke< ::app::Uno::Float2, ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r));
        }
    }

    U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("Unsupported model parameter type <"), ::app::Uno::Int::ToString(type)), ::uGetConstString(">"))));
}

::app::Uno::Content::Models::ModelParameter__float3* PsgReaderInternal__ReadParameter__float3(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, int valueType, int valueStride, ::uDelegate* readValue)
{
    int type = (int)::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r)->ReadByte();

    switch (type)
    {
        case 1:
        {
            return (::app::Uno::Content::Models::ModelParameter__float3*)PsgReaderInternal__ReadParameterAnimation__float3(NULL, r, valueType, valueStride, readValue);
        }
        case 0:
        {
            return ::app::Uno::Content::Models::ModelParameter__float3__New_1(NULL, valueType, ::uPtr< ::uDelegate*>(readValue)->Invoke< ::app::Uno::Float3, ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r));
        }
    }

    U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("Unsupported model parameter type <"), ::app::Uno::Int::ToString(type)), ::uGetConstString(">"))));
}

::app::Uno::Content::Models::ModelParameter__float4* PsgReaderInternal__ReadParameter__float4(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, int valueType, int valueStride, ::uDelegate* readValue)
{
    int type = (int)::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r)->ReadByte();

    switch (type)
    {
        case 1:
        {
            return (::app::Uno::Content::Models::ModelParameter__float4*)PsgReaderInternal__ReadParameterAnimation__float4(NULL, r, valueType, valueStride, readValue);
        }
        case 0:
        {
            return ::app::Uno::Content::Models::ModelParameter__float4__New_1(NULL, valueType, ::uPtr< ::uDelegate*>(readValue)->Invoke< ::app::Uno::Float4, ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r));
        }
    }

    U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("Unsupported model parameter type <"), ::app::Uno::Int::ToString(type)), ::uGetConstString(">"))));
}

::app::Uno::Content::Models::ModelParameter__float4x4* PsgReaderInternal__ReadParameter__float4x4(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, int valueType, int valueStride, ::uDelegate* readValue)
{
    int type = (int)::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r)->ReadByte();

    switch (type)
    {
        case 1:
        {
            return (::app::Uno::Content::Models::ModelParameter__float4x4*)PsgReaderInternal__ReadParameterAnimation__float4x4(NULL, r, valueType, valueStride, readValue);
        }
        case 0:
        {
            return ::app::Uno::Content::Models::ModelParameter__float4x4__New_1(NULL, valueType, ::uPtr< ::uDelegate*>(readValue)->Invoke< ::app::Uno::Float4x4, ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r));
        }
    }

    U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("Unsupported model parameter type <"), ::app::Uno::Int::ToString(type)), ::uGetConstString(">"))));
}

::app::Uno::Content::Models::ModelParameterAnimation__float* PsgReaderInternal__ReadParameterAnimation__float(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, int keyType, int keyStride, ::uDelegate* readKey)
{
    int type = (int)::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r)->ReadByte();

    switch (type)
    {
        case 0:
        {
            return ::app::Uno::Content::Models::ModelParameterAnimation__float__New_2(NULL, keyType, (::app::Uno::Content::Splines::Spline__float*)PsgReaderInternal__ReadAnimationSampledSpline__float(NULL, r, keyStride, readKey));
        }
        case 1:
        {
            return ::app::Uno::Content::Models::ModelParameterAnimation__float__New_2(NULL, keyType, ::uCast< ::app::Uno::Content::Splines::Spline__float*>(PsgReaderInternal__ReadAnimationLinearSpline(NULL, r, keyStride, (::uDelegate*)readKey), ::app::Uno::Content::Splines::Spline__float__typeof()));
        }
    }

    U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("Unsupported spline type <"), ::app::Uno::Int::ToString(type)), ::uGetConstString(">"))));
}

::app::Uno::Content::Models::ModelParameterAnimation__float2* PsgReaderInternal__ReadParameterAnimation__float2(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, int keyType, int keyStride, ::uDelegate* readKey)
{
    int type = (int)::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r)->ReadByte();

    switch (type)
    {
        case 0:
        {
            return ::app::Uno::Content::Models::ModelParameterAnimation__float2__New_2(NULL, keyType, (::app::Uno::Content::Splines::Spline__float2*)PsgReaderInternal__ReadAnimationSampledSpline__float2(NULL, r, keyStride, readKey));
        }
        case 1:
        {
            return ::app::Uno::Content::Models::ModelParameterAnimation__float2__New_2(NULL, keyType, ::uCast< ::app::Uno::Content::Splines::Spline__float2*>(PsgReaderInternal__ReadAnimationLinearSpline(NULL, r, keyStride, (::uDelegate*)readKey), ::app::Uno::Content::Splines::Spline__float2__typeof()));
        }
    }

    U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("Unsupported spline type <"), ::app::Uno::Int::ToString(type)), ::uGetConstString(">"))));
}

::app::Uno::Content::Models::ModelParameterAnimation__float3* PsgReaderInternal__ReadParameterAnimation__float3(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, int keyType, int keyStride, ::uDelegate* readKey)
{
    int type = (int)::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r)->ReadByte();

    switch (type)
    {
        case 0:
        {
            return ::app::Uno::Content::Models::ModelParameterAnimation__float3__New_2(NULL, keyType, (::app::Uno::Content::Splines::Spline__float3*)PsgReaderInternal__ReadAnimationSampledSpline__float3(NULL, r, keyStride, readKey));
        }
        case 1:
        {
            return ::app::Uno::Content::Models::ModelParameterAnimation__float3__New_2(NULL, keyType, ::uCast< ::app::Uno::Content::Splines::Spline__float3*>(PsgReaderInternal__ReadAnimationLinearSpline(NULL, r, keyStride, (::uDelegate*)readKey), ::app::Uno::Content::Splines::Spline__float3__typeof()));
        }
    }

    U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("Unsupported spline type <"), ::app::Uno::Int::ToString(type)), ::uGetConstString(">"))));
}

::app::Uno::Content::Models::ModelParameterAnimation__float4* PsgReaderInternal__ReadParameterAnimation__float4(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, int keyType, int keyStride, ::uDelegate* readKey)
{
    int type = (int)::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r)->ReadByte();

    switch (type)
    {
        case 0:
        {
            return ::app::Uno::Content::Models::ModelParameterAnimation__float4__New_2(NULL, keyType, (::app::Uno::Content::Splines::Spline__float4*)PsgReaderInternal__ReadAnimationSampledSpline__float4(NULL, r, keyStride, readKey));
        }
        case 1:
        {
            return ::app::Uno::Content::Models::ModelParameterAnimation__float4__New_2(NULL, keyType, ::uCast< ::app::Uno::Content::Splines::Spline__float4*>(PsgReaderInternal__ReadAnimationLinearSpline(NULL, r, keyStride, (::uDelegate*)readKey), ::app::Uno::Content::Splines::Spline__float4__typeof()));
        }
    }

    U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("Unsupported spline type <"), ::app::Uno::Int::ToString(type)), ::uGetConstString(">"))));
}

::app::Uno::Content::Models::ModelParameterAnimation__float4x4* PsgReaderInternal__ReadParameterAnimation__float4x4(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, int keyType, int keyStride, ::uDelegate* readKey)
{
    int type = (int)::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r)->ReadByte();

    switch (type)
    {
        case 0:
        {
            return ::app::Uno::Content::Models::ModelParameterAnimation__float4x4__New_2(NULL, keyType, (::app::Uno::Content::Splines::Spline__float4x4*)PsgReaderInternal__ReadAnimationSampledSpline__float4x4(NULL, r, keyStride, readKey));
        }
        case 1:
        {
            return ::app::Uno::Content::Models::ModelParameterAnimation__float4x4__New_2(NULL, keyType, ::uCast< ::app::Uno::Content::Splines::Spline__float4x4*>(PsgReaderInternal__ReadAnimationLinearSpline(NULL, r, keyStride, (::uDelegate*)readKey), ::app::Uno::Content::Splines::Spline__float4x4__typeof()));
        }
    }

    U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::app::Uno::String__op_Addition_2(NULL, ::uGetConstString("Unsupported spline type <"), ::app::Uno::Int::ToString(type)), ::uGetConstString(">"))));
}

void PsgReaderInternal__ReadParameterList(PsgReaderInternal* __this)
{
    int parameterCount = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->ReadCompressedInt();
    __this->_parameters = ::uNewArray(::app::Uno::Content::Models::ModelParameter__typeof(), parameterCount);

    for (int i = 0; i < parameterCount; i++)
    {
        ::uPtr< ::uArray*>(__this->_parameters)->ItemStrong< ::app::Uno::Content::Models::ModelParameter*>(i) = PsgReaderInternal__ReadParameter(NULL, __this->r, __this->_parameters);
    }
}

::app::Uno::Content::Models::ModelParameterList__float* PsgReaderInternal__ReadParameterList__float(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, ::uArray* parameters, int itemType)
{
    ::uArray* items = ::uNewArray(::app::Uno::Content::Models::ModelParameter__float__typeof(), ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r)->ReadCompressedInt());

    for (int i = 0; i < items->Length(); i++)
    {
        items->ItemStrong< ::app::Uno::Content::Models::ModelParameter__float*>(i) = ::uCast< ::app::Uno::Content::Models::ModelParameter__float*>(::uPtr< ::uArray*>(parameters)->Item< ::app::Uno::Content::Models::ModelParameter*>(r->ReadCompressedInt()), ::app::Uno::Content::Models::ModelParameter__float__typeof());
    }

    return ::app::Uno::Content::Models::ModelParameterList__float__New_1(NULL, itemType, items);
}

::app::Uno::Content::Models::ModelParameterList__float2* PsgReaderInternal__ReadParameterList__float2(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, ::uArray* parameters, int itemType)
{
    ::uArray* items = ::uNewArray(::app::Uno::Content::Models::ModelParameter__float2__typeof(), ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r)->ReadCompressedInt());

    for (int i = 0; i < items->Length(); i++)
    {
        items->ItemStrong< ::app::Uno::Content::Models::ModelParameter__float2*>(i) = ::uCast< ::app::Uno::Content::Models::ModelParameter__float2*>(::uPtr< ::uArray*>(parameters)->Item< ::app::Uno::Content::Models::ModelParameter*>(r->ReadCompressedInt()), ::app::Uno::Content::Models::ModelParameter__float2__typeof());
    }

    return ::app::Uno::Content::Models::ModelParameterList__float2__New_1(NULL, itemType, items);
}

::app::Uno::Content::Models::ModelParameterList__float3* PsgReaderInternal__ReadParameterList__float3(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, ::uArray* parameters, int itemType)
{
    ::uArray* items = ::uNewArray(::app::Uno::Content::Models::ModelParameter__float3__typeof(), ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r)->ReadCompressedInt());

    for (int i = 0; i < items->Length(); i++)
    {
        items->ItemStrong< ::app::Uno::Content::Models::ModelParameter__float3*>(i) = ::uCast< ::app::Uno::Content::Models::ModelParameter__float3*>(::uPtr< ::uArray*>(parameters)->Item< ::app::Uno::Content::Models::ModelParameter*>(r->ReadCompressedInt()), ::app::Uno::Content::Models::ModelParameter__float3__typeof());
    }

    return ::app::Uno::Content::Models::ModelParameterList__float3__New_1(NULL, itemType, items);
}

::app::Uno::Content::Models::ModelParameterList__float4* PsgReaderInternal__ReadParameterList__float4(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, ::uArray* parameters, int itemType)
{
    ::uArray* items = ::uNewArray(::app::Uno::Content::Models::ModelParameter__float4__typeof(), ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r)->ReadCompressedInt());

    for (int i = 0; i < items->Length(); i++)
    {
        items->ItemStrong< ::app::Uno::Content::Models::ModelParameter__float4*>(i) = ::uCast< ::app::Uno::Content::Models::ModelParameter__float4*>(::uPtr< ::uArray*>(parameters)->Item< ::app::Uno::Content::Models::ModelParameter*>(r->ReadCompressedInt()), ::app::Uno::Content::Models::ModelParameter__float4__typeof());
    }

    return ::app::Uno::Content::Models::ModelParameterList__float4__New_1(NULL, itemType, items);
}

::app::Uno::Content::Models::ModelParameterList__float4x4* PsgReaderInternal__ReadParameterList__float4x4(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, ::uArray* parameters, int itemType)
{
    ::uArray* items = ::uNewArray(::app::Uno::Content::Models::ModelParameter__float4x4__typeof(), ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r)->ReadCompressedInt());

    for (int i = 0; i < items->Length(); i++)
    {
        items->ItemStrong< ::app::Uno::Content::Models::ModelParameter__float4x4*>(i) = ::uCast< ::app::Uno::Content::Models::ModelParameter__float4x4*>(::uPtr< ::uArray*>(parameters)->Item< ::app::Uno::Content::Models::ModelParameter*>(r->ReadCompressedInt()), ::app::Uno::Content::Models::ModelParameter__float4x4__typeof());
    }

    return ::app::Uno::Content::Models::ModelParameterList__float4x4__New_1(NULL, itemType, items);
}

::app::Uno::Content::Models::ModelParameterList__string* PsgReaderInternal__ReadParameterList__string(::uStatic* __this, ::app::Uno::Runtime::Implementation::Internal::BufferReader* r, ::uArray* parameters, int itemType)
{
    ::uArray* items = ::uNewArray(::app::Uno::Content::Models::ModelParameter__string__typeof(), ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(r)->ReadCompressedInt());

    for (int i = 0; i < items->Length(); i++)
    {
        items->ItemStrong< ::app::Uno::Content::Models::ModelParameter__string*>(i) = ::uCast< ::app::Uno::Content::Models::ModelParameter__string*>(::uPtr< ::uArray*>(parameters)->Item< ::app::Uno::Content::Models::ModelParameter*>(r->ReadCompressedInt()), ::app::Uno::Content::Models::ModelParameter__string__typeof());
    }

    return ::app::Uno::Content::Models::ModelParameterList__string__New_1(NULL, itemType, items);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PsgReaderInternal_NodeReaderInternal__uType* PsgReaderInternal_NodeReaderInternal__typeof()
{
    static ::uStaticStrong<PsgReaderInternal_NodeReaderInternal__uType*> type;
    if (type != NULL) return type;

    type = (PsgReaderInternal_NodeReaderInternal__uType*)::uAllocClassType(sizeof(PsgReaderInternal_NodeReaderInternal__uType), "Uno.Content.Models.PsgReaderInternal.NodeReaderInternal", false, 0, 7, 0);

    type->SetStrongRefs(
        "_children", offsetof(PsgReaderInternal_NodeReaderInternal, _children),
        "_drawables", offsetof(PsgReaderInternal_NodeReaderInternal, _drawables),
        "_model", offsetof(PsgReaderInternal_NodeReaderInternal, _model),
        "_parameters", offsetof(PsgReaderInternal_NodeReaderInternal, _parameters),
        "_skins", offsetof(PsgReaderInternal_NodeReaderInternal, _skins),
        "_transforms", offsetof(PsgReaderInternal_NodeReaderInternal, _transforms),
        "r", offsetof(PsgReaderInternal_NodeReaderInternal, r));

    return type;
}

void PsgReaderInternal_NodeReaderInternal___ObjInit(PsgReaderInternal_NodeReaderInternal* __this, ::app::Uno::Content::Models::PsgReaderInternal* model)
{
    __this->_transforms = ::app::Uno::Collections::List__Uno_Content_Models_ModelParameter_float4x4___New_1(NULL);
    __this->_parameters = ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_ModelParameter__New_1(NULL);
    __this->_drawables = ::app::Uno::Collections::List__Uno_Content_Models_ModelDrawable__New_1(NULL);
    __this->_skins = ::app::Uno::Collections::List__Uno_Content_Models_ModelSkin__New_1(NULL);
    __this->_children = ::app::Uno::Collections::List__Uno_Content_Models_ModelNode__New_1(NULL);
    __this->r = ::uPtr< ::app::Uno::Content::Models::PsgReaderInternal*>(model)->r;
    __this->_model = model;
}

PsgReaderInternal_NodeReaderInternal* PsgReaderInternal_NodeReaderInternal__New_1(::uStatic* __this, ::app::Uno::Content::Models::PsgReaderInternal* model)
{
    PsgReaderInternal_NodeReaderInternal* inst = (PsgReaderInternal_NodeReaderInternal*)::uAllocObject(sizeof(PsgReaderInternal_NodeReaderInternal), PsgReaderInternal_NodeReaderInternal__typeof());
    inst->_ObjInit(model);
    return inst;
}

void PsgReaderInternal_NodeReaderInternal__ReadDrawableList(PsgReaderInternal_NodeReaderInternal* __this)
{
    int nodeDrawablesCount = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->ReadCompressedInt();

    for (int i = 0; i < nodeDrawablesCount; i++)
    {
        int meshIndex = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->ReadCompressedInt();
        int materialIndex = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->ReadCompressedInt();
        ::app::Uno::Content::Models::ModelMesh* mesh = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Content::Models::PsgReaderInternal*>(__this->_model)->_meshes)->Item< ::app::Uno::Content::Models::ModelMesh*>(meshIndex);
        ::app::Uno::Content::Models::ModelMaterial* material = (materialIndex == -1) ? (::app::Uno::Content::Models::ModelMaterial*)NULL : ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Content::Models::PsgReaderInternal*>(__this->_model)->_materials)->Item< ::app::Uno::Content::Models::ModelMaterial*>(materialIndex);
        ::app::Uno::Content::Models::ModelDrawable* d = ::app::Uno::Content::Models::ModelDrawable__New_1(NULL, mesh, material);
        ::uPtr< ::app::Uno::Collections::List__Uno_Content_Models_ModelDrawable*>(__this->_drawables)->Add(d);
        ::uPtr< ::app::Uno::Collections::List__Uno_Content_Models_ModelDrawable*>(::uPtr< ::app::Uno::Content::Models::PsgReaderInternal*>(__this->_model)->_drawables)->Add(d);
    }
}

void PsgReaderInternal_NodeReaderInternal__ReadMeshParameterList(PsgReaderInternal_NodeReaderInternal* __this)
{
    int nodeParametersCount = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->ReadCompressedInt();

    for (int i = 0; i < nodeParametersCount; i++)
    {
        ::uString* name = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->ReadString();
        int index = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->ReadCompressedInt();
        ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_ModelParameter*>(__this->_parameters)->Item(name, ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Content::Models::PsgReaderInternal*>(__this->_model)->_parameters)->Item< ::app::Uno::Content::Models::ModelParameter*>(index));
    }
}

::app::Uno::Content::Models::ModelNode* PsgReaderInternal_NodeReaderInternal__ReadNode(PsgReaderInternal_NodeReaderInternal* __this)
{
    ::uString* nodeName = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->ReadString();
    __this->ReadTransforms();
    __this->ReadNodeBlocks();
    return ::app::Uno::Content::Models::ModelNode__New_2(NULL, nodeName, __this->_transforms, __this->_drawables, __this->_skins, __this->_parameters, __this->_children);
}

void PsgReaderInternal_NodeReaderInternal__ReadNodeBlocks(PsgReaderInternal_NodeReaderInternal* __this)
{
    while (true)
    {
        int blockType = (int)::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->ReadByte();

        switch (blockType)
        {
            case 1:
            {
                __this->ReadNodeList();
                break;
            }
            case 2:
            {
                __this->ReadMeshParameterList();
                break;
            }
            case 3:
            {
                __this->ReadDrawableList();
                break;
            }
            case 4:
            {
                __this->ReadSkinList();
                break;
            }
            case 0:
            default:
            {
                return;
            }
        }
    }
}

void PsgReaderInternal_NodeReaderInternal__ReadNodeList(PsgReaderInternal_NodeReaderInternal* __this)
{
    int nodeChildrenCount = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->ReadCompressedInt();

    for (int i = 0; i < nodeChildrenCount; i++)
    {
        ::uPtr< ::app::Uno::Collections::List__Uno_Content_Models_ModelNode*>(__this->_children)->Add(::uPtr< ::uArray*>(::uPtr< ::app::Uno::Content::Models::PsgReaderInternal*>(__this->_model)->_nodes)->Item< ::app::Uno::Content::Models::ModelNode*>(::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->ReadCompressedInt()));
    }
}

::app::Uno::Content::Models::ModelSkin* PsgReaderInternal_NodeReaderInternal__ReadSkin(PsgReaderInternal_NodeReaderInternal* __this)
{
    int skinFlags = (int)::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->ReadByte();
    ::app::Uno::Float4x4 bindPose = ((skinFlags & 1) == 1) ? ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->ReadFloat4x4(true) : ::app::Uno::Float4x4__get_Identity(NULL);
    ::app::Uno::Float4x4 skeletonRoot = ((skinFlags & 2) == 2) ? ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->ReadFloat4x4(true) : ::app::Uno::Float4x4__get_Identity(NULL);
    int boneCount = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->ReadCompressedInt();
    ::uArray* bones = ::uNewArray(::app::Uno::Content::Models::SkinBone__typeof(), boneCount);

    for (int i = 0; i < boneCount; i++)
    {
        bones->ItemStrong< ::app::Uno::Content::Models::SkinBone*>(i) = __this->ReadSkinBone();
    }

    int drawableCount = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->ReadCompressedInt();
    ::uArray* drawables = ::uNewArray(::app::Uno::Content::Models::SkinDrawable__typeof(), drawableCount);

    for (int i = 0; i < drawableCount; i++)
    {
        ::uPtr< ::app::Uno::Collections::List__Uno_Content_Models_ModelDrawable*>(::uPtr< ::app::Uno::Content::Models::PsgReaderInternal*>(__this->_model)->_drawables)->Add((::app::Uno::Content::Models::ModelDrawable*)(drawables->ItemStrong< ::app::Uno::Content::Models::SkinDrawable*>(i) = __this->ReadSkinDrawable(bones)));
    }

    return ::app::Uno::Content::Models::ModelSkin__New_1(NULL, bindPose, skeletonRoot, bones, drawables);
}

::app::Uno::Content::Models::SkinBone* PsgReaderInternal_NodeReaderInternal__ReadSkinBone(PsgReaderInternal_NodeReaderInternal* __this)
{
    ::app::Uno::Content::Models::ModelNode* node = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Content::Models::PsgReaderInternal*>(__this->_model)->_nodes)->Item< ::app::Uno::Content::Models::ModelNode*>(::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->ReadCompressedInt());
    ::app::Uno::Float4x4 bpi = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->ReadFloat4x4(true);
    return ::app::Uno::Content::Models::SkinBone__New_1(NULL, node, bpi);
}

::app::Uno::Content::Models::SkinDrawable* PsgReaderInternal_NodeReaderInternal__ReadSkinDrawable(PsgReaderInternal_NodeReaderInternal* __this, ::uArray* bones)
{
    int meshIndex = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->ReadCompressedInt();
    ::app::Uno::Content::Models::ModelMesh* mesh = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Content::Models::PsgReaderInternal*>(__this->_model)->_meshes)->Item< ::app::Uno::Content::Models::ModelMesh*>(meshIndex);
    int materialIndex = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->ReadCompressedInt();
    ::app::Uno::Content::Models::ModelMaterial* material = (materialIndex == -1) ? (::app::Uno::Content::Models::ModelMaterial*)NULL : ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Content::Models::PsgReaderInternal*>(__this->_model)->_materials)->Item< ::app::Uno::Content::Models::ModelMaterial*>(materialIndex);
    int vertexInfluenceCountTableLength = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->ReadCompressedInt();
    ::uArray* vertexInfluenceCountTable = ::uNewArray(::app::Uno::Int2__typeof(), vertexInfluenceCountTableLength);
    int totalVertexCount = 0;

    for (int i = 0; i < vertexInfluenceCountTableLength; i++)
    {
        int vertexCount = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->ReadCompressedInt();
        int influenceCountPerVertex = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->ReadCompressedInt();
        ::uPtr< ::uArray*>(vertexInfluenceCountTable)->Item< ::app::Uno::Int2>(i) = ::app::Uno::Int2__New_2(NULL, vertexCount, influenceCountPerVertex);
        totalVertexCount = totalVertexCount + vertexCount;
    }

    ::uArray* influences = ::uNewArray(::app::Uno::Content::Models::VertexInfluence__typeof(), totalVertexCount);
    int vertex = 0;

    for (int g = 0; g < vertexInfluenceCountTableLength; g++)
    {
        int vertexCount = ::uPtr< ::uArray*>(vertexInfluenceCountTable)->Item< ::app::Uno::Int2>(g).X;
        int influenceCountPerVertex = vertexInfluenceCountTable->Item< ::app::Uno::Int2>(g).Y;

        for (int v = 0; v < vertexCount; v++)
        {
            ::uArray* iIndices = ::uNewArray(::app::Uno::Int__typeof(), influenceCountPerVertex);
            ::uArray* iWeights = ::uNewArray(::app::Uno::Float__typeof(), influenceCountPerVertex);

            for (int vi = 0; vi < influenceCountPerVertex; vi++)
            {
                ::uPtr< ::uArray*>(iIndices)->Item< int>(vi) = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->ReadCompressedInt();
                ::uPtr< ::uArray*>(iWeights)->Item< float>(vi) = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->ReadFloat(true);
            }

            ::uPtr< ::uArray*>(influences)->ItemStrong< ::app::Uno::Content::Models::VertexInfluence*>(vertex++) = ::app::Uno::Content::Models::VertexInfluence__New_1(NULL, iIndices, iWeights);
        }
    }

    return ::app::Uno::Content::Models::SkinDrawable__New_2(NULL, mesh, material, influences);
}

void PsgReaderInternal_NodeReaderInternal__ReadSkinList(PsgReaderInternal_NodeReaderInternal* __this)
{
    int nodeSkinsCount = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->ReadCompressedInt();

    for (int i = 0; i < nodeSkinsCount; i++)
    {
        ::uPtr< ::app::Uno::Collections::List__Uno_Content_Models_ModelSkin*>(__this->_skins)->Add(__this->ReadSkin());
    }
}

void PsgReaderInternal_NodeReaderInternal__ReadTransforms(PsgReaderInternal_NodeReaderInternal* __this)
{
    int nodeTransformCount = ::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->ReadCompressedInt();

    for (int i = 0; i < nodeTransformCount; i++)
    {
        ::uPtr< ::app::Uno::Collections::List__Uno_Content_Models_ModelParameter_float4x4_*>(__this->_transforms)->Add(::uCast< ::app::Uno::Content::Models::ModelParameter__float4x4*>(::uPtr< ::uArray*>(::uPtr< ::app::Uno::Content::Models::PsgReaderInternal*>(__this->_model)->_parameters)->Item< ::app::Uno::Content::Models::ModelParameter*>(::uPtr< ::app::Uno::Runtime::Implementation::Internal::BufferReader*>(__this->r)->ReadCompressedInt()), ::app::Uno::Content::Models::ModelParameter__float4x4__typeof()));
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* PsgReaderInternal_PsgModelBlockType__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Content.Models.PsgReaderInternal.PsgModelBlockType", ::app::Uno::Int__typeof(), 5);

    type->SetLiterals(
        "End", 0LL,
        "BufferList", 1LL,
        "ParameterList", 2LL,
        "MeshList", 3LL,
        "MaterialList", 4LL);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* PsgReaderInternal_PsgNodeBlockType__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Content.Models.PsgReaderInternal.PsgNodeBlockType", ::app::Uno::Int__typeof(), 5);

    type->SetLiterals(
        "End", 0LL,
        "NodeList", 1LL,
        "ParameterList", 2LL,
        "DrawableList", 3LL,
        "SkinList", 4LL);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* PsgReaderInternal_PsgSkinFlags__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Content.Models.PsgReaderInternal.PsgSkinFlags", ::app::Uno::Int__typeof(), 2);

    type->SetLiterals(
        "BindPose", 1LL,
        "SkeletonRoot", 2LL);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* PsgReaderInternal_PsgSplineType__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Content.Models.PsgReaderInternal.PsgSplineType", ::app::Uno::Int__typeof(), 2);

    type->SetLiterals(
        "Sampled", 0LL,
        "Linear", 1LL);

    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SkinBone__uType* SkinBone__typeof()
{
    static ::uStaticStrong<SkinBone__uType*> type;
    if (type != NULL) return type;

    type = (SkinBone__uType*)::uAllocClassType(sizeof(SkinBone__uType), "Uno.Content.Models.SkinBone", false, 0, 1, 0);

    type->SetStrongRefs(
        "_node", offsetof(SkinBone, _node));

    type->SetFields(2,
        ::uNewField("_bindPoseInverse", NULL, offsetof(SkinBone, _bindPoseInverse), ::app::Uno::Float4x4__typeof()),
        ::uNewField("_node", NULL, offsetof(SkinBone, _node), ::app::Uno::Content::Models::ModelNode__typeof()));

    type->SetFunctions(3,
        ::uNewFunction("get_BindPoseInverse", SkinBone__get_BindPoseInverse, 0, false, ::app::Uno::Float4x4__typeof()),
        ::uNewFunction("get_Node", SkinBone__get_Node, 0, false, ::app::Uno::Content::Models::ModelNode__typeof()),
        ::uNewFunction(".ctor", SkinBone__New_1, 0, true, SkinBone__typeof(), ::app::Uno::Content::Models::ModelNode__typeof(), ::app::Uno::Float4x4__typeof()));

    ::uRegisterType(type);
    return type;
}

void SkinBone___ObjInit(SkinBone* __this, ::app::Uno::Content::Models::ModelNode* node, ::app::Uno::Float4x4 bindPoseInverse)
{
    __this->_node = node;
    __this->_bindPoseInverse = bindPoseInverse;
}

::app::Uno::Float4x4 SkinBone__get_BindPoseInverse(SkinBone* __this)
{
    return __this->_bindPoseInverse;
}

::app::Uno::Content::Models::ModelNode* SkinBone__get_Node(SkinBone* __this)
{
    return __this->_node;
}

SkinBone* SkinBone__New_1(::uStatic* __this, ::app::Uno::Content::Models::ModelNode* node, ::app::Uno::Float4x4 bindPoseInverse)
{
    SkinBone* inst = (SkinBone*)::uAllocObject(sizeof(SkinBone), SkinBone__typeof());
    inst->_ObjInit(node, bindPoseInverse);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SkinDrawable__uType* SkinDrawable__typeof()
{
    static ::uStaticStrong<SkinDrawable__uType*> type;
    if (type != NULL) return type;

    type = (SkinDrawable__uType*)::uAllocClassType(sizeof(SkinDrawable__uType), "Uno.Content.Models.SkinDrawable", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Content::Models::ModelDrawable__typeof());

    type->SetStrongRefs(
        "_vertexInfluences", offsetof(SkinDrawable, _vertexInfluences));

    type->SetFields(1,
        ::uNewField("_vertexInfluences", NULL, offsetof(SkinDrawable, _vertexInfluences), ::app::Uno::Collections::List__Uno_Content_Models_VertexInfluence__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_VertexInfluences", SkinDrawable__get_VertexInfluences, 0, false, ::app::Uno::Collections::IEnumerable__Uno_Content_Models_VertexInfluence__typeof()),
        ::uNewFunction(".ctor", SkinDrawable__New_2, 0, true, SkinDrawable__typeof(), ::app::Uno::Content::Models::ModelMesh__typeof(), ::app::Uno::Content::Models::ModelMaterial__typeof(), ::uGetArrayType(::app::Uno::Content::Models::VertexInfluence__typeof())));

    ::uRegisterType(type);
    return type;
}

void SkinDrawable___ObjInit_1(SkinDrawable* __this, ::app::Uno::Content::Models::ModelMesh* mesh, ::app::Uno::Content::Models::ModelMaterial* material, ::uArray* influences)
{
    ::uArray* array_123;
    int index_124 = int();
    int length_125 = int();
    __this->_vertexInfluences = ::app::Uno::Collections::List__Uno_Content_Models_VertexInfluence__New_1(NULL);
    ::app::Uno::Content::Models::ModelDrawable___ObjInit(__this, mesh, material);

    for (array_123 = influences, index_124 = 0, length_125 = ::uPtr< ::uArray*>(array_123)->Length(); index_124 < length_125; ++index_124)
    {
        ::app::Uno::Content::Models::VertexInfluence* i = ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Content::Models::VertexInfluence*>(index_124);
        ::uPtr< ::app::Uno::Collections::List__Uno_Content_Models_VertexInfluence*>(__this->_vertexInfluences)->Add(i);
    }
}

::uObject* SkinDrawable__get_VertexInfluences(SkinDrawable* __this)
{
    return (::uObject*)__this->_vertexInfluences;
}

SkinDrawable* SkinDrawable__New_2(::uStatic* __this, ::app::Uno::Content::Models::ModelMesh* mesh, ::app::Uno::Content::Models::ModelMaterial* material, ::uArray* influences)
{
    SkinDrawable* inst = (SkinDrawable*)::uAllocObject(sizeof(SkinDrawable), SkinDrawable__typeof());
    inst->_ObjInit_1(mesh, material, influences);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

VertexAttributeArray__uType* VertexAttributeArray__typeof()
{
    static ::uStaticStrong<VertexAttributeArray__uType*> type;
    if (type != NULL) return type;

    type = (VertexAttributeArray__uType*)::uAllocClassType(sizeof(VertexAttributeArray__uType), "Uno.Content.Models.VertexAttributeArray", false, 0, 1, 0);

    type->SetStrongRefs(
        "_buffer", offsetof(VertexAttributeArray, _buffer));

    type->SetFields(2,
        ::uNewField("_buffer", NULL, offsetof(VertexAttributeArray, _buffer), ::app::Uno::Buffer__typeof()),
        ::uNewField("_type", NULL, offsetof(VertexAttributeArray, _type), ::app::Uno::Graphics::VertexAttributeType__typeof()));

    type->SetFunctions(15,
        ::uNewFunction("get_Buffer", VertexAttributeArray__get_Buffer, 0, false, ::app::Uno::Buffer__typeof()),
        ::uNewFunction("get_Count", VertexAttributeArray__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Type", VertexAttributeArray__get_Type, 0, false, ::app::Uno::Graphics::VertexAttributeType__typeof()),
        ::uNewFunction("GetByte4", VertexAttributeArray__GetByte4, 0, false, ::app::Uno::Byte4__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetByte4Normalized", VertexAttributeArray__GetByte4Normalized, 0, false, ::app::Uno::Byte4__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetFloat4", VertexAttributeArray__GetFloat4, 0, false, ::app::Uno::Float4__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction(".ctor", VertexAttributeArray__New_1, 0, true, VertexAttributeArray__typeof(), ::uGetArrayType(::app::Uno::Float3__typeof())),
        ::uNewFunction(".ctor", VertexAttributeArray__New_2, 0, true, VertexAttributeArray__typeof(), ::uGetArrayType(::app::Uno::Float__typeof())),
        ::uNewFunction(".ctor", VertexAttributeArray__New_3, 0, true, VertexAttributeArray__typeof(), ::uGetArrayType(::app::Uno::Float2__typeof())),
        ::uNewFunction(".ctor", VertexAttributeArray__New_4, 0, true, VertexAttributeArray__typeof(), ::uGetArrayType(::app::Uno::Float4__typeof())),
        ::uNewFunction(".ctor", VertexAttributeArray__New_5, 0, true, VertexAttributeArray__typeof(), ::uGetArrayType(::app::Uno::SByte4__typeof()), ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", VertexAttributeArray__New_6, 0, true, VertexAttributeArray__typeof(), ::uGetArrayType(::app::Uno::UShort__typeof()), ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", VertexAttributeArray__New_7, 0, true, VertexAttributeArray__typeof(), ::uGetArrayType(::app::Uno::Short__typeof()), ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", VertexAttributeArray__New_8, 0, true, VertexAttributeArray__typeof(), ::uGetArrayType(::app::Uno::Byte4__typeof()), ::app::Uno::Bool__typeof()),
        ::uNewFunction(".ctor", VertexAttributeArray__New_9, 0, true, VertexAttributeArray__typeof(), ::app::Uno::Graphics::VertexAttributeType__typeof(), ::app::Uno::Buffer__typeof()));

    ::uRegisterType(type);
    return type;
}

void VertexAttributeArray___ObjInit(VertexAttributeArray* __this, ::uArray* data)
{
    __this->_ObjInit_8(1, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer(NULL, data));
}

void VertexAttributeArray___ObjInit_1(VertexAttributeArray* __this, ::uArray* data)
{
    __this->_ObjInit_8(2, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_1(NULL, data));
}

void VertexAttributeArray___ObjInit_2(VertexAttributeArray* __this, ::uArray* data)
{
    __this->_ObjInit_8(3, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_2(NULL, data));
}

void VertexAttributeArray___ObjInit_3(VertexAttributeArray* __this, ::uArray* data)
{
    __this->_ObjInit_8(4, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_3(NULL, data));
}

void VertexAttributeArray___ObjInit_4(VertexAttributeArray* __this, ::uArray* data, bool normalized)
{
    __this->_ObjInit_8(normalized ? 18 : 17, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_4(NULL, data));
}

void VertexAttributeArray___ObjInit_5(VertexAttributeArray* __this, ::uArray* data, bool normalized)
{
    __this->_ObjInit_8(normalized ? 12 : 11, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_6(NULL, data));
}

void VertexAttributeArray___ObjInit_6(VertexAttributeArray* __this, ::uArray* data, bool normalized)
{
    __this->_ObjInit_8(normalized ? 20 : 19, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_8(NULL, data));
}

void VertexAttributeArray___ObjInit_7(VertexAttributeArray* __this, ::uArray* data, bool normalized)
{
    __this->_ObjInit_8(normalized ? 6 : 5, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_9(NULL, data));
}

void VertexAttributeArray___ObjInit_8(VertexAttributeArray* __this, int type, ::app::Uno::Buffer* buffer)
{
    __this->_buffer = buffer;
    __this->_type = type;
}

::app::Uno::Buffer* VertexAttributeArray__get_Buffer(VertexAttributeArray* __this)
{
    return __this->_buffer;
}

int VertexAttributeArray__get_Count(VertexAttributeArray* __this)
{
    return ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->SizeInBytes() / ::app::Uno::Graphics::VertexAttributeTypeHelpers__GetStrideInBytes(NULL, __this->_type);
}

int VertexAttributeArray__get_Type(VertexAttributeArray* __this)
{
    return __this->_type;
}

::app::Uno::Byte4 VertexAttributeArray__GetByte4(VertexAttributeArray* __this, int index)
{
    if (__this->_type == 19)
    {
        return ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetByte4(index * 4);
    }
    else
    {
        ::app::Uno::Float4 v = __this->GetFloat4(index);
        return ::app::Uno::Byte4__New_2(NULL, (::uByte)v.X, (::uByte)v.Y, (::uByte)v.Z, (::uByte)v.W);
    }
}

::app::Uno::Byte4 VertexAttributeArray__GetByte4Normalized(VertexAttributeArray* __this, int index)
{
    if (__this->_type == 20)
    {
        return ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetByte4(index * 4);
    }
    else
    {
        ::app::Uno::Float4 v = ::app::Uno::Float4__op_Multiply_1(NULL, __this->GetFloat4(index), 255.0f);
        return ::app::Uno::Byte4__New_2(NULL, (::uByte)v.X, (::uByte)v.Y, (::uByte)v.Z, (::uByte)v.W);
    }
}

::app::Uno::Float4 VertexAttributeArray__GetFloat4(VertexAttributeArray* __this, int index)
{
    switch (__this->_type)
    {
        case 1:
        {
            {
                float v = ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetFloat(index * 4, true);
                return ::app::Uno::Float4__New_2(NULL, v, 0.0f, 0.0f, 0.0f);
            }
        }
        case 2:
        {
            {
                ::app::Uno::Float2 v = ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetFloat2((index * 4) * 2, true);
                return ::app::Uno::Float4__New_6(NULL, v, 0.0f, 0.0f);
            }
        }
        case 3:
        {
            {
                ::app::Uno::Float3 v = ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetFloat3((index * 4) * 3, true);
                return ::app::Uno::Float4__New_8(NULL, v, 0.0f);
            }
        }
        case 4:
        {
            {
                ::app::Uno::Float4 v = ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetFloat4((index * 4) * 4, true);
                return v;
            }
        }
        case 5:
        {
            {
                ::uShort v = ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetShort(index * 2, true);
                return ::app::Uno::Float4__New_2(NULL, (float)v, 0.0f, 0.0f, 0.0f);
            }
        }
        case 6:
        {
            {
                ::uShort v = ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetShort(index * 2, true);
                return ::app::Uno::Float4__op_Multiply_2(NULL, ::app::Uno::Float4__New_2(NULL, (float)v, 0.0f, 0.0f, 0.0f), ::app::Uno::Float4__New_1(NULL, 3.051851e-05f));
            }
        }
        case 7:
        {
            {
                ::app::Uno::Short2 v = ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetShort2((index * 2) * 2, true);
                return ::app::Uno::Float4__New_2(NULL, (float)v.X, (float)v.Y, 0.0f, 0.0f);
            }
        }
        case 8:
        {
            {
                ::app::Uno::Short2 v = ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetShort2((index * 2) * 2, true);
                return ::app::Uno::Float4__op_Multiply_2(NULL, ::app::Uno::Float4__New_2(NULL, (float)v.X, (float)v.Y, 0.0f, 0.0f), ::app::Uno::Float4__New_1(NULL, 3.051851e-05f));
            }
        }
        case 9:
        {
            {
                ::app::Uno::Short4 v = ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetShort4((index * 2) * 4, true);
                return ::app::Uno::Float4__New_2(NULL, (float)v.X, (float)v.Y, (float)v.Z, (float)v.W);
            }
        }
        case 10:
        {
            {
                ::app::Uno::Short4 v = ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetShort4((index * 2) * 4, true);
                return ::app::Uno::Float4__op_Multiply_2(NULL, ::app::Uno::Float4__New_2(NULL, (float)v.X, (float)v.Y, (float)v.Z, (float)v.W), ::app::Uno::Float4__New_1(NULL, 3.051851e-05f));
            }
        }
        case 11:
        {
            {
                ::uUShort v = ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetUShort(index * 2, true);
                return ::app::Uno::Float4__New_2(NULL, (float)v, 0.0f, 0.0f, 0.0f);
            }
        }
        case 12:
        {
            {
                ::uUShort v = ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetUShort(index * 2, true);
                return ::app::Uno::Float4__op_Multiply_2(NULL, ::app::Uno::Float4__New_2(NULL, (float)v, 0.0f, 0.0f, 0.0f), ::app::Uno::Float4__New_1(NULL, 1.52590219e-05f));
            }
        }
        case 13:
        {
            {
                ::app::Uno::UShort2 v = ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetUShort2((index * 2) * 2, true);
                return ::app::Uno::Float4__New_2(NULL, (float)v.X, (float)v.Y, 0.0f, 0.0f);
            }
        }
        case 14:
        {
            {
                ::app::Uno::UShort2 v = ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetUShort2((index * 2) * 2, true);
                return ::app::Uno::Float4__op_Multiply_2(NULL, ::app::Uno::Float4__New_2(NULL, (float)v.X, (float)v.Y, 0.0f, 0.0f), ::app::Uno::Float4__New_1(NULL, 1.52590219e-05f));
            }
        }
        case 15:
        {
            {
                ::app::Uno::UShort4 v = ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetUShort4((index * 2) * 4, true);
                return ::app::Uno::Float4__New_2(NULL, (float)v.X, (float)v.Y, (float)v.Z, (float)v.W);
            }
        }
        case 16:
        {
            {
                ::app::Uno::UShort4 v = ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetUShort4((index * 2) * 4, true);
                return ::app::Uno::Float4__op_Multiply_2(NULL, ::app::Uno::Float4__New_2(NULL, (float)v.X, (float)v.Y, (float)v.Z, (float)v.W), ::app::Uno::Float4__New_1(NULL, 1.52590219e-05f));
            }
        }
        case 17:
        {
            {
                ::app::Uno::SByte4 v = ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetSByte4(index * 4);
                return ::app::Uno::Float4__New_2(NULL, (float)v.X, (float)v.Y, (float)v.Z, (float)v.W);
            }
        }
        case 18:
        {
            {
                ::app::Uno::SByte4 v = ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetSByte4(index * 4);
                return ::app::Uno::Float4__op_Multiply_2(NULL, ::app::Uno::Float4__New_2(NULL, (float)v.X, (float)v.Y, (float)v.Z, (float)v.W), ::app::Uno::Float4__New_1(NULL, 0.007874016f));
            }
        }
        case 19:
        {
            {
                ::app::Uno::Byte4 v = ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetByte4(index * 4);
                return ::app::Uno::Float4__New_2(NULL, (float)v.X, (float)v.Y, (float)v.Z, (float)v.W);
            }
        }
        case 20:
        {
            {
                ::app::Uno::Byte4 v = ::uPtr< ::app::Uno::Buffer*>(__this->_buffer)->GetByte4(index * 4);
                return ::app::Uno::Float4__op_Multiply_2(NULL, ::app::Uno::Float4__New_2(NULL, (float)v.X, (float)v.Y, (float)v.Z, (float)v.W), ::app::Uno::Float4__New_1(NULL, 0.003921569f));
            }
        }
        default:
        {
            return ::app::Uno::Float4__New_1(NULL, 0.0f);
        }
    }
}

VertexAttributeArray* VertexAttributeArray__New_1(::uStatic* __this, ::uArray* data)
{
    VertexAttributeArray* inst = (VertexAttributeArray*)::uAllocObject(sizeof(VertexAttributeArray), VertexAttributeArray__typeof());
    inst->_ObjInit_2(data);
    return inst;
}

VertexAttributeArray* VertexAttributeArray__New_2(::uStatic* __this, ::uArray* data)
{
    VertexAttributeArray* inst = (VertexAttributeArray*)::uAllocObject(sizeof(VertexAttributeArray), VertexAttributeArray__typeof());
    inst->_ObjInit(data);
    return inst;
}

VertexAttributeArray* VertexAttributeArray__New_3(::uStatic* __this, ::uArray* data)
{
    VertexAttributeArray* inst = (VertexAttributeArray*)::uAllocObject(sizeof(VertexAttributeArray), VertexAttributeArray__typeof());
    inst->_ObjInit_1(data);
    return inst;
}

VertexAttributeArray* VertexAttributeArray__New_4(::uStatic* __this, ::uArray* data)
{
    VertexAttributeArray* inst = (VertexAttributeArray*)::uAllocObject(sizeof(VertexAttributeArray), VertexAttributeArray__typeof());
    inst->_ObjInit_3(data);
    return inst;
}

VertexAttributeArray* VertexAttributeArray__New_5(::uStatic* __this, ::uArray* data, bool normalized)
{
    VertexAttributeArray* inst = (VertexAttributeArray*)::uAllocObject(sizeof(VertexAttributeArray), VertexAttributeArray__typeof());
    inst->_ObjInit_4(data, normalized);
    return inst;
}

VertexAttributeArray* VertexAttributeArray__New_6(::uStatic* __this, ::uArray* data, bool normalized)
{
    VertexAttributeArray* inst = (VertexAttributeArray*)::uAllocObject(sizeof(VertexAttributeArray), VertexAttributeArray__typeof());
    inst->_ObjInit_5(data, normalized);
    return inst;
}

VertexAttributeArray* VertexAttributeArray__New_7(::uStatic* __this, ::uArray* data, bool normalized)
{
    VertexAttributeArray* inst = (VertexAttributeArray*)::uAllocObject(sizeof(VertexAttributeArray), VertexAttributeArray__typeof());
    inst->_ObjInit_7(data, normalized);
    return inst;
}

VertexAttributeArray* VertexAttributeArray__New_8(::uStatic* __this, ::uArray* data, bool normalized)
{
    VertexAttributeArray* inst = (VertexAttributeArray*)::uAllocObject(sizeof(VertexAttributeArray), VertexAttributeArray__typeof());
    inst->_ObjInit_6(data, normalized);
    return inst;
}

VertexAttributeArray* VertexAttributeArray__New_9(::uStatic* __this, int type, ::app::Uno::Buffer* buffer)
{
    VertexAttributeArray* inst = (VertexAttributeArray*)::uAllocObject(sizeof(VertexAttributeArray), VertexAttributeArray__typeof());
    inst->_ObjInit_8(type, buffer);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

VertexAttributeSemantic__uType* VertexAttributeSemantic__typeof()
{
    static ::uStaticStrong<VertexAttributeSemantic__uType*> type;
    if (type != NULL) return type;

    type = (VertexAttributeSemantic__uType*)::uAllocClassType(sizeof(VertexAttributeSemantic__uType), "Uno.Content.Models.VertexAttributeSemantic");

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Content\Models\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

VertexInfluence__uType* VertexInfluence__typeof()
{
    static ::uStaticStrong<VertexInfluence__uType*> type;
    if (type != NULL) return type;

    type = (VertexInfluence__uType*)::uAllocClassType(sizeof(VertexInfluence__uType), "Uno.Content.Models.VertexInfluence", false, 0, 2, 0);

    type->SetStrongRefs(
        "_boneIndices", offsetof(VertexInfluence, _boneIndices),
        "_boneWeights", offsetof(VertexInfluence, _boneWeights));

    type->SetFields(2,
        ::uNewField("_boneIndices", NULL, offsetof(VertexInfluence, _boneIndices), ::uGetArrayType(::app::Uno::Int__typeof())),
        ::uNewField("_boneWeights", NULL, offsetof(VertexInfluence, _boneWeights), ::uGetArrayType(::app::Uno::Float__typeof())));

    type->SetFunctions(4,
        ::uNewFunction("get_InfluenceCount", VertexInfluence__get_InfluenceCount, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("GetBoneIndex", VertexInfluence__GetBoneIndex, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetBoneWeight", VertexInfluence__GetBoneWeight, 0, false, ::app::Uno::Float__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction(".ctor", VertexInfluence__New_1, 0, true, VertexInfluence__typeof(), ::uGetArrayType(::app::Uno::Int__typeof()), ::uGetArrayType(::app::Uno::Float__typeof())));

    ::uRegisterType(type);
    return type;
}

void VertexInfluence___ObjInit(VertexInfluence* __this, ::uArray* indices, ::uArray* weights)
{
    __this->_boneIndices = indices;
    __this->_boneWeights = weights;
}

int VertexInfluence__get_InfluenceCount(VertexInfluence* __this)
{
    return ::uPtr< ::uArray*>(__this->_boneIndices)->Length();
}

int VertexInfluence__GetBoneIndex(VertexInfluence* __this, int i)
{
    return ::uPtr< ::uArray*>(__this->_boneIndices)->Item< int>(i);
}

float VertexInfluence__GetBoneWeight(VertexInfluence* __this, int i)
{
    return ::uPtr< ::uArray*>(__this->_boneWeights)->Item< float>(i);
}

VertexInfluence* VertexInfluence__New_1(::uStatic* __this, ::uArray* indices, ::uArray* weights)
{
    VertexInfluence* inst = (VertexInfluence*)::uAllocObject(sizeof(VertexInfluence), VertexInfluence__typeof());
    inst->_ObjInit(indices, weights);
    return inst;
}

}}}}
