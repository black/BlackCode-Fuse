#include <app/Fuse.Entities.Component.h>
#include <app/Fuse.Entities.DefaultMaterial.h>
#include <app/Fuse.Entities.Entity.h>
#include <app/Fuse.Entities.Internal.SceneGraphBuilder.h>
#include <app/Fuse.Entities.Internal.SceneGraphBuilderVisitor.h>
#include <app/Fuse.Entities.Material.h>
#include <app/Fuse.Entities.Mesh.h>
#include <app/Fuse.Entities.MeshRenderer.h>
#include <app/Fuse.Entities.Transform3D.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Transform.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.ICollection__Fuse_Entities_Component.h>
#include <app/Uno.Collections.ICollection__Fuse_Entities_Entity.h>
#include <app/Uno.Collections.ICollection__Fuse_Transform.h>
#include <app/Uno.Collections.IEnumerable__Uno_Content_Models_ModelDrawable.h>
#include <app/Uno.Collections.IEnumerable__Uno_Content_Models_ModelNode.h>
#include <app/Uno.Collections.IEnumerable__Uno_Content_Models_ModelParameter_float4x4_.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Content_Models_ModelDrawable.h>
#include <app/Uno.Collections.IEnumerator__Uno_Content_Models_ModelNode.h>
#include <app/Uno.Collections.IEnumerator__Uno_Content_Models_ModelParameter_float4x4_.h>
#include <app/Uno.Collections.IList__Fuse_Entities_Component.h>
#include <app/Uno.Collections.IList__Fuse_Entities_Entity.h>
#include <app/Uno.Collections.IList__Fuse_Transform.h>
#include <app/Uno.Collections.IListExtensions.h>
#include <app/Uno.Collections.List__Fuse_Entities_Entity.h>
#include <app/Uno.Content.Models.Model.h>
#include <app/Uno.Content.Models.ModelDrawable.h>
#include <app/Uno.Content.Models.ModelNode.h>
#include <app/Uno.Content.Models.ModelParameter__float4x4.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.Matrix.h>
#include <app/Uno.Quaternion.h>

namespace app {
namespace Fuse {
namespace Entities {
namespace Internal {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SceneGraphBuilder__uType* SceneGraphBuilder__typeof()
{
    static ::uStaticStrong<SceneGraphBuilder__uType*> type;
    if (type != NULL) return type;

    type = (SceneGraphBuilder__uType*)::uAllocClassType(sizeof(SceneGraphBuilder__uType), "Fuse.Entities.Internal.SceneGraphBuilder", false, 0, 1, 0);

    type->SetStrongRefs(
        "_visitor", offsetof(SceneGraphBuilder, _visitor));

    type->SetFields(1,
        ::uNewField("_visitor", NULL, offsetof(SceneGraphBuilder, _visitor), ::app::Fuse::Entities::Internal::SceneGraphBuilderVisitor__typeof()));

    type->SetFunctions(11,
        ::uNewFunction("Build", SceneGraphBuilder__Build, 0, false, ::app::Fuse::Entities::Entity__typeof(), ::app::Uno::Content::Models::Model__typeof()),
        ::uNewFunction("CreateMaterial", SceneGraphBuilder__CreateMaterial, 0, false, ::app::Fuse::Entities::Material__typeof()),
        ::uNewFunction("CreateMesh", SceneGraphBuilder__CreateMesh, 0, false, ::app::Fuse::Entities::Mesh__typeof(), ::app::Uno::Content::Models::ModelDrawable__typeof()),
        ::uNewFunction("CreateMeshRenderer", SceneGraphBuilder__CreateMeshRenderer, 0, false, ::app::Fuse::Entities::MeshRenderer__typeof(), ::app::Fuse::Entities::Material__typeof()),
        ::uNewFunction("CreateMeshRenderer", SceneGraphBuilder__CreateMeshRenderer_1, 0, false, ::app::Fuse::Entities::MeshRenderer__typeof(), ::app::Fuse::Entities::Mesh__typeof()),
        ::uNewFunction("CreateNode", SceneGraphBuilder__CreateNode, 0, false, ::app::Fuse::Entities::Entity__typeof(), ::app::Uno::Content::Models::ModelNode__typeof(), ::app::Uno::Bool__typeof()),
        ::uNewFunction("CreateTransform", SceneGraphBuilder__CreateTransform, 0, false, ::app::Fuse::Entities::Transform3D__typeof()),
        ::uNewFunction("IsIdentity", SceneGraphBuilder__IsIdentity, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Float4x4__typeof()),
        ::uNewFunction("MakeMatrix", SceneGraphBuilder__MakeMatrix, 0, true, ::app::Uno::Float4x4__typeof(), ::app::Uno::Collections::IEnumerable__Uno_Content_Models_ModelParameter_float4x4___typeof()),
        ::uNewFunction(".ctor", SceneGraphBuilder__New_1, 0, true, SceneGraphBuilder__typeof(), ::app::Fuse::Entities::Internal::SceneGraphBuilderVisitor__typeof()),
        ::uNewFunction("TryCreateCompositTransform", SceneGraphBuilder__TryCreateCompositTransform, 0, false, ::app::Fuse::Entities::Transform3D__typeof(), ::app::Uno::Content::Models::ModelNode__typeof()));

