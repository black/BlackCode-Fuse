// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Entities.Component.h>
#include <Fuse.Entities.DefaultMaterial.h>
#include <Fuse.Entities.Entity.h>
#include <Fuse.Entities.Internal.SceneGraphBuilder.h>
#include <Fuse.Entities.Internal.SceneGraphBuilderVisitor.h>
#include <Fuse.Entities.Material.h>
#include <Fuse.Entities.Mesh.h>
#include <Fuse.Entities.MeshRenderer.h>
#include <Fuse.Entities.Transform3D.h>
#include <Fuse.Node.h>
#include <Fuse.Transform.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.IListExtensions.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Content.Models.Model.h>
#include <Uno.Content.Models.ModelDrawable.h>
#include <Uno.Content.Models.ModelNode.h>
#include <Uno.Content.Models.ModelParameter-1.h>
#include <Uno.Float.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Quaternion.h>
static uType* TYPES[19];

namespace g{
namespace Fuse{
namespace Entities{
namespace Internal{

// C:\ProgramData\Uno\Packages\Fuse.Entities\0.19.3\Internal\$.uno(14)
// -------------------------------------------------------------------

// public sealed class SceneGraphBuilder :14
// {
uType* SceneGraphBuilder_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(SceneGraphBuilder);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Entities.Internal.SceneGraphBuilder", options);
    ::TYPES[0] = ::g::Uno::Content::Models::Model_typeof();
    ::TYPES[1] = ::g::Fuse::Entities::Material_typeof();
    ::TYPES[2] = ::g::Fuse::Entities::MeshRenderer_typeof();
    ::TYPES[3] = ::g::Uno::Content::Models::ModelNode_typeof();
    ::TYPES[4] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Content::Models::ModelNode_typeof());
    ::TYPES[5] = ::g::Fuse::Entities::Entity_typeof();
    ::TYPES[6] = ::g::Fuse::Node_typeof();
    ::TYPES[7] = ::g::Fuse::Transform_typeof();
    ::TYPES[8] = ::g::Fuse::Entities::Component_typeof();
    ::TYPES[9] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Content::Models::ModelDrawable_typeof());
    ::TYPES[10] = ::g::Uno::Float4x4_typeof();
    ::TYPES[11] = ::g::Uno::Float4_typeof();
    ::TYPES[12] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Content::Models::ModelParameter1_typeof()->MakeType(::g::Uno::Float4x4_typeof()));
    ::TYPES[13] = ::g::Uno::Content::Models::ModelParameter1_typeof()->MakeType(::g::Uno::Float4x4_typeof());
    ::TYPES[14] = ::g::Fuse::Entities::Transform3D_typeof();
    type->SetFields(0,
        ::g::Fuse::Entities::Internal::SceneGraphBuilderVisitor_typeof(), offsetof(::g::Fuse::Entities::Internal::SceneGraphBuilder, _visitor), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("Build", NULL, (void*)SceneGraphBuilder__Build_fn, 0, false, ::g::Fuse::Entities::Entity_typeof(), 1, ::g::Uno::Content::Models::Model_typeof()),
        new uFunction(".ctor", NULL, (void*)SceneGraphBuilder__New1_fn, 0, true, SceneGraphBuilder_typeof(), 1, ::g::Fuse::Entities::Internal::SceneGraphBuilderVisitor_typeof()));
    return type;
}

// public SceneGraphBuilder([Fuse.Entities.Internal.SceneGraphBuilderVisitor visitor]) :18
void SceneGraphBuilder__ctor__fn(SceneGraphBuilder* __this, ::g::Fuse::Entities::Internal::SceneGraphBuilderVisitor* visitor)
{
    __this->ctor_(visitor);
}

// public Fuse.Entities.Entity Build(Uno.Content.Models.Model model) :23
void SceneGraphBuilder__Build_fn(SceneGraphBuilder* __this, ::g::Uno::Content::Models::Model* model, ::g::Fuse::Entities::Entity** __retval)
{
    *__retval = __this->Build(model);
}

// private Fuse.Entities.Material CreateMaterial() :79
void SceneGraphBuilder__CreateMaterial_fn(SceneGraphBuilder* __this, ::g::Fuse::Entities::Material** __retval)
{
    *__retval = __this->CreateMaterial();
}

// private Fuse.Entities.Mesh CreateMesh(Uno.Content.Models.ModelDrawable dr) :102
void SceneGraphBuilder__CreateMesh_fn(SceneGraphBuilder* __this, ::g::Uno::Content::Models::ModelDrawable* dr, ::g::Fuse::Entities::Mesh** __retval)
{
    *__retval = __this->CreateMesh(dr);
}

