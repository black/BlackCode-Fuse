#include <app/Fuse.Drawing.Batching.Batch.h>
#include <app/Fuse.Drawing.Batching.BatchHelpers.h>
#include <app/Fuse.Drawing.Batching.BatchIndexBuffer.h>
#include <app/Fuse.Drawing.Batching.BatchVertexBuffer.h>
#include <app/Fuse.Drawing.Batching.Entry.h>
#include <app/Fuse.Drawing.Batching.MeshBatcher.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Byte4.h>
#include <app/Uno.Collections.Dictionary__int__int.h>
#include <app/Uno.Collections.Dictionary__string__Uno_Content_Models_VertexAt-1b8a56c1.h>
#include <app/Uno.Collections.EnumerableExtensions.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Batching_Batch.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Batching_Entry.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_strin-d9fcbc62.h>
#include <app/Uno.Collections.IEnumerable__Uno_Content_Models_ModelMesh.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_strin-d9f4a565.h>
#include <app/Uno.Collections.KeyValuePair__string__Uno_Content_Models_Vertex-7e6c5d3f.h>
#include <app/Uno.Collections.List__Fuse_Drawing_Batching_Batch.h>
#include <app/Uno.Collections.List__Fuse_Drawing_Batching_Entry.h>
#include <app/Uno.Content.Models.IndexArray.h>
#include <app/Uno.Content.Models.ModelMesh.h>
#include <app/Uno.Content.Models.VertexAttributeArray.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Func__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh.h>
#include <app/Uno.Graphics.BufferUsage.h>
#include <app/Uno.Graphics.DeviceBuffer.h>
#include <app/Uno.Graphics.IndexBuffer.h>
#include <app/Uno.Graphics.IndexType.h>
#include <app/Uno.Graphics.IndexTypeHelpers.h>
#include <app/Uno.Graphics.PrimitiveType.h>
#include <app/Uno.Graphics.VertexAttributeType.h>
#include <app/Uno.Graphics.VertexAttributeTypeHelpers.h>
#include <app/Uno.Graphics.VertexBuffer.h>
#include <app/Uno.Int.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Fuse_Drawi-b92436e2.h>
#include <app/Uno.SByte.h>
#include <app/Uno.Short.h>
#include <app/Uno.String.h>
#include <app/Uno.UInt.h>
#include <app/Uno.UShort.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Batching {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Batching\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Batch__uType* Batch__typeof()
{
    static ::uStaticStrong<Batch__uType*> type;
    if (type != NULL) return type;

    type = (Batch__uType*)::uAllocClassType(sizeof(Batch__uType), "Fuse.Drawing.Batching.Batch", false, 0, 25, 0);

    type->SetStrongRefs(
        "attrib0", offsetof(Batch, attrib0),
        "attrib1", offsetof(Batch, attrib1),
        "attrib2", offsetof(Batch, attrib2),
        "attrib3", offsetof(Batch, attrib3),
        "attrib4", offsetof(Batch, attrib4),
        "attrib5", offsetof(Batch, attrib5),
        "attrib6", offsetof(Batch, attrib6),
        "attrib7", offsetof(Batch, attrib7),
        "binormals", offsetof(Batch, binormals),
        "boneIndices", offsetof(Batch, boneIndices),
        "boneWeights", offsetof(Batch, boneWeights),
        "colors", offsetof(Batch, colors),
        "indexBuffer", offsetof(Batch, indexBuffer),
        "instanceIndex", offsetof(Batch, instanceIndex),
        "normals", offsetof(Batch, normals),
        "positions", offsetof(Batch, positions),
        "tangents", offsetof(Batch, tangents),
        "texCoord0s", offsetof(Batch, texCoord0s),
        "texCoord1s", offsetof(Batch, texCoord1s),
        "texCoord2s", offsetof(Batch, texCoord2s),
        "texCoord3s", offsetof(Batch, texCoord3s),
        "texCoord4s", offsetof(Batch, texCoord4s),
        "texCoord5s", offsetof(Batch, texCoord5s),
        "texCoord6s", offsetof(Batch, texCoord6s),
        "texCoord7s", offsetof(Batch, texCoord7s));

    type->SetFields(30,
        ::uNewField("attrib0", NULL, offsetof(Batch, attrib0), ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewField("attrib1", NULL, offsetof(Batch, attrib1), ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewField("attrib2", NULL, offsetof(Batch, attrib2), ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewField("attrib3", NULL, offsetof(Batch, attrib3), ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewField("attrib4", NULL, offsetof(Batch, attrib4), ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewField("attrib5", NULL, offsetof(Batch, attrib5), ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewField("attrib6", NULL, offsetof(Batch, attrib6), ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewField("attrib7", NULL, offsetof(Batch, attrib7), ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewField("binormals", NULL, offsetof(Batch, binormals), ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewField("boneIndices", NULL, offsetof(Batch, boneIndices), ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewField("boneWeights", NULL, offsetof(Batch, boneWeights), ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewField("colors", NULL, offsetof(Batch, colors), ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewField("explicitVertexCount", NULL, offsetof(Batch, explicitVertexCount), ::app::Uno::Int__typeof()),
        ::uNewField("hasExplicitVertexCount", NULL, offsetof(Batch, hasExplicitVertexCount), ::app::Uno::Bool__typeof()),
        ::uNewField("indexBuffer", NULL, offsetof(Batch, indexBuffer), ::app::Fuse::Drawing::Batching::BatchIndexBuffer__typeof()),
        ::uNewField("instanceIndex", NULL, offsetof(Batch, instanceIndex), ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewField("maxIndices", NULL, offsetof(Batch, maxIndices), ::app::Uno::Int__typeof()),
        ::uNewField("maxVertices", NULL, offsetof(Batch, maxVertices), ::app::Uno::Int__typeof()),
        ::uNewField("normals", NULL, offsetof(Batch, normals), ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewField("positions", NULL, offsetof(Batch, positions), ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewField("staticBatch", NULL, offsetof(Batch, staticBatch), ::app::Uno::Bool__typeof()),
        ::uNewField("tangents", NULL, offsetof(Batch, tangents), ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewField("texCoord0s", NULL, offsetof(Batch, texCoord0s), ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewField("texCoord1s", NULL, offsetof(Batch, texCoord1s), ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewField("texCoord2s", NULL, offsetof(Batch, texCoord2s), ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewField("texCoord3s", NULL, offsetof(Batch, texCoord3s), ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewField("texCoord4s", NULL, offsetof(Batch, texCoord4s), ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewField("texCoord5s", NULL, offsetof(Batch, texCoord5s), ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewField("texCoord6s", NULL, offsetof(Batch, texCoord6s), ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewField("texCoord7s", NULL, offsetof(Batch, texCoord7s), ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()));

    type->SetFunctions(55,
        ::uNewFunction("get_Attrib0Buffer", Batch__get_Attrib0Buffer, 0, false, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewFunction("get_Attrib1Buffer", Batch__get_Attrib1Buffer, 0, false, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewFunction("get_Attrib2Buffer", Batch__get_Attrib2Buffer, 0, false, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewFunction("get_Attrib3Buffer", Batch__get_Attrib3Buffer, 0, false, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewFunction("get_Attrib4Buffer", Batch__get_Attrib4Buffer, 0, false, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewFunction("get_Attrib5Buffer", Batch__get_Attrib5Buffer, 0, false, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewFunction("get_Attrib6Buffer", Batch__get_Attrib6Buffer, 0, false, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewFunction("get_Attrib7Buffer", Batch__get_Attrib7Buffer, 0, false, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewFunction("get_Binormals", Batch__get_Binormals, 0, false, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewFunction("get_BoneIndexBuffer", Batch__get_BoneIndexBuffer, 0, false, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewFunction("get_BoneWeightBuffer", Batch__get_BoneWeightBuffer, 0, false, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewFunction("get_Colors", Batch__get_Colors, 0, false, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewFunction("get_IndexBuffer", Batch__get_IndexBuffer, 0, false, ::app::Uno::Graphics::IndexBuffer__typeof()),
        ::uNewFunction("get_IndexType", Batch__get_IndexType, 0, false, ::app::Uno::Graphics::IndexType__typeof()),
        ::uNewFunction("get_Indices", Batch__get_Indices, 0, false, ::app::Fuse::Drawing::Batching::BatchIndexBuffer__typeof()),
        ::uNewFunction("get_InstanceIndices", Batch__get_InstanceIndices, 0, false, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewFunction("get_Normals", Batch__get_Normals, 0, false, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewFunction("get_Positions", Batch__get_Positions, 0, false, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewFunction("get_Tangents", Batch__get_Tangents, 0, false, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewFunction("get_TexCoord0s", Batch__get_TexCoord0s, 0, false, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewFunction("get_TexCoord1s", Batch__get_TexCoord1s, 0, false, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewFunction("get_TexCoord2s", Batch__get_TexCoord2s, 0, false, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewFunction("get_TexCoord3s", Batch__get_TexCoord3s, 0, false, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewFunction("get_TexCoord4s", Batch__get_TexCoord4s, 0, false, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewFunction("get_TexCoord5s", Batch__get_TexCoord5s, 0, false, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewFunction("get_TexCoord6s", Batch__get_TexCoord6s, 0, false, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewFunction("get_TexCoord7s", Batch__get_TexCoord7s, 0, false, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewFunction("get_VertexCount", Batch__get_VertexCount, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction(".ctor", Batch__New_1, 0, true, Batch__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Attrib0Buffer", Batch__set_Attrib0Buffer, 0, false, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewFunctionVoid("set_Attrib1Buffer", Batch__set_Attrib1Buffer, 0, false, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewFunctionVoid("set_Attrib2Buffer", Batch__set_Attrib2Buffer, 0, false, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewFunctionVoid("set_Attrib3Buffer", Batch__set_Attrib3Buffer, 0, false, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewFunctionVoid("set_Attrib4Buffer", Batch__set_Attrib4Buffer, 0, false, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewFunctionVoid("set_Attrib5Buffer", Batch__set_Attrib5Buffer, 0, false, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewFunctionVoid("set_Attrib6Buffer", Batch__set_Attrib6Buffer, 0, false, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewFunctionVoid("set_Attrib7Buffer", Batch__set_Attrib7Buffer, 0, false, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewFunctionVoid("set_Binormals", Batch__set_Binormals, 0, false, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewFunctionVoid("set_BoneIndexBuffer", Batch__set_BoneIndexBuffer, 0, false, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewFunctionVoid("set_BoneWeightBuffer", Batch__set_BoneWeightBuffer, 0, false, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewFunctionVoid("set_Colors", Batch__set_Colors, 0, false, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewFunctionVoid("set_Indices", Batch__set_Indices, 0, false, ::app::Fuse::Drawing::Batching::BatchIndexBuffer__typeof()),
        ::uNewFunctionVoid("set_InstanceIndices", Batch__set_InstanceIndices, 0, false, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewFunctionVoid("set_Normals", Batch__set_Normals, 0, false, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewFunctionVoid("set_Positions", Batch__set_Positions, 0, false, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewFunctionVoid("set_Tangents", Batch__set_Tangents, 0, false, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewFunctionVoid("set_TexCoord0s", Batch__set_TexCoord0s, 0, false, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewFunctionVoid("set_TexCoord1s", Batch__set_TexCoord1s, 0, false, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewFunctionVoid("set_TexCoord2s", Batch__set_TexCoord2s, 0, false, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewFunctionVoid("set_TexCoord3s", Batch__set_TexCoord3s, 0, false, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewFunctionVoid("set_TexCoord4s", Batch__set_TexCoord4s, 0, false, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewFunctionVoid("set_TexCoord5s", Batch__set_TexCoord5s, 0, false, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewFunctionVoid("set_TexCoord6s", Batch__set_TexCoord6s, 0, false, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewFunctionVoid("set_TexCoord7s", Batch__set_TexCoord7s, 0, false, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof()),
        ::uNewFunctionVoid("set_VertexCount", Batch__set_VertexCount, 0, false, ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void Batch___ObjInit(Batch* __this, int maxVertices, int maxIndices, bool staticBatch)
{
    __this->maxVertices = maxVertices;
    __this->maxIndices = maxIndices;
    __this->staticBatch = staticBatch;
}

::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_Attrib0Buffer(Batch* __this)
{
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* ind_139 = __this->attrib0;
    return (ind_139 != NULL) ? ind_139 : (__this->attrib0 = ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_2(NULL, 4, __this->maxVertices, __this->staticBatch));
}

::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_Attrib1Buffer(Batch* __this)
{
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* ind_140 = __this->attrib1;
    return (ind_140 != NULL) ? ind_140 : (__this->attrib1 = ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_2(NULL, 4, __this->maxVertices, __this->staticBatch));
}

::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_Attrib2Buffer(Batch* __this)
{
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* ind_141 = __this->attrib2;
    return (ind_141 != NULL) ? ind_141 : (__this->attrib2 = ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_2(NULL, 4, __this->maxVertices, __this->staticBatch));
}

::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_Attrib3Buffer(Batch* __this)
{
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* ind_142 = __this->attrib3;
    return (ind_142 != NULL) ? ind_142 : (__this->attrib3 = ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_2(NULL, 4, __this->maxVertices, __this->staticBatch));
}

::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_Attrib4Buffer(Batch* __this)
{
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* ind_143 = __this->attrib4;
    return (ind_143 != NULL) ? ind_143 : (__this->attrib4 = ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_2(NULL, 4, __this->maxVertices, __this->staticBatch));
}

::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_Attrib5Buffer(Batch* __this)
{
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* ind_144 = __this->attrib5;
    return (ind_144 != NULL) ? ind_144 : (__this->attrib5 = ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_2(NULL, 4, __this->maxVertices, __this->staticBatch));
}

::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_Attrib6Buffer(Batch* __this)
{
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* ind_145 = __this->attrib6;
    return (ind_145 != NULL) ? ind_145 : (__this->attrib6 = ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_2(NULL, 4, __this->maxVertices, __this->staticBatch));
}

::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_Attrib7Buffer(Batch* __this)
{
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* ind_146 = __this->attrib7;
    return (ind_146 != NULL) ? ind_146 : (__this->attrib7 = ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_2(NULL, 4, __this->maxVertices, __this->staticBatch));
}

::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_Binormals(Batch* __this)
{
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* ind_133 = __this->binormals;
    return (ind_133 != NULL) ? ind_133 : (__this->binormals = ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_2(NULL, 3, __this->maxVertices, __this->staticBatch));
}

::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_BoneIndexBuffer(Batch* __this)
{
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* ind_137 = __this->boneIndices;
    return (ind_137 != NULL) ? ind_137 : (__this->boneIndices = ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_2(NULL, 19, __this->maxVertices, __this->staticBatch));
}

::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_BoneWeightBuffer(Batch* __this)
{
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* ind_138 = __this->boneWeights;
    return (ind_138 != NULL) ? ind_138 : (__this->boneWeights = ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_2(NULL, 20, __this->maxVertices, __this->staticBatch));
}

::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_Colors(Batch* __this)
{
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* ind_135 = __this->colors;
    return (ind_135 != NULL) ? ind_135 : (__this->colors = ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_2(NULL, 4, __this->maxVertices, __this->staticBatch));
}

::app::Uno::Graphics::IndexBuffer* Batch__get_IndexBuffer(Batch* __this)
{
    return (__this->indexBuffer == NULL) ? (::app::Uno::Graphics::IndexBuffer*)NULL : ::uPtr< ::app::Fuse::Drawing::Batching::BatchIndexBuffer*>(__this->Indices())->IndexBuffer();
}

int Batch__get_IndexType(Batch* __this)
{
    return (__this->indexBuffer == NULL) ? 0 : ::uPtr< ::app::Fuse::Drawing::Batching::BatchIndexBuffer*>(__this->Indices())->DataType();
}

::app::Fuse::Drawing::Batching::BatchIndexBuffer* Batch__get_Indices(Batch* __this)
{
    ::app::Fuse::Drawing::Batching::BatchIndexBuffer* ind_147 = __this->indexBuffer;
    return (ind_147 != NULL) ? ind_147 : (__this->indexBuffer = ::app::Fuse::Drawing::Batching::BatchIndexBuffer__New_2(NULL, 2, __this->maxIndices, __this->staticBatch));
}

::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_InstanceIndices(Batch* __this)
{
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* ind_136 = __this->instanceIndex;
    return (ind_136 != NULL) ? ind_136 : (__this->instanceIndex = ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_2(NULL, 11, __this->maxVertices, __this->staticBatch));
}

::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_Normals(Batch* __this)
{
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* ind_132 = __this->normals;
    return (ind_132 != NULL) ? ind_132 : (__this->normals = ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_2(NULL, 3, __this->maxVertices, __this->staticBatch));
}

::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_Positions(Batch* __this)
{
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* ind_123 = __this->positions;
    return (ind_123 != NULL) ? ind_123 : (__this->positions = ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_2(NULL, 3, __this->maxVertices, __this->staticBatch));
}

::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_Tangents(Batch* __this)
{
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* ind_134 = __this->tangents;
    return (ind_134 != NULL) ? ind_134 : (__this->tangents = ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_2(NULL, 4, __this->maxVertices, __this->staticBatch));
}

::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_TexCoord0s(Batch* __this)
{
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* ind_124 = __this->texCoord0s;
    return (ind_124 != NULL) ? ind_124 : (__this->texCoord0s = ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_2(NULL, 2, __this->maxVertices, __this->staticBatch));
}

::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_TexCoord1s(Batch* __this)
{
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* ind_125 = __this->texCoord1s;
    return (ind_125 != NULL) ? ind_125 : (__this->texCoord1s = ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_2(NULL, 2, __this->maxVertices, __this->staticBatch));
}

::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_TexCoord2s(Batch* __this)
{
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* ind_126 = __this->texCoord2s;
    return (ind_126 != NULL) ? ind_126 : (__this->texCoord2s = ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_2(NULL, 2, __this->maxVertices, __this->staticBatch));
}

::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_TexCoord3s(Batch* __this)
{
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* ind_127 = __this->texCoord3s;
    return (ind_127 != NULL) ? ind_127 : (__this->texCoord3s = ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_2(NULL, 2, __this->maxVertices, __this->staticBatch));
}

::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_TexCoord4s(Batch* __this)
{
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* ind_128 = __this->texCoord4s;
    return (ind_128 != NULL) ? ind_128 : (__this->texCoord4s = ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_2(NULL, 2, __this->maxVertices, __this->staticBatch));
}

::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_TexCoord5s(Batch* __this)
{
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* ind_129 = __this->texCoord5s;
    return (ind_129 != NULL) ? ind_129 : (__this->texCoord5s = ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_2(NULL, 2, __this->maxVertices, __this->staticBatch));
}

::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_TexCoord6s(Batch* __this)
{
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* ind_130 = __this->texCoord6s;
    return (ind_130 != NULL) ? ind_130 : (__this->texCoord6s = ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_2(NULL, 2, __this->maxVertices, __this->staticBatch));
}

::app::Fuse::Drawing::Batching::BatchVertexBuffer* Batch__get_TexCoord7s(Batch* __this)
{
    ::app::Fuse::Drawing::Batching::BatchVertexBuffer* ind_131 = __this->texCoord7s;
    return (ind_131 != NULL) ? ind_131 : (__this->texCoord7s = ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_2(NULL, 2, __this->maxVertices, __this->staticBatch));
}

int Batch__get_VertexCount(Batch* __this)
{
    return __this->hasExplicitVertexCount ? __this->explicitVertexCount : __this->maxIndices;
}

Batch* Batch__New_1(::uStatic* __this, int maxVertices, int maxIndices, bool staticBatch)
{
    Batch* inst = (Batch*)::uAllocObject(sizeof(Batch), Batch__typeof());
    inst->_ObjInit(maxVertices, maxIndices, staticBatch);
    return inst;
}

void Batch__set_Attrib0Buffer(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->attrib0 = value;
}

void Batch__set_Attrib1Buffer(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->attrib1 = value;
}

void Batch__set_Attrib2Buffer(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->attrib2 = value;
}

void Batch__set_Attrib3Buffer(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->attrib3 = value;
}

void Batch__set_Attrib4Buffer(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->attrib4 = value;
}

void Batch__set_Attrib5Buffer(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->attrib5 = value;
}

void Batch__set_Attrib6Buffer(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->attrib6 = value;
}

void Batch__set_Attrib7Buffer(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->attrib7 = value;
}

void Batch__set_Binormals(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->binormals = value;
}

void Batch__set_BoneIndexBuffer(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->boneIndices = value;
}

void Batch__set_BoneWeightBuffer(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->boneWeights = value;
}

void Batch__set_Colors(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->colors = value;
}

void Batch__set_Indices(Batch* __this, ::app::Fuse::Drawing::Batching::BatchIndexBuffer* value)
{
    __this->indexBuffer = value;
}

void Batch__set_InstanceIndices(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->instanceIndex = value;
}

void Batch__set_Normals(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->normals = value;
}

void Batch__set_Positions(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->positions = value;
}

void Batch__set_Tangents(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->tangents = value;
}

void Batch__set_TexCoord0s(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->texCoord0s = value;
}

void Batch__set_TexCoord1s(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->texCoord1s = value;
}

void Batch__set_TexCoord2s(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->texCoord2s = value;
}

void Batch__set_TexCoord3s(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->texCoord3s = value;
}

void Batch__set_TexCoord4s(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->texCoord4s = value;
}

void Batch__set_TexCoord5s(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->texCoord5s = value;
}

void Batch__set_TexCoord6s(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->texCoord6s = value;
}

void Batch__set_TexCoord7s(Batch* __this, ::app::Fuse::Drawing::Batching::BatchVertexBuffer* value)
{
    __this->texCoord7s = value;
}

void Batch__set_VertexCount(Batch* __this, int value)
{
    __this->hasExplicitVertexCount = true;
    __this->explicitVertexCount = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Batching\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BatchHelpers__uType* BatchHelpers__typeof()
{
    static ::uStaticStrong<BatchHelpers__uType*> type;
    if (type != NULL) return type;

    type = (BatchHelpers__uType*)::uAllocClassType(sizeof(BatchHelpers__uType), "Fuse.Drawing.Batching.BatchHelpers");

    type->SetFunctions(3,
        ::uNewFunction("CreateBatchIndexBuffer", BatchHelpers__CreateBatchIndexBuffer, 0, true, ::app::Fuse::Drawing::Batching::BatchIndexBuffer__typeof(), ::app::Uno::Content::Models::IndexArray__typeof()),
        ::uNewFunction("CreateBatchVertexBuffer", BatchHelpers__CreateBatchVertexBuffer, 0, true, ::app::Fuse::Drawing::Batching::BatchVertexBuffer__typeof(), ::app::Uno::Content::Models::VertexAttributeArray__typeof()),
        ::uNewFunction("CreateSingleBatch", BatchHelpers__CreateSingleBatch, 0, true, ::app::Fuse::Drawing::Batching::Batch__typeof(), ::app::Uno::Content::Models::ModelMesh__typeof()));

    ::uRegisterType(type);
    return type;
}

::app::Fuse::Drawing::Batching::BatchIndexBuffer* BatchHelpers__CreateBatchIndexBuffer(::uStatic* __this, ::app::Uno::Content::Models::IndexArray* array)
{
    switch (::uPtr< ::app::Uno::Content::Models::IndexArray*>(array)->Type())
    {
        case 1:
        {
            return ::app::Fuse::Drawing::Batching::BatchIndexBuffer__New_1(NULL, ::uPtr< ::app::Uno::Content::Models::IndexArray*>(array)->Type(), ::uPtr< ::app::Uno::Content::Models::IndexArray*>(array)->Buffer());
        }
        case 2:
        {
            return ::app::Fuse::Drawing::Batching::BatchIndexBuffer__New_1(NULL, ::uPtr< ::app::Uno::Content::Models::IndexArray*>(array)->Type(), ::uPtr< ::app::Uno::Content::Models::IndexArray*>(array)->Buffer());
        }
        case 4:
        {
            return ::app::Fuse::Drawing::Batching::BatchIndexBuffer__New_1(NULL, ::uPtr< ::app::Uno::Content::Models::IndexArray*>(array)->Type(), ::uPtr< ::app::Uno::Content::Models::IndexArray*>(array)->Buffer());
        }
        default:
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Unsupported index type")));
        }
    }
}

::app::Fuse::Drawing::Batching::BatchVertexBuffer* BatchHelpers__CreateBatchVertexBuffer(::uStatic* __this, ::app::Uno::Content::Models::VertexAttributeArray* array)
{
    switch (::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(array)->Type())
    {
        case 1:
        {
            return ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_1(NULL, ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(array)->Type(), ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(array)->Buffer());
        }
        case 2:
        {
            return ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_1(NULL, ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(array)->Type(), ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(array)->Buffer());
        }
        case 3:
        {
            return ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_1(NULL, ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(array)->Type(), ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(array)->Buffer());
        }
        case 4:
        {
            return ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_1(NULL, ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(array)->Type(), ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(array)->Buffer());
        }
        case 17:
        case 18:
        {
            return ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_1(NULL, ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(array)->Type(), ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(array)->Buffer());
        }
        case 19:
        case 20:
        {
            return ::app::Fuse::Drawing::Batching::BatchVertexBuffer__New_1(NULL, ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(array)->Type(), ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(array)->Buffer());
        }
        default:
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Unsupported vertex attribute type")));
        }
    }
}

::app::Fuse::Drawing::Batching::Batch* BatchHelpers__CreateSingleBatch(::uStatic* __this, ::app::Uno::Content::Models::ModelMesh* m)
{
    ::app::Fuse::Drawing::Batching::Batch* b;

    if (::uPtr< ::app::Uno::Content::Models::ModelMesh*>(m)->Indices() != NULL)
    {
        b = ::app::Fuse::Drawing::Batching::Batch__New_1(NULL, ::uPtr< ::app::Uno::Content::Models::ModelMesh*>(m)->VertexCount(), ::uPtr< ::app::Uno::Content::Models::ModelMesh*>(m)->IndexCount(), true);
        ::uPtr< ::app::Fuse::Drawing::Batching::Batch*>(b)->Indices(BatchHelpers__CreateBatchIndexBuffer(NULL, m->Indices()));
    }
    else
    {
        b = ::app::Fuse::Drawing::Batching::Batch__New_1(NULL, ::uPtr< ::app::Uno::Content::Models::ModelMesh*>(m)->VertexCount(), ::uPtr< ::app::Uno::Content::Models::ModelMesh*>(m)->VertexCount(), true);

        for (int i = 0; i < m->VertexCount(); i++)
        {
            ::uPtr< ::app::Fuse::Drawing::Batching::BatchIndexBuffer*>(::uPtr< ::app::Fuse::Drawing::Batching::Batch*>(b)->Indices())->Write_1((::uUShort)i);
        }
    }

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_string_Uno_Content_Models_VertexAttributeArray_::GetEnumerator(::uPtr< ::uObject*>(::uPtr< ::app::Uno::Content::Models::ModelMesh*>(m)->VertexAttributes())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Uno::Collections::KeyValuePair__string__Uno_Content_Models_VertexAttributeArray v = ::app::Uno::Collections::IEnumerator__Uno_Collections_KeyValuePair_string_Uno_Content_Models_VertexAttributeArray_::Current(::uPtr< ::uObject*>(enum_123));

        if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("Position")))
        {
            ::uPtr< ::app::Fuse::Drawing::Batching::Batch*>(b)->Positions(BatchHelpers__CreateBatchVertexBuffer(NULL, v.Value()));
        }
        else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("TexCoord")))
        {
            b->TexCoord0s(BatchHelpers__CreateBatchVertexBuffer(NULL, v.Value()));
        }
        else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("TexCoord1")))
        {
            b->TexCoord1s(BatchHelpers__CreateBatchVertexBuffer(NULL, v.Value()));
        }
        else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("TexCoord2")))
        {
            b->TexCoord2s(BatchHelpers__CreateBatchVertexBuffer(NULL, v.Value()));
        }
        else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("TexCoord3")))
        {
            b->TexCoord3s(BatchHelpers__CreateBatchVertexBuffer(NULL, v.Value()));
        }
        else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("TexCoord4")))
        {
            b->TexCoord4s(BatchHelpers__CreateBatchVertexBuffer(NULL, v.Value()));
        }
        else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("TexCoord5")))
        {
            b->TexCoord5s(BatchHelpers__CreateBatchVertexBuffer(NULL, v.Value()));
        }
        else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("TexCoord6")))
        {
            b->TexCoord6s(BatchHelpers__CreateBatchVertexBuffer(NULL, v.Value()));
        }
        else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("TexCoord7")))
        {
            b->TexCoord7s(BatchHelpers__CreateBatchVertexBuffer(NULL, v.Value()));
        }
        else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("Normal")))
        {
            b->Normals(BatchHelpers__CreateBatchVertexBuffer(NULL, v.Value()));
        }
        else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("Tangent")))
        {
            b->Tangents(BatchHelpers__CreateBatchVertexBuffer(NULL, v.Value()));
        }
        else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("Binormal")))
        {
            b->Binormals(BatchHelpers__CreateBatchVertexBuffer(NULL, v.Value()));
        }
        else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("Color")))
        {
            b->Colors(BatchHelpers__CreateBatchVertexBuffer(NULL, v.Value()));
        }
        else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("TransformIndex")))
        {
            b->InstanceIndices(BatchHelpers__CreateBatchVertexBuffer(NULL, v.Value()));
        }
        else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("BoneWeights")))
        {
            b->BoneWeightBuffer(BatchHelpers__CreateBatchVertexBuffer(NULL, v.Value()));
        }
        else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("BoneIndices")))
        {
            b->BoneIndexBuffer(BatchHelpers__CreateBatchVertexBuffer(NULL, v.Value()));
        }
    }

    return b;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Batching\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BatchIndexBuffer__uType* BatchIndexBuffer__typeof()
{
    static ::uStaticStrong<BatchIndexBuffer__uType*> type;
    if (type != NULL) return type;

    type = (BatchIndexBuffer__uType*)::uAllocClassType(sizeof(BatchIndexBuffer__uType), "Fuse.Drawing.Batching.BatchIndexBuffer", false, 0, 2, 0);

    type->SetStrongRefs(
        "buf", offsetof(BatchIndexBuffer, buf),
        "ibo", offsetof(BatchIndexBuffer, ibo));

    type->SetFields(7,
        ::uNewField("_position", NULL, offsetof(BatchIndexBuffer, _position), ::app::Uno::Int__typeof()),
        ::uNewField("buf", NULL, offsetof(BatchIndexBuffer, buf), ::app::Uno::Buffer__typeof()),
        ::uNewField("dataType", NULL, offsetof(BatchIndexBuffer, dataType), ::app::Uno::Graphics::IndexType__typeof()),
        ::uNewField("ibo", NULL, offsetof(BatchIndexBuffer, ibo), ::app::Uno::Graphics::IndexBuffer__typeof()),
        ::uNewField("isDirty", NULL, offsetof(BatchIndexBuffer, isDirty), ::app::Uno::Bool__typeof()),
        ::uNewField("maxIndices", NULL, offsetof(BatchIndexBuffer, maxIndices), ::app::Uno::Int__typeof()),
        ::uNewField("usage", NULL, offsetof(BatchIndexBuffer, usage), ::app::Uno::Graphics::BufferUsage__typeof()));

    type->SetFunctions(13,
        ::uNewFunctionVoid("Flush", BatchIndexBuffer__Flush, 0, false),
        ::uNewFunction("get_Buffer", BatchIndexBuffer__get_Buffer, 0, false, ::app::Uno::Buffer__typeof()),
        ::uNewFunction("get_DataType", BatchIndexBuffer__get_DataType, 0, false, ::app::Uno::Graphics::IndexType__typeof()),
        ::uNewFunction("get_IndexBuffer", BatchIndexBuffer__get_IndexBuffer, 0, false, ::app::Uno::Graphics::IndexBuffer__typeof()),
        ::uNewFunction("get_Position", BatchIndexBuffer__get_Position, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_StrideInBytes", BatchIndexBuffer__get_StrideInBytes, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("Invalidate", BatchIndexBuffer__Invalidate, 0, false),
        ::uNewFunction(".ctor", BatchIndexBuffer__New_1, 0, true, BatchIndexBuffer__typeof(), ::app::Uno::Graphics::IndexType__typeof(), ::app::Uno::Buffer__typeof()),
        ::uNewFunction(".ctor", BatchIndexBuffer__New_2, 0, true, BatchIndexBuffer__typeof(), ::app::Uno::Graphics::IndexType__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_DataType", BatchIndexBuffer__set_DataType, 0, false, ::app::Uno::Graphics::IndexType__typeof()),
        ::uNewFunctionVoid("set_Position", BatchIndexBuffer__set_Position, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("Write", BatchIndexBuffer__Write, 0, false, ::app::Uno::Byte__typeof()),
        ::uNewFunctionVoid("Write", BatchIndexBuffer__Write_1, 0, false, ::app::Uno::UShort__typeof()));

    ::uRegisterType(type);
    return type;
}

void BatchIndexBuffer___ObjInit(BatchIndexBuffer* __this, int type, ::app::Uno::Buffer* data)
{
    __this->isDirty = true;
    __this->DataType(type);
    __this->usage = 0;
    __this->buf = ::app::Uno::Buffer__New_3(NULL, ::uPtr< ::app::Uno::Buffer*>(data)->SizeInBytes());

    for (int i = 0; i < ::uPtr< ::app::Uno::Buffer*>(__this->buf)->SizeInBytes(); i++)
    {
        ::uPtr< ::app::Uno::Buffer*>(__this->buf)->Item(i, data->Item(i));
    }
}

void BatchIndexBuffer___ObjInit_1(BatchIndexBuffer* __this, int type, int maxIndices, bool staticBatch)
{
    __this->isDirty = true;
    __this->dataType = type;
    __this->maxIndices = maxIndices;
    __this->usage = staticBatch ? 0 : 1;
}

void BatchIndexBuffer__Flush(BatchIndexBuffer* __this)
{
    if ((__this->buf != NULL) && __this->isDirty)
    {
        ::uPtr< ::app::Uno::Graphics::IndexBuffer*>(__this->ibo)->Update(__this->buf);
        __this->isDirty = false;
    }
}

::app::Uno::Buffer* BatchIndexBuffer__get_Buffer(BatchIndexBuffer* __this)
{
    if (__this->buf == NULL)
    {
        __this->buf = ::app::Uno::Buffer__New_3(NULL, __this->maxIndices * __this->StrideInBytes());
    }

    return __this->buf;
}

int BatchIndexBuffer__get_DataType(BatchIndexBuffer* __this)
{
    return __this->dataType;
}

::app::Uno::Graphics::IndexBuffer* BatchIndexBuffer__get_IndexBuffer(BatchIndexBuffer* __this)
{
    if (__this->buf == NULL)
    {
        return NULL;
    }

    if (__this->ibo == NULL)
    {
        __this->ibo = ::app::Uno::Graphics::IndexBuffer__New_3(NULL, ::uPtr< ::app::Uno::Buffer*>(__this->Buffer())->SizeInBytes(), __this->usage);
    }

    __this->Flush();
    return __this->ibo;
}

int BatchIndexBuffer__get_Position(BatchIndexBuffer* __this)
{
    return __this->_position;
}

int BatchIndexBuffer__get_StrideInBytes(BatchIndexBuffer* __this)
{
    return ::app::Uno::Graphics::IndexTypeHelpers__GetStrideInBytes(NULL, __this->DataType());
}

void BatchIndexBuffer__Invalidate(BatchIndexBuffer* __this)
{
    __this->isDirty = true;
}

BatchIndexBuffer* BatchIndexBuffer__New_1(::uStatic* __this, int type, ::app::Uno::Buffer* data)
{
    BatchIndexBuffer* inst = (BatchIndexBuffer*)::uAllocObject(sizeof(BatchIndexBuffer), BatchIndexBuffer__typeof());
    inst->_ObjInit(type, data);
    return inst;
}

BatchIndexBuffer* BatchIndexBuffer__New_2(::uStatic* __this, int type, int maxIndices, bool staticBatch)
{
    BatchIndexBuffer* inst = (BatchIndexBuffer*)::uAllocObject(sizeof(BatchIndexBuffer), BatchIndexBuffer__typeof());
    inst->_ObjInit_1(type, maxIndices, staticBatch);
    return inst;
}

void BatchIndexBuffer__set_DataType(BatchIndexBuffer* __this, int value)
{
    if (__this->buf != NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Index type cannot be changed after buffer is written to")));
    }

    __this->dataType = value;
}

void BatchIndexBuffer__set_Position(BatchIndexBuffer* __this, int value)
{
    __this->_position = value;
}

void BatchIndexBuffer__Write(BatchIndexBuffer* __this, ::uByte value)
{
    ::uPtr< ::app::Uno::Buffer*>(__this->Buffer())->SetByte(__this->_position, value);
    __this->_position = __this->_position + 1;
}

void BatchIndexBuffer__Write_1(BatchIndexBuffer* __this, ::uUShort value)
{
    ::uPtr< ::app::Uno::Buffer*>(__this->Buffer())->SetUShort(__this->_position, value, true);
    __this->_position = __this->_position + 2;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Batching\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BatchVertexBuffer__uType* BatchVertexBuffer__typeof()
{
    static ::uStaticStrong<BatchVertexBuffer__uType*> type;
    if (type != NULL) return type;

    type = (BatchVertexBuffer__uType*)::uAllocClassType(sizeof(BatchVertexBuffer__uType), "Fuse.Drawing.Batching.BatchVertexBuffer", false, 0, 2, 0);

    type->SetStrongRefs(
        "buf", offsetof(BatchVertexBuffer, buf),
        "vbo", offsetof(BatchVertexBuffer, vbo));

    type->SetFields(7,
        ::uNewField("_position", NULL, offsetof(BatchVertexBuffer, _position), ::app::Uno::Int__typeof()),
        ::uNewField("buf", NULL, offsetof(BatchVertexBuffer, buf), ::app::Uno::Buffer__typeof()),
        ::uNewField("dataType", NULL, offsetof(BatchVertexBuffer, dataType), ::app::Uno::Graphics::VertexAttributeType__typeof()),
        ::uNewField("isDirty", NULL, offsetof(BatchVertexBuffer, isDirty), ::app::Uno::Bool__typeof()),
        ::uNewField("maxVertices", NULL, offsetof(BatchVertexBuffer, maxVertices), ::app::Uno::Int__typeof()),
        ::uNewField("usage", NULL, offsetof(BatchVertexBuffer, usage), ::app::Uno::Graphics::BufferUsage__typeof()),
        ::uNewField("vbo", NULL, offsetof(BatchVertexBuffer, vbo), ::app::Uno::Graphics::VertexBuffer__typeof()));

    type->SetFunctions(31,
        ::uNewFunctionVoid("Flush", BatchVertexBuffer__Flush, 0, false),
        ::uNewFunction("get_Buffer", BatchVertexBuffer__get_Buffer, 0, false, ::app::Uno::Buffer__typeof()),
        ::uNewFunction("get_DataType", BatchVertexBuffer__get_DataType, 0, false, ::app::Uno::Graphics::VertexAttributeType__typeof()),
        ::uNewFunction("get_Position", BatchVertexBuffer__get_Position, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_StrideInBytes", BatchVertexBuffer__get_StrideInBytes, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_VertexBuffer", BatchVertexBuffer__get_VertexBuffer, 0, false, ::app::Uno::Graphics::VertexBuffer__typeof()),
        ::uNewFunctionVoid("Invalidate", BatchVertexBuffer__Invalidate, 0, false),
        ::uNewFunction(".ctor", BatchVertexBuffer__New_1, 0, true, BatchVertexBuffer__typeof(), ::app::Uno::Graphics::VertexAttributeType__typeof(), ::app::Uno::Buffer__typeof()),
        ::uNewFunction(".ctor", BatchVertexBuffer__New_2, 0, true, BatchVertexBuffer__typeof(), ::app::Uno::Graphics::VertexAttributeType__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_DataType", BatchVertexBuffer__set_DataType, 0, false, ::app::Uno::Graphics::VertexAttributeType__typeof()),
        ::uNewFunctionVoid("set_Position", BatchVertexBuffer__set_Position, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("Write", BatchVertexBuffer__Write, 0, false, ::app::Uno::Byte__typeof()),
        ::uNewFunctionVoid("Write", BatchVertexBuffer__Write_1, 0, false, ::app::Uno::Byte2__typeof()),
        ::uNewFunctionVoid("Write", BatchVertexBuffer__Write_10, 0, false, ::app::Uno::SByte__typeof()),
        ::uNewFunctionVoid("Write", BatchVertexBuffer__Write_11, 0, false, ::app::Uno::SByte2__typeof()),
        ::uNewFunctionVoid("Write", BatchVertexBuffer__Write_12, 0, false, ::app::Uno::SByte4__typeof()),
        ::uNewFunctionVoid("Write", BatchVertexBuffer__Write_13, 0, false, ::app::Uno::Short__typeof()),
        ::uNewFunctionVoid("Write", BatchVertexBuffer__Write_14, 0, false, ::app::Uno::Short2__typeof()),
        ::uNewFunctionVoid("Write", BatchVertexBuffer__Write_15, 0, false, ::app::Uno::Short4__typeof()),
        ::uNewFunctionVoid("Write", BatchVertexBuffer__Write_16, 0, false, ::app::Uno::UInt__typeof()),
        ::uNewFunctionVoid("Write", BatchVertexBuffer__Write_17, 0, false, ::app::Uno::UShort__typeof()),
        ::uNewFunctionVoid("Write", BatchVertexBuffer__Write_18, 0, false, ::app::Uno::UShort2__typeof()),
        ::uNewFunctionVoid("Write", BatchVertexBuffer__Write_19, 0, false, ::app::Uno::UShort4__typeof()),
        ::uNewFunctionVoid("Write", BatchVertexBuffer__Write_2, 0, false, ::app::Uno::Byte4__typeof()),
        ::uNewFunctionVoid("Write", BatchVertexBuffer__Write_3, 0, false, ::app::Uno::Float2__typeof()),
        ::uNewFunctionVoid("Write", BatchVertexBuffer__Write_4, 0, false, ::app::Uno::Float3__typeof()),
        ::uNewFunctionVoid("Write", BatchVertexBuffer__Write_5, 0, false, ::app::Uno::Float4__typeof()),
        ::uNewFunctionVoid("Write", BatchVertexBuffer__Write_6, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunctionVoid("Write", BatchVertexBuffer__Write_7, 0, false, ::app::Uno::Int2__typeof()),
        ::uNewFunctionVoid("Write", BatchVertexBuffer__Write_8, 0, false, ::app::Uno::Int3__typeof()),
        ::uNewFunctionVoid("Write", BatchVertexBuffer__Write_9, 0, false, ::app::Uno::Int4__typeof()));

    ::uRegisterType(type);
    return type;
}

void BatchVertexBuffer___ObjInit(BatchVertexBuffer* __this, int type, ::app::Uno::Buffer* data)
{
    __this->isDirty = true;
    __this->DataType(type);
    __this->usage = 0;
    __this->buf = ::app::Uno::Buffer__New_3(NULL, ::uPtr< ::app::Uno::Buffer*>(data)->SizeInBytes());

    for (int i = 0; i < ::uPtr< ::app::Uno::Buffer*>(__this->buf)->SizeInBytes(); i++)
    {
        ::uPtr< ::app::Uno::Buffer*>(__this->buf)->Item(i, data->Item(i));
    }
}

void BatchVertexBuffer___ObjInit_1(BatchVertexBuffer* __this, int type, int maxVertices, bool staticBatch)
{
    __this->isDirty = true;
    __this->DataType(type);
    __this->maxVertices = maxVertices;
    __this->usage = staticBatch ? 0 : 1;
}

void BatchVertexBuffer__Flush(BatchVertexBuffer* __this)
{
    if ((__this->buf != NULL) && __this->isDirty)
    {
        if (__this->vbo == NULL)
        {
            __this->vbo = ::app::Uno::Graphics::VertexBuffer__New_3(NULL, ::uPtr< ::app::Uno::Buffer*>(__this->Buffer())->SizeInBytes(), __this->usage);
        }

        ::uPtr< ::app::Uno::Graphics::VertexBuffer*>(__this->vbo)->Update(__this->buf);
        __this->isDirty = false;
    }
}

::app::Uno::Buffer* BatchVertexBuffer__get_Buffer(BatchVertexBuffer* __this)
{
    if (__this->buf == NULL)
    {
        __this->buf = ::app::Uno::Buffer__New_3(NULL, __this->maxVertices * __this->StrideInBytes());
    }

    return __this->buf;
}

int BatchVertexBuffer__get_DataType(BatchVertexBuffer* __this)
{
    return __this->dataType;
}

int BatchVertexBuffer__get_Position(BatchVertexBuffer* __this)
{
    return __this->_position;
}

int BatchVertexBuffer__get_StrideInBytes(BatchVertexBuffer* __this)
{
    return ::app::Uno::Graphics::VertexAttributeTypeHelpers__GetStrideInBytes(NULL, __this->DataType());
}

::app::Uno::Graphics::VertexBuffer* BatchVertexBuffer__get_VertexBuffer(BatchVertexBuffer* __this)
{
    if (__this->Buffer() == NULL)
    {
        return NULL;
    }

    __this->Flush();
    return __this->vbo;
}

void BatchVertexBuffer__Invalidate(BatchVertexBuffer* __this)
{
    __this->isDirty = true;
}

BatchVertexBuffer* BatchVertexBuffer__New_1(::uStatic* __this, int type, ::app::Uno::Buffer* data)
{
    BatchVertexBuffer* inst = (BatchVertexBuffer*)::uAllocObject(sizeof(BatchVertexBuffer), BatchVertexBuffer__typeof());
    inst->_ObjInit(type, data);
    return inst;
}

BatchVertexBuffer* BatchVertexBuffer__New_2(::uStatic* __this, int type, int maxVertices, bool staticBatch)
{
    BatchVertexBuffer* inst = (BatchVertexBuffer*)::uAllocObject(sizeof(BatchVertexBuffer), BatchVertexBuffer__typeof());
    inst->_ObjInit_1(type, maxVertices, staticBatch);
    return inst;
}

void BatchVertexBuffer__set_DataType(BatchVertexBuffer* __this, int value)
{
    if (__this->buf != NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Vertex attribute type cannot be changed after Bufferfer is written to")));
    }

    __this->dataType = value;
}

void BatchVertexBuffer__set_Position(BatchVertexBuffer* __this, int value)
{
    __this->_position = value;
}

void BatchVertexBuffer__Write(BatchVertexBuffer* __this, ::uByte value)
{
    ::uPtr< ::app::Uno::Buffer*>(__this->Buffer())->SetByte(__this->_position, value);
    __this->_position = __this->_position + 1;
}

void BatchVertexBuffer__Write_1(BatchVertexBuffer* __this, ::app::Uno::Byte2 value)
{
    ::uPtr< ::app::Uno::Buffer*>(__this->Buffer())->SetByte2(__this->_position, value);
    __this->_position = __this->_position + 2;
}

void BatchVertexBuffer__Write_10(BatchVertexBuffer* __this, ::uSByte value)
{
    ::uPtr< ::app::Uno::Buffer*>(__this->Buffer())->SetSByte(__this->_position, value);
    __this->_position = __this->_position + 1;
}

void BatchVertexBuffer__Write_11(BatchVertexBuffer* __this, ::app::Uno::SByte2 value)
{
    ::uPtr< ::app::Uno::Buffer*>(__this->Buffer())->SetSByte2(__this->_position, value);
    __this->_position = __this->_position + 2;
}

void BatchVertexBuffer__Write_12(BatchVertexBuffer* __this, ::app::Uno::SByte4 value)
{
    ::uPtr< ::app::Uno::Buffer*>(__this->Buffer())->SetSByte4(__this->_position, value);
    __this->_position = __this->_position + 4;
}

void BatchVertexBuffer__Write_13(BatchVertexBuffer* __this, ::uShort value)
{
    ::uPtr< ::app::Uno::Buffer*>(__this->Buffer())->SetShort(__this->_position, value, true);
    __this->_position = __this->_position + 2;
}

void BatchVertexBuffer__Write_14(BatchVertexBuffer* __this, ::app::Uno::Short2 value)
{
    ::uPtr< ::app::Uno::Buffer*>(__this->Buffer())->SetShort2(__this->_position, value, true);
    __this->_position = __this->_position + 4;
}

void BatchVertexBuffer__Write_15(BatchVertexBuffer* __this, ::app::Uno::Short4 value)
{
    ::uPtr< ::app::Uno::Buffer*>(__this->Buffer())->SetShort4(__this->_position, value, true);
    __this->_position = __this->_position + 8;
}

void BatchVertexBuffer__Write_16(BatchVertexBuffer* __this, ::uUInt value)
{
    ::uPtr< ::app::Uno::Buffer*>(__this->Buffer())->SetUInt(__this->_position, value, true);
    __this->_position = __this->_position + 4;
}

void BatchVertexBuffer__Write_17(BatchVertexBuffer* __this, ::uUShort value)
{
    ::uPtr< ::app::Uno::Buffer*>(__this->Buffer())->SetUShort(__this->_position, value, true);
    __this->_position = __this->_position + 2;
}

void BatchVertexBuffer__Write_18(BatchVertexBuffer* __this, ::app::Uno::UShort2 value)
{
    ::uPtr< ::app::Uno::Buffer*>(__this->Buffer())->SetUShort2(__this->_position, value, true);
    __this->_position = __this->_position + 4;
}

void BatchVertexBuffer__Write_19(BatchVertexBuffer* __this, ::app::Uno::UShort4 value)
{
    ::uPtr< ::app::Uno::Buffer*>(__this->Buffer())->SetUShort4(__this->_position, value, true);
    __this->_position = __this->_position + 8;
}

void BatchVertexBuffer__Write_2(BatchVertexBuffer* __this, ::app::Uno::Byte4 value)
{
    ::uPtr< ::app::Uno::Buffer*>(__this->Buffer())->SetByte4(__this->_position, value);
    __this->_position = __this->_position + 4;
}

void BatchVertexBuffer__Write_3(BatchVertexBuffer* __this, ::app::Uno::Float2 value)
{
    ::uPtr< ::app::Uno::Buffer*>(__this->Buffer())->SetFloat2(__this->_position, value, true);
    __this->_position = __this->_position + 8;
}

void BatchVertexBuffer__Write_4(BatchVertexBuffer* __this, ::app::Uno::Float3 value)
{
    ::uPtr< ::app::Uno::Buffer*>(__this->Buffer())->SetFloat3(__this->_position, value, true);
    __this->_position = __this->_position + 12;
}

void BatchVertexBuffer__Write_5(BatchVertexBuffer* __this, ::app::Uno::Float4 value)
{
    ::uPtr< ::app::Uno::Buffer*>(__this->Buffer())->SetFloat4(__this->_position, value, true);
    __this->_position = __this->_position + 16;
}

void BatchVertexBuffer__Write_6(BatchVertexBuffer* __this, int value)
{
    ::uPtr< ::app::Uno::Buffer*>(__this->Buffer())->SetInt(__this->_position, value, true);
    __this->_position = __this->_position + 4;
}

void BatchVertexBuffer__Write_7(BatchVertexBuffer* __this, ::app::Uno::Int2 value)
{
    ::uPtr< ::app::Uno::Buffer*>(__this->Buffer())->SetInt2(__this->_position, value, true);
    __this->_position = __this->_position + 8;
}

void BatchVertexBuffer__Write_8(BatchVertexBuffer* __this, ::app::Uno::Int3 value)
{
    ::uPtr< ::app::Uno::Buffer*>(__this->Buffer())->SetInt3(__this->_position, value, true);
    __this->_position = __this->_position + 12;
}

void BatchVertexBuffer__Write_9(BatchVertexBuffer* __this, ::app::Uno::Int4 value)
{
    ::uPtr< ::app::Uno::Buffer*>(__this->Buffer())->SetInt4(__this->_position, value, true);
    __this->_position = __this->_position + 16;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Batching\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Entry__uType* Entry__typeof()
{
    static ::uStaticStrong<Entry__uType*> type;
    if (type != NULL) return type;

    type = (Entry__uType*)::uAllocClassType(sizeof(Entry__uType), "Fuse.Drawing.Batching.Entry", false, 0, 1, 0);

    type->SetStrongRefs(
        "Mesh", offsetof(Entry, Mesh));

    type->SetFields(2,
        ::uNewField("InstanceIndex", NULL, offsetof(Entry, InstanceIndex), ::app::Uno::Int__typeof()),
        ::uNewField("Mesh", NULL, offsetof(Entry, Mesh), ::app::Uno::Content::Models::ModelMesh__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", Entry__New_1, 0, true, Entry__typeof(), ::app::Uno::Content::Models::ModelMesh__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

void Entry___ObjInit(Entry* __this, ::app::Uno::Content::Models::ModelMesh* m, int instanceId)
{
    __this->Mesh = m;
    __this->InstanceIndex = instanceId;
}

Entry* Entry__New_1(::uStatic* __this, ::app::Uno::Content::Models::ModelMesh* m, int instanceId)
{
    Entry* inst = (Entry*)::uAllocObject(sizeof(Entry), Entry__typeof());
    inst->_ObjInit(m, instanceId);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Batching\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MeshBatcher__uType* MeshBatcher__typeof()
{
    static ::uStaticStrong<MeshBatcher__uType*> type;
    if (type != NULL) return type;

    type = (MeshBatcher__uType*)::uAllocClassType(sizeof(MeshBatcher__uType), "Fuse.Drawing.Batching.MeshBatcher", false, 0, 2, 0);

    type->SetStrongRefs(
        "batches", offsetof(MeshBatcher, batches),
        "entries", offsetof(MeshBatcher, entries));

    type->SetFields(2,
        ::uNewField("batches", NULL, offsetof(MeshBatcher, batches), ::uGetArrayType(::app::Fuse::Drawing::Batching::Batch__typeof())),
        ::uNewField("entries", NULL, offsetof(MeshBatcher, entries), ::app::Uno::Collections::List__Fuse_Drawing_Batching_Entry__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("AddEntry", MeshBatcher__AddEntry, 0, false, ::app::Uno::Int__typeof(), ::app::Fuse::Drawing::Batching::Entry__typeof()),
        ::uNewFunction("AddMesh", MeshBatcher__AddMesh, 0, false, ::app::Uno::Int__typeof(), ::app::Uno::Content::Models::ModelMesh__typeof()),
        ::uNewFunctionVoid("AddMesh", MeshBatcher__AddMesh_1, 0, false, ::app::Uno::Content::Models::ModelMesh__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("CreateFakeIndexBuffer", MeshBatcher__CreateFakeIndexBuffer, 0, true, ::app::Uno::Content::Models::ModelMesh__typeof(), ::app::Uno::Content::Models::ModelMesh__typeof()),
        ::uNewFunctionVoid("Flush", MeshBatcher__Flush, 0, false),
        ::uNewFunction("get_BatchCount", MeshBatcher__get_BatchCount, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Batches", MeshBatcher__get_Batches, 0, false, ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Batching_Batch__typeof()),
        ::uNewFunction("get_Entries", MeshBatcher__get_Entries, 0, false, ::app::Uno::Collections::IEnumerable__Uno_Content_Models_ModelMesh__typeof()),
        ::uNewFunction("get_EntryCount", MeshBatcher__get_EntryCount, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("Mesh", MeshBatcher__Mesh, 0, true, ::app::Uno::Content::Models::ModelMesh__typeof(), ::app::Fuse::Drawing::Batching::Entry__typeof()),
        ::uNewFunction(".ctor", MeshBatcher__New_1, 0, true, MeshBatcher__typeof()));

    ::uRegisterType(type);
    return type;
}

void MeshBatcher___ObjInit(MeshBatcher* __this)
{
    __this->entries = ::app::Uno::Collections::List__Fuse_Drawing_Batching_Entry__New_1(NULL);
}

int MeshBatcher__AddEntry(MeshBatcher* __this, ::app::Fuse::Drawing::Batching::Entry* e)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Batching_Entry*>(__this->entries)->Add(e);
    return ::uPtr< ::app::Fuse::Drawing::Batching::Entry*>(e)->InstanceIndex;
}

int MeshBatcher__AddMesh(MeshBatcher* __this, ::app::Uno::Content::Models::ModelMesh* mesh)
{
    return __this->AddEntry(::app::Fuse::Drawing::Batching::Entry__New_1(NULL, mesh, ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Batching_Entry*>(__this->entries)->Count()));
}

void MeshBatcher__AddMesh_1(MeshBatcher* __this, ::app::Uno::Content::Models::ModelMesh* mesh, int instanceId)
{
    __this->AddEntry(::app::Fuse::Drawing::Batching::Entry__New_1(NULL, mesh, instanceId));
}

::app::Uno::Content::Models::ModelMesh* MeshBatcher__CreateFakeIndexBuffer(::uStatic* __this, ::app::Uno::Content::Models::ModelMesh* m)
{
    ::uArray* d = ::uNewArray(::app::Uno::UInt__typeof(), ::uPtr< ::app::Uno::Content::Models::ModelMesh*>(m)->VertexCount());

    for (int i = 0; i < d->Length(); i++)
    {
        d->Item< ::uUInt>(i) = (::uUInt)i;
    }

    ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray* dict = ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray__New_1(NULL);

    for (::uObject* enum_124 = ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_string_Uno_Content_Models_VertexAttributeArray_::GetEnumerator(::uPtr< ::uObject*>(m->VertexAttributes())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_124)); )
    {
        ::app::Uno::Collections::KeyValuePair__string__Uno_Content_Models_VertexAttributeArray v = ::app::Uno::Collections::IEnumerator__Uno_Collections_KeyValuePair_string_Uno_Content_Models_VertexAttributeArray_::Current(::uPtr< ::uObject*>(enum_124));
        ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray*>(dict)->Item(v.Key(), v.Value());
    }

    return ::app::Uno::Content::Models::ModelMesh__New_1(NULL, m->Name(), m->PrimitiveType(), dict, ::app::Uno::Content::Models::IndexArray__New_3(NULL, d));
}

void MeshBatcher__Flush(MeshBatcher* __this)
{
    ::app::Uno::Float4 ind_125 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_126 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_127 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_128 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_129 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_130 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_131 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_132 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_133 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_134 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_135 = ::app::Uno::Float4();

    if (__this->batches != NULL)
    {
        return;
    }

    ::app::Uno::Content::Models::VertexAttributeArray* position;
    ::app::Uno::Content::Models::VertexAttributeArray* texcoord;
    ::app::Uno::Content::Models::VertexAttributeArray* texcoord1;
    ::app::Uno::Content::Models::VertexAttributeArray* texcoord2;
    ::app::Uno::Content::Models::VertexAttributeArray* texcoord3;
    ::app::Uno::Content::Models::VertexAttributeArray* texcoord4;
    ::app::Uno::Content::Models::VertexAttributeArray* texcoord5;
    ::app::Uno::Content::Models::VertexAttributeArray* texcoord6;
    ::app::Uno::Content::Models::VertexAttributeArray* texcoord7;
    ::app::Uno::Content::Models::VertexAttributeArray* normal;
    ::app::Uno::Content::Models::VertexAttributeArray* tangent;
    ::app::Uno::Content::Models::VertexAttributeArray* binormal;
    ::app::Uno::Content::Models::VertexAttributeArray* color;
    ::app::Uno::Content::Models::VertexAttributeArray* boneWeights;
    ::app::Uno::Content::Models::VertexAttributeArray* boneIndex;
    ::app::Uno::Collections::List__Fuse_Drawing_Batching_Batch* batches = ::app::Uno::Collections::List__Fuse_Drawing_Batching_Batch__New_1(NULL);
    ::app::Fuse::Drawing::Batching::Batch* b = NULL;
    int virtualIndexBase = 0;
    ::app::Uno::Collections::Dictionary__int__int* virtualIndexToRealIndex = ::app::Uno::Collections::Dictionary__int__int__New_1(NULL);
    int batchVertexCount = 0;
    int batchIndexCount = 0;
    int batchVertexCutoff = 0;
    int batchIndexCutoff = 0;

    for (int e = 0; e < ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Batching_Entry*>(__this->entries)->Count(); e++)
    {
        ::app::Uno::Content::Models::ModelMesh* m = ::uPtr< ::app::Fuse::Drawing::Batching::Entry*>(::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Batching_Entry*>(__this->entries)->Item(e))->Mesh;
        position = texcoord = texcoord1 = texcoord2 = texcoord3 = texcoord4 = texcoord5 = texcoord6 = texcoord7 = normal = tangent = binormal = color = boneWeights = boneIndex = NULL;

        for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_string_Uno_Content_Models_VertexAttributeArray_::GetEnumerator(::uPtr< ::uObject*>(::uPtr< ::app::Uno::Content::Models::ModelMesh*>(m)->VertexAttributes())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
        {
            ::app::Uno::Collections::KeyValuePair__string__Uno_Content_Models_VertexAttributeArray v = ::app::Uno::Collections::IEnumerator__Uno_Collections_KeyValuePair_string_Uno_Content_Models_VertexAttributeArray_::Current(::uPtr< ::uObject*>(enum_123));

            if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("Position")))
            {
                position = v.Value();
            }
            else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("TexCoord")))
            {
                texcoord = v.Value();
            }
            else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("TexCoord1")))
            {
                texcoord1 = v.Value();
            }
            else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("TexCoord2")))
            {
                texcoord2 = v.Value();
            }
            else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("TexCoord3")))
            {
                texcoord3 = v.Value();
            }
            else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("TexCoord4")))
            {
                texcoord4 = v.Value();
            }
            else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("TexCoord5")))
            {
                texcoord5 = v.Value();
            }
            else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("TexCoord6")))
            {
                texcoord6 = v.Value();
            }
            else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("TexCoord7")))
            {
                texcoord7 = v.Value();
            }
            else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("Normal")))
            {
                normal = v.Value();
            }
            else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("Tangent")))
            {
                tangent = v.Value();
            }
            else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("Binormal")))
            {
                binormal = v.Value();
            }
            else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("Color")))
            {
                color = v.Value();
            }
            else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("BoneWeights")))
            {
                boneWeights = v.Value();
            }
            else if (::app::Uno::String__op_Equality(NULL, v.Key(), ::uGetConstString("BoneIndices")))
            {
                boneIndex = v.Value();
            }
        }

        if (m->Indices() == NULL)
        {
            m = MeshBatcher__CreateFakeIndexBuffer(NULL, m);
        }

        for (int i = 0; i < ::uPtr< ::app::Uno::Content::Models::ModelMesh*>(m)->IndexCount(); i++)
        {
            if ((batchVertexCount >= batchVertexCutoff) || (batchIndexCount >= batchIndexCutoff))
            {
                batchVertexCutoff = 65535;
                batchIndexCutoff = 100000;
                b = ::app::Fuse::Drawing::Batching::Batch__New_1(NULL, batchVertexCutoff, batchIndexCutoff, true);
                ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Batching_Batch*>(batches)->Add(b);
                virtualIndexToRealIndex = ::app::Uno::Collections::Dictionary__int__int__New_1(NULL);
                batchVertexCount = 0;
                batchIndexCount = 0;
            }

            int originalIndex = ::uPtr< ::app::Uno::Content::Models::IndexArray*>(::uPtr< ::app::Uno::Content::Models::ModelMesh*>(m)->Indices())->GetInt(i);
            int virtualIndex = virtualIndexBase + originalIndex;
            int newIndex = int();

            if (!::uPtr< ::app::Uno::Collections::Dictionary__int__int*>(virtualIndexToRealIndex)->TryGetValue(virtualIndex, &newIndex))
            {
                newIndex = batchVertexCount;
                ::uPtr< ::app::Uno::Collections::Dictionary__int__int*>(virtualIndexToRealIndex)->Add(virtualIndex, newIndex);

                if (position != NULL)
                {
                    ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(::uPtr< ::app::Fuse::Drawing::Batching::Batch*>(b)->Positions())->Write_4((ind_125 = ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(position)->GetFloat4(originalIndex), ::app::Uno::Float3__New_2(NULL, ind_125.X, ind_125.Y, ind_125.Z)));
                }

                if (texcoord != NULL)
                {
                    ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(b->TexCoord0s())->Write_3((ind_126 = ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(texcoord)->GetFloat4(originalIndex), ::app::Uno::Float2__New_2(NULL, ind_126.X, ind_126.Y)));
                }

                if (texcoord1 != NULL)
                {
                    ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(b->TexCoord1s())->Write_3((ind_127 = ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(texcoord1)->GetFloat4(originalIndex), ::app::Uno::Float2__New_2(NULL, ind_127.X, ind_127.Y)));
                }

                if (texcoord2 != NULL)
                {
                    ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(b->TexCoord2s())->Write_3((ind_128 = ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(texcoord2)->GetFloat4(originalIndex), ::app::Uno::Float2__New_2(NULL, ind_128.X, ind_128.Y)));
                }

                if (texcoord3 != NULL)
                {
                    ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(b->TexCoord3s())->Write_3((ind_129 = ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(texcoord3)->GetFloat4(originalIndex), ::app::Uno::Float2__New_2(NULL, ind_129.X, ind_129.Y)));
                }

                if (texcoord4 != NULL)
                {
                    ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(b->TexCoord4s())->Write_3((ind_130 = ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(texcoord4)->GetFloat4(originalIndex), ::app::Uno::Float2__New_2(NULL, ind_130.X, ind_130.Y)));
                }

                if (texcoord5 != NULL)
                {
                    ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(b->TexCoord5s())->Write_3((ind_131 = ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(texcoord5)->GetFloat4(originalIndex), ::app::Uno::Float2__New_2(NULL, ind_131.X, ind_131.Y)));
                }

                if (texcoord6 != NULL)
                {
                    ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(b->TexCoord6s())->Write_3((ind_132 = ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(texcoord6)->GetFloat4(originalIndex), ::app::Uno::Float2__New_2(NULL, ind_132.X, ind_132.Y)));
                }

                if (texcoord7 != NULL)
                {
                    ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(b->TexCoord7s())->Write_3((ind_133 = ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(texcoord7)->GetFloat4(originalIndex), ::app::Uno::Float2__New_2(NULL, ind_133.X, ind_133.Y)));
                }

                if (normal != NULL)
                {
                    ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(b->Normals())->Write_4((ind_134 = ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(normal)->GetFloat4(originalIndex), ::app::Uno::Float3__New_2(NULL, ind_134.X, ind_134.Y, ind_134.Z)));
                }

                if (tangent != NULL)
                {
                    ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(b->Tangents())->Write_5(::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(tangent)->GetFloat4(originalIndex));
                }

                if (binormal != NULL)
                {
                    ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(b->Binormals())->Write_4((ind_135 = ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(binormal)->GetFloat4(originalIndex), ::app::Uno::Float3__New_2(NULL, ind_135.X, ind_135.Y, ind_135.Z)));
                }

                if (color != NULL)
                {
                    ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(b->Colors())->Write_5(::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(color)->GetFloat4(originalIndex));
                }

                if (boneWeights != NULL)
                {
                    ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(b->BoneWeightBuffer())->Write_2(::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(boneWeights)->GetByte4Normalized(originalIndex));
                }

                if (boneIndex != NULL)
                {
                    ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(b->BoneIndexBuffer())->Write_2(::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(boneIndex)->GetByte4(originalIndex));
                }

                ::uPtr< ::app::Fuse::Drawing::Batching::BatchVertexBuffer*>(b->InstanceIndices())->Write_17((::uUShort)::uPtr< ::app::Fuse::Drawing::Batching::Entry*>(::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Batching_Entry*>(__this->entries)->Item(e))->InstanceIndex);
                batchVertexCount++;
            }

            ::uPtr< ::app::Fuse::Drawing::Batching::BatchIndexBuffer*>(::uPtr< ::app::Fuse::Drawing::Batching::Batch*>(b)->Indices())->Write_1((::uUShort)newIndex);
            batchIndexCount++;
        }

        virtualIndexBase = virtualIndexBase + ::uPtr< ::app::Uno::Content::Models::ModelMesh*>(m)->VertexCount();
    }

    __this->batches = ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Batching_Batch*>(batches)->ToArray();
}

int MeshBatcher__get_BatchCount(MeshBatcher* __this)
{
    return ::uPtr< ::uArray*>(__this->batches)->Length();
}

::uObject* MeshBatcher__get_Batches(MeshBatcher* __this)
{
    __this->Flush();
    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Fuse_Drawing_Batching_Batch__New_1(NULL, __this->batches);
}

::uObject* MeshBatcher__get_Entries(MeshBatcher* __this)
{
    return ::app::Uno::Collections::EnumerableExtensions__Select__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh(NULL, (::uObject*)__this->entries, ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Drawing_Batching_Entry__Uno_Content_Models_ModelMesh__typeof(), (const void*)MeshBatcher__Mesh));
}

int MeshBatcher__get_EntryCount(MeshBatcher* __this)
{
    return ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Batching_Entry*>(__this->entries)->Count();
}

::app::Uno::Content::Models::ModelMesh* MeshBatcher__Mesh(::uStatic* __this, ::app::Fuse::Drawing::Batching::Entry* entry)
{
    return ::uPtr< ::app::Fuse::Drawing::Batching::Entry*>(entry)->Mesh;
}

MeshBatcher* MeshBatcher__New_1(::uStatic* __this)
{
    MeshBatcher* inst = (MeshBatcher*)::uAllocObject(sizeof(MeshBatcher), MeshBatcher__typeof());
    inst->_ObjInit();
    return inst;
}

}}}}