    ::uRegisterType(type);
    return type;
}

void SceneGraphBuilder___ObjInit(SceneGraphBuilder* __this, ::app::Fuse::Entities::Internal::SceneGraphBuilderVisitor* visitor)
{
    __this->_visitor = (visitor != NULL) ? visitor : ::app::Fuse::Entities::Internal::SceneGraphBuilderVisitor__New_1(NULL);
}

::app::Fuse::Entities::Entity* SceneGraphBuilder__Build(SceneGraphBuilder* __this, ::app::Uno::Content::Models::Model* model)
{
    return __this->CreateNode(::uPtr< ::app::Uno::Content::Models::Model*>(model)->Root(), true);
}

::app::Fuse::Entities::Material* SceneGraphBuilder__CreateMaterial(SceneGraphBuilder* __this)
{
    ::app::Fuse::Entities::DefaultMaterial* m = ::app::Fuse::Entities::DefaultMaterial__New_1(NULL);
    ::uPtr< ::app::Fuse::Entities::Internal::SceneGraphBuilderVisitor*>(__this->_visitor)->Visit_2((::app::Fuse::Entities::Material*)m);
    return (::app::Fuse::Entities::Material*)m;
}

::app::Fuse::Entities::Mesh* SceneGraphBuilder__CreateMesh(SceneGraphBuilder* __this, ::app::Uno::Content::Models::ModelDrawable* dr)
{
    ::app::Fuse::Entities::Mesh* mesh = ::app::Fuse::Entities::Mesh__New_1(NULL, dr);
    ::uPtr< ::app::Fuse::Entities::Internal::SceneGraphBuilderVisitor*>(__this->_visitor)->Visit_4(mesh, dr);
    return mesh;
}

::app::Fuse::Entities::MeshRenderer* SceneGraphBuilder__CreateMeshRenderer(SceneGraphBuilder* __this, ::app::Fuse::Entities::Material* mat)
{
    ::app::Fuse::Entities::MeshRenderer* mr = ::app::Fuse::Entities::MeshRenderer__New_1(NULL);
    ::uPtr< ::app::Fuse::Entities::MeshRenderer*>(mr)->Material(mat);
    ::uPtr< ::app::Fuse::Entities::Internal::SceneGraphBuilderVisitor*>(__this->_visitor)->Visit_5(mr);
    return mr;
}

::app::Fuse::Entities::MeshRenderer* SceneGraphBuilder__CreateMeshRenderer_1(SceneGraphBuilder* __this, ::app::Fuse::Entities::Mesh* mesh)
{
    ::app::Fuse::Entities::MeshRenderer* mr = ::app::Fuse::Entities::MeshRenderer__New_1(NULL);
    ::uPtr< ::app::Fuse::Entities::MeshRenderer*>(mr)->Mesh(mesh);
    ::uPtr< ::app::Fuse::Entities::Internal::SceneGraphBuilderVisitor*>(__this->_visitor)->Visit_5(mr);
    return mr;
}

::app::Fuse::Entities::Entity* SceneGraphBuilder__CreateNode(SceneGraphBuilder* __this, ::app::Uno::Content::Models::ModelNode* node, bool isRoot)
{
    ::app::Fuse::Entities::Entity* entity = ::app::Fuse::Entities::Entity__New_1(NULL);
    ::uPtr< ::app::Fuse::Entities::Internal::SceneGraphBuilderVisitor*>(__this->_visitor)->Push(entity);

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Uno_Content_Models_ModelNode::GetEnumerator(::uPtr< ::uObject*>(::uPtr< ::app::Uno::Content::Models::ModelNode*>(node)->Children())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Uno::Content::Models::ModelNode* child = ::app::Uno::Collections::IEnumerator__Uno_Content_Models_ModelNode::Current(::uPtr< ::uObject*>(enum_123));
        ::app::Uno::Collections::ICollection__Fuse_Entities_Entity::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Entities::Entity*>(entity)->Children()), __this->CreateNode(child, false));
    }