// private Fuse.Entities.MeshRenderer CreateMeshRenderer(Fuse.Entities.Material mat) :86
void SceneGraphBuilder__CreateMeshRenderer_fn(SceneGraphBuilder* __this, ::g::Fuse::Entities::Material* mat, ::g::Fuse::Entities::MeshRenderer** __retval)
{
    *__retval = __this->CreateMeshRenderer(mat);
}

// private Fuse.Entities.MeshRenderer CreateMeshRenderer(Fuse.Entities.Mesh mesh) :94
void SceneGraphBuilder__CreateMeshRenderer1_fn(SceneGraphBuilder* __this, ::g::Fuse::Entities::Mesh* mesh, ::g::Fuse::Entities::MeshRenderer** __retval)
{
    *__retval = __this->CreateMeshRenderer1(mesh);
}

// private Fuse.Entities.Entity CreateNode(Uno.Content.Models.ModelNode node, [bool isRoot]) :28
void SceneGraphBuilder__CreateNode_fn(SceneGraphBuilder* __this, ::g::Uno::Content::Models::ModelNode* node, bool* isRoot, ::g::Fuse::Entities::Entity** __retval)
{
    *__retval = __this->CreateNode(node, *isRoot);
}

// private Fuse.Entities.Transform3D CreateTransform() :109
void SceneGraphBuilder__CreateTransform_fn(SceneGraphBuilder* __this, ::g::Fuse::Entities::Transform3D** __retval)
{
    *__retval = __this->CreateTransform();
}

// private static bool IsIdentity(float4x4 mat) :172
void SceneGraphBuilder__IsIdentity_fn(::g::Uno::Float4x4* mat, bool* __retval)
{
    *__retval = SceneGraphBuilder::IsIdentity(*mat);
}

// private static float4x4 MakeMatrix(Uno.Collections.IEnumerable<Uno.Content.Models.ModelParameter<float4x4>> transforms) :137
void SceneGraphBuilder__MakeMatrix_fn(uObject* transforms, ::g::Uno::Float4x4* __retval)
{
    *__retval = SceneGraphBuilder::MakeMatrix(transforms);
}

// public SceneGraphBuilder New([Fuse.Entities.Internal.SceneGraphBuilderVisitor visitor]) :18
void SceneGraphBuilder__New1_fn(::g::Fuse::Entities::Internal::SceneGraphBuilderVisitor* visitor, SceneGraphBuilder** __retval)
{
    *__retval = SceneGraphBuilder::New1(visitor);
}

// private Fuse.Entities.Transform3D TryCreateCompositTransform(Uno.Content.Models.ModelNode node) :117
void SceneGraphBuilder__TryCreateCompositTransform_fn(SceneGraphBuilder* __this, ::g::Uno::Content::Models::ModelNode* node, ::g::Fuse::Entities::Transform3D** __retval)
{
    *__retval = __this->TryCreateCompositTransform(node);
}

// public SceneGraphBuilder([Fuse.Entities.Internal.SceneGraphBuilderVisitor visitor]) [instance] :18
void SceneGraphBuilder::ctor_(::g::Fuse::Entities::Internal::SceneGraphBuilderVisitor* visitor)
{
    _visitor = ((visitor != NULL) ? visitor : (::g::Fuse::Entities::Internal::SceneGraphBuilderVisitor*)::g::Fuse::Entities::Internal::SceneGraphBuilderVisitor::New1());
}

// public Fuse.Entities.Entity Build(Uno.Content.Models.Model model) [instance] :23
::g::Fuse::Entities::Entity* SceneGraphBuilder::Build(::g::Uno::Content::Models::Model* model)
{
    return CreateNode(uPtr(model)->Root(), true);
}

// private Fuse.Entities.Material CreateMaterial() [instance] :79
::g::Fuse::Entities::Material* SceneGraphBuilder::CreateMaterial()
{
    ::g::Fuse::Entities::DefaultMaterial* m = ::g::Fuse::Entities::DefaultMaterial::New1();
    uPtr(_visitor)->Visit2(m);
    return m;
}

// private Fuse.Entities.Mesh CreateMesh(Uno.Content.Models.ModelDrawable dr) [instance] :102
::g::Fuse::Entities::Mesh* SceneGraphBuilder::CreateMesh(::g::Uno::Content::Models::ModelDrawable* dr)
{
    ::g::Fuse::Entities::Mesh* mesh = ::g::Fuse::Entities::Mesh::New1(dr);
    uPtr(_visitor)->Visit4(mesh, dr);
    return mesh;
}

