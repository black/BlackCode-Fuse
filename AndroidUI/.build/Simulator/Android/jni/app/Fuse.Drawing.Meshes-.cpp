#include <app/Fuse.Drawing.Meshes.MeshGenerator.h>
#include <app/Fuse.Drawing.Meshes.MeshTools.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.Dictionary__string__Uno_Content_Models_VertexAt-1b8a56c1.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_strin-d9fcbc62.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Collections_KeyValuePair_strin-d9f4a565.h>
#include <app/Uno.Collections.KeyValuePair__string__Uno_Content_Models_Vertex-7e6c5d3f.h>
#include <app/Uno.Content.Models.IndexArray.h>
#include <app/Uno.Content.Models.ModelMesh.h>
#include <app/Uno.Content.Models.VertexAttributeArray.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Graphics.PrimitiveType.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.Quaternion.h>
#include <app/Uno.String.h>
#include <app/Uno.UShort.h>
#include <app/Uno.Vector.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Meshes {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Meshes\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MeshGenerator__uType* MeshGenerator__typeof()
{
    static ::uStaticStrong<MeshGenerator__uType*> type;
    if (type != NULL) return type;

    type = (MeshGenerator__uType*)::uAllocClassType(sizeof(MeshGenerator__uType), "Fuse.Drawing.Meshes.MeshGenerator");

    type->SetFunctions(4,
        ::uNewFunction("CreateCone", MeshGenerator__CreateCone, 0, true, ::app::Uno::Content::Models::ModelMesh__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("CreateCube", MeshGenerator__CreateCube, 0, true, ::app::Uno::Content::Models::ModelMesh__typeof(), ::app::Uno::Float3__typeof(), ::app::Uno::Float__typeof()),
        ::uNewFunction("CreateCylinder", MeshGenerator__CreateCylinder, 0, true, ::app::Uno::Content::Models::ModelMesh__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("CreateSphere", MeshGenerator__CreateSphere, 0, true, ::app::Uno::Content::Models::ModelMesh__typeof(), ::app::Uno::Float3__typeof(), ::app::Uno::Float__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()));

    ::uRegisterType(type);
    return type;
}

::app::Uno::Content::Models::ModelMesh* MeshGenerator__CreateCone(::uStatic* __this, float height, float radius, int horizontalTessellation, int verticalTessellation)
{
    int horizontalVertexCount = horizontalTessellation + 1;
    int verticalVertexCount = verticalTessellation + 1;
    int bodyVertexCount = horizontalVertexCount * verticalVertexCount;
    int bodyIndexCount = (horizontalTessellation * verticalTessellation) * 6;
    int capVertexCount = horizontalVertexCount + 1;
    int capIndexCount = horizontalVertexCount * 3;
    int vertexCount = bodyVertexCount + (capVertexCount << 1);
    int indexCount = bodyIndexCount + (capIndexCount << 1);
    float halfLength = height * 0.5f;
    ::uArray* vertices = ::uNewArray(::app::Uno::Float3__typeof(), vertexCount);
    ::uArray* normals = ::uNewArray(::app::Uno::Float3__typeof(), vertexCount);
    ::uArray* texCoords = ::uNewArray(::app::Uno::Float2__typeof(), vertexCount);
    ::uArray* indices = ::uNewArray(::app::Uno::UShort__typeof(), indexCount);

    for (int j = 0; j < verticalVertexCount; j++)
    {
        float v = (float)j / (float)verticalTessellation;

        for (int i = 0; i < horizontalVertexCount; ++i)
        {
            int k = i + (j * horizontalVertexCount);
            float u = (float)i / (float)horizontalTessellation;
            ::uPtr< ::uArray*>(texCoords)->Item< ::app::Uno::Float2>(k) = ::app::Uno::Float2__New_2(NULL, u, v);
            u = u * 6.28318548f;
            ::uPtr< ::uArray*>(vertices)->Item< ::app::Uno::Float3>(k) = ::app::Uno::Float3__New_2(NULL, (::app::Uno::Math__Cos_1(NULL, u) * radius) * (1.0f - v), -halfLength + (v * height), (::app::Uno::Math__Sin_1(NULL, u) * radius) * (1.0f - v));
            ::uPtr< ::uArray*>(normals)->Item< ::app::Uno::Float3>(k) = ::app::Uno::Float3__New_2(NULL, ::app::Uno::Math__Cos_1(NULL, u), 0.0f, ::app::Uno::Math__Sin_1(NULL, u));
        }
    }

    for (int i = 0; i < horizontalTessellation; ++i)
    {
        for (int j = 0; j < verticalTessellation; ++j)
        {
            int k = (i + (j * horizontalTessellation)) * 6;
            ::uPtr< ::uArray*>(indices)->Item< ::uUShort>(k) = (::uUShort)(i + (j * horizontalVertexCount));
            indices->Item< ::uUShort>(k + 1) = (::uUShort)(i + ((j + 1) * horizontalVertexCount));
            indices->Item< ::uUShort>(k + 2) = (::uUShort)((i + (j * horizontalVertexCount)) + 1);
            indices->Item< ::uUShort>(k + 3) = (::uUShort)((i + (j * horizontalVertexCount)) + 1);
            indices->Item< ::uUShort>(k + 4) = (::uUShort)(i + ((j + 1) * horizontalVertexCount));
            indices->Item< ::uUShort>(k + 5) = (::uUShort)((i + ((j + 1) * horizontalVertexCount)) + 1);
        }
    }

    vertices->Item< ::app::Uno::Float3>(bodyVertexCount) = ::app::Uno::Float3__New_2(NULL, 0.0f, -halfLength, 0.0f);
    normals->Item< ::app::Uno::Float3>(bodyVertexCount) = ::app::Uno::Float3__New_2(NULL, 0.0f, -1.0f, 0.0f);
    texCoords->Item< ::app::Uno::Float2>(bodyVertexCount) = ::app::Uno::Float2__New_2(NULL, 0.5f, 0.5f);

    for (int i = 0; i < horizontalVertexCount; i++)
    {
        float u = (float)i / (float)horizontalTessellation;
        u = u * 6.28318548f;
        ::uPtr< ::uArray*>(vertices)->Item< ::app::Uno::Float3>((bodyVertexCount + 2) + i) = ::app::Uno::Float3__New_2(NULL, ::app::Uno::Math__Cos_1(NULL, u) * radius, -halfLength, ::app::Uno::Math__Sin_1(NULL, u) * radius);
        ::uPtr< ::uArray*>(normals)->Item< ::app::Uno::Float3>((bodyVertexCount + 2) + i) = ::app::Uno::Float3__New_2(NULL, 0.0f, -1.0f, 0.0f);
        ::uPtr< ::uArray*>(texCoords)->Item< ::app::Uno::Float2>((bodyVertexCount + 2) + i) = ::app::Uno::Float2__New_2(NULL, 0.5f + (0.5f * ::app::Uno::Math__Cos_1(NULL, u)), 0.5f + (0.5f * ::app::Uno::Math__Sin_1(NULL, u)));
    }

    int n = 0;
    int bottomi = bodyIndexCount + capIndexCount;
    int bottomv = bodyVertexCount + 2;
    int bottomCenter = bodyVertexCount;

    for (int i = 0; i < capIndexCount; i = i + 3)
    {
        int left = n;
        int right = n + 1;

        if (right == horizontalVertexCount)
        {
            right = 0;
        }

        ::uPtr< ::uArray*>(indices)->Item< ::uUShort>(bottomi++) = (::uUShort)bottomCenter;
        indices->Item< ::uUShort>(bottomi++) = (::uUShort)(bottomv + left);
        indices->Item< ::uUShort>(bottomi++) = (::uUShort)(bottomv + right);
        n++;
    }

    ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray* dict = ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray__New_1(NULL);
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray*>(dict)->Item(::uGetConstString("Position"), ::app::Uno::Content::Models::VertexAttributeArray__New_1(NULL, vertices));
    dict->Item(::uGetConstString("Normal"), ::app::Uno::Content::Models::VertexAttributeArray__New_1(NULL, normals));
    dict->Item(::uGetConstString("TexCoord"), ::app::Uno::Content::Models::VertexAttributeArray__New_3(NULL, texCoords));
    ::app::Uno::Content::Models::ModelMesh* cone = ::app::Uno::Content::Models::ModelMesh__New_1(NULL, ::uGetConstString("Cone"), 1, dict, ::app::Uno::Content::Models::IndexArray__New_2(NULL, indices));
    return ::app::Fuse::Drawing::Meshes::MeshTools__CalculateTangentsAndBinormals(NULL, cone);
}

::app::Uno::Content::Models::ModelMesh* MeshGenerator__CreateCube(::uStatic* __this, ::app::Uno::Float3 pivot, float halfExtent)
{
    ::uArray* array_123;
    ::uArray* array_124;
    int vertexCount = 24;
    int indexCount = 36;
    ::uArray* vertices = ::uNewArray(::app::Uno::Float3__typeof(), vertexCount);
    ::uArray* normals = ::uNewArray(::app::Uno::Float3__typeof(), vertexCount);
    ::uArray* tangents = ::uNewArray(::app::Uno::Float4__typeof(), vertexCount);
    ::uArray* texCoords = ::uNewArray(::app::Uno::Float2__typeof(), vertexCount);
    ::uArray* indices = ::uNewArray(::app::Uno::UShort__typeof(), indexCount);
    array_123 = ::uNewArray(::app::Uno::Float__typeof(), 6);
    ::uPtr< ::uArray*>(array_123)->Item< float>(0) = 0.0f;
    ::uPtr< ::uArray*>(array_123)->Item< float>(1) = ::app::Uno::Math__DegreesToRadians_1(NULL, 90.0f);
    ::uPtr< ::uArray*>(array_123)->Item< float>(2) = ::app::Uno::Math__DegreesToRadians_1(NULL, 180.0f);
    ::uPtr< ::uArray*>(array_123)->Item< float>(3) = ::app::Uno::Math__DegreesToRadians_1(NULL, 270.0f);
    ::uPtr< ::uArray*>(array_123)->Item< float>(4) = 0.0f;
    ::uPtr< ::uArray*>(array_123)->Item< float>(5) = 0.0f;
    ::uArray* pitches = array_123;
    array_124 = ::uNewArray(::app::Uno::Float__typeof(), 6);
    ::uPtr< ::uArray*>(array_124)->Item< float>(0) = 0.0f;
    ::uPtr< ::uArray*>(array_124)->Item< float>(1) = 0.0f;
    ::uPtr< ::uArray*>(array_124)->Item< float>(2) = 0.0f;
    ::uPtr< ::uArray*>(array_124)->Item< float>(3) = 0.0f;
    ::uPtr< ::uArray*>(array_124)->Item< float>(4) = ::app::Uno::Math__DegreesToRadians_1(NULL, 90.0f);
    ::uPtr< ::uArray*>(array_124)->Item< float>(5) = ::app::Uno::Math__DegreesToRadians_1(NULL, -90.0f);
    ::uArray* yaws = array_124;

    for (int i = 0; i < 6; i++)
    {
        int vi = i * 4;
        ::app::Uno::Float4 q = ::app::Uno::Quaternion__FromEulerAngle(NULL, ::uPtr< ::uArray*>(pitches)->Item< float>(i), ::uPtr< ::uArray*>(yaws)->Item< float>(i), 0.0f);
        ::uPtr< ::uArray*>(vertices)->Item< ::app::Uno::Float3>(vi) = ::app::Uno::Float3__op_Addition_2(NULL, pivot, ::app::Uno::Float3__op_Multiply_1(NULL, ::app::Uno::Vector__Transform_3(NULL, ::app::Uno::Float3__New_2(NULL, -1.0f, -1.0f, 1.0f), q), halfExtent));
        vertices->Item< ::app::Uno::Float3>(vi + 1) = ::app::Uno::Float3__op_Addition_2(NULL, pivot, ::app::Uno::Float3__op_Multiply_1(NULL, ::app::Uno::Vector__Transform_3(NULL, ::app::Uno::Float3__New_2(NULL, 1.0f, -1.0f, 1.0f), q), halfExtent));
        vertices->Item< ::app::Uno::Float3>(vi + 2) = ::app::Uno::Float3__op_Addition_2(NULL, pivot, ::app::Uno::Float3__op_Multiply_1(NULL, ::app::Uno::Vector__Transform_3(NULL, ::app::Uno::Float3__New_2(NULL, 1.0f, 1.0f, 1.0f), q), halfExtent));
        vertices->Item< ::app::Uno::Float3>(vi + 3) = ::app::Uno::Float3__op_Addition_2(NULL, pivot, ::app::Uno::Float3__op_Multiply_1(NULL, ::app::Uno::Vector__Transform_3(NULL, ::app::Uno::Float3__New_2(NULL, -1.0f, 1.0f, 1.0f), q), halfExtent));
        ::app::Uno::Float3 n = ::app::Uno::Vector__Transform_3(NULL, ::app::Uno::Float3__New_2(NULL, 0.0f, 0.0f, 1.0f), q);
        ::uPtr< ::uArray*>(normals)->Item< ::app::Uno::Float3>(vi) = n;
        normals->Item< ::app::Uno::Float3>(vi + 1) = n;
        normals->Item< ::app::Uno::Float3>(vi + 2) = n;
        normals->Item< ::app::Uno::Float3>(vi + 3) = n;
        ::app::Uno::Float4 t = ::app::Uno::Float4__New_8(NULL, ::app::Uno::Vector__Transform_3(NULL, ::app::Uno::Float3__New_2(NULL, 1.0f, 0.0f, 0.0f), q), 1.0f);
        ::uPtr< ::uArray*>(tangents)->Item< ::app::Uno::Float4>(vi) = t;
        tangents->Item< ::app::Uno::Float4>(vi + 1) = t;
        tangents->Item< ::app::Uno::Float4>(vi + 2) = t;
        tangents->Item< ::app::Uno::Float4>(vi + 3) = t;
        ::uPtr< ::uArray*>(texCoords)->Item< ::app::Uno::Float2>(vi) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f);
        texCoords->Item< ::app::Uno::Float2>(vi + 1) = ::app::Uno::Float2__New_2(NULL, 1.0f, 0.0f);
        texCoords->Item< ::app::Uno::Float2>(vi + 2) = ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f);
        texCoords->Item< ::app::Uno::Float2>(vi + 3) = ::app::Uno::Float2__New_2(NULL, 0.0f, 1.0f);
        int ii = i * 6;
        ::uPtr< ::uArray*>(indices)->Item< ::uUShort>(ii) = (::uUShort)vi;
        indices->Item< ::uUShort>(ii + 1) = (::uUShort)(vi + 1);
        indices->Item< ::uUShort>(ii + 2) = (::uUShort)(vi + 2);
        indices->Item< ::uUShort>(ii + 3) = (::uUShort)(vi + 2);
        indices->Item< ::uUShort>(ii + 4) = (::uUShort)(vi + 3);
        indices->Item< ::uUShort>(ii + 5) = (::uUShort)vi;
    }

    ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray* dict = ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray__New_1(NULL);
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray*>(dict)->Item(::uGetConstString("Position"), ::app::Uno::Content::Models::VertexAttributeArray__New_1(NULL, vertices));
    dict->Item(::uGetConstString("Normal"), ::app::Uno::Content::Models::VertexAttributeArray__New_1(NULL, normals));
    dict->Item(::uGetConstString("Tangent"), ::app::Uno::Content::Models::VertexAttributeArray__New_4(NULL, tangents));
    dict->Item(::uGetConstString("TexCoord"), ::app::Uno::Content::Models::VertexAttributeArray__New_3(NULL, texCoords));
    return ::app::Uno::Content::Models::ModelMesh__New_1(NULL, ::uGetConstString("Cube"), 1, dict, ::app::Uno::Content::Models::IndexArray__New_2(NULL, indices));
}