    ::app::Fuse::Entities::Transform3D* transform = __this->TryCreateCompositTransform(node);

    if (transform != NULL)
    {
        ::app::Uno::Collections::ICollection__Fuse_Transform::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Entities::Entity*>(entity)->Transforms()), (::app::Fuse::Transform*)transform);
    }
    else if (isRoot)
    {
        ::app::Uno::Collections::ICollection__Fuse_Transform::Add(::uPtr< ::uObject*>(entity->Transforms()), (::app::Fuse::Transform*)__this->CreateTransform());
    }

    if (isRoot)
    {
        ::app::Uno::Collections::ICollection__Fuse_Entities_Component::Add(::uPtr< ::uObject*>(entity->Components()), (::app::Fuse::Entities::Component*)__this->CreateMeshRenderer(__this->CreateMaterial()));
    }

    for (::uObject* enum_124 = ::app::Uno::Collections::IEnumerable__Uno_Content_Models_ModelDrawable::GetEnumerator(::uPtr< ::uObject*>(node->Drawables())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_124)); )
    {
        ::app::Uno::Content::Models::ModelDrawable* dr = ::app::Uno::Collections::IEnumerator__Uno_Content_Models_ModelDrawable::Current(::uPtr< ::uObject*>(enum_124));
        ::app::Uno::Collections::ICollection__Fuse_Entities_Component::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Entities::Entity*>(entity)->Components()), (::app::Fuse::Entities::Component*)__this->CreateMeshRenderer_1(__this->CreateMesh(dr)));
    }

    ::uPtr< ::app::Fuse::Entities::Internal::SceneGraphBuilderVisitor*>(__this->_visitor)->Pop();
    ::uPtr< ::app::Fuse::Entities::Internal::SceneGraphBuilderVisitor*>(__this->_visitor)->Visit_1(entity, node);
    return entity;
}

::app::Fuse::Entities::Transform3D* SceneGraphBuilder__CreateTransform(SceneGraphBuilder* __this)
{
    ::app::Fuse::Entities::Transform3D* t = ::app::Fuse::Entities::Transform3D__New_1(NULL);
    ::uPtr< ::app::Fuse::Entities::Internal::SceneGraphBuilderVisitor*>(__this->_visitor)->Visit_6(t);
    return t;
}

bool SceneGraphBuilder__IsIdentity(::uStatic* __this, ::app::Uno::Float4x4 mat)
{
    ::app::Uno::Float4x4 id = ::app::Uno::Float4x4__get_Identity(NULL);

    for (int i = 0; i < 4; i++)
    {
        ::app::Uno::Float4 d = ::app::Uno::Float4__op_Subtraction_2(NULL, mat.Item(i), id.Item(i));

        if (::app::Uno::Math__Abs_1(NULL, d.X) > 1e-05f)
        {
            return false;
        }

        if (::app::Uno::Math__Abs_1(NULL, d.Y) > 1e-05f)
        {
            return false;
        }

        if (::app::Uno::Math__Abs_1(NULL, d.Z) > 1e-05f)
        {
            return false;
        }

        if (::app::Uno::Math__Abs_1(NULL, d.W) > 1e-05f)
        {
            return false;
        }
    }

    return true;
}