// private Fuse.Entities.MeshRenderer CreateMeshRenderer(Fuse.Entities.Material mat) [instance] :86
::g::Fuse::Entities::MeshRenderer* SceneGraphBuilder::CreateMeshRenderer(::g::Fuse::Entities::Material* mat)
{
    ::g::Fuse::Entities::MeshRenderer* mr = ::g::Fuse::Entities::MeshRenderer::New1();
    mr->Material(mat);
    uPtr(_visitor)->Visit5(mr);
    return mr;
}

// private Fuse.Entities.MeshRenderer CreateMeshRenderer(Fuse.Entities.Mesh mesh) [instance] :94
::g::Fuse::Entities::MeshRenderer* SceneGraphBuilder::CreateMeshRenderer1(::g::Fuse::Entities::Mesh* mesh)
{
    ::g::Fuse::Entities::MeshRenderer* mr = ::g::Fuse::Entities::MeshRenderer::New1();
    mr->Mesh(mesh);
    uPtr(_visitor)->Visit5(mr);
    return mr;
}

// private Fuse.Entities.Entity CreateNode(Uno.Content.Models.ModelNode node, [bool isRoot]) [instance] :28
::g::Fuse::Entities::Entity* SceneGraphBuilder::CreateNode(::g::Uno::Content::Models::ModelNode* node, bool isRoot)
{
    ::g::Uno::Content::Models::ModelNode* ret5;
    ::g::Uno::Content::Models::ModelDrawable* ret6;
    ::g::Fuse::Entities::Entity* entity = ::g::Fuse::Entities::Entity::New1();
    uPtr(_visitor)->Push(entity);

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(node)->Children()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[3/*Uno.Content.Models.ModelNode*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Uno::Content::Models::ModelNode* child = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[4/*Uno.Collections.IEnumerator<Uno.Content.Models.ModelNode>*/]), &ret5), ret5);
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(entity)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[5/*Fuse.Entities.Entity*/])), CreateNode(child, false));
    }

    ::g::Fuse::Entities::Transform3D* transform = TryCreateCompositTransform(node);

    if (transform != NULL)
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(entity->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Transform*/])), transform);
    else if (isRoot)
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(entity->Transforms()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[7/*Fuse.Transform*/])), CreateTransform());

    if (isRoot)
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(entity->Components()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[8/*Fuse.Entities.Component*/])), CreateMeshRenderer(CreateMaterial()));

    for (uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(node->Drawables()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Content::Models::ModelDrawable_typeof()))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Uno::Content::Models::ModelDrawable* dr = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[9/*Uno.Collections.IEnumerator<Uno.Content.Models.ModelDrawable>*/]), &ret6), ret6);
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(entity)->Components()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[8/*Fuse.Entities.Component*/])), CreateMeshRenderer1(CreateMesh(dr)));
    }

    uPtr(_visitor)->Pop();
    uPtr(_visitor)->Visit1(entity, node);
    return entity;
}

// private Fuse.Entities.Transform3D CreateTransform() [instance] :109
::g::Fuse::Entities::Transform3D* SceneGraphBuilder::CreateTransform()
{
    ::g::Fuse::Entities::Transform3D* t = ::g::Fuse::Entities::Transform3D::New1();
    uPtr(_visitor)->Visit6(t);
    return t;
}

// private Fuse.Entities.Transform3D TryCreateCompositTransform(Uno.Content.Models.ModelNode node) [instance] :117
::g::Fuse::Entities::Transform3D* SceneGraphBuilder::TryCreateCompositTransform(::g::Uno::Content::Models::ModelNode* node)
{
    ::g::Uno::Float4x4 mat = SceneGraphBuilder::MakeMatrix(uPtr(node)->Transforms());

    if (SceneGraphBuilder::IsIdentity(mat))
        return NULL;

    ::g::Uno::Float3 scaling;
    ::g::Uno::Float4 rotationQuaternion;
    ::g::Uno::Float3 translation;
    ::g::Uno::Matrix::Decompose(mat, &scaling, &rotationQuaternion, &translation);
    ::g::Fuse::Entities::Transform3D* t = ::g::Fuse::Entities::Transform3D::New1();
    t->Position(translation);
    t->RotationDegrees(::g::Uno::Quaternion::ToEulerAngleDegrees(rotationQuaternion));
    t->Scaling(scaling);
    uPtr(_visitor)->Visit7(t, node);
    return t;
}