::app::Uno::Content::Models::ModelMesh* MeshGenerator__CreateCylinder(::uStatic* __this, float height, float radius, int horizontalTessellation, int verticalTessellation)
{
    int horizontalVertexCount = horizontalTessellation + 1;
    int verticalVertexCount = verticalTessellation + 1;
    int bodyVertexCount = horizontalVertexCount * verticalVertexCount;
    int bodyIndexCount = (horizontalTessellation * verticalTessellation) * 6;
    int capVertexCount = horizontalVertexCount + 1;
    int capIndexCount = horizontalVertexCount * 3;
    int vertexCount = bodyVertexCount + (capVertexCount << 1);
    int indexCount = bodyIndexCount + (capIndexCount << 1);
    float halfLength = height * 0.5f;
    ::uArray* vertices = ::uNewArray(::app::Uno::Float3__typeof(), vertexCount);
    ::uArray* normals = ::uNewArray(::app::Uno::Float3__typeof(), vertexCount);
    ::uArray* texCoords = ::uNewArray(::app::Uno::Float2__typeof(), vertexCount);
    ::uArray* indices = ::uNewArray(::app::Uno::UShort__typeof(), indexCount);

    for (int j = 0; j < verticalVertexCount; j++)
    {
        float v = (float)j / (float)verticalTessellation;

        for (int i = 0; i < horizontalVertexCount; ++i)
        {
            int k = i + (j * horizontalVertexCount);
            float u = (float)i / (float)horizontalTessellation;
            ::uPtr< ::uArray*>(texCoords)->Item< ::app::Uno::Float2>(k) = ::app::Uno::Float2__New_2(NULL, u, v);
            u = u * 6.28318548f;
            ::uPtr< ::uArray*>(vertices)->Item< ::app::Uno::Float3>(k) = ::app::Uno::Float3__New_2(NULL, ::app::Uno::Math__Cos_1(NULL, u) * radius, -halfLength + (v * height), ::app::Uno::Math__Sin_1(NULL, u) * radius);
            ::uPtr< ::uArray*>(normals)->Item< ::app::Uno::Float3>(k) = ::app::Uno::Float3__New_2(NULL, ::app::Uno::Math__Cos_1(NULL, u), 0.0f, ::app::Uno::Math__Sin_1(NULL, u));
        }
    }

    for (int i = 0; i < horizontalTessellation; ++i)
    {
        for (int j = 0; j < verticalTessellation; ++j)
        {
            int k = (i + (j * horizontalTessellation)) * 6;
            ::uPtr< ::uArray*>(indices)->Item< ::uUShort>(k) = (::uUShort)(i + (j * horizontalVertexCount));
            indices->Item< ::uUShort>(k + 1) = (::uUShort)(i + ((j + 1) * horizontalVertexCount));
            indices->Item< ::uUShort>(k + 2) = (::uUShort)((i + (j * horizontalVertexCount)) + 1);
            indices->Item< ::uUShort>(k + 3) = (::uUShort)((i + (j * horizontalVertexCount)) + 1);
            indices->Item< ::uUShort>(k + 4) = (::uUShort)(i + ((j + 1) * horizontalVertexCount));
            indices->Item< ::uUShort>(k + 5) = (::uUShort)((i + ((j + 1) * horizontalVertexCount)) + 1);
        }
    }

    vertices->Item< ::app::Uno::Float3>(bodyVertexCount) = ::app::Uno::Float3__New_2(NULL, 0.0f, -halfLength, 0.0f);
    normals->Item< ::app::Uno::Float3>(bodyVertexCount) = ::app::Uno::Float3__New_2(NULL, 0.0f, -1.0f, 0.0f);
    texCoords->Item< ::app::Uno::Float2>(bodyVertexCount) = ::app::Uno::Float2__New_2(NULL, 0.5f, 0.5f);
    vertices->Item< ::app::Uno::Float3>(bodyVertexCount + 1) = ::app::Uno::Float3__New_2(NULL, 0.0f, halfLength, 0.0f);
    normals->Item< ::app::Uno::Float3>(bodyVertexCount + 1) = ::app::Uno::Float3__New_2(NULL, 0.0f, 1.0f, 0.0f);
    texCoords->Item< ::app::Uno::Float2>(bodyVertexCount + 1) = ::app::Uno::Float2__New_2(NULL, 0.5f, 0.5f);

    for (int i = 0; i < horizontalVertexCount; i++)
    {
        float u = (float)i / (float)horizontalTessellation;
        u = u * 6.28318548f;
        ::uPtr< ::uArray*>(vertices)->Item< ::app::Uno::Float3>((bodyVertexCount + 2) + i) = ::app::Uno::Float3__New_2(NULL, ::app::Uno::Math__Cos_1(NULL, u) * radius, -halfLength, ::app::Uno::Math__Sin_1(NULL, u) * radius);
        ::uPtr< ::uArray*>(normals)->Item< ::app::Uno::Float3>((bodyVertexCount + 2) + i) = ::app::Uno::Float3__New_2(NULL, 0.0f, -1.0f, 0.0f);
        ::uPtr< ::uArray*>(texCoords)->Item< ::app::Uno::Float2>((bodyVertexCount + 2) + i) = ::app::Uno::Float2__New_2(NULL, 0.5f + (0.5f * ::app::Uno::Math__Cos_1(NULL, u)), 0.5f + (0.5f * ::app::Uno::Math__Sin_1(NULL, u)));
        vertices->Item< ::app::Uno::Float3>(((bodyVertexCount + 2) + horizontalVertexCount) + i) = ::app::Uno::Float3__New_2(NULL, ::app::Uno::Math__Cos_1(NULL, u) * radius, halfLength, ::app::Uno::Math__Sin_1(NULL, u) * radius);
        normals->Item< ::app::Uno::Float3>(((bodyVertexCount + 2) + horizontalVertexCount) + i) = ::app::Uno::Float3__New_2(NULL, 0.0f, 1.0f, 0.0f);
        texCoords->Item< ::app::Uno::Float2>(((bodyVertexCount + 2) + horizontalVertexCount) + i) = ::app::Uno::Float2__New_2(NULL, 0.5f + (0.5f * ::app::Uno::Math__Cos_1(NULL, u)), 0.5f + (0.5f * ::app::Uno::Math__Sin_1(NULL, u)));
    }

    int n = 0;
    int topi = bodyIndexCount;
    int bottomi = bodyIndexCount + capIndexCount;
    int topv = (bodyVertexCount + 2) + horizontalVertexCount;
    int bottomv = bodyVertexCount + 2;
    int topCenter = bodyVertexCount + 1;
    int bottomCenter = bodyVertexCount;

    for (int i = 0; i < capIndexCount; i = i + 3)
    {
        int left = n;
        int right = n + 1;

        if (right == horizontalVertexCount)
        {
            right = 0;
        }

        ::uPtr< ::uArray*>(indices)->Item< ::uUShort>(topi++) = (::uUShort)topCenter;
        indices->Item< ::uUShort>(topi++) = (::uUShort)(topv + right);
        indices->Item< ::uUShort>(topi++) = (::uUShort)(topv + left);
        indices->Item< ::uUShort>(bottomi++) = (::uUShort)bottomCenter;
        indices->Item< ::uUShort>(bottomi++) = (::uUShort)(bottomv + left);
        indices->Item< ::uUShort>(bottomi++) = (::uUShort)(bottomv + right);
        n++;
    }

    ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray* dict = ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray__New_1(NULL);
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray*>(dict)->Item(::uGetConstString("Position"), ::app::Uno::Content::Models::VertexAttributeArray__New_1(NULL, vertices));
    dict->Item(::uGetConstString("Normal"), ::app::Uno::Content::Models::VertexAttributeArray__New_1(NULL, normals));
    dict->Item(::uGetConstString("TexCoord"), ::app::Uno::Content::Models::VertexAttributeArray__New_3(NULL, texCoords));
    ::app::Uno::Content::Models::ModelMesh* cylinder = ::app::Uno::Content::Models::ModelMesh__New_1(NULL, ::uGetConstString("Cylinder"), 1, dict, ::app::Uno::Content::Models::IndexArray__New_2(NULL, indices));
    return ::app::Fuse::Drawing::Meshes::MeshTools__CalculateTangentsAndBinormals(NULL, cylinder);
}