::app::Uno::Float4x4 SceneGraphBuilder__MakeMatrix(::uStatic* __this, ::uObject* transforms)
{
    ::app::Uno::Float4x4 mat = ::app::Uno::Float4x4__get_Identity(NULL);

    for (::uObject* enum_125 = ::app::Uno::Collections::IEnumerable__Uno_Content_Models_ModelParameter_float4x4_::GetEnumerator(::uPtr< ::uObject*>(transforms)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_125)); )
    {
        ::app::Uno::Content::Models::ModelParameter__float4x4* transform = ::app::Uno::Collections::IEnumerator__Uno_Content_Models_ModelParameter_float4x4_::Current(::uPtr< ::uObject*>(enum_125));
        mat = ::app::Uno::Matrix__Mul_8(NULL, mat, ::uPtr< ::app::Uno::Content::Models::ModelParameter__float4x4*>(transform)->Value());
    }

    return mat;
}

SceneGraphBuilder* SceneGraphBuilder__New_1(::uStatic* __this, ::app::Fuse::Entities::Internal::SceneGraphBuilderVisitor* visitor)
{
    SceneGraphBuilder* inst = (SceneGraphBuilder*)::uAllocObject(sizeof(SceneGraphBuilder), SceneGraphBuilder__typeof());
    inst->_ObjInit(visitor);
    return inst;
}

::app::Fuse::Entities::Transform3D* SceneGraphBuilder__TryCreateCompositTransform(SceneGraphBuilder* __this, ::app::Uno::Content::Models::ModelNode* node)
{
    ::app::Uno::Float4x4 mat = SceneGraphBuilder__MakeMatrix(NULL, ::uPtr< ::app::Uno::Content::Models::ModelNode*>(node)->Transforms());

    if (SceneGraphBuilder__IsIdentity(NULL, mat))
    {
        return NULL;
    }

    ::app::Uno::Float3 scaling = ::app::Uno::Float3();
    ::app::Uno::Float4 rotationQuaternion = ::app::Uno::Float4();
    ::app::Uno::Float3 translation = ::app::Uno::Float3();
    ::app::Uno::Matrix__Decompose(NULL, mat, &scaling, &rotationQuaternion, &translation);
    ::app::Fuse::Entities::Transform3D* t = ::app::Fuse::Entities::Transform3D__New_1(NULL);
    ::uPtr< ::app::Fuse::Entities::Transform3D*>(t)->Position(translation);
    t->RotationDegrees(::app::Uno::Quaternion__ToEulerAngleDegrees(NULL, rotationQuaternion));
    t->Scaling(scaling);
    ::uPtr< ::app::Fuse::Entities::Internal::SceneGraphBuilderVisitor*>(__this->_visitor)->Visit_7(t, node);
    return t;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Entities\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SceneGraphBuilderVisitor__uType* SceneGraphBuilderVisitor__typeof()
{
    static ::uStaticStrong<SceneGraphBuilderVisitor__uType*> type;
    if (type != NULL) return type;

    type = (SceneGraphBuilderVisitor__uType*)::uAllocClassType(sizeof(SceneGraphBuilderVisitor__uType), "Fuse.Entities.Internal.SceneGraphBuilderVisitor", false, 0, 1, 0);

    type->SetStrongRefs(
        "_entities", offsetof(SceneGraphBuilderVisitor, _entities));

    type->SetFields(1,
        ::uNewField("_entities", NULL, offsetof(SceneGraphBuilderVisitor, _entities), ::app::Uno::Collections::List__Fuse_Entities_Entity__typeof()));

    type->SetFunctions(12,
        ::uNewFunction("get_Peek", SceneGraphBuilderVisitor__get_Peek, 0, false, ::app::Fuse::Entities::Entity__typeof()),
        ::uNewFunction(".ctor", SceneGraphBuilderVisitor__New_1, 0, true, SceneGraphBuilderVisitor__typeof()),
        ::uNewFunctionVoid("Pop", SceneGraphBuilderVisitor__Pop, 0, false),
        ::uNewFunctionVoid("Push", SceneGraphBuilderVisitor__Push, 0, false, ::app::Fuse::Entities::Entity__typeof()),
        ::uNewFunctionVoid("Visit", SceneGraphBuilderVisitor__Visit, 0, false, ::app::Fuse::Entities::Entity__typeof()),
        ::uNewFunctionVoid("Visit", SceneGraphBuilderVisitor__Visit_1, 0, false, ::app::Fuse::Entities::Entity__typeof(), ::app::Uno::Content::Models::ModelNode__typeof()),
        ::uNewFunctionVoid("Visit", SceneGraphBuilderVisitor__Visit_2, 0, false, ::app::Fuse::Entities::Material__typeof()),
        ::uNewFunctionVoid("Visit", SceneGraphBuilderVisitor__Visit_3, 0, false, ::app::Fuse::Entities::Material__typeof(), ::app::Uno::Content::Models::ModelNode__typeof()),
        ::uNewFunctionVoid("Visit", SceneGraphBuilderVisitor__Visit_4, 0, false, ::app::Fuse::Entities::Mesh__typeof(), ::app::Uno::Content::Models::ModelDrawable__typeof()),
        ::uNewFunctionVoid("Visit", SceneGraphBuilderVisitor__Visit_5, 0, false, ::app::Fuse::Entities::MeshRenderer__typeof()),
        ::uNewFunctionVoid("Visit", SceneGraphBuilderVisitor__Visit_6, 0, false, ::app::Fuse::Entities::Transform3D__typeof()),
        ::uNewFunctionVoid("Visit", SceneGraphBuilderVisitor__Visit_7, 0, false, ::app::Fuse::Entities::Transform3D__typeof(), ::app::Uno::Content::Models::ModelNode__typeof()));

    ::uRegisterType(type);
    return type;
}

void SceneGraphBuilderVisitor___ObjInit(SceneGraphBuilderVisitor* __this)
{
    __this->_entities = ::app::Uno::Collections::List__Fuse_Entities_Entity__New_1(NULL);
}

::app::Fuse::Entities::Entity* SceneGraphBuilderVisitor__get_Peek(SceneGraphBuilderVisitor* __this)
{
    return (::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entity*>(__this->_entities)->Count() == 0) ? (::app::Fuse::Entities::Entity*)NULL : ::app::Uno::Collections::IListExtensions__Last__Fuse_Entities_Entity(NULL, (::uObject*)__this->_entities);
}

SceneGraphBuilderVisitor* SceneGraphBuilderVisitor__New_1(::uStatic* __this)
{
    SceneGraphBuilderVisitor* inst = (SceneGraphBuilderVisitor*)::uAllocObject(sizeof(SceneGraphBuilderVisitor), SceneGraphBuilderVisitor__typeof());
    inst->_ObjInit();
    return inst;
}

void SceneGraphBuilderVisitor__Pop(SceneGraphBuilderVisitor* __this)
{
    ::app::Uno::Collections::IListExtensions__RemoveLast__Fuse_Entities_Entity(NULL, (::uObject*)__this->_entities);
}

void SceneGraphBuilderVisitor__Push(SceneGraphBuilderVisitor* __this, ::app::Fuse::Entities::Entity* e)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Entities_Entity*>(__this->_entities)->Add(e);
}