// private static bool IsIdentity(float4x4 mat) [static] :172
bool SceneGraphBuilder::IsIdentity(::g::Uno::Float4x4 mat)
{
    ::g::Uno::Float4x4 id = ::g::Uno::Float4x4__Identity();

    for (int i = 0; i < 4; i++)
    {
        ::g::Uno::Float4 d = ::g::Uno::Float4__op_Subtraction2(mat.Item(i), id.Item(i));

        if (::g::Uno::Math::Abs1(d.X) > 1e-05f)
            return false;

        if (::g::Uno::Math::Abs1(d.Y) > 1e-05f)
            return false;

        if (::g::Uno::Math::Abs1(d.Z) > 1e-05f)
            return false;

        if (::g::Uno::Math::Abs1(d.W) > 1e-05f)
            return false;
    }

    return true;
}

// private static float4x4 MakeMatrix(Uno.Collections.IEnumerable<Uno.Content.Models.ModelParameter<float4x4>> transforms) [static] :137
::g::Uno::Float4x4 SceneGraphBuilder::MakeMatrix(uObject* transforms)
{
    ::g::Uno::Content::Models::ModelParameter1* ret7;
    ::g::Uno::Float4x4 ret8;
    ::g::Uno::Float4x4 mat = ::g::Uno::Float4x4__Identity();

    for (uObject* enum3 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(transforms), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[13/*Uno.Content.Models.ModelParameter<float4x4>*/]))); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum3), ::g::Uno::Collections::IEnumerator_typeof())); )
    {
        ::g::Uno::Content::Models::ModelParameter1* transform = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum3), ::TYPES[12/*Uno.Collections.IEnumerator<Uno.Content.Models.ModelParameter<float4x4>>*/]), &ret7), ret7);
        mat = ::g::Uno::Matrix::Mul8(mat, (::g::Uno::Content::Models::ModelParameter1__get_Value_fn(uPtr(transform), &ret8), ret8));
    }

    return mat;
}

// public SceneGraphBuilder New([Fuse.Entities.Internal.SceneGraphBuilderVisitor visitor]) [static] :18
SceneGraphBuilder* SceneGraphBuilder::New1(::g::Fuse::Entities::Internal::SceneGraphBuilderVisitor* visitor)
{
    SceneGraphBuilder* obj4 = (SceneGraphBuilder*)uNew(SceneGraphBuilder_typeof());
    obj4->ctor_(visitor);
    return obj4;
}
// }

// C:\ProgramData\Uno\Packages\Fuse.Entities\0.19.3\Internal\$.uno(200)
// --------------------------------------------------------------------

// public sealed class SceneGraphBuilderVisitor :200
// {
uType* SceneGraphBuilderVisitor_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(SceneGraphBuilderVisitor);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Entities.Internal.SceneGraphBuilderVisitor", options);
    type->fp_ctor_ = (void*)SceneGraphBuilderVisitor__New1_fn;
    ::TYPES[15] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Entities::Entity_typeof());
    ::TYPES[16] = ::g::Uno::Collections::IListExtensions_typeof()->MakeMethod(1, ::g::Fuse::Entities::Entity_typeof());
    ::TYPES[17] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Entities::Entity_typeof());
    ::TYPES[5] = ::g::Fuse::Entities::Entity_typeof();
    ::TYPES[18] = ::g::Uno::Collections::IListExtensions_typeof()->MakeMethod(1, ::g::Fuse::Entities::Entity_typeof());
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Entities::Entity_typeof()), offsetof(::g::Fuse::Entities::Internal::SceneGraphBuilderVisitor, _entities), 0);
    type->Reflection.SetFunctions(12,
        new uFunction(".ctor", NULL, (void*)SceneGraphBuilderVisitor__New1_fn, 0, true, SceneGraphBuilderVisitor_typeof(), 0),
        new uFunction("get_Peek", NULL, (void*)SceneGraphBuilderVisitor__get_Peek_fn, 0, false, ::g::Fuse::Entities::Entity_typeof(), 0),
        new uFunction("Pop", NULL, (void*)SceneGraphBuilderVisitor__Pop_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Push", NULL, (void*)SceneGraphBuilderVisitor__Push_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Entities::Entity_typeof()),
        new uFunction("Visit", NULL, (void*)SceneGraphBuilderVisitor__Visit_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Entities::Entity_typeof()),
        new uFunction("Visit", NULL, (void*)SceneGraphBuilderVisitor__Visit1_fn, 0, false, uVoid_typeof(), 2, ::g::Fuse::Entities::Entity_typeof(), ::g::Uno::Content::Models::ModelNode_typeof()),
        new uFunction("Visit", NULL, (void*)SceneGraphBuilderVisitor__Visit2_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Entities::Material_typeof()),
        new uFunction("Visit", NULL, (void*)SceneGraphBuilderVisitor__Visit3_fn, 0, false, uVoid_typeof(), 2, ::g::Fuse::Entities::Material_typeof(), ::g::Uno::Content::Models::ModelNode_typeof()),
        new uFunction("Visit", NULL, (void*)SceneGraphBuilderVisitor__Visit4_fn, 0, false, uVoid_typeof(), 2, ::g::Fuse::Entities::Mesh_typeof(), ::g::Uno::Content::Models::ModelDrawable_typeof()),
        new uFunction("Visit", NULL, (void*)SceneGraphBuilderVisitor__Visit5_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Entities::MeshRenderer_typeof()),
        new uFunction("Visit", NULL, (void*)SceneGraphBuilderVisitor__Visit6_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Entities::Transform3D_typeof()),
        new uFunction("Visit", NULL, (void*)SceneGraphBuilderVisitor__Visit7_fn, 0, false, uVoid_typeof(), 2, ::g::Fuse::Entities::Transform3D_typeof(), ::g::Uno::Content::Models::ModelNode_typeof()));
    return type;
}