::app::Uno::Content::Models::ModelMesh* MeshGenerator__CreateSphere(::uStatic* __this, ::app::Uno::Float3 pivot, float radius, int slices, int stacks)
{
    int horizontalVertexCount = slices + 1;
    int verticalVertexCount = stacks + 1;
    int bodyVertexCount = horizontalVertexCount * verticalVertexCount;
    int bodyIndexCount = (slices * stacks) * 6;
    int vertexCount = bodyVertexCount;
    int indexCount = bodyIndexCount;
    ::uArray* vertices = ::uNewArray(::app::Uno::Float3__typeof(), vertexCount);
    ::uArray* normals = ::uNewArray(::app::Uno::Float3__typeof(), vertexCount);
    ::uArray* texCoords = ::uNewArray(::app::Uno::Float2__typeof(), vertexCount);
    ::uArray* indices = ::uNewArray(::app::Uno::UShort__typeof(), indexCount);

    for (int j = 0; j < verticalVertexCount; j++)
    {
        for (int i = 0; i < horizontalVertexCount; ++i)
        {
            int k = i + (j * horizontalVertexCount);
            float u = (float)i / (float)slices;
            float v = (float)j / (float)stacks;
            ::uPtr< ::uArray*>(texCoords)->Item< ::app::Uno::Float2>(k) = ::app::Uno::Float2__New_2(NULL, u, 1.0f - v);
            u = u * 6.28318548f;
            v = (v * 3.14159274f) - 1.57079637f;
            ::uPtr< ::uArray*>(vertices)->Item< ::app::Uno::Float3>(k) = ::app::Uno::Float3__op_Addition_2(NULL, pivot, ::app::Uno::Float3__New_2(NULL, (::app::Uno::Math__Cos_1(NULL, v) * ::app::Uno::Math__Cos_1(NULL, u)) * radius, (::app::Uno::Math__Cos_1(NULL, v) * ::app::Uno::Math__Sin_1(NULL, u)) * radius, ::app::Uno::Math__Sin_1(NULL, v) * radius));
            ::uPtr< ::uArray*>(normals)->Item< ::app::Uno::Float3>(k) = ::app::Uno::Float3__New_2(NULL, ::app::Uno::Math__Cos_1(NULL, v) * ::app::Uno::Math__Cos_1(NULL, u), ::app::Uno::Math__Cos_1(NULL, v) * ::app::Uno::Math__Sin_1(NULL, u), ::app::Uno::Math__Sin_1(NULL, v));
        }
    }

    for (int i = 0; i < slices; ++i)
    {
        for (int j = 0; j < stacks; ++j)
        {
            int k = (i + (j * slices)) * 6;
            ::uPtr< ::uArray*>(indices)->Item< ::uUShort>(k) = (::uUShort)(i + (j * horizontalVertexCount));
            indices->Item< ::uUShort>(k + 1) = (::uUShort)((i + (j * horizontalVertexCount)) + 1);
            indices->Item< ::uUShort>(k + 2) = (::uUShort)(i + ((j + 1) * horizontalVertexCount));
            indices->Item< ::uUShort>(k + 3) = (::uUShort)((i + (j * horizontalVertexCount)) + 1);
            indices->Item< ::uUShort>(k + 4) = (::uUShort)((i + ((j + 1) * horizontalVertexCount)) + 1);
            indices->Item< ::uUShort>(k + 5) = (::uUShort)(i + ((j + 1) * horizontalVertexCount));
        }
    }

    ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray* dict = ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray__New_1(NULL);
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray*>(dict)->Item(::uGetConstString("Position"), ::app::Uno::Content::Models::VertexAttributeArray__New_1(NULL, vertices));
    dict->Item(::uGetConstString("Normal"), ::app::Uno::Content::Models::VertexAttributeArray__New_1(NULL, normals));
    dict->Item(::uGetConstString("TexCoord"), ::app::Uno::Content::Models::VertexAttributeArray__New_3(NULL, texCoords));
    ::app::Uno::Content::Models::ModelMesh* sphere = ::app::Uno::Content::Models::ModelMesh__New_1(NULL, ::uGetConstString("Sphere"), 1, dict, ::app::Uno::Content::Models::IndexArray__New_2(NULL, indices));
    return ::app::Fuse::Drawing::Meshes::MeshTools__CalculateTangentsAndBinormals(NULL, sphere);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Drawing.Meshes\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MeshTools__uType* MeshTools__typeof()
{
    static ::uStaticStrong<MeshTools__uType*> type;
    if (type != NULL) return type;

    type = (MeshTools__uType*)::uAllocClassType(sizeof(MeshTools__uType), "Fuse.Drawing.Meshes.MeshTools");

    type->SetFunctions(2,
        ::uNewFunction("CalculateNormals", MeshTools__CalculateNormals, 0, true, ::app::Uno::Content::Models::ModelMesh__typeof(), ::app::Uno::Content::Models::ModelMesh__typeof()),
        ::uNewFunction("CalculateTangentsAndBinormals", MeshTools__CalculateTangentsAndBinormals, 0, true, ::app::Uno::Content::Models::ModelMesh__typeof(), ::app::Uno::Content::Models::ModelMesh__typeof()));

    ::uRegisterType(type);
    return type;
}

::app::Uno::Content::Models::ModelMesh* MeshTools__CalculateNormals(::uStatic* __this, ::app::Uno::Content::Models::ModelMesh* mesh)
{
    ::app::Uno::Content::Models::VertexAttributeArray* positions = ::uPtr< ::app::Uno::Content::Models::ModelMesh*>(mesh)->Positions();
    ::app::Uno::Content::Models::IndexArray* indices = mesh->Indices();
    ::uArray* normals = ::uNewArray(::app::Uno::Float3__typeof(), ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(positions)->Count());

    for (int i = 0; i < ::uPtr< ::app::Uno::Content::Models::IndexArray*>(indices)->Count(); i = i + 3)
    {
        int i0 = ::uPtr< ::app::Uno::Content::Models::IndexArray*>(indices)->GetInt(i);
        int i1 = indices->GetInt(i + 1);
        int i2 = indices->GetInt(i + 2);
        ::app::Uno::Float4 ind_125 = ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(positions)->GetFloat4(i0);
        ::app::Uno::Float3 p0 = ::app::Uno::Float3__New_2(NULL, ind_125.X, ind_125.Y, ind_125.Z);
        ::app::Uno::Float4 ind_126 = positions->GetFloat4(i1);
        ::app::Uno::Float3 p1 = ::app::Uno::Float3__New_2(NULL, ind_126.X, ind_126.Y, ind_126.Z);
        ::app::Uno::Float4 ind_127 = positions->GetFloat4(i2);
        ::app::Uno::Float3 p2 = ::app::Uno::Float3__New_2(NULL, ind_127.X, ind_127.Y, ind_127.Z);
        ::app::Uno::Float3 v0 = ::app::Uno::Float3__op_Subtraction_2(NULL, p0, p1);
        ::app::Uno::Float3 v1 = ::app::Uno::Float3__op_Subtraction_2(NULL, p2, p1);
        ::app::Uno::Float3 v2 = ::app::Uno::Vector__Cross(NULL, v0, v1);
        ::uPtr< ::uArray*>(normals)->Item< ::app::Uno::Float3>(i0) = ::app::Uno::Float3__op_Addition_2(NULL, ::uPtr< ::uArray*>(normals)->Item< ::app::Uno::Float3>(i0), v2);
        normals->Item< ::app::Uno::Float3>(i1) = ::app::Uno::Float3__op_Addition_2(NULL, normals->Item< ::app::Uno::Float3>(i1), v2);
        normals->Item< ::app::Uno::Float3>(i2) = ::app::Uno::Float3__op_Addition_2(NULL, normals->Item< ::app::Uno::Float3>(i2), v2);
    }

    for (int i = 0; i < positions->Count(); i++)
    {
        normals->Item< ::app::Uno::Float3>(i) = ::app::Uno::Vector__Normalize_1(NULL, normals->Item< ::app::Uno::Float3>(i));
    }

    ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray* dict = ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray__New_1(NULL);

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_string_Uno_Content_Models_VertexAttributeArray_::GetEnumerator(::uPtr< ::uObject*>(mesh->VertexAttributes())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Uno::Collections::KeyValuePair__string__Uno_Content_Models_VertexAttributeArray v = ::app::Uno::Collections::IEnumerator__Uno_Collections_KeyValuePair_string_Uno_Content_Models_VertexAttributeArray_::Current(::uPtr< ::uObject*>(enum_123));
        ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray*>(dict)->Item(v.Key(), v.Value());
    }

    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray*>(dict)->Item(::uGetConstString("Normal"), ::app::Uno::Content::Models::VertexAttributeArray__New_1(NULL, normals));
    return ::app::Uno::Content::Models::ModelMesh__New_1(NULL, mesh->Name(), mesh->PrimitiveType(), dict, mesh->Indices());
}

::app::Uno::Content::Models::ModelMesh* MeshTools__CalculateTangentsAndBinormals(::uStatic* __this, ::app::Uno::Content::Models::ModelMesh* m)
{
    ::app::Uno::Content::Models::VertexAttributeArray* positions = ::uPtr< ::app::Uno::Content::Models::ModelMesh*>(m)->Positions();
    ::app::Uno::Content::Models::VertexAttributeArray* normals = m->Normals();
    ::app::Uno::Content::Models::VertexAttributeArray* texcoords = m->TexCoords();
    ::app::Uno::Content::Models::IndexArray* indices = m->Indices();
    int indexCount = ::uPtr< ::app::Uno::Content::Models::IndexArray*>(indices)->Count();
    int vertexCount = ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(positions)->Count();
    ::uArray* tan1 = ::uNewArray(::app::Uno::Float3__typeof(), vertexCount);
    ::uArray* tan2 = ::uNewArray(::app::Uno::Float3__typeof(), vertexCount);
    ::uArray* tangents = ::uNewArray(::app::Uno::Float3__typeof(), vertexCount);
    ::uArray* binormals = ::uNewArray(::app::Uno::Float3__typeof(), vertexCount);

    for (int i = 0; i < indexCount; i = i + 3)
    {
        int i1 = ::uPtr< ::app::Uno::Content::Models::IndexArray*>(indices)->GetInt(i);
        int i2 = indices->GetInt(i + 1);
        int i3 = indices->GetInt(i + 2);
        ::app::Uno::Float4 ind_128 = ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(positions)->GetFloat4(i1);
        ::app::Uno::Float3 v1 = ::app::Uno::Float3__New_2(NULL, ind_128.X, ind_128.Y, ind_128.Z);
        ::app::Uno::Float4 ind_129 = positions->GetFloat4(i2);
        ::app::Uno::Float3 v2 = ::app::Uno::Float3__New_2(NULL, ind_129.X, ind_129.Y, ind_129.Z);
        ::app::Uno::Float4 ind_130 = positions->GetFloat4(i3);
        ::app::Uno::Float3 v3 = ::app::Uno::Float3__New_2(NULL, ind_130.X, ind_130.Y, ind_130.Z);
        ::app::Uno::Float4 ind_131 = ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(texcoords)->GetFloat4(i1);
        ::app::Uno::Float2 w1 = ::app::Uno::Float2__New_2(NULL, ind_131.X, ind_131.Y);
        ::app::Uno::Float4 ind_132 = texcoords->GetFloat4(i2);
        ::app::Uno::Float2 w2 = ::app::Uno::Float2__New_2(NULL, ind_132.X, ind_132.Y);
        ::app::Uno::Float4 ind_133 = texcoords->GetFloat4(i3);
        ::app::Uno::Float2 w3 = ::app::Uno::Float2__New_2(NULL, ind_133.X, ind_133.Y);
        float x1 = v2.X - v1.X;
        float x2 = v3.X - v1.Y;
        float y1 = v2.Y - v1.Y;
        float y2 = v3.Y - v1.Y;
        float z1 = v2.Z - v1.Z;
        float z2 = v3.Z - v1.Z;
        float s1 = w2.X - w1.X;
        float s2 = w3.X - w1.X;
        float t1 = w2.Y - w1.Y;
        float t2 = w3.Y - w1.Y;
        float r = 1.0f / ((s1 * t2) - (s2 * t1));
        ::app::Uno::Float3 sdir = ::app::Uno::Float3__New_2(NULL, ((t2 * x1) - (t1 * x2)) * r, ((t2 * y1) - (t1 * y2)) * r, ((t2 * z1) - (t1 * z2)) * r);
        ::app::Uno::Float3 tdir = ::app::Uno::Float3__New_2(NULL, ((s1 * x2) - (s2 * x1)) * r, ((s1 * y2) - (s2 * y1)) * r, ((s1 * z2) - (s2 * z1)) * r);
        ::uPtr< ::uArray*>(tan1)->Item< ::app::Uno::Float3>(i1) = ::app::Uno::Float3__op_Addition_2(NULL, ::uPtr< ::uArray*>(tan1)->Item< ::app::Uno::Float3>(i1), sdir);
        tan1->Item< ::app::Uno::Float3>(i2) = ::app::Uno::Float3__op_Addition_2(NULL, tan1->Item< ::app::Uno::Float3>(i2), sdir);
        tan1->Item< ::app::Uno::Float3>(i3) = ::app::Uno::Float3__op_Addition_2(NULL, tan1->Item< ::app::Uno::Float3>(i3), sdir);
        ::uPtr< ::uArray*>(tan2)->Item< ::app::Uno::Float3>(i1) = ::app::Uno::Float3__op_Addition_2(NULL, ::uPtr< ::uArray*>(tan2)->Item< ::app::Uno::Float3>(i1), tdir);
        tan2->Item< ::app::Uno::Float3>(i2) = ::app::Uno::Float3__op_Addition_2(NULL, tan2->Item< ::app::Uno::Float3>(i2), tdir);
        tan2->Item< ::app::Uno::Float3>(i3) = ::app::Uno::Float3__op_Addition_2(NULL, tan2->Item< ::app::Uno::Float3>(i3), tdir);
    }

    for (int a = 0; a < vertexCount; ++a)
    {
        ::app::Uno::Float4 ind_134 = ::uPtr< ::app::Uno::Content::Models::VertexAttributeArray*>(normals)->GetFloat4(a);
        ::app::Uno::Float3 n = ::app::Uno::Float3__New_2(NULL, ind_134.X, ind_134.Y, ind_134.Z);
        ::app::Uno::Float3 t = ::uPtr< ::uArray*>(tan1)->Item< ::app::Uno::Float3>(a);
        ::uPtr< ::uArray*>(tangents)->Item< ::app::Uno::Float3>(a) = ::app::Uno::Vector__Normalize_1(NULL, ::app::Uno::Float3__op_Subtraction_2(NULL, t, ::app::Uno::Float3__op_Multiply_1(NULL, n, ::app::Uno::Vector__Dot_1(NULL, n, t))));
        float handedndess = (::app::Uno::Vector__Dot_1(NULL, ::app::Uno::Vector__Cross(NULL, n, t), ::uPtr< ::uArray*>(tan2)->Item< ::app::Uno::Float3>(a)) < 0.0f) ? -1.0f : 1.0f;
        ::uPtr< ::uArray*>(binormals)->Item< ::app::Uno::Float3>(a) = ::app::Uno::Float3__op_Multiply_1(NULL, ::app::Uno::Vector__Cross(NULL, tangents->Item< ::app::Uno::Float3>(a), n), handedndess);
    }

    ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray* dict = ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray__New_1(NULL);

    for (::uObject* enum_124 = ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_string_Uno_Content_Models_VertexAttributeArray_::GetEnumerator(::uPtr< ::uObject*>(m->VertexAttributes())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_124)); )
    {
        ::app::Uno::Collections::KeyValuePair__string__Uno_Content_Models_VertexAttributeArray v = ::app::Uno::Collections::IEnumerator__Uno_Collections_KeyValuePair_string_Uno_Content_Models_VertexAttributeArray_::Current(::uPtr< ::uObject*>(enum_124));
        ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray*>(dict)->Item(v.Key(), v.Value());
    }

    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Content_Models_VertexAttributeArray*>(dict)->Item(::uGetConstString("Tangent"), ::app::Uno::Content::Models::VertexAttributeArray__New_1(NULL, tangents));
    dict->Item(::uGetConstString("Binormal"), ::app::Uno::Content::Models::VertexAttributeArray__New_1(NULL, binormals));
    return ::app::Uno::Content::Models::ModelMesh__New_1(NULL, m->Name(), m->PrimitiveType(), dict, m->Indices());
}

}}}}