void SceneGraphBuilderVisitor__Visit(SceneGraphBuilderVisitor* __this, ::app::Fuse::Entities::Entity* e)
{
}

void SceneGraphBuilderVisitor__Visit_1(SceneGraphBuilderVisitor* __this, ::app::Fuse::Entities::Entity* e, ::app::Uno::Content::Models::ModelNode* n)
{
    __this->Visit(e);
}

void SceneGraphBuilderVisitor__Visit_2(SceneGraphBuilderVisitor* __this, ::app::Fuse::Entities::Material* m)
{
}

void SceneGraphBuilderVisitor__Visit_3(SceneGraphBuilderVisitor* __this, ::app::Fuse::Entities::Material* m, ::app::Uno::Content::Models::ModelNode* n)
{
    __this->Visit_2(m);
}

void SceneGraphBuilderVisitor__Visit_4(SceneGraphBuilderVisitor* __this, ::app::Fuse::Entities::Mesh* m, ::app::Uno::Content::Models::ModelDrawable* d)
{
}

void SceneGraphBuilderVisitor__Visit_5(SceneGraphBuilderVisitor* __this, ::app::Fuse::Entities::MeshRenderer* m)
{
}

void SceneGraphBuilderVisitor__Visit_6(SceneGraphBuilderVisitor* __this, ::app::Fuse::Entities::Transform3D* t)
{
}

void SceneGraphBuilderVisitor__Visit_7(SceneGraphBuilderVisitor* __this, ::app::Fuse::Entities::Transform3D* t, ::app::Uno::Content::Models::ModelNode* n)
{
    __this->Visit_6(t);
}

}}}}