// public generated SceneGraphBuilderVisitor() :200
void SceneGraphBuilderVisitor__ctor__fn(SceneGraphBuilderVisitor* __this)
{
    __this->ctor_();
}

// public generated SceneGraphBuilderVisitor New() :200
void SceneGraphBuilderVisitor__New1_fn(SceneGraphBuilderVisitor** __retval)
{
    *__retval = SceneGraphBuilderVisitor::New1();
}

// public Fuse.Entities.Entity get_Peek() :206
void SceneGraphBuilderVisitor__get_Peek_fn(SceneGraphBuilderVisitor* __this, ::g::Fuse::Entities::Entity** __retval)
{
    *__retval = __this->Peek();
}

// public void Pop() :205
void SceneGraphBuilderVisitor__Pop_fn(SceneGraphBuilderVisitor* __this)
{
    __this->Pop();
}

// public void Push(Fuse.Entities.Entity e) :204
void SceneGraphBuilderVisitor__Push_fn(SceneGraphBuilderVisitor* __this, ::g::Fuse::Entities::Entity* e)
{
    __this->Push(e);
}

// public void Visit(Fuse.Entities.Entity e) :208
void SceneGraphBuilderVisitor__Visit_fn(SceneGraphBuilderVisitor* __this, ::g::Fuse::Entities::Entity* e)
{
    __this->Visit(e);
}

// public void Visit(Fuse.Entities.Entity e, Uno.Content.Models.ModelNode n) :209
void SceneGraphBuilderVisitor__Visit1_fn(SceneGraphBuilderVisitor* __this, ::g::Fuse::Entities::Entity* e, ::g::Uno::Content::Models::ModelNode* n)
{
    __this->Visit1(e, n);
}

// public void Visit(Fuse.Entities.Material m) :214
void SceneGraphBuilderVisitor__Visit2_fn(SceneGraphBuilderVisitor* __this, ::g::Fuse::Entities::Material* m)
{
    __this->Visit2(m);
}

// public void Visit(Fuse.Entities.Material m, Uno.Content.Models.ModelNode n) :215
void SceneGraphBuilderVisitor__Visit3_fn(SceneGraphBuilderVisitor* __this, ::g::Fuse::Entities::Material* m, ::g::Uno::Content::Models::ModelNode* n)
{
    __this->Visit3(m, n);
}

// public void Visit(Fuse.Entities.Mesh m, Uno.Content.Models.ModelDrawable d) :218
void SceneGraphBuilderVisitor__Visit4_fn(SceneGraphBuilderVisitor* __this, ::g::Fuse::Entities::Mesh* m, ::g::Uno::Content::Models::ModelDrawable* d)
{
    __this->Visit4(m, d);
}

// public void Visit(Fuse.Entities.MeshRenderer m) :217
void SceneGraphBuilderVisitor__Visit5_fn(SceneGraphBuilderVisitor* __this, ::g::Fuse::Entities::MeshRenderer* m)
{
    __this->Visit5(m);
}

// public void Visit(Fuse.Entities.Transform3D t) :211
void SceneGraphBuilderVisitor__Visit6_fn(SceneGraphBuilderVisitor* __this, ::g::Fuse::Entities::Transform3D* t)
{
    __this->Visit6(t);
}

// public void Visit(Fuse.Entities.Transform3D t, Uno.Content.Models.ModelNode n) :212
void SceneGraphBuilderVisitor__Visit7_fn(SceneGraphBuilderVisitor* __this, ::g::Fuse::Entities::Transform3D* t, ::g::Uno::Content::Models::ModelNode* n)
{
    __this->Visit7(t, n);
}

// public generated SceneGraphBuilderVisitor() [instance] :200
void SceneGraphBuilderVisitor::ctor_()
{
    _entities = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[15/*Uno.Collections.List<Fuse.Entities.Entity>*/]));
}

// public Fuse.Entities.Entity get_Peek() [instance] :206
::g::Fuse::Entities::Entity* SceneGraphBuilderVisitor::Peek()
{
    ::g::Fuse::Entities::Entity* ret3;
    return (uPtr(_entities)->Count() == 0) ? uCast< ::g::Fuse::Entities::Entity*>(NULL, ::TYPES[5/*Fuse.Entities.Entity*/]) : (::g::Uno::Collections::IListExtensions__Last_fn(::TYPES[18/*Uno.Collections.IListExtensions.Last<Fuse.Entities.Entity>*/], (uObject*)_entities, &ret3), ret3);
}

// public void Pop() [instance] :205
void SceneGraphBuilderVisitor::Pop()
{
    ::g::Fuse::Entities::Entity* ret2;
    ::g::Uno::Collections::IListExtensions__RemoveLast_fn(::TYPES[16/*Uno.Collections.IListExtensions.RemoveLast<Fuse.Entities.Entity>*/], (uObject*)_entities, &ret2);
}

// public void Push(Fuse.Entities.Entity e) [instance] :204
void SceneGraphBuilderVisitor::Push(::g::Fuse::Entities::Entity* e)
{
    ::g::Uno::Collections::List__Add_fn(uPtr(_entities), e);
}

// public void Visit(Fuse.Entities.Entity e) [instance] :208
void SceneGraphBuilderVisitor::Visit(::g::Fuse::Entities::Entity* e)
{
}

// public void Visit(Fuse.Entities.Entity e, Uno.Content.Models.ModelNode n) [instance] :209
void SceneGraphBuilderVisitor::Visit1(::g::Fuse::Entities::Entity* e, ::g::Uno::Content::Models::ModelNode* n)
{
    Visit(e);
}

// public void Visit(Fuse.Entities.Material m) [instance] :214
void SceneGraphBuilderVisitor::Visit2(::g::Fuse::Entities::Material* m)
{
}

// public void Visit(Fuse.Entities.Material m, Uno.Content.Models.ModelNode n) [instance] :215
void SceneGraphBuilderVisitor::Visit3(::g::Fuse::Entities::Material* m, ::g::Uno::Content::Models::ModelNode* n)
{
    Visit2(m);
}

// public void Visit(Fuse.Entities.Mesh m, Uno.Content.Models.ModelDrawable d) [instance] :218
void SceneGraphBuilderVisitor::Visit4(::g::Fuse::Entities::Mesh* m, ::g::Uno::Content::Models::ModelDrawable* d)
{
}

// public void Visit(Fuse.Entities.MeshRenderer m) [instance] :217
void SceneGraphBuilderVisitor::Visit5(::g::Fuse::Entities::MeshRenderer* m)
{
}

// public void Visit(Fuse.Entities.Transform3D t) [instance] :211
void SceneGraphBuilderVisitor::Visit6(::g::Fuse::Entities::Transform3D* t)
{
}

// public void Visit(Fuse.Entities.Transform3D t, Uno.Content.Models.ModelNode n) [instance] :212
void SceneGraphBuilderVisitor::Visit7(::g::Fuse::Entities::Transform3D* t, ::g::Uno::Content::Models::ModelNode* n)
{
    Visit6(t);
}

// public generated SceneGraphBuilderVisitor New() [static] :200
SceneGraphBuilderVisitor* SceneGraphBuilderVisitor::New1()
{
    SceneGraphBuilderVisitor* obj1 = (SceneGraphBuilderVisitor*)uNew(SceneGraphBuilderVisitor_typeof());
    obj1->ctor_();
    return obj1;
}
// }

}}}} // ::g::Fuse::Entities::Internal
